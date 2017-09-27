

void *__fastcall EntityFactory::setDefinitionGroup(EntityFactory *this, EntityDefinitionGroup *a2)
{
  unsigned __int64 *v2; // r6@2
  unsigned int *v3; // r2@4
  signed int v4; // r1@6
  unsigned __int64 *v5; // r5@12
  int v6; // r1@12
  void *v7; // r0@12
  int *v8; // r7@14
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  int v11; // r6@23
  void *v12; // r0@23
  void *result; // r0@25
  int v14; // [sp+4h] [bp-34h]@15

  if ( !dword_27FE504 )
  {
    dword_27FE504 = (int)this;
    v2 = (unsigned __int64 *)dword_27FE514;
    if ( dword_27FE514 )
    {
      do
      {
        v5 = v2;
        v6 = *v2 >> 32;
        v2 = (unsigned __int64 *)*v2;
        v7 = (void *)(v6 - 12);
        if ( (int *)(v6 - 12) != &dword_28898C0 )
        {
          v3 = (unsigned int *)(v6 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v4 = __ldrex(v3);
            while ( __strex(v4 - 1, v3) );
          }
          else
            v4 = (*v3)--;
          if ( v4 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        operator delete(v5);
      }
      while ( v2 );
    }
    _aeabi_memclr4(dword_27FE50C, 4 * unk_27FE510);
    dword_27FE514 = 0;
    unk_27FE518 = 0;
    v8 = &dword_26F1550;
    do
      EntityTypeToString((void **)&v14, *v8, 0);
      v11 = v8[2];
      *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::unique_ptr<Entity,std::default_delete<Entity>> (*)(EntityDefinitionGroup &,EntityDefinitionIdentifier const&)>,std::allocator<std::pair<std::string const,std::unique_ptr<Entity,std::default_delete<Entity>> (*)(EntityDefinitionGroup &,EntityDefinitionIdentifier const&)>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                   (int)&dword_27FE50C,
                   (int **)&v14) = v11;
      v12 = (void *)(v14 - 12);
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v14 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        else
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v8 += 3;
    while ( (_UNKNOWN *)v8 != &`vtable for'EntityFilterGroup );
  }
  result = &unk_27FE500;
  ++dword_27FE508;
  return result;
}


int __fastcall EntityFactory::fixLegacyEntity(EntityFactory *this, BlockSource *a2, const CompoundTag *a3)
{
  BlockSource *v3; // r4@1
  ChalkboardBlockEntity *v4; // r5@1
  void **v5; // r0@2
  void *v6; // r0@3
  signed int v7; // r7@4
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@6
  void *v11; // r0@6
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  unsigned int *v26; // r2@45
  signed int v27; // r1@47
  signed int v28; // r1@51
  int v29; // [sp+0h] [bp-48h]@4
  int v30; // [sp+4h] [bp-44h]@5
  int v31; // [sp+8h] [bp-40h]@4
  int v32; // [sp+Ch] [bp-3Ch]@3
  int v33; // [sp+10h] [bp-38h]@2
  int v34; // [sp+14h] [bp-34h]@10
  int v35; // [sp+18h] [bp-30h]@9
  int v36; // [sp+1Ch] [bp-2Ch]@2
  int v37; // [sp+20h] [bp-28h]@2
  int v38; // [sp+24h] [bp-24h]@2
  int v39; // [sp+28h] [bp-20h]@2
  int v40; // [sp+2Ch] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  if ( a2 )
  {
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v36 = 0;
    v37 = 0;
    v5 = (void **)EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v33);
    sub_21E8190(v5, "minecraft", (_BYTE *)9);
    if ( sub_171CD18((int)v3, (int)&v33, (int)&v38) == 1 )
    {
      EntityDefinitionIdentifier::getCanonicalName((EntityDefinitionIdentifier *)&v32, &v33);
      v6 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v32 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v29, 78);
      v7 = EntityDefinitionIdentifier::operator==(&v33, &v29);
      v8 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v31 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v9 = (void *)(v30 - 12);
      if ( (int *)(v30 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v30 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (unsigned int *)&dword_28898C0;
      v11 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v29 - 4);
            v28 = __ldrex(v10);
          while ( __strex(v28 - 1, v10) );
          v28 = (*v10)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      if ( v7 == 1 )
        ChalkboardBlockEntity::convertFromEntity(v4, v3, (const CompoundTag *)v10);
    }
    v12 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v34 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v33 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  }
  return 0;
}


void __fastcall EntityFactory::createSummonedEntity(EntityFactory *this, const EntityDefinitionIdentifier *a2, Entity *a3, const Vec3 *a4)
{
  EntityFactory::createSummonedEntity(this, a2, a3, a4);
}


void __fastcall EntityFactory::createSummonedEntity(EntityFactory *this, const EntityDefinitionIdentifier *a2, Entity *a3, const Vec3 *a4)
{
  const void **v4; // r6@1
  Entity **v5; // r7@1
  const Vec3 *v6; // r4@1
  Entity *v7; // r5@1
  void *v8; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  int v11; // [sp+8h] [bp-20h]@1

  v4 = (const void **)a2;
  v5 = (Entity **)this;
  v6 = a4;
  v7 = a3;
  sub_21E8AF4(&v11, (int *)a2 + 1);
  EntityFactory::createSpawnedEntity(v5, v4, (int)v7, (int)v6, &Vec2::ZERO);
  v8 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
}


Entity *__fastcall EntityFactory::createTransformedEntity(EntityFactory *this, const EntityDefinitionIdentifier *a2, Entity *a3)
{
  Entity *v3; // r5@1
  char *v4; // r3@1
  Entity **v5; // r4@1
  int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  Entity *result; // r0@1
  Entity *v10; // r6@1
  bool v11; // zf@1
  char v12; // r0@4
  ClassID *v13; // r0@5
  __int64 v14; // kr00_8@7
  int v15; // r0@7
  void *v16; // r0@7
  Entity *v17; // r6@8
  void (__fastcall *v18)(Entity *, int); // r7@8
  int v19; // r0@8
  void (__fastcall *v20)(Entity *, int); // r7@8
  int v21; // r1@8
  unsigned int *v22; // r2@10
  signed int v23; // r1@12
  int v24; // [sp+4h] [bp-34h]@4
  __int64 v25; // [sp+8h] [bp-30h]@1
  int v26; // [sp+10h] [bp-28h]@1
  int v27; // [sp+14h] [bp-24h]@1
  int v28; // [sp+18h] [bp-20h]@1

  v3 = a3;
  v4 = (char *)a3 + 72;
  v5 = (Entity **)this;
  v6 = *((_DWORD *)a3 + 18);
  v7 = *((_DWORD *)a3 + 19);
  v8 = *((_DWORD *)v4 + 2);
  v26 = v6;
  v27 = v7;
  v28 = v8;
  v25 = *((_QWORD *)v3 + 15);
  result = sub_171D738(v5, (const void **)a2, (int)&v26, &v25);
  v10 = *v5;
  v11 = *v5 == 0;
  if ( *v5 )
  {
    result = (Entity *)*((_DWORD *)v10 + 12);
    v11 = result == 0;
  }
  if ( !v11 )
    sub_21E94B4((void **)&v24, "other");
    v12 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    __dmb();
    if ( !(v12 & 1) )
    {
      v13 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v13 )
      {
        ClassID::getID<Entity>(void)::id = ClassID::getNextID(v13);
        j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      }
    }
    v14 = ClassID::getID<Entity>(void)::id;
    v15 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)v10 + 1,
            (int **)&v24);
    *(_QWORD *)v15 = v14;
    *(_DWORD *)(v15 + 8) = v3;
    v16 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = *v5;
    *((_BYTE *)v17 + 4) = 4;
    v18 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v17 + 200);
    v19 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 188))(v3);
    v18(v17, v19);
    v20 = *(void (__fastcall **)(Entity *, int))(*(_DWORD *)v17 + 184);
    v21 = *(_DWORD *)(*(_DWORD *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 188))(v3) - 12) != 0;
    v20(v17, v21);
    *((_DWORD *)v17 + 27) = *((_DWORD *)v3 + 27);
    *((_DWORD *)v17 + 28) = *((_DWORD *)v3 + 28);
    *((_DWORD *)v17 + 29) = *((_DWORD *)v3 + 29);
    result = (Entity *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 44))(v3);
  return result;
}


void __fastcall EntityFactory::createEntity(EntityFactory *a1, const void **a2, const EntityDefinitionIdentifier *a3, Entity *a4, const Vec3 *a5, _QWORD *a6)
{
  const void **v6; // r7@1
  EntityFactory *v7; // r6@1
  Entity *v8; // r4@1
  const EntityDefinitionIdentifier *v9; // r5@1

  v6 = a2;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  if ( sub_21E7D6C(a2, "spawned") )
  {
    if ( sub_21E7D6C(v6, "summoned") )
    {
      if ( sub_21E7D6C(v6, "born") )
      {
        if ( sub_21E7D6C(v6, "transformed") )
          *(_DWORD *)v7 = 0;
        else
          EntityFactory::createTransformedEntity(v7, v9, v8);
      }
      else
        EntityFactory::createBornEntity(v7, v9, v8);
    }
    else
      EntityFactory::createSummonedEntity(v7, v9, v8, a5);
  }
  else
    EntityFactory::createSpawnedEntity((Entity **)v7, (const void **)v9, (int)v8, (int)a5, a6);
}


Entity *__fastcall EntityFactory::createBornEntity(EntityFactory *this, const EntityDefinitionIdentifier *a2, Entity *a3)
{
  Entity *v3; // r5@1
  const void **v4; // r6@1
  Entity **v5; // r4@1
  int v6; // r0@1
  const BlockPos *v11; // r0@2
  Entity *result; // r0@4
  Entity *v13; // r6@4
  char v15; // r0@7
  ClassID *v16; // r0@8
  __int64 v17; // kr00_8@10
  int v18; // r0@10
  void *v19; // r0@10
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  int v22; // [sp+4h] [bp-34h]@7
  unsigned __int8 v23; // [sp+8h] [bp-30h]@2
  int v24; // [sp+Ch] [bp-2Ch]@2
  int v26; // [sp+18h] [bp-20h]@2
  int v27; // [sp+20h] [bp-18h]@2
  int v28; // [sp+24h] [bp-14h]@1
  int v29; // [sp+28h] [bp-10h]@1
  int v30; // [sp+2Ch] [bp-Ch]@1
  int v31; // [sp+34h] [bp-4h]@2
  int v32; // [sp+38h] [bp+0h]@1

  v3 = a3;
  v4 = (const void **)a2;
  v5 = (Entity **)this;
  BlockPos::BlockPos((int)&v32, (int)a3 + 72);
  BlockPos::center((BlockPos *)&v30, (int)&v32);
  v6 = *((_DWORD *)v3 + 31);
  v28 = 0;
  v29 = v6;
  _R0 = Entity::getRideRoot(v3);
  if ( _R0 )
  {
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S2, [R0,#0x118]
    }
    v26 = v30;
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x44+var_28]
    v27 = v31;
    BlockPos::BlockPos((int)&v24, (int)&v26);
    v11 = (const BlockPos *)Entity::getRegion(v3);
    BlockSource::getBlockID((BlockSource *)&v23, v11, (int)&v24);
    if ( v23 == BlockID::AIR )
      __asm
      {
        VLDR            S0, [SP,#0x44+var_34]
        VMOV.F32        S2, #0.5
        VCVT.F32.S32    S0, S0
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0x44+var_14]
      }
  }
  result = sub_171D738(v5, v4, (int)&v30, &v28);
  v13 = *v5;
  _ZF = *v5 == 0;
  if ( *v5 )
    result = (Entity *)*((_DWORD *)v13 + 12);
    _ZF = result == 0;
  if ( !_ZF )
    sub_21E94B4((void **)&v22, "other");
    v15 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    __dmb();
    if ( !(v15 & 1) )
      v16 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v16 )
        ClassID::getID<Entity>(void)::id = ClassID::getNextID(v16);
        j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
    v17 = ClassID::getID<Entity>(void)::id;
    v18 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)v13 + 1,
            (int **)&v22);
    *(_QWORD *)v18 = v17;
    *(_DWORD *)(v18 + 8) = v3;
    v19 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    result = *v5;
    *((_BYTE *)*v5 + 4) = 3;
  return result;
}


void __fastcall EntityFactory::createEntity(EntityFactory *a1, const void **a2, const EntityDefinitionIdentifier *a3, Entity *a4, const Vec3 *a5, _QWORD *a6)
{
  EntityFactory::createEntity(a1, a2, a3, a4, a5, a6);
}


void *__fastcall EntityFactory::buildSummonEntityTypeEnum(EntityFactory *this)
{
  EntityFactory *v1; // r11@1
  int *v2; // r7@1
  unsigned int *v3; // r2@2
  signed int v4; // r1@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  char *v7; // r0@19
  unsigned int v8; // r1@19
  __int64 v9; // r2@19
  char *v10; // r1@20
  char *v11; // r0@22
  char *v12; // r0@23
  void *result; // r0@24
  char *v14; // [sp+4h] [bp-34h]@6
  char *v15; // [sp+8h] [bp-30h]@19
  unsigned int v16; // [sp+Ch] [bp-2Ch]@19

  v1 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v2 = &dword_26F1550;
  do
  {
    if ( *((_BYTE *)v2 + 4) )
    {
      EntityTypeToString((void **)&v14, *v2, 0);
      v7 = v14;
      v14 = (char *)&unk_28898CC;
      v15 = v7;
      v8 = *v2;
      v16 = *v2;
      v9 = *(_QWORD *)((char *)v1 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        std::vector<std::pair<std::string,EntityType>,std::allocator<std::pair<std::string,EntityType>>>::_M_emplace_back_aux<std::pair<std::string,EntityType>>(
          (unsigned __int64 *)v1,
          (int)&v15);
        v10 = v15;
      }
      else
        *(_DWORD *)v9 = v7;
        v15 = (char *)&unk_28898CC;
        *(_DWORD *)(v9 + 4) = v8;
        v10 = (char *)&unk_28898CC;
        *((_DWORD *)v1 + 1) = v9 + 8;
      v11 = v10 - 12;
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v3 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v4 = __ldrex(v3);
          while ( __strex(v4 - 1, v3) );
        }
        else
          v4 = (*v3)--;
        if ( v4 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v12 = v14 - 12;
      if ( (int *)(v14 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v14 - 4);
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
    }
    v2 += 3;
    result = &`vtable for'EntityFilterGroup;
  }
  while ( (_UNKNOWN *)v2 != &`vtable for'EntityFilterGroup );
  return result;
}


void __fastcall EntityFactory::loadEntity(EntityFactory *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EntityFactory *v3; // r4@1
  Entity *v4; // r6@2
  signed int v5; // r6@4
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  void *v14; // r0@16
  void *v15; // r0@17
  void *v16; // r0@19
  Entity *v17; // r7@20
  void *v18; // r0@25
  void *v19; // r0@26
  void *v20; // r0@27
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@55
  signed int v28; // r1@57
  unsigned int *v29; // r2@59
  signed int v30; // r1@61
  unsigned int *v31; // r2@63
  signed int v32; // r1@65
  unsigned int *v33; // r2@71
  signed int v34; // r1@73
  unsigned int *v35; // r2@75
  signed int v36; // r1@77
  unsigned int *v37; // r2@79
  signed int v38; // r1@81
  unsigned int *v39; // r2@111
  signed int v40; // r1@113
  unsigned int *v41; // r2@115
  signed int v42; // r1@117
  Entity *v43; // [sp+0h] [bp-58h]@20
  int v44; // [sp+4h] [bp-54h]@19
  int v45; // [sp+8h] [bp-50h]@8
  int v46; // [sp+Ch] [bp-4Ch]@9
  int v47; // [sp+10h] [bp-48h]@8
  int v48; // [sp+14h] [bp-44h]@3
  int v49; // [sp+18h] [bp-40h]@5
  int v50; // [sp+1Ch] [bp-3Ch]@4
  int v51; // [sp+20h] [bp-38h]@2
  int v52; // [sp+24h] [bp-34h]@26
  int v53; // [sp+28h] [bp-30h]@25
  int v54; // [sp+2Ch] [bp-2Ch]@2
  int v55; // [sp+30h] [bp-28h]@2
  int v56; // [sp+34h] [bp-24h]@2
  int v57; // [sp+38h] [bp-20h]@2
  int v58; // [sp+3Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( !a2 )
  {
    *(_DWORD *)this = 0;
    return;
  }
  v56 = 0;
  v57 = 0;
  v58 = 0;
  v54 = 0;
  v55 = 0;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v51);
  sub_21E8190((void **)&v51, "minecraft", (_BYTE *)9);
  v4 = 0;
  if ( sub_171CD18((int)v2, (int)&v51, (int)&v56) != 1 )
    goto LABEL_24;
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v48, 1116974);
  if ( EntityDefinitionIdentifier::operator==(&v51, &v48) == 1 )
    v5 = CompoundTag::contains((int)v2, (const void **)&Npc::SKIN_ID_TAG);
    v6 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
    {
      v33 = (unsigned int *)(v50 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v49 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v48 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    if ( v5 == 1 )
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v45, 307);
      EntityDefinitionIdentifier::operator=(&v51, &v45);
      v9 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v47 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
        }
        else
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v46 - 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v45 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          goto LABEL_88;
        goto LABEL_87;
  else
    v14 = (void *)(v50 - 12);
      v29 = (unsigned int *)(v50 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v49 - 12);
      v31 = (unsigned int *)(v49 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v11 = (void *)(v48 - 12);
      v12 = (unsigned int *)(v48 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
LABEL_88:
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
        goto LABEL_19;
LABEL_87:
      v13 = (*v12)--;
      goto LABEL_88;
LABEL_19:
  EntityDefinitionIdentifier::getCanonicalName((EntityDefinitionIdentifier *)&v44, &v51);
  v16 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_171D738(&v43, (const void **)&v51, (int)&v56, &v54);
  v17 = v43;
  v43 = 0;
  if ( v17 )
    *((_BYTE *)v17 + 4) = 1;
    (*(void (__fastcall **)(Entity *, const CompoundTag *))(*(_DWORD *)v17 + 480))(v17, v2);
    if ( Entity::isRemoved(v17) == 1 )
      *(_DWORD *)v3 = 0;
      goto LABEL_25;
    v4 = v17;
LABEL_24:
  v17 = 0;
  *(_DWORD *)v3 = v4;
LABEL_25:
  v18 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v53 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v52 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v51 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)v17 + 32))(v17);
}


void __fastcall EntityFactory::loadEntity(EntityFactory *this, const CompoundTag *a2)
{
  EntityFactory::loadEntity(this, a2);
}


void *__fastcall EntityFactory::clearDefinitionGroup(EntityFactory *this)
{
  void *result; // r0@1

  result = &unk_27FE500;
  if ( !--dword_27FE508 )
  {
    result = &unk_27FE500;
    dword_27FE504 = 0;
  }
  return result;
}


signed int __fastcall EntityFactory::lookupEntityType(EntityFactory *this, const EntityDefinitionIdentifier *a2)
{
  unsigned int *v2; // r5@1
  unsigned int *v3; // r1@4
  signed int v4; // r0@6
  int v5; // r7@11
  char *v6; // r6@11
  size_t v7; // r2@11
  signed int v8; // r8@12
  signed int v9; // r4@3
  char *v10; // r0@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  char *v14; // [sp+0h] [bp-38h]@11
  _DWORD *v15; // [sp+4h] [bp-34h]@1

  sub_21E8AF4((int *)&v15, (int *)this + 1);
  v2 = (unsigned int *)&dword_26F1550;
  while ( 1 )
  {
    EntityTypeToString((void **)&v14, *v2, 0);
    v5 = (int)v14;
    v6 = v14 - 12;
    v7 = *(v15 - 3);
    if ( v7 == *((_DWORD *)v14 - 3) )
    {
      v8 = 0;
      if ( !memcmp(v15, v14, v7) )
        v8 = 1;
    }
    else
    if ( (int *)v6 != &dword_28898C0 )
      v3 = (unsigned int *)(v5 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    if ( v8 == 1 )
      break;
    v2 += 3;
    if ( (_UNKNOWN *)v2 == &`vtable for'EntityFilterGroup )
      v9 = 1;
      goto LABEL_19;
  }
  v9 = *v2;
LABEL_19:
  v10 = (char *)(v15 - 3);
  if ( v15 - 3 != &dword_28898C0 )
    v12 = v15 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v9;
}


Entity *__fastcall EntityFactory::createSpawnedEntity(Entity **a1, const void **a2, int a3, int a4, _QWORD *a5)
{
  int v5; // r8@1
  Entity **v6; // r4@1
  Entity *result; // r0@1
  Entity *v8; // r5@1
  bool v9; // zf@1
  char v10; // r0@4
  ClassID *v11; // r0@5
  __int64 v12; // r6@7
  int v13; // r0@7
  void *v14; // r0@7
  Entity *v15; // r5@9
  char v16; // r0@9
  ClassID *v17; // r0@10
  __int64 v18; // kr00_8@12
  int v19; // r0@12
  void *v20; // r0@12
  unsigned int *v21; // r2@15
  signed int v22; // r1@17
  unsigned int *v23; // r2@19
  signed int v24; // r1@21
  int v25; // [sp+4h] [bp-34h]@9
  int v26; // [sp+Ch] [bp-2Ch]@4

  v5 = a3;
  v6 = a1;
  result = sub_171D738(a1, a2, a4, a5);
  v8 = *v6;
  v9 = *v6 == 0;
  if ( *v6 )
  {
    result = (Entity *)*((_DWORD *)v8 + 12);
    v9 = result == 0;
  }
  if ( !v9 )
    sub_21E94B4((void **)&v26, "self");
    v10 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    __dmb();
    if ( !(v10 & 1) )
    {
      v11 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v11 )
      {
        ClassID::getID<Entity>(void)::id = ClassID::getNextID(v11);
        j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      }
    }
    v12 = ClassID::getID<Entity>(void)::id;
    v13 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)v8 + 1,
            (int **)&v26);
    *(_QWORD *)v13 = v12;
    *(_DWORD *)(v13 + 8) = v8;
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    if ( v5 )
      v15 = *v6;
      sub_21E94B4((void **)&v25, "other");
      v16 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v16 & 1) )
        v17 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v17 )
        {
          ClassID::getID<Entity>(void)::id = ClassID::getNextID(v17);
          j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v18 = ClassID::getID<Entity>(void)::id;
      v19 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)v15 + 1,
              (int **)&v25);
      *(_QWORD *)v19 = v18;
      *(_DWORD *)(v19 + 8) = v5;
      v20 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
        else
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
    result = *v6;
    *((_BYTE *)*v6 + 4) = 2;
  return result;
}
