

Entity *__fastcall FollowCaravanGoal::tick(FollowCaravanGoal *this)
{
  FollowCaravanGoal *v1; // r4@1
  Entity *result; // r0@1
  int v3; // r5@2
  int v4; // r1@2
  int v15; // r0@10
  int v17; // r2@10
  unsigned int v18; // [sp+10h] [bp-38h]@2
  unsigned int v19; // [sp+14h] [bp-34h]@2

  v1 = this;
  result = (Entity *)(*(int (**)(void))(**((_DWORD **)this + 2) + 572))();
  if ( result == (Entity *)1 )
  {
    v3 = j_Entity::getLevel(*((Entity **)v1 + 2));
    (*(void (__fastcall **)(unsigned int *))(**((_DWORD **)v1 + 2) + 996))(&v18);
    result = (Entity *)j_Level::fetchEntity(v3, v4, v18, v19, 0);
    _R5 = result;
    if ( result )
    {
      result = (Entity *)j_Entity::isRemoved(result);
      if ( !result )
      {
        result = (Entity *)j_Entity::hasCategory((int)_R5, 2);
        if ( result == (Entity *)1 )
        {
          _R1 = j_Entity::distanceTo(*((Entity **)v1 + 2), _R5);
          _R0 = (Mob *)*((_DWORD *)v1 + 2);
          __asm
          {
            VLDR            S0, [R5,#0x48]
            VLDR            S4, [R5,#0x4C]
            VLDR            S2, [R0,#0x48]
            VLDR            S8, [R0,#0x4C]
            VSUB.F32        S2, S0, S2
            VLDR            S6, [R5,#0x50]
            VSUB.F32        S4, S4, S8
            VLDR            S10, [R0,#0x50]
            VSUB.F32        S6, S6, S10
            VMUL.F32        S0, S2, S2
            VMUL.F32        S8, S4, S4
            VMUL.F32        S10, S6, S6
            VADD.F32        S0, S8, S0
            VADD.F32        S0, S0, S10
            VLDR            S10, =0.0001
            VSQRT.F32       S8, S0
            VMOV            S0, R1
            VCMPE.F32       S8, S10
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            _R1 = *(&Vec3::ZERO + 1);
            _R2 = Vec3::ZERO;
            _R3 = dword_2822498;
          else
            __asm
            {
              VDIV.F32        S6, S6, S8
              VDIV.F32        S4, S4, S8
              VDIV.F32        S2, S2, S8
              VMOV            R3, S6
              VMOV            R1, S4
              VMOV            R2, S2
            }
            VMOV.F32        S2, #-2.0
            VMOV            S18, R3
            VADD.F32        S16, S0, S2
            VLDR            S0, =0.0
            VMOV            S2, R1
            VCMPE.F32       S16, #0.0
            __asm { VMOVLT.F32      S16, S0 }
            VMOV            S0, R2
            VMUL.F32        S22, S2, S16
            VMUL.F32        S20, S0, S16
          v15 = j_Mob::getNavigation(_R0);
          __asm { VMUL.F32        S0, S18, S16 }
          _R1 = *((_DWORD *)v1 + 2);
            VLDR            S2, [R1,#0x48]
            VLDR            S4, [R1,#0x4C]
            VLDR            S6, [R1,#0x50]
            VADD.F32        S2, S2, S20
            VADD.F32        S4, S4, S22
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0x48+var_44]
            VSTR            S4, [SP,#0x48+var_40]
            VSTR            S0, [SP,#0x48+var_3C]
          v17 = *((_DWORD *)v1 + 10);
          result = (Entity *)(*(int (**)(void))(*(_DWORD *)v15 + 12))();
        }
      }
    }
  }
  return result;
}


int __fastcall FollowCaravanGoal::stop(FollowCaravanGoal *this)
{
  FollowCaravanGoal *v1; // r4@1
  int result; // r0@1

  v1 = this;
  (*(void (**)(void))(**((_DWORD **)this + 2) + 984))();
  result = *((_DWORD *)v1 + 11);
  *((_DWORD *)v1 + 10) = result;
  return result;
}


signed int __fastcall FollowCaravanGoal::firstIsLeashed(FollowCaravanGoal *this, Mob *a2, int a3)
{
  FollowCaravanGoal *v3; // r5@1
  int v4; // r4@1
  Entity *v5; // r7@1
  signed int v6; // r6@2
  int v7; // r8@3
  int v8; // r1@3
  Entity *v9; // r0@3
  Mob *v10; // r7@3
  unsigned int v12; // [sp+8h] [bp-20h]@3
  unsigned int v13; // [sp+Ch] [bp-1Ch]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)this + 13) - 1 <= a3 )
  {
    v6 = 0;
  }
  else
    if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 572))(a2) == 1 )
    {
      v7 = j_Entity::getLevel(v5);
      (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v5 + 996))(&v12, v5);
      v9 = (Entity *)j_Level::fetchEntity(v7, v8, v12, v13, 0);
      v10 = v9;
      if ( v9 )
      {
        if ( j_Entity::isRemoved(v9) )
        {
          v6 = 0;
        }
        else if ( j_Entity::hasCategory((int)v10, 2) == 1 )
          if ( j_Entity::isLeashed(v10) )
            v6 = 1;
          else
            v6 = j_FollowCaravanGoal::firstIsLeashed(v3, v10, v4 + 1);
        else
      }
    }
  return v6;
}


void __fastcall FollowCaravanGoal::~FollowCaravanGoal(FollowCaravanGoal *this)
{
  FollowCaravanGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1
  unsigned int v4; // r1@6
  int v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2725650;
  v3 = (FilterGroup *)(*((_QWORD *)this + 7) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 14);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  *((_DWORD *)v1 + 4) = &off_271A990;
  v4 = (unsigned int)v1 + 16;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 8) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall FollowCaravanGoal::start(int result)
{
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 40) = *(_DWORD *)(result + 44);
  return result;
}


Goal *__fastcall FollowCaravanGoal::FollowCaravanGoal(Goal *a1, int a2, int a3, int a4, unsigned __int64 *a5)
{
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r5@1
  Goal *v8; // r6@1
  int v9; // r4@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  j_Goal::Goal(a1);
  *(_DWORD *)v8 = &off_2725650;
  *((_DWORD *)v8 + 2) = v7;
  *((_DWORD *)v8 + 4) = &off_271A990;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 6) = -1;
  v9 = (int)v8 + 24;
  *(_DWORD *)(v9 + 4) = -1;
  *(_DWORD *)(v9 + 8) = 0;
  *(_BYTE *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 16) = v6;
  *(_DWORD *)(v9 + 20) = v6;
  *(_DWORD *)(v9 + 24) = 0;
  *(_DWORD *)(v9 + 28) = v5;
  j_std::vector<MobDescriptor,std::allocator<MobDescriptor>>::vector((int)v8 + 56, a5);
  j_Goal::setRequiredControlFlags(v8, 1);
  return v8;
}


int __fastcall FollowCaravanGoal::checkCaravanType(FollowCaravanGoal *this, Mob *a2)
{
  Entity *v2; // r11@1
  FollowCaravanGoal *v3; // r6@1
  EntityFilterGroup *v4; // r8@3
  char v5; // r10@3
  void **v6; // r4@4
  int *v7; // r7@7
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int v10; // r0@16
  int v11; // r5@18
  char v12; // r0@19
  ClassID *v13; // r0@20
  __int64 v14; // kr08_8@22
  int v15; // r0@22
  void *v16; // r0@22
  int v17; // r7@24
  int v18; // r1@24
  Entity *v19; // r0@24
  Mob *v20; // r7@24
  signed int v21; // r4@27
  void *v22; // r7@31
  void *v23; // r11@34
  int v24; // r1@34
  void *v25; // r0@34
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  bool v28; // zf@46
  int (**v30)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+8h] [bp-78h]@4
  EntityFilterGroup *v31; // [sp+10h] [bp-70h]@3
  Mob *v32; // [sp+20h] [bp-60h]@1
  unsigned int v33; // [sp+28h] [bp-58h]@24
  unsigned int v34; // [sp+2Ch] [bp-54h]@24
  int v35; // [sp+38h] [bp-48h]@8
  void *v36; // [sp+3Ch] [bp-44h]@4
  unsigned int v37; // [sp+40h] [bp-40h]@16
  void *ptr; // [sp+44h] [bp-3Ch]@16
  int v39; // [sp+48h] [bp-38h]@16
  signed int v40; // [sp+4Ch] [bp-34h]@16
  int v41; // [sp+50h] [bp-30h]@16
  int v42; // [sp+54h] [bp-2Ch]@7

  v2 = a2;
  v3 = this;
  v32 = a2;
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 572))(a2) || j_Entity::isLeashed(v2) == 1 )
  {
    v4 = (EntityFilterGroup *)*((_QWORD *)v3 + 7);
    v5 = 0;
    v31 = (EntityFilterGroup *)(*((_QWORD *)v3 + 7) >> 32);
    if ( v4 != v31 )
    {
      v6 = &v36;
      v30 = &pthread_create;
      while ( 1 )
      {
        ptr = 0;
        v39 = 0;
        v40 = 1065353216;
        v41 = 0;
        v10 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v40)));
        v37 = v10;
        if ( v10 == 1 )
        {
          v42 = 0;
          v7 = &v42;
        }
        else
          if ( v10 >= 0x40000000 )
            sub_21E57F4();
          v11 = 4 * v10;
          v7 = (int *)j_operator new(4 * v10);
          j___aeabi_memclr4_0((int)v7, v11);
        v36 = v7;
        j_Entity::initParams(*((Entity **)v3 + 2), (VariantParameterList *)v6);
        sub_21E94B4((void **)&v35, "other");
        v12 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
        __dmb();
        if ( !(v12 & 1) )
          v13 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
          if ( v13 )
          {
            ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v13);
            j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
          }
        v14 = ClassID::getID<Mob>(void)::id;
        v15 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)v6,
                (int **)&v35);
        *(_QWORD *)v15 = v14;
        *(_DWORD *)(v15 + 8) = v2;
        v16 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v35 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        if ( j_EntityFilterGroup::evaluate(v4, *((const Entity **)v3 + 2), (const VariantParameterList *)v6) == 1 )
          v17 = j_Entity::getLevel(v2);
          (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v2 + 996))(&v33, v2);
          v19 = (Entity *)j_Level::fetchEntity(v17, v18, v33, v34, 0);
          v20 = v19;
          if ( v19 )
            if ( j_Entity::isRemoved(v19) || !j_Entity::hasCategory((int)v20, 2) )
            {
              v32 = v2;
              LOBYTE(v30) = 0;
              v21 = 1;
            }
            else
              LOBYTE(v30) = j_FollowCaravanGoal::checkCaravanType(v3, v20);
            v32 = v2;
            v21 = 1;
            LOBYTE(v30) = 1;
          v21 = 0;
        v22 = ptr;
        while ( v22 )
          v23 = v22;
          v24 = *((_DWORD *)v22 + 2);
          v22 = *(void **)v22;
          v25 = (void *)(v24 - 12);
          if ( (int *)(v24 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v24 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          j_operator delete(v23);
        j___aeabi_memclr4_0((int)v36, 4 * v37);
        if ( v36 && &v42 != v36 )
          j_operator delete(v36);
        v28 = v21 == 0;
        v6 = &v36;
        if ( !v28 )
          break;
        v2 = v32;
        v4 = (EntityFilterGroup *)((char *)v4 + 48);
        if ( v4 == v31 )
          goto LABEL_48;
      }
      v5 = (char)v30;
    }
  }
  else
LABEL_48:
  return v5 & 1;
}


void __fastcall FollowCaravanGoal::~FollowCaravanGoal(FollowCaravanGoal *this)
{
  FollowCaravanGoal::~FollowCaravanGoal(this);
}


signed int __fastcall FollowCaravanGoal::canContinueToUse(FollowCaravanGoal *this)
{
  signed int v2; // r5@2
  int v3; // r6@3
  int v4; // r1@3
  Entity *v5; // r0@3
  const Entity *v6; // r6@3
  signed int v12; // r0@8
  FollowCaravanGoal *v13; // r4@8
  signed int v14; // t1@8
  signed int v16; // t1@11
  unsigned int v17; // [sp+8h] [bp-18h]@3
  unsigned int v18; // [sp+Ch] [bp-14h]@3

  _R4 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 2) + 572))() != 1 )
    return 0;
  v2 = 0;
  if ( j_FollowCaravanGoal::firstIsLeashed(_R4, *((Mob **)_R4 + 2), 0) != 1 )
    return v2;
  v3 = j_Entity::getLevel(*((Entity **)_R4 + 2));
  (*(void (__fastcall **)(unsigned int *))(**((_DWORD **)_R4 + 2) + 996))(&v17);
  v5 = (Entity *)j_Level::fetchEntity(v3, v4, v17, v18, 0);
  v6 = v5;
  if ( !v5 )
  if ( j_Entity::isRemoved(v5) || j_Entity::hasCategory((int)v6, 2) != 1 )
  _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 2), v6);
  __asm
  {
    VLDR            S0, =676.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v16 = *((_DWORD *)_R4 + 12);
    v13 = (FollowCaravanGoal *)((char *)_R4 + 48);
    v12 = v16;
  else
    __asm
    {
      VLDR            S2, [R4,#0x2C]
      VMOV.F64        D2, #1.5
      VCVT.F64.F32    D1, S2
      VMUL.F64        D1, D1, D2
      VLDR            S0, [R4,#0x28]
      VCVT.F64.F32    D0, S0
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm { VLDR            D1, =1.2 }
      v2 = 1;
      __asm
      {
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VSTR            S0, [R4,#0x28]
      }
      *((_DWORD *)_R4 + 12) = 40;
      return v2;
    v14 = *((_DWORD *)_R4 + 12);
    v12 = v14;
    if ( !v14 )
      return 0;
  v2 = 1;
  if ( v12 >= 1 )
    *(_DWORD *)v13 = v12 - 1;
  return v2;
}


signed int __fastcall FollowCaravanGoal::canUse(FollowCaravanGoal *this)
{
  FollowCaravanGoal *v1; // r4@1
  signed int result; // r0@2
  BlockSource *v3; // r5@6
  char *v4; // r9@6
  int *v9; // r5@6 OVERLAPPED
  int v10; // r6@6 OVERLAPPED
  Mob *v11; // r8@7
  const Entity *v12; // r7@8
  int *v14; // r5@18
  int *v15; // r7@18
  const Entity *v16; // r6@20
  int v18; // [sp+0h] [bp-50h]@6
  signed int v19; // [sp+4h] [bp-4Ch]@6
  signed int v20; // [sp+8h] [bp-48h]@6
  char v21; // [sp+Ch] [bp-44h]@6

  v1 = this;
  if ( j_Entity::isLeashed(*((Entity **)this + 2)) )
    return 0;
  if ( (*(int (**)(void))(**((_DWORD **)v1 + 2) + 572))() )
  if ( j_Mob::getNavigation(*((Mob **)v1 + 2)) )
  {
    v3 = (BlockSource *)j_Entity::getRegion(*((Entity **)v1 + 2));
    v10 = *((_DWORD *)v1 + 2);
    v18 = 1091567616;
    v19 = 1082130432;
    v20 = 1091567616;
    j_AABB::grow((AABB *)&v21, (const Vec3 *)(v10 + 264), (int)&v18);
    v4 = j_BlockSource::fetchEntities(v3, (Entity *)v10, (const AABB *)&v21);
    __asm { VLDR            S16, =3.4028e38 }
    *(_QWORD *)&v9 = *(_QWORD *)v4;
    if ( v9 == (int *)v10 )
      goto LABEL_42;
    v11 = 0;
    do
    {
      v12 = (const Entity *)*v9;
      if ( j_Entity::hasCategory(*v9, 2) == 1
        && !j_Entity::isRemoved(v12)
        && (*(int (__fastcall **)(const Entity *))(*(_DWORD *)v12 + 572))(v12) == 1
        && !(*(int (__fastcall **)(const Entity *))(*(_DWORD *)v12 + 992))(v12) )
      {
        _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v12);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          v11 = v12;
        else
          __asm { VMOVGT.F32      S0, S16 }
        __asm { VMOV.F32        S16, S0 }
      }
      ++v9;
    }
    while ( (int *)v10 != v9 );
    if ( !v11 )
LABEL_42:
      v14 = (int *)(*(_QWORD *)v4 >> 32);
      v15 = (int *)*(_QWORD *)v4;
      result = 0;
      if ( v15 == v14 )
        return result;
      v11 = 0;
      do
        v16 = (const Entity *)*v15;
        if ( j_Entity::hasCategory(*v15, 2) == 1
          && !j_Entity::isRemoved(v16)
          && j_Entity::isLeashed(v16) == 1
          && !(*(int (__fastcall **)(const Entity *))(*(_DWORD *)v16 + 992))(v16) )
          _R0 = j_Entity::distanceToSqr(*((Entity **)v1 + 2), v16);
          __asm
          {
            VMOV            S0, R0
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            v11 = v16;
          else
            __asm { VMOVGT.F32      S0, S16 }
          __asm { VMOV.F32        S16, S0 }
        ++v15;
      while ( v14 != v15 );
    __asm { VMOV.F32        S0, #4.0 }
    result = 0;
    __asm
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) && v11 )
      if ( j_Entity::isLeashed(v11) || j_FollowCaravanGoal::firstIsLeashed(v1, v11, 1) == 1 )
        if ( (unsigned int)*((_QWORD *)v1 + 7) != *((_QWORD *)v1 + 7) >> 32
          && j_FollowCaravanGoal::checkCaravanType(v1, v11) != 1 )
          result = 0;
          (*(void (**)(void))(**((_DWORD **)v1 + 2) + 988))();
          result = 1;
      else
        result = 0;
  }
  else
  return result;
}


int __fastcall FollowCaravanGoal::~FollowCaravanGoal(FollowCaravanGoal *this)
{
  FollowCaravanGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1
  unsigned int v4; // r1@6
  int v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_2725650;
  v3 = (FilterGroup *)(*((_QWORD *)this + 7) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 14);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  *((_DWORD *)v1 + 4) = &off_271A990;
  v4 = (unsigned int)v1 + 16;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = -1;
  *(_DWORD *)(v4 + 12) = -1;
  *(_BYTE *)(v4 + 20) = 0;
  v5 = *((_DWORD *)v1 + 8);
  if ( v5 )
    j_Level::unregisterTemporaryPointer(v5, v4);
  *((_DWORD *)v1 + 8) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}
