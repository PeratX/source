

int __fastcall IslandLayer::fillArea(IslandLayer *this, LayerData *a2, int a3, int a4, int a5, int a6)
{
  LayerData *v6; // r4@1
  IslandLayer *v7; // r7@1
  int v8; // r1@1
  bool v9; // zf@1
  int v10; // r11@4
  int v11; // r9@4
  int v12; // r8@5
  int v13; // r5@5 OVERLAPPED
  int v14; // r6@5 OVERLAPPED
  int v15; // r0@6
  signed int v16; // r0@6
  int v18; // [sp+10h] [bp-30h]@1
  signed __int64 v19; // [sp+14h] [bp-2Ch]@1

  v18 = a4;
  v6 = a2;
  v7 = this;
  v8 = a6;
  v9 = a6 == 0;
  v19 = __PAIR__(a3, a5);
  if ( a6 )
    v9 = a5 == 0;
  if ( !v9 )
  {
    v10 = 0;
    v11 = 0;
    do
    {
      v12 = v10;
      *(_QWORD *)&v13 = v19;
      do
      {
        j_Layer::initRandom(v7, v8, v14, v11 + v18);
        v15 = j_Layer::nextRandom(v7, 10);
        v8 = *((_DWORD *)v6 + 1);
        v9 = v15 == 0;
        v16 = 0;
        ++v14;
        if ( v9 )
          v16 = 1;
        --v13;
        *(_DWORD *)(v8 + v12) = v16;
        v12 += 4;
      }
      while ( v13 );
      ++v11;
      v10 += 4 * a5;
    }
    while ( v11 != a6 );
  }
  if ( SHIDWORD(v19) <= 0 && SHIDWORD(v19) > -a5 && v18 <= 0 && v18 > -a6 )
    *(_DWORD *)(*((_DWORD *)v6 + 1) + 4 * (-v18 * a5 - HIDWORD(v19))) = 1;
  return j_j_j__ZN9LayerData4swapEv_0(v6);
}


void __fastcall IslandLayer::~IslandLayer(IslandLayer *this)
{
  IslandLayer::~IslandLayer(this);
}


void __fastcall IslandLayer::~IslandLayer(IslandLayer *this)
{
  Layer *v1; // r0@1

  v1 = j_Layer::~Layer(this);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall IslandLayer::IslandLayer(int a1, unsigned int a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Layer::Layer(a1, a2);
  *result = &off_272588C;
  return result;
}
