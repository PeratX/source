

int __fastcall AddMushroomIslandLayer::fillArea(AddMushroomIslandLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  LayerData *v5; // r5@1
  bool v6; // zf@1
  int v7; // r10@4 OVERLAPPED
  int v8; // r9@4 OVERLAPPED
  int v9; // r3@4
  signed int v10; // r4@5
  int v11; // r6@5
  __int64 v12; // r2@7
  int v13; // r1@7
  int v14; // ST40_4@7
  int v15; // r2@7
  int v16; // r5@7
  int v17; // r8@7
  int v18; // r11@7
  int v19; // r7@7
  __int64 v21; // [sp+14h] [bp-54h]@1
  int v22; // [sp+1Ch] [bp-4Ch]@5
  __int64 v23; // [sp+20h] [bp-48h]@5
  LayerData *v24; // [sp+30h] [bp-38h]@1
  int v25; // [sp+34h] [bp-34h]@5
  int v26; // [sp+38h] [bp-30h]@4
  AddMushroomIslandLayer *v27; // [sp+3Ch] [bp-2Ch]@1

  v5 = a2;
  v21 = a3;
  v24 = a2;
  v27 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a5 == 0;
  if ( a5 )
    v6 = a4 == 0;
  if ( !v6 )
  {
    v7 = 0;
    v26 = 4 * a4;
    v8 = 0;
    v9 = 0;
    do
    {
      v23 = *(_QWORD *)&v8;
      v25 = HIDWORD(v21) + v9;
      v22 = v9 + 1;
      v10 = v21;
      v11 = a4;
      do
      {
        HIDWORD(v12) = v10 >> 31;
        v13 = v26 + *(_DWORD *)v5;
        v14 = *(_DWORD *)(*(_DWORD *)v5 + v8);
        v15 = 8 * a4 + *(_DWORD *)v5 + v8;
        v16 = *(_DWORD *)(*(_DWORD *)v5 + v8 + 8);
        v17 = *(_DWORD *)(v13 + v8 + 12);
        v18 = *(_DWORD *)(v15 + 16);
        v19 = *(_DWORD *)(v15 + 24);
        LODWORD(v12) = v10;
        j_Layer::initRandom(v27, v25, v12, v25);
        if ( v14 | v16 | v18 | v19 | v17 || j_Layer::nextRandom(v27, 100) )
        {
          v5 = v24;
          *(_DWORD *)(*((_DWORD *)v24 + 1) + v7) = v17;
        }
        else
          *(_DWORD *)(*((_DWORD *)v24 + 1) + v7) = *(_DWORD *)(Biome::mushroomIsland + 268);
        v7 += 4;
        ++v10;
        --v11;
        v8 += 4;
      }
      while ( v11 );
      v7 = HIDWORD(v23) + v26;
      v9 = v22;
      v8 = v23 + 4 * a4 + 8;
    }
    while ( v22 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v5);
}


int __fastcall AddMushroomIslandLayer::AddMushroomIslandLayer(int a1, unsigned int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  unsigned int *v9; // r1@9
  unsigned int v10; // r0@11
  unsigned int *v11; // r7@15
  unsigned int v12; // r0@17

  v3 = a3;
  v4 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v4 = &off_2725800;
  *(_DWORD *)(v4 + 40) = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v4 + 44);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 != v5 )
  {
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        v5 = *(_DWORD *)(v4 + 44);
      }
      else
        ++*v7;
    }
    if ( v5 )
      v9 = (unsigned int *)(v5 + 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 == 1 )
        v11 = (unsigned int *)(v5 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    *(_DWORD *)(v4 + 44) = v6;
  }
  return v4;
}


void __fastcall AddMushroomIslandLayer::~AddMushroomIslandLayer(AddMushroomIslandLayer *this)
{
  AddMushroomIslandLayer::~AddMushroomIslandLayer(this);
}


void __fastcall AddMushroomIslandLayer::~AddMushroomIslandLayer(AddMushroomIslandLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}
