

void __fastcall AddSnowLayer::~AddSnowLayer(AddSnowLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AddSnowLayer::fillArea(AddSnowLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  Layer *v5; // r7@1
  LayerData *v6; // r5@1
  bool v7; // zf@1
  int v8; // r1@4
  int v9; // r11@4
  int v10; // r3@4
  int v11; // r8@5
  int v12; // r6@5
  int v13; // r4@5
  int v14; // r10@5
  int v15; // r9@6
  int v16; // r0@7
  signed int v17; // r2@7
  __int64 v19; // [sp+18h] [bp-38h]@1
  int v20; // [sp+20h] [bp-30h]@5
  int v21; // [sp+24h] [bp-2Ch]@5
  int v22; // [sp+28h] [bp-28h]@5

  v19 = a3;
  v5 = this;
  v6 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v7 = a5 == 0;
  if ( a5 )
    v7 = a4 == 0;
  if ( !v7 )
  {
    v8 = 4 * a4 + 12;
    v9 = 0;
    v10 = 0;
    do
    {
      v21 = v9;
      v22 = v8;
      v11 = v8;
      v12 = v10 + HIDWORD(v19);
      v20 = v10 + 1;
      v13 = v19;
      v14 = a4;
      do
      {
        v15 = *(_DWORD *)(*(_DWORD *)v6 + v11);
        j_Layer::initRandom(v5, v8, v13, v12);
        if ( v15 )
        {
          v16 = j_Layer::nextRandom(v5, 6);
          v8 = *((_DWORD *)v6 + 1);
          v17 = 1;
          if ( v16 < 2 )
            v17 = 3;
          if ( !v16 )
            v17 = 4;
          *(_DWORD *)(v8 + v9) = v17;
        }
        else
          v8 = 0;
          *(_DWORD *)(*((_DWORD *)v6 + 1) + v9) = 0;
        v9 += 4;
        ++v13;
        v11 += 4;
        --v14;
      }
      while ( v14 );
      v9 = v21 + 4 * a4;
      v10 = v20;
      v8 = v22 + 4 * a4 + 8;
    }
    while ( v20 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


int __fastcall AddSnowLayer::AddSnowLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_272581C;
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


void __fastcall AddSnowLayer::~AddSnowLayer(AddSnowLayer *this)
{
  AddSnowLayer::~AddSnowLayer(this);
}
