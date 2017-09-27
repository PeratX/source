

int __fastcall RiverInitLayer::fillArea(RiverInitLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  Layer *v5; // r7@1
  LayerData *v6; // r5@1
  int v7; // r1@1
  bool v8; // zf@1
  int v9; // r9@4
  int v10; // r10@4
  int v11; // r6@5
  int v12; // r11@5
  int v13; // r0@7
  __int64 v15; // [sp+14h] [bp-34h]@1
  int v16; // [sp+20h] [bp-28h]@5

  v15 = a3;
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
      v16 = v9;
      v11 = v15;
      v12 = a4;
      do
      {
        j_Layer::initRandom(v5, v7, v11, v10 + HIDWORD(v15));
        if ( *(_DWORD *)(*(_DWORD *)v6 + v9) < 1 )
          v13 = 0;
        else
          v13 = j_Layer::nextRandom(v5, 299999) + 2;
        v7 = *((_DWORD *)v6 + 1);
        ++v11;
        --v12;
        *(_DWORD *)(v7 + v9) = v13;
        v9 += 4;
      }
      while ( v12 );
      ++v10;
      v9 = v16 + 4 * a4;
    }
    while ( v10 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


void __fastcall RiverInitLayer::~RiverInitLayer(RiverInitLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RiverInitLayer::RiverInitLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_2724A94;
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


void __fastcall RiverInitLayer::~RiverInitLayer(RiverInitLayer *this)
{
  RiverInitLayer::~RiverInitLayer(this);
}
