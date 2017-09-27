

void __fastcall PeekComponent::tick(PeekComponent *this)
{
  PeekComponent::tick(this);
}


void __fastcall PeekComponent::tick(PeekComponent *this)
{
  PeekComponent *v1; // r4@1
  Level *v2; // r0@1
  double v3; // r0@2
  int v4; // r9@2
  unsigned int v5; // r0@2
  int v6; // r6@4
  int *v7; // r5@4
  int v8; // r6@5
  char v9; // r0@5
  ClassID *v10; // r0@6
  __int64 v11; // kr00_8@8
  int v12; // r0@8
  void *v13; // r0@8
  int v14; // r6@10
  char v15; // r0@10
  ClassID *v16; // r0@11
  __int64 v17; // kr08_8@13
  int v18; // r0@13
  void *v19; // r0@13
  int v20; // r6@14
  int v21; // r5@17
  int v22; // r0@17
  unsigned int v23; // r1@17
  unsigned int v24; // r1@19
  unsigned int v25; // r0@19
  int v26; // r7@24
  void (__fastcall *v27)(int, signed int, int, signed int); // r5@24
  int v28; // r0@24
  int v29; // r0@25
  bool v30; // zf@27
  int v31; // r5@32
  int v32; // r0@32
  unsigned int v33; // r1@32
  unsigned int v34; // r1@34
  unsigned int v35; // r0@34
  int v36; // r7@39
  void (__fastcall *v37)(int, signed int, int, signed int); // r5@39
  int v38; // r0@39
  int v39; // r5@42
  int v40; // r0@42
  unsigned int v41; // r1@42
  unsigned int v42; // r1@44
  unsigned int v43; // r0@44
  int v44; // r7@49
  void (__fastcall *v45)(int, signed int, int, signed int); // r5@49
  int v46; // r0@49
  int v47; // r7@52
  unsigned int *v48; // r2@54
  signed int v49; // r1@56
  void *v50; // r6@62
  int v51; // r1@62
  void *v52; // r0@62
  unsigned int *v53; // r2@69
  signed int v54; // r1@71
  unsigned int *v55; // r2@73
  signed int v56; // r1@75
  int v57; // [sp+8h] [bp-50h]@10
  int v58; // [sp+10h] [bp-48h]@5
  void *ptr; // [sp+14h] [bp-44h]@5
  unsigned int v60; // [sp+18h] [bp-40h]@2
  int v61; // [sp+1Ch] [bp-3Ch]@2
  int v62; // [sp+20h] [bp-38h]@2
  signed int v63; // [sp+24h] [bp-34h]@2
  int v64; // [sp+28h] [bp-30h]@2
  int v65; // [sp+2Ch] [bp-2Ch]@65

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 2));
  if ( !j_Level::isClientSide(v2) )
  {
    HIDWORD(v3) = 10;
    v4 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v1 + 2) + 48) + 364);
    v61 = 0;
    v62 = 0;
    v63 = 1065353216;
    v64 = 0;
    LODWORD(v3) = &v63;
    v5 = sub_21E6254(v3);
    v60 = v5;
    if ( v5 == 1 )
    {
      v65 = 0;
      v7 = &v65;
    }
    else
      if ( v5 >= 0x40000000 )
        sub_21E57F4();
      v6 = 4 * v5;
      v7 = (int *)j_operator new(4 * v5);
      j___aeabi_memclr4_0((int)v7, v6);
    ptr = v7;
    sub_21E94B4((void **)&v58, "self");
    v8 = *((_DWORD *)v1 + 2);
    v9 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    __dmb();
    if ( !(v9 & 1) )
      v10 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v10 )
      {
        ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v10);
        j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      }
    v11 = ClassID::getID<Entity>(void)::id;
    v12 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)&ptr,
            (int **)&v58);
    *(_QWORD *)v12 = v11;
    *(_DWORD *)(v12 + 8) = v8;
    v13 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
      else
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    if ( j_Entity::getTarget(*((Entity **)v1 + 2)) )
      sub_21E94B4((void **)&v57, "target");
      v14 = j_Entity::getTarget(*((Entity **)v1 + 2));
      v15 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v15 & 1) )
        v16 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v16 )
        {
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v16);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v17 = ClassID::getID<Entity>(void)::id;
      v18 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&ptr,
              (int **)&v57);
      *(_QWORD *)v18 = v17;
      *(_DWORD *)(v18 + 8) = v14;
      v19 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v57 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
        else
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
    v20 = j_Entity::getTarget(*((Entity **)v1 + 2));
    if ( !v20 && *(_DWORD *)v1 <= 0 && !(j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 0x28) )
      *(_DWORD *)v1 = 20 * (j_Random::_genRandInt32((Random *)(*((_DWORD *)v1 + 2) + 552)) % 3) + 20;
      v21 = *((_DWORD *)v1 + 2);
      v22 = j_SynchedEntityData::_get((SynchedEntityData *)(v21 + 176), 64);
      v23 = *(_DWORD *)(v22 + 4);
      if ( (unsigned __int8)v23 == 2 && *(_DWORD *)(v22 + 12) != 30 )
        v24 = v23 >> 16;
        *(_DWORD *)(v22 + 12) = 30;
        *(_BYTE *)(v22 + 8) = 1;
        v25 = *(_WORD *)(v21 + 188);
        if ( v25 >= v24 )
          LOWORD(v25) = v24;
        *(_WORD *)(v21 + 188) = v25;
        if ( *(_WORD *)(v21 + 190) > v24 )
          LOWORD(v24) = *(_WORD *)(v21 + 190);
        *(_WORD *)(v21 + 190) = v24;
      j_EntityDefinitionDescriptor::executeTrigger(
        *(EntityDefinitionDescriptor **)(*((_DWORD *)v1 + 2) + 48),
        *((Entity **)v1 + 2),
        (const DefinitionTrigger *)(v4 + 44),
        (const VariantParameterList *)&ptr);
      v26 = *((_DWORD *)v1 + 2);
      v27 = *(void (__fastcall **)(int, signed int, int, signed int))(*(_DWORD *)v26 + 556);
      v28 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v26 + 52))(*((_DWORD *)v1 + 2));
      v27(v26, 108, v28, -1);
    v29 = *(_DWORD *)v1;
    if ( *(_DWORD *)v1 >= 1 )
      *(_DWORD *)v1 = --v29;
    v30 = v20 == 0;
    if ( !v20 )
      v30 = v29 == 0;
    if ( v30 && j_SynchedEntityData::getInt((SynchedEntityData *)(*((_DWORD *)v1 + 2) + 176), 64) )
      v31 = *((_DWORD *)v1 + 2);
      v32 = j_SynchedEntityData::_get((SynchedEntityData *)(v31 + 176), 64);
      v33 = *(_DWORD *)(v32 + 4);
      if ( (unsigned __int8)v33 == 2 && *(_DWORD *)(v32 + 12) )
        v34 = v33 >> 16;
        *(_DWORD *)(v32 + 12) = 0;
        *(_BYTE *)(v32 + 8) = 1;
        v35 = *(_WORD *)(v31 + 188);
        if ( v35 >= v34 )
          LOWORD(v35) = v34;
        *(_WORD *)(v31 + 188) = v35;
        if ( *(_WORD *)(v31 + 190) > v34 )
          LOWORD(v34) = *(_WORD *)(v31 + 190);
        *(_WORD *)(v31 + 190) = v34;
        (const DefinitionTrigger *)(v4 + 4),
      v36 = *((_DWORD *)v1 + 2);
      v37 = *(void (__fastcall **)(int, signed int, int, signed int))(*(_DWORD *)v36 + 556);
      v38 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v36 + 52))(*((_DWORD *)v1 + 2));
      v37(v36, 109, v38, -1);
    if ( v20 && !*((_BYTE *)v1 + 4) )
      v39 = *((_DWORD *)v1 + 2);
      v40 = j_SynchedEntityData::_get((SynchedEntityData *)(v39 + 176), 64);
      v41 = *(_DWORD *)(v40 + 4);
      if ( (unsigned __int8)v41 == 2 && *(_DWORD *)(v40 + 12) != 100 )
        v42 = v41 >> 16;
        *(_DWORD *)(v40 + 12) = 100;
        *(_BYTE *)(v40 + 8) = 1;
        v43 = *(_WORD *)(v39 + 188);
        if ( v43 >= v42 )
          LOWORD(v43) = v42;
        *(_WORD *)(v39 + 188) = v43;
        if ( *(_WORD *)(v39 + 190) > v42 )
          LOWORD(v42) = *(_WORD *)(v39 + 190);
        *(_WORD *)(v39 + 190) = v42;
        (const DefinitionTrigger *)(v4 + 84),
      v44 = *((_DWORD *)v1 + 2);
      v45 = *(void (__fastcall **)(int, signed int, int, signed int))(*(_DWORD *)v44 + 556);
      v46 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v44 + 52))(*((_DWORD *)v1 + 2));
      v45(v44, 108, v46, -1);
    if ( v20 )
      LOBYTE(v20) = 1;
    *((_BYTE *)v1 + 4) = v20;
    v47 = v61;
    while ( v47 )
      v50 = (void *)v47;
      v51 = *(_DWORD *)(v47 + 8);
      v47 = *(_DWORD *)v47;
      v52 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v51 - 4);
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      j_operator delete(v50);
    j___aeabi_memclr4_0((int)ptr, 4 * v60);
    if ( ptr )
      if ( &v65 != ptr )
        j_operator delete(ptr);
  }
}


int __fastcall PeekComponent::PeekComponent(int result, int a2)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = a2;
  return result;
}
