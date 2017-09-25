

int __fastcall RiverMixerLayer::init(RiverMixerLayer *this, int a2, __int64 a3)
{
  RiverMixerLayer *v3; // r6@1
  unsigned int v4; // r4@1
  unsigned int v5; // r5@1
  int v6; // r1@1

  v3 = this;
  v4 = HIDWORD(a3);
  v5 = a3;
  (*(void (**)(void))(**((_DWORD **)this + 12) + 8))();
  (*(void (**)(void))(**((_DWORD **)v3 + 14) + 8))();
  return j_j_j__ZN5Layer4initEx(v3, v6, __PAIR__(v4, v5));
}


void __fastcall RiverMixerLayer::~RiverMixerLayer(RiverMixerLayer *this)
{
  RiverMixerLayer::~RiverMixerLayer(this);
}


int __fastcall RiverMixerLayer::fillArea(RiverMixerLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  RiverMixerLayer *v6; // r7@1
  LayerData *v7; // r9@1
  int v8; // r0@1
  int *v9; // r1@2 OVERLAPPED
  _DWORD *v10; // r2@2 OVERLAPPED
  int v11; // r10@2
  int v12; // r8@2
  int v13; // lr@2
  int v14; // r11@2
  int *v15; // r4@2
  int v16; // r6@2
  int v17; // r3@3
  int v18; // r5@5
  int v19; // r3@5
  bool v20; // zf@5
  int v22; // [sp+Ch] [bp-FF4h]@2
  int v23; // [sp+10h] [bp-FF0h]@2
  int *v24; // [sp+14h] [bp-FECh]@1
  int *v25; // [sp+18h] [bp-FE8h]@1
  int v26; // [sp+1Ch] [bp-FE4h]@1
  int v27; // [sp+91Ch] [bp-6E4h]@1

  v6 = this;
  v7 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 12) + 12))(*((_DWORD *)this + 12), a2);
  v24 = &v26;
  v25 = &v27;
  (*(void (__cdecl **)(_DWORD, int **))(**((_DWORD **)v6 + 14) + 12))(*((_DWORD *)v6 + 14), &v24);
  v8 = a6 * a5;
  if ( a6 * a5 )
  {
    *(_QWORD *)&v9 = *(_QWORD *)v7;
    v11 = Biome::iceFlats;
    v12 = Biome::frozenRiver;
    v13 = Biome::deepOcean;
    v22 = Biome::mushroomIsland;
    v14 = Biome::river;
    v15 = v24;
    v23 = Biome::mushroomIslandShore;
    v16 = Biome::ocean;
    do
    {
      v18 = *v9;
      v19 = *(_DWORD *)(v16 + 268);
      v20 = *v9 == v19;
      if ( *v9 != v19 )
        v20 = v18 == *(_DWORD *)(v13 + 268);
      if ( v20 )
        goto LABEL_14;
      v17 = *v15;
      if ( *v15 != *(_DWORD *)(v14 + 268) )
      if ( v18 == *(_DWORD *)(v11 + 268) )
      {
        v17 = *(_DWORD *)(v12 + 268);
      }
      else
        if ( v18 == *(_DWORD *)(v22 + 268) )
        {
          v18 = *(_DWORD *)(v23 + 268);
LABEL_14:
          *v10 = v18;
          goto LABEL_15;
        }
        if ( v18 == *(_DWORD *)(v23 + 268) )
          goto LABEL_14;
        v17 = (unsigned __int8)v17;
      *v10 = v17;
LABEL_15:
      --v8;
      ++v15;
      ++v10;
      ++v9;
    }
    while ( v8 );
  }
  return j_LayerData::swap(v7);
}


int __fastcall RiverMixerLayer::RiverMixerLayer(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  int v7; // r1@1
  unsigned int *v8; // r1@2
  unsigned int v9; // r2@4
  int v10; // r1@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r2@10

  v4 = a4;
  v5 = a3;
  result = j_Layer::Layer(a1, a2);
  *(_DWORD *)result = &off_2724ACC;
  *(_DWORD *)(result + 48) = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(result + 52) = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
    }
    else
      ++*v8;
  }
  *(_DWORD *)(result + 56) = *(_DWORD *)v4;
  v10 = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(result + 60) = v10;
  if ( v10 )
    v11 = (unsigned int *)(v10 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
  return result;
}


void __fastcall RiverMixerLayer::~RiverMixerLayer(RiverMixerLayer *this)
{
  RiverMixerLayer *v1; // r4@1
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
  *(_DWORD *)this = &off_2724ACC;
  v2 = *((_DWORD *)this + 15);
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
  v7 = *((_DWORD *)v1 + 13);
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
  j_Layer::~Layer(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


Layer *__fastcall RiverMixerLayer::~RiverMixerLayer(RiverMixerLayer *this)
{
  RiverMixerLayer *v1; // r4@1
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
  *(_DWORD *)this = &off_2724ACC;
  v2 = *((_DWORD *)this + 15);
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
  v7 = *((_DWORD *)v1 + 13);
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
  return j_j_j__ZN5LayerD2Ev_0(v1);
}
