

void __fastcall SmoothLayer::~SmoothLayer(SmoothLayer *this)
{
  SmoothLayer::~SmoothLayer(this);
}


void __fastcall SmoothLayer::~SmoothLayer(SmoothLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall SmoothLayer::SmoothLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_2724B04;
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


int __fastcall SmoothLayer::fillArea(SmoothLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  LayerData *v5; // r5@1
  bool v6; // zf@1
  __int64 v7; // r10@4
  int v8; // r3@4
  int v9; // r4@5
  int v10; // r7@5
  int v11; // r0@6
  int v12; // r8@6
  int v13; // r9@6
  int v14; // r2@6
  int v15; // r1@6
  bool v16; // zf@6
  int v17; // r0@12
  __int64 v19; // [sp+18h] [bp-48h]@1
  int v20; // [sp+20h] [bp-40h]@5
  __int64 v21; // [sp+24h] [bp-3Ch]@5
  SmoothLayer *v22; // [sp+2Ch] [bp-34h]@1
  int v23; // [sp+30h] [bp-30h]@5
  int v24; // [sp+38h] [bp-28h]@4

  v19 = a3;
  v5 = a2;
  v22 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a5 == 0;
  if ( a5 )
    v6 = a4 == 0;
  if ( !v6 )
  {
    v24 = 4 * a4;
    v7 = 0LL;
    v8 = 0;
    do
    {
      v21 = v7;
      v23 = HIDWORD(v19) + v8;
      v20 = v8 + 1;
      v9 = v19;
      v10 = a4;
      do
      {
        v11 = v24 + *(_DWORD *)v5 + v7;
        v12 = *(_DWORD *)(*(_DWORD *)v5 + v7 + 4);
        v13 = *(_DWORD *)(v11 + 8);
        v14 = *(_DWORD *)(v11 + 16);
        v15 = *(_DWORD *)(*(_DWORD *)v5 + 8 * a4 + v7 + 20);
        v16 = v13 == v14;
        if ( v13 == v14 )
          v16 = v12 == v15;
        if ( v16 )
        {
          j_Layer::initRandom(v22, v23, v9, v23);
          if ( !j_Layer::nextRandom(v22, 2) )
            v12 = v13;
          v17 = v12;
        }
        else
          v17 = *(_DWORD *)(v11 + 12);
          if ( v13 == v14 )
            v17 = v13;
          if ( v12 == v15 )
            v17 = *(_DWORD *)(*(_DWORD *)v5 + v7 + 4);
        ++v9;
        LODWORD(v7) = v7 + 4;
        --v10;
        *(_DWORD *)(*((_DWORD *)v5 + 1) + HIDWORD(v7)) = v17;
        HIDWORD(v7) += 4;
      }
      while ( v10 );
      HIDWORD(v7) = HIDWORD(v21) + v24;
      v8 = v20;
      LODWORD(v7) = v21 + 4 * a4 + 8;
    }
    while ( v20 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v5);
}
