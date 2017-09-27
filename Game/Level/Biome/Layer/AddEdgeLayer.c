

int __fastcall AddEdgeLayer::AddEdgeLayer(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  unsigned int *v9; // r0@3
  unsigned int v10; // r1@5
  unsigned int *v11; // r1@9
  unsigned int v12; // r0@11
  unsigned int *v13; // r7@15
  unsigned int v14; // r0@17

  v4 = a4;
  v5 = a3;
  v6 = a1;
  j_Layer::Layer(a1, a2);
  *(_DWORD *)v6 = &off_27257C8;
  *(_DWORD *)(v6 + 48) = v4;
  *(_DWORD *)(v6 + 40) = *(_DWORD *)v5;
  v7 = *(_DWORD *)(v6 + 44);
  v8 = *(_DWORD *)(v5 + 4);
  if ( v8 != v7 )
  {
    if ( v8 )
    {
      v9 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 + 1, v9) );
        v7 = *(_DWORD *)(v6 + 44);
      }
      else
        ++*v9;
    }
    if ( v7 )
      v11 = (unsigned int *)(v7 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v7 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
    *(_DWORD *)(v6 + 44) = v8;
  }
  return v6;
}


int __fastcall AddEdgeLayer::fillArea(AddEdgeLayer *this, LayerData *a2, __int64 a3, int a5, int a6)
{
  int v5; // r12@1
  int result; // r0@2

  v5 = *((_DWORD *)this + 12);
  if ( v5 == 1 )
  {
    result = j_j_j__ZN12AddEdgeLayer11fillHeatIceER9LayerDataiiii(this, a2, a3, SHIDWORD(a3), a5, a6);
  }
  else if ( v5 == 2 )
    result = j_j_j__ZN12AddEdgeLayer20fillIntroduceSpecialER9LayerDataiiii(this, a2, a3, a5, a6);
  else
    result = j_j_j__ZN12AddEdgeLayer12fillCoolWarmER9LayerDataiiii(this, a2, a3, a5, a6);
  return result;
}


int __fastcall AddEdgeLayer::fillIntroduceSpecial(AddEdgeLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  Layer *v5; // r7@1
  LayerData *v6; // r5@1
  int v7; // r1@1
  bool v8; // zf@1
  int v9; // r8@4
  int v10; // r11@4
  int v11; // r4@5
  int v12; // r9@5
  int v13; // r6@6
  __int16 v14; // r0@8
  __int64 v16; // [sp+14h] [bp-34h]@1
  int v17; // [sp+20h] [bp-28h]@5

  v16 = a3;
  v5 = this;
  v6 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v8 = a5 == 0;
  if ( a5 )
    v8 = a4 == 0;
  if ( !v8 )
  {
    v9 = 0;
    v10 = 0;
    do
    {
      v17 = v9;
      v11 = v16;
      v12 = a4;
      do
      {
        j_Layer::initRandom(v5, v7, v11, v10 + HIDWORD(v16));
        v13 = *(_DWORD *)(*(_DWORD *)v6 + v9);
        if ( v13 )
        {
          if ( !j_Layer::nextRandom(v5, 13) )
          {
            v14 = j_Layer::nextRandom(v5, 15);
            v7 = 256;
            v13 |= ((v14 << 8) + 256) & 0xF00;
          }
        }
        else
          v13 = 0;
        ++v11;
        --v12;
        *(_DWORD *)(*((_DWORD *)v6 + 1) + v9) = v13;
        v9 += 4;
      }
      while ( v12 );
      ++v10;
      v9 = v17 + 4 * a4;
    }
    while ( v10 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


void __fastcall AddEdgeLayer::~AddEdgeLayer(AddEdgeLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AddEdgeLayer::fillCoolWarm(AddEdgeLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  LayerData *v5; // r5@1
  bool v6; // zf@1
  int v7; // r1@4
  int v8; // r8@4
  __int64 v9; // r10@4
  int v10; // r3@4
  int v11; // r6@5
  int v12; // r4@5
  int v13; // r9@5
  int v14; // r2@6
  int v15; // r1@6
  signed int v16; // r0@6
  int v17; // r7@7
  int v18; // r3@7
  int v19; // r1@7
  int v20; // r2@7
  __int64 v22; // [sp+18h] [bp-40h]@1
  int v23; // [sp+20h] [bp-38h]@5
  __int64 v24; // [sp+24h] [bp-34h]@5
  AddEdgeLayer *v25; // [sp+30h] [bp-28h]@1

  v22 = a3;
  v5 = a2;
  v25 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a5 == 0;
  if ( a5 )
    v6 = a4 == 0;
  if ( !v6 )
  {
    v7 = a4;
    v8 = 4 * a4;
    v9 = 0LL;
    v10 = 0;
    do
    {
      v24 = v9;
      v11 = v10 + HIDWORD(v22);
      v23 = v10 + 1;
      v12 = v22;
      v13 = a4;
      do
      {
        j_Layer::initRandom(v25, v7, v12, v11);
        v14 = *(_DWORD *)v5;
        v15 = *(_DWORD *)v5 + v8 + v9;
        v16 = *(_DWORD *)(v15 + 12);
        if ( v16 == 1 )
        {
          v17 = *(_DWORD *)(v15 + 8);
          v18 = *(_DWORD *)(v14 + v9 + 4);
          v19 = *(_DWORD *)(v15 + 16);
          v16 = 1;
          v20 = *(_DWORD *)(v14 + 8 * a4 + v9 + 20);
          if ( v20 == 4 )
            v16 = 2;
          if ( v17 == 4 )
          if ( v19 == 4 )
          if ( v18 == 4 )
          if ( v20 == 3 )
          if ( v17 == 3 )
          if ( v19 == 3 )
          if ( v18 == 3 )
        }
        v7 = *((_DWORD *)v5 + 1);
        ++v12;
        LODWORD(v9) = v9 + 4;
        --v13;
        *(_DWORD *)(v7 + HIDWORD(v9)) = v16;
        HIDWORD(v9) += 4;
      }
      while ( v13 );
      HIDWORD(v9) = HIDWORD(v24) + v8;
      v10 = v23;
      LODWORD(v9) = v24 + 4 * a4 + 8;
    }
    while ( v23 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v5);
}


void __fastcall AddEdgeLayer::~AddEdgeLayer(AddEdgeLayer *this)
{
  AddEdgeLayer::~AddEdgeLayer(this);
}


int __fastcall AddEdgeLayer::fillHeatIce(AddEdgeLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf@1
  int v7; // r3@4
  int v8; // lr@4
  signed int *v9; // r5@4
  int v10; // r11@4
  signed int *v11; // r1@5
  int v12; // r0@5
  int v13; // r6@5
  int v14; // r2@6
  signed int v15; // r7@6
  int v16; // r9@7
  int v17; // r2@7
  int v18; // r8@7
  LayerData *v20; // [sp+Ch] [bp-2Ch]@1

  v20 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a6 == 0;
  if ( a6 )
    v6 = a5 == 0;
  if ( !v6 )
  {
    v7 = 4 * a5;
    v8 = 0;
    v9 = (signed int *)(*(_QWORD *)v20 >> 32);
    v10 = *(_QWORD *)v20;
    do
    {
      ++v8;
      v11 = v9;
      v12 = v10;
      v13 = a5;
      do
      {
        v14 = v12 + v7;
        v15 = *(_DWORD *)(v12 + v7 + 12);
        if ( v15 == 4 )
        {
          v16 = *(_DWORD *)(v14 + 8);
          v17 = *(_DWORD *)(v14 + 16);
          v18 = *(_DWORD *)(v12 + 4);
          v15 = 4;
          if ( (unsigned int)(*(_DWORD *)(8 * a5 + v12 + 20) - 1) < 2 )
            v15 = 3;
          if ( v16 == 2 )
          if ( v17 == 2 )
          if ( v18 == 2 )
          if ( v16 == 1 )
          if ( v17 == 1 )
          if ( v18 == 1 )
        }
        *v11 = v15;
        ++v11;
        v12 += 4;
        --v13;
      }
      while ( v13 );
      v9 = (signed int *)((char *)v9 + v7);
      v10 += 4 * a5 + 8;
    }
    while ( v8 != a6 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v20);
}
