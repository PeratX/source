

unsigned int *__fastcall AttributeBuff::setValueAmplifier(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 28);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 28);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 28) = v5;
  }
  return result;
}


int __fastcall AttributeBuff::setAmplificationAmount(int result, int a2, float a3)
{
  *(float *)(result + 40) = a3;
  *(_DWORD *)(result + 44) = a2;
  return result;
}


signed int __fastcall AttributeBuff::buffTypeToDamageCause(unsigned int a1)
{
  signed int result; // r0@2

  if ( a1 <= 9 )
    result = dword_262DF80[a1];
  else
    result = -1;
  return result;
}


void __fastcall AttributeBuff::~AttributeBuff(AttributeBuff *this)
{
  AttributeBuff::~AttributeBuff(this);
}


int __fastcall AttributeBuff::setId(int result, unsigned int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}


int __fastcall AttributeBuff::AttributeBuff(int result, int a2, int a3, int a4)
{
  int v4; // r1@1

  *(_DWORD *)result = &off_26EC408;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a4;
  *(_DWORD *)(result + 16) = -1;
  *(_DWORD *)(result + 20) = -1;
  v4 = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 40) = 1065353216;
  *(_DWORD *)(result + 44) = 0;
  *(_QWORD *)(result + 48) = *(_QWORD *)(&a3 - 1);
  return result;
}


unsigned int *__fastcall AttributeBuff::setDurationAmplifier(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 32) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 36);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 36);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 36) = v5;
  }
  return result;
}


void __fastcall AttributeBuff::~AttributeBuff(AttributeBuff *this)
{
  AttributeBuff *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r5@15
  unsigned int *v8; // r1@16
  unsigned int v9; // r0@18
  unsigned int *v10; // r6@22
  unsigned int v11; // r0@24

  v1 = this;
  *(_DWORD *)this = &off_26EC408;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 7);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      v10 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall AttributeBuff::setSource(__int64 this)
{
  int v1; // r4@1

  v1 = this;
  if ( HIDWORD(this) )
  {
    this = *(_QWORD *)Entity::getUniqueID((Entity *)HIDWORD(this));
    *(_QWORD *)(v1 + 16) = this;
  }
  return this;
}


int __fastcall AttributeBuff::getInfo(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = *(_DWORD *)(a2 + 16);
  v5 = *(_DWORD *)(a2 + 20);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


int __fastcall AttributeBuff::getAmount(AttributeBuff *this)
{
  int v1; // r3@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 6);
  if ( v1 )
    result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v1 + 8))(
               *((_DWORD *)this + 6),
               *((_QWORD *)this + 5) >> 32,
               *((_QWORD *)this + 5));
  else
    result = *((_DWORD *)this + 1);
  return result;
}


int __fastcall AttributeBuff::setOperand(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}
