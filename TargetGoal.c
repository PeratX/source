

signed int __fastcall TargetGoal::_canReach(TargetGoal *this, Entity *a2)
{
  TargetGoal *v2; // r5@1
  Entity *v3; // r4@1
  int v4; // r0@2
  _DWORD *v5; // r0@3
  float v6; // r1@3
  _DWORD *v7; // r5@3
  int v8; // r7@4
  int v9; // r6@4
  int v10; // r5@4
  float v11; // r1@4
  int v12; // r0@4
  signed int v13; // r4@4
  Path *v14; // r0@11
  Path *v16; // [sp+0h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( j_Mob::getNavigation(*((Mob **)this + 13)) )
  {
    *((_DWORD *)v2 + 10) = j_Random::_genRandInt32((Random *)(*((_DWORD *)v2 + 13) + 552)) % 5 + 10;
    v4 = j_Mob::getNavigation(*((Mob **)v2 + 13));
    (*(void (__fastcall **)(Path **))(*(_DWORD *)v4 + 16))(&v16);
    if ( v16 )
    {
      v5 = (_DWORD *)j_Path::last(v16);
      v7 = v5;
      if ( v5 )
      {
        v8 = *v5;
        v9 = j_mce::Math::floor(*((mce::Math **)v3 + 18), v6);
        v10 = v7[2];
        v12 = j_mce::Math::floor(*((mce::Math **)v3 + 20), v11);
        v13 = 0;
        if ( (unsigned int)((v8 - v9) * (v8 - v9) + (v10 - v12) * (v10 - v12)) < 3 )
          v13 = 1;
      }
      else
      if ( v16 )
        v14 = j_Path::~Path(v16);
        j_operator delete((void *)v14);
    }
    else
      v13 = 0;
  }
  else
    v13 = 0;
  return v13;
}


int __fastcall TargetGoal::~TargetGoal(TargetGoal *this)
{
  TargetGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


int __fastcall TargetGoal::getFollowDistance(TargetGoal *this)
{
  TargetGoal *v1; // r4@1
  AttributeInstance *v2; // r0@1
  int result; // r0@2

  v1 = this;
  v2 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)this + 13) + 1000))();
  if ( v2 )
    result = j_j_j__ZNK17AttributeInstance15getCurrentValueEv_1(v2);
  else
    result = *((_DWORD *)v1 + 5);
  return result;
}


signed int __fastcall TargetGoal::canContinueToUse(TargetGoal *this)
{
  int v2; // r0@1
  Entity *v3; // r5@1
  signed int v4; // r6@4
  AttributeInstance *v5; // r0@6
  signed int v11; // r6@8
  Sensing *v13; // r0@13
  int v14; // r0@15

  _R4 = this;
  v2 = j_Entity::getTarget(*((Entity **)this + 13));
  v3 = (Entity *)v2;
  if ( v2 )
  {
    if ( !(*(int (**)(void))(*(_DWORD *)v2 + 316))() )
      goto LABEL_18;
    if ( !*((_BYTE *)_R4 + 48) )
    {
      v4 = j_Entity::getPlayerOwner(*((Entity **)_R4 + 13));
      if ( v4 == j_Entity::getPlayerOwner(v3) )
      {
        if ( j_Entity::getPlayerOwner(v3) )
          goto LABEL_18;
      }
    }
    v5 = (AttributeInstance *)(*(int (**)(void))(**((_DWORD **)_R4 + 13) + 1000))();
    if ( v5 )
      _R0 = j_AttributeInstance::getCurrentValue(v5);
      __asm { VMOV            S16, R0 }
    else
      __asm { VLDR            S16, [R4,#0x14] }
    _R0 = j_Entity::distanceToSqr(*((Entity **)_R4 + 13), v3);
    __asm
      VMUL.F32        S0, S16, S16
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    if ( *((_BYTE *)_R4 + 24) )
      v13 = (Sensing *)j_Mob::getSensing(*((Mob **)_R4 + 13));
      if ( j_Sensing::canSee(v13, v3) == 1 )
        *((_DWORD *)_R4 + 11) = 0;
      else
        v14 = *((_DWORD *)_R4 + 11);
        *((_DWORD *)_R4 + 11) = v14 + 1;
        if ( v14 >= *((_DWORD *)_R4 + 7) )
        {
LABEL_18:
          v11 = 0;
          (*(void (**)(void))(**((_DWORD **)_R4 + 13) + 340))();
          return v11;
        }
    v11 = 1;
    if ( j_Entity::hasCategory((int)v3, 1) == 1 )
      if ( j_Abilities::getBool((int)v3 + 4320, (int **)&Abilities::INVULNERABLE) != 1 )
        return 1;
  }
  else
    v11 = 0;
  return v11;
}


signed int __fastcall TargetGoal::_canAttack(int a1, Entity *a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r6@1
  int v9; // r10@1
  signed int v10; // r7@4
  int v11; // r8@9
  __int64 v12; // r0@9
  int v13; // r0@9
  signed int v15; // r0@20
  Level *v17; // r0@26
  Sensing *v18; // r0@31
  double v19; // r0@32
  unsigned int v20; // r0@33
  int v21; // r7@35
  int *v22; // r6@35
  char v23; // r0@36
  ClassID *v24; // r0@37
  __int64 v25; // kr00_8@39
  int v26; // r0@39
  void *v27; // r0@39
  char v32; // r10@41
  int v33; // r6@59
  unsigned int *v34; // r2@61
  signed int v35; // r1@63
  void *v36; // r5@69
  int v37; // r1@69
  void *v38; // r0@69
  unsigned int *v39; // r2@78
  signed int v40; // r1@80
  int v41; // [sp+10h] [bp-88h]@36
  void *ptr; // [sp+14h] [bp-84h]@36
  unsigned int v43; // [sp+18h] [bp-80h]@33
  int v44; // [sp+1Ch] [bp-7Ch]@33
  int v45; // [sp+20h] [bp-78h]@33
  signed int v46; // [sp+24h] [bp-74h]@33
  int v47; // [sp+28h] [bp-70h]@33
  int v48; // [sp+2Ch] [bp-6Ch]@72
  __int64 v49; // [sp+30h] [bp-68h]@28
  __int64 v50; // [sp+38h] [bp-60h]@28
  __int64 v51; // [sp+40h] [bp-58h]@15
  __int64 v52; // [sp+48h] [bp-50h]@15
  int v53; // [sp+50h] [bp-48h]@14
  int v54; // [sp+54h] [bp-44h]@14
  unsigned int v55; // [sp+58h] [bp-40h]@9
  unsigned int v56; // [sp+5Ch] [bp-3Ch]@9

  _R4 = a3;
  v7 = a4;
  _R5 = a2;
  v9 = a1;
  if ( a3 )
  {
    if ( a2 == (Entity *)a3 )
    {
      v10 = 0;
    }
    else if ( j_Entity::hasCategory(a3, 0x40000) )
    else
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 316))(_R4) != 1 )
        return 0;
      if ( *(_DWORD *)(_R4 + 48) )
      {
        v11 = j_Entity::getLevel(_R5);
        v12 = j_Entity::getOwnerId((Entity *)&v55, (int)_R5);
        v13 = j_Level::fetchEntity(v11, SHIDWORD(v12), v55, v56, 0);
        if ( v13 != _R4 || !v13 || *(_BYTE *)(v9 + 48) )
        {
          if ( (*(int (__fastcall **)(Entity *, int, int))(*(_DWORD *)_R5 + 968))(_R5, _R4, v7) != 1 )
            return 0;
          if ( *(_BYTE *)(v9 + 48)
            || ((*(void (__fastcall **)(int *, Entity *))(*(_DWORD *)_R5 + 500))(&v53, _R5), (v53 & v54) == -1) )
          {
            v15 = j_Entity::hasCategory(_R4, 1);
            _ZF = v7 == 0;
            if ( !v7 )
              _ZF = v15 == 1;
            if ( _ZF )
            {
              if ( j_Abilities::getBool(_R4 + 4320, (int **)&Abilities::INVULNERABLE) )
                return 0;
              v17 = (Level *)j_Entity::getLevel(*(Entity **)(v9 + 52));
              if ( !j_Level::getDifficulty(v17) )
            }
          }
          else
            (*(void (__fastcall **)(__int64 *, Entity *))(*(_DWORD *)_R5 + 500))(&v52, _R5);
            (*(void (__fastcall **)(__int64 *, int))(*(_DWORD *)_R4 + 500))(&v51, _R4);
            if ( !(v52 ^ v51) )
              return 0;
            (*(void (__fastcall **)(__int64 *))(**(_DWORD **)(v9 + 52) + 500))(&v50);
            (*(void (__fastcall **)(__int64 *, int))(*(_DWORD *)_R4 + 500))(&v49, _R4);
            if ( !(v50 ^ v49) )
          if ( a5 == 1
            && (v18 = (Sensing *)j_Mob::getSensing(*(Mob **)(v9 + 52)), j_Sensing::canSee(v18, (const Entity *)_R4) != 1) )
            v10 = 0;
            v19 = *(double *)(v9 + 8);
            if ( LODWORD(v19) == HIDWORD(v19) )
              goto LABEL_89;
            v44 = 0;
            v45 = 0;
            v46 = 1065353216;
            v47 = 0;
            LODWORD(v19) = &v46;
            v20 = sub_21E6254(v19);
            v43 = v20;
            if ( v20 == 1 )
              v48 = 0;
              v22 = &v48;
            else
              if ( v20 >= 0x40000000 )
                sub_21E57F4();
              v21 = 4 * v20;
              v22 = (int *)j_operator new(4 * v20);
              j___aeabi_memclr4_0((int)v22, v21);
            ptr = v22;
            j_Entity::initParams(_R5, (VariantParameterList *)&ptr);
            sub_21E94B4((void **)&v41, "other");
            v23 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
            __dmb();
            if ( !(v23 & 1) )
              v24 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
              if ( v24 )
              {
                ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v24);
                j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
              }
            v25 = ClassID::getID<Entity>(void)::id;
            v26 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (unsigned __int64 *)&ptr,
                    (int **)&v41);
            *(_QWORD *)v26 = v25;
            *(_DWORD *)(v26 + 8) = _R4;
            v27 = (void *)(v41 - 12);
            if ( (int *)(v41 - 12) != &dword_28898C0 )
              v39 = (unsigned int *)(v41 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
              else
                v40 = (*v39)--;
              if ( v40 <= 0 )
                j_j_j_j__ZdlPv_9(v27);
            _R6 = *(_QWORD *)(v9 + 8);
            if ( (_DWORD)_R6 == HIDWORD(_R6) )
              v32 = 0;
              __asm { VLDR            S16, =0.0 }
              if ( a6 )
                {
                  __asm
                  {
                    VLDR            S0, [R4,#0x48]
                    VLDR            S6, [R5,#0x48]
                    VLDR            S2, [R4,#0x4C]
                    VLDR            S8, [R5,#0x4C]
                    VSUB.F32        S0, S6, S0
                    VLDR            S4, [R4,#0x50]
                    VSUB.F32        S2, S8, S2
                    VLDR            S10, [R5,#0x50]
                    VSUB.F32        S4, S10, S4
                    VMUL.F32        S0, S0, S0
                    VMUL.F32        S2, S2, S2
                    VMUL.F32        S4, S4, S4
                    VADD.F32        S0, S2, S0
                    VLDR            S2, [R6,#0x20]
                    VADD.F32        S0, S0, S4
                    VCMPE.F32       S0, S2
                    VMRS            APSR_nzcv, FPSCR
                  }
                  if ( _NF ^ _VF
                    && j_EntityFilterGroup::evaluate((EntityFilterGroup *)_R6, _R5, (const VariantParameterList *)&ptr) == 1 )
                    __asm
                    {
                      VLDR            S0, [R6,#0x20]
                      VCMPE.F32       S16, S0
                      VMRS            APSR_nzcv, FPSCR
                    }
                    if ( _NF ^ _VF )
                      __asm { VMOV.F32        S16, S0 }
                      v32 = 1;
                      *a6 = _R6;
                    else
                  LODWORD(_R6) = _R6 + 48;
                }
                while ( HIDWORD(_R6) != (_DWORD)_R6 );
                  if ( _NF ^ _VF )
                    if ( j_EntityFilterGroup::evaluate(
                           (EntityFilterGroup *)_R6,
                           _R5,
                           (const VariantParameterList *)&ptr) == 1 )
                      __asm { VLDR            S0, [R6,#0x20] }
                      __asm
                      {
                        VCMPE.F32       S16, S0
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( _NF ^ _VF )
                        __asm { VMOVLT.F32      S16, S0 }
            v33 = v44;
            while ( v33 )
              v36 = (void *)v33;
              v37 = *(_DWORD *)(v33 + 8);
              v33 = *(_DWORD *)v33;
              v38 = (void *)(v37 - 12);
              if ( (int *)(v37 - 12) != &dword_28898C0 )
                v34 = (unsigned int *)(v37 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v35 = __ldrex(v34);
                  while ( __strex(v35 - 1, v34) );
                else
                  v35 = (*v34)--;
                if ( v35 <= 0 )
                  j_j_j_j__ZdlPv_9(v38);
              j_operator delete(v36);
            j___aeabi_memclr4_0((int)ptr, 4 * v43);
            if ( ptr && &v48 != ptr )
              j_operator delete(ptr);
            if ( v32 & 1 )
LABEL_89:
              v10 = 1;
              v10 = 0;
        }
      }
  }
  else
    v10 = 0;
  return v10;
}


int __fastcall TargetGoal::TargetGoal(int a1, int a2, float a3, int a4, int a5, char a6, int a7, char a8)
{
  char v8; // r6@1
  unsigned __int64 *v9; // r7@1
  int v10; // r5@1
  int v11; // r4@1
  int result; // r0@1

  v8 = a4;
  v9 = (unsigned __int64 *)LODWORD(a3);
  v10 = a2;
  v11 = a1;
  j_Goal::Goal((Goal *)a1);
  *(_DWORD *)v11 = &off_271B014;
  j_std::vector<MobDescriptor,std::allocator<MobDescriptor>>::vector(v11 + 8, v9);
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_8]
    VSTR            S0, [R4,#0x14]
  }
  *(_BYTE *)(v11 + 24) = v8;
  *(_DWORD *)(v11 + 28) = a5;
  *(_BYTE *)(v11 + 32) = a6;
  *(_DWORD *)(v11 + 36) = 0;
  *(_DWORD *)(v11 + 40) = 0;
  *(_DWORD *)(v11 + 44) = 0;
  *(_BYTE *)(v11 + 48) = a8;
  result = v11;
  *(_DWORD *)(v11 + 52) = v10;
  return result;
}


void __fastcall TargetGoal::~TargetGoal(TargetGoal *this)
{
  TargetGoal *v1; // r4@1
  FilterGroup *v2; // r0@1
  FilterGroup *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271B014;
  v3 = (FilterGroup *)(*((_QWORD *)this + 1) >> 32);
  v2 = (FilterGroup *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
      v2 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v2) + 48);
    while ( v3 != v2 );
    v2 = (FilterGroup *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall TargetGoal::~TargetGoal(TargetGoal *this)
{
  TargetGoal::~TargetGoal(this);
}


int __fastcall TargetGoal::start(int result)
{
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  return result;
}


signed int __fastcall TargetGoal::_canAttack(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r8@1
  int v5; // r4@1
  Level *v6; // r0@3
  Entity *v7; // r6@4
  int v8; // ST00_4@5
  int v9; // r0@7
  unsigned __int8 v10; // vf@7
  signed int v11; // r1@10
  signed int v12; // r0@11
  char v14; // [sp+8h] [bp-28h]@4

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( !a2 )
    return 0;
  if ( j_Entity::hasCategory(a2, 1) == 1 )
  {
    v6 = (Level *)j_Entity::getLevel(*(Entity **)(v5 + 52));
    if ( !j_Level::getDifficulty(v6) )
      return 0;
  }
  v7 = *(Entity **)(v5 + 52);
  j_BlockPos::BlockPos((BlockPos *)&v14, *(float *)(v3 + 72), *(float *)(v3 + 76), *(float *)(v3 + 80));
  if ( j_Entity::isWithinRestriction(v7, (const BlockPos *)&v14) != 1 )
  v8 = *(_BYTE *)(v5 + 24);
  if ( (*(int (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v5 + 44))(v5, *(_DWORD *)(v5 + 52), v3, v4) != 1 )
  if ( *(_BYTE *)(v5 + 32) )
    v9 = *(_DWORD *)(v5 + 40);
    v10 = __OFSUB__(v9--, 1);
    *(_DWORD *)(v5 + 40) = v9;
    if ( (unsigned __int8)((v9 < 0) ^ v10) | (v9 == 0) )
    {
      *(_DWORD *)(v5 + 36) = 0;
    }
    else
      v11 = *(_DWORD *)(v5 + 36);
      if ( v11 )
        goto LABEL_14;
    v12 = j_TargetGoal::_canReach((TargetGoal *)v5, (Entity *)v3);
    v11 = 2;
    if ( v12 )
      v11 = 1;
    *(_DWORD *)(v5 + 36) = v11;
LABEL_14:
    if ( v11 == 2 )
  return 1;
}


signed int __fastcall TargetGoal::isTargetGoal(TargetGoal *this)
{
  return 1;
}
