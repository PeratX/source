

StructureFeature *__fastcall NetherFortressFeature::~NetherFortressFeature(NetherFortressFeature *this)
{
  NetherFortressFeature *v1; // r4@1
  MobSpawnerData *v2; // r0@1
  MobSpawnerData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_272394C;
  v3 = (MobSpawnerData *)(*(_QWORD *)((char *)this + 92) >> 32);
  v2 = (MobSpawnerData *)*(_QWORD *)((char *)this + 92);
  if ( v2 != v3 )
  {
    do
      v2 = (MobSpawnerData *)((char *)j_MobSpawnerData::~MobSpawnerData(v2) + 120);
    while ( v3 != v2 );
    v2 = (MobSpawnerData *)*((_DWORD *)v1 + 23);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return j_j_j__ZN16StructureFeatureD2Ev_1(v1);
}


signed int __fastcall NetherFortressFeature::isFeatureChunk(NetherFortressFeature *this, BiomeSource *a2, Random *a3, const ChunkPos *a4)
{
  Random *v4; // r4@1
  const ChunkPos *v5; // r9@1
  __int64 v6; // r6@1
  int v7; // r5@1
  unsigned int v8; // r10@1
  unsigned int v9; // r0@1
  int v10; // r1@1
  signed int v11; // r8@1
  signed int v12; // r2@1
  int v13; // r0@2
  int v14; // r7@2
  int v15; // r5@2
  signed int result; // r0@4
  int v17; // r5@5
  signed int v18; // r6@5
  int v19; // r5@6

  v4 = a3;
  v5 = a4;
  v6 = *(_QWORD *)a4;
  v7 = *((_DWORD *)a2 + 12);
  j_Random::_checkThreadId(a3);
  v8 = HIDWORD(v6) & 0xFFFFFFF0;
  v9 = HIDWORD(v6) & 0xFFFFFFF0 ^ ((signed int)v6 >> 4) ^ v7;
  *(_DWORD *)v4 = v9;
  *((_DWORD *)v4 + 625) = 625;
  v10 = 0;
  v11 = (signed int)v6 >> 4;
  v12 = 1;
  *((_BYTE *)v4 + 2504) = 0;
  *((_DWORD *)v4 + 627) = 0;
  *((_DWORD *)v4 + 1) = v9;
  do
  {
    v13 = v9 ^ (v9 >> 30);
    v14 = (int)v4 + 4 * v10;
    v15 = v10++ + 1812433253 * v13;
    v9 = v12++ + 1812433253 * v13;
    *(_DWORD *)(v14 + 8) = v15 + 1;
  }
  while ( v10 != 397 );
  *((_DWORD *)v4 + 625) = 624;
  *((_DWORD *)v4 + 628) = 398;
  j_Random::_genRandInt32(v4);
  if ( j_Random::_genRandInt32(v4) % 3 )
    result = 0;
  else
    v17 = *(_DWORD *)v5;
    v18 = 0;
    if ( v17 == (j_Random::_genRandInt32(v4) & 7) + (16 * v11 | 4) )
    {
      v19 = *((_DWORD *)v5 + 1);
      if ( v19 == (j_Random::_genRandInt32(v4) & 7) + (v8 | 4) )
        v18 = 1;
    }
    result = v18;
  return result;
}


void __fastcall NetherFortressFeature::~NetherFortressFeature(NetherFortressFeature *this)
{
  NetherFortressFeature *v1; // r4@1
  MobSpawnerData *v2; // r0@1
  MobSpawnerData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_272394C;
  v3 = (MobSpawnerData *)(*(_QWORD *)((char *)this + 92) >> 32);
  v2 = (MobSpawnerData *)*(_QWORD *)((char *)this + 92);
  if ( v2 != v3 )
  {
    do
      v2 = (MobSpawnerData *)((char *)j_MobSpawnerData::~MobSpawnerData(v2) + 120);
    while ( v3 != v2 );
    v2 = (MobSpawnerData *)*((_DWORD *)v1 + 23);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_StructureFeature::~StructureFeature(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall NetherFortressFeature::createStructureStart(NetherFortressFeature *this, Dimension *a2, Random *a3, const ChunkPos *a4, unsigned __int64 *a5)
{
  NetherFortressFeature *v5; // r4@1
  Random *v6; // r6@1
  NetherFortressStart *v7; // r5@1
  Dimension *v8; // r1@1
  int result; // r0@1

  v5 = this;
  v6 = a4;
  v7 = (NetherFortressStart *)j_operator new(0x30u);
  result = j_NetherFortressStart::NetherFortressStart(v7, v8, v6, *a5, *a5 >> 32);
  *(_DWORD *)v5 = v7;
  return result;
}


void __fastcall NetherFortressFeature::~NetherFortressFeature(NetherFortressFeature *this)
{
  NetherFortressFeature::~NetherFortressFeature(this);
}


MobSpawnerData *__fastcall NetherFortressFeature::initMobSpawnTypes(NetherFortressFeature *this, HardcodedSpawnAreaRegistry *a2)
{
  HardcodedSpawnAreaRegistry *v2; // r8@1
  MobSpawnerData *v3; // r0@1
  MobSpawnerData *v4; // r4@1
  MobSpawnerData *result; // r0@6
  char v6; // [sp+14h] [bp-364h]@1
  int (*v7)(void); // [sp+1Ch] [bp-35Ch]@1
  char v8; // [sp+24h] [bp-354h]@1
  int (*v9)(void); // [sp+2Ch] [bp-34Ch]@1
  char v10; // [sp+34h] [bp-344h]@1
  int (*v11)(void); // [sp+3Ch] [bp-33Ch]@1
  char v12; // [sp+44h] [bp-334h]@1
  int (*v13)(void); // [sp+4Ch] [bp-32Ch]@1
  char v14; // [sp+54h] [bp-324h]@1
  int (*v15)(void); // [sp+5Ch] [bp-31Ch]@1
  char v16; // [sp+64h] [bp-314h]@1
  int (*v17)(void); // [sp+6Ch] [bp-30Ch]@1
  char v18; // [sp+74h] [bp-304h]@1
  int (*v19)(void); // [sp+7Ch] [bp-2FCh]@1
  char v20; // [sp+84h] [bp-2F4h]@1
  int (*v21)(void); // [sp+8Ch] [bp-2ECh]@1
  char v22; // [sp+94h] [bp-2E4h]@1
  int (*v23)(void); // [sp+9Ch] [bp-2DCh]@1
  char v24; // [sp+A4h] [bp-2D4h]@1
  int (*v25)(void); // [sp+ACh] [bp-2CCh]@1
  char v26; // [sp+B4h] [bp-2C4h]@1
  int v27; // [sp+12Ch] [bp-24Ch]@1
  int v28; // [sp+1A4h] [bp-1D4h]@1
  int v29; // [sp+21Ch] [bp-15Ch]@1
  int v30; // [sp+294h] [bp-E4h]@1
  __int64 ptr; // [sp+30Ch] [bp-6Ch]@1
  int v32; // [sp+314h] [bp-64h]@1
  char v33; // [sp+318h] [bp-60h]@1
  int (*v34)(void); // [sp+34Ch] [bp-2Ch]@26

  v2 = a2;
  j_MobSpawnRules::MobSpawnRules((MobSpawnRules *)&v33);
  j_MobSpawnRules::setUndergroundSpawner((MobSpawnRules *)&v33);
  v25 = 0;
  v23 = 0;
  j_MobSpawnerData::MobSpawnerData(&v26, 2859, 10, 2, 3, (int)&v33, (int)&v24, (int)&v22);
  v21 = 0;
  v19 = 0;
  j_MobSpawnerData::MobSpawnerData(&v27, 68388, 5, 4, 4, (int)&v33, (int)&v20, (int)&v18);
  v17 = 0;
  v15 = 0;
  j_MobSpawnerData::MobSpawnerData(&v28, 2858, 3, 4, 4, (int)&v33, (int)&v16, (int)&v14);
  v13 = 0;
  v11 = 0;
  j_MobSpawnerData::MobSpawnerData(&v29, 1116962, 2, 4, 4, (int)&v33, (int)&v12, (int)&v10);
  v9 = 0;
  v7 = 0;
  j_MobSpawnerData::MobSpawnerData(&v30, 1116976, 8, 4, 4, (int)&v33, (int)&v8, (int)&v6);
  ptr = 0LL;
  v32 = 0;
  j_std::vector<MobSpawnerData,std::allocator<MobSpawnerData>>::_M_range_initialize<MobSpawnerData const*>(
    (char **)&ptr,
    (int)&v26,
    (int)&ptr);
  j_HardcodedSpawnAreaRegistry::initMobSpawnsForType((int)v2, 1, (int)&ptr);
  v4 = (MobSpawnerData *)HIDWORD(ptr);
  v3 = (MobSpawnerData *)ptr;
  if ( (_DWORD)ptr != HIDWORD(ptr) )
  {
    do
      v3 = (MobSpawnerData *)((char *)j_MobSpawnerData::~MobSpawnerData(v3) + 120);
    while ( v4 != v3 );
    v3 = (MobSpawnerData *)ptr;
  }
  if ( v3 )
    j_operator delete((void *)v3);
  j_MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v30);
  j_MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v29);
  j_MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v28);
  j_MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v27);
  result = j_MobSpawnerData::~MobSpawnerData((MobSpawnerData *)&v26);
  if ( v7 )
    result = (MobSpawnerData *)v7();
  if ( v9 )
    result = (MobSpawnerData *)v9();
  if ( v11 )
    result = (MobSpawnerData *)v11();
  if ( v13 )
    result = (MobSpawnerData *)v13();
  if ( v15 )
    result = (MobSpawnerData *)v15();
  if ( v17 )
    result = (MobSpawnerData *)v17();
  if ( v19 )
    result = (MobSpawnerData *)v19();
  if ( v21 )
    result = (MobSpawnerData *)v21();
  if ( v23 )
    result = (MobSpawnerData *)v23();
  if ( v25 )
    result = (MobSpawnerData *)v25();
  if ( v34 )
    result = (MobSpawnerData *)v34();
  return result;
}


int __fastcall NetherFortressFeature::getFeatureName(int result)
{
  *(_DWORD *)result = 8;
  *(_DWORD *)(result + 4) = "Fortress";
  return result;
}


int __fastcall NetherFortressFeature::clearCachedBuildings(NetherFortressFeature *this)
{
  NetherFortressFeature *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@2
  int v4; // r6@2
  int result; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        (*(void (**)(void))(*(_DWORD *)v3 + 4))();
      j_operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  result = 0;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  return result;
}


int __fastcall NetherFortressFeature::NetherFortressFeature(__int64 a1)
{
  int result; // r0@1

  HIDWORD(a1) = *(_DWORD *)HIDWORD(a1);
  result = j_StructureFeature::StructureFeature(a1);
  *(_DWORD *)result = &off_272394C;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 96) = 0;
  *(_DWORD *)(result + 100) = 0;
  return result;
}
