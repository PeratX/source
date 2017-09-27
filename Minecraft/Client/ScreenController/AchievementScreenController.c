

ScreenController *__fastcall AchievementScreenController::~AchievementScreenController(AchievementScreenController *this)
{
  AchievementScreenController *v1; // r4@1
  FormattedAchievementData *v2; // r0@1
  FormattedAchievementData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E0B88;
  FormattedPlayerStats::~FormattedPlayerStats((AchievementScreenController *)((char *)this + 436));
  v3 = (FormattedAchievementData *)(*((_QWORD *)v1 + 53) >> 32);
  v2 = (FormattedAchievementData *)*((_QWORD *)v1 + 53);
  if ( v2 != v3 )
  {
    do
      v2 = (FormattedAchievementData *)((char *)FormattedAchievementData::~FormattedAchievementData(v2) + 32);
    while ( v3 != v2 );
    v2 = (FormattedAchievementData *)*((_DWORD *)v1 + 106);
  }
  if ( v2 )
    operator delete((void *)v2);
  return j_j_j__ZN25MinecraftScreenControllerD2Ev(v1);
}


void __fastcall AchievementScreenController::_registerBindings(AchievementScreenController *this)
{
  AchievementScreenController::_registerBindings(this);
}


_DWORD *__fastcall AchievementScreenController::_getAchievementData(AchievementScreenController *this)
{
  const void **v2; // r6@1
  __int64 v3; // kr00_8@1
  FormattedAchievementData *v4; // r0@2
  Social::XboxLiveUserManager *v5; // r11@4
  char *v6; // r7@4
  int v7; // r0@5
  char *v8; // r4@5
  int v9; // r0@5
  void *v10; // r0@5
  unsigned int v11; // r3@7
  char *v12; // r0@9
  int v13; // r0@10
  char *v14; // r4@10
  int v15; // r0@10
  void *v16; // r0@10
  int v17; // r6@11
  char *v18; // r0@12
  void *v19; // r0@12
  int v20; // r4@13
  char *v21; // r6@13
  char *v22; // r1@14
  unsigned int *v23; // r2@15
  signed int v24; // r7@17
  char *v25; // r7@21
  int *v26; // r0@22
  unsigned __int64 *v27; // r7@25
  void *v28; // r0@27
  void *v29; // r0@28
  unsigned int *v30; // r2@29
  unsigned __int64 *v31; // r6@30
  signed int v32; // r1@31
  char *v33; // r0@33
  void *v34; // r0@33
  int v35; // r4@34
  char *v36; // r6@34
  char *v37; // r1@35
  unsigned int *v38; // r2@36
  signed int v39; // r7@38
  char *v40; // r7@42
  int *v41; // r0@43
  void *v42; // r0@48
  unsigned int v49; // r3@54
  char *v50; // r0@56
  char *v52; // r0@57
  void *v53; // r0@57
  int v54; // r4@58
  unsigned int *v55; // r2@60
  signed int v56; // r1@62
  unsigned int *v57; // r2@64
  signed int v58; // r1@66
  unsigned int *v59; // r2@68
  signed int v60; // r1@70
  unsigned int *v61; // r2@72
  signed int v62; // r1@74
  unsigned int *v63; // r2@76
  signed int v64; // r1@78
  unsigned int *v65; // r2@80
  signed int v66; // r1@82
  unsigned int *v67; // r2@84
  signed int v68; // r1@86
  unsigned int *v69; // r2@88
  signed int v70; // r1@90
  unsigned int *v71; // r2@100
  signed int v72; // r1@102
  char *v73; // r7@111
  unsigned int v74; // r0@111
  char *v75; // r7@112
  unsigned int v76; // r0@112
  void *v77; // r0@112
  void *v78; // r0@114
  char *v79; // r7@115
  unsigned int v80; // r0@115
  int v81; // r0@115
  char v82; // r0@115
  unsigned int v83; // r3@118
  char *v84; // r0@120
  void *v85; // r0@121
  int v86; // r1@123
  void *v87; // r0@125
  __int64 v88; // r0@126
  void *v89; // r0@130
  void **v90; // r0@131
  void *v91; // r0@131
  unsigned int *v93; // r2@133
  signed int v94; // r1@135
  unsigned int *v95; // r2@137
  signed int v96; // r1@139
  unsigned int *v97; // r2@161
  signed int v98; // r1@163
  unsigned int *v99; // r2@165
  signed int v100; // r1@167
  unsigned int *v101; // r2@169
  signed int v102; // r1@171
  unsigned int *v103; // r2@173
  signed int v104; // r1@175
  char *v105; // [sp+24h] [bp-19Ch]@12
  char *v106; // [sp+24h] [bp-19Ch]@33
  int i; // [sp+24h] [bp-19Ch]@58
  int v108; // [sp+38h] [bp-188h]@125
  unsigned int v109; // [sp+3Ch] [bp-184h]@125
  int v110; // [sp+40h] [bp-180h]@88
  int v111; // [sp+44h] [bp-17Ch]@122
  int v112; // [sp+48h] [bp-178h]@122
  int v113; // [sp+4Ch] [bp-174h]@84
  char *v114; // [sp+54h] [bp-16Ch]@80
  int v115; // [sp+58h] [bp-168h]@100
  void *v116; // [sp+5Ch] [bp-164h]@111
  void *v117; // [sp+60h] [bp-160h]@111
  void *v118; // [sp+64h] [bp-15Ch]@111
  void *v119; // [sp+68h] [bp-158h]@111
  char v120; // [sp+6Ch] [bp-154h]@117
  char v121; // [sp+6Dh] [bp-153h]@115
  void *v122; // [sp+70h] [bp-150h]@111
  void *v123; // [sp+74h] [bp-14Ch]@111
  int v124; // [sp+78h] [bp-148h]@122
  int v125; // [sp+7Ch] [bp-144h]@57
  char *v126; // [sp+84h] [bp-13Ch]@53
  int v127; // [sp+88h] [bp-138h]@33
  char *v128; // [sp+8Ch] [bp-134h]@33
  char *v129; // [sp+90h] [bp-130h]@33
  char *v130; // [sp+94h] [bp-12Ch]@33
  int v131; // [sp+9Ch] [bp-124h]@33
  int v132; // [sp+A0h] [bp-120h]@33
  int v133; // [sp+A4h] [bp-11Ch]@12
  char *v134; // [sp+A8h] [bp-118h]@12
  char *v135; // [sp+ACh] [bp-114h]@12
  char *v136; // [sp+B0h] [bp-110h]@12
  int v137; // [sp+B8h] [bp-108h]@12
  int v138; // [sp+BCh] [bp-104h]@12
  int v139; // [sp+C0h] [bp-100h]@10
  char *v140; // [sp+C8h] [bp-F8h]@6
  int v141; // [sp+CCh] [bp-F4h]@5
  int v142; // [sp+D4h] [bp-ECh]@4
  void **v143; // [sp+D8h] [bp-E8h]@4
  int v144; // [sp+DCh] [bp-E4h]@132
  void **v145; // [sp+E0h] [bp-E0h]@5
  void **v146; // [sp+E4h] [bp-DCh]@5
  int v147; // [sp+100h] [bp-C0h]@132
  char v148; // [sp+104h] [bp-BCh]@6
  int v149; // [sp+108h] [bp-B8h]@6
  int v150; // [sp+10Ch] [bp-B4h]@132
  char v151; // [sp+194h] [bp-2Ch]@14

  _R9 = this;
  v2 = (const void **)((char *)this + 436);
  sub_119CA68((const void **)this + 109, 0, *(_BYTE **)(*((_DWORD *)this + 109) - 12), 0);
  sub_119CA68((const void **)_R9 + 110, 0, *(_BYTE **)(*((_DWORD *)_R9 + 110) - 12), 0);
  sub_119CA68((const void **)_R9 + 111, 0, *(_BYTE **)(*((_DWORD *)_R9 + 111) - 12), 0);
  sub_119CA68((const void **)_R9 + 112, 0, *(_BYTE **)(*((_DWORD *)_R9 + 112) - 12), 0);
  v3 = *((_QWORD *)_R9 + 53);
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = (FormattedAchievementData *)*((_QWORD *)_R9 + 53);
    do
      v4 = (FormattedAchievementData *)((char *)FormattedAchievementData::~FormattedAchievementData(v4) + 32);
    while ( (FormattedAchievementData *)HIDWORD(v3) != v4 );
  }
  *((_DWORD *)_R9 + 107) = v3;
  sub_119CB58((int)&v143, 24);
  sub_119C884((void **)&v142, "gui.achievements.placeholder");
  v5 = MinecraftScreenModel::getAchievementData(*((MinecraftScreenModel **)_R9 + 95));
  v6 = PlayerAchievementData::getAchievementData(v5, 0);
  if ( *(_QWORD *)v6 >> 32 != (unsigned int)*(_QWORD *)v6 )
    *((_BYTE *)_R9 + 456) = 1;
    v7 = PlayerAchievementData::getCurrGamerScore(v5);
    v8 = (char *)sub_119C914((int)&v145, v7);
    sub_119C904(v8, (int)"/", 1);
    v9 = PlayerAchievementData::getMaxGamerScore(v5);
    sub_119C914((int)v8, v9);
    sub_119D48C(&v141, (int)&v146);
    sub_119C8A4(v2, (const void **)&v141);
    v10 = (void *)(v141 - 12);
    if ( (int *)(v141 - 12) != &dword_28898C0 )
    {
      v55 = (unsigned int *)(v141 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
      }
      else
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    sub_119C884((void **)&v140, (const char *)&unk_257BC67);
    sub_119CAD8((void **)&v149, v140, *((_BYTE **)v140 - 3));
    if ( v148 & 3 )
      v11 = *(_DWORD *)(v149 - 12);
    else
      v11 = 0;
    sub_119F00C((int)&v146, v149, 0, v11);
    v12 = v140 - 12;
    if ( (int *)(v140 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v140 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    v13 = PlayerAchievementData::getAchievementsUnlocked(v5);
    v14 = (char *)sub_119C914((int)&v145, v13);
    sub_119C904(v14, (int)"/", 1);
    v15 = PlayerAchievementData::getMaxAchievements(v5);
    sub_119C914((int)v14, v15);
    sub_119D48C(&v139, (int)&v146);
    sub_119C8A4((const void **)_R9 + 110, (const void **)&v139);
    v16 = (void *)(v139 - 12);
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v139 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = PlayerAchievementData::getTimePlayed(v5);
    if ( v17 == 1 )
      sub_119C884((void **)&v137, "achievementScreen.hour");
      Util::toString<int,(void *)0,(void *)0>((void **)&v133, 1);
      v134 = 0;
      v135 = 0;
      v136 = 0;
      v18 = (char *)operator new(4u);
      v134 = v18;
      v136 = v18 + 4;
      v135 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v133,
                       (int)&v134,
                       (int)v18);
      I18n::get(&v138, &v137, (unsigned __int64 *)&v134);
      sub_119C8A4((const void **)_R9 + 111, (const void **)&v138);
      v105 = v6;
      v19 = (void *)(v138 - 12);
      if ( (int *)(v138 - 12) != &dword_28898C0 )
        v97 = (unsigned int *)(v138 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v98 = __ldrex(v97);
          while ( __strex(v98 - 1, v97) );
        }
        else
          v98 = (*v97)--;
        if ( v98 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v20 = (int)v135;
      v21 = v134;
      if ( v134 != v135 )
        v22 = &v151;
          v26 = (int *)(*(_DWORD *)v21 - 12);
          if ( v26 != &dword_28898C0 )
          {
            v23 = (unsigned int *)(*(_DWORD *)v21 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            }
            else
              v24 = (*v23)--;
            if ( v24 <= 0 )
              v25 = v22;
              j_j_j_j_j__ZdlPv_9_1(v26);
              v22 = v25;
          }
          v21 += 4;
        while ( v21 != (char *)v20 );
        v21 = v134;
      v27 = (unsigned __int64 *)v105;
      if ( v21 )
        operator delete(v21);
      v28 = (void *)(v133 - 12);
      if ( (int *)(v133 - 12) != &dword_28898C0 )
        v99 = (unsigned int *)(v133 - 4);
            v100 = __ldrex(v99);
          while ( __strex(v100 - 1, v99) );
          v100 = (*v99)--;
        if ( v100 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v29 = (void *)(v137 - 12);
      if ( (int *)(v137 - 12) == &dword_28898C0 )
        goto LABEL_50;
      v30 = (unsigned int *)(v137 - 4);
        v31 = (unsigned __int64 *)v105;
          v32 = __ldrex(v30);
        while ( __strex(v32 - 1, v30) );
LABEL_180:
        v27 = v31;
        goto LABEL_182;
      sub_119C884((void **)&v131, "achievementScreen.hours");
      Util::toString<int,(void *)0,(void *)0>((void **)&v127, v17);
      v128 = 0;
      v129 = 0;
      v130 = 0;
      v33 = (char *)operator new(4u);
      v128 = v33;
      v130 = v33 + 4;
      v129 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v127,
                       (int)&v128,
                       (int)v33);
      I18n::get(&v132, &v131, (unsigned __int64 *)&v128);
      sub_119C8A4((const void **)_R9 + 111, (const void **)&v132);
      v106 = v6;
      v34 = (void *)(v132 - 12);
      if ( (int *)(v132 - 12) != &dword_28898C0 )
        v101 = (unsigned int *)(v132 - 4);
            v102 = __ldrex(v101);
          while ( __strex(v102 - 1, v101) );
          v102 = (*v101)--;
        if ( v102 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v34);
      v35 = (int)v129;
      v36 = v128;
      if ( v128 != v129 )
        v37 = &v151;
          v41 = (int *)(*(_DWORD *)v36 - 12);
          if ( v41 != &dword_28898C0 )
            v38 = (unsigned int *)(*(_DWORD *)v36 - 4);
                v39 = __ldrex(v38);
              while ( __strex(v39 - 1, v38) );
              v39 = (*v38)--;
            if ( v39 <= 0 )
              v40 = v37;
              j_j_j_j_j__ZdlPv_9_1(v41);
              v37 = v40;
          v36 += 4;
        while ( v36 != (char *)v35 );
        v36 = v128;
      v27 = (unsigned __int64 *)v106;
      if ( v36 )
        operator delete(v36);
      v42 = (void *)(v127 - 12);
      if ( (int *)(v127 - 12) != &dword_28898C0 )
        v103 = (unsigned int *)(v127 - 4);
            v104 = __ldrex(v103);
          while ( __strex(v104 - 1, v103) );
          v104 = (*v103)--;
        if ( v104 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v42);
      v29 = (void *)(v131 - 12);
      if ( (int *)(v131 - 12) == &dword_28898C0 )
      v30 = (unsigned int *)(v131 - 4);
        v31 = (unsigned __int64 *)v106;
        goto LABEL_180;
    v32 = (*v30)--;
LABEL_182:
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
LABEL_50:
    if ( PlayerAchievementData::getMaxAchievements(v5) < 1 )
      *((_DWORD *)_R9 + 113) = 0;
      _R4 = PlayerAchievementData::getAchievementsUnlocked(v5);
      _R0 = PlayerAchievementData::getMaxAchievements(v5);
      __asm
        VMOV            S0, R0
        VMOV            S2, R4
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VDIV.F32        S0, S2, S0
        VSTR            S0, [R9,#0x1C4]
    sub_119C884((void **)&v126, (const char *)&unk_257BC67);
    sub_119CAD8((void **)&v149, v126, *((_BYTE **)v126 - 3));
      v49 = *(_DWORD *)(v149 - 12);
      v49 = 0;
    sub_119F00C((int)&v146, v149, 0, v49);
    v50 = v126 - 12;
    if ( (int *)(v126 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v126 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v50);
    __asm
      VLDR            S0, =100.0
      VLDR            S2, [R9,#0x1C4]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    v52 = (char *)sub_119C914((int)&v145, _R1);
    sub_119C904(v52, (int)"%%", 2);
    sub_119D48C(&v125, (int)&v146);
    sub_119C8A4((const void **)_R9 + 112, (const void **)&v125);
    v53 = (void *)(v125 - 12);
    if ( (int *)(v125 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v125 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v53);
    v54 = *v27;
    for ( i = *v27 >> 32; v54 != i; v54 += 48 )
      v116 = &unk_28898CC;
      v117 = &unk_28898CC;
      v118 = &unk_28898CC;
      v119 = &unk_28898CC;
      v122 = &unk_28898CC;
      v123 = &unk_28898CC;
      v73 = (char *)dword_27D9EA4;
      v74 = strlen((const char *)dword_27D9EA4);
      sub_119C894((const void **)&v116, v73, v74);
      sub_119C8A4((const void **)&v116, (const void **)(v54 + 4));
      if ( !*(_BYTE *)(v54 + 24) )
        v75 = (char *)dword_27D9E84;
        v76 = strlen((const char *)dword_27D9E84);
        sub_119C894((const void **)&v116, v75, v76);
        sub_119C894((const void **)&v116, " - ", 3u);
        _ZF = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) == 0;
        v77 = &ServiceLocator<AppPlatform>::mDefaultService;
        if ( !_ZF )
          v77 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        (*(void (__fastcall **)(int *))(**(_DWORD **)v77 + 388))(&v115);
        sub_119C8A4((const void **)&v116, (const void **)&v115);
        v78 = (void *)(v115 - 12);
        if ( (int *)(v115 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v115 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
          else
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v78);
      v79 = (char *)dword_27D9E84;
      v80 = strlen((const char *)dword_27D9E84);
      sub_119C894((const void **)&v117, v79, v80);
      sub_119C8A4((const void **)&v117, (const void **)(v54 + 8));
      v121 = *(_BYTE *)(v54 + 24);
      v81 = *(_DWORD *)(v54 + 28);
      _ZF = v81 == 0;
      _NF = v81 < 0;
      v82 = 0;
      if ( !_NF && !_ZF )
        v82 = 1;
      v120 = v82;
      sub_119C884((void **)&v114, (const char *)&unk_257BC67);
      sub_119CAD8((void **)&v149, v114, *((_BYTE **)v114 - 3));
      if ( v148 & 3 )
        v83 = *(_DWORD *)(v149 - 12);
        v83 = 0;
      sub_119F00C((int)&v146, v149, 0, v83);
      v84 = v114 - 12;
      if ( (int *)(v114 - 12) != &dword_28898C0 )
        v65 = (unsigned int *)(v114 - 4);
            v66 = __ldrex(v65);
          while ( __strex(v66 - 1, v65) );
          v66 = (*v65)--;
        if ( v66 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v84);
      sub_119C914((int)&v145, *(_DWORD *)(v54 + 28));
      sub_119D48C(&v113, (int)&v146);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v123,
        &v113);
      v85 = (void *)(v113 - 12);
      if ( (int *)(v113 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v113 - 4);
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v85);
      EntityInteraction::setInteractText((int *)&v122, (int *)(v54 + 12));
      v124 = *(_DWORD *)(v54 + 32);
      v111 = *(_DWORD *)(v54 + 20);
      v112 = *(_DWORD *)(v111 - 12);
      if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v111) == 1 )
        EntityInteraction::setInteractText((int *)&v118, (int *)(v54 + 20));
        v86 = 2;
        EntityInteraction::setInteractText((int *)&v118, &v142);
        v86 = 0;
      ResourceUtil::stringFromPath(&v108, v86);
      sub_119CCEC((void **)&v110, v109, v108);
        (int *)&v119,
        &v110);
      v87 = (void *)(v110 - 12);
      if ( (int *)(v110 - 12) != &dword_28898C0 )
        v69 = (unsigned int *)(v110 - 4);
            v70 = __ldrex(v69);
          while ( __strex(v70 - 1, v69) );
          v70 = (*v69)--;
        if ( v70 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v87);
      v88 = *(_QWORD *)((char *)_R9 + 428);
      if ( (_DWORD)v88 == HIDWORD(v88) )
        std::vector<FormattedAchievementData,std::allocator<FormattedAchievementData>>::_M_emplace_back_aux<FormattedAchievementData const&>(
          (unsigned __int64 *)_R9 + 53,
          (int *)&v116);
        FormattedAchievementData::FormattedAchievementData((int *)v88, (int *)&v116);
        *((_DWORD *)_R9 + 107) += 32;
      FormattedAchievementData::~FormattedAchievementData((FormattedAchievementData *)&v116);
  v89 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v142 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v94 = __ldrex(v93);
      while ( __strex(v94 - 1, v93) );
      v94 = (*v93)--;
    if ( v94 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v89);
  v90 = off_26D3F84;
  v143 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v143) = off_26D3F80[0];
  v145 = v90;
  v146 = &off_27734E8;
  v91 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v95 = (unsigned int *)(v149 - 4);
        v96 = __ldrex(v95);
      while ( __strex(v96 - 1, v95) );
      v96 = (*v95)--;
    if ( v96 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  v146 = &off_26D40A8;
  sub_119C954((unsigned int **)&v147);
  v143 = (void **)off_26D3F68;
  *(void ***)((char *)&v143 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v144 = 0;
  return sub_119C964(&v150);
}


void __fastcall AchievementScreenController::~AchievementScreenController(AchievementScreenController *this)
{
  AchievementScreenController *v1; // r4@1
  FormattedAchievementData *v2; // r0@1
  FormattedAchievementData *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E0B88;
  FormattedPlayerStats::~FormattedPlayerStats((AchievementScreenController *)((char *)this + 436));
  v3 = (FormattedAchievementData *)(*((_QWORD *)v1 + 53) >> 32);
  v2 = (FormattedAchievementData *)*((_QWORD *)v1 + 53);
  if ( v2 != v3 )
  {
    do
      v2 = (FormattedAchievementData *)((char *)FormattedAchievementData::~FormattedAchievementData(v2) + 32);
    while ( v3 != v2 );
    v2 = (FormattedAchievementData *)*((_DWORD *)v1 + 106);
  }
  if ( v2 )
    operator delete((void *)v2);
  MinecraftScreenController::~MinecraftScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


signed int __fastcall AchievementScreenController::tick(AchievementScreenController *this)
{
  AchievementScreenController *v1; // r4@1
  signed int result; // r0@5

  v1 = this;
  if ( *((_BYTE *)this + 456)
    || MinecraftScreenModel::isAchievementDataCached(*((MinecraftScreenModel **)this + 95)) != 1
    && (*((_BYTE *)v1 + 456) || MinecraftScreenModel::isAchievementDataUpdating(*((MinecraftScreenModel **)v1 + 95))) )
  {
    result = 0;
  }
  else
    AchievementScreenController::_getAchievementData(v1);
    result = 1;
  return result;
}


int *__fastcall AchievementScreenController::onOpen(AchievementScreenController *this)
{
  ScreenController *v1; // r4@1
  int v2; // r1@1
  __int64 v3; // r2@1

  v1 = this;
  AchievementScreenController::_getAchievementData(this);
  return j_j_j__ZN16ScreenController6onOpenEv(v1, v2, v3);
}


void __fastcall AchievementScreenController::~AchievementScreenController(AchievementScreenController *this)
{
  AchievementScreenController::~AchievementScreenController(this);
}


void __fastcall AchievementScreenController::_registerBindings(AchievementScreenController *this)
{
  AchievementScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  _DWORD *v20; // r0@25
  __int64 v21; // r1@25
  __int64 v22; // r1@25
  _DWORD *v23; // r0@29
  __int64 v24; // r1@29
  __int64 v25; // r1@29
  _DWORD *v26; // r0@33
  __int64 v27; // r1@33
  __int64 v28; // r1@33
  _DWORD *v29; // r0@37
  __int64 v30; // r1@37
  __int64 v31; // r1@37
  _DWORD *v32; // r0@41
  __int64 v33; // r1@41
  __int64 v34; // r1@41
  _DWORD *v35; // r0@45
  __int64 v36; // r1@45
  __int64 v37; // r1@45
  _DWORD *v38; // r0@49
  __int64 v39; // r1@49
  __int64 v40; // r1@49
  _DWORD *v41; // r0@53
  __int64 v42; // r1@53
  __int64 v43; // r1@53
  _DWORD *v44; // r0@57
  __int64 v45; // r1@57
  __int64 v46; // r1@57
  _DWORD *v47; // r0@61
  __int64 v48; // r1@61
  __int64 v49; // r1@61
  _DWORD *v50; // r0@65
  __int64 v51; // r1@65
  __int64 v52; // r1@65
  _DWORD *v53; // r0@69
  __int64 v54; // r1@69
  __int64 v55; // r1@69
  _DWORD *v56; // r0@73
  __int64 v57; // r1@73
  __int64 v58; // r1@73
  void *v59; // [sp+8h] [bp-2F0h]@73
  __int64 v60; // [sp+10h] [bp-2E8h]@73
  _DWORD *v61; // [sp+18h] [bp-2E0h]@73
  __int64 v62; // [sp+20h] [bp-2D8h]@73
  int v63; // [sp+28h] [bp-2D0h]@73
  void *v64; // [sp+2Ch] [bp-2CCh]@69
  __int64 v65; // [sp+34h] [bp-2C4h]@69
  _DWORD *v66; // [sp+3Ch] [bp-2BCh]@69
  __int64 v67; // [sp+44h] [bp-2B4h]@69
  int v68; // [sp+4Ch] [bp-2ACh]@69
  int v69; // [sp+50h] [bp-2A8h]@69
  void *v70; // [sp+54h] [bp-2A4h]@65
  __int64 v71; // [sp+5Ch] [bp-29Ch]@65
  _DWORD *v72; // [sp+64h] [bp-294h]@65
  __int64 v73; // [sp+6Ch] [bp-28Ch]@65
  int v74; // [sp+74h] [bp-284h]@65
  int v75; // [sp+78h] [bp-280h]@65
  void *v76; // [sp+7Ch] [bp-27Ch]@61
  __int64 v77; // [sp+84h] [bp-274h]@61
  _DWORD *v78; // [sp+8Ch] [bp-26Ch]@61
  __int64 v79; // [sp+94h] [bp-264h]@61
  int v80; // [sp+9Ch] [bp-25Ch]@61
  int v81; // [sp+A0h] [bp-258h]@61
  void *v82; // [sp+A4h] [bp-254h]@57
  __int64 v83; // [sp+ACh] [bp-24Ch]@57
  _DWORD *v84; // [sp+B4h] [bp-244h]@57
  __int64 v85; // [sp+BCh] [bp-23Ch]@57
  int v86; // [sp+C4h] [bp-234h]@57
  int v87; // [sp+C8h] [bp-230h]@57
  void *v88; // [sp+CCh] [bp-22Ch]@53
  __int64 v89; // [sp+D4h] [bp-224h]@53
  _DWORD *v90; // [sp+DCh] [bp-21Ch]@53
  __int64 v91; // [sp+E4h] [bp-214h]@53
  int v92; // [sp+ECh] [bp-20Ch]@53
  int v93; // [sp+F0h] [bp-208h]@53
  void *v94; // [sp+F4h] [bp-204h]@49
  __int64 v95; // [sp+FCh] [bp-1FCh]@49
  _DWORD *v96; // [sp+104h] [bp-1F4h]@49
  __int64 v97; // [sp+10Ch] [bp-1ECh]@49
  int v98; // [sp+114h] [bp-1E4h]@49
  int v99; // [sp+118h] [bp-1E0h]@49
  void *v100; // [sp+11Ch] [bp-1DCh]@45
  __int64 v101; // [sp+124h] [bp-1D4h]@45
  _DWORD *v102; // [sp+12Ch] [bp-1CCh]@45
  __int64 v103; // [sp+134h] [bp-1C4h]@45
  int v104; // [sp+13Ch] [bp-1BCh]@45
  int v105; // [sp+140h] [bp-1B8h]@45
  void *v106; // [sp+144h] [bp-1B4h]@41
  __int64 v107; // [sp+14Ch] [bp-1ACh]@41
  _DWORD *v108; // [sp+154h] [bp-1A4h]@41
  __int64 v109; // [sp+15Ch] [bp-19Ch]@41
  int v110; // [sp+164h] [bp-194h]@41
  int v111; // [sp+168h] [bp-190h]@41
  void *v112; // [sp+16Ch] [bp-18Ch]@37
  __int64 v113; // [sp+174h] [bp-184h]@37
  _DWORD *v114; // [sp+17Ch] [bp-17Ch]@37
  __int64 v115; // [sp+184h] [bp-174h]@37
  int v116; // [sp+18Ch] [bp-16Ch]@37
  int v117; // [sp+190h] [bp-168h]@37
  void *v118; // [sp+194h] [bp-164h]@33
  __int64 v119; // [sp+19Ch] [bp-15Ch]@33
  _DWORD *v120; // [sp+1A4h] [bp-154h]@33
  __int64 v121; // [sp+1ACh] [bp-14Ch]@33
  int v122; // [sp+1B4h] [bp-144h]@33
  int v123; // [sp+1B8h] [bp-140h]@33
  void *v124; // [sp+1BCh] [bp-13Ch]@29
  __int64 v125; // [sp+1C4h] [bp-134h]@29
  _DWORD *v126; // [sp+1CCh] [bp-12Ch]@29
  __int64 v127; // [sp+1D4h] [bp-124h]@29
  int v128; // [sp+1DCh] [bp-11Ch]@29
  int v129; // [sp+1E0h] [bp-118h]@29
  void *v130; // [sp+1E4h] [bp-114h]@25
  __int64 v131; // [sp+1ECh] [bp-10Ch]@25
  _DWORD *v132; // [sp+1F4h] [bp-104h]@25
  __int64 v133; // [sp+1FCh] [bp-FCh]@25
  int v134; // [sp+204h] [bp-F4h]@25
  int v135; // [sp+208h] [bp-F0h]@25
  void *v136; // [sp+20Ch] [bp-ECh]@21
  __int64 v137; // [sp+214h] [bp-E4h]@21
  _DWORD *v138; // [sp+21Ch] [bp-DCh]@21
  __int64 v139; // [sp+224h] [bp-D4h]@21
  int v140; // [sp+22Ch] [bp-CCh]@21
  int v141; // [sp+230h] [bp-C8h]@21
  void *v142; // [sp+234h] [bp-C4h]@17
  __int64 v143; // [sp+23Ch] [bp-BCh]@17
  _DWORD *v144; // [sp+244h] [bp-B4h]@17
  __int64 v145; // [sp+24Ch] [bp-ACh]@17
  int v146; // [sp+254h] [bp-A4h]@17
  void *v147; // [sp+258h] [bp-A0h]@13
  __int64 v148; // [sp+260h] [bp-98h]@13
  _DWORD *v149; // [sp+268h] [bp-90h]@13
  __int64 v150; // [sp+270h] [bp-88h]@13
  int v151; // [sp+278h] [bp-80h]@13
  void *v152; // [sp+27Ch] [bp-7Ch]@9
  __int64 v153; // [sp+284h] [bp-74h]@9
  _DWORD *v154; // [sp+28Ch] [bp-6Ch]@9
  __int64 v155; // [sp+294h] [bp-64h]@9
  int v156; // [sp+29Ch] [bp-5Ch]@9
  void *v157; // [sp+2A0h] [bp-58h]@5
  __int64 v158; // [sp+2A8h] [bp-50h]@5
  _DWORD *v159; // [sp+2B0h] [bp-48h]@5
  __int64 v160; // [sp+2B8h] [bp-40h]@5
  int v161; // [sp+2C0h] [bp-38h]@5
  void *v162; // [sp+2C4h] [bp-34h]@1
  __int64 v163; // [sp+2CCh] [bp-2Ch]@1
  _DWORD *v164; // [sp+2D4h] [bp-24h]@1
  __int64 v165; // [sp+2DCh] [bp-1Ch]@1
  int v166; // [sp+2E4h] [bp-14h]@1

  v1 = this;
  v166 = -820293842;
  v2 = operator new(4u);
  LODWORD(v3) = sub_11222F0;
  *v2 = v1;
  HIDWORD(v3) = sub_11222E0;
  v164 = v2;
  v165 = v3;
  v162 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v163 = v4;
  ScreenController::bindString((int)v1, &v166, (int)&v164, (int)&v162);
  if ( (_DWORD)v163 )
    ((void (*)(void))v163)();
  if ( (_DWORD)v165 )
    ((void (*)(void))v165)();
  v161 = 209957984;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1122336;
  *v5 = v1;
  HIDWORD(v6) = sub_1122326;
  v159 = v5;
  v160 = v6;
  v157 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v158 = v7;
  ScreenController::bindString((int)v1, &v161, (int)&v159, (int)&v157);
  if ( (_DWORD)v158 )
    ((void (*)(void))v158)();
  if ( (_DWORD)v160 )
    ((void (*)(void))v160)();
  v156 = 549286561;
  v8 = operator new(4u);
  LODWORD(v9) = sub_112237C;
  *v8 = v1;
  HIDWORD(v9) = sub_112236C;
  v154 = v8;
  v155 = v9;
  v152 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v153 = v10;
  ScreenController::bindString((int)v1, &v156, (int)&v154, (int)&v152);
  if ( (_DWORD)v153 )
    ((void (*)(void))v153)();
  if ( (_DWORD)v155 )
    ((void (*)(void))v155)();
  StringHash::StringHash<char [24]>(&v151, (int)"#achievement_percentage");
  v11 = operator new(4u);
  LODWORD(v12) = sub_11223C2;
  *v11 = v1;
  HIDWORD(v12) = sub_11223B2;
  v149 = v11;
  v150 = v12;
  v147 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbvEZN16ScreenController10bindStringERK10StringHashRKSt8functionIFSsvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v148 = v13;
  ScreenController::bindString((int)v1, &v151, (int)&v149, (int)&v147);
  if ( (_DWORD)v148 )
    ((void (*)(void))v148)();
  if ( (_DWORD)v150 )
    ((void (*)(void))v150)();
  StringHash::StringHash<char [28]>(&v146, (int)"#achievement_grid_dimension");
  v14 = operator new(4u);
  LODWORD(v15) = sub_112240C;
  *v14 = v1;
  HIDWORD(v15) = sub_11223F8;
  v144 = v14;
  v145 = v15;
  v142 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSK_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbvEZN16ScreenController12bindGridSizeERK10StringHashRKSt8functionIFN3glm6detail5tvec2IiEEvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v143 = v16;
  ScreenController::bindGridSize((int)v1, &v146, (int)&v144, (int)&v142);
  if ( (_DWORD)v143 )
    ((void (*)(void))v143)();
  if ( (_DWORD)v145 )
    ((void (*)(void))v145)();
  v140 = -343735763;
  v141 = -1114503487;
  v17 = operator new(4u);
  LODWORD(v18) = sub_1122458;
  *v17 = v1;
  HIDWORD(v18) = sub_1122442;
  v138 = v17;
  v139 = v18;
  v136 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v137 = v19;
  ScreenController::bindStringForCollection((int)v1, &v141, &v140, (int)&v138, (int)&v136);
  if ( (_DWORD)v137 )
    ((void (*)(void))v137)();
  if ( (_DWORD)v139 )
    ((void (*)(void))v139)();
  v135 = -1114503487;
  v134 = -1000351731;
  v20 = operator new(4u);
  LODWORD(v21) = sub_11224A4;
  *v20 = v1;
  HIDWORD(v21) = sub_112248E;
  v132 = v20;
  v133 = v21;
  v130 = operator new(1u);
  LODWORD(v22) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v22) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v131 = v22;
  ScreenController::bindStringForCollection((int)v1, &v135, &v134, (int)&v132, (int)&v130);
  if ( (_DWORD)v131 )
    ((void (*)(void))v131)();
  if ( (_DWORD)v133 )
    ((void (*)(void))v133)();
  v129 = -1114503487;
  v128 = -1072458255;
  v23 = operator new(4u);
  LODWORD(v24) = sub_11224EA;
  *v23 = v1;
  HIDWORD(v24) = sub_11224DA;
  v126 = v23;
  v127 = v24;
  v124 = operator new(1u);
  LODWORD(v25) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v25) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v125 = v25;
  ScreenController::bindBoolForCollection((int)v1, &v129, &v128, (int)&v126, (int)&v124);
  if ( (_DWORD)v125 )
    ((void (*)(void))v125)();
  if ( (_DWORD)v127 )
    ((void (*)(void))v127)();
  v123 = -1114503487;
  v122 = -586508791;
  v26 = operator new(4u);
  LODWORD(v27) = sub_1122534;
  *v26 = v1;
  HIDWORD(v27) = sub_1122520;
  v120 = v26;
  v121 = v27;
  v118 = operator new(1u);
  LODWORD(v28) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v28) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v119 = v28;
  ScreenController::bindStringForCollection((int)v1, &v123, &v122, (int)&v120, (int)&v118);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  if ( (_DWORD)v121 )
    ((void (*)(void))v121)();
  v117 = -1114503487;
  StringHash::StringHash<char [25]>(&v116, (int)"#achievement_description");
  v29 = operator new(4u);
  LODWORD(v30) = sub_1122580;
  *v29 = v1;
  HIDWORD(v30) = sub_112256A;
  v114 = v29;
  v115 = v30;
  v112 = operator new(1u);
  LODWORD(v31) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v31) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v113 = v31;
  ScreenController::bindStringForCollection((int)v1, &v117, &v116, (int)&v114, (int)&v112);
  if ( (_DWORD)v113 )
    ((void (*)(void))v113)();
  if ( (_DWORD)v115 )
    ((void (*)(void))v115)();
  v111 = -1114503487;
  v110 = -194248464;
  v32 = operator new(4u);
  LODWORD(v33) = sub_11225C6;
  *v32 = v1;
  HIDWORD(v33) = sub_11225B6;
  v108 = v32;
  v109 = v33;
  v106 = operator new(1u);
  LODWORD(v34) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v34) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v107 = v34;
  ScreenController::bindBoolForCollection((int)v1, &v111, &v110, (int)&v108, (int)&v106);
  if ( (_DWORD)v107 )
    ((void (*)(void))v107)();
  if ( (_DWORD)v109 )
    ((void (*)(void))v109)();
  v105 = -1114503487;
  v104 = 76111314;
  v35 = operator new(4u);
  LODWORD(v36) = sub_1122614;
  *v35 = v1;
  HIDWORD(v36) = sub_11225FC;
  v102 = v35;
  v103 = v36;
  v100 = operator new(1u);
  LODWORD(v37) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v37) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v101 = v37;
  ScreenController::bindBoolForCollection((int)v1, &v105, &v104, (int)&v102, (int)&v100);
  if ( (_DWORD)v101 )
    ((void (*)(void))v101)();
  if ( (_DWORD)v103 )
    ((void (*)(void))v103)();
  v99 = -1114503487;
  v98 = 1508430325;
  v38 = operator new(4u);
  LODWORD(v39) = sub_112265A;
  *v38 = v1;
  HIDWORD(v39) = sub_112264A;
  v96 = v38;
  v97 = v39;
  v94 = operator new(1u);
  LODWORD(v40) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v40) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v95 = v40;
  ScreenController::bindBoolForCollection((int)v1, &v99, &v98, (int)&v96, (int)&v94);
  if ( (_DWORD)v95 )
    ((void (*)(void))v95)();
  if ( (_DWORD)v97 )
    ((void (*)(void))v97)();
  v93 = -1114503487;
  StringHash::StringHash<char [27]>(&v92, (int)"#grey_world_status_visible");
  v41 = operator new(4u);
  LODWORD(v42) = sub_11226A8;
  *v41 = v1;
  HIDWORD(v42) = sub_1122690;
  v90 = v41;
  v91 = v42;
  v88 = operator new(1u);
  LODWORD(v43) = ZNSt14_Function_base13_Base_managerIZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIFbiEES9_Ed_UliE_E10_M_managerERSt9_Any_dataRKSC_St18_Manager_operation;
  HIDWORD(v43) = ZNSt17_Function_handlerIFbiEZN16ScreenController21bindBoolForCollectionERK10StringHashS4_RKSt8functionIS0_ES8_Ed_UliE_E9_M_invokeERKSt9_Any_datai;
  v89 = v43;
  ScreenController::bindBoolForCollection((int)v1, &v93, &v92, (int)&v90, (int)&v88);
  if ( (_DWORD)v89 )
    ((void (*)(void))v89)();
  if ( (_DWORD)v91 )
    ((void (*)(void))v91)();
  v87 = -1114503487;
  StringHash::StringHash<char [25]>(&v86, (int)"#achievement_gamer_score");
  v44 = operator new(4u);
  LODWORD(v45) = sub_11226F4;
  *v44 = v1;
  HIDWORD(v45) = sub_11226DE;
  v84 = v44;
  v85 = v45;
  v82 = operator new(1u);
  LODWORD(v46) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v46) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v83 = v46;
  ScreenController::bindStringForCollection((int)v1, &v87, &v86, (int)&v84, (int)&v82);
  if ( (_DWORD)v83 )
    ((void (*)(void))v83)();
  if ( (_DWORD)v85 )
    ((void (*)(void))v85)();
  v81 = -1114503487;
  StringHash::StringHash<char [25]>(&v80, (int)"#achievement_world_score");
  v47 = operator new(4u);
  LODWORD(v48) = sub_1122740;
  *v47 = v1;
  HIDWORD(v48) = sub_112272A;
  v78 = v47;
  v79 = v48;
  v76 = operator new(1u);
  LODWORD(v49) = ZNSt14_Function_base13_Base_managerIZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v49) = ZNSt17_Function_handlerIFbiEZN16ScreenController23bindStringForCollectionERK10StringHashS4_RKSt8functionIFSsiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v77 = v49;
  ScreenController::bindStringForCollection((int)v1, &v81, &v80, (int)&v78, (int)&v76);
  if ( (_DWORD)v77 )
    ((void (*)(void))v77)();
  if ( (_DWORD)v79 )
    ((void (*)(void))v79)();
  v75 = -1114503487;
  v74 = -562286346;
  v50 = operator new(4u);
  LODWORD(v51) = sub_1122794;
  *v50 = v1;
  HIDWORD(v51) = sub_1122776;
  v72 = v50;
  v73 = v51;
  v70 = operator new(1u);
  LODWORD(v52) = ZNSt14_Function_base13_Base_managerIZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v52) = ZNSt17_Function_handlerIFbiEZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v71 = v52;
  ScreenController::bindFloatForCollection((int)v1, &v75, &v74, (int)&v72);
  if ( (_DWORD)v71 )
    ((void (__cdecl *)(void **))v71)(&v70);
  if ( (_DWORD)v73 )
    ((void (__cdecl *)(_DWORD **))v73)(&v72);
  v69 = -1114503487;
  StringHash::StringHash<char [29]>(&v68, (int)"#inverse_progress_percentage");
  v53 = operator new(4u);
  LODWORD(v54) = sub_112280C;
  *v53 = v1;
  HIDWORD(v54) = sub_11227FC;
  v66 = v53;
  v67 = v54;
  v64 = operator new(1u);
  LODWORD(v55) = ZNSt14_Function_base13_Base_managerIZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IFbiEEEd_UliE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v55) = ZNSt17_Function_handlerIFbiEZN16ScreenController22bindFloatForCollectionERK10StringHashS4_RKSt8functionIFfiEERKS5_IS0_EEd_UliE_E9_M_invokeERKSt9_Any_datai;
  v65 = v55;
  ScreenController::bindFloatForCollection((int)v1, &v69, &v68, (int)&v66);
  if ( (_DWORD)v65 )
    ((void (__cdecl *)(void **))v65)(&v64);
  if ( (_DWORD)v67 )
    ((void (__cdecl *)(_DWORD **))v67)(&v66);
  StringHash::StringHash<char [28]>(&v63, (int)"#trophy_progress_percentage");
  v56 = operator new(4u);
  LODWORD(v57) = sub_1122858;
  *v56 = v1;
  HIDWORD(v57) = sub_1122842;
  v61 = v56;
  v62 = v57;
  v59 = operator new(1u);
  LODWORD(v58) = ZNSt14_Function_base13_Base_managerIZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IFbvEEEd_UlvE_E10_M_managerERSt9_Any_dataRKSG_St18_Manager_operation;
  HIDWORD(v58) = ZNSt17_Function_handlerIFbvEZN16ScreenController9bindFloatERK10StringHashRKSt8functionIFfvEERKS5_IS0_EEd_UlvE_E9_M_invokeERKSt9_Any_data;
  v60 = v58;
  ScreenController::bindFloat((int)v1, &v63, (int)&v61, (int)&v59);
  if ( (_DWORD)v60 )
    ((void (__cdecl *)(void **))v60)(&v59);
  if ( (_DWORD)v62 )
    ((void (__cdecl *)(_DWORD **))v62)(&v61);
}


int __fastcall AchievementScreenController::AchievementScreenController(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r1@4
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  __int64 v11; // r0@21
  int v13; // [sp+0h] [bp-18h]@1
  int v14; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v13 = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  v14 = v3;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
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
  MinecraftScreenController::MinecraftScreenController(v2, (MinecraftScreenModel **)&v13);
  v6 = v14;
  if ( v14 )
    v7 = (unsigned int *)(v14 + 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  *(_DWORD *)v2 = &off_26E0B88;
  HIDWORD(v11) = &unk_28898CC;
  LODWORD(v11) = 0;
  *(_DWORD *)(v2 + 424) = 0;
  *(_DWORD *)(v2 + 428) = 0;
  *(_QWORD *)(v2 + 432) = v11;
  *(_DWORD *)(v2 + 440) = &unk_28898CC;
  *(_DWORD *)(v2 + 444) = &unk_28898CC;
  *(_DWORD *)(v2 + 448) = &unk_28898CC;
  *(_BYTE *)(v2 + 456) = 0;
  AchievementScreenController::_registerBindings((AchievementScreenController *)v2);
  return v2;
}
