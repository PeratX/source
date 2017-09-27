

int __fastcall AddIslandLayer::fillArea(AddIslandLayer *this, LayerData *a2, __int64 a3, int a4, int a5)
{
  LayerData *v5; // r5@1
  int v6; // r10@1
  int v7; // r0@2
  int v8; // r8@4
  int v9; // r4@4
  signed int v10; // r6@5
  signed int v11; // r9@5
  int v12; // r0@7
  Layer *v13; // r11@10
  int v14; // r0@10
  int v15; // r0@18
  signed int v16; // r6@22
  int v17; // r1@22
  int v18; // r0@22
  signed int v19; // r5@22
  signed int v20; // r11@22
  signed int v21; // r7@22
  bool v22; // zf@25
  int v24; // [sp+10h] [bp-58h]@2
  __int64 v25; // [sp+18h] [bp-50h]@1
  int v26; // [sp+24h] [bp-44h]@4
  LayerData *v27; // [sp+28h] [bp-40h]@1
  int v28; // [sp+2Ch] [bp-3Ch]@4
  int v29; // [sp+30h] [bp-38h]@4
  int v30; // [sp+34h] [bp-34h]@4
  int v31; // [sp+38h] [bp-30h]@4
  int v32; // [sp+3Ch] [bp-2Ch]@4
  Layer *v33; // [sp+40h] [bp-28h]@1

  v5 = a2;
  v25 = a3;
  v27 = a2;
  v33 = this;
  v6 = a4;
  (*(void (__cdecl **)(_DWORD, LayerData *))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10), a2);
  if ( a5 )
  {
    v24 = 4 * a4 + 8;
    v7 = 0;
    while ( !v6 )
    {
      ++v7;
LABEL_41:
      if ( v7 == a5 )
        return j_j_j__ZN9LayerData4swapEv_0(v5);
    }
    v26 = v7 + 1;
    v8 = 0;
    v28 = 4 * a4 * v7;
    v32 = v7 + HIDWORD(v25);
    v31 = v24 * v7 + 8;
    v30 = (v7 + 1) * v24 + 4;
    v29 = (v7 + 2) * v24 + 8;
    v9 = v25;
    while ( 1 )
      v16 = *(_DWORD *)(*(_DWORD *)v5 + v8 + v30);
      v17 = v29 + *(_DWORD *)v5;
      v18 = *(_DWORD *)v5 + v31;
      v19 = *(_DWORD *)(v17 + v8);
      v20 = *(_DWORD *)(v18 + v8);
      v21 = *(_DWORD *)(v17 + v8 - 8);
      v11 = *(_DWORD *)(v18 + v8 - 8);
      j_Layer::initRandom(v33, v32, v9, v32);
      if ( v16 )
      {
        if ( v16 < 1 )
          goto LABEL_37;
        if ( v11 )
        {
          v22 = v20 == 0;
          if ( v20 )
            v22 = v21 == 0;
          if ( !v22 && v19 )
            goto LABEL_37;
        }
        if ( j_Layer::nextRandom(v33, 5) )
LABEL_37:
          v5 = v27;
          *(_DWORD *)(*((_DWORD *)v27 + 1) + v28 + v8) = v16;
          goto LABEL_38;
        v5 = v27;
        v15 = *((_DWORD *)v27 + 1) + v28;
        if ( v16 != 4 )
          goto LABEL_20;
      }
      else
        if ( !(v20 | v11 | v21 | v19) )
          if ( j_Layer::nextRandom(v33, 1) )
            v11 = 1;
          v10 = 2;
        else
          v10 = 1;
          v11 = 1;
        if ( v20 )
          v12 = j_Layer::nextRandom(v33, v10++);
          if ( !v12 )
            v11 = v20;
        if ( v21 )
          v13 = v33;
          v14 = j_Layer::nextRandom(v33, v10++);
          if ( !v14 )
            v11 = v21;
        if ( v19 && !j_Layer::nextRandom(v13, v10) )
          v11 = v19;
        if ( !j_Layer::nextRandom(v13, 3) )
          *(_DWORD *)(*((_DWORD *)v27 + 1) + v28 + v8) = v11;
        if ( v11 != 4 )
LABEL_20:
          *(_DWORD *)(v15 + v8) = 0;
      *(_DWORD *)(v15 + v8) = 4;
LABEL_38:
      ++v9;
      --v6;
      v8 += 4;
      if ( !v6 )
        v7 = v26;
        v6 = a4;
        goto LABEL_41;
  }
  return j_j_j__ZN9LayerData4swapEv_0(v5);
}


void __fastcall AddIslandLayer::~AddIslandLayer(AddIslandLayer *this)
{
  AddIslandLayer::~AddIslandLayer(this);
}


void __fastcall AddIslandLayer::~AddIslandLayer(AddIslandLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall AddIslandLayer::AddIslandLayer(int a1, unsigned int a2, int a3)
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
  *(_DWORD *)v4 = &off_27257E4;
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
