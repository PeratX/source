

signed int __fastcall IntArrayTag::getId(IntArrayTag *this)
{
  return 11;
}


void __fastcall IntArrayTag::copy(IntArrayTag *this, int a2)
{
  int v2; // r7@1
  IntArrayTag *v3; // r8@1
  __int64 v4; // kr00_8@1
  void *v5; // r5@2
  _DWORD *v6; // r7@4
  int v7; // r1@4
  void *v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  int v11; // [sp+4h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v11);
  v4 = *(_QWORD *)(v2 + 4);
  if ( HIDWORD(v4) )
  {
    v5 = operator new[](HIDWORD(v4));
    _aeabi_memclr(v5, HIDWORD(v4));
    _aeabi_memcpy(v5, *(const char **)(v2 + 12), HIDWORD(v4));
  }
  else
    v5 = 0;
  v6 = operator new(0x10u);
  Tag::Tag(v6);
  *v6 = &off_26E903C;
  *(_QWORD *)(v6 + 1) = v4;
  v7 = v11;
  v6[3] = v5;
  v8 = (void *)(v7 - 12);
  *(_DWORD *)v3 = v6;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall IntArrayTag::~IntArrayTag(IntArrayTag *this)
{
  IntArrayTag::~IntArrayTag(this);
}


int __fastcall IntArrayTag::load(IntArrayTag *this, IDataInput *a2)
{
  IDataInput *v2; // r4@1
  IntArrayTag *v3; // r11@1
  int result; // r0@1
  unsigned int v5; // r9@1
  int v6; // r7@4
  void *v7; // r8@5
  void *v8; // r0@5
  int v9; // r8@7
  unsigned int v10; // r5@7
  unsigned int v11; // r0@9
  unsigned int v12; // r0@10
  int v13; // r7@12
  void *v14; // r6@13
  void *v15; // r0@13

  v2 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  v5 = result;
  if ( result >= 1 )
  {
    if ( (unsigned int)result >= 0x1000 )
      result = 4096;
    v6 = 4 * result;
    *((_DWORD *)v3 + 1) = result;
    *((_DWORD *)v3 + 2) = 4 * result;
    if ( 4 * result )
    {
      v7 = operator new[](4 * result);
      _aeabi_memclr(v7, v6);
      v8 = (void *)*((_DWORD *)v3 + 3);
      *((_DWORD *)v3 + 3) = v7;
      if ( v8 )
        operator delete[](v8);
    }
    v9 = *((_DWORD *)v3 + 3);
    v10 = 0;
    do
      result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 44))(v2);
      if ( !result )
        break;
      v11 = *((_DWORD *)v3 + 1);
      if ( v10 >= v11 )
      {
        v12 = v11 + 4096;
        if ( v5 < v12 )
          v12 = v5;
        v13 = 4 * v12;
        *((_DWORD *)v3 + 1) = v12;
        *((_DWORD *)v3 + 2) = 4 * v12;
        if ( 0 != 4 * v12 )
        {
          v14 = operator new[](4 * v12);
          _aeabi_memclr(v14, v13);
          v15 = (void *)*((_DWORD *)v3 + 3);
          *((_DWORD *)v3 + 3) = v14;
          if ( v15 )
            operator delete[](v15);
        }
      }
      result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 32))(v2);
      *(_DWORD *)(v9 + 4 * v10++) = result;
    while ( v10 < v5 );
  }
  return result;
}


unsigned int __fastcall IntArrayTag::write(IntArrayTag *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  IntArrayTag *v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r6@2

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)a2 + 32))(a2, *((_DWORD *)this + 1));
  result = *((_DWORD *)v3 + 1);
  if ( result )
  {
    v5 = 0;
    do
    {
      (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 32))(
        v2,
        *(_DWORD *)(*((_DWORD *)v3 + 3) + 4 * v5++));
      result = *((_DWORD *)v3 + 1);
    }
    while ( v5 < result );
  }
  return result;
}


void __fastcall IntArrayTag::copy(IntArrayTag *this, int a2)
{
  IntArrayTag::copy(this, a2);
}


_DWORD *__fastcall IntArrayTag::toString(IntArrayTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r1@1
  char *v5; // r0@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  void **v11; // [sp+4h] [bp-D4h]@1
  int v12; // [sp+8h] [bp-D0h]@2
  void **v13; // [sp+Ch] [bp-CCh]@1
  void **v14; // [sp+10h] [bp-C8h]@1
  int v15; // [sp+2Ch] [bp-ACh]@2
  int v16; // [sp+34h] [bp-A4h]@1
  int v17; // [sp+38h] [bp-A0h]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v11, 24);
  sub_21CBF38((char *)&v13, (int)"[", 1);
  v4 = *(_DWORD *)(v2 + 4);
  v5 = sub_21CC440((char *)&v13);
  sub_21CBF38(v5, (int)" ints]", 6);
  sub_21CFED8(v3, (int)&v14);
  v6 = off_26D3F84;
  v11 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v11) = off_26D3F80[0];
  v13 = v6;
  v14 = &off_27734E8;
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v14 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v15);
  v11 = (void **)off_26D3F68;
  *(void ***)((char *)&v11 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v12 = 0;
  return sub_21B6560(&v17);
}


_DWORD *__fastcall IntArrayTag::IntArrayTag(_DWORD *a1, int a2, int a3)
{
  int v3; // r4@1
  _DWORD *result; // r0@1
  int v5; // r1@1

  v3 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E903C;
  *(_QWORD *)(result + 1) = *(_QWORD *)v3;
  v5 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  result[3] = v5;
  return result;
}


IntArrayTag *__fastcall IntArrayTag::~IntArrayTag(IntArrayTag *this)
{
  IntArrayTag *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E903C;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete[](v2);
  *((_DWORD *)v1 + 3) = 0;
  return v1;
}


void __fastcall IntArrayTag::~IntArrayTag(IntArrayTag *this)
{
  IntArrayTag *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E903C;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    operator delete[](v2);
  j_j_j__ZdlPv_5((void *)v1);
}


_DWORD *__fastcall IntArrayTag::IntArrayTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *(_QWORD *)result = (unsigned int)&off_26E903C;
  result[2] = 0;
  result[3] = 0;
  return result;
}


signed int __fastcall IntArrayTag::equals(IntArrayTag *this, const Tag *a2)
{
  const Tag *v2; // r4@1
  IntArrayTag *v3; // r5@1
  size_t v4; // r2@2
  int v5; // r1@4
  signed int result; // r0@4

  v2 = a2;
  v3 = this;
  if ( Tag::equals(this, a2) != 1 || (v4 = *((_DWORD *)v2 + 2), v4 != *((_DWORD *)v3 + 2)) )
  {
    result = 0;
  }
  else if ( v4 )
    v5 = memcmp(*((const void **)v2 + 3), *((const void **)v3 + 3), v4);
    if ( !v5 )
      result = 1;
  else
    result = 1;
  return result;
}
