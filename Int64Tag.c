

signed int __fastcall Int64Tag::getId(Int64Tag *this)
{
  return 4;
}


_DWORD *__fastcall Int64Tag::Int64Tag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *result = &off_26E9000;
  result[2] = 0;
  result[3] = 0;
  return result;
}


signed int __fastcall Int64Tag::equals(Int64Tag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  Int64Tag *v3; // r4@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 && *((_QWORD *)v2 + 1) == *((_QWORD *)v3 + 1) )
    result = 1;
  return result;
}


_DWORD *__fastcall Int64Tag::toString(Int64Tag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  __int64 v4; // r2@1
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
  v4 = *(_QWORD *)(v2 + 8);
  sub_21CC720((char *)&v12);
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


int __fastcall Int64Tag::load(Int64Tag *this, IDataInput *a2)
{
  Int64Tag *v2; // r4@1
  __int64 v3; // r0@1

  v2 = this;
  LODWORD(v3) = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 36))(a2);
  *((_QWORD *)v2 + 1) = v3;
  return v3;
}


void __fastcall Int64Tag::copy(Int64Tag *this, int a2)
{
  Int64Tag::copy(this, a2);
}


_DWORD *__fastcall Int64Tag::Int64Tag(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  _DWORD *result; // r0@1

  v4 = a4;
  v5 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E9000;
  result[2] = v5;
  result[3] = v4;
  return result;
}


int __fastcall Int64Tag::write(Int64Tag *this, IDataOutput *a2)
{
  __int64 v2; // r2@1

  v2 = *((_QWORD *)this + 1);
  return (*(int (__fastcall **)(IDataOutput *))(*(_DWORD *)a2 + 36))(a2);
}


void __fastcall Int64Tag::copy(Int64Tag *this, int a2)
{
  int v2; // r6@1
  Int64Tag *v3; // r4@1
  _QWORD *v4; // r5@1
  __int64 v5; // r6@1
  int v6; // r1@1
  void *v7; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v10);
  v4 = operator new(0x10u);
  v5 = *(_QWORD *)(v2 + 8);
  Tag::Tag(v4);
  *(_DWORD *)v4 = &off_26E9000;
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
