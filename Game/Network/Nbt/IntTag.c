

_DWORD *__fastcall IntTag::IntTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *(_QWORD *)result = (unsigned int)&off_26E9078;
  return result;
}


int __fastcall IntTag::load(IntTag *this, IDataInput *a2)
{
  IntTag *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  *((_DWORD *)v2 + 1) = result;
  return result;
}


void __fastcall IntTag::copy(IntTag *this, int a2)
{
  IntTag::copy(this, a2);
}


void __fastcall IntTag::copy(IntTag *this, int a2)
{
  int v2; // r6@1
  IntTag *v3; // r4@1
  _DWORD *v4; // r5@1
  int v5; // r6@1
  int v6; // r1@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v10);
  v4 = operator new(8u);
  v5 = *(_DWORD *)(v2 + 4);
  Tag::Tag(v4);
  *v4 = &off_26E9078;
  v4[1] = v5;
  v6 = v10;
  *(_DWORD *)v3 = v4;
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
}


signed int __fastcall IntTag::getId(IntTag *this)
{
  return 3;
}


_DWORD *__fastcall IntTag::toString(IntTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  void **v4; // r0@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  void **v9; // [sp+0h] [bp-D0h]@1
  int v10; // [sp+4h] [bp-CCh]@2
  void **v11; // [sp+8h] [bp-C8h]@1
  void **v12; // [sp+Ch] [bp-C4h]@1
  int v13; // [sp+28h] [bp-A8h]@2
  int v14; // [sp+30h] [bp-A0h]@1
  int v15; // [sp+34h] [bp-9Ch]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v9, 24);
  sub_21CC43C(&v11, *(_DWORD *)(v2 + 4));
  sub_21CFED8(v3, (int)&v12);
  v4 = off_26D3F84;
  v9 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v9) = off_26D3F80[0];
  v11 = v4;
  v12 = &off_27734E8;
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v12 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v13);
  v9 = (void **)off_26D3F68;
  *(void ***)((char *)&v9 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v10 = 0;
  return sub_21B6560(&v15);
}


_DWORD *__fastcall IntTag::IntTag(_DWORD *a1, int a2, int a3)
{
  int v3; // r4@1
  _DWORD *result; // r0@1

  v3 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E9078;
  result[1] = v3;
  return result;
}


signed int __fastcall IntTag::equals(IntTag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  IntTag *v3; // r4@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 && *((_DWORD *)v3 + 1) == *((_DWORD *)v2 + 1) )
    result = 1;
  return result;
}
