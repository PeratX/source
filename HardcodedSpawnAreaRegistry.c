

void __fastcall HardcodedSpawnAreaRegistry::initMobSpawnsForType(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  void **v7; // r4@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0xCu);
  *v6 = *(_DWORD *)v4;
  *(_DWORD *)v4 = 0;
  v6[1] = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v4 + 4) = 0;
  v6[2] = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 8) = 0;
  v7 = *(void ***)(v3 + 4 * v5);
  *(_DWORD *)(v3 + 4 * v5) = v6;
  if ( v7 )
  {
    std::_Destroy<MobSpawnerData *>(*(_QWORD *)v7, *(_QWORD *)v7 >> 32);
    if ( *v7 )
      j_operator delete(*v7);
    j_j_j__ZdlPv_6(v7);
  }
}


HardcodedSpawnAreaRegistry *__fastcall HardcodedSpawnAreaRegistry::~HardcodedSpawnAreaRegistry(HardcodedSpawnAreaRegistry *this)
{
  HardcodedSpawnAreaRegistry *v1; // r4@1
  void **v2; // r5@1
  void **v3; // r5@5
  void **v4; // r5@9
  void **v5; // r5@13
  HardcodedSpawnAreaRegistry *result; // r0@17

  v1 = this;
  v2 = (void **)*((_DWORD *)this + 3);
  if ( v2 )
  {
    std::_Destroy<MobSpawnerData *>(*(_QWORD *)v2, *(_QWORD *)v2 >> 32);
    if ( *v2 )
      j_operator delete(*v2);
    j_operator delete(v2);
  }
  *((_DWORD *)v1 + 3) = 0;
  v3 = (void **)*((_DWORD *)v1 + 2);
  if ( v3 )
    std::_Destroy<MobSpawnerData *>(*(_QWORD *)v3, *(_QWORD *)v3 >> 32);
    if ( *v3 )
      j_operator delete(*v3);
    j_operator delete(v3);
  *((_DWORD *)v1 + 2) = 0;
  v4 = (void **)*((_DWORD *)v1 + 1);
  if ( v4 )
    std::_Destroy<MobSpawnerData *>(*(_QWORD *)v4, *(_QWORD *)v4 >> 32);
    if ( *v4 )
      j_operator delete(*v4);
    j_operator delete(v4);
  *((_DWORD *)v1 + 1) = 0;
  v5 = *(void ***)v1;
  if ( *(_DWORD *)v1 )
    std::_Destroy<MobSpawnerData *>(*(_QWORD *)v5, *(_QWORD *)v5 >> 32);
    if ( *v5 )
      j_operator delete(*v5);
    j_operator delete(v5);
  result = v1;
  *(_DWORD *)v1 = 0;
  return result;
}


void __fastcall HardcodedSpawnAreaRegistry::initMobSpawnsForType(int a1, int a2, int a3)
{
  HardcodedSpawnAreaRegistry::initMobSpawnsForType(a1, a2, a3);
}


_DWORD *__fastcall HardcodedSpawnAreaRegistry::HardcodedSpawnAreaRegistry(int a1)
{
  _DWORD *v1; // r4@1
  _DWORD *v2; // r0@1

  v1 = (_DWORD *)a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v2 = j_operator new(0xCu);
  *v2 = 0;
  v2[1] = 0;
  v2[2] = 0;
  *v1 = v2;
  std::_Destroy<MobSpawnerData *>(0, 0);
  return v1;
}
