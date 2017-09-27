

int __fastcall TimerComponent::restartTimer(TimerComponent *this)
{
  TimerComponent *v1; // r4@1
  __int64 v2; // r0@2
  unsigned int v3; // r5@2
  int result; // r0@6

  v1 = this;
  if ( *((_BYTE *)this + 6) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = HIDWORD(v2) - v2;
    if ( HIDWORD(v2) - (signed int)v2 < 1 )
      v3 = 1;
    if ( v3 )
    {
      HIDWORD(v2) = j_Random::_genRandInt32((Random *)(*(_DWORD *)v1 + 552)) % v3;
      LODWORD(v2) = *((_DWORD *)v1 + 4);
    }
    else
      HIDWORD(v2) = 0;
    result = v2 + HIDWORD(v2);
    *((_DWORD *)v1 + 2) = result;
  }
  else
    result = *((_DWORD *)this + 3);
  return result;
}


void __fastcall TimerComponent::tick(TimerComponent *this)
{
  TimerComponent::tick(this);
}


void __fastcall TimerComponent::addAdditionalSaveData(TimerComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  TimerComponent *v3; // r5@1
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
  sub_21E94B4((void **)&v11, "CountTime");
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
  sub_21E94B4((void **)&v10, "HasExecuted");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v10, *((_BYTE *)v3 + 5));
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


void __fastcall TimerComponent::readAdditionalSaveData(TimerComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  TimerComponent *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  int v7; // r0@4
  signed int v8; // r6@6
  void *v9; // r0@6
  void *v10; // r0@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  unsigned int *v17; // r2@30
  signed int v18; // r1@32
  int v19; // [sp+4h] [bp-34h]@8
  int v20; // [sp+Ch] [bp-2Ch]@6
  int v21; // [sp+14h] [bp-24h]@3
  int v22; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v22, "CountTime");
  v4 = j_CompoundTag::contains((int)v2, (const void **)&v22);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v21, "CountTime");
    *((_DWORD *)v3 + 2) = j_CompoundTag::getInt((int)v2, (const void **)&v21);
    v6 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v21 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    v7 = *((_DWORD *)v3 + 5);
    if ( *((_DWORD *)v3 + 2) > v7 )
      *((_DWORD *)v3 + 2) = v7;
  sub_21E94B4((void **)&v20, "HasExecuted");
  v8 = j_CompoundTag::contains((int)v2, (const void **)&v20);
  v9 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 == 1 )
    sub_21E94B4((void **)&v19, "HasExecuted");
    *((_BYTE *)v3 + 5) = j_CompoundTag::getBoolean((int)v2, (const void **)&v19);
    v10 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v19 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
}


int __fastcall TimerComponent::initFromDefinition(TimerComponent *this)
{
  TimerComponent *v1; // r4@1
  int result; // r0@1
  __int16 v8; // r5@1
  unsigned int v11; // r5@3
  unsigned int v12; // r1@6
  int v13; // r2@6
  unsigned int v14; // r5@8
  unsigned int v15; // r1@11

  v1 = this;
  result = *(_DWORD *)this;
  __asm { VMOV.F32        S0, #20.0 }
  _R1 = *(_DWORD *)(*(_DWORD *)(result + 48) + 428);
  *((_BYTE *)v1 + 5) = 0;
  v8 = *(_WORD *)(_R1 + 4);
  *((_BYTE *)v1 + 4) = v8;
  *((_BYTE *)v1 + 6) = HIBYTE(v8);
  __asm
  {
    VLDR            S2, [R1,#8]
    VMUL.F32        S2, S2, S0
    VCVTR.S32.F32   S4, S2
    VSTR            S4, [R4,#0x10]
    VLDR            S4, [R1,#0xC]
    VMUL.F32        S0, S4, S0
    VCVTR.S32.F32   S4, S0
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VSTR            S4, [R4,#0x14]
    VMOV            R1, S2
    VMOV            R2, S0
  }
  if ( _ZF )
    v11 = _R2 - _R1;
    if ( _R2 - _R1 < 1 )
      v11 = 1;
    if ( v11 )
    {
      v12 = j_Random::_genRandInt32((Random *)(result + 552)) % v11;
      result = *((_DWORD *)v1 + 4);
      v13 = *((_BYTE *)v1 + 6);
      _R1 = v12 + result;
      *((_DWORD *)v1 + 3) = _R1;
      if ( v13 )
      {
        _R2 = *((_DWORD *)v1 + 5);
        goto LABEL_8;
      }
    }
    else
    *((_DWORD *)v1 + 2) = _R1;
    return result;
  result = _R1;
LABEL_8:
  v14 = _R2 - result;
  if ( _R2 - result < 1 )
    v14 = 1;
  if ( v14 )
    v15 = j_Random::_genRandInt32((Random *)(*(_DWORD *)v1 + 552)) % v14;
    result = *((_DWORD *)v1 + 4);
  else
    v15 = 0;
  result += v15;
  *((_DWORD *)v1 + 2) = result;
  return result;
}


int __fastcall TimerComponent::TimerComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 1;
  *(_BYTE *)(result + 5) = 0;
  *(_BYTE *)(result + 6) = 1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  return result;
}


void __fastcall TimerComponent::tick(TimerComponent *this)
{
  Entity **v1; // r4@1
  Entity *v2; // r0@3
  unsigned __int8 v3; // vf@3
  __int64 v4; // r0@6
  unsigned int v5; // r5@6
  double v6; // r0@11
  unsigned int v7; // r0@11
  int v8; // r6@13
  int *v9; // r5@13
  Entity *v10; // r5@14
  char v11; // r0@14
  ClassID *v12; // r0@15
  __int64 v13; // kr00_8@17
  int v14; // r0@17
  void *v15; // r0@17
  int v16; // r5@19
  char v17; // r0@19
  ClassID *v18; // r0@20
  __int64 v19; // kr08_8@22
  int v20; // r0@22
  void *v21; // r0@22
  int v22; // r7@23
  unsigned int *v23; // r2@25
  signed int v24; // r1@27
  void *v25; // r6@33
  int v26; // r1@33
  void *v27; // r0@33
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  unsigned int *v30; // r2@44
  signed int v31; // r1@46
  int v32; // [sp+8h] [bp-50h]@19
  int v33; // [sp+10h] [bp-48h]@14
  void *ptr; // [sp+14h] [bp-44h]@14
  unsigned int v35; // [sp+18h] [bp-40h]@11
  int v36; // [sp+1Ch] [bp-3Ch]@11
  int v37; // [sp+20h] [bp-38h]@11
  signed int v38; // [sp+24h] [bp-34h]@11
  int v39; // [sp+28h] [bp-30h]@11
  int v40; // [sp+2Ch] [bp-2Ch]@36

  v1 = (Entity **)this;
  if ( !*((_BYTE *)this + 5) || *((_BYTE *)this + 4) )
  {
    v2 = (Entity *)*((_DWORD *)this + 2);
    v3 = __OFSUB__(v2, 1);
    v2 = (Entity *)((char *)v2 - 1);
    v1[2] = v2;
    if ( (unsigned __int8)(((signed int)v2 < 0) ^ v3) | (v2 == 0) )
    {
      *((_BYTE *)v1 + 5) = 1;
      if ( *((_BYTE *)v1 + 6) )
      {
        v4 = *((_QWORD *)v1 + 2);
        v5 = HIDWORD(v4) - v4;
        if ( HIDWORD(v4) - (signed int)v4 < 1 )
          v5 = 1;
        if ( v5 )
          LODWORD(v4) = (char *)v1[4] + j_Random::_genRandInt32((Entity *)((char *)*v1 + 552)) % v5;
      }
      else
        LODWORD(v4) = v1[3];
      v1[2] = (Entity *)v4;
      v36 = 0;
      v37 = 0;
      HIDWORD(v6) = 10;
      v38 = 1065353216;
      v39 = 0;
      LODWORD(v6) = &v38;
      v7 = sub_21E6254(v6);
      v35 = v7;
      if ( v7 == 1 )
        v40 = 0;
        v9 = &v40;
        if ( v7 >= 0x40000000 )
          sub_21E57F4();
        v8 = 4 * v7;
        v9 = (int *)j_operator new(4 * v7);
        j___aeabi_memclr4_0((int)v9, v8);
      ptr = v9;
      sub_21E94B4((void **)&v33, "self");
      v10 = *v1;
      v11 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v11 & 1) )
        v12 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v12 )
        {
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v12);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v13 = ClassID::getID<Entity>(void)::id;
      v14 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&ptr,
              (int **)&v33);
      *(_QWORD *)v14 = v13;
      *(_DWORD *)(v14 + 8) = v10;
      v15 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v33 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        else
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      if ( j_Entity::getTarget(*v1) )
        sub_21E94B4((void **)&v32, "target");
        v16 = j_Entity::getTarget(*v1);
        v17 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
        __dmb();
        if ( !(v17 & 1) )
          v18 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          if ( v18 )
          {
            ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v18);
            j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
          }
        v19 = ClassID::getID<Entity>(void)::id;
        v20 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)&ptr,
                (int **)&v32);
        *(_QWORD *)v20 = v19;
        *(_DWORD *)(v20 + 8) = v16;
        v21 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v32 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          else
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
      j_EntityDefinitionDescriptor::executeTrigger(
        *((EntityDefinitionDescriptor **)*v1 + 12),
        *v1,
        (const DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)*v1 + 12) + 428) + 16),
        (const VariantParameterList *)&ptr);
      v22 = v36;
      while ( v22 )
        v25 = (void *)v22;
        v26 = *(_DWORD *)(v22 + 8);
        v22 = *(_DWORD *)v22;
        v27 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v26 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        j_operator delete(v25);
      j___aeabi_memclr4_0((int)ptr, 4 * v35);
      if ( ptr )
        if ( &v40 != ptr )
          j_operator delete(ptr);
    }
  }
}


void __fastcall TimerComponent::addAdditionalSaveData(TimerComponent *this, CompoundTag *a2)
{
  TimerComponent::addAdditionalSaveData(this, a2);
}


void __fastcall TimerComponent::readAdditionalSaveData(TimerComponent *this, const CompoundTag *a2)
{
  TimerComponent::readAdditionalSaveData(this, a2);
}
