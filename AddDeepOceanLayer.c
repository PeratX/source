

void __fastcall AddDeepOceanLayer::~AddDeepOceanLayer(AddDeepOceanLayer *this)
{
  AddDeepOceanLayer::~AddDeepOceanLayer(this);
}


int __fastcall AddDeepOceanLayer::AddDeepOceanLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_27257AC;
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


void __fastcall AddDeepOceanLayer::~AddDeepOceanLayer(AddDeepOceanLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AddDeepOceanLayer::fillArea(AddDeepOceanLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf@1
  int v7; // r7@4
  int v8; // r2@4
  _DWORD *v9; // r10@4
  int v10; // r12@4
  int v11; // r0@4
  _DWORD *v12; // r1@5
  int v13; // r5@5
  int v14; // r0@5
  __int64 v15; // kr08_8@6
  signed int v16; // r2@6
  unsigned int v17; // r8@6
  LayerData *v19; // [sp+Ch] [bp-3Ch]@1
  int v20; // [sp+1Ch] [bp-2Ch]@5
  int v21; // [sp+20h] [bp-28h]@5

  v19 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a6 == 0;
  if ( a6 )
    v6 = a5 == 0;
  if ( !v6 )
  {
    v7 = 4 * a5;
    v9 = (_DWORD *)(*(_QWORD *)v19 >> 32);
    v8 = *(_QWORD *)v19;
    v10 = Biome::deepOcean;
    v11 = 0;
    do
    {
      v21 = v8;
      v20 = v11 + 1;
      v12 = v9;
      v13 = a5;
      v14 = v8;
      do
      {
        v15 = *(_QWORD *)(v7 + v14 + 8);
        v16 = 1;
        v17 = 0;
        if ( !*(_DWORD *)(v14 + 4) )
        {
          v16 = 2;
          v17 = 1;
        }
        if ( !*(_DWORD *)(v7 + v14 + 16) )
          v17 = v16;
        if ( !(_DWORD)v15 )
          ++v17;
        if ( !*(_DWORD *)(8 * a5 + v14 + 20) )
        if ( HIDWORD(v15) || v17 < 4 )
          *v12 = HIDWORD(v15);
        else
          *v12 = *(_DWORD *)(v10 + 268);
        ++v12;
        v14 += 4;
        --v13;
      }
      while ( v13 );
      v9 = (_DWORD *)((char *)v9 + v7);
      v8 = v21 + 4 * a5 + 8;
      v11 = v20;
    }
    while ( v20 != a6 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v19);
}
