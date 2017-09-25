

TextureAtlasItem *__fastcall TextureAtlasItem::~TextureAtlasItem(TextureAtlasItem *this)
{
  TextureAtlasItem *v1; // r4@1
  void *v2; // r8@1
  void *v3; // r10@1
  int v4; // r4@3
  int v5; // r7@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  int v8; // r1@13
  void *v9; // r0@13
  int *v10; // r0@22
  unsigned int *v12; // r2@24
  signed int v13; // r1@26
  TextureAtlasItem *v14; // [sp+0h] [bp-30h]@2

  v1 = this;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    v14 = this;
    do
    {
      v4 = *(_QWORD *)v2 >> 32;
      v5 = *(_QWORD *)v2;
      if ( v5 != v4 )
      {
        do
        {
          v8 = *(_DWORD *)(v5 + 24);
          v9 = (void *)(v8 - 12);
          if ( (int *)(v8 - 12) != &dword_28898C0 )
          {
            v6 = (unsigned int *)(v8 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v7 = __ldrex(v6);
              while ( __strex(v7 - 1, v6) );
            }
            else
              v7 = (*v6)--;
            if ( v7 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v9);
          }
          v5 += 32;
        }
        while ( v5 != v4 );
        v5 = *(_DWORD *)v2;
      }
      if ( v5 )
        operator delete((void *)v5);
      v2 = (char *)v2 + 12;
    }
    while ( v2 != v3 );
    v1 = v14;
    v2 = (void *)*((_DWORD *)v14 + 2);
  }
  if ( v2 )
    operator delete(v2);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v12 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  return v1;
}


int *__fastcall TextureAtlasItem::TextureAtlasItem(int *a1, int *a2, unsigned int a3)
{
  unsigned int v3; // r4@1
  int *v4; // r5@1
  int v5; // r6@1

  v3 = a3;
  v4 = a1;
  sub_119C854(a1, a2);
  v4[2] = 0;
  v5 = (int)(v4 + 2);
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 - 4) = 0;
  if ( v3 )
    std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::_M_default_append(
      (int)(v4 + 2),
      v3);
  return v4;
}
