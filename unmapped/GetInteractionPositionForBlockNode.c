

void __fastcall GetInteractionPositionForBlockNode::~GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode *this)
{
  GetInteractionPositionForBlockNode::~GetInteractionPositionForBlockNode(this);
}


int __fastcall GetInteractionPositionForBlockNode::initializeFromDefinition(GetInteractionPositionForBlockNode *this)
{
  GetInteractionPositionForBlockNode *v1; // r11@1
  int v2; // r0@1
  int v3; // r4@1
  int v4; // r0@3
  __int64 v5; // r1@3
  int v6; // r0@3
  int v7; // r0@5
  int v8; // r0@7
  __int64 v9; // r1@7
  int v10; // r0@7
  int v11; // r0@9
  int v12; // r0@11
  int v13; // r4@11
  char v14; // r5@11
  int v15; // r5@12
  char v16; // r4@12
  unsigned int *v17; // r1@13
  signed int v18; // r0@15
  int v19; // r1@20
  const char *v20; // r2@20
  char *v21; // r6@27
  char *v22; // r7@27
  size_t v23; // r2@27
  signed int v24; // r11@28
  char *v25; // r0@36
  int v26; // r4@37
  unsigned int *v27; // r1@38
  signed int v28; // r0@40
  int v29; // r1@45
  const char *v30; // r2@45
  char *v31; // r6@52
  char *v32; // r7@52
  size_t v33; // r2@52
  signed int v34; // r9@53
  char *v35; // r0@61
  int v36; // r0@62
  int result; // r0@64
  unsigned int *v38; // r2@67
  signed int v39; // r1@69
  unsigned int *v40; // r2@75
  signed int v41; // r1@77
  GetInteractionPositionForBlockNode *v42; // [sp+4h] [bp-44h]@12
  int v43; // [sp+Ch] [bp-3Ch]@11
  int v44; // [sp+Ch] [bp-3Ch]@12
  void *s1; // [sp+10h] [bp-38h]@12
  void *v46; // [sp+14h] [bp-34h]@11
  void *s2; // [sp+18h] [bp-30h]@27
  void *v48; // [sp+1Ch] [bp-2Ch]@52

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = *((_DWORD *)v1 + 1);
  if ( v2 && j_BehaviorData::hasDataOfType(v2, (int **)(v3 + 28), 0) == 1 )
  {
    v4 = *(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       *((unsigned __int64 **)v1 + 6),
                       (int **)(v3 + 28))
                   + 8);
    v5 = *(_QWORD *)(v4 + 12);
    v6 = *(_DWORD *)(v4 + 20);
    *((_QWORD *)v1 + 4) = v5;
  }
  else
    *((_DWORD *)v1 + 8) = *(_DWORD *)(v3 + 16);
    *((_DWORD *)v1 + 9) = *(_DWORD *)(v3 + 20);
    v6 = *(_DWORD *)(v3 + 24);
  *((_DWORD *)v1 + 10) = v6;
  v7 = *((_DWORD *)v1 + 6);
  if ( v7 && j_BehaviorData::hasDataOfType(v7, (int **)(v3 + 44), 0) == 1 )
    v8 = *(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                       (int **)(v3 + 44))
    v9 = *(_QWORD *)(v8 + 12);
    v10 = *(_DWORD *)(v8 + 20);
    *(_QWORD *)((char *)v1 + 44) = v9;
    *((_DWORD *)v1 + 11) = *(_DWORD *)(v3 + 32);
    *((_DWORD *)v1 + 12) = *(_DWORD *)(v3 + 36);
    v10 = *(_DWORD *)(v3 + 40);
  *((_DWORD *)v1 + 13) = v10;
  v11 = *((_DWORD *)v1 + 6);
  if ( v11 && j_BehaviorData::hasDataOfType(v11, (int **)(v3 + 52), 4) == 1 )
    v43 = v3;
    v12 = j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
            *((unsigned __int64 **)v1 + 6),
            (int **)(v3 + 52));
    sub_21E8AF4((int *)&v46, (int *)(*(_DWORD *)(v12 + 8) + 12));
    v13 = 0;
    v14 = 6;
    do
    {
      v29 = 4;
      v30 = "Down";
      switch ( (unsigned __int8)v13 )
      {
        case 1u:
          v29 = 2;
          v30 = "Up";
          break;
        case 2u:
          v29 = 5;
          v30 = "North";
        case 3u:
          v30 = "South";
        case 4u:
          v29 = 4;
          v30 = "West";
        case 5u:
          v30 = "East";
        case 0u:
        default:
          v29 = 14;
          v30 = "Unknown facing";
      }
      j_Util::toLower(&v48, v29, (unsigned int)v30);
      v31 = (char *)v48;
      v32 = (char *)v48 - 12;
      v33 = *((_DWORD *)v46 - 3);
      if ( v33 == *((_DWORD *)v48 - 3) )
        v34 = 0;
        if ( !j_memcmp_0(v46, v48, v33) )
          v34 = 1;
      else
      if ( (int *)v32 != &dword_28898C0 )
        v27 = (unsigned int *)(v31 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      if ( v34 )
        v14 = v13;
      ++v13;
    }
    while ( v13 != 6 );
    *((_BYTE *)v1 + 56) = v14;
    v26 = v43;
    v35 = (char *)v46 - 12;
    if ( (int *)((char *)v46 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)((char *)v46 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v42 = v1;
    v44 = v3;
    sub_21E8AF4((int *)&s1, (int *)(v3 + 48));
    v15 = 0;
    v16 = 6;
      v19 = 4;
      v20 = "Down";
      switch ( (unsigned __int8)v15 )
          v19 = 2;
          v20 = "Up";
          v19 = 5;
          v20 = "North";
          v20 = "South";
          v19 = 4;
          v20 = "West";
          v20 = "East";
          v19 = 14;
          v20 = "Unknown facing";
      j_Util::toLower(&s2, v19, (unsigned int)v20);
      v21 = (char *)s2;
      v22 = (char *)s2 - 12;
      v23 = *((_DWORD *)s1 - 3);
      if ( v23 == *((_DWORD *)s2 - 3) )
        v24 = 0;
        if ( !j_memcmp_0(s1, s2, v23) )
          v24 = 1;
      if ( (int *)v22 != &dword_28898C0 )
        v17 = (unsigned int *)(v21 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      if ( v24 )
        v16 = v15;
      ++v15;
    while ( v15 != 6 );
    v1 = v42;
    *((_BYTE *)v42 + 56) = v16;
    v25 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)((char *)s1 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = v44;
  v36 = *((_DWORD *)v1 + 6);
  if ( v36 && j_BehaviorData::hasDataOfType(v36, (int **)(v26 + 60), 3) == 1 )
    result = *(_DWORD *)(*(_DWORD *)(j_std::_Hashtable<std::string,std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>,std::allocator<std::pair<std::string const,std::unique_ptr<BehaviorData::DataProxy,std::default_delete<BehaviorData::DataProxy>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                                       *((unsigned __int64 **)v1 + 6),
                                       (int **)(v26 + 60))
                                   + 8)
                       + 12);
    result = *(_DWORD *)(v26 + 56);
  *((_DWORD *)v1 + 15) = result;
  return result;
}


int __fastcall GetInteractionPositionForBlockNode::GetInteractionPositionForBlockNode(BehaviorNode *a1)
{
  int result; // r0@1

  result = j_BehaviorNode::BehaviorNode(a1);
  *(_DWORD *)result = &off_271E340;
  *(_DWORD *)(result + 32) = BlockPos::ZERO;
  *(_DWORD *)(result + 36) = unk_2816278;
  *(_DWORD *)(result + 40) = dword_281627C;
  *(_DWORD *)(result + 44) = BlockPos::ZERO;
  *(_DWORD *)(result + 48) = unk_2816278;
  *(_DWORD *)(result + 52) = dword_281627C;
  *(_BYTE *)(result + 56) = 6;
  *(_DWORD *)(result + 60) = 3;
  return result;
}


int __fastcall GetInteractionPositionForBlockNode::parseFacingNameFromString(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  char v4; // r4@1
  unsigned int *v5; // r1@2
  signed int v6; // r0@4
  int v7; // r1@9
  const char *v8; // r2@9
  char *v9; // r6@16
  char *v10; // r7@16
  size_t v11; // r2@16
  signed int v12; // r11@17
  void *s2; // [sp+4h] [bp-2Ch]@16

  v2 = a2;
  v3 = 0;
  v4 = 6;
  do
  {
    v7 = 4;
    v8 = "Down";
    switch ( (unsigned __int8)v3 )
    {
      case 1u:
        v7 = 2;
        v8 = "Up";
        break;
      case 2u:
        v7 = 5;
        v8 = "North";
      case 3u:
        v8 = "South";
      case 4u:
        v7 = 4;
        v8 = "West";
      case 5u:
        v8 = "East";
      case 0u:
      default:
        v7 = 14;
        v8 = "Unknown facing";
    }
    j_Util::toLower(&s2, v7, (unsigned int)v8);
    v9 = (char *)s2;
    v10 = (char *)s2 - 12;
    v11 = *((_DWORD *)*v2 - 3);
    if ( v11 == *((_DWORD *)s2 - 3) )
      v12 = 0;
      if ( !j_memcmp_0(*v2, s2, v11) )
        v12 = 1;
    else
    if ( (int *)v10 != &dword_28898C0 )
      v5 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    if ( v12 )
      v4 = v3;
    ++v3;
  }
  while ( v3 != 6 );
  return v4;
}


signed int __fastcall GetInteractionPositionForBlockNode::tick(GetInteractionPositionForBlockNode *this)
{
  GetInteractionPositionForBlockNode *v1; // r5@1
  Entity *v2; // r8@1
  __int64 v3; // r2@1
  BlockSource *v4; // r6@1
  void *v5; // r0@5
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  __int64 v8; // r2@10
  int v9; // r2@11
  int v10; // r12@11
  int v11; // r1@11
  int v12; // r3@11
  int (*v13)(void); // r12@11
  __int64 v14; // kr08_8@11
  int v15; // r3@11
  int v16; // r1@11
  int v17; // r3@12
  int v18; // r7@12
  __int64 v19; // kr18_8@12
  _DWORD *v20; // r0@13
  int v25; // r12@13
  int v26; // r0@13
  __int64 v27; // r2@13
  int v28; // r1@14
  int v31; // r2@16
  void *v33; // r0@28
  signed int result; // r0@29
  int v35; // r4@33
  void *v36; // r0@34
  const BlockPos *v37; // r2@36
  unsigned int *v38; // r2@46
  signed int v39; // r1@48
  unsigned int *v40; // r2@50
  signed int v41; // r1@52
  MinecraftEventing *v42; // [sp+10h] [bp-128h]@16
  int v43; // [sp+14h] [bp-124h]@13
  GetInteractionPositionForBlockNode *v44; // [sp+18h] [bp-120h]@10
  int v45; // [sp+1Ch] [bp-11Ch]@28
  char v46; // [sp+20h] [bp-118h]@36
  char v47; // [sp+2Ch] [bp-10Ch]@34
  int v48; // [sp+3Ch] [bp-FCh]@34
  int v49; // [sp+40h] [bp-F8h]@19
  int v50; // [sp+48h] [bp-F0h]@20
  int v51; // [sp+4Ch] [bp-ECh]@21
  int v52; // [sp+50h] [bp-E8h]@22
  float v53; // [sp+84h] [bp-B4h]@19
  float v54; // [sp+90h] [bp-A8h]@13
  float v57; // [sp+9Ch] [bp-9Ch]@13
  float v60; // [sp+A8h] [bp-90h]@19
  int v61; // [sp+B4h] [bp-84h]@13
  int v62; // [sp+B8h] [bp-80h]@13
  int v63; // [sp+BCh] [bp-7Ch]@13
  int v64; // [sp+C0h] [bp-78h]@30
  int v65; // [sp+C4h] [bp-74h]@12
  int v66; // [sp+C8h] [bp-70h]@12
  int v67; // [sp+CCh] [bp-6Ch]@12
  int v68; // [sp+D0h] [bp-68h]@11
  int v69; // [sp+D4h] [bp-64h]@11
  int v70; // [sp+D8h] [bp-60h]@11
  int v71; // [sp+DCh] [bp-5Ch]@11
  int v72; // [sp+E0h] [bp-58h]@11
  int v73; // [sp+E4h] [bp-54h]@11
  int v74; // [sp+E8h] [bp-50h]@5

  v1 = this;
  v2 = (Entity *)j_BehaviorComponent::getEntity(*((BehaviorComponent **)this + 5));
  v4 = (BlockSource *)j_Entity::getRegion(v2);
  if ( *((_DWORD *)v1 + 8) == BlockPos::ZERO
    && *((_DWORD *)v1 + 9) == unk_2816278
    && *((_DWORD *)v1 + 10) == dword_281627C
    || *((_BYTE *)v1 + 56) == 6 )
  {
    j_Util::format(
      (Util *)&v74,
      "GetInteractionPositionForBlockNode: One or more parameters were still set to the default invalid value.",
      v3);
    j_MinecraftEventing::fireEventBehaviorErrored((int)v2, (const char **)&v74);
    v5 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        goto LABEL_43;
      }
LABEL_42:
      v7 = (*v6)--;
LABEL_43:
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
      return 3;
    }
    return 3;
  }
  v44 = (GetInteractionPositionForBlockNode *)((char *)v1 + 44);
  if ( j_BlockSource::hasBlock(v4, (GetInteractionPositionForBlockNode *)((char *)v1 + 44)) != 1
    || (v9 = *((_DWORD *)v1 + 12),
        v10 = *((_DWORD *)v1 + 13),
        v11 = *(_QWORD *)&Facing::DIRECTION[3 * *((_BYTE *)v1 + 56) + 1] >> 32,
        v12 = *(_QWORD *)&Facing::DIRECTION[3 * *((_BYTE *)v1 + 56) + 1],
        v71 = *((_DWORD *)v1 + 11) + Facing::DIRECTION[3 * *((_BYTE *)v1 + 56)],
        v72 = v12 + v9,
        v73 = v11 + v10,
        v13 = *(int (**)(void))(*(_DWORD *)j_BlockSource::getBlock(v4, (const BlockPos *)&v71) + 332),
        v14 = *(_QWORD *)&Facing::DIRECTION[3 * *((_BYTE *)v1 + 56) + 1],
        v15 = *(_QWORD *)((char *)v1 + 44) >> 32,
        v16 = *((_DWORD *)v1 + 13),
        v68 = Facing::DIRECTION[3 * *((_BYTE *)v1 + 56)] + *(_QWORD *)((char *)v1 + 44),
        v69 = v14 + v15,
        v70 = v16 + HIDWORD(v14),
        v13() != 1)
    || (v17 = *((_DWORD *)v1 + 12),
        v18 = *((_DWORD *)v1 + 13),
        v19 = *(_QWORD *)&Facing::DIRECTION[3 * *((_BYTE *)v1 + 56) + 1],
        v65 = *((_DWORD *)v1 + 11) + Facing::DIRECTION[3 * *((_BYTE *)v1 + 56)],
        v66 = v19 + v17,
        v67 = HIDWORD(v19) + v18,
        !j_BlockSource::hasBlock(v4, (const BlockPos *)&v65)) )
      (Util *)&v64,
      "GetInteractionPositionForBlockNode: mAnchorBlockPos was an invalid value or a value without a possible result.",
      v8);
    j_MinecraftEventing::fireEventBehaviorErrored((int)v2, (const char **)&v64);
    v5 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)(v64 - 4);
      goto LABEL_42;
  v20 = &Facing::DIRECTION[3 * *((_BYTE *)v1 + 56)];
  v61 = Facing::DIRECTION[3 * *((_BYTE *)v1 + 56)];
  v62 = v20[1];
  v63 = v20[2];
  j_Vec3::Vec3((int)&v57, (int)v44);
  __asm
    VLDR            S18, [SP,#0x138+var_9C]
    VLDR            S20, [SP,#0x138+var_98]
    VLDR            S22, [SP,#0x138+var_94]
  j_Vec3::Vec3((int)&v54, (int)&v61);
    VMOV.F32        S16, #0.5
    VLDR            S0, =0.45
    VLDR            S2, [SP,#0x138+var_A8]
    VLDR            S4, [SP,#0x138+var_A4]
    VLDR            S6, [SP,#0x138+var_A0]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VADD.F32        S8, S18, S16
    VADD.F32        S10, S20, S16
    VADD.F32        S12, S22, S16
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VADD.F32        S0, S12, S0
    VSTR            S2, [SP,#0x138+var_90]
    VSTR            S4, [SP,#0x138+var_8C]
    VSTR            S0, [SP,#0x138+var_88]
  v25 = *((_DWORD *)v1 + 8);
  v26 = *((_DWORD *)v1 + 15);
  HIDWORD(v27) = v25 - v26;
  v43 = v25 - v26;
  if ( v25 - v26 >= v26 + v25 )
LABEL_28:
    j_Util::format((Util *)&v45, "GetInteractionPositionForBlockNode: Failed to find a possible location.", v27);
    j_MinecraftEventing::fireEventBehaviorFailed((int)v2, (const char **)&v45);
    v33 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v45 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
      else
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    result = 2;
  else
    v28 = *((_DWORD *)v1 + 9);
    while ( 1 )
      _R9 = v28 - v26;
      if ( v28 - v26 < v26 + v28 )
        break;
LABEL_27:
      HIDWORD(v27) = v26 + v25;
      LODWORD(v27) = v43 + 1;
      v43 = v27;
      if ( (signed int)v27 >= v26 + v25 )
        goto LABEL_28;
    _R2 = v43;
    v42 = v2;
    __asm
      VMOV            S0, R2
      VCVT.F32.S32    S0, S0
    v31 = *((_DWORD *)v1 + 10);
    __asm { VADD.F32        S18, S0, S16 }
      _R8 = v31 - v26;
      if ( v31 - v26 < v26 + v31 )
LABEL_25:
      if ( ++_R9 >= v26 + v28 )
        v25 = *((_DWORD *)v1 + 8);
        v2 = v42;
        goto LABEL_27;
      VMOV            S0, R9
      VADD.F32        S20, S0, S16
      __asm
        VMOV            S0, R8
        VCVT.F32.S32    S0, S0
        VSTR            S18, [SP,#0x138+var_B4]
        VSTR            S20, [SP,#0x138+var_B0]
        VADD.F32        S0, S0, S16
        VSTR            S0, [SP,#0x138+var_AC]
      j_BlockSource::clip((BlockSource *)&v49, v4, (const Vec3 *)&v53, (int)&v60, 0, 0, 200, 0);
      if ( !v49 && v50 == *(_DWORD *)v44 && v51 == *((_DWORD *)v1 + 12) && v52 == *((_DWORD *)v1 + 13) )
      v31 = *((_DWORD *)v1 + 10);
      ++_R8;
      v26 = *((_DWORD *)v1 + 15);
      if ( _R8 >= v26 + v31 )
        v28 = *((_DWORD *)v1 + 9);
        goto LABEL_25;
    v35 = *((_DWORD *)v1 + 6);
    if ( v35 )
      sub_21E94B4((void **)&v48, "valid_block_pos");
      j_BlockPos::BlockPos((int)&v47, (int)&v53);
      j_BehaviorData::pushData<BlockPos>(v35, (int **)&v48, (int)&v47);
      v36 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
    if ( j_Entity::hasCategory((int)v42, 1) == 1 )
      j_BlockPos::BlockPos((int)&v46, (int)&v53);
      j_MinecraftEventing::fireEventBlockFound(v42, (Player *)&v46, v37);
    result = 0;
  return result;
}


void __fastcall GetInteractionPositionForBlockNode::~GetInteractionPositionForBlockNode(GetInteractionPositionForBlockNode *this)
{
  GetInteractionPositionForBlockNode *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E268;
  j_BehaviorTreeDefinitionPtr::~BehaviorTreeDefinitionPtr((GetInteractionPositionForBlockNode *)((char *)this + 8));
  j_j_j__ZdlPv_7((void *)v1);
}
