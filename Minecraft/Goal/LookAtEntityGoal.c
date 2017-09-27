

Goal *__fastcall LookAtEntityGoal::LookAtEntityGoal(Goal *a1, int a2, int a3, int a4, int a5, int a6, signed int a7, signed int a8)
{
  int v8; // r11@1
  int v9; // r7@1
  int v10; // r8@1
  Goal *v11; // r4@1
  int v12; // r1@1

  v8 = a4;
  v9 = a3;
  v10 = a2;
  v11 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v11 = &off_271A690;
  *((_DWORD *)v11 + 2) = &off_271A67C;
  *((_DWORD *)v11 + 3) = 0;
  *((_DWORD *)v11 + 5) = -1;
  *((_DWORD *)v11 + 4) = -1;
  *((_DWORD *)v11 + 6) = 0;
  *((_BYTE *)v11 + 28) = 0;
  *((_DWORD *)v11 + 8) = v9;
  *((_DWORD *)v11 + 9) = a7 / 2;
  *((_DWORD *)v11 + 10) = a8 / 2;
  *((_DWORD *)v11 + 11) = 0;
  v12 = (int)v11 + 48;
  *(_DWORD *)v12 = a5;
  *(_DWORD *)(v12 + 4) = a6;
  *(_DWORD *)(v12 + 8) = v8;
  *((_DWORD *)v11 + 22) = 0;
  *((_DWORD *)v11 + 20) = 0;
  *((_DWORD *)v11 + 21) = 0;
  *((_DWORD *)v11 + 18) = 0;
  *((_DWORD *)v11 + 19) = 0;
  *((_DWORD *)v11 + 16) = 0;
  *((_DWORD *)v11 + 17) = 0;
  *((_DWORD *)v11 + 15) = &off_26F1930;
  *((_DWORD *)v11 + 23) = v10;
  j_Goal::setRequiredControlFlags(v11, 2);
  return v11;
}


char *__fastcall LookAtEntityGoal::start(LookAtEntityGoal *this)
{
  LookAtEntityGoal *v1; // r4@1
  Level *v2; // r0@1
  char *result; // r0@1
  int v4; // r1@1
  int v5; // r6@1
  unsigned int v6; // r5@3
  unsigned int v7; // r0@3
  int v8; // r1@3

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 23));
  result = j_Level::getRandom(v2);
  v4 = *((_QWORD *)v1 + 6) >> 32;
  v5 = *((_QWORD *)v1 + 6);
  if ( v4 > v5 )
  {
    if ( v4 == v5 )
    {
      v8 = 0;
    }
    else
      v6 = v4 - v5;
      v7 = j_Random::_genRandInt32((Random *)result);
      v8 = v7 % v6;
      result = (char *)(v7 / v6);
    v5 += v8;
  }
  *((_DWORD *)v1 + 11) = v5;
  return result;
}


int __fastcall LookAtEntityGoal::tick(LookAtEntityGoal *this)
{
  LookAtEntityGoal *v1; // r4@1
  LookControl *v2; // r5@1
  int v3; // r0@2
  unsigned int v4; // r2@3
  unsigned int v5; // r3@3
  int v6; // r0@4
  int v7; // r1@4
  int v8; // r0@7
  __int64 v9; // r2@7
  int result; // r0@7
  char v11; // [sp+8h] [bp-20h]@7

  v1 = this;
  v2 = (LookControl *)j_Mob::getLookControl(*((Mob **)this + 23));
  if ( !*((_BYTE *)v1 + 28) )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( v3 )
    {
      v4 = *((_DWORD *)v1 + 4);
      v5 = *((_DWORD *)v1 + 5);
      if ( (v4 & v5) != -1 )
      {
        v6 = j_Level::fetchEntity(v3, v4 & v5, v4, v5, 0);
        *((_DWORD *)v1 + 3) = v6;
        if ( !v6 )
          *((_DWORD *)v1 + 3) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 6),
                                  v7,
                                  *((_QWORD *)v1 + 2),
                                  *((_QWORD *)v1 + 2) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 28) = 1;
  }
  j_Entity::getAttachPos((AABB *)&v11, *((_DWORD *)v1 + 3), 3, 0);
  v8 = (*(int (**)(void))(**((_DWORD **)v1 + 23) + 940))();
  LODWORD(v9) = 1092616192;
  HIDWORD(v9) = v8;
  j_LookControl::setLookAt(v2, (const Vec3 *)&v11, v9);
  result = *((_DWORD *)v1 + 11) - 1;
  *((_DWORD *)v1 + 11) = result;
  return result;
}


signed int __fastcall LookAtEntityGoal::canContinueToUse(LookAtEntityGoal *this)
{
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r0@7
  Entity *v8; // r5@9
  int v9; // r0@10
  unsigned int v10; // r2@11
  unsigned int v11; // r3@11
  int v12; // r0@12
  int v13; // r1@12
  signed int result; // r0@16
  int v20; // r0@18
  unsigned int v21; // r2@19
  unsigned int v22; // r3@19
  int v23; // r0@20
  int v24; // r1@20
  signed int v25; // r1@23

  _R4 = this;
  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((_DWORD *)_R4 + 4);
      v4 = *((_DWORD *)_R4 + 5);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)_R4 + 3) = v5;
        if ( !v5 )
          *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 6),
                                   v6,
                                   *((_QWORD *)_R4 + 2),
                                   *((_QWORD *)_R4 + 2) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 28) = 1;
  }
  v7 = *((_DWORD *)_R4 + 3);
  if ( !v7 || (*(int (**)(void))(*(_DWORD *)v7 + 316))() != 1 )
    goto LABEL_28;
  v8 = (Entity *)*((_DWORD *)_R4 + 23);
  if ( !*((_BYTE *)_R4 + 28) )
    v9 = *((_DWORD *)_R4 + 6);
    if ( v9 )
      v10 = *((_DWORD *)_R4 + 4);
      v11 = *((_DWORD *)_R4 + 5);
      if ( (v10 & v11) != -1 )
        v12 = j_Level::fetchEntity(v9, v10 & v11, v10, v11, 0);
        *((_DWORD *)_R4 + 3) = v12;
        if ( !v12 )
                                   v13,
  _R0 = j_Entity::distanceToSqr(v8, *((const Entity **)_R4 + 3));
  __asm
    VLDR            S0, [R4,#0x20]
    VMOV            S2, R0
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( !*((_BYTE *)_R4 + 28) )
      v20 = *((_DWORD *)_R4 + 6);
      if ( v20 )
        v21 = *((_DWORD *)_R4 + 4);
        v22 = *((_DWORD *)_R4 + 5);
        if ( (v21 & v22) != -1 )
        {
          v23 = j_Level::fetchEntity(v20, v21 & v22, v21, v22, 0);
          *((_DWORD *)_R4 + 3) = v23;
          if ( !v23 )
            *((_DWORD *)_R4 + 3) = j_Level::fetchEntity(
                                     *((_DWORD *)_R4 + 6),
                                     v24,
                                     *((_QWORD *)_R4 + 2),
                                     *((_QWORD *)_R4 + 2) >> 32,
                                     0);
        }
      *((_BYTE *)_R4 + 28) = 1;
    v25 = j_LookAtEntityGoal::_withinFieldOfView(_R4, *((Entity **)_R4 + 3));
    result = 0;
    if ( v25 == 1 && *((_DWORD *)_R4 + 11) > 0 )
      result = 1;
  else
LABEL_28:
  return result;
}


int __fastcall LookAtEntityGoal::stop(LookAtEntityGoal *this)
{
  LookAtEntityGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 5) = -1;
  *((_BYTE *)this + 28) = 0;
  result = *((_DWORD *)this + 6);
  if ( result )
    result = j_Level::unregisterTemporaryPointer(result, (unsigned int)v1 + 8);
  *((_DWORD *)v1 + 6) = 0;
  return result;
}


int __fastcall LookAtEntityGoal::canUse(LookAtEntityGoal *this)
{
  Level *v2; // r0@1
  char *v3; // r0@1
  int v8; // r11@1
  int v9; // r6@1
  const Vec3 *v10; // r1@3
  BlockSource *v11; // r0@3
  char *v12; // r0@3
  char *v13; // r6@3
  int v14; // r1@3 OVERLAPPED
  int v15; // r2@3 OVERLAPPED
  signed int v16; // r0@3
  void *v17; // r0@5
  signed int v18; // r7@6
  unsigned int v19; // r8@7
  int v20; // r10@7
  int v21; // r7@8
  int v22; // r0@9
  int *v23; // r1@9
  int *v25; // r5@10
  _BYTE *v28; // r5@15
  int v29; // r0@17
  unsigned int v30; // r2@18
  unsigned int v31; // r3@18
  int v32; // r0@19
  unsigned int *v34; // r6@26
  unsigned int v35; // r0@27
  int v36; // r4@29
  int *v37; // r7@29
  int v38; // r4@30
  char v39; // r0@30
  ClassID *v40; // r0@31
  __int64 v41; // kr00_8@33
  int v42; // r0@33
  void *v43; // r0@33
  Entity *v44; // r4@34
  char v45; // r0@34
  ClassID *v46; // r0@35
  __int64 v47; // kr08_8@37
  int v48; // r0@37
  void *v49; // r0@37
  int v50; // r8@39
  char v51; // r0@39
  ClassID *v52; // r0@40
  __int64 v53; // kr10_8@42
  int v54; // r0@42
  void *v55; // r0@42
  signed int v56; // r8@46
  void *v57; // r6@49
  void *v58; // r7@52
  int v59; // r1@52
  void *v60; // r0@52
  unsigned int *v61; // r2@53
  signed int v62; // r1@55
  unsigned int *v63; // r2@70
  signed int v64; // r1@72
  unsigned int *v65; // r2@74
  signed int v66; // r1@76
  Entity *v67; // r7@78
  int v69; // r0@82
  unsigned int *v70; // r2@83
  signed int v71; // r1@85
  int v72; // r0@99
  unsigned int v73; // [sp+8h] [bp-B8h]@26
  LookAtEntityGoal *v74; // [sp+Ch] [bp-B4h]@26
  int v75; // [sp+14h] [bp-ACh]@26
  int v76; // [sp+18h] [bp-A8h]@26
  int v77; // [sp+40h] [bp-80h]@39
  int v78; // [sp+48h] [bp-78h]@34
  int v79; // [sp+50h] [bp-70h]@30
  void *v80; // [sp+54h] [bp-6Ch]@30
  unsigned int v81; // [sp+58h] [bp-68h]@27
  void *ptr; // [sp+5Ch] [bp-64h]@27
  int v83; // [sp+60h] [bp-60h]@27
  signed int v84; // [sp+64h] [bp-5Ch]@27
  int v85; // [sp+68h] [bp-58h]@27
  int v86; // [sp+6Ch] [bp-54h]@62
  int v87; // [sp+70h] [bp-50h]@3
  int v88; // [sp+74h] [bp-4Ch]@3
  int v89; // [sp+78h] [bp-48h]@3
  char v90; // [sp+7Ch] [bp-44h]@3

  _R9 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 23));
  v3 = j_Level::getRandom(v2);
  _R0 = j_Random::_genRandInt32((Random *)v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
  }
  v8 = 0;
  v9 = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VLDR            S2, [R9,#0x38]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    return v9;
  v10 = (const Vec3 *)(*((_DWORD *)_R9 + 23) + 264);
  v87 = *((_DWORD *)_R9 + 8);
  v88 = v87;
  v89 = v87;
  j_AABB::grow((AABB *)&v90, v10, (int)&v87);
  v11 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R9 + 23));
  v12 = j_BlockSource::fetchEntities(v11, *((Entity **)_R9 + 23), (const AABB *)&v90);
  v13 = v12;
  *(_QWORD *)&v14 = *(_QWORD *)v12;
  v16 = v15 - v14;
  if ( 0 != (v15 - v14) >> 2 )
    if ( (unsigned int)(v16 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v17 = j_operator new(v16);
    *(_QWORD *)&v14 = *(_QWORD *)v13;
    v8 = (int)v17;
  v18 = v15 - v14;
  if ( !((v15 - v14) >> 2) )
    goto LABEL_15;
  v19 = v18 >> 2;
  j___aeabi_memmove4_0(v8, v14);
  v20 = v8 + 4 * (v18 >> 2);
  sub_1A2E70C(v8, (_DWORD *)(v8 + 4 * v19), 2 * (31 - __clz(v19)), (int)_R9);
  if ( v18 < 65 )
    sub_1A2EB06((_DWORD *)v8, (_DWORD *)(v8 + 4 * v19), (int)_R9);
    goto LABEL_26;
  v21 = v8 + 64;
  sub_1A2EB06((_DWORD *)v8, (_DWORD *)(v8 + 64), (int)_R9);
  if ( v19 == 16 )
  v22 = v8 + 60;
  v23 = (int *)(v8 + 64);
  do
    _R2 = *v23;
    v25 = (int *)v22;
    __asm
    {
      VLDR            S0, [R2,#0x48]
      VLDR            S2, [R2,#0x4C]
      VLDR            S4, [R2,#0x50]
    }
    while ( 1 )
      _R6 = *v25;
      _R4 = *((_DWORD *)_R9 + 23);
      __asm
      {
        VLDR            S6, [R6,#0x48]
        VLDR            S12, [R4,#0x48]
        VLDR            S8, [R6,#0x4C]
        VLDR            S14, [R4,#0x4C]
        VSUB.F32        S6, S12, S6
        VSUB.F32        S12, S12, S0
        VLDR            S10, [R6,#0x50]
        VSUB.F32        S8, S14, S8
        VLDR            S1, [R4,#0x50]
        VSUB.F32        S14, S14, S2
        VSUB.F32        S10, S1, S10
        VSUB.F32        S1, S1, S4
        VMUL.F32        S6, S6, S6
        VMUL.F32        S12, S12, S12
        VMUL.F32        S8, S8, S8
        VMUL.F32        S14, S14, S14
        VMUL.F32        S10, S10, S10
        VADD.F32        S6, S8, S6
        VMUL.F32        S8, S1, S1
        VADD.F32        S12, S14, S12
        VADD.F32        S6, S6, S10
        VADD.F32        S8, S12, S8
        VCMPE.F32       S8, S6
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        break;
      *v23 = _R6;
      v23 = v25;
      --v25;
    v21 += 4;
    v22 += 4;
    *v23 = _R2;
    v23 = (int *)v21;
  while ( v21 != v20 );
  if ( v19 )
LABEL_26:
    v73 = (unsigned int)_R9 + 8;
    v74 = (LookAtEntityGoal *)((char *)_R9 + 16);
    v76 = v8 + 4 * v19;
    v75 = v8;
    v34 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id;
    do
      ptr = 0;
      v83 = 0;
      v84 = 1065353216;
      v85 = 0;
      v35 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v84)));
      v81 = v35;
      if ( v35 == 1 )
        v86 = 0;
        v37 = &v86;
      else
        if ( v35 >= 0x40000000 )
          sub_21E57F4();
        v36 = 4 * v35;
        v37 = (int *)j_operator new(4 * v35);
        j___aeabi_memclr4_0((int)v37, v36);
      v80 = v37;
      sub_21E94B4((void **)&v79, "self");
      v38 = *((_DWORD *)_R9 + 23);
      v39 = *(_BYTE *)v34;
      __dmb();
      if ( !(v39 & 1) )
        v40 = (ClassID *)j_j___cxa_guard_acquire_0(v34);
        if ( v40 )
        {
          ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v40);
          j_j___cxa_guard_release_0(v34);
        }
      v41 = ClassID::getID<Mob>(void)::id;
      v42 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&v80,
              (int **)&v79);
      *(_QWORD *)v42 = v41;
      *(_DWORD *)(v42 + 8) = v38;
      v43 = (void *)(v79 - 12);
      if ( (int *)(v79 - 12) != &dword_28898C0 )
        v63 = (unsigned int *)(v79 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
        else
          v64 = (*v63)--;
        if ( v64 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      sub_21E94B4((void **)&v78, "other");
      v44 = *(Entity **)v8;
      v45 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      if ( !(v45 & 1) )
        v46 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v46 )
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v46);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      v47 = ClassID::getID<Entity>(void)::id;
      v48 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int **)&v78);
      *(_QWORD *)v48 = v47;
      *(_DWORD *)(v48 + 8) = v44;
      v49 = (void *)(v78 - 12);
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v78 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
      if ( j_Entity::getTarget(*((Entity **)_R9 + 23)) )
        sub_21E94B4((void **)&v77, "target");
        v50 = j_Entity::getTarget(*((Entity **)_R9 + 23));
        v51 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
        __dmb();
        if ( !(v51 & 1) )
          v52 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          if ( v52 )
          {
            ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v52);
            j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          }
        v53 = ClassID::getID<Entity>(void)::id;
        v54 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)&v80,
                (int **)&v77);
        *(_QWORD *)v54 = v53;
        *(_DWORD *)(v54 + 8) = v50;
        v55 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v77 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
          else
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
      if ( j_EntityFilterGroup::evaluate(
             (LookAtEntityGoal *)((char *)_R9 + 60),
             *((const Entity **)_R9 + 23),
             (const VariantParameterList *)&v80) == 1 )
        if ( j_LookAtEntityGoal::_withinFieldOfView(_R9, *(Entity **)v8) == 1 )
          if ( j_Entity::getRiderIndex(*((Entity **)_R9 + 23), *(Entity **)v8) <= -1 )
            if ( j_Entity::isRider(*(Entity **)v8, *((Entity **)_R9 + 23)) )
            {
              v56 = 0;
            }
            else
              v67 = *(Entity **)v8;
              if ( *((_DWORD *)_R9 + 3) != *(_DWORD *)v8 )
              {
                _ZF = v67 == 0;
                if ( v67 )
                  _ZF = *((_DWORD *)v67 + 773) == 0;
                if ( _ZF )
                {
                  *((_DWORD *)_R9 + 3) = 0;
                  *(_DWORD *)v74 = -1;
                  *((_DWORD *)_R9 + 5) = -1;
                  *((_BYTE *)_R9 + 28) = 0;
                  v72 = *((_DWORD *)_R9 + 6);
                  if ( v72 )
                    j_Level::unregisterTemporaryPointer(v72, v73);
                  *((_DWORD *)_R9 + 6) = 0;
                }
                else
                  *(_QWORD *)v74 = *(_QWORD *)j_Entity::getUniqueID(*(Entity **)v8);
                  v69 = *((_DWORD *)v67 + 773);
                  *((_DWORD *)_R9 + 6) = v69;
                  j_Level::registerTemporaryPointer(v69, v73);
              }
              v56 = 2;
            v56 = 0;
          v56 = 0;
        v56 = 0;
      v57 = ptr;
      while ( v57 )
        v58 = v57;
        v59 = *((_DWORD *)v57 + 2);
        v57 = *(void **)v57;
        v60 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v59 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v60);
        j_operator delete(v58);
      j___aeabi_memclr4_0((int)v80, 4 * v81);
      if ( v80 && &v86 != v80 )
        j_operator delete(v80);
      v34 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id;
      if ( v56 )
      v8 += 4;
    while ( v8 != v76 );
    v8 = v75;
    v28 = (char *)_R9 + 28;
    goto LABEL_16;
LABEL_15:
  v28 = (char *)_R9 + 28;
LABEL_16:
  if ( !*v28 )
    v29 = *((_DWORD *)_R9 + 6);
    if ( v29 )
      v30 = *((_DWORD *)_R9 + 4);
      v31 = *((_DWORD *)_R9 + 5);
      if ( (v30 & v31) != -1 )
        v32 = j_Level::fetchEntity(v29, 0, v30, v31, 0);
        *((_DWORD *)_R9 + 3) = v32;
        if ( !v32 )
          *((_DWORD *)_R9 + 3) = j_Level::fetchEntity(
                                   *((_DWORD *)_R9 + 6),
                                   0,
                                   *((_QWORD *)_R9 + 2),
                                   *((_QWORD *)_R9 + 2) >> 32,
                                   0);
    *v28 = 1;
  v9 = *((_DWORD *)_R9 + 3) != 0;
  if ( v8 )
    j_operator delete((void *)v8);
  return v9;
}


void __fastcall LookAtEntityGoal::~LookAtEntityGoal(LookAtEntityGoal *this)
{
  LookAtEntityGoal *v1; // r4@1
  unsigned int v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A690;
  j_FilterGroup::~FilterGroup((LookAtEntityGoal *)((char *)this + 60));
  *((_DWORD *)v1 + 2) = &off_271A67C;
  v2 = (unsigned int)v1 + 8;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = -1;
  *(_DWORD *)(v2 + 12) = -1;
  *(_BYTE *)(v2 + 20) = 0;
  v3 = *((_DWORD *)v1 + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, v2);
  *((_DWORD *)v1 + 6) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall LookAtEntityGoal::~LookAtEntityGoal(LookAtEntityGoal *this)
{
  LookAtEntityGoal *v1; // r4@1
  unsigned int v2; // r1@1
  int v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271A690;
  j_FilterGroup::~FilterGroup((LookAtEntityGoal *)((char *)this + 60));
  *((_DWORD *)v1 + 2) = &off_271A67C;
  v2 = (unsigned int)v1 + 8;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = -1;
  *(_DWORD *)(v2 + 12) = -1;
  *(_BYTE *)(v2 + 20) = 0;
  v3 = *((_DWORD *)v1 + 6);
  if ( v3 )
    j_Level::unregisterTemporaryPointer(v3, v2);
  *((_DWORD *)v1 + 6) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


signed int __fastcall LookAtEntityGoal::_withinFieldOfView(LookAtEntityGoal *this, Entity *a2)
{
  int v5; // r0@1
  signed int v7; // r8@4
  float v20; // r1@4
  float v23; // [sp+0h] [bp-50h]@4
  float v26; // [sp+Ch] [bp-44h]@4

  _R9 = this;
  v5 = *((_DWORD *)this + 9);
  _ZF = v5 == 360;
  if ( v5 == 360 )
    _ZF = *((_DWORD *)_R9 + 10) == 360;
  if ( _ZF )
    goto LABEL_12;
  v7 = 0;
  j_Entity::getAttachPos((AABB *)&v26, (int)a2, 3, 0);
  j_Entity::getAttachPos((AABB *)&v23, *((_DWORD *)_R9 + 23), 3, 0);
  __asm
  {
    VLDR            S0, [SP,#0x50+var_50]
    VLDR            S4, [SP,#0x50+var_44]
    VLDR            S2, [SP,#0x50+var_48]
    VLDR            S6, [SP,#0x50+var_3C]
    VSUB.F32        S0, S4, S0
    VLDR            S16, [SP,#0x50+var_4C]
    VSUB.F32        S2, S6, S2
    VLDR            S18, [SP,#0x50+var_40]
    VMUL.F32        S4, S0, S0
    VCVT.F64.F32    D0, S0
    VMUL.F32        S6, S2, S2
    VCVT.F64.F32    D1, S2
    VMOV            R0, R1, D1
    VMOV            R2, R3, D0
    VADD.F32        S4, S6, S4
    VSQRT.F32       S20, S4
  }
  _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
    VSUB.F32        S2, S18, S16
    VCVT.F64.F32    D2, S20
  _R2 = &mce::Math::RADDEG;
    VMOV            R5, R10, D2
    VLDR            S0, [R2]
    VCVT.F64.F32    D8, S0
    VMOV            D0, R0, R1
    VMOV            R6, R7, D1
    VLDR            D1, =-90.0
    VMUL.F64        D0, D8, D0
    VADD.F64        D9, D0, D1
  _R4 = (*(int (**)(void))(**((_DWORD **)_R9 + 23) + 644))();
  _R0 = j_atan2(_R6, COERCE_DOUBLE(__PAIR__(_R10, _R5)));
    VMOV            S0, R4
    VMOV            D1, R0, R1
    VSUB.F64        D0, D9, D0
    VCVT.F32.F64    S0, D0
    VMOV            R0, S0
    VMUL.F64        D1, D8, D1
    VCVT.F32.F64    S2, D1
    VMOV            R4, S2
  _R6 = j_mce::Math::wrapDegrees((mce::Math *)LODWORD(_R0), *((float *)&_R0 + 1));
  _R0 = j_mce::Math::wrapDegrees((mce::Math *)(_R4 ^ 0x80000000), v20);
  __asm { VLDR            S0, [R9,#0x24] }
  _R0 &= 0x7FFFFFFFu;
    VCVT.F64.S32    D0, S0
    VMOV            S2, R0
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    return v7;
    VMOV            S0, R6
    VLDR            S2, [R9,#0x28]
    VABS.F32        S0, S0
    VCVT.F64.S32    D1, S2
    VCMPE.F64       D0, D1
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_12:
    v7 = 1;
  else
    v7 = 0;
  return v7;
}


void __fastcall LookAtEntityGoal::~LookAtEntityGoal(LookAtEntityGoal *this)
{
  LookAtEntityGoal::~LookAtEntityGoal(this);
}
