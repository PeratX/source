

signed int __fastcall Igloo::postProcess(Igloo *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BlockSource *v4; // r4@1
  Igloo *v5; // r8@1
  signed int v6; // r7@1
  int v7; // r9@2
  int v8; // r0@2
  int v9; // r2@2
  void *v10; // r4@2
  _WORD *v11; // r6@2
  _WORD *v12; // r4@4
  int v13; // r5@6
  _WORD *v14; // r10@7
  signed int v15; // r0@7
  Igloo *v16; // r6@15
  Level *v17; // r0@19
  pthread_mutex_t *v18; // r8@19
  unsigned int v19; // r1@19
  signed int v20; // r4@19
  int v21; // r0@21
  const BlockPos *v22; // r11@21
  int v23; // r3@21
  int v24; // r4@21
  int v25; // r5@21
  int v26; // r7@21
  int v27; // r1@21
  StructureTemplate *v32; // r0@23
  StructureTemplate *v33; // r6@22
  signed int v34; // r10@22
  signed int v35; // r5@22
  signed int v36; // r9@22
  int v37; // r1@25
  int v38; // r2@25
  int v39; // r7@25
  int v40; // r5@25
  __int64 v41; // r0@25
  __int64 v42; // r0@25
  int v43; // r7@25
  unsigned int *v44; // r2@27
  signed int v45; // r1@29
  signed int v46; // r1@35
  int v47; // r0@41
  int v48; // r4@41
  unsigned int v49; // r0@43
  void *v50; // r0@43
  unsigned int *v51; // r2@44
  void *v52; // r0@50
  unsigned int *v53; // r2@55
  signed int v54; // r1@57
  void *v55; // r5@63
  int v56; // r1@63
  void *v57; // r0@63
  StructureTemplate *v60; // [sp+8h] [bp-140h]@22
  _WORD *v61; // [sp+Ch] [bp-13Ch]@22
  Igloo *v62; // [sp+10h] [bp-138h]@21
  Random *v63; // [sp+14h] [bp-134h]@1
  StructureSettings *v64; // [sp+18h] [bp-130h]@22
  BlockSource *v65; // [sp+1Ch] [bp-12Ch]@2
  int v66; // [sp+24h] [bp-124h]@43
  int v67; // [sp+28h] [bp-120h]@41
  int v68; // [sp+2Ch] [bp-11Ch]@41
  int v69; // [sp+30h] [bp-118h]@41
  char v70; // [sp+34h] [bp-114h]@41
  char v71; // [sp+38h] [bp-110h]@49
  int v72; // [sp+3Ch] [bp-10Ch]@49
  int v73; // [sp+40h] [bp-108h]@49
  int v74; // [sp+44h] [bp-104h]@49
  char v75; // [sp+48h] [bp-100h]@48
  int v76; // [sp+4Ch] [bp-FCh]@48
  int v77; // [sp+50h] [bp-F8h]@48
  int v78; // [sp+54h] [bp-F4h]@48
  int v79; // [sp+58h] [bp-F0h]@27
  int v80; // [sp+5Ch] [bp-ECh]@38
  int v81; // [sp+60h] [bp-E8h]@38
  int v82; // [sp+64h] [bp-E4h]@38
  void *ptr; // [sp+68h] [bp-E0h]@25
  int v84; // [sp+6Ch] [bp-DCh]@65
  int v85; // [sp+70h] [bp-D8h]@25
  int v86; // [sp+74h] [bp-D4h]@65
  int v87; // [sp+80h] [bp-C8h]@66
  __int64 v88; // [sp+84h] [bp-C4h]@25
  int v89; // [sp+8Ch] [bp-BCh]@25
  int v90; // [sp+90h] [bp-B8h]@25
  int v91; // [sp+94h] [bp-B4h]@25
  int v92; // [sp+98h] [bp-B0h]@25
  char v93; // [sp+9Ch] [bp-ACh]@25
  int v94; // [sp+A0h] [bp-A8h]@25
  int v95; // [sp+A4h] [bp-A4h]@25
  int v96; // [sp+A8h] [bp-A0h]@24
  int v97; // [sp+ACh] [bp-9Ch]@24
  int v98; // [sp+B0h] [bp-98h]@24
  int v99; // [sp+B4h] [bp-94h]@24
  signed int v100; // [sp+B8h] [bp-90h]@24
  signed int v101; // [sp+BCh] [bp-8Ch]@24
  int v102; // [sp+C0h] [bp-88h]@24
  signed int v103; // [sp+C4h] [bp-84h]@24
  int v104; // [sp+C8h] [bp-80h]@24
  char v105; // [sp+CCh] [bp-7Ch]@24
  int v106; // [sp+D0h] [bp-78h]@24
  int v107; // [sp+D4h] [bp-74h]@24
  char v108; // [sp+D8h] [bp-70h]@21
  __int64 v109; // [sp+F0h] [bp-58h]@21
  int v110; // [sp+F8h] [bp-50h]@21
  int v111; // [sp+FCh] [bp-4Ch]@21
  int v112; // [sp+100h] [bp-48h]@21
  int v113; // [sp+104h] [bp-44h]@21
  int v114; // [sp+108h] [bp-40h]@21
  int v115; // [sp+10Ch] [bp-3Ch]@21
  int v116; // [sp+114h] [bp-34h]@2
  int v117; // [sp+118h] [bp-30h]@2
  int v118; // [sp+11Ch] [bp-2Ch]@2

  v63 = a3;
  v4 = a2;
  v5 = this;
  v6 = 0;
  if ( ScatteredFeaturePiece::updateAverageGroundHeight(this, a2, a4, -1) )
  {
    v7 = (int)v5 + 4;
    v65 = v4;
    v8 = BlockSource::getAboveTopSolidBlock(v4, *((_DWORD *)v5 + 1), *((_DWORD *)v5 + 3), 0, 0);
    v9 = *((_DWORD *)v5 + 3);
    v116 = *((_DWORD *)v5 + 1);
    v117 = v8 - 1;
    v118 = v9;
    v10 = j_operator new(2u);
    *(_WORD *)v10 = 0;
    v11 = j_operator new(4u);
    v11[1] = 1;
    *v11 = *(_WORD *)v10;
    if ( v10 )
      j_operator delete(v10);
    v12 = j_operator new(8u);
    v12[2] = 2;
    *(_DWORD *)v12 = *(_DWORD *)v11;
    if ( v11 )
      j_operator delete(v11);
    v13 = (int)(v12 + 3);
    if ( v12 + 3 == v12 + 4 )
    {
      v14 = 0;
      v15 = 6;
      if ( v15 )
      {
        if ( v15 < 0 )
          sub_21E57F4();
        v14 = j_operator new(2 * v15);
      }
      v14[3] = 3;
      j___aeabi_memmove((int)v14, (int)v12);
      v13 = (int)(v14 + 3);
      if ( v12 )
        j_operator delete(v12);
      v16 = v5;
    }
    else
      v12[3] = 3;
      v14 = v12;
    v17 = (Level *)j_BlockSource::getLevel(v65);
    v18 = (pthread_mutex_t *)Level::getStructureManager(v17);
    v19 = 0;
    v20 = v13 + 2 - (_DWORD)v14;
    if ( v20 >> 1 )
      v19 = j_Random::_genRandInt32(v63) % (v20 >> 1);
    v21 = StructureSettings::StructureSettings((int)&v108, 0, v14[v19], 1, Block::mAnvil, v7);
    v22 = (Igloo *)((char *)v16 + 56);
    v62 = v16;
    v23 = *(_DWORD *)(v21 + 4);
    v24 = *(_DWORD *)(v21 + 8);
    v25 = *(_DWORD *)(v21 + 12);
    v26 = *(_DWORD *)(v21 + 16);
    v27 = (int)v16 + 56;
    *(_DWORD *)v27 = *(_DWORD *)v21;
    *(_DWORD *)(v27 + 4) = v23;
    *(_DWORD *)(v27 + 8) = v24;
    *(_DWORD *)(v27 + 12) = v25;
    *(_DWORD *)(v27 + 16) = v26;
    *((_QWORD *)v16 + 10) = v109;
    *((_DWORD *)v16 + 22) = v110;
    *((_DWORD *)v16 + 23) = v111;
    *((_DWORD *)v16 + 24) = v112;
    *((_DWORD *)v16 + 25) = v113;
    *((_DWORD *)v16 + 26) = v114;
    *((_DWORD *)v16 + 27) = v115;
    _R0 = j_Random::_genRandInt32(v63);
    __asm
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VMOV.F64        D1, #0.5
      VCMPE.F64       D0, D1
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v32 = (StructureTemplate *)StructureManager::getOrCreate(
                                   v18,
                                   (int **)&Igloo::STRUCTURE_LOCATION_IGLOO_NO_TRAPDOOR);
      StructureTemplate::placeInWorldChunk(v32, v65, (const BlockPos *)&v116, (Igloo *)((char *)v16 + 56));
      v64 = (StructureSettings *)StructureManager::getOrCreate(v18, (int **)&Igloo::STRUCTURE_LOCATION_IGLOO_TRAPDOOR);
      StructureTemplate::placeInWorldChunk(v64, v65, (const BlockPos *)&v116, (Igloo *)((char *)v16 + 56));
      v33 = (StructureTemplate *)StructureManager::getOrCreate(v18, (int **)&Igloo::STRUCTURE_LOCATION_LADDER);
      v60 = (StructureTemplate *)StructureManager::getOrCreate(v18, (int **)&Igloo::STRUCTURE_LOCATION_LABORATORY);
      v61 = v14;
      v34 = (j_Random::_genRandInt32(v63) & 7) + 4;
      v35 = 0;
      v36 = -1;
      do
        v102 = 3;
        v103 = v36;
        v104 = 5;
        v99 = 1;
        v100 = 2;
        v101 = 1;
        StructureTemplate::calculateConnectedPosition(
          (StructureTemplate *)&v105,
          v64,
          v22,
          (const StructureSettings *)&v102,
          (int)&v99);
        v96 = *(_DWORD *)&v105 + v116;
        v97 = v117 + v106;
        v98 = v118 + v107;
        StructureTemplate::placeInWorldChunk(v33, v65, (const BlockPos *)&v96, v22);
        ++v35;
        v36 -= 3;
      while ( v35 < v34 );
      v90 = 3;
      v91 = ~(3 * v34);
      v92 = 5;
      v88 = 21474836483LL;
      v89 = 7;
      v14 = v61;
      StructureTemplate::calculateConnectedPosition(
        (StructureTemplate *)&v93,
        v64,
        v22,
        (const StructureSettings *)&v90,
        (int)&v88);
      v37 = v94;
      v38 = v95;
      v39 = v117;
      v40 = v118;
      *((_DWORD *)v62 + 28) = *(_DWORD *)&v93 + v116;
      LODWORD(v41) = v39 + v37;
      HIDWORD(v41) = v40 + v38;
      *(_QWORD *)((char *)v62 + 116) = v41;
      StructureTemplate::placeInWorldChunk(v60, v65, (Igloo *)((char *)v62 + 112), v22);
      LODWORD(v42) = &ptr;
      StructureTemplate::getMarkers(v42, (Igloo *)((char *)v62 + 112), v22);
      v43 = v85;
      if ( v85 )
        do
        {
          v80 = *(_DWORD *)(v43 + 4);
          v81 = *(_DWORD *)(v43 + 8);
          v82 = *(_DWORD *)(v43 + 12);
          sub_21E8AF4(&v79, (int *)(v43 + 16));
          if ( sub_21E7D6C((const void **)&v79, "Villager") )
          {
            if ( sub_21E7D6C((const void **)&v79, "Zombie Villager") )
            {
              if ( !sub_21E7D6C((const void **)&v79, "chest") )
              {
                v70 = *(_BYTE *)(Block::mAir + 4);
                BlockSource::setBlock((int)v65, (BlockPos *)&v80, &v70, 3);
                v67 = v80;
                v68 = v81 - 1;
                v69 = v82;
                v47 = j_BlockSource::getBlockEntity(v65, (const BlockPos *)&v67);
                v48 = v47;
                if ( v47 )
                {
                  if ( j_BlockEntity::isType(v47, 2) == 1 )
                  {
                    sub_21E94B4((void **)&v66, "loot_tables/chests/igloo_chest.json");
                    v49 = j_Random::_genRandInt32(v63);
                    RandomizableBlockEntityContainerBase::setLootTable(v48, &v66, v49 >> 1);
                    v50 = (void *)(v66 - 12);
                    if ( (int *)(v66 - 12) != &dword_28898C0 )
                    {
                      v51 = (unsigned int *)(v66 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v46 = __ldrex(v51);
                        while ( __strex(v46 - 1, v51) );
                      }
                      else
                        v46 = (*v51)--;
                      if ( v46 <= 0 )
                        j_j_j_j__ZdlPv_9(v50);
                    }
                  }
                }
              }
            }
            else
              j_Vec3::Vec3((int)&v72, (int)&v80);
              *((_DWORD *)v62 + 34) = v72;
              *((_DWORD *)v62 + 35) = v73;
              *((_DWORD *)v62 + 36) = v74;
              v71 = *(_BYTE *)(Block::mAir + 4);
              BlockSource::setBlock((int)v65, (BlockPos *)&v80, &v71, 3);
          }
          else
            j_Vec3::Vec3((int)&v76, (int)&v80);
            *((_DWORD *)v62 + 31) = v76;
            *((_DWORD *)v62 + 32) = v77;
            *((_DWORD *)v62 + 33) = v78;
            v75 = *(_BYTE *)(Block::mAir + 4);
            BlockSource::setBlock((int)v65, (BlockPos *)&v80, &v75, 3);
          v52 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
            v44 = (unsigned int *)(v79 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v45 = __ldrex(v44);
              while ( __strex(v45 - 1, v44) );
              v45 = (*v44)--;
            if ( v45 <= 0 )
              j_j_j_j__ZdlPv_9(v52);
          v43 = *(_DWORD *)v43;
        }
        while ( v43 );
        v43 = v85;
      while ( v43 )
        v55 = (void *)v43;
        v56 = *(_DWORD *)(v43 + 16);
        v43 = *(_DWORD *)v43;
        v57 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v57);
        j_operator delete(v55);
      j___aeabi_memclr4((int)ptr, 4 * v84);
      v85 = 0;
      v86 = 0;
      _ZF = ptr == 0;
      if ( ptr )
        _ZF = &v87 == ptr;
      if ( !_ZF )
        j_operator delete(ptr);
    if ( v14 )
      j_operator delete(v14);
    v6 = 1;
  }
  return v6;
}


signed int __fastcall Igloo::getType(Igloo *this)
{
  return 1229409359;
}


int __fastcall Igloo::postProcessMobsAt(Igloo *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  BlockSource *v5; // r4@1
  const BoundingBox *v6; // r6@1
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  int v17; // r0@13
  int v18; // r2@13
  int (*v19)(void); // r3@13
  Entity *v20; // r7@13
  int result; // r0@19
  void *v22; // r0@25
  void *v23; // r0@26
  void *v24; // r0@27
  void *v25; // r0@28
  void *v26; // r0@29
  void *v27; // r0@30
  int v28; // r0@31
  int v29; // r2@31
  int (*v30)(void); // r3@31
  Entity *v31; // r4@31
  unsigned int *v32; // r2@38
  signed int v33; // r1@40
  unsigned int *v34; // r2@42
  signed int v35; // r1@44
  unsigned int *v36; // r2@46
  signed int v37; // r1@48
  unsigned int *v38; // r2@50
  signed int v39; // r1@52
  unsigned int *v40; // r2@54
  signed int v41; // r1@56
  unsigned int *v42; // r2@58
  signed int v43; // r1@60
  unsigned int *v44; // r2@62
  signed int v45; // r1@64
  unsigned int *v46; // r2@66
  signed int v47; // r1@68
  unsigned int *v48; // r2@70
  signed int v49; // r1@72
  unsigned int *v50; // r2@74
  signed int v51; // r1@76
  unsigned int *v52; // r2@78
  signed int v53; // r1@80
  unsigned int *v54; // r2@82
  signed int v55; // r1@84
  int v56; // [sp+8h] [bp-98h]@31
  float v57; // [sp+Ch] [bp-94h]@25
  int v58; // [sp+10h] [bp-90h]@25
  int v59; // [sp+1Ch] [bp-84h]@25
  int v60; // [sp+20h] [bp-80h]@25
  int v61; // [sp+28h] [bp-78h]@25
  int v62; // [sp+2Ch] [bp-74h]@25
  int v63; // [sp+30h] [bp-70h]@26
  int v64; // [sp+34h] [bp-6Ch]@25
  int v65; // [sp+38h] [bp-68h]@25
  int v66; // [sp+3Ch] [bp-64h]@19
  int v67; // [sp+40h] [bp-60h]@23
  int v68; // [sp+44h] [bp-5Ch]@21
  int v69; // [sp+48h] [bp-58h]@13
  float v70; // [sp+4Ch] [bp-54h]@7
  int v71; // [sp+50h] [bp-50h]@7
  int v72; // [sp+5Ch] [bp-44h]@7
  int v73; // [sp+60h] [bp-40h]@7
  int v74; // [sp+68h] [bp-38h]@7
  int v75; // [sp+6Ch] [bp-34h]@7
  int v76; // [sp+70h] [bp-30h]@8
  int v77; // [sp+74h] [bp-2Ch]@7
  int v78; // [sp+78h] [bp-28h]@7
  int v79; // [sp+7Ch] [bp-24h]@1
  int v80; // [sp+80h] [bp-20h]@5
  int v81; // [sp+84h] [bp-1Ch]@3

  _R5 = this;
  v5 = a2;
  v6 = a4;
  j_BlockPos::BlockPos((int)&v79, (int)this + 124);
  if ( v79 >= *(_DWORD *)v6
    && v79 <= *((_DWORD *)v6 + 3)
    && v81 >= *((_DWORD *)v6 + 2)
    && v81 <= *((_DWORD *)v6 + 5)
    && v80 >= *((_DWORD *)v6 + 1)
    && v80 <= *((_DWORD *)v6 + 4) )
  {
    sub_21E94B4((void **)&v74, "minecraft");
    j_EntityTypeToString((void **)&v73, 0x30Fu, 0);
    sub_21E94B4((void **)&v72, "minecraft:villager");
    EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v75, &v74, &v73, &v72);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R5,#0x7C]
      VLDR            S4, [R5,#0x84]
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0xA0+var_54]
    }
    v71 = *((_DWORD *)_R5 + 32);
    __asm { VSTR            S0, [SP,#0xA0+var_4C] }
    j_EntityFactory::createSpawnedEntity((Entity **)&v78, (const void **)&v75, 0, (int)&v70, &Vec2::ZERO);
    v11 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v77 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      }
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v76 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v75 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v72 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v73 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v74 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = j_BlockSource::getLevel(v5);
    v18 = v78;
    v19 = *(int (**)(void))(*(_DWORD *)v17 + 44);
    v78 = 0;
    v69 = v18;
    v20 = (Entity *)v19();
    if ( v69 )
      (*(void (**)(void))(*(_DWORD *)v69 + 32))();
    v69 = 0;
    if ( v20 )
      Entity::setPersistent(v20);
    if ( v78 )
      (*(void (**)(void))(*(_DWORD *)v78 + 32))();
  }
  j_BlockPos::BlockPos((int)&v66, (int)_R5 + 136);
  result = v66;
  if ( v66 >= *(_DWORD *)v6 && v66 <= *((_DWORD *)v6 + 3) )
    result = v68;
    if ( v68 >= *((_DWORD *)v6 + 2) && v68 <= *((_DWORD *)v6 + 5) )
      result = v67;
      if ( v67 >= *((_DWORD *)v6 + 1) && v67 <= *((_DWORD *)v6 + 4) )
        sub_21E94B4((void **)&v61, "minecraft");
        j_EntityTypeToString((void **)&v60, 0x30B2Cu, 0);
        sub_21E94B4((void **)&v59, "minecraft:zombie_villager");
        EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v62, &v61, &v60, &v59);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R5,#0x88]
          VLDR            S4, [R5,#0x90]
          VADD.F32        S2, S2, S0
          VADD.F32        S0, S4, S0
          VSTR            S2, [SP,#0xA0+var_94]
        }
        v58 = *((_DWORD *)_R5 + 35);
        __asm { VSTR            S0, [SP,#0xA0+var_8C] }
        j_EntityFactory::createSpawnedEntity((Entity **)&v65, (const void **)&v62, 0, (int)&v57, &Vec2::ZERO);
        v22 = (void *)(v64 - 12);
        if ( (int *)(v64 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v64 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
          }
          else
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v23 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v63 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v24 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v62 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v59 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v60 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v27 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v61 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = j_BlockSource::getLevel(v5);
        v29 = v65;
        v30 = *(int (**)(void))(*(_DWORD *)v28 + 44);
        v65 = 0;
        v56 = v29;
        v31 = (Entity *)v30();
        if ( v56 )
          (*(void (**)(void))(*(_DWORD *)v56 + 32))();
        v56 = 0;
        if ( v31 )
          Entity::setPersistent(v31);
        result = v65;
        if ( v65 )
          result = (*(int (**)(void))(*(_DWORD *)v65 + 32))();
  return result;
}


int __fastcall Igloo::Igloo(int a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = a1;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 48) = -1;
  *(_DWORD *)(a1 + 36) = 7;
  *(_DWORD *)(a1 + 40) = 5;
  *(_DWORD *)(a1 + 44) = 8;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)a1 = &off_271935C;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 64;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a2 + 6;
  *(_DWORD *)(a1 + 20) = 68;
  *(_DWORD *)(a1 + 24) = a3 + 7;
  StructureSettings::StructureSettings(a1 + 56);
  j___aeabi_memclr4(v3 + 112, 36);
  return v3;
}
