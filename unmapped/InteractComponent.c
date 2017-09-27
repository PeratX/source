

signed int __fastcall InteractComponent::getInteraction(InteractComponent *this, Player *a2, EntityInteraction *a3)
{
  InteractComponent *v3; // r7@1
  EntityInteraction *v4; // r8@1
  Player *v5; // r6@1
  const Interaction *v6; // r4@1
  const Interaction *v7; // r5@1
  signed int result; // r0@4
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  void **v18; // [sp+0h] [bp-68h]@6
  int v19; // [sp+38h] [bp-30h]@8
  int v20; // [sp+3Ch] [bp-2Ch]@7
  int v21; // [sp+40h] [bp-28h]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (const Interaction *)(*(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 332) + 4) >> 32);
  v7 = (const Interaction *)*(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 332) + 4);
  if ( v7 == v6 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( j_InteractComponent::_runInteraction(v3, v7, v5, v4) != 1 )
    {
      v7 = (const Interaction *)((char *)v7 + 96);
      if ( v6 == v7 )
        goto LABEL_4;
    }
    if ( (*(int (**)(void))(**(_DWORD **)v3 + 488))() == 199468 )
      j_EventPacket::EventPacket((int)&v18, v5, *(Entity **)v3, 3);
      (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v5 + 1448))(v5, &v18);
      v18 = &off_26E9D30;
      v9 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v20 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v19 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
    j_EntityInteraction::setInteractText();
    result = 1;
  return result;
}


int __fastcall InteractComponent::InteractComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_WORD *)(result + 4) = 0;
  return result;
}


int __fastcall InteractComponent::tick(int result)
{
  signed int v1; // r1@1

  v1 = *(_WORD *)(result + 4);
  if ( v1 >= 1 )
    *(_WORD *)(result + 4) = v1 - 1;
  return result;
}


signed int __fastcall InteractComponent::_runInteraction(InteractComponent *this, const Interaction *a2, Player *a3, EntityInteraction *a4)
{
  const Interaction *v4; // r8@1
  Entity **v5; // r5@1
  EntityInteraction *v6; // r9@1
  Player *v7; // r11@1
  bool v8; // zf@1
  bool v9; // nf@1
  unsigned __int8 v10; // vf@1
  int v11; // r0@2
  signed int v12; // r11@4
  double v13; // r0@5
  unsigned int v14; // r0@5
  int v15; // r4@7
  int *v16; // r7@7
  char v17; // r0@8
  ClassID *v18; // r0@9
  __int64 v19; // kr00_8@11
  int v20; // r0@11
  void *v21; // r0@11
  Entity *v22; // r4@12
  char v23; // r0@12
  ClassID *v24; // r0@13
  __int64 v25; // r6@15
  int v26; // r0@15
  void *v27; // r0@15
  char v28; // r0@16
  ClassID *v29; // r0@17
  __int64 v30; // kr08_8@19
  int v31; // r0@19
  void *v32; // r0@19
  int v33; // r7@21
  char v34; // r0@21
  ClassID *v35; // r0@22
  __int64 v36; // kr10_8@24
  int v37; // r0@24
  void *v38; // r0@24
  void **v39; // r4@25
  _DWORD *v40; // r0@27
  int v41; // r6@27
  _DWORD *v42; // r2@27
  unsigned int v43; // r1@27
  int v44; // r0@27
  int v45; // r5@27
  int v46; // r3@27
  int v47; // r4@28
  int v48; // r7@36
  unsigned int *v49; // r2@38
  signed int v50; // r1@40
  void *v51; // r6@46
  int v52; // r1@46
  void *v53; // r0@46
  int v54; // r7@52
  unsigned int *v55; // r2@54
  signed int v56; // r1@56
  void *v57; // r6@62
  int v58; // r1@62
  void *v59; // r0@62
  bool v60; // zf@64
  unsigned int *v62; // r2@70
  signed int v63; // r1@72
  unsigned int *v64; // r2@74
  signed int v65; // r1@76
  unsigned int *v66; // r2@78
  signed int v67; // r1@80
  unsigned int *v68; // r2@82
  signed int v69; // r1@84
  int v70; // [sp+8h] [bp-F8h]@27
  Entity **v71; // [sp+68h] [bp-98h]@27
  void *ptr; // [sp+6Ch] [bp-94h]@27
  unsigned int v73; // [sp+70h] [bp-90h]@27
  int v74; // [sp+74h] [bp-8Ch]@27
  int v75; // [sp+78h] [bp-88h]@27
  __int64 v76; // [sp+7Ch] [bp-84h]@27
  int v77; // [sp+84h] [bp-7Ch]@27
  int v78; // [sp+88h] [bp-78h]@34
  void (*v79)(void); // [sp+90h] [bp-70h]@27
  int (__fastcall *v80)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, int, void *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, void *, int, void *, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int); // [sp+94h] [bp-6Ch]@34
  int v81; // [sp+9Ch] [bp-64h]@21
  int v82; // [sp+A4h] [bp-5Ch]@16
  int v83; // [sp+ACh] [bp-54h]@12
  int v84; // [sp+B4h] [bp-4Ch]@8
  void *v85; // [sp+B8h] [bp-48h]@8
  unsigned int v86; // [sp+BCh] [bp-44h]@5
  int v87; // [sp+C0h] [bp-40h]@5
  int v88; // [sp+C4h] [bp-3Ch]@5
  signed int v89; // [sp+C8h] [bp-38h]@5
  int v90; // [sp+CCh] [bp-34h]@5
  int v91; // [sp+D0h] [bp-30h]@69

  v4 = a2;
  v5 = (Entity **)this;
  v6 = a4;
  v7 = a3;
  v10 = __OFSUB__(*(_DWORD *)a2, 1);
  v8 = *(_DWORD *)a2 == 1;
  v9 = *(_DWORD *)a2 - 1 < 0;
  if ( *(_DWORD *)a2 >= 1 )
  {
    v11 = *((_WORD *)this + 2);
    v10 = 0;
    v8 = v11 == 0;
    v9 = v11 < 0;
  }
  if ( (unsigned __int8)(v9 ^ v10) | v8 )
    v87 = 0;
    v88 = 0;
    HIDWORD(v13) = 10;
    v89 = 1065353216;
    v90 = 0;
    LODWORD(v13) = &v89;
    v14 = sub_21E6254(v13);
    v86 = v14;
    if ( v14 == 1 )
    {
      v91 = 0;
      v16 = &v91;
    }
    else
      if ( v14 >= 0x40000000 )
        sub_21E57F4();
      v15 = 4 * v14;
      v16 = (int *)j_operator new(4 * v14);
      j___aeabi_memclr4_0((int)v16, v15);
    v85 = v16;
    sub_21E94B4((void **)&v84, "player");
    v17 = `guard variable for'unsigned long long ClassID::getID<Player>(void)::id[0];
    __dmb();
    if ( !(v17 & 1) )
      v18 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
      if ( v18 )
      {
        ClassID::getID<Player>(void)::id = j_ClassID::getNextID(v18);
        j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
      }
    v19 = ClassID::getID<Player>(void)::id;
    v20 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)&v85,
            (int **)&v84);
    *(_QWORD *)v20 = v19;
    *(_DWORD *)(v20 + 8) = v7;
    v21 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v84 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
      else
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v83, "self");
    v22 = *v5;
    v23 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
    if ( !(v23 & 1) )
      v24 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      if ( v24 )
        ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v24);
        j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
    v25 = ClassID::getID<Entity>(void)::id;
    v26 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v83);
    *(_QWORD *)v26 = v25;
    *(_DWORD *)(v26 + 8) = v22;
    v27 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v83 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    sub_21E94B4((void **)&v82, "other");
    v28 = `guard variable for'unsigned long long ClassID::getID<Player>(void)::id[0];
    if ( !(v28 & 1) )
      v29 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Player>(void)::id);
      if ( v29 )
        ClassID::getID<Player>(void)::id = j_ClassID::getNextID(v29);
    v30 = ClassID::getID<Player>(void)::id;
    v31 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)&v82);
    *(_QWORD *)v31 = v30;
    *(_DWORD *)(v31 + 8) = v7;
    v32 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v82 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    if ( j_Entity::getTarget(*v5) )
      sub_21E94B4((void **)&v81, "target");
      v33 = j_Entity::getTarget(*v5);
      v34 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v34 & 1) )
        v35 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v35 )
        {
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v35);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        }
      v36 = ClassID::getID<Entity>(void)::id;
      v37 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&v85,
              (int **)&v81);
      *(_QWORD *)v37 = v36;
      *(_DWORD *)(v37 + 8) = v33;
      v38 = (void *)(v81 - 12);
      if ( (int *)(v81 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v81 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
        else
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v38);
    v39 = &v85;
    if ( j_DefinitionTrigger::canTrigger(
           (const Interaction *)((char *)v4 + 56),
           *v5,
           (const VariantParameterList *)&v85) == 1 )
      if ( j_EntityInteraction::shouldCapture(v6) == 1 )
        j_Interaction::Interaction((int)&v70, (int)v4);
        v71 = v5;
        ptr = 0;
        v73 = v86;
        v74 = 0;
        v75 = v88;
        v76 = *(_QWORD *)&v89;
        j_std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,VariantParameterList::Parameter>,true> const*)#1}>(
          (unsigned int *)&ptr,
          (int)&v85);
        v79 = 0;
        v40 = j_operator new(0x84u);
        v41 = (int)v40;
        *v40 = v7;
        j_Interaction::Interaction((int)(v40 + 1), (int)&v70);
        *(_DWORD *)(v41 + 100) = v71;
        v42 = ptr;
        v43 = v73;
        v44 = v74;
        v8 = &v77 == ptr;
        v45 = v75;
        *(_DWORD *)(v41 + 104) = ptr;
        *(_DWORD *)(v41 + 108) = v43;
        *(_DWORD *)(v41 + 112) = v44;
        *(_DWORD *)(v41 + 116) = v45;
        v46 = HIDWORD(v76);
        *(_DWORD *)(v41 + 120) = v76;
        *(_DWORD *)(v41 + 124) = v46;
        if ( v8 )
          v47 = v41 + 128;
          *(_DWORD *)(v41 + 104) = v41 + 128;
          *(_DWORD *)(v41 + 128) = *v42;
          v47 = (int)v42;
        if ( v44 )
          *(_DWORD *)(v47 + 4 * (*(_DWORD *)(v44 + 32) % v43)) = v41 + 112;
        HIDWORD(v76) = 0;
        ptr = &v77;
        v73 = 1;
        v75 = 0;
        v77 = 0;
        v78 = v41;
        v79 = (void (*)(void))sub_1A6C190;
        v80 = sub_1A6B410;
        j_EntityInteraction::capture((int)v6, (int)&v78);
        if ( v79 )
          v79();
        v48 = v74;
        while ( v48 )
          v51 = (void *)v48;
          v52 = *(_DWORD *)(v48 + 8);
          v48 = *(_DWORD *)v48;
          v53 = (void *)(v52 - 12);
          if ( (int *)(v52 - 12) != &dword_28898C0 )
          {
            v49 = (unsigned int *)(v52 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v50 = __ldrex(v49);
              while ( __strex(v50 - 1, v49) );
            }
            else
              v50 = (*v49)--;
            if ( v50 <= 0 )
              j_j_j_j__ZdlPv_9(v53);
          }
          j_operator delete(v51);
        j___aeabi_memclr4_0((int)ptr, 4 * v73);
        if ( ptr && &v77 != ptr )
          j_operator delete(ptr);
        j_Interaction::~Interaction((Interaction *)&v70);
        v39 = &v85;
        v12 = 1;
      v12 = 0;
    v54 = v87;
    while ( v54 )
      v57 = (void *)v54;
      v58 = *(_DWORD *)(v54 + 8);
      v54 = *(_DWORD *)v54;
      v59 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v55 = (unsigned int *)(v58 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v59);
      j_operator delete(v57);
    j___aeabi_memclr4_0((int)v85, 4 * v86);
    v60 = v85 == 0;
    if ( v85 )
      v60 = v39 + 6 == v85;
    if ( !v60 )
      j_operator delete(v85);
  else
    v12 = 0;
  return v12;
}
