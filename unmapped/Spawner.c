

int __fastcall Spawner::tickDespawn(Spawner *this, BlockSource *a2, LevelChunk *a3)
{
  Level **v3; // r4@1
  LevelChunk *v4; // r7@1
  BlockSource *v5; // r8@1
  char *v6; // r0@1
  Random *v7; // r6@1
  int result; // r0@1
  __int64 v9; // kr00_8@2
  unsigned int v10; // r6@4
  Entity *v11; // r6@7
  Dimension *v12; // r0@8

  v3 = (Level **)this;
  v4 = a3;
  v5 = a2;
  v6 = j_Level::getRandom(*(Level **)this);
  v7 = (Random *)v6;
  result = j_Random::_genRandInt32((Random *)v6) % 0x32;
  if ( !result )
  {
    v9 = *(_QWORD *)j_LevelChunk::getEntities(v4);
    result = HIDWORD(v9);
    if ( (_DWORD)v9 != HIDWORD(v9) )
    {
      if ( HIDWORD(v9) - (signed int)v9 < 1 )
        v10 = 0;
      else
        v10 = j_Random::_genRandInt32(v7) % ((result - (signed int)v9) >> 2);
      j_Entity::setRegion(*(Entity **)(v9 + 4 * v10), v5);
      result = j_Entity::hasCategory(*(_DWORD *)(v9 + 4 * v10), 2);
      if ( result == 1 )
      {
        v11 = *(Entity **)(v9 + 4 * v10);
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 896))(v11);
        if ( result == 1 )
        {
          v12 = (Dimension *)j_BlockSource::getDimension(v5);
          result = Dimension::fetchNearestPlayer(v12, v11, 54.0);
          if ( !result )
            result = j_j_j__ZN5Level17forceRemoveEntityER6Entity(*v3, v11);
        }
      }
    }
  }
  return result;
}


int __fastcall Spawner::isSpawnPositionOk(int a1, int a2, BlockSource *a3, int a4)
{
  BlockSource *v4; // r4@1
  int v6; // r6@1
  Dimension *v7; // r0@1
  int v14; // r0@1
  signed int v16; // r0@3
  Material *v18; // r0@7
  int v19; // r1@8
  int v20; // r2@8
  int *v21; // r1@8
  int v23; // r1@6
  int v24; // r2@6
  Block *v25; // r6@6
  Material *v26; // r0@13
  int v27; // r1@15
  int v28; // r2@15
  int v29; // r0@15
  int v30; // [sp+4h] [bp-44h]@15
  int v31; // [sp+8h] [bp-40h]@15
  int v32; // [sp+Ch] [bp-3Ch]@15
  int v33; // [sp+10h] [bp-38h]@6
  int v34; // [sp+14h] [bp-34h]@6
  int v35; // [sp+18h] [bp-30h]@6
  int v36; // [sp+1Ch] [bp-2Ch]@8
  int v37; // [sp+20h] [bp-28h]@8
  int v38; // [sp+24h] [bp-24h]@8
  float v39; // [sp+28h] [bp-20h]@2

  v4 = a3;
  _R5 = a4;
  v6 = a2;
  v7 = (Dimension *)j_BlockSource::getDimension(a3);
  __asm
  {
    VLDR            S0, [R5]
    VLDR            S2, [R5,#4]
    VLDR            S4, [R5,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R1, S0
    VMOV            R2, S2
    VMOV            R3, S4
  }
  v14 = Dimension::fetchNearestPlayer(v7, _R1, _R2, _R3, 54.0);
  if ( v14 )
    _R7 = (*(int (**)(void))(*(_DWORD *)v14 + 52))();
    j_Vec3::Vec3((int)&v39, _R5);
    __asm
    {
      VLDR            S0, [R7]
      VLDR            S6, [SP,#0x48+var_20]
      VLDR            S2, [R7,#4]
      VLDR            S8, [SP,#0x48+var_1C]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R7,#8]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [SP,#0x48+var_18]
      VSUB.F32        S4, S10, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =576.0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      return 0;
  v16 = j_EntityClassTree::isTypeInstanceOf(v6, 8960);
  _ZF = v6 == 2865;
  if ( v6 != 2865 )
    _ZF = v16 == 1;
  if ( !_ZF )
    v23 = *(_DWORD *)(_R5 + 4);
    v24 = *(_DWORD *)(_R5 + 8);
    v33 = *(_DWORD *)_R5;
    v34 = v23 - 1;
    v35 = v24;
    v25 = (Block *)j_BlockSource::getBlock(v4, (const BlockPos *)&v33);
    if ( j_Block::isType(v25, (const Block *)Block::mBedrock) )
    if ( j_Block::isType(v25, (const Block *)Block::mInvisibleBedrock) )
    if ( j_BlockSource::isSolidBlockingBlock(v4, (const BlockPos *)_R5) )
    v26 = (Material *)j_BlockSource::getMaterial(v4, (const BlockPos *)_R5);
    if ( j_Material::isLiquid(v26) )
    v27 = *(_DWORD *)(_R5 + 4);
    v28 = *(_DWORD *)(_R5 + 8);
    v30 = *(_DWORD *)_R5;
    v29 = v27 + 1;
    v21 = &v30;
    v31 = v29;
    v32 = v28;
    return !j_BlockSource::isSolidBlockingBlock(v4, (const BlockPos *)v21);
  v18 = (Material *)j_BlockSource::getMaterial(v4, (const BlockPos *)_R5);
  if ( j_Material::isLiquid(v18) == 1 )
    v19 = *(_DWORD *)(_R5 + 4);
    v20 = *(_DWORD *)(_R5 + 8);
    v36 = *(_DWORD *)_R5;
    v37 = v19 + 1;
    v38 = v20;
    v21 = &v36;
  return 0;
}


Entity *__fastcall Spawner::spawnProjectile(Spawner *this, BlockSource *a2, const EntityDefinitionIdentifier *a3, Entity *a4, const Vec3 *a5, const Vec3 *a6)
{
  BlockSource *v6; // r5@1
  Entity *v7; // r4@1
  char *v8; // r1@1
  int (*v9)(void); // r3@6
  Entity *v10; // r5@6
  Entity *v11; // r6@8
  int v12; // r0@10
  int v13; // r2@10
  int (*v14)(void); // r3@10
  ProjectileComponent *v15; // r6@14
  int v16; // r4@18
  int v17; // r0@18
  int v19; // [sp+Ch] [bp-1Ch]@10
  int v20; // [sp+10h] [bp-18h]@6
  int v21; // [sp+14h] [bp-14h]@3

  v6 = a2;
  v7 = a4;
  v8 = (char *)&Vec2::ZERO;
  if ( a4 )
    v8 = (char *)a4 + 120;
  j_EntityFactory::createSpawnedEntity((Entity **)&v21, (const void **)a3, (int)a4, (int)a5, v8);
  if ( !v21 )
    return 0;
  if ( v7 && j_Entity::hasCategory((int)v7, 1) == 1 )
  {
    v9 = *(int (**)(void))(*(_DWORD *)j_BlockSource::getLevel(v6) + 48);
    v20 = v21;
    v21 = 0;
    v10 = (Entity *)v9();
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 32))();
    v11 = 0;
    v20 = 0;
    if ( !v10 )
      goto LABEL_20;
    Entity::setGlobal(v10, 1);
  }
  else
    v12 = j_BlockSource::getLevel(v6);
    v13 = v21;
    v14 = *(int (**)(void))(*(_DWORD *)v12 + 44);
    v19 = v13;
    v10 = (Entity *)v14();
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 32))();
    v19 = 0;
  if ( Entity::getProjectileComponent(v10) )
    v15 = (ProjectileComponent *)Entity::getProjectileComponent(v10);
    if ( v7 && j_Entity::hasCategory((int)v7, 2) == 1 )
    {
      ProjectileComponent::shoot(v15, v7);
      v11 = v10;
    }
    else
      v16 = ProjectileComponent::getThrowPower(v15);
      v17 = ProjectileComponent::getUncertaintyBase(v15);
      ProjectileComponent::shoot(v15, a6, *(float *)&v16, *(float *)&v17, (const Vec3 *)&Vec3::ZERO, 0);
    v11 = v10;
LABEL_20:
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 32))();
  return v11;
}


int __fastcall Spawner::spawnItem(Spawner *this, BlockSource *a2, const ItemInstance *a3, Entity *a4, const Vec3 *a5, int a6)
{
  Spawner *v6; // r5@1
  Entity *v7; // r7@1
  const ItemInstance *v8; // r6@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@3
  int v12; // r7@6
  int v13; // r2@6
  void (*v14)(void); // r3@6
  unsigned int *v16; // r2@14
  signed int v17; // r1@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  int v22; // [sp+8h] [bp-30h]@6
  int v23; // [sp+Ch] [bp-2Ch]@1
  int v24; // [sp+10h] [bp-28h]@2
  int v25; // [sp+14h] [bp-24h]@1
  int v26; // [sp+18h] [bp-20h]@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v23, 64);
  j_EntityFactory::createSpawnedEntity((Entity **)&v26, (const void **)&v23, (int)v7, (int)a5, &Vec2::ZERO);
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v24 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v26 )
    if ( j_Entity::hasCategory(v26, 1024) == 1 )
      v12 = v26;
      j_ItemInstance::operator=(v26 + 3416, (int)v8);
      *(_DWORD *)(v12 + 3496) = a6;
      v13 = v26;
      v14 = *(void (**)(void))(**(_DWORD **)v6 + 44);
      v26 = 0;
      v22 = v13;
      v14();
      if ( v22 )
        (*(void (**)(void))(*(_DWORD *)v22 + 32))();
      v22 = 0;
      v12 = 0;
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 32))();
  else
    v12 = 0;
  return v12;
}


int __fastcall Spawner::_handlePopulationCap(int a1, int a2, _BYTE *a3, int a4)
{
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r7@1
  _BYTE *v8; // r6@1
  int v9; // r5@4
  unsigned int v10; // r0@5
  int v11; // r0@6

  v4 = a1;
  v5 = a4;
  v6 = *(_DWORD *)(a1 + 892);
  v7 = a2;
  v8 = a3;
  if ( v6 + a4 >= 201 )
  {
    v5 = 200 - v6;
    if ( 200 - v6 < 0 )
      v5 = 0;
  }
  v9 = MobSpawnRules::getPopulationCap(a2 + 28, a3);
  if ( v9 >= 0 )
    v10 = j_EntityClassTree::getEntityTypeIdLegacy(*(_DWORD *)(v7 + 16));
    if ( v10 <= 0x69 )
    {
      v11 = *(_DWORD *)(v4 + 424 * *v8 + 4 * v10 + 44);
      if ( v11 + v5 >= v9 )
        v5 = v9 - v11;
    }
  return v5;
}


signed int __fastcall Spawner::_spawnMobCluster(Level **a1, BlockSource *a2, int a3, int a4)
{
  int v4; // r11@1
  int v5; // r8@1
  BlockSource *v6; // r10@1
  char *v7; // r6@1
  Block *v8; // r0@1
  int v9; // r4@1
  signed int result; // r0@1
  int v11; // r0@3
  int *v12; // r7@3
  int *v13; // r5@3
  int v14; // r1@3
  int v15; // r4@3
  int v16; // r0@5
  int v17; // r1@5
  int v18; // r0@7
  int v19; // r1@7
  int v20; // r2@7
  Level *v21; // r0@8
  int v22; // r0@9
  int v23; // r9@12
  unsigned int v24; // r0@13
  int v25; // r0@14
  unsigned int *v26; // r2@18
  signed int v27; // r1@20
  unsigned int *v28; // r2@22
  signed int v29; // r1@24
  unsigned int *v30; // r2@26
  signed int v31; // r1@28
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  unsigned int *v36; // r2@38
  signed int v37; // r1@40
  unsigned int *v38; // r2@42
  signed int v39; // r1@44
  unsigned int *v40; // r2@46
  signed int v41; // r1@48
  unsigned int *v42; // r2@50
  signed int v43; // r1@52
  unsigned int *v44; // r2@54
  signed int v45; // r1@56
  int *v46; // r7@57
  int v47; // r5@98
  char *v48; // r9@98
  Dimension *v49; // r4@98
  int v50; // r6@98
  int v51; // r0@99
  int v52; // r7@99
  int v53; // r2@99
  signed int v60; // r6@102
  char *v61; // r0@103
  int v62; // r6@105
  void *v63; // r0@106
  _BYTE *v64; // r5@107
  void *v65; // r0@108
  void *v66; // r0@109
  void *v67; // r0@110
  int v68; // r0@111
  int v69; // r1@111
  int v70; // r0@111
  int v71; // r11@111
  __int16 v72; // r0@112
  int v73; // r0@112
  signed int v74; // r0@112
  int v75; // r0@114
  int v76; // r0@114
  unsigned int v77; // r0@114
  int v78; // r0@115
  void *v79; // r0@116
  void *v80; // r0@117
  void *v81; // r0@118
  void *v82; // r0@119
  void *v83; // r0@120
  void *v84; // r0@121
  int *v85; // [sp+20h] [bp-B0h]@17
  int v86; // [sp+24h] [bp-ACh]@17
  unsigned __int64 v87; // [sp+2Ch] [bp-A4h]@98
  int v88; // [sp+34h] [bp-9Ch]@6
  Level **v89; // [sp+38h] [bp-98h]@1
  int v90; // [sp+3Ch] [bp-94h]@98
  int v91; // [sp+40h] [bp-90h]@111
  int v92; // [sp+44h] [bp-8Ch]@111
  int v93; // [sp+48h] [bp-88h]@111
  char v94; // [sp+4Ch] [bp-84h]@111
  int v95; // [sp+58h] [bp-78h]@50
  int v96; // [sp+5Ch] [bp-74h]@46
  int v97; // [sp+60h] [bp-70h]@42
  int v98; // [sp+64h] [bp-6Ch]@26
  int v99; // [sp+68h] [bp-68h]@22
  int v100; // [sp+6Ch] [bp-64h]@18
  int v101; // [sp+70h] [bp-60h]@54
  int v102; // [sp+74h] [bp-5Ch]@38
  int v103; // [sp+78h] [bp-58h]@34
  int v104; // [sp+7Ch] [bp-54h]@30
  int v105; // [sp+80h] [bp-50h]@7
  int v106; // [sp+84h] [bp-4Ch]@7
  int v107; // [sp+88h] [bp-48h]@7
  unsigned __int8 v108; // [sp+8Ch] [bp-44h]@5
  int v109; // [sp+90h] [bp-40h]@5
  int v110; // [sp+94h] [bp-3Ch]@5
  int v111; // [sp+98h] [bp-38h]@5
  int v112; // [sp+9Ch] [bp-34h]@3
  int v113; // [sp+A0h] [bp-30h]@3
  int v114; // [sp+A4h] [bp-2Ch]@3

  v89 = a1;
  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = j_Level::getRandom(*a1);
  v8 = (Block *)j_BlockSource::getBlock(v6, (const BlockPos *)v5);
  v9 = (int)v8;
  result = j_Block::isType(v8, (const Block *)Block::mAir);
  if ( !result )
  {
    if ( *(_BYTE *)(v4 + 1) )
    {
      v12 = (int *)(v5 + 8);
      v11 = *(_DWORD *)(v5 + 8);
      v13 = (int *)(v5 + 4);
      v14 = *(_DWORD *)(v5 + 4) + 1;
      v112 = *(_DWORD *)v5;
      v113 = v14;
      v114 = v11;
      v15 = Block::getTypeToSpawn(v9, (int)v6, 8960, (const BlockPos *)&v112);
    }
    else
      v15 = (*(int (__fastcall **)(int, BlockSource *, int))(*(_DWORD *)v9 + 340))(v9, v6, v5);
    v16 = *v12;
    v17 = *v13;
    v109 = *(_DWORD *)v5;
    v110 = v17 + 1;
    v111 = v16;
    BlockSource::getRawBrightness((BlockSource *)&v108, v6, (int)&v109, 1);
    result = v108;
    *(_DWORD *)(v4 + 4) = v108;
    if ( v15 )
      result = MobSpawnRules::getSpawnCount(v15 + 28, v4, v6, (Random *)v7, v15);
      v88 = result;
      if ( result >= 1 )
      {
        v18 = *v12;
        v19 = *(_DWORD *)(v15 + 16);
        v20 = *v13 + 1;
        v105 = *(_DWORD *)v5;
        v106 = v20;
        v107 = v18;
        result = Spawner::isSpawnPositionOk(v18, v19, v6, (int)&v105);
        if ( result == 1 )
        {
          v21 = v89[223];
          if ( (signed int)v21 + v88 >= 201 )
          {
            v22 = 200 - (_DWORD)v21;
            if ( v22 < 0 )
              v22 = 0;
            v88 = v22;
          }
          v23 = MobSpawnRules::getPopulationCap(v15 + 28, (_BYTE *)v4);
          if ( v23 >= 0 )
            v24 = j_EntityClassTree::getEntityTypeIdLegacy(*(_DWORD *)(v15 + 16));
            if ( v24 <= 0x69 )
            {
              v25 = (int)*(&v89[106 * *(_BYTE *)v4 + 11] + v24);
              if ( v88 + v25 >= v23 )
                v88 = v23 - v25;
            }
          result = v88;
          if ( v88 >= 1 )
            v86 = v15 + 104;
            v85 = (int *)(v15 + 4);
            do
              v90 = v15;
              v87 = __PAIR__((unsigned int)v12, (unsigned int)v13);
              v47 = v15;
              v48 = v7;
              v49 = (Dimension *)j_BlockSource::getDimension(v6);
              v50 = *(_BYTE *)v4;
              if ( j_EntityClassTree::isTypeInstanceOf(*(_DWORD *)(v47 + 16), 256) != 1 )
                goto LABEL_126;
              v51 = EntityClassTree::getMobCategory(*(_DWORD *)(v90 + 16));
              v52 = MobSpawnInfo::categoryID(v51);
              v53 = v50;
              if ( v50 )
                v53 = 1;
              _R0 = Dimension::getPopCap(v49, v52, v53);
              __asm
              {
                VMOV            S0, R0
                VCVTR.S32.F32   S0, S0
                VMOV            R4, S0
              }
              if ( _R4 >= 1 )
                v60 = (signed int)*(&v89[5 * v50 + 1] + v52);
                if ( v60 < _R4 )
                {
                  v61 = j_Level::getRandom(*v89);
                  if ( (signed int)(j_Random::_genRandInt32((Random *)v61) % _R4) > v60 )
                  {
LABEL_126:
                    EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v102);
                    if ( *(_DWORD *)(v90 + 16) == 1 )
                    {
                      EntityDefinitionIdentifier::operator=(&v102, v85);
                      v62 = v90;
                      v46 = &v98;
                    }
                    else
                      sub_21E8190((void **)&v102, "minecraft", (_BYTE *)9);
                      EntityTypeIdWithoutCategories(&v101, *(_DWORD *)(v90 + 16), 0);
                      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                        &v103,
                        &v101);
                      v63 = (void *)(v101 - 12);
                      if ( (int *)(v101 - 12) != &dword_28898C0 )
                      {
                        v44 = (unsigned int *)(v101 - 4);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v45 = __ldrex(v44);
                          while ( __strex(v45 - 1, v44) );
                          v46 = &v98;
                        }
                        else
                          v45 = (*v44)--;
                        if ( v45 <= 0 )
                          j_j_j_j__ZdlPv_9(v63);
                      }
                    EntityDefinitionIdentifier::EntityDefinitionIdentifier(v46, &v102);
                    v64 = (_BYTE *)v4;
                    v90 = v62;
                    if ( *(_DWORD *)(v62 + 112) )
                      (*(void (__fastcall **)(int *, int, char *))(v62 + 116))(&v95, v86, v48);
                      EntityDefinitionIdentifier::operator=(v46, &v95);
                      v65 = (void *)(v97 - 12);
                      if ( (int *)(v97 - 12) != &dword_28898C0 )
                        v38 = (unsigned int *)(v97 - 4);
                            v39 = __ldrex(v38);
                          while ( __strex(v39 - 1, v38) );
                          v39 = (*v38)--;
                        if ( v39 <= 0 )
                          j_j_j_j__ZdlPv_9(v65);
                      v66 = (void *)(v96 - 12);
                      if ( (int *)(v96 - 12) != &dword_28898C0 )
                        v40 = (unsigned int *)(v96 - 4);
                            v41 = __ldrex(v40);
                          while ( __strex(v41 - 1, v40) );
                          v41 = (*v40)--;
                        if ( v41 <= 0 )
                          j_j_j_j__ZdlPv_9(v66);
                      v67 = (void *)(v95 - 12);
                      if ( (int *)(v95 - 12) != &dword_28898C0 )
                        v42 = (unsigned int *)(v95 - 4);
                            v43 = __ldrex(v42);
                          while ( __strex(v43 - 1, v42) );
                          v43 = (*v42)--;
                        if ( v43 <= 0 )
                          j_j_j_j__ZdlPv_9(v67);
                    v68 = *(_DWORD *)HIDWORD(v87);
                    v69 = *(_DWORD *)v87;
                    v91 = *(_DWORD *)v5;
                    v92 = v69 + 1;
                    v93 = v68;
                    j_Vec3::Vec3((int)&v94, (int)&v91);
                    v70 = Spawner::spawnMob(
                            (Spawner *)v89,
                            v6,
                            (const EntityDefinitionIdentifier *)v46,
                            0,
                            (const Vec3 *)&v94,
                            1,
                            *(_BYTE *)v4,
                            0);
                    v71 = v70;
                    if ( v70 )
                      v72 = (*(int (**)(void))(*(_DWORD *)v70 + 488))();
                      v73 = EntityClassTree::getMobCategory(v72);
                      v74 = MobSpawnInfo::categoryID(v73);
                      if ( v74 >= 0 && (unsigned int)v74 <= 4 )
                        v75 = (int)(&v89[5 * *v64] + v74);
                        ++*(_DWORD *)(v75 + 4);
                        v76 = (*(int (__fastcall **)(int))(*(_DWORD *)v71 + 488))(v71);
                        v77 = j_EntityClassTree::getEntityTypeIdLegacy(v76);
                        if ( v77 <= 0x69 )
                          v78 = (int)(&v89[106 * *v64] + v77);
                          ++*(_DWORD *)(v78 + 44);
                    v79 = (void *)(v100 - 12);
                    if ( (int *)(v100 - 12) != &dword_28898C0 )
                      v26 = (unsigned int *)(v100 - 4);
                      if ( &pthread_create )
                        __dmb();
                        do
                          v27 = __ldrex(v26);
                        while ( __strex(v27 - 1, v26) );
                      else
                        v27 = (*v26)--;
                      if ( v27 <= 0 )
                        j_j_j_j__ZdlPv_9(v79);
                    v4 = (int)v64;
                    v80 = (void *)(v99 - 12);
                    if ( (int *)(v99 - 12) != &dword_28898C0 )
                      v28 = (unsigned int *)(v99 - 4);
                          v29 = __ldrex(v28);
                        while ( __strex(v29 - 1, v28) );
                        v29 = (*v28)--;
                      if ( v29 <= 0 )
                        j_j_j_j__ZdlPv_9(v80);
                    v81 = (void *)(v98 - 12);
                    if ( (int *)(v98 - 12) != &dword_28898C0 )
                      v30 = (unsigned int *)(v98 - 4);
                          v31 = __ldrex(v30);
                        while ( __strex(v31 - 1, v30) );
                        v31 = (*v30)--;
                      if ( v31 <= 0 )
                        j_j_j_j__ZdlPv_9(v81);
                    v82 = (void *)(v104 - 12);
                    if ( (int *)(v104 - 12) != &dword_28898C0 )
                      v32 = (unsigned int *)(v104 - 4);
                          v33 = __ldrex(v32);
                        while ( __strex(v33 - 1, v32) );
                        v33 = (*v32)--;
                      if ( v33 <= 0 )
                        j_j_j_j__ZdlPv_9(v82);
                    v83 = (void *)(v103 - 12);
                    if ( (int *)(v103 - 12) != &dword_28898C0 )
                      v34 = (unsigned int *)(v103 - 4);
                          v35 = __ldrex(v34);
                        while ( __strex(v35 - 1, v34) );
                        v35 = (*v34)--;
                      if ( v35 <= 0 )
                        j_j_j_j__ZdlPv_9(v83);
                    v84 = (void *)(v102 - 12);
                    if ( (int *)(v102 - 12) != &dword_28898C0 )
                      v36 = (unsigned int *)(v102 - 4);
                          v37 = __ldrex(v36);
                        while ( __strex(v37 - 1, v36) );
                        v37 = (*v36)--;
                      if ( v37 <= 0 )
                        j_j_j_j__ZdlPv_9(v84);
                  }
                }
              v7 = v48;
              _VF = __OFSUB__(v88, 1);
              result = v88 - 1;
              _ZF = v88 == 1;
              _NF = v88-- - 1 < 0;
              v12 = (int *)HIDWORD(v87);
              v13 = (int *)v87;
              v15 = v90;
            while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
        }
      }
  }
  return result;
}


int __fastcall Spawner::Spawner(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 892) = 0;
  return result;
}


int __fastcall Spawner::spawnMob(Spawner *this, BlockSource *a2, const EntityDefinitionIdentifier *a3, Entity *a4, const Vec3 *a5, int a6, bool a7, int a8)
{
  BlockSource *v8; // r4@1
  Spawner *v9; // r5@1
  Mob *v10; // r6@3
  Level *v11; // r0@3
  int v12; // r1@3
  int v13; // r2@3
  int (*v14)(void); // r3@5
  int v15; // r4@5
  Mob *v17; // [sp+4h] [bp-1Ch]@5
  Mob *v18; // [sp+8h] [bp-18h]@1

  v8 = a2;
  v9 = this;
  j_EntityFactory::createSpawnedEntity(&v18, (const void **)a3, (int)a4, (int)a5, &Vec2::ZERO);
  if ( v18 )
  {
    if ( j_Entity::hasCategory((int)v18, 2) == 1 )
    {
      v10 = v18;
      Mob::setSurfaceMob(v18, a7);
      Mob::setNaturallySpawned(v10, a6);
      j_Entity::setRegion(v10, v8);
      v11 = (Level *)j_BlockSource::getLevel(v8);
      j_Entity::_setLevelPtr(v10, v11);
      Entity::updateBBFromDescription(v10, v12, v13);
      if ( a6 == 1 && (*(int (__fastcall **)(Mob *, int))(*(_DWORD *)v10 + 888))(v10, a8) != 1 )
      {
        j_Entity::resetRegion(v10);
        v15 = 0;
        j_Entity::_setLevelPtr(v10, 0);
      }
      else
        v14 = *(int (**)(void))(**(_DWORD **)v9 + 44);
        v17 = v18;
        v18 = 0;
        v15 = v14();
        if ( v17 )
          (*(void (**)(void))(*(_DWORD *)v17 + 32))();
        v17 = 0;
    }
    else
      v15 = 0;
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 32))();
  }
  else
    v15 = 0;
  return v15;
}


int __fastcall Spawner::_updateBaseTypeCount(Spawner *this, BlockSource *a2, const ChunkPos *a3)
{
  Spawner *v3; // r6@1
  BlockSource *v4; // r9@1
  const ChunkPos *v5; // r10@1
  int v6; // r0@1
  int v7; // r4@1
  Dimension *v8; // r0@1
  int v9; // r0@3
  Dimension *v10; // r0@3
  int v11; // r0@4
  int v12; // r0@6
  Dimension *v13; // r0@6
  int v14; // r1@6
  int result; // r0@8
  LevelChunk *v16; // r0@10
  __int64 i; // r4@11
  signed int v18; // r7@13
  int v19; // r0@13
  signed int v20; // r7@15
  int v21; // r0@15
  signed int v22; // r7@17
  int v23; // r0@17
  signed int v24; // r7@19
  int v25; // r0@19
  signed int v26; // r7@21
  int v27; // r0@21
  int v28; // r0@22
  unsigned int v29; // r7@22
  int v30; // r0@23
  int v31; // r1@25
  int v32; // r1@26
  int v33; // r2@26
  int v34; // [sp+0h] [bp-30h]@8
  int v35; // [sp+4h] [bp-2Ch]@8

  v3 = this;
  v4 = a2;
  v5 = a3;
  j___aeabi_memclr4((int)this + 4, 892);
  v6 = j_BlockSource::getLevel(v4);
  v7 = 0;
  v8 = (Dimension *)j_Level::getDimension(v6, 0);
  if ( v8 )
    v7 = *((_DWORD *)j_Dimension::getEntityIdMapConst(v8) + 3);
  *((_DWORD *)v3 + 223) += v7;
  v9 = j_BlockSource::getLevel(v4);
  v10 = (Dimension *)j_Level::getDimension(v9, 1u);
  if ( v10 )
    v11 = *((_DWORD *)j_Dimension::getEntityIdMapConst(v10) + 3);
  else
    v11 = 0;
  *((_DWORD *)v3 + 223) += v11;
  v12 = j_BlockSource::getLevel(v4);
  v13 = (Dimension *)j_Level::getDimension(v12, 2u);
  v14 = 0;
  if ( v13 )
    v14 = *((_DWORD *)j_Dimension::getEntityIdMapConst(v13) + 3);
  *((_DWORD *)v3 + 223) += v14;
  v34 = 0;
  v35 = *((_DWORD *)v5 + 1) - 2;
  result = *(_DWORD *)v5;
  do
  {
    v34 = result - 2;
    do
    {
      v16 = (LevelChunk *)j_BlockSource::getChunk(v4, (const ChunkPos *)&v34);
      if ( v16 )
      {
        for ( i = *(_QWORD *)j_LevelChunk::getEntities(v16); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
        {
          if ( j_EntityClassTree::isInstanceOf(*(_DWORD *)i, 4864) == 1 )
          {
            v18 = MobSpawnInfo::categoryID(4864);
            v19 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 5 * v19 + v18 + 1);
          }
          if ( j_EntityClassTree::isInstanceOf(*(_DWORD *)i, 2816) )
            v20 = MobSpawnInfo::categoryID(2816);
            v21 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 5 * v21 + v20 + 1);
          if ( j_EntityClassTree::isInstanceOf(*(_DWORD *)i, 8960) == 1 )
            v22 = MobSpawnInfo::categoryID(8960);
            v23 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 5 * v23 + v22 + 1);
          if ( j_EntityClassTree::isInstanceOf(*(_DWORD *)i, 783) == 1 )
            v24 = MobSpawnInfo::categoryID(783);
            v25 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 5 * v25 + v24 + 1);
          if ( j_EntityClassTree::isInstanceOf(*(_DWORD *)i, 33024) == 1 )
            v26 = MobSpawnInfo::categoryID(33024);
            v27 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 5 * v27 + v26 + 1);
          v28 = (*(int (**)(void))(**(_DWORD **)i + 488))();
          v29 = j_EntityClassTree::getEntityTypeIdLegacy(v28);
          if ( v29 < 0x6A )
            v30 = (*(int (**)(void))(**(_DWORD **)i + 332))();
            ++*((_DWORD *)v3 + 106 * v30 + v29 + 11);
        }
      }
      v31 = v34++;
      result = *(_DWORD *)v5;
    }
    while ( v31 < *(_DWORD *)v5 + 2 );
    v32 = v35;
    v33 = *((_DWORD *)v5 + 1) + 2;
    ++v35;
  }
  while ( v32 < v33 );
  return result;
}


unsigned int __fastcall Spawner::tick(Spawner *this, BlockSource *a2, LevelChunk *a3)
{
  Level **v3; // r6@1
  LevelChunk *v4; // r10@1
  BlockSource *v5; // r5@1
  unsigned __int64 *v6; // r0@1
  unsigned int result; // r0@1
  char *v8; // r0@2
  Random *v9; // r7@2
  char *v10; // r0@3
  __int64 *v11; // r0@3
  char v12; // r0@3
  char v13; // r0@3
  int *v14; // r7@4
  char *v15; // r0@5
  int *v16; // r4@5
  int v17; // [sp+0h] [bp-58h]@5
  int v18; // [sp+4h] [bp-54h]@5
  int v19; // [sp+8h] [bp-50h]@5
  int v20; // [sp+Ch] [bp-4Ch]@4
  int v21; // [sp+10h] [bp-48h]@4
  int v22; // [sp+14h] [bp-44h]@4
  int v23; // [sp+18h] [bp-40h]@4
  int v24; // [sp+1Ch] [bp-3Ch]@4
  int v25; // [sp+20h] [bp-38h]@4
  int v26; // [sp+24h] [bp-34h]@4
  int v27; // [sp+28h] [bp-30h]@4
  int v28; // [sp+2Ch] [bp-2Ch]@3
  int v29; // [sp+30h] [bp-28h]@3
  int v30; // [sp+34h] [bp-24h]@3

  v3 = (Level **)this;
  v4 = a3;
  v5 = a2;
  v6 = (unsigned __int64 *)j_Level::getGameRules(*(Level **)this);
  result = j_GameRules::getBool(v6, (int **)&GameRules::DO_MOB_SPAWNING);
  if ( result == 1 )
  {
    v8 = j_Level::getRandom(*v3);
    v9 = (Random *)v8;
    result = j_Random::_genRandInt32((Random *)v8) % 0x3E8;
    if ( result <= 0xA )
    {
      v10 = j_LevelChunk::getPosition(v4);
      Spawner::_updateBaseTypeCount((Spawner *)v3, v5, (const ChunkPos *)v10);
      v11 = (__int64 *)j_LevelChunk::getPosition(v4);
      j_BlockPos::BlockPos((int)&v28, v11, 0);
      v12 = j_Random::_genRandInt32(v9);
      v28 += v12 & 0xF;
      v13 = j_Random::_genRandInt32(v9);
      v30 += v13 & 0xF;
      v29 = *(_WORD *)(j_BlockSource::getDimension(v5) + 120);
      BlockSource::findNextSpawnBlockUnder(v5, (BlockPos *)&v28);
      result = j_BlockSource::hasBlock(v5, (const BlockPos *)&v28);
      if ( result == 1 )
      {
        v23 = 0;
        v24 = 0;
        LOBYTE(v23) = 1;
        v25 = v28;
        v26 = v29;
        v20 = v28;
        v27 = v30;
        v21 = v29 + 1;
        v22 = v30;
        v14 = (int *)j_BlockSource::getMaterial(v5, (const BlockPos *)&v20);
        BYTE1(v23) = j_Material::isType(v14, 5);
        BYTE2(v23) = j_Material::isType(v14, 6);
        Spawner::_spawnMobCluster(v3, v5, (int)&v28, (int)&v23);
        LOBYTE(v23) = 0;
        BYTE3(v23) = 1;
        result = BlockSource::findNextSpawnBlockUnder(v5, (BlockPos *)&v28);
        if ( result == 1 )
        {
          do
          {
            v15 = j_LevelChunk::getPosition(v4);
            Spawner::_updateBaseTypeCount((Spawner *)v3, v5, (const ChunkPos *)v15);
            v25 = v28;
            v17 = v28;
            v26 = v29;
            v27 = v30;
            v18 = v29 + 1;
            v19 = v30;
            v16 = (int *)j_BlockSource::getMaterial(v5, (const BlockPos *)&v17);
            BYTE1(v23) = j_Material::isType(v16, 5);
            BYTE2(v23) = j_Material::isType(v16, 6);
            Spawner::_spawnMobCluster(v3, v5, (int)&v28, (int)&v23);
            result = BlockSource::findNextSpawnBlockUnder(v5, (BlockPos *)&v28);
          }
          while ( result );
        }
      }
    }
  }
  return result;
}


signed int __fastcall Spawner::popCapAllows(Spawner *this, const Dimension *a2, const MobSpawnerData *a3, int a4)
{
  const MobSpawnerData *v4; // r7@1
  Level **v5; // r4@1
  Dimension *v6; // r6@1
  int v7; // r5@1
  int v8; // r0@2
  int v9; // r0@2
  int v10; // r7@2
  int v17; // r0@3
  signed int v18; // r5@3
  signed int v19; // r7@3
  char *v20; // r0@4

  v4 = a3;
  v5 = (Level **)this;
  v6 = (Dimension *)a2;
  v7 = a4;
  if ( j_EntityClassTree::isTypeInstanceOf(*((_DWORD *)a3 + 4), 256) == 1 )
  {
    v8 = EntityClassTree::getMobCategory(*((_DWORD *)v4 + 4));
    v9 = MobSpawnInfo::categoryID(v8);
    v10 = v9;
    _R0 = Dimension::getPopCap(v6, v9, v7);
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R6, S0
    }
    if ( _R6 < 1 )
      v18 = 0;
    else
      v17 = 5 * v7;
      v19 = (signed int)*(&v5[v10 + 1] + v17);
      if ( v19 < _R6 )
      {
        v20 = j_Level::getRandom(*v5);
        if ( (signed int)(j_Random::_genRandInt32((Random *)v20) % _R6) > v19 )
          v18 = 1;
      }
  }
  else
    v18 = 1;
  return v18;
}


LevelChunk *__fastcall Spawner::postProcessSpawnMobs(Spawner *this, BlockSource *a2, int a3, int a4, Random *a5)
{
  Spawner *v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  BlockSource *v8; // r4@1
  unsigned __int64 *v9; // r0@1
  LevelChunk *result; // r0@1
  LevelChunk *v11; // r6@2
  char *v12; // r0@3
  __int64 *v13; // r0@3
  char v14; // r0@3
  char v15; // r0@3
  int *v16; // r6@4
  int v17; // [sp+4h] [bp-54h]@4
  int v18; // [sp+8h] [bp-50h]@4
  int v19; // [sp+Ch] [bp-4Ch]@4
  int v20; // [sp+10h] [bp-48h]@4
  int v21; // [sp+14h] [bp-44h]@4
  int v22; // [sp+18h] [bp-40h]@4
  int v23; // [sp+1Ch] [bp-3Ch]@4
  int v24; // [sp+20h] [bp-38h]@4
  int v25; // [sp+28h] [bp-30h]@3
  int v26; // [sp+2Ch] [bp-2Ch]@3
  int v27; // [sp+30h] [bp-28h]@3
  int v28; // [sp+34h] [bp-24h]@2
  int v29; // [sp+38h] [bp-20h]@2
  int v30; // [sp+3Ch] [bp-1Ch]@2

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (unsigned __int64 *)j_Level::getGameRules(*(Level **)this);
  result = (LevelChunk *)j_GameRules::getBool(v9, (int **)&GameRules::DO_MOB_SPAWNING);
  if ( result == (LevelChunk *)1 )
  {
    v28 = v7;
    v29 = 0;
    v30 = v6;
    result = (LevelChunk *)j_BlockSource::getChunkAt(v8, (const BlockPos *)&v28);
    v11 = result;
    if ( result )
    {
      v12 = j_LevelChunk::getPosition(result);
      Spawner::_updateBaseTypeCount(v5, v8, (const ChunkPos *)v12);
      v13 = (__int64 *)j_LevelChunk::getPosition(v11);
      j_BlockPos::BlockPos((int)&v25, v13, 0);
      v14 = j_Random::_genRandInt32(a5);
      v25 += v14 & 0xF;
      v15 = j_Random::_genRandInt32(a5);
      v27 += v15 & 0xF;
      v26 = *(_WORD *)(j_BlockSource::getDimension(v8) + 120);
      BlockSource::findNextTopSolidBlockUnder(v8, (BlockPos *)&v25);
      result = (LevelChunk *)j_BlockSource::hasBlock(v8, (const BlockPos *)&v25);
      if ( result == (LevelChunk *)1 )
      {
        v20 = 0;
        v21 = 0;
        LOBYTE(v20) = 1;
        v22 = v25;
        v23 = v26;
        v17 = v25;
        v24 = v27;
        v18 = v26 + 1;
        v19 = v27;
        v16 = (int *)j_BlockSource::getMaterial(v8, (const BlockPos *)&v17);
        BYTE1(v20) = j_Material::isType(v16, 5);
        BYTE2(v20) = j_Material::isType(v16, 6);
        result = (LevelChunk *)Spawner::_spawnMobCluster((Level **)v5, v8, (int)&v25, (int)&v20);
      }
    }
  }
  return result;
}
