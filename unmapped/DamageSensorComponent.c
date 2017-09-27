

int __fastcall DamageSensorComponent::recordDamage(int a1, int a2, int a3, int a4, char a5)
{
  Entity **v5; // r5@1
  int v6; // r10@1
  void **v7; // r11@1
  int v8; // r8@1
  double v9; // r0@1
  unsigned int v10; // r0@1
  int v11; // r6@3
  int *v12; // r7@3
  Entity *v13; // r6@5
  char v14; // r0@5
  ClassID *v15; // r0@6
  __int64 v16; // kr00_8@8
  int v17; // r0@8
  void *v18; // r0@8
  char v19; // r0@9
  ClassID *v20; // r0@10
  __int64 v21; // kr08_8@12
  int v22; // r0@12
  void *v23; // r0@12
  int v24; // r7@14
  char v25; // r0@14
  ClassID *v26; // r0@15
  __int64 v27; // kr10_8@17
  int v28; // r0@17
  void *v29; // r0@17
  char v30; // r0@19
  ClassID *v31; // r0@20
  __int64 v32; // kr18_8@22
  int v33; // r0@22
  void *v34; // r0@22
  int v35; // r4@23
  int v36; // r6@23
  int v37; // r0@24
  bool v38; // zf@24
  void **v39; // r8@30
  char v40; // r10@30
  int v41; // r4@33
  unsigned int *v42; // r2@35
  signed int v43; // r1@37
  void *v44; // r5@43
  int v45; // r1@43
  void *v46; // r0@43
  unsigned int *v48; // r2@50
  signed int v49; // r1@52
  unsigned int *v50; // r2@54
  signed int v51; // r1@56
  unsigned int *v52; // r2@58
  signed int v53; // r1@60
  unsigned int *v54; // r2@70
  signed int v55; // r1@72
  int v56; // [sp+8h] [bp-1Ch]@19
  int v57; // [sp+10h] [bp-14h]@14
  int v58; // [sp+18h] [bp-Ch]@9
  int v59; // [sp+20h] [bp-4h]@5
  void *ptr; // [sp+24h] [bp+0h]@1
  unsigned int v61; // [sp+28h] [bp+4h]@1
  int v62; // [sp+2Ch] [bp+8h]@1
  int v63; // [sp+30h] [bp+Ch]@1
  signed int v64; // [sp+34h] [bp+10h]@1
  int v65; // [sp+38h] [bp+14h]@1
  int v66; // [sp+3Ch] [bp+18h]@49

  v5 = (Entity **)a1;
  *(_DWORD *)(a1 + 4) = a4;
  v6 = a3;
  *(_BYTE *)(a1 + 8) = a5;
  v7 = &ptr;
  *(_DWORD *)(a1 + 12) = a3;
  v8 = a2;
  v62 = 0;
  v63 = 0;
  HIDWORD(v9) = 10;
  v64 = 1065353216;
  v65 = 0;
  LODWORD(v9) = &v64;
  v10 = sub_21E6254(v9);
  v61 = v10;
  if ( v10 == 1 )
  {
    v66 = 0;
    v12 = &v66;
  }
  else
    if ( v10 >= 0x40000000 )
      sub_21E57F4();
    v11 = 4 * v10;
    v12 = (int *)j_operator new(4 * v10);
    j___aeabi_memclr4_0((int)v12, v11);
  ptr = v12;
  if ( v8 )
    sub_21E94B4((void **)&v59, "self");
    v13 = *v5;
    v14 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    __dmb();
    if ( !(v14 & 1) )
    {
      v15 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v15 )
      {
        ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v15);
        j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      }
    }
    v16 = ClassID::getID<Entity>(void)::id;
    v17 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)&ptr,
            (int **)&v59);
    *(_QWORD *)v17 = v16;
    *(_DWORD *)(v17 + 8) = v13;
    v18 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v59 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
      else
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v58, "other");
    v19 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    if ( !(v19 & 1) )
      v20 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v20 )
        ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v20);
    v21 = ClassID::getID<Entity>(void)::id;
    v22 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v58);
    *(_QWORD *)v22 = v21;
    *(_DWORD *)(v22 + 8) = v8;
    v23 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v58 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( j_Entity::getTarget(*v5) )
      sub_21E94B4((void **)&v57, "target");
      v24 = j_Entity::getTarget(*v5);
      v25 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v25 & 1) )
        v26 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v26 )
        {
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v26);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v27 = ClassID::getID<Entity>(void)::id;
      v28 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&ptr,
              (int **)&v57);
      *(_QWORD *)v28 = v27;
      *(_DWORD *)(v28 + 8) = v24;
      v29 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v52 = (unsigned int *)(v57 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v53 = __ldrex(v52);
          while ( __strex(v53 - 1, v52) );
        else
          v53 = (*v52)--;
        if ( v53 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
    if ( j_Entity::hasCategory(v8, 1) == 1 )
      sub_21E94B4((void **)&v56, "player");
      v30 = `guard variable for'unsigned long long ClassID::getID<Player>(void)::id[0];
      if ( !(v30 & 1) )
        v31 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
        if ( v31 )
          ClassID::getID<Player>(void)::id = j_ClassID::getNextID(v31);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
      v32 = ClassID::getID<Player>(void)::id;
      v33 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (int **)&v56);
      *(_QWORD *)v33 = v32;
      *(_DWORD *)(v33 + 8) = v8;
      v34 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v56 - 4);
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
  v35 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v5 + 12) + 308) + 4) >> 32;
  v36 = *(_QWORD *)(*(_DWORD *)(*((_DWORD *)*v5 + 12) + 308) + 4);
  if ( v36 == v35 )
LABEL_30:
    v39 = &ptr;
    v40 = 1;
    while ( 1 )
      v37 = *(_DWORD *)(v36 + 44);
      v38 = v37 == v6;
      if ( v37 != v6 )
        v38 = v37 == 31;
      if ( (v38 || v37 == -1)
        && j_DefinitionTrigger::canTrigger((DefinitionTrigger *)v36, *v5, (const VariantParameterList *)&ptr) == 1 )
        break;
      v36 += 48;
      if ( v35 == v36 )
        goto LABEL_30;
    j_EntityDefinitionDescriptor::forceExecuteTrigger(
      *((EntityDefinitionDescriptor **)*v5 + 12),
      *v5,
      (const DefinitionTrigger *)v36,
      (const VariantParameterList *)&ptr);
    LOBYTE(v7) = *(_BYTE *)(v36 + 40);
    v40 = 0;
    if ( *(_BYTE *)(v36 + 40) )
      LOBYTE(v7) = 1;
  v41 = v62;
  while ( v41 )
    v44 = (void *)v41;
    v45 = *(_DWORD *)(v41 + 8);
    v41 = *(_DWORD *)v41;
    v46 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v45 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    j_operator delete(v44);
  j___aeabi_memclr4_0((int)ptr, 4 * v61);
  if ( ptr && v39 + 6 != ptr )
    j_operator delete(ptr);
  return ((unsigned __int8)v40 | (unsigned __int8)v7) & 1;
}


int __fastcall DamageSensorComponent::DamageSensorComponent(int result, unsigned int a2)
{
  *(_QWORD *)result = a2;
  *(_BYTE *)(result + 8) = 0;
  return result;
}
