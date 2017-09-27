

int __fastcall TheEndDimension::getSpawnYPosition(TheEndDimension *this)
{
  int result; // r0@1

  _R0 = &unk_281C270;
  __asm
  {
    VLDR            S0, [R0,#8]
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall TheEndDimension::isNaturalDimension(TheEndDimension *this)
{
  return 0;
}


void __fastcall TheEndDimension::~TheEndDimension(TheEndDimension *this)
{
  TheEndDimension::~TheEndDimension(this);
}


void __fastcall TheEndDimension::~TheEndDimension(TheEndDimension *this)
{
  Dimension *v1; // r0@1

  v1 = TheEndDimension::~TheEndDimension(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall TheEndDimension::serialize(TheEndDimension *this, CompoundTag *a2)
{
  TheEndDimension::serialize(this, a2);
}


int __fastcall TheEndDimension::startLeaveGame(TheEndDimension *this)
{
  TheEndDimension *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@2
  int v4; // r6@2

  v1 = this;
  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        (*(void (**)(void))(*(_DWORD *)v3 + 4))();
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 324), 4 * (*(_QWORD *)((char *)v1 + 324) >> 32));
  *((_DWORD *)v1 + 83) = 0;
  *((_DWORD *)v1 + 84) = 0;
  return j_j_j__ZN9Dimension14startLeaveGameEv((Dimension *)v1);
}


int __fastcall TheEndDimension::TheEndDimension(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  void *v7; // r6@3
  _DWORD *v8; // r0@4
  __int64 v9; // r1@4
  signed int v10; // r0@6
  _DWORD *v17; // [sp+4h] [bp-4Ch]@4
  __int64 v18; // [sp+Ch] [bp-44h]@4
  char v19; // [sp+14h] [bp-3Ch]@4

  v2 = a2;
  v3 = a1;
  Dimension::Dimension(a1, a2, 2, 256);
  *(_DWORD *)v3 = &off_27185B4;
  *(_DWORD *)(v3 + 4) = &off_271869C;
  *(_DWORD *)(v3 + 320) = 0;
  *(_DWORD *)(v3 + 332) = 0;
  *(_DWORD *)(v3 + 336) = 0;
  *(_DWORD *)(v3 + 340) = 1065353216;
  *(_DWORD *)(v3 + 344) = 0;
  LODWORD(v4) = v3 + 340;
  v5 = sub_21E6254(v4);
  *(_DWORD *)(v3 + 328) = v5;
  if ( v5 == 1 )
  {
    v7 = (void *)(v3 + 348);
    *(_DWORD *)(v3 + 348) = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v3 + 324) = v7;
  *(_WORD *)(v3 + 20) = 63;
  v8 = operator new(4u);
  LODWORD(v9) = sub_19036A8;
  *v8 = v2;
  HIDWORD(v9) = sub_1903664;
  v17 = v8;
  v18 = v9;
  ThreadLocal<BiomeSource>::ThreadLocal((int)&v19, (int)&v17);
  ThreadLocal<BiomeSource>::operator=(v3 + 24, (int)&v19);
  ThreadLocal<BiomeSource>::~ThreadLocal((int)&v19);
  if ( (_DWORD)v18 )
    ((void (*)(void))v18)();
  v10 = MobSpawnInfo::categoryID(2816);
  __asm { VMOV.F32        S0, #2.0 }
  _R0 = v3 + 4 * v10;
  __asm
    VLDR            S2, [R0,#0x44]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x44]
  return v3;
}


int __fastcall TheEndDimension::isDay(TheEndDimension *this)
{
  return 0;
}


void __fastcall TheEndDimension::tick(TheEndDimension *this)
{
  EndDragonFight *v1; // r0@1

  v1 = (EndDragonFight *)*((_DWORD *)this + 80);
  if ( v1 )
    j_j_j__ZN14EndDragonFight4tickEv(v1);
  else
    JUMPOUT(0, TheEndDimension::isNaturalDimension);
}


signed int __fastcall TheEndDimension::translatePosAcrossDimension(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  int v8; // [sp+4h] [bp+0h]@1

  v4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = a4;
  v6 = a3;
  Level::getDimensionConversionData((Level *)&v8, *(_DWORD *)(a2 + 16));
  return Util::convertPointBetweenDimensions(v6, v4, v5, 2, (int)&v8);
}


int __fastcall TheEndDimension::getGatewayChunk(TheEndDimension *this, const BoundingBox *a2)
{
  int v2; // r5@1
  const BoundingBox *v3; // r4@1
  char *v4; // r0@4
  int v5; // r1@6
  int v6; // r0@8

  v2 = *((_DWORD *)this + 83);
  v3 = a2;
  while ( v2 )
  {
    v4 = EndGatewayChunkSource::getExitOrigin(*(EndGatewayChunkSource **)(v2 + 16));
    if ( *(_DWORD *)v4 >= *(_DWORD *)v3 && *(_DWORD *)v4 <= *((_DWORD *)v3 + 3) )
    {
      v5 = *((_DWORD *)v4 + 2);
      if ( v5 >= *((_DWORD *)v3 + 2) && v5 <= *((_DWORD *)v3 + 5) )
      {
        v6 = *((_DWORD *)v4 + 1);
        if ( v6 >= *((_DWORD *)v3 + 1) && v6 <= *((_DWORD *)v3 + 4) )
          return *(_DWORD *)(v2 + 16);
      }
    }
    v2 = *(_DWORD *)v2;
  }
  return 0;
}


void __fastcall TheEndDimension::tick(TheEndDimension *this)
{
  TheEndDimension::tick(this);
}


void __fastcall TheEndDimension::init(TheEndDimension *this)
{
  TheEndDimension *v1; // r4@1
  Level *v2; // r0@1
  int v3; // r6@1
  int v4; // r5@1
  signed int v5; // r6@1
  void *v6; // r0@1
  BlockSource *v7; // r7@3
  BlockSource **v8; // r6@3
  int v9; // r1@3
  Level *v10; // r0@5
  int v11; // r4@5
  void *v12; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int v17; // [sp+8h] [bp-30h]@5
  int v18; // [sp+10h] [bp-28h]@1

  v1 = this;
  Dimension::init((Dimension *)this);
  *((_BYTE *)v1 + 108) = Brightness::MIN;
  v2 = (Level *)Dimension::getLevel((Dimension *)v1);
  v3 = Level::getSavedData(v2);
  sub_21E94B4((void **)&v18, "TheEnd");
  v4 = (int)v1 + 4;
  v5 = SavedDataStorage::loadAndSet(v3, (int)v1 + 4, (int **)&v18);
  v6 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( !v5 )
    v7 = (BlockSource *)*((_DWORD *)v1 + 16);
    v8 = (BlockSource **)operator new(0x60u);
    EndDragonFight::EndDragonFight(v8, v7);
    v9 = *((_DWORD *)v1 + 80);
    *((_DWORD *)v1 + 80) = v8;
    if ( v9 )
      std::default_delete<EndDragonFight>::operator()((int)v1 + 320, v9);
    v10 = (Level *)Dimension::getLevel((Dimension *)v1);
    v11 = Level::getSavedData(v10);
    sub_21E94B4((void **)&v17, "TheEnd");
    SavedDataStorage::set(v11, (int **)&v17, v4);
    v12 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
}


signed int __fastcall TheEndDimension::getCloudHeight(TheEndDimension *this)
{
  return 1090519040;
}


Dimension *__fastcall TheEndDimension::~TheEndDimension(TheEndDimension *this)
{
  TheEndDimension *v1; // r4@1
  int v2; // r5@1
  int v3; // r0@2
  int v4; // r6@2
  char *v5; // r0@5
  int v6; // r1@8

  v1 = this;
  *(_DWORD *)this = &off_27185B4;
  *((_DWORD *)this + 1) = &off_271869C;
  v2 = *((_DWORD *)this + 83);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
        (*(void (**)(void))(*(_DWORD *)v3 + 4))();
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 324), 4 * (*(_QWORD *)((char *)v1 + 324) >> 32));
  *((_DWORD *)v1 + 83) = 0;
  *((_DWORD *)v1 + 84) = 0;
  v5 = (char *)*((_DWORD *)v1 + 81);
  if ( v5 && (char *)v1 + 348 != v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 80);
  if ( v6 )
    std::default_delete<EndDragonFight>::operator()((int)v1 + 320, v6);
  *((_DWORD *)v1 + 80) = 0;
  return j_j_j__ZN9DimensionD2Ev((Dimension *)v1);
}


int __fastcall TheEndDimension::getGatewayChunkAt(TheEndDimension *this, const BlockPos *a2)
{
  TheEndDimension *v2; // r4@1
  int v3; // r7@1
  __int64 v4; // kr00_8@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int result; // r0@18
  int v10; // [sp+0h] [bp-30h]@2
  int v11; // [sp+4h] [bp-2Ch]@2
  char v12; // [sp+8h] [bp-28h]@1

  v2 = this;
  ChunkPos::ChunkPos((ChunkPos *)&v12, a2);
  v3 = *((_DWORD *)v2 + 83);
  if ( v3 )
  {
    while ( 1 )
    {
      (*(void (__fastcall **)(int *))(**(_DWORD **)(v3 + 16) + 16))(&v10);
      v4 = *(_QWORD *)&v10;
      if ( v11 )
      {
        v5 = (unsigned int *)(v11 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(HIDWORD(v4) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 8))(HIDWORD(v4));
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
      }
      if ( (_DWORD)v4 )
        break;
      v3 = *(_DWORD *)v3;
      if ( !v3 )
        goto LABEL_18;
    }
    result = *(_DWORD *)(v3 + 16);
  }
  else
LABEL_18:
    result = 0;
  return result;
}


void __fastcall TheEndDimension::init(TheEndDimension *this)
{
  TheEndDimension::init(this);
}


int __fastcall TheEndDimension::isValidSpawn(TheEndDimension *this, int a2, int a3)
{
  return 0;
}


int __fastcall TheEndDimension::isFoggyAt(TheEndDimension *this, int a2, int a3)
{
  return 0;
}


int *__fastcall TheEndDimension::addGatewayChunkSource(TheEndDimension *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r10@1
  __int64 v4; // kr00_8@1
  int v5; // r6@1
  __int64 v6; // kr08_8@1
  unsigned int v7; // r6@1
  int *result; // r0@1
  int v9; // r8@2
  int v10; // r4@2
  bool v11; // zf@3
  int v12; // r9@9
  ChunkSource *v13; // r4@11
  EndGatewayChunkSource *v14; // r5@11
  bool v15; // zf@15
  BlockPos *v16; // [sp+4h] [bp-4Ch]@1
  TheEndDimension *v17; // [sp+8h] [bp-48h]@1
  int v18; // [sp+Ch] [bp-44h]@1
  char v19; // [sp+14h] [bp-3Ch]@11
  int v20; // [sp+1Ch] [bp-34h]@11
  int v21; // [sp+20h] [bp-30h]@11
  int v22; // [sp+24h] [bp-2Ch]@11
  EndGatewayChunkSource *v23; // [sp+28h] [bp-28h]@11

  v16 = a2;
  v17 = this;
  v3 = a3;
  v4 = *(_QWORD *)a3;
  v5 = *((_DWORD *)a3 + 2);
  v18 = v5;
  v6 = *(_QWORD *)((char *)this + 324);
  v7 = v5 + 8976890 * v4 + 981131 * HIDWORD(v4);
  result = *(int **)(v6 + 4 * (v7 % HIDWORD(v6)));
  if ( !result )
    goto LABEL_11;
  v9 = *result;
  v10 = *(_DWORD *)(*result + 20);
  while ( 1 )
  {
    v11 = v10 == v7;
    if ( v10 == v7 )
      v11 = (_DWORD)v4 == *(_DWORD *)(v9 + 4);
    if ( v11 && HIDWORD(v4) == *(_DWORD *)(v9 + 8) && v18 == *(_DWORD *)(v9 + 12) )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v12 + 20);
      result = (int *)v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 20) % HIDWORD(v6) == v7 % HIDWORD(v6) )
        continue;
    }
  }
  v15 = result == 0;
  if ( result )
    result = (int *)*result;
    v15 = result == 0;
  if ( v15 )
LABEL_11:
    v13 = (ChunkSource *)Dimension::getChunkSource((Dimension *)v17);
    v14 = (EndGatewayChunkSource *)operator new(0xBCu);
    EndGatewayChunkSource::EndGatewayChunkSource(v14, v13, v16, v3, 64);
    v20 = *(_DWORD *)v3;
    v21 = *((_DWORD *)v3 + 1);
    v22 = *((_DWORD *)v3 + 2);
    v23 = v14;
    std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<EndGatewayChunkSource,std::default_delete<EndGatewayChunkSource>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<EndGatewayChunkSource,std::default_delete<EndGatewayChunkSource>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,std::unique_ptr<EndGatewayChunkSource,std::default_delete<EndGatewayChunkSource>>>>(
      (int *)&v19,
      (TheEndDimension *)((char *)v17 + 324),
      (int)&v20);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    result = 0;
    v23 = 0;
  return result;
}


int __fastcall TheEndDimension::getTimeOfDay(TheEndDimension *this, int a2, float a3)
{
  return 0;
}


int __fastcall TheEndDimension::getFogColor(int result, float a2)
{
  *(_DWORD *)result = 1026910753;
  *(_DWORD *)(result + 4) = 1023819564;
  *(_DWORD *)(result + 8) = 1028099671;
  *(_DWORD *)(result + 12) = 1041865114;
  return result;
}


signed int __fastcall TheEndDimension::deserialize(TheEndDimension *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  TheEndDimension *v3; // r5@1
  BlockSource *v4; // r4@1
  BlockSource **v5; // r6@1
  int v6; // r1@1
  int v7; // r6@3
  void *v8; // r0@3
  EndDragonFight *v9; // r4@5
  const CompoundTag *v10; // r0@5
  void *v11; // r0@5
  void *v12; // r0@6
  signed int v13; // r11@8
  void **v14; // r6@9
  int v15; // r7@9
  const char *v16; // r5@9
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  CompoundTag *v21; // r10@26
  ListTag *v22; // r8@28
  void *v23; // r0@28
  ListTag *v24; // r4@29
  void *v25; // r0@29
  bool v26; // zf@30
  __int64 v27; // r5@33
  void **v28; // r10@33
  int v29; // r0@33
  int v30; // r0@33
  signed int result; // r0@35
  unsigned int *v32; // r2@36
  signed int v33; // r1@38
  unsigned int *v34; // r2@40
  signed int v35; // r1@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  TheEndDimension *v38; // [sp+8h] [bp-70h]@6
  ListTag *v39; // [sp+10h] [bp-68h]@6
  int v40; // [sp+14h] [bp-64h]@33
  int v41; // [sp+18h] [bp-60h]@33
  int v42; // [sp+1Ch] [bp-5Ch]@33
  __int64 v43; // [sp+20h] [bp-58h]@33
  int v44; // [sp+28h] [bp-50h]@33
  int v45; // [sp+30h] [bp-48h]@14
  int v46; // [sp+38h] [bp-40h]@9
  int v47; // [sp+40h] [bp-38h]@6
  int v48; // [sp+48h] [bp-30h]@5
  int v49; // [sp+50h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  Dimension::deserialize((Dimension *)this, a2);
  v4 = (BlockSource *)*((_DWORD *)v3 + 16);
  v5 = (BlockSource **)operator new(0x60u);
  EndDragonFight::EndDragonFight(v5, v4);
  v6 = *((_DWORD *)v3 + 80);
  *((_DWORD *)v3 + 80) = v5;
  if ( v6 )
    std::default_delete<EndDragonFight>::operator()((int)v3 + 320, v6);
  sub_21E94B4((void **)&v49, "DragonFight");
  v7 = CompoundTag::getCompound((int)v2, (const void **)&v49);
  v8 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  if ( v7 )
    v9 = (EndDragonFight *)*((_DWORD *)v3 + 80);
    sub_21E94B4((void **)&v48, "DragonFight");
    v10 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v48);
    EndDragonFight::loadData(v9, v10);
    v11 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v48 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v47, "Gateways");
  v38 = v3;
  v39 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v47);
  v12 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v47 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( v39 )
    v13 = ListTag::size(v39);
    if ( v13 >= 1 )
      v14 = (void **)&v46;
      v15 = 0;
      v16 = "Entry";
        v21 = (CompoundTag *)ListTag::get(v39, v15);
        if ( (*(int (**)(void))(*(_DWORD *)v21 + 24))() == 10 && !CompoundTag::isEmpty(v21) )
        {
          sub_21E94B4(v14, v16);
          v22 = (ListTag *)CompoundTag::getList((int)v21, (const void **)v14);
          v23 = (void *)(v46 - 12);
          if ( (int *)(v46 - 12) != &dword_28898C0 )
          {
            v17 = (unsigned int *)(v46 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v23);
          }
          sub_21E94B4((void **)&v45, "Exit");
          v24 = (ListTag *)CompoundTag::getList((int)v21, (const void **)&v45);
          v25 = (void *)(v45 - 12);
          if ( (int *)(v45 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v45 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          v26 = v22 == 0;
          if ( v22 )
            v26 = v24 == 0;
          if ( !v26 )
            LODWORD(v27) = ListTag::getInt(v22, 0);
            v28 = v14;
            HIDWORD(v27) = ListTag::getInt(v22, 1);
            v29 = ListTag::getInt(v22, 2);
            v43 = v27;
            v44 = v29;
            LODWORD(v27) = ListTag::getInt(v24, 0);
            HIDWORD(v27) = ListTag::getInt(v24, 1);
            v30 = ListTag::getInt(v24, 2);
            v40 = v27;
            v41 = HIDWORD(v27);
            v42 = v30;
            v14 = v28;
            v16 = "Entry";
            TheEndDimension::addGatewayChunkSource(v38, (const BlockPos *)&v43, (const BlockPos *)&v40);
        }
        ++v15;
      while ( v15 < v13 );
  result = 1;
  *((_BYTE *)v38 + 8) = 1;
  return result;
}


int __fastcall TheEndDimension::hasGround(TheEndDimension *this)
{
  return 0;
}


void __fastcall TheEndDimension::serialize(TheEndDimension *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  TheEndDimension *v3; // r5@1
  CompoundTag *v4; // r4@2
  void *v5; // r0@4
  int i; // r11@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  void *v11; // r10@23
  char *v12; // r9@23
  int v13; // r1@23
  void **v14; // r0@23
  void **v15; // r0@23
  int v16; // r1@23
  void *v17; // r0@27
  char *v18; // r7@28
  int v19; // r1@28
  void **v20; // r0@28
  void **v21; // r0@28
  int v22; // r1@28
  void *v23; // r0@32
  void *v24; // r0@38
  unsigned int *v25; // r2@40
  signed int v26; // r1@42
  unsigned int *v27; // r2@44
  signed int v28; // r1@46
  void *v29; // [sp+Ch] [bp-6Ch]@5
  void *v30; // [sp+14h] [bp-64h]@36
  int v31; // [sp+1Ch] [bp-5Ch]@36
  void *v32; // [sp+20h] [bp-58h]@33
  int v33; // [sp+24h] [bp-54h]@28
  int v34; // [sp+28h] [bp-50h]@28
  int v35; // [sp+30h] [bp-48h]@11
  int v36; // [sp+34h] [bp-44h]@23
  int v37; // [sp+38h] [bp-40h]@23
  int v38; // [sp+40h] [bp-38h]@7
  CompoundTag *v39; // [sp+44h] [bp-34h]@2
  int v40; // [sp+4Ch] [bp-2Ch]@2

  v2 = a2;
  v3 = this;
  Dimension::serialize((Dimension *)this, a2);
  if ( *((_DWORD *)v3 + 80) )
  {
    v4 = (CompoundTag *)operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v4);
    EndDragonFight::saveData(*((EndDragonFight **)v3 + 80), v4);
    sub_21E94B4((void **)&v40, "DragonFight");
    v39 = v4;
    CompoundTag::put((int)v2, (const void **)&v40, (int *)&v39);
    if ( v39 )
      (*(void (**)(void))(*(_DWORD *)v39 + 4))();
    v39 = 0;
    v5 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
  }
  v29 = operator new(0x14u);
  ListTag::ListTag((int)v29);
  for ( i = *((_DWORD *)v3 + 83); i; i = *(_DWORD *)i )
    v11 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v11);
    v12 = EndGatewayChunkSource::getEntryPos(*(EndGatewayChunkSource **)(i + 16));
    sub_21E94B4((void **)&v38, "Entry");
    v13 = *(_DWORD *)v12;
    v36 = 0;
    ListTagIntAdder::operator()((void **)&v36, v13);
    v14 = ListTagIntAdder::operator()((void **)&v36, *((_DWORD *)v12 + 1));
    v15 = ListTagIntAdder::operator()(v14, *((_DWORD *)v12 + 2));
    v16 = (int)*v15;
    *v15 = 0;
    v37 = v16;
    CompoundTag::put((int)v11, (const void **)&v38, &v37);
    if ( v37 )
      (*(void (**)(void))(*(_DWORD *)v37 + 4))();
    v37 = 0;
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 4))();
    v17 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v38 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = EndGatewayChunkSource::getExitOrigin(*(EndGatewayChunkSource **)(i + 16));
    sub_21E94B4((void **)&v35, "Exit");
    v19 = *(_DWORD *)v18;
    v33 = 0;
    ListTagIntAdder::operator()((void **)&v33, v19);
    v20 = ListTagIntAdder::operator()((void **)&v33, *((_DWORD *)v18 + 1));
    v21 = ListTagIntAdder::operator()(v20, *((_DWORD *)v18 + 2));
    v22 = (int)*v21;
    *v21 = 0;
    v34 = v22;
    CompoundTag::put((int)v11, (const void **)&v35, &v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
    if ( v33 )
      (*(void (**)(void))(*(_DWORD *)v33 + 4))();
    v23 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v35 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v32 = v11;
    ListTag::add((int)v29, (int *)&v32);
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 4))();
    v32 = 0;
  sub_21E94B4((void **)&v31, "Gateways");
  v30 = v29;
  CompoundTag::put((int)v2, (const void **)&v31, (int *)&v30);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  v30 = 0;
  v24 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
}


int __fastcall TheEndDimension::mayRespawn(TheEndDimension *this)
{
  return 0;
}
