

void __fastcall DBChunkStorage::_serializeChunk(DBChunkStorage *this, const LevelChunk *a2, leveldb::WriteBatch *a3)
{
  DBChunkStorage *v3; // r10@1
  const LevelChunk *v4; // r8@1
  const void **v5; // r9@1
  char *v6; // r4@1
  int v7; // r0@1
  int v8; // r7@1
  int v9; // r6@3
  int *v10; // r4@3
  int v11; // r5@4
  int v12; // r4@4
  int v13; // r5@6
  int v14; // r6@6
  int *v15; // r4@6
  int v21; // r7@10
  int v22; // r6@10
  int v23; // r10@11
  unsigned int *v24; // r2@13
  signed int v25; // r1@15
  int v26; // r4@22
  unsigned int *v27; // r2@27
  signed int v28; // r1@29
  int v29; // r7@37
  DBChunkStorage *v30; // r5@43
  int v31; // r6@43
  int *v32; // r4@43
  unsigned __int8 *v33; // r4@44
  unsigned int v34; // r1@45
  int v35; // r7@47
  unsigned int v36; // r6@47
  unsigned int v37; // r8@47
  int v38; // r5@47
  int v39; // r0@47
  int v40; // r11@48
  int v41; // r7@48
  int v42; // r10@52
  char *v43; // r0@54
  int v44; // r12@54
  int v45; // r2@54
  int v46; // r7@54
  int v47; // r6@54
  int v48; // r6@58
  int *v49; // r4@58
  unsigned int *v50; // r1@59
  signed int v51; // r0@61
  int v52; // r6@63
  int v53; // r6@67
  int *v54; // r4@67
  unsigned int *v55; // r1@68
  signed int v56; // r0@70
  int v57; // r6@72
  int v58; // r6@75
  int *v59; // r4@75
  unsigned int *v60; // r1@76
  signed int v61; // r0@78
  int v62; // r6@80
  int v63; // r6@83
  int *v64; // r4@83
  unsigned int *v65; // r1@84
  signed int v66; // r0@86
  int v67; // r6@88
  BlockTickingQueue *v68; // r0@90
  int v69; // r6@91
  int *v70; // r4@91
  unsigned int *v71; // r1@92
  signed int v72; // r0@94
  int v73; // r6@96
  int v74; // r6@99
  int *v75; // r4@99
  unsigned int *v76; // r1@100
  signed int v77; // r0@102
  int v78; // r6@104
  int v79; // r6@105
  int *v80; // r4@105
  int v81; // r6@107
  int *v82; // r4@107
  unsigned int *v83; // r1@108
  signed int v84; // r0@110
  int v85; // r6@112
  int v86; // r6@114
  int *v87; // r4@114
  int v88; // r6@116
  int *v89; // r4@116
  unsigned int *v90; // r1@118
  signed int v91; // r0@120
  unsigned int *v92; // r2@122
  signed int v93; // r1@124
  unsigned int *v94; // r1@126
  signed int v95; // r0@128
  unsigned int *v96; // r1@137
  signed int v97; // r0@139
  unsigned int *v98; // r1@141
  signed int v99; // r0@143
  unsigned int *v100; // r1@155
  signed int v101; // r0@157
  unsigned int *v103; // r1@207
  signed int v104; // r0@209
  DBChunkStorage *v105; // [sp+14h] [bp-1ACh]@8
  int v106; // [sp+14h] [bp-1ACh]@47
  signed int v107; // [sp+18h] [bp-1A8h]@5
  LevelChunk *v108; // [sp+1Ch] [bp-1A4h]@9
  int v109; // [sp+20h] [bp-1A0h]@8
  const void **v110; // [sp+24h] [bp-19Ch]@1
  int v111; // [sp+28h] [bp-198h]@116
  int v112; // [sp+2Ch] [bp-194h]@116
  int v113; // [sp+30h] [bp-190h]@116
  int v114; // [sp+34h] [bp-18Ch]@114
  int v115; // [sp+38h] [bp-188h]@114
  int v116; // [sp+3Ch] [bp-184h]@114
  int v117; // [sp+40h] [bp-180h]@112
  int v118; // [sp+44h] [bp-17Ch]@112
  int v119; // [sp+48h] [bp-178h]@112
  _DWORD *v120; // [sp+4Ch] [bp-174h]@107
  int v121; // [sp+50h] [bp-170h]@107
  int v122; // [sp+54h] [bp-16Ch]@107
  int v123; // [sp+58h] [bp-168h]@107
  int v124; // [sp+5Ch] [bp-164h]@107
  _DWORD *v125; // [sp+60h] [bp-160h]@105
  int v126; // [sp+64h] [bp-15Ch]@105
  int v127; // [sp+68h] [bp-158h]@105
  int v128; // [sp+6Ch] [bp-154h]@105
  int v129; // [sp+70h] [bp-150h]@105
  int v130; // [sp+74h] [bp-14Ch]@104
  int v131; // [sp+78h] [bp-148h]@104
  int v132; // [sp+7Ch] [bp-144h]@104
  _DWORD *v133; // [sp+80h] [bp-140h]@99
  int v134; // [sp+84h] [bp-13Ch]@99
  int v135; // [sp+88h] [bp-138h]@99
  int v136; // [sp+8Ch] [bp-134h]@99
  int v137; // [sp+90h] [bp-130h]@99
  _DWORD *v138; // [sp+94h] [bp-12Ch]@96
  int v139; // [sp+98h] [bp-128h]@96
  int v140; // [sp+9Ch] [bp-124h]@96
  int v141; // [sp+A0h] [bp-120h]@96
  int v142; // [sp+A4h] [bp-11Ch]@96
  int v143; // [sp+A8h] [bp-118h]@91
  int v144; // [sp+ACh] [bp-114h]@91
  int v145; // [sp+B0h] [bp-110h]@91
  _DWORD *v146; // [sp+B4h] [bp-10Ch]@83
  int v147; // [sp+B8h] [bp-108h]@83
  int v148; // [sp+BCh] [bp-104h]@83
  int v149; // [sp+C0h] [bp-100h]@83
  int v150; // [sp+C4h] [bp-FCh]@83
  int v151; // [sp+C8h] [bp-F8h]@88
  int v152; // [sp+CCh] [bp-F4h]@88
  int v153; // [sp+D0h] [bp-F0h]@88
  _DWORD *v154; // [sp+D4h] [bp-ECh]@75
  int v155; // [sp+D8h] [bp-E8h]@75
  int v156; // [sp+DCh] [bp-E4h]@75
  int v157; // [sp+E0h] [bp-E0h]@75
  int v158; // [sp+E4h] [bp-DCh]@75
  int v159; // [sp+E8h] [bp-D8h]@80
  int v160; // [sp+ECh] [bp-D4h]@80
  int v161; // [sp+F0h] [bp-D0h]@80
  _DWORD *v162; // [sp+F4h] [bp-CCh]@67
  int v163; // [sp+F8h] [bp-C8h]@67
  int v164; // [sp+FCh] [bp-C4h]@67
  int v165; // [sp+100h] [bp-C0h]@67
  int v166; // [sp+104h] [bp-BCh]@67
  int v167; // [sp+108h] [bp-B8h]@72
  int v168; // [sp+10Ch] [bp-B4h]@72
  int v169; // [sp+110h] [bp-B0h]@72
  int v170; // [sp+114h] [bp-ACh]@63
  int v171; // [sp+118h] [bp-A8h]@63
  int v172; // [sp+11Ch] [bp-A4h]@63
  _DWORD *v173; // [sp+120h] [bp-A0h]@58
  int v174; // [sp+124h] [bp-9Ch]@58
  int v175; // [sp+128h] [bp-98h]@58
  int v176; // [sp+12Ch] [bp-94h]@58
  int v177; // [sp+130h] [bp-90h]@58
  _DWORD *v178; // [sp+134h] [bp-8Ch]@43
  int v179; // [sp+138h] [bp-88h]@43
  int v180; // [sp+13Ch] [bp-84h]@43
  int v181; // [sp+140h] [bp-80h]@43
  int v182; // [sp+144h] [bp-7Ch]@43
  int v183; // [sp+148h] [bp-78h]@23
  int v184; // [sp+14Ch] [bp-74h]@23
  _DWORD *v185; // [sp+150h] [bp-70h]@22
  int v186; // [sp+154h] [bp-6Ch]@22
  int v187; // [sp+158h] [bp-68h]@22
  int v188; // [sp+15Ch] [bp-64h]@22
  int v189; // [sp+160h] [bp-60h]@21
  int v190; // [sp+164h] [bp-5Ch]@6
  int v191; // [sp+168h] [bp-58h]@4
  _DWORD *v192; // [sp+16Ch] [bp-54h]@3
  int v193; // [sp+170h] [bp-50h]@3
  int v194; // [sp+174h] [bp-4Ch]@3
  int v195; // [sp+178h] [bp-48h]@3
  int v196; // [sp+17Ch] [bp-44h]@3
  __int64 v197; // [sp+180h] [bp-40h]@1
  int v198; // [sp+188h] [bp-38h]@1
  int v199; // [sp+18Ch] [bp-34h]@54
  void **v200; // [sp+190h] [bp-30h]@1
  const void **v201; // [sp+194h] [bp-2Ch]@1

  v3 = this;
  v110 = (const void **)a3;
  v4 = a2;
  v5 = (const void **)j_ThreadLocal<std::string>::getLocal((int)&DBChunkStorage::threadBuffer);
  v200 = &off_26E91F0;
  v201 = v5;
  v6 = j_LevelChunk::getPosition(v4);
  v7 = j_LevelChunk::getDimensionId(v4);
  v8 = 12;
  v197 = *(_QWORD *)v6;
  v198 = v7;
  if ( !v7 )
    v8 = 8;
  sub_21E7EE0(v5, 0, *((_BYTE **)*v5 - 3), 0);
  ((void (__fastcall *)(void ***, _DWORD))v200[6])(&v200, SharedConstants::CurrentLevelChunkFormat);
  j_join((const void **)&v194, v8, (unsigned int)&v197, 118);
  v9 = v194;
  v195 = v194;
  v10 = (int *)(v194 - 12);
  v196 = *(_DWORD *)(v194 - 12);
  v192 = *v5;
  v193 = *(v192 - 3);
  j_leveldb::WriteBatch::Put(v110, (int)&v195, (int)&v192);
  if ( v10 != &dword_28898C0 )
  {
    v90 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
    }
    else
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = *((_DWORD *)v3 + 16);
  j_join((const void **)&v191, v8, (unsigned int)&v197, 45);
  v12 = v191;
  if ( j_DBStorage::hasKey(v11, *(_DWORD *)(v191 - 12), v191) )
    v107 = 1;
  else
    v13 = *((_DWORD *)v3 + 16);
    j_join((const void **)&v190, v8, (unsigned int)&v197, 46);
    v14 = v190;
    v15 = (int *)(v190 - 12);
    v107 = j_DBStorage::hasKey(v13, *(_DWORD *)(v190 - 12), v190);
    if ( v15 != &dword_28898C0 )
      v96 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v97 = __ldrex(v96);
        while ( __strex(v97 - 1, v96) );
      }
      else
        v97 = (*v96)--;
      if ( v97 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v12 = v191;
  v105 = v3;
  v109 = v8;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v12 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v12 - 12));
  _R0 = *((_DWORD *)v4 + 35);
  v108 = v4;
  __asm { SBFX.W          R5, R0, #0, #0x1E }
  if ( !_ZF )
    v21 = 0;
    v22 = (int)v4 + 76;
    if ( v107 == 1 )
      v23 = 0;
        if ( *(_DWORD *)(*(_DWORD *)(v22 + 4 * v23) + 10240) >= 0 )
        {
          j_join(&v189, v109, (unsigned int)&v197, 47, v23);
          if ( j_SubChunk::scanIsDefaultChunk(*(SubChunk **)(v22 + 4 * v23)) )
          {
            sub_21E7EE0(v5, 0, *((_BYTE **)*v5 - 3), 0);
            j_SubChunk::serialize(*(SubChunk **)(v22 + 4 * v23), (IDataOutput *)&v200);
            v29 = v189;
            v187 = v189;
            v188 = *(_DWORD *)(v189 - 12);
            v185 = *v5;
            v186 = *(v185 - 3);
            j_leveldb::WriteBatch::Put(v110, (int)&v187, (int)&v185);
          }
          else
            v183 = v189;
            v184 = *(_DWORD *)(v189 - 12);
            j_leveldb::WriteBatch::Delete(v110, (int)&v183);
          if ( (int *)(v29 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v29 - 4);
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
              j_j_j_j__ZdlPv_9((void *)(v29 - 12));
          LOBYTE(v21) = 1;
        }
        ++v23;
      while ( v23 != _R5 );
      if ( !(v21 & 1) )
        goto LABEL_56;
        j_join(&v189, v109, (unsigned int)&v197, 47, v21);
        if ( j_SubChunk::scanIsDefaultChunk(*(SubChunk **)(v22 + 4 * v21)) == 1 )
          sub_21E7EE0(v5, 0, *((_BYTE **)*v5 - 3), 0);
          j_SubChunk::serialize(*(SubChunk **)(v22 + 4 * v21), (IDataOutput *)&v200);
          v26 = v189;
          v187 = v189;
          v188 = *(_DWORD *)(v189 - 12);
          v185 = *v5;
          v186 = *(v185 - 3);
          j_leveldb::WriteBatch::Put(v110, (int)&v187, (int)&v185);
        else
          v183 = v189;
          v184 = *(_DWORD *)(v189 - 12);
          j_leveldb::WriteBatch::Delete(v110, (int)&v183);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v26 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9((void *)(v26 - 12));
        ++v21;
      while ( v21 != _R5 );
    sub_21E7EE0(v5, 0, *((_BYTE **)*v5 - 3), 0);
    v30 = v105;
    j_LevelChunk::serialize2DMaps(v4, (IDataOutput *)&v200);
    j_join((const void **)&v180, v109, (unsigned int)&v197, 45);
    v31 = v180;
    v181 = v180;
    v32 = (int *)(v180 - 12);
    v182 = *(_DWORD *)(v180 - 12);
    v178 = *v5;
    v179 = *(v178 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v181, (int)&v178);
    if ( v32 != &dword_28898C0 )
      v103 = (unsigned int *)(v31 - 4);
          v104 = __ldrex(v103);
        while ( __strex(v104 - 1, v103) );
        v104 = (*v103)--;
      if ( v104 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = (unsigned __int8 *)v105 + 60;
    do
        v34 = __ldrex(v33);
      while ( __strex(1u, v33) );
    while ( v34 );
    v35 = *((_DWORD *)v105 + 8);
    v106 = (int)v105 + 32;
    v36 = *((_DWORD *)v30 + 9);
    v37 = 8976890 * v197 + 981131 * HIDWORD(v197) + v198;
    v38 = v37 % *((_DWORD *)v30 + 9);
    v39 = *(_DWORD *)(v35 + 4 * v38);
    if ( !v39 )
      goto LABEL_54;
    v40 = *(_DWORD *)v39;
    v41 = *(_DWORD *)(*(_DWORD *)v39 + 32);
    while ( v41 != v37 || *(_QWORD *)(v40 + 8) != v197 || v198 != *(_DWORD *)(v40 + 16) )
      v42 = *(_DWORD *)v40;
      if ( *(_DWORD *)v40 )
        v41 = *(_DWORD *)(v42 + 32);
        v39 = v40;
        v40 = *(_DWORD *)v40;
        if ( *(_DWORD *)(v42 + 32) % v36 == v38 )
          continue;
    _ZF = v39 == 0;
    if ( v39 )
      v39 = *(_DWORD *)v39;
      _ZF = v39 == 0;
    if ( _ZF )
LABEL_54:
      v43 = (char *)j_operator new(0x28u);
      *(_DWORD *)v43 = 0;
      v44 = (int)(v43 + 8);
      v45 = HIDWORD(v197);
      v46 = v198;
      v47 = v199;
      *(_DWORD *)v44 = v197;
      *(_DWORD *)(v44 + 4) = v45;
      *(_DWORD *)(v44 + 8) = v46;
      *((_DWORD *)v43 + 5) = v47;
      v43[24] = 0;
      v39 = j_std::_Hashtable<DBChunkStorageKey,std::pair<DBChunkStorageKey const,bool>,std::allocator<std::pair<DBChunkStorageKey const,bool>>,std::__detail::_Select1st,std::equal_to<DBChunkStorageKey>,std::hash<DBChunkStorageKey>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v106,
              v38,
              v37,
              (int)v43);
    *(_BYTE *)(v39 + 24) = 1;
    __dmb();
    *v33 = 0;
LABEL_56:
  if ( **((_DWORD **)v108 + 573) < 0 )
    goto LABEL_64;
  if ( j_LevelChunk::hasEntitiesToSerialize(v108) == 1 )
    j_LevelChunk::serializeEntities(v108, (IDataOutput *)&v200);
    j_join((const void **)&v175, v109, (unsigned int)&v197, 50);
    v48 = v175;
    v176 = v175;
    v49 = (int *)(v175 - 12);
    v177 = *(_DWORD *)(v175 - 12);
    v173 = *v5;
    v174 = *(v173 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v176, (int)&v173);
    if ( v49 == &dword_28898C0 )
      goto LABEL_64;
    v50 = (unsigned int *)(v48 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      goto LABEL_167;
LABEL_166:
    v51 = (*v50)--;
    goto LABEL_167;
  j_join((const void **)&v170, v109, (unsigned int)&v197, 50);
  v52 = v170;
  v171 = v170;
  v49 = (int *)(v170 - 12);
  v172 = *(_DWORD *)(v170 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v171);
  if ( v49 == &dword_28898C0 )
  v50 = (unsigned int *)(v52 - 4);
  if ( !&pthread_create )
    goto LABEL_166;
  __dmb();
  do
    v51 = __ldrex(v50);
  while ( __strex(v51 - 1, v50) );
LABEL_167:
  if ( v51 <= 0 )
    j_j_j_j__ZdlPv_9(v49);
LABEL_64:
  if ( **((_DWORD **)v108 + 571) <= -1 && (v107 ^ 1) != 1 )
    goto LABEL_73;
  if ( *((_DWORD *)j_LevelChunk::getBlockEntities(v108) + 3) )
    j_LevelChunk::serializeBlockEntities(v108, (IDataOutput *)&v200);
    j_join((const void **)&v164, v109, (unsigned int)&v197, 49);
    v53 = v164;
    v165 = v164;
    v54 = (int *)(v164 - 12);
    v166 = *(_DWORD *)(v164 - 12);
    v162 = *v5;
    v163 = *(v162 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v165, (int)&v162);
    if ( v54 == &dword_28898C0 )
      goto LABEL_73;
    v55 = (unsigned int *)(v53 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      goto LABEL_216;
LABEL_215:
    v56 = (*v55)--;
    goto LABEL_216;
  j_join((const void **)&v167, v109, (unsigned int)&v197, 49);
  v57 = v167;
  v168 = v167;
  v54 = (int *)(v167 - 12);
  v169 = *(_DWORD *)(v167 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v168);
  if ( v54 == &dword_28898C0 )
  v55 = (unsigned int *)(v57 - 4);
    goto LABEL_215;
    v56 = __ldrex(v55);
  while ( __strex(v56 - 1, v55) );
LABEL_216:
  if ( v56 <= 0 )
    j_j_j_j__ZdlPv_9(v54);
LABEL_73:
  if ( **((_DWORD **)v108 + 572) < 0 )
    goto LABEL_81;
  if ( j_LevelChunk::hasAnyBlockExtraData(v108) )
    j_LevelChunk::serializeBlockExtraData(v108, (IDataOutput *)&v200);
    j_join((const void **)&v156, v109, (unsigned int)&v197, 52);
    v58 = v156;
    v157 = v156;
    v59 = (int *)(v156 - 12);
    v158 = *(_DWORD *)(v156 - 12);
    v154 = *v5;
    v155 = *(v154 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v157, (int)&v154);
    if ( v59 == &dword_28898C0 )
      goto LABEL_81;
    v60 = (unsigned int *)(v58 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      goto LABEL_174;
LABEL_173:
    v61 = (*v60)--;
    goto LABEL_174;
  j_join((const void **)&v159, v109, (unsigned int)&v197, 52);
  v62 = v159;
  v160 = v159;
  v59 = (int *)(v159 - 12);
  v161 = *(_DWORD *)(v159 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v160);
  if ( v59 == &dword_28898C0 )
  v60 = (unsigned int *)(v62 - 4);
    goto LABEL_173;
    v61 = __ldrex(v60);
  while ( __strex(v61 - 1, v60) );
LABEL_174:
  if ( v61 <= 0 )
    j_j_j_j__ZdlPv_9(v59);
LABEL_81:
  if ( **((_DWORD **)v108 + 570) < 0 )
    goto LABEL_89;
  if ( j_LevelChunk::hasAnyBiomeStates(v108) )
    j_LevelChunk::serializeBiomeStates(v108, (IDataOutput *)&v200);
    j_join((const void **)&v148, v109, (unsigned int)&v197, 53);
    v63 = v148;
    v149 = v148;
    v64 = (int *)(v148 - 12);
    v150 = *(_DWORD *)(v148 - 12);
    v146 = *v5;
    v147 = *(v146 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v149, (int)&v146);
    if ( v64 == &dword_28898C0 )
      goto LABEL_89;
    v65 = (unsigned int *)(v63 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      goto LABEL_181;
LABEL_180:
    v66 = (*v65)--;
    goto LABEL_181;
  j_join((const void **)&v151, v109, (unsigned int)&v197, 53);
  v67 = v151;
  v152 = v151;
  v64 = (int *)(v151 - 12);
  v153 = *(_DWORD *)(v151 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v152);
  if ( v64 == &dword_28898C0 )
  v65 = (unsigned int *)(v67 - 4);
    goto LABEL_180;
    v66 = __ldrex(v65);
  while ( __strex(v66 - 1, v65) );
LABEL_181:
  if ( v66 <= 0 )
    j_j_j_j__ZdlPv_9(v64);
LABEL_89:
  if ( **((_DWORD **)v108 + 574) < 0 )
    goto LABEL_97;
  v68 = (BlockTickingQueue *)j_LevelChunk::getTickQueue(v108);
  if ( j_BlockTickingQueue::isEmpty(v68) == 1 )
    j_join((const void **)&v143, v109, (unsigned int)&v197, 51);
    v69 = v143;
    v144 = v143;
    v70 = (int *)(v143 - 12);
    v145 = *(_DWORD *)(v143 - 12);
    j_leveldb::WriteBatch::Delete(v110, (int)&v144);
    if ( v70 == &dword_28898C0 )
      goto LABEL_97;
    v71 = (unsigned int *)(v69 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      goto LABEL_188;
LABEL_187:
    v72 = (*v71)--;
    goto LABEL_188;
  j_LevelChunk::serializeTicks(v108, (IDataOutput *)&v200);
  j_join((const void **)&v140, v109, (unsigned int)&v197, 51);
  v73 = v140;
  v141 = v140;
  v70 = (int *)(v140 - 12);
  v142 = *(_DWORD *)(v140 - 12);
  v138 = *v5;
  v139 = *(v138 - 3);
  j_leveldb::WriteBatch::Put(v110, (int)&v141, (int)&v138);
  if ( v70 == &dword_28898C0 )
  v71 = (unsigned int *)(v73 - 4);
    goto LABEL_187;
    v72 = __ldrex(v71);
  while ( __strex(v72 - 1, v71) );
LABEL_188:
  if ( v72 <= 0 )
    j_j_j_j__ZdlPv_9(v70);
LABEL_97:
  if ( **((_DWORD **)v108 + 575) < 0 )
    goto LABEL_105;
  if ( j_LevelChunk::serializeBorderBlocks(v108, (IDataOutput *)&v200) == 1 )
    j_join((const void **)&v135, v109, (unsigned int)&v197, 56);
    v74 = v135;
    v136 = v135;
    v75 = (int *)(v135 - 12);
    v137 = *(_DWORD *)(v135 - 12);
    v133 = *v5;
    v134 = *(v133 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v136, (int)&v133);
    if ( v75 == &dword_28898C0 )
      goto LABEL_105;
    v76 = (unsigned int *)(v74 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      goto LABEL_195;
LABEL_194:
    v77 = (*v76)--;
    goto LABEL_195;
  j_join((const void **)&v130, v109, (unsigned int)&v197, 56);
  v78 = v130;
  v131 = v130;
  v75 = (int *)(v130 - 12);
  v132 = *(_DWORD *)(v130 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v131);
  if ( v75 == &dword_28898C0 )
  v76 = (unsigned int *)(v78 - 4);
    goto LABEL_194;
    v77 = __ldrex(v76);
  while ( __strex(v77 - 1, v76) );
LABEL_195:
  if ( v77 <= 0 )
    j_j_j_j__ZdlPv_9(v75);
LABEL_105:
  j_LevelChunk::serializeFinalization(v108, (IDataOutput *)&v200);
  j_join((const void **)&v127, v109, (unsigned int)&v197, 54);
  v79 = v127;
  v128 = v127;
  v80 = (int *)(v127 - 12);
  v129 = *(_DWORD *)(v127 - 12);
  v125 = *v5;
  v126 = *(v125 - 3);
  j_leveldb::WriteBatch::Put(v110, (int)&v128, (int)&v125);
  if ( v80 != &dword_28898C0 )
    v94 = (unsigned int *)(v79 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  if ( j_LevelChunk::serializeHardcodedSpawners(v108, (IDataOutput *)&v200) == 1 )
    j_join((const void **)&v122, v109, (unsigned int)&v197, 57);
    v81 = v122;
    v123 = v122;
    v82 = (int *)(v122 - 12);
    v124 = *(_DWORD *)(v122 - 12);
    v120 = *v5;
    v121 = *(v120 - 3);
    j_leveldb::WriteBatch::Put(v110, (int)&v123, (int)&v120);
    if ( v82 == &dword_28898C0 )
      goto LABEL_113;
    v83 = (unsigned int *)(v81 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      goto LABEL_153;
LABEL_152:
    v84 = (*v83)--;
    goto LABEL_153;
  j_join((const void **)&v117, v109, (unsigned int)&v197, 57);
  v85 = v117;
  v118 = v117;
  v82 = (int *)(v117 - 12);
  v119 = *(_DWORD *)(v117 - 12);
  j_leveldb::WriteBatch::Delete(v110, (int)&v118);
  if ( v82 == &dword_28898C0 )
    goto LABEL_113;
  v83 = (unsigned int *)(v85 - 4);
    goto LABEL_152;
    v84 = __ldrex(v83);
  while ( __strex(v84 - 1, v83) );
LABEL_153:
  if ( v84 <= 0 )
    j_j_j_j__ZdlPv_9(v82);
LABEL_113:
  if ( (unsigned int)j_LevelChunk::getLoadedFormat(v108) <= 2 )
    j_join((const void **)&v114, v109, (unsigned int)&v197, 48);
    v86 = v114;
    v115 = v114;
    v87 = (int *)(v114 - 12);
    v116 = *(_DWORD *)(v114 - 12);
    j_leveldb::WriteBatch::Delete(v110, (int)&v115);
    if ( v87 != &dword_28898C0 )
      v100 = (unsigned int *)(v86 - 4);
          v101 = __ldrex(v100);
        while ( __strex(v101 - 1, v100) );
        v101 = (*v100)--;
      if ( v101 <= 0 )
        j_j_j_j__ZdlPv_9(v87);
  if ( *((_BYTE *)v108 + 2972) )
    j_join((const void **)&v111, v109, (unsigned int)&v197, 55);
    v88 = v111;
    v112 = v111;
    v89 = (int *)(v111 - 12);
    v113 = *(_DWORD *)(v111 - 12);
    j_leveldb::WriteBatch::Delete(v110, (int)&v112);
    if ( v89 != &dword_28898C0 )
      v98 = (unsigned int *)(v88 - 4);
          v99 = __ldrex(v98);
        while ( __strex(v99 - 1, v98) );
        v99 = (*v98)--;
      if ( v99 <= 0 )
        j_j_j_j__ZdlPv_9(v89);
}


void __fastcall DBChunkStorage::~DBChunkStorage(DBChunkStorage *this)
{
  DBChunkStorage::~DBChunkStorage(this);
}


int __fastcall DBChunkStorage::checkAndReplaceChunk(DBChunkStorage *this, ChunkViewSource *a2, LevelChunk *a3)
{
  LevelChunk *v3; // r4@1
  DBChunkStorage *v4; // r5@1
  ChunkViewSource *v5; // r6@1
  int result; // r0@1
  char *v7; // r7@2
  int v8; // r0@2
  BlockSourceListener *v9; // r7@7
  int v10; // r0@7
  char v11; // [sp+8h] [bp-98h]@7
  __int64 v12; // [sp+78h] [bp-28h]@2
  int v13; // [sp+80h] [bp-20h]@2

  v3 = a3;
  v4 = this;
  v5 = a2;
  result = j_LevelChunk::_getTerrainDataState(a3);
  if ( result != 5 )
  {
    v7 = j_LevelChunk::getPosition(v3);
    v8 = j_LevelChunk::getDimensionId(v3);
    v12 = *(_QWORD *)v7;
    v13 = v8;
    if ( j_DBChunkStorage::_hasChunk(v4, (const DBChunkStorageKey *)&v12) == 1 )
    {
      if ( *((_BYTE *)v3 + 2973) )
        j_DBChunkStorage::_loadChunkFromDB(v4, v3);
      else
        j_DBChunkStorage::_loadAndBlendFromDB(v4, v3);
    }
    if ( j_LevelChunk::needsUpgradeFix(v3) == 1 )
      j_LevelChunk::_changeTerrainDataState((int)v3, 4, 1);
      v9 = (BlockSourceListener *)j_ChunkSource::getLevel(v5);
      v10 = j_ChunkSource::getDimension(v5);
      j_BlockSource::BlockSource((int)&v11, v9, v10, (int)v5, 0, 1);
      j_DBChunkStorage::_applyChunkFixup(v4, v3, (BlockSource *)&v11);
      j_BlockSource::~BlockSource((BlockSource *)&v11);
    result = j_LevelChunk::_getTerrainDataState(v3);
    if ( result != 5 )
      result = j_LevelChunk::_changeTerrainDataState((int)v3, 4, 5);
  }
  return result;
}


int __fastcall DBChunkStorage::loadChunk(DBChunkStorage *this, LevelChunk *a2, int a3)
{
  LevelChunk *v3; // r11@1
  DBChunkStorage *v4; // r10@1
  int v5; // r4@1
  char *v6; // r5@1
  int v7; // r0@1
  __int64 v8; // r0@3
  int v9; // r5@3
  signed int v10; // r7@3
  __int64 *v11; // r5@4
  signed int v12; // r6@4
  __int64 v13; // kr00_8@5
  int v14; // r0@5
  signed int v15; // r0@5
  bool v16; // nf@8
  unsigned __int8 v17; // vf@8
  int result; // r0@12
  char v19; // [sp+4h] [bp-8Ch]@4
  __int64 v20; // [sp+8h] [bp-88h]@3
  int v21; // [sp+10h] [bp-80h]@3
  int v22; // [sp+18h] [bp-78h]@3
  int v23; // [sp+1Ch] [bp-74h]@3
  __int64 v24; // [sp+20h] [bp-70h]@3
  int v25; // [sp+28h] [bp-68h]@3
  int v26; // [sp+2Ch] [bp-64h]@3
  int v27; // [sp+30h] [bp-60h]@3
  int v28; // [sp+34h] [bp-5Ch]@3
  int v29; // [sp+38h] [bp-58h]@3
  int v30; // [sp+3Ch] [bp-54h]@3
  int v31; // [sp+40h] [bp-50h]@3
  int v32; // [sp+44h] [bp-4Ch]@3
  __int64 v33; // [sp+48h] [bp-48h]@3
  int v34; // [sp+50h] [bp-40h]@3
  int v35; // [sp+54h] [bp-3Ch]@3
  __int64 v36; // [sp+58h] [bp-38h]@1
  int v37; // [sp+60h] [bp-30h]@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  j_LevelChunk::_setGenerator(a2, this);
  v6 = j_LevelChunk::getPosition(v3);
  v7 = j_LevelChunk::getDimensionId(v3);
  v36 = *(_QWORD *)v6;
  v37 = v7;
  *((_BYTE *)v3 + 2973) = 0;
  if ( j_DBChunkStorage::_hasChunk(v4, (const DBChunkStorageKey *)&v36) != 1 )
    goto LABEL_16;
  if ( v5 )
    goto LABEL_17;
  v8 = *(_QWORD *)j_LevelChunk::getPosition(v3);
  v9 = HIDWORD(v8) + 1;
  v23 = HIDWORD(v8) + 1;
  v22 = v8 + 1;
  v24 = v8 + 0x100000000LL;
  v26 = HIDWORD(v8) + 1;
  v25 = v8 - 1;
  v27 = v8 + 1;
  v28 = HIDWORD(v8);
  v29 = v8 - 1;
  v30 = HIDWORD(v8)--;
  v31 = v8 + 1;
  v32 = HIDWORD(v8);
  v35 = HIDWORD(v8);
  v33 = v8;
  v34 = v8 - 1;
  LODWORD(v20) = v8 + 1;
  HIDWORD(v20) = v9;
  v21 = j_LevelChunk::getDimensionId(v3);
  v10 = j_DBChunkStorage::_hasChunk(v4, (const DBChunkStorageKey *)&v20);
  if ( v10 == 1 )
  {
    v11 = &v24;
    v12 = 2;
    v19 = 0;
    do
    {
      v13 = *v11;
      v14 = j_LevelChunk::getDimensionId(v3);
      v20 = v13;
      v21 = v14;
      v15 = j_DBChunkStorage::_hasChunk(v4, (const DBChunkStorageKey *)&v20);
      if ( v15 )
        ++v10;
      if ( v15 != 1 )
        break;
      ++v11;
      v17 = __OFSUB__(v12, 8);
      v16 = v12++ - 8 < 0;
    }
    while ( v16 ^ v17 );
  }
  else
  LOBYTE(v5) = v19;
  if ( v10 == 8 )
LABEL_17:
    j_LevelChunk::changeState((int)v3, 1, 4u);
    result = j_LevelChunk::_changeTerrainDataState((int)v3, 0, 4);
    *((_BYTE *)v3 + 2973) = 1;
LABEL_16:
    j_ChunkSource::loadChunk(v4, v3, v5);
    result = j_LevelChunk::_changeTerrainDataState((int)v3, 0, 2);
  return result;
}


void __fastcall DBChunkStorage::acquireDiscarded(int a1, LevelChunk **a2)
{
  DBChunkStorage::acquireDiscarded(a1, a2);
}


signed int __fastcall DBChunkStorage::_loadChunkFromDB(DBChunkStorage *this, LevelChunk *a2)
{
  DBChunkStorage *v2; // r5@1
  LevelChunk *v3; // r4@1
  char *v4; // r6@1
  int v5; // r0@1
  Dimension *v6; // r6@1
  __int64 *v7; // r7@1
  char v8; // r0@1
  unsigned __int8 v9; // r6@1
  size_t v10; // r1@1
  signed int v11; // r9@5
  char *v12; // r0@8
  void *v13; // r5@9
  void *v14; // r7@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int *v17; // r0@19
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  __int64 v21; // [sp+0h] [bp-BF0h]@1
  int v22; // [sp+8h] [bp-BE8h]@1
  void *v23; // [sp+14h] [bp-BDCh]@1
  void *v24; // [sp+18h] [bp-BD8h]@1
  int v25; // [sp+1Ch] [bp-BD4h]@1
  char *v26; // [sp+20h] [bp-BD0h]@1
  int v27[745]; // [sp+28h] [bp-BC8h]@1
  RakNet *v28; // [sp+BCCh] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v28 = _stack_chk_guard;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = (char *)&unk_28898CC;
  v4 = j_LevelChunk::getPosition(a2);
  v5 = j_LevelChunk::getDimensionId(v3);
  v21 = *(_QWORD *)v4;
  v22 = v5;
  v6 = (Dimension *)j_LevelChunk::getDimension(v3);
  v7 = (__int64 *)j_LevelChunk::getPosition(v3);
  v8 = j_LevelChunk::isReadOnly(v3);
  j_LevelChunk::LevelChunk(v27, v6, v7, v8);
  v9 = *j_LevelChunk::getState(v3);
  __dmb();
  v10 = 12;
  if ( !v22 )
    v10 = 8;
  if ( j_DBStorage::_read(*((_DWORD *)v2 + 16), v10, &v21, (int)&v23) != 1 )
    goto LABEL_7;
  j_LevelChunk::operator=((int)v3, (int)v27);
  j_LevelChunk::_setGenerator(v3, v2);
  if ( j_LevelChunk::deserialize(v3, &v23) != 1 )
  {
    j_LevelChunk::getPosition(v3);
LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  *((_BYTE *)v3 + 58) = 1;
  j_LevelChunk::changeState((int)v3, 0, v9);
  j_LevelChunk::_changeTerrainDataState((int)v3, 0, 4);
  v11 = 1;
LABEL_8:
  j_LevelChunk::~LevelChunk((LevelChunk *)v27);
  v12 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v14 = v24;
  v13 = v23;
  if ( v23 != v24 )
    do
      v17 = (int *)(*(_DWORD *)v13 - 12);
      if ( v17 != &dword_28898C0 )
      {
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
        }
        else
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      v13 = (char *)v13 + 12;
    while ( v13 != v14 );
    v13 = v23;
  if ( v13 )
    j_operator delete(v13);
  if ( _stack_chk_guard != v28 )
    j___stack_chk_fail_0(_stack_chk_guard - v28);
  return v11;
}


int __fastcall DBChunkStorage::hintDiscardBatchBegin(int result)
{
  *(_BYTE *)(result + 148) = 1;
  return result;
}


int __fastcall DBChunkStorage::hintDiscardBatchEnd(int result)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED

  *(_BYTE *)(result + 148) = 0;
  *(_QWORD *)&v1 = *(_QWORD *)(result + 80);
  if ( v1 == v2 )
    JUMPOUT(v1 != v2, DBChunkStorage::_getBuffer);
  else
    result = (int)j_j_j__ZN14DBChunkStorage11_writeBatchEv_0((DBChunkStorage *)result);
  return result;
}


int __fastcall DBChunkStorage::isShutdownDone(DBChunkStorage *this)
{
  ChunkSource *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( j_TaskGroup::isEmpty(TaskGroup::DISK) == 1 )
    result = j_ChunkSource::isShutdownDone(v1);
  else
    result = 0;
  return result;
}


void __fastcall DBChunkStorage::_serializeChunk(DBChunkStorage *this, const LevelChunk *a2, leveldb::WriteBatch *a3)
{
  DBChunkStorage::_serializeChunk(this, a2, a3);
}


signed int __fastcall DBChunkStorage::postProcess(DBChunkStorage *this, ChunkViewSource *a2)
{
  ChunkViewSource *v2; // r4@1
  DBChunkStorage *v3; // r5@1
  char *v4; // r0@1
  int v5; // r1@1
  int v6; // r0@1
  int v7; // r0@2
  signed int v8; // r4@5
  int v9; // r5@6
  unsigned int *v10; // r1@7
  unsigned int v11; // r0@9
  unsigned int *v12; // r6@13
  unsigned int v13; // r0@15
  LevelChunk *v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@6
  int v17; // [sp+8h] [bp-18h]@1
  int v18; // [sp+Ch] [bp-14h]@1

  v2 = a2;
  v3 = this;
  v4 = j_ChunkViewSource::getArea(a2);
  v5 = *((_DWORD *)v4 + 12);
  v6 = *((_DWORD *)v4 + 14);
  v17 = v5 + 1;
  v18 = v6 + 1;
  (*(void (__fastcall **)(LevelChunk **, ChunkViewSource *, int *))(*(_DWORD *)v2 + 16))(&v15, v2, &v17);
  if ( j_LevelChunk::_getTerrainDataState(v15) == 2 )
  {
    v7 = *((_DWORD *)v3 + 4);
    if ( v7 && !(*(int (**)(void))(*(_DWORD *)v7 + 28))() )
    {
      v8 = 0;
      goto LABEL_6;
    }
    j_LevelChunk::_changeTerrainDataState((int)v15, 2, 4);
  }
  v8 = 1;
LABEL_6:
  v9 = v16;
  if ( v16 )
    v10 = (unsigned int *)(v16 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return v8;
}


signed int __fastcall DBChunkStorage::_hasChunk(DBChunkStorage *this, const DBChunkStorageKey *a2)
{
  unsigned __int8 *v2; // r8@1
  const DBChunkStorageKey *v3; // r9@1
  unsigned int v4; // r7@2
  unsigned int v5; // r10@4
  unsigned int v6; // r4@4
  int v7; // r5@4
  int v8; // r0@4
  int v9; // r11@5
  int v10; // r6@5
  int v11; // r7@9
  int v12; // r1@11
  int v13; // r4@11
  int v14; // r7@13
  int v15; // r1@15
  int v16; // r4@15
  int v17; // r6@17
  int *v18; // r7@17
  unsigned int v19; // r1@20
  void *v20; // r0@23
  void *v21; // r4@24
  int v22; // r2@26
  unsigned int v23; // r10@26
  __int64 v24; // kr08_8@26
  unsigned int v25; // r6@26
  int v26; // r5@26
  int v27; // r0@26
  int v28; // r9@27
  int v29; // r7@27
  int v30; // r11@31
  void *v31; // r0@33
  bool v33; // zf@36
  int v34; // r1@39
  bool v35; // zf@40
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  unsigned int *v38; // r1@52
  signed int v39; // r0@54
  int v40; // [sp+0h] [bp-50h]@26
  char *v41; // [sp+4h] [bp-4Ch]@4
  DBChunkStorage *v42; // [sp+8h] [bp-48h]@4
  signed int v43; // [sp+Ch] [bp-44h]@14
  int v44; // [sp+10h] [bp-40h]@26
  int v45; // [sp+14h] [bp-3Ch]@4
  unsigned int v46; // [sp+14h] [bp-3Ch]@26
  int v47; // [sp+19h] [bp-37h]@0
  __int16 v48; // [sp+1Dh] [bp-33h]@0
  char v49; // [sp+1Fh] [bp-31h]@0
  int v50; // [sp+20h] [bp-30h]@17
  int v51; // [sp+24h] [bp-2Ch]@13

  v2 = (unsigned __int8 *)this + 60;
  v3 = a2;
  do
  {
    do
      v4 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v4 );
  v45 = *((_DWORD *)a2 + 2);
  v42 = this;
  v41 = (char *)this + 32;
  v5 = *((_DWORD *)this + 9);
  v6 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v45;
  v7 = v6 % *((_DWORD *)this + 9);
  v8 = *(_DWORD *)(*((_DWORD *)this + 8) + 4 * v7);
  if ( !v8 )
    goto LABEL_11;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 32);
  while ( v10 != v6 || *(_QWORD *)(v9 + 8) != *(_QWORD *)a2 || v45 != *(_DWORD *)(v9 + 16) )
    v11 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      v10 = *(_DWORD *)(v11 + 32);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v11 + 32) % v5 == v7 )
        continue;
    }
  v33 = v8 == 0;
  if ( v8 )
    v8 = *(_DWORD *)v8;
    v33 = v8 == 0;
  if ( v33 )
LABEL_11:
    v12 = 12;
    *((_BYTE *)v42 + 60) = 0;
    v13 = *((_DWORD *)v42 + 16);
    if ( !*((_DWORD *)v3 + 2) )
      v12 = 8;
    j_join((const void **)&v51, v12, (unsigned int)v3, 118);
    v14 = v51;
    if ( j_DBStorage::hasKey(v13, *(_DWORD *)(v51 - 12), v51) )
      v43 = 1;
    else
      v15 = 12;
      v16 = *((_DWORD *)v42 + 16);
      if ( !*((_DWORD *)v3 + 2) )
        v15 = 8;
      j_join((const void **)&v50, v15, (unsigned int)v3, 48);
      v17 = v50;
      v18 = (int *)(v50 - 12);
      v43 = j_DBStorage::hasKey(v16, *(_DWORD *)(v50 - 12), v50);
      if ( v18 != &dword_28898C0 )
      {
        v38 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
        }
        else
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      }
      v14 = v51;
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9((void *)(v14 - 12));
      do
        v19 = __ldrex(v2);
      while ( __strex(1u, v2) );
      __dmb();
    while ( v19 );
    if ( *((_DWORD *)v42 + 11) >= 0x1389u )
      v20 = (void *)*((_DWORD *)v42 + 10);
      if ( v20 )
          v21 = *(void **)v20;
          j_operator delete(v20);
          v20 = v21;
        while ( v21 );
      j___aeabi_memclr4_0(*((_QWORD *)v42 + 4), 4 * (*((_QWORD *)v42 + 4) >> 32));
      *((_DWORD *)v42 + 10) = 0;
      *((_DWORD *)v42 + 11) = 0;
    v46 = *(_DWORD *)v3;
    v22 = *(_QWORD *)((char *)v3 + 4) >> 32;
    v23 = *(_QWORD *)((char *)v3 + 4);
    v40 = *((_DWORD *)v3 + 3);
    v44 = v22;
    v24 = *((_QWORD *)v42 + 4);
    v25 = v22 + 8976890 * *(_DWORD *)v3 + 981131 * v23;
    v26 = v25 % (unsigned int)(*((_QWORD *)v42 + 4) >> 32);
    v27 = *(_DWORD *)(v24 + 4 * v26);
    if ( !v27 )
      goto LABEL_33;
    v28 = *(_DWORD *)v27;
    v29 = *(_DWORD *)(*(_DWORD *)v27 + 32);
    while ( v29 != v25 || *(_QWORD *)(v28 + 8) != __PAIR__(v23, v46) || v22 != *(_DWORD *)(v28 + 16) )
      v30 = *(_DWORD *)v28;
      if ( *(_DWORD *)v28 )
        v29 = *(_DWORD *)(v30 + 32);
        v27 = v28;
        v28 = *(_DWORD *)v28;
        if ( *(_DWORD *)(v30 + 32) % HIDWORD(v24) == v26 )
          continue;
    v35 = v27 == 0;
    if ( v27 )
      v35 = *(_DWORD *)v27 == 0;
    if ( v35 )
LABEL_33:
      v31 = j_operator new(0x28u);
      *(_DWORD *)v31 = 0;
      *((_DWORD *)v31 + 2) = v46;
      *((_DWORD *)v31 + 3) = v23;
      *((_DWORD *)v31 + 4) = v44;
      *((_DWORD *)v31 + 5) = v40;
      *((_BYTE *)v31 + 24) = v43;
      *((_BYTE *)v31 + 31) = v49;
      *(_WORD *)((char *)v31 + 29) = v48;
      *(_DWORD *)((char *)v31 + 25) = v47;
      j_std::_Hashtable<DBChunkStorageKey,std::pair<DBChunkStorageKey const,bool>,std::allocator<std::pair<DBChunkStorageKey const,bool>>,std::__detail::_Select1st,std::equal_to<DBChunkStorageKey>,std::hash<DBChunkStorageKey>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
        (int)v41,
        v26,
        v25,
        (int)v31);
    *v2 = 0;
  else
    v34 = *(_BYTE *)(v8 + 24);
    v43 = v34 != 0;
  return v43;
}


BackgroundTask *__fastcall DBChunkStorage::compact(DBChunkStorage *this)
{
  DBChunkStorage *v1; // r4@1
  int v2; // r5@1
  _DWORD *v3; // r0@1
  __int64 v4; // r1@1
  BackgroundTask *result; // r0@1
  char v6; // [sp+8h] [bp-30h]@1
  int (*v7)(void); // [sp+10h] [bp-28h]@1
  _DWORD *v8; // [sp+18h] [bp-20h]@1
  __int64 v9; // [sp+20h] [bp-18h]@1

  v1 = this;
  v2 = TaskGroup::DISK;
  v3 = j_operator new(4u);
  LODWORD(v4) = sub_1B238D4;
  *v3 = v1;
  HIDWORD(v4) = sub_1B238B6;
  v8 = v3;
  v9 = v4;
  v7 = 0;
  result = j_TaskGroup::queue(v2, (int)&v8, (int)&v6, 0xAu, 0xFFFFFFFF);
  if ( v7 )
    result = (BackgroundTask *)v7();
  if ( (_DWORD)v9 )
    result = (BackgroundTask *)((int (*)(void))v9)();
  return result;
}


void __fastcall DBChunkStorage::acquireDiscarded(int a1, LevelChunk **a2)
{
  int v2; // r5@1
  char *v3; // r0@1
  char *v4; // r4@1
  int v5; // r6@1
  unsigned int v6; // r8@1
  unsigned int v7; // r7@1
  int v8; // r5@1
  int *v9; // r0@1
  bool v10; // zf@1
  __int64 v11; // kr08_8@4
  int v12; // r10@4
  int v13; // r4@4
  bool v14; // zf@5
  char *v15; // r0@14
  int v16; // r4@14
  unsigned int v17; // r11@14
  int v18; // r6@14
  int v19; // r0@14
  int v20; // r8@15
  unsigned int v21; // r9@15 OVERLAPPED
  unsigned int v22; // r10@15 OVERLAPPED
  int v23; // r4@15
  bool v24; // zf@16
  int v25; // r7@19
  char v26; // r0@22
  __int64 v27; // r0@24
  LevelChunk *v28; // r0@26
  LevelChunk *v29; // r0@27
  bool v30; // zf@32
  _QWORD *v31; // r0@36
  LevelChunk *v32; // r1@37
  LevelChunk *v33; // r4@37
  char *v34; // [sp+0h] [bp-30h]@14
  LevelChunk **v35; // [sp+4h] [bp-2Ch]@1
  int v36; // [sp+8h] [bp-28h]@1
  int v37; // [sp+8h] [bp-28h]@14

  v2 = a1;
  v35 = a2;
  v36 = a1;
  v3 = j_LevelChunk::getPosition(*a2);
  v4 = v3;
  v6 = *(_QWORD *)(v2 + 92) >> 32;
  v5 = *(_QWORD *)(v2 + 92);
  v7 = 522133279 * *(_QWORD *)v3 ^ (*(_QWORD *)v3 >> 32);
  v8 = v7 % v6;
  v9 = *(int **)(v5 + 4 * v8);
  v10 = v9 == 0;
  if ( v9 )
  {
    v5 = *v9;
    v10 = *v9 == 0;
  }
  if ( v10 )
LABEL_22:
    v26 = *j_LevelChunk::getState(*v35);
    __dmb();
    if ( v26 != 8 )
      return;
    if ( j_LevelChunk::isDirty(*v35) != 1 )
    {
      v28 = *v35;
      *v35 = 0;
      if ( !v28 )
        return;
      v29 = j_LevelChunk::~LevelChunk(v28);
      goto LABEL_39;
    }
    v27 = *(_QWORD *)(v36 + 84);
    if ( (_DWORD)v27 == HIDWORD(v27) )
      j_std::vector<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>,std::allocator<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>>::_M_emplace_back_aux<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>(
        (_QWORD *)(v36 + 80),
        (int *)v35);
    else
      HIDWORD(v27) = *v35;
      *(_DWORD *)v27 = HIDWORD(v27);
      *(_DWORD *)(v36 + 84) += 4;
    if ( !*(_BYTE *)(v36 + 148)
      || (unsigned int)((signed int)((*(_QWORD *)(v36 + 80) >> 32) - *(_QWORD *)(v36 + 80)) >> 2) >= 0x15 )
      j_j_j__ZN14DBChunkStorage11_writeBatchEv_0((DBChunkStorage *)v36);
  else
    v11 = *(_QWORD *)v4;
    v12 = 0;
    v13 = *(_DWORD *)(v5 + 16);
    do
      v14 = v13 == v7;
      if ( v13 == v7 )
        v14 = *(_QWORD *)(v5 + 8) == v11;
      if ( v14 )
      {
        ++v12;
      }
      else
        if ( v12 )
          goto LABEL_14;
        v12 = 0;
      v5 = *(_DWORD *)v5;
      if ( !v5 )
        break;
      v13 = *(_DWORD *)(v5 + 16);
    while ( *(_DWORD *)(v5 + 16) % v6 == v8 );
    if ( !v12 )
      goto LABEL_22;
LABEL_14:
    v15 = j_LevelChunk::getPosition(*v35);
    v34 = v15;
    v16 = *(_DWORD *)(v36 + 120);
    v37 = v36 + 120;
    v17 = 522133279 * *(_QWORD *)v15 ^ (*(_QWORD *)v15 >> 32);
    v18 = v17 % *(_DWORD *)(v37 + 4);
    v19 = *(_DWORD *)(v16 + 4 * v18);
    if ( !v19 )
      goto LABEL_36;
    v20 = *(_DWORD *)v19;
    *(_QWORD *)&v21 = *(_QWORD *)v34;
    v23 = *(_DWORD *)(*(_DWORD *)v19 + 24);
    while ( 1 )
      v24 = v23 == v17;
      if ( v23 == v17 )
        v24 = *(_QWORD *)(v20 + 8) == __PAIR__(v22, v21);
      if ( v24 )
      v25 = *(_DWORD *)v20;
      if ( *(_DWORD *)v20 )
        v23 = *(_DWORD *)(v25 + 24);
        v19 = v20;
        v20 = *(_DWORD *)v20;
        if ( *(_DWORD *)(v25 + 24) % *(_DWORD *)(v37 + 4) == v18 )
          continue;
    v30 = v19 == 0;
    if ( v19 )
      v19 = *(_DWORD *)v19;
      v30 = v19 == 0;
    if ( v30 )
LABEL_36:
      v31 = j_operator new(0x20u);
      *(_DWORD *)v31 = 0;
      v31[1] = *(_QWORD *)v34;
      *((_DWORD *)v31 + 4) = 0;
      v19 = j_std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>,std::allocator<std::pair<ChunkPos const,std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v37,
              v18,
              v17,
              (int)v31);
    v32 = *v35;
    *v35 = 0;
    v33 = *(LevelChunk **)(v19 + 16);
    *(_DWORD *)(v19 + 16) = v32;
    if ( v33 )
      j_LevelChunk::~LevelChunk(v33);
      v29 = v33;
LABEL_39:
      j_j_j__ZN10LevelChunkdlEPv_0((void *)v29);
}


int __fastcall DBChunkStorage::_applyChunkFixup(DBChunkStorage *this, LevelChunk *a2, BlockSource *a3)
{
  LevelChunk *v3; // r4@1
  DBChunkStorage *v4; // r6@1
  BlockSource *v5; // r8@1
  char *v6; // r0@2
  unsigned __int8 v8; // [sp+4h] [bp-1Ch]@3
  unsigned __int8 v9; // [sp+5h] [bp-1Bh]@3
  __int16 v10; // [sp+6h] [bp-1Ah]@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( (unsigned int)j_LevelChunk::getLoadedFormat(a2) <= 1 )
  {
    v6 = j_Level::getLevelData(*((Level **)v4 + 2));
    if ( j_LevelData::getGenerator((LevelData *)v6) == 2 )
    {
      v8 = 0;
      v9 = 0;
      v10 = 0;
      do
      {
        v9 = 0;
        do
        {
          j_LevelChunk::setBiome(v3, (const Biome *)Biome::plains, (const ChunkBlockPos *)&v8);
          ++v9;
        }
        while ( v9 < 0x10u );
        ++v8;
      }
      while ( v8 < 0x10u );
    }
  }
  j_LevelChunk::upgradeFix(v3, v5);
  return j_LevelChunk::_changeTerrainDataState((int)v3, 1, 5);
}


int __fastcall DBChunkStorage::onLowMemory(DBChunkStorage *this)
{
  DBChunkStorage *v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int v6; // r0@6
  unsigned int *v7; // r5@10
  unsigned int v8; // r0@12
  unsigned __int8 *v9; // r0@18
  unsigned int v10; // r2@19
  void *v11; // r0@21
  void *v12; // r4@22
  int result; // r0@23

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 68);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 8;
    }
    while ( v3 != HIDWORD(v2) );
  }
  v9 = (unsigned __int8 *)v1 + 60;
  *((_DWORD *)v1 + 18) = v2;
  do
      v10 = __ldrex(v9);
    while ( __strex(1u, v9) );
    __dmb();
  while ( v10 );
  v11 = (void *)*((_DWORD *)v1 + 10);
  if ( v11 )
      v12 = *(void **)v11;
      j_operator delete(v11);
      v11 = v12;
    while ( v12 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  result = 0;
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  __dmb();
  *((_BYTE *)v1 + 60) = 0;
  return result;
}


ChunkSource *__fastcall DBChunkStorage::~DBChunkStorage(DBChunkStorage *this)
{
  DBChunkStorage *v1; // r9@1
  int v2; // r6@1
  LevelChunk *v3; // r0@2
  int v4; // r4@2
  LevelChunk *v5; // r0@3
  char *v6; // r0@5
  void *v7; // r0@8
  void *v8; // r4@9
  char *v9; // r0@10
  LevelChunk **v10; // r4@13
  LevelChunk **v11; // r6@13
  LevelChunk *v12; // r0@15
  int v13; // r5@20
  int v14; // r6@20
  int v15; // r4@21
  unsigned int *v16; // r1@22
  unsigned int v17; // r0@24
  unsigned int *v18; // r7@28
  unsigned int v19; // r0@30
  void *v20; // r0@39
  void *v21; // r4@40
  char *v22; // r0@41

  v1 = this;
  *(_DWORD *)this = &off_2725904;
  *((_DWORD *)this + 6) = &off_272595C;
  v2 = *((_DWORD *)this + 32);
  if ( v2 )
  {
    do
    {
      v3 = *(LevelChunk **)(v2 + 16);
      v4 = *(_DWORD *)v2;
      if ( v3 )
      {
        v5 = j_LevelChunk::~LevelChunk(v3);
        j_LevelChunk::operator delete((void *)v5);
      }
      j_operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 15), 4 * (*((_QWORD *)v1 + 15) >> 32));
  *((_DWORD *)v1 + 32) = 0;
  *((_DWORD *)v1 + 33) = 0;
  v6 = (char *)*((_DWORD *)v1 + 30);
  if ( v6 && (char *)v1 + 144 != v6 )
    j_operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 25);
  if ( v7 )
      v8 = *(void **)v7;
      j_operator delete(v7);
      v7 = v8;
    while ( v8 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 92), 4 * (*(_QWORD *)((char *)v1 + 92) >> 32));
  *((_DWORD *)v1 + 25) = 0;
  *((_DWORD *)v1 + 26) = 0;
  v9 = (char *)*((_DWORD *)v1 + 23);
  if ( v9 && (char *)v1 + 116 != v9 )
    j_operator delete(v9);
  v10 = (LevelChunk **)(*((_QWORD *)v1 + 10) >> 32);
  v11 = (LevelChunk **)*((_QWORD *)v1 + 10);
  if ( v11 != v10 )
      if ( *v11 )
        v12 = j_LevelChunk::~LevelChunk(*v11);
        j_LevelChunk::operator delete((void *)v12);
      *v11 = 0;
      ++v11;
    while ( v10 != v11 );
    v11 = (LevelChunk **)*((_DWORD *)v1 + 20);
  if ( v11 )
    j_operator delete(v11);
  v13 = *(_QWORD *)((char *)v1 + 68) >> 32;
  v14 = *(_QWORD *)((char *)v1 + 68);
  if ( v14 != v13 )
      v15 = *(_DWORD *)(v14 + 4);
      if ( v15 )
        v16 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v15 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
      v14 += 8;
    while ( v14 != v13 );
    v14 = *((_DWORD *)v1 + 17);
  if ( v14 )
    j_operator delete((void *)v14);
  v20 = (void *)*((_DWORD *)v1 + 10);
  if ( v20 )
      v21 = *(void **)v20;
      j_operator delete(v20);
      v20 = v21;
    while ( v21 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  v22 = (char *)*((_DWORD *)v1 + 8);
  if ( v22 && (char *)v1 + 56 != v22 )
    j_operator delete(v22);
  j_AppPlatformListener::~AppPlatformListener((DBChunkStorage *)((char *)v1 + 24));
  return j_j_j__ZN11ChunkSourceD2Ev_1(v1);
}


RakNet *__fastcall DBChunkStorage::_loadAndBlendFromDB(DBChunkStorage *this, LevelChunk *a2)
{
  DBChunkStorage *v2; // r5@1
  LevelChunk *v3; // r4@1
  Dimension *v4; // r6@1
  __int64 *v5; // r7@1
  char v6; // r0@1
  int *v7; // r0@1
  Dimension *v8; // r6@1
  __int64 *v9; // r7@1
  char v10; // r0@1
  int v11; // r5@3
  int v12; // r6@3
  int v13; // r7@3
  int v14; // r0@3
  RakNet *result; // r0@10
  RakNet *v16; // [sp+8h] [bp-1B80h]@1
  char v17; // [sp+Ch] [bp-1B7Ch]@3
  int v18[744]; // [sp+420h] [bp-1768h]@1
  char v19; // [sp+FC0h] [bp-BC8h]@1

  v2 = this;
  v3 = a2;
  v16 = _stack_chk_guard;
  v4 = (Dimension *)j_LevelChunk::getDimension(a2);
  v5 = (__int64 *)j_LevelChunk::getPosition(v3);
  v6 = j_LevelChunk::isReadOnly(v3);
  v7 = j_LevelChunk::LevelChunk((int *)&v19, v4, v5, v6);
  j_LevelChunk::operator=((int)v7, (int)v3);
  v8 = (Dimension *)j_LevelChunk::getDimension(v3);
  v9 = (__int64 *)j_LevelChunk::getPosition(v3);
  v10 = j_LevelChunk::isReadOnly(v3);
  j_LevelChunk::LevelChunk(v18, v8, v9, v10);
  j_LevelChunk::operator=((int)v3, (int)v18);
  j_LevelChunk::changeState((int)v3, 0, 5u);
  j_DBChunkStorage::_loadChunkFromDB(v2, v3);
  if ( j_LevelChunk::getLoadedFormat(v3) == 5 && *((_BYTE *)v3 + 2972) )
  {
    j_ConsoleChunkBlender::ConsoleChunkBlender((ConsoleChunkBlender *)&v17);
    v11 = j_LevelChunk::getConvertedInterpolantBool(v3, 0, 0);
    v12 = j_LevelChunk::getConvertedInterpolantBool(v3, 0, 1u);
    v13 = j_LevelChunk::getConvertedInterpolantBool(v3, 1u, 0);
    v14 = j_LevelChunk::getConvertedInterpolantBool(v3, 1u, 1u);
    j_ConsoleChunkBlender::setInterpolants((ConsoleChunkBlender *)&v17, v11, v12, v13, v14);
    if ( j_LevelChunk::getDimensionId(v3) )
    {
      if ( j_LevelChunk::getDimensionId(v3) == 1 )
      {
        j_ConsoleChunkBlender::blendChunkNether((ConsoleChunkBlender *)&v17, (LevelChunk *)&v19, v3);
      }
      else if ( j_LevelChunk::getDimensionId(v3) == 2 )
        j_ConsoleChunkBlender::blendChunkEnd((ConsoleChunkBlender *)&v17, (LevelChunk *)&v19, v3);
    }
    else
      j_ConsoleChunkBlender::blendChunkOverworld((ConsoleChunkBlender *)&v17, (LevelChunk *)&v19, v3);
    j_ConsoleChunkBlender::~ConsoleChunkBlender((ConsoleChunkBlender *)&v17);
  }
  j_LevelChunk::~LevelChunk((LevelChunk *)v18);
  j_LevelChunk::~LevelChunk((LevelChunk *)&v19);
  result = (RakNet *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall DBChunkStorage::~DBChunkStorage(DBChunkStorage *this)
{
  ChunkSource *v1; // r0@1

  v1 = j_DBChunkStorage::~DBChunkStorage(this);
  j_j_j__ZdlPv_7((void *)v1);
}


char *__fastcall DBChunkStorage::_getBuffer(DBChunkStorage *this, int a2)
{
  DBChunkStorage *v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r0@2
  int v5; // r2@2
  int v6; // r5@2
  unsigned int *v7; // r1@3
  unsigned int v8; // r0@5
  char *result; // r0@7
  unsigned int *v10; // r6@10
  unsigned int v11; // r0@12

  v2 = this;
  v3 = *(_QWORD *)(a2 + 68);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = (char *)j_j__ZNSt12__shared_ptrIN7leveldb10WriteBatchELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)this);
  }
  else
    v4 = HIDWORD(v3) - 8;
    *(_QWORD *)v2 = *(_DWORD *)(HIDWORD(v3) - 8);
    v5 = *(_DWORD *)(HIDWORD(v3) - 4);
    *(_DWORD *)(v4 + 4) = 0;
    *((_DWORD *)v2 + 1) = v5;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(a2 + 72) = HIDWORD(v3) - 8;
    v6 = *(_DWORD *)(HIDWORD(v3) - 4);
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 == 1 )
        v10 = (unsigned int *)(v6 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
    }
    result = j_leveldb::WriteBatch::Clear(*(leveldb::WriteBatch **)v2);
  return result;
}


int __fastcall DBChunkStorage::DBChunkStorage(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r0@1
  int v5; // r6@1
  double v6; // r0@3
  double v7; // r0@3
  int v8; // r5@5
  void *v9; // r7@5
  double v10; // r0@6
  int v11; // r5@8
  void *v12; // r6@8
  unsigned int v13; // r0@9
  int v14; // r5@11
  void *v15; // r6@11
  int v17; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = *a2;
  v5 = a3;
  *a2 = 0;
  v17 = v4;
  j_ChunkSource::ChunkSource(v3, &v17);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  j_AppPlatformListener::AppPlatformListener((_QWORD *)(v3 + 24));
  *(_DWORD *)v3 = &off_2725904;
  *(_DWORD *)(v3 + 24) = &off_272595C;
  *(_DWORD *)(v3 + 40) = 0;
  *(_DWORD *)(v3 + 44) = 0;
  *(_DWORD *)(v3 + 48) = 1065353216;
  LODWORD(v6) = v3 + 48;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v6)));
  *(_DWORD *)(v3 + 36) = LODWORD(v7);
  if ( LODWORD(v7) == 1 )
  {
    *(_DWORD *)(v3 + 56) = 0;
    v9 = (void *)(v3 + 56);
  }
  else
    if ( LODWORD(v7) >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * LODWORD(v7);
    v9 = j_operator new(4 * LODWORD(v7));
    j___aeabi_memclr4_0((int)v9, v8);
  *(_DWORD *)(v3 + 32) = v9;
  __dmb();
  *(_BYTE *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 64) = v5;
  *(_DWORD *)(v3 + 100) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 108) = 1065353216;
  LODWORD(v7) = v3 + 108;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v10 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v7)));
  *(_DWORD *)(v3 + 96) = LODWORD(v10);
  if ( LODWORD(v10) == 1 )
    *(_DWORD *)(v3 + 116) = 0;
    v12 = (void *)(v3 + 116);
    if ( LODWORD(v10) >= 0x40000000 )
    v11 = 4 * LODWORD(v10);
    v12 = j_operator new(4 * LODWORD(v10));
    j___aeabi_memclr4_0((int)v12, v11);
  *(_DWORD *)(v3 + 92) = v12;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  *(_DWORD *)(v3 + 136) = 1065353216;
  LODWORD(v10) = v3 + 136;
  *(_DWORD *)(LODWORD(v10) + 4) = 0;
  v13 = sub_21E6254(v10);
  *(_DWORD *)(v3 + 124) = v13;
  if ( v13 == 1 )
    *(_DWORD *)(v3 + 144) = 0;
    v15 = (void *)(v3 + 144);
    if ( v13 >= 0x40000000 )
    v14 = 4 * v13;
    v15 = j_operator new(4 * v13);
    j___aeabi_memclr4_0((int)v15, v14);
  *(_DWORD *)(v3 + 120) = v15;
  *(_BYTE *)(v3 + 148) = 0;
  return v3;
}


int __fastcall DBChunkStorage::flushPendingWrites(DBChunkStorage *this)
{
  ChunkSource *v1; // r4@1

  v1 = this;
  if ( *((_QWORD *)this + 10) >> 32 != (unsigned int)*((_QWORD *)this + 10) )
    j_DBChunkStorage::_writeBatch(this);
  return j_j_j__ZN11ChunkSource18flushPendingWritesEv(v1);
}


BackgroundTask *__fastcall DBChunkStorage::_writeBatch(DBChunkStorage *this)
{
  int v1; // r5@1
  __int64 v2; // r6@1
  int v3; // r8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  _DWORD *v6; // r0@7
  __int64 v7; // r1@7
  BackgroundTask *result; // r0@7
  int v9; // r4@11
  unsigned int *v10; // r1@12
  unsigned int *v11; // r5@18
  char v12; // [sp+4h] [bp-44h]@7
  int (*v13)(void); // [sp+Ch] [bp-3Ch]@7
  _DWORD *v14; // [sp+14h] [bp-34h]@7
  __int64 v15; // [sp+1Ch] [bp-2Ch]@7
  int v16; // [sp+24h] [bp-24h]@1
  int v17; // [sp+28h] [bp-20h]@1
  char v18; // [sp+2Ch] [bp-1Ch]@1

  LODWORD(v2) = this;
  j_std::__shared_ptr<std::vector<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>,std::allocator<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::vector<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>,std::allocator<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>>>,std::vector<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>,std::allocator<std::unique_ptr<LevelChunk,std::default_delete<LevelChunk>>>>>(
    (int)&v16,
    (int)&v18,
    (int)this + 80);
  v1 = v17;
  HIDWORD(v2) = v16;
  v3 = TaskGroup::DISK;
  if ( v17 )
  {
    v4 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
  }
  v6 = j_operator new(0xCu);
  LODWORD(v7) = sub_1B22CA0;
  *(_QWORD *)v6 = v2;
  HIDWORD(v7) = sub_1B22C2C;
  v6[2] = v1;
  v14 = v6;
  v15 = v7;
  v13 = 0;
  result = j_TaskGroup::queue(v3, (int)&v14, (int)&v12, 0x46u, 0xFFFFFFFF);
  if ( v13 )
    result = (BackgroundTask *)v13();
  if ( (_DWORD)v15 )
    result = (BackgroundTask *)((int (*)(void))v15)();
  v9 = v17;
    v10 = (unsigned int *)(v17 + 4);
        result = (BackgroundTask *)__ldrex(v10);
      while ( __strex((unsigned int)result - 1, v10) );
      result = (BackgroundTask *)(*v10)--;
    if ( result == (BackgroundTask *)1 )
      v11 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BackgroundTask *)__ldrex(v11);
        while ( __strex((unsigned int)result - 1, v11) );
      }
      else
        result = (BackgroundTask *)(*v11)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


int __fastcall DBChunkStorage::saveLiveChunk(DBChunkStorage *this, LevelChunk *a2)
{
  DBChunkStorage *v2; // r8@1
  LevelChunk *v3; // r5@1
  unsigned __int64 v4; // kr00_8@1
  unsigned int v5; // r10@1
  unsigned __int64 v6; // kr18_8@1
  int v7; // ST14_4@1
  unsigned int v8; // r7@1
  unsigned int v9; // r11@1
  int v10; // r9@1
  int v11; // r10@2
  int v12; // r0@3
  int v13; // r8@3
  int v14; // r6@6
  int v15; // r5@14
  int v16; // r6@14
  int v17; // r4@17
  _DWORD *v18; // r0@20
  __int64 v19; // kr08_8@21
  int v20; // r4@21
  unsigned int *v21; // r0@22
  unsigned int v22; // r1@24
  _DWORD *v23; // r0@27
  __int64 v24; // r1@27
  __int64 v25; // kr10_8@27
  unsigned int *v26; // r0@28
  unsigned int v27; // r1@30
  _DWORD *v28; // r0@33
  __int64 v29; // r1@33
  int v30; // r4@38
  unsigned int *v31; // r1@39
  unsigned int v32; // r0@41
  unsigned int *v33; // r5@45
  unsigned int v34; // r0@47
  LevelChunk *v36; // [sp+8h] [bp-60h]@14
  DBChunkStorage *v37; // [sp+Ch] [bp-5Ch]@3
  int v38; // [sp+10h] [bp-58h]@1
  int v39; // [sp+18h] [bp-50h]@1
  _DWORD *v40; // [sp+1Ch] [bp-4Ch]@33
  __int64 v41; // [sp+24h] [bp-44h]@33
  _DWORD *v42; // [sp+2Ch] [bp-3Ch]@27
  __int64 v43; // [sp+34h] [bp-34h]@27
  leveldb::WriteBatch *v44; // [sp+3Ch] [bp-2Ch]@1
  int v45; // [sp+40h] [bp-28h]@21

  v2 = this;
  v3 = a2;
  j_DBChunkStorage::_getBuffer((DBChunkStorage *)&v44, (int)this);
  v4 = *(_QWORD *)j_LevelChunk::getPosition(v3);
  v6 = v4;
  v7 = v6 >> 32;
  v5 = v6;
  v38 = (int)v2 + 92;
  v8 = *((_DWORD *)v2 + 24);
  v9 = 522133279 * v4 ^ HIDWORD(v4);
  v10 = *(_DWORD *)(*((_DWORD *)v2 + 23) + 4 * (v9 % *((_DWORD *)v2 + 24)));
  v39 = v9 % *((_DWORD *)v2 + 24);
  if ( v10 )
  {
    v11 = *(_DWORD *)v10;
    if ( !*(_DWORD *)v10 )
    {
      v5 = v4;
      goto LABEL_14;
    }
    v37 = v2;
    v12 = 0;
    v13 = *(_DWORD *)(v11 + 16);
    do
      if ( v13 != v9 || *(_QWORD *)(v11 + 8) != v4 )
      {
        v14 = 0;
        if ( v12 )
          goto LABEL_38;
      }
      else
        v14 = v12 + 1;
      v11 = *(_DWORD *)v11;
      if ( !v11 )
        break;
      v13 = *(_DWORD *)(v11 + 16);
      v12 = v14;
    while ( *(_DWORD *)(v11 + 16) % v8 == v39 );
    v2 = v37;
    if ( v14 )
      v14 = 0;
      goto LABEL_38;
    v5 = v4;
    if ( v10 )
LABEL_14:
      v36 = v3;
      v15 = *(_DWORD *)v10;
      v16 = *(_DWORD *)(*(_DWORD *)v10 + 16);
      while ( v16 != v9 || *(_QWORD *)(v15 + 8) != __PAIR__(HIDWORD(v4), v5) )
        v17 = *(_DWORD *)v15;
        if ( *(_DWORD *)v15 )
        {
          v16 = *(_DWORD *)(v17 + 16);
          v10 = v15;
          v15 = *(_DWORD *)v15;
          if ( *(_DWORD *)(v17 + 16) % v8 == v39 )
            continue;
        }
        v3 = v36;
        goto LABEL_20;
      v3 = v36;
      if ( v10 && *(_DWORD *)v10 )
        goto LABEL_21;
      goto LABEL_20;
  }
LABEL_20:
  v18 = j_operator new(0x18u);
  *v18 = 0;
  v18[2] = v5;
  v18[3] = HIDWORD(v4);
  j_std::_Hashtable<ChunkPos,ChunkPos,std::allocator<ChunkPos>,std::__detail::_Identity,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_insert_unique_node(
    v38,
    v39,
    v9,
    (int)v18);
LABEL_21:
  j_DBChunkStorage::_serializeChunk(v2, v3, v44);
  *((_BYTE *)v3 + 58) = 1;
  j_LevelChunk::setSaved(v3);
  v19 = *(_QWORD *)&v44;
  v20 = TaskGroup::DISK;
  if ( v45 )
    v21 = (unsigned int *)(v45 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
    else
      ++*v21;
  v23 = j_operator new(0xCu);
  HIDWORD(v24) = sub_1B232EA;
  *(_QWORD *)v23 = v19;
  LODWORD(v24) = sub_1B232FC;
  v23[2] = v2;
  v42 = v23;
  v43 = v24;
  v25 = *(_QWORD *)&v44;
    v26 = (unsigned int *)(v45 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 + 1, v26) );
      ++*v26;
  v28 = j_operator new(0x18u);
  *v28 = v2;
  v28[1] = v25;
  LODWORD(v29) = sub_1B235C4;
  HIDWORD(v29) = sub_1B233E4;
  v28[2] = HIDWORD(v25);
  v28[4] = v5;
  v28[5] = HIDWORD(v4);
  v40 = v28;
  v41 = v29;
  j_TaskGroup::queue(v20, (int)&v42, (int)&v40, 0x3Cu, 0xFFFFFFFF);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
    v14 = 1;
  else
LABEL_38:
  v30 = v45;
    v31 = (unsigned int *)(v45 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
      if ( &pthread_create )
        __dmb();
        do
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  return v14;
}
