

void __fastcall LookAtComponent::tick(LookAtComponent *this)
{
  LookAtComponent::tick(this);
}


int __fastcall LookAtComponent::_isLookingAtMe(LookAtComponent *this, Entity *a2, int a3, float a4)
{
  int *v4; // r5@1
  Entity *v5; // r4@1
  int result; // r0@8
  float v14; // [sp+4h] [bp-54h]@4
  float v17; // [sp+10h] [bp-48h]@4
  float v20; // [sp+1Ch] [bp-3Ch]@1

  v4 = (int *)this;
  v5 = a2;
  j_Entity::getViewVector((Entity *)&v20, *(float *)&a2, 1.0, a4);
  __asm
  {
    VLDR            S0, [SP,#0x58+var_3C]
    VLDR            S2, [SP,#0x58+var_38]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [SP,#0x58+var_34]
    VMUL.F32        S8, S2, S2
    VLDR            S22, =0.0001
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S22
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
    __asm
    {
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
      VLDR            S20, [R0,#8]
    }
  else
      VDIV.F32        S20, S4, S6
      VDIV.F32        S18, S2, S6
      VDIV.F32        S16, S0, S6
  j_Entity::getAttachPos((AABB *)&v17, *v4, 1, 0);
  j_Entity::getAttachPos((AABB *)&v14, (int)v5, 3, 0);
    VLDR            S0, [SP,#0x58+var_54]
    VLDR            S2, [SP,#0x58+var_48]
    VLDR            S4, [SP,#0x58+var_50]
    VLDR            S8, [SP,#0x58+var_44]
    VSUB.F32        S2, S2, S0
    VLDR            S6, [SP,#0x58+var_4C]
    VSUB.F32        S4, S8, S4
    VLDR            S10, [SP,#0x58+var_40]
    VSUB.F32        S6, S10, S6
    VMUL.F32        S0, S2, S2
    VMUL.F32        S8, S4, S4
    VMUL.F32        S10, S6, S6
    VADD.F32        S0, S8, S0
    VADD.F32        S0, S0, S10
    VSQRT.F32       S8, S0
    VCVT.F64.F32    D0, S8
    VCMPE.F32       S8, S22
    _R0 = *(_QWORD *)&Vec3::ZERO;
    _R2 = dword_2822498;
      VDIV.F32        S6, S6, S8
      VDIV.F32        S4, S4, S8
      VDIV.F32        S2, S2, S8
      VMOV            R2, S6
      VMOV            R1, S4
      VMOV            R0, S2
    VLDR            D1, =-0.025
    VMOV            S4, R1
    VMOV            S6, R0
    VDIV.F64        D0, D1, D0
    VMOV            S2, R2
    VMUL.F32        S4, S4, S18
    VMUL.F32        S2, S2, S20
    VMUL.F32        S6, S6, S16
    VADD.F32        S2, S4, S2
    VMOV.F64        D2, #1.0
    VADD.F64        D0, D0, D2
    VADD.F32        S2, S2, S6
    VCVT.F64.F32    D1, S2
    VCMPE.F64       D1, D0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 0;
    result = (*(int (**)(void))(*(_DWORD *)*v4 + 252))();
  return result;
}


int __fastcall LookAtComponent::LookAtComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 1107296256;
  *(_BYTE *)(result + 12) = 0;
  return result;
}


int __fastcall LookAtComponent::initFromDefinition(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 340);
  *(_BYTE *)(result + 4) = *(_BYTE *)(v1 + 4);
  *(_DWORD *)(result + 8) = *(_DWORD *)(v1 + 8);
  *(_BYTE *)(result + 12) = *(_BYTE *)(v1 + 12);
  *(_DWORD *)(result + 16) = 0;
  return result;
}


void __fastcall LookAtComponent::tick(LookAtComponent *this)
{
  LookAtComponent *v1; // r4@1
  signed int v2; // r0@1
  Entity *v3; // r0@5
  BlockSource *v4; // r0@6
  float v5; // r3@6
  const Entity **v6; // r5@6
  __int64 v7; // kr00_8@6
  const Entity **v8; // r11@6
  void **v13; // r2@7
  unsigned __int64 *v14; // r8@7
  void **v15; // r10@7
  unsigned int v16; // r0@9
  int v17; // r6@11
  int *v18; // r5@11
  Entity *v19; // r5@12
  char v20; // r0@12
  ClassID *v21; // r0@13
  __int64 v22; // kr08_8@15
  int v23; // r0@15
  void *v24; // r0@15
  const Entity *v25; // r5@16
  char v26; // r0@16
  ClassID *v27; // r0@17
  __int64 v28; // kr10_8@19
  int v29; // r0@19
  void *v30; // r0@19
  int v31; // r6@21
  char v32; // r0@21
  ClassID *v33; // r0@22
  __int64 v34; // kr18_8@24
  int v35; // r0@24
  void *v36; // r0@24
  const Entity *v37; // r1@27
  const Entity *v38; // r1@28
  int v39; // r8@29
  Entity *v41; // r10@29
  EntityDefinitionDescriptor *v42; // r7@29
  unsigned int v43; // r0@29
  int v44; // r5@31
  int *v45; // r6@31
  void *v46; // r5@32
  void *v47; // r6@35
  int v48; // r1@35
  void *v49; // r0@35
  unsigned int *v50; // r2@36
  signed int v51; // r1@38
  int v52; // r5@47
  unsigned int *v53; // r2@49
  signed int v54; // r1@51
  void *v55; // r6@57
  int v56; // r1@57
  void *v57; // r0@57
  unsigned int *v58; // r2@66
  signed int v59; // r1@68
  unsigned int *v60; // r2@70
  signed int v61; // r1@72
  unsigned int *v62; // r2@74
  signed int v63; // r1@76
  EntityFilterGroup *v64; // [sp+14h] [bp-D4h]@7
  void *v65; // [sp+38h] [bp-B0h]@7
  unsigned int v66; // [sp+3Ch] [bp-ACh]@29
  void *ptr; // [sp+40h] [bp-A8h]@29
  int v68; // [sp+44h] [bp-A4h]@29
  signed int v69; // [sp+48h] [bp-A0h]@29
  int v70; // [sp+4Ch] [bp-9Ch]@29
  int v71; // [sp+50h] [bp-98h]@29
  int v72; // [sp+5Ch] [bp-8Ch]@21
  int v73; // [sp+64h] [bp-84h]@16
  int v74; // [sp+6Ch] [bp-7Ch]@7
  void *v75; // [sp+70h] [bp-78h]@7
  unsigned int v76; // [sp+74h] [bp-74h]@9
  int v77; // [sp+78h] [bp-70h]@9
  int v78; // [sp+7Ch] [bp-6Ch]@9
  signed int v79; // [sp+80h] [bp-68h]@9
  int v80; // [sp+84h] [bp-64h]@9
  int v81; // [sp+88h] [bp-60h]@60
  int v82; // [sp+8Ch] [bp-5Ch]@6
  int v83; // [sp+90h] [bp-58h]@6
  int v84; // [sp+94h] [bp-54h]@6
  char v85; // [sp+98h] [bp-50h]@6

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 < 1 )
  {
    if ( !*((_BYTE *)v1 + 4) || !j_Entity::getTarget(*(Entity **)v1) )
    {
      v3 = *(Entity **)v1;
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 48) + 340) )
      {
        v82 = *((_DWORD *)v1 + 2);
        v83 = v82;
        v84 = v82;
        j_AABB::grow((AABB *)&v85, (Entity *)((char *)v3 + 264), (int)&v82);
        v4 = (BlockSource *)j_Entity::getRegion(*(Entity **)v1);
        v7 = *(_QWORD *)j_BlockSource::fetchEntities(v4, *(Entity **)v1, (const AABB *)&v85);
        v6 = (const Entity **)HIDWORD(v7);
        v8 = (const Entity **)v7;
        if ( (_DWORD)v7 != HIDWORD(v7) )
        {
          __asm { VMOV.F32        S16, #20.0 }
          v13 = &v65;
          v14 = (unsigned __int64 *)&v75;
          v15 = (void **)&v74;
          v64 = (EntityFilterGroup *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 48) + 340) + 24);
          do
          {
            if ( j_LookAtComponent::_isLookingAtMe(v1, *v8, (int)v13, v5) == 1 )
            {
              v77 = 0;
              v78 = 0;
              v79 = 1065353216;
              v80 = 0;
              v16 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v79)));
              v76 = v16;
              if ( v16 == 1 )
              {
                v81 = 0;
                v18 = &v81;
              }
              else
                if ( v16 >= 0x40000000 )
                  sub_21E57F4();
                v17 = 4 * v16;
                v18 = (int *)j_operator new(4 * v16);
                j___aeabi_memclr4_0((int)v18, v17);
              v75 = v18;
              sub_21E94B4(v15, "self");
              v19 = *(Entity **)v1;
              v20 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
              __dmb();
              if ( !(v20 & 1) )
                v21 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
                if ( v21 )
                {
                  ClassID::getID<Mob>(void)::id = j_ClassID::getNextID(v21);
                  j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
                }
              v22 = ClassID::getID<Mob>(void)::id;
              v23 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      v14,
                      (int **)v15);
              *(_QWORD *)v23 = v22;
              *(_DWORD *)(v23 + 8) = v19;
              v24 = (void *)(v74 - 12);
              if ( (int *)(v74 - 12) != &dword_28898C0 )
                v58 = (unsigned int *)(v74 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v59 = __ldrex(v58);
                  while ( __strex(v59 - 1, v58) );
                else
                  v59 = (*v58)--;
                if ( v59 <= 0 )
                  j_j_j_j__ZdlPv_9(v24);
              sub_21E94B4((void **)&v73, "other");
              v25 = *v8;
              v26 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
              if ( !(v26 & 1) )
                v27 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
                if ( v27 )
                  ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v27);
                  j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
              v28 = ClassID::getID<Entity>(void)::id;
              v29 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                      (int **)&v73);
              *(_QWORD *)v29 = v28;
              *(_DWORD *)(v29 + 8) = v25;
              v30 = (void *)(v73 - 12);
              if ( (int *)(v73 - 12) != &dword_28898C0 )
                v60 = (unsigned int *)(v73 - 4);
                    v61 = __ldrex(v60);
                  while ( __strex(v61 - 1, v60) );
                  v61 = (*v60)--;
                if ( v61 <= 0 )
                  j_j_j_j__ZdlPv_9(v30);
              if ( j_Entity::getTarget(*(Entity **)v1) )
                sub_21E94B4((void **)&v72, "target");
                v31 = j_Entity::getTarget(*(Entity **)v1);
                v32 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
                __dmb();
                if ( !(v32 & 1) )
                  v33 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
                  if ( v33 )
                  {
                    ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v33);
                    j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
                  }
                v34 = ClassID::getID<Entity>(void)::id;
                v35 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                        v14,
                        (int **)&v72);
                *(_QWORD *)v35 = v34;
                *(_DWORD *)(v35 + 8) = v31;
                v36 = (void *)(v72 - 12);
                if ( (int *)(v72 - 12) != &dword_28898C0 )
                  v62 = (unsigned int *)(v72 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v63 = __ldrex(v62);
                    while ( __strex(v63 - 1, v62) );
                  else
                    v63 = (*v62)--;
                  if ( v63 <= 0 )
                    j_j_j_j__ZdlPv_9(v36);
              if ( j_EntityFilterGroup::evaluate(v64, *v8, (const VariantParameterList *)v14) == 1 )
                if ( *((_BYTE *)v1 + 4) )
                  v37 = *v8;
                  if ( (*(int (**)(void))(**(_DWORD **)v1 + 968))() == 1 )
                    v38 = *v8;
                    (*(void (**)(void))(**(_DWORD **)v1 + 340))();
                v39 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + 48) + 340);
                _R0 = j_FloatRange::getValue((FloatRange *)(v39 + 16), (Random *)(*(_DWORD *)v1 + 552));
                __asm
                  VMOV            S0, R0
                  VMUL.F32        S0, S0, S16
                  VCVTR.S32.F32   S0, S0
                  VSTR            S0, [R4,#0x10]
                v41 = *(Entity **)v1;
                v42 = *(EntityDefinitionDescriptor **)(*(_DWORD *)v1 + 48);
                v71 = 0;
                ptr = 0;
                v68 = 0;
                v65 = 0;
                v66 = 0;
                v69 = 1065353216;
                v70 = 0;
                v43 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v69)));
                v66 = v43;
                if ( v43 == 1 )
                  v71 = 0;
                  v45 = &v71;
                  if ( v43 >= 0x40000000 )
                    sub_21E57F4();
                  v44 = 4 * v43;
                  v45 = (int *)j_operator new(4 * v43);
                  j___aeabi_memclr4_0((int)v45, v44);
                v65 = v45;
                j_EntityDefinitionDescriptor::executeTrigger(
                  v42,
                  v41,
                  (const DefinitionTrigger *)(v39 + 56),
                  (const VariantParameterList *)&v65);
                v46 = ptr;
                while ( v46 )
                  v47 = v46;
                  v48 = *((_DWORD *)v46 + 2);
                  v46 = *(void **)v46;
                  v49 = (void *)(v48 - 12);
                  if ( (int *)(v48 - 12) != &dword_28898C0 )
                    v50 = (unsigned int *)(v48 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v51 = __ldrex(v50);
                      while ( __strex(v51 - 1, v50) );
                    }
                    else
                      v51 = (*v50)--;
                    if ( v51 <= 0 )
                      j_j_j_j__ZdlPv_9(v49);
                  j_operator delete(v47);
                j___aeabi_memclr4_0((int)v65, 4 * v66);
                if ( v65 && &v71 != v65 )
                  j_operator delete(v65);
              v52 = v77;
              v15 = (void **)&v74;
              while ( v52 )
                v55 = (void *)v52;
                v56 = *(_DWORD *)(v52 + 8);
                v52 = *(_DWORD *)v52;
                v57 = (void *)(v56 - 12);
                if ( (int *)(v56 - 12) != &dword_28898C0 )
                  v53 = (unsigned int *)(v56 - 4);
                      v54 = __ldrex(v53);
                    while ( __strex(v54 - 1, v53) );
                    v54 = (*v53)--;
                  if ( v54 <= 0 )
                    j_j_j_j__ZdlPv_9(v57);
                j_operator delete(v55);
              j___aeabi_memclr4_0((int)v75, 4 * v76);
              v14 = (unsigned __int64 *)&v75;
              if ( v75 && &v81 != v75 )
                j_operator delete(v75);
              v6 = (const Entity **)HIDWORD(v7);
            }
            ++v8;
          }
          while ( v8 != v6 );
        }
      }
    }
  }
  else
    *((_DWORD *)v1 + 4) = v2 - 1;
}
