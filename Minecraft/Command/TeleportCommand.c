

Command *__fastcall TeleportCommand::TeleportCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A214;
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 20);
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 116);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 212));
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 228);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 324));
  j_RelativeFloat::RelativeFloat((Command *)((char *)v1 + 340));
  j_RelativeFloat::RelativeFloat((Command *)((char *)v1 + 348));
  *((_DWORD *)v1 + 89) = 1;
  *((_WORD *)v1 + 180) = 0;
  return v1;
}


void __fastcall TeleportCommand::execute(TeleportCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  TeleportCommand::execute(this, a2, a3);
}


void __fastcall TeleportCommand::~TeleportCommand(TeleportCommand *this)
{
  TeleportCommand *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A214;
  v2 = (TeleportCommand *)((char *)this + 20);
  j_CommandSelectorBase::~CommandSelectorBase((TeleportCommand *)((char *)this + 228));
  j_CommandSelectorBase::~CommandSelectorBase((TeleportCommand *)((char *)v1 + 116));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall TeleportCommand::canMoveEntityToLocation(TeleportCommand *this, const CommandOrigin *a2, const Entity *a3, const BlockPos *a4)
{
  Entity *v4; // r5@1
  const Entity *v5; // r4@1
  Level *v6; // r0@1
  char *v7; // r0@1
  int result; // r0@2
  Dimension *v9; // r0@3
  int v10; // r0@3
  int v11; // r5@3
  int (__fastcall *v12)(int, int *); // r7@3
  int v13; // [sp+0h] [bp-20h]@3

  v4 = a2;
  v5 = a3;
  v6 = (Level *)(*(int (**)(void))(*(_DWORD *)this + 24))();
  v7 = j_Level::getLevelData(v6);
  if ( j_LevelData::getGenerator((LevelData *)v7) )
  {
    result = 1;
  }
  else
    v9 = (Dimension *)j_Entity::getDimension(v4);
    v10 = j_Dimension::getChunkSource(v9);
    v11 = v10;
    v12 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v10 + 68);
    j_ChunkPos::ChunkPos((ChunkPos *)&v13, v5);
    result = v12(v11, &v13);
  return result;
}


void __fastcall TeleportCommand::setup(TeleportCommand *this, CommandRegistry *a2)
{
  TeleportCommand::setup(this, a2);
}


void __fastcall TeleportCommand::execute(TeleportCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r9@1
  TeleportCommand *v4; // r8@1
  CommandOutput *v5; // r5@1
  void *v13; // r4@6
  void *v14; // r6@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int *v17; // r0@16
  void *v18; // r0@21
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  int v21; // r0@28
  int v22; // r4@28
  int v23; // r0@28
  void *v24; // r0@28
  int v25; // r6@29
  signed int v26; // r10@29
  void *v27; // r0@31
  void *v28; // r4@33
  void *v29; // r7@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  int *v32; // r0@43
  void *v33; // r0@48
  int v34; // r7@50
  unsigned int *v35; // r1@51
  unsigned int v36; // r0@53
  int v37; // r11@57
  unsigned int *v38; // r6@57
  unsigned int v39; // r0@59
  int *v40; // r7@68
  signed int v41; // r0@68
  Entity *v42; // r10@72
  Level *v43; // r0@75
  char *v44; // r0@75
  Dimension *v45; // r0@76
  int v46; // r7@76
  int (__fastcall *v47)(int, char *); // r4@76
  void *v48; // r4@78
  void *v49; // r7@78
  unsigned int *v50; // r2@80
  signed int v51; // r1@82
  int *v52; // r0@88
  void *v53; // r0@93
  void *v54; // r0@94
  void *v55; // r0@95
  unsigned int *v56; // r2@96
  signed int v57; // r1@98
  void *v58; // r4@100
  void *v59; // r7@100
  unsigned int *v60; // r2@102
  signed int v61; // r1@104
  int *v62; // r0@110
  void *v63; // r4@120
  void *v64; // r7@120
  unsigned int *v65; // r2@122
  signed int v66; // r1@124
  int *v67; // r0@130
  unsigned int *v68; // r2@144
  signed int v69; // r1@146
  unsigned int *v70; // r2@148
  signed int v71; // r1@150
  int v72; // r8@161
  int v73; // r5@161
  unsigned int *v74; // r1@162
  unsigned int v75; // r0@164
  unsigned int *v76; // r2@166
  signed int v77; // r1@168
  unsigned int *v78; // r4@176
  unsigned int v79; // r0@178
  unsigned int *v80; // r2@180
  signed int v81; // r1@182
  unsigned int *v82; // r2@184
  signed int v83; // r1@186
  int v84; // r5@191
  unsigned int *v85; // r1@192
  unsigned int v86; // r0@194
  unsigned int *v87; // r4@198
  unsigned int v88; // r0@200
  char *v89; // r4@206
  int v90; // r6@206
  unsigned int *v91; // r2@208
  signed int v92; // r1@210
  int *v93; // r0@216
  void *v94; // r0@221
  void *v95; // r0@222
  void *v96; // r0@223
  unsigned int *v97; // r2@224
  signed int v98; // r1@226
  char *v99; // r4@228
  int v100; // r6@228
  unsigned int *v101; // r2@230
  signed int v102; // r1@232
  int *v103; // r0@238
  void *v104; // r0@243
  void *v105; // r0@244
  void *v106; // r0@245
  void *v107; // r0@246
  char *v108; // r0@248
  int v109; // r4@249
  unsigned int *v110; // r1@250
  unsigned int v111; // r0@252
  unsigned int *v112; // r5@256
  unsigned int v113; // r0@258
  unsigned int *v114; // r2@264
  signed int v115; // r1@266
  unsigned int *v116; // r2@279
  signed int v117; // r1@281
  unsigned int *v118; // r2@283
  signed int v119; // r1@285
  unsigned int *v120; // r2@287
  signed int v121; // r1@289
  unsigned int *v122; // r2@291
  signed int v123; // r1@293
  unsigned int *v124; // r2@295
  signed int v125; // r1@297
  unsigned int *v126; // r2@299
  signed int v127; // r1@301
  int v128; // [sp+24h] [bp-184h]@71
  int v129; // [sp+2Ch] [bp-17Ch]@71
  int v130; // [sp+34h] [bp-174h]@228
  int v131; // [sp+3Ch] [bp-16Ch]@228
  int v132; // [sp+44h] [bp-164h]@228
  int v133; // [sp+4Ch] [bp-15Ch]@228
  char *v134; // [sp+54h] [bp-154h]@228
  char *v135; // [sp+58h] [bp-150h]@228
  char *v136; // [sp+5Ch] [bp-14Ch]@228
  int v137; // [sp+64h] [bp-144h]@228
  int v138; // [sp+68h] [bp-140h]@206
  int v139; // [sp+70h] [bp-138h]@206
  char *v140; // [sp+78h] [bp-130h]@206
  char *v141; // [sp+7Ch] [bp-12Ch]@206
  char *v142; // [sp+80h] [bp-128h]@206
  int v143; // [sp+88h] [bp-120h]@206
  int v144; // [sp+90h] [bp-118h]@95
  int v145; // [sp+94h] [bp-114h]@78
  void *ptr; // [sp+98h] [bp-110h]@78
  void *v147; // [sp+9Ch] [bp-10Ch]@78
  char *v148; // [sp+A0h] [bp-108h]@78
  int v149; // [sp+A8h] [bp-100h]@78
  __int64 v150; // [sp+ACh] [bp-FCh]@120
  int v151; // [sp+B4h] [bp-F4h]@120
  int v152; // [sp+BCh] [bp-ECh]@120
  char v153; // [sp+C0h] [bp-E8h]@75
  __int64 v154; // [sp+CCh] [bp-DCh]@100
  int v155; // [sp+D4h] [bp-D4h]@100
  int v156; // [sp+DCh] [bp-CCh]@100
  char v157; // [sp+E0h] [bp-C8h]@71
  int v158; // [sp+E4h] [bp-C4h]@161
  char v159; // [sp+ECh] [bp-BCh]@71
  int v160; // [sp+F0h] [bp-B8h]@191
  int v161; // [sp+F8h] [bp-B0h]@68
  int v162; // [sp+FCh] [bp-ACh]@68
  int v163; // [sp+100h] [bp-A8h]@68
  int v164; // [sp+104h] [bp-A4h]@28
  __int64 v165; // [sp+108h] [bp-A0h]@33
  int v166; // [sp+110h] [bp-98h]@33
  int v167; // [sp+118h] [bp-90h]@33
  __int64 *v168; // [sp+11Ch] [bp-8Ch]@26
  int v169; // [sp+120h] [bp-88h]@50
  int v170; // [sp+124h] [bp-84h]@31
  char v171; // [sp+128h] [bp-80h]@5
  float v172; // [sp+134h] [bp-74h]@5
  int v173; // [sp+138h] [bp-70h]@5
  int v175; // [sp+140h] [bp-68h]@4
  int v176; // [sp+144h] [bp-64h]@4
  int v177; // [sp+148h] [bp-60h]@4
  char *v178; // [sp+14Ch] [bp-5Ch]@3
  int v179; // [sp+150h] [bp-58h]@3
  int v180; // [sp+154h] [bp-54h]@3
  int v181; // [sp+158h] [bp-50h]@3
  int *v182; // [sp+15Ch] [bp-4Ch]@2
  int v183; // [sp+160h] [bp-48h]@249
  __int64 v184; // [sp+164h] [bp-44h]@6
  int v185; // [sp+16Ch] [bp-3Ch]@6
  int v186; // [sp+174h] [bp-34h]@6
  char v187; // [sp+178h] [bp-30h]@76

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( !(*(int (__fastcall **)(const CommandOrigin *, int **))(*(_DWORD *)a2 + 56))(a2, &Abilities::TELEPORT) )
  {
    sub_21E94B4((void **)&v186, "commands.tp.permission");
    v184 = 0LL;
    v185 = 0;
    j_CommandOutput::error(v5, &v186, (unsigned __int64 *)&v184);
    v14 = (void *)HIDWORD(v184);
    v13 = (void *)v184;
    if ( (_DWORD)v184 != HIDWORD(v184) )
    {
      do
      {
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
        v13 = (char *)v13 + 8;
      }
      while ( v13 != v14 );
      v13 = (void *)v184;
    }
    if ( v13 )
      j_operator delete(v13);
    v18 = (void *)(v186 - 12);
    if ( (int *)(v186 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v186 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    return;
  }
  j_CommandSelector<Entity>::results((int)&v182, (TeleportCommand *)((char *)v4 + 20), v3);
  if ( !j_Command::checkHasTargets<Entity>((__int64 **)&v182, v5) )
    goto LABEL_249;
  v179 = 0;
  v180 = 0;
  v181 = 0;
  v178 = (char *)&unk_28898CC;
  if ( !*((_BYTE *)v4 + 360) )
    j_CommandSelector<Entity>::results((int)&v168, (TeleportCommand *)((char *)v4 + 116), v3);
    if ( j_Command::checkHasTargets<Entity>(&v168, v5) )
      if ( j_CommandSelectorResults<Entity>::size(&v168) == 1 )
        v21 = j_CommandSelectorResults<Entity>::get(&v168);
        v22 = v21;
        v23 = (*(int (**)(void))(*(_DWORD *)v21 + 52))();
        v179 = *(_DWORD *)v23;
        v180 = *(_DWORD *)(v23 + 4);
        v181 = *(_DWORD *)(v23 + 8);
        v180 = *(_DWORD *)(v22 + 268);
        j_getEntityName((const Entity *)&v164, v22);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v178,
          &v164);
        v24 = (void *)(v164 - 12);
        if ( (int *)(v164 - 12) != &dword_28898C0 )
          v82 = (unsigned int *)(v164 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v25 = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 524))(v22);
        v26 = 1;
LABEL_50:
        v34 = v169;
        if ( v169 )
          v35 = (unsigned int *)(v169 + 4);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 == 1 )
            v37 = v25;
            v38 = (unsigned int *)(v34 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
            if ( &pthread_create )
            {
              __dmb();
              do
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
            }
            else
              v39 = (*v38)--;
            v25 = v37;
            if ( v39 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
        if ( !v26 )
          goto LABEL_248;
        goto LABEL_68;
      sub_21E94B4((void **)&v167, "commands.generic.tooManyTargets");
      v165 = 0LL;
      v166 = 0;
      j_CommandOutput::error(v5, &v167, (unsigned __int64 *)&v165);
      v28 = (void *)HIDWORD(v165);
      v29 = (void *)v165;
      if ( (_DWORD)v165 != HIDWORD(v165) )
          v32 = (int *)(*(_DWORD *)v29 - 12);
          if ( v32 != &dword_28898C0 )
            v30 = (unsigned int *)(*(_DWORD *)v29 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
          v29 = (char *)v29 + 8;
        while ( v29 != v28 );
        v29 = (void *)v165;
      if ( v29 )
        j_operator delete(v29);
      v33 = (void *)(v167 - 12);
      if ( (int *)(v167 - 12) != &dword_28898C0 )
        v80 = (unsigned int *)(v167 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
        else
          v81 = (*v80)--;
        if ( v81 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
    v22 = 0;
    v25 = 3;
    v26 = 0;
    goto LABEL_50;
  j_CommandPosition::getPosition((CommandPosition *)&v175, (TeleportCommand *)((char *)v4 + 212), (int)v3);
  _R1 = v175;
  _R0 = v176;
  LODWORD(_R2) = v177;
  v179 = v175;
  v180 = v176;
  v181 = v177;
  HIDWORD(_R2) = *((_DWORD *)v4 + 1);
  if ( SHIDWORD(_R2) > 2 )
    __asm
      VMOV            S2, R1
      VMOV            S0, R2
  else
    j_BlockPos::BlockPos((int)&v171, (int)&v179);
    j_Vec3::Vec3((int)&v172, (int)&v171);
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x1A8+var_74]
      VLDR            S4, [SP,#0x1A8+var_6C]
    _R0 = v173;
    v180 = v173;
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0x1A8+var_58]
      VSTR            S0, [SP,#0x1A8+var_50]
  __asm
    VCVT.F64.F32    D1, S2
    VMOV            R2, R3, D1
    VMOV            S2, R0
    VCVT.F64.F32    D0, S0
    VSTR            D1, [SP,#0x1A8+var_1A8]
    VSTR            D0, [SP,#0x1A8+var_1A0]
  j_Util::format((Util *)&v170, "%0.2f, %0.2f, %0.2f", _R2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v178,
    &v170);
  v27 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v170 - 4);
    if ( &pthread_create )
      __dmb();
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
    else
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v22 = 0;
  v25 = 3;
LABEL_68:
  v161 = 0;
  v162 = 0;
  v163 = 0;
  v40 = &v161;
  v41 = j_TeleportCommand::getFacingDirection(v4, v3, v5, (Vec3 *)&v161);
  if ( v41 == 2 )
    goto LABEL_248;
  if ( v41 )
    v40 = 0;
  j_CommandSelectorResults<Entity>::begin((int)&v159, &v182);
  v129 = (int)v40;
  v128 = v22;
  j_CommandSelectorResults<Entity>::end((int)&v157, (int)&v182);
  while ( j_SelectorIterator<Entity>::operator!=((int)&v159, (int)&v157) )
    v42 = (Entity *)j_SelectorIterator<Entity>::operator*((int)&v159);
    if ( v25 != 3 && *((_DWORD *)v4 + 1) <= 2 && v25 != (*(int (__fastcall **)(Entity *))(*(_DWORD *)v42 + 524))(v42) )
      sub_21E94B4((void **)&v156, "commands.tp.notSameDimension");
      v154 = 0LL;
      v155 = 0;
      j_CommandOutput::error(v5, &v156, (unsigned __int64 *)&v154);
      v58 = (void *)HIDWORD(v154);
      v59 = (void *)v154;
      if ( (_DWORD)v154 != HIDWORD(v154) )
          v62 = (int *)(*(_DWORD *)v59 - 12);
          if ( v62 != &dword_28898C0 )
            v60 = (unsigned int *)(*(_DWORD *)v59 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v62);
          v59 = (char *)v59 + 8;
        while ( v59 != v58 );
        v59 = (void *)v154;
      if ( v59 )
        j_operator delete(v59);
      v55 = (void *)(v156 - 12);
      if ( (int *)(v156 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v156 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
LABEL_141:
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v55);
          goto LABEL_143;
LABEL_140:
        v57 = (*v56)--;
        goto LABEL_141;
      j_BlockPos::BlockPos((int)&v153, (int)&v179);
      v43 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v3 + 24))(v3);
      v44 = j_Level::getLevelData(v43);
      if ( j_LevelData::getGenerator((LevelData *)v44)
        || (v45 = (Dimension *)j_Entity::getDimension(v42),
            v46 = j_Dimension::getChunkSource(v45),
            v47 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v46 + 68),
            j_ChunkPos::ChunkPos((ChunkPos *)&v187, (const BlockPos *)&v153),
            v47(v46, &v187)) )
        j_TeleportCommand::teleport((int)v4, (int)v42, *(__int64 *)&v179, v181, v129, v25);
        if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v42 + 488))(v42) == 319 )
          sub_21E94B4((void **)&v149, "commands.tp.successVictim");
          sub_21E8AF4(&v145, (int *)&v178);
          ptr = 0;
          v147 = 0;
          v148 = 0;
          ptr = j_operator new(4u);
          v148 = (char *)ptr + 4;
          v147 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                           (int)&v145,
                           (int)&ptr,
                           (int)ptr);
          j_CommandUtils::displayLocalizableMessage(1, v42, (int)&v149, (int)&ptr, 0);
          v48 = v147;
          v49 = ptr;
          if ( ptr != v147 )
              v52 = (int *)(*(_DWORD *)v49 - 12);
              if ( v52 != &dword_28898C0 )
              {
                v50 = (unsigned int *)(*(_DWORD *)v49 - 4);
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
                  j_j_j_j__ZdlPv_9(v52);
              }
              v49 = (char *)v49 + 4;
            while ( v49 != v48 );
            v49 = ptr;
          if ( v49 )
            j_operator delete(v49);
          v53 = (void *)(v145 - 12);
          if ( (int *)(v145 - 12) != &dword_28898C0 )
            v68 = (unsigned int *)(v145 - 4);
                v69 = __ldrex(v68);
              while ( __strex(v69 - 1, v68) );
              v69 = (*v68)--;
            if ( v69 <= 0 )
              j_j_j_j__ZdlPv_9(v53);
          v54 = (void *)(v149 - 12);
          if ( (int *)(v149 - 12) != &dword_28898C0 )
            v70 = (unsigned int *)(v149 - 4);
                v71 = __ldrex(v70);
              while ( __strex(v71 - 1, v70) );
              v71 = (*v70)--;
            if ( v71 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
        j_CommandOutput::set<Vec3>((int)v5, "destination", v179, v180, v181);
        sub_21E94B4((void **)&v144, "victim");
        j_CommandOutput::addToResultList((int)v5, (const char **)&v144, (int)v42);
        v55 = (void *)(v144 - 12);
        if ( (int *)(v144 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v144 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            goto LABEL_141;
          goto LABEL_140;
        sub_21E94B4((void **)&v152, "commands.tp.outOfWorld");
        v150 = 0LL;
        v151 = 0;
        j_CommandOutput::error(v5, &v152, (unsigned __int64 *)&v150);
        v63 = (void *)HIDWORD(v150);
        v64 = (void *)v150;
        if ( (_DWORD)v150 != HIDWORD(v150) )
            v67 = (int *)(*(_DWORD *)v64 - 12);
            if ( v67 != &dword_28898C0 )
              v65 = (unsigned int *)(*(_DWORD *)v64 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
              else
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j__ZdlPv_9(v67);
            v64 = (char *)v64 + 8;
          while ( v64 != v63 );
          v64 = (void *)v150;
        if ( v64 )
          j_operator delete(v64);
        v55 = (void *)(v152 - 12);
        if ( (int *)(v152 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v152 - 4);
LABEL_143:
    j_SelectorIterator<Entity>::operator++((int)&v159);
  v72 = (int)v5;
  v73 = v158;
  if ( v158 )
    v74 = (unsigned int *)(v158 + 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 == 1 )
      v78 = (unsigned int *)(v73 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 8))(v73);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v73 + 12))(v73);
  v84 = v160;
  if ( v160 )
    v85 = (unsigned int *)(v160 + 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 == 1 )
      v87 = (unsigned int *)(v84 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 8))(v84);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 12))(v84);
  if ( v128 )
    sub_21E94B4((void **)&v143, "commands.tp.success");
    j_CommandOutputParameter::CommandOutputParameter((int)&v138, &v182);
    j_CommandOutputParameter::CommandOutputParameter((const Entity *)&v139, v128);
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v140 = (char *)j_operator new(0x10u);
    v142 = v140 + 16;
    v141 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v138,
                     (int)&v140,
                     (int)v140);
    j_CommandOutput::success(v72, &v143, (unsigned __int64 *)&v140);
    v90 = (int)v141;
    v89 = v140;
    if ( v140 != v141 )
        v93 = (int *)(*(_DWORD *)v89 - 12);
        if ( v93 != &dword_28898C0 )
          v91 = (unsigned int *)(*(_DWORD *)v89 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j__ZdlPv_9(v93);
        v89 += 8;
      while ( v89 != (char *)v90 );
      v89 = v140;
    if ( v89 )
      j_operator delete(v89);
    v94 = (void *)(v139 - 12);
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v116 = (unsigned int *)(v139 - 4);
          v117 = __ldrex(v116);
        while ( __strex(v117 - 1, v116) );
        v117 = (*v116)--;
      if ( v117 <= 0 )
        j_j_j_j__ZdlPv_9(v94);
    v95 = (void *)(v138 - 12);
    if ( (int *)(v138 - 12) != &dword_28898C0 )
      v118 = (unsigned int *)(v138 - 4);
          v119 = __ldrex(v118);
        while ( __strex(v119 - 1, v118) );
        v119 = (*v118)--;
      if ( v119 <= 0 )
        j_j_j_j__ZdlPv_9(v95);
    v96 = (void *)(v143 - 12);
    if ( (int *)(v143 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v143 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        goto LABEL_308;
LABEL_307:
      v98 = (*v97)--;
LABEL_308:
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v96);
    sub_21E94B4((void **)&v137, "commands.tp.success.coordinates");
    j_CommandOutputParameter::CommandOutputParameter((int)&v130, &v182);
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v131, *(float *)&v179);
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v132, *(float *)&v180);
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v133, *(float *)&v181);
    v134 = 0;
    v135 = 0;
    v136 = 0;
    v134 = (char *)j_operator new(0x20u);
    v136 = v134 + 32;
    v135 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v130,
                     (int)&v134,
                     (int)v134);
    j_CommandOutput::success(v72, &v137, (unsigned __int64 *)&v134);
    v100 = (int)v135;
    v99 = v134;
    if ( v134 != v135 )
        v103 = (int *)(*(_DWORD *)v99 - 12);
        if ( v103 != &dword_28898C0 )
          v101 = (unsigned int *)(*(_DWORD *)v99 - 4);
              v102 = __ldrex(v101);
            while ( __strex(v102 - 1, v101) );
            v102 = (*v101)--;
          if ( v102 <= 0 )
            j_j_j_j__ZdlPv_9(v103);
        v99 += 8;
      while ( v99 != (char *)v100 );
      v99 = v134;
    if ( v99 )
      j_operator delete(v99);
    v104 = (void *)(v133 - 12);
    if ( (int *)(v133 - 12) != &dword_28898C0 )
      v120 = (unsigned int *)(v133 - 4);
          v121 = __ldrex(v120);
        while ( __strex(v121 - 1, v120) );
        v121 = (*v120)--;
      if ( v121 <= 0 )
        j_j_j_j__ZdlPv_9(v104);
    v105 = (void *)(v132 - 12);
    if ( (int *)(v132 - 12) != &dword_28898C0 )
      v122 = (unsigned int *)(v132 - 4);
          v123 = __ldrex(v122);
        while ( __strex(v123 - 1, v122) );
        v123 = (*v122)--;
      if ( v123 <= 0 )
        j_j_j_j__ZdlPv_9(v105);
    v106 = (void *)(v131 - 12);
    if ( (int *)(v131 - 12) != &dword_28898C0 )
      v124 = (unsigned int *)(v131 - 4);
          v125 = __ldrex(v124);
        while ( __strex(v125 - 1, v124) );
        v125 = (*v124)--;
      if ( v125 <= 0 )
        j_j_j_j__ZdlPv_9(v106);
    v107 = (void *)(v130 - 12);
    if ( (int *)(v130 - 12) != &dword_28898C0 )
      v126 = (unsigned int *)(v130 - 4);
          v127 = __ldrex(v126);
        while ( __strex(v127 - 1, v126) );
        v127 = (*v126)--;
      if ( v127 <= 0 )
        j_j_j_j__ZdlPv_9(v107);
    v96 = (void *)(v137 - 12);
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v137 - 4);
      goto LABEL_307;
LABEL_248:
  v108 = v178 - 12;
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v178 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
LABEL_249:
  v109 = v183;
  if ( v183 )
    v110 = (unsigned int *)(v183 + 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 == 1 )
      v112 = (unsigned int *)(v109 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v109 + 8))(v109);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v109 + 12))(v109);
}


void __fastcall TeleportCommand::~TeleportCommand(TeleportCommand *this)
{
  TeleportCommand::~TeleportCommand(this);
}


int __fastcall TeleportCommand::teleport(int a1, int a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  float *v20; // r1@2
  void (__fastcall *v22)(Entity *, float *); // r2@2
  mce::Math *v24; // r0@3
  float v25; // r1@3
  int v26; // r6@13
  _DWORD *v27; // r5@13
  int v28; // r12@13
  int v29; // r2@13
  int v30; // r3@13
  int v31; // r0@13
  void *v32; // r4@13
  int v33; // r0@14
  int result; // r0@17
  int v35; // r5@19
  int v36; // r1@19
  int v37; // r2@19
  int v38; // r1@19
  Level *v39; // r0@22
  int v40; // r0@22
  void **v41; // [sp+0h] [bp-B0h]@19
  signed int v42; // [sp+4h] [bp-ACh]@19
  signed int v43; // [sp+8h] [bp-A8h]@19
  char v44; // [sp+Ch] [bp-A4h]@19
  int v45; // [sp+10h] [bp-A0h]@19
  int v46; // [sp+18h] [bp-98h]@19
  int v47; // [sp+1Ch] [bp-94h]@19
  int v48; // [sp+20h] [bp-90h]@19
  __int64 v49; // [sp+24h] [bp-8Ch]@19
  int v50; // [sp+2Ch] [bp-84h]@19
  char v51; // [sp+30h] [bp-80h]@19
  char v52; // [sp+31h] [bp-7Fh]@19
  int v53; // [sp+38h] [bp-78h]@20
  int v54; // [sp+3Ch] [bp-74h]@21
  void *v55; // [sp+4Ch] [bp-64h]@13
  float v56; // [sp+50h] [bp-60h]@3
  mce::Math *v57; // [sp+54h] [bp-5Ch]@3
  float v58; // [sp+58h] [bp-58h]@3
  float v59; // [sp+5Ch] [bp-54h]@3
  float v60; // [sp+60h] [bp-50h]@2
  __int64 v61; // [sp+68h] [bp-48h]@1
  int v62; // [sp+70h] [bp-40h]@1

  v6 = a1;
  _R6 = a5;
  _R4 = (Entity *)a2;
  v61 = a3;
  v62 = a4;
  if ( a5 )
  {
    _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 52))(a2);
    __asm
    {
      VLDR            S0, [R6]
      VLDR            S4, [R0]
      VLDR            S2, [R6,#8]
      VLDR            S6, [R0,#8]
      VSUB.F32        S18, S0, S4
      VLDR            S16, [R6,#4]
      VSUB.F32        S20, S2, S6
      VLDR            S22, [R4,#0x10C]
      VCVT.F64.F32    D0, S18
      VCVT.F64.F32    D1, S20
      VMOV            R0, R1, D0
      VMOV            R2, R3, D1
    }
    _R0 = j_atan2(_R0, _R2);
    __asm { VSUB.F32        S0, S16, S22 }
    _R5 = LODWORD(_R0);
      VMUL.F32        S2, S18, S18
      VMUL.F32        S6, S20, S20
      VMUL.F32        S4, S0, S0
      VCVT.F64.F32    D0, S0
      VADD.F32        S2, S4, S2
      VADD.F32        S2, S2, S6
      VSQRT.F32       S2, S2
      VCVT.F64.F32    D1, S2
    _R0 = COERCE_UNSIGNED_INT64(j_atan2(_R0, _R2));
      VMOV            D1, R0, R1
      VMOV            D2, R5, R6
    v20 = &v60;
    _R2 = &mce::Math::RADDEG;
    __asm { VLDR            S0, [R2] }
    v22 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 72);
      VMUL.F64        D1, D1, D0
      VMUL.F64        D0, D0, D2
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VNEG.F32        S2, S2
      VNEG.F32        S0, S0
      VSTR            S2, [SP,#0xB0+var_50]
      VSTR            S0, [SP,#0xB0+var_4C]
  }
  else
    j_Entity::getRotation((Entity *)&v58, a2);
    _R6 = COERCE_FLOAT(j_RelativeFloat::getValue((RelativeFloat *)(v6 + 348), v58));
    v24 = (mce::Math *)j_RelativeFloat::getValue((RelativeFloat *)(v6 + 340), v59);
    v56 = _R6;
    v57 = v24;
    v25 = *(float *)(v6 + 4);
    if ( SLODWORD(v25) >= 2 )
      __asm
      {
        VMOV            S0, R6
        VLDR            S2, =-90.0
        VLDR            S4, =90.0
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S4
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S2, S0 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S2, S4 }
      __asm { VSTR            S2, [SP,#0xB0+var_60] }
      v57 = (mce::Math *)j_mce::Math::wrapDegrees(v24, v25);
    v20 = &v56;
  v22(_R4, v20);
  if ( a6 == 3
    || (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 524))(_R4) == a6
    || (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4) != 319 )
    (*(void (__fastcall **)(Entity *, __int64 *, signed int, signed int))(*(_DWORD *)_R4 + 104))(_R4, &v61, 3, 1);
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 488))(_R4);
    if ( result == 319 )
      v35 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      v42 = 2;
      v43 = 1;
      v44 = 0;
      v41 = &off_26DA5F8;
      j_Entity::getRuntimeID((Entity *)&v45, (int)_R4);
      v36 = *(_DWORD *)(v35 + 4);
      v37 = *(_DWORD *)(v35 + 8);
      v46 = *(_DWORD *)v35;
      v47 = v36;
      v48 = v37;
      v49 = *((_QWORD *)_R4 + 15);
      v50 = *((_DWORD *)_R4 + 855);
      v51 = 2;
      v52 = *((_BYTE *)_R4 + 216);
      v38 = *((_DWORD *)_R4 + 128);
      if ( v38 )
        j_Entity::getRuntimeID((Entity *)&v53, v38);
      else
        v53 = 0;
        v54 = 0;
      v39 = (Level *)j_Entity::getLevel(_R4);
      v40 = j_Level::getPacketSender(v39);
      result = (*(int (**)(void))(*(_DWORD *)v40 + 8))();
      VLDR            S0, [SP,#0xB0+var_48+4]
      VLDR            S2, [R4,#0x13C]
      VADD.F32        S0, S0, S2
      VSTR            S0, [SP,#0xB0+var_48+4]
    v26 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 524))(_R4);
    v27 = j_operator new(0x20u);
    *v27 = 0;
    v27[1] = v26;
    v27[2] = a6;
    v28 = (int)(v27 + 3);
    v29 = HIDWORD(v61);
    v30 = v62;
    *(_DWORD *)v28 = v61;
    *(_DWORD *)(v28 + 4) = v29;
    *(_DWORD *)(v28 + 8) = v30;
    *((_BYTE *)v27 + 24) = 0;
    *((_BYTE *)v27 + 25) = 0;
    v27[7] = 0;
    v31 = j_Entity::getLevel(_R4);
    v55 = v27;
    j_Level::requestPlayerChangeDimension(v31, (unsigned int)_R4, (int *)&v55);
    v32 = v55;
    if ( v55 )
      v33 = *((_DWORD *)v55 + 7);
      if ( v33 )
        (*(void (**)(void))(*(_DWORD *)v33 + 4))();
      j_operator delete(v32);
    result = 0;
    v55 = 0;
  return result;
}


int __fastcall TeleportCommand::~TeleportCommand(TeleportCommand *this)
{
  TeleportCommand *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A214;
  v2 = (TeleportCommand *)((char *)this + 20);
  j_CommandSelectorBase::~CommandSelectorBase((TeleportCommand *)((char *)this + 228));
  j_CommandSelectorBase::~CommandSelectorBase((TeleportCommand *)((char *)v1 + 116));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


signed int __fastcall TeleportCommand::getFacingDirection(TeleportCommand *this, const CommandOrigin *a2, CommandOutput *a3, Vec3 *a4)
{
  CommandOutput *v4; // r5@1
  Vec3 *v5; // r4@1
  int v7; // r0@8
  int v8; // r0@8
  int v9; // r4@8
  unsigned int *v10; // r1@9
  unsigned int v11; // r0@11
  int v12; // r4@13
  unsigned int *v13; // r1@14
  unsigned int v14; // r0@16
  void *v15; // r4@18
  void *v16; // r6@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  int *v19; // r0@28
  void *v20; // r0@33
  unsigned int *v21; // r1@35
  unsigned int v22; // r0@37
  unsigned int *v23; // r5@41
  unsigned int v24; // r0@43
  unsigned int *v25; // r5@57
  unsigned int v26; // r0@59
  unsigned int *v27; // r2@64
  signed int v28; // r1@66
  __int64 v29; // [sp+4h] [bp-4Ch]@18
  int v30; // [sp+Ch] [bp-44h]@18
  int v31; // [sp+14h] [bp-3Ch]@18
  __int64 *v32; // [sp+18h] [bp-38h]@6
  int v33; // [sp+1Ch] [bp-34h]@8
  int v34; // [sp+20h] [bp-30h]@4
  int v35; // [sp+24h] [bp-2Ch]@4
  int v36; // [sp+28h] [bp-28h]@4

  v4 = a3;
  v5 = a4;
  if ( *((_DWORD *)this + 89) )
    return 1;
  if ( *((_BYTE *)this + 361) )
  {
    j_CommandPosition::getPosition((CommandPosition *)&v34, (TeleportCommand *)((char *)this + 324), (int)a2);
    *(_DWORD *)v5 = v34;
    *((_DWORD *)v5 + 1) = v35;
    *((_DWORD *)v5 + 2) = v36;
    return 0;
  }
  j_CommandSelector<Entity>::results((int)&v32, (TeleportCommand *)((char *)this + 228), a2);
  if ( j_Command::checkHasTargets<Entity>(&v32, v4) )
    if ( j_CommandSelectorResults<Entity>::size(&v32) == 1 )
    {
      v7 = j_CommandSelectorResults<Entity>::get(&v32);
      v8 = (*(int (**)(void))(*(_DWORD *)v7 + 52))();
      *(_DWORD *)v5 = *(_DWORD *)v8;
      *((_DWORD *)v5 + 1) = *(_DWORD *)(v8 + 4);
      *((_DWORD *)v5 + 2) = *(_DWORD *)(v8 + 8);
      *((_DWORD *)v5 + 1) = *(_DWORD *)(j_CommandSelectorResults<Entity>::get(&v32) + 268);
      v9 = v33;
      if ( v33 )
      {
        v10 = (unsigned int *)(v33 + 4);
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
          v25 = (unsigned int *)(v9 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          if ( &pthread_create )
          {
            __dmb();
            do
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
          }
          else
            v26 = (*v25)--;
          if ( v26 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
      }
      return 0;
    }
    sub_21E94B4((void **)&v31, "commands.generic.tooManyTargets");
    v29 = 0LL;
    v30 = 0;
    j_CommandOutput::error(v4, &v31, (unsigned __int64 *)&v29);
    v16 = (void *)HIDWORD(v29);
    v15 = (void *)v29;
    if ( (_DWORD)v29 != HIDWORD(v29) )
      do
        v19 = (int *)(*(_DWORD *)v15 - 12);
        if ( v19 != &dword_28898C0 )
          v17 = (unsigned int *)(*(_DWORD *)v15 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v15 = (char *)v15 + 8;
      while ( v15 != v16 );
      v15 = (void *)v29;
    if ( v15 )
      j_operator delete(v15);
    v20 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v12 = v33;
    if ( v33 )
      v21 = (unsigned int *)(v33 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          goto LABEL_52;
        goto LABEL_51;
  else
      v13 = (unsigned int *)(v33 + 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        v14 = (*v13)--;
      if ( v14 == 1 )
LABEL_52:
          if ( v24 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
          return 2;
LABEL_51:
        v24 = (*v23)--;
        goto LABEL_52;
  return 2;
}


void __fastcall TeleportCommand::setup(TeleportCommand *this, CommandRegistry *a2)
{
  TeleportCommand *v2; // r8@1
  void *v3; // r5@1
  int v4; // r6@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r0@18
  __int64 v11; // r2@19
  void *v12; // r0@19
  void *v13; // r0@20
  char v14; // r0@21
  char v15; // r0@24
  char v16; // r0@27
  int v17; // r0@30
  __int64 v18; // r2@30
  void *v19; // r0@30
  void *v20; // r0@31
  void *v21; // r0@32
  char v22; // r0@33
  char v23; // r0@36
  char v24; // r0@39
  int v25; // r0@42
  __int64 v26; // r2@42
  void *v27; // r0@42
  void *v28; // r0@43
  void *v29; // r0@44
  char v30; // r0@45
  char v31; // r0@48
  char v32; // r0@51
  int v33; // r0@54
  __int64 v34; // r2@54
  void *v35; // r0@54
  void *v36; // r0@55
  void *v37; // r0@56
  char v38; // r0@57
  char v39; // r0@60
  char v40; // r0@63
  char v41; // r0@66
  int v42; // r0@69
  __int64 v43; // r2@69
  void *v44; // r0@69
  void *v45; // r0@70
  void *v46; // r0@71
  void *v47; // r0@72
  char v48; // r0@73
  char v49; // r0@76
  char v50; // r0@79
  char v51; // r0@82
  int v52; // r0@85
  __int64 v53; // r2@85
  void *v54; // r0@85
  void *v55; // r0@86
  void *v56; // r0@87
  void *v57; // r0@88
  char v58; // r0@89
  char v59; // r0@92
  char v60; // r0@95
  char v61; // r0@98
  int v62; // r0@101
  __int64 v63; // r2@101
  void *v64; // r0@101
  void *v65; // r0@102
  void *v66; // r0@103
  void *v67; // r0@104
  char v68; // r0@105
  int v69; // r0@108
  __int64 v70; // r2@108
  void *v71; // r0@108
  char v72; // r0@109
  char v73; // r0@112
  int v74; // r0@115
  void *v75; // r0@115
  void *v76; // r0@116
  unsigned int *v77; // r2@118
  signed int v78; // r1@120
  unsigned int *v79; // r2@122
  signed int v80; // r1@124
  unsigned int *v81; // r2@126
  signed int v82; // r1@128
  int v83; // r2@130
  signed int v84; // r1@132
  int v85; // r2@134
  signed int v86; // r1@136
  int v87; // r2@138
  signed int v88; // r1@140
  int v89; // r2@142
  signed int v90; // r1@144
  int v91; // r2@146
  signed int v92; // r1@148
  int v93; // r2@150
  signed int v94; // r1@152
  int v95; // r2@154
  signed int v96; // r1@156
  int v97; // r2@158
  signed int v98; // r1@160
  int v99; // r2@162
  signed int v100; // r1@164
  int v101; // r2@166
  signed int v102; // r1@168
  int v103; // r2@170
  signed int v104; // r1@172
  int v105; // r2@174
  signed int v106; // r1@176
  int v107; // r2@178
  signed int v108; // r1@180
  int v109; // r2@182
  signed int v110; // r1@184
  int v111; // r2@186
  signed int v112; // r1@188
  int v113; // r2@190
  signed int v114; // r1@192
  int v115; // r2@194
  signed int v116; // r1@196
  int v117; // r2@198
  signed int v118; // r1@200
  int v119; // r2@202
  signed int v120; // r1@204
  int v121; // r2@206
  signed int v122; // r1@208
  int v123; // r2@210
  signed int v124; // r1@212
  int v125; // r2@214
  signed int v126; // r1@216
  int v127; // r2@218
  signed int v128; // r1@220
  int v129; // r2@222
  signed int v130; // r1@224
  unsigned int *v131; // r2@226
  signed int v132; // r1@228
  unsigned int *v133; // r2@230
  signed int v134; // r1@232
  char v135; // [sp+1Ch] [bp-49Ch]@115
  int v136; // [sp+28h] [bp-490h]@115
  char v137; // [sp+44h] [bp-474h]@112
  int v138; // [sp+50h] [bp-468h]@116
  __int64 v139; // [sp+6Ch] [bp-44Ch]@109
  char v140; // [sp+74h] [bp-444h]@108
  int v141; // [sp+80h] [bp-438h]@108
  __int64 v142; // [sp+9Ch] [bp-41Ch]@105
  char v143; // [sp+A4h] [bp-414h]@101
  int v144; // [sp+B0h] [bp-408h]@101
  char v145; // [sp+CCh] [bp-3ECh]@98
  int v146; // [sp+D8h] [bp-3E0h]@102
  char v147; // [sp+F4h] [bp-3C4h]@95
  int v148; // [sp+100h] [bp-3B8h]@103
  char v149; // [sp+11Ch] [bp-39Ch]@92
  int v150; // [sp+128h] [bp-390h]@104
  __int64 v151; // [sp+144h] [bp-374h]@89
  char v152; // [sp+14Ch] [bp-36Ch]@85
  int v153; // [sp+158h] [bp-360h]@85
  char v154; // [sp+174h] [bp-344h]@82
  int v155; // [sp+180h] [bp-338h]@86
  char v156; // [sp+19Ch] [bp-31Ch]@79
  int v157; // [sp+1A8h] [bp-310h]@87
  char v158; // [sp+1C4h] [bp-2F4h]@76
  int v159; // [sp+1D0h] [bp-2E8h]@88
  __int64 v160; // [sp+1ECh] [bp-2CCh]@73
  char v161; // [sp+1F4h] [bp-2C4h]@69
  int v162; // [sp+200h] [bp-2B8h]@69
  char v163; // [sp+21Ch] [bp-29Ch]@66
  int v164; // [sp+228h] [bp-290h]@70
  char v165; // [sp+244h] [bp-274h]@63
  int v166; // [sp+250h] [bp-268h]@71
  char v167; // [sp+26Ch] [bp-24Ch]@60
  int v168; // [sp+278h] [bp-240h]@72
  __int64 v169; // [sp+294h] [bp-224h]@57
  char v170; // [sp+29Ch] [bp-21Ch]@54
  int v171; // [sp+2A8h] [bp-210h]@54
  char v172; // [sp+2C4h] [bp-1F4h]@51
  int v173; // [sp+2D0h] [bp-1E8h]@55
  char v174; // [sp+2ECh] [bp-1CCh]@48
  int v175; // [sp+2F8h] [bp-1C0h]@56
  __int64 v176; // [sp+314h] [bp-1A4h]@45
  char v177; // [sp+31Ch] [bp-19Ch]@42
  int v178; // [sp+328h] [bp-190h]@42
  char v179; // [sp+344h] [bp-174h]@39
  int v180; // [sp+350h] [bp-168h]@43
  char v181; // [sp+36Ch] [bp-14Ch]@36
  int v182; // [sp+378h] [bp-140h]@44
  __int64 v183; // [sp+394h] [bp-124h]@33
  char v184; // [sp+39Ch] [bp-11Ch]@30
  int v185; // [sp+3A8h] [bp-110h]@30
  char v186; // [sp+3C4h] [bp-F4h]@27
  int v187; // [sp+3D0h] [bp-E8h]@31
  char v188; // [sp+3ECh] [bp-CCh]@24
  int v189; // [sp+3F8h] [bp-C0h]@32
  __int64 v190; // [sp+414h] [bp-A4h]@21
  int v191; // [sp+420h] [bp-98h]@19
  int v192; // [sp+428h] [bp-90h]@19
  int v193; // [sp+430h] [bp-88h]@18
  int v194; // [sp+434h] [bp-84h]@1
  int v195; // [sp+438h] [bp-80h]@1
  void *v196; // [sp+43Ch] [bp-7Ch]@1
  int v197; // [sp+440h] [bp-78h]@1
  char *v198; // [sp+444h] [bp-74h]@1
  int v199; // [sp+44Ch] [bp-6Ch]@1
  __int16 v200; // [sp+454h] [bp-64h]@27
  __int16 v201; // [sp+458h] [bp-60h]@30
  __int16 v202; // [sp+45Ch] [bp-5Ch]@39
  __int16 v203; // [sp+460h] [bp-58h]@42
  __int16 v204; // [sp+464h] [bp-54h]@51
  __int16 v205; // [sp+468h] [bp-50h]@54
  __int16 v206; // [sp+46Ch] [bp-4Ch]@63
  __int16 v207; // [sp+470h] [bp-48h]@66
  __int16 v208; // [sp+474h] [bp-44h]@69
  __int16 v209; // [sp+478h] [bp-40h]@79
  __int16 v210; // [sp+47Ch] [bp-3Ch]@82
  __int16 v211; // [sp+480h] [bp-38h]@85
  __int16 v212; // [sp+484h] [bp-34h]@95
  __int16 v213; // [sp+488h] [bp-30h]@98
  __int16 v214; // [sp+48Ch] [bp-2Ch]@101
  __int16 v215; // [sp+490h] [bp-28h]@24
  __int16 v216; // [sp+494h] [bp-24h]@115

  v2 = this;
  sub_21E94B4((void **)&v199, "TeleportFacing");
  sub_21E94B4((void **)&v194, "facing");
  v196 = 0;
  v197 = 0;
  v195 = 0;
  v198 = 0;
  v3 = j_operator new(8u);
  v196 = v3;
  v198 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,TeleportCommand::FacingResult> const*,std::pair<std::string,TeleportCommand::FacingResult>*>(
         (int)&v194,
         (int)&v196,
         (int)v3);
  v197 = v4;
  j_CommandRegistry::addEnumValues<TeleportCommand::FacingResult>((int)v2, (int)&v199, (unsigned __int64 *)&v196);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v196;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v194 - 12);
  if ( (int *)(v194 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v194 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
    else
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v199 - 12);
  if ( (int *)(v199 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v199 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v193, "teleport");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v193, "commands.tp.description", 1, 0, 0);
  v10 = (void *)(v193 - 12);
  if ( (int *)(v193 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v193 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v192, "teleport");
  sub_21E94B4((void **)&v191, "tp");
  j_CommandRegistry::registerAlias((int)v2, (const void **)&v192, &v191);
  v12 = (void *)(v191 - 12);
  if ( (int *)(v191 - 12) != &dword_28898C0 )
    v83 = v191 - 4;
        v84 = __ldrex((unsigned int *)v11);
        HIDWORD(v11) = v84 - 1;
      while ( __strex(v84 - 1, (unsigned int *)v11) );
      v84 = *(_DWORD *)v11;
      HIDWORD(v11) = *(_DWORD *)v11 - 1;
      *(_DWORD *)v11 = HIDWORD(v11);
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v192 - 12);
  if ( (int *)(v192 - 12) != &dword_28898C0 )
    v85 = v192 - 4;
        v86 = __ldrex((unsigned int *)v11);
        HIDWORD(v11) = v86 - 1;
      while ( __strex(v86 - 1, (unsigned int *)v11) );
      v86 = *(_DWORD *)v11;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  LODWORD(v11) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v190, 1, v11);
  v14 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  __dmb();
  if ( !(v14 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v215 = type_id<CommandRegistry,CommandPosition>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v188,
    &v215,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "destination",
    0,
    212,
    360);
  v15 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  if ( !(v15 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id) )
    type_id<CommandRegistry,RelativeFloat>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id);
  v200 = type_id<CommandRegistry,RelativeFloat>(void)::id;
    (int)&v186,
    &v200,
    (unsigned int)CommandRegistry::parse<RelativeFloat>,
    "yRot",
    340,
    1,
    -1);
  v16 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  if ( !(v16 & 1)
  v201 = type_id<CommandRegistry,RelativeFloat>(void)::id;
  v17 = j_CommandParameterData::CommandParameterData(
          (int)&v184,
          &v201,
          (unsigned int)CommandRegistry::parse<RelativeFloat>,
          "xRot",
          0,
          348,
          1,
          -1);
  j_CommandRegistry::registerOverload<TeleportCommand,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "teleport",
    v190,
    v17);
  v19 = (void *)(v185 - 12);
  if ( (int *)(v185 - 12) != &dword_28898C0 )
    v87 = v185 - 4;
        v88 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v88 - 1;
      while ( __strex(v88 - 1, (unsigned int *)v18) );
      v88 = *(_DWORD *)v18;
      HIDWORD(v18) = *(_DWORD *)v18 - 1;
      *(_DWORD *)v18 = HIDWORD(v18);
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v187 - 12);
  if ( (int *)(v187 - 12) != &dword_28898C0 )
    v89 = v187 - 4;
        v90 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v90 - 1;
      while ( __strex(v90 - 1, (unsigned int *)v18) );
      v90 = *(_DWORD *)v18;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v91 = v189 - 4;
        v92 = __ldrex((unsigned int *)v18);
        HIDWORD(v18) = v92 - 1;
      while ( __strex(v92 - 1, (unsigned int *)v18) );
      v92 = *(_DWORD *)v18;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  LODWORD(v18) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v183, 1, v18);
  v22 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v22 & 1)
    (int)&v181,
  v23 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id[0];
  if ( !(v23 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id) )
    type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id);
  v202 = type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id;
    (int)&v179,
    &v202,
    (unsigned int)CommandRegistry::parse<TeleportCommand::FacingResult>,
    "facing",
    356,
  v24 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v24 & 1)
  v203 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v25 = j_CommandParameterData::CommandParameterData(
          (int)&v177,
          &v203,
          (unsigned int)CommandRegistry::parse<CommandPosition>,
          "lookAtPosition",
          324,
          361);
    v183,
    v25);
  v27 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v93 = v178 - 4;
        v94 = __ldrex((unsigned int *)v26);
        HIDWORD(v26) = v94 - 1;
      while ( __strex(v94 - 1, (unsigned int *)v26) );
      v94 = *(_DWORD *)v26;
      HIDWORD(v26) = *(_DWORD *)v26 - 1;
      *(_DWORD *)v26 = HIDWORD(v26);
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v180 - 12);
  if ( (int *)(v180 - 12) != &dword_28898C0 )
    v95 = v180 - 4;
        v96 = __ldrex((unsigned int *)v26);
        HIDWORD(v26) = v96 - 1;
      while ( __strex(v96 - 1, (unsigned int *)v26) );
      v96 = *(_DWORD *)v26;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v182 - 12);
  if ( (int *)(v182 - 12) != &dword_28898C0 )
    v97 = v182 - 4;
        v98 = __ldrex((unsigned int *)v26);
        HIDWORD(v26) = v98 - 1;
      while ( __strex(v98 - 1, (unsigned int *)v26) );
      v98 = *(_DWORD *)v26;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  LODWORD(v26) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v176, 1, v26);
  v30 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v30 & 1)
    (int)&v174,
  v31 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id[0];
  if ( !(v31 & 1)
  v204 = type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id;
    (int)&v172,
    &v204,
  v32 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v32 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v205 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  v33 = j_CommandParameterData::CommandParameterData(
          (int)&v170,
          &v205,
          (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
          "lookAtEntity",
          228,
    v176,
    v33);
  v35 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v99 = v171 - 4;
        v100 = __ldrex((unsigned int *)v34);
        HIDWORD(v34) = v100 - 1;
      while ( __strex(v100 - 1, (unsigned int *)v34) );
      v100 = *(_DWORD *)v34;
      HIDWORD(v34) = *(_DWORD *)v34 - 1;
      *(_DWORD *)v34 = HIDWORD(v34);
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v101 = v173 - 4;
        v102 = __ldrex((unsigned int *)v34);
        HIDWORD(v34) = v102 - 1;
      while ( __strex(v102 - 1, (unsigned int *)v34) );
      v102 = *(_DWORD *)v34;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v103 = v175 - 4;
        v104 = __ldrex((unsigned int *)v34);
        HIDWORD(v34) = v104 - 1;
      while ( __strex(v104 - 1, (unsigned int *)v34) );
      v104 = *(_DWORD *)v34;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  LODWORD(v34) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v169, 1, v34);
  v38 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v38 & 1)
  v215 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
    (int)&v167,
    (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
    "victim",
    20,
  v39 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v39 & 1)
  v206 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v165,
    &v206,
  v40 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  if ( !(v40 & 1)
  v207 = type_id<CommandRegistry,RelativeFloat>(void)::id;
    (int)&v163,
    &v207,
  v41 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  if ( !(v41 & 1)
  v208 = type_id<CommandRegistry,RelativeFloat>(void)::id;
  v42 = j_CommandParameterData::CommandParameterData(
          (int)&v161,
          &v208,
  j_CommandRegistry::registerOverload<TeleportCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    v169,
    v42);
  v44 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v105 = v162 - 4;
        v106 = __ldrex((unsigned int *)v43);
        HIDWORD(v43) = v106 - 1;
      while ( __strex(v106 - 1, (unsigned int *)v43) );
      v106 = *(_DWORD *)v43;
      HIDWORD(v43) = *(_DWORD *)v43 - 1;
      *(_DWORD *)v43 = HIDWORD(v43);
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v107 = v164 - 4;
        v108 = __ldrex((unsigned int *)v43);
        HIDWORD(v43) = v108 - 1;
      while ( __strex(v108 - 1, (unsigned int *)v43) );
      v108 = *(_DWORD *)v43;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  v46 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v109 = v166 - 4;
        v110 = __ldrex((unsigned int *)v43);
        HIDWORD(v43) = v110 - 1;
      while ( __strex(v110 - 1, (unsigned int *)v43) );
      v110 = *(_DWORD *)v43;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v47 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v111 = v168 - 4;
        v112 = __ldrex((unsigned int *)v43);
        HIDWORD(v43) = v112 - 1;
      while ( __strex(v112 - 1, (unsigned int *)v43) );
      v112 = *(_DWORD *)v43;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  LODWORD(v43) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v160, 1, v43);
  v48 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v48 & 1)
    (int)&v158,
  v49 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v49 & 1)
  v209 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v156,
    &v209,
  v50 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id[0];
  if ( !(v50 & 1)
  v210 = type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id;
    (int)&v154,
    &v210,
  v51 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v51 & 1)
  v211 = type_id<CommandRegistry,CommandPosition>(void)::id;
  v52 = j_CommandParameterData::CommandParameterData(
          (int)&v152,
          &v211,
    v160,
    v52);
  v54 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v113 = v153 - 4;
        v114 = __ldrex((unsigned int *)v53);
        HIDWORD(v53) = v114 - 1;
      while ( __strex(v114 - 1, (unsigned int *)v53) );
      v114 = *(_DWORD *)v53;
      HIDWORD(v53) = *(_DWORD *)v53 - 1;
      *(_DWORD *)v53 = HIDWORD(v53);
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v115 = v155 - 4;
        v116 = __ldrex((unsigned int *)v53);
        HIDWORD(v53) = v116 - 1;
      while ( __strex(v116 - 1, (unsigned int *)v53) );
      v116 = *(_DWORD *)v53;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v117 = v157 - 4;
        v118 = __ldrex((unsigned int *)v53);
        HIDWORD(v53) = v118 - 1;
      while ( __strex(v118 - 1, (unsigned int *)v53) );
      v118 = *(_DWORD *)v53;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v119 = v159 - 4;
        v120 = __ldrex((unsigned int *)v53);
        HIDWORD(v53) = v120 - 1;
      while ( __strex(v120 - 1, (unsigned int *)v53) );
      v120 = *(_DWORD *)v53;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  LODWORD(v53) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v151, 1, v53);
  v58 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v58 & 1)
    (int)&v149,
  v59 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v59 & 1)
  v212 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v147,
    &v212,
  v60 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id[0];
  if ( !(v60 & 1)
  v213 = type_id<CommandRegistry,TeleportCommand::FacingResult>(void)::id;
    (int)&v145,
    &v213,
  v61 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v61 & 1)
  v214 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  v62 = j_CommandParameterData::CommandParameterData(
          (int)&v143,
          &v214,
    v151,
    v62);
  v64 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v121 = v144 - 4;
        v122 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v122 - 1;
      while ( __strex(v122 - 1, (unsigned int *)v63) );
      v122 = *(_DWORD *)v63;
      HIDWORD(v63) = *(_DWORD *)v63 - 1;
      *(_DWORD *)v63 = HIDWORD(v63);
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v123 = v146 - 4;
        v124 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v124 - 1;
      while ( __strex(v124 - 1, (unsigned int *)v63) );
      v124 = *(_DWORD *)v63;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v125 = v148 - 4;
        v126 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v126 - 1;
      while ( __strex(v126 - 1, (unsigned int *)v63) );
      v126 = *(_DWORD *)v63;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v127 = v150 - 4;
        v128 = __ldrex((unsigned int *)v63);
        HIDWORD(v63) = v128 - 1;
      while ( __strex(v128 - 1, (unsigned int *)v63) );
      v128 = *(_DWORD *)v63;
    if ( v128 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  LODWORD(v63) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v142, 1, v63);
  v68 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v68 & 1)
  v69 = j_CommandParameterData::CommandParameterData(
          (int)&v140,
          &v215,
          "destination",
          116,
  j_CommandRegistry::registerOverload<TeleportCommand,CommandParameterData>((int)v2, "teleport", v142, v69);
  v71 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v129 = v141 - 4;
        v130 = __ldrex((unsigned int *)v70);
        HIDWORD(v70) = v130 - 1;
      while ( __strex(v130 - 1, (unsigned int *)v70) );
      v130 = *(_DWORD *)v70;
      HIDWORD(v70) = *(_DWORD *)v70 - 1;
      *(_DWORD *)v70 = HIDWORD(v70);
    if ( v130 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  LODWORD(v70) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v139, 1, v70);
  v72 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v72 & 1)
    (int)&v137,
  v73 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v73 & 1)
  v216 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  v74 = j_CommandParameterData::CommandParameterData(
          (int)&v135,
          &v216,
  j_CommandRegistry::registerOverload<TeleportCommand,CommandParameterData,CommandParameterData>(
    v139,
    v74);
  v75 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v131 = (unsigned int *)(v136 - 4);
        v132 = __ldrex(v131);
      while ( __strex(v132 - 1, v131) );
      v132 = (*v131)--;
    if ( v132 <= 0 )
      j_j_j_j__ZdlPv_9(v75);
  v76 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v133 = (unsigned int *)(v138 - 4);
        v134 = __ldrex(v133);
      while ( __strex(v134 - 1, v133) );
      v134 = (*v133)--;
    if ( v134 <= 0 )
      j_j_j_j__ZdlPv_9(v76);
}
