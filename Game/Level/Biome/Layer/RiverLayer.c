

int __fastcall RiverLayer::riverFilter(RiverLayer *this, int a2)
{
  int result; // r0@1

  result = a2 & 1 | 2;
  if ( a2 <= 1 )
    result = a2;
  return result;
}


int __fastcall RiverLayer::fillArea(RiverLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf@1
  int v7; // r7@4
  signed int *v8; // r1@4 OVERLAPPED
  int v9; // r2@4 OVERLAPPED
  int v10; // r0@4
  int v11; // r0@5
  int v12; // r10@5
  int v13; // r9@6
  int v14; // r8@8
  int v15; // r12@10
  int v16; // r2@12
  int v17; // lr@14
  bool v18; // zf@17
  signed int v19; // r2@22
  LayerData *v21; // [sp+8h] [bp-48h]@1
  int v22; // [sp+18h] [bp-38h]@5
  __int64 v23; // [sp+1Ch] [bp-34h]@5
  int v24; // [sp+24h] [bp-2Ch]@4
  int v25; // [sp+28h] [bp-28h]@4

  v21 = a2;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  v6 = a6 == 0;
  if ( a6 )
    v6 = a5 == 0;
  if ( !v6 )
  {
    v7 = 4 * a5;
    v8 = (signed int *)(*(_QWORD *)v21 >> 32);
    v9 = *(_QWORD *)v21;
    v24 = Biome::river;
    v25 = 8 * a5;
    v10 = 0;
    do
    {
      v23 = *(_QWORD *)&v8;
      v22 = v10 + 1;
      v11 = v9;
      v12 = a5;
      do
      {
        v13 = *(_DWORD *)(v7 + v11 + 8) & 1 | 2;
        if ( *(_DWORD *)(v7 + v11 + 8) <= 1 )
          v13 = *(_DWORD *)(v7 + v11 + 8);
        v14 = *(_DWORD *)(v7 + v11 + 16) & 1 | 2;
        if ( *(_DWORD *)(v7 + v11 + 16) <= 1 )
          v14 = *(_DWORD *)(v7 + v11 + 16);
        v15 = *(_DWORD *)(v7 + v11 + 12) & 1 | 2;
        if ( *(_DWORD *)(v7 + v11 + 12) <= 1 )
          v15 = *(_DWORD *)(v7 + v11 + 12);
        v16 = *(_DWORD *)(v25 + v11 + 20) & 1 | 2;
        if ( *(_DWORD *)(v25 + v11 + 20) <= 1 )
          v16 = *(_DWORD *)(v25 + v11 + 20);
        v17 = *(_DWORD *)(v11 + 4) & 1 | 2;
        if ( *(_DWORD *)(v11 + 4) <= 1 )
          v17 = *(_DWORD *)(v11 + 4);
        if ( v15 != v16 )
          goto LABEL_29;
        v18 = v15 == v14;
        if ( v15 == v14 )
          v18 = v15 == v13;
        if ( v18 && v15 == v17 )
          v19 = -1;
        else
LABEL_29:
          v19 = *(_DWORD *)(v24 + 268);
        *v8 = v19;
        ++v8;
        v11 += 4;
        --v12;
      }
      while ( v12 );
      v9 = HIDWORD(v23) + 4 * a5 + 8;
      v8 = (signed int *)(v23 + v7);
      v10 = v22;
    }
    while ( v22 != a6 );
  }
  return j_j_j__ZN9LayerData4swapEv_0(v21);
}


void __fastcall RiverLayer::~RiverLayer(RiverLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall RiverLayer::RiverLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_2724AB0;
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


void __fastcall RiverLayer::~RiverLayer(RiverLayer *this)
{
  RiverLayer::~RiverLayer(this);
}
