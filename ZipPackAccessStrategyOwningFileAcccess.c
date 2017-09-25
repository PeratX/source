

_DWORD *__fastcall ZipPackAccessStrategyOwningFileAcccess::ZipPackAccessStrategyOwningFileAcccess(_DWORD *a1, int *a2, int *a3, int *a4)
{
  int *v4; // r4@1
  _DWORD *result; // r0@1
  int v6; // r1@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r2@4

  v4 = a2;
  result = ZipPackAccessStrategy::ZipPackAccessStrategy(a1, *a2, a3, a4);
  *result = &off_26EAD24;
  result[22] = *v4;
  v6 = v4[1];
  result[23] = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  return result;
}


unsigned int *__fastcall ZipPackAccessStrategyOwningFileAcccess::clone(ZipPackAccessStrategyOwningFileAcccess *this, int a2)
{
  ZipPackAccessStrategyOwningFileAcccess *v2; // r4@1
  int v3; // r6@1
  _DWORD *v4; // r5@1
  unsigned int *result; // r0@1
  unsigned int v6; // r1@4

  v2 = this;
  v3 = a2;
  v4 = operator new(0x60u);
  ZipPackAccessStrategy::ZipPackAccessStrategy((int)v4, v3);
  *v4 = &off_26EAD24;
  v4[22] = *(_DWORD *)(v3 + 88);
  result = *(unsigned int **)(v3 + 92);
  v4[23] = result;
  if ( !result )
    goto LABEL_7;
  ++result;
  if ( !&pthread_create )
  {
    ++*result;
LABEL_7:
    *(_DWORD *)v2 = v4;
    return result;
  }
  __dmb();
  do
    v6 = __ldrex(result);
  while ( __strex(v6 + 1, result) );
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess(ZipPackAccessStrategyOwningFileAcccess *this)
{
  ZipPackAccessStrategy *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26EAD24;
  v2 = *((_DWORD *)this + 23);
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
  ZipPackAccessStrategy::~ZipPackAccessStrategy(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


ZipPackAccessStrategy *__fastcall ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess(ZipPackAccessStrategyOwningFileAcccess *this)
{
  ZipPackAccessStrategy *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26EAD24;
  v2 = *((_DWORD *)this + 23);
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
  return j_j_j__ZN21ZipPackAccessStrategyD2Ev_0(v1);
}


void __fastcall ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess(ZipPackAccessStrategyOwningFileAcccess *this)
{
  ZipPackAccessStrategyOwningFileAcccess::~ZipPackAccessStrategyOwningFileAcccess(this);
}
