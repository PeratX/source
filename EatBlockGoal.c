

void __fastcall EatBlockGoal::tick(EatBlockGoal *this, float a2)
{
  EatBlockGoal *v2; // r4@1
  int v3; // r0@1
  float v5; // r1@4
  float v7; // r1@4
  char v9; // r9@4
  int v10; // r0@4
  BlockSource *v11; // r0@5
  int v12; // r8@6
  int v13; // r5@6
  int v14; // r0@7
  Level *v15; // r0@9
  unsigned __int64 *v16; // r0@9
  int v21; // r7@10
  BlockSource *v22; // r0@10
  int v23; // r0@10
  double v24; // r0@11
  unsigned int v25; // r0@11
  int v26; // r6@13
  int *v27; // r5@13
  int v28; // r5@14
  char v29; // r0@14
  ClassID *v30; // r0@15
  __int64 v31; // kr00_8@17
  int v32; // r0@17
  void *v33; // r0@17
  int v34; // r5@19
  char v35; // r0@19
  ClassID *v36; // r0@20
  __int64 v37; // kr08_8@22
  int v38; // r0@22
  void *v39; // r0@22
  int v40; // r7@23
  unsigned int *v41; // r2@25
  signed int v42; // r1@27
  void *v43; // r6@33
  int v44; // r1@33
  void *v45; // r0@33
  unsigned int *v46; // r2@40
  signed int v47; // r1@42
  unsigned int *v48; // r2@44
  signed int v49; // r1@46
  int v50; // [sp+Ch] [bp-84h]@19
  int v51; // [sp+14h] [bp-7Ch]@14
  void *ptr; // [sp+18h] [bp-78h]@14
  unsigned int v53; // [sp+1Ch] [bp-74h]@11
  int v54; // [sp+20h] [bp-70h]@11
  int v55; // [sp+24h] [bp-6Ch]@11
  signed int v56; // [sp+28h] [bp-68h]@11
  int v57; // [sp+2Ch] [bp-64h]@11
  int v58; // [sp+30h] [bp-60h]@36
  char v59; // [sp+34h] [bp-5Ch]@10
  float v60; // [sp+38h] [bp-58h]@10
  unsigned __int8 v61; // [sp+44h] [bp-4Ch]@7
  unsigned __int8 v62; // [sp+48h] [bp-48h]@4

  v2 = this;
  v3 = *((_DWORD *)this + 2) - 1;
  if ( v3 <= 0 )
    v3 = 0;
  *((_DWORD *)v2 + 2) = v3;
  if ( v3 == 4 )
  {
    _R10 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 4) + 72), a2);
    _R7 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 4) + 76), v5);
    _R6 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v2 + 4) + 80), v7);
    v9 = BlockID::AIR;
    v10 = j_Entity::getRegion(*((Entity **)v2 + 4));
    j_BlockSource::getBlockID((BlockSource *)&v62, v10, _R10, _R7, _R6);
    if ( v62 != *(_BYTE *)(Block::mTallgrass + 4)
      || (v11 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 4)),
          j_BlockSource::getData(v11, _R10, _R7, _R6) != 1) )
    {
      v14 = j_Entity::getRegion(*((Entity **)v2 + 4));
      v12 = _R7 - 1;
      j_BlockSource::getBlockID((BlockSource *)&v61, v14, _R10, _R7 - 1, _R6);
      v13 = v61;
      if ( v61 != *(_BYTE *)(Block::mGrass + 4) )
        return;
      v9 = *(_BYTE *)(Block::mDirt + 4);
    }
    else
      v12 = _R7;
      v13 = *(_BYTE *)(Block::mTallgrass + 4) | 0x100;
    v15 = (Level *)j_Entity::getLevel(*((Entity **)v2 + 4));
    v16 = (unsigned __int64 *)j_Level::getGameRules(v15);
    if ( j_GameRules::getBool(v16, (int **)&GameRules::MOB_GRIEFING) == 1 )
      __asm
      {
        VMOV            S2, R10
        VMOV            S4, R7
        VMOV            S6, R6
        VCVT.F32.S32    S2, S2
        VMOV.F32        S0, #0.5
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
        VADD.F32        S16, S2, S0
        VADD.F32        S18, S4, S0
        VADD.F32        S20, S6, S0
      }
      v21 = j_Entity::getLevel(*((Entity **)v2 + 4));
      v22 = (BlockSource *)j_Entity::getRegion(*((Entity **)v2 + 4));
        VSTR            S16, [SP,#0x90+var_58]
        VSTR            S18, [SP,#0x90+var_54]
        VSTR            S20, [SP,#0x90+var_50]
      j_Level::broadcastDimensionEvent(v21, v22, 2001, (int)&v60, v13);
      v23 = j_Entity::getRegion(*((Entity **)v2 + 4));
      v59 = v9;
      j_BlockSource::setBlock(v23, _R10, v12, _R6, &v59, 3);
    (*(void (**)(void))(**((_DWORD **)v2 + 4) + 936))();
    v54 = 0;
    v55 = 0;
    v56 = 1065353216;
    v57 = 0;
    LODWORD(v24) = &v56;
    v25 = sub_21E6254(v24);
    v53 = v25;
    if ( v25 == 1 )
      v58 = 0;
      v27 = &v58;
      if ( v25 >= 0x40000000 )
        sub_21E57F4();
      v26 = 4 * v25;
      v27 = (int *)j_operator new(4 * v25);
      j___aeabi_memclr4_0((int)v27, v26);
    ptr = v27;
    sub_21E94B4((void **)&v51, "self");
    v28 = *((_DWORD *)v2 + 4);
    v29 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
    __dmb();
    if ( !(v29 & 1) )
      v30 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
      if ( v30 )
        ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v30);
        j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
    v31 = ClassID::getID<Mob>(void)::id;
    v32 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)&ptr,
            (int **)&v51);
    *(_QWORD *)v32 = v31;
    *(_DWORD *)(v32 + 8) = v28;
    v33 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v51 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    if ( j_Entity::getTarget(*((Entity **)v2 + 4)) )
      sub_21E94B4((void **)&v50, "target");
      v34 = j_Entity::getTarget(*((Entity **)v2 + 4));
      v35 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v35 & 1) )
        v36 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v36 )
        {
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v36);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v37 = ClassID::getID<Entity>(void)::id;
      v38 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&ptr,
              (int **)&v50);
      *(_QWORD *)v38 = v37;
      *(_DWORD *)(v38 + 8) = v34;
      v39 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v50 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        else
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
    j_EntityDefinitionDescriptor::executeTrigger(
      *(EntityDefinitionDescriptor **)((*(_QWORD *)((char *)v2 + 12) >> 32) + 48),
      (Entity *)(*(_QWORD *)((char *)v2 + 12) >> 32),
      (const DefinitionTrigger *)*(_QWORD *)((char *)v2 + 12),
      (const VariantParameterList *)&ptr);
    v40 = v54;
    while ( v40 )
      v43 = (void *)v40;
      v44 = *(_DWORD *)(v40 + 8);
      v40 = *(_DWORD *)v40;
      v45 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v44 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v45);
      j_operator delete(v43);
    j___aeabi_memclr4_0((int)ptr, 4 * v53);
    if ( ptr )
      if ( &v58 != ptr )
        j_operator delete(ptr);
  }
}


void __fastcall EatBlockGoal::~EatBlockGoal(EatBlockGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Goal::~Goal(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall EatBlockGoal::canContinueToUse(EatBlockGoal *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 2);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


int __fastcall EatBlockGoal::stop(int result)
{
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall EatBlockGoal::tick(EatBlockGoal *this, float a2)
{
  EatBlockGoal::tick(this, a2);
}


int __fastcall EatBlockGoal::start(EatBlockGoal *this)
{
  EatBlockGoal *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1

  v1 = this;
  *((_DWORD *)this + 2) = 40;
  v2 = j_Entity::getLevel(*((Entity **)this + 4));
  j_Level::broadcastEntityEvent(v2, *((_DWORD *)v1 + 4), 10, 0);
  v3 = j_Mob::getNavigation(*((Mob **)v1 + 4));
  return (*(int (**)(void))(*(_DWORD *)v3 + 40))();
}


Goal *__fastcall EatBlockGoal::EatBlockGoal(Goal *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  Goal *v5; // r4@1
  int v6; // r1@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_Goal::Goal(a1);
  v6 = (int)v5 + 8;
  *(_DWORD *)v5 = &off_272554C;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = v3;
  *(_DWORD *)(v6 + 8) = v4;
  j_Goal::setRequiredControlFlags(v5, 7);
  return v5;
}


signed int __fastcall EatBlockGoal::canUse(EatBlockGoal *this)
{
  EatBlockGoal *v1; // r4@1
  Level *v2; // r0@2
  char *v3; // r5@2
  unsigned int v4; // r6@2
  signed int result; // r0@5
  int v6; // r5@6
  float v7; // r1@6
  int v8; // r6@6
  float v9; // r1@6
  int v10; // r7@6
  int v11; // r0@6
  int v12; // r0@6
  bool v13; // zf@6
  int v14; // r0@9
  unsigned __int8 v15; // [sp+4h] [bp-1Ch]@9
  unsigned __int8 v16; // [sp+8h] [bp-18h]@6
  char v17; // [sp+9h] [bp-17h]@7

  v1 = this;
  if ( !j_Mob::getNavigation(*((Mob **)this + 4)) )
    goto LABEL_15;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)v1 + 4));
  v3 = j_Level::getRandom(v2);
  v4 = 1000;
  if ( j_Entity::isBaby(*((Entity **)v1 + 4)) )
    v4 = 50;
  if ( !(j_Random::_genRandInt32((Random *)v3) % v4) )
  {
    v6 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 4) + 72), 0.0);
    v8 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 4) + 76), v7);
    v10 = j_mce::Math::floor(*(mce::Math **)(*((_DWORD *)v1 + 4) + 80), v9);
    v11 = j_Entity::getRegion(*((Entity **)v1 + 4));
    j_BlockSource::getBlockAndData((BlockSource *)&v16, v11, v6, v8, v10);
    v12 = *(_BYTE *)(Block::mTallgrass + 4);
    v13 = v16 == v12;
    if ( v16 == v12 )
      v13 = v17 == 1;
    if ( v13 )
    {
      result = 1;
    }
    else
      v14 = j_Entity::getRegion(*((Entity **)v1 + 4));
      j_BlockSource::getBlockID((BlockSource *)&v15, v14, v6, v8 - 1, v10);
      result = 0;
      if ( v15 == *(_BYTE *)(Block::mGrass + 4) )
        result = 1;
  }
  else
LABEL_15:
    result = 0;
  return result;
}


void __fastcall EatBlockGoal::~EatBlockGoal(EatBlockGoal *this)
{
  EatBlockGoal::~EatBlockGoal(this);
}
