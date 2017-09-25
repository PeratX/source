

_DWORD *__fastcall ByteTag::ByteTag(_DWORD *a1, int a2, char a3)
{
  char v3; // r4@1
  _DWORD *result; // r0@1

  v3 = a3;
  result = Tag::Tag(a1);
  *result = &off_26E8F10;
  *((_BYTE *)result + 4) = v3;
  return result;
}


signed int __fastcall ByteTag::equals(ByteTag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  ByteTag *v3; // r4@1
  signed int v4; // r1@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = Tag::equals(this, a2);
  result = 0;
  if ( v4 == 1 && *((_BYTE *)v3 + 4) == *((_BYTE *)v2 + 4) )
    result = 1;
  return result;
}


signed int __fastcall ByteTag::getId(ByteTag *this)
{
  return 1;
}


int __fastcall ByteTag::load(ByteTag *this, IDataInput *a2)
{
  ByteTag *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  *((_BYTE *)v2 + 4) = result;
  return result;
}


void __fastcall ByteTag::copy(ByteTag *this, int a2)
{
  ByteTag::copy(this, a2);
}


void __fastcall ByteTag::copy(ByteTag *this, int a2)
{
  int v2; // r6@1
  ByteTag *v3; // r4@1
  _BYTE *v4; // r5@1
  int v5; // r1@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v9);
  v4 = operator new(8u);
  LOBYTE(v2) = *(_BYTE *)(v2 + 4);
  Tag::Tag(v4);
  v5 = v9;
  *(_DWORD *)v3 = v4;
  *(_DWORD *)v4 = &off_26E8F10;
  v6 = (void *)(v5 - 12);
  v4[4] = v2;
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


_DWORD *__fastcall ByteTag::ByteTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *result = &off_26E8F10;
  *((_BYTE *)result + 4) = 0;
  return result;
}
