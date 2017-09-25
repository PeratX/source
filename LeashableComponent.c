

void __fastcall LeashableComponent::leash(LeashableComponent *this, Player *a2)
{
  Player *v2; // r6@1
  Entity **v3; // r5@1
  int v4; // r4@1
  char *v5; // r0@1
  int v6; // r1@1
  double v7; // r0@1
  unsigned int v8; // r0@1
  int v9; // r7@3
  int *v10; // r4@3
  char v11; // r0@4
  ClassID *v12; // r0@5
  __int64 v13; // kr00_8@7
  int v14; // r0@7
  void *v15; // r0@7
  int v16; // r7@8
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  void *v19; // r6@18
  int v20; // r1@18
  void *v21; // r0@18
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  int v24; // [sp+8h] [bp-48h]@4
  void *ptr; // [sp+Ch] [bp-44h]@4
  unsigned int v26; // [sp+10h] [bp-40h]@1
  int v27; // [sp+14h] [bp-3Ch]@1
  int v28; // [sp+18h] [bp-38h]@1
  signed int v29; // [sp+1Ch] [bp-34h]@1
  int v30; // [sp+20h] [bp-30h]@1
  int v31; // [sp+24h] [bp-2Ch]@21

  v2 = a2;
  v3 = (Entity **)this;
  v4 = *(_DWORD *)this;
  v5 = j_Entity::getUniqueID(a2);
  j_Entity::setLeashHolder(v4, v6, *(_QWORD *)v5, *(_QWORD *)v5 >> 32);
  v27 = 0;
  v28 = 0;
  v29 = 1065353216;
  v30 = 0;
  LODWORD(v7) = &v29;
  v8 = sub_21E6254(v7);
  v26 = v8;
  if ( v8 == 1 )
  {
    v31 = 0;
    v10 = &v31;
  }
  else
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v9 = 4 * v8;
    v10 = (int *)j_operator new(4 * v8);
    j___aeabi_memclr4_0((int)v10, v9);
  ptr = v10;
  j_Entity::initParams(*v3, (VariantParameterList *)&ptr);
  sub_21E94B4((void **)&v24, "other");
  v11 = `guard variable for'unsigned long long ClassID::getID<Player>(void)::id[0];
  __dmb();
  if ( !(v11 & 1) )
    v12 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
    if ( v12 )
    {
      ClassID::getID<Player>(void)::id = j_ClassID::getNextID(v12);
      j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
    }
  v13 = ClassID::getID<Player>(void)::id;
  v14 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (unsigned __int64 *)&ptr,
          (int **)&v24);
  *(_QWORD *)v14 = v13;
  *(_DWORD *)(v14 + 8) = v2;
  v15 = (void *)(v24 - 12);
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
      j_j_j_j__ZdlPv_9(v15);
  j_EntityDefinitionDescriptor::executeTrigger(
    *((EntityDefinitionDescriptor **)*v3 + 12),
    *v3,
    (const DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)*v3 + 12) + 336) + 16),
    (const VariantParameterList *)&ptr);
  v16 = v27;
  while ( v16 )
    v19 = (void *)v16;
    v20 = *(_DWORD *)(v16 + 8);
    v16 = *(_DWORD *)v16;
    v21 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    j_operator delete(v19);
  j___aeabi_memclr4_0((int)ptr, 4 * v26);
  if ( ptr )
    if ( &v31 != ptr )
      j_operator delete(ptr);
}


void __fastcall LeashableComponent::unleash(LeashableComponent *this)
{
  Entity **v1; // r6@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r5@3
  int *v5; // r4@3
  int v6; // r7@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  void *v9; // r6@14
  int v10; // r1@14
  void *v11; // r0@14
  void *ptr; // [sp+4h] [bp-44h]@4
  unsigned int v13; // [sp+8h] [bp-40h]@1
  int v14; // [sp+Ch] [bp-3Ch]@1
  int v15; // [sp+10h] [bp-38h]@1
  signed int v16; // [sp+14h] [bp-34h]@1
  int v17; // [sp+18h] [bp-30h]@1
  int v18; // [sp+1Ch] [bp-2Ch]@17

  v1 = (Entity **)this;
  v14 = 0;
  v15 = 0;
  HIDWORD(v2) = 10;
  v16 = 1065353216;
  v17 = 0;
  LODWORD(v2) = &v16;
  v3 = sub_21E6254(v2);
  v13 = v3;
  if ( v3 == 1 )
  {
    v18 = 0;
    v5 = &v18;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = (int *)j_operator new(4 * v3);
    j___aeabi_memclr4_0((int)v5, v4);
  ptr = v5;
  j_Entity::initParams(*v1, (VariantParameterList *)&ptr);
  j_EntityDefinitionDescriptor::executeTrigger(
    *((EntityDefinitionDescriptor **)*v1 + 12),
    *v1,
    (const DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)*v1 + 12) + 336) + 56),
    (const VariantParameterList *)&ptr);
  j_Entity::dropLeash(*v1, 1, 0);
  v6 = v14;
  while ( v6 )
    v9 = (void *)v6;
    v10 = *(_DWORD *)(v6 + 8);
    v6 = *(_DWORD *)v6;
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v10 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    }
    j_operator delete(v9);
  j___aeabi_memclr4_0((int)ptr, 4 * v13);
  if ( ptr )
    if ( &v18 != ptr )
      j_operator delete(ptr);
}


void __fastcall LeashableComponent::unleash(LeashableComponent *this)
{
  LeashableComponent::unleash(this);
}


signed int __fastcall LeashableComponent::getInteraction(LeashableComponent *this, Player *a2, EntityInteraction *a3)
{
  int *v3; // r5@1
  EntityInteraction *v4; // r4@1
  Entity *v5; // r6@1
  __int64 v6; // r0@2
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  ItemInstance *v11; // r0@8
  ItemInstance *v12; // r7@8
  int v13; // r0@8
  bool v14; // zf@8
  _DWORD *v15; // r0@16
  __int64 v16; // r1@16
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  int v19; // [sp+4h] [bp-4Ch]@18
  _DWORD *v20; // [sp+8h] [bp-48h]@16
  __int64 v21; // [sp+10h] [bp-40h]@16
  int v22; // [sp+1Ch] [bp-34h]@6
  _DWORD *v23; // [sp+20h] [bp-30h]@4
  __int64 v24; // [sp+28h] [bp-28h]@4
  int v25; // [sp+30h] [bp-20h]@2
  int v26; // [sp+34h] [bp-1Ch]@2

  v3 = (int *)this;
  v4 = a3;
  v5 = a2;
  if ( j_Entity::isLeashed(*(Entity **)this) == 1 )
  {
    j_Entity::getLeashHolder((Entity *)&v25, *v3);
    v6 = *(_QWORD *)j_Entity::getUniqueID(v5);
    HIDWORD(v6) ^= v26;
    if ( v6 == v25 )
    {
      if ( j_EntityInteraction::shouldCapture(v4) == 1 )
      {
        v7 = j_operator new(4u);
        LODWORD(v8) = sub_1A6D76A;
        *v7 = v3;
        HIDWORD(v8) = sub_1A6D762;
        v23 = v7;
        v24 = v8;
        j_EntityInteraction::capture((int)v4, (int)&v23);
        if ( (_DWORD)v24 )
          ((void (*)(void))v24)();
      }
      sub_21E94B4((void **)&v22, "action.interact.unleash");
      j_EntityInteraction::setInteractText();
      v9 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) == &dword_28898C0 )
        return 1;
      v17 = (unsigned int *)(v22 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        goto LABEL_28;
LABEL_27:
      v18 = (*v17)--;
LABEL_28:
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
      return 1;
    }
  }
  else
    v11 = (ItemInstance *)j_Player::getSelectedItem(v5);
    v12 = v11;
    v13 = *((_BYTE *)v11 + 15);
    v14 = v13 == 0;
    if ( v13 )
      v14 = *(_DWORD *)v12 == 0;
    if ( !v14 && !j_ItemInstance::isNull(v12) && *((_BYTE *)v12 + 14) && *(_DWORD *)v12 == Item::mLead )
        v15 = j_operator new(8u);
        LODWORD(v16) = sub_1A6D81E;
        *v15 = v5;
        v15[1] = v3;
        HIDWORD(v16) = sub_1A6D7A0;
        v20 = v15;
        v21 = v16;
        j_EntityInteraction::capture((int)v4, (int)&v20);
        if ( (_DWORD)v21 )
          ((void (*)(void))v21)();
      sub_21E94B4((void **)&v19, "action.interact.leash");
      v9 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) == &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
      goto LABEL_27;
  return 0;
}


_DWORD *__fastcall LeashableComponent::LeashableComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


Entity *__fastcall LeashableComponent::tick(LeashableComponent *this)
{
  Entity **v1; // r4@1
  Entity *result; // r0@1
  int v3; // r5@2
  __int64 v4; // r0@2
  int v10; // r0@3
  __int64 v11; // r1@3
  Entity *v13; // r0@3
  int v14; // r0@8
  __int64 v17; // [sp+8h] [bp-58h]@3
  int v18; // [sp+10h] [bp-50h]@3
  unsigned int v19; // [sp+18h] [bp-48h]@2
  unsigned int v20; // [sp+1Ch] [bp-44h]@2

  v1 = (Entity **)this;
  result = (Entity *)j_Entity::isLeashed(*(Entity **)this);
  if ( result == (Entity *)1 )
  {
    v3 = j_Entity::getLevel(*v1);
    v4 = j_Entity::getLeashHolder((Entity *)&v19, (int)*v1);
    result = (Entity *)j_Level::fetchEntity(v3, SHIDWORD(v4), v19, v20, 0);
    if ( result )
    {
      _R1 = *(_DWORD *)(*((_DWORD *)*v1 + 12) + 336);
      __asm
      {
        VLDR            S18, [R1,#4]
        VLDR            S20, [R1,#8]
        VLDR            S16, [R1,#0xC]
      }
      v10 = (*(int (**)(void))(*(_DWORD *)result + 52))();
      v11 = *(_QWORD *)v10;
      v18 = *(_DWORD *)(v10 + 8);
      v17 = v11;
      _R0 = j_Entity::distanceToSqr(*v1, (const Vec3 *)&v17);
        VMUL.F32        S0, S16, S16
        VMOV            S16, R0
      v13 = *v1;
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        result = (Entity *)j_Entity::isSitting(v13);
        if ( !result )
        {
          __asm
          {
            VMUL.F32        S24, S20, S20
            VMUL.F32        S26, S18, S18
          }
          result = (Entity *)(*(int (**)(void))(*(_DWORD *)*v1 + 52))();
            VLDR            S22, [R0]
            VCMPE.F32       S16, S26
            VLDR            S20, [R0,#4]
            VLDR            S18, [R0,#8]
            VMRS            APSR_nzcv, FPSCR
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            result = (Entity *)j_Mob::getNavigation(*v1);
            if ( result )
            {
              v14 = j_Mob::getNavigation(*v1);
              result = (Entity *)(*(int (**)(void))(*(_DWORD *)v14 + 12))();
            }
            VCMPE.F32       S16, S24
            __asm { VSQRT.F32       S0, S16 }
            _R0 = *v1;
            __asm
              VMOV.F32        S2, #1.0
              VLDR            S4, [SP,#0x60+var_58+4]
              VLDR            S8, =0.2
              VSUB.F32        S4, S4, S20
              VLDR            S6, [SP,#0x60+var_50]
              VSUB.F32        S6, S6, S18
              VDIV.F32        S0, S2, S0
              VLDR            S2, [SP,#0x60+var_58]
              VMUL.F32        S4, S4, S0
              VSUB.F32        S2, S2, S22
              VMUL.F32        S12, S4, S8
              VABS.F32        S4, S4
              VMUL.F32        S2, S2, S0
              VMUL.F32        S0, S6, S0
              VMUL.F32        S4, S12, S4
              VMUL.F32        S10, S2, S8
              VABS.F32        S2, S2
              VMUL.F32        S6, S0, S8
              VABS.F32        S0, S0
              VMUL.F32        S2, S10, S2
              VLDR            S10, [R0,#0x6C]
              VADD.F32        S2, S2, S10
              VSTR            S2, [R0,#0x6C]
              VLDR            S2, [R0,#0x70]
              VADD.F32        S2, S2, S4
              VSTR            S2, [R0,#0x70]
            result = *v1;
              VLDR            S2, [R0,#0x74]
              VADD.F32        S0, S2, S0
              VSTR            S0, [R0,#0x74]
        }
      else
        result = (Entity *)j_Entity::dropLeash(v13, 1, 1);
    }
  }
  return result;
}


void __fastcall LeashableComponent::leash(LeashableComponent *this, Player *a2)
{
  LeashableComponent::leash(this, a2);
}
