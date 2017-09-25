

Entity *__fastcall MonsterPlacerItem::spawnMobAt(ItemInstance *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, char a11)
{
  BlockSource *v13; // r9@1
  Level *v14; // r0@1
  Level *v15; // r5@1
  char *v16; // r0@1
  int v18; // r6@1
  void *v23; // r0@1
  int v24; // r0@3
  Entity *v25; // r6@3
  int (__fastcall *v26)(Level *, BlockSource *, int *); // r3@4
  int v31; // r3@10
  int v32; // r5@10
  int v33; // r3@10
  int v34; // r5@10
  int v35; // r6@10
  char *v36; // r0@12
  __int64 v37; // kr08_8@14
  void *v39; // r0@19
  void *v40; // r0@20
  void *v41; // r0@21
  unsigned int *v43; // r2@23
  signed int v44; // r1@25
  unsigned int *v45; // r2@27
  signed int v46; // r1@29
  unsigned int *v47; // r2@31
  signed int v48; // r1@33
  unsigned int *v49; // r2@35
  signed int v50; // r1@37
  float v51; // [sp+4h] [bp-8Ch]@14
  int v52; // [sp+10h] [bp-80h]@10
  int v53; // [sp+14h] [bp-7Ch]@10
  int v54; // [sp+18h] [bp-78h]@10
  int v55; // [sp+1Ch] [bp-74h]@10
  int v56; // [sp+20h] [bp-70h]@10
  int v57; // [sp+24h] [bp-6Ch]@10
  int v58; // [sp+28h] [bp-68h]@10
  int v59; // [sp+2Ch] [bp-64h]@4
  int v60; // [sp+30h] [bp-60h]@3
  int v61; // [sp+38h] [bp-58h]@3
  int v62; // [sp+3Ch] [bp-54h]@1
  int v63; // [sp+40h] [bp-50h]@1
  int v64; // [sp+44h] [bp-4Ch]@1
  int v65; // [sp+48h] [bp-48h]@19

  _R8 = a4;
  _R11 = a3;
  v13 = a1;
  v14 = (Level *)BlockSource::getLevel(a1);
  v15 = v14;
  v16 = Level::getRandom(v14);
  _R7 = Random::_genRandInt32((Random *)v16);
  v18 = ItemInstance::getAuxValue((ItemInstance *)a5);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v63);
  __asm
  {
    VMOV            S0, R7
    VCVT.F64.U32    D8, S0
  }
  sub_21E8190((void **)&v63, "minecraft", (_BYTE *)9);
  EntityTypeIdWithoutCategories(&v62, v18, 0);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v64, &v62);
    VLDR            D0, =2.32830644e-10
    VLDR            S2, =360.0
    VMUL.F64        D0, D8, D0
  v23 = (void *)(v62 - 12);
    VCVT.F32.F64    S0, D0
    VMUL.F32        S16, S0, S2
  if ( !_ZF )
    v43 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v60 = 0;
  __asm { VSTR            S16, [SP,#0x90+var_5C] }
  EntityFactory::createSpawnedEntity((Entity **)&v61, (const void **)&v63, a6, _R11, &v60);
  v24 = v61;
  v25 = 0;
  if ( v61 )
    v26 = *(int (__fastcall **)(Level *, BlockSource *, int *))(*(_DWORD *)v15 + 44);
    v61 = 0;
    v59 = v24;
    _R10 = (Entity *)v26(v15, v13, &v59);
    if ( v59 )
      (*(void (**)(void))(*(_DWORD *)v59 + 32))();
    v25 = 0;
    v59 = 0;
    if ( _R10 )
      __asm
      {
        VLDR            S0, [R11]
        VLDR            S6, [R8]
        VLDR            S2, [R11,#4]
        VLDR            S8, [R8,#4]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [R11,#8]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [R8,#8]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S6, S0, S0
        VMUL.F32        S8, S2, S2
        VMUL.F32        S10, S4, S4
        VADD.F32        S6, S8, S6
        VLDR            S8, =1.1921e-7
        VADD.F32        S6, S6, S10
        VSQRT.F32       S16, S6
        VABS.F32        S6, S16
        VCMPE.F32       S6, S8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm { VLDR            S16, [R10,#0x13C] }
        _R4 = unk_28224C4;
        _R7 = *(float *)&Vec3::UNIT_Y;
        _R8 = unk_28224C8;
      else
        __asm
        {
          VMOV.F32        S6, #1.0
          VDIV.F32        S6, S6, S16
          VMUL.F32        S4, S6, S4
          VMUL.F32        S2, S6, S2
          VMUL.F32        S0, S6, S0
          VMOV            R8, S4
          VMOV            R4, S2
          VMOV            R7, S0
        }
        VLDR            S18, =0.0
        VCMPE.F32       S16, #0.0
      v31 = *((_DWORD *)_R10 + 67);
      v32 = *((_DWORD *)_R10 + 68);
      __asm { VMRS            APSR_nzcv, FPSCR }
      v52 = *((_DWORD *)_R10 + 66);
      v53 = v31;
      v54 = v32;
      v33 = *((_DWORD *)_R10 + 70);
      v34 = *((_DWORD *)_R10 + 71);
      v35 = *((_DWORD *)_R10 + 72);
      v55 = *((_DWORD *)_R10 + 69);
      v56 = v33;
      v57 = v34;
      v58 = v35;
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOV.F32        S20, #1.0 }
        do
          v36 = BlockSource::fetchAABBs(v13, (const AABB *)&v52, 1);
          if ( (unsigned int)*(_QWORD *)v36 == *(_QWORD *)v36 >> 32 )
            break;
          AABB::move((AABB *)&v52, _R7, _R4, _R8);
          __asm
          {
            VADD.F32        S18, S18, S20
            VCMPE.F32       S18, S16
            VMRS            APSR_nzcv, FPSCR
          }
        while ( _NF ^ _VF );
      v37 = *(_QWORD *)(*(_DWORD *)_R10 + 48);
      _R0 = ((int (__fastcall *)(_DWORD))HIDWORD(v37))(_R10);
        VMOV            S0, R4
        VLDR            S6, [R0]
        VMOV            S2, R7
        VLDR            S8, [R0,#4]
        VMOV            S4, R8
        VLDR            S10, [R0,#8]
        VMUL.F32        S2, S18, S2
        VMUL.F32        S0, S18, S0
        VMUL.F32        S4, S18, S4
        VADD.F32        S2, S6, S2
        VADD.F32        S0, S8, S0
        VADD.F32        S4, S10, S4
        VSTR            S2, [SP,#0x90+var_8C]
        VSTR            S0, [SP,#0x90+var_88]
        VSTR            S4, [SP,#0x90+var_84]
      ((void (__fastcall *)(Entity *, float *))v37)(_R10, &v51);
      Entity::setPersistent(_R10);
      Mob::playSpawnSound(_R10);
      if ( a7 )
        (*(void (**)(void))(*(_DWORD *)a7 + 28))();
      v25 = _R10;
    if ( v61 )
      (*(void (**)(void))(*(_DWORD *)v61 + 32))();
  v39 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v65 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v64 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v63 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  return v25;
}


signed int __fastcall MonsterPlacerItem::isLiquidClipItem(MonsterPlacerItem *this, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  signed int v4; // r1@1

  v2 = a2;
  v3 = EntityClassTree::getEntityTypeIdLegacy(8977);
  v4 = 0;
  if ( v3 == v2 )
    v4 = 1;
  return v4;
}


void __fastcall MonsterPlacerItem::buildDescriptionId(MonsterPlacerItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  const ItemInstance *v3; // r4@1
  ItemInstance *v4; // r6@1
  int *v5; // r5@1
  int v6; // r1@1
  int *v7; // r0@1
  int *v8; // r2@1
  int v9; // t1@2
  const void **v10; // r0@5
  void *v11; // r0@5
  int v12; // r0@6
  char *v13; // r0@7
  char *v14; // r0@8
  void *v15; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  char *v24; // [sp+0h] [bp-28h]@7
  int v25; // [sp+4h] [bp-24h]@5
  _DWORD *v26; // [sp+8h] [bp-20h]@5
  int v27; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  v5 = (int *)this;
  sub_21E94B4((void **)&v27, "item.spawn_egg");
  v6 = ItemInstance::getAuxValue(v4);
  v7 = (int *)*((_DWORD *)v3 + 389);
  v8 = (int *)*((_DWORD *)v3 + 390);
  while ( v8 != v7 )
  {
    v9 = *v7;
    ++v7;
    if ( v9 == v6 )
      v6 = 0;
  }
  EntityTypeIdWithoutCategories(&v25, v6, 0);
  v10 = sub_21E82D8((const void **)&v25, 0, (unsigned int)"entity.", (_BYTE *)7);
  v26 = *v10;
  *v10 = &unk_28898CC;
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v11);
  v12 = *(v26 - 3);
  if ( v12 )
    v24 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v24, v12 + 1);
    sub_21E7408((const void **)&v24, ".", 1u);
    sub_21E72F0((const void **)&v24, (const void **)&v26);
    sub_21E72F0((const void **)&v27, (const void **)&v24);
    v13 = v24 - 12;
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  sub_21E8AF4(v5, &v27);
  sub_21E7408((const void **)v5, ".name", 5u);
  v14 = (char *)(v26 - 3);
  if ( v26 - 3 != &dword_28898C0 )
    v18 = v26 - 1;
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall MonsterPlacerItem::buildDescriptionId(MonsterPlacerItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  MonsterPlacerItem::buildDescriptionId(this, a2, a3);
}


void __fastcall MonsterPlacerItem::~MonsterPlacerItem(MonsterPlacerItem *this)
{
  MonsterPlacerItem::~MonsterPlacerItem(this);
}


signed int __fastcall MonsterPlacerItem::dispense(MonsterPlacerItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, int a6)
{
  Container *v6; // r11@1
  int v7; // r9@1
  BlockSource *v8; // r10@1
  ItemInstance *v9; // r0@1
  int v10; // r7@1
  Random *v11; // r4@1
  void *v18; // r0@5
  void *v19; // r0@6
  void *v20; // r0@7
  int v21; // r0@9
  int v22; // r2@9
  int (*v23)(void); // r3@9
  float v29; // r0@12
  Player *v35; // r0@14
  signed int result; // r0@17
  unsigned int *v37; // r2@20
  signed int v38; // r1@22
  unsigned int *v39; // r2@24
  signed int v40; // r1@26
  unsigned int *v41; // r2@28
  signed int v42; // r1@30
  float v43; // [sp+4h] [bp-8Ch]@14
  int v44; // [sp+10h] [bp-80h]@9
  int v45; // [sp+14h] [bp-7Ch]@5
  int v46; // [sp+18h] [bp-78h]@6
  int v47; // [sp+1Ch] [bp-74h]@5
  int v48; // [sp+20h] [bp-70h]@5

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = (ItemInstance *)(*(int (__fastcall **)(Container *, int))(*(_DWORD *)a3 + 16))(a3, a4);
  v10 = ItemInstance::getAuxValue(v9);
  v11 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R8 = a5;
  if ( v10 == EntityClassTree::getEntityTypeIdLegacy(199456) )
  {
    _R0 = Random::_genRandInt32(v11);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, =0.05
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v10 = EntityClassTree::getEntityTypeIdLegacy(199468);
  }
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v45, v10);
  EntityFactory::createSpawnedEntity((Entity **)&v48, (const void **)&v45, 0, (int)a5, &Vec2::ZERO);
  v18 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v47 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v46 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v45 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v48 )
    v21 = BlockSource::getLevel(v8);
    v22 = v48;
    v23 = *(int (**)(void))(*(_DWORD *)v21 + 44);
    v48 = 0;
    v44 = v22;
    _R7 = v23();
    if ( v44 )
      (*(void (**)(void))(*(_DWORD *)v44 + 32))();
    v44 = 0;
    if ( _R7 )
      _R0 = &Facing::STEP_X[a6];
      __asm { VLDR            S0, [R0] }
      _R1 = &Facing::STEP_Y[a6];
      __asm
      {
        VCVT.F32.S32    S18, S0
        VLDR            S0, [R8]
        VLDR            S2, [R8,#4]
        VLDR            S4, [R8,#8]
        VSUB.F32        S0, S0, S18
        VMOV            R0, S0
        VLDR            S0, [R1]
      }
      _R1 = &Facing::STEP_Z[a6];
        VCVT.F32.S32    S20, S0
        VLDR            S6, [R1]
        VCVT.F32.S32    S22, S6
        VSUB.F32        S16, S2, S20
        VSUB.F32        S24, S4, S22
      v29 = floorf(_R0);
      __asm { VMOV.F32        S26, #0.5 }
      _R4 = v29;
        VMOV            R0, S16
        VLDR            S0, [R7,#0x130]
        VLDR            S2, [R7,#0x134]
        VMOV            R6, S24
        VMUL.F32        S0, S0, S26
        VMUL.F32        S16, S2, S26
        VADD.F32        S24, S0, S26
        VADD.F32        S28, S16, S26
        VMUL.F32        S18, S24, S18
      _R0 = floorf(_R0);
        VMOV            S30, R0
        VMOV            S17, R4
      _R0 = floorf(_R6);
        VMOV            S0, R0
        VADD.F32        S2, S17, S26
        VMUL.F32        S4, S28, S20
        VADD.F32        S6, S30, S26
        VADD.F32        S10, S0, S26
        VMUL.F32        S8, S24, S22
        VADD.F32        S2, S2, S18
        VADD.F32        S0, S6, S4
        VADD.F32        S4, S10, S8
        VSTR            S2, [SP,#0x90+var_8C]
        VSTR            S0, [SP,#0x90+var_88]
        VSTR            S4, [SP,#0x90+var_84]
      if ( !(!_ZF & _CF) )
        __asm
        {
          VSUBLS.F32      S0, S0, S16
          VSTRLS          S0, [SP,#0x90+var_88]
        }
      Entity::moveTo(_R7, (int)&v43);
      v35 = (Player *)BlockSource::getLevel(v8);
      Level::broadcastLevelEvent(v35, 1000, __PAIR__(1000, (unsigned int)a5), 0);
      (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v6 + 36))(v6, v7, 1);
    if ( v48 )
      (*(void (**)(void))(*(_DWORD *)v48 + 32))();
    result = 1;
  else
    result = 0;
  return result;
}


char *__fastcall MonsterPlacerItem::getIcon(MonsterPlacerItem *this, int a2, int a3, bool a4)
{
  char *result; // r0@2

  switch ( a2 )
  {
    case 10:
      result = (char *)this + 116;
      break;
    case 11:
      result = (char *)this + 148;
    case 12:
      result = (char *)this + 180;
    case 13:
      result = (char *)this + 212;
    case 14:
      result = (char *)this + 244;
    case 15:
      result = (char *)this + 692;
    case 16:
      result = (char *)this + 308;
    case 17:
      result = (char *)this + 756;
    case 18:
      result = (char *)this + 916;
    case 19:
      result = (char *)this + 884;
    case 22:
      result = (char *)this + 788;
    case 23:
      result = (char *)this + 1044;
    case 24:
      result = (char *)this + 1172;
    case 25:
      result = (char *)this + 1204;
    case 26:
      result = (char *)this + 1236;
    case 27:
      result = (char *)this + 1268;
    case 28:
      result = (char *)this + 276;
    case 29:
      result = (char *)this + 1076;
    case 30:
      result = (char *)this + 1492;
    case 32:
      result = (char *)this + 596;
    case 33:
      result = (char *)this + 340;
    case 34:
      result = (char *)this + 436;
    case 35:
      result = (char *)this + 532;
    case 36:
      result = (char *)this + 628;
    case 37:
      result = (char *)this + 500;
    case 38:
      result = (char *)this + 372;
    case 39:
      result = (char *)this + 404;
    case 40:
      result = (char *)this + 564;
    case 41:
      result = (char *)this + 980;
    case 42:
      result = (char *)this + 948;
    case 43:
      result = (char *)this + 1012;
    case 44:
      result = (char *)this + 1460;
    case 45:
      result = (char *)this + 820;
    case 46:
      result = (char *)this + 468;
    case 47:
      result = (char *)this + 660;
    case 48:
      result = (char *)this + 1108;
    case 49:
      result = (char *)this + 724;
    case 50:
      result = (char *)this + 1300;
    case 54:
      result = (char *)this + 1332;
    case 55:
      result = (char *)this + 1364;
    case 57:
      result = (char *)this + 852;
    case 104:
      result = (char *)this + 1396;
    case 105:
      result = (char *)this + 1428;
    default:
      result = (char *)this + 1524;
  }
  return result;
}


int __fastcall MonsterPlacerItem::setIcon(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int *v4; // r8@1
  void *v5; // r0@1
  int v6; // r12@2
  int v7; // r9@2
  int v8; // r2@2
  int v9; // r3@2
  int v10; // r5@2
  int v11; // r6@2
  int v12; // r7@2
  int v13; // r12@2
  int v14; // r9@2
  int v15; // r2@2
  int v16; // r3@2
  int v17; // r5@2
  int v18; // r6@2
  int v19; // r7@2
  int v20; // r12@2
  int v21; // r9@2
  int v22; // r2@2
  int v23; // r3@2
  int v24; // r5@2
  int v25; // r6@2
  int v26; // r7@2
  int v27; // r12@2
  int v28; // r9@2
  int v29; // r2@2
  int v30; // r3@2
  int v31; // r5@2
  int v32; // r6@2
  int v33; // r7@2
  int v34; // r12@2
  int v35; // r9@2
  int v36; // r2@2
  int v37; // r3@2
  int v38; // r5@2
  int v39; // r6@2
  int v40; // r7@2
  int v41; // r12@2
  int v42; // r9@2
  int v43; // r2@2
  int v44; // r3@2
  int v45; // r5@2
  int v46; // r6@2
  int v47; // r7@2
  int v48; // r12@2
  int v49; // r9@2
  int v50; // r2@2
  int v51; // r3@2
  int v52; // r5@2
  int v53; // r6@2
  int v54; // r7@2
  int v55; // r12@2
  int v56; // r9@2
  int v57; // r2@2
  int v58; // r3@2
  int v59; // r5@2
  int v60; // r6@2
  int v61; // r7@2
  int v62; // r12@2
  int v63; // r9@2
  int v64; // r2@2
  int v65; // r3@2
  int v66; // r5@2
  int v67; // r6@2
  int v68; // r7@2
  int v69; // r12@2
  int v70; // r9@2
  int v71; // r2@2
  int v72; // r3@2
  int v73; // r5@2
  int v74; // r6@2
  int v75; // r7@2
  int v76; // r12@2
  int v77; // r9@2
  int v78; // r2@2
  int v79; // r3@2
  int v80; // r5@2
  int v81; // r6@2
  int v82; // r7@2
  int v83; // r12@2
  int v84; // r9@2
  int v85; // r2@2
  int v86; // r3@2
  int v87; // r5@2
  int v88; // r6@2
  int v89; // r7@2
  int v90; // r12@2
  int v91; // r9@2
  int v92; // r2@2
  int v93; // r3@2
  int v94; // r5@2
  int v95; // r6@2
  int v96; // r7@2
  int v97; // r12@2
  int v98; // r9@2
  int v99; // r2@2
  int v100; // r3@2
  int v101; // r5@2
  int v102; // r6@2
  int v103; // r7@2
  int v104; // r12@2
  int v105; // r9@2
  int v106; // r2@2
  int v107; // r3@2
  int v108; // r5@2
  int v109; // r6@2
  int v110; // r7@2
  int v111; // r12@2
  int v112; // r9@2
  int v113; // r2@2
  int v114; // r3@2
  int v115; // r5@2
  int v116; // r6@2
  int v117; // r7@2
  int v118; // r12@2
  int v119; // r9@2
  int v120; // r2@2
  int v121; // r3@2
  int v122; // r5@2
  int v123; // r6@2
  int v124; // r7@2
  int v125; // r12@2
  int v126; // r9@2
  int v127; // r2@2
  int v128; // r3@2
  int v129; // r5@2
  int v130; // r6@2
  int v131; // r7@2
  int v132; // r12@2
  int v133; // r9@2
  int v134; // r2@2
  int v135; // r3@2
  int v136; // r5@2
  int v137; // r6@2
  int v138; // r7@2
  int v139; // r12@2
  int v140; // r9@2
  int v141; // r2@2
  int v142; // r3@2
  int v143; // r5@2
  int v144; // r6@2
  int v145; // r7@2
  int v146; // r12@2
  int v147; // r9@2
  int v148; // r2@2
  int v149; // r3@2
  int v150; // r5@2
  int v151; // r6@2
  int v152; // r7@2
  int v153; // r12@2
  int v154; // r9@2
  int v155; // r2@2
  int v156; // r3@2
  int v157; // r5@2
  int v158; // r6@2
  int v159; // r7@2
  int v160; // r12@2
  int v161; // r9@2
  int v162; // r2@2
  int v163; // r3@2
  int v164; // r5@2
  int v165; // r6@2
  int v166; // r7@2
  int v167; // r12@2
  int v168; // r9@2
  int v169; // r2@2
  int v170; // r3@2
  int v171; // r5@2
  int v172; // r6@2
  int v173; // r7@2
  int v174; // r12@2
  int v175; // r9@2
  int v176; // r2@2
  int v177; // r3@2
  int v178; // r5@2
  int v179; // r6@2
  int v180; // r7@2
  int v181; // r12@2
  int v182; // r9@2
  int v183; // r2@2
  int v184; // r3@2
  int v185; // r5@2
  int v186; // r6@2
  int v187; // r7@2
  int v188; // r12@2
  int v189; // r9@2
  int v190; // r2@2
  int v191; // r3@2
  int v192; // r5@2
  int v193; // r6@2
  int v194; // r7@2
  int v195; // r12@2
  int v196; // r9@2
  int v197; // r2@2
  int v198; // r3@2
  int v199; // r5@2
  int v200; // r6@2
  int v201; // r7@2
  int v202; // r12@2
  int v203; // r9@2
  int v204; // r2@2
  int v205; // r3@2
  int v206; // r5@2
  int v207; // r6@2
  int v208; // r7@2
  int v209; // r12@2
  int v210; // r9@2
  int v211; // r2@2
  int v212; // r3@2
  int v213; // r5@2
  int v214; // r6@2
  int v215; // r7@2
  int v216; // r12@2
  int v217; // r9@2
  int v218; // r2@2
  int v219; // r3@2
  int v220; // r5@2
  int v221; // r6@2
  int v222; // r7@2
  int v223; // r12@2
  int v224; // r9@2
  int v225; // r2@2
  int v226; // r3@2
  int v227; // r5@2
  int v228; // r6@2
  int v229; // r7@2
  int v230; // r12@2
  int v231; // r9@2
  int v232; // r2@2
  int v233; // r3@2
  int v234; // r5@2
  int v235; // r6@2
  int v236; // r7@2
  int v237; // r12@2
  int v238; // r9@2
  int v239; // r2@2
  int v240; // r3@2
  int v241; // r5@2
  int v242; // r6@2
  int v243; // r7@2
  int v244; // r12@2
  int v245; // r9@2
  int v246; // r2@2
  int v247; // r3@2
  int v248; // r5@2
  int v249; // r6@2
  int v250; // r7@2
  int v251; // r12@2
  int v252; // r9@2
  int v253; // r2@2
  int v254; // r3@2
  int v255; // r5@2
  int v256; // r6@2
  int v257; // r7@2
  int v258; // r12@2
  int v259; // r9@2
  int v260; // r2@2
  int v261; // r3@2
  int v262; // r5@2
  int v263; // r6@2
  int v264; // r7@2
  int v265; // r12@2
  int v266; // r9@2
  int v267; // r2@2
  int v268; // r3@2
  int v269; // r5@2
  int v270; // r6@2
  int v271; // r7@2
  int v272; // r12@2
  int v273; // r9@2
  int v274; // r2@2
  int v275; // r3@2
  int v276; // r5@2
  int v277; // r6@2
  int v278; // r7@2
  int v279; // r12@2
  int v280; // r9@2
  int v281; // r2@2
  int v282; // r3@2
  int v283; // r5@2
  int v284; // r6@2
  int v285; // r7@2
  int v286; // r12@2
  int v287; // r9@2
  int v288; // r2@2
  int v289; // r3@2
  int v290; // r5@2
  int v291; // r6@2
  int v292; // r7@2
  int v293; // r12@2
  int v294; // r9@2
  int v295; // r2@2
  int v296; // r3@2
  int v297; // r5@2
  int v298; // r6@2
  int v299; // r7@2
  int v300; // r12@2
  int v301; // r9@2
  int v302; // r2@2
  int v303; // r3@2
  int v304; // r5@2
  int v305; // r6@2
  int v306; // r7@2
  int v307; // r12@2
  int v308; // r9@2
  int v309; // r2@2
  int v310; // r3@2
  int v311; // r5@2
  int v312; // r6@2
  int v313; // r7@2
  int v314; // r12@2
  int v315; // r8@2
  int v316; // r2@2
  int v317; // r3@2
  int v318; // r5@2
  int v319; // r6@2
  int v320; // r7@2
  unsigned int *v322; // r12@3
  signed int v323; // r1@5
  int v324; // [sp+8h] [bp-28h]@1

  v3 = a1;
  Item::setIcon(a1, a2, a3);
  sub_21E94B4((void **)&v324, "spawn_egg");
  v4 = Item::getTextureItem((int **)&v324);
  v5 = (void *)(v324 - 12);
  if ( (int *)(v324 - 12) != &dword_28898C0 )
  {
    v322 = (unsigned int *)(v324 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v323 = __ldrex(v322);
      while ( __strex(v323 - 1, v322) );
    }
    else
      v323 = (*v322)--;
    if ( v323 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v3 + 116;
  v7 = *(_DWORD *)v4[2];
  v8 = *(_DWORD *)(v7 + 4);
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(_DWORD *)(v7 + 12);
  v11 = *(_DWORD *)(v7 + 16);
  v12 = *(_DWORD *)(v7 + 20);
  *(_DWORD *)v6 = *(_DWORD *)v7;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 8) = v9;
  *(_DWORD *)(v6 + 12) = v10;
  *(_DWORD *)(v6 + 16) = v11;
  *(_DWORD *)(v6 + 20) = v12;
  EntityInteraction::setInteractText((int *)(v3 + 140), (int *)(v7 + 24));
  v13 = v3 + 148;
  *(_DWORD *)(v3 + 144) = *(_DWORD *)(v7 + 28);
  v14 = *(_DWORD *)(v4[2] + 12);
  v15 = *(_DWORD *)(v14 + 4);
  v16 = *(_DWORD *)(v14 + 8);
  v17 = *(_DWORD *)(v14 + 12);
  v18 = *(_DWORD *)(v14 + 16);
  v19 = *(_DWORD *)(v14 + 20);
  *(_DWORD *)v13 = *(_DWORD *)v14;
  *(_DWORD *)(v13 + 4) = v15;
  *(_DWORD *)(v13 + 8) = v16;
  *(_DWORD *)(v13 + 12) = v17;
  *(_DWORD *)(v13 + 16) = v18;
  *(_DWORD *)(v13 + 20) = v19;
  EntityInteraction::setInteractText((int *)(v3 + 172), (int *)(v14 + 24));
  v20 = v3 + 180;
  *(_DWORD *)(v3 + 176) = *(_DWORD *)(v14 + 28);
  v21 = *(_DWORD *)(v4[2] + 24);
  v22 = *(_DWORD *)(v21 + 4);
  v23 = *(_DWORD *)(v21 + 8);
  v24 = *(_DWORD *)(v21 + 12);
  v25 = *(_DWORD *)(v21 + 16);
  v26 = *(_DWORD *)(v21 + 20);
  *(_DWORD *)v20 = *(_DWORD *)v21;
  *(_DWORD *)(v20 + 4) = v22;
  *(_DWORD *)(v20 + 8) = v23;
  *(_DWORD *)(v20 + 12) = v24;
  *(_DWORD *)(v20 + 16) = v25;
  *(_DWORD *)(v20 + 20) = v26;
  EntityInteraction::setInteractText((int *)(v3 + 204), (int *)(v21 + 24));
  v27 = v3 + 212;
  *(_DWORD *)(v3 + 208) = *(_DWORD *)(v21 + 28);
  v28 = *(_DWORD *)(v4[2] + 36);
  v29 = *(_DWORD *)(v28 + 4);
  v30 = *(_DWORD *)(v28 + 8);
  v31 = *(_DWORD *)(v28 + 12);
  v32 = *(_DWORD *)(v28 + 16);
  v33 = *(_DWORD *)(v28 + 20);
  *(_DWORD *)v27 = *(_DWORD *)v28;
  *(_DWORD *)(v27 + 4) = v29;
  *(_DWORD *)(v27 + 8) = v30;
  *(_DWORD *)(v27 + 12) = v31;
  *(_DWORD *)(v27 + 16) = v32;
  *(_DWORD *)(v27 + 20) = v33;
  EntityInteraction::setInteractText((int *)(v3 + 236), (int *)(v28 + 24));
  v34 = v3 + 244;
  *(_DWORD *)(v3 + 240) = *(_DWORD *)(v28 + 28);
  v35 = *(_DWORD *)(v4[2] + 48);
  v36 = *(_DWORD *)(v35 + 4);
  v37 = *(_DWORD *)(v35 + 8);
  v38 = *(_DWORD *)(v35 + 12);
  v39 = *(_DWORD *)(v35 + 16);
  v40 = *(_DWORD *)(v35 + 20);
  *(_DWORD *)v34 = *(_DWORD *)v35;
  *(_DWORD *)(v34 + 4) = v36;
  *(_DWORD *)(v34 + 8) = v37;
  *(_DWORD *)(v34 + 12) = v38;
  *(_DWORD *)(v34 + 16) = v39;
  *(_DWORD *)(v34 + 20) = v40;
  EntityInteraction::setInteractText((int *)(v3 + 268), (int *)(v35 + 24));
  v41 = v3 + 308;
  *(_DWORD *)(v3 + 272) = *(_DWORD *)(v35 + 28);
  v42 = *(_DWORD *)(v4[2] + 60);
  v43 = *(_DWORD *)(v42 + 4);
  v44 = *(_DWORD *)(v42 + 8);
  v45 = *(_DWORD *)(v42 + 12);
  v46 = *(_DWORD *)(v42 + 16);
  v47 = *(_DWORD *)(v42 + 20);
  *(_DWORD *)v41 = *(_DWORD *)v42;
  *(_DWORD *)(v41 + 4) = v43;
  *(_DWORD *)(v41 + 8) = v44;
  *(_DWORD *)(v41 + 12) = v45;
  *(_DWORD *)(v41 + 16) = v46;
  *(_DWORD *)(v41 + 20) = v47;
  EntityInteraction::setInteractText((int *)(v3 + 332), (int *)(v42 + 24));
  v48 = v3 + 340;
  *(_DWORD *)(v3 + 336) = *(_DWORD *)(v42 + 28);
  v49 = *(_DWORD *)(v4[2] + 72);
  v50 = *(_DWORD *)(v49 + 4);
  v51 = *(_DWORD *)(v49 + 8);
  v52 = *(_DWORD *)(v49 + 12);
  v53 = *(_DWORD *)(v49 + 16);
  v54 = *(_DWORD *)(v49 + 20);
  *(_DWORD *)v48 = *(_DWORD *)v49;
  *(_DWORD *)(v48 + 4) = v50;
  *(_DWORD *)(v48 + 8) = v51;
  *(_DWORD *)(v48 + 12) = v52;
  *(_DWORD *)(v48 + 16) = v53;
  *(_DWORD *)(v48 + 20) = v54;
  EntityInteraction::setInteractText((int *)(v3 + 364), (int *)(v49 + 24));
  v55 = v3 + 372;
  *(_DWORD *)(v3 + 368) = *(_DWORD *)(v49 + 28);
  v56 = *(_DWORD *)(v4[2] + 84);
  v57 = *(_DWORD *)(v56 + 4);
  v58 = *(_DWORD *)(v56 + 8);
  v59 = *(_DWORD *)(v56 + 12);
  v60 = *(_DWORD *)(v56 + 16);
  v61 = *(_DWORD *)(v56 + 20);
  *(_DWORD *)v55 = *(_DWORD *)v56;
  *(_DWORD *)(v55 + 4) = v57;
  *(_DWORD *)(v55 + 8) = v58;
  *(_DWORD *)(v55 + 12) = v59;
  *(_DWORD *)(v55 + 16) = v60;
  *(_DWORD *)(v55 + 20) = v61;
  EntityInteraction::setInteractText((int *)(v3 + 396), (int *)(v56 + 24));
  v62 = v3 + 404;
  *(_DWORD *)(v3 + 400) = *(_DWORD *)(v56 + 28);
  v63 = *(_DWORD *)(v4[2] + 96);
  v64 = *(_DWORD *)(v63 + 4);
  v65 = *(_DWORD *)(v63 + 8);
  v66 = *(_DWORD *)(v63 + 12);
  v67 = *(_DWORD *)(v63 + 16);
  v68 = *(_DWORD *)(v63 + 20);
  *(_DWORD *)v62 = *(_DWORD *)v63;
  *(_DWORD *)(v62 + 4) = v64;
  *(_DWORD *)(v62 + 8) = v65;
  *(_DWORD *)(v62 + 12) = v66;
  *(_DWORD *)(v62 + 16) = v67;
  *(_DWORD *)(v62 + 20) = v68;
  EntityInteraction::setInteractText((int *)(v3 + 428), (int *)(v63 + 24));
  v69 = v3 + 436;
  *(_DWORD *)(v3 + 432) = *(_DWORD *)(v63 + 28);
  v70 = *(_DWORD *)(v4[2] + 108);
  v71 = *(_DWORD *)(v70 + 4);
  v72 = *(_DWORD *)(v70 + 8);
  v73 = *(_DWORD *)(v70 + 12);
  v74 = *(_DWORD *)(v70 + 16);
  v75 = *(_DWORD *)(v70 + 20);
  *(_DWORD *)v69 = *(_DWORD *)v70;
  *(_DWORD *)(v69 + 4) = v71;
  *(_DWORD *)(v69 + 8) = v72;
  *(_DWORD *)(v69 + 12) = v73;
  *(_DWORD *)(v69 + 16) = v74;
  *(_DWORD *)(v69 + 20) = v75;
  EntityInteraction::setInteractText((int *)(v3 + 460), (int *)(v70 + 24));
  v76 = v3 + 500;
  *(_DWORD *)(v3 + 464) = *(_DWORD *)(v70 + 28);
  v77 = *(_DWORD *)(v4[2] + 120);
  v78 = *(_DWORD *)(v77 + 4);
  v79 = *(_DWORD *)(v77 + 8);
  v80 = *(_DWORD *)(v77 + 12);
  v81 = *(_DWORD *)(v77 + 16);
  v82 = *(_DWORD *)(v77 + 20);
  *(_DWORD *)v76 = *(_DWORD *)v77;
  *(_DWORD *)(v76 + 4) = v78;
  *(_DWORD *)(v76 + 8) = v79;
  *(_DWORD *)(v76 + 12) = v80;
  *(_DWORD *)(v76 + 16) = v81;
  *(_DWORD *)(v76 + 20) = v82;
  EntityInteraction::setInteractText((int *)(v3 + 524), (int *)(v77 + 24));
  v83 = v3 + 532;
  *(_DWORD *)(v3 + 528) = *(_DWORD *)(v77 + 28);
  v84 = *(_DWORD *)(v4[2] + 132);
  v85 = *(_DWORD *)(v84 + 4);
  v86 = *(_DWORD *)(v84 + 8);
  v87 = *(_DWORD *)(v84 + 12);
  v88 = *(_DWORD *)(v84 + 16);
  v89 = *(_DWORD *)(v84 + 20);
  *(_DWORD *)v83 = *(_DWORD *)v84;
  *(_DWORD *)(v83 + 4) = v85;
  *(_DWORD *)(v83 + 8) = v86;
  *(_DWORD *)(v83 + 12) = v87;
  *(_DWORD *)(v83 + 16) = v88;
  *(_DWORD *)(v83 + 20) = v89;
  EntityInteraction::setInteractText((int *)(v3 + 556), (int *)(v84 + 24));
  v90 = v3 + 596;
  *(_DWORD *)(v3 + 560) = *(_DWORD *)(v84 + 28);
  v91 = *(_DWORD *)(v4[2] + 144);
  v92 = *(_DWORD *)(v91 + 4);
  v93 = *(_DWORD *)(v91 + 8);
  v94 = *(_DWORD *)(v91 + 12);
  v95 = *(_DWORD *)(v91 + 16);
  v96 = *(_DWORD *)(v91 + 20);
  *(_DWORD *)v90 = *(_DWORD *)v91;
  *(_DWORD *)(v90 + 4) = v92;
  *(_DWORD *)(v90 + 8) = v93;
  *(_DWORD *)(v90 + 12) = v94;
  *(_DWORD *)(v90 + 16) = v95;
  *(_DWORD *)(v90 + 20) = v96;
  EntityInteraction::setInteractText((int *)(v3 + 620), (int *)(v91 + 24));
  v97 = v3 + 628;
  *(_DWORD *)(v3 + 624) = *(_DWORD *)(v91 + 28);
  v98 = *(_DWORD *)(v4[2] + 156);
  v99 = *(_DWORD *)(v98 + 4);
  v100 = *(_DWORD *)(v98 + 8);
  v101 = *(_DWORD *)(v98 + 12);
  v102 = *(_DWORD *)(v98 + 16);
  v103 = *(_DWORD *)(v98 + 20);
  *(_DWORD *)v97 = *(_DWORD *)v98;
  *(_DWORD *)(v97 + 4) = v99;
  *(_DWORD *)(v97 + 8) = v100;
  *(_DWORD *)(v97 + 12) = v101;
  *(_DWORD *)(v97 + 16) = v102;
  *(_DWORD *)(v97 + 20) = v103;
  EntityInteraction::setInteractText((int *)(v3 + 652), (int *)(v98 + 24));
  v104 = v3 + 692;
  *(_DWORD *)(v3 + 656) = *(_DWORD *)(v98 + 28);
  v105 = *(_DWORD *)(v4[2] + 168);
  v106 = *(_DWORD *)(v105 + 4);
  v107 = *(_DWORD *)(v105 + 8);
  v108 = *(_DWORD *)(v105 + 12);
  v109 = *(_DWORD *)(v105 + 16);
  v110 = *(_DWORD *)(v105 + 20);
  *(_DWORD *)v104 = *(_DWORD *)v105;
  *(_DWORD *)(v104 + 4) = v106;
  *(_DWORD *)(v104 + 8) = v107;
  *(_DWORD *)(v104 + 12) = v108;
  *(_DWORD *)(v104 + 16) = v109;
  *(_DWORD *)(v104 + 20) = v110;
  EntityInteraction::setInteractText((int *)(v3 + 716), (int *)(v105 + 24));
  v111 = v3 + 756;
  *(_DWORD *)(v3 + 720) = *(_DWORD *)(v105 + 28);
  v112 = *(_DWORD *)(v4[2] + 180);
  v113 = *(_DWORD *)(v112 + 4);
  v114 = *(_DWORD *)(v112 + 8);
  v115 = *(_DWORD *)(v112 + 12);
  v116 = *(_DWORD *)(v112 + 16);
  v117 = *(_DWORD *)(v112 + 20);
  *(_DWORD *)v111 = *(_DWORD *)v112;
  *(_DWORD *)(v111 + 4) = v113;
  *(_DWORD *)(v111 + 8) = v114;
  *(_DWORD *)(v111 + 12) = v115;
  *(_DWORD *)(v111 + 16) = v116;
  *(_DWORD *)(v111 + 20) = v117;
  EntityInteraction::setInteractText((int *)(v3 + 780), (int *)(v112 + 24));
  v118 = v3 + 788;
  *(_DWORD *)(v3 + 784) = *(_DWORD *)(v112 + 28);
  v119 = *(_DWORD *)(v4[2] + 192);
  v120 = *(_DWORD *)(v119 + 4);
  v121 = *(_DWORD *)(v119 + 8);
  v122 = *(_DWORD *)(v119 + 12);
  v123 = *(_DWORD *)(v119 + 16);
  v124 = *(_DWORD *)(v119 + 20);
  *(_DWORD *)v118 = *(_DWORD *)v119;
  *(_DWORD *)(v118 + 4) = v120;
  *(_DWORD *)(v118 + 8) = v121;
  *(_DWORD *)(v118 + 12) = v122;
  *(_DWORD *)(v118 + 16) = v123;
  *(_DWORD *)(v118 + 20) = v124;
  EntityInteraction::setInteractText((int *)(v3 + 812), (int *)(v119 + 24));
  v125 = v3 + 820;
  *(_DWORD *)(v3 + 816) = *(_DWORD *)(v119 + 28);
  v126 = *(_DWORD *)(v4[2] + 204);
  v127 = *(_DWORD *)(v126 + 4);
  v128 = *(_DWORD *)(v126 + 8);
  v129 = *(_DWORD *)(v126 + 12);
  v130 = *(_DWORD *)(v126 + 16);
  v131 = *(_DWORD *)(v126 + 20);
  *(_DWORD *)v125 = *(_DWORD *)v126;
  *(_DWORD *)(v125 + 4) = v127;
  *(_DWORD *)(v125 + 8) = v128;
  *(_DWORD *)(v125 + 12) = v129;
  *(_DWORD *)(v125 + 16) = v130;
  *(_DWORD *)(v125 + 20) = v131;
  EntityInteraction::setInteractText((int *)(v3 + 844), (int *)(v126 + 24));
  v132 = v3 + 884;
  *(_DWORD *)(v3 + 848) = *(_DWORD *)(v126 + 28);
  v133 = *(_DWORD *)(v4[2] + 216);
  v134 = *(_DWORD *)(v133 + 4);
  v135 = *(_DWORD *)(v133 + 8);
  v136 = *(_DWORD *)(v133 + 12);
  v137 = *(_DWORD *)(v133 + 16);
  v138 = *(_DWORD *)(v133 + 20);
  *(_DWORD *)v132 = *(_DWORD *)v133;
  *(_DWORD *)(v132 + 4) = v134;
  *(_DWORD *)(v132 + 8) = v135;
  *(_DWORD *)(v132 + 12) = v136;
  *(_DWORD *)(v132 + 16) = v137;
  *(_DWORD *)(v132 + 20) = v138;
  EntityInteraction::setInteractText((int *)(v3 + 908), (int *)(v133 + 24));
  v139 = v3 + 980;
  *(_DWORD *)(v3 + 912) = *(_DWORD *)(v133 + 28);
  v140 = *(_DWORD *)(v4[2] + 228);
  v141 = *(_DWORD *)(v140 + 4);
  v142 = *(_DWORD *)(v140 + 8);
  v143 = *(_DWORD *)(v140 + 12);
  v144 = *(_DWORD *)(v140 + 16);
  v145 = *(_DWORD *)(v140 + 20);
  *(_DWORD *)v139 = *(_DWORD *)v140;
  *(_DWORD *)(v139 + 4) = v141;
  *(_DWORD *)(v139 + 8) = v142;
  *(_DWORD *)(v139 + 12) = v143;
  *(_DWORD *)(v139 + 16) = v144;
  *(_DWORD *)(v139 + 20) = v145;
  EntityInteraction::setInteractText((int *)(v3 + 1004), (int *)(v140 + 24));
  v146 = v3 + 948;
  *(_DWORD *)(v3 + 1008) = *(_DWORD *)(v140 + 28);
  v147 = *(_DWORD *)(v4[2] + 240);
  v148 = *(_DWORD *)(v147 + 4);
  v149 = *(_DWORD *)(v147 + 8);
  v150 = *(_DWORD *)(v147 + 12);
  v151 = *(_DWORD *)(v147 + 16);
  v152 = *(_DWORD *)(v147 + 20);
  *(_DWORD *)v146 = *(_DWORD *)v147;
  *(_DWORD *)(v146 + 4) = v148;
  *(_DWORD *)(v146 + 8) = v149;
  *(_DWORD *)(v146 + 12) = v150;
  *(_DWORD *)(v146 + 16) = v151;
  *(_DWORD *)(v146 + 20) = v152;
  EntityInteraction::setInteractText((int *)(v3 + 972), (int *)(v147 + 24));
  v153 = v3 + 1012;
  *(_DWORD *)(v3 + 976) = *(_DWORD *)(v147 + 28);
  v154 = *(_DWORD *)(v4[2] + 252);
  v155 = *(_DWORD *)(v154 + 4);
  v156 = *(_DWORD *)(v154 + 8);
  v157 = *(_DWORD *)(v154 + 12);
  v158 = *(_DWORD *)(v154 + 16);
  v159 = *(_DWORD *)(v154 + 20);
  *(_DWORD *)v153 = *(_DWORD *)v154;
  *(_DWORD *)(v153 + 4) = v155;
  *(_DWORD *)(v153 + 8) = v156;
  *(_DWORD *)(v153 + 12) = v157;
  *(_DWORD *)(v153 + 16) = v158;
  *(_DWORD *)(v153 + 20) = v159;
  EntityInteraction::setInteractText((int *)(v3 + 1036), (int *)(v154 + 24));
  v160 = v3 + 564;
  *(_DWORD *)(v3 + 1040) = *(_DWORD *)(v154 + 28);
  v161 = *(_DWORD *)(v4[2] + 264);
  v162 = *(_DWORD *)(v161 + 4);
  v163 = *(_DWORD *)(v161 + 8);
  v164 = *(_DWORD *)(v161 + 12);
  v165 = *(_DWORD *)(v161 + 16);
  v166 = *(_DWORD *)(v161 + 20);
  *(_DWORD *)v160 = *(_DWORD *)v161;
  *(_DWORD *)(v160 + 4) = v162;
  *(_DWORD *)(v160 + 8) = v163;
  *(_DWORD *)(v160 + 12) = v164;
  *(_DWORD *)(v160 + 16) = v165;
  *(_DWORD *)(v160 + 20) = v166;
  EntityInteraction::setInteractText((int *)(v3 + 588), (int *)(v161 + 24));
  v167 = v3 + 1044;
  *(_DWORD *)(v3 + 592) = *(_DWORD *)(v161 + 28);
  v168 = *(_DWORD *)(v4[2] + 276);
  v169 = *(_DWORD *)(v168 + 4);
  v170 = *(_DWORD *)(v168 + 8);
  v171 = *(_DWORD *)(v168 + 12);
  v172 = *(_DWORD *)(v168 + 16);
  v173 = *(_DWORD *)(v168 + 20);
  *(_DWORD *)v167 = *(_DWORD *)v168;
  *(_DWORD *)(v167 + 4) = v169;
  *(_DWORD *)(v167 + 8) = v170;
  *(_DWORD *)(v167 + 12) = v171;
  *(_DWORD *)(v167 + 16) = v172;
  *(_DWORD *)(v167 + 20) = v173;
  EntityInteraction::setInteractText((int *)(v3 + 1068), (int *)(v168 + 24));
  v174 = v3 + 916;
  *(_DWORD *)(v3 + 1072) = *(_DWORD *)(v168 + 28);
  v175 = *(_DWORD *)(v4[2] + 288);
  v176 = *(_DWORD *)(v175 + 4);
  v177 = *(_DWORD *)(v175 + 8);
  v178 = *(_DWORD *)(v175 + 12);
  v179 = *(_DWORD *)(v175 + 16);
  v180 = *(_DWORD *)(v175 + 20);
  *(_DWORD *)v174 = *(_DWORD *)v175;
  *(_DWORD *)(v174 + 4) = v176;
  *(_DWORD *)(v174 + 8) = v177;
  *(_DWORD *)(v174 + 12) = v178;
  *(_DWORD *)(v174 + 16) = v179;
  *(_DWORD *)(v174 + 20) = v180;
  EntityInteraction::setInteractText((int *)(v3 + 940), (int *)(v175 + 24));
  v181 = v3 + 1364;
  *(_DWORD *)(v3 + 944) = *(_DWORD *)(v175 + 28);
  v182 = *(_DWORD *)(v4[2] + 300);
  v183 = *(_DWORD *)(v182 + 4);
  v184 = *(_DWORD *)(v182 + 8);
  v185 = *(_DWORD *)(v182 + 12);
  v186 = *(_DWORD *)(v182 + 16);
  v187 = *(_DWORD *)(v182 + 20);
  *(_DWORD *)v181 = *(_DWORD *)v182;
  *(_DWORD *)(v181 + 4) = v183;
  *(_DWORD *)(v181 + 8) = v184;
  *(_DWORD *)(v181 + 12) = v185;
  *(_DWORD *)(v181 + 16) = v186;
  *(_DWORD *)(v181 + 20) = v187;
  EntityInteraction::setInteractText((int *)(v3 + 1388), (int *)(v182 + 24));
  v188 = v3 + 724;
  *(_DWORD *)(v3 + 1392) = *(_DWORD *)(v182 + 28);
  v189 = *(_DWORD *)(v4[2] + 312);
  v190 = *(_DWORD *)(v189 + 4);
  v191 = *(_DWORD *)(v189 + 8);
  v192 = *(_DWORD *)(v189 + 12);
  v193 = *(_DWORD *)(v189 + 16);
  v194 = *(_DWORD *)(v189 + 20);
  *(_DWORD *)v188 = *(_DWORD *)v189;
  *(_DWORD *)(v188 + 4) = v190;
  *(_DWORD *)(v188 + 8) = v191;
  *(_DWORD *)(v188 + 12) = v192;
  *(_DWORD *)(v188 + 16) = v193;
  *(_DWORD *)(v188 + 20) = v194;
  EntityInteraction::setInteractText((int *)(v3 + 748), (int *)(v189 + 24));
  v195 = v3 + 468;
  *(_DWORD *)(v3 + 752) = *(_DWORD *)(v189 + 28);
  v196 = *(_DWORD *)(v4[2] + 324);
  v197 = *(_DWORD *)(v196 + 4);
  v198 = *(_DWORD *)(v196 + 8);
  v199 = *(_DWORD *)(v196 + 12);
  v200 = *(_DWORD *)(v196 + 16);
  v201 = *(_DWORD *)(v196 + 20);
  *(_DWORD *)v195 = *(_DWORD *)v196;
  *(_DWORD *)(v195 + 4) = v197;
  *(_DWORD *)(v195 + 8) = v198;
  *(_DWORD *)(v195 + 12) = v199;
  *(_DWORD *)(v195 + 16) = v200;
  *(_DWORD *)(v195 + 20) = v201;
  EntityInteraction::setInteractText((int *)(v3 + 492), (int *)(v196 + 24));
  v202 = v3 + 660;
  *(_DWORD *)(v3 + 496) = *(_DWORD *)(v196 + 28);
  v203 = *(_DWORD *)(v4[2] + 336);
  v204 = *(_DWORD *)(v203 + 4);
  v205 = *(_DWORD *)(v203 + 8);
  v206 = *(_DWORD *)(v203 + 12);
  v207 = *(_DWORD *)(v203 + 16);
  v208 = *(_DWORD *)(v203 + 20);
  *(_DWORD *)v202 = *(_DWORD *)v203;
  *(_DWORD *)(v202 + 4) = v204;
  *(_DWORD *)(v202 + 8) = v205;
  *(_DWORD *)(v202 + 12) = v206;
  *(_DWORD *)(v202 + 16) = v207;
  *(_DWORD *)(v202 + 20) = v208;
  EntityInteraction::setInteractText((int *)(v3 + 684), (int *)(v203 + 24));
  v209 = v3 + 1108;
  *(_DWORD *)(v3 + 688) = *(_DWORD *)(v203 + 28);
  v210 = *(_DWORD *)(v4[2] + 348);
  v211 = *(_DWORD *)(v210 + 4);
  v212 = *(_DWORD *)(v210 + 8);
  v213 = *(_DWORD *)(v210 + 12);
  v214 = *(_DWORD *)(v210 + 16);
  v215 = *(_DWORD *)(v210 + 20);
  *(_DWORD *)v209 = *(_DWORD *)v210;
  *(_DWORD *)(v209 + 4) = v211;
  *(_DWORD *)(v209 + 8) = v212;
  *(_DWORD *)(v209 + 12) = v213;
  *(_DWORD *)(v209 + 16) = v214;
  *(_DWORD *)(v209 + 20) = v215;
  EntityInteraction::setInteractText((int *)(v3 + 1132), (int *)(v210 + 24));
  v216 = v3 + 1172;
  *(_DWORD *)(v3 + 1136) = *(_DWORD *)(v210 + 28);
  v217 = *(_DWORD *)(v4[2] + 360);
  v218 = *(_DWORD *)(v217 + 4);
  v219 = *(_DWORD *)(v217 + 8);
  v220 = *(_DWORD *)(v217 + 12);
  v221 = *(_DWORD *)(v217 + 16);
  v222 = *(_DWORD *)(v217 + 20);
  *(_DWORD *)v216 = *(_DWORD *)v217;
  *(_DWORD *)(v216 + 4) = v218;
  *(_DWORD *)(v216 + 8) = v219;
  *(_DWORD *)(v216 + 12) = v220;
  *(_DWORD *)(v216 + 16) = v221;
  *(_DWORD *)(v216 + 20) = v222;
  EntityInteraction::setInteractText((int *)(v3 + 1196), (int *)(v217 + 24));
  v223 = v3 + 1204;
  *(_DWORD *)(v3 + 1200) = *(_DWORD *)(v217 + 28);
  v224 = *(_DWORD *)(v4[2] + 372);
  v225 = *(_DWORD *)(v224 + 4);
  v226 = *(_DWORD *)(v224 + 8);
  v227 = *(_DWORD *)(v224 + 12);
  v228 = *(_DWORD *)(v224 + 16);
  v229 = *(_DWORD *)(v224 + 20);
  *(_DWORD *)v223 = *(_DWORD *)v224;
  *(_DWORD *)(v223 + 4) = v225;
  *(_DWORD *)(v223 + 8) = v226;
  *(_DWORD *)(v223 + 12) = v227;
  *(_DWORD *)(v223 + 16) = v228;
  *(_DWORD *)(v223 + 20) = v229;
  EntityInteraction::setInteractText((int *)(v3 + 1228), (int *)(v224 + 24));
  v230 = v3 + 1236;
  *(_DWORD *)(v3 + 1232) = *(_DWORD *)(v224 + 28);
  v231 = *(_DWORD *)(v4[2] + 384);
  v232 = *(_DWORD *)(v231 + 4);
  v233 = *(_DWORD *)(v231 + 8);
  v234 = *(_DWORD *)(v231 + 12);
  v235 = *(_DWORD *)(v231 + 16);
  v236 = *(_DWORD *)(v231 + 20);
  *(_DWORD *)v230 = *(_DWORD *)v231;
  *(_DWORD *)(v230 + 4) = v232;
  *(_DWORD *)(v230 + 8) = v233;
  *(_DWORD *)(v230 + 12) = v234;
  *(_DWORD *)(v230 + 16) = v235;
  *(_DWORD *)(v230 + 20) = v236;
  EntityInteraction::setInteractText((int *)(v3 + 1260), (int *)(v231 + 24));
  v237 = v3 + 1268;
  *(_DWORD *)(v3 + 1264) = *(_DWORD *)(v231 + 28);
  v238 = *(_DWORD *)(v4[2] + 396);
  v239 = *(_DWORD *)(v238 + 4);
  v240 = *(_DWORD *)(v238 + 8);
  v241 = *(_DWORD *)(v238 + 12);
  v242 = *(_DWORD *)(v238 + 16);
  v243 = *(_DWORD *)(v238 + 20);
  *(_DWORD *)v237 = *(_DWORD *)v238;
  *(_DWORD *)(v237 + 4) = v239;
  *(_DWORD *)(v237 + 8) = v240;
  *(_DWORD *)(v237 + 12) = v241;
  *(_DWORD *)(v237 + 16) = v242;
  *(_DWORD *)(v237 + 20) = v243;
  EntityInteraction::setInteractText((int *)(v3 + 1292), (int *)(v238 + 24));
  v244 = v3 + 1332;
  *(_DWORD *)(v3 + 1296) = *(_DWORD *)(v238 + 28);
  v245 = *(_DWORD *)(v4[2] + 408);
  v246 = *(_DWORD *)(v245 + 4);
  v247 = *(_DWORD *)(v245 + 8);
  v248 = *(_DWORD *)(v245 + 12);
  v249 = *(_DWORD *)(v245 + 16);
  v250 = *(_DWORD *)(v245 + 20);
  *(_DWORD *)v244 = *(_DWORD *)v245;
  *(_DWORD *)(v244 + 4) = v246;
  *(_DWORD *)(v244 + 8) = v247;
  *(_DWORD *)(v244 + 12) = v248;
  *(_DWORD *)(v244 + 16) = v249;
  *(_DWORD *)(v244 + 20) = v250;
  EntityInteraction::setInteractText((int *)(v3 + 1356), (int *)(v245 + 24));
  v251 = v3 + 1140;
  *(_DWORD *)(v3 + 1360) = *(_DWORD *)(v245 + 28);
  v252 = *(_DWORD *)(v4[2] + 420);
  v253 = *(_DWORD *)(v252 + 4);
  v254 = *(_DWORD *)(v252 + 8);
  v255 = *(_DWORD *)(v252 + 12);
  v256 = *(_DWORD *)(v252 + 16);
  v257 = *(_DWORD *)(v252 + 20);
  *(_DWORD *)v251 = *(_DWORD *)v252;
  *(_DWORD *)(v251 + 4) = v253;
  *(_DWORD *)(v251 + 8) = v254;
  *(_DWORD *)(v251 + 12) = v255;
  *(_DWORD *)(v251 + 16) = v256;
  *(_DWORD *)(v251 + 20) = v257;
  EntityInteraction::setInteractText((int *)(v3 + 1164), (int *)(v252 + 24));
  v258 = v3 + 1300;
  *(_DWORD *)(v3 + 1168) = *(_DWORD *)(v252 + 28);
  v259 = *(_DWORD *)(v4[2] + 432);
  v260 = *(_DWORD *)(v259 + 4);
  v261 = *(_DWORD *)(v259 + 8);
  v262 = *(_DWORD *)(v259 + 12);
  v263 = *(_DWORD *)(v259 + 16);
  v264 = *(_DWORD *)(v259 + 20);
  *(_DWORD *)v258 = *(_DWORD *)v259;
  *(_DWORD *)(v258 + 4) = v260;
  *(_DWORD *)(v258 + 8) = v261;
  *(_DWORD *)(v258 + 12) = v262;
  *(_DWORD *)(v258 + 16) = v263;
  *(_DWORD *)(v258 + 20) = v264;
  EntityInteraction::setInteractText((int *)(v3 + 1324), (int *)(v259 + 24));
  v265 = v3 + 276;
  *(_DWORD *)(v3 + 1328) = *(_DWORD *)(v259 + 28);
  v266 = *(_DWORD *)(v4[2] + 444);
  v267 = *(_DWORD *)(v266 + 4);
  v268 = *(_DWORD *)(v266 + 8);
  v269 = *(_DWORD *)(v266 + 12);
  v270 = *(_DWORD *)(v266 + 16);
  v271 = *(_DWORD *)(v266 + 20);
  *(_DWORD *)v265 = *(_DWORD *)v266;
  *(_DWORD *)(v265 + 4) = v267;
  *(_DWORD *)(v265 + 8) = v268;
  *(_DWORD *)(v265 + 12) = v269;
  *(_DWORD *)(v265 + 16) = v270;
  *(_DWORD *)(v265 + 20) = v271;
  EntityInteraction::setInteractText((int *)(v3 + 300), (int *)(v266 + 24));
  v272 = v3 + 1076;
  *(_DWORD *)(v3 + 304) = *(_DWORD *)(v266 + 28);
  v273 = *(_DWORD *)(v4[2] + 456);
  v274 = *(_DWORD *)(v273 + 4);
  v275 = *(_DWORD *)(v273 + 8);
  v276 = *(_DWORD *)(v273 + 12);
  v277 = *(_DWORD *)(v273 + 16);
  v278 = *(_DWORD *)(v273 + 20);
  *(_DWORD *)v272 = *(_DWORD *)v273;
  *(_DWORD *)(v272 + 4) = v274;
  *(_DWORD *)(v272 + 8) = v275;
  *(_DWORD *)(v272 + 12) = v276;
  *(_DWORD *)(v272 + 16) = v277;
  *(_DWORD *)(v272 + 20) = v278;
  EntityInteraction::setInteractText((int *)(v3 + 1100), (int *)(v273 + 24));
  v279 = v3 + 852;
  *(_DWORD *)(v3 + 1104) = *(_DWORD *)(v273 + 28);
  v280 = *(_DWORD *)(v4[2] + 468);
  v281 = *(_DWORD *)(v280 + 4);
  v282 = *(_DWORD *)(v280 + 8);
  v283 = *(_DWORD *)(v280 + 12);
  v284 = *(_DWORD *)(v280 + 16);
  v285 = *(_DWORD *)(v280 + 20);
  *(_DWORD *)v279 = *(_DWORD *)v280;
  *(_DWORD *)(v279 + 4) = v281;
  *(_DWORD *)(v279 + 8) = v282;
  *(_DWORD *)(v279 + 12) = v283;
  *(_DWORD *)(v279 + 16) = v284;
  *(_DWORD *)(v279 + 20) = v285;
  EntityInteraction::setInteractText((int *)(v3 + 876), (int *)(v280 + 24));
  v286 = v3 + 1396;
  *(_DWORD *)(v3 + 880) = *(_DWORD *)(v280 + 28);
  v287 = *(_DWORD *)(v4[2] + 480);
  v288 = *(_DWORD *)(v287 + 4);
  v289 = *(_DWORD *)(v287 + 8);
  v290 = *(_DWORD *)(v287 + 12);
  v291 = *(_DWORD *)(v287 + 16);
  v292 = *(_DWORD *)(v287 + 20);
  *(_DWORD *)v286 = *(_DWORD *)v287;
  *(_DWORD *)(v286 + 4) = v288;
  *(_DWORD *)(v286 + 8) = v289;
  *(_DWORD *)(v286 + 12) = v290;
  *(_DWORD *)(v286 + 16) = v291;
  *(_DWORD *)(v286 + 20) = v292;
  EntityInteraction::setInteractText((int *)(v3 + 1420), (int *)(v287 + 24));
  v293 = v3 + 1428;
  *(_DWORD *)(v3 + 1424) = *(_DWORD *)(v287 + 28);
  v294 = *(_DWORD *)(v4[2] + 492);
  v295 = *(_DWORD *)(v294 + 4);
  v296 = *(_DWORD *)(v294 + 8);
  v297 = *(_DWORD *)(v294 + 12);
  v298 = *(_DWORD *)(v294 + 16);
  v299 = *(_DWORD *)(v294 + 20);
  *(_DWORD *)v293 = *(_DWORD *)v294;
  *(_DWORD *)(v293 + 4) = v295;
  *(_DWORD *)(v293 + 8) = v296;
  *(_DWORD *)(v293 + 12) = v297;
  *(_DWORD *)(v293 + 16) = v298;
  *(_DWORD *)(v293 + 20) = v299;
  EntityInteraction::setInteractText((int *)(v3 + 1452), (int *)(v294 + 24));
  v300 = v3 + 1460;
  *(_DWORD *)(v3 + 1456) = *(_DWORD *)(v294 + 28);
  v301 = *(_DWORD *)(v4[2] + 504);
  v302 = *(_DWORD *)(v301 + 4);
  v303 = *(_DWORD *)(v301 + 8);
  v304 = *(_DWORD *)(v301 + 12);
  v305 = *(_DWORD *)(v301 + 16);
  v306 = *(_DWORD *)(v301 + 20);
  *(_DWORD *)v300 = *(_DWORD *)v301;
  *(_DWORD *)(v300 + 4) = v302;
  *(_DWORD *)(v300 + 8) = v303;
  *(_DWORD *)(v300 + 12) = v304;
  *(_DWORD *)(v300 + 16) = v305;
  *(_DWORD *)(v300 + 20) = v306;
  EntityInteraction::setInteractText((int *)(v3 + 1484), (int *)(v301 + 24));
  v307 = v3 + 1492;
  *(_DWORD *)(v3 + 1488) = *(_DWORD *)(v301 + 28);
  v308 = *(_DWORD *)(v4[2] + 516);
  v309 = *(_DWORD *)(v308 + 4);
  v310 = *(_DWORD *)(v308 + 8);
  v311 = *(_DWORD *)(v308 + 12);
  v312 = *(_DWORD *)(v308 + 16);
  v313 = *(_DWORD *)(v308 + 20);
  *(_DWORD *)v307 = *(_DWORD *)v308;
  *(_DWORD *)(v307 + 4) = v309;
  *(_DWORD *)(v307 + 8) = v310;
  *(_DWORD *)(v307 + 12) = v311;
  *(_DWORD *)(v307 + 16) = v312;
  *(_DWORD *)(v307 + 20) = v313;
  EntityInteraction::setInteractText((int *)(v3 + 1516), (int *)(v308 + 24));
  v314 = v3 + 1524;
  *(_DWORD *)(v3 + 1520) = *(_DWORD *)(v308 + 28);
  v315 = *(_DWORD *)(v4[2] + 528);
  v316 = *(_DWORD *)(v315 + 4);
  v317 = *(_DWORD *)(v315 + 8);
  v318 = *(_DWORD *)(v315 + 12);
  v319 = *(_DWORD *)(v315 + 16);
  v320 = *(_DWORD *)(v315 + 20);
  *(_DWORD *)v314 = *(_DWORD *)v315;
  *(_DWORD *)(v314 + 4) = v316;
  *(_DWORD *)(v314 + 8) = v317;
  *(_DWORD *)(v314 + 12) = v318;
  *(_DWORD *)(v314 + 16) = v319;
  *(_DWORD *)(v314 + 20) = v320;
  EntityInteraction::setInteractText((int *)(v3 + 1548), (int *)(v315 + 24));
  *(_DWORD *)(v3 + 1552) = *(_DWORD *)(v315 + 28);
  return v3;
}


int __fastcall MonsterPlacerItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r5@1
  int v10; // r11@1
  ItemInstance *v12; // r9@1
  Level *v13; // r0@1
  const BlockPos *v14; // r10@2
  int v15; // r0@2
  MobSpawnerBlockEntity *v16; // r4@3
  signed int v17; // r4@6
  int v18; // r3@7
  int v23; // r7@11
  int v24; // r0@11
  int v25; // r0@12
  int v26; // r7@18
  int *v27; // r0@18
  int *v28; // r1@18
  int v29; // t1@19
  int v30; // r1@21
  Entity *v31; // r4@23
  int v32; // r0@25
  int v33; // r6@25
  int v34; // r0@25
  int v36; // [sp+Ch] [bp-4Ch]@0
  int v37; // [sp+10h] [bp-48h]@23
  int v38; // [sp+14h] [bp-44h]@23
  float v39; // [sp+18h] [bp-40h]@23
  int v40; // [sp+1Ch] [bp-3Ch]@11
  char v41; // [sp+20h] [bp-38h]@16
  char v42; // [sp+21h] [bp-37h]@16
  unsigned __int8 v43; // [sp+24h] [bp-34h]@2

  v9 = this;
  v10 = a1;
  _R6 = a4;
  v12 = (ItemInstance *)a2;
  v13 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v13) == 1 )
    goto LABEL_26;
  v14 = (const BlockPos *)Entity::getRegion(v9);
  BlockSource::getBlockAndData((BlockSource *)&v43, v14, _R6);
  v15 = v43;
  if ( v43 != *(_BYTE *)(Block::mMobSpawner + 4) )
  {
    v18 = Facing::STEP_Y[a5];
    *(_DWORD *)_R6 += Facing::STEP_X[a5];
    *(_DWORD *)(_R6 + 4) += v18;
    *(_DWORD *)(_R6 + 8) += Facing::STEP_Z[a5];
    if ( ((unsigned __int8)a5 != 1 || v15 != *(_BYTE *)(Block::mFence + 4))
      && v15 != *(_BYTE *)(Block::mNetherFence + 4) )
    {
      __asm { VLDR            S16, =0.0 }
    }
    else
      __asm { VMOV.F32        S16, #0.5 }
    v26 = ItemInstance::getAuxValue(v12);
    v27 = *(int **)(v10 + 1556);
    v28 = *(int **)(v10 + 1560);
    if ( v27 == v28 )
LABEL_21:
      if ( v26 == EntityClassTree::getEntityTypeIdLegacy(307)
        && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 648))(v9) != 1 )
      {
        return 0;
      }
      __asm
        VLDR            S0, [R6]
        VMOV.F32        S6, #0.5
        VLDR            S2, [R6,#4]
        VLDR            S4, [R6,#8]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S2, S2, S16
        VADD.F32        S4, S4, S6
        VSTR            S0, [SP,#0x58+var_48]
        VSTR            S2, [SP,#0x58+var_44]
        VSTR            S4, [SP,#0x58+var_40]
      v31 = MonsterPlacerItem::spawnMobAt(
              v14,
              v30,
              (int)&v37,
              (int)v9 + 264,
              (int)v12,
              (int)v9,
              a9,
              v36,
              v37,
              v38,
              SLOBYTE(v39));
      if ( v31 && Entity::hasType((int)v9, 319) == 1 )
        v32 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v31 + 488))(v31);
        v17 = 1;
        v33 = (EntityClassTree::getEntityTypeIdLegacy(v32) << 16) | 1;
        v34 = Entity::getLevel(v9);
        Level::broadcastEntityEvent(v34, (int)v9, 67, v33);
        (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v12);
        return v17;
      while ( 1 )
        v29 = *v27;
        ++v27;
        if ( v29 == v26 )
          break;
        if ( v28 == v27 )
          goto LABEL_21;
LABEL_26:
    (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v9 + 612))(v9, v12);
    return 1;
  }
  v16 = (MobSpawnerBlockEntity *)BlockSource::getBlockEntity(v14, (const BlockPos *)_R6);
  if ( !v16 )
    v41 = BlockID::AIR;
    v42 = 0;
    BlockSource::setBlockAndData((int)v14, (BlockPos *)_R6, (int)&v41, 3, (int)v9);
  if ( !a9 || !(*(int (__fastcall **)(int, int))(*(_DWORD *)a9 + 16))(a9, _R6) )
    v23 = MobSpawnerBlockEntity::getSpawner(v16);
    v24 = ItemInstance::getAuxValue(v12);
    BaseMobSpawner::setEntityId(v23, v24);
    BlockEntity::setChanged(v16);
    (*(void (__fastcall **)(int *, MobSpawnerBlockEntity *, const BlockPos *))(*(_DWORD *)v16 + 52))(&v40, v16, v14);
    if ( v40 )
      v25 = BlockSource::getDimension(v14);
      (*(void (**)(void))(*(_DWORD *)v25 + 212))();
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    if ( a9 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a9 + 20))(a9, _R6);
  return 0;
}


int __fastcall MonsterPlacerItem::MonsterPlacerItem(int a1, const void **a2, __int16 a3)
{
  int v3; // r8@1
  int v4; // r5@1
  int *v5; // r0@1
  _BYTE *v6; // r6@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r4@5
  char *v10; // r7@11
  int v11; // r5@13
  int v12; // r5@15
  int v13; // r5@18
  int *v14; // r0@18
  _BYTE *v15; // r6@20
  unsigned int v16; // r2@20
  unsigned int v17; // r1@22
  unsigned int v18; // r4@22
  char *v19; // r7@28
  int v20; // r5@30
  int v21; // r5@32
  int v22; // r5@35
  int *v23; // r0@35
  _BYTE *v24; // r6@37
  unsigned int v25; // r2@37
  unsigned int v26; // r1@39
  unsigned int v27; // r4@39
  char *v28; // r7@45
  int v29; // r5@47
  int v30; // r5@49

  v3 = a1;
  Item::Item(a1, a2, a3);
  *(_DWORD *)v3 = &off_2702DE8;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 116));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 148));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 180));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 212));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 244));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 276));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 308));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 340));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 372));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 404));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 436));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 468));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 500));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 532));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 564));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 596));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 628));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 660));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 692));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 724));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 756));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 788));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 820));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 852));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 884));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 916));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 948));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 980));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1012));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1044));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1076));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1108));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1140));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1172));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1204));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1236));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1268));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1300));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1332));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1364));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1396));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1428));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1460));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1492));
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 1524));
  *(_DWORD *)(v3 + 1556) = 0;
  *(_DWORD *)(v3 + 1560) = 0;
  *(_DWORD *)(v3 + 1564) = 0;
  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 24))(v3, 1);
  *(_WORD *)(v3 + 30) = 0;
  v4 = EntityClassTree::getEntityTypeIdLegacy(68404);
  v5 = *(int **)(v3 + 1560);
  if ( v5 == *(int **)(v3 + 1564) )
  {
    v6 = *(_BYTE **)(v3 + 1556);
    v7 = ((char *)v5 - v6) >> 2;
    if ( !v7 )
      v7 = 1;
    v8 = v7 + (((char *)v5 - v6) >> 2);
    v9 = v7 + (((char *)v5 - v6) >> 2);
    if ( 0 != v8 >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      v6 = *(_BYTE **)(v3 + 1556);
      v5 = *(int **)(v3 + 1560);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[(char *)v5 - v6] = v4;
    v11 = (int)&v10[(char *)v5 - v6];
    if ( 0 != ((char *)v5 - v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = v11 + 4;
    if ( v6 )
      operator delete(v6);
    *(_DWORD *)(v3 + 1556) = v10;
    *(_DWORD *)(v3 + 1560) = v12;
    *(_DWORD *)(v3 + 1564) = &v10[4 * v9];
  }
  else
    *v5 = v4;
    *(_DWORD *)(v3 + 1560) = v5 + 1;
  v13 = EntityClassTree::getEntityTypeIdLegacy(788);
  v14 = *(int **)(v3 + 1560);
  if ( v14 == *(int **)(v3 + 1564) )
    v15 = *(_BYTE **)(v3 + 1556);
    v16 = ((char *)v14 - v15) >> 2;
    if ( !v16 )
      v16 = 1;
    v17 = v16 + (((char *)v14 - v15) >> 2);
    v18 = v16 + (((char *)v14 - v15) >> 2);
    if ( 0 != v17 >> 30 )
      v18 = 0x3FFFFFFF;
    if ( v17 < v16 )
    if ( v18 )
      if ( v18 >= 0x40000000 )
      v19 = (char *)operator new(4 * v18);
      v15 = *(_BYTE **)(v3 + 1556);
      v14 = *(int **)(v3 + 1560);
      v19 = 0;
    *(_DWORD *)&v19[(char *)v14 - v15] = v13;
    v20 = (int)&v19[(char *)v14 - v15];
    if ( 0 != ((char *)v14 - v15) >> 2 )
      _aeabi_memmove4(v19, v15);
    v21 = v20 + 4;
    if ( v15 )
      operator delete(v15);
    *(_DWORD *)(v3 + 1556) = v19;
    *(_DWORD *)(v3 + 1560) = v21;
    *(_DWORD *)(v3 + 1564) = &v19[4 * v18];
    *v14 = v13;
    *(_DWORD *)(v3 + 1560) = v14 + 1;
  v22 = EntityClassTree::getEntityTypeIdLegacy(789);
  v23 = *(int **)(v3 + 1560);
  if ( v23 == *(int **)(v3 + 1564) )
    v24 = *(_BYTE **)(v3 + 1556);
    v25 = ((char *)v23 - v24) >> 2;
    if ( !v25 )
      v25 = 1;
    v26 = v25 + (((char *)v23 - v24) >> 2);
    v27 = v25 + (((char *)v23 - v24) >> 2);
    if ( 0 != v26 >> 30 )
      v27 = 0x3FFFFFFF;
    if ( v26 < v25 )
    if ( v27 )
      if ( v27 >= 0x40000000 )
      v28 = (char *)operator new(4 * v27);
      v24 = *(_BYTE **)(v3 + 1556);
      v23 = *(int **)(v3 + 1560);
      v28 = 0;
    *(_DWORD *)&v28[(char *)v23 - v24] = v22;
    v29 = (int)&v28[(char *)v23 - v24];
    if ( 0 != ((char *)v23 - v24) >> 2 )
      _aeabi_memmove4(v28, v24);
    v30 = v29 + 4;
    if ( v24 )
      operator delete(v24);
    *(_DWORD *)(v3 + 1556) = v28;
    *(_DWORD *)(v3 + 1560) = v30;
    *(_DWORD *)(v3 + 1564) = &v28[4 * v27];
    *v23 = v22;
    *(_DWORD *)(v3 + 1560) = v23 + 1;
  return v3;
}


MonsterPlacerItem *__fastcall MonsterPlacerItem::~MonsterPlacerItem(MonsterPlacerItem *this)
{
  MonsterPlacerItem *v1; // r5@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  int v5; // r1@4
  void *v6; // r0@4
  int v7; // r1@5
  void *v8; // r0@5
  int v9; // r1@6
  void *v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@7
  int v13; // r1@8
  void *v14; // r0@8
  int v15; // r1@9
  void *v16; // r0@9
  int v17; // r1@10
  void *v18; // r0@10
  int v19; // r1@11
  void *v20; // r0@11
  int v21; // r1@12
  void *v22; // r0@12
  int v23; // r1@13
  void *v24; // r0@13
  int v25; // r1@14
  void *v26; // r0@14
  int v27; // r1@15
  void *v28; // r0@15
  int v29; // r1@16
  void *v30; // r0@16
  int v31; // r1@17
  void *v32; // r0@17
  int v33; // r1@18
  void *v34; // r0@18
  int v35; // r1@19
  void *v36; // r0@19
  int v37; // r1@20
  void *v38; // r0@20
  int v39; // r1@21
  void *v40; // r0@21
  int v41; // r1@22
  void *v42; // r0@22
  int v43; // r1@23
  void *v44; // r0@23
  int v45; // r1@24
  void *v46; // r0@24
  int v47; // r1@25
  void *v48; // r0@25
  int v49; // r1@26
  void *v50; // r0@26
  int v51; // r1@27
  void *v52; // r0@27
  int v53; // r1@28
  void *v54; // r0@28
  int v55; // r1@29
  void *v56; // r0@29
  int v57; // r1@30
  void *v58; // r0@30
  int v59; // r1@31
  void *v60; // r0@31
  int v61; // r1@32
  void *v62; // r0@32
  int v63; // r1@33
  void *v64; // r0@33
  int v65; // r1@34
  void *v66; // r0@34
  int v67; // r1@35
  void *v68; // r0@35
  int v69; // r1@36
  void *v70; // r0@36
  int v71; // r1@37
  void *v72; // r0@37
  int v73; // r1@38
  void *v74; // r0@38
  int v75; // r1@39
  void *v76; // r0@39
  int v77; // r1@40
  void *v78; // r0@40
  int v79; // r1@41
  void *v80; // r0@41
  int v81; // r1@42
  void *v82; // r0@42
  int v83; // r1@43
  void *v84; // r0@43
  int v85; // r1@44
  void *v86; // r0@44
  int v87; // r1@45
  void *v88; // r0@45
  int v89; // r1@46
  void *v90; // r0@46
  int v91; // r1@47
  void *v92; // r0@47
  unsigned int *v94; // r2@49
  signed int v95; // r1@51
  unsigned int *v96; // r2@53
  signed int v97; // r1@55
  unsigned int *v98; // r2@57
  signed int v99; // r1@59
  unsigned int *v100; // r2@61
  signed int v101; // r1@63
  unsigned int *v102; // r2@65
  signed int v103; // r1@67
  unsigned int *v104; // r2@69
  signed int v105; // r1@71
  unsigned int *v106; // r2@73
  signed int v107; // r1@75
  unsigned int *v108; // r2@77
  signed int v109; // r1@79
  unsigned int *v110; // r2@81
  signed int v111; // r1@83
  unsigned int *v112; // r2@85
  signed int v113; // r1@87
  unsigned int *v114; // r2@89
  signed int v115; // r1@91
  unsigned int *v116; // r2@93
  signed int v117; // r1@95
  unsigned int *v118; // r2@97
  signed int v119; // r1@99
  unsigned int *v120; // r2@101
  signed int v121; // r1@103
  unsigned int *v122; // r2@105
  signed int v123; // r1@107
  unsigned int *v124; // r2@109
  signed int v125; // r1@111
  unsigned int *v126; // r2@113
  signed int v127; // r1@115
  unsigned int *v128; // r2@117
  signed int v129; // r1@119
  unsigned int *v130; // r2@121
  signed int v131; // r1@123
  unsigned int *v132; // r2@125
  signed int v133; // r1@127
  unsigned int *v134; // r2@129
  signed int v135; // r1@131
  unsigned int *v136; // r2@133
  signed int v137; // r1@135
  unsigned int *v138; // r2@137
  signed int v139; // r1@139
  unsigned int *v140; // r2@141
  signed int v141; // r1@143
  unsigned int *v142; // r2@145
  signed int v143; // r1@147
  unsigned int *v144; // r2@149
  signed int v145; // r1@151
  unsigned int *v146; // r2@153
  signed int v147; // r1@155
  unsigned int *v148; // r2@157
  signed int v149; // r1@159
  unsigned int *v150; // r2@161
  signed int v151; // r1@163
  unsigned int *v152; // r2@165
  signed int v153; // r1@167
  unsigned int *v154; // r2@169
  signed int v155; // r1@171
  unsigned int *v156; // r2@173
  signed int v157; // r1@175
  unsigned int *v158; // r2@177
  signed int v159; // r1@179
  unsigned int *v160; // r2@181
  signed int v161; // r1@183
  unsigned int *v162; // r2@185
  signed int v163; // r1@187
  unsigned int *v164; // r2@189
  signed int v165; // r1@191
  unsigned int *v166; // r2@193
  signed int v167; // r1@195
  unsigned int *v168; // r2@197
  signed int v169; // r1@199
  unsigned int *v170; // r2@201
  signed int v171; // r1@203
  unsigned int *v172; // r2@205
  signed int v173; // r1@207
  unsigned int *v174; // r2@209
  signed int v175; // r1@211
  unsigned int *v176; // r2@213
  signed int v177; // r1@215
  unsigned int *v178; // r2@217
  signed int v179; // r1@219
  unsigned int *v180; // r2@221
  signed int v181; // r1@223
  unsigned int *v182; // r2@225
  signed int v183; // r1@227

  v1 = this;
  *(_DWORD *)this = &off_2702DE8;
  v2 = (void *)*((_DWORD *)this + 389);
  if ( v2 )
    operator delete(v2);
  v3 = *((_DWORD *)v1 + 387);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v94 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
    }
    else
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = *((_DWORD *)v1 + 379);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v5 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 371);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v7 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 363);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v9 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 355);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v11 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 347);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v13 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *((_DWORD *)v1 + 339);
  v16 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v15 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *((_DWORD *)v1 + 331);
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v17 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = *((_DWORD *)v1 + 323);
  v20 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v19 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = *((_DWORD *)v1 + 315);
  v22 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v21 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = *((_DWORD *)v1 + 307);
  v24 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v23 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = *((_DWORD *)v1 + 299);
  v26 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v25 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = *((_DWORD *)v1 + 291);
  v28 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v27 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = *((_DWORD *)v1 + 283);
  v30 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v29 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = *((_DWORD *)v1 + 275);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v31 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = *((_DWORD *)v1 + 267);
  v34 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v33 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = *((_DWORD *)v1 + 259);
  v36 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v35 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = *((_DWORD *)v1 + 251);
  v38 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v37 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = *((_DWORD *)v1 + 243);
  v40 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v39 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = *((_DWORD *)v1 + 235);
  v42 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v41 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = *((_DWORD *)v1 + 227);
  v44 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v43 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = *((_DWORD *)v1 + 219);
  v46 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v136 = (unsigned int *)(v45 - 4);
        v137 = __ldrex(v136);
      while ( __strex(v137 - 1, v136) );
      v137 = (*v136)--;
    if ( v137 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = *((_DWORD *)v1 + 211);
  v48 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v47 - 4);
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  v49 = *((_DWORD *)v1 + 203);
  v50 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v49 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = *((_DWORD *)v1 + 195);
  v52 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v51 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = *((_DWORD *)v1 + 187);
  v54 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v53 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = *((_DWORD *)v1 + 179);
  v56 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v55 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = *((_DWORD *)v1 + 171);
  v58 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v57 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
  v59 = *((_DWORD *)v1 + 163);
  v60 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v59 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  v61 = *((_DWORD *)v1 + 155);
  v62 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v61 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = *((_DWORD *)v1 + 147);
  v64 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v63 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = *((_DWORD *)v1 + 139);
  v66 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v156 = (unsigned int *)(v65 - 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = *((_DWORD *)v1 + 131);
  v68 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v67 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = *((_DWORD *)v1 + 123);
  v70 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v69 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = *((_DWORD *)v1 + 115);
  v72 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v71 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = *((_DWORD *)v1 + 107);
  v74 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v73 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
  v75 = *((_DWORD *)v1 + 99);
  v76 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v75 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
  v77 = *((_DWORD *)v1 + 91);
  v78 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v77 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = *((_DWORD *)v1 + 83);
  v80 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v79 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = *((_DWORD *)v1 + 75);
  v82 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v81 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  v83 = *((_DWORD *)v1 + 67);
  v84 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v83 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = *((_DWORD *)v1 + 59);
  v86 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v85 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  v87 = *((_DWORD *)v1 + 51);
  v88 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v87 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j__ZdlPv_9(v88);
  v89 = *((_DWORD *)v1 + 43);
  v90 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v89 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j__ZdlPv_9(v90);
  v91 = *((_DWORD *)v1 + 35);
  v92 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v91 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j__ZdlPv_9(v92);
  Item::~Item(v1);
  return v1;
}


int __fastcall MonsterPlacerItem::spawnMobAt(int a1, BlockSource *this, int a3, int a4, ItemInstance *a5)
{
  BlockSource *v5; // r9@1
  int v6; // r8@1
  Level *v7; // r0@1
  Level *v8; // r6@1
  char *v9; // r0@1
  int v11; // r4@1
  void *v16; // r0@1
  int v17; // r0@3
  int v18; // r4@3
  int (__fastcall *v19)(Level *, BlockSource *, int *); // r3@4
  void *v20; // r0@8
  void *v21; // r0@9
  void *v22; // r0@10
  unsigned int *v24; // r2@12
  signed int v25; // r1@14
  unsigned int *v26; // r2@16
  signed int v27; // r1@18
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  int v32; // [sp+4h] [bp-4Ch]@4
  int v33; // [sp+8h] [bp-48h]@3
  int v34; // [sp+10h] [bp-40h]@3
  int v35; // [sp+14h] [bp-3Ch]@1
  int v36; // [sp+18h] [bp-38h]@1
  int v37; // [sp+1Ch] [bp-34h]@1
  int v38; // [sp+20h] [bp-30h]@8

  v5 = this;
  v6 = a4;
  v7 = (Level *)BlockSource::getLevel(this);
  v8 = v7;
  v9 = Level::getRandom(v7);
  _R5 = Random::_genRandInt32((Random *)v9);
  v11 = ItemInstance::getAuxValue(a5);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v36);
  __asm
  {
    VMOV            S0, R5
    VCVT.F64.U32    D8, S0
  }
  sub_21E8190((void **)&v36, "minecraft", (_BYTE *)9);
  EntityTypeIdWithoutCategories(&v35, v11, 0);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v37, &v35);
    VLDR            D0, =2.32830644e-10
    VLDR            S2, =360.0
    VMUL.F64        D0, D8, D0
  v16 = (void *)(v35 - 12);
    VCVT.F32.F64    S0, D0
    VMUL.F32        S16, S0, S2
  if ( !_ZF )
    v24 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v33 = 0;
  __asm { VSTR            S16, [SP,#0x50+var_44] }
  EntityFactory::createSpawnedEntity((Entity **)&v34, (const void **)&v36, 0, v6, &v33);
  v17 = v34;
  v18 = 0;
  if ( v34 )
    v19 = *(int (__fastcall **)(Level *, BlockSource *, int *))(*(_DWORD *)v8 + 44);
    v34 = 0;
    v32 = v17;
    v18 = v19(v8, v5, &v32);
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 32))();
    v32 = 0;
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 32))();
  v20 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  return v18;
}


void __fastcall MonsterPlacerItem::~MonsterPlacerItem(MonsterPlacerItem *this)
{
  MonsterPlacerItem *v1; // r0@1

  v1 = MonsterPlacerItem::~MonsterPlacerItem(this);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall MonsterPlacerItem::isValidAuxValue(MonsterPlacerItem *this, int a2)
{
  int v2; // r4@1
  signed int result; // r0@8
  int v4; // r0@9

  v2 = a2;
  if ( EntityClassTree::isOfType(a2, 68404)
    || EntityClassTree::isOfType(v2, 2869)
    || EntityClassTree::isOfType(v2, 788)
    || EntityClassTree::isOfType(v2, 789)
    || EntityClassTree::isOfType(v2, 319)
    || EntityClassTree::isOfType(v2, 312)
    || EntityClassTree::isOfType(v2, 318) )
  {
    result = 0;
  }
  else
    v4 = lookupActualEntityType(v2);
    result = EntityClassTree::isTypeInstanceOf(v4, 256);
  return result;
}
