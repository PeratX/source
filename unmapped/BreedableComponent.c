

void __fastcall BreedableComponent::addAdditionalSaveData(BreedableComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  BreedableComponent *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "InLove");
  j_CompoundTag::putInt((int)v2, (const void **)&v11, *((_DWORD *)v3 + 2));
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  sub_21E94B4((void **)&v10, "LoveCause");
  j_CompoundTag::putInt64((int)v2, (const void **)&v10, *((_QWORD *)v3 + 3), *((_QWORD *)v3 + 3) >> 32);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


signed int __fastcall BreedableComponent::getInteraction(BreedableComponent *this, Player *a2, EntityInteraction *a3)
{
  Player *v3; // r6@1
  BreedableComponent *v4; // r5@1
  EntityInteraction *v5; // r4@1
  _BYTE *v6; // r0@1
  int v7; // r7@1
  int v8; // r0@1
  bool v9; // zf@1
  int v10; // r2@8
  int v11; // r0@11
  int v12; // r12@11
  unsigned int v13; // r1@11
  int v14; // r3@12
  int v15; // r2@13
  void *v16; // r5@25
  void *v17; // r0@34
  unsigned int *v19; // r2@37
  signed int v20; // r1@39
  int v21; // [sp+4h] [bp-84h]@34
  Player *v22; // [sp+8h] [bp-80h]@25
  int v23; // [sp+10h] [bp-78h]@25
  int v24; // [sp+18h] [bp-70h]@31
  void *v25; // [sp+34h] [bp-54h]@29
  void *ptr; // [sp+44h] [bp-44h]@27
  BreedableComponent *v27; // [sp+58h] [bp-30h]@25
  void *v28; // [sp+60h] [bp-28h]@25
  void (*v29)(void); // [sp+68h] [bp-20h]@25
  int (__fastcall *v30)(Player ***); // [sp+6Ch] [bp-1Ch]@25

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = j_Player::getSelectedItem(a2);
  v7 = (int)v6;
  v8 = v6[15];
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9
    || j_ItemInstance::isNull((ItemInstance *)v7)
    || !*(_BYTE *)(v7 + 14)
    || j_Entity::getStatusFlag(*((_DWORD *)v4 + 1), 7)
    || *((_DWORD *)v4 + 3) > 0 )
  {
    return 0;
  }
  v10 = *(_DWORD *)v4;
  if ( !*(_BYTE *)(*(_DWORD *)v4 + 4) )
    goto LABEL_11;
  if ( j_Entity::isTame(*((Entity **)v4 + 1)) != 1 )
LABEL_11:
  v11 = *(_DWORD *)(v10 + 28);
  v12 = v10 + 24;
  v13 = *(_DWORD *)v7;
  if ( v11 )
    v14 = v10 + 24;
    do
    {
      v15 = v11;
      while ( *(_DWORD *)(v15 + 16) < v13 )
      {
        v15 = *(_DWORD *)(v15 + 12);
        if ( !v15 )
        {
          v15 = v14;
          goto LABEL_20;
        }
      }
      v11 = *(_DWORD *)(v15 + 8);
      v14 = v15;
    }
    while ( v11 );
  else
    v15 = v10 + 24;
LABEL_20:
  if ( v15 == v12 )
  if ( v13 < *(_DWORD *)(v15 + 16) )
    v15 = v12;
  if ( j_EntityInteraction::shouldCapture(v5) == 1 )
    v22 = v3;
    j_ItemInstance::ItemInstance((ItemInstance *)&v23, v7);
    v27 = v4;
    v29 = 0;
    v16 = j_operator new(0x58u);
    *(_DWORD *)v16 = v3;
    j_ItemInstance::ItemInstance((ItemInstance *)((char *)v16 + 8), (int)&v23);
    *((_DWORD *)v16 + 20) = v27;
    v28 = v16;
    v29 = (void (*)(void))sub_1A62810;
    v30 = sub_1A62558;
    j_EntityInteraction::capture((int)v5, (int)&v28);
    if ( v29 )
      v29();
    if ( ptr )
      j_operator delete(ptr);
    if ( v25 )
      j_operator delete(v25);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
    v24 = 0;
  sub_21E94B4((void **)&v21, "action.interact.feed");
  j_EntityInteraction::setInteractText();
  v17 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  return 1;
}


signed int __fastcall BreedableComponent::getLoveCause(BreedableComponent *this)
{
  BreedableComponent *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r4@1
  signed int result; // r0@2

  v1 = this;
  v2 = j_Entity::getLevel(*((Entity **)this + 1));
  v3 = j_Level::fetchEntity(v2, 0, *((_QWORD *)v1 + 3), *((_QWORD *)v1 + 3) >> 32, 0);
  v4 = v3;
  if ( v3 )
  {
    result = j_Entity::hasCategory(v3, 1);
    if ( result )
      result = v4;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BreedableComponent::_clientLoveCheck(BreedableComponent *this)
{
  BreedableComponent *v1; // r4@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  signed int result; // r0@2
  int v5; // r0@3
  bool v6; // zf@3

  v1 = this;
  v2 = (BlockSource *)j_Entity::getRegion(*((Entity **)this + 1));
  v3 = (Level *)j_BlockSource::getLevel(v2);
  if ( j_Level::isClientSide(v3) == 1 )
  {
    v5 = j_Entity::getStatusFlag(*((_DWORD *)v1 + 1), 7);
    v6 = v5 == 1;
    if ( v5 == 1 )
      v6 = *((_DWORD *)v1 + 2) == 0;
    if ( v6 )
    {
      j_BreedableComponent::setInLove(v1, 0);
      result = 1;
    }
    else
      result = 0;
      *((_DWORD *)v1 + 2) = 0;
      *((_DWORD *)v1 + 3) = *((_DWORD *)v1 + 4);
  }
  else
    result = 0;
  return result;
}


int __fastcall BreedableComponent::initFromDefinition(int result)
{
  __asm { VMOV.F32        S0, #20.0 }
  _R1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 4) + 48) + 296);
  *(_BYTE *)(result + 20) = *(_BYTE *)(_R1 + 16);
  __asm
  {
    VLDR            S2, [R1,#0xC]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0,#0x10]
  }
  return result;
}


int __fastcall BreedableComponent::tick(BreedableComponent *this)
{
  BreedableComponent *v1; // r4@1
  int v2; // r0@3
  BlockSource *v3; // r0@4
  Level *v4; // r0@4
  int v5; // r0@5
  bool v6; // zf@5
  BlockSource *v7; // r0@9
  Level *v8; // r0@9
  int v9; // r0@10
  int v10; // r2@10
  int v11; // r0@12
  int v12; // r0@13
  int result; // r0@16

  v1 = this;
  if ( j_Entity::getAge(*((Entity **)this + 1)) )
  {
    *((_DWORD *)v1 + 2) = 0;
    *((_DWORD *)v1 + 3) = *((_DWORD *)v1 + 4);
  }
  else
    v2 = *((_DWORD *)v1 + 2);
    if ( v2 > 0 )
      goto LABEL_12;
  v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
  v4 = (Level *)j_BlockSource::getLevel(v3);
  if ( j_Level::isClientSide(v4) == 1 )
    v5 = j_Entity::getStatusFlag(*((_DWORD *)v1 + 1), 7);
    v6 = v5 == 1;
    if ( v5 == 1 )
      v6 = *((_DWORD *)v1 + 2) == 0;
    if ( !v6 )
    {
      *((_DWORD *)v1 + 2) = 0;
      *((_DWORD *)v1 + 3) = *((_DWORD *)v1 + 4);
      goto LABEL_9;
    }
    j_BreedableComponent::setInLove(v1, 0);
LABEL_12:
    v11 = v2 - 1;
    *((_DWORD *)v1 + 2) = v11;
    if ( !(v11 & 0xF) )
      v12 = j_Entity::getLevel(*((Entity **)v1 + 1));
      j_Level::broadcastEntityEvent(v12, *((_DWORD *)v1 + 1), 21, 0);
    v9 = *((_DWORD *)v1 + 1);
    v10 = 1;
    goto LABEL_15;
LABEL_9:
  v7 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 1));
  v8 = (Level *)j_BlockSource::getLevel(v7);
  if ( j_Level::isClientSide(v8) )
    goto LABEL_16;
  v9 = *((_DWORD *)v1 + 1);
  v10 = 0;
LABEL_15:
  j_Entity::setStatusFlag(v9, 7, v10);
LABEL_16:
  result = *((_DWORD *)v1 + 3);
  if ( result >= 1 )
    j_Entity::setStatusFlag(*((_DWORD *)v1 + 1), 7, 0);
    result = *((_DWORD *)v1 + 3) - 1;
    *((_DWORD *)v1 + 3) = result;
  return result;
}


BreedableType *__fastcall BreedableComponent::_handleMate(BreedableComponent *this, Mob *a2)
{
  BreedableComponent *v2; // r9@1
  Entity *v3; // r6@1 OVERLAPPED
  int v4; // r0@2
  int v5; // r0@3
  int v6; // r1@3
  int v7; // r0@3
  signed int v8; // r5@3 OVERLAPPED
  int v9; // r0@6
  int v10; // r4@6
  int v11; // r0@6
  int v12; // r1@6
  int v13; // r0@6
  int v14; // r4@6
  Level *v15; // r0@9
  char *v16; // r0@9
  Random *v21; // r4@9
  signed int v23; // r5@9
  int v33; // r0@10
  BlockSource *v34; // r4@11
  int v35; // r2@11
  const Vec3 *v36; // r0@11
  void *v37; // r0@12
  void *v38; // r0@13
  void *v39; // r0@14
  int v40; // r6@15
  int v41; // r4@15
  unsigned int *v42; // r1@19
  signed int v43; // r0@21
  unsigned int v44; // r0@26
  char *v45; // r7@26
  char *v46; // r5@26
  size_t v47; // r2@26
  signed int v48; // r8@27
  void *v49; // r0@33
  void *v50; // r0@34
  void *v51; // r0@35
  int v52; // r4@36
  void *v53; // r0@37
  int v54; // r2@41
  unsigned int *v55; // r2@42
  signed int v56; // r1@44
  unsigned int *v57; // r2@46
  signed int v58; // r1@48
  unsigned int *v59; // r2@50
  signed int v60; // r1@52
  void (__fastcall *v61)(Entity *, _DWORD, int, int); // r4@57
  __int64 v62; // r0@57
  int v63; // r4@58
  int (__fastcall *v64)(int, int, int *); // r5@58
  int v65; // r1@58
  int v66; // r0@58
  int v67; // r4@58
  BaseAttributeMap *v68; // r10@61
  int v69; // r11@61
  unsigned __int64 *v70; // r0@64
  AttributeInstance *v71; // r8@64
  unsigned __int64 *v72; // r0@64
  AttributeInstance *v73; // r5@64
  int v86; // r1@73
  unsigned int *v87; // r2@74
  signed int v88; // r1@76
  unsigned int *v89; // r2@78
  signed int v90; // r1@80
  unsigned int *v91; // r2@82
  signed int v92; // r1@84
  unsigned int *v93; // r2@98
  signed int v94; // r1@100
  int v97; // r1@106
  int v100; // r1@111
  unsigned int v101; // r4@114
  int v102; // r1@115
  int v103; // r4@118
  double v106; // r0@122
  unsigned int v107; // r0@122
  int v108; // r5@124
  int *v109; // r4@124
  int v110; // r4@125
  char v111; // r0@125
  ClassID *v112; // r0@126
  __int64 v113; // kr08_8@128
  int v114; // r0@128
  void *v115; // r0@128
  int v116; // r1@129
  int v117; // r7@129
  unsigned int *v118; // r2@131
  signed int v119; // r1@133
  void *v120; // r6@139
  int v121; // r1@139
  void *v122; // r0@139
  void *v123; // r0@146
  void *v124; // r0@147
  void *v125; // r0@148
  unsigned int *v127; // r2@169
  signed int v128; // r1@171
  unsigned int *v129; // r2@173
  signed int v130; // r1@175
  unsigned int *v131; // r2@177
  signed int v132; // r1@179
  unsigned int *v133; // r2@181
  signed int v134; // r1@183
  Entity *v135; // [sp+14h] [bp-19Ch]@39
  __int64 v136; // [sp+18h] [bp-198h]@9
  void **v137; // [sp+20h] [bp-190h]@146
  int v138; // [sp+58h] [bp-158h]@148
  int v139; // [sp+5Ch] [bp-154h]@147
  int v140; // [sp+60h] [bp-150h]@146
  int v141; // [sp+6Ch] [bp-144h]@125
  void *ptr; // [sp+70h] [bp-140h]@125
  unsigned int v143; // [sp+74h] [bp-13Ch]@122
  int v144; // [sp+78h] [bp-138h]@122
  int v145; // [sp+7Ch] [bp-134h]@122
  signed int v146; // [sp+80h] [bp-130h]@122
  int v147; // [sp+84h] [bp-12Ch]@122
  int v148; // [sp+88h] [bp-128h]@142
  int v149; // [sp+8Ch] [bp-124h]@58
  int v150; // [sp+90h] [bp-120h]@57
  int v151; // [sp+94h] [bp-11Ch]@57
  int v152; // [sp+A0h] [bp-110h]@37
  int v153; // [sp+A4h] [bp-10Ch]@33
  int v154; // [sp+A8h] [bp-108h]@34
  int v155; // [sp+ACh] [bp-104h]@33
  Entity *v156; // [sp+B0h] [bp-100h]@33
  void *s2; // [sp+B4h] [bp-FCh]@26
  void *v158; // [sp+B8h] [bp-F8h]@15
  void *v159; // [sp+BCh] [bp-F4h]@15
  void *v160; // [sp+C0h] [bp-F0h]@15
  void *v161; // [sp+C4h] [bp-ECh]@15
  void **v162; // [sp+C8h] [bp-E8h]@15
  int v163; // [sp+CCh] [bp-E4h]@15
  int v164; // [sp+D0h] [bp-E0h]@15
  int v165; // [sp+D4h] [bp-DCh]@15
  int v166; // [sp+D8h] [bp-D8h]@15
  int v167; // [sp+DCh] [bp-D4h]@15
  int v168; // [sp+E0h] [bp-D0h]@15
  int v169; // [sp+E4h] [bp-CCh]@15
  void **v170; // [sp+E8h] [bp-C8h]@12
  int v171; // [sp+120h] [bp-90h]@14
  int v172; // [sp+124h] [bp-8Ch]@13
  int v173; // [sp+128h] [bp-88h]@12
  float v174; // [sp+13Ch] [bp-74h]@10

  v2 = this;
  *((_DWORD *)this + 2) = 0;
  v3 = a2;
  *((_DWORD *)this + 3) = *((_DWORD *)this + 4);
  if ( j_Entity::getBreedableComponent(a2) )
  {
    v4 = j_Entity::getBreedableComponent(v3);
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 12) = *(_DWORD *)(v4 + 16);
  }
  v5 = j_Entity::getLevel(*((Entity **)v2 + 1));
  v7 = j_Level::fetchEntity(v5, v6, *((_QWORD *)v2 + 3), *((_QWORD *)v2 + 3) >> 32, 0);
  v8 = v7;
  if ( !v7 || !j_Entity::hasCategory(v7, 1) )
    v8 = 0;
    if ( j_Entity::getBreedableComponent(v3) )
    {
      v9 = j_Entity::getBreedableComponent(v3);
      v10 = v9;
      v11 = j_Entity::getLevel(*(Entity **)(v9 + 4));
      v13 = j_Level::fetchEntity(v11, v12, *(_QWORD *)(v10 + 24), *(_QWORD *)(v10 + 24) >> 32, 0);
      v14 = v13;
      if ( v13 )
      {
        v8 = j_Entity::hasCategory(v13, 1);
        if ( v8 )
          v8 = v14;
      }
    }
  v136 = *(_QWORD *)(&v3 - 1);
  v15 = (Level *)j_Entity::getLevel(*((Entity **)v2 + 1));
  v16 = j_Level::getRandom(v15);
  __asm { VMOV.F32        S21, #0.5 }
  v21 = (Random *)v16;
  _R0 = (Entity *)*((_DWORD *)v2 + 1);
  __asm
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =0.02
  v23 = 7;
  do
    __asm { VLDR            S22, [R0,#0x48] }
    _R6 = j_Random::_genRandInt32(v21);
    _R0 = *((_DWORD *)v2 + 1);
    __asm
      VLDR            S24, [R0,#0x4C]
      VLDR            S26, [R0,#0x130]
    _R7 = j_Random::_genRandInt32(v21);
      VMOV            S0, R6
      VLDR            S28, [R0,#0x50]
      VLDR            S30, [R0,#0x134]
      VCVT.F64.U32    D9, S0
    _R0 = j_Random::_genRandInt32(v21);
      VMOV            S0, R0
      VMOV            S2, R7
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
      VMUL.F64        D0, D0, D8
      VMUL.F64        D2, D9, D8
      VMUL.F64        D1, D1, D8
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VADD.F32        S4, S4, S4
      VLDR            S8, [R0,#0x130]
      VCVT.F32.F64    S2, D1
      VADD.F32        S0, S0, S0
      VSUB.F32        S6, S22, S26
      VMUL.F32        S4, S26, S4
      VADD.F32        S10, S24, S21
      VMUL.F32        S2, S2, S30
      VSUB.F32        S12, S28, S8
      VMUL.F32        S0, S8, S0
      VADD.F32        S4, S6, S4
      VADD.F32        S2, S10, S2
      VADD.F32        S0, S12, S0
      VSTR            S4, [SP,#0x1B0+var_74]
      VSTR            S2, [SP,#0x1B0+var_70]
      VSTR            S0, [SP,#0x1B0+var_6C]
    _R0 = j_Random::nextGaussian(v21);
      VMUL.F32        S18, S0, S20
    __asm { VMOV            S22, R0 }
      VSTR            S18, [SP,#0x1B0+var_80]
      VMUL.F32        S2, S22, S20
      VMUL.F32        S0, S0, S20
      VSTR            S2, [SP,#0x1B0+var_7C]
      VSTR            S0, [SP,#0x1B0+var_78]
    v33 = j_Entity::getLevel(*((Entity **)v2 + 1));
    j_Level::addParticle(v33, 17, (int)&v174);
    _R0 = (Entity *)*((_DWORD *)v2 + 1);
    --v23;
  while ( v23 );
  v34 = (BlockSource *)j_Entity::getRegion(_R0);
  v36 = (const Vec3 *)(*(int (__cdecl **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 1) + 52))(
                        *((_DWORD *)v2 + 1),
                        *(_DWORD *)(**((_DWORD **)v2 + 1) + 52),
                        v35);
  j_ExperienceOrb::spawnOrbs(v34, v36, 1, 7, 2, 0);
  (*(void (**)(void))(**((_DWORD **)v2 + 1) + 364))();
  if ( (_DWORD)v136 )
    j_EventPacket::EventPacket((int)&v170, (Entity *)v136, *((Entity **)v2 + 1), 1);
    (*(void (__fastcall **)(_DWORD, void ***))(*(_DWORD *)v136 + 1448))(v136, &v170);
    v170 = &off_26E9D30;
    v37 = (void *)(v173 - 12);
    if ( (int *)(v173 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v173 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      else
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    v38 = (void *)(v172 - 12);
    if ( (int *)(v172 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v172 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v171 - 12);
    if ( (int *)(v171 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v171 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
  v158 = &unk_28898CC;
  v159 = &unk_28898CC;
  v160 = &unk_28898CC;
  v161 = &unk_28898CC;
  v169 = 0;
  v167 = 0;
  v168 = 0;
  v165 = 0;
  v166 = 0;
  v163 = 0;
  v164 = 0;
  v162 = &off_26F1930;
  v40 = *(_DWORD *)v2;
  v41 = *(_QWORD *)(*(_DWORD *)v2 + 44);
  if ( v41 != *(_QWORD *)(*(_DWORD *)v2 + 44) >> 32 )
    while ( 1 )
      v44 = (*(int (**)(void))(*(_DWORD *)HIDWORD(v136) + 488))();
      j_EntityTypeToString(&s2, v44, 1);
      v45 = (char *)s2;
      v46 = (char *)s2 - 12;
      v47 = *(_DWORD *)(*(_DWORD *)v41 - 12);
      if ( v47 == *((_DWORD *)s2 - 3) )
        v48 = 0;
        if ( !j_memcmp_0(*(const void **)v41, s2, v47) )
          v48 = 1;
      if ( (int *)v46 != &dword_28898C0 )
        v42 = (unsigned int *)(v45 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
        }
        else
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v46);
      if ( v48 == 1 )
        break;
      v41 += 48;
      if ( v41 == *(_DWORD *)(v40 + 48) )
        return j_BreedableType::~BreedableType((BreedableType *)&v158);
    EntityInteraction::setInteractText((int *)&v158, (int *)v41);
    EntityInteraction::setInteractText((int *)&v159, (int *)(v41 + 4));
    EntityInteraction::setInteractText((int *)&v160, (int *)(v41 + 8));
    EntityInteraction::setInteractText((int *)&v161, (int *)(v41 + 12));
    v163 = *(_DWORD *)(v41 + 20);
    j_std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::operator=(
      (int)&v164,
      (__int64 *)(v41 + 24));
    j_std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::operator=(
      (int)&v167,
      (__int64 *)(v41 + 36));
    j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v153, (int *)&v159);
    j_EntityFactory::createBornEntity(
      (EntityFactory *)&v156,
      (const EntityDefinitionIdentifier *)&v153,
      *((Entity **)v2 + 1));
    v49 = (void *)(v155 - 12);
    if ( (int *)(v155 - 12) != &dword_28898C0 )
      v87 = (unsigned int *)(v155 - 4);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 <= 0 )
        j_j_j_j__ZdlPv_9(v49);
    v50 = (void *)(v154 - 12);
    if ( (int *)(v154 - 12) != &dword_28898C0 )
      v89 = (unsigned int *)(v154 - 4);
          v90 = __ldrex(v89);
        while ( __strex(v90 - 1, v89) );
        v90 = (*v89)--;
      if ( v90 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
    v51 = (void *)(v153 - 12);
    if ( (int *)(v153 - 12) != &dword_28898C0 )
      v91 = (unsigned int *)(v153 - 4);
          v92 = __ldrex(v91);
        while ( __strex(v92 - 1, v91) );
        v92 = (*v91)--;
      if ( v92 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = (int)v156;
    if ( v156 )
      sub_21E94B4((void **)&v152, "parent");
      j_Entity::pushInitialParameter<Mob>(v52, &v152, SHIDWORD(v136));
      v53 = (void *)(v152 - 12);
      if ( (int *)(v152 - 12) != &dword_28898C0 )
        v93 = (unsigned int *)(v152 - 4);
            v94 = __ldrex(v93);
          while ( __strex(v94 - 1, v93) );
          v94 = (*v93)--;
        if ( v94 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
      if ( j_Entity::hasCategory((int)v156, 2) == 1 )
        v135 = v156;
        if ( !v156 )
          return j_BreedableType::~BreedableType((BreedableType *)&v158);
        if ( *(_BYTE *)(*(_DWORD *)v2 + 16) )
          v54 = j_Entity::isTame(*((Entity **)v2 + 1));
          v54 = 0;
        j_Entity::setStatusFlag((int)v135, 27, v54);
        j_Entity::setPersistent(v135);
        if ( j_Entity::isTame(v135) == 1 && *(_BYTE *)(*(_DWORD *)v2 + 16) )
          v61 = *(void (__fastcall **)(Entity *, _DWORD, int, int))(*(_DWORD *)v135 + 348);
          v62 = j_Entity::getOwnerId((Entity *)&v150, *((_DWORD *)v2 + 1));
          v61(v135, HIDWORD(v62), v150, v151);
        v63 = j_Entity::getLevel(*((Entity **)v2 + 1));
        v64 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v63 + 44);
        v65 = j_Entity::getRegion(*((Entity **)v2 + 1));
        v66 = (int)v156;
        v156 = 0;
        v149 = v66;
        v67 = v64(v63, v65, &v149);
        if ( v149 )
          (*(void (**)(void))(*(_DWORD *)v149 + 32))();
        v149 = 0;
        if ( v67 )
          v68 = (BaseAttributeMap *)j_Mob::getAttributes(v135);
          v69 = j_BaseAttributeMap::begin(v68);
          __asm { VLDR            S20, =0.33333 }
          while ( v69 != j_BaseAttributeMap::end(v68) )
          {
            v70 = (unsigned __int64 *)j_Mob::getAttributes(*((Mob **)v2 + 1));
            v71 = (AttributeInstance *)j_BaseAttributeMap::getInstance(v70, (int **)(v69 + 4));
            v72 = (unsigned __int64 *)j_Mob::getAttributes((Mob *)HIDWORD(v136));
            v73 = (AttributeInstance *)j_BaseAttributeMap::getInstance(v72, (int **)(v69 + 4));
            if ( j_AttributeInstance::getAttribute(v71) && j_AttributeInstance::getAttribute(v73) )
            {
              _R7 = j_AttributeInstance::getCurrentValue(v71);
              _R4 = j_AttributeInstance::getCurrentValue(v73);
              _R0 = j_AttributeInstance::getCurrentValue((AttributeInstance *)(v69 + 8));
              __asm
              {
                VMOV            S0, R7
                VMOV            S2, R4
                VMOV            S4, R0
                VADD.F32        S0, S2, S0
                VADD.F32        S0, S0, S4
                VMUL.F32        S0, S0, S20
                VMOV            R1, S0
              }
              j_AttributeInstance::setDefaultValue((AttributeInstance *)(v69 + 8), _R1, 2);
            }
            else if ( j_AttributeInstance::getAttribute(v71) )
              _R4 = j_AttributeInstance::getCurrentValue(v71);
                VMOV            S0, R4
                VMOV            S2, R0
                VMUL.F32        S0, S0, S21
            else if ( j_AttributeInstance::getAttribute(v73) )
            v69 = *(_DWORD *)v69;
          }
          _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 1) + 552));
          __asm
            VMOV            S0, R0
            VCVT.F64.U32    D0, S0
          _R0 = *(_DWORD *)v2;
            VMUL.F64        D0, D0, D8
            VCVT.F32.F64    S0, D0
            VLDR            S2, [R0,#0x38]
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            if ( j_Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 1) + 552)) & 0x8000000 )
              v86 = j_Entity::getVariant(*((Entity **)v2 + 1));
            else
              v86 = j_Entity::getVariant((Entity *)HIDWORD(v136));
            j_Entity::setVariant(v135, v86);
            VLDR            S2, [R0,#0x3C]
              v97 = j_Entity::getMarkVariant(*((Entity **)v2 + 1));
              v97 = j_Entity::getMarkVariant((Entity *)HIDWORD(v136));
            j_Entity::setMarkVariant(v135, v97);
            VLDR            S2, [R0,#0x40]
              v100 = j_Entity::getColor(*((Entity **)v2 + 1));
              v100 = j_Entity::getColor((Entity *)HIDWORD(v136));
            j_Entity::setColor((int)v135, v100);
          v101 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 1) + 552)) & 0x8000000;
          if ( v101 )
            v102 = j_Entity::getStrengthMax(*((Entity **)v2 + 1));
          else
            v102 = j_Entity::getStrengthMax((Entity *)HIDWORD(v136));
          j_Entity::setStrengthMax(v135, v102);
            v103 = j_Entity::getStrength(*((Entity **)v2 + 1));
            v103 = j_Entity::getStrength((Entity *)HIDWORD(v136));
            VCVTR.S32.F32   S0, S0
            VMOV            R0, S0
          if ( _R0 < 1 )
            ++v103;
          j_Entity::setStrength(v135, v103);
          v144 = 0;
          v145 = 0;
          v146 = 1065353216;
          v147 = 0;
          HIDWORD(v106) = 10;
          LODWORD(v106) = &v146;
          v107 = sub_21E6254(v106);
          v143 = v107;
          if ( v107 == 1 )
            v109 = &v148;
            v148 = 0;
            if ( v107 >= 0x40000000 )
              sub_21E57F4();
            v108 = 4 * v107;
            v109 = (int *)j_operator new(4 * v107);
            j___aeabi_memclr4_0((int)v109, v108);
          ptr = v109;
          j_Entity::initParams(v135, (VariantParameterList *)&ptr);
          sub_21E94B4((void **)&v141, "other");
          v110 = *((_DWORD *)v2 + 1);
          v111 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
          if ( !(v111 & 1) )
            v112 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
            if ( v112 )
              ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v112);
              j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
          v113 = ClassID::getID<Mob>(void)::id;
          v114 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (unsigned __int64 *)&ptr,
                   (int **)&v141);
          *(_QWORD *)v114 = v113;
          *(_DWORD *)(v114 + 8) = v110;
          v115 = (void *)(v141 - 12);
          if ( (int *)(v141 - 12) != &dword_28898C0 )
            v127 = (unsigned int *)(v141 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v128 = __ldrex(v127);
              while ( __strex(v128 - 1, v127) );
              v128 = (*v127)--;
            if ( v128 <= 0 )
              j_j_j_j__ZdlPv_9(v115);
          j_EntityDefinitionDescriptor::executeTrigger(
            *((EntityDefinitionDescriptor **)v135 + 12),
            v135,
            (const DefinitionTrigger *)&v160,
            (const VariantParameterList *)&ptr);
          v116 = *((_DWORD *)v2 + 1);
          (*(void (**)(void))(*(_DWORD *)v135 + 1084))();
          v117 = v144;
          while ( v117 )
            v120 = (void *)v117;
            v121 = *(_DWORD *)(v117 + 8);
            v117 = *(_DWORD *)v117;
            v122 = (void *)(v121 - 12);
            if ( (int *)(v121 - 12) != &dword_28898C0 )
              v118 = (unsigned int *)(v121 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v119 = __ldrex(v118);
                while ( __strex(v119 - 1, v118) );
              else
                v119 = (*v118)--;
              if ( v119 <= 0 )
                j_j_j_j__ZdlPv_9(v122);
            j_operator delete(v120);
          j___aeabi_memclr4_0((int)ptr, 4 * v143);
          if ( ptr && &v148 != ptr )
            j_operator delete(ptr);
        if ( (_DWORD)v136 && (*(int (**)(void))(*(_DWORD *)v135 + 488))() == 2118425 )
          j_EventPacket::EventPacket((int)&v137, (Entity *)v136, 60, 1);
          (*(void (**)(void))(*(_DWORD *)v136 + 1448))();
          v137 = &off_26E9D30;
          v123 = (void *)(v140 - 12);
          if ( (int *)(v140 - 12) != &dword_28898C0 )
            v129 = (unsigned int *)(v140 - 4);
                v130 = __ldrex(v129);
              while ( __strex(v130 - 1, v129) );
              v130 = (*v129)--;
            if ( v130 <= 0 )
              j_j_j_j__ZdlPv_9(v123);
          v124 = (void *)(v139 - 12);
          if ( (int *)(v139 - 12) != &dword_28898C0 )
            v131 = (unsigned int *)(v139 - 4);
                v132 = __ldrex(v131);
              while ( __strex(v132 - 1, v131) );
              v132 = (*v131)--;
            if ( v132 <= 0 )
              j_j_j_j__ZdlPv_9(v124);
          v125 = (void *)(v138 - 12);
          if ( (int *)(v138 - 12) != &dword_28898C0 )
            v133 = (unsigned int *)(v138 - 4);
                v134 = __ldrex(v133);
              while ( __strex(v134 - 1, v133) );
              v134 = (*v133)--;
            if ( v134 <= 0 )
              j_j_j_j__ZdlPv_9(v125);
      if ( v156 )
        (*(void (**)(void))(*(_DWORD *)v156 + 32))();
  return j_BreedableType::~BreedableType((BreedableType *)&v158);
}


int __fastcall BreedableComponent::resetLove(int result)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = *(_DWORD *)(result + 16);
  return result;
}


int __fastcall BreedableComponent::BreedableComponent(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(*(_DWORD *)(a2 + 48) + 296);
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 20) = 1;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


unsigned int __fastcall BreedableComponent::mate(BreedableComponent *this, Mob *a2)
{
  BreedableComponent *v2; // r5@1
  Mob *v3; // r4@1
  unsigned int result; // r0@1
  signed int v9; // r6@2

  v2 = this;
  v3 = a2;
  result = j_Entity::isInLove(*((Entity **)this + 1));
  if ( result == 1 )
  {
    __asm { VLDR            D8, =2.32830644e-10 }
    v9 = 0;
    do
    {
      j_BreedableComponent::_handleMate(v2, v3);
      _R0 = j_Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 1) + 552));
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
      }
      result = *(_DWORD *)v2;
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VLDR            S2, [R0,#8]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        break;
      ++v9;
    }
    while ( v9 < 16 );
  }
  return result;
}


unsigned int __fastcall BreedableComponent::canMate(BreedableComponent *this, const Entity *a2)
{
  BreedableComponent *v2; // r5@1
  const Entity *v3; // r4@1
  int v4; // r0@5
  bool v5; // zf@5
  int v6; // r10@8
  unsigned int *v7; // r6@8
  unsigned int *v8; // r1@12
  signed int v9; // r0@14
  int v10; // r11@19
  size_t v11; // r2@19
  char *v12; // r7@19
  signed int v13; // r9@20
  signed int v14; // r6@11
  char *v15; // r0@28
  int v16; // r7@30
  unsigned int v17; // r0@30
  unsigned int *v19; // r2@40
  signed int v20; // r1@42
  char *v21; // [sp+8h] [bp-38h]@19
  const void *v22; // [sp+Ch] [bp-34h]@8

  v2 = this;
  v3 = a2;
  if ( *((const Entity **)this + 1) == a2
    || *((_DWORD *)this + 3) > 0
    || !j_Entity::getBreedableComponent(a2)
    || *(_DWORD *)(j_Entity::getBreedableComponent(v3) + 12) > 0 )
  {
    return 0;
  }
  v4 = *((_DWORD *)v3 + 12);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 140) == 0;
  if ( v5 )
  v6 = *(_DWORD *)v2;
  j_Util::toLower((void **)&v22, *(_DWORD *)(*(_DWORD *)(v4 + 32) - 12), *(_DWORD *)(v4 + 32));
  v7 = (unsigned int *)*(_QWORD *)(v6 + 44);
  if ( v7 == (unsigned int *)(*(_QWORD *)(v6 + 44) >> 32) )
    v14 = 0;
  else
    while ( 1 )
    {
      j_Util::toLower((void **)&v21, *(_DWORD *)(*v7 - 12), *v7);
      v10 = (int)v21;
      v12 = v21 - 12;
      v11 = *((_DWORD *)v21 - 3);
      if ( v11 == *((_DWORD *)v22 - 3) )
      {
        v13 = 0;
        if ( !j_memcmp_0(v21, v22, v11) )
          v13 = 1;
      }
      else
      if ( (int *)v12 != &dword_28898C0 )
        v8 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      if ( v13 == 1 )
        break;
      v7 += 12;
      if ( v7 == *(unsigned int **)(v6 + 48) )
        v14 = 0;
        goto LABEL_28;
    }
    v14 = 1;
LABEL_28:
  v15 = (char *)v22 - 12;
  if ( (int *)((char *)v22 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)((char *)v22 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  if ( !v14 )
  v16 = *(_BYTE *)(*(_QWORD *)v2 + 4);
  v17 = j_Entity::isTame((Entity *)(*(_QWORD *)v2 >> 32));
  if ( v16 )
    if ( v17 != 1 || !j_Entity::isTame(v3) )
      return 0;
  else if ( v17 != j_Entity::isTame(v3) )
  if ( (j_Entity::isSitting(v3) != 1 || *(_BYTE *)(*(_DWORD *)(*((_DWORD *)v3 + 12) + 296) + 17))
    && j_Entity::isInLove(*((Entity **)v2 + 1)) == 1 )
    return j_Entity::isInLove(v3);
  return 0;
}


int __fastcall BreedableComponent::setInLove(BreedableComponent *this, const Player *a2)
{
  BreedableComponent *v2; // r4@1
  signed __int64 v3; // r0@2
  signed int v8; // r6@4
  Random *v9; // r7@5
  int v13; // r7@5
  int v14; // r2@6
  char v16; // [sp+10h] [bp-50h]@5

  v2 = this;
  *((_DWORD *)this + 2) = 600;
  if ( a2 )
    v3 = *(_QWORD *)j_Entity::getUniqueID(a2);
  else
    v3 = -1LL;
  __asm { VLDR            S16, =0.02 }
  v8 = 7;
  *((_QWORD *)v2 + 3) = v3;
  do
  {
    v9 = (Random *)(*((_DWORD *)v2 + 1) + 552);
    _R0 = j_Random::nextGaussian(v9);
    __asm
    {
      VMOV            S0, R0
      VMUL.F32        S18, S0, S16
    }
    __asm { VMOV            S20, R0 }
      VSTR            S18, [SP,#0x60+var_44]
      VMUL.F32        S2, S20, S16
      VMUL.F32        S0, S0, S16
      VSTR            S2, [SP,#0x60+var_40]
      VSTR            S0, [SP,#0x60+var_3C]
    v13 = j_Entity::getLevel(*((Entity **)v2 + 1));
    j_Entity::_randomHeartPos((Entity *)&v16, *((_DWORD *)v2 + 1));
    j_Level::addParticle(v13, 17, (int)&v16);
    --v8;
  }
  while ( v8 );
  j_Entity::setStatusFlag(*((_DWORD *)v2 + 1), 7, 1);
  return (*(int (__cdecl **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 1) + 1088))(
           *((_DWORD *)v2 + 1),
           *(_DWORD *)(**((_DWORD **)v2 + 1) + 1088),
           v14);
}


void __fastcall BreedableComponent::readAdditionalSaveData(BreedableComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BreedableComponent *v3; // r6@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "InLove");
  *((_DWORD *)v3 + 2) = j_CompoundTag::getInt((int)v2, (const void **)&v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  sub_21E94B4((void **)&v10, "LoveCause");
  *((_QWORD *)v3 + 3) = j_CompoundTag::getInt64((int)v2, (const void **)&v10);
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


void __fastcall BreedableComponent::readAdditionalSaveData(BreedableComponent *this, const CompoundTag *a2)
{
  BreedableComponent::readAdditionalSaveData(this, a2);
}


void __fastcall BreedableComponent::addAdditionalSaveData(BreedableComponent *this, CompoundTag *a2)
{
  BreedableComponent::addAdditionalSaveData(this, a2);
}


int __fastcall BreedableComponent::doHurt(int result, const EntityDamageSource *a2, int a3)
{
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = *(_DWORD *)(result + 16);
  return result;
}
