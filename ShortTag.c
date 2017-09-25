

void __fastcall ShortTag::copy(ShortTag *this, int a2)
{
  ShortTag::copy(this, a2);
}


_DWORD *__fastcall ShortTag::ShortTag(_DWORD *a1, int a2, __int16 a3)
{
  __int16 v3; // r4@1
  _DWORD *result; // r0@1

  v3 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E90F0;
  *((_WORD *)result + 2) = v3;
  return result;
}


signed int __fastcall ShortTag::getId(ShortTag *this)
{
  return 2;
}


_DWORD *__fastcall ShortTag::ShortTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *result = &off_26E90F0;
  *((_WORD *)result + 2) = 0;
  return result;
}


int __fastcall ShortTag::load(ShortTag *this, IDataInput *a2)
{
  ShortTag *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 28))(a2);
  *((_WORD *)v2 + 2) = result;
  return result;
}


signed int __fastcall ShortTag::equals(ShortTag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  ShortTag *v3; // r4@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 && *((_WORD *)v3 + 2) == *((_WORD *)v2 + 2) )
    result = 1;
  return result;
}


_DWORD *__fastcall ShortTag::toString(ShortTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r1@1
  void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  void **v10; // [sp+0h] [bp-D0h]@1
  int v11; // [sp+4h] [bp-CCh]@2
  void **v12; // [sp+8h] [bp-C8h]@1
  void **v13; // [sp+Ch] [bp-C4h]@1
  int v14; // [sp+28h] [bp-A8h]@2
  int v15; // [sp+30h] [bp-A0h]@1
  int v16; // [sp+34h] [bp-9Ch]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v10, 24);
  v4 = *(_WORD *)(v2 + 4);
  sub_21CC414((char *)&v12);
  sub_21CFED8(v3, (int)&v13);
  v5 = off_26D3F84;
  v10 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v10) = off_26D3F80[0];
  v12 = v5;
  v13 = &off_27734E8;
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v13 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v14);
  v10 = (void **)off_26D3F68;
  *(void ***)((char *)&v10 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v11 = 0;
  return sub_21B6560(&v16);
}


void __fastcall ShortTag::copy(ShortTag *this, int a2)
{
  int v2; // r6@1
  ShortTag *v3; // r4@1
  _WORD *v4; // r5@1
  int v5; // r1@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v9);
  v4 = operator new(8u);
  LOWORD(v2) = *(_WORD *)(v2 + 4);
  Tag::Tag(v4);
  v5 = v9;
  *(_DWORD *)v3 = v4;
  *(_DWORD *)v4 = &off_26E90F0;
  v6 = (void *)(v5 - 12);
  v4[2] = v2;
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}
