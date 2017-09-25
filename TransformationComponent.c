

_QWORD *__fastcall TransformationComponent::TransformationComponent(_QWORD *result, unsigned int a2)
{
  *result = a2;
  return result;
}


int __fastcall TransformationComponent::tick(TransformationComponent *this)
{
  TransformationComponent *v1; // r4@1
  int v2; // r0@1
  int v8; // r4@3
  signed int v9; // r9@3
  int v11; // r8@3
  int v12; // r7@3
  int v13; // r11@5
  int v15; // r1@5
  int v17; // r2@5
  int v20; // r10@11
  Block *v21; // r7@12
  unsigned int *v22; // r0@12
  unsigned int *v23; // r4@12
  int v24; // r5@13
  int v25; // r8@13
  signed int v26; // r6@13
  char v27; // r9@13
  const Block *v28; // r0@14
  signed int v29; // r0@14
  int v31; // r0@18
  bool v32; // nf@24
  unsigned __int8 v33; // vf@24
  int v35; // [sp+4h] [bp-7Ch]@5
  int v36; // [sp+8h] [bp-78h]@3
  int v37; // [sp+Ch] [bp-74h]@5
  int v38; // [sp+10h] [bp-70h]@5
  TransformationComponent *v39; // [sp+14h] [bp-6Ch]@2
  signed int v40; // [sp+18h] [bp-68h]@2
  BlockSource *v41; // [sp+1Ch] [bp-64h]@3
  int v42; // [sp+20h] [bp-60h]@5
  int v43; // [sp+24h] [bp-5Ch]@3
  int v44; // [sp+28h] [bp-58h]@10
  int v45; // [sp+2Ch] [bp-54h]@12
  int v46; // [sp+30h] [bp-50h]@12
  int v47; // [sp+34h] [bp-4Ch]@12

  v1 = this;
  v2 = *(_DWORD *)this;
  _R6 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 436);
  __asm { VLDR            S18, [R6,#0x24] }
  _R0 = j_Random::_genRandInt32((Random *)(v2 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    _R0 = *(Entity **)v1;
    v39 = v1;
    v8 = *(_DWORD *)(_R6 + 40);
    __asm
    {
      VLDR            S0, [R0,#0x48]
      VLDR            S20, [R0,#0x4C]
      VLDR            S22, [R0,#0x50]
      VLDR            S18, [R6,#0x30]
      VCVTR.S32.F32   S0, S0
    }
    v9 = *(_DWORD *)(_R6 + 44);
    __asm { VMOV            R1, S0 }
    v11 = v8 + _R1;
    v12 = _R1 - v8;
    v36 = v8 + _R1;
    v43 = _R1 - v8;
    v41 = (BlockSource *)j_Entity::getRegion(_R0);
    v40 = 1;
    if ( v12 < v11 && v9 >= 1 )
      __asm { VCVTR.S32.F32   S0, S22 }
      v13 = 0;
      __asm
      {
        VCVTR.S32.F32   S2, S20
        VMOV            R0, S0
      }
      v15 = _R0 + v8;
      v37 = _R0 - v8;
      __asm { VMOV            R0, S2 }
      v42 = v15;
      v17 = _R0 - v8;
      v38 = v8 + _R0;
      v35 = _R0 - v8;
      v40 = 1;
      do
        _VF = __OFSUB__(v13, v9);
        _NF = v13 - v9 < 0;
        if ( v13 < v9 )
        {
          _VF = __OFSUB__(v17, v38);
          _NF = v17 - v38 < 0;
        }
        if ( _NF ^ _VF )
          v44 = v17;
          if ( v37 < v42 )
          {
            do
            {
              v20 = v37;
              if ( v13 < v9 )
              {
                do
                {
                  v45 = v43;
                  v46 = v44;
                  v47 = v20;
                  v21 = (Block *)j_BlockSource::getBlock(v41, (const BlockPos *)&v45);
                  v22 = (unsigned int *)(*(_QWORD *)(_R6 + 52) >> 32);
                  v23 = (unsigned int *)*(_QWORD *)(_R6 + 52);
                  if ( v23 != v22 )
                  {
                    v24 = (int)(v22 - 1);
                    v25 = _R6;
                    v26 = v9;
                    v27 = 0;
                    do
                    {
                      v28 = (const Block *)j_Block::lookupByName(v23, 1);
                      v29 = j_Block::isType(v21, v28);
                      v27 |= v29;
                      if ( v29 )
                        break;
                      _ZF = v24 == (_DWORD)v23;
                      ++v23;
                    }
                    while ( !_ZF );
                    _ZF = (v27 & 1) == 0;
                    v9 = v26;
                    if ( !_ZF )
                      _R0 = j_Random::_genRandInt32((Random *)(*(_DWORD *)v39 + 552));
                      __asm { VMOV            S0, R0 }
                      ++v13;
                      __asm { VCVT.F64.U32    D0, S0 }
                      v31 = v40;
                      __asm
                      {
                        VMUL.F64        D0, D0, D8
                        VCVT.F32.F64    S0, D0
                        VCMPE.F32       S0, S18
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( _NF ^ _VF )
                        v31 = v40 + 1;
                      v40 = v31;
                    _R6 = v25;
                  }
                  ++v20;
                }
                while ( v20 < v42 && v13 < v9 );
              }
              v33 = __OFSUB__(++v44, v38);
              v32 = v44 - v38 < 0;
              if ( v44 < v38 )
                v33 = __OFSUB__(v13, v9);
                v32 = v13 - v9 < 0;
            }
            while ( v32 ^ v33 );
          }
        if ( ++v43 >= v36 )
          break;
        v17 = v35;
      while ( v13 < v9 );
  else
  *((_DWORD *)v39 + 1) -= v40;
  return j_TransformationComponent::transformIfAble(v39);
}


int __fastcall TransformationComponent::reloadComponent(TransformationComponent *this)
{
  TransformationComponent *v1; // r11@1
  Entity *v2; // r0@1
  __int64 v3; // kr00_8@1
  int i; // r4@2
  Level *v5; // r6@4
  int v6; // r7@4
  int v7; // r5@4
  int v9; // [sp+14h] [bp-34h]@1
  char v10; // [sp+18h] [bp-30h]@4

  v1 = this;
  v2 = *(Entity **)this;
  v9 = *(_DWORD *)(*((_DWORD *)v2 + 12) + 436);
  v3 = *(_QWORD *)(v9 + 12);
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    for ( i = v3 + 1; ; ++i )
    {
      v5 = (Level *)j_Entity::getLevel(v2);
      v6 = j_Entity::getRegion(*(Entity **)v1);
      v7 = *(_BYTE *)(i - 1);
      j_Entity::getAttachPos((AABB *)&v10, *(_DWORD *)v1, 1, 0);
      j_Level::broadcastSoundEvent(v5, v6, v7, (int)&v10, -1, 1, 0, 0);
      if ( HIDWORD(v3) == i )
        break;
      v2 = *(Entity **)v1;
    }
  }
  *((_DWORD *)v1 + 1) = *(_DWORD *)(v9 + 8);
  return j_TransformationComponent::transformIfAble(v1);
}


int __fastcall TransformationComponent::transformIfAble(TransformationComponent *this)
{
  Entity **v1; // r10@1
  int result; // r0@1
  int v3; // r4@2
  int v4; // r0@3
  int v5; // r5@3
  int v6; // r6@3
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  int (__fastcall *v10)(int, int, int *); // r4@7
  int v11; // r1@7
  int v12; // r0@7
  Entity *v13; // r4@7
  _BYTE *v14; // r7@11 OVERLAPPED
  _BYTE *v15; // r8@11 OVERLAPPED
  Entity *i; // r0@11
  Level *v17; // r6@12
  int v18; // r4@12
  int v19; // r5@12
  int (__fastcall *v20)(int, int *); // r4@14
  int v21; // r7@14
  void *v22; // r0@14
  __int64 v23; // r0@16
  int v24; // r6@16
  __int64 v25; // r0@16
  double v26; // r0@16
  unsigned int v27; // r0@16
  int v28; // r5@18
  int *v29; // r4@18
  char v30; // r0@19
  ClassID *v31; // r0@20
  __int64 v32; // kr00_8@22
  int v33; // r0@22
  void *v34; // r0@22
  int v35; // r7@23
  unsigned int *v36; // r2@25
  signed int v37; // r1@27
  void *v38; // r5@33
  int v39; // r1@33
  void *v40; // r0@33
  unsigned int *v41; // r2@41
  signed int v42; // r1@43
  unsigned int *v43; // r2@45
  signed int v44; // r1@47
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@74
  signed int v50; // r1@76
  int v51; // [sp+14h] [bp-8Ch]@11
  int v52; // [sp+18h] [bp-88h]@11
  int v53; // [sp+20h] [bp-80h]@19
  void *ptr; // [sp+24h] [bp-7Ch]@19
  unsigned int v55; // [sp+28h] [bp-78h]@16
  int v56; // [sp+2Ch] [bp-74h]@16
  int v57; // [sp+30h] [bp-70h]@16
  signed int v58; // [sp+34h] [bp-6Ch]@16
  int v59; // [sp+38h] [bp-68h]@16
  int v60; // [sp+3Ch] [bp-64h]@36
  unsigned int v61; // [sp+40h] [bp-60h]@16
  unsigned int v62; // [sp+44h] [bp-5Ch]@16
  unsigned int v63; // [sp+48h] [bp-58h]@16
  unsigned int v64; // [sp+4Ch] [bp-54h]@16
  int v65; // [sp+54h] [bp-4Ch]@14
  char v66; // [sp+58h] [bp-48h]@12
  int v67; // [sp+64h] [bp-3Ch]@7
  int v68; // [sp+68h] [bp-38h]@3
  int v69; // [sp+6Ch] [bp-34h]@4
  int v70; // [sp+70h] [bp-30h]@3
  int v71; // [sp+74h] [bp-2Ch]@3

  v1 = (Entity **)this;
  result = *((_DWORD *)this + 1);
  if ( result <= 0 )
  {
    v3 = *((_DWORD *)*v1 + 12);
    result = j_Entity::isRemoved(*v1);
    if ( !result )
    {
      v4 = j_Entity::getLevel(*v1);
      v5 = *(_DWORD *)(v3 + 436);
      v6 = v4;
      j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v68, (int *)(v5 + 4));
      j_EntityFactory::createTransformedEntity((EntityFactory *)&v71, (const EntityDefinitionIdentifier *)&v68, *v1);
      v7 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
      {
        v41 = (unsigned int *)(v70 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        }
        else
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v8 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v69 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      v9 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v68 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      result = v71;
      if ( v71 )
        v10 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v6 + 44);
        v11 = j_Entity::getRegion(*v1);
        v12 = v71;
        v71 = 0;
        v67 = v12;
        v13 = (Entity *)v10(v6, v11, &v67);
        if ( v67 )
          (*(void (**)(void))(*(_DWORD *)v67 + 32))();
        v67 = 0;
        if ( v13 )
          j_Entity::setPersistent(v13);
        v51 = v6;
        v52 = (int)v13;
        *(_QWORD *)&v14 = *(_QWORD *)(v5 + 24);
        for ( i = *v1; v15 != v14; ++v14 )
          v17 = (Level *)j_Entity::getLevel(i);
          v18 = j_Entity::getRegion(*v1);
          v19 = *v14;
          j_Entity::getAttachPos((AABB *)&v66, (int)*v1, 1, 0);
          j_Level::broadcastSoundEvent(v17, v18, v19, (int)&v66, -1, 1, 0, 0);
          i = *v1;
        if ( j_Entity::isLeashed(i) == 1 )
          v20 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v52 + 16);
          sub_21E94B4((void **)&v65, "minecraft:leashable");
          v21 = v20(v52, &v65);
          v22 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
          {
            v47 = (unsigned int *)(v65 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
            }
            else
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          }
          if ( v21 == 1 )
            v23 = j_Entity::getLeashHolder((Entity *)&v63, (int)*v1);
            v24 = j_Level::fetchEntity(v51, SHIDWORD(v23), v63, v64, 0);
            v25 = j_Entity::getLeashHolder((Entity *)&v61, (int)*v1);
            j_Entity::setLeashHolder(v52, SHIDWORD(v25), v61, v62);
            v56 = 0;
            v57 = 0;
            v58 = 1065353216;
            v59 = 0;
            HIDWORD(v26) = 10;
            LODWORD(v26) = &v58;
            v27 = sub_21E6254(v26);
            v55 = v27;
            if ( v27 == 1 )
              v29 = &v60;
              v60 = 0;
              if ( v27 >= 0x40000000 )
                sub_21E57F4();
              v28 = 4 * v27;
              v29 = (int *)j_operator new(4 * v27);
              j___aeabi_memclr4_0((int)v29, v28);
            ptr = v29;
            j_Entity::initParams((Entity *)v52, (VariantParameterList *)&ptr);
            sub_21E94B4((void **)&v53, "other");
            v30 = `guard variable for'unsigned long long ClassID::getID<Entity>(void)::id[0];
            __dmb();
            if ( !(v30 & 1) )
              v31 = (ClassID *)j_j___cxa_guard_acquire_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
              if ( v31 )
              {
                ClassID::getID<Entity>(void)::id = j_ClassID::getNextID(v31);
                j_j___cxa_guard_release_0(`guard variable for'unsigned long long ClassID::getID<Entity>(void)::id);
              }
            v32 = ClassID::getID<Entity>(void)::id;
            v33 = j_std::__detail::_Map_base<std::string,std::pair<std::string const,VariantParameterList::Parameter>,std::allocator<std::pair<std::string const,VariantParameterList::Parameter>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    (unsigned __int64 *)&ptr,
                    (int **)&v53);
            *(_QWORD *)v33 = v32;
            *(_DWORD *)(v33 + 8) = v24;
            v34 = (void *)(v53 - 12);
            if ( (int *)(v53 - 12) != &dword_28898C0 )
              v49 = (unsigned int *)(v53 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
              else
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
            j_EntityDefinitionDescriptor::executeTrigger(
              *(EntityDefinitionDescriptor **)(v52 + 48),
              (Entity *)v52,
              (const DefinitionTrigger *)(*(_DWORD *)(*(_DWORD *)(v52 + 48) + 336) + 16),
              (const VariantParameterList *)&ptr);
            v35 = v56;
            while ( v35 )
              v38 = (void *)v35;
              v39 = *(_DWORD *)(v35 + 8);
              v35 = *(_DWORD *)v35;
              v40 = (void *)(v39 - 12);
              if ( (int *)(v39 - 12) != &dword_28898C0 )
                v36 = (unsigned int *)(v39 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v37 = __ldrex(v36);
                  while ( __strex(v37 - 1, v36) );
                }
                else
                  v37 = (*v36)--;
                if ( v37 <= 0 )
                  j_j_j_j__ZdlPv_9(v40);
              j_operator delete(v38);
            j___aeabi_memclr4_0((int)ptr, 4 * v55);
            if ( ptr && &v60 != ptr )
              j_operator delete(ptr);
        result = v71;
        if ( v71 )
          result = (*(int (**)(void))(*(_DWORD *)v71 + 32))();
    }
  }
  return result;
}
