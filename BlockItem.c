

signed int __fastcall BlockItem::isDestructive(BlockItem *this, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_BYTE *)this + 44);
  result = 0;
  if ( *(_BYTE *)(Block::mTNT + 4) == v2 )
    result = 1;
  return result;
}


void __fastcall BlockItem::~BlockItem(BlockItem *this)
{
  BlockItem::~BlockItem(this);
}


signed int __fastcall BlockItem::_calculatePlacePos(BlockItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  signed __int8 *v5; // r5@1
  const BlockPos *v6; // r6@1
  int v7; // r0@1
  int v9; // [sp+0h] [bp-20h]@4
  int v10; // [sp+4h] [bp-1Ch]@4
  int v11; // [sp+8h] [bp-18h]@4
  unsigned __int8 v12; // [sp+Ch] [bp-14h]@1

  v5 = a4;
  v6 = (const BlockPos *)j_Entity::getRegion(a3);
  j_BlockSource::getBlockID((BlockSource *)&v12, v6, (int)a5);
  v7 = Block::mBlocks[v12];
  if ( v7 )
  {
    if ( (*(int (**)(void))(*(_DWORD *)v7 + 332))() )
    {
      *v5 = 1;
    }
    else
      j_BlockPos::neighbor((BlockPos *)&v9, (int)a5, *v5);
      *(_DWORD *)a5 = v9;
      *((_DWORD *)a5 + 1) = v10;
      *((_DWORD *)a5 + 2) = v11;
  }
  return 1;
}


_BOOL4 __fastcall BlockItem::isEmissive(BlockItem *this, int a2)
{
  return Block::mLightEmission[*((_BYTE *)this + 44)] != 0;
}


int __fastcall BlockItem::buildDescriptionId(BlockItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  BlockItem *v3; // r4@1
  int v4; // r5@1
  int (__fastcall *v5)(BlockItem *, int, _DWORD); // r6@1
  unsigned __int8 v6; // r0@1

  v3 = this;
  v4 = Block::mBlocks[*((_BYTE *)a2 + 44)];
  v5 = *(int (__fastcall **)(BlockItem *, int, _DWORD))(*(_DWORD *)v4 + 380);
  v6 = j_ItemInstance::getAuxValue(a3);
  return v5(v3, v4, v6);
}


int __fastcall BlockItem::BlockItem(int a1, const void **a2, __int16 a3)
{
  unsigned __int8 v3; // r5@1
  int v4; // r4@1
  __int64 v5; // r0@1
  const TextureUVCoordinateSet *v6; // r0@2

  v3 = a3;
  v4 = a1;
  j_Item::Item(a1, a2, a3);
  HIDWORD(v5) = BlockGraphics::mBlocks;
  *(_DWORD *)v4 = &off_27202DC;
  *(_BYTE *)(v4 + 44) = v3;
  LODWORD(v5) = BlockGraphics::mBlocks[v3];
  if ( (_DWORD)v5 )
  {
    v6 = (const TextureUVCoordinateSet *)j_BlockGraphics::getTexture(v5, 0, 0);
    j_Item::setIcon((Item *)v4, v6);
  }
  return v4;
}


int __fastcall BlockItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, float a6, float a7, float a8, int a9)
{
  Entity *v9; // r8@1
  int v10; // r5@1
  int v11; // r7@1
  int v12; // r11@1
  int v13; // r6@1
  int v14; // r9@1
  int result; // r0@1
  int v16; // r4@3
  int v20; // r9@4
  int (__fastcall *v21)(int, Entity *, int, int); // r5@4
  int (__fastcall *v22)(int, int); // r6@4
  int v23; // r0@4
  int v24; // r0@4
  Entity *v25; // r6@4
  char v27; // r0@4
  char v28; // r1@4
  int v29; // r0@8
  ShulkerBoxBlockEntity *v30; // r5@8
  char v31; // r0@10
  void (__fastcall *v32)(ShulkerBoxBlockEntity *, _DWORD); // r4@13
  char *v33; // r0@13
  void *v34; // r0@15
  int v35; // r1@16
  void **v36; // r1@17
  void (__fastcall *v37)(Entity *, int *, void **, _DWORD); // r5@21
  void *v38; // r4@21
  void *v39; // r6@21
  unsigned int *v40; // r2@23
  signed int v41; // r1@25
  int *v42; // r0@31
  void *v43; // r0@36
  void *v44; // r0@37
  Entity ***v47; // r0@43
  Entity ***v48; // r7@43
  __int64 v49; // r0@43
  int v50; // r5@45
  void *v51; // r0@47
  void *v52; // r0@48
  void *v53; // r0@49
  unsigned int *v54; // r2@50
  signed int v55; // r1@52
  double v56; // r0@56
  unsigned int v57; // r0@56
  int v58; // r7@58
  int *v59; // r4@58
  Level *v60; // r0@59
  void *v61; // r0@61
  void *v62; // r0@62
  void *v63; // r0@63
  void *v64; // r0@64
  void *v65; // r4@65
  int v67; // r1@70
  int v68; // r2@70
  const FullBlock *v69; // r2@70
  unsigned int *v70; // r2@75
  signed int v71; // r1@77
  unsigned int *v72; // r2@79
  signed int v73; // r1@81
  unsigned int *v74; // r2@83
  signed int v75; // r1@85
  unsigned int *v76; // r2@99
  signed int v77; // r1@101
  unsigned int *v78; // r2@103
  signed int v79; // r1@105
  unsigned int *v80; // r2@120
  signed int v81; // r1@122
  unsigned int *v82; // r2@124
  signed int v83; // r1@126
  unsigned int *v84; // r2@128
  signed int v85; // r1@130
  int v86; // [sp+0h] [bp-190h]@7
  int v87; // [sp+4h] [bp-18Ch]@4
  Entity *v88; // [sp+8h] [bp-188h]@2
  Level *v89; // [sp+14h] [bp-17Ch]@4
  BlockSource *v90; // [sp+1Ch] [bp-174h]@3
  int v91; // [sp+20h] [bp-170h]@21
  void *v92; // [sp+24h] [bp-16Ch]@21
  void *v93; // [sp+28h] [bp-168h]@21
  char *v94; // [sp+2Ch] [bp-164h]@21
  int v95; // [sp+34h] [bp-15Ch]@21
  int v96; // [sp+38h] [bp-158h]@70
  signed int v97; // [sp+3Ch] [bp-154h]@70
  int v98; // [sp+40h] [bp-150h]@70
  int v99; // [sp+44h] [bp-14Ch]@70
  int v100; // [sp+48h] [bp-148h]@70
  int v101; // [sp+4Ch] [bp-144h]@70
  int v102; // [sp+50h] [bp-140h]@70
  int v103; // [sp+54h] [bp-13Ch]@70
  int v104; // [sp+58h] [bp-138h]@70
  char v105; // [sp+5Ch] [bp-134h]@70
  void **v106; // [sp+68h] [bp-128h]@61
  int v107; // [sp+A0h] [bp-F0h]@63
  int v108; // [sp+A4h] [bp-ECh]@62
  int v109; // [sp+A8h] [bp-E8h]@61
  char v110; // [sp+B4h] [bp-DCh]@60
  char v111; // [sp+B8h] [bp-D8h]@59
  char v112; // [sp+B9h] [bp-D7h]@60
  char v113; // [sp+BCh] [bp-D4h]@59
  void *v114; // [sp+C4h] [bp-CCh]@59
  unsigned int v115; // [sp+C8h] [bp-C8h]@56
  void *ptr; // [sp+CCh] [bp-C4h]@56
  int v117; // [sp+D0h] [bp-C0h]@56
  signed int v118; // [sp+D4h] [bp-BCh]@56
  int v119; // [sp+D8h] [bp-B8h]@56
  int v120; // [sp+DCh] [bp-B4h]@67
  void **v121; // [sp+E0h] [bp-B0h]@47
  int v122; // [sp+118h] [bp-78h]@49
  int v123; // [sp+11Ch] [bp-74h]@48
  int v124; // [sp+120h] [bp-70h]@47
  char v125; // [sp+128h] [bp-68h]@43
  unsigned __int8 v126; // [sp+144h] [bp-4Ch]@16
  int v127; // [sp+148h] [bp-48h]@15
  char v128; // [sp+14Ch] [bp-44h]@7
  char v129; // [sp+14Dh] [bp-43h]@7
  char v130; // [sp+150h] [bp-40h]@4
  char v131; // [sp+151h] [bp-3Fh]@4
  char v132; // [sp+160h] [bp-30h]@2
  char v133; // [sp+164h] [bp-2Ch]@1

  v9 = this;
  v10 = a1;
  v11 = a4;
  v12 = a2;
  v13 = j_Entity::getRegion(this);
  v14 = j_BlockSource::getLevel((BlockSource *)v13);
  j_BlockSource::getBlockAndData((BlockSource *)&v133, (const BlockPos *)v13, v11);
  result = 0;
  if ( *(_BYTE *)(v12 + 14) )
  {
    v132 = *(_BYTE *)(v10 + 44);
    if ( j_BlockSource::mayPlace((BlockPos *)v13, (int)&v132, v11, a5, (int)v9, 0, 0) == 1 )
    {
      v90 = (BlockSource *)v13;
      v16 = Block::mBlocks[*(_BYTE *)(v10 + 44)];
      if ( v16 )
      {
        __asm
        {
          VLDR            S0, [SP,#0x190+arg_C]
          VLDR            S2, [SP,#0x190+arg_8]
          VLDR            S4, [SP,#0x190+arg_4]
        }
        v89 = (Level *)v14;
        v20 = v10;
        v21 = *(int (__fastcall **)(int, Entity *, int, int))(*(_DWORD *)v16 + 296);
          VSTR            S4, [SP,#0x190+var_3C]
          VSTR            S2, [SP,#0x190+var_38]
          VSTR            S0, [SP,#0x190+var_34]
        v22 = *(int (__fastcall **)(int, int))(*(_DWORD *)v20 + 72);
        v23 = j_ItemInstance::getAuxValue((ItemInstance *)v12);
        v24 = v22(v20, v23);
        v25 = v9;
        _R8 = v11;
        v87 = v24;
        v27 = v21(v16, v25, v11, a5);
        v28 = *(_BYTE *)(v20 + 44);
        v130 = *(_BYTE *)(v20 + 44);
        v131 = v27;
        if ( !a9 )
          goto LABEL_7;
        if ( !(*(int (__fastcall **)(int, int, char *, char *))(*(_DWORD *)a9 + 8))(a9, v11, &v133, &v130) )
          v28 = v130;
          v27 = v131;
LABEL_7:
          v128 = v28;
          v129 = v27;
          if ( j_BlockSource::setBlockAndData((int)v90, (BlockPos *)v11, (int)&v128, 3, (int)v25) != 1 )
            return 1;
          j_Item::updateCustomBlockEntityTag((Item *)v20, v90, (ItemInstance *)v12, (BlockPos *)v11);
          v29 = j_BlockSource::getBlockEntity(v90, (const BlockPos *)v11);
          v30 = (ShulkerBoxBlockEntity *)v29;
          if ( v29 )
          {
            if ( j_BlockEntity::isType(v29, 25) == 1 )
            {
              j_ShulkerBoxBlockEntity::setFacingDir(v30, a5);
              v31 = j_Block::isType(*(Block **)(v12 + 4), (const Block *)Block::mUndyedShulkerBox);
              j_ShulkerBoxBlockEntity::setUndyed(v30, v31);
            }
            if ( j_ItemInstance::hasUserData((ItemInstance *)v12) == 1 && j_BlockEntity::isType((int)v30, 25) == 1 )
              v32 = *(void (__fastcall **)(ShulkerBoxBlockEntity *, _DWORD))(*(_DWORD *)v30 + 140);
              v33 = j_ItemInstance::getUserData((ItemInstance *)v12);
              v32(v30, *(_DWORD *)v33);
            if ( j_ItemInstance::hasCustomHoverName((ItemInstance *)v12) == 1 )
              j_ItemInstance::getCustomName((ItemInstance *)&v127, v12);
              j_BlockEntity::setCustomName((int)v30, &v127);
              v34 = (void *)(v127 - 12);
              if ( (int *)(v127 - 12) != &dword_28898C0 )
              {
                v74 = (unsigned int *)(v127 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v75 = __ldrex(v74);
                  while ( __strex(v75 - 1, v74) );
                }
                else
                  v75 = (*v74)--;
                if ( v75 <= 0 )
                  j_j_j_j__ZdlPv_9(v34);
              }
          }
          j_BlockSource::getBlockID((BlockSource *)&v126, v90, v11);
          v35 = *(_BYTE *)(v20 + 44);
          if ( v35 == *(_BYTE *)(Block::mPumpkin + 4) )
            v36 = &BlockID::AIR;
          else
            if ( v35 != *(_BYTE *)(Block::mLitPumpkin + 4) )
              goto LABEL_54;
          if ( v126 == *(_BYTE *)*v36 )
            __asm
              VLDR            S0, [R8]
              VMOV.F32        S6, #-0.5
              VLDR            S2, [R8,#4]
              VMOV.F32        S8, #-2.0
              VLDR            S4, [R8,#8]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S10, S0, S6
              VADD.F32        S8, S2, S8
              VADD.F32        S6, S4, S6
              VMOV            R1, S10
              VMOV            R2, S8
              VMOV            R3, S6
              VMOV.F32        S6, #0.5
              VMOV.F32        S8, #1.0
              VADD.F32        S0, S0, S6
              VADD.F32        S4, S4, S6
              VADD.F32        S2, S2, S8
              VSTR            S0, [SP,#0x190+var_190]
              VSTR            S2, [SP,#0x190+var_18C]
              VSTR            S4, [SP,#0x190+var_188]
            j_AABB::AABB(COERCE_FLOAT(&v125), _R1, _R2, v86, v87, (int)v88);
            v47 = (Entity ***)j_BlockSource::fetchEntities2((int)v90, 788, (const AABB *)&v125, 0);
            v48 = v47;
            v49 = *(_QWORD *)v47;
            if ( (_DWORD)v49 == HIDWORD(v49) )
              v48 = (Entity ***)j_BlockSource::fetchEntities2((int)v90, 789, (const AABB *)&v125, 0);
              v49 = *(_QWORD *)v48;
            v50 = v12;
            if ( (_DWORD)v49 != HIDWORD(v49) && j_Entity::hasCategory((int)v25, 1) == 1 )
              j_EventPacket::EventPacket((int)&v121, v25, **v48, 4);
              (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v25 + 1448))(v25, &v121);
              v121 = &off_26E9D30;
              v51 = (void *)(v124 - 12);
              if ( (int *)(v124 - 12) != &dword_28898C0 )
                v76 = (unsigned int *)(v124 - 4);
                    v77 = __ldrex(v76);
                  while ( __strex(v77 - 1, v76) );
                  v77 = (*v76)--;
                if ( v77 <= 0 )
                  j_j_j_j__ZdlPv_9(v51);
              v52 = (void *)(v123 - 12);
              if ( (int *)(v123 - 12) != &dword_28898C0 )
                v78 = (unsigned int *)(v123 - 4);
                    v79 = __ldrex(v78);
                  while ( __strex(v79 - 1, v78) );
                  v79 = (*v78)--;
                if ( v79 <= 0 )
                  j_j_j_j__ZdlPv_9(v52);
              v53 = (void *)(v122 - 12);
              if ( (int *)(v122 - 12) != &dword_28898C0 )
                v54 = (unsigned int *)(v122 - 4);
                    v55 = __ldrex(v54);
                  while ( __strex(v55 - 1, v54) );
                  v55 = (*v54)--;
                if ( v55 <= 0 )
                  j_j_j_j__ZdlPv_9(v53);
LABEL_70:
            v96 = 1056964608;
            v97 = 1056964608;
            v98 = 1056964608;
            j_BlockPos::BlockPos((int)&v99, (int)&v96);
            v67 = *(_DWORD *)(_R8 + 4);
            v68 = *(_DWORD *)(_R8 + 8);
            v102 = *(_DWORD *)_R8 + v99;
            v103 = v100 + v67;
            v104 = v101 + v68;
            j_Vec3::Vec3((int)&v105, (int)&v102);
            j_Level::broadcastSoundEvent(v89, (int)v90, 6, (int)&v105, *(_BYTE *)(v20 + 44), 1, 0, 0);
            (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v25 + 612))(v25, v50);
            if ( j_Entity::hasCategory((int)v25, 1) == 1 )
              j_MinecraftEventing::fireEventBlockPlaced(v25, (Player *)&v130, v69);
            if ( a9 )
              (*(void (**)(void))(*(_DWORD *)a9 + 12))();
LABEL_54:
          v50 = v12;
          if ( v126 == *(_BYTE *)(Block::mStainedGlassPane + 4) && j_Entity::hasCategory((int)v25, 1) == 1 )
            ptr = 0;
            v117 = 0;
            v118 = 1065353216;
            v119 = 0;
            HIDWORD(v56) = 10;
            LODWORD(v56) = &v118;
            v57 = sub_21E6254(v56);
            v115 = v57;
            if ( v57 == 1 )
              v59 = &v120;
              v120 = 0;
            else
              if ( v57 >= 0x40000000 )
                sub_21E57F4();
              v58 = 4 * v57;
              v59 = (int *)j_operator new(4 * v57);
              j___aeabi_memclr4_0((int)v59, v58);
            v114 = v59;
            j_std::_Hashtable<BlockPos,BlockPos,std::allocator<BlockPos>,std::__detail::_Identity,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<BlockPos&>(
              &v113,
              (unsigned __int64 *)&v114,
              _R8);
            j_BlockSource::getBlockAndData((BlockSource *)&v111, v90, _R8);
            v60 = (Level *)j_BlockSource::getLevel(v90);
            if ( !j_Level::isClientSide(v60) )
              v110 = v130;
              if ( sub_1A9E9B0(v90, &v110, _R8, (unsigned __int64 *)&v114, 1, 1 << v112) == 1 )
                j_EventPacket::EventPacket((int)&v106, v25, 70, 1);
                (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v25 + 1448))(v25, &v106);
                v106 = &off_26E9D30;
                v61 = (void *)(v109 - 12);
                if ( (int *)(v109 - 12) != &dword_28898C0 )
                  v80 = (unsigned int *)(v109 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v81 = __ldrex(v80);
                    while ( __strex(v81 - 1, v80) );
                  }
                  else
                    v81 = (*v80)--;
                  if ( v81 <= 0 )
                    j_j_j_j__ZdlPv_9(v61);
                v62 = (void *)(v108 - 12);
                if ( (int *)(v108 - 12) != &dword_28898C0 )
                  v82 = (unsigned int *)(v108 - 4);
                      v83 = __ldrex(v82);
                    while ( __strex(v83 - 1, v82) );
                    v83 = (*v82)--;
                  if ( v83 <= 0 )
                    j_j_j_j__ZdlPv_9(v62);
                v63 = (void *)(v107 - 12);
                if ( (int *)(v107 - 12) != &dword_28898C0 )
                  v84 = (unsigned int *)(v107 - 4);
                      v85 = __ldrex(v84);
                    while ( __strex(v85 - 1, v84) );
                    v85 = (*v84)--;
                  if ( v85 <= 0 )
                    j_j_j_j__ZdlPv_9(v63);
            v64 = ptr;
            if ( ptr )
              do
                v65 = *(void **)v64;
                j_operator delete(v64);
                v64 = v65;
              while ( v65 );
            j___aeabi_memclr4_0((int)v114, 4 * v115);
            _ZF = v114 == 0;
            if ( v114 )
              _ZF = &v120 == v114;
            if ( !_ZF )
              j_operator delete(v114);
          goto LABEL_70;
      }
    }
    else if ( *(_DWORD *)(v11 + 4) >= (signed int)*(_WORD *)(v13 + 24)
           && j_Entity::hasCategory((int)v9, 1) == 1
           && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 1408))(v9) == 1 )
      v37 = *(void (__fastcall **)(Entity *, int *, void **, _DWORD))(*(_DWORD *)v9 + 1376);
      sub_21E94B4((void **)&v95, "build.tooHigh");
      j_Util::toString<short,(void *)0,(void *)0>((void **)&v91, *(_WORD *)(v13 + 24));
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v92 = j_operator new(4u);
      v94 = (char *)v92 + 4;
      v93 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                      (int)&v91,
                      (int)&v92,
                      (int)v92);
      v37(v9, &v95, &v92, 0);
      v39 = v93;
      v38 = v92;
      if ( v92 != v93 )
        do
          v42 = (int *)(*(_DWORD *)v38 - 12);
          if ( v42 != &dword_28898C0 )
            v40 = (unsigned int *)(*(_DWORD *)v38 - 4);
            if ( &pthread_create )
              __dmb();
                v41 = __ldrex(v40);
              while ( __strex(v41 - 1, v40) );
              v41 = (*v40)--;
            if ( v41 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          v38 = (char *)v38 + 4;
        while ( v38 != v39 );
        v38 = v92;
      if ( v38 )
        j_operator delete(v38);
      v43 = (void *)(v91 - 12);
      if ( (int *)(v91 - 12) != &dword_28898C0 )
        v70 = (unsigned int *)(v91 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
        else
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
      v44 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v95 - 4);
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
    result = 0;
  }
  return result;
}


void __fastcall BlockItem::~BlockItem(BlockItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall BlockItem::getIcon(BlockItem *this, int a2, int a3, bool a4)
{
  int v4; // r0@1
  int v5; // r4@1
  int (__fastcall *v6)(int, signed int, int, _DWORD); // r5@1
  int v7; // r0@1

  v4 = *((_BYTE *)this + 44);
  v5 = BlockGraphics::mBlocks[v4];
  v6 = *(int (__fastcall **)(int, signed int, int, _DWORD))(*(_DWORD *)v5 + 48);
  v7 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v4] + 424))();
  return v6(v5, 2, v7, 0);
}
