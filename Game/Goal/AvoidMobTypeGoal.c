

void __fastcall AvoidMobTypeGoal::~AvoidMobTypeGoal(AvoidMobTypeGoal *this)
{
  AvoidMobTypeGoal *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  FilterGroup *v4; // r0@2
  FilterGroup *v5; // r5@2
  Path *v6; // r0@7
  Path *v7; // r0@8
  unsigned int v8; // r1@9
  int v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_2725204;
  v2 = *((_DWORD *)this + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v5 = (FilterGroup *)(*(_QWORD *)((char *)v1 + 60) >> 32);
  v4 = (FilterGroup *)*(_QWORD *)((char *)v1 + 60);
  if ( v4 != v5 )
    do
      v4 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v4) + 48);
    while ( v5 != v4 );
    v4 = (FilterGroup *)*((_DWORD *)v1 + 15);
  if ( v4 )
    j_operator delete((void *)v4);
  *(_DWORD *)v1 = &off_27251CC;
  v6 = (Path *)*((_DWORD *)v1 + 14);
  if ( v6 )
    v7 = j_Path::~Path(v6);
    j_operator delete((void *)v7);
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 8) = &off_271A67C;
  v8 = (unsigned int)v1 + 32;
  *(_DWORD *)(v8 + 4) = 0;
  *(_DWORD *)(v8 + 8) = -1;
  *(_DWORD *)(v8 + 12) = -1;
  *(_BYTE *)(v8 + 20) = 0;
  v9 = *((_DWORD *)v1 + 12);
  if ( v9 )
    j_Level::unregisterTemporaryPointer(v9, v8);
  *((_DWORD *)v1 + 12) = 0;
  j_Goal::~Goal(v1);
  j_operator delete((void *)v1);
}


const void **__fastcall AvoidMobTypeGoal::appendDebugInfo(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_21E7408(a2, "AvoidMobType[", 0xDu);
  sub_21E72F0(v2, (const void **)(v3 + 72));
  return sub_21E7408(v2, "]", 1u);
}


void __fastcall AvoidMobTypeGoal::~AvoidMobTypeGoal(AvoidMobTypeGoal *this)
{
  AvoidMobTypeGoal::~AvoidMobTypeGoal(this);
}


AvoidMobTypeGoal *__fastcall AvoidMobTypeGoal::~AvoidMobTypeGoal(AvoidMobTypeGoal *this)
{
  AvoidMobTypeGoal *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  FilterGroup *v4; // r0@2
  FilterGroup *v5; // r5@2
  unsigned int *v7; // r2@8
  signed int v8; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2725204;
  v2 = *((_DWORD *)this + 18);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v5 = (FilterGroup *)(*(_QWORD *)((char *)v1 + 60) >> 32);
  v4 = (FilterGroup *)*(_QWORD *)((char *)v1 + 60);
  if ( v4 != v5 )
    do
      v4 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v4) + 48);
    while ( v5 != v4 );
    v4 = (FilterGroup *)*((_DWORD *)v1 + 15);
  if ( v4 )
    j_operator delete((void *)v4);
  j_AvoidMobGoal::~AvoidMobGoal(v1);
  return v1;
}


int __fastcall AvoidMobTypeGoal::AvoidMobTypeGoal(int a1, int a2, int a3, float a4, float a5, float a6, float a7)
{
  unsigned __int64 *v7; // r5@1
  int v12; // r4@1
  float v14; // [sp+0h] [bp-18h]@0
  float v15; // [sp+4h] [bp-14h]@0

  v7 = (unsigned __int64 *)a3;
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_4]
    VLDR            S2, [SP,#0x18+arg_8]
  }
  v12 = a1;
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
  j_AvoidMobGoal::AvoidMobGoal((AvoidMobGoal *)a1, (Mob *)a2, a4, a5, v14, v15);
  *(_DWORD *)v12 = &off_2725204;
  j_std::vector<MobDescriptor,std::allocator<MobDescriptor>>::vector(v12 + 60, v7);
  *(_DWORD *)(v12 + 72) = &unk_28898CC;
  return v12;
}


int (**__fastcall AvoidMobTypeGoal::findNearestEntityToAvoid(AvoidMobTypeGoal *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  AvoidMobTypeGoal *v1; // r7@1
  void **v2; // r10@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r5@3
  int *v6; // r4@3
  int (**v7)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r11@4
  EntityFilterGroup *v8; // r8@4
  int v9; // r4@6
  BlockSource *v10; // r5@6
  int v11; // r6@6
  char *v12; // r0@6
  char *v13; // r6@6
  int v14; // r1@6 OVERLAPPED
  int v15; // r2@6 OVERLAPPED
  _DWORD *v16; // r5@6
  signed int v17; // r0@6
  signed int v18; // r6@9
  unsigned int v19; // r11@10
  int v20; // r8@10
  int v21; // r10@11
  int *v22; // r1@12
  int v23; // r0@12
  int *v25; // r4@13
  signed int v32; // r5@19
  unsigned int *v33; // r2@21
  signed int v34; // r1@23
  unsigned int *v35; // r2@25
  signed int v36; // r1@27
  unsigned int *v37; // r2@37
  signed int v38; // r1@39
  int v39; // r10@49
  char v40; // r0@49
  ClassID *v41; // r0@50
  __int64 v42; // kr08_8@52
  int v43; // r0@52
  void *v44; // r0@52
  int v45; // r10@53
  char v46; // r0@53
  ClassID *v47; // r0@54
  __int64 v48; // kr10_8@56
  int v49; // r0@56
  void *v50; // r0@56
  int v51; // r10@58
  char v52; // r0@58
  ClassID *v53; // r0@59
  __int64 v54; // kr18_8@61
  int v55; // r0@61
  void *v56; // r0@61
  int (**v57)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@75
  int v58; // r6@79
  unsigned int *v59; // r2@81
  signed int v60; // r1@83
  void *v61; // r5@89
  int v62; // r1@89
  void *v63; // r0@89
  int (**v65)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+Ch] [bp-B4h]@5
  EntityFilterGroup *v66; // [sp+18h] [bp-A8h]@10
  EntityFilterGroup *v67; // [sp+24h] [bp-9Ch]@4
  _DWORD *ptr; // [sp+30h] [bp-90h]@11
  int v69; // [sp+38h] [bp-88h]@37
  int v70; // [sp+40h] [bp-80h]@58
  int v71; // [sp+48h] [bp-78h]@25
  int v72; // [sp+50h] [bp-70h]@21
  int v73; // [sp+54h] [bp-6Ch]@6
  int v74; // [sp+58h] [bp-68h]@6
  int v75; // [sp+5Ch] [bp-64h]@6
  char v76; // [sp+60h] [bp-60h]@6
  void *v77; // [sp+7Ch] [bp-44h]@1
  unsigned int v78; // [sp+80h] [bp-40h]@1
  int v79; // [sp+84h] [bp-3Ch]@1
  int v80; // [sp+88h] [bp-38h]@1
  signed int v81; // [sp+8Ch] [bp-34h]@1
  int v82; // [sp+90h] [bp-30h]@1
  int v83; // [sp+94h] [bp-2Ch]@77

  v1 = this;
  v2 = &v77;
  v79 = 0;
  v80 = 0;
  HIDWORD(v3) = 10;
  v81 = 1065353216;
  v82 = 0;
  LODWORD(v3) = &v81;
  v4 = sub_21E6254(v3);
  v78 = v4;
  if ( v4 == 1 )
  {
    v83 = 0;
    v6 = &v83;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = (int *)j_operator new(4 * v4);
    j___aeabi_memclr4_0((int)v6, v5);
  v77 = v6;
  v7 = 0;
  v8 = (EntityFilterGroup *)*(_QWORD *)((char *)v1 + 60);
  v67 = (EntityFilterGroup *)(*(_QWORD *)((char *)v1 + 60) >> 32);
  if ( v8 == v67 )
    goto LABEL_79;
  v65 = &pthread_create;
  while ( 2 )
    v9 = *((_DWORD *)v8 + 8);
    v10 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
    v11 = *((_DWORD *)v1 + 2);
    v73 = v9;
    v74 = v9;
    v75 = v9;
    j_AABB::grow((AABB *)&v76, (const Vec3 *)(v11 + 264), (int)&v73);
    v12 = j_BlockSource::fetchEntities(v10, (Entity *)v11, (const AABB *)&v76);
    v13 = v12;
    *(_QWORD *)&v14 = *(_QWORD *)v12;
    v16 = 0;
    v17 = v15 - v14;
    if ( (v15 - v14) >> 2 )
    {
      if ( (unsigned int)(v17 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v16 = j_operator new(v17);
      *(_QWORD *)&v14 = *(_QWORD *)v13;
    }
    v18 = v15 - v14;
    if ( 0 == (v15 - v14) >> 2 )
      ptr = v16;
      v32 = 1;
      goto LABEL_70;
    v66 = v8;
    v19 = v18 >> 2;
    j___aeabi_memmove4_0((int)v16, v14);
    v20 = (int)&v16[v18 >> 2];
    sub_1B1210C((int)v16, &v16[v19], 2 * (31 - __clz(v19)), (int)v1);
    if ( v18 < 65 )
      sub_1B12506(v16, &v16[v19], (int)v1);
      goto LABEL_45;
    v21 = (int)(v16 + 16);
    sub_1B12506(v16, v16 + 16, (int)v1);
    ptr = v16;
    if ( v19 != 16 )
      v22 = v16 + 16;
      v23 = (int)(v16 + 15);
      do
      {
        _R2 = *v22;
        v25 = (int *)v23;
        __asm
        {
          VLDR            S0, [R2,#0x48]
          VLDR            S2, [R2,#0x4C]
          VLDR            S4, [R2,#0x50]
        }
        while ( 1 )
          _R6 = *v25;
          _R5 = *((_DWORD *)v1 + 2);
          __asm
          {
            VLDR            S6, [R6,#0x48]
            VLDR            S12, [R5,#0x48]
            VLDR            S8, [R6,#0x4C]
            VLDR            S14, [R5,#0x4C]
            VSUB.F32        S6, S12, S6
            VSUB.F32        S12, S12, S0
            VLDR            S10, [R6,#0x50]
            VSUB.F32        S8, S14, S8
            VLDR            S1, [R5,#0x50]
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
          *v22 = _R6;
          v22 = v25;
          --v25;
        v21 += 4;
        v23 += 4;
        *v22 = _R2;
        v22 = (int *)v21;
      }
      while ( v21 != v20 );
      v16 = ptr;
      if ( !v19 )
LABEL_69:
        v8 = v66;
        v2 = &v77;
        v32 = 1;
        goto LABEL_70;
    while ( 1 )
LABEL_45:
      if ( !*(_DWORD *)(*(_DWORD *)(*v16 + 48) + 140)
        || (*(int (**)(void))(*(_DWORD *)*v16 + 652))()
        || j_Entity::hasCategory(*v16, 2) != 1
        || (*(int (**)(void))(*(_DWORD *)*v16 + 172))() )
        goto LABEL_68;
      sub_21E94B4((void **)&v72, "self");
      v39 = *((_DWORD *)v1 + 2);
      v40 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
      __dmb();
      if ( !(v40 & 1) )
        v41 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
        if ( v41 )
          ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v41);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
      v42 = ClassID::getID<Mob>(void)::id;
      v43 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&v77,
              (int **)&v72);
      *(_QWORD *)v43 = v42;
      *(_DWORD *)(v43 + 8) = v39;
      v44 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v72 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
      sub_21E94B4((void **)&v71, "other");
      v45 = *v16;
      v46 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      if ( !(v46 & 1) )
        v47 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v47 )
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v47);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      v48 = ClassID::getID<Entity>(void)::id;
      v49 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int **)&v71);
      *(_QWORD *)v49 = v48;
      *(_DWORD *)(v49 + 8) = v45;
      v50 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v71 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      if ( !j_Entity::getTarget(*((Entity **)v1 + 2)) )
        sub_21E94B4((void **)&v69, "target");
        j_std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
          (unsigned __int64 *)&v77,
          (int **)&v69);
        v56 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) == &dword_28898C0 )
          goto LABEL_67;
        v37 = (unsigned int *)(v69 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
LABEL_42:
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v56);
LABEL_41:
        v38 = (*v37)--;
        goto LABEL_42;
      sub_21E94B4((void **)&v70, "target");
      v51 = j_Entity::getTarget(*((Entity **)v1 + 2));
      v52 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      if ( !(v52 & 1) )
        v53 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v53 )
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v53);
      v54 = ClassID::getID<Entity>(void)::id;
      v55 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int **)&v70);
      *(_QWORD *)v55 = v54;
      *(_DWORD *)(v55 + 8) = v51;
      v56 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v70 - 4);
          goto LABEL_42;
        goto LABEL_41;
LABEL_67:
      if ( j_EntityFilterGroup::evaluate(v66, *((const Entity **)v1 + 2), (const VariantParameterList *)&v77) == 1 )
        break;
LABEL_68:
      ++v16;
      if ( v16 == (_DWORD *)v20 )
        goto LABEL_69;
    v8 = v66;
    *((_DWORD *)v1 + 4) = *((_DWORD *)v66 + 9);
    *((_DWORD *)v1 + 5) = *((_DWORD *)v66 + 10);
    EntityInteraction::setInteractText((int *)v1 + 18, (int *)(*(_DWORD *)(*v16 + 48) + 32));
    v57 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))*v16;
    v32 = 0;
    v65 = v57;
    v2 = &v77;
LABEL_70:
    if ( ptr )
      j_operator delete(ptr);
    if ( v32 )
      v8 = (EntityFilterGroup *)((char *)v8 + 48);
      if ( v8 == v67 )
        v7 = 0;
        goto LABEL_79;
      continue;
    break;
  v7 = v65;
LABEL_79:
  v58 = v79;
  while ( v58 )
    v61 = (void *)v58;
    v62 = *(_DWORD *)(v58 + 8);
    v58 = *(_DWORD *)v58;
    v63 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v62 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
      else
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v63);
    j_operator delete(v61);
  j___aeabi_memclr4_0((int)v77, 4 * v78);
  if ( v77 && v2 + 6 != v77 )
    j_operator delete(v77);
  return v7;
}
