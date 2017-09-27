

int __fastcall SkeletonHorseTrapGoal::tick(SkeletonHorseTrapGoal *this)
{
  SkeletonHorseTrapGoal *v1; // r4@1
  Dimension *v2; // r0@1
  int v3; // r8@1
  Level *v4; // r0@1
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r0@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  BlockSource *v11; // r0@5
  int v12; // r7@5
  void (__fastcall *v13)(int, int, int *); // r6@5
  int v14; // r1@5
  int v15; // r0@5
  signed int v20; // r6@8
  Entity *v21; // r7@9
  void (__fastcall *v24)(Entity *, float *); // r2@10
  int v25; // r0@10
  int v26; // r1@10
  Entity *v27; // r0@10
  Entity *v28; // r6@14
  void (__fastcall *v31)(Entity *, float *); // r2@15
  Entity *v32; // r6@16
  void (__fastcall *v35)(Entity *, float *); // r2@17
  Entity *v36; // r6@18
  void (__fastcall *v39)(Entity *, float *); // r2@19
  Entity *v40; // r6@20
  void (__fastcall *v43)(Entity *, float *); // r2@21
  int result; // r0@22
  unsigned int *v45; // r2@25
  signed int v46; // r1@27
  unsigned int *v47; // r2@29
  signed int v48; // r1@31
  unsigned int *v49; // r2@33
  signed int v50; // r1@35
  float v51; // [sp+4h] [bp-4Ch]@10
  int v52; // [sp+8h] [bp-48h]@10
  int v53; // [sp+10h] [bp-40h]@5
  int v54; // [sp+14h] [bp-3Ch]@1
  int v55; // [sp+18h] [bp-38h]@2
  int v56; // [sp+1Ch] [bp-34h]@1
  int v57; // [sp+20h] [bp-30h]@1

  v1 = this;
  v2 = (Dimension *)j_Entity::getDimension(*((Entity **)this + 2));
  v3 = j_Dimension::fetchNearestPlayer(v2, *((Entity **)v1 + 2), *((float *)v1 + 4));
  v4 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 2));
  v5 = j_Level::getDifficulty(v4);
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v54, 93);
  v6 = *((_DWORD *)v1 + 2);
  v7 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 52))(*((_DWORD *)v1 + 2));
  j_EntityFactory::createSpawnedEntity((Entity **)&v57, (const void **)&v54, v6, v7, &Vec2::ZERO);
  v8 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v45 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    }
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v55 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v54 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v57 )
    *(_BYTE *)(v57 + 3424) = 0;
    v11 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
    v12 = j_BlockSource::getLevel(v11);
    v13 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v12 + 48);
    v14 = j_Entity::getRegion(*((Entity **)v1 + 2));
    v15 = v57;
    v57 = 0;
    v53 = v15;
    v13(v12, v14, &v53);
    if ( v53 )
      (*(void (**)(void))(*(_DWORD *)v53 + 32))();
    v53 = 0;
    if ( v5 )
      __asm { VMOV.F32        S16, #0.5 }
      v20 = 0;
      {
        v21 = j_SkeletonHorseTrapGoal::_createHorse((int)v1);
        if ( v21 )
        {
          _R5 = j_Random::nextGaussian((Random *)(*((_DWORD *)v1 + 2) + 552));
          _R0 = j_Random::nextGaussian((Random *)(*((_DWORD *)v1 + 2) + 552));
          __asm
          {
            VMOV            S2, R0
            VMOV            S0, R5
            VMUL.F32        S2, S2, S16
            VMUL.F32        S0, S0, S16
          }
          v24 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v21 + 276);
          __asm { VSTR            S0, [SP,#0x50+var_4C] }
          v52 = 0;
          __asm { VSTR            S2, [SP,#0x50+var_44] }
          v24(v21, &v51);
          v25 = (*(int (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v21 + 1268))(v21, v3, 0);
          v27 = j_SkeletonHorseTrapGoal::_createSkeleton(v25, v26, v21);
          if ( v27 )
            (*(void (**)(void))(*(_DWORD *)v27 + 144))();
        }
        ++v20;
      }
      while ( v20 < 4 );
      v28 = j_SkeletonHorseTrapGoal::_createHorse((int)v1);
      if ( v28 )
        _R5 = j_Random::nextGaussian((Random *)(*((_DWORD *)v1 + 2) + 552));
        _R0 = j_Random::nextGaussian((Random *)(*((_DWORD *)v1 + 2) + 552));
        __asm
          VMOV.F32        S4, #0.5
          VMOV            S2, R0
          VMOV            S0, R5
        v31 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v28 + 276);
          VMUL.F32        S0, S0, S4
          VMUL.F32        S2, S2, S4
          VSTR            S0, [SP,#0x50+var_4C]
        v52 = 0;
        __asm { VSTR            S2, [SP,#0x50+var_44] }
        v31(v28, &v51);
        (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v28 + 1268))(v28, v3, 0);
      v32 = j_SkeletonHorseTrapGoal::_createHorse((int)v1);
      if ( v32 )
        v35 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v32 + 276);
        v35(v32, &v51);
        (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v32 + 1268))(v32, v3, 0);
      v36 = j_SkeletonHorseTrapGoal::_createHorse((int)v1);
      if ( v36 )
        v39 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v36 + 276);
        v39(v36, &v51);
        (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v36 + 1268))(v36, v3, 0);
      v40 = j_SkeletonHorseTrapGoal::_createHorse((int)v1);
      if ( v40 )
        v43 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v40 + 276);
        v43(v40, &v51);
        (*(void (__fastcall **)(Entity *, int, _DWORD))(*(_DWORD *)v40 + 1268))(v40, v3, 0);
  (*(void (**)(void))(**((_DWORD **)v1 + 2) + 44))();
  result = v57;
    result = (*(int (**)(void))(*(_DWORD *)v57 + 32))();
  return result;
}


int __fastcall SkeletonHorseTrapGoal::_getClosestPlayer(SkeletonHorseTrapGoal *this)
{
  SkeletonHorseTrapGoal *v1; // r4@1
  Dimension *v2; // r0@1

  v1 = this;
  v2 = (Dimension *)j_Entity::getDimension(*((Entity **)this + 2));
  return j_j_j__ZN9Dimension18fetchNearestPlayerER6Entityf_0(v2, *((Entity **)v1 + 2), *((float *)v1 + 4));
}


void __fastcall SkeletonHorseTrapGoal::~SkeletonHorseTrapGoal(SkeletonHorseTrapGoal *this)
{
  SkeletonHorseTrapGoal::~SkeletonHorseTrapGoal(this);
}


Entity *__fastcall SkeletonHorseTrapGoal::_createSkeleton(int a1, int a2, Entity *a3)
{
  Entity *v3; // r5@1
  int v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  Entity *v11; // r4@8
  BlockSource *v12; // r0@8
  int v13; // r0@8
  Entity *v14; // r2@8
  void (*v15)(void); // r3@8
  int v16; // r0@11
  int v17; // r5@11
  int v18; // r0@11
  int v20; // r5@16
  unsigned int v21; // r0@16
  int v27; // r0@24
  int v28; // r5@24
  unsigned int v29; // r0@24
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  bool v45; // [sp+0h] [bp-D8h]@1
  char v46; // [sp+8h] [bp-D0h]@24
  int v47; // [sp+10h] [bp-C8h]@30
  void *v48; // [sp+2Ch] [bp-ACh]@28
  void *v49; // [sp+3Ch] [bp-9Ch]@26
  char v50; // [sp+50h] [bp-88h]@16
  int v51; // [sp+58h] [bp-80h]@22
  void *v52; // [sp+74h] [bp-64h]@20
  void *ptr; // [sp+84h] [bp-54h]@18
  Entity *v54; // [sp+9Ch] [bp-3Ch]@8
  int v55; // [sp+A4h] [bp-34h]@1
  int v56; // [sp+A8h] [bp-30h]@1
  int v57; // [sp+B0h] [bp-28h]@1
  int v58; // [sp+B4h] [bp-24h]@1
  int v59; // [sp+B8h] [bp-20h]@2
  int v60; // [sp+BCh] [bp-1Ch]@1
  Entity *v61; // [sp+C0h] [bp-18h]@1

  v3 = a3;
  sub_21E94B4((void **)&v57, "minecraft");
  j_EntityTypeToString((void **)&v56, 0x110B22u, 0);
  sub_21E94B4((void **)&v55, "minecraft:spring_trap");
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v58, &v57, &v56, &v55);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
  j_EntityFactory::createSpawnedEntity(&v61, (const void **)&v58, 0, v4, &Vec2::ZERO);
  v5 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
  {
    v33 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v59 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v58 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v55 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v56 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v57 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v61 )
    j_Entity::setPersistent(v61);
    v11 = v61;
    *((_DWORD *)v61 + 105) = 60;
    v12 = (BlockSource *)j_Entity::getRegion(v3);
    v13 = j_BlockSource::getLevel(v12);
    v14 = v61;
    v15 = *(void (**)(void))(*(_DWORD *)v13 + 44);
    v61 = 0;
    v54 = v14;
    v15();
    if ( v54 )
      (*(void (**)(void))(*(_DWORD *)v54 + 32))();
    v54 = 0;
    if ( v11 )
      v16 = (*(int (__fastcall **)(Entity *, _DWORD))(*(_DWORD *)v11 + 1028))(v11, 0);
      v17 = v16;
      v18 = *(_BYTE *)(v16 + 15);
      _ZF = v18 == 0;
      if ( v18 )
        _ZF = *(_DWORD *)v17 == 0;
      if ( _ZF || j_ItemInstance::isNull((ItemInstance *)v17) || !*(_BYTE *)(v17 + 14) )
      {
        j_ItemInstance::ItemInstance((ItemInstance *)&v50, Item::mHelmet_iron);
        v20 = j_Entity::getLevel(v11);
        v21 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 524))(v11);
        _R0 = j_Level::getSpecialMultiplier(v20, v21);
        __asm
        {
          VMOV.F32        S2, #5.0
          VMOV            S0, R0
          VADD.F32        S0, S0, S2
          VCVTR.S32.F32   S0, S0
          VMOV            R5, S0
        }
        if ( (signed int)_R5 <= 17 )
          _R5 = (ItemInstance *)((char *)_R5
                               + j_Random::_genRandInt32((Entity *)((char *)v11 + 552)) % (18 - (signed int)_R5));
        j_EnchantUtils::randomlyEnchant((EnchantUtils *)&v50, _R5, 0, 0, v45);
        (*(void (__fastcall **)(Entity *, _DWORD, char *))(*(_DWORD *)v11 + 1024))(v11, 0, &v50);
        if ( ptr )
          j_operator delete(ptr);
        if ( v52 )
          j_operator delete(v52);
        if ( v51 )
          (*(void (**)(void))(*(_DWORD *)v51 + 4))();
      }
      v27 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 908))(v11);
      j_ItemInstance::ItemInstance((ItemInstance *)&v46, v27);
      v28 = j_Entity::getLevel(v11);
      v29 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 524))(v11);
      _R0 = j_Level::getSpecialMultiplier(v28, v29);
      __asm
        VMOV.F32        S2, #5.0
        VMOV            S0, R0
        VADD.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R5, S0
      if ( (signed int)_R5 <= 17 )
        _R5 = (ItemInstance *)((char *)_R5
                             + j_Random::_genRandInt32((Entity *)((char *)v11 + 552)) % (18 - (signed int)_R5));
      j_EnchantUtils::randomlyEnchant((EnchantUtils *)&v46, _R5, 0, 0, v45);
      (*(void (__fastcall **)(Entity *, char *))(*(_DWORD *)v11 + 912))(v11, &v46);
      if ( v49 )
        j_operator delete(v49);
      if ( v48 )
        j_operator delete(v48);
      if ( v47 )
        (*(void (**)(void))(*(_DWORD *)v47 + 4))();
    if ( v61 )
      (*(void (**)(void))(*(_DWORD *)v61 + 32))();
  else
    v11 = 0;
  return v11;
}


void __fastcall SkeletonHorseTrapGoal::~SkeletonHorseTrapGoal(SkeletonHorseTrapGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall SkeletonHorseTrapGoal::canUse(SkeletonHorseTrapGoal *this)
{
  SkeletonHorseTrapGoal *v1; // r4@1
  int v2; // r1@1
  Entity *v3; // r0@1
  Dimension *v4; // r0@2
  int result; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 3) = v2 - 1;
  v3 = (Entity *)*((_DWORD *)this + 2);
  if ( v2 <= 0 )
  {
    (*(void (**)(void))(*(_DWORD *)v3 + 44))();
    result = 0;
  }
  else
    v4 = (Dimension *)j_Entity::getDimension(v3);
    result = j_Dimension::fetchNearestPlayer(v4, *((Entity **)v1 + 2), *((float *)v1 + 4)) != 0;
  return result;
}


Entity *__fastcall SkeletonHorseTrapGoal::_createHorse(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  Entity *v9; // r5@8
  BlockSource *v10; // r0@8
  int v11; // r0@8
  Entity *v12; // r2@8
  void (*v13)(void); // r3@8
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  Entity *v27; // [sp+4h] [bp-3Ch]@8
  int v28; // [sp+Ch] [bp-34h]@1
  int v29; // [sp+10h] [bp-30h]@1
  int v30; // [sp+18h] [bp-28h]@1
  int v31; // [sp+1Ch] [bp-24h]@1
  int v32; // [sp+20h] [bp-20h]@2
  int v33; // [sp+24h] [bp-1Ch]@1
  Entity *v34; // [sp+28h] [bp-18h]@1

  v1 = a1;
  sub_21E94B4((void **)&v30, "minecraft");
  j_EntityTypeToString((void **)&v29, 0x215B1Au, 0);
  sub_21E94B4((void **)&v28, "minecraft:spring_trap");
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v31, &v30, &v29, &v28);
  v2 = (*(int (**)(void))(**(_DWORD **)(v1 + 8) + 52))();
  j_EntityFactory::createSpawnedEntity(&v34, (const void **)&v31, 0, v2, &Vec2::ZERO);
  v3 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v33 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v28 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v29 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v30 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v34 )
    j_Entity::setPersistent(v34);
    v9 = v34;
    *((_DWORD *)v34 + 105) = 60;
    v10 = (BlockSource *)j_Entity::getRegion(*(Entity **)(v1 + 8));
    v11 = j_BlockSource::getLevel(v10);
    v12 = v34;
    v13 = *(void (**)(void))(*(_DWORD *)v11 + 44);
    v34 = 0;
    v27 = v12;
    v13();
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 32))();
    v27 = 0;
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 32))();
  else
    v9 = 0;
  return v9;
}


_QWORD *__fastcall SkeletonHorseTrapGoal::SkeletonHorseTrapGoal(Goal *a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  _QWORD *result; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  result = j_Goal::Goal(a1);
  *(_DWORD *)result = &off_271ADB4;
  *((_DWORD *)result + 2) = v6;
  *((_DWORD *)result + 3) = v5;
  *((_DWORD *)result + 4) = v4;
  return result;
}
