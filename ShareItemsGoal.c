

signed int __fastcall ShareItemsGoal::canUse(ShareItemsGoal *this)
{
  ShareItemsGoal *v1; // r4@1
  signed int v2; // r5@3
  const ItemInstance *v3; // r7@4
  ShareableComponent *v4; // r6@4
  int v5; // r9@4 OVERLAPPED
  int v6; // r7@5
  ItemInstance *v7; // r10@6 OVERLAPPED
  int v8; // r1@6
  ItemInstance *v9; // r8@7
  int v10; // r5@8
  char v11; // r11@9
  signed int v12; // r10@10
  int v13; // r9@10
  signed int v14; // r7@11
  signed int v15; // r0@13
  signed int v16; // r1@13
  bool v17; // zf@16
  char v18; // r0@18
  __int64 v20; // r6@52
  int v21; // r0@55
  signed int v22; // r5@55
  Recipes *v23; // r0@55
  ContainerComponent *v24; // r0@56
  Recipes *v25; // r0@59
  int v26; // r0@59
  Recipe *v27; // r5@59
  int v28; // r8@61
  int v29; // r5@61
  ContainerComponent *v30; // r0@61
  int v31; // r0@68
  void *v32; // r0@77
  void *v33; // r0@79
  int v34; // r0@81
  unsigned __int64 v35; // [sp+0h] [bp-1C8h]@9
  __int64 v36; // [sp+8h] [bp-1C0h]@6
  int v37; // [sp+10h] [bp-1B8h]@8
  int v38; // [sp+14h] [bp-1B4h]@7
  char v39; // [sp+18h] [bp-1B0h]@55
  int v40; // [sp+20h] [bp-1A8h]@66
  void *v41; // [sp+3Ch] [bp-18Ch]@64
  void *v42; // [sp+4Ch] [bp-17Ch]@62
  int v43; // [sp+60h] [bp-168h]@54
  int v44; // [sp+68h] [bp-160h]@55
  int v45; // [sp+70h] [bp-158h]@74
  void *v46; // [sp+8Ch] [bp-13Ch]@72
  void *v47; // [sp+9Ch] [bp-12Ch]@70
  int v48; // [sp+B0h] [bp-118h]@24
  int v49; // [sp+B8h] [bp-110h]@6
  int v50; // [sp+C0h] [bp-108h]@31
  void *v51; // [sp+DCh] [bp-ECh]@29
  void *ptr; // [sp+ECh] [bp-DCh]@27
  char v53; // [sp+100h] [bp-C8h]@23
  int v54; // [sp+108h] [bp-C0h]@38
  void *v55; // [sp+124h] [bp-A4h]@36
  void *v56; // [sp+134h] [bp-94h]@34
  int v57; // [sp+148h] [bp-80h]@45
  int v58; // [sp+150h] [bp-78h]@45
  int v59; // [sp+158h] [bp-70h]@49
  void *v60; // [sp+174h] [bp-54h]@47
  void *v61; // [sp+184h] [bp-44h]@45
  int v62; // [sp+198h] [bp-30h]@4
  int v63; // [sp+19Ch] [bp-2Ch]@4
  int v64; // [sp+1A0h] [bp-28h]@4

  v1 = this;
  if ( !j_Entity::getShareableComponent(*((Entity **)this + 2))
    || !j_Entity::getContainerComponent(*((Entity **)v1 + 2)) )
  {
    return 0;
  }
  v2 = 0;
  if ( j_Mob::getNavigation(*((Mob **)v1 + 2)) )
    v62 = 0;
    v63 = 0;
    v64 = 0;
    v3 = (const ItemInstance *)(*(int (**)(void))(**((_DWORD **)v1 + 2) + 908))();
    v4 = (ShareableComponent *)j_Entity::getShareableComponent(*((Entity **)v1 + 2));
    v5 = *(_DWORD *)(j_Entity::getContainerComponent(*((Entity **)v1 + 2)) + 4);
    if ( j_ItemInstance::isNull(v3) )
    {
      v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 44))(v5);
      if ( v6 )
      {
        v7 = (ItemInstance *)&v49;
        v8 = 0;
        HIDWORD(v36) = &v49;
        do
        {
          v38 = v8;
          v9 = (ItemInstance *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
          if ( !j_ItemInstance::isNull(v9) )
          {
            v10 = v62;
            v37 = v63;
            if ( v62 == v63 )
              goto LABEL_89;
            v11 = 0;
            v35 = __PAIR__((unsigned int)v4, v6);
            LODWORD(v36) = v5;
            do
            {
              v12 = j_ItemInstance::getId(v9);
              v13 = j_ItemInstance::getAuxValue(v9);
              if ( j_ItemInstance::isStackedByData((ItemInstance *)(v10 + 8)) == 1 )
                v14 = j_ItemInstance::isDamageableItem((ItemInstance *)(v10 + 8));
              else
                v14 = 1;
              v15 = j_ItemInstance::getId((ItemInstance *)(v10 + 8));
              v16 = 0;
              if ( v15 != v12 )
                v16 = 1;
              if ( v16 | v14 )
                v17 = v15 == v12;
                v17 = j_ItemInstance::getAuxValue((ItemInstance *)(v10 + 8)) == v13;
              v18 = 0;
              if ( v17 )
                v18 = 1;
              v11 |= v18;
                break;
              v10 += 80;
            }
            while ( v37 != v10 );
            v4 = (ShareableComponent *)HIDWORD(v35);
            v6 = v35;
            *(_QWORD *)&v5 = v36;
            if ( !(v11 & 1) )
LABEL_89:
              j_ItemInstance::ItemInstance((int)&v53);
              if ( j_ShareableComponent::hasSurplus(v4, v9, (ItemInstance *)&v53, 0) )
              {
                v48 = v38;
                j_ItemInstance::ItemInstance(v7, (int)&v53);
                if ( v37 == v64 )
                {
                  j_std::vector<std::pair<int,ItemInstance>,std::allocator<std::pair<int,ItemInstance>>>::_M_emplace_back_aux<std::pair<int,ItemInstance>>(
                    (unsigned __int64 *)&v62,
                    &v48);
                }
                else
                  *(_DWORD *)v37 = v48;
                  j_ItemInstance::ItemInstance((ItemInstance *)(v37 + 8), (int)v7);
                  v63 = v37 + 80;
                if ( ptr )
                  j_operator delete(ptr);
                if ( v51 )
                  j_operator delete(v51);
                if ( v50 )
                  (*(void (**)(void))(*(_DWORD *)v50 + 4))();
                v50 = 0;
              }
              if ( v56 )
                j_operator delete(v56);
              if ( v55 )
                j_operator delete(v55);
              if ( v54 )
                (*(void (**)(void))(*(_DWORD *)v54 + 4))();
          }
          v8 = v38 + 1;
        }
        while ( v38 + 1 != v6 );
      }
    }
    else if ( j_ShareableComponent::hasSurplus(v4, v3, 1) )
      v57 = -1;
      j_ItemInstance::ItemInstance((ItemInstance *)&v58, (int)v3);
      j_std::vector<std::pair<int,ItemInstance>,std::allocator<std::pair<int,ItemInstance>>>::_M_emplace_back_aux<std::pair<int,ItemInstance>>(
        (unsigned __int64 *)&v62,
        &v57);
      if ( v61 )
        j_operator delete(v61);
      if ( v60 )
        j_operator delete(v60);
      if ( v59 )
        (*(void (**)(void))(*(_DWORD *)v59 + 4))();
      v59 = 0;
    v20 = *(_QWORD *)&v62;
    if ( v63 == v62 )
      v2 = 0;
LABEL_76:
      if ( (_DWORD)v20 != HIDWORD(v20) )
          v32 = *(void **)(v20 + 60);
          if ( v32 )
            j_operator delete(v32);
          v33 = *(void **)(v20 + 44);
          if ( v33 )
            j_operator delete(v33);
          v34 = *(_DWORD *)(v20 + 16);
          if ( v34 )
            (*(void (**)(void))(*(_DWORD *)v34 + 4))();
          *(_DWORD *)(v20 + 16) = 0;
          LODWORD(v20) = v20 + 80;
        while ( HIDWORD(v20) != (_DWORD)v20 );
        LODWORD(v20) = v62;
      if ( (_DWORD)v20 )
        j_operator delete((void *)v20);
      return v2;
    j_ShareItemsGoal::selectEntityToShareWith((int)&v43, (int)v1, (__int64 *)&v62);
    if ( v43 < 0 )
      if ( v43 != -1 )
        v2 = 0;
LABEL_70:
        if ( v47 )
          j_operator delete(v47);
        if ( v46 )
          j_operator delete(v46);
        if ( v45 )
          (*(void (**)(void))(*(_DWORD *)v45 + 4))();
        goto LABEL_76;
      v31 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 908))();
      j_ItemInstance::operator=((int)v1 + 48, v31);
    else
      v21 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 16))(v5);
      j_ItemInstance::ItemInstance((ItemInstance *)&v39, v21);
      j_ItemInstance::operator=((int)v1 + 48, (int)&v44);
      v22 = j_ItemInstance::getId((ItemInstance *)&v39);
      v23 = (Recipes *)j_ItemInstance::getId((ShareItemsGoal *)((char *)v1 + 48));
      if ( (Recipes *)v22 == v23 )
        v24 = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)v1 + 2));
        j_ContainerComponent::removeItemsOfType(v24, (const ItemInstance *)&v39, *((_BYTE *)v1 + 62));
      else
        v25 = j_Recipes::getInstance(v23);
        v26 = j_Recipes::getRecipeFor(v25, (ShareItemsGoal *)((char *)v1 + 48));
        v27 = (Recipe *)v26;
        if ( v26 && !(*(int (**)(void))(*(_DWORD *)v26 + 44))() )
          v28 = j_Recipe::countQuantityOfIngredient(v27, (const ItemInstance *)&v39);
          v29 = *((_BYTE *)v1 + 62);
          v30 = (ContainerComponent *)j_Entity::getContainerComponent(*((Entity **)v1 + 2));
          j_ContainerComponent::removeItemsOfType(v30, (const ItemInstance *)&v39, v29 * v28);
      if ( v42 )
        j_operator delete(v42);
      if ( v41 )
        j_operator delete(v41);
      if ( v40 )
        (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    v2 = 1;
    goto LABEL_70;
  return v2;
}


signed int __fastcall ShareItemsGoal::canContinueToUse(ShareItemsGoal *this)
{
  ShareItemsGoal *v1; // r4@1
  int v2; // r0@3
  Entity *v3; // r5@3
  signed int result; // r0@6

  v1 = this;
  if ( !j_Entity::getShareableComponent(*((Entity **)this + 2)) )
    goto LABEL_10;
  if ( (*((_DWORD *)v1 + 3) + 20 < 0) ^ __OFADD__(*((_DWORD *)v1 + 3), 20) )
  v2 = j_Entity::getTarget(*((Entity **)v1 + 2));
  v3 = (Entity *)v2;
  if ( !v2 )
  if ( (*(int (**)(void))(*(_DWORD *)v2 + 316))() != 1 )
  _R0 = j_Entity::distanceToSqr(v3, *((const Entity **)v1 + 2));
  __asm
  {
    VMOV.F32        S0, #16.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  else
LABEL_10:
    result = 0;
  return result;
}


int __fastcall ShareItemsGoal::stop(ShareItemsGoal *this)
{
  ShareItemsGoal *v1; // r4@1
  char *v2; // r5@1
  int v3; // r0@2
  int v4; // r0@3
  int result; // r0@9
  int v6; // [sp+0h] [bp-58h]@3
  int v7; // [sp+8h] [bp-50h]@7
  void *v8; // [sp+24h] [bp-34h]@5
  void *ptr; // [sp+34h] [bp-24h]@3

  v1 = this;
  v2 = (char *)this + 48;
  if ( !j_ItemInstance::isNull((ShareItemsGoal *)((char *)this + 48)) )
  {
    v3 = j_Entity::getContainerComponent(*((Entity **)v1 + 2));
    (*(void (**)(void))(**(_DWORD **)(v3 + 4) + 24))();
  }
  v4 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  (*(void (**)(void))(*(_DWORD *)v4 + 40))();
  j_ItemInstance::ItemInstance((int)&v6);
  j_ItemInstance::operator=((int)v2, (int)&v6);
  if ( ptr )
    j_operator delete(ptr);
  if ( v8 )
    j_operator delete(v8);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v7 = 0;
  result = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 912))();
  *((_DWORD *)v1 + 3) = 0;
  return result;
}


void __fastcall ShareItemsGoal::~ShareItemsGoal(ShareItemsGoal *this)
{
  void *v1; // r0@1

  v1 = (void *)j_ShareItemsGoal::~ShareItemsGoal(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall ShareItemsGoal::selectEntityToShareWith(int a1, int a2, __int64 *a3)
{
  int v4; // r0@1
  BlockSource *v8; // r4@1
  int v9; // r5@1
  char *v10; // r0@1
  char *v11; // r4@1
  int v12; // r1@1 OVERLAPPED
  int v13; // r2@1 OVERLAPPED
  int v14; // r9@1
  signed int v15; // r0@1
  void *v16; // r0@3
  int v17; // r4@4
  int v18; // r11@4
  int v19; // r10@5
  int v20; // r4@6
  int v21; // r0@10
  int *v22; // r1@10
  int *v24; // r7@11
  Entity **v27; // r11@17
  unsigned int v28; // r0@20
  int v29; // r5@22
  int *v30; // r4@22
  Entity *v31; // r7@23
  char v32; // r0@23
  ClassID *v33; // r0@24
  __int64 v34; // kr00_8@26
  int v35; // r0@26
  void *v36; // r0@26
  Sensing *v37; // r0@28
  __int64 v38; // r4@30
  ShareableComponent *v39; // r0@31
  int v40; // r7@31
  int v41; // r0@31
  int v42; // r2@31
  signed int v44; // r0@34
  Entity *v45; // r1@37
  signed int v46; // r6@37
  signed int v47; // r5@47
  unsigned int *v48; // r2@52
  signed int v49; // r1@54
  void *v50; // r6@64
  void *v51; // r4@67
  int v52; // r1@67
  void *v53; // r0@67
  unsigned int *v54; // r2@68
  signed int v55; // r1@70
  bool v56; // zf@79
  __int64 *v57; // [sp+Ch] [bp-134h]@1
  EntityFilterGroup *v58; // [sp+10h] [bp-130h]@16
  int v59; // [sp+14h] [bp-12Ch]@4
  int v60; // [sp+18h] [bp-128h]@1
  Entity **v61; // [sp+2Ch] [bp-114h]@7
  EntityFilterGroup *v62; // [sp+30h] [bp-110h]@16
  char v63; // [sp+38h] [bp-108h]@89
  int v64; // [sp+40h] [bp-100h]@93
  void *v65; // [sp+5Ch] [bp-E4h]@91
  void *v66; // [sp+6Ch] [bp-D4h]@89
  int v67; // [sp+80h] [bp-C0h]@31
  int v68; // [sp+88h] [bp-B8h]@43
  unsigned __int8 v69; // [sp+8Eh] [bp-B2h]@34
  char v70; // [sp+8Fh] [bp-B1h]@31
  void *v71; // [sp+A4h] [bp-9Ch]@41
  void *ptr; // [sp+B4h] [bp-8Ch]@39
  int v73; // [sp+D0h] [bp-70h]@23
  void *v74; // [sp+D4h] [bp-6Ch]@23
  unsigned int v75; // [sp+D8h] [bp-68h]@20
  void *v76; // [sp+DCh] [bp-64h]@20
  int v77; // [sp+E0h] [bp-60h]@20
  signed int v78; // [sp+E4h] [bp-5Ch]@20
  int v79; // [sp+E8h] [bp-58h]@20
  int v80; // [sp+ECh] [bp-54h]@51
  float v81; // [sp+F0h] [bp-50h]@1
  char v82; // [sp+FCh] [bp-44h]@1

  _R8 = a2;
  v60 = a1;
  v57 = a3;
  v4 = j_Entity::getRegion(*(Entity **)(a2 + 8));
  __asm { VLDR            S0, [R8,#0x10] }
  v8 = (BlockSource *)v4;
  __asm { VCVT.F32.S32    S0, S0 }
  v9 = *(_DWORD *)(_R8 + 8);
  __asm
  {
    VSTR            S0, [SP,#0x140+var_50]
    VSTR            S0, [SP,#0x140+var_4C]
    VSTR            S0, [SP,#0x140+var_48]
  }
  j_AABB::grow((AABB *)&v82, (const Vec3 *)(v9 + 264), (int)&v81);
  v10 = j_BlockSource::fetchEntities(v8, (Entity *)v9, (const AABB *)&v82);
  v11 = v10;
  *(_QWORD *)&v12 = *(_QWORD *)v10;
  v14 = 0;
  v15 = v13 - v12;
  if ( (v13 - v12) >> 2 )
    if ( (unsigned int)(v15 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v16 = j_operator new(v15);
    *(_QWORD *)&v12 = *(_QWORD *)v11;
    v14 = (int)v16;
  v17 = v13 - v12;
  v18 = (v13 - v12) >> 2;
  v59 = (v13 - v12) >> 2;
  if ( 0 == v18 )
    v19 = v14 + 4 * v18;
    v61 = (Entity **)v14;
  else
    j___aeabi_memmove4_0(v14, v12);
    sub_1A371BE(v14, (_DWORD *)(v14 + 4 * v18), 2 * (31 - __clz(v18)), _R8);
    if ( v17 < 65 )
    {
      v61 = (Entity **)v14;
      sub_1A375B8((_DWORD *)v14, (_DWORD *)(v14 + 4 * v18), _R8);
    }
    else
      v20 = v14 + 64;
      sub_1A375B8((_DWORD *)v14, (_DWORD *)(v14 + 64), _R8);
      if ( v18 == 16 )
      {
        v61 = (Entity **)v14;
      }
      else
        v21 = v14 + 60;
        v22 = (int *)(v14 + 64);
        do
        {
          _R2 = *v22;
          v24 = (int *)v21;
          __asm
          {
            VLDR            S0, [R2,#0x48]
            VLDR            S2, [R2,#0x4C]
            VLDR            S4, [R2,#0x50]
          }
          while ( 1 )
            _R6 = *v24;
            _R5 = *(_DWORD *)(_R8 + 8);
            __asm
            {
              VLDR            S6, [R6,#0x48]
              VLDR            S12, [R5,#0x48]
              VLDR            S8, [R6,#0x4C]
              VLDR            S14, [R5,#0x4C]
              VSUB.F32        S6, S12, S6
              VSUB.F32        S12, S12, S0
              VLDR            S10, [R6,#0x50]
              VSUB.F32        S8, S14, S8
              VLDR            S1, [R5,#0x50]
              VSUB.F32        S14, S14, S2
              VSUB.F32        S10, S1, S10
              VSUB.F32        S1, S1, S4
              VMUL.F32        S6, S6, S6
              VMUL.F32        S12, S12, S12
              VMUL.F32        S8, S8, S8
              VMUL.F32        S14, S14, S14
              VMUL.F32        S10, S10, S10
              VADD.F32        S6, S8, S6
              VMUL.F32        S8, S1, S1
              VADD.F32        S12, S14, S12
              VADD.F32        S6, S6, S10
              VADD.F32        S8, S12, S8
              VCMPE.F32       S8, S6
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !(_NF ^ _VF) )
              break;
            *v22 = _R6;
            v22 = v24;
            --v24;
          v20 += 4;
          v21 += 4;
          *v22 = _R2;
          v22 = (int *)v20;
        }
        while ( v20 != v19 );
  v62 = *(EntityFilterGroup **)(_R8 + 32);
  v58 = *(EntityFilterGroup **)(_R8 + 36);
  if ( v62 == v58 )
    goto LABEL_89;
  while ( 1 )
    _ZF = v18 == 0;
    v27 = v61;
    if ( !_ZF )
      break;
LABEL_86:
    v18 = v59;
    v62 = (EntityFilterGroup *)((char *)v62 + 48);
    if ( v62 == v58 )
      goto LABEL_89;
    if ( *(_DWORD *)(*((_DWORD *)*v27 + 12) + 140) && j_Entity::hasCategory((int)*v27, 2) == 1 )
      v76 = 0;
      v77 = 0;
      v78 = 1065353216;
      v79 = 0;
      v28 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, &v78)));
      v75 = v28;
      if ( v28 == 1 )
        v80 = 0;
        v30 = &v80;
        if ( v28 >= 0x40000000 )
          sub_21E57F4();
        v29 = 4 * v28;
        v30 = (int *)j_operator new(4 * v28);
        j___aeabi_memclr4_0((int)v30, v29);
      v74 = v30;
      j_Entity::initParams(*(Entity **)(_R8 + 8), (VariantParameterList *)&v74);
      sub_21E94B4((void **)&v73, "other");
      v31 = *v27;
      v32 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
      __dmb();
      if ( !(v32 & 1) )
        v33 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
        if ( v33 )
          ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v33);
          j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
      v34 = ClassID::getID<Entity>(void)::id;
      v35 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)&v74,
              (int **)&v73);
      *(_QWORD *)v35 = v34;
      *(_DWORD *)(v35 + 8) = v31;
      v36 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v48 = (unsigned int *)(v73 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        else
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
      if ( j_EntityFilterGroup::evaluate(v62, *(const Entity **)(_R8 + 8), (const VariantParameterList *)&v74) )
        v37 = (Sensing *)j_Mob::getSensing(*(Mob **)(_R8 + 8));
        if ( j_Sensing::canSee(v37, *v27) == 1 )
          if ( j_Entity::getShareableComponent(*v27) )
            v38 = *v57;
            if ( (_DWORD)v38 == HIDWORD(v38) )
              v47 = 6;
            else
              while ( 1 )
              {
                v39 = (ShareableComponent *)j_Entity::getShareableComponent(*v27);
                v40 = j_ShareableComponent::wantsMore(v39, (const ItemInstance *)(v38 + 8));
                v41 = (*(int (**)(void))(*(_DWORD *)*v27 + 908))();
                j_ItemInstance::ItemInstance((ItemInstance *)&v67, v41);
                v42 = 0;
                _ZF = v70 == 0;
                if ( v70 )
                  _ZF = v67 == 0;
                if ( !_ZF )
                {
                  v44 = j_ItemInstance::isNull((ItemInstance *)&v67);
                  v42 = v69;
                  if ( v44 )
                    v42 = 0;
                }
                if ( v40 <= v42 )
                  v46 = 0;
                else
                  v45 = *v27;
                  (*(void (**)(void))(**(_DWORD **)(_R8 + 8) + 340))();
                  *(_DWORD *)v60 = *(_DWORD *)v38;
                  j_ItemInstance::ItemInstance((ItemInstance *)(v60 + 8), v38 + 8);
                  v46 = 1;
                if ( ptr )
                  j_operator delete(ptr);
                if ( v71 )
                  j_operator delete(v71);
                if ( v68 )
                  (*(void (**)(void))(*(_DWORD *)v68 + 4))();
                if ( v46 )
                  break;
                LODWORD(v38) = v38 + 80;
                if ( HIDWORD(v38) == (_DWORD)v38 )
                  v47 = 6;
                  goto LABEL_62;
              }
              v47 = 1;
LABEL_62:
            if ( v47 == 6 )
              v47 = 0;
          else
            v47 = 5;
          v47 = 5;
        v47 = 5;
      v50 = v76;
      while ( v50 )
        v51 = v50;
        v52 = *((_DWORD *)v50 + 2);
        v50 = *(void **)v50;
        v53 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v52 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        j_operator delete(v51);
      j___aeabi_memclr4_0((int)v74, 4 * v75);
      if ( v74 && &v80 != v74 )
        j_operator delete(v74);
      v56 = v47 == 0;
      if ( v47 )
        v56 = v47 == 5;
      if ( !v56 )
        break;
    ++v27;
    if ( v27 == (Entity **)v19 )
      goto LABEL_86;
  if ( v47 == 2 )
LABEL_89:
    j_ItemInstance::ItemInstance((int)&v63);
    *(_DWORD *)v60 = -2;
    j_ItemInstance::ItemInstance((ItemInstance *)(v60 + 8), (int)&v63);
    if ( v66 )
      j_operator delete(v66);
    if ( v65 )
      j_operator delete(v65);
    if ( v64 )
      (*(void (**)(void))(*(_DWORD *)v64 + 4))();
    v64 = 0;
  if ( v61 )
    j_operator delete(v61);
}


int __fastcall ShareItemsGoal::ShareItemsGoal(int a1, float a2, unsigned __int64 *a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  unsigned __int64 *v7; // r6@1
  float v8; // r7@1
  int v9; // r4@1
  int v10; // r2@1

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  j_Goal::Goal((Goal *)a1);
  v10 = v9 + 12;
  __asm
  {
    VLDR            S0, [SP,#0x18+arg_4]
    VMUL.F32        S0, S0, S0
  }
  *(_DWORD *)v9 = &off_271AD18;
  *(float *)(v9 + 8) = v8;
  *(_DWORD *)v10 = 0;
  *(_DWORD *)(v10 + 4) = a5;
  *(_DWORD *)(v10 + 8) = v6;
  __asm { VSTR            S0, [R4,#0x18] }
  *(_DWORD *)(v9 + 28) = 0;
  j_std::vector<MobDescriptor,std::allocator<MobDescriptor>>::vector(v9 + 32, v7);
  j_ItemInstance::ItemInstance(v9 + 48);
  *(_DWORD *)(v9 + 120) = 0;
  j_Goal::setRequiredControlFlags((Goal *)v9, 3);
  return v9;
}


void __fastcall ShareItemsGoal::~ShareItemsGoal(ShareItemsGoal *this)
{
  ShareItemsGoal::~ShareItemsGoal(this);
}


int __fastcall ShareItemsGoal::tick(ShareItemsGoal *this)
{
  int result; // r0@1
  int v3; // r5@1
  LookControl *v4; // r0@2
  int v5; // r3@2
  Entity *v6; // r0@2
  int v7; // r2@2
  const ItemInstance *v9; // r6@2
  int v10; // r0@3
  const Vec3 *v11; // r0@3
  int v17; // r1@5
  Level *v18; // r0@11
  char *v19; // r0@11
  unsigned int v20; // r0@11
  unsigned int v21; // r0@11
  int v22; // r0@12
  float v23; // r4@14
  int v24; // r0@14
  int v25; // r0@24
  int v26; // r2@24
  char v27; // [sp+8h] [bp-78h]@14
  int v28; // [sp+10h] [bp-70h]@18
  void *v29; // [sp+2Ch] [bp-54h]@16
  void *ptr; // [sp+3Ch] [bp-44h]@14
  int v31; // [sp+54h] [bp-2Ch]@2
  int v32; // [sp+58h] [bp-28h]@2
  int v33; // [sp+5Ch] [bp-24h]@2

  _R4 = this;
  result = j_Entity::getTarget(*((Entity **)this + 2));
  v3 = result;
  if ( !result )
    return result;
  v4 = (LookControl *)j_Mob::getLookControl(*((Mob **)_R4 + 2));
  j_LookControl::setLookAt(v4, (Entity *)v3, 30.0, 30.0);
  v5 = *(_DWORD *)(v3 + 268);
  v6 = (Entity *)*((_DWORD *)_R4 + 2);
  v7 = *(_DWORD *)(v3 + 80);
  v31 = *(_DWORD *)(v3 + 72);
  v32 = v5;
  v33 = v7;
  _R7 = j_Entity::distanceToSqr(v6, (const Vec3 *)&v31);
  v9 = (ShareItemsGoal *)((char *)_R4 + 48);
  --*((_DWORD *)_R4 + 7);
  if ( !j_ItemInstance::isNull((ShareItemsGoal *)((char *)_R4 + 48)) )
  {
    v10 = j_Entity::getTarget(*((Entity **)_R4 + 2));
    v11 = (const Vec3 *)(*(int (**)(void))(*(_DWORD *)v10 + 52))();
    _R0 = j_Entity::distanceToSqr((Entity *)v3, v11);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, [R4,#0x18]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      result = *((_DWORD *)_R4 + 7);
      if ( result > 0 )
        return result;
      __asm { VMOV            S16, R7 }
      v18 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 2));
      v19 = j_Level::getRandom(v18);
      v20 = j_Random::_genRandInt32((Random *)v19);
      __asm
      {
        VLDR            S0, =1024.0
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      }
      v21 = v20 % 7;
      *((_DWORD *)_R4 + 7) = v21 + 4;
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VLDR            S0, =256.0
          VCMPE.F32       S16, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          goto LABEL_24;
        v22 = v21 + 9;
      else
        v22 = v21 + 14;
      *((_DWORD *)_R4 + 7) = v22;
LABEL_24:
      v25 = j_Mob::getNavigation(*((Mob **)_R4 + 2));
      v26 = *((_DWORD *)_R4 + 5);
      result = (*(int (**)(void))(*(_DWORD *)v25 + 20))();
      if ( !result )
        result = *((_DWORD *)_R4 + 7) + 15;
        *((_DWORD *)_R4 + 7) = result;
      return result;
  }
  v17 = *((_DWORD *)_R4 + 3);
  result = v17 - 1;
  *((_DWORD *)_R4 + 3) = v17 - 1;
  if ( v17 > 0 )
    goto LABEL_8;
  if ( j_ItemInstance::isNull((ShareItemsGoal *)((char *)_R4 + 48)) )
    result = *((_DWORD *)_R4 + 3);
LABEL_8:
    if ( result )
    goto LABEL_14;
  *((_DWORD *)_R4 + 3) = 0;
LABEL_14:
  v23 = *((float *)_R4 + 2);
  v24 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  j_Entity::dropTowards(v23, v9, *(_QWORD *)v24, *(_QWORD *)v24 >> 32, *(_DWORD *)(v24 + 8));
  j_ItemInstance::ItemInstance((int)&v27);
  j_ItemInstance::operator=((int)v9, (int)&v27);
  if ( ptr )
    j_operator delete(ptr);
  if ( v29 )
    j_operator delete(v29);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  result = 0;
  v28 = 0;
  return result;
}


int __fastcall ShareItemsGoal::~ShareItemsGoal(ShareItemsGoal *this)
{
  ShareItemsGoal *v1; // r4@1
  Path *v2; // r0@1
  Path *v3; // r0@2
  void *v4; // r0@3
  void *v5; // r0@5
  int v6; // r0@7
  FilterGroup *v7; // r0@9
  FilterGroup *v8; // r5@9

  v1 = this;
  *(_DWORD *)this = &off_271AD18;
  v2 = (Path *)*((_DWORD *)this + 30);
  if ( v2 )
  {
    v3 = j_Path::~Path(v2);
    j_operator delete((void *)v3);
  }
  *((_DWORD *)v1 + 30) = 0;
  v4 = (void *)*((_DWORD *)v1 + 25);
  if ( v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 21);
  if ( v5 )
    j_operator delete(v5);
  v6 = *((_DWORD *)v1 + 14);
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *((_DWORD *)v1 + 14) = 0;
  v8 = (FilterGroup *)(*((_QWORD *)v1 + 4) >> 32);
  v7 = (FilterGroup *)*((_QWORD *)v1 + 4);
  if ( v7 != v8 )
    do
      v7 = (FilterGroup *)((char *)j_FilterGroup::~FilterGroup(v7) + 48);
    while ( v8 != v7 );
    v7 = (FilterGroup *)*((_DWORD *)v1 + 8);
  if ( v7 )
    j_operator delete((void *)v7);
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall ShareItemsGoal::selectEntityToShareWith(int a1, int a2, __int64 *a3)
{
  ShareItemsGoal::selectEntityToShareWith(a1, a2, a3);
}


int __fastcall ShareItemsGoal::start(ShareItemsGoal *this)
{
  ShareItemsGoal *v1; // r4@1
  int result; // r0@1
  int v3; // r0@2
  Path *v4; // r1@2
  Path *v5; // r0@2
  Path *v6; // r0@3
  Path *v7; // r0@4
  int v8; // r0@6
  Path *v9; // r2@6
  void (__cdecl *v10)(int, Path **); // r3@6
  int v11; // r2@6
  Path *v12; // r0@7
  Path *v13; // [sp+0h] [bp-18h]@6
  Path *v14; // [sp+4h] [bp-14h]@2

  v1 = this;
  result = j_Entity::getTarget(*((Entity **)this + 2));
  if ( result )
  {
    (*(void (**)(void))(**((_DWORD **)v1 + 2) + 912))();
    *((_DWORD *)v1 + 3) = 20;
    v3 = j_Mob::getNavigation(*((Mob **)v1 + 2));
    (*(void (__fastcall **)(Path **))(*(_DWORD *)v3 + 16))(&v14);
    v4 = v14;
    v14 = 0;
    v5 = (Path *)*((_DWORD *)v1 + 30);
    *((_DWORD *)v1 + 30) = v4;
    if ( v5 )
    {
      v6 = j_Path::~Path(v5);
      j_operator delete((void *)v6);
      if ( v14 )
      {
        v7 = j_Path::~Path(v14);
        j_operator delete((void *)v7);
      }
    }
    result = *((_DWORD *)v1 + 30);
    if ( result )
      v8 = j_Mob::getNavigation(*((Mob **)v1 + 2));
      v9 = (Path *)*((_DWORD *)v1 + 30);
      v10 = *(void (__cdecl **)(int, Path **))(*(_DWORD *)v8 + 24);
      *((_DWORD *)v1 + 30) = 0;
      v13 = v9;
      v11 = *((_DWORD *)v1 + 5);
      v10(v8, &v13);
      if ( v13 )
        v12 = j_Path::~Path(v13);
        j_operator delete((void *)v12);
      result = 10;
      *((_DWORD *)v1 + 7) = 10;
  }
  return result;
}
