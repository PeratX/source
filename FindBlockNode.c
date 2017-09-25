

signed int __fastcall FindBlockNode::tick(FindBlockNode *this)
{
  FindBlockNode *v1; // r5@1
  signed int result; // r0@1
  int v3; // r0@2
  Entity *v4; // r4@2
  int v5; // r0@2
  const BlockPos *v6; // r6@2
  int v14; // r0@9
  Path *v15; // r0@10
  int v16; // r4@17
  void *v17; // r0@18
  const BlockPos *v18; // r2@19
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  MinecraftEventing *v21; // [sp+4h] [bp-A4h]@3
  int v22; // [sp+8h] [bp-A0h]@18
  int v23; // [sp+Ch] [bp-9Ch]@18
  int v24; // [sp+10h] [bp-98h]@18
  int v25; // [sp+18h] [bp-90h]@18
  Path *v26; // [sp+1Ch] [bp-8Ch]@9
  float v27; // [sp+20h] [bp-88h]@7
  unsigned __int8 v33; // [sp+38h] [bp-70h]@6
  int v34; // [sp+3Ch] [bp-6Ch]@6
  int v35; // [sp+40h] [bp-68h]@6
  int v36; // [sp+44h] [bp-64h]@6
  int v37; // [sp+48h] [bp-60h]@3
  int v38; // [sp+4Ch] [bp-5Ch]@3
  int v39; // [sp+50h] [bp-58h]@3
  int v40; // [sp+54h] [bp-54h]@2
  int v41; // [sp+58h] [bp-50h]@4
  int v42; // [sp+5Ch] [bp-4Ch]@5

  v1 = this;
  result = *((_DWORD *)this + 7);
  if ( result == 1 )
  {
    v3 = j_BehaviorComponent::getEntity(*((BehaviorComponent **)v1 + 5));
    v4 = (Entity *)v3;
    v5 = (*(int (**)(void))(*(_DWORD *)v3 + 52))();
    j_BlockPos::BlockPos((int)&v40, v5);
    v6 = (const BlockPos *)j_Entity::getRegion(v4);
    if ( j_Entity::hasType((int)v4, 256) == 1 )
    {
      v21 = v4;
      v37 = 0;
      v38 = 0;
      v39 = 0;
      __asm { VLDR            S16, =3.4028e38 }
      _R11 = v40 - 32;
      do
      {
        __asm
        {
          VMOV            S0, R11
          VCVT.F32.S32    S18, S0
        }
        _R8 = v41 - 3;
        do
          __asm
          {
            VMOV            S0, R8
            VCVT.F32.S32    S20, S0
          }
          _R9 = v42 - 33;
          do
            v34 = _R11;
            v35 = _R8;
            v36 = ++_R9;
            j_BlockSource::getBlockID((BlockSource *)&v33, v6, (int)&v34);
            if ( v33 == *((_BYTE *)v1 + 32) )
            {
              __asm
              {
                VMOV            S0, R9
                VCVT.F32.S32    S0, S0
                VSTR            S18, [SP,#0xA8+var_7C]
                VSTR            S20, [SP,#0xA8+var_78]
                VSTR            S0, [SP,#0xA8+var_74]
              }
              j_Vec3::Vec3((int)&v27, (int)&v40);
                VLDR            S0, [SP,#0xA8+var_88]
                VLDR            S6, [SP,#0xA8+var_7C]
                VLDR            S2, [SP,#0xA8+var_84]
                VLDR            S8, [SP,#0xA8+var_78]
                VSUB.F32        S0, S6, S0
                VLDR            S4, [SP,#0xA8+var_80]
                VSUB.F32        S2, S8, S2
                VLDR            S10, [SP,#0xA8+var_74]
                VSUB.F32        S4, S10, S4
                VMUL.F32        S0, S0, S0
                VMUL.F32        S2, S2, S2
                VMUL.F32        S4, S4, S4
                VADD.F32        S0, S2, S0
                VADD.F32        S22, S0, S4
                VCMPE.F32       S22, S16
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
                v14 = j_Mob::getNavigation(v4);
                (*(void (__fastcall **)(Path **))(*(_DWORD *)v14 + 8))(&v26);
                if ( v26 )
                {
                  v15 = j_Path::~Path(v26);
                  j_operator delete((void *)v15);
                  __asm { VMOV.F32        S16, S22 }
                  v26 = 0;
                  v37 = _R11;
                  v38 = _R8;
                  v39 = _R9;
                }
                else
            }
          while ( _R9 < v42 + 31 );
          _VF = __OFSUB__(_R8, v41 + 2);
          _NF = _R8++ - (v41 + 2) < 0;
        while ( _NF ^ _VF );
        _VF = __OFSUB__(_R11, v40 + 31);
        _NF = _R11++ - (v40 + 31) < 0;
      }
      while ( _NF ^ _VF );
      __asm
        VLDR            S0, =3.4028e38
        VCMPE.F32       S16, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v16 = *((_DWORD *)v1 + 6);
        if ( v16 )
          sub_21E94B4((void **)&v25, "target_block_pos");
          v22 = v37;
          v23 = v38;
          v24 = v39;
          j_BehaviorData::pushData<BlockPos>(v16, (int **)&v25, (int)&v22);
          v17 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v25 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
            else
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
        if ( j_Entity::hasCategory((int)v21, 1) == 1 )
          j_MinecraftEventing::fireEventBlockFound(v21, (Player *)&v37, v18);
        result = 0;
      else
        result = 2;
    }
    else
      result = 3;
  }
  return result;
}


void __fastcall FindBlockNode::initializeFromDefinition(FindBlockNode *this)
{
  FindBlockNode::initializeFromDefinition(this);
}


int __fastcall FindBlockNode::FindBlockNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E310;
  *(_BYTE *)(result + 32) = BlockID::AIR;
  return result;
}


void __fastcall FindBlockNode::~FindBlockNode(FindBlockNode *this)
{
  FindBlockNode::~FindBlockNode(this);
}


void __fastcall FindBlockNode::initializeFromDefinition(FindBlockNode *this)
{
  FindBlockNode *v1; // r6@1
  int v2; // r5@1
  int v3; // r0@1
  int v4; // r0@3
  void *v5; // r0@3
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int v8; // r10@9
  unsigned int v9; // r11@9
  int v10; // r7@9
  int v11; // r6@9
  int v12; // r8@10
  _DWORD *v13; // r9@10
  int v14; // r4@10
  _DWORD *v15; // r1@12
  size_t v16; // r2@12
  int v17; // r5@14
  char *v18; // r0@16
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  FindBlockNode *v21; // [sp+0h] [bp-40h]@9
  int v22; // [sp+4h] [bp-3Ch]@3
  void *s1; // [sp+8h] [bp-38h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  s1 = &unk_28898CC;
  v3 = *((_DWORD *)this + 6);
  if ( v3 && j_BehaviorData::hasDataOfType(v3, (int **)(v2 + 20), 4) == 1 )
  {
    v4 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
           *((unsigned __int64 **)v1 + 6),
           (int **)(v2 + 20));
    sub_21E8AF4(&v22, (int *)(*(_DWORD *)(v4 + 8) + 12));
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&s1,
      &v22);
    v5 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v22 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  }
  else
    EntityInteraction::setInteractText((int *)&s1, (int *)(v2 + 16));
  v21 = v1;
  v8 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v9 = *(_DWORD *)algn_280AFA4;
  v10 = v8 % *(_DWORD *)algn_280AFA4;
  v11 = *(_DWORD *)(Block::mBlockLookupMap + 4 * (v8 % *(_DWORD *)algn_280AFA4));
  if ( v11 )
    v12 = *(_DWORD *)v11;
    v13 = s1;
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 12);
    while ( 1 )
      if ( v14 == v8 )
        v15 = *(_DWORD **)(v12 + 4);
        v16 = *(v13 - 3);
        if ( v16 == *(v15 - 3) && !j_memcmp_0(v13, v15, v16) )
          break;
      v17 = *(_DWORD *)v12;
      if ( *(_DWORD *)v12 )
        v14 = *(_DWORD *)(v17 + 12);
        v11 = v12;
        v12 = *(_DWORD *)v12;
        if ( *(_DWORD *)(v17 + 12) % v9 == v10 )
          continue;
      goto LABEL_16;
    if ( v11 && *(_DWORD *)v11 )
      *((_BYTE *)v21 + 32) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)v11 + 8) + 4);
LABEL_16:
  v18 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


void __fastcall FindBlockNode::~FindBlockNode(FindBlockNode *this)
{
  FindBlockNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((FindBlockNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}
