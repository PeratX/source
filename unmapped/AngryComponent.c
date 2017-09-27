

int __fastcall AngryComponent::restartTimer(int result)
{
  *(_DWORD *)result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 4) + 48) + 280) + 4);
  return result;
}


signed int __fastcall AngryComponent::_canAttack(AngryComponent *this, Mob *a2, Entity *a3, int a4, int a5)
{
  Entity *v5; // r4@1
  int v6; // r6@1
  Mob *v7; // r7@1
  bool v8; // zf@1
  AngryComponent *v9; // r5@1
  signed int v10; // r0@10
  bool v11; // zf@10
  Level *v12; // r0@15
  Sensing *v13; // r0@17
  __int64 v15; // [sp+0h] [bp-40h]@8
  __int64 v16; // [sp+8h] [bp-38h]@8
  __int64 v17; // [sp+10h] [bp-30h]@7
  __int64 v18; // [sp+18h] [bp-28h]@7
  int v19; // [sp+20h] [bp-20h]@6
  int v20; // [sp+24h] [bp-1Ch]@6

  v5 = a3;
  v6 = a4;
  v7 = a2;
  v8 = a3 == 0;
  v9 = this;
  if ( a3 )
    v8 = a2 == a3;
  if ( v8
    || (*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 316))(a3) != 1
    || (*(int (__fastcall **)(Mob *, Entity *, int))(*(_DWORD *)v7 + 968))(v7, v5, v6) != 1 )
  {
    return 0;
  }
  (*(void (__fastcall **)(int *, Mob *))(*(_DWORD *)v7 + 500))(&v19, v7);
  if ( (v19 & v20) == -1 )
    v10 = Entity::hasCategory((int)v5, 1);
    v11 = v6 == 0;
    if ( !v6 )
      v11 = v10 == 1;
    if ( v11 )
    {
      if ( Abilities::getBool((int)v5 + 4320, (int **)&Abilities::INVULNERABLE) )
        return 0;
      v12 = (Level *)Entity::getLevel(*((Entity **)v9 + 1));
      if ( !Level::getDifficulty(v12) )
    }
  else
    (*(void (__fastcall **)(__int64 *, Mob *))(*(_DWORD *)v7 + 500))(&v18, v7);
    (*(void (__fastcall **)(__int64 *, Entity *))(*(_DWORD *)v5 + 500))(&v17, v5);
    if ( !(v18 ^ v17) )
      return 0;
    (*(void (__fastcall **)(__int64 *))(**((_DWORD **)v9 + 1) + 500))(&v16);
    (*(void (__fastcall **)(__int64 *, Entity *))(*(_DWORD *)v5 + 500))(&v15, v5);
    if ( !(v16 ^ v15) )
  if ( a5 != 1 )
    return 1;
  v13 = (Sensing *)Mob::getSensing(*((Mob **)v9 + 1));
  if ( Sensing::canSee(v13, v5) == 1 )
  return 0;
}


int __fastcall AngryComponent::initFromDefinition(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(result + 4) + 48) + 280);
  *(_DWORD *)result = *(_DWORD *)(v1 + 4);
  *(_BYTE *)(result + 8) = *(_BYTE *)(v1 + 8);
  *(_DWORD *)(result + 12) = *(_DWORD *)(v1 + 12);
  *(_BYTE *)(result + 16) = 0;
  return result;
}


int __fastcall AngryComponent::AngryComponent(int result, int a2)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = a2;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 16) = 0;
  return result;
}


void __fastcall AngryComponent::tick(AngryComponent *this)
{
  int v2; // r5@3
  void (__fastcall *v3)(int, int); // r6@3
  int v4; // r0@3
  int v5; // r5@6
  int v6; // r0@6
  int v11; // r6@6
  __int64 *v12; // r10@6
  Entity *v13; // r5@6
  int v14; // r0@6
  __int64 v15; // r0@8
  void **v16; // r8@9
  signed int *v17; // r7@9
  unsigned int v18; // r9@9
  int *v19; // r7@10
  unsigned int *v20; // r2@11
  signed int v21; // r1@13
  int v22; // r11@19
  void (__fastcall *v23)(int, int); // r6@23
  int v24; // r0@23
  unsigned int v25; // r0@24
  void **v26; // r6@25
  int v27; // r8@26
  char v28; // r0@27
  ClassID *v29; // r0@28
  __int64 v30; // kr00_8@30
  int v31; // r0@30
  void *v32; // r0@30
  int v33; // r6@31
  unsigned int *v34; // r2@33
  signed int v35; // r1@35
  void *v36; // r7@41
  int v37; // r1@41
  void *v38; // r0@41
  Mob *v39; // r5@48
  Entity *v40; // r0@48
  int v41; // r0@49
  int v42; // r0@50
  double v43; // r0@52
  unsigned int v44; // r0@52
  int v45; // r6@54
  int *v46; // r5@54
  void **v47; // r9@55
  int v48; // r7@55
  double v49; // r0@57
  unsigned int v50; // r0@57
  int v51; // r6@59
  int *v52; // r5@59
  int v53; // r7@60
  unsigned int *v54; // r2@62
  signed int v55; // r1@64
  void *v56; // r6@70
  int v57; // r1@70
  void *v58; // r0@70
  void **v59; // r0@72
  unsigned int *v60; // r2@73
  signed int v61; // r1@75
  void *v62; // r6@81
  int v63; // r1@81
  void *v64; // r0@81
  void *v65; // [sp+1Ch] [bp-ACh]@55
  unsigned int v66; // [sp+20h] [bp-A8h]@52
  int v67; // [sp+24h] [bp-A4h]@52
  int v68; // [sp+28h] [bp-A0h]@52
  signed int v69; // [sp+2Ch] [bp-9Ch]@52
  int v70; // [sp+30h] [bp-98h]@52
  int v71; // [sp+34h] [bp-94h]@89
  int *v72; // [sp+38h] [bp-90h]@60
  unsigned int v73; // [sp+3Ch] [bp-8Ch]@57
  int v74; // [sp+40h] [bp-88h]@57
  int v75; // [sp+44h] [bp-84h]@57
  signed int v76; // [sp+48h] [bp-80h]@57
  int v77; // [sp+4Ch] [bp-7Ch]@57
  int v78; // [sp+50h] [bp-78h]@88
  int v79; // [sp+58h] [bp-70h]@11
  void *ptr; // [sp+5Ch] [bp-6Ch]@9
  unsigned int v81; // [sp+60h] [bp-68h]@24
  int v82; // [sp+64h] [bp-64h]@24
  int v83; // [sp+68h] [bp-60h]@24
  signed int v84; // [sp+6Ch] [bp-5Ch]@9
  int v85; // [sp+70h] [bp-58h]@24
  int v86; // [sp+74h] [bp-54h]@10
  float v87; // [sp+78h] [bp-50h]@6
  char v88; // [sp+84h] [bp-44h]@6

  _R4 = this;
  Entity::setStatusFlag(*((_DWORD *)this + 1), 24, 1);
  if ( !*((_BYTE *)_R4 + 16) )
  {
    *((_BYTE *)_R4 + 16) = 1;
    if ( !Entity::getTarget(*((Entity **)_R4 + 1)) )
    {
      v2 = *((_DWORD *)_R4 + 1);
      v3 = *(void (__fastcall **)(int, int))(*(_DWORD *)v2 + 340);
      v4 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v2 + 944))(*((_DWORD *)_R4 + 1));
      v3(v2, v4);
    }
    if ( *((_BYTE *)_R4 + 8) && Entity::getTarget(*((Entity **)_R4 + 1)) )
      v5 = Entity::getRegion(*((Entity **)_R4 + 1));
      v6 = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 488))();
      __asm { VLDR            S0, [R4,#0xC] }
      v11 = v6;
      __asm
      {
        VCVT.F32.S32    S0, S0
        VSTR            S0, [SP,#0xC8+var_50]
        VSTR            S0, [SP,#0xC8+var_4C]
        VSTR            S0, [SP,#0xC8+var_48]
      }
      AABB::grow((AABB *)&v88, (const Vec3 *)(*((_DWORD *)_R4 + 1) + 264), (int)&v87);
      v12 = (__int64 *)BlockSource::fetchEntities(v5, v11, (int)&v88, *((_DWORD *)_R4 + 1));
      v13 = (Entity *)(*(int (**)(void))(**((_DWORD **)_R4 + 1) + 944))();
      v14 = Entity::getTarget(*((Entity **)_R4 + 1));
      if ( EntityClassTree::isInstanceOf(v14, 256) == 1 )
        v13 = (Entity *)Entity::getTarget(*((Entity **)_R4 + 1));
      v15 = *v12;
      if ( HIDWORD(v15) != (_DWORD)v15 )
        v16 = &ptr;
        v17 = &v84;
        v18 = 0;
        do
        {
          v22 = *(_DWORD *)(v15 + 4 * v18);
          if ( !Entity::getTarget(*(Entity **)(v15 + 4 * v18))
            && AngryComponent::_canAttack(_R4, (Mob *)v22, v13, 1, 0) == 1 )
          {
            if ( *(_DWORD *)(v22 + 48) )
            {
              if ( !Entity::isTame((Entity *)v22) )
              {
                v23 = *(void (__fastcall **)(int, int))(*(_DWORD *)v22 + 340);
                v24 = Entity::getTarget(*((Entity **)_R4 + 1));
                v23(v22, v24);
                if ( *(_DWORD *)(*(_DWORD *)(v22 + 48) + 240) )
                {
                  v82 = 0;
                  v83 = 0;
                  v84 = 1065353216;
                  v85 = 0;
                  v25 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, (unsigned int)v17)));
                  v81 = v25;
                  if ( v25 == 1 )
                  {
                    v86 = 0;
                    v19 = &v86;
                  }
                  else
                    v26 = v16;
                    if ( v25 >= 0x40000000 )
                      sub_21E57F4();
                    v27 = 4 * v25;
                    v19 = (int *)operator new(4 * v25);
                    _aeabi_memclr4(v19, v27);
                    v16 = v26;
                  ptr = v19;
                  Entity::initParams(*((Entity **)_R4 + 1), (VariantParameterList *)v16);
                  sub_21E94B4((void **)&v79, "other");
                  v28 = `guard variable for'unsigned long long ClassID::getID<Mob>(void)::id[0];
                  __dmb();
                  if ( !(v28 & 1) )
                    v29 = (ClassID *)j___cxa_guard_acquire(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
                    if ( v29 )
                    {
                      ClassID::getID<Mob>(void)::id = ClassID::getNextID(v29);
                      j___cxa_guard_release(`guard variable for'unsigned long long ClassID::getID<Mob>(void)::id);
                    }
                  v30 = ClassID::getID<Mob>(void)::id;
                  v31 = std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                          (unsigned __int64 *)v16,
                          (int **)&v79);
                  *(_QWORD *)v31 = v30;
                  *(_DWORD *)(v31 + 8) = v22;
                  v32 = (void *)(v79 - 12);
                  if ( (int *)(v79 - 12) != &dword_28898C0 )
                    v20 = (unsigned int *)(v79 - 4);
                    if ( &pthread_create )
                      __dmb();
                      do
                        v21 = __ldrex(v20);
                      while ( __strex(v21 - 1, v20) );
                    else
                      v21 = (*v20)--;
                    if ( v21 <= 0 )
                      j_j_j_j__ZdlPv_9(v32);
                  EntityDefinitionDescriptor::executeTrigger(
                    *(_DWORD *)(v22 + 48),
                    (const Entity *)v22,
                    (DefinitionTrigger *)(*(_DWORD *)(*(_DWORD *)(v22 + 48) + 240) + 4),
                    (const VariantParameterList *)v16);
                  v33 = v82;
                  while ( v33 )
                    v36 = (void *)v33;
                    v37 = *(_DWORD *)(v33 + 8);
                    v33 = *(_DWORD *)v33;
                    v38 = (void *)(v37 - 12);
                    if ( (int *)(v37 - 12) != &dword_28898C0 )
                      v34 = (unsigned int *)(v37 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v35 = __ldrex(v34);
                        while ( __strex(v35 - 1, v34) );
                      }
                      else
                        v35 = (*v34)--;
                      if ( v35 <= 0 )
                        j_j_j_j__ZdlPv_9(v38);
                    operator delete(v36);
                  _aeabi_memclr4(ptr, 4 * v81);
                  if ( ptr && &v86 != ptr )
                    operator delete(ptr);
                  v17 = &v84;
                }
              }
            }
          }
          v15 = *v12;
          ++v18;
        }
        while ( v18 < (HIDWORD(v15) - (signed int)v15) >> 2 );
  }
  v39 = (Mob *)*((_DWORD *)_R4 + 1);
  v40 = (Entity *)Entity::getTarget(*((Entity **)_R4 + 1));
  if ( !AngryComponent::_canAttack(_R4, v39, v40, 0, 0) )
    Entity::setStatusFlag(*((_DWORD *)_R4 + 1), 24, 0);
    (*(void (**)(void))(**((_DWORD **)_R4 + 1) + 340))();
    v74 = 0;
    v75 = 0;
    HIDWORD(v49) = 10;
    v76 = 1065353216;
    v77 = 0;
    LODWORD(v49) = &v76;
    v50 = sub_21E6254(v49);
    v73 = v50;
    if ( v50 == 1 )
      v52 = &v78;
      v78 = 0;
    else
      if ( v50 >= 0x40000000 )
        goto LABEL_90;
      v51 = 4 * v50;
      v52 = (int *)operator new(4 * v50);
      _aeabi_memclr4(v52, v51);
    v72 = v52;
    Entity::initParams(*((Entity **)_R4 + 1), (VariantParameterList *)&v72);
    v47 = (void **)&v72;
    EntityDefinitionDescriptor::executeTrigger(
      *(_DWORD *)(*((_DWORD *)_R4 + 1) + 48),
      *((const Entity **)_R4 + 1),
      (DefinitionTrigger *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)_R4 + 1) + 48) + 280) + 16),
      (const VariantParameterList *)&v72);
    v53 = v74;
    while ( v53 )
      v56 = (void *)v53;
      v57 = *(_DWORD *)(v53 + 8);
      v53 = *(_DWORD *)v53;
      v58 = (void *)(v57 - 12);
      if ( (int *)(v57 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v57 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
        else
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v58);
      operator delete(v56);
    _aeabi_memclr4(v72, 4 * v73);
    v59 = (void **)v72;
    goto LABEL_84;
  v41 = *(_DWORD *)_R4;
  if ( *(_DWORD *)_R4 < 0 )
    return;
  _VF = __OFSUB__(v41, 1);
  v42 = v41 - 1;
  *(_DWORD *)_R4 = v42;
  if ( !((unsigned __int8)((v42 < 0) ^ _VF) | (v42 == 0)) )
  Entity::setStatusFlag(*((_DWORD *)_R4 + 1), 24, 0);
  (*(void (**)(void))(**((_DWORD **)_R4 + 1) + 340))();
  v67 = 0;
  v68 = 0;
  HIDWORD(v43) = 10;
  v69 = 1065353216;
  v70 = 0;
  LODWORD(v43) = &v69;
  v44 = sub_21E6254(v43);
  v66 = v44;
  if ( v44 == 1 )
    v71 = 0;
    v46 = &v71;
    goto LABEL_55;
  if ( v44 >= 0x40000000 )
LABEL_90:
    sub_21E57F4();
  v45 = 4 * v44;
  v46 = (int *)operator new(4 * v44);
  _aeabi_memclr4(v46, v45);
LABEL_55:
  v65 = v46;
  Entity::initParams(*((Entity **)_R4 + 1), (VariantParameterList *)&v65);
  v47 = &v65;
  EntityDefinitionDescriptor::executeTrigger(
    *(_DWORD *)(*((_DWORD *)_R4 + 1) + 48),
    *((const Entity **)_R4 + 1),
    (DefinitionTrigger *)(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)_R4 + 1) + 48) + 280) + 16),
    (const VariantParameterList *)&v65);
  v48 = v67;
  while ( v48 )
    v62 = (void *)v48;
    v63 = *(_DWORD *)(v48 + 8);
    v48 = *(_DWORD *)v48;
    v64 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v63 - 4);
      if ( &pthread_create )
        __dmb();
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v64);
    operator delete(v62);
  _aeabi_memclr4(v65, 4 * v66);
  v59 = (void **)v65;
LABEL_84:
  if ( v59 )
    if ( v47 + 6 != v59 )
      operator delete(v59);
}


void __fastcall AngryComponent::tick(AngryComponent *this)
{
  AngryComponent::tick(this);
}
