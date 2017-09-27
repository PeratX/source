

int __fastcall RemoveTooMuchOceanLayer::fillArea(RemoveTooMuchOceanLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  bool v5; // zf@1
  int v6; // r10@4
  int v7; // r6@4
  int v8; // r3@4
  int v9; // r4@5
  int v10; // r8@5
  int v11; // r3@6
  int v12; // r9@6
  int v13; // ST40_4@6
  __int64 v14; // kr00_8@6
  int v15; // r7@6
  __int64 v17; // [sp+18h] [bp-50h]@1
  int v18; // [sp+20h] [bp-48h]@5
  int v19; // [sp+24h] [bp-44h]@5
  int v20; // [sp+28h] [bp-40h]@5
  int v21; // [sp+30h] [bp-38h]@5
  int v22; // [sp+34h] [bp-34h]@4
  LayerData *v23; // [sp+38h] [bp-30h]@1
  RemoveTooMuchOceanLayer *v24; // [sp+3Ch] [bp-2Ch]@1

  v17 = a3;
  v23 = a2;
  v24 = this;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v5 = a5 == 0;
  if ( a5 )
    v5 = a4 == 0;
  if ( !v5 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v22 = 4 * a4;
    do
    {
      v19 = v7;
      v20 = v6;
      v21 = HIDWORD(v17) + v8;
      v18 = v8 + 1;
      v9 = v17;
      v10 = a4;
      do
      {
        v11 = v22 + *(_QWORD *)v23 + v7;
        v12 = *(_DWORD *)(*(_QWORD *)v23 + v7 + 4);
        v13 = *(_DWORD *)(v11 + 8);
        v14 = *(_QWORD *)(v11 + 12);
        v15 = *(_DWORD *)(8 * a4 + *(_QWORD *)v23 + v7 + 20);
        *(_DWORD *)((*(_QWORD *)v23 >> 32) + v6) = v14;
        j_Layer::initRandom(v24, v21, v9, v21);
        if ( !(HIDWORD(v14) | v12 | v13 | v15 | (unsigned int)v14) && !j_Layer::nextRandom(v24, 2) )
          *(_DWORD *)(*((_DWORD *)v23 + 1) + v6) = 1;
        ++v9;
        v6 += 4;
        v7 += 4;
        --v10;
      }
      while ( v10 );
      v6 = v20 + v22;
      v8 = v18;
      v7 = v19 + 4 * a4 + 8;
    }
    while ( v18 != a5 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v23);
}


void __fastcall RemoveTooMuchOceanLayer::~RemoveTooMuchOceanLayer(RemoveTooMuchOceanLayer *this)
{
  RemoveTooMuchOceanLayer::~RemoveTooMuchOceanLayer(this);
}


void __fastcall RemoveTooMuchOceanLayer::~RemoveTooMuchOceanLayer(RemoveTooMuchOceanLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RemoveTooMuchOceanLayer::RemoveTooMuchOceanLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_2724A78;
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
