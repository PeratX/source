

          if ( v24 == v28 && LevelChunk::needsSaving(v23, 0, 0) == 1 )
{
        }
      }
    }
  }
LABEL_17:
  *(_BYTE *)(v1 + 5864) = 0;
  return 1;
}


int __fastcall LevelChunk::getCachedTemperatureNoise(LevelChunk *this, const ChunkBlockPos *a2)
{
  LevelChunk *v2; // r4@1
  const ChunkBlockPos *v3; // r5@1

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 1964) )
  {
    Biome::buildCachedTemperatureNoise(this, a2);
    *((_BYTE *)v2 + 1964) = 1;
  }
  return *((_BYTE *)v2 + 4 * (unsigned __int8)(*(_BYTE *)v3 + 16 * *((_BYTE *)v3 + 1)) + 403);
}


Entity *__fastcall LevelChunk::getEntity(int a1, unsigned __int64 *a2)
{
  Entity **v2; // r6@1
  unsigned __int64 *v3; // r4@1
  Entity **v4; // r5@1
  int v5; // r7@2
  __int64 v6; // r0@2
  Entity *result; // r0@4

  v2 = *(Entity ***)(a1 + 2884);
  v3 = a2;
  v4 = *(Entity ***)(a1 + 2888);
  if ( v2 == v4 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = (int)(v2 + 1);
      v6 = *(_QWORD *)Entity::getUniqueID(*v2);
      HIDWORD(v6) ^= *v3 >> 32;
      if ( v6 == (unsigned int)*v3 )
        break;
      ++v2;
      if ( v4 == (Entity **)v5 )
        goto LABEL_4;
    }
    result = *v2;
  return result;
}


int __fastcall LevelChunk::serializeEntities(int result, IDataOutput *a2)
{
  int v2; // r9@1
  IDataOutput *v3; // r8@1
  int v4; // r5@1
  int i; // r7@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void *v8; // r0@12
  int v9; // [sp+0h] [bp-48h]@11
  int v10; // [sp+1Ch] [bp-2Ch]@3

  v2 = result;
  v3 = a2;
  v4 = *(_DWORD *)(result + 2884);
  for ( i = *(_DWORD *)(result + 2888); v4 != i; v4 += 4 )
  {
    CompoundTag::CompoundTag((int)&v9);
    if ( (*(int (**)(void))(**(_DWORD **)v4 + 472))() == 1 )
    {
      (*(void (__fastcall **)(int *, int *))(v9 + 44))(&v10, &v9);
      Tag::writeNamedTag((int)&v10, (int)&v9, (int)v3);
      v8 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
    }
    result = (int)CompoundTag::~CompoundTag((CompoundTag *)&v9);
  }
  if ( *(_DWORD *)(*(_DWORD *)(v2 + 52) - 12) )
    result = (*(int (__fastcall **)(IDataOutput *))(*(_DWORD *)v3 + 40))(v3);
  return result;
}


int __fastcall LevelChunk::getBiome(LevelChunk *this, const ChunkBlockPos *a2)
{
  int v2; // r1@1

  v2 = *(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1);
  return Biome::getBiome((Biome *)*((_BYTE *)this + v2 + 144), v2);
}


signed int __fastcall LevelChunk::isSkyLit(LevelChunk *this, const ChunkBlockPos *a2)
{
  signed int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_BYTE *)this + 2 * (unsigned __int8)(*(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1)) + 1424);
  result = 0;
  if ( *((_WORD *)a2 + 1) >= v2 )
    result = 1;
  return result;
}


LevelChunk *__fastcall LevelChunk::deserializeBorderBlocks(LevelChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r4@1
  LevelChunk *v3; // r5@1
  LevelChunk *result; // r0@1
  LevelChunk *v5; // r6@1

  v2 = a2;
  v3 = this;
  result = (LevelChunk *)(*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  v5 = result;
  if ( result )
  {
    do
    {
      v5 = (LevelChunk *)((char *)v5 - 1);
      result = (LevelChunk *)((char *)v3 + (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 24))(v2));
      *((_BYTE *)result + 1965) = 1;
    }
    while ( (_BYTE)v5 );
  }
  return result;
}


char *__fastcall LevelChunk::setGrassColor(LevelChunk *this, int a2, const ChunkBlockPos *a3)
{
  char *result; // r0@1

  result = (char *)this + 4 * (unsigned __int8)(*(_BYTE *)a3 + 16 * *((_BYTE *)a3 + 1));
  *((_DWORD *)result + 100) = *((_DWORD *)result + 100) & 0xFF000000 | a2 & 0xFFFFFF;
  return result;
}


char *__fastcall LevelChunk::deserializeBlockExtraData(LevelChunk *this, IDataInput *a2)
{
  char *result; // r0@1
  char *v3; // r11@1
  unsigned int v4; // r5@2
  int v5; // r7@2
  char *v6; // r10@3
  int v7; // r8@3
  char *v8; // r9@5
  bool v9; // zf@8
  _DWORD *v10; // r0@12
  unsigned __int8 v11; // vf@13
  IDataInput *v12; // [sp+8h] [bp-30h]@1
  LevelChunk *v13; // [sp+Ch] [bp-2Ch]@1
  __int16 v14; // [sp+10h] [bp-28h]@2

  v12 = a2;
  v13 = this;
  result = (char *)(*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  v3 = result;
  if ( (signed int)result >= 1 )
  {
    do
    {
      v4 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v12 + 32))(v12);
      v14 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v12 + 28))(v12);
      v5 = v4 % *((_DWORD *)v13 + 732);
      result = *(char **)(*((_DWORD *)v13 + 731) + 4 * v5);
      if ( !result )
        goto LABEL_12;
      v6 = *(char **)result;
      v7 = *(_DWORD *)(*(_DWORD *)result + 4);
      while ( v4 != v7 )
      {
        v8 = *(char **)v6;
        if ( *(_DWORD *)v6 )
        {
          v7 = *((_DWORD *)v8 + 1);
          result = v6;
          v6 = *(char **)v6;
          if ( *((_DWORD *)v8 + 1) % *((_DWORD *)v13 + 732) == v5 )
            continue;
        }
      }
      v9 = result == 0;
      if ( result )
        result = *(char **)result;
        v9 = result == 0;
      if ( v9 )
LABEL_12:
        v10 = operator new(0xCu);
        *v10 = 0;
        v10[1] = v4;
        *((_WORD *)v10 + 4) = 0;
        result = (char *)std::_Hashtable<int,std::pair<int const,unsigned short>,std::allocator<std::pair<int const,unsigned short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                           (int)v13 + 2924,
                           v5,
                           v4,
                           (int)v10);
      v11 = __OFSUB__(v3--, 1);
      *((_WORD *)result + 4) = v14;
    }
    while ( !((unsigned __int8)(((signed int)v3 < 0) ^ v11) | (v3 == 0)) );
  }
  return result;
}


signed int __fastcall LevelChunk::isAABBOverlappingChunk(LevelChunk *this, const BlockPos *a2, const BlockPos *a3)
{
  LevelChunk *v3; // r12@1
  signed int result; // r0@3

  v3 = this;
  if ( *((_DWORD *)this + 5) <= *(_DWORD *)a2 || *((_DWORD *)this + 2) >= *(_DWORD *)a3 )
  {
    result = 0;
  }
  else
    if ( *((_DWORD *)v3 + 7) > *((_DWORD *)a2 + 2) && *((_DWORD *)v3 + 4) < *((_DWORD *)a3 + 2) )
      result = 1;
  return result;
}


int __fastcall LevelChunk::tickBlocks(LevelChunk *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  LevelChunk *v3; // r4@1
  Level *v4; // r7@1
  __int64 v5; // r5@1
  LevelChunk *v6; // r10@1
  Dimension *v7; // r0@1
  Weather *v8; // r0@1
  Weather *v9; // r8@1
  int v15; // r6@1
  int v16; // r5@1
  int v18; // r1@4
  unsigned int v19; // r0@4
  int v20; // r1@4
  Biome *v21; // r0@4
  unsigned __int64 *v23; // r0@8
  unsigned int v24; // r0@9
  int v25; // r0@10
  unsigned int v26; // r0@13
  unsigned int v27; // r1@13
  signed int v28; // r2@13
  char v29; // r1@17
  unsigned int v30; // r0@17
  void *v31; // r0@18
  void *v32; // r0@19
  void *v33; // r0@20
  void *v34; // r0@21
  void *v35; // r0@22
  void *v36; // r0@23
  int v37; // r0@25
  Entity *v38; // r2@25
  void (*v39)(void); // r3@25
  int v40; // r1@29
  unsigned int v41; // r0@29
  Biome *v42; // r4@32
  unsigned int v47; // r5@33
  int v49; // r0@39
  void (*v51)(void); // r5@39
  int result; // r0@40
  signed int v55; // r6@41
  int v56; // r0@42
  unsigned int v57; // r0@42
  _BYTE *v60; // r2@42
  int v61; // r0@43
  int v62; // r7@45
  unsigned int *v63; // r2@49
  signed int v64; // r1@51
  unsigned int *v65; // r2@53
  signed int v66; // r1@55
  unsigned int *v67; // r2@57
  signed int v68; // r1@59
  unsigned int *v69; // r2@61
  signed int v70; // r1@63
  unsigned int *v71; // r2@65
  signed int v72; // r1@67
  unsigned int *v73; // r2@69
  signed int v74; // r1@71
  Random *v75; // [sp+18h] [bp-E0h]@1
  Entity *v76; // [sp+1Ch] [bp-DCh]@39
  int v77; // [sp+20h] [bp-D8h]@39
  int v78; // [sp+24h] [bp-D4h]@39
  Entity *v79; // [sp+28h] [bp-D0h]@39
  int v80; // [sp+2Ch] [bp-CCh]@39
  int v81; // [sp+30h] [bp-C8h]@39
  char v82; // [sp+34h] [bp-C4h]@31
  Entity *v83; // [sp+38h] [bp-C0h]@18
  int v84; // [sp+3Ch] [bp-BCh]@30
  int v85; // [sp+40h] [bp-B8h]@30
  Entity *v86; // [sp+44h] [bp-B4h]@29
  int v87; // [sp+48h] [bp-B0h]@29
  int v88; // [sp+4Ch] [bp-ACh]@29
  char v89; // [sp+50h] [bp-A8h]@27
  Entity *v90; // [sp+5Ch] [bp-9Ch]@25
  char v91; // [sp+60h] [bp-98h]@18
  int v92; // [sp+70h] [bp-88h]@18
  int v93; // [sp+74h] [bp-84h]@18
  int v94; // [sp+7Ch] [bp-7Ch]@18
  int v95; // [sp+80h] [bp-78h]@18
  int v96; // [sp+84h] [bp-74h]@19
  int v97; // [sp+88h] [bp-70h]@18
  Entity *v98; // [sp+8Ch] [bp-6Ch]@17
  int v99; // [sp+90h] [bp-68h]@17
  int v100; // [sp+94h] [bp-64h]@17
  char v101; // [sp+98h] [bp-60h]@5
  Entity *v102; // [sp+A4h] [bp-54h]@4
  int v103; // [sp+A8h] [bp-50h]@4
  int v104; // [sp+ACh] [bp-4Ch]@4
  Entity *v105; // [sp+B0h] [bp-48h]@4
  int v106; // [sp+B4h] [bp-44h]@4
  int v107; // [sp+B8h] [bp-40h]@4

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  v75 = (Random *)Level::getRandom(v4);
  v5 = *((_QWORD *)v3 + 4);
  v6 = v3;
  v7 = (Dimension *)BlockSource::getDimension(v2);
  v8 = (Weather *)Dimension::getWeather(v7);
  v9 = v8;
  _R0 = Weather::getLightningLevel(v8, 1.0);
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S4, =3000.0
    VMOV            S2, R0
    VLDR            S6, =100000.0
  }
  v15 = 16 * HIDWORD(v5);
  v16 = 16 * v5;
    VSUB.F32        S0, S0, S2
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S6
    VADD.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R4, S0
  if ( (!_R4 || !(Random::_genRandInt32(v75) % _R4)) && Weather::isLightning(v9) == 1 )
    v18 = dword_27B57A0;
    __dmb();
    dword_27B57A0 = 3 * v18 + 1013904223;
    v19 = dword_27B57A0;
    v20 = *((_DWORD *)v6 + 6);
    v105 = (Entity *)((v19 >> 2) & 0xF | v16);
    v106 = v20 + 1;
    v107 = (v19 >> 10) & 0xF | v15;
    BlockSource::getTopRainBlockPos((BlockSource *)&v102, v2, (const BlockPos *)&v105);
    v105 = v102;
    v106 = v103;
    v107 = v104;
    v21 = (Biome *)BlockSource::getBiome(v2, (const BlockPos *)&v105);
    _R0 = Biome::getDownfall(v21);
    __asm
    {
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      Vec3::Vec3((int)&v101, (int)&v105);
      sub_18F3804(v2, (int)&v101);
  if ( Weather::isRaining(v9) == 1 && Weather::isLightning(v9) == 1 )
    v23 = (unsigned __int64 *)Level::getGameRules(v4);
    if ( GameRules::getBool(v23, (int **)&GameRules::DO_MOB_SPAWNING) == 1 )
      v24 = Random::_genRandInt32(v75);
      if ( v24 == 100000 * (v24 / 0x186A0) )
      {
        v25 = Level::getDifficulty(*(Level **)v6);
        if ( v25 == 1 )
        {
          v26 = Random::_genRandInt32(v75);
          v27 = v26 / 0x86;
          v28 = 134;
        }
        else if ( v25 == 3 )
          v28 = 45;
          v27 = v26 / 0x2D;
        else
          if ( v25 != 2 )
            goto LABEL_29;
          v27 = v26 / 0x43;
          v28 = 67;
        if ( v26 == v27 * v28 )
          v29 = dword_27B57A0;
          __dmb();
          v30 = dword_27B57A0;
          v105 = (Entity *)(v29 & 0xF | v16);
          v106 = 0;
          v107 = (v30 >> 8) & 0xF | v15;
          LevelChunk::findLightningTarget((LevelChunk *)&v98, v6, (BlockSource *)&v105, v2);
          v105 = v98;
          v106 = v99;
          v107 = v100;
          if ( Weather::isRainingAt(v9, v2, (const BlockPos *)&v105) == 1 )
          {
            sub_21E94B4((void **)&v94, "minecraft");
            EntityTypeToString((void **)&v93, 0x215B1Au, 0);
            sub_21E94B4((void **)&v92, "minecraft:set_trap");
            EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v95, &v94, &v93, &v92);
            Vec3::Vec3((int)&v91, (int)&v105);
            EntityFactory::createSpawnedEntity(&v83, (const void **)&v95, 0, (int)&v91, &Vec2::ZERO);
            v31 = (void *)(v97 - 12);
            if ( (int *)(v97 - 12) != &dword_28898C0 )
            {
              v63 = (unsigned int *)(v97 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
              }
              else
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j__ZdlPv_9(v31);
            }
            v32 = (void *)(v96 - 12);
            if ( (int *)(v96 - 12) != &dword_28898C0 )
              v65 = (unsigned int *)(v96 - 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j__ZdlPv_9(v32);
            v33 = (void *)(v95 - 12);
            if ( (int *)(v95 - 12) != &dword_28898C0 )
              v67 = (unsigned int *)(v95 - 4);
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            v34 = (void *)(v92 - 12);
            if ( (int *)(v92 - 12) != &dword_28898C0 )
              v69 = (unsigned int *)(v92 - 4);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            v35 = (void *)(v93 - 12);
            if ( (int *)(v93 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v93 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j__ZdlPv_9(v35);
            v36 = (void *)(v94 - 12);
            if ( (int *)(v94 - 12) != &dword_28898C0 )
              v73 = (unsigned int *)(v94 - 4);
                  v74 = __ldrex(v73);
                while ( __strex(v74 - 1, v73) );
                v74 = (*v73)--;
              if ( v74 <= 0 )
                j_j_j_j__ZdlPv_9(v36);
            if ( v83 )
              Entity::setPersistent(v83);
              v37 = BlockSource::getLevel(v2);
              v38 = v83;
              v39 = *(void (**)(void))(*(_DWORD *)v37 + 44);
              v83 = 0;
              v90 = v38;
              v39();
              if ( v90 )
                (*(void (**)(void))(*(_DWORD *)v90 + 32))();
              v90 = 0;
              Vec3::Vec3((int)&v89, (int)&v105);
              sub_18F3804(v2, (int)&v89);
              if ( v83 )
                (*(void (**)(void))(*(_DWORD *)v83 + 32))();
          }
      }
LABEL_29:
  v40 = dword_27B57A0;
  __dmb();
  dword_27B57A0 = 3 * v40 + 1013904223;
  v41 = dword_27B57A0;
  v106 = *((_DWORD *)v6 + 6) + 1;
  v105 = (Entity *)((v41 >> 2) & 0xF | v16);
  v107 = (v41 >> 10) & 0xF | v15;
  BlockSource::getTopRainBlockPos((BlockSource *)&v86, v2, (const BlockPos *)&v105);
  v105 = v86;
  v106 = v87;
  v107 = v88;
  if ( !(Random::_genRandInt32(v75) & 0xF) )
    v83 = v105;
    v84 = v106 - 1;
    v85 = v107;
    if ( BlockSource::shouldFreezeIgnoreNeighbors(v2, (const BlockPos *)&v83) == 1 )
      BlockSource::removeBlock(v2, (const BlockPos *)&v83);
      v82 = *(_BYTE *)(Block::mIce + 4);
      BlockSource::setBlock((int)v2, (int)v83, v84, v85, &v82, 2);
  v42 = (Biome *)BlockSource::getBiome(v2, (const BlockPos *)&v105);
  _R0 = Weather::getRainLevel(v9, 0.0);
  __asm { VMOV            S16, R0 }
  _R0 = Biome::getDownfall(v42);
    VMOV            S0, R0
    VMUL.F32        S16, S0, S16
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDR            S0, =-512.0
      VMUL.F32        S0, S16, S0
    _R0 = &Biome::RAIN_TEMP_THRESHOLD;
      VLDR            S18, [R0]
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    v47 = _R0 + 256;
    if ( _R0 + 256 < 16 )
      v47 = 16;
    if ( !v47 || !(Random::_genRandInt32(v75) % v47) )
      Weather::tryToPlaceTopSnow(v9, v2, (const BlockPos *)&v105, 1, 1);
    _R0 = Biome::getTemperature(v42, v2, (const BlockPos *)&v105);
      VCMPE.F32       S0, S18
      v79 = v105;
      v80 = v106 - 1;
      v81 = v107;
      v49 = BlockSource::getBlock(v2, (const BlockPos *)&v79);
      __asm { VMOV            R3, S16 }
      v51 = *(void (**)(void))(*(_DWORD *)v49 + 136);
      v76 = v105;
      v77 = v106 - 1;
      v78 = v107;
      v51();
  result = *((_DWORD *)v6 + 35);
    VMOV.F32        S0, #2.5
    SBFX.W          R1, R0, #0, #0x1E
    VMOV            S2, R1
    VCVT.F32.U32    S2, S2
    VMUL.F32        S0, S2, S0
    VMOV            R9, S0
  if ( _R9 )
    v55 = (signed __int16)(16 * result);
    do
      v56 = dword_27B57A0;
      __dmb();
      dword_27B57A0 = 3 * v56 + 1013904223;
      v57 = dword_27B57A0;
      LOBYTE(v83) = (v57 >> 2) & 0xF;
      BYTE1(v83) = (v57 >> 10) & 0xF;
      _R1 = ((signed int)v57 >> 18) % v55;
      HIWORD(v83) = _R1;
      __asm { SBFX.W          R0, R1, #4, #0xC }
      v60 = &BlockID::AIR;
      if ( _R0 < *((_DWORD *)v6 + 35) )
        v61 = *((_DWORD *)v6 + _R0 + 19);
        v60 = &BlockID::AIR;
        if ( v61 )
          v60 = (_BYTE *)(v61
                        + (_R1 & 0xF | ((unsigned int)(unsigned __int16)v83 >> 4) & 0xFF0)
                        + ((unsigned __int16)v83 << 8));
      v62 = *v60;
      result = Block::mShouldTick[v62];
      if ( Block::mShouldTick[v62] )
        ChunkBlockPos::operator+((int)&v105, (int)&v83, (int)v6 + 8);
        result = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v62] + 8))();
      --_R9;
    while ( _R9 );
  return result;
}


int __fastcall LevelChunk::needsUpgradeFix(LevelChunk *this)
{
  signed int v1; // r2@1
  int v2; // r0@1
  signed int v3; // r1@1

  v1 = 0;
  v2 = *((_BYTE *)this + 48);
  v3 = 0;
  if ( v2 != SharedConstants::CurrentLevelChunkFormat )
    v3 = 1;
  if ( v2 != 5 )
    v1 = 1;
  return v1 & v3;
}


int __fastcall LevelChunk::serializeBlockEntities(int result, IDataOutput *a2)
{
  int v2; // r6@1
  IDataOutput *i; // r4@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // r7@11
  void *v7; // r0@12
  int v8; // [sp+0h] [bp-48h]@11
  int v9; // [sp+1Ch] [bp-2Ch]@3

  v2 = *(_DWORD *)(result + 2904);
  for ( i = a2; v2; v2 = *(_DWORD *)v2 )
  {
    v6 = *(_DWORD *)(v2 + 8);
    CompoundTag::CompoundTag((int)&v8);
    if ( (*(int (__fastcall **)(int, int *))(*(_DWORD *)v6 + 12))(v6, &v8) == 1 )
    {
      (*(void (__fastcall **)(int *, int *))(v8 + 44))(&v9, &v8);
      Tag::writeNamedTag((int)&v9, (int)&v8, (int)i);
      v7 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
    }
    result = (int)CompoundTag::~CompoundTag((CompoundTag *)&v8);
  }
  return result;
}


int __fastcall LevelChunk::recomputeHeightMap(__int64 this)
{
  int v1; // r4@1
  unsigned int v2; // r7@1
  int v3; // r6@1
  int v4; // r3@1
  bool v5; // cf@1
  bool v6; // zf@1
  int v7; // r7@1
  int v8; // r11@3
  int v9; // r3@3
  int v10; // r1@3
  int v11; // r9@5
  signed int v12; // r12@6
  int v13; // lr@6
  int v14; // r5@7
  int v15; // r10@7
  __int16 v16; // r5@12
  int v17; // r0@14
  signed int v18; // r5@16
  signed int v19; // r2@20
  int v20; // r6@20
  signed int v21; // r0@21
  int result; // r0@24
  int v23; // [sp+0h] [bp-40h]@5
  __int16 v24; // [sp+4h] [bp-3Ch]@3
  int v25; // [sp+8h] [bp-38h]@3
  int v26; // [sp+Ch] [bp-34h]@3
  __int64 v27; // [sp+10h] [bp-30h]@1

  v1 = this + 76;
  v27 = this;
  v2 = *(_BYTE *)(this + 2952);
  v3 = *(_DWORD *)(this + 140);
  v4 = (unsigned __int8)Brightness::MAX;
  v5 = v2 >= (unsigned __int8)Brightness::MIN;
  v6 = v2 == (unsigned __int8)Brightness::MIN;
  v7 = Brightness::MIN & 0xF;
  if ( v6 || !v5 )
    v4 = (unsigned __int8)Brightness::MIN;
  v8 = v7 | 16 * v4;
  v9 = v7 | 16 * (unsigned __int8)Brightness::MIN;
  v25 = 16 * v3 + 0xFFFF;
  v10 = this + 1424;
  v24 = 16 * v3;
  v26 = 0;
  do
  {
    if ( (signed __int16)v25 < 0 )
    {
      v19 = 16;
      v20 = v10;
      v23 = v10;
      do
      {
        v21 = *(_WORD *)(v27 + 24);
        if ( v21 >= v24 )
          LOWORD(v21) = v24;
        --v19;
        *(_WORD *)v20 = v21;
        *(_WORD *)(v20 + 948) = -999;
        v20 += 32;
      }
      while ( v19 );
    }
    else
      v11 = 0;
        v12 = v25;
        v13 = 16 * v11;
        if ( HIDWORD(v27) )
        {
          do
          {
            v14 = *(_DWORD *)(v1 + 4 * (v12 >> 4));
            v15 = (v12 & 0xF | v13) + (v26 << 8);
            if ( Block::mLightBlock[*(_BYTE *)(v14 + v15)] )
              break;
            *(_BYTE *)(v14 + v15 + 6144) = v8;
            --v12;
          }
          while ( v12 > -1 );
        }
        else
            if ( Block::mLightBlock[*(_BYTE *)(*(_DWORD *)(v1 + 4 * (v12 >> 4))
                                             + (unsigned __int16)((v12 & 0xF | v13) + ((_WORD)v26 << 8)))] )
        v16 = v12 + 1;
        if ( *(_WORD *)(v27 + 24) < (signed __int16)(v12 + 1) )
          v16 = *(_WORD *)(v27 + 24);
        v17 = v27 + 2 * (v26 + 16 * v11);
        *(_WORD *)(v17 + 1424) = v16;
        *(_WORD *)(v17 + 2372) = -999;
        if ( v12 >= 0 && HIDWORD(v27) )
          v18 = v12 + 1;
            --v18;
            *(_BYTE *)(*(_DWORD *)(v1 + 4 * (v18 >> 4)) + (v18 & 0xF | v13) + (v26 << 8) + 6144) = v9;
          while ( v18 > 0 );
        ++v11;
      while ( v11 != 16 );
    v10 = v23 + 2;
    result = v26 + 1;
    v26 = result;
  }
  while ( result != 16 );
  return result;
}


BlockEntity *__fastcall LevelChunk::_placeCallbacks(int a1, int a2, char *a3, char *a4, __int64 a5)
{
  int v5; // r9@1
  int v6; // r5@1
  char *v7; // r10@1
  int v8; // r11@1
  __int64 v9; // r6@1
  char v10; // r0@1
  int v11; // r4@3
  signed int v12; // r7@3
  int v13; // r0@4
  int v14; // r8@10
  signed int v15; // r5@10
  char v16; // r0@11
  int v17; // r0@11
  signed int v18; // r1@11
  int v19; // r6@12
  signed int v20; // r2@12
  signed int v21; // r3@12
  int v22; // r2@16
  signed int v23; // r3@16
  bool v24; // nf@18
  unsigned __int8 v25; // vf@18
  signed int v26; // r6@18
  signed int v27; // r2@21
  CircuitSystem *v28; // r0@31
  BlockEntity *v29; // r0@33
  char *v30; // r0@33
  BlockEntity *result; // r0@35
  unsigned int v32; // r0@37
  int v33; // r4@37
  int v34; // r7@37
  unsigned int v35; // r11@37
  unsigned int v36; // r8@37
  unsigned int v37; // r9@37
  unsigned int v38; // r5@37
  int v39; // r10@38
  int v40; // r7@38
  unsigned int v41; // r1@40
  bool v42; // zf@40
  int v43; // r4@45
  int v44; // r0@51
  int v45; // r0@54
  bool v46; // zf@57
  signed int v47; // [sp+8h] [bp-70h]@10
  int v48; // [sp+Ch] [bp-6Ch]@6
  char *v49; // [sp+10h] [bp-68h]@1
  int v50; // [sp+10h] [bp-68h]@38
  char v51; // [sp+14h] [bp-64h]@36
  char v52; // [sp+18h] [bp-60h]@36
  BlockEntity *v53; // [sp+1Ch] [bp-5Ch]@33
  int v54; // [sp+20h] [bp-58h]@31
  int v55; // [sp+24h] [bp-54h]@31
  int v56; // [sp+28h] [bp-50h]@31
  int v57; // [sp+2Ch] [bp-4Ch]@33
  int v58; // [sp+30h] [bp-48h]@50
  int v59; // [sp+34h] [bp-44h]@50
  int v60; // [sp+38h] [bp-40h]@6
  int v61; // [sp+3Ch] [bp-3Ch]@1
  int v62; // [sp+44h] [bp-34h]@50
  char v63; // [sp+48h] [bp-30h]@33
  unsigned int v64[10]; // [sp+50h] [bp-28h]@33

  v5 = a1;
  v6 = a1 + 8;
  v49 = a3;
  v7 = a4;
  v8 = a2;
  ChunkBlockPos::operator+((int)&v61, a2, a1 + 8);
  v9 = a5;
  v10 = *(_BYTE *)(v5 + 56);
  __dmb();
  if ( !(_DWORD)a5 || v10 != 8 )
    goto LABEL_32;
  v11 = Block::mLightBlock[(unsigned __int8)*v7];
  v12 = *(_WORD *)(v5 + 2 * (unsigned __int8)(*(_BYTE *)v8 + 16 * *(_BYTE *)(v8 + 1)) + 1424);
  if ( Dimension::hasCeiling(*(Dimension **)(v5 + 4)) )
    goto LABEL_9;
  v13 = *(_WORD *)(v8 + 2);
  if ( v11 )
  {
    if ( (signed __int16)v13 >= v12 )
    {
      v48 = v6;
      v60 = ((v13 << 16) + 0x10000) | (unsigned __int8)*(_WORD *)v8 | (unsigned __int16)(*(_WORD *)v8 & 0xFF00);
      if ( !LevelChunk::_recalcHeight((LevelChunk *)v5, (const ChunkBlockPos *)&v60, (BlockSource *)a5) )
        goto LABEL_10;
LABEL_49:
      v14 = *(_WORD *)(v5 + 2 * (unsigned __int8)(*(_BYTE *)v8 + 16 * *(_BYTE *)(v8 + 1)) + 1424);
      if ( v14 >= v12 )
      {
        v57 = v61;
        v58 = v12;
        v59 = v62;
        v47 = v12;
        do
        {
          Dimension::addBlockToLighting(*(Dimension **)(v5 + 4), (const BlockPos *)&v57);
          v45 = v58++;
        }
        while ( v45 < v14 );
      }
      else
        v58 = v14;
        if ( v14 <= v12 )
          do
          {
            Dimension::addBlockToLighting(*(Dimension **)(v5 + 4), (const BlockPos *)&v57);
            v44 = v58++;
          }
          while ( v44 < v12 );
      v15 = 1;
      goto LABEL_11;
    }
  }
  if ( (signed __int16)v13 < v12 - 1 )
LABEL_9:
    v48 = v6;
    goto LABEL_10;
  v48 = v6;
  if ( LevelChunk::_recalcHeight((LevelChunk *)v5, (const ChunkBlockPos *)v8, (BlockSource *)a5) == 1 )
    goto LABEL_49;
LABEL_10:
  v14 = v12;
  v15 = 0;
  v47 = v12;
LABEL_11:
  v16 = Block::isType((Block *)Block::mBlocks[(unsigned __int8)*v7], (const Block *)Block::mBorder);
  BlockSource::setBorderBlock((BlockSource *)a5, (const BlockPos *)&v61, v16);
  LODWORD(v9) = 0;
  HIDWORD(v9) = (unsigned __int8)*v49;
  v17 = (unsigned __int8)*v7;
  v18 = 0;
  if ( v15 == 1 )
    v19 = *(_WORD *)(v8 + 2);
    v20 = 0;
    v21 = 0;
    if ( v19 >= v14 )
      v20 = 1;
    if ( v19 <= v47 )
      v21 = 1;
    v22 = v20 & v21;
    v23 = 0;
    if ( v19 <= v14 )
      v23 = 1;
    v25 = __OFSUB__(v19, v47);
    v24 = v19 - v47 < 0;
    v26 = 0;
    if ( !(v24 ^ v25) )
      v26 = 1;
    LODWORD(v9) = v23 & v9 | v22;
  v27 = 0;
  if ( Block::mLightBlock[v17] == Block::mLightBlock[HIDWORD(v9)] )
    v27 = 1;
  if ( Block::mLightEmission[v17] == Block::mLightEmission[HIDWORD(v9)] )
    v18 = 1;
  if ( v18 & v27 )
    HIDWORD(v9) = HIDWORD(a5);
    v6 = v48;
  else
    if ( !(_DWORD)v9 )
      Dimension::addBlockToLighting(*(Dimension **)(v5 + 4), (const BlockPos *)&v61);
      v17 = (unsigned __int8)*v7;
  LODWORD(v9) = a5;
  if ( v17 && !Level::isClientSide(*(Level **)v5) )
    BlockPos::BlockPos((int)&v54, (__int64 *)(v5 + 32), 0);
    *(_DWORD *)(a5 + 28) = v54;
    *(_DWORD *)(a5 + 32) = v55;
    *(_DWORD *)(a5 + 36) = v56;
    (*(void (**)(void))(*(_DWORD *)Block::mBlocks[(unsigned __int8)*v7] + 156))();
    v28 = (CircuitSystem *)Dimension::getCircuitSystem(*(Dimension **)(v5 + 4));
    CircuitSystem::invalidatePos(v28, (const BlockPos *)&v61);
LABEL_32:
  if ( *(_DWORD *)HIDWORD(v9) )
    ChunkBlockPos::operator+((int)&v57, v8, v6);
    BlockEntity::moveTo(*(BlockEntity **)HIDWORD(v9), (const BlockPos *)&v57);
    v29 = (BlockEntity *)*(_DWORD *)HIDWORD(v9);
    *(_DWORD *)HIDWORD(v9) = 0;
    v53 = v29;
    v30 = BlockEntity::getPosition(v29);
    ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)v64, (const BlockPos *)v30);
    std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkBlockPos,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>(
      (int *)&v63,
      (unsigned __int64 *)(v5 + 2896),
      v64,
      (int *)&v53);
    DirtyTicksCounter::touch(*(DirtyTicksCounter **)(v5 + 2284));
    if ( v53 )
      (*(void (**)(void))(*(_DWORD *)v53 + 4))();
    result = 0;
    v53 = 0;
    v52 = *v7;
    v51 = *v49;
    result = LevelChunk::_createBlockEntity(v5, (int)&v61, (BlockSource *)v9, &v52, &v51);
    if ( (_DWORD)v9 )
      v32 = *(_WORD *)v8;
      v33 = *(_WORD *)(v8 + 2);
      v34 = *(_DWORD *)(v5 + 2896);
      v35 = *(_DWORD *)(v5 + 2900);
      v36 = v32;
      v37 = v32 >> 8;
      v38 = v32 | (v33 << 8) | (v32 >> 8 << 16);
      result = *(BlockEntity **)(v34 + 4 * (v38 % v35));
      if ( result )
        v39 = *(_DWORD *)result;
        v50 = (unsigned __int16)v33;
        v40 = *(_DWORD *)(*(_DWORD *)result + 12);
        while ( 1 )
          if ( v40 == v38 )
            v41 = *(_WORD *)(v39 + 4);
            v42 = v36 == (unsigned __int8)v41;
            if ( v36 == (unsigned __int8)v41 )
              v42 = v37 == v41 >> 8;
            if ( v42 && v50 == *(_WORD *)(v39 + 6) )
              break;
          v43 = *(_DWORD *)v39;
          if ( *(_DWORD *)v39 )
            v40 = *(_DWORD *)(v43 + 12);
            result = (BlockEntity *)v39;
            v39 = *(_DWORD *)v39;
            if ( *(_DWORD *)(v43 + 12) % v35 == v38 % v35 )
              continue;
          return result;
        if ( result )
          result = *(BlockEntity **)result;
          v46 = result == 0;
          if ( result )
            result = (BlockEntity *)*((_DWORD *)result + 2);
            v46 = result == 0;
          if ( !v46 )
            result = (BlockEntity *)(*(int (**)(void))(*(_DWORD *)result + 56))();
  return result;
}


void __fastcall LevelChunk::findLightningTarget(LevelChunk *this, const BlockPos *a2, BlockSource *a3, const BlockPos *a4)
{
  LevelChunk *v4; // r8@1
  BlockSource *v5; // r9@1
  const BlockPos *v6; // r5@1
  __int64 v7; // kr00_8@1
  Level *v8; // r0@2
  char *v9; // r0@2
  unsigned int v10; // r1@2
  int v11; // r0@4
  int v12; // r0@5
  signed int v13; // r1@5
  __int64 ptr; // [sp+8h] [bp-68h]@1
  int v15; // [sp+10h] [bp-60h]@1
  char v16; // [sp+14h] [bp-5Ch]@1
  char v17; // [sp+20h] [bp-50h]@1
  char v18; // [sp+2Ch] [bp-44h]@1
  int v19; // [sp+48h] [bp-28h]@1
  __int64 v20; // [sp+4Ch] [bp-24h]@5

  v4 = this;
  v5 = a4;
  v6 = a2;
  BlockSource::getTopRainBlockPos((BlockSource *)&v19, a4, a3);
  Vec3::Vec3((int)&v17, (int)v6 + 8);
  Vec3::Vec3((int)&v16, (int)v6 + 20);
  AABB::AABB((int)&v18, (int)&v17, (int)&v16);
  ptr = 0LL;
  v15 = 0;
  LevelChunk::getEntities((int)v6, 4864, (const AABB *)&v18, (int)&ptr, 0);
  v7 = ptr;
  if ( (_DWORD)ptr != HIDWORD(ptr) )
  {
    v8 = (Level *)BlockSource::getLevel(v5);
    v9 = Level::getRandom(v8);
    v10 = 0;
    if ( (HIDWORD(v7) - (signed int)v7) >> 2 )
      v10 = Random::_genRandInt32((Random *)v9) % ((HIDWORD(v7) - (signed int)v7) >> 2);
    v11 = (*(int (**)(void))(**(_DWORD **)(v7 + 4 * v10) + 52))();
    BlockPos::BlockPos((int)v4, v11);
LABEL_8:
    operator delete((void *)v7);
    return;
  }
  v12 = HIDWORD(v20);
  v13 = v20;
  if ( (_DWORD)v20 == -1 )
    v13 = 1;
    LODWORD(v20) = 1;
  *(_DWORD *)v4 = v19;
  *((_DWORD *)v4 + 1) = v13;
  *((_DWORD *)v4 + 2) = v12;
  if ( (_DWORD)v7 )
    goto LABEL_8;
}


RakNet *__fastcall LevelChunk::legacyDeserializeTerrain(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r4@1
  IDataInput *v3; // r6@1
  int v4; // r0@1
  __int16 v5; // r1@2
  int v6; // r2@2
  int v7; // r0@3
  char v8; // r1@4
  int v9; // r2@4
  RakNet *result; // r0@5
  RakNet *v11; // [sp+0h] [bp-8128h]@1
  char v12; // [sp+4h] [bp-8124h]@1
  int v13; // [sp+4004h] [bp-4124h]@1
  int v14; // [sp+8004h] [bp-124h]@1

  v2 = this;
  v3 = a2;
  v11 = _stack_chk_guard;
  (*(void (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)v3 + 40))(v3, &v12, 0x8000);
  LevelChunk::setAllBlockIDs((int)v2, (int)&v12, (int)&v14, 128);
  (*(void (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)v3 + 40))(v3, &v12, 0x4000);
  LevelChunk::setAllBlockData((int)v2, (int)&v12, (int)&v13, 128);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v3 + 40))(v3, &v12, 0x4000);
  (*(void (__fastcall **)(IDataInput *, int *, signed int))(*(_DWORD *)v3 + 40))(v3, &v14, 256);
  v4 = 0;
  do
  {
    v5 = *((_BYTE *)&v14 + v4);
    v6 = (int)v2 + 2 * v4++;
    *(_WORD *)(v6 + 1424) = v5;
  }
  while ( v4 != 256 );
  (*(void (__fastcall **)(_DWORD, _DWORD, signed int))(*(_DWORD *)v3 + 40))(v3, &v12, 1024);
  v7 = 0;
    v8 = *(&v12 + 4 * v7);
    v9 = (int)v2 + v7++;
    *(_BYTE *)(v9 + 144) = v8;
  while ( v7 != 256 );
  LevelChunk::checkBiomeStates(v2);
  result = (RakNet *)(_stack_chk_guard - v11);
  if ( _stack_chk_guard != v11 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall LevelChunk::serializeBorderBlocks(LevelChunk *this, IDataOutput *a2)
{
  IDataOutput *v2; // r8@1
  char *v3; // r1@1
  signed int v4; // r4@1
  int v5; // r9@1
  char *v6; // r6@1
  char *v7; // r10@1
  int v8; // r7@5
  unsigned int v9; // r0@6
  unsigned int v10; // r11@8
  char *v11; // r5@11
  char *v12; // r4@22
  signed int v13; // r5@24
  char *v15; // [sp+0h] [bp-28h]@1

  v2 = a2;
  v3 = (char *)this + 1965;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v15 = (char *)this + 1965;
  do
  {
    if ( v3[v4] )
    {
      if ( v6 == (char *)v5 )
      {
        v8 = v6 - v7;
        if ( v6 - v7 == -1 )
          sub_21E5A04("vector::_M_emplace_back_aux");
        v9 = v6 - v7;
        if ( v6 == v7 )
          v9 = 1;
        v10 = v9 + v8;
        if ( v9 + v8 < v9 )
          v10 = -1;
        if ( v10 )
          v11 = (char *)operator new(v10);
        else
          v11 = 0;
        v11[v8] = v4;
        if ( (char *)v5 != v7 )
          _aeabi_memmove(v11, v7);
        v6 = &v11[v8 + 1];
        if ( v7 )
          operator delete(v7);
        v5 = (int)&v11[v10];
        v7 = v11;
        v3 = v15;
      }
      else
        *v6++ = v4;
    }
    ++v4;
  }
  while ( v4 < 256 );
  if ( v7 == v6 )
    v13 = 0;
  else
    (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, (unsigned __int8)((_BYTE)v6 - (_BYTE)v7));
    v12 = v7;
    do
      (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, (unsigned __int8)*v12++);
    while ( v6 != v12 );
    v13 = 1;
  if ( v7 )
    operator delete(v7);
  return v13;
}


signed int __fastcall LevelChunk::onLoaded(LevelChunk *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  __int64 v3; // kr00_8@1
  Level *v4; // r0@1
  int v5; // r2@3
  unsigned int v6; // r0@3
  int v7; // r10@4
  signed int v8; // r5@6
  unsigned int v9; // r2@7
  _BYTE *v10; // r1@7
  int v11; // r2@8
  int v12; // r1@10
  signed int result; // r0@15
  int v14; // [sp+4h] [bp-54h]@1
  int v15; // [sp+8h] [bp-50h]@4
  int v16; // [sp+Ch] [bp-4Ch]@1
  int v17; // [sp+10h] [bp-48h]@4
  LevelChunk *v18; // [sp+18h] [bp-40h]@1
  int v19; // [sp+1Ch] [bp-3Ch]@1
  int v20; // [sp+20h] [bp-38h]@1
  int v21; // [sp+24h] [bp-34h]@1
  int v22; // [sp+28h] [bp-30h]@1
  int v23; // [sp+2Ch] [bp-2Ch]@1
  int v24; // [sp+30h] [bp-28h]@1

  v2 = a2;
  v18 = this;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v14 = *((_DWORD *)this + 2);
  v3 = *(_QWORD *)((char *)this + 12);
  v16 = *(_QWORD *)((char *)this + 12) >> 32;
  BlockPos::BlockPos((int)&v19, (__int64 *)this + 4, 0);
  *((_DWORD *)v2 + 7) = v19;
  *((_DWORD *)v2 + 8) = v20;
  *((_DWORD *)v2 + 9) = v21;
  v4 = (Level *)BlockSource::getLevel(v2);
  if ( !Level::isClientSide(v4) && !*((_BYTE *)v18 + 2228) )
  {
    v5 = 0;
    v6 = *((_DWORD *)v18 + 35);
    do
    {
      v7 = 0;
      v15 = v5;
      v22 = v14 + v5;
      v17 = v5 << 8;
      do
      {
        v24 = v16 + v7;
        if ( (16 * v6 & 0x8000u) == 0 )
        {
          v8 = 0;
          do
          {
            v23 = v3 + v8;
            v9 = (signed __int16)v8 >> 4;
            v10 = &BlockID::AIR;
            if ( v9 < v6 )
            {
              v11 = *((_DWORD *)v18 + v9 + 19);
              v10 = &BlockID::AIR;
              if ( v11 )
                v10 = (_BYTE *)(v11 + (v8 & 0xF | 16 * v7) + v17);
            }
            v12 = *v10;
            if ( v12 != *(_BYTE *)(Block::mAir + 4) )
              (*(void (**)(void))(*(_DWORD *)Block::mBlocks[v12] + 188))();
              v6 = *((_DWORD *)v18 + 35);
            v8 = (signed __int16)(v8 + 1);
          }
          while ( v8 <= (signed __int16)(16 * v6) );
        }
        ++v7;
      }
      while ( v7 != 16 );
      v5 = v15 + 1;
    }
    while ( v15 != 15 );
  }
  result = 1;
  *((_BYTE *)v18 + 2228) = 1;
  return result;
}


_BOOL4 __fastcall LevelChunk::getBorder(LevelChunk *this, const ChunkBlockPos *a2)
{
  return *((_BYTE *)this + 16 * *((_BYTE *)a2 + 1) + *(_BYTE *)a2 + 1965) != 0;
}


char *__fastcall LevelChunk::checkBiomeStates(LevelChunk *this)
{
  char *v1; // r9@1
  int v6; // r1@2
  int v7; // r0@3
  unsigned int v9; // r8@6
  unsigned int v10; // r11@8
  int v11; // r4@8
  int v12; // r1@8
  int v13; // r10@8
  int *v14; // r7@8
  unsigned int v15; // r5@9
  _DWORD *v16; // r8@9
  _DWORD *v17; // r0@9
  unsigned __int8 v18; // r4@9
  int v19; // r6@11
  unsigned int v20; // r11@7
  int v21; // r4@15
  _DWORD *v22; // r0@15
  _DWORD *v23; // r6@16
  unsigned __int8 v24; // r7@16
  _DWORD *v25; // r5@18
  bool v27; // zf@25
  int *v28; // r5@30
  unsigned __int8 v29; // r4@30
  int v30; // r0@31
  _DWORD *v31; // r6@32
  bool v32; // zf@35
  _BYTE *v33; // r0@39
  char *result; // r0@41
  unsigned __int64 *v35; // [sp+4h] [bp-4Ch]@1
  char *v36; // [sp+Ch] [bp-44h]@1
  LevelChunk *v37; // [sp+10h] [bp-40h]@1
  char v38; // [sp+17h] [bp-39h]@24

  v35 = (unsigned __int64 *)((char *)this + 1936);
  v37 = this;
  v1 = (char *)this + 144;
  _R1 = (int)&Biome::RAIN_TEMP_THRESHOLD;
  __asm { VLDR            S18, =-0.32 }
  v36 = (char *)this + 400;
  __asm { VLDR            S16, [R1] }
  do
  {
    if ( Biome::getBiome((Biome *)(unsigned __int8)*v1, _R1) )
    {
      LOBYTE(v7) = *v1;
    }
    else
      v7 = *(_DWORD *)(Biome::DEFAULT + 268);
      *v1 = v7;
    _R0 = Biome::getBiome((Biome *)(unsigned __int8)v7, v6);
    __asm
      VLDR            S0, [R0,#0xD8]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v20 = *(_DWORD *)(_R0 + 268);
LABEL_15:
      _R1 = v20 % *((_DWORD *)v37 + 485);
      v21 = _R1;
      v22 = *(_DWORD **)(*((_DWORD *)v37 + 484) + 4 * _R1);
      if ( v22 )
      {
        v23 = (_DWORD *)*v22;
        v24 = *(_BYTE *)(*v22 + 4);
        while ( 1 )
        {
          _R1 = v24;
          if ( v20 == v24 )
            break;
          v25 = (_DWORD *)*v23;
          if ( *v23 )
          {
            v24 = *((_BYTE *)v25 + 4);
            _R1 = (unsigned int)*((_BYTE *)v25 + 4) % *((_DWORD *)v37 + 485);
            v22 = v23;
            v23 = (_DWORD *)*v23;
            if ( _R1 == v21 )
              continue;
          }
          goto LABEL_41;
        }
        _ZF = v22 == 0;
        if ( v22 )
          _ZF = *v22 == 0;
        if ( !_ZF )
          v38 = v20;
          std::unordered_map<unsigned char,BiomeChunkState,std::hash<unsigned char>,std::equal_to<unsigned char>,std::allocator<std::pair<unsigned char const,BiomeChunkState>>>::erase(
            v35,
            &v38);
      }
      goto LABEL_41;
    __asm { VLDR            S0, [R0,#0xC4] }
    v9 = *(_BYTE *)(_R0 + 268);
      VADD.F32        S0, S0, S18
      VCMPE.F32       S0, S16
    if ( !(_NF ^ _VF) )
      v20 = *(_BYTE *)(_R0 + 268);
      goto LABEL_15;
    v10 = *((_DWORD *)v37 + 485);
    v12 = v9 % *((_DWORD *)v37 + 485);
    v13 = v12;
    v11 = *((_DWORD *)v37 + 484);
    v14 = *(int **)(v11 + 4 * v12);
    if ( !v14 )
      goto LABEL_39;
    v15 = *(_BYTE *)(_R0 + 268);
    v16 = (_DWORD *)*v14;
    v17 = *(_DWORD **)(v11 + 4 * v12);
    v18 = *(_BYTE *)(*v14 + 4);
    while ( 1 )
      _R1 = v18;
      if ( v15 == v18 )
        break;
      v19 = *v16;
      if ( *v16 )
        v18 = *(_BYTE *)(v19 + 4);
        v17 = v16;
        v16 = (_DWORD *)*v16;
        if ( *(_BYTE *)(v19 + 4) % v10 == v13 )
          continue;
      goto LABEL_29;
    v27 = v17 == 0;
    if ( v17 )
      v27 = *v17 == 0;
    if ( !v27 )
LABEL_29:
    v9 = v15;
    v28 = (int *)*v14;
    v29 = *(_BYTE *)(*v14 + 4);
      v30 = v29;
      if ( v9 == v29 )
      v31 = (_DWORD *)*v28;
      if ( *v28 )
        v29 = *((_BYTE *)v31 + 4);
        v14 = v28;
        v28 = (int *)*v28;
        if ( *((_BYTE *)v31 + 4) % v10 == v13 )
    v32 = v14 == 0;
    if ( v14 )
      v30 = *v14;
      v32 = *v14 == 0;
    if ( v32 )
LABEL_39:
      v33 = operator new(8u);
      *(_DWORD *)v33 = 0;
      v33[4] = v9;
      v33[5] = 0;
      v30 = std::_Hashtable<unsigned char,std::pair<unsigned char const,BiomeChunkState>,std::allocator<std::pair<unsigned char const,BiomeChunkState>>,std::__detail::_Select1st,std::equal_to<unsigned char>,std::hash<unsigned char>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)v35,
              v13,
              v9,
              (int)v33);
    _R1 = 0;
    *(_BYTE *)(v30 + 5) = 0;
LABEL_41:
    ++v1;
    result = v36;
  }
  while ( v1 != v36 );
  return result;
}


int *__fastcall LevelChunk::createNew(int **a1, Dimension *a2, __int64 a3, char a4)
{
  int **v4; // r4@1
  Dimension *v5; // r6@1
  int *v6; // r5@1
  int *result; // r0@1
  __int64 v8; // [sp+0h] [bp-18h]@1

  v4 = a1;
  v5 = a2;
  v8 = a3;
  v6 = (int *)PoolAllocator::get((PoolAllocator *)&unk_2816894);
  result = LevelChunk::LevelChunk(v6, v5, &v8, a4);
  *v4 = v6;
  return result;
}


char *__fastcall LevelChunk::getEntities(LevelChunk *this)
{
  return (char *)this + 2884;
}


unsigned __int8 *__fastcall LevelChunk::changeState(int a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 *result; // r0@1
  unsigned int v4; // r3@2

  result = (unsigned __int8 *)(a1 + 56);
  __dmb();
  while ( 1 )
  {
    v4 = __ldrex(result);
    if ( v4 != a2 )
      break;
    if ( !__strex(a3, result) )
      goto LABEL_6;
  }
  __clrex();
LABEL_6:
  return result;
}


signed int __fastcall LevelChunk::isAABBFullyInChunk(LevelChunk *this, const BlockPos *a2, const BlockPos *a3)
{
  LevelChunk *v3; // r12@1
  signed int result; // r0@3

  v3 = this;
  if ( *(_DWORD *)a3 <= *((_DWORD *)this + 5) && *(_DWORD *)a2 >= *((_DWORD *)this + 2) )
  {
    result = 0;
    if ( *((_DWORD *)a3 + 2) <= *((_DWORD *)v3 + 7) && *((_DWORD *)a2 + 2) >= *((_DWORD *)v3 + 4) )
      result = 1;
  }
  else
  return result;
}


int __fastcall LevelChunk::_changeTerrainDataState(int result, int a2, char a3)
{
  *(_BYTE *)(result + 57) = a3;
  return result;
}


  if ( LevelChunk::tryChangeState(SHIDWORD(v2), 0, 1u) == 1 )
{
    v3 = Dimension::getWorldGenerator(*(Dimension **)(v2 + 12));
    if ( v3 )
    {
      v4 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v3 + 20);
      v5 = LevelChunk::getPosition(*((LevelChunk **)v1 + 1));
      v4(v3, v5);
    }
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)v2 + 36))(v2, *((_DWORD *)v1 + 1), *((_BYTE *)v1 + 20));
    **((_BYTE **)v1 + 3) = 1;
  }
  return 1;
}


signed int __fastcall LevelChunk::serializeHardcodedSpawners(LevelChunk *this, IDataOutput *a2)
{
  LevelChunk *v2; // r5@1
  IDataOutput *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r6@2
  int v7; // r5@2
  signed int result; // r0@5

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 739);
  v5 = *((_DWORD *)v2 + 740);
  if ( v4 == v5 )
  {
    result = 0;
  }
  else
    (*(void (__fastcall **)(IDataOutput *, int))(*(_DWORD *)v3 + 32))(v3, -1227133513 * ((v5 - v4) >> 2));
    v6 = *((_DWORD *)v2 + 739);
    v7 = *((_DWORD *)v2 + 740);
    while ( v6 != v7 )
    {
      (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)v6);
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)(v6 + 4));
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)(v6 + 8));
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)(v6 + 12));
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)(v6 + 16));
      (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v3 + 32))(v3, *(_DWORD *)(v6 + 20));
      (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v3 + 24))(v3, *(_BYTE *)(v6 + 24));
      v6 += 28;
    }
    result = 1;
  return result;
}


signed int __fastcall LevelChunk::tryChangeState(int a1, int a2, unsigned __int8 a3)
{
  unsigned __int8 *v3; // r0@1
  unsigned int v4; // r3@2
  signed int result; // r0@4

  v3 = (unsigned __int8 *)(a1 + 56);
  __dmb();
  while ( 1 )
  {
    v4 = __ldrex(v3);
    if ( v4 != a2 )
      break;
    if ( !__strex(a3, v3) )
    {
      result = 1;
      __dmb();
      return result;
    }
  }
  __clrex();
  result = 0;
  return result;
}


void __fastcall LevelChunk::_fixUselessDynamicWater(LevelChunk *this, BlockSource *a2)
{
  char *v2; // r7@1
  int v3; // r2@1
  int v4; // r3@1
  int *v5; // r11@1
  char *v6; // r4@1
  _BYTE *v7; // r8@1
  _DWORD *v8; // r5@1
  unsigned int v9; // r6@2
  unsigned int v10; // r2@3
  signed int v11; // r10@3
  int v12; // r12@4
  bool v13; // cf@6
  _BYTE *v14; // r2@6
  int v15; // r1@7
  char *v16; // r6@12
  int v17; // r2@13
  unsigned int v18; // r1@13
  unsigned int v19; // r0@15
  unsigned int v20; // r5@15
  char *v21; // ST28_4@21
  _BYTE *v22; // r7@21
  int v23; // r4@21
  int v24; // r8@21
  int v25; // r11@21
  unsigned int v26; // r1@23
  char *v27; // r2@23
  int v28; // r2@24
  unsigned int v29; // r0@25
  char *v30; // r0@28
  int v31; // r4@28
  unsigned int v32; // r0@35
  int v33; // r1@35
  signed int v34; // r2@35
  int v35; // r0@36
  int *v36; // r5@36
  int v37; // r6@36
  unsigned int v38; // r9@38
  LiquidBlockDynamic *v39; // r8@38
  char v40; // r1@38
  unsigned int v41; // r10@39
  int v42; // r11@39
  int *v43; // r2@45
  int *v44; // r11@45
  int v45; // r3@47
  int v46; // r0@54
  LevelChunk *v47; // r6@55
  int v48; // r7@55
  _QWORD *v49; // r5@56
  BlockSource *v50; // [sp+Ch] [bp-A44h]@1
  int v51; // [sp+10h] [bp-A40h]@2
  int v52; // [sp+14h] [bp-A3Ch]@2
  unsigned int v53; // [sp+18h] [bp-A38h]@4
  char *v54; // [sp+20h] [bp-A30h]@1
  LevelChunk *v55; // [sp+24h] [bp-A2Ch]@1
  LevelChunk *v56; // [sp+24h] [bp-A2Ch]@35
  int v57; // [sp+2Ch] [bp-A24h]@2
  char v58; // [sp+2Ch] [bp-A24h]@39
  unsigned int v59; // [sp+30h] [bp-A20h]@4
  int *v60; // [sp+30h] [bp-A20h]@39
  char v61; // [sp+34h] [bp-A1Ch]@43
  int v62; // [sp+38h] [bp-A18h]@43
  char v63; // [sp+3Ch] [bp-A14h]@43
  char v64; // [sp+3Dh] [bp-A13h]@43
  char v65; // [sp+40h] [bp-A10h]@40
  unsigned int v66; // [sp+4Ch] [bp-A04h]@35
  unsigned int v67; // [sp+50h] [bp-A00h]@35
  int v68; // [sp+A10h] [bp-40h]@35
  char v69; // [sp+A14h] [bp-3Ch]@35
  int v70; // [sp+A18h] [bp-38h]@35
  int v71; // [sp+A1Ch] [bp-34h]@37
  __int64 v72; // [sp+A20h] [bp-30h]@56

  v50 = a2;
  v2 = (char *)this + 76;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v55 = this;
  v7 = &BlockID::AIR;
  v54 = (char *)this + 76;
  v8 = &Block::mFlowingWater;
  do
  {
    v9 = 0;
    v52 = v3 << 8;
    v51 = v3;
    v57 = 16 * v3;
    do
    {
      v10 = *((_DWORD *)this + 35);
      v11 = 16 * v10;
      if ( v10 & 0x8000000 )
        goto LABEL_33;
      v53 = v9;
      v12 = v9 | v52;
      v59 = v9 << 8;
      while ( 1 )
      {
        v13 = v11 >> 4 >= v10;
        v14 = v7;
        if ( !v13 )
        {
          v15 = *(_DWORD *)&v2[4 * (v11 >> 4)];
          v14 = v7;
          if ( v15 )
            v14 = (_BYTE *)(v15 + (v11 & 0xF | v57) + v59);
        }
        if ( *v14 != *(_BYTE *)(*v8 + 4) )
          goto LABEL_12;
        if ( v5 != (int *)v4 )
          *v5 = v12 | (v11 << 16);
          ++v5;
LABEL_12:
          v16 = v6;
          goto LABEL_30;
        v16 = 0;
        v17 = ((char *)v5 - v6) >> 2;
        v18 = ((char *)v5 - v6) >> 2;
        if ( !v17 )
          v18 = 1;
        v19 = v18 + (((char *)v5 - v6) >> 2);
        v20 = v18 + (((char *)v5 - v6) >> 2);
        if ( 0 != v19 >> 30 )
          v20 = 0x3FFFFFFF;
        if ( v19 < v18 )
        if ( v20 )
          if ( v20 >= 0x40000000 )
            sub_21E57F4();
          v21 = v6;
          v22 = v7;
          v23 = ((char *)v5 - v6) >> 2;
          v24 = v4;
          v25 = v12;
          v16 = (char *)operator new(4 * v20);
          v17 = v23;
          v6 = v21;
          v4 = v24;
          v12 = v25;
          v7 = v22;
        *(_DWORD *)&v16[4 * v17] = v12 | (v11 << 16);
        if ( v6 == (char *)v4 )
          v6 = (char *)v4;
          v29 = (unsigned int)v16;
        else
          v26 = 0;
          v27 = v6;
          do
          {
            *(_DWORD *)&v16[v26] = *(_DWORD *)v27;
            v28 = (int)&v6[v26];
            v26 += 4;
            v27 = (char *)(v28 + 4);
          }
          while ( v4 - (_DWORD)v6 != v26 );
          v29 = (unsigned int)&v16[((v4 - 4 - (_DWORD)v6) & 0xFFFFFFFC) + 4];
        v5 = (int *)(v29 + 4);
        if ( v6 )
          v30 = v6;
          v31 = v12;
          operator delete(v30);
          v12 = v31;
        v4 = (int)&v16[4 * v20];
        this = v55;
        v2 = v54;
        v8 = &Block::mFlowingWater;
LABEL_30:
        if ( v11 < 1 )
          break;
        v10 = *((_DWORD *)this + 35);
        --v11;
        v6 = v16;
      }
      v6 = v16;
      v9 = v53;
LABEL_33:
      ++v9;
    }
    while ( v9 < 0x10 );
    v3 = v51 + 1;
  }
  while ( (unsigned int)(v51 + 1) < 0x10 );
  v56 = this;
  v32 = sub_21E67AC((int)&Random::mRandomDevice);
  v66 = v32;
  v68 = 625;
  v33 = 0;
  v34 = 1;
  v69 = 0;
  v70 = 0;
  v67 = v32;
    v35 = v32 ^ (v32 >> 30);
    v36 = (int *)(&v66 + v33);
    v37 = v33++ + 1812433253 * v35;
    v32 = v34++ + 1812433253 * v35;
    v36[2] = v37 + 1;
  while ( v33 != 397 );
  v68 = 624;
  v71 = 398;
  if ( ((char *)v5 - v6) >> 2 )
    v38 = ((char *)v5 - v6) >> 2;
    v39 = (LiquidBlockDynamic *)Block::mFlowingWater;
    v40 = 0;
    while ( 2 )
      v58 = v40;
      v60 = v5;
      v41 = 0;
      v42 = (int)v6;
        ChunkBlockPos::operator+((int)&v65, v42, (int)v56 + 8);
        if ( LiquidBlockDynamic::shouldBecomeStatic(v39, v50, (const BlockPos *)&v65, (Random *)&v66) == 1 )
        ++v41;
        v42 += 4;
        if ( v41 >= v38 )
          if ( !(v58 & 1) )
            goto LABEL_57;
          goto LABEL_54;
      v63 = *(_BYTE *)(Block::mStillWater + 4);
      v64 = 0;
      v62 = 0;
      LevelChunk::setBlockAndData((int)&v61, (int)v56, v42, (unsigned int)&v63, 0, &v62);
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
      v43 = (int *)(v42 + 4);
      v44 = v60;
      if ( v43 == v60 )
        v44 = v43;
      else if ( (char *)v60 - (char *)v43 >= 1 )
        v45 = v60 - v43 + 1;
        do
          --v45;
          *(v43 - 1) = *v43;
          ++v43;
        while ( v45 > 1 );
      v5 = v44 - 1;
      v40 = 1;
      v38 = ((char *)v5 - v6) >> 2;
      if ( v38 )
        continue;
      break;
LABEL_54:
    v46 = *((_DWORD *)v56 + 592);
    if ( 4 * v46 )
      v47 = (LevelChunk *)((char *)v56 + 2280);
      v48 = 4 * v46;
      do
        v49 = *(_QWORD **)v47;
        DirtyTicksCounter::max((DirtyTicksCounter *)&v72);
        v48 -= 4;
        v47 = (LevelChunk *)((char *)v47 + 4);
        *v49 = v72;
      while ( v48 );
LABEL_57:
  if ( v6 )
    operator delete(v6);
}


char *__fastcall LevelChunk::getState(LevelChunk *this)
{
  return (char *)this + 56;
}


signed int __fastcall LevelChunk::isBlockInChunk(LevelChunk *this, const BlockPos *a2)
{
  LevelChunk *v2; // r2@1
  int v3; // r3@1
  int v4; // r1@2
  signed int result; // r0@3

  v2 = this;
  v3 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 >= *((_DWORD *)this + 2) && (v4 = *((_DWORD *)a2 + 2), v4 >= *((_DWORD *)this + 4)) )
  {
    result = 0;
    if ( v3 <= *((_DWORD *)v2 + 5) && v4 <= *((_DWORD *)v2 + 7) )
      result = 1;
  }
  else
  return result;
}


void __fastcall LevelChunk::tickRedstoneBlocks(LevelChunk *this, BlockSource *a2)
{
  LevelChunk *v2; // r5@1
  BlockSource *v3; // r4@1
  CircuitSystem *v4; // r6@2
  char v5; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  v3 = a2;
  if ( !Level::isClientSide(*(Level **)this) )
  {
    v4 = (CircuitSystem *)Dimension::getCircuitSystem(*((Dimension **)v2 + 1));
    BlockPos::BlockPos((int)&v5, (__int64 *)v2 + 4, 0);
    CircuitSystem::updateBlocks(v4, v3, (const BlockPos *)&v5);
  }
}


int __fastcall LevelChunk::lockBlockEntities(LevelChunk *this, int a2, BlockSource *a3)
{
  BlockSource *v3; // r10@1
  LevelChunk *v4; // r9@1
  int v5; // r0@3
  int v6; // r7@3
  int *v7; // r8@4
  int v8; // r0@7
  int v9; // r5@9
  int v10; // r11@9
  int *v11; // r10@11
  int v12; // r8@11
  int v13; // r1@12
  int v14; // r0@12
  int v15; // r0@17
  int result; // r0@21
  BlockSource *v17; // [sp+0h] [bp-30h]@1
  int v18; // [sp+4h] [bp-2Ch]@1
  int v19; // [sp+8h] [bp-28h]@4

  v3 = a3;
  v4 = this;
  v17 = a3;
  v18 = a2;
  if ( *((_BYTE *)this + 2974) )
  {
    if ( !a2 )
    {
      v5 = dword_281690C;
      v6 = LevelChunk::sBlockEntitiesToDelete;
      if ( LevelChunk::sBlockEntitiesToDelete != dword_281690C )
      {
        v7 = &v19;
        do
        {
          if ( *(LevelChunk **)v6 == v4 )
          {
            v8 = *(_DWORD *)(v6 + 4);
            *(_DWORD *)(v6 + 4) = 0;
            v19 = v8;
            BlockSource::fireBlockEntityRemoved((int)v3, v7);
            if ( v19 )
              (*(void (**)(void))(*(_DWORD *)v19 + 4))();
            v9 = dword_281690C;
            v10 = v6 + 8;
            v19 = 0;
            if ( v6 + 8 == dword_281690C )
            {
              v9 = v6 + 8;
            }
            else if ( dword_281690C - v10 >= 1 )
              v11 = v7;
              v12 = ((dword_281690C - v10) >> 3) + 1;
              do
              {
                *(_DWORD *)(v10 - 8) = *(_DWORD *)v10;
                v13 = *(_DWORD *)(v10 + 4);
                *(_DWORD *)(v10 + 4) = 0;
                v14 = *(_DWORD *)(v10 - 4);
                *(_DWORD *)(v10 - 4) = v13;
                if ( v14 )
                  (*(void (**)(void))(*(_DWORD *)v14 + 4))();
                --v12;
                v10 += 8;
              }
              while ( v12 > 1 );
              v7 = v11;
              v9 = dword_281690C;
              v3 = v17;
            dword_281690C = v9 - 8;
            v15 = *(_DWORD *)(v9 - 4);
            if ( v15 )
              (*(void (**)(void))(*(_DWORD *)v15 + 4))();
            *(_DWORD *)(v9 - 4) = 0;
            v5 = dword_281690C;
          }
          else
            v6 += 8;
        }
        while ( v6 != v5 );
      }
    }
  }
  result = v18;
  *((_BYTE *)v4 + 2974) = v18;
  return result;
}


BlockEntity *__fastcall LevelChunk::_createBlockEntity(int a1, int a2, BlockSource *a3, char *a4, _BYTE *a5)
{
  char *v5; // r7@1
  int v6; // r9@1
  BlockEntity *result; // r0@1
  BlockSource *v8; // r8@1
  int v9; // r6@1
  Block *v10; // r4@2
  Block *v11; // r5@3
  BlockEntity *v12; // r5@5
  BlockEntity *v13; // r6@6
  char *v14; // r0@6
  BlockEntity *v15; // [sp+4h] [bp-34h]@6
  char v16; // [sp+8h] [bp-30h]@6
  BlockEntity *v17; // [sp+Ch] [bp-2Ch]@6
  char v18; // [sp+10h] [bp-28h]@6
  unsigned int v19[8]; // [sp+18h] [bp-20h]@6

  v5 = a4;
  v6 = a1;
  result = (BlockEntity *)(unsigned __int8)*a4;
  v8 = a3;
  v9 = a2;
  if ( *a4 )
  {
    v10 = (Block *)Block::mBlocks[(signed int)result];
    if ( v10 )
    {
      v11 = (Block *)Block::mBlocks[*a5];
      result = (BlockEntity *)Block::hasBlockEntity((Block *)Block::mBlocks[(signed int)result]);
      if ( result == (BlockEntity *)1 )
      {
        if ( !v11
          || (v12 = (BlockEntity *)Block::getBlockEntityType(v11),
              result = (BlockEntity *)Block::getBlockEntityType(v10),
              v12 != result) )
        {
          v16 = *v5;
          EntityBlock::newBlockEntity(&v17, v10, v9, &v16);
          v13 = v17;
          v17 = 0;
          v15 = v13;
          v14 = BlockEntity::getPosition(v13);
          ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)v19, (const BlockPos *)v14);
          std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkBlockPos,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>(
            (int *)&v18,
            (unsigned __int64 *)(v6 + 2896),
            v19,
            (int *)&v15);
          DirtyTicksCounter::touch(*(DirtyTicksCounter **)(v6 + 2284));
          if ( v15 )
            (*(void (**)(void))(*(_DWORD *)v15 + 4))();
          v15 = 0;
          if ( v8 )
            BlockSource::fireBlockEntityChanged(v8, v13);
          result = v17;
          if ( v17 )
            result = (BlockEntity *)(*(int (**)(void))(*(_DWORD *)v17 + 4))();
        }
      }
    }
  }
  return result;
}


int __fastcall LevelChunk::setSaved(int result)
{
  int v1; // r1@1
  _QWORD **v2; // r4@2
  int v3; // r5@2
  _QWORD *v4; // t1@3
  int v5; // [sp+0h] [bp-18h]@2

  v1 = *(_DWORD *)(result + 2368);
  if ( 4 * v1 )
  {
    v2 = (_QWORD **)(result + 2280);
    v3 = 4 * v1;
    result = (int)&v5;
    do
    {
      v4 = *v2;
      ++v2;
      result = (int)DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)result);
      v3 -= 4;
      *v4 = *(_QWORD *)&v5;
    }
    while ( v3 );
  }
  return result;
}


int __fastcall LevelChunk::setUnsaved(int result)
{
  int v1; // r1@1
  _QWORD **v2; // r5@2
  int v3; // r6@2
  _QWORD *v4; // t1@3
  int v5; // [sp+0h] [bp-20h]@3

  v1 = *(_DWORD *)(result + 2368);
  if ( 4 * v1 )
  {
    v2 = (_QWORD **)(result + 2280);
    v3 = 4 * v1;
    do
    {
      v4 = *v2;
      ++v2;
      DirtyTicksCounter::max((DirtyTicksCounter *)&v5);
      v3 -= 4;
      result = v5;
      *v4 = *(_QWORD *)&v5;
    }
    while ( v3 );
  }
  return result;
}


signed int __fastcall LevelChunk::hasEntitiesToSerialize(LevelChunk *this)
{
  signed int result; // r0@2

  if ( *((_DWORD *)this + 721) == *((_DWORD *)this + 722) )
    result = *(_DWORD *)(*((_DWORD *)this + 13) - 12) != 0;
  else
    result = 1;
  return result;
}


int *__fastcall LevelChunk::createNewNoCustomDeleter(int **a1, Dimension *a2, __int64 a3, char a4)
{
  int **v4; // r4@1
  Dimension *v5; // r6@1
  int *v6; // r5@1
  int *result; // r0@1
  __int64 v8; // [sp+0h] [bp-18h]@1

  v4 = a1;
  v5 = a2;
  v8 = a3;
  v6 = (int *)PoolAllocator::get((PoolAllocator *)&unk_2816894);
  result = LevelChunk::LevelChunk(v6, v5, &v8, a4);
  *v4 = v6;
  return result;
}


void __fastcall LevelChunk::tickBlockEntities(LevelChunk *this, BlockSource *a2)
{
  unsigned int v2; // r4@1
  char *v3; // r11@3
  int v4; // r0@3
  char *v5; // r6@5
  int v6; // r4@5
  int v7; // r8@8
  unsigned int v8; // r8@9
  signed int v9; // r7@10
  char *v10; // r5@10
  int v11; // r9@10
  unsigned int v12; // r0@10
  unsigned int v13; // r1@12
  unsigned int v14; // r10@12
  unsigned int v15; // r3@20
  unsigned __int64 *v16; // r1@20
  int v17; // r1@21
  unsigned __int64 v18; // kr00_8@21
  int v19; // r1@21
  int v20; // r0@22
  Level *v21; // r0@27
  char *v22; // r8@27
  int v23; // r6@28
  signed int v24; // r7@29
  unsigned int v25; // r1@30
  int v26; // r2@31
  int v27; // r0@31
  int v28; // r2@31
  char *v29; // r11@34
  unsigned int v30; // r0@35
  int v31; // r7@35
  unsigned int v32; // r6@35
  unsigned int v33; // r5@35
  int v34; // r0@35
  int v35; // r9@36
  int v36; // r8@36
  unsigned int v37; // r1@38
  bool v38; // zf@38
  int v39; // r10@43
  bool v40; // zf@47
  BlockSource *v41; // [sp+0h] [bp-40h]@1
  char *v42; // [sp+4h] [bp-3Ch]@27
  int v43; // [sp+8h] [bp-38h]@36
  char *v44; // [sp+Ch] [bp-34h]@27
  LevelChunk *v45; // [sp+10h] [bp-30h]@1
  unsigned int v46; // [sp+18h] [bp-28h]@35

  v41 = a2;
  v45 = this;
  v2 = *((_DWORD *)this + 727);
  if ( v2 >= 0x20000000 )
    sub_21E5A04("vector::reserve");
  if ( v2 )
  {
    v3 = (char *)operator new(8 * v2);
    v4 = (int)&v3[8 * v2];
  }
  else
    v3 = 0;
    v4 = 0;
  v5 = v3;
  v6 = *((_DWORD *)v45 + 726);
  while ( v6 )
    v7 = *(_DWORD *)(v6 + 8);
    if ( v3 == (char *)v4 )
    {
      v9 = v3 - v5;
      v10 = 0;
      v11 = (v3 - v5) >> 3;
      v12 = (v3 - v5) >> 3;
      if ( !v11 )
        v12 = 1;
      v13 = v12 + (v9 >> 3);
      v14 = v12 + (v9 >> 3);
      if ( 0 != v13 >> 29 )
        v14 = 0x1FFFFFFF;
      if ( v13 < v12 )
      if ( v14 )
      {
        if ( v14 >= 0x20000000 )
          sub_21E57F4();
        v10 = (char *)operator new(8 * v14);
      }
      *(_DWORD *)&v10[8 * v11] = *(_DWORD *)(v6 + 4);
      *(_DWORD *)&v10[8 * v11 + 4] = v7;
      v8 = (unsigned int)v10;
      if ( v5 != v3 )
        v15 = 0;
        v16 = (unsigned __int64 *)v5;
        do
        {
          v18 = *v16;
          v17 = *v16 >> 32;
          *(_DWORD *)&v10[v15] = v18;
          *(_DWORD *)&v10[v15 + 4] = v17;
          v19 = (int)&v5[v15];
          v15 += 8;
          v16 = (unsigned __int64 *)(v19 + 8);
        }
        while ( v9 != v15 );
        v20 = (int)(v3 - 8);
        v3 = v5;
        v8 = (unsigned int)&v10[((v20 - (_DWORD)v5) & 0xFFFFFFF8) + 8];
      if ( v3 )
        operator delete(v3);
      v4 = (int)&v10[8 * v14];
      v5 = v10;
    }
    else
      *(_DWORD *)v3 = *(_DWORD *)(v6 + 4);
      *((_DWORD *)v3 + 1) = v7;
      v8 = (unsigned int)v3;
    v6 = *(_DWORD *)v6;
    v3 = (char *)(v8 + 8);
  v44 = v3;
  v21 = (Level *)BlockSource::getLevel(v41);
  v22 = Level::getRandom(v21);
  v42 = v5;
  if ( v5 != v3 )
    v23 = (int)(v5 + 8);
    if ( v42 + 8 == v3 )
      goto LABEL_58;
    v24 = 1;
    do
      v25 = Random::_genRandInt32((Random *)v22) % (v24 + 1);
      if ( v24 != v25 )
        v26 = *(_DWORD *)v23;
        *(_DWORD *)v23 = *(_DWORD *)&v42[8 * v25];
        v27 = (int)&v42[8 * v25];
        *(_DWORD *)&v42[8 * v25] = v26;
        v28 = *(_DWORD *)(v23 + 4);
        *(_DWORD *)(v23 + 4) = *(_DWORD *)(v27 + 4);
        *(_DWORD *)(v27 + 4) = v28;
      v23 += 8;
      ++v24;
    while ( v3 != (char *)v23 );
    if ( v42 != v3 )
LABEL_58:
      v29 = v42;
      do
        v30 = *(_WORD *)v29;
        v31 = (unsigned __int8)v30;
        v32 = *((_DWORD *)v45 + 725);
        v30 >>= 8;
        v33 = v31 | (*((_WORD *)v29 + 1) << 8) | (v30 << 16);
        v46 = v30;
        v34 = *(_DWORD *)(*((_DWORD *)v45 + 724) + 4 * (v33 % v32));
        if ( v34 )
          v43 = *((_DWORD *)v29 + 1);
          v35 = *(_DWORD *)v34;
          v36 = *(_DWORD *)(*(_DWORD *)v34 + 12);
          while ( 1 )
          {
            if ( v36 == v33 )
            {
              v37 = *(_WORD *)(v35 + 4);
              v38 = v31 == (unsigned __int8)v37;
              if ( v31 == (unsigned __int8)v37 )
                v38 = v46 == v37 >> 8;
              if ( v38 && *((_WORD *)v29 + 1) == *(_WORD *)(v35 + 6) )
                break;
            }
            v39 = *(_DWORD *)v35;
            if ( *(_DWORD *)v35 )
              v36 = *(_DWORD *)(v39 + 12);
              v34 = v35;
              v35 = *(_DWORD *)v35;
              if ( *(_DWORD *)(v39 + 12) % v32 == v33 % v32 )
                continue;
            goto LABEL_45;
          }
          v40 = v34 == 0;
          if ( v34 )
            v34 = *(_DWORD *)v34;
            v40 = v34 == 0;
          if ( !v40 && *(_DWORD *)(v34 + 8) == v43 )
            (*(void (**)(void))(*(_DWORD *)v43 + 32))();
LABEL_45:
        v29 += 8;
      while ( v29 != v44 );
  if ( v42 )
    j_j_j__ZdlPv_6(v42);
}


int __fastcall LevelChunk::deserializeConversionData(LevelChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r5@1
  LevelChunk *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  (*(void (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 24))(v2);
  *((_BYTE *)v3 + 2972) = 1;
  *((_BYTE *)v3 + 2971) = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 24))(v2);
  *((_BYTE *)v3 + 2970) = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 24))(v2);
  *((_BYTE *)v3 + 2968) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 24))(v2);
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 24))(v2);
  *((_BYTE *)v3 + 2969) = result;
  return result;
}


      if ( LevelChunk::checkSeasonsPostProcessDirty(v18) == 1 )
{
    }
    if ( !--v10 )
      return 1;
  }
  LevelChunk::applySeasonsPostProcess(v19, v4);
  return 1;
}


int __fastcall LevelChunk::runtimeRelightSubchunk(int result, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned __int64 *v6; // r6@1
  unsigned int v7; // r11@1
  unsigned int *i; // r4@2
  unsigned int *v9; // r9@2
  int v10; // off@3
  unsigned int v11; // r7@3
  int v12; // off@3
  signed int v13; // r1@5
  int v14; // r4@6
  int v15; // r7@6
  signed int v16; // r0@6
  int v17; // r9@7
  int v18; // r5@7
  signed int v19; // r10@9
  int v20; // r7@10
  int v21; // r11@10
  signed int v22; // r0@10
  int v23; // r6@11
  int v24; // r5@11
  signed int v25; // r1@13
  int v26; // r4@14
  int v27; // r7@14
  signed int v28; // r0@14
  int v29; // r8@15
  int v30; // r5@15
  int v31; // r2@17
  int v32; // r7@17
  int v33; // r3@17
  char *v34; // r0@17
  int v35; // r12@17
  int v36; // r5@18
  int v37; // r4@18
  int v38; // r7@20
  int v39; // r2@20
  int v40; // r3@20
  __int64 v41; // kr20_8@20
  unsigned int v42; // [sp+8h] [bp-1E0h]@4
  __int64 *v43; // [sp+Ch] [bp-1DCh]@2
  signed int v44; // [sp+10h] [bp-1D8h]@6
  signed int v45; // [sp+10h] [bp-1D8h]@14
  int v46; // [sp+14h] [bp-1D4h]@20
  int v47; // [sp+18h] [bp-1D0h]@20
  int v48; // [sp+1Ch] [bp-1CCh]@20
  int v49; // [sp+20h] [bp-1C8h]@17
  int v50; // [sp+24h] [bp-1C4h]@17
  int v51; // [sp+28h] [bp-1C0h]@17
  __int64 v52; // [sp+2Ch] [bp-1BCh]@17
  int v53; // [sp+34h] [bp-1B4h]@17
  char v54; // [sp+38h] [bp-1B0h]@2
  int v55; // [sp+184h] [bp-64h]@3
  int v56; // [sp+190h] [bp-58h]@3
  char v57; // [sp+19Ch] [bp-4Ch]@3
  char v58; // [sp+1A0h] [bp-48h]@3
  int v59; // [sp+1A4h] [bp-44h]@3

  v6 = (unsigned __int64 *)a4;
  v7 = a3;
  if ( a4 )
  {
    v43 = (__int64 *)(result + 32);
    SubChunkRelighter::SubChunkRelighter(
      (SubChunkRelighter *)&v54,
      (BlockSource *)a2,
      a3,
      (const ChunkPos *)(result + 32),
      1,
      1);
    v9 = (unsigned int *)(*v6 >> 32);
    for ( i = (unsigned int *)*v6; v9 != i; ++i )
    {
      v10 = __ROR4__(*i, 8);
      v11 = (unsigned int)(v10 + 16) >> 4;
      v12 = __ROR4__(*i, 16);
      SubChunkRelighter::_enforceLightingInvariantAndPropagate(
        (SubChunkRelighter *)&v54,
        ((*i & 0xF) << v56) | ((*i + 16) >> 4 << v59) | (*i >> 8) & 0xF | (v11 << v57) | ((unsigned int)(v12 + 16) >> 4 << v58) | (((*i >> 16) & 0xF) << v55),
        1);
    }
    v42 = v7;
    if ( !a6 )
      v13 = 16;
      do
      {
        v14 = v13 & 0xF;
        v44 = v13;
        v15 = v13 / 16;
        v16 = 16;
        do
        {
          v17 = v16 / 16;
          v18 = v16 - 16;
          SubChunkRelighter::_enforceLightingInvariantAndPropagate(
            (SubChunkRelighter *)&v54,
            (v15 << v57) | (1 << v59) | v14 | (v16 / 16 << v58) | ((v16 - 16) << v55),
            1);
            (v18 << v55) | (1 << v59) | v14 | (15 << v56) | (v15 << v57) | (v17 << v58),
          v16 = v18 + 17;
        }
        while ( v18 + 17 < 31 );
        v13 = v44 + 1;
      }
      while ( v44 + 1 < 31 );
      v19 = 16;
        v20 = v19 & 0xF;
        v21 = v19 / 16;
        v22 = 16;
          v23 = v22 / 16;
          v24 = v22 - 16;
            (v21 << v59) | (v20 << v56) | (1 << v57) | (v22 / 16 << v58) | ((v22 - 16) << v55),
            (v24 << v55) | (v20 << v56) | (v21 << v59) | (1 << v57) | (v23 << v58) | 0xF,
          v22 = v24 + 17;
        while ( v24 + 17 < 31 );
        ++v19;
      while ( v19 < 31 );
      v25 = 16;
        v26 = v25 & 0xF;
        v45 = v25;
        v27 = v25 / 16;
        v28 = 16;
          v29 = v28 - 16;
          v30 = v28 / 16;
            (1 << v58) | (v28 / 16 << v57) | (v26 << v56) | (v27 << v59) | (v28 - 16),
            (15 << v55) | (v27 << v59) | v29 | (v26 << v56) | (v30 << v57) | (1 << v58),
          v28 = v29 + 17;
        while ( v29 + 17 < 31 );
        v25 = v45 + 1;
      while ( v45 + 1 < 31 );
    SubChunkRelighter::runInvariantPropagation((SubChunkRelighter *)&v54);
    v52 = 0LL;
    v53 = 0;
    SubChunkRelighter::getTouchedSubChunks((int)&v54, (int)&v52);
    *(_DWORD *)(a5 + 4) = *(_DWORD *)a5;
    BlockPos::BlockPos((int)&v49, v43, 0);
    v31 = 16 * v42 | 8;
    v50 = 16 * v42 | 8;
    v32 = v49 + 8;
    v49 += 8;
    v33 = v51 + 8;
    v51 += 8;
    v35 = HIDWORD(v52);
    v34 = (char *)v52;
    if ( HIDWORD(v52) != (_DWORD)v52 )
      v36 = 0;
      v37 = 0;
      while ( 1 )
        v38 = v32 + 16 * *(_DWORD *)&v34[v36] - 16;
        v46 = v38;
        v39 = v31 + 16 * *(_DWORD *)&v34[v36 + 4] - 16;
        v47 = v39;
        v40 = v33 + 16 * *(_DWORD *)&v34[v36 + 8] - 16;
        v48 = v40;
        v41 = *(_QWORD *)(a5 + 4);
        if ( (_DWORD)v41 == HIDWORD(v41) )
          std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(
            (unsigned __int64 *)a5,
            (int)&v46);
          v35 = HIDWORD(v52);
          v34 = (char *)v52;
        else
          *(_DWORD *)v41 = v38;
          *(_DWORD *)(v41 + 4) = v39;
          *(_DWORD *)(v41 + 8) = v40;
          *(_DWORD *)(a5 + 4) = v41 + 12;
        if ( ++v37 >= (unsigned int)(-1431655765 * ((v35 - (signed int)v34) >> 2)) )
          break;
        v31 = v50;
        v32 = v49;
        v36 += 12;
        v33 = v51;
    if ( v34 )
      operator delete(v34);
    result = (int)SubChunkRelighter::~SubChunkRelighter((SubChunkRelighter *)&v54);
  }
  return result;
}


char *__fastcall LevelChunk::getLastTick(LevelChunk *this)
{
  return (char *)this + 64;
}


  if ( LevelChunk::tryChangeState(*(_DWORD *)(*(_DWORD *)a1 + 4), 4, 5u) == 1 )
{
    v2 = (unsigned __int64 *)LevelChunk::getPosition(*(LevelChunk **)(v1 + 4));
    v3 = LevelChunk::getDimension(*(LevelChunk **)(v1 + 4));
    PostprocessingManager::tryLock((PostprocessingManager *)&v11, *(const ChunkPos **)(v3 + 192), v2);
    v4 = PostprocessingManager::Owns::operator bool(&v11);
    v5 = *(LevelChunk **)(v1 + 4);
    if ( v4 == 1 )
    {
      v6 = LevelChunk::getGenerator(v5);
      v7 = *(_QWORD *)(v1 + 4);
      (*(void (**)(void))(*(_DWORD *)v6 + 32))();
      LODWORD(v8) = *(_DWORD *)(v1 + 4);
      LevelChunk::recomputeHeightMap(v8);
      LevelChunk::changeState(*(_DWORD *)(v1 + 4), 5, 6u);
      v9 = 1;
      **(_BYTE **)(v1 + 16) = 1;
      PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v11);
    }
    else
      LevelChunk::changeState((int)v5, 5, 4u);
      v9 = 0;
  }
  else
  {
    v9 = 1;
  return v9;
}


int __fastcall LevelChunk::serializeBiomeStates(LevelChunk *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  LevelChunk *v3; // r5@1
  int result; // r0@1
  int i; // r5@1

  v2 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)a2 + 24))(a2, *((_BYTE *)this + 1948));
  for ( i = *((_DWORD *)v3 + 486); i; i = *(_DWORD *)i )
  {
    (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, *(_BYTE *)(i + 4));
    result = (*(int (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, *(_BYTE *)(i + 5));
  }
  return result;
}


int __fastcall LevelChunk::removeBlockEntity(LevelChunk *this, const BlockPos *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  unsigned int v4; // r5@1
  unsigned int v5; // r11@1
  unsigned int v6; // r6@1
  int *v7; // r0@1
  int v8; // r8@2
  int v9; // r4@2
  unsigned int v10; // r1@4
  bool v11; // zf@4
  int v12; // r1@8
  int v13; // r9@9
  int result; // r0@11
  bool v15; // zf@12
  int v16; // r0@15
  unsigned __int64 *v17; // [sp+4h] [bp-34h]@2
  LevelChunk *v18; // [sp+Ch] [bp-2Ch]@1
  unsigned __int16 v19; // [sp+10h] [bp-28h]@1
  __int16 v20; // [sp+12h] [bp-26h]@1

  v18 = this;
  v3 = a2;
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v19, a3);
  v4 = *((_DWORD *)v3 + 725);
  v5 = (unsigned int)v19 >> 8;
  v6 = (v19 | (v20 << 8) | (v5 << 16)) % *((_DWORD *)v3 + 725);
  v7 = *(int **)(*((_DWORD *)v3 + 724) + 4 * v6);
  if ( !v7 )
    goto LABEL_11;
  v17 = (unsigned __int64 *)((char *)v3 + 2896);
  v8 = *v7;
  v9 = *(_DWORD *)(*v7 + 12);
  while ( 1 )
  {
    if ( v9 == (v19 | (v20 << 8) | (v5 << 16)) )
    {
      v10 = *(_WORD *)(v8 + 4);
      v11 = v19 == (unsigned __int8)v10;
      if ( v19 == (unsigned __int8)v10 )
        v11 = v5 == v10 >> 8;
      if ( v11 )
      {
        v12 = *(_WORD *)(v8 + 6);
        if ( v20 == v12 )
          break;
      }
    }
    v13 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v13 + 12);
      v7 = (int *)v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v13 + 12) % v4 == v6 )
        continue;
  }
  v15 = v7 == 0;
  if ( v7 )
    v12 = *v7;
    v15 = *v7 == 0;
  if ( v15 )
LABEL_11:
    result = 0;
    *(_DWORD *)v18 = 0;
  else
    v16 = *(_DWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 8) = 0;
    *(_DWORD *)v18 = v16;
    result = std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
               v17,
               v12);
  return result;
}


int __fastcall LevelChunk::_setGenerator(int result, ChunkSource *a2)
{
  *(_DWORD *)(result + 44) = a2;
  return result;
}


signed int __fastcall LevelChunk::generateOriginalLighting(LevelChunk *this, ChunkViewSource *a2, bool a3)
{
  ChunkViewSource *v3; // r5@1
  LevelChunk *v4; // r6@1
  bool v5; // r4@1
  char *v6; // r0@1
  int v7; // r1@1
  int v8; // r0@1
  signed int v9; // r4@3
  int v10; // r5@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r6@14
  unsigned int v14; // r0@16
  int v16; // [sp+0h] [bp-30h]@2
  int v17; // [sp+10h] [bp-20h]@1
  int v18; // [sp+14h] [bp-1Ch]@7
  int v19; // [sp+18h] [bp-18h]@1
  int v20; // [sp+1Ch] [bp-14h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = ChunkViewSource::getArea(a2);
  v7 = *((_DWORD *)v6 + 12);
  v8 = *((_DWORD *)v6 + 14);
  v19 = v7 + 1;
  v20 = v8 + 1;
  (*(void (__fastcall **)(int *, ChunkViewSource *, int *))(*(_DWORD *)v3 + 16))(&v17, v3, &v19);
  if ( v17 )
  {
    PostprocessingManager::tryLock(
      (PostprocessingManager *)&v16,
      *(const ChunkPos **)(*(_DWORD *)(v17 + 4) + 192),
      (unsigned __int64 *)(v17 + 32));
    if ( PostprocessingManager::Owns::operator bool(&v16) == 1 )
    {
      LevelChunk::_generateOriginalLighting(v4, v3, v5);
      v9 = 1;
    }
    else
      v9 = 0;
    PostprocessingManager::Owns::~Owns((PostprocessingManager::Owns *)&v16);
  }
  else
    v9 = 1;
  v10 = v18;
  if ( v18 )
    v11 = (unsigned int *)(v18 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  return v9;
}


signed int __fastcall LevelChunk::hasEntity(LevelChunk *this, Entity *a2)
{
  Entity **v2; // r3@1
  Entity **v3; // r12@1
  Entity **v4; // r0@2
  Entity *v5; // t1@3
  signed int result; // r0@5

  v2 = (Entity **)*((_DWORD *)this + 721);
  v3 = (Entity **)*((_DWORD *)this + 722);
  if ( v2 != v3 )
  {
    v4 = (Entity **)*((_DWORD *)this + 721);
    do
    {
      v5 = *v4;
      ++v4;
      if ( v5 == a2 )
        break;
      v2 = v4;
    }
    while ( v3 != v4 );
  }
  result = 0;
    result = 1;
  return result;
}


int __fastcall LevelChunk::setBlockAndData(int result, int a2, int a3, unsigned int a4, int a5, int *a6)
{
  int v6; // r9@1
  int v7; // r5@1
  signed int v8; // r1@1
  unsigned int v9; // r10@1
  unsigned int v10; // r12@1
  signed int v11; // lr@1
  int v12; // r2@2
  unsigned int v13; // r3@3
  char v14; // r6@3
  unsigned int v15; // r2@3
  unsigned int v16; // r7@3
  char v17; // r2@6
  int v18; // r6@8
  int v19; // r4@9
  int v20; // r2@9
  unsigned int v21; // r2@11
  unsigned __int8 *v22; // r9@12
  unsigned int v23; // r1@13
  unsigned int i; // r1@15
  unsigned int v25; // r7@16
  unsigned int v26; // r10@16
  void *v27; // r0@16
  void *v28; // r6@16
  int v29; // r1@16
  int v30; // r0@18
  int v31; // r7@20
  int v32; // r8@20
  int v33; // r0@21
  int v34; // r1@23
  int v35; // r0@23
  char v36; // r2@23
  _BYTE *v37; // r0@23
  int v38; // r0@27
  unsigned __int64 v39; // [sp+8h] [bp-50h]@12
  _BYTE *v40; // [sp+10h] [bp-48h]@12
  unsigned __int64 v41; // [sp+14h] [bp-44h]@12
  unsigned int v42; // [sp+1Ch] [bp-3Ch]@11
  int v43; // [sp+20h] [bp-38h]@27
  char v44; // [sp+24h] [bp-34h]@27
  char v45; // [sp+28h] [bp-30h]@27
  char v46; // [sp+2Ch] [bp-2Ch]@22
  char v47; // [sp+30h] [bp-28h]@22

  v6 = a3;
  v7 = a2;
  v8 = *(_WORD *)(a3 + 2);
  v9 = a4;
  v10 = *(_DWORD *)(v7 + 140);
  v11 = v8;
  if ( v8 >> 4 >= v10 )
  {
    v17 = BYTE1(FullBlock::AIR);
    *(_BYTE *)result = FullBlock::AIR;
    *(_BYTE *)(result + 1) = v17;
  }
  else
    v12 = *(_DWORD *)(v7 + 4 * (v8 >> 4) + 76);
    if ( v12 )
    {
      v13 = (((unsigned int)*(_WORD *)v6 >> 4) & 0xFF0 | v8 & 0xF) + (*(_WORD *)v6 << 8);
      v14 = *(_BYTE *)(v12 + (unsigned __int16)v13);
      v15 = *(_BYTE *)(v12 + ((unsigned int)(unsigned __int16)v13 >> 1) + 4096);
      *(_BYTE *)result = v14;
      LOBYTE(v16) = v15 & 0xF;
      if ( v13 & 1 )
        v16 = v15 >> 4;
      *(_BYTE *)(result + 1) = v16;
    }
    else
      *(_BYTE *)result = BlockID::AIR;
      *(_BYTE *)(result + 1) = 0;
  v18 = *(_WORD *)result;
  if ( v18 != *(_WORD *)v9 )
    v19 = v7 + 76;
    v20 = v7 + 2 * (unsigned __int8)(*(_BYTE *)v6 + 16 * *(_BYTE *)(v6 + 1));
    if ( v8 >= *(_WORD *)(v20 + 2372) - 1 )
      *(_WORD *)(v20 + 2372) = -999;
      v11 = *(_WORD *)(v6 + 2);
    v21 = *(_WORD *)v6;
    v42 = v11 >> 4;
    if ( v10 <= v11 >> 4 )
      v39 = __PAIR__(v11, v21);
      v40 = (_BYTE *)result;
      v41 = __PAIR__(v6, v9);
      v22 = (unsigned __int8 *)(v7 + 61);
      do
      {
        do
          v23 = __ldrex(v22);
        while ( __strex(1u, v22) );
        __dmb();
      }
      while ( v23 );
      for ( i = v11 >> 4; *(_DWORD *)(v7 + 140) <= v42; ++*(_DWORD *)(v7 + 2368) )
        v25 = *(_BYTE *)(v7 + 2952);
        v26 = (unsigned __int8)Brightness::MIN;
        v27 = SubChunk::operator new((SubChunk *)0x2808, i);
        v28 = v27;
        v29 = 0;
        if ( v25 > v26 )
          v29 = 1;
        SubChunk::SubChunk((int)v27, v29, 0);
        *(_DWORD *)(v19 + 4 * *(_DWORD *)(v7 + 140)) = v28;
        v30 = *(_DWORD *)(v7 + 140);
        *(_DWORD *)(v7 + 140) = v30 + 1;
        *(_DWORD *)(v7 + 2280 + 4 * *(_DWORD *)(v7 + 2368)) = *(_DWORD *)(v19 + 4 * v30) + 10240;
        i = v11 >> 4;
      __dmb();
      *v22 = 0;
      LOBYTE(v18) = *v40;
      v6 = HIDWORD(v41);
      v9 = v41;
      LOBYTE(v11) = BYTE4(v39);
      v21 = v39;
    v31 = ((v21 >> 4) & 0xFF0 | v11 & 0xF) + (v21 << 8);
    v32 = v19 + 4 * v42;
    if ( (unsigned __int8)v18 == *(_BYTE *)v9 )
      v33 = *(_DWORD *)v32;
      v46 = *(_BYTE *)v9;
      v47 = v18;
      LevelChunk::_removeCallbacks(v7, v6, &v47, &v46, a5);
      *(_BYTE *)(*(_DWORD *)v32 + (unsigned __int16)v31) = *(_BYTE *)v9;
    v34 = *(_BYTE *)(v9 + 1);
    v35 = v33 + ((unsigned __int16)v31 >> 1);
    v36 = *(_BYTE *)(v35 + 4096);
    v37 = (_BYTE *)(v35 + 4096);
    if ( v31 & 1 )
      v34 = v36 & 0xF | 16 * v34;
      LOBYTE(v34) = v34 & 0xF | v36 & 0xF0;
    *v37 = v34;
    result = *(_BYTE *)v9;
    if ( (unsigned __int8)v18 != result )
      v45 = v18;
      v44 = result;
      v38 = *a6;
      *a6 = 0;
      v43 = v38;
      LevelChunk::_placeCallbacks(v7, v6, &v45, &v44, __PAIR__(&v43, a5));
      if ( v43 )
        (*(void (**)(void))(*(_DWORD *)v43 + 4))();
      result = 0;
      v43 = 0;
    if ( a5 )
      result = DirtyTicksCounter::touch((DirtyTicksCounter *)(*(_DWORD *)v32 + 10240));
  return result;
}


unsigned int __fastcall LevelChunk::setAllBlockIDs(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r9@1
  unsigned int result; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  unsigned int i; // r1@2
  unsigned int v12; // r1@8
  int *v13; // r10@8
  unsigned __int8 *v14; // r6@9
  unsigned int v15; // r5@9
  unsigned int v16; // r1@10
  void *v17; // r7@13
  int v18; // r0@13
  int v19; // lr@15
  int v20; // r12@16
  int v21; // r3@17
  int v22; // r2@17
  int v23; // r7@17
  int v24; // r6@18
  int v25; // r1@18
  int v26; // r5@18
  int v27; // r6@18

  v4 = a4;
  v5 = a2;
  v6 = a4 - 1;
  v7 = a1;
  result = 0;
  v9 = a2;
  v10 = 0;
  do
  {
    for ( i = v6; i > result; --i )
    {
      if ( *(_BYTE *)(v9 + i) )
        result = i;
    }
    ++v10;
    v9 += v4;
  }
  while ( v10 != 256 );
  if ( result )
    v12 = *(_DWORD *)(v7 + 140);
    v13 = (int *)(v7 + 76);
    if ( v12 <= result >> 4 )
      v14 = (unsigned __int8 *)(v7 + 61);
      v15 = result >> 4;
      do
      {
        do
          v16 = __ldrex(v14);
        while ( __strex(1u, v14) );
        __dmb();
      }
      while ( v16 );
      for ( ; *(_DWORD *)(v7 + 140) <= v15; ++*(_DWORD *)(v7 + 2368) )
        v17 = SubChunk::operator new((SubChunk *)0x2808, v16);
        SubChunk::SubChunk((int)v17, 0, 0);
        v13[*(_DWORD *)(v7 + 140)] = (int)v17;
        v18 = *(_DWORD *)(v7 + 140);
        *(_DWORD *)(v7 + 140) = v18 + 1;
        v16 = *(_DWORD *)(v7 + 2368);
        *(_DWORD *)(v7 + 2280 + 4 * v16) = v13[v18] + 10240;
      result = 0;
      __dmb();
      *(_BYTE *)(v7 + 61) = 0;
      v12 = *(_DWORD *)(v7 + 140);
    v19 = 0;
    if ( 4 * v12 )
      v20 = (int)&v13[v12];
        v21 = *v13;
        v22 = v5 + v19;
        v23 = 0;
        {
          v24 = *(_DWORD *)v22;
          v25 = *(_DWORD *)(v22 + 4);
          v26 = *(_DWORD *)(v22 + 8);
          result = *(_DWORD *)(v22 + 12);
          v22 += v4;
          *(_DWORD *)(v21 + v23) = v24;
          v27 = v21 + v23;
          v23 += 16;
          *(_DWORD *)(v27 + 12) = result;
          *(_DWORD *)(v27 + 8) = v26;
          *(_DWORD *)(v27 + 4) = v25;
        }
        while ( v23 != 4096 );
        ++v13;
        v19 += 16;
      while ( (int *)v20 != v13 );
  return result;
}


int __fastcall LevelChunk::getBlockEntity(LevelChunk *this, const ChunkBlockPos *a2)
{
  int v2; // r4@1
  unsigned int v3; // r11@1
  unsigned int v4; // r8@1
  unsigned int v5; // r5@1
  int v6; // r6@1
  int v7; // r0@1
  int v8; // r10@2
  int v9; // r7@2
  unsigned int v10; // r1@4
  bool v11; // zf@4
  int v12; // r4@9
  int result; // r0@11
  bool v14; // zf@12
  int v15; // [sp+0h] [bp-28h]@2

  v2 = *((_WORD *)a2 + 1);
  v3 = *((_DWORD *)this + 725);
  v4 = *(_WORD *)a2;
  v5 = v4 | (v2 << 8) | (v4 >> 8 << 16);
  v6 = v5 % *((_DWORD *)this + 725);
  v7 = *(_DWORD *)(*((_DWORD *)this + 724) + 4 * v6);
  if ( !v7 )
    goto LABEL_11;
  v8 = *(_DWORD *)v7;
  v15 = (unsigned __int16)v2;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  while ( 1 )
  {
    if ( v9 == v5 )
    {
      v10 = *(_WORD *)(v8 + 4);
      v11 = v4 == (unsigned __int8)v10;
      if ( v4 == (unsigned __int8)v10 )
        v11 = v4 >> 8 == v10 >> 8;
      if ( v11 && v15 == *(_WORD *)(v8 + 6) )
        break;
    }
    v12 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v12 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v12 + 12) % v3 == v6 )
        continue;
  }
  v14 = v7 == 0;
  if ( v7 )
    v7 = *(_DWORD *)v7;
    v14 = v7 == 0;
  if ( v14 )
LABEL_11:
    result = 0;
  else
    result = *(_DWORD *)(v7 + 8);
  return result;
}


int *__fastcall LevelChunk::LevelChunk(int *a1, Dimension *a2, __int64 *a3, char a4)
{
  Dimension *v4; // r11@1
  int *v5; // r4@1
  char v6; // r8@1
  __int64 *v7; // r7@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r6@1
  double v11; // r0@1
  unsigned int v12; // r0@1
  int v13; // r7@3
  void *v14; // r6@3
  double v15; // r0@4
  double v16; // r0@4
  int v17; // r7@6
  void *v18; // r6@6
  unsigned int v19; // r0@7
  int v20; // r7@9
  void *v21; // r6@9
  _DWORD *v22; // r6@10
  int v23; // r8@10
  void *v24; // r0@11
  void *v25; // r0@13
  unsigned __int8 v26; // r0@16
  int v27; // r5@16
  int v28; // r3@16
  signed int v29; // r0@16
  int v30; // r2@17
  int v31; // r0@18
  int v32; // r0@18
  int v33; // r0@18
  int v34; // r0@18
  int v35; // r0@18
  char v37; // [sp+Ch] [bp-34h]@1
  int v38; // [sp+10h] [bp-30h]@1
  int v39; // [sp+14h] [bp-2Ch]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  *a1 = Dimension::getLevel(a2);
  v5[1] = (int)v4;
  BlockPos::BlockPos((int)(v5 + 2), v7, 0);
  BlockPos::BlockPos((int)&v37, v7, 0);
  v8 = v38;
  v9 = v39;
  v10 = (signed __int16)v4[60];
  v5[5] = *(_DWORD *)&v37 + 15;
  v5[6] = v10 + v8 - 1;
  v5[7] = v9 + 15;
  *((_QWORD *)v5 + 4) = *v7;
  *((_BYTE *)v5 + 40) = 0;
  *((_BYTE *)v5 + 41) = v6;
  v5[11] = 0;
  *((_BYTE *)v5 + 48) = SharedConstants::CurrentLevelChunkFormat;
  v5[13] = (int)&unk_28898CC;
  v5[14] = 0;
  __dmb();
  *((_BYTE *)v5 + 60) = 0;
  *((_BYTE *)v5 + 61) = 0;
  v5[16] = 0;
  v5[17] = 0;
  v5[18] = 0;
  v5[35] = 0;
  v5[486] = 0;
  v5[487] = 0;
  v5[488] = 1065353216;
  v5[489] = 0;
  LODWORD(v11) = v5 + 488;
  v12 = sub_21E6254(v11);
  v5[485] = v12;
  if ( v12 == 1 )
  {
    v14 = v5 + 490;
    v5[490] = 0;
  }
  else
    if ( v12 >= 0x40000000 )
      sub_21E57F4();
    v13 = 4 * v12;
    v14 = operator new(4 * v12);
    _aeabi_memclr4(v14, v13);
  v5[484] = (int)v14;
  *((_BYTE *)v5 + 1964) = 0;
  v5[556] = 0;
  *((_BYTE *)v5 + 2228) = 0;
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 558));
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 560));
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 562));
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 564));
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 566));
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(v5 + 568));
  v5[592] = 0;
  v5[726] = 0;
  v5[727] = 0;
  v5[723] = 0;
  v5[722] = 0;
  v5[721] = 0;
  v5[728] = 1065353216;
  v5[729] = 0;
  LODWORD(v15) = v5 + 728;
  v16 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v15)));
  v5[725] = LODWORD(v16);
  if ( LODWORD(v16) == 1 )
    v18 = v5 + 730;
    v5[730] = 0;
    if ( LODWORD(v16) >= 0x40000000 )
    v17 = 4 * LODWORD(v16);
    v18 = operator new(4 * LODWORD(v16));
    _aeabi_memclr4(v18, v17);
  v5[724] = (int)v18;
  v5[733] = 0;
  v5[734] = 0;
  v5[735] = 1065353216;
  v5[736] = 0;
  LODWORD(v16) = v5 + 735;
  v19 = sub_21E6254(v16);
  v5[732] = v19;
  if ( v19 == 1 )
    v21 = v5 + 737;
    v5[737] = 0;
    if ( v19 >= 0x40000000 )
    v20 = 4 * v19;
    v21 = operator new(4 * v19);
    _aeabi_memclr4(v21, v20);
  v5[731] = (int)v21;
  *((_BYTE *)v5 + 2952) = *((_BYTE *)v4 + 108);
  *((_BYTE *)v5 + 2953) = *((_BYTE *)v4 + 109);
  v5[739] = 0;
  v5[740] = 0;
  v5[741] = 0;
  *((_WORD *)v5 + 1486) = 0;
  *((_BYTE *)v5 + 2974) = 0;
  v22 = operator new(0x30u);
  *v22 = v5;
  _aeabi_memclr8(v22 + 2, 33);
  v23 = v5[18];
  v5[18] = (int)v22;
  if ( v23 )
    v24 = *(void **)(v23 + 28);
    if ( v24 )
      operator delete(v24);
    v25 = *(void **)(v23 + 16);
    if ( v25 )
      operator delete(v25);
    operator delete((void *)v23);
  _aeabi_memclr(v5 + 356, 512);
  v26 = (*(int (__fastcall **)(Dimension *))(*(_DWORD *)v4 + 160))(v4);
  v27 = (int)(v5 + 570);
  _aeabi_memset(v5 + 36, 256, v26, v28);
  _aeabi_memclr((char *)v5 + 1965, 256);
  v29 = -512;
  do
    v30 = (int)v5 + v29;
    v29 += 2;
    *(_WORD *)(v30 + 2884) = -999;
  while ( v29 );
  *(_DWORD *)(v27 + 4 * v5[592]) = v5 + 558;
  v31 = v5[592] + 1;
  v5[592] = v31;
  *(_DWORD *)(v27 + 4 * v31) = v5 + 560;
  v32 = v5[592] + 1;
  v5[592] = v32;
  *(_DWORD *)(v27 + 4 * v32) = v5 + 562;
  v33 = v5[592] + 1;
  v5[592] = v33;
  *(_DWORD *)(v27 + 4 * v33) = v5 + 564;
  v34 = v5[592] + 1;
  v5[592] = v34;
  *(_DWORD *)(v27 + 4 * v34) = v5 + 566;
  v35 = v5[592] + 1;
  v5[592] = v35;
  *(_DWORD *)(v27 + 4 * v35) = v5 + 568;
  ++v5[592];
  return v5;
}


int __fastcall LevelChunk::deserializeSubChunk(LevelChunk *this, int a2, IDataInput *a3)
{
  LevelChunk *v3; // r6@1
  char *v4; // r5@1
  unsigned __int8 *v5; // r4@2
  unsigned int v6; // r1@3
  unsigned int v7; // r1@5
  unsigned int v8; // r8@6
  unsigned int v9; // r9@6
  void *v10; // r0@6
  void *v11; // r7@6
  int v12; // r1@6
  int v13; // r0@8
  IDataInput *v15; // [sp+4h] [bp-2Ch]@2
  unsigned int v16; // [sp+8h] [bp-28h]@1

  v3 = this;
  v16 = a2;
  v4 = (char *)this + 76;
  if ( *((_DWORD *)this + 35) <= (unsigned int)a2 )
  {
    v5 = (unsigned __int8 *)this + 61;
    v15 = a3;
    do
    {
      do
        v6 = __ldrex(v5);
      while ( __strex(1u, v5) );
      __dmb();
    }
    while ( v6 );
    v7 = v16;
    if ( *((_DWORD *)this + 35) <= v16 )
      {
        v8 = *((_BYTE *)v3 + 2952);
        v9 = (unsigned __int8)Brightness::MIN;
        v10 = SubChunk::operator new((SubChunk *)0x2808, v7);
        v11 = v10;
        v12 = 0;
        if ( v8 > v9 )
          v12 = 1;
        SubChunk::SubChunk((int)v10, v12, 0);
        *(_DWORD *)&v4[4 * *((_DWORD *)v3 + 35)] = v11;
        v13 = *((_DWORD *)v3 + 35);
        *((_DWORD *)v3 + 35) = v13 + 1;
        *((_DWORD *)v3 + (*((_DWORD *)v3 + 592))++ + 570) = *(_DWORD *)&v4[4 * v13] + 10240;
        v7 = v16;
      }
      while ( *((_DWORD *)v3 + 35) <= v16 );
    __dmb();
    *v5 = 0;
    a3 = v15;
  }
  return j_j_j__ZN8SubChunk11deserializeER10IDataInput(*(SubChunk **)&v4[4 * v16], a3);
}


int __fastcall LevelChunk::deserializeBlockEntities(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r5@1
  IDataInput *v3; // r4@1
  int v4; // r6@1
  int v5; // r0@2
  int v6; // r7@2
  int result; // r0@5
  CompoundTag *v8; // r6@6
  char *v9; // r0@8
  unsigned int v10; // r1@8
  _BYTE *v11; // r2@8
  int v12; // r1@9
  Block *v13; // r0@11
  BlockEntity *v14; // r0@13
  char *v15; // r0@13
  BlockEntity *v16; // [sp+8h] [bp-40h]@13
  unsigned __int16 v17; // [sp+Ch] [bp-3Ch]@8
  __int16 v18; // [sp+Eh] [bp-3Ah]@8
  BlockEntity *v19; // [sp+10h] [bp-38h]@7
  CompoundTag *v20; // [sp+14h] [bp-34h]@6
  char v21; // [sp+18h] [bp-30h]@13
  char v22; // [sp+20h] [bp-28h]@13

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 726);
  if ( v4 )
  {
    do
    {
      v5 = *(_DWORD *)(v4 + 8);
      v6 = *(_DWORD *)v4;
      if ( v5 )
        (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      operator delete((void *)v4);
      v4 = v6;
    }
    while ( v6 );
  }
  _aeabi_memclr4(*((_DWORD *)v2 + 724), 4 * *((_DWORD *)v2 + 725));
  *((_DWORD *)v2 + 726) = 0;
  *((_DWORD *)v2 + 727) = 0;
  for ( result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v3 + 44))(v3);
        result;
        result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v3 + 44))(v3) )
    NbtIo::read((NbtIo *)&v20, v3);
    v8 = v20;
    if ( v20 )
      BlockEntity::loadStatic((BlockEntity *)&v19, v20);
      if ( !v19 )
        goto LABEL_23;
      v9 = BlockEntity::getPosition(v19);
      ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v17, (const BlockPos *)v9);
      v10 = v18 >> 4;
      v11 = &BlockID::AIR;
      if ( v10 < *((_DWORD *)v2 + 35) )
      {
        v12 = *((_DWORD *)v2 + v10 + 19);
        v11 = &BlockID::AIR;
        if ( v12 )
          v11 = (_BYTE *)(v12 + (v18 & 0xF | ((unsigned int)v17 >> 4) & 0xFF0) + (v17 << 8));
      }
      v13 = (Block *)Block::mBlocks[*v11];
      if ( v13 && Block::hasBlockEntity(v13) == 1 )
        v14 = v19;
        v19 = 0;
        v16 = v14;
        v15 = BlockEntity::getPosition(v14);
        ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v22, (const BlockPos *)v15);
        std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkBlockPos,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>(
          (int *)&v21,
          (unsigned __int64 *)v2 + 362,
          (unsigned int *)&v22,
          (int *)&v16);
        DirtyTicksCounter::touch(*((DirtyTicksCounter **)v2 + 571));
        if ( v16 )
          (*(void (**)(void))(*(_DWORD *)v16 + 4))();
        v16 = 0;
      if ( v19 )
        (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      if ( v8 )
LABEL_23:
        (*(void (__fastcall **)(CompoundTag *))(*(_DWORD *)v8 + 4))(v8);
  return result;
}


unsigned int __fastcall LevelChunk::_setLight(int a1, int a2, _BYTE *a3)
{
  int v3; // r6@1
  signed int v4; // r0@1
  int v5; // r4@1
  unsigned int result; // r0@2
  unsigned __int8 *v7; // r5@3
  unsigned int v8; // r1@4
  unsigned int i; // r1@6
  unsigned int v10; // r9@7
  unsigned int v11; // r10@7
  void *v12; // r0@7
  void *v13; // r7@7
  int v14; // r1@7
  int v15; // r0@9
  __int64 v16; // [sp+0h] [bp-30h]@3
  unsigned int v17; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = *(_WORD *)(a2 + 2);
  v5 = v3 + 76;
  v17 = v4 >> 4;
  if ( *(_DWORD *)(v3 + 140) <= (unsigned int)(v4 >> 4) )
  {
    result = *(_BYTE *)(v3 + 2952);
    if ( *a3 == result )
      return result;
    v7 = (unsigned __int8 *)(v3 + 61);
    v16 = *(_QWORD *)&a2;
    do
    {
      do
        v8 = __ldrex(v7);
      while ( __strex(1u, v7) );
      __dmb();
    }
    while ( v8 );
    for ( i = v17; *(_DWORD *)(v3 + 140) <= v17; ++*(_DWORD *)(v3 + 2368) )
      v10 = *(_BYTE *)(v3 + 2952);
      v11 = (unsigned __int8)Brightness::MIN;
      v12 = SubChunk::operator new((SubChunk *)0x2808, i);
      v13 = v12;
      v14 = 0;
      if ( v10 > v11 )
        v14 = 1;
      SubChunk::SubChunk((int)v12, v14, 0);
      *(_DWORD *)(v5 + 4 * *(_DWORD *)(v3 + 140)) = v13;
      v15 = *(_DWORD *)(v3 + 140);
      *(_DWORD *)(v3 + 140) = v15 + 1;
      *(_DWORD *)(v3 + 2280 + 4 * *(_DWORD *)(v3 + 2368)) = *(_DWORD *)(v5 + 4 * v15) + 10240;
      i = v17;
    __dmb();
    *v7 = 0;
    a3 = (_BYTE *)HIDWORD(v16);
    a2 = v16;
    LOWORD(v4) = *(_WORD *)(v16 + 2);
  }
  result = *(_DWORD *)(v5 + 4 * v17) + (v4 & 0xF | ((unsigned int)*(_WORD *)a2 >> 4) & 0xFF0) + (*(_WORD *)a2 << 8);
  *(_BYTE *)(result + 6144) = *(_BYTE *)(result + 6144) & 0xF | 16 * *a3;
  return result;
}


unsigned int *__fastcall LevelChunk::_removeCallbacks(int a1, int a2, _BYTE *a3, _BYTE *a4, int a5)
{
  int v5; // r8@1
  _BYTE *v6; // r4@1
  int v7; // r6@1
  unsigned int *result; // r0@1
  Block *v9; // r7@1
  Block *v10; // r5@2
  unsigned int *v11; // r9@4
  signed int v12; // r5@4
  unsigned int v13; // r0@14
  int v14; // r5@14
  unsigned int v15; // r4@14
  unsigned int v16; // r7@14
  unsigned int v17; // r11@15
  int v18; // r5@15
  unsigned int v19; // r1@17
  bool v20; // zf@17
  unsigned int v21; // r9@22
  bool v22; // zf@27
  int *v23; // r4@30
  int v24; // r0@31
  int v25; // r2@32
  int v26; // r0@34
  int v27; // [sp+4h] [bp-44h]@15
  unsigned int v28; // [sp+8h] [bp-40h]@14
  int v29; // [sp+Ch] [bp-3Ch]@14
  int v30; // [sp+10h] [bp-38h]@31
  int v31; // [sp+14h] [bp-34h]@34
  char v32; // [sp+18h] [bp-30h]@13

  v5 = a1;
  v6 = a3;
  v7 = a2;
  result = Block::mBlocks;
  v9 = (Block *)Block::mBlocks[*a3];
  if ( v9 )
  {
    v10 = (Block *)Block::mBlocks[*a4];
    result = (unsigned int *)Block::hasBlockEntity(v9);
    if ( result == (unsigned int *)1 )
    {
      if ( v10 )
      {
        v11 = (unsigned int *)Block::getBlockEntityType(v9);
        result = (unsigned int *)Block::getBlockEntityType(v10);
        v12 = 0;
        if ( v11 != result )
          v12 = 1;
      }
      else
        v12 = 1;
    }
    else
      v12 = 0;
  }
  else
    v12 = 0;
  if ( a5
    && (LOBYTE(result) = *(_BYTE *)(v5 + 56),
        __dmb(),
        result = (unsigned int *)(unsigned __int8)result,
        (unsigned __int8)result == 8) )
    result = (unsigned int *)*v6;
    if ( *v6 )
      ChunkBlockPos::operator+((int)&v32, v7, v5 + 8);
      result = (unsigned int *)(*(int (__fastcall **)(Block *, int, char *))(*(_DWORD *)v9 + 160))(v9, a5, &v32);
      if ( v12 == 1 )
        v13 = *(_WORD *)v7;
        v14 = *(_WORD *)(v7 + 2);
        v15 = *(_DWORD *)(v5 + 2900);
        v29 = (unsigned __int8)v13;
        v28 = v13 >> 8;
        v16 = (unsigned __int8)v13 | (v14 << 8) | (v13 >> 8 << 16);
        result = *(unsigned int **)(*(_DWORD *)(v5 + 2896) + 4 * (v16 % v15));
        if ( result )
        {
          v27 = (unsigned __int16)v14;
          v17 = *result;
          v18 = *(_DWORD *)(*result + 12);
          while ( 1 )
          {
            if ( v18 == v16 )
            {
              v19 = *(_WORD *)(v17 + 4);
              v20 = v29 == (unsigned __int8)v19;
              if ( v29 == (unsigned __int8)v19 )
                v20 = v28 == v19 >> 8;
              if ( v20 && v27 == *(_WORD *)(v17 + 6) )
                break;
            }
            v21 = *(_DWORD *)v17;
            if ( *(_DWORD *)v17 )
              v18 = *(_DWORD *)(v21 + 12);
              result = (unsigned int *)v17;
              v17 = *(_DWORD *)v17;
              if ( *(_DWORD *)(v21 + 12) % v15 == v16 % v15 )
                continue;
            return result;
          }
          v22 = result == 0;
          if ( result )
            v16 = *result;
            v22 = *result == 0;
          if ( !v22 )
            v23 = (int *)(v16 + 8);
            (*(void (**)(void))(**(_DWORD **)(v16 + 8) + 68))();
            if ( *(_BYTE *)(v5 + 2974) )
              v30 = v5;
              v24 = dword_281690C;
              if ( dword_281690C == unk_2816910 )
              {
                std::vector<std::pair<LevelChunk *,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<LevelChunk *,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>>::_M_emplace_back_aux<LevelChunk *,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>(
                  &LevelChunk::sBlockEntitiesToDelete,
                  &v30,
                  (int *)(v16 + 8));
              }
              else
                *(_DWORD *)dword_281690C = v5;
                v25 = *v23;
                *v23 = 0;
                *(_DWORD *)(v24 + 4) = v25;
                dword_281690C += 8;
            else
              v26 = *v23;
              *v23 = 0;
              v31 = v26;
              BlockSource::fireBlockEntityRemoved(a5, &v31);
              if ( v31 )
                (*(void (__cdecl **)(int))(*(_DWORD *)v31 + 4))(v31);
              v31 = 0;
            std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
              (unsigned __int64 *)(v5 + 2896),
              v16);
            result = (unsigned int *)DirtyTicksCounter::touch(*(DirtyTicksCounter **)(v5 + 2284));
        }
  else if ( v12 == 1 )
    result = (unsigned int *)j_j_j__ZNSt10_HashtableI13ChunkBlockPosSt4pairIKS0_St10unique_ptrI11BlockEntitySt14default_deleteIS4_EEESaIS8_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENSA_18_Mod_range_hashingENSA_20_Default_ranged_hashENSA_20_Prime_rehash_policyENSA_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseESt17integral_constantIbLb1EERS2_(
                               (unsigned __int64 *)(v5 + 2896),
                               v7);
  return result;
}


signed int __fastcall LevelChunk::isDirty(LevelChunk *this)
{
  LevelChunk *v1; // r1@1
  unsigned __int8 v2; // r0@1
  signed int result; // r0@2
  int v4; // r2@4
  DirtyTicksCounter **v5; // r4@5
  int v6; // r5@5
  DirtyTicksCounter *v7; // t1@7

  v1 = this;
  v2 = *((_BYTE *)this + 56);
  __dmb();
  if ( v2 >= 8u )
  {
    result = 0;
    if ( !*((_BYTE *)v1 + 41) )
    {
      v4 = *((_DWORD *)v1 + 592);
      if ( 0 != 4 * v4 )
      {
        v5 = (DirtyTicksCounter **)((char *)v1 + 2280);
        v6 = 4 * v4;
        while ( DirtyTicksCounter::getTicksSinceLastChange(*v5) <= -1 )
        {
          v7 = *v5;
          ++v5;
          if ( DirtyTicksCounter::getTotalDirtyTicks(v7) >= 1 )
            break;
          v6 -= 4;
          if ( !v6 )
            return 0;
        }
        result = 1;
      }
    }
  }
  else
  return result;
}


char *__fastcall LevelChunk::getBlockEntities(LevelChunk *this)
{
  return (char *)this + 2896;
}


void __fastcall LevelChunk::upgradeFix(LevelChunk *this, BlockSource *a2)
{
  LevelChunk::upgradeFix(this, a2);
}


LevelChunk *__fastcall LevelChunk::~LevelChunk(LevelChunk *this)
{
  LevelChunk *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r5@4
  char *v5; // r0@5
  int v6; // r5@8
  int v7; // r0@9
  int v8; // r6@9
  char *v9; // r0@12
  char *v10; // r5@15
  char *v11; // r6@15
  void *v12; // r0@22
  void *v13; // r6@23
  char *v14; // r0@24
  int v15; // r5@27
  void **v16; // r7@28
  int v17; // r5@32
  void *v18; // r0@33
  void *v19; // r0@35
  int v20; // r1@38
  void *v21; // r0@38
  unsigned int *v23; // r2@40
  signed int v24; // r1@42

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 739);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 733);
  if ( v3 )
  {
    do
    {
      v4 = *(void **)v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_DWORD *)v1 + 731), 4 * *((_DWORD *)v1 + 732));
  *((_DWORD *)v1 + 733) = 0;
  *((_DWORD *)v1 + 734) = 0;
  v5 = (char *)*((_DWORD *)v1 + 731);
  if ( v5 && (char *)v1 + 2948 != v5 )
    operator delete(v5);
  v6 = *((_DWORD *)v1 + 726);
  if ( v6 )
      v7 = *(_DWORD *)(v6 + 8);
      v8 = *(_DWORD *)v6;
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      operator delete((void *)v6);
      v6 = v8;
    while ( v8 );
  _aeabi_memclr4(*((_DWORD *)v1 + 724), 4 * *((_DWORD *)v1 + 725));
  *((_DWORD *)v1 + 726) = 0;
  *((_DWORD *)v1 + 727) = 0;
  v9 = (char *)*((_DWORD *)v1 + 724);
  if ( v9 && (char *)v1 + 2920 != v9 )
    operator delete(v9);
  v10 = (char *)*((_DWORD *)v1 + 721);
  v11 = (char *)*((_DWORD *)v1 + 722);
  if ( v10 != v11 )
      if ( *(_DWORD *)v10 )
        (*(void (**)(void))(**(_DWORD **)v10 + 32))();
      *(_DWORD *)v10 = 0;
      v10 += 4;
    while ( v11 != v10 );
    v10 = (char *)*((_DWORD *)v1 + 721);
  if ( v10 )
    operator delete(v10);
  *((_DWORD *)v1 + 592) = 0;
  v12 = (void *)*((_DWORD *)v1 + 486);
  if ( v12 )
      v13 = *(void **)v12;
      operator delete(v12);
      v12 = v13;
    while ( v13 );
  _aeabi_memclr4(*((_DWORD *)v1 + 484), 4 * *((_DWORD *)v1 + 485));
  *((_DWORD *)v1 + 486) = 0;
  *((_DWORD *)v1 + 487) = 0;
  v14 = (char *)*((_DWORD *)v1 + 484);
  if ( v14 && (char *)v1 + 1960 != v14 )
    operator delete(v14);
  v15 = *((_DWORD *)v1 + 35);
  *((_DWORD *)v1 + 35) = 0;
  if ( v15 )
    v16 = (void **)((char *)v1 + 76);
      if ( *v16 )
        SubChunk::operator delete(*v16);
      *v16 = 0;
      ++v16;
      --v15;
    while ( v15 );
  v17 = *((_DWORD *)v1 + 18);
  if ( v17 )
    v18 = *(void **)(v17 + 28);
    if ( v18 )
      operator delete(v18);
    v19 = *(void **)(v17 + 16);
    if ( v19 )
      operator delete(v19);
    operator delete((void *)v17);
  *((_DWORD *)v1 + 18) = 0;
  v20 = *((_DWORD *)v1 + 13);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  return v1;
}


void __fastcall LevelChunk::findLightningTarget(LevelChunk *this, const BlockPos *a2, BlockSource *a3, const BlockPos *a4)
{
  LevelChunk::findLightningTarget(this, a2, a3, a4);
}


signed int __fastcall LevelChunk::setBlockExtraData(LevelChunk *this, const ChunkBlockPos *a2, int a3)
{
  LevelChunk *v3; // r10@1
  int v4; // r9@1
  unsigned int v5; // r8@1
  unsigned int v6; // r6@1
  int v7; // r11@1
  void **v8; // r1@1
  int *v9; // r5@2
  int *v10; // r0@2
  int v11; // r4@2
  int v12; // r7@4
  int v13; // r0@7
  void **v14; // r10@18
  void **v15; // r9@18
  void **v16; // r7@18
  int v17; // r4@18
  _DWORD *v18; // r5@20
  void **v20; // r7@25
  int v21; // r4@25
  _DWORD *v22; // r5@27
  unsigned int v23; // r0@28
  int v24; // r1@28
  void **v25; // r6@31
  LevelChunk *v26; // r5@32
  int v27; // r1@33
  bool v28; // zf@36
  _DWORD *v29; // r0@40
  char v30; // r0@42
  _DWORD *v31; // r4@45
  int v32; // r1@46
  int v33; // r1@47
  int v34; // [sp+4h] [bp-34h]@1
  char *v35; // [sp+8h] [bp-30h]@1
  LevelChunk *v36; // [sp+10h] [bp-28h]@15

  v3 = this;
  v4 = a3;
  v5 = *((_DWORD *)this + 732);
  v34 = *((_DWORD *)this + 731);
  v6 = (unsigned __int16)(*((_WORD *)a2 + 1) + ((*((_BYTE *)a2 + 1) + 16 * *(_BYTE *)a2) << 8));
  v7 = v6 % v5;
  v8 = *(void ***)(*((_DWORD *)this + 731) + 4 * (v6 % v5));
  v35 = (char *)this + 2924;
  if ( v8 )
  {
    v9 = (int *)*v8;
    v10 = *(int **)(*((_DWORD *)this + 731) + 4 * (v6 % v5));
    v11 = *((_DWORD *)*v8 + 1);
    while ( v6 != v11 )
    {
      v12 = *v9;
      if ( *v9 )
      {
        v11 = *(_DWORD *)(v12 + 4);
        v10 = v9;
        v9 = (int *)*v9;
        if ( *(_DWORD *)(v12 + 4) % v5 == v7 )
          continue;
      }
      goto LABEL_10;
    }
    if ( v10 )
      v13 = *v10;
      goto LABEL_11;
LABEL_10:
    v13 = 0;
LABEL_11:
    v4 = a3;
  }
  else
  if ( !v4 )
    if ( !v13 )
      return 0;
    v36 = v3;
    if ( !v8 )
      goto LABEL_42;
    v14 = (void **)*v8;
    v15 = v8;
    v16 = v8;
    v17 = *((_DWORD *)*v8 + 1);
    while ( v6 != v17 )
      v18 = *v14;
      if ( *v14 )
        v17 = v18[1];
        v15 = v14;
        v14 = (void **)*v14;
        if ( v18[1] % v5 == v7 )
    if ( !v15 )
    v25 = (void **)*v15;
    if ( v8 != v15 )
      v26 = v36;
      if ( *v25 )
        v27 = *((_DWORD *)*v25 + 1) % v5;
        if ( v27 != v7 )
          *(_DWORD *)(v34 + 4 * v27) = v15;
      goto LABEL_52;
    v31 = *v25;
    if ( *v25 )
      v32 = v31[1] % v5;
      if ( v32 == v7 )
LABEL_52:
        *v15 = *v25;
        v36 = v26;
        operator delete(v25);
        --*((_DWORD *)v26 + 734);
        goto LABEL_42;
      *(_DWORD *)(v34 + 4 * v32) = v16;
      v33 = *(_DWORD *)v35;
      v16 = *(void ***)(*(_DWORD *)v35 + 4 * v7);
    else
      v33 = v34;
    if ( (void **)((char *)v26 + 2932) == v16 )
      *v16 = v31;
    *(_DWORD *)(v33 + 4 * v7) = 0;
    goto LABEL_52;
  if ( !v13 )
      goto LABEL_40;
    v20 = (void **)*v8;
    v21 = *((_DWORD *)*v8 + 1);
    while ( v6 != v21 )
      v22 = *v20;
      if ( *v20 )
        v21 = v22[1];
        v23 = v22[1];
        v24 = v23 % v5;
        v13 = v23 / v5;
        v28 = v24 == v7;
        v8 = v20;
        v20 = (void **)*v20;
        if ( v28 )
    v28 = v8 == 0;
    if ( v8 )
      v13 = (int)*v8;
      v28 = *v8 == 0;
    if ( v28 )
LABEL_40:
      v29 = operator new(0xCu);
      *v29 = 0;
      v29[1] = v6;
      *((_WORD *)v29 + 4) = 0;
      v13 = std::_Hashtable<int,std::pair<int const,unsigned short>,std::allocator<std::pair<int const,unsigned short>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)v35,
              v7,
              v6,
              (int)v29);
    goto LABEL_41;
  if ( *(_WORD *)(v13 + 8) == v4 )
    return 0;
  v36 = v3;
LABEL_41:
  *(_WORD *)(v13 + 8) = v4;
LABEL_42:
  v30 = *((_BYTE *)v36 + 56);
  __dmb();
  if ( v30 == 8 )
    DirtyTicksCounter::touch(*((DirtyTicksCounter **)v36 + 572));
  return 1;
}


int __fastcall LevelChunk::deserializeFinalization(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  *((_DWORD *)v2 + 556) = result;
  return result;
}


unsigned int __fastcall LevelChunk::setAllBlockData(int a1, int a2, int a3, signed int a4)
{
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r6@1
  int v7; // r7@1
  unsigned int result; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  unsigned int i; // r1@2
  unsigned int v12; // r1@8
  _DWORD *v13; // r4@8
  unsigned __int8 *v14; // r5@9
  unsigned int v15; // r10@9
  unsigned int v16; // r1@10
  void *v17; // r6@13
  int v18; // r0@13
  int v19; // r12@16
  int v20; // r3@17
  int v21; // r6@17
  int v22; // r2@17
  unsigned int v23; // r1@18
  int v24; // r5@18
  int v25; // r1@18
  int v26; // r5@18

  v4 = a1;
  v5 = a2;
  v6 = a4 / 2 - 1;
  v7 = a4 / 2;
  result = 0;
  v9 = a2;
  v10 = 0;
  do
  {
    for ( i = v6; i > result; --i )
    {
      if ( *(_BYTE *)(v9 + i) )
        result = i;
    }
    ++v10;
    v9 += v7;
  }
  while ( v10 != 256 );
  if ( result )
    v12 = *(_DWORD *)(v4 + 140);
    v13 = (_DWORD *)(v4 + 76);
    if ( v12 <= result >> 3 )
      v14 = (unsigned __int8 *)(v4 + 61);
      v15 = result >> 3;
      do
      {
        do
          v16 = __ldrex(v14);
        while ( __strex(1u, v14) );
        __dmb();
      }
      while ( v16 );
      for ( ; *(_DWORD *)(v4 + 140) <= v15; ++*(_DWORD *)(v4 + 2368) )
        v17 = SubChunk::operator new((SubChunk *)0x2808, v16);
        SubChunk::SubChunk((int)v17, 0, 0);
        v13[*(_DWORD *)(v4 + 140)] = v17;
        v18 = *(_DWORD *)(v4 + 140);
        *(_DWORD *)(v4 + 140) = v18 + 1;
        v16 = *(_DWORD *)(v4 + 2368);
        *(_DWORD *)(v4 + 2280 + 4 * v16) = v13[v18] + 10240;
      __dmb();
      *(_BYTE *)(v4 + 61) = 0;
      v12 = *(_DWORD *)(v4 + 140);
    result = 0;
    if ( 4 * v12 )
      v19 = (int)&v13[v12];
        v20 = 0;
        v21 = v5;
        v22 = *v13 + 4096;
        {
          v23 = v21 + result;
          v24 = *(_DWORD *)(v21 + result);
          v21 += v7;
          v25 = *(_DWORD *)(v23 + 4);
          *(_DWORD *)(v22 + v20) = v24;
          v26 = v22 + v20;
          v20 += 8;
          *(_DWORD *)(v26 + 4) = v25;
        }
        while ( v20 != 2048 );
        ++v13;
        result += 8;
      while ( (_DWORD *)v19 != v13 );
  return result;
}


char *__fastcall LevelChunk::getMin(LevelChunk *this)
{
  return (char *)this + 8;
}


int __fastcall LevelChunk::getBrightness(int result, const ChunkBlockPos *a2, int a3)
{
  signed int v3; // r3@1
  unsigned int v4; // r2@2
  char v5; // r1@2
  unsigned int v6; // r2@2

  v3 = *(_WORD *)(a3 + 2);
  if ( (unsigned int)(v3 >> 4) >= *((_DWORD *)a2 + 35) )
  {
    LOBYTE(v6) = *((_BYTE *)a2 + 2952);
    v5 = *((_BYTE *)a2 + 2953);
  }
  else
    v4 = *(_BYTE *)(*((_DWORD *)a2 + (v3 >> 4) + 19)
                  + (v3 & 0xF | ((unsigned int)*(_WORD *)a3 >> 4) & 0xFF0)
                  + (*(_WORD *)a3 << 8)
                  + 6144);
    v5 = v4 & 0xF;
    v6 = v4 >> 4;
  *(_BYTE *)result = v6;
  *(_BYTE *)(result + 1) = v5;
  return result;
}


void __fastcall LevelChunk::_fixUselessDynamicWater(LevelChunk *this, BlockSource *a2)
{
  LevelChunk::_fixUselessDynamicWater(this, a2);
}


char *__fastcall LevelChunk::setCachedTemperatureNoise(LevelChunk *this, const ChunkBlockPos *a2, signed __int8 a3)
{
  char *result; // r0@1

  result = (char *)this + 4 * (unsigned __int8)(*(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1));
  result[403] = a3;
  return result;
}


int __fastcall LevelChunk::getConvertedInterpolantBool(LevelChunk *this, unsigned int a2, unsigned int a3)
{
  LevelChunk *v3; // r12@1
  int result; // r0@1

  v3 = this;
  result = 0;
  if ( (a3 | a2) <= 1 )
  {
    if ( *((_BYTE *)v3 + 2972) )
      result = *((_BYTE *)v3 + 2 * a2 + a3 + 2968);
  }
  return result;
}


signed int __fastcall LevelChunk::needsSaving(LevelChunk *this, int a2, int a3)
{
  int v3; // r5@1
  LevelChunk *v4; // r1@1
  unsigned __int8 v5; // r0@1
  int v6; // r4@1
  signed int result; // r0@2
  int v8; // r2@3
  DirtyTicksCounter **v9; // r6@4
  int v10; // r7@4
  DirtyTicksCounter *v11; // t1@6

  v3 = a2;
  v4 = this;
  v5 = *((_BYTE *)this + 56);
  v6 = a3;
  __dmb();
  if ( v5 < 8u )
  {
LABEL_8:
    result = 0;
  }
  else
    if ( !*((_BYTE *)v4 + 41) )
    {
      v8 = *((_DWORD *)v4 + 592);
      if ( 0 != 4 * v8 )
      {
        v9 = (DirtyTicksCounter **)((char *)v4 + 2280);
        v10 = 4 * v8;
        while ( DirtyTicksCounter::getTicksSinceLastChange(*v9) < v3 )
        {
          v11 = *v9;
          ++v9;
          if ( DirtyTicksCounter::getTotalDirtyTicks(v11) > v6 )
            break;
          v10 -= 4;
          if ( !v10 )
            goto LABEL_8;
        }
        result = 1;
      }
    }
  return result;
}


CompoundTag *__fastcall LevelChunk::serializeTicks(LevelChunk *this, IDataOutput *a2)
{
  LevelChunk *v2; // r5@1
  IDataOutput *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-34h]@1
  int v9; // [sp+20h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v8);
  BlockTickingQueue::save(*((BlockTickingQueue **)v2 + 18), (CompoundTag *)&v8);
  (*(void (__fastcall **)(int *, int *))(v8 + 44))(&v9, &v8);
  Tag::writeNamedTag((int)&v9, (int)&v8, (int)v3);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  return CompoundTag::~CompoundTag((CompoundTag *)&v8);
}


void __fastcall LevelChunk::deserializeTicks(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r5@1
  CompoundTag *v3; // r4@1
  CompoundTag *v4; // [sp+4h] [bp-14h]@1

  v2 = this;
  NbtIo::read((NbtIo *)&v4, a2);
  v3 = v4;
  if ( v4 )
  {
    BlockTickingQueue::load(*((BlockTickingQueue **)v2 + 18), v4);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 4))(v3);
  }
}


  if ( LevelChunk::tryChangeState(*(_DWORD *)(*(_DWORD *)a1 + 4), 6, 7u) == 1 )
{
    v2 = LevelChunk::generateOriginalLighting(
           (LevelChunk *)*(_QWORD *)(v1 + 4),
           (ChunkViewSource *)(*(_QWORD *)(v1 + 4) >> 32),
           1);
    v3 = *(_DWORD *)(v1 + 4);
    if ( v2 )
    {
      LevelChunk::changeState(v3, 7, 8u);
      **(_BYTE **)(v1 + 16) = 1;
      result = 1;
    }
    else
      LevelChunk::changeState(v3, 7, 6u);
      result = 0;
  }
  else
  {
    result = 1;
  return result;
}


int *__fastcall LevelChunk::setPendingEntities(int a1, int *a2)
{
  return xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
           (int *)(a1 + 52),
           a2);
}


char *__fastcall LevelChunk::addHardcodedSpawningArea(int a1, int a2, char a3)
{
  int v3; // r4@1
  char *v4; // r5@1
  char *result; // r0@1
  char *v6; // r3@2
  int v7; // r6@2
  int v8; // r2@3
  int v9; // lr@3
  int v10; // r12@4
  int v11; // r7@4
  int v12; // r10@5
  int v13; // r8@5
  int v14; // r9@6
  int v15; // r1@6
  char *v16; // r5@19
  int v17; // [sp+0h] [bp-40h]@1
  int v18; // [sp+4h] [bp-3Ch]@1
  int v19; // [sp+8h] [bp-38h]@1
  char *v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+10h] [bp-30h]@1
  int v22; // [sp+14h] [bp-2Ch]@1
  char v23; // [sp+18h] [bp-28h]@1

  v3 = a1;
  v21 = 0;
  v22 = 0;
  v19 = 0;
  v20 = 0;
  v17 = 0;
  v18 = 0;
  v23 = a3;
  v4 = *(char **)(a1 + 8);
  result = *(char **)(a2 + 12);
  if ( (signed int)result >= (signed int)v4 )
  {
    v6 = *(char **)(v3 + 20);
    v7 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 <= (signed int)v6 )
    {
      v8 = *(_DWORD *)(v3 + 16);
      v9 = *(_DWORD *)(a2 + 20);
      if ( v9 >= v8 )
      {
        v10 = *(_DWORD *)(v3 + 28);
        v11 = *(_DWORD *)(a2 + 8);
        if ( v11 <= v10 )
        {
          v12 = *(_DWORD *)(v3 + 12);
          v13 = *(_DWORD *)(a2 + 16);
          if ( v13 >= v12 )
          {
            v14 = *(_DWORD *)(v3 + 24);
            v15 = *(_DWORD *)(a2 + 4);
            if ( v15 <= v14 )
            {
              if ( v7 < (signed int)v4 )
                v7 = (int)v4;
              v17 = v7;
              if ( v15 < v12 )
                v15 = v12;
              v18 = v15;
              if ( v11 < v8 )
                v11 = v8;
              v19 = v11;
              if ( (signed int)v6 < (signed int)result )
                result = v6;
              v20 = result;
              if ( v14 < v13 )
                v13 = v14;
              v21 = v13;
              if ( v10 < v9 )
                v9 = v10;
              v22 = v9;
              v16 = *(char **)(v3 + 2960);
              result = (char *)std::__find_if<__gnu_cxx::__normal_iterator<LevelChunk::HardcodedSpawningArea *,std::vector<LevelChunk::HardcodedSpawningArea,std::allocator<LevelChunk::HardcodedSpawningArea>>>,__gnu_cxx::__ops::_Iter_equals_val<LevelChunk::HardcodedSpawningArea const>>(
                                 *(_DWORD *)(v3 + 2956),
                                 *(_DWORD *)(v3 + 2960),
                                 (int)&v17);
              if ( result == v16 )
              {
                if ( result == *(char **)(v3 + 2964) )
                {
                  result = std::vector<LevelChunk::HardcodedSpawningArea,std::allocator<LevelChunk::HardcodedSpawningArea>>::_M_emplace_back_aux<LevelChunk::HardcodedSpawningArea const&>(
                             (unsigned __int64 *)(v3 + 2956),
                             (int)&v17);
                }
                else
                  *(_DWORD *)result = 0;
                  *((_DWORD *)result + 1) = 0;
                  *((_DWORD *)result + 2) = 0;
                  *((_DWORD *)result + 3) = 0;
                  *((_DWORD *)result + 4) = 0;
                  *((_DWORD *)result + 5) = 0;
                  *(_DWORD *)result = v17;
                  *((_DWORD *)result + 1) = v18;
                  *((_DWORD *)result + 2) = v19;
                  *((_DWORD *)result + 3) = v20;
                  *((_DWORD *)result + 4) = v21;
                  *((_DWORD *)result + 5) = v22;
                  result[24] = v23;
                  result = (char *)(*(_DWORD *)(v3 + 2960) + 28);
                  *(_DWORD *)(v3 + 2960) = result;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


int __fastcall LevelChunk::serialize2DMaps(LevelChunk *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  LevelChunk *v3; // r5@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataOutput *, char *, signed int))(*(_DWORD *)a2 + 40))(a2, (char *)this + 1424, 512);
  return (*(int (__fastcall **)(IDataOutput *, char *, signed int))(*(_DWORD *)v2 + 40))(v2, (char *)v3 + 144, 256);
}


int __fastcall LevelChunk::addEntity(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int *v4; // r2@1

  v2 = a1;
  v3 = *a2;
  *(_QWORD *)(*a2 + 144) = *(_QWORD *)(v2 + 32);
  v4 = *(int **)(v2 + 2888);
  if ( v4 == *(int **)(v2 + 2892) )
  {
    std::vector<std::unique_ptr<Entity,std::default_delete<Entity>>,std::allocator<std::unique_ptr<Entity,std::default_delete<Entity>>>>::_M_emplace_back_aux<std::unique_ptr<Entity,std::default_delete<Entity>>>(
      (_QWORD *)(v2 + 2884),
      a2);
  }
  else
    *a2 = 0;
    *v4 = v3;
    *(_DWORD *)(v2 + 2888) += 4;
  return j_j_j__ZN17DirtyTicksCounter5touchEv(*(DirtyTicksCounter **)(v2 + 2292));
}


char *__fastcall LevelChunk::getMax(LevelChunk *this)
{
  return (char *)this + 20;
}


_BOOL4 __fastcall LevelChunk::hasAnyBiomeStates(LevelChunk *this)
{
  return *((_DWORD *)this + 487) != 0;
}


int __fastcall LevelChunk::_deserializeEntity(int a1, EntityFactory *a2, IDataInput *a3, int a4)
{
  EntityFactory *v5; // r10@1
  int v6; // r8@1
  CompoundTag *v7; // r4@1
  const CompoundTag *v8; // r2@1
  int v16; // r1@13
  int v17; // r2@13
  int (*v18)(void); // r3@14
  int v19; // r4@14
  int v20; // r1@18
  int (*v21)(void); // r3@18
  int v22; // r5@22
  const CompoundTag *v23; // r0@27
  int v24; // r9@27
  void (*v25)(void); // r3@28
  int result; // r0@34
  int v27; // [sp+0h] [bp-40h]@2
  int v28; // [sp+4h] [bp-3Ch]@28
  int v29; // [sp+8h] [bp-38h]@23
  int v30; // [sp+Ch] [bp-34h]@18
  __int64 v31; // [sp+10h] [bp-30h]@1
  CompoundTag *v32; // [sp+18h] [bp-28h]@1

  _R6 = a1;
  v5 = a2;
  v6 = a4;
  NbtIo::read((NbtIo *)&v32, a3);
  v7 = v32;
  EntityFactory::loadEntity((EntityFactory *)((char *)&v31 + 4), v32);
  _R7 = HIDWORD(v31);
  if ( HIDWORD(v31) )
  {
    v27 = (int)v7;
    if ( Entity::hasCategory(SHIDWORD(v31), 4) == 1 )
      *(_BYTE *)(_R7 + 538) = 1;
    __asm
    {
      VLDR            S0, [R6,#8]
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R7,#0x48]
    }
    _R0 = *(_DWORD *)(_R6 + 20) + 1;
      VMOV            S4, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCVT.F32.S32    S4, S4
      VCMPE.F32       S2, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S4 }
      VSTR            S0, [R7,#0x48]
      VLDR            S0, [R6,#0x10]
      VLDR            S2, [R7,#0x50]
    _R0 = *(_DWORD *)(_R6 + 28) + 1;
    __asm { VSTR            S0, [R7,#0x50] }
    if ( !Entity::isAutonomous((Entity *)_R7) )
      v16 = Entity::isGlobal((Entity *)_R7);
      v17 = **(_DWORD **)_R6;
      if ( v16 == 1 )
      {
        v18 = *(int (**)(void))(v17 + 48);
        v31 = HIDWORD(v31);
        v19 = v18();
        if ( (_DWORD)v31 )
          (*(void (**)(void))(*(_DWORD *)v31 + 32))();
        LODWORD(v31) = 0;
      }
      else
        v20 = HIDWORD(v31);
        v21 = *(int (**)(void))(v17 + 44);
        HIDWORD(v31) = 0;
        v30 = v20;
        v19 = v21();
        if ( v30 )
          (*(void (**)(void))(*(_DWORD *)v30 + 32))();
        v30 = 0;
      if ( v19 )
        (*(void (__fastcall **)(int, int, int))(*(_DWORD *)_R7 + 484))(_R7, v27, v6);
        v22 = v27;
        while ( CompoundTag::contains(v22, (const void **)&Entity::RIDING_TAG, 10) == 1 )
        {
          v23 = (const CompoundTag *)CompoundTag::getCompound(v22, (const void **)&Entity::RIDING_TAG);
          EntityFactory::loadEntity((EntityFactory *)&v29, v23);
          v24 = v29;
          if ( v29 )
          {
            v25 = *(void (**)(void))(**(_DWORD **)_R6 + 44);
            v28 = v29;
            v29 = 0;
            v25();
            if ( v28 )
              (*(void (**)(void))(*(_DWORD *)v28 + 32))();
            v28 = 0;
            (*(void (__fastcall **)(int, int))(*(_DWORD *)_R7 + 144))(_R7, v24);
          }
          v22 = CompoundTag::getCompound(v22, (const void **)&Entity::RIDING_TAG);
            (*(void (**)(void))(*(_DWORD *)v29 + 32))();
          _R7 = v24;
        }
  }
  else
    EntityFactory::fixLegacyEntity(v5, v7, v8);
    (*(void (**)(void))(*(_DWORD *)HIDWORD(v31) + 32))();
  result = v27;
  if ( v27 )
    result = (*(int (**)(void))(*(_DWORD *)v27 + 4))();
  return result;
}


int __fastcall LevelChunk::tickEntitiesDirty(int result)
{
  if ( *(_DWORD *)(result + 2888) != *(_DWORD *)(result + 2884) )
    result = j_j_j__ZN17DirtyTicksCounter5touchEv(*(DirtyTicksCounter **)(result + 2292));
  return result;
}


SubChunkRelighter *__fastcall LevelChunk::_generateOriginalLightingSubChunk(LevelChunk *this, BlockSource *a2, unsigned int a3, bool a4)
{
  int v4; // r4@1
  SubChunkRelighter *v5; // lr@1
  signed int v6; // r2@1
  signed __int64 v7; // r0@2
  signed int v8; // r9@3
  unsigned int v9; // r5@4
  int v10; // r1@4
  int v11; // r0@4
  int v12; // r1@4
  int v13; // r0@4
  int v14; // r0@4
  int v15; // r7@5
  int v16; // r12@5
  char v17; // r3@5
  int v18; // r2@5
  char v19; // r6@5
  _BYTE *v20; // r4@5
  int v21; // r4@7
  unsigned int v22; // r11@7
  unsigned __int8 *v23; // r1@7
  unsigned int v24; // r10@9
  char v25; // r3@9
  unsigned int v26; // r8@11
  bool v27; // zf@11
  unsigned int v28; // r6@14
  bool v29; // zf@15
  int v30; // r0@19
  unsigned int v31; // r2@19
  unsigned int v32; // r3@19
  bool v33; // cf@19
  unsigned int v34; // r2@19
  signed int v36; // [sp+Ch] [bp-1ECh]@2
  int v37; // [sp+10h] [bp-1E8h]@2
  signed __int64 v38; // [sp+14h] [bp-1E4h]@3
  int v39; // [sp+28h] [bp-1D0h]@2
  int v40; // [sp+2Ch] [bp-1CCh]@2
  int v41; // [sp+30h] [bp-1C8h]@3
  int v42; // [sp+34h] [bp-1C4h]@3
  int v43; // [sp+38h] [bp-1C0h]@5
  unsigned int v44; // [sp+3Ch] [bp-1BCh]@4
  unsigned int v45; // [sp+40h] [bp-1B8h]@4
  unsigned int v46; // [sp+44h] [bp-1B4h]@4
  char v47; // [sp+48h] [bp-1B0h]@1
  unsigned __int8 v48; // [sp+185h] [bp-73h]@15
  __int64 v49; // [sp+188h] [bp-70h]@5
  int v50; // [sp+190h] [bp-68h]@5
  int v51; // [sp+194h] [bp-64h]@4
  __int64 v52; // [sp+198h] [bp-60h]@5
  char v53; // [sp+1A0h] [bp-58h]@4
  int v54; // [sp+1A4h] [bp-54h]@4
  int v55; // [sp+1ACh] [bp-4Ch]@4
  int v56; // [sp+1B0h] [bp-48h]@4
  int v57; // [sp+1B4h] [bp-44h]@4
  int v58; // [sp+1B8h] [bp-40h]@25
  int v59; // [sp+1BCh] [bp-3Ch]@27

  v4 = 0;
  v5 = (SubChunkRelighter *)SubChunkRelighter::SubChunkRelighter(
                              (SubChunkRelighter *)&v47,
                              a2,
                              a3,
                              (LevelChunk *)((char *)this + 32),
                              a4,
                              0);
  v6 = 16;
  do
  {
    v36 = v6;
    v37 = v4;
    v40 = v6 / 16;
    v39 = v6 & 0xF;
    v7 = 0x1000000000LL;
    do
    {
      v38 = v7;
      v8 = 0;
      v42 = SHIDWORD(v7) / 16;
      v41 = BYTE4(v7) & 0xF;
      do
      {
        v9 = (v41 << v53) | (v42 << v57) | v8 | ((v8 + 16) / 16 << v55) | (v40 << v56) | (v39 << v51);
        v10 = (v9 >> v56) & v54;
        v45 = v10;
        v11 = (v9 >> v57) & v54;
        v44 = v11;
        v12 = (int)v5 + 64 * v11 + 16 * v10;
        v13 = (v9 >> v55) & v54;
        v46 = v13;
        v14 = *(_DWORD *)(v12 + 4 * v13);
        if ( v14 )
        {
          v43 = v12;
          v15 = HIDWORD(v49);
          v16 = v49;
          v17 = v50;
          v19 = BYTE4(v52);
          v18 = v52;
          v20 = (_BYTE *)(v14 + (((HIDWORD(v49) & v9) >> v50) | v49 & v9 | (((unsigned int)v52 & v9) >> SBYTE4(v52))));
        }
        else
          v20 = (char *)v5 + 318;
        v21 = *v20;
        v22 = ((v15 & v9) >> v17) | v9 & v16 | ((v18 & v9) >> v19);
        v23 = (unsigned __int8 *)(v14 + v22 + 6144);
        if ( !v14 )
          v23 = (unsigned __int8 *)v5 + 317;
        v24 = *v23;
        v25 = v24 & 0xF;
        if ( (v24 & 0xF) < Block::mLightEmission[v21] )
          v25 = Block::mLightEmission[v21];
        v26 = v25 & 0xF;
        v27 = (unsigned __int8)Brightness::MIN == v24 >> 4;
        if ( (unsigned __int8)Brightness::MIN == v24 >> 4 )
          v27 = v26 == (unsigned __int8)Brightness::MIN;
        if ( !v27 )
          v28 = *v23 >> 4;
          if ( v14 )
            goto LABEL_19;
          v29 = v28 == (unsigned int)v48 >> 4;
          if ( v28 == (unsigned int)v48 >> 4 )
            v29 = (v48 & 0xF) == v26;
          if ( !v29 )
          {
            SubChunkRelighter::_createSubChunk(v5, v44, v46, v45);
            v14 = *(_DWORD *)(v43 + 4 * v46);
LABEL_19:
            v30 = v14 + v22;
            *((_BYTE *)v5 + 16 * v44 + 4 * v45 + v46 + 240) = 1;
            v31 = *(_BYTE *)(v30 + 6144);
            v32 = v31 >> 4;
            v33 = v31 >> 4 >= v28;
            v34 = v31 & 0xF;
            if ( !v33 )
              LOBYTE(v32) = v24 >> 4;
            if ( v34 < v26 )
              LOBYTE(v34) = v26;
            *(_BYTE *)(v30 + 6144) = v34 & 0xF | 16 * v32;
          }
          if ( (_BYTE)v26 )
            v9 |= v58;
          if ( v24 > 0xF )
            v9 |= v59;
          SubChunkRelighter::_propagateLight(v5, v9);
        ++v8;
      }
      while ( v8 < 16 );
      HIDWORD(v7) = HIDWORD(v38) + 1;
      LODWORD(v7) = v38 + 1;
    }
    while ( (signed int)v38 + 1 < 16 );
    v6 = v36 + 1;
    v4 = v37 + 1;
  }
  while ( v37 + 1 < 16 );
  SubChunkRelighter::runPropagation((SubChunkRelighter *)&v47);
  return SubChunkRelighter::~SubChunkRelighter((SubChunkRelighter *)&v47);
}


unsigned int __fastcall LevelChunk::getGrassColor(LevelChunk *this, const ChunkBlockPos *a2)
{
  return *((_DWORD *)this + (unsigned __int8)(*(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1)) + 100) | 0xFF000000;
}


char *__fastcall LevelChunk::deserializeHardcodedSpawners(LevelChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r4@1
  LevelChunk *v3; // r5@1
  unsigned int v4; // r6@1
  char *result; // r0@1
  int v6; // r0@2
  int v7; // r11@2
  int v8; // r0@2
  int v9; // r5@2
  int v10; // r0@2
  int v11; // r7@2
  int v12; // r0@2
  int v13; // r8@2
  int v14; // r0@2
  int v15; // r9@2
  int v16; // r0@2
  int v17; // r10@2
  int v18; // r1@3
  int v19; // r2@4
  unsigned __int64 *v20; // [sp+0h] [bp-48h]@1
  LevelChunk *v21; // [sp+4h] [bp-44h]@1
  int v22; // [sp+8h] [bp-40h]@2
  int v23; // [sp+Ch] [bp-3Ch]@2
  int v24; // [sp+10h] [bp-38h]@2
  int v25; // [sp+14h] [bp-34h]@2
  int v26; // [sp+18h] [bp-30h]@2
  int v27; // [sp+1Ch] [bp-2Ch]@2
  char v28; // [sp+20h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  v21 = this;
  v4 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 32))(a2);
  v20 = (unsigned __int64 *)((char *)v3 + 2956);
  for ( result = std::vector<LevelChunk::HardcodedSpawningArea,std::allocator<LevelChunk::HardcodedSpawningArea>>::reserve(
                   (int)v3 + 2956,
                   v4); v4; --v4 )
  {
    v26 = 0;
    v24 = 0;
    v25 = 0;
    v22 = 0;
    v23 = 0;
    v6 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 32))(v2);
    v7 = v6;
    v22 = v6;
    v8 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 32))(v2);
    v9 = v8;
    v23 = v8;
    v10 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 32))(v2);
    v11 = v10;
    v24 = v10;
    v12 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 32))(v2);
    v13 = v12;
    v25 = v12;
    v14 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 32))(v2);
    v15 = v14;
    v26 = v14;
    v16 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 32))(v2);
    v17 = v16;
    v27 = v16;
    result = (char *)(*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 24))(v2);
    if ( (unsigned __int8)((_BYTE)result - 1) <= 2u )
    {
      v28 = (char)result;
      v18 = *((_DWORD *)v21 + 740);
      if ( v18 == *((_DWORD *)v21 + 741) )
      {
        result = std::vector<LevelChunk::HardcodedSpawningArea,std::allocator<LevelChunk::HardcodedSpawningArea>>::_M_emplace_back_aux<LevelChunk::HardcodedSpawningArea const&>(
                   v20,
                   (int)&v22);
      }
      else
        *(_DWORD *)v18 = 0;
        *(_DWORD *)(v18 + 4) = 0;
        *(_DWORD *)(v18 + 8) = 0;
        *(_DWORD *)(v18 + 12) = 0;
        *(_DWORD *)(v18 + 16) = 0;
        v19 = v18 + 8;
        *(_DWORD *)v18 = v7;
        *(_DWORD *)(v18 + 4) = v9;
        *(_DWORD *)v19 = v11;
        *(_DWORD *)(v19 + 4) = v13;
        *(_DWORD *)(v19 + 8) = v15;
        *(_DWORD *)(v19 + 12) = v17;
        *(_BYTE *)(v18 + 24) = (_BYTE)result;
        result = (char *)(*((_DWORD *)v21 + 740) + 28);
        *((_DWORD *)v21 + 740) = result;
    }
  }
  return result;
}


int __fastcall LevelChunk::removeEntity(LevelChunk *this, Entity *a2, int a3)
{
  Entity *v3; // r5@1
  LevelChunk *v4; // r4@1
  _DWORD *v5; // r1@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r3@2
  int v8; // t1@3
  int v9; // r0@6
  int v10; // r0@6
  int v11; // r3@6
  int v12; // r0@6
  int v13; // r0@8
  _DWORD *v14; // r6@8
  int v15; // r0@8
  int result; // r0@10

  v3 = a2;
  v4 = this;
  v5 = (_DWORD *)*((_DWORD *)a2 + 721);
  v6 = (_DWORD *)*((_DWORD *)v3 + 722);
  if ( v5 != v6 )
  {
    v7 = v5;
    do
    {
      v8 = *v7;
      ++v7;
      if ( v8 == a3 )
        break;
      v5 = v7;
    }
    while ( v6 != v7 );
  }
  if ( v5 == v6 )
    result = 0;
    *(_DWORD *)v4 = 0;
  else
    v9 = *v5;
    *v5 = 0;
    *(_DWORD *)v4 = v9;
    v10 = *((_DWORD *)v3 + 722);
    v11 = *(_DWORD *)(v10 - 4);
    *(_DWORD *)(v10 - 4) = 0;
    v12 = *v5;
    *v5 = v11;
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 32))();
    v13 = *((_DWORD *)v3 + 722);
    v14 = (_DWORD *)(v13 - 4);
    *((_DWORD *)v3 + 722) = v13 - 4;
    v15 = *(_DWORD *)(v13 - 4);
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 32))();
    *v14 = 0;
    result = DirtyTicksCounter::touch(*((DirtyTicksCounter **)v3 + 573));
  return result;
}


int __fastcall LevelChunk::updateCachedData(LevelChunk *this, BlockSource *a2)
{
  LevelChunk *v2; // r8@1
  BlockSource *v3; // r12@1
  int result; // r0@1
  unsigned __int8 *v5; // r5@2
  unsigned int v6; // r1@3
  int v7; // r3@6
  unsigned int v8; // r1@6
  signed int v9; // r2@6
  int v10; // r1@7
  int *v11; // r7@7
  int v12; // r6@7
  int v13; // r2@8
  int v14; // r3@8
  Random *v15; // [sp+0h] [bp-A00h]@0
  int v16; // [sp+4h] [bp-9FCh]@8
  int v17; // [sp+8h] [bp-9F8h]@8
  int v18; // [sp+Ch] [bp-9F4h]@8
  unsigned int v19; // [sp+10h] [bp-9F0h]@6
  unsigned int v20; // [sp+14h] [bp-9ECh]@6
  int v21; // [sp+9D4h] [bp-2Ch]@6
  char v22; // [sp+9D8h] [bp-28h]@6
  int v23; // [sp+9DCh] [bp-24h]@6
  int v24; // [sp+9E0h] [bp-20h]@8

  v2 = this;
  v3 = a2;
  result = *((_BYTE *)this + 59);
  if ( !result )
  {
    v5 = (unsigned __int8 *)v2 + 60;
    do
    {
      do
        v6 = __ldrex(v5);
      while ( __strex(1u, v5) );
      __dmb();
    }
    while ( v6 );
    if ( !*((_BYTE *)v2 + 59) )
      v7 = 0;
      v8 = 8976890 * *((_DWORD *)v2 + 2) + 981131 * *(_QWORD *)((char *)v2 + 12) + (*(_QWORD *)((char *)v2 + 12) >> 32);
      v19 = v8;
      v21 = 625;
      v9 = 1;
      v22 = 0;
      v23 = 0;
      v20 = v8;
      {
        v10 = v8 ^ (v8 >> 30);
        v11 = (int *)(&v19 + v7);
        v12 = v7++ + 1812433253 * v10;
        v8 = v9++ + 1812433253 * v10;
        v11[2] = v12 + 1;
      }
      while ( v7 != 397 );
      v21 = 624;
      v24 = 398;
      v13 = *((_DWORD *)v2 + 6);
      v14 = *((_DWORD *)v2 + 7);
      v16 = *((_DWORD *)v2 + 5) + 1;
      v17 = v13 + 1;
      v18 = v14 + 1;
      FoliageColor::buildGrassColor(
        (LevelChunk *)((char *)v2 + 8),
        (const BlockPos *)&v16,
        v3,
        (BlockSource *)&v19,
        v15);
      *((_BYTE *)v2 + 59) = 2;
    result = 0;
    __dmb();
    *v5 = 0;
  }
  return result;
}


_BOOL4 __fastcall LevelChunk::hasAnyBlockExtraData(LevelChunk *this)
{
  return *((_DWORD *)this + 734) != 0;
}


int __fastcall LevelChunk::deserializeLoadedVersion(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  *((_BYTE *)v2 + 48) = result;
  return result;
}


int __fastcall LevelChunk::tick(__int64 a1, __int64 *a2)
{
  __int64 v2; // r4@0
  __int64 *v4; // r7@1
  BlockSource *v5; // r9@1
  Level *v6; // r11@2
  char *v7; // r6@2
  int v8; // r0@2
  Spawner *v9; // r0@7
  int v10; // r0@7
  int v11; // r2@7
  int v12; // r3@7
  int v13; // r0@7
  int v14; // r6@8
  _QWORD *v15; // t1@9
  Spawner *v16; // r0@12
  Spawner *v17; // r0@12
  int v18; // r8@14
  char *v19; // r7@14
  char *v20; // r2@14
  char *v21; // r11@15
  int v22; // r9@15
  int v23; // r0@16
  char *v24; // r1@22
  char *v25; // r6@22
  signed int v26; // r9@22
  int v27; // r7@22
  unsigned int v28; // r0@22
  unsigned int v29; // r2@24
  char *v30; // r7@32
  void *v34; // r4@45
  void *i; // r7@45
  __int64 v36; // r0@46
  __int64 v37; // r2@46
  __int64 v38; // r0@46
  int v39; // r6@47
  int v40; // r1@47
  int v41; // r0@47
  char *v43; // r8@56
  char *v44; // r1@59
  int v45; // t1@60
  int v46; // r6@63
  int v47; // r0@63
  int v48; // r1@63
  int v49; // r0@63
  int v50; // r0@65
  int v51; // r0@65
  Entity **v52; // r6@73
  Entity **v53; // r9@73
  int v54; // r0@77
  void *v55; // r7@77
  char *v56; // r0@93
  bool v57; // zf@96
  CircuitSystem *v58; // r4@105
  int v59; // r0@108
  int *v60; // r1@108
  mce::Math **v61; // r4@109
  int v62; // r5@109
  mce::Math *v63; // t1@110
  int v65; // [sp+4h] [bp-D4h]@73
  __int64 *v66; // [sp+10h] [bp-C8h]@14
  __int64 *v67; // [sp+10h] [bp-C8h]@43
  BlockSource *v68; // [sp+14h] [bp-C4h]@15
  Level *v69; // [sp+18h] [bp-C0h]@12
  char *ptr; // [sp+1Ch] [bp-BCh]@15
  char v71; // [sp+20h] [bp-B8h]@77
  void **v72; // [sp+28h] [bp-B0h]@77
  int v73; // [sp+2Ch] [bp-ACh]@77
  int v74; // [sp+30h] [bp-A8h]@77
  char v75; // [sp+34h] [bp-A4h]@77
  __int64 v76; // [sp+38h] [bp-A0h]@77
  void *v77; // [sp+40h] [bp-98h]@77
  void *v78; // [sp+44h] [bp-94h]@77
  int v79; // [sp+54h] [bp-84h]@63
  void *v80; // [sp+58h] [bp-80h]@43
  void *v81; // [sp+5Ch] [bp-7Ch]@43
  int v82; // [sp+60h] [bp-78h]@43
  void **v83; // [sp+64h] [bp-74h]@43
  int v84; // [sp+68h] [bp-70h]@43
  int v85; // [sp+6Ch] [bp-6Ch]@43
  int v86; // [sp+70h] [bp-68h]@43
  float v87; // [sp+74h] [bp-64h]@39
  float v88; // [sp+80h] [bp-58h]@39
  char v89; // [sp+8Ch] [bp-4Ch]@39
  char v90; // [sp+A8h] [bp-30h]@8

  _R10 = a1;
  v4 = a2;
  LODWORD(a1) = *(_BYTE *)(a1 + 41);
  v5 = (BlockSource *)HIDWORD(a1);
  if ( !(_DWORD)a1 )
  {
    v6 = (Level *)BlockSource::getLevel((BlockSource *)HIDWORD(a1));
    v7 = Level::getRandom(v6);
    v8 = *(_DWORD *)(_R10 + 2224);
    if ( !v8 )
    {
      __asm
      {
        VLDR            S0, [R10,#8]
        VMOV.F32        S6, #-1.0
        VLDR            S4, [R10,#0x10]
        VLDR            S2, [R10,#0xC]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S2, S2
        VADD.F32        S0, S0, S6
        VADD.F32        S4, S4, S6
        VMOV.F32        S6, #1.0
        VSTR            S0, [SP,#0xD8+var_58]
        VSTR            S2, [SP,#0xD8+var_54]
        VSTR            S4, [SP,#0xD8+var_50]
        VLDR            S0, [R10,#0x14]
        VLDR            S4, [R10,#0x1C]
        VLDR            S2, [R10,#0x18]
        VSTR            S0, [SP,#0xD8+var_64]
        VSTR            S2, [SP,#0xD8+var_60]
        VSTR            S4, [SP,#0xD8+var_5C]
      }
      AABB::AABB((int)&v89, (int)&v88, (int)&v87);
      if ( BlockSource::hasChunksAt(v5, (const AABB *)&v89) == 1
        && !BlockTickingQueue::tickPendingTicks(*(_DWORD *)(_R10 + 72), v5, v4, 100, 1) )
        *(_DWORD *)(_R10 + 2224) = 1;
      goto LABEL_111;
    }
    if ( *(_DWORD *)(*(_DWORD *)(_R10 + 52) - 12) )
      if ( BlockSource::isNearUnloadedChunks(v5, (const ChunkPos *)(_R10 + 32)) != 1 )
        v67 = v4;
        v83 = &off_26E91B8;
        v84 = 0;
        v85 = *(_DWORD *)(*(_DWORD *)(_R10 + 52) - 12);
        v86 = _R10 + 52;
        v80 = 0;
        v81 = 0;
        v82 = 0;
        if ( v85 )
        {
          do
            LevelChunk::_deserializeEntity(_R10, v5, (IDataInput *)&v83, (int)&v80);
          while ( v85 != v84 );
        }
        v34 = v81;
        for ( i = v80; v34 != i; i = (char *)i + 32 )
          LODWORD(v36) = *((_DWORD *)i + 4);
          v37 = *((_QWORD *)i + 1);
          HIDWORD(v36) = *((_DWORD *)i + 5);
          v38 = v36 ^ v37;
          if ( v38 )
          {
            v39 = Level::fetchEntity((int)v6, SHIDWORD(v38), v37, HIDWORD(v37), 0);
            v41 = Level::fetchEntity((int)v6, v40, *((_QWORD *)i + 2), *((_QWORD *)i + 2) >> 32, 0);
            _ZF = v39 == 0;
            if ( v39 )
              _ZF = v41 == 0;
            if ( !_ZF )
              (*(void (**)(void))(*(_DWORD *)v41 + 144))();
          }
        Util::freeStringMemory((int *)(_R10 + 52));
        v4 = v67;
        if ( v80 )
          operator delete(v80);
        goto LABEL_111;
      v8 = *(_DWORD *)(_R10 + 2224);
    if ( v8 == 1 )
      v9 = (Spawner *)Level::getSpawner(v6);
      Spawner::postProcessSpawnMobs(v9, v5, *(_DWORD *)(_R10 + 8), *(_DWORD *)(_R10 + 16), (Random *)v7);
      v10 = Dimension::getChunkSource(*(Dimension **)(_R10 + 4));
      v11 = *(_DWORD *)(_R10 + 8);
      v12 = *(_DWORD *)(_R10 + 16);
      (*(void (__cdecl **)(int))(*(_DWORD *)v10 + 40))(v10);
      v13 = *(_DWORD *)(_R10 + 2368);
      if ( 4 * v13 )
        HIDWORD(v2) = _R10 + 2280;
        LODWORD(v2) = &v90;
        v14 = 4 * v13;
        do
          v15 = (_QWORD *)*(_DWORD *)HIDWORD(v2);
          HIDWORD(v2) += 4;
          DirtyTicksCounter::max((DirtyTicksCounter *)&v90);
          v14 -= 4;
          *v15 = *(_QWORD *)&v90;
        while ( v14 );
      *(_DWORD *)(_R10 + 2224) = 2;
    if ( !Level::isClientSide(v6) )
      v16 = (Spawner *)Level::getSpawner(v6);
      Spawner::tick(v16, v5, (LevelChunk *)_R10);
      v69 = v6;
      v17 = (Spawner *)Level::getSpawner(v6);
      Spawner::tickDespawn(v17, v5, (LevelChunk *)_R10);
      LevelChunk::tickBlocks((LevelChunk *)_R10, v5);
      if ( BlockTickingQueue::tickPendingTicks(*(_DWORD *)(_R10 + 72), v5, v4, 100, 0) == 1 )
        DirtyTicksCounter::touch(*(DirtyTicksCounter **)(_R10 + 2296));
      v66 = v4;
      v18 = 0;
      v19 = *(char **)(_R10 + 2884);
      v20 = *(char **)(_R10 + 2888);
      if ( v20 - v19 <= 0 )
        v21 = 0;
        v68 = v5;
        ptr = 0;
      else
        v22 = 0;
          v23 = Entity::isRemoved(*(Entity **)&v19[4 * v18]);
          LODWORD(v2) = *(_DWORD *)&v19[4 * v18];
          if ( v23 )
            if ( v21 == (char *)v22 )
            {
              v24 = ptr;
              v25 = 0;
              v26 = v21 - ptr;
              v27 = (v21 - ptr) >> 2;
              v28 = (v21 - ptr) >> 2;
              if ( !v27 )
                v28 = 1;
              v29 = v28 + (v26 >> 2);
              HIDWORD(v2) = v28 + (v26 >> 2);
              if ( 0 != v29 >> 30 )
                HIDWORD(v2) = 0x3FFFFFFF;
              if ( v29 < v28 )
              if ( HIDWORD(v2) )
              {
                if ( HIDWORD(v2) >= 0x40000000 )
                  sub_21E57F4();
                v25 = (char *)operator new(4 * HIDWORD(v2));
                v24 = ptr;
              }
              *(_DWORD *)&v25[4 * v27] = v2;
              LODWORD(v2) = &v25[4 * v27];
              if ( v27 )
                v30 = v24;
                _aeabi_memmove4(v25, v24);
                v24 = v30;
              v21 = (char *)(v2 + 4);
              if ( v24 )
                operator delete(v24);
              v22 = (int)&v25[4 * HIDWORD(v2)];
              ptr = v25;
            }
            else
              *(_DWORD *)v21 = v2;
              v21 += 4;
          else if ( !*(_DWORD *)(v2 + 512) && !Entity::isGlobal(*(Entity **)&v19[4 * v18]) )
            ++unk_27F3EB0;
            Entity::tick(*(Entity **)&v19[4 * v18], v68);
          v19 = *(char **)(_R10 + 2884);
          ++v18;
          v20 = *(char **)(_R10 + 2888);
        while ( v18 < (v20 - v19) >> 2 );
      if ( ptr != v21 )
        v43 = ptr;
        LODWORD(v2) = 0;
        while ( 1 )
          if ( v19 != v20 )
            v44 = v19;
            do
              v45 = *(_DWORD *)v44;
              v44 += 4;
              if ( v45 == *(_DWORD *)v43 )
                break;
              v19 = v44;
            while ( v20 != v44 );
          if ( v19 == v20 )
            v79 = 0;
          else
            v46 = *(_DWORD *)v19;
            *(_DWORD *)v19 = 0;
            v79 = v46;
            v47 = *(_DWORD *)(_R10 + 2888);
            v48 = *(_DWORD *)(v47 - 4);
            *(_DWORD *)(v47 - 4) = 0;
            v49 = *(_DWORD *)v19;
            *(_DWORD *)v19 = v48;
            if ( v49 )
              (*(void (**)(void))(*(_DWORD *)v49 + 32))();
            v50 = *(_DWORD *)(_R10 + 2888);
            HIDWORD(v2) = v50 - 4;
            *(_DWORD *)(_R10 + 2888) = v50 - 4;
            v51 = *(_DWORD *)(v50 - 4);
            if ( v51 )
              (*(void (**)(void))(*(_DWORD *)v51 + 32))();
            *(_DWORD *)HIDWORD(v2) = 0;
            DirtyTicksCounter::touch(*(DirtyTicksCounter **)(_R10 + 2292));
            if ( v79 )
              (*(void (__fastcall **)(Level *, int *, _DWORD))(*(_DWORD *)v69 + 104))(v69, &v79, 0);
              if ( v79 )
                (*(void (**)(void))(*(_DWORD *)v79 + 32))();
          v43 += 4;
          if ( v43 == v21 )
            break;
      v65 = Level::getNetEventCallback(v69);
      v52 = *(Entity ***)(_R10 + 2884);
      v53 = *(Entity ***)(_R10 + 2888);
      if ( v52 != v53 )
        if ( v65 )
            if ( *v52 )
              LODWORD(v2) = Entity::getEntityData(*v52);
              if ( (unsigned int)(unsigned __int16)*(_DWORD *)(v2 + 12) <= *(_DWORD *)(v2 + 12) >> 16 )
                Entity::getRuntimeID((Entity *)&v71, (int)*v52);
                v73 = 2;
                v74 = 1;
                v75 = 0;
                v72 = &off_26E965C;
                v76 = *(_QWORD *)&v71;
                SynchedEntityData::packDirty((SynchedEntityData *)&v77, v2);
                v54 = Level::getPacketSender(v69);
                (*(void (**)(void))(*(_DWORD *)v54 + 8))();
                v55 = v77;
                v2 = *(_QWORD *)&v77;
                if ( v78 == v77 )
                {
                  v78 = v77;
                }
                else
                  do
                  {
                    if ( *(_DWORD *)v2 )
                      (*(void (**)(void))(**(_DWORD **)v2 + 4))();
                    *(_DWORD *)v2 = 0;
                    LODWORD(v2) = v2 + 4;
                  }
                  while ( HIDWORD(v2) != (_DWORD)v2 );
                  HIDWORD(v2) = v77;
                  v78 = v55;
                  if ( v77 != v55 )
                    do
                    {
                      if ( *(_DWORD *)HIDWORD(v2) )
                        (*(void (**)(void))(**(_DWORD **)HIDWORD(v2) + 4))();
                      *(_DWORD *)HIDWORD(v2) = 0;
                      HIDWORD(v2) += 4;
                    }
                    while ( v55 != (void *)HIDWORD(v2) );
                    v55 = v77;
                if ( v55 )
                  operator delete(v55);
                DirtyTicksCounter::touch(*(DirtyTicksCounter **)(_R10 + 2296));
            ++v52;
          while ( v52 != v53 );
        else
              v56 = Entity::getEntityData(*v52);
              if ( (unsigned int)(unsigned __int16)*((_DWORD *)v56 + 3) <= *((_DWORD *)v56 + 3) >> 16 )
          while ( v53 != v52 );
      v5 = v68;
      v4 = v66;
      v57 = v65 == 0;
      if ( v65 )
        v2 = *(_QWORD *)(_R10 + 2884);
        v57 = (_DWORD)v2 == HIDWORD(v2);
      if ( !v57 )
          if ( !Entity::isGlobal(*(Entity **)v2) )
            (*(void (**)(void))(**(_DWORD **)v2 + 588))();
          LODWORD(v2) = v2 + 4;
        while ( HIDWORD(v2) != (_DWORD)v2 );
      if ( ptr )
        operator delete(ptr);
    LevelChunk::tickBlockEntities((LevelChunk *)_R10, v5);
    if ( !Level::isClientSide(*(Level **)_R10) )
      v58 = (CircuitSystem *)Dimension::getCircuitSystem(*(Dimension **)(_R10 + 4));
      BlockPos::BlockPos((int)&v90, (__int64 *)(_R10 + 32), 0);
      CircuitSystem::updateBlocks(v58, v5, (const BlockPos *)&v90);
    if ( *(_DWORD *)(_R10 + 2888) != *(_DWORD *)(_R10 + 2884) )
      DirtyTicksCounter::touch(*(DirtyTicksCounter **)(_R10 + 2292));
    v59 = *(_DWORD *)(_R10 + 2368);
    v60 = 0;
    if ( 4 * v59 )
      v61 = (mce::Math **)(_R10 + 2280);
      v62 = 4 * v59;
      do
        v63 = *v61;
        ++v61;
        DirtyTicksCounter::operator++(v63, v60);
        v62 -= 4;
      while ( v62 );
LABEL_111:
    a1 = *v4;
    *(_QWORD *)(_R10 + 64) = *v4;
  }
  return a1;
}


signed int __fastcall LevelChunk::getEntities(signed int result, int a2, const AABB *a3, int a4)
{
  signed int *v4; // r6@1
  const AABB *v5; // r5@1
  signed int *v6; // r10@1
  int v7; // r4@1
  int v8; // r9@1
  __int64 v9; // r0@4
  signed int v10; // r8@4
  void *v11; // r5@6
  char *v12; // r7@6 OVERLAPPED
  signed int v13; // r1@6
  unsigned int v14; // r2@6
  unsigned int v15; // r1@8
  unsigned int v16; // r11@8
  char *v17; // r8@15
  int v18; // r8@17 OVERLAPPED
  const AABB *i; // [sp+0h] [bp-28h]@1

  v4 = *(signed int **)(result + 2884);
  v5 = a3;
  v6 = *(signed int **)(result + 2888);
  v7 = a4;
  v8 = a2;
  for ( i = a3; v6 != v4; ++v4 )
  {
    result = *v4;
    if ( *v4 != v8 )
    {
      result = AABB::intersects((AABB *)(result + 264), v5);
      if ( result == 1 )
      {
        v9 = *(_QWORD *)(v7 + 4);
        v10 = *v4;
        if ( (_DWORD)v9 == HIDWORD(v9) )
        {
          v11 = *(void **)v7;
          v12 = 0;
          v13 = v9 - *(_DWORD *)v7;
          v14 = v13 >> 2;
          if ( !(v13 >> 2) )
            v14 = 1;
          v15 = v14 + (v13 >> 2);
          v16 = v15;
          if ( 0 != v15 >> 30 )
            v16 = 0x3FFFFFFF;
          if ( v15 < v14 )
          if ( v16 )
          {
            if ( v16 >= 0x40000000 )
              sub_21E57F4();
            v12 = (char *)operator new(4 * v16);
            LODWORD(v9) = *(_QWORD *)v7 >> 32;
            v11 = (void *)*(_QWORD *)v7;
          }
          *(_DWORD *)&v12[v9 - (_DWORD)v11] = v10;
          v17 = &v12[v9 - (_DWORD)v11];
          if ( ((signed int)v9 - (signed int)v11) >> 2 )
            _aeabi_memmove4(v12, v11);
          v18 = (int)(v17 + 4);
          if ( v11 )
            operator delete(v11);
          *(_QWORD *)v7 = *(_QWORD *)&v12;
          result = (signed int)&v12[4 * v16];
          v5 = i;
          *(_DWORD *)(v7 + 8) = result;
        }
        else
          *(_DWORD *)v9 = v10;
          result = *(_DWORD *)(v7 + 4) + 4;
          *(_DWORD *)(v7 + 4) = result;
      }
    }
  }
  return result;
}


void __fastcall LevelChunk::upgradeFix(LevelChunk *this, BlockSource *a2)
{
  unsigned int v2; // r5@1
  signed int v3; // r7@3
  bool v4; // zf@5
  int v5; // r0@6
  _BYTE *v6; // r2@10
  unsigned int v7; // r1@10
  int v8; // r1@11
  unsigned int v9; // r6@14
  unsigned int v10; // r8@14
  int v11; // r5@15
  int v12; // r10@15
  unsigned int v13; // r1@17
  bool v14; // zf@17
  int v15; // r4@22
  BedBlockEntity *v16; // r6@24
  __int64 v17; // ST00_8@24
  int v18; // r3@31
  int v19; // r0@34
  BlockSource *v20; // [sp+14h] [bp-64h]@1
  char *v21; // [sp+18h] [bp-60h]@1
  char *v22; // [sp+1Ch] [bp-5Ch]@1
  LevelChunk *v23; // [sp+24h] [bp-54h]@1
  int v24; // [sp+2Ch] [bp-4Ch]@1
  unsigned int v25; // [sp+30h] [bp-48h]@14
  unsigned int v26; // [sp+34h] [bp-44h]@14
  BedBlockEntity *v27; // [sp+38h] [bp-40h]@24
  char v28; // [sp+3Ch] [bp-3Ch]@24
  char v29; // [sp+40h] [bp-38h]@24
  char v30; // [sp+44h] [bp-34h]@24
  unsigned __int16 v31; // [sp+50h] [bp-28h]@1
  __int16 v32; // [sp+52h] [bp-26h]@1

  v20 = a2;
  v23 = this;
  v24 = *(_BYTE *)(Block::mBed + 4);
  v31 = 0;
  v32 = 0;
  v2 = *((_DWORD *)this + 35);
  v22 = (char *)this + 76;
  v21 = (char *)this + 8;
  do
  {
    HIBYTE(v31) = 0;
    do
    {
      LOWORD(v3) = 0;
      v32 = 0;
      if ( (signed __int16)(16 * v2) >= 1 )
      {
        do
        {
          v6 = &FullBlock::AIR;
          v7 = (signed __int16)v3 >> 4;
          if ( v7 < v2 )
          {
            v8 = *(_DWORD *)&v22[4 * v7];
            v6 = &BlockID::AIR;
            if ( v8 )
              v6 = (_BYTE *)(v8 + (((unsigned int)v31 >> 4) & 0xFF0 | v3 & 0xF) + (v31 << 8));
          }
          if ( *v6 == v24 )
            v26 = v2;
            v9 = *((_DWORD *)v23 + 725);
            v25 = (unsigned int)v31 >> 8;
            v10 = v31 | ((signed __int16)v3 << 8) | (v25 << 16);
            v5 = *(_DWORD *)(*((_DWORD *)v23 + 724) + 4 * (v10 % v9));
            if ( !v5 )
              goto LABEL_24;
            v11 = *(_DWORD *)v5;
            v12 = *(_DWORD *)(*(_DWORD *)v5 + 12);
            while ( 1 )
            {
              if ( v12 == (v31 | ((signed __int16)v3 << 8) | (v25 << 16)) )
              {
                v13 = *(_WORD *)(v11 + 4);
                v14 = v31 == (unsigned __int8)v13;
                if ( v31 == (unsigned __int8)v13 )
                  v14 = v25 == v13 >> 8;
                if ( v14 && (unsigned __int16)v3 == *(_WORD *)(v11 + 6) )
                  break;
              }
              v15 = *(_DWORD *)v11;
              if ( *(_DWORD *)v11 )
                v12 = *(_DWORD *)(v15 + 12);
                v5 = v11;
                v11 = *(_DWORD *)v11;
                if ( *(_DWORD *)(v15 + 12) % v9 == (v31 | ((signed __int16)v3 << 8) | (v25 << 16)) % v9 )
                  continue;
            }
            v4 = v5 == 0;
            if ( v5 )
              v5 = *(_DWORD *)v5;
              v4 = v5 == 0;
            if ( v4 || !*(_DWORD *)(v5 + 8) )
LABEL_24:
              ChunkBlockPos::operator+((int)&v30, (int)&v31, (int)v21);
              v16 = (BedBlockEntity *)operator new(0x70u);
              BedBlockEntity::BedBlockEntity(v16, (const BlockPos *)&v30);
              *((_DWORD *)v16 + 26) = 14;
              BlockEntity::setChanged(v16);
              v27 = v16;
              v29 = BlockID::AIR;
              v28 = v24;
              LODWORD(v17) = 0;
              HIDWORD(v17) = &v27;
              LevelChunk::_placeCallbacks((int)v23, (int)&v31, &v29, &v28, v17);
              if ( v27 )
                (*(void (**)(void))(*(_DWORD *)v27 + 4))();
              LOWORD(v3) = v32;
              v27 = 0;
              v26 = *((_DWORD *)v23 + 35);
          else
          v2 = v26;
          v32 = v3 + 1;
          v3 = (signed __int16)(v3 + 1);
        }
        while ( v3 < (signed __int16)(16 * v26) );
      }
      ++HIBYTE(v31);
    }
    while ( HIBYTE(v31) < 0x10u );
    LOBYTE(v31) = v31 + 1;
  }
  while ( (unsigned __int8)v31 < 0x10u );
  if ( Dimension::getId(*((Dimension **)v23 + 1)) == 2 )
    _aeabi_memset((char *)v23 + 144, 256, *(_BYTE *)(Biome::sky + 268), v18);
  if ( (unsigned int)*((_BYTE *)v23 + 48) <= 4 )
    v19 = Dimension::getWorldGenerator(*((Dimension **)v23 + 1));
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 28))();
  if ( (unsigned __int8)(*((_BYTE *)v23 + 48) - 3) <= 3u )
    LevelChunk::_fixUselessDynamicWater(v23, v20);
}


int __fastcall LevelChunk::findHardcodedSpawnAt(LevelChunk *this, const BlockPos *a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r0@2
  int v5; // r12@2
  int v6; // lr@2
  int v7; // r2@2
  int v8; // r3@2
  int result; // r0@10

  v2 = *((_DWORD *)this + 739);
  v3 = *((_DWORD *)this + 740);
  if ( v2 == v3 )
  {
LABEL_10:
    result = 0;
  }
  else
    v4 = *(_DWORD *)a2;
    v5 = *((_DWORD *)a2 + 1);
    v6 = *((_DWORD *)a2 + 2);
    v7 = -v3;
    v8 = v2 + 12;
    while ( v4 < *(_DWORD *)(v8 - 12)
         || v4 > *(_DWORD *)v8
         || v6 < *(_DWORD *)(v8 - 4)
         || v6 > *(_DWORD *)(v8 + 8)
         || v5 < *(_DWORD *)(v8 - 8)
         || v5 > *(_DWORD *)(v8 + 4) )
    {
      v8 += 28;
      if ( v8 + v7 == 12 )
        goto LABEL_10;
    }
    result = *(_BYTE *)(v8 + 12);
  return result;
}


signed int __fastcall LevelChunk::checkSeasonsPostProcessDirty(LevelChunk *this)
{
  LevelChunk *v1; // r4@1
  int v2; // r1@1
  int i; // r4@2
  Biome *v4; // r0@5
  int v5; // r5@5

  v1 = this;
  if ( !Dimension::getId(*((Dimension **)this + 1)) )
  {
    for ( i = *((_DWORD *)v1 + 486); i; i = *(_DWORD *)i )
    {
      v4 = (Biome *)Biome::getBiome((Biome *)*(_BYTE *)(i + 4), v2);
      v5 = *(_BYTE *)(i + 5);
      if ( v5 != Biome::getSnowAccumulationLayers(v4) )
        return 1;
    }
  }
  return 0;
}


int __fastcall LevelChunk::getEntities(int result, int a2, const AABB *a3, int a4, int a5)
{
  int *v5; // r6@1
  const AABB *v6; // r7@1
  int *v7; // r8@1
  int v8; // r4@1
  int v9; // r9@1
  int v10; // r5@2
  __int64 v11; // r0@5
  int v12; // r3@5
  void *v13; // r10@7
  char *v14; // r7@7
  signed int v15; // r1@7
  unsigned int v16; // r2@7
  unsigned int v17; // r1@9
  unsigned int v18; // r11@9
  int v19; // r5@14
  int *v20; // r5@16
  int v21; // r5@18
  const AABB *v22; // [sp+0h] [bp-28h]@1

  v5 = *(int **)(result + 2884);
  v6 = a3;
  v7 = *(int **)(result + 2888);
  v8 = a4;
  v9 = a2;
  v22 = a3;
  if ( v5 != v7 )
  {
    v10 = a5;
    do
    {
      result = EntityClassTree::isInstanceOf(*v5, v9) ^ v10;
      if ( result == 1 )
      {
        result = AABB::intersects((AABB *)(*v5 + 264), v6);
        if ( result == 1 )
        {
          v11 = *(_QWORD *)(v8 + 4);
          v12 = *v5;
          if ( (_DWORD)v11 == HIDWORD(v11) )
          {
            v13 = *(void **)v8;
            v14 = 0;
            v15 = v11 - *(_DWORD *)v8;
            v16 = v15 >> 2;
            if ( !(v15 >> 2) )
              v16 = 1;
            v17 = v16 + (v15 >> 2);
            v18 = v17;
            if ( 0 != v17 >> 30 )
              v18 = 0x3FFFFFFF;
            if ( v17 < v16 )
            if ( v18 )
            {
              v19 = *v5;
              if ( v18 >= 0x40000000 )
                sub_21E57F4();
              v14 = (char *)operator new(4 * v18);
              LODWORD(v11) = *(_QWORD *)v8 >> 32;
              v13 = (void *)*(_QWORD *)v8;
              v12 = v19;
            }
            v20 = (int *)&v14[v11 - (_DWORD)v13];
            *v20 = v12;
            if ( ((signed int)v11 - (signed int)v13) >> 2 )
              _aeabi_memmove4(v14, v13);
            v21 = (int)(v20 + 1);
            if ( v13 )
              operator delete(v13);
            *(_DWORD *)v8 = v14;
            *(_DWORD *)(v8 + 4) = v21;
            result = (int)&v14[4 * v18];
            v6 = v22;
            v10 = a5;
            *(_DWORD *)(v8 + 8) = result;
          }
          else
            *(_DWORD *)v11 = v12;
            result = *(_DWORD *)(v8 + 4) + 4;
            *(_DWORD *)(v8 + 4) = result;
        }
      }
      ++v5;
    }
    while ( v7 != v5 );
  }
  return result;
}


int __fastcall LevelChunk::getAboveTopSolidBlock(LevelChunk *this, const ChunkBlockPos *a2, int a3, int a4, int a5)
{
  LevelChunk *v5; // r8@1
  unsigned int v6; // r7@1
  unsigned int v7; // r0@1
  int v8; // r4@1
  int v9; // r1@1
  __int16 v10; // r6@1
  signed int v11; // r5@3
  int v12; // r10@7
  int v13; // r1@7
  signed int i; // r7@8
  bool v15; // cf@10
  _BYTE *v16; // r0@10
  int v17; // r1@11
  int *v18; // r6@13
  signed int v19; // r6@21
  int v20; // r10@22
  int v21; // r11@22
  _BYTE *v22; // r0@23
  int v23; // r1@24
  int *v24; // r5@26
  int v25; // r0@27
  bool v26; // zf@31
  bool v27; // nf@31
  _BYTE *v28; // r0@35
  int v29; // r1@36
  int *v30; // r5@38
  _BYTE *v31; // r0@46
  int v32; // r1@47
  int *v33; // r6@49
  signed int v34; // r11@53
  _BYTE *v35; // r0@53
  int v36; // r1@54
  Material *v37; // r5@56
  int result; // r0@59
  _BYTE *v39; // r0@62
  int v40; // r1@63
  int *v41; // r6@65
  unsigned int v42; // [sp+4h] [bp-34h]@8
  int v43; // [sp+8h] [bp-30h]@8
  unsigned int v44; // [sp+Ch] [bp-2Ch]@7
  int v45; // [sp+10h] [bp-28h]@7

  v5 = this;
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)this + 35);
  v8 = *(_DWORD *)a2 >> 16;
  v9 = 16 * v7;
  v10 = v8;
  if ( (signed int)(16 * v7) < (signed int)v6 >> 16 )
    v10 = 16 * v7;
  LOWORD(v11) = v10;
  if ( v10 < 1 || (a3 ^ 1) != 1 )
  {
    v42 = v6;
    v43 = a4;
    i = v10;
  }
  else
    if ( (signed int)(16 * v7) > (signed __int16)v8 )
      v9 = v8;
    v12 = (int)v5 + 76;
    v13 = ((v9 << 16) + 0x10000) >> 16;
    v45 = (v6 >> 4) & 0xFF0;
    v44 = v6 << 8;
    if ( a4 == 1 )
    {
      v42 = v6;
      v43 = 1;
      for ( i = v13 - 1; ; --i )
      {
        v15 = i >> 4 >= v7;
        v16 = &BlockID::AIR;
        if ( !v15 )
        {
          v17 = *(_DWORD *)(v12 + 4 * (i >> 4));
          v16 = &BlockID::AIR;
          if ( v17 )
            v16 = (_BYTE *)(v17 + (i & 0xF | v45) + v44);
        }
        v18 = (int *)Block::getMaterial((Block *)Block::mBlocks[*v16]);
        if ( Material::isType(v18, 7) )
          if ( a5 != 1 )
            goto LABEL_21;
        else if ( !Material::isType(v18, 5) && !Material::getBlocksMotion((Material *)v18) )
          goto LABEL_21;
        v11 = (signed __int16)(v11 - 1);
        if ( v11 < 1 )
          break;
        v7 = *((_DWORD *)v5 + 35);
      }
      i = v11;
    }
    else if ( a5 )
      v43 = a4;
        v31 = &BlockID::AIR;
          v32 = *(_DWORD *)(v12 + 4 * (i >> 4));
          v31 = &BlockID::AIR;
          if ( v32 )
            v31 = (_BYTE *)(v32 + (i & 0xF | v45) + v44);
        v33 = (int *)Block::getMaterial((Block *)Block::mBlocks[*v31]);
        if ( !Material::isType(v33, 7) && Material::getBlocksMotion((Material *)v33) != 1 )
          i = v11;
    else
        v39 = &BlockID::AIR;
          v40 = *(_DWORD *)(v12 + 4 * (i >> 4));
          v39 = &BlockID::AIR;
          if ( v40 )
            v39 = (_BYTE *)(v40 + (i & 0xF | v45) + v44);
        v41 = (int *)Block::getMaterial((Block *)Block::mBlocks[*v39]);
        if ( Material::isType(v41, 7) || Material::getBlocksMotion((Material *)v41) != 1 )
LABEL_21:
  v19 = (signed __int16)i;
  if ( (signed __int16)i < 0 )
LABEL_59:
    LOWORD(result) = 0;
    v20 = (int)v5 + 76;
    v21 = (v42 >> 4) & 0xFF0;
    if ( v43 == 1 )
      while ( 1 )
        v22 = &BlockID::AIR;
        if ( (unsigned int)(v19 >> 4) < *((_DWORD *)v5 + 35) )
          v23 = *(_DWORD *)(v20 + 4 * (v19 >> 4));
          v22 = &BlockID::AIR;
          if ( v23 )
            v22 = (_BYTE *)(v23 + (v19 & 0xF | v21) + (v42 << 8));
        v24 = (int *)Block::getMaterial((Block *)Block::mBlocks[*v22]);
        if ( Material::isType(v24, 7) )
          v25 = a5;
        else
          if ( Material::isType(v24, 5) )
            break;
          v25 = Material::getBlocksMotion((Material *)v24);
        if ( v25 )
        v26 = v19 == 0;
        v27 = v19-- < 0;
        if ( v27 || v26 )
          goto LABEL_59;
    else if ( a5 == 1 )
        v28 = &BlockID::AIR;
          v29 = *(_DWORD *)(v20 + 4 * (v19 >> 4));
          v28 = &BlockID::AIR;
          if ( v29 )
            v28 = (_BYTE *)(v29 + (v19 & 0xF | v21) + (v42 << 8));
        v30 = (int *)Block::getMaterial((Block *)Block::mBlocks[*v28]);
        if ( Material::isType(v30, 7) || Material::getBlocksMotion((Material *)v30) )
        v34 = i;
        v35 = &BlockID::AIR;
        if ( (unsigned int)(i >> 4) < *((_DWORD *)v5 + 35) )
          v36 = *(_DWORD *)(v20 + 4 * (i >> 4));
          v35 = &BlockID::AIR;
          if ( v36 )
            v35 = (_BYTE *)(v36 + (i & 0xF | (v42 >> 4) & 0xFF0) + (v42 << 8));
        v37 = (Material *)Block::getMaterial((Block *)Block::mBlocks[*v35]);
        if ( !Material::isType((int *)v37, 7) )
          if ( Material::getBlocksMotion(v37) )
        --i;
        if ( v34 <= 0 )
      LOWORD(v19) = i;
    LOWORD(result) = v19 + 1;
  return (signed __int16)result;
}


void __fastcall LevelChunk::tickBlockEntities(LevelChunk *this, BlockSource *a2)
{
  LevelChunk::tickBlockEntities(this, a2);
}


int __fastcall LevelChunk::createSubchunk(int result, unsigned int a2, int a3)
{
  if ( a2 > 0xF )
    JUMPOUT(a2 <= 0xF, LevelChunk::getConvertedInterpolantBool);
  else
    result = j_j_j__ZN10LevelChunk15_createSubChunkEjb((LevelChunk *)result, a2, a3);
  return result;
}


BlockSource *__fastcall LevelChunk::_generateOriginalLighting(LevelChunk *this, ChunkViewSource *a2, bool a3)
{
  ChunkViewSource *v3; // r6@1
  LevelChunk *v4; // r5@1
  bool v5; // r8@1
  BlockSourceListener *v6; // r7@1
  int v7; // r0@1
  unsigned int v8; // r4@2
  int v9; // r1@3
  __int64 v10; // kr00_8@3
  unsigned int v11; // r6@10
  char v13; // [sp+8h] [bp-88h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (BlockSourceListener *)ChunkSource::getLevel(a2);
  v7 = ChunkSource::getDimension(v3);
  BlockSource::BlockSource((int)&v13, v6, v7, (int)v3, 0, 1);
  if ( *(_BYTE *)(*((_DWORD *)v4 + 1) + 108) == (unsigned __int8)Brightness::MIN )
  {
    v8 = *((_DWORD *)v4 + 35);
  }
  else
    v10 = *((_QWORD *)ChunkViewSource::getArea(v3) + 12);
    v9 = v10;
    if ( (_DWORD)v10 == HIDWORD(v10) )
      return BlockSource::~BlockSource((BlockSource *)&v13);
    v8 = 0;
    do
    {
      if ( *(_DWORD *)v9 && v8 < *(_DWORD *)(*(_DWORD *)v9 + 140) )
        v8 = *(_DWORD *)(*(_DWORD *)v9 + 140);
      v9 += 8;
    }
    while ( HIDWORD(v10) != v9 );
  if ( v8 )
    v11 = 0;
      LevelChunk::_generateOriginalLightingSubChunk(v4, (BlockSource *)&v13, v11++, v5);
    while ( v11 < v8 );
  return BlockSource::~BlockSource((BlockSource *)&v13);
}


char *__fastcall LevelChunk::getPosition(LevelChunk *this)
{
  return (char *)this + 32;
}


int __fastcall LevelChunk::deserialize(LevelChunk *this, _QWORD *a2)
{
  LevelChunk *v2; // r5@1
  _QWORD *v3; // r8@1
  __int64 v4; // r0@1
  _DWORD *v5; // r10@2
  DirtyTicksCounter *v6; // r9@2
  int v7; // r11@2
  void **v8; // r7@2
  int v9; // r0@4
  int v10; // r4@4
  int v11; // r6@4
  int v12; // r0@6
  int v13; // r2@6
  _QWORD *v14; // r9@8
  void **v15; // r8@8
  int v16; // r7@8
  int v17; // r6@10
  _QWORD *v18; // r9@11
  void **v19; // r8@11
  int v20; // r7@11
  int v21; // r0@13
  int v22; // r0@16
  _QWORD *v23; // r9@17
  void **v24; // r8@17
  int v25; // r7@17
  int v26; // r0@21
  LevelChunk *v27; // r6@22
  int v28; // r4@22
  _QWORD *v29; // r7@23
  int v30; // r0@26
  char *v31; // r4@26
  unsigned int v32; // r1@28
  int v33; // r0@30
  _QWORD *v34; // r9@30
  void **v35; // r8@30
  LevelChunk *v36; // r6@31
  int v37; // r4@31
  _QWORD *v38; // r7@32
  int v39; // r2@35
  DirtyTicksCounter *v40; // r6@36
  CompoundTag *v41; // r9@36
  int v42; // r0@41
  _QWORD *v43; // r9@42
  void **v44; // r8@42
  int v45; // r7@42
  int v46; // r0@47
  int v47; // r7@54
  int v48; // r6@56
  int v49; // r7@58
  int v50; // r4@60
  int v51; // r0@60
  int i; // r0@61
  unsigned int v53; // r7@65
  int v54; // r0@67
  char v55; // r1@68
  int v56; // r2@68
  int v58; // [sp+18h] [bp-468h]@2
  char *v59; // [sp+1Ch] [bp-464h]@2
  int v60; // [sp+20h] [bp-460h]@2
  void **v61; // [sp+24h] [bp-45Ch]@4
  int v62; // [sp+28h] [bp-458h]@4
  int v63; // [sp+2Ch] [bp-454h]@6
  _DWORD *v64; // [sp+30h] [bp-450h]@6
  int v65; // [sp+34h] [bp-44Ch]@6
  char v66; // [sp+38h] [bp-448h]@26
  __int64 v67; // [sp+438h] [bp-48h]@2
  CompoundTag *v68; // [sp+444h] [bp-3Ch]@36
  __int64 v69; // [sp+448h] [bp-38h]@32
  int v70; // [sp+454h] [bp-2Ch]@16
  char v71; // [sp+45Bh] [bp-25h]@50

  v2 = this;
  v3 = a2;
  *((_DWORD *)this + 556) = 2;
  v4 = *a2;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = (_QWORD *)((char *)v3 + 12);
    v6 = (DirtyTicksCounter *)&v67;
    v59 = (char *)v2 + 52;
    v7 = 0;
    v60 = -1431655765 * ((HIDWORD(v4) - (signed int)v4) >> 2);
    v58 = (int)v2 + 1424;
    v8 = &off_26E91B8;
    while ( 1 )
    {
      v9 = v4 + 12 * v7;
      v10 = *(_QWORD *)(v9 + 4) >> 32;
      v11 = *(_QWORD *)(v9 + 4);
      v61 = v8;
      v62 = v11;
      if ( !v10 )
        v10 = *(_DWORD *)(*v5 - 12);
      v63 = v10;
      v64 = v5;
      v65 = v9;
      v12 = *(_DWORD *)v9;
      v13 = *(_BYTE *)v12;
      switch ( v13 )
      {
        case 45:
          if ( v11 != *(_DWORD *)(*v5 - 12) )
          {
            v14 = v3;
            v15 = v8;
            v16 = v10 - v11;
            if ( (unsigned int)(v10 - v11) > 0x200 )
              v16 = 512;
            _aeabi_memcpy(v58, (const char *)(*v5 + v11), v16);
            v17 = v11 + v16;
            v62 = v17;
            v8 = v15;
            v3 = v14;
            v6 = (DirtyTicksCounter *)&v67;
            if ( v17 != *(_DWORD *)(*v5 - 12) )
            {
              v18 = v3;
              v19 = v8;
              v20 = v10 - v17;
              if ( (unsigned int)(v10 - v17) > 0x100 )
                v20 = 256;
              _aeabi_memcpy((char *)v2 + 144, (const char *)(*v5 + v17), v20);
              v21 = v20 + v17;
              v8 = v19;
              v3 = v18;
              v6 = (DirtyTicksCounter *)&v67;
              v62 = v21;
            }
          }
          LevelChunk::checkBiomeStates(v2);
          break;
        case 46:
          if ( v11 == *(_DWORD *)(*v5 - 12) )
            v30 = 0;
            v31 = &v66;
          else
            v47 = v10 - v11;
              v47 = 512;
            _aeabi_memcpy(v58, (const char *)(*v5 + v11), v47);
            v48 = v11 + v47;
            v62 = v48;
            if ( v48 == *(_DWORD *)(*v5 - 12) )
              v30 = 0;
              v8 = &off_26E91B8;
              v31 = &v66;
            else
              v53 = v10 - v48;
              if ( v53 > 0x400 )
                v53 = 1024;
              _aeabi_memcpy(&v66, (const char *)(*v5 + v48), v53);
              v54 = v53 + v48;
              v62 = v54;
          do
            v55 = v31[4 * v30];
            v56 = (int)v2 + v30++;
            *(_BYTE *)(v56 + 144) = v55;
          while ( v30 != 256 );
        case 47:
          if ( *(_DWORD *)(v12 - 12) == 2 )
            v32 = *(_BYTE *)(v12 + 1);
            if ( v32 < (((*((_DWORD *)v2 + 6) + 1 + ((unsigned int)((*((_DWORD *)v2 + 6) + 1) >> 31) >> 28)) >> 4) & 0xFF) )
              LevelChunk::deserializeSubChunk(v2, v32, (IDataInput *)&v61);
        case 48:
          LevelChunk::legacyDeserializeTerrain(v2, (IDataInput *)&v61);
          v33 = *((_DWORD *)v2 + 592);
          v34 = v3;
          v35 = v8;
          if ( 4 * v33 )
            v36 = (LevelChunk *)((char *)v2 + 2280);
            v37 = 4 * v33;
            do
              v38 = *(_QWORD **)v36;
              DirtyTicksCounter::max((DirtyTicksCounter *)&v69);
              v37 -= 4;
              v36 = (LevelChunk *)((char *)v36 + 4);
              *v38 = v69;
            while ( v37 );
          goto LABEL_52;
        case 49:
          LevelChunk::deserializeBlockEntities(v2, (IDataInput *)&v61);
        case 50:
          sub_21E849C(v59, v10 - v11, 0);
          v39 = *(_DWORD *)(*(_DWORD *)v59 - 12);
          ((void (__fastcall *)(void ***))v61[10])(&v61);
        case 51:
          NbtIo::read((NbtIo *)&v68, (IDataInput *)&v61);
          v40 = v6;
          v41 = v68;
          if ( v68 )
            BlockTickingQueue::load(*((BlockTickingQueue **)v2 + 18), v68);
            (*(void (__fastcall **)(CompoundTag *))(*(_DWORD *)v41 + 4))(v41);
          v6 = v40;
        case 52:
          LevelChunk::deserializeBlockExtraData(v2, (IDataInput *)&v61);
        case 53:
          LevelChunk::deserializeBiomeStates(v2, (IDataInput *)&v61);
        case 54:
          v42 = 0;
          v70 = 0;
            v43 = v3;
            v44 = v8;
            v45 = v10 - v11;
            if ( (unsigned int)(v10 - v11) > 4 )
              v45 = 4;
            _aeabi_memcpy(&v70, (const char *)(*v5 + v11), v45);
            v62 = v45 + v11;
            v42 = v70;
            v8 = v44;
            v3 = v43;
          *((_DWORD *)v2 + 556) = v42;
        case 55:
            v46 = v10 - v11;
            if ( (unsigned int)(v10 - v11) > 1 )
              v46 = 1;
            v62 = v46 + v11;
          v71 = 0;
          StringByteInput::readBytes((StringByteInput *)&v61, &v71, 1u);
          ((void (__fastcall *)(void ***))v61[6])(&v61);
          *((_BYTE *)v2 + 2972) = 1;
          *((_BYTE *)v2 + 2971) = ((int (__fastcall *)(void ***))v61[6])(&v61);
          *((_BYTE *)v2 + 2970) = ((int (__fastcall *)(void ***))v61[6])(&v61);
          *((_BYTE *)v2 + 2968) = ((int (__fastcall *)(_DWORD))v61[6])(&v61);
          *((_BYTE *)v2 + 2969) = ((int (__fastcall *)(_DWORD))v61[6])(&v61);
        case 56:
          LOBYTE(v70) = 0;
LABEL_52:
            v8 = v35;
            v3 = v34;
            v49 = v10 - v11;
              v49 = 1;
            _aeabi_memcpy(&v70, (const char *)(*v5 + v11), v49);
            v50 = (unsigned __int8)v70;
            v51 = v49 + v11;
            v62 = v51;
            if ( (_BYTE)v70 )
              for ( i = (int)v8; ; i = (int)v61 )
              {
                --v50;
                *((_BYTE *)v2 + (*(int (__fastcall **)(void ***))(i + 24))(&v61) + 1965) = 1;
                if ( !(_BYTE)v50 )
                  break;
              }
        case 57:
          LevelChunk::deserializeHardcodedSpawners(v2, (IDataInput *)&v61);
        default:
          if ( v13 == 118 )
            v22 = 0;
            LOBYTE(v70) = 0;
            if ( v11 != *(_DWORD *)(*v5 - 12) )
              v23 = v3;
              v24 = v8;
              v25 = v10 - v11;
              if ( (unsigned int)(v10 - v11) > 1 )
                v25 = 1;
              _aeabi_memcpy(&v70, (const char *)(*v5 + v11), v25);
              v62 = v25 + v11;
              v22 = (unsigned __int8)v70;
              v8 = v24;
              v3 = v23;
            *((_BYTE *)v2 + 48) = v22;
            if ( v22 != SharedConstants::CurrentLevelChunkFormat )
              v26 = *((_DWORD *)v2 + 592);
              if ( 4 * v26 )
                v27 = (LevelChunk *)((char *)v2 + 2280);
                v28 = 4 * v26;
                do
                {
                  v29 = *(_QWORD **)v27;
                  DirtyTicksCounter::max(v6);
                  v28 -= 4;
                  v27 = (LevelChunk *)((char *)v27 + 4);
                  *v29 = v67;
                }
                while ( v28 );
      }
      if ( v60 == ++v7 )
        break;
      LODWORD(v4) = *(_DWORD *)v3;
    }
  }
  return 1;
}


int __fastcall LevelChunk::serializeBlockExtraData(LevelChunk *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  LevelChunk *v3; // r5@1
  int result; // r0@1
  int i; // r5@1

  v2 = a2;
  v3 = this;
  result = (*(int (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)a2 + 32))(a2, *((_DWORD *)this + 734));
  for ( i = *((_DWORD *)v3 + 733); i; i = *(_DWORD *)i )
  {
    (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 32))(v2, *(_DWORD *)(i + 4));
    result = (*(int (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 28))(v2, *(_WORD *)(i + 8));
  }
  return result;
}


signed int __fastcall LevelChunk::_recalcHeight(LevelChunk *this, const ChunkBlockPos *a2, BlockSource *a3)
{
  int v3; // lr@1
  int v4; // r7@1
  int v5; // r2@2
  unsigned int v6; // r3@4
  char *v7; // r4@4
  unsigned int v8; // r12@4
  int v9; // r5@4
  int v10; // r9@4
  int v11; // r10@4
  int v12; // r2@4
  int v13; // r6@8
  int v14; // r1@13
  int v15; // r4@13
  _BYTE *v17; // r4@14
  int v18; // r2@15
  int v20; // r1@23
  int v21; // r2@23
  int v22; // r3@23
  int v23; // r1@23
  __int16 v24; // r2@23
  __int16 v25; // r2@25
  __int16 v31; // r1@35
  int v32; // r4@36
  const ChunkBlockPos *v34; // [sp+0h] [bp-58h]@9
  char *v35; // [sp+4h] [bp-54h]@9
  LevelChunk *v36; // [sp+8h] [bp-50h]@9
  unsigned int v37; // [sp+Ch] [bp-4Ch]@13
  BlockSource *v38; // [sp+10h] [bp-48h]@2
  char v39; // [sp+14h] [bp-44h]@36
  char v40; // [sp+18h] [bp-40h]@33
  int v41; // [sp+1Ch] [bp-3Ch]@25
  int v42; // [sp+20h] [bp-38h]@27
  int v43; // [sp+24h] [bp-34h]@27
  int v44; // [sp+28h] [bp-30h]@23
  int v45; // [sp+2Ch] [bp-2Ch]@25
  int v46; // [sp+30h] [bp-28h]@25

  v3 = *((_DWORD *)this + 6);
  v4 = *((_WORD *)a2 + 1);
  if ( v4 <= v3 )
  {
    v38 = a3;
    v5 = *(_BYTE *)a2 + 16 * *((_BYTE *)a2 + 1);
  }
  else
    v5 = (((unsigned int)*(_WORD *)a2 >> 4) & 0xFF0) + *(_WORD *)a2;
  v6 = *((_DWORD *)this + 35);
  v7 = (char *)this + 2 * (unsigned __int8)v5;
  v8 = *(_DWORD *)a2;
  v9 = 16 * v6;
  v10 = 16 * v6;
  v11 = *((_WORD *)v7 + 712);
  v12 = *((_WORD *)v7 + 712);
  if ( v4 > v11 )
    v12 = *((_WORD *)a2 + 1);
  if ( v10 < v12 )
    LOWORD(v12) = 16 * v6;
  LOWORD(v13) = v12;
  if ( (signed __int16)v12 < 1 )
    v36 = this;
    v37 = *(_DWORD *)a2;
    _R9 = (signed __int16)v12;
    v34 = a2;
    v35 = v7;
    if ( v4 <= v11 )
      v4 = *((_WORD *)v7 + 712);
    if ( v10 > v4 )
      v9 = v4;
    v14 = (v9 << 16) - 0x10000;
    v15 = (unsigned __int16)v9;
    v37 = v8;
    do
    {
      _R9 = v15;
      v17 = &BlockID::AIR;
      if ( v14 >> 20 < v6 )
      {
        v18 = *((_DWORD *)this + (v14 >> 20) + 19);
        v17 = &BlockID::AIR;
        if ( v18 )
          v17 = (_BYTE *)(v18 + (((unsigned int)v14 >> 16) & 0xF | (v8 >> 4) & 0xFF0) + (v8 << 8));
      }
      if ( Block::mLightBlock[*v17] )
        break;
      v14 -= 0x10000;
      v15 = _R9 - 1;
      v13 = (signed __int16)(v13 - 1);
      _R9 = v13;
    }
    while ( v13 > 0 );
  if ( _R9 != v11 )
    _R4 = v37;
    if ( v38 )
      v20 = *((_DWORD *)v36 + 4);
      v21 = *((_BYTE *)v34 + 1);
      v22 = *((_DWORD *)v36 + 2) + v37;
      v44 = *((_DWORD *)v36 + 2) + v37;
      v23 = v20 + v21;
      v24 = _R9;
      if ( v11 < _R9 )
        v24 = v11;
      v45 = v24;
      v46 = v23;
      v25 = _R9;
      v41 = v22;
      if ( _R9 < v11 )
        v25 = v11;
      v42 = v25;
      v43 = v23;
      BlockSource::fireAreaChanged(v38, (const BlockPos *)&v44, (const BlockPos *)&v41);
      v3 = *((_DWORD *)v36 + 6);
    if ( v3 >= _R9 )
      LOWORD(v3) = _R9;
    *((_WORD *)v35 + 712) = v3;
    if ( *((_BYTE *)v36 + 2952) > (unsigned int)(unsigned __int8)Brightness::MIN )
      if ( _R9 >= v11 )
        v31 = *(_WORD *)v34;
        LOWORD(v44) = *(_WORD *)v34;
        HIWORD(v44) = v11;
        if ( v11 < _R9 )
        {
          v39 = Brightness::MIN;
          LevelChunk::_setLight((int)v36, (int)&v44, &v39);
          LOWORD(v32) = v11 + 1;
          HIWORD(v44) = v11 + 1;
          if ( v11 + 1 < _R9 )
          {
            do
            {
              v39 = Brightness::MIN;
              LevelChunk::_setLight((int)v36, (int)&v44, &v39);
              HIWORD(v44) = v32 + 1;
              v32 = (signed __int16)(v32 + 1);
            }
            while ( v32 < _R9 );
          }
          return 1;
        }
      else
        __asm { PKHBT.W         R0, R4, R9,LSL#16 }
        v44 = _R0;
        if ( _R9 < v11 )
          do
            v40 = Brightness::MAX;
            LevelChunk::_setLight((int)v36, (int)&v44, &v40);
            HIWORD(v44) = ++_R9;
          while ( _R9 < v11 );
  return 0;
}


signed int __fastcall LevelChunk::isSubChunkKey(int a1, int *a2)
{
  int v2; // r1@1
  int v3; // r2@1
  signed int result; // r0@1

  v2 = *a2;
  v3 = a1;
  result = 0;
  if ( *(_DWORD *)(v2 - 12) == 2
    && *(_BYTE *)(v2 + 1) < (((*(_DWORD *)(v3 + 24) + 1 + ((unsigned int)((*(_DWORD *)(v3 + 24) + 1) >> 31) >> 28)) >> 4) & 0xFF) )
  {
    result = 1;
  }
  return result;
}


int __fastcall LevelChunk::_placeBlockEntity(int a1, BlockEntity **a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  char *v4; // r0@1
  char v6; // [sp+4h] [bp-1Ch]@1
  char v7; // [sp+Ch] [bp-14h]@1

  v2 = (int *)a2;
  v3 = a1;
  v4 = BlockEntity::getPosition(*a2);
  ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v7, (const BlockPos *)v4);
  std::_Hashtable<ChunkBlockPos,std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>,std::allocator<std::pair<ChunkBlockPos const,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>>,std::__detail::_Select1st,std::equal_to<ChunkBlockPos>,std::hash<ChunkBlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkBlockPos,std::unique_ptr<BlockEntity,std::default_delete<BlockEntity>>>(
    (int *)&v6,
    (unsigned __int64 *)(v3 + 2896),
    (unsigned int *)&v7,
    v2);
  return DirtyTicksCounter::touch(*(DirtyTicksCounter **)(v3 + 2284));
}


char *__fastcall LevelChunk::deserialize2DMaps(LevelChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r4@1
  LevelChunk *v3; // r5@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)a2 + 40))(a2, (char *)this + 1424, 512);
  (*(void (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)v2 + 40))(v2, (char *)v3 + 144, 256);
  return j_j_j__ZN10LevelChunk16checkBiomeStatesEv(v3);
}


char *__fastcall LevelChunk::getTopRainBlockPos(LevelChunk *this, const ChunkBlockPos *a2, _WORD *a3)
{
  const ChunkBlockPos *v3; // r5@1
  unsigned int v4; // r1@1
  unsigned int v5; // r4@1
  int v6; // r12@1
  int v7; // r3@1
  int v8; // r6@1
  int v9; // r6@2
  int v10; // r9@3
  int v11; // r8@4
  unsigned int v12; // r4@4
  _BYTE *v13; // r0@5
  int v14; // r1@6
  Material *v15; // r7@8
  _BYTE *v16; // r0@11
  int v17; // r1@12
  Material *v18; // r7@14
  int v19; // r3@21
  int v21; // [sp+0h] [bp-40h]@2
  _WORD *v22; // [sp+4h] [bp-3Ch]@2
  _WORD *v23; // [sp+8h] [bp-38h]@2
  LevelChunk *v24; // [sp+Ch] [bp-34h]@2
  int v25; // [sp+10h] [bp-30h]@3
  int v26; // [sp+14h] [bp-2Ch]@3
  int v27; // [sp+18h] [bp-28h]@4

  v3 = a2;
  v4 = *a3;
  v5 = v4 >> 8;
  v6 = *a3;
  v7 = (int)v3 + 2 * (v6 | 16 * (v4 >> 8));
  v8 = *(_WORD *)(v7 + 2372);
  if ( v8 == 64537 )
  {
    v23 = a3;
    v24 = this;
    v22 = (_WORD *)(v7 + 2372);
    v21 = *((_DWORD *)v3 + 35);
    LOWORD(v9) = 16 * v21;
    if ( (signed __int16)(16 * v21) >= 1 )
    {
      v10 = (int)v3 + 76;
      v26 = 16 * v5;
      v25 = *a3 << 8;
      do
      {
        v11 = (v9 & 0xF | v26) + v25;
        v12 = (signed __int16)v9 >> 4;
        v27 = (signed __int16)v9 + 1;
        if ( (signed __int16)v9 == -2 )
        {
          do
          {
            v16 = &BlockID::AIR;
            if ( v12 < *((_DWORD *)v3 + 35) )
            {
              v17 = *(_DWORD *)(v10 + 4 * v12);
              v16 = &BlockID::AIR;
              if ( v17 )
                v16 = (_BYTE *)(v17 + v11);
            }
            v18 = (Material *)Block::getMaterial((Block *)Block::mBlocks[*v16]);
          }
          while ( Material::getBlocksMotion(v18) || Material::isLiquid(v18) );
        }
        else
          v13 = &BlockID::AIR;
          if ( v12 < *((_DWORD *)v3 + 35) )
            v14 = *(_DWORD *)(v10 + 4 * v12);
            if ( v14 )
              v13 = (_BYTE *)(v14 + v11);
          v15 = (Material *)Block::getMaterial((Block *)Block::mBlocks[*v13]);
          if ( Material::getBlocksMotion(v15) || Material::isLiquid(v15) )
            goto LABEL_18;
        v9 = (((unsigned __int16)v9 << 16) - 0x10000) >> 16;
      }
      while ( v9 > 0 );
    }
    v27 = -1;
LABEL_18:
    LOWORD(v8) = v27;
    if ( (signed __int16)(16 * v21) < v27 )
      LOWORD(v8) = 16 * v21;
    *v22 = v8;
    v4 = *v23;
    this = v24;
    v5 = v4 >> 8;
  }
  v19 = *((_DWORD *)v3 + 4) + v5;
  *(_DWORD *)this = *((_DWORD *)v3 + 2) + v4;
  *((_DWORD *)this + 1) = (signed __int16)v8;
  *((_DWORD *)this + 2) = v19;
  return (char *)this + 12;
}


_BOOL4 __fastcall LevelChunk::hasEntitiesPendingToLoad(LevelChunk *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 13) - 12) != 0;
}


  if ( LevelChunk::tryChangeState(*(_DWORD *)(*(_DWORD *)a1 + 4), 2, 3u) == 1 )
{
    v3 = LevelChunk::getGenerator(*(LevelChunk **)(v1 + 4));
    v4 = *(_DWORD *)(v1 + 8);
    v5 = (*(int (**)(void))(*(_DWORD *)v3 + 28))();
    v6 = *(_DWORD *)(v1 + 4);
    if ( v5 )
    {
      LevelChunk::changeState(v6, 3, 4u);
      result = 1;
      **(_BYTE **)(v1 + 16) = 1;
    }
    else
      LevelChunk::changeState(v6, 3, 2u);
      result = 0;
  }
  else
  {
    result = 1;
  return result;
}


int __fastcall LevelChunk::setFinalized(int result, int a2)
{
  *(_DWORD *)(result + 2224) = a2;
  return result;
}


signed int __fastcall LevelChunk::applySeasonsPostProcess(LevelChunk *this, BlockSource *a2)
{
  LevelChunk *v2; // r4@1
  BlockSource *v3; // r5@1
  Seasons *v4; // r0@1
  int v5; // r1@1
  int i; // r5@1
  Biome *v7; // r0@2
  char v8; // r0@4

  v2 = this;
  v3 = a2;
  v4 = (Seasons *)Dimension::getSeasons(*((Dimension **)this + 1));
  Seasons::postProcess(v4, v2, v3, (LevelChunk *)((char *)v2 + 32));
  for ( i = *((_DWORD *)v2 + 486); i; i = *(_DWORD *)i )
  {
    v7 = (Biome *)Biome::getBiome((Biome *)*(_BYTE *)(i + 4), v5);
    *(_BYTE *)(i + 5) = Biome::getSnowAccumulationLayers(v7);
  }
  v8 = *((_BYTE *)v2 + 56);
  __dmb();
  if ( v8 == 8 )
    DirtyTicksCounter::touch(*((DirtyTicksCounter **)v2 + 570));
  return 1;
}


unsigned __int8 *__fastcall LevelChunk::getRawBrightness(unsigned __int8 *result, int a2, int a3, _BYTE *a4)
{
  signed int v4; // r12@1
  unsigned int v5; // r5@3
  unsigned int v6; // r2@3
  unsigned __int8 v7; // r1@3
  unsigned int v8; // r3@3
  unsigned __int8 v9; // r2@4

  v4 = *(_WORD *)(a3 + 2);
  if ( (unsigned int)(v4 >> 4) < *(_DWORD *)(a2 + 140) )
  {
    v5 = *(_BYTE *)(*(_DWORD *)(a2 + 4 * (v4 >> 4) + 76)
                  + (v4 & 0xF | ((unsigned int)*(_WORD *)a3 >> 4) & 0xFF0)
                  + (*(_WORD *)a3 << 8)
                  + 6144);
    v6 = *a4;
    v7 = v5 & 0xF;
    v8 = v5 >> 4;
    if ( v5 >> 4 <= v6 )
      v9 = Brightness::MIN;
    else
      v9 = v8 - v6;
    if ( v7 < (unsigned int)v9 )
      v7 = v9;
    *result = v7;
  }
  else
    *result = *(_BYTE *)(a2 + 2952);
  return result;
}


unsigned int __fastcall LevelChunk::_createSubChunk(LevelChunk *this, unsigned int a2, int a3)
{
  LevelChunk *v3; // r5@1
  unsigned int v4; // r8@1
  unsigned int result; // r0@1
  int v6; // r11@2
  unsigned __int8 *v7; // r7@2
  unsigned int v8; // r1@3
  int v9; // r9@6
  unsigned int v10; // r4@7
  unsigned int v11; // r10@7
  void *v12; // r0@7
  void *v13; // r6@7
  int v14; // r1@7
  int v15; // r0@9
  void *v16; // r6@11
  int v17; // r0@11

  v3 = this;
  v4 = a2;
  result = *((_DWORD *)this + 35);
  if ( result <= a2 )
  {
    v6 = (int)v3 + 76;
    v7 = (unsigned __int8 *)v3 + 61;
    do
    {
      do
        v8 = __ldrex(v7);
      while ( __strex(1u, v7) );
      __dmb();
    }
    while ( v8 );
    if ( *((_DWORD *)v3 + 35) <= v4 )
      v9 = (int)v3 + 2280;
      if ( a3 == 1 )
      {
        do
        {
          v10 = *((_BYTE *)v3 + 2952);
          v11 = (unsigned __int8)Brightness::MIN;
          v12 = SubChunk::operator new((SubChunk *)0x2808, v8);
          v13 = v12;
          v14 = 0;
          if ( v10 > v11 )
            v14 = 1;
          SubChunk::SubChunk((int)v12, v14, 0);
          *(_DWORD *)(v6 + 4 * *((_DWORD *)v3 + 35)) = v13;
          v15 = *((_DWORD *)v3 + 35);
          *((_DWORD *)v3 + 35) = v15 + 1;
          v8 = *((_DWORD *)v3 + 592);
          *(_DWORD *)(v9 + 4 * v8) = *(_DWORD *)(v6 + 4 * v15) + 10240;
          ++*((_DWORD *)v3 + 592);
        }
        while ( *((_DWORD *)v3 + 35) <= v4 );
      }
      else
          v16 = SubChunk::operator new((SubChunk *)0x2808, v8);
          SubChunk::SubChunk((int)v16, 0, 0);
          *(_DWORD *)(v6 + 4 * *((_DWORD *)v3 + 35)) = v16;
          v17 = *((_DWORD *)v3 + 35);
          *((_DWORD *)v3 + 35) = v17 + 1;
          *(_DWORD *)(v9 + 4 * v8) = *(_DWORD *)(v6 + 4 * v17) + 10240;
    result = 0;
    __dmb();
    *v7 = 0;
  }
  return result;
}


_DWORD *__fastcall LevelChunk::setBiome(LevelChunk *this, const Biome *_R1, const ChunkBlockPos *a3)
{
  unsigned int v3; // r11@1
  unsigned __int64 *v7; // r8@2
  unsigned int v9; // r10@4
  int v10; // r4@4
  int v11; // r9@4
  _DWORD *v12; // r6@4
  _DWORD *v13; // r7@5
  _DWORD *result; // r0@5
  unsigned __int8 v15; // r5@5
  _DWORD *v16; // r4@7
  _DWORD *v18; // r4@18
  unsigned __int8 v19; // r5@18
  _DWORD *v20; // r7@20
  bool v21; // zf@23
  _BYTE *v22; // r0@27
  char v23; // [sp+3h] [bp-25h]@12

  v3 = *((_BYTE *)_R1 + 268);
  *((_BYTE *)this + 16 * *((_BYTE *)a3 + 1) + *(_BYTE *)a3 + 144) = v3;
  __asm
  {
    VLDR            S0, [R1,#0xD8]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v7 = (unsigned __int64 *)((char *)this + 1936);
    goto LABEL_11;
  v7 = (unsigned __int64 *)((char *)this + 1936);
    VLDR            S0, =-0.32
    VLDR            S2, [R1,#0xC4]
    VADD.F32        S0, S2, S0
  _R1 = &Biome::RAIN_TEMP_THRESHOLD;
    VLDR            S2, [R1]
    VCMPE.F32       S0, S2
  if ( !(_NF ^ _VF) )
LABEL_11:
    result = (_DWORD *)*((_DWORD *)this + 487);
    if ( result )
    {
      v23 = v3;
      result = (_DWORD *)std::unordered_map<unsigned char,BiomeChunkState,std::hash<unsigned char>,std::equal_to<unsigned char>,std::allocator<std::pair<unsigned char const,BiomeChunkState>>>::erase(
                           v7,
                           &v23);
    }
    return result;
  v9 = *((_DWORD *)this + 485);
  v10 = *((_DWORD *)this + 484);
  v11 = v3 % v9;
  v12 = *(_DWORD **)(v10 + 4 * (v3 % v9));
  if ( !v12 )
    goto LABEL_27;
  v13 = (_DWORD *)*v12;
  result = *(_DWORD **)(v10 + 4 * (v3 % v9));
  v15 = *(_BYTE *)(*v12 + 4);
  while ( v3 != v15 )
    v16 = (_DWORD *)*v13;
    if ( *v13 )
      v15 = *((_BYTE *)v16 + 4);
      result = v13;
      v13 = (_DWORD *)*v13;
      if ( *((_BYTE *)v16 + 4) % v9 == v11 )
        continue;
    goto LABEL_17;
  _ZF = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    _ZF = result == 0;
  if ( !_ZF )
LABEL_17:
  v18 = (_DWORD *)*v12;
  v19 = *(_BYTE *)(*v12 + 4);
  while ( 1 )
    result = (_DWORD *)v19;
    if ( v3 == v19 )
      break;
    v20 = (_DWORD *)*v18;
    if ( *v18 )
      v19 = *((_BYTE *)v20 + 4);
      v12 = v18;
      v18 = (_DWORD *)*v18;
      if ( *((_BYTE *)v20 + 4) % v9 == v11 )
  v21 = v12 == 0;
  if ( v12 )
    result = (_DWORD *)*v12;
    v21 = *v12 == 0;
  if ( v21 )
LABEL_27:
    v22 = operator new(8u);
    *(_DWORD *)v22 = 0;
    v22[4] = v3;
    v22[5] = 0;
    result = (_DWORD *)std::_Hashtable<unsigned char,std::pair<unsigned char const,BiomeChunkState>,std::allocator<std::pair<unsigned char const,BiomeChunkState>>,std::__detail::_Select1st,std::equal_to<unsigned char>,std::hash<unsigned char>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                         (int)v7,
                         v11,
                         v3,
                         (int)v22);
  *((_BYTE *)result + 5) = 0;
  return result;
}


signed int __fastcall LevelChunk::wasTickedThisTick(int a1, unsigned __int64 *a2)
{
  __int64 v2; // kr00_8@1
  signed int result; // r0@1
  unsigned int v4; // r12@1
  bool v5; // cf@1
  signed int v6; // r1@1

  v2 = *(_QWORD *)(a1 + 64);
  result = 0;
  v4 = *a2 >> 32;
  v5 = (unsigned int)v2 >= (unsigned int)*a2;
  v6 = 0;
  if ( v5 )
    v6 = 1;
  if ( HIDWORD(v2) >= v4 )
    result = 1;
  if ( HIDWORD(v2) == v4 )
    result = v6;
  return result;
}


int __fastcall LevelChunk::hasBlockEntity(LevelChunk *this, const ChunkBlockPos *a2)
{
  int v2; // r4@1
  unsigned int v3; // r11@1
  unsigned int v4; // r8@1
  unsigned int v5; // r5@1
  int v6; // r6@1
  int v7; // r0@1
  int v8; // r10@2
  int v9; // r7@2
  unsigned int v10; // r1@4
  bool v11; // zf@4
  int v12; // r4@9
  int result; // r0@11
  int v14; // [sp+0h] [bp-28h]@2

  v2 = *((_WORD *)a2 + 1);
  v3 = *((_DWORD *)this + 725);
  v4 = *(_WORD *)a2;
  v5 = v4 | (v2 << 8) | (v4 >> 8 << 16);
  v6 = v5 % *((_DWORD *)this + 725);
  v7 = *(_DWORD *)(*((_DWORD *)this + 724) + 4 * v6);
  if ( !v7 )
    goto LABEL_11;
  v8 = *(_DWORD *)v7;
  v14 = (unsigned __int16)v2;
  v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
  while ( 1 )
  {
    if ( v9 == v5 )
    {
      v10 = *(_WORD *)(v8 + 4);
      v11 = v4 == (unsigned __int8)v10;
      if ( v4 == (unsigned __int8)v10 )
        v11 = v4 >> 8 == v10 >> 8;
      if ( v11 && v14 == *(_WORD *)(v8 + 6) )
        break;
    }
    v12 = *(_DWORD *)v8;
    if ( *(_DWORD *)v8 )
      v9 = *(_DWORD *)(v12 + 12);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v12 + 12) % v3 == v6 )
        continue;
  }
  if ( v7 )
    result = *(_DWORD *)v7 != 0;
  else
LABEL_11:
    result = 0;
  return result;
}


int __fastcall LevelChunk::getBlockExtraData(LevelChunk *this, const ChunkBlockPos *a2)
{
  unsigned int v2; // r8@1
  unsigned int v3; // r9@1
  _DWORD *v4; // r0@1
  _DWORD *v5; // r5@2
  int v6; // r7@2
  _DWORD *v7; // r4@4
  bool v8; // zf@7
  int result; // r0@10

  v2 = *((_DWORD *)this + 732);
  v3 = *((_WORD *)a2 + 1) + ((*((_BYTE *)a2 + 1) + 16 * *(_BYTE *)a2) << 8);
  v4 = *(_DWORD **)(*((_DWORD *)this + 731) + 4 * (v3 % v2));
  if ( !v4 )
    goto LABEL_11;
  v5 = (_DWORD *)*v4;
  v6 = *(_DWORD *)(*v4 + 4);
  while ( v3 != v6 )
  {
    v7 = (_DWORD *)*v5;
    if ( *v5 )
    {
      v6 = v7[1];
      v4 = v5;
      v5 = (_DWORD *)*v5;
      if ( v7[1] % v2 == v3 % v2 )
        continue;
    }
  }
  v8 = v4 == 0;
  if ( v4 )
    v4 = (_DWORD *)*v4;
    v8 = v4 == 0;
  if ( v8 )
LABEL_11:
    result = 0;
  else
    result = *((_WORD *)v4 + 4);
  return result;
}


int __fastcall LevelChunk::deserializeBiomeStates(LevelChunk *this, IDataInput *a2)
{
  LevelChunk *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r5@2
  int result; // r0@3
  int v6; // r9@4
  unsigned int v7; // r7@5
  int v8; // r5@5
  int v9; // r0@5
  int v10; // r11@6
  unsigned int v11; // r8@6
  bool v12; // zf@11
  _BYTE *v13; // r0@15
  IDataInput *v14; // [sp+4h] [bp-34h]@1
  int v15; // [sp+Ch] [bp-2Ch]@1
  char v16; // [sp+10h] [bp-28h]@5

  v2 = this;
  v14 = a2;
  v15 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  v3 = (void *)*((_DWORD *)v2 + 486);
  if ( v3 )
  {
    do
    {
      v4 = *(void **)v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_DWORD *)v2 + 484), 4 * *((_DWORD *)v2 + 485));
  *((_DWORD *)v2 + 486) = 0;
  *((_DWORD *)v2 + 487) = 0;
  result = v15;
  if ( v15 )
    v6 = 0;
      v7 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v14 + 24))(v14);
      v16 = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v14 + 24))(v14);
      v8 = v7 % *((_DWORD *)v2 + 485);
      v9 = *(_DWORD *)(*((_DWORD *)v2 + 484) + 4 * v8);
      if ( !v9 )
        goto LABEL_15;
      v10 = *(_DWORD *)v9;
      v11 = *(_BYTE *)(*(_DWORD *)v9 + 4);
      while ( v7 != v11 )
      {
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_BYTE *)(*(_DWORD *)v10 + 4);
          v9 = v10;
          v10 = *(_DWORD *)v10;
          if ( v11 % *((_DWORD *)v2 + 485) == v8 )
            continue;
        }
      }
      v12 = v9 == 0;
      if ( v9 )
        v9 = *(_DWORD *)v9;
        v12 = v9 == 0;
      if ( v12 )
LABEL_15:
        v13 = operator new(8u);
        *(_DWORD *)v13 = 0;
        v13[4] = v7;
        v13[5] = 0;
        v9 = std::_Hashtable<unsigned char,std::pair<unsigned char const,BiomeChunkState>,std::allocator<std::pair<unsigned char const,BiomeChunkState>>,std::__detail::_Select1st,std::equal_to<unsigned char>,std::hash<unsigned char>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
               (int)v2 + 1936,
               v8,
               v7,
               (int)v13);
      ++v6;
      *(_BYTE *)(v9 + 5) = v16;
      result = v15;
    while ( v6 != v15 );
  return result;
}


char *__fastcall LevelChunk::deserialize2DMapsLegacy(LevelChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r6@1
  LevelChunk *v3; // r4@1
  int v4; // r0@1
  char v5; // r1@2
  int v6; // r2@2
  int v8; // [sp+0h] [bp-410h]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)a2 + 40))(a2, (char *)this + 1424, 512);
  (*(void (__fastcall **)(IDataInput *, int *, signed int))(*(_DWORD *)v2 + 40))(v2, &v8, 1024);
  v4 = 0;
  do
  {
    v5 = *((_BYTE *)&v8 + 4 * v4);
    v6 = (int)v3 + v4++;
    *(_BYTE *)(v6 + 144) = v5;
  }
  while ( v4 != 256 );
  return LevelChunk::checkBiomeStates(v3);
}
