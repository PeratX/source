

_DWORD *__fastcall EndTag::EndTag(_DWORD *a1)
{
  _DWORD *v1; // r5@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_DA7364((void **)&v6, (const char *)&unk_257BC67);
  Tag::Tag(v1);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9(v2);
  }
  *v1 = &off_26D5430;
  return v1;
}


int __fastcall EndTag::getId(EndTag *this)
{
  return 0;
}


_DWORD *__fastcall EndTag::copy(EndTag *this)
{
  EndTag *v1; // r4@1
  EndTag *v2; // r5@1
  _DWORD *result; // r0@1

  v1 = this;
  v2 = (EndTag *)operator new(4u);
  result = EndTag::EndTag(v2);
  *(_DWORD *)v1 = v2;
  return result;
}
