

char *__fastcall SoundEngine::getSounds(SoundEngine *this)
{
  return (char *)this + 292;
}


signed __int64 __fastcall SoundEngine::registerLoop(int a1, int **a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int v5; // r6@1
  char *v6; // r7@2
  void (__fastcall *v7)(int *, int, signed int); // r3@2
  int v8; // r1@4
  signed __int64 v9; // r4@4
  char *v10; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  int v14; // [sp+0h] [bp-40h]@3
  void (*v15)(void); // [sp+8h] [bp-38h]@2
  int v16; // [sp+Ch] [bp-34h]@3
  char v17; // [sp+10h] [bp-30h]@1
  char *v18; // [sp+14h] [bp-2Ch]@1
  signed __int64 v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+20h] [bp-20h]@1
  __int16 v21; // [sp+24h] [bp-1Ch]@1

  v3 = a1;
  v4 = (int *)a2;
  v17 = 0;
  v5 = a3;
  v18 = (char *)&unk_28898CC;
  v19 = 1065353216LL;
  v20 = 0;
  v21 = 256;
  if ( SoundRepository::get((pthread_mutex_t *)(a1 + 244), a2, (int)&v17) == 1 )
  {
    v6 = SoundItem::getSoundName((SoundItem *)&v17);
    v15 = 0;
    v7 = *(void (__fastcall **)(int *, int, signed int))(v5 + 8);
    if ( v7 )
    {
      v7(&v14, v5, 2);
      v16 = *(_DWORD *)(v5 + 12);
      v15 = *(void (**)(void))(v5 + 8);
    }
    LODWORD(v9) = SoundSystemFMOD::registerLoop(v3 + 8, (int **)v6, v4, (int)&v14);
    HIDWORD(v9) = v8;
    if ( v15 )
      v15();
  }
  else
    v9 = -1LL;
  v10 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  return v9;
}


int __fastcall SoundEngine::fadeToStopMusic(int result)
{
  if ( !*(_BYTE *)(result + 289) )
  {
    *(_BYTE *)(result + 289) = 1;
    result = j_j_j__ZN15SoundSystemFMOD12fadeMusicOutEf((SoundSystemFMOD *)(result + 8), 3.0);
  }
  return result;
}


void __fastcall SoundEngine::load(SoundEngine *this, int a2)
{
  SoundEngine::load(this, a2);
}


void __fastcall SoundEngine::playMusic(int a1, int **a2)
{
  SoundEngine::playMusic(a1, a2);
}


FMOD::ChannelControl *__fastcall SoundEngine::mute(SoundEngine *this)
{
  *((_BYTE *)this + 288) = 1;
  return j_j_j__ZN15SoundSystemFMOD4muteEb((SoundEngine *)((char *)this + 8), 1);
}


int __fastcall SoundEngine::_generateSoundId(int a1, const char **a2, int a3)
{
  int v4; // r0@1
  int v9; // r5@1

  _R4 = a3;
  v4 = Util::u64FromString(a2);
  __asm { VLDR            S16, =50.0 }
  v9 = v4;
  __asm
  {
    VLDR            S0, [R4]
    VLDR            S18, [R4,#8]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  }
  _aeabi_f2ulz(_R0);
    VMUL.F32        S0, S18, S16
  return _aeabi_f2ulz(_R0) | v9;
}


signed __int64 __fastcall SoundEngine::play(float a1, const char **a2, int a3, int _R3, int a5)
{
  float v5; // r10@1
  const char **v6; // r7@1
  unsigned int v11; // r8@8
  int v12; // r5@8
  int v13; // r0@8
  int v14; // r4@8
  int v16; // r0@8
  int v17; // r1@8
  unsigned int v18; // r9@8
  _DWORD *v19; // r11@8
  const char **v20; // r8@9
  _DWORD *v21; // r7@9
  _DWORD *v22; // r0@9
  unsigned int v23; // r4@9
  unsigned int v24; // r6@9
  int v25; // r5@11
  _DWORD *v27; // r4@19
  unsigned int v28; // r5@19
  unsigned int v29; // r8@19
  signed __int64 v30; // r4@24
  bool v31; // zf@25
  _DWORD *v32; // r0@29
  char *v33; // r4@31
  char *v37; // r0@33
  unsigned int *v39; // r2@35
  signed int v40; // r1@37
  int v41; // [sp+0h] [bp-90h]@0
  int v42; // [sp+4h] [bp-8Ch]@0
  int v43; // [sp+8h] [bp-88h]@0
  int v44; // [sp+Ch] [bp-84h]@0
  float v45; // [sp+18h] [bp-78h]@7
  int v46; // [sp+1Ch] [bp-74h]@7
  int v47; // [sp+20h] [bp-70h]@8
  __int64 v48; // [sp+24h] [bp-6Ch]@8
  char v49; // [sp+2Ch] [bp-64h]@30
  char *v50; // [sp+30h] [bp-60h]@30
  signed __int64 v51; // [sp+34h] [bp-5Ch]@30
  int v52; // [sp+3Ch] [bp-54h]@30
  __int16 v53; // [sp+40h] [bp-50h]@30

  v5 = a1;
  v6 = a2;
  if ( *(_BYTE *)(LODWORD(a1) + 288) )
    goto LABEL_24;
  __asm
  {
    VMOV            S0, R3
    VLDR            S16, =0.0
    VMOV.F32        S2, #1.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S16, S2 }
    VCMPE.F32       S16, #0.0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_24:
    v30 = -1LL;
  else
    v46 = a3;
    LODWORD(v45) = LODWORD(a1) + 8;
    if ( SoundSystemBase::getNumListeners((SoundSystemBase *)(LODWORD(a1) + 8)) >= 2 )
    {
      _R0 = Util::u64FromString(v6);
      v11 = _R0;
      LODWORD(_R0) = v46;
      __asm { VLDR            S18, =50.0 }
      v12 = HIDWORD(_R0);
      __asm
      {
        VLDR            S0, [R0]
        VLDR            S20, [R0,#8]
        VMUL.F32        S0, S0, S18
        VMOV            R0, S0
      }
      v13 = _aeabi_f2ulz(_R0);
      __asm { VMUL.F32        S0, S20, S18 }
      v14 = v13;
      __asm { VMOV            R0, S0 }
      v16 = _aeabi_f2ulz(_R0);
      v18 = *(_DWORD *)(LODWORD(v5) + 204);
      HIDWORD(v48) = v16 | v11;
      v19 = *(_DWORD **)(*(_DWORD *)(LODWORD(v5) + 200) + 4 * ((v16 | v11) % v18));
      v47 = (v16 | v11) % v18;
      LODWORD(v48) = v12 | v17 | v14;
      if ( !v19 )
        goto LABEL_29;
      v20 = v6;
      v21 = (_DWORD *)*v19;
      v22 = v19;
      v24 = *(_QWORD *)(*v19 + 8) >> 32;
      v23 = *(_QWORD *)(*v19 + 8);
      while ( v48 != __PAIR__(v23, v24) )
        v25 = *v21;
        if ( *v21 )
        {
          v24 = *(_QWORD *)(v25 + 8) >> 32;
          v23 = *(_QWORD *)(v25 + 8);
          v22 = v21;
          v21 = (_DWORD *)*v21;
          if ( v23 % v18 == v47 )
            continue;
        }
        goto LABEL_18;
      _ZF = v22 == 0;
      if ( v22 )
        _ZF = *v22 == 0;
      if ( !_ZF )
        goto LABEL_24;
LABEL_18:
      v6 = v20;
      v27 = (_DWORD *)*v19;
      v28 = *(_QWORD *)(*v19 + 8) >> 32;
      v29 = *(_QWORD *)(*v19 + 8);
      while ( v48 != __PAIR__(v29, v28) )
        if ( *v27 )
          v28 = *(_QWORD *)(*v27 + 8) >> 32;
          v29 = *(_QWORD *)(*v27 + 8);
          v19 = v27;
          v27 = (_DWORD *)*v27;
          if ( v29 % v18 == v47 )
      v31 = v19 == 0;
      if ( v19 )
        v31 = *v19 == 0;
      if ( v31 )
LABEL_29:
        v32 = operator new(0x10u);
        *v32 = 0;
        v32[2] = HIDWORD(v48);
        v32[3] = v48;
        std::_Hashtable<unsigned long long,unsigned long long,std::allocator<unsigned long long>,std::__detail::_Identity,std::equal_to<unsigned long long>,std::hash<unsigned long long>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_M_insert_unique_node(
          LODWORD(v5) + 200,
          v47,
          HIDWORD(v48),
          (int)v32);
    }
    v49 = 0;
    v50 = (char *)&unk_28898CC;
    v51 = 1065353216LL;
    v52 = 0;
    v53 = 256;
    if ( SoundRepository::get((pthread_mutex_t *)(LODWORD(v5) + 244), (int **)v6, (int)&v49) == 1 )
      v33 = SoundItem::getSoundName((SoundItem *)&v49);
      _R0 = v46;
        VLDR            S22, [R0]
        VLDR            S18, [R0,#4]
      _R0 = SoundItem::getVolume((SoundItem *)&v49);
        VMOV            S2, R0
        VLDR            S0, [SP,#0x90+arg_0]
        VMOV            R3, S22
        VMUL.F32        S2, S2, S16
      LODWORD(_R2) = v6;
        VSTR            S18, [SP,#0x90+var_90]
        VSTR            S20, [SP,#0x90+var_8C]
        VSTR            S2, [SP,#0x90+var_88]
        VSTR            S0, [SP,#0x90+var_84]
      v30 = SoundSystemFMOD::playAt(v45, *(float *)&v33, _R2, v41, v42, v43, v44);
    else
      v30 = -1LL;
    v37 = v50 - 12;
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
      else
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v37);
  return v30;
}


void __fastcall SoundEngine::playUI(int a1, int **a2, int _R2, int a4)
{
  int v4; // r6@1
  int **v6; // r4@1
  char *v11; // r7@8
  char *v13; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  int v16; // [sp+8h] [bp-48h]@0
  int v17; // [sp+Ch] [bp-44h]@0
  char v18; // [sp+14h] [bp-3Ch]@7
  char *v19; // [sp+18h] [bp-38h]@7
  signed __int64 v20; // [sp+1Ch] [bp-34h]@7
  int v21; // [sp+24h] [bp-2Ch]@7
  __int16 v22; // [sp+28h] [bp-28h]@7

  v4 = a1;
  _R5 = a4;
  v6 = a2;
  if ( !*(_BYTE *)(a1 + 288) )
  {
    __asm
    {
      VMOV            S0, R2
      VLDR            S16, =0.0
      VMOV.F32        S2, #1.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S2
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S16, S2 }
      VCMPE.F32       S16, #0.0
      v18 = 0;
      v19 = (char *)&unk_28898CC;
      v20 = 1065353216LL;
      v21 = 0;
      v22 = 256;
      if ( SoundRepository::get((pthread_mutex_t *)(a1 + 244), a2, (int)&v18) == 1 )
      {
        v11 = SoundItem::getSoundName((SoundItem *)&v18);
        _R0 = SoundItem::getVolume((SoundItem *)&v18);
        __asm
        {
          VMOV            S2, R0
          VMOV            S0, R5
          VMUL.F32        S2, S2, S16
          VSTR            S0, [SP,#0x50+var_44]
          VSTR            S2, [SP,#0x50+var_48]
        }
        SoundSystemFMOD::playAt(COERCE_FLOAT(v4 + 8), *(float *)&v11, (unsigned int)v6, 0, 0, v16, v17);
      }
      v13 = v19 - 12;
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v19 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
  }
}


void __fastcall SoundEngine::load(SoundEngine *this, int a2)
{
  SoundEngine *v2; // r4@1
  int v3; // r10@1
  __int64 v4; // kr00_8@1
  SoundEngine *v5; // r11@1
  int v6; // r5@2
  int v7; // r6@3
  unsigned int *v8; // r1@4
  unsigned int v9; // r0@6
  unsigned int *v10; // r4@10
  unsigned int v11; // r0@12
  signed int v12; // r9@18
  char *v13; // r4@19
  int v14; // r6@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  int *v17; // r0@29
  void *v18; // r0@34
  void *v19; // r0@37
  __int64 v20; // r1@37
  void *v21; // r0@39
  int v22; // r4@40
  char *v23; // r0@40
  char *v24; // r0@41
  int **v25; // r1@43
  const char **v26; // r7@43
  Json::Value *v31; // r6@44
  const char *v32; // r4@44
  const char *v33; // r8@44
  const char *v34; // r11@44
  const char *v35; // r10@44
  unsigned int *v36; // r2@45
  signed int v37; // r1@47
  unsigned int *v38; // r2@49
  signed int v39; // r1@51
  unsigned int *v40; // r2@53
  signed int v41; // r1@55
  unsigned int *v42; // r2@57
  signed int v43; // r1@59
  signed int v44; // r1@77
  unsigned int *v45; // r2@81
  signed int v46; // r1@83
  Json::Value *v47; // r5@89
  Json::Value *v48; // r7@89
  Json::Value *v49; // r9@89
  Json::Value *v50; // r4@89
  int v51; // r11@89
  char v52; // r7@90
  void *v53; // r0@90
  signed int v54; // r10@93
  signed int v55; // r8@93
  signed int v56; // r0@93
  signed int v58; // r0@95
  int v60; // r8@97
  unsigned int *v61; // r2@99
  signed int v62; // r1@101
  unsigned int *v63; // r2@103
  signed int v64; // r1@105
  unsigned int *v65; // r2@107
  signed int v66; // r1@109
  unsigned int *v67; // r2@123
  signed int v68; // r1@125
  unsigned int *v69; // r2@127
  signed int v70; // r1@129
  unsigned int *v71; // r2@131
  signed int v72; // r1@133
  Json::Value *v73; // r4@146
  int v74; // r5@147
  __int64 v75; // r0@147
  int *v76; // r7@148
  int v77; // r2@148
  float v78; // r3@148
  float v79; // r6@148
  int v80; // r0@148
  int v81; // r5@150
  void *v82; // r0@150
  Json::Value *v83; // r5@151
  Json::Value *v84; // r4@151
  signed int v85; // r0@151
  char v87; // r4@154
  int *v88; // r0@156
  void *v89; // r0@157
  void *v90; // r0@158
  int v91; // r5@161
  __int64 v92; // r0@161
  int *v93; // lr@162
  __int64 v94; // kr18_8@162
  float v95; // r6@162
  int *v96; // r0@164
  void *v97; // r0@165
  int v98; // r8@168
  unsigned int *v99; // r1@169
  unsigned int v100; // r0@171
  unsigned int *v101; // r5@175
  unsigned int v102; // r0@177
  unsigned int *v103; // r2@179
  int v104; // r8@186
  unsigned int *v105; // r1@187
  unsigned int v106; // r0@189
  unsigned int *v107; // r5@193
  unsigned int v108; // r0@195
  _BYTE *v109; // r0@200
  const char **v110; // r5@202
  unsigned int *v111; // r2@204
  signed int v112; // r1@206
  int *v113; // r0@212
  int i; // r8@217
  unsigned int *v115; // r2@219
  signed int v116; // r1@221
  unsigned int *v117; // r2@227
  signed int v118; // r1@229
  __int64 v119; // kr28_8@235
  unsigned int *v120; // r0@236
  unsigned int v121; // r1@238
  unsigned int v122; // r1@244
  int v123; // r10@248
  unsigned int *v124; // r0@249
  unsigned int v125; // r1@251
  int v126; // r6@256
  _DWORD *v127; // r0@256
  int v128; // r1@256
  unsigned int *v129; // r0@257
  unsigned int v130; // r1@259
  void *v131; // r0@262
  char *v132; // r0@266
  int v133; // r7@267
  unsigned int *v134; // r1@268
  unsigned int v135; // r0@270
  unsigned int *v136; // r6@274
  unsigned int v137; // r0@276
  void *v138; // r0@281
  int v139; // r7@282
  unsigned int *v140; // r1@283
  unsigned int v141; // r0@285
  unsigned int *v142; // r6@289
  unsigned int v143; // r0@291
  unsigned int *v144; // r1@297
  unsigned int v145; // r0@299
  unsigned int *v146; // r6@303
  unsigned int v147; // r0@305
  void *v148; // r0@313
  void *v149; // r0@314
  unsigned int *v150; // r2@316
  signed int v151; // r1@318
  unsigned int *v152; // r2@320
  signed int v153; // r1@322
  int **v154; // [sp+20h] [bp-1B8h]@89
  int **v155; // [sp+24h] [bp-1B4h]@89
  int v156; // [sp+34h] [bp-1A4h]@44
  int v157; // [sp+34h] [bp-1A4h]@248
  signed int v158; // [sp+38h] [bp-1A0h]@18
  pthread_mutex_t *mutex; // [sp+40h] [bp-198h]@1
  int *v160; // [sp+44h] [bp-194h]@44
  void *v161; // [sp+48h] [bp-190h]@262
  void (*v162)(void); // [sp+50h] [bp-188h]@262
  __int64 (__fastcall *v163)(int); // [sp+54h] [bp-184h]@262
  __int64 v164; // [sp+58h] [bp-180h]@248
  int v165; // [sp+60h] [bp-178h]@256
  char *v166; // [sp+64h] [bp-174h]@227
  int v167; // [sp+68h] [bp-170h]@256
  _DWORD *v168; // [sp+6Ch] [bp-16Ch]@256
  void (*v169)(void); // [sp+74h] [bp-164h]@256
  signed int (__fastcall *v170)(int **); // [sp+78h] [bp-160h]@256
  __int64 v171; // [sp+7Ch] [bp-15Ch]@240
  int v172; // [sp+84h] [bp-154h]@247
  int v173; // [sp+88h] [bp-150h]@219
  int v174; // [sp+8Ch] [bp-14Ch]@247
  int v175; // [sp+90h] [bp-148h]@168
  int v176; // [sp+94h] [bp-144h]@168
  char v177; // [sp+98h] [bp-140h]@161
  int *v178; // [sp+9Ch] [bp-13Ch]@127
  __int64 v179; // [sp+A0h] [bp-138h]@162
  float v180; // [sp+A8h] [bp-130h]@162
  char v181; // [sp+ACh] [bp-12Ch]@161
  char v182; // [sp+ADh] [bp-12Bh]@161
  int v183; // [sp+B4h] [bp-124h]@123
  int v184; // [sp+B8h] [bp-120h]@131
  int v185; // [sp+C0h] [bp-118h]@107
  int v186; // [sp+C4h] [bp-114h]@103
  char v187; // [sp+C8h] [bp-110h]@147
  int *v188; // [sp+CCh] [bp-10Ch]@99
  int v189; // [sp+D0h] [bp-108h]@147
  float v190; // [sp+D4h] [bp-104h]@148
  float v191; // [sp+D8h] [bp-100h]@148
  char v192; // [sp+DCh] [bp-FCh]@147
  char v193; // [sp+DDh] [bp-FBh]@147
  char v194; // [sp+E0h] [bp-F8h]@97
  char v195; // [sp+E8h] [bp-F0h]@97
  int v196; // [sp+F0h] [bp-E8h]@97
  int v197; // [sp+F4h] [bp-E4h]@168
  int v198; // [sp+100h] [bp-D8h]@90
  _BYTE *v199; // [sp+104h] [bp-D4h]@81
  const char **v200; // [sp+108h] [bp-D0h]@43
  const char **v201; // [sp+10Ch] [bp-CCh]@43
  char *v202; // [sp+118h] [bp-C0h]@40
  char *v203; // [sp+11Ch] [bp-BCh]@40
  int v204; // [sp+120h] [bp-B8h]@40
  void *v205; // [sp+124h] [bp-B4h]@37
  __int64 v206; // [sp+12Ch] [bp-ACh]@37
  int v207; // [sp+138h] [bp-A0h]@37
  void **v208; // [sp+13Ch] [bp-9Ch]@37
  int v209; // [sp+140h] [bp-98h]@313
  void (*v210)(void); // [sp+150h] [bp-88h]@311
  char v211; // [sp+158h] [bp-80h]@37
  int v212; // [sp+16Ch] [bp-6Ch]@19
  char *v213; // [sp+170h] [bp-68h]@19
  char *v214; // [sp+174h] [bp-64h]@19
  char *v215; // [sp+178h] [bp-60h]@19
  int v216; // [sp+17Ch] [bp-5Ch]@18

  v2 = this;
  v3 = a2;
  mutex = (pthread_mutex_t *)((char *)this + 244);
  SoundRepository::clearEventMap((pthread_mutex_t *)((char *)this + 244));
  SoundMapping::init((SoundEngine *)((char *)v2 + 292), *((ResourcePackManager **)v2 + 71));
  v4 = *(_QWORD *)((char *)v2 + 228);
  v5 = v2;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v6 = *(_QWORD *)((char *)v2 + 228);
    do
    {
      v7 = *(_DWORD *)(v6 + 4);
      if ( v7 )
      {
        v8 = (unsigned int *)(v7 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 == 1 )
          v10 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      }
      v6 += 8;
    }
    while ( v6 != HIDWORD(v4) );
  }
  v12 = (signed int)v5;
  *((_DWORD *)v5 + 58) = v4;
  v158 = (signed int)v5;
  __dmb();
  *((_DWORD *)v5 + 60) = 0;
  SoundSystemFMOD::getCurrentlyPlayingMusicName((SoundSystemFMOD *)&v216, (int)v5 + 8);
  if ( *(_DWORD *)(v216 - 12) )
    sub_119C854(&v212, &v216);
    v213 = 0;
    v214 = 0;
    v215 = 0;
    v213 = (char *)operator new(4u);
    v215 = v213 + 4;
    v214 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v212,
                     (int)&v213,
                     (int)v213);
    SoundSystemFMOD::unloadAllExcept((int)v5 + 8, (unsigned __int64 *)&v213);
    v14 = (int)v214;
    v13 = v213;
    if ( v213 != v214 )
      do
        v17 = (int *)(*(_DWORD *)v13 - 12);
        if ( v17 != &dword_28898C0 )
          v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v17);
        v13 += 4;
      while ( v13 != (char *)v14 );
      v13 = v213;
    v12 = (signed int)v5;
    if ( v13 )
      operator delete(v13);
    v18 = (void *)(v212 - 12);
    if ( (int *)(v212 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v212 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    (*(void (__fastcall **)(SoundEngine *))(*(_DWORD *)v5 + 28))(v5);
    *((_BYTE *)v5 + 290) = 1;
  else
    SoundSystemFMOD::unloadAll((SoundEngine *)((char *)v5 + 8));
  Json::Value::Value(&v211, 0);
  sub_119C884((void **)&v207, "sounds/sound_definitions.json");
  v19 = operator new(1u);
  LODWORD(v20) = sub_106FF38;
  v205 = v19;
  HIDWORD(v20) = sub_106FEF0;
  v206 = v20;
  JsonMergeStrategy::JsonMergeStrategy((int)&v208, &v207, (int)&v211, (int)&v205);
  if ( (_DWORD)v206 )
    ((void (*)(void))v206)();
  v21 = (void *)(v207 - 12);
  if ( (int *)(v207 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v207 - 4);
    if ( &pthread_create )
      __dmb();
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = *(_DWORD *)(v12 + 284);
  sub_119C884((void **)&v202, "sounds/sound_definitions.json");
  v203 = v202;
  v202 = (char *)&unk_28898CC;
  v204 = 0;
  ResourcePackManager::loadAllVersionsOf(v22);
  v23 = v203 - 12;
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v203 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = v202 - 12;
  if ( (int *)(v202 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v202 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  if ( !Json::Value::isNull((Json::Value *)&v211) )
    Json::Value::getMemberNames((Json::Value *)&v200, (int)&v211);
    v25 = (int **)v201;
    v26 = v200;
    if ( v200 != v201 )
      __asm { VMOV.F32        S18, #1.0 }
      v31 = (Json::Value *)&v211;
      v32 = "category";
      v33 = "min_distance";
      v160 = &dword_28898C0;
      v34 = "max_distance";
      v156 = v3;
      __asm { VLDR            S16, =0.0 }
      v35 = (const char *)&unk_257BC67;
        v154 = v25;
        v155 = (int **)v26;
        v47 = (Json::Value *)Json::Value::operator[](v31, v26);
        v48 = (Json::Value *)Json::Value::operator[](v47, v32);
        v49 = (Json::Value *)Json::Value::operator[](v47, v33);
        v50 = (Json::Value *)Json::Value::operator[](v47, v34);
        v51 = Json::Value::operator[](v47, "sounds");
        if ( Json::Value::isString(v48) == 1 )
          sub_119C884((void **)&v198, v35);
          Json::Value::asString((int *)&v199, (int)v48, &v198);
          v52 = 0;
          v53 = (void *)(v198 - 12);
          if ( (int *)(v198 - 12) != v160 )
            v103 = (unsigned int *)(v198 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v44 = __ldrex(v103);
              while ( __strex(v44 - 1, v103) );
              v52 = 0;
            }
            else
              v44 = (*v103)--;
            if ( v44 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v53);
          sub_119C884((void **)&v199, v35);
        v54 = Util::compareNoCase(2, "ui", *((_DWORD *)v199 - 3), v199);
        v55 = Util::compareNoCase(5, "music", *((_DWORD *)v199 - 3), v199);
        v56 = Json::Value::isDouble(v49);
        __asm { VMOV.F32        S20, S16 }
        if ( v56 == 1 )
          _R0 = Json::Value::asFloat(v49, 0.0);
          __asm { VMOV            S20, R0 }
        v58 = Json::Value::isDouble(v50);
        __asm { VMOV.F32        S22, S16 }
        if ( v58 == 1 )
          _R0 = Json::Value::asFloat(v50, 0.0);
          __asm { VMOV            S22, R0 }
        j__ZNSt12__shared_ptrI10SoundEventLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v196);
        EntityInteraction::setInteractText((int *)(v196 + 4), (int *)&v199);
        *(_BYTE *)v196 = v54 | v55;
        Json::Value::begin((Json::Value *)&v195, v51);
        Json::Value::end((Json::Value *)&v194, v51);
        v12 = v158;
        v60 = (v54 | v55) ^ 1;
        while ( !Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v195,
                   (const Json::ValueIteratorBase *)&v194) )
          v73 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v195);
          if ( Json::Value::isString(v73) == 1 )
            v74 = v196;
            sub_119C884((void **)&v185, (const char *)&unk_257BC67);
            Json::Value::asString(&v186, (int)v73, &v185);
            v187 = v52;
            sub_119C854((int *)((unsigned int)&v187 | 4), &v186);
            v189 = 1065353216;
            __asm
              VSTR            S20, [SP,#0x1D8+var_104]
              VSTR            S22, [SP,#0x1D8+var_100]
            v192 = v52;
            v193 = v60;
            v75 = *(_QWORD *)(v74 + 24);
            if ( (_DWORD)v75 == HIDWORD(v75) )
              std::vector<SoundItem,std::allocator<SoundItem>>::_M_emplace_back_aux<SoundItem>(
                (unsigned __int64 *)(v74 + 20),
                (int)&v187);
              v76 = v160;
              *(_BYTE *)v75 = v187;
              *(_DWORD *)(v75 + 4) = v188;
              v188 = v160 + 3;
              v77 = v189;
              v78 = v190;
              v79 = v191;
              *(_WORD *)(v75 + 20) = *(_WORD *)&v192;
              v80 = v75 + 8;
              *(_DWORD *)v80 = v77;
              *(float *)(v80 + 4) = v78;
              *(float *)(v80 + 8) = v79;
              *(_DWORD *)(v74 + 24) += 24;
            v88 = v188 - 3;
            if ( v188 - 3 != v76 )
              v61 = (unsigned int *)(v188 - 1);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v62 = __ldrex(v61);
                while ( __strex(v62 - 1, v61) );
              }
              else
                v62 = (*v61)--;
              if ( v62 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v88);
            v89 = (void *)(v186 - 12);
            if ( (int *)(v186 - 12) != v76 )
              v63 = (unsigned int *)(v186 - 4);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v89);
            v90 = (void *)(v185 - 12);
            if ( (int *)(v185 - 12) != v76 )
              v65 = (unsigned int *)(v185 - 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v90);
            v52 = 0;
          else if ( Json::Value::isObject(v73) == 1 )
            v81 = Json::Value::operator[](v73, "name");
            sub_119C884((void **)&v183, (const char *)&unk_257BC67);
            Json::Value::asString(&v184, v81, &v183);
            v82 = (void *)(v183 - 12);
            if ( (int *)(v183 - 12) != v160 )
              v67 = (unsigned int *)(v183 - 4);
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v82);
            v83 = (Json::Value *)Json::Value::operator[](v73, "volume");
            v84 = (Json::Value *)Json::Value::operator[](v73, "stream");
            v85 = Json::Value::isNull(v83);
            __asm { VMOV.F32        S24, S18 }
            if ( !v85 )
              _R0 = Json::Value::asFloat(v83, 0.0);
              __asm { VMOV            S24, R0 }
            if ( Json::Value::isNull(v84) )
              v87 = 0;
              v87 = Json::Value::asBool(v84, 0);
            v91 = v196;
            v177 = v52;
            sub_119C854((int *)((unsigned int)&v177 | 4), &v184);
              VSTR            S24, [SP,#0x1D8+var_138]
              VSTR            S20, [SP,#0x1D8+var_138+4]
              VSTR            S22, [SP,#0x1D8+var_130]
            v181 = v87;
            v182 = v60;
            v92 = *(_QWORD *)(v91 + 24);
            if ( (_DWORD)v92 == HIDWORD(v92) )
                (unsigned __int64 *)(v91 + 20),
                (int)&v177);
              v93 = v160;
              *(_BYTE *)v92 = v177;
              *(_DWORD *)(v92 + 4) = v178;
              v178 = v160 + 3;
              v94 = v179;
              v95 = v180;
              *(_WORD *)(v92 + 20) = *(_WORD *)&v181;
              *(float *)(v92 + 16) = v95;
              *(_QWORD *)(v92 + 8) = v94;
              *(_DWORD *)(v91 + 24) += 24;
            v96 = v178 - 3;
            if ( v178 - 3 != v93 )
              v69 = (unsigned int *)(v178 - 1);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v96);
            v97 = (void *)(v184 - 12);
            if ( (int *)(v184 - 12) != v93 )
              v71 = (unsigned int *)(v184 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v97);
            v160 = v93;
          if ( *(_BYTE *)(v158 + 440) )
            break;
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v195);
        v175 = v196;
        v35 = (const char *)&unk_257BC67;
        v176 = v197;
        v196 = 0;
        v197 = 0;
        SoundRepository::add(mutex, v155, (int)&v175);
        v98 = v176;
        v31 = (Json::Value *)&v211;
        v34 = "max_distance";
        if ( v176 )
          v99 = (unsigned int *)(v176 + 4);
              v100 = __ldrex(v99);
            while ( __strex(v100 - 1, v99) );
            v100 = (*v99)--;
          if ( v100 == 1 )
            v101 = (unsigned int *)(v98 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 8))(v98);
                v102 = __ldrex(v101);
              while ( __strex(v102 - 1, v101) );
              v102 = (*v101)--;
            if ( v102 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v98 + 12))(v98);
        v104 = v197;
        if ( v197 )
          v105 = (unsigned int *)(v197 + 4);
              v106 = __ldrex(v105);
            while ( __strex(v106 - 1, v105) );
            v106 = (*v105)--;
          if ( v106 == 1 )
            v107 = (unsigned int *)(v104 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 8))(v104);
                v108 = __ldrex(v107);
              while ( __strex(v108 - 1, v107) );
              v108 = (*v107)--;
            if ( v108 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v104 + 12))(v104);
        v109 = v199 - 12;
        v33 = "min_distance";
        v32 = "category";
        if ( (int *)(v199 - 12) != v160 )
          v45 = (unsigned int *)(v199 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v109);
        v25 = v154;
        v26 = (const char **)(v155 + 1);
      while ( v155 + 1 != v154 );
      v26 = v201;
      v110 = v200;
      v3 = v156;
      if ( v200 != v201 )
          v113 = (int *)(*v110 - 12);
          if ( v113 != &dword_28898C0 )
            v111 = (unsigned int *)(*v110 - 4);
                v112 = __ldrex(v111);
              while ( __strex(v112 - 1, v111) );
              v112 = (*v111)--;
            if ( v112 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v113);
          ++v110;
        while ( v110 != v26 );
        v26 = v200;
    if ( v26 )
      operator delete(v26);
    for ( i = *(_DWORD *)(v12 + 256); i; i = *(_DWORD *)i )
      v119 = *(_QWORD *)(i + 8);
      if ( HIDWORD(v119) )
        v120 = (unsigned int *)(HIDWORD(v119) + 4);
            v121 = __ldrex(v120);
          while ( __strex(v121 + 1, v120) );
          ++*v120;
        v171 = v119;
            v122 = __ldrex(v120);
          while ( __strex(v122 + 1, v120) );
        v171 = (unsigned int)v119;
      v172 = v12;
      sub_119C854(&v173, &v216);
      v174 = v12;
      if ( v3 )
        v157 = v3;
        v123 = *(_DWORD *)(v12 + 436);
        v164 = v171;
        if ( HIDWORD(v171) )
          v124 = (unsigned int *)(HIDWORD(v171) + 4);
              v125 = __ldrex(v124);
            while ( __strex(v125 + 1, v124) );
            ++*v124;
        v165 = v172;
        sub_119C854((int *)&v166, &v173);
        v126 = v174;
        v167 = v174;
        v169 = 0;
        v127 = operator new(0x14u);
        *v127 = v164;
        v128 = HIDWORD(v164);
        v164 = 0LL;
        v127[1] = v128;
        v127[2] = v165;
        v127[3] = v166;
        v127[4] = v126;
        v168 = v127;
        v170 = sub_1070340;
        v166 = (char *)&unk_28898CC;
        v169 = (void (*)(void))sub_107034C;
        if ( HIDWORD(v119) )
          v129 = (unsigned int *)(HIDWORD(v119) + 4);
              v130 = __ldrex(v129);
            while ( __strex(v130 + 1, v129) );
            ++*v129;
        v162 = 0;
        v131 = operator new(0xCu);
        *(_DWORD *)v131 = v12;
        *(_QWORD *)((char *)v131 + 4) = v119;
        v161 = v131;
        v163 = sub_1070518;
        v162 = (void (*)(void))sub_1070520;
        ResourceLoadManager::loadResource(v123, 2, 0, (int)&v168, (int)&v161);
        if ( v162 )
          v162();
        v3 = v157;
        if ( v169 )
          v169();
        v132 = v166 - 12;
        if ( (int *)(v166 - 12) != &dword_28898C0 )
          v117 = (unsigned int *)(v166 - 4);
              v118 = __ldrex(v117);
            while ( __strex(v118 - 1, v117) );
            v118 = (*v117)--;
          if ( v118 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v132);
        v133 = HIDWORD(v164);
        if ( HIDWORD(v164) )
          v134 = (unsigned int *)(HIDWORD(v164) + 4);
              v135 = __ldrex(v134);
            while ( __strex(v135 - 1, v134) );
            v135 = (*v134)--;
          if ( v135 == 1 )
            v136 = (unsigned int *)(v133 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v133 + 8))(v133);
                v137 = __ldrex(v136);
              while ( __strex(v137 - 1, v136) );
              v137 = (*v136)--;
            if ( v137 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v133 + 12))(v133);
      else if ( *(_BYTE *)v119 )
        sub_106F618(v12, v119, (const void **)&v216);
        SoundEvent::refreshLoadedSoundLookup((SoundEvent *)v119);
      v138 = (void *)(v173 - 12);
      if ( (int *)(v173 - 12) != &dword_28898C0 )
        v115 = (unsigned int *)(v173 - 4);
            v116 = __ldrex(v115);
          while ( __strex(v116 - 1, v115) );
          v116 = (*v115)--;
        if ( v116 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v138);
      v139 = HIDWORD(v171);
      if ( HIDWORD(v171) )
        v140 = (unsigned int *)(HIDWORD(v171) + 4);
            v141 = __ldrex(v140);
          while ( __strex(v141 - 1, v140) );
          v141 = (*v140)--;
        if ( v141 == 1 )
          v142 = (unsigned int *)(v139 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v139 + 8))(v139);
              v143 = __ldrex(v142);
            while ( __strex(v143 - 1, v142) );
            v143 = (*v142)--;
          if ( v143 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v139 + 12))(v139);
        v144 = (unsigned int *)(HIDWORD(v119) + 4);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 == 1 )
          v146 = (unsigned int *)(HIDWORD(v119) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v119) + 8))(HIDWORD(v119));
              v147 = __ldrex(v146);
            while ( __strex(v147 - 1, v146) );
            v147 = (*v146)--;
          if ( v147 == 1 )
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v119) + 12))(HIDWORD(v119));
  v208 = &off_26EAB00;
  if ( v210 )
    v210();
  v148 = (void *)(v209 - 12);
  if ( (int *)(v209 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v209 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v148);
  Json::Value::~Value((Json::Value *)&v211);
  v149 = (void *)(v216 - 12);
  if ( (int *)(v216 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v216 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
}


FMOD::System *__fastcall SoundEngine::update(int a1, unsigned __int64 *a2, int a3)
{
  unsigned __int64 *v3; // r6@1
  int v4; // r0@1
  int v5; // r10@1
  int v6; // r9@1
  int v12; // r7@2
  int v14; // r4@4
  float v17; // r1@4
  float v20; // r1@4
  float v22; // r1@4
  float v24; // r1@4
  float v26; // r1@4
  float v28; // r1@4
  void (__fastcall *v30)(int, int, __int64 *, __int64 *); // r5@4
  SoundSystemFMOD *v33; // r5@12
  int v34; // r0@16
  SoundItem *v35; // r4@17
  int *v36; // r9@17
  int v37; // r8@17
  int v38; // r10@17
  char v41; // r0@17
  void *v42; // r0@18
  void *v43; // r0@20
  void *v44; // r4@21
  unsigned int *v46; // r2@24
  signed int v47; // r1@26
  int v48; // [sp+Ch] [bp-9Ch]@1
  __int64 v49; // [sp+10h] [bp-98h]@9
  int v50; // [sp+18h] [bp-90h]@9
  __int64 v51; // [sp+20h] [bp-88h]@6
  int v52; // [sp+28h] [bp-80h]@6
  int v53; // [sp+30h] [bp-78h]@4
  int v54; // [sp+34h] [bp-74h]@10

  v3 = a2;
  v48 = a1;
  v4 = *a2 >> 32;
  v5 = *a2;
  v6 = a3;
  if ( v5 != v4 )
  {
    __asm
    {
      VLDR            S18, =0.05
      VLDR            S20, =0.0001
    }
    _R1 = &mce::Math::DEGRAD;
    __asm { VLDR            S16, [R1] }
    v12 = v48 + 8;
    do
      _R5 = *(_DWORD *)(v5 + 4);
      if ( _R5 )
      {
        v14 = *(_DWORD *)v5;
        Entity::getInterpolatedPosition2((Entity *)&v53, *(float *)(v5 + 4), v6);
        _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 64))(_R5);
        __asm
        {
          VLDR            S0, [R5,#0x78]
          VLDR            S2, [R5,#0x7C]
          VMUL.F32        S0, S0, S16
          VLDR            S24, [R0]
          VLDR            S26, [R0,#4]
          VMUL.F32        S22, S16, S2
          VLDR            S28, [R0,#8]
          VMOV            R5, S0
        }
        _R0 = mce::Math::cos(_R5, v17);
          VMOV            R8, S22
          VMOV            S22, R0
        _R5 = mce::Math::sin(_R5, v20);
        _R0 = mce::Math::sin(_R8, v22);
          VMOV            S0, R0
          VMUL.F32        S30, S0, S22
        _R0 = mce::Math::cos(_R8, v24);
          VMOV            S19, R5
          VMUL.F32        S17, S0, S22
          VMUL.F32        S0, S19, S19
          VMUL.F32        S2, S30, S30
          VMUL.F32        S4, S17, S17
          VADD.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VSQRT.F32       S21, S0
        _R0 = mce::Math::sin(_R8, v26);
        __asm { VMOV            S23, R0 }
        _R0 = mce::Math::cos(_R8, v28);
          VMOV            S2, R0
          VNMUL.F32       S0, S19, S23
          VMUL.F32        S2, S2, S19
        v30 = *(void (__fastcall **)(int, int, __int64 *, __int64 *))(*(_DWORD *)v12 + 40);
          VCMPE.F32       S21, S20
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          v51 = *(_QWORD *)&Vec3::ZERO;
          v52 = dword_2822498;
        else
          __asm
          {
            VNEG.F32        S4, S19
            VNEG.F32        S6, S30
            VDIV.F32        S8, S17, S21
            VDIV.F32        S6, S6, S21
            VDIV.F32        S4, S4, S21
            VSTR            S6, [SP,#0xA8+var_88]
            VSTR            S4, [SP,#0xA8+var_88+4]
            VSTR            S8, [SP,#0xA8+var_80]
          }
          VMUL.F32        S4, S22, S22
          VMUL.F32        S6, S0, S0
          VMUL.F32        S8, S2, S2
          VMUL.F32        S28, S28, S18
          VMUL.F32        S26, S26, S18
          VMUL.F32        S24, S24, S18
          VADD.F32        S4, S6, S4
          VADD.F32        S4, S4, S8
          VSQRT.F32       S4, S4
          VCMPE.F32       S4, S20
          v49 = *(_QWORD *)&Vec3::ZERO;
          v50 = dword_2822498;
            VDIV.F32        S0, S0, S4
            VDIV.F32        S6, S22, S4
            VDIV.F32        S2, S2, S4
            VSTR            S0, [SP,#0xA8+var_98]
            VSTR            S6, [SP,#0xA8+var_98+4]
            VSTR            S2, [SP,#0xA8+var_90]
        v30(v12, v14, &v51, &v49);
          VLDR            S0, [SP,#0xA8+var_70]
          VSTR            S0, [SP,#0xA8+var_A8]
        (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v12 + 44))(v12, v14, v53, v54);
          VMOV            R2, S24
          VMOV            R3, S26
          VSTR            S28, [SP,#0xA8+var_A8]
        (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v12 + 48))(v12, v14, _R2, _R3);
        v4 = *((_DWORD *)v3 + 1);
      }
      v5 += 8;
    while ( v5 != v4 );
  }
  v33 = (SoundSystemFMOD *)(v48 + 8);
  if ( *(_BYTE *)(v48 + 289) && !SoundSystemFMOD::isMusicChannelPlaying((SoundSystemFMOD *)(v48 + 8)) )
    *(_BYTE *)(v48 + 289) = 0;
    SoundSystemFMOD::stopMusic(v33);
    (*(void (__fastcall **)(SoundSystemFMOD *))(*(_DWORD *)(v48 + 8) + 104))(v33);
    SoundSystemFMOD::getCurrentlyPlayingMusicName((SoundSystemFMOD *)&v53, (int)v33);
    if ( *(_BYTE *)(v48 + 290) )
      SoundSystemFMOD::unload((int)v33, (int **)&v53);
    *(_BYTE *)(v48 + 290) = 0;
    v34 = *(_DWORD *)(v48 + 240);
    __dmb();
    if ( v34 )
      v35 = *(SoundItem **)(v48 + 240);
      __dmb();
      v36 = (int *)SoundItem::getSoundName(v35);
      v37 = SoundItem::isStream(v35);
      v38 = SoundItem::is3D(v35);
      _R7 = SoundItem::getMinDistance(v35);
      _R0 = SoundItem::getMaxDistance(v35);
      __asm
        VMOV            S0, R7
        VMOV            S2, R0
        VSTR            S0, [SP,#0xA8+var_A8]
        VSTR            S2, [SP,#0xA8+var_A4]
      v41 = SoundSystemFMOD::load((int)v33, v36, v37, v38);
      SoundItem::setLoaded(v35, v41);
      *(_DWORD *)(v48 + 240) = 0;
    v42 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v53 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
      else
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v42);
  if ( SoundSystemBase::getNumListeners(v33) >= 2 )
    v43 = *(void **)(v48 + 208);
    if ( v43 )
      do
        v44 = *(void **)v43;
        operator delete(v43);
        v43 = v44;
      while ( v44 );
    _aeabi_memclr4(*(_QWORD *)(v48 + 200), 4 * (*(_QWORD *)(v48 + 200) >> 32));
    *(_DWORD *)(v48 + 208) = 0;
    *(_DWORD *)(v48 + 212) = 0;
  return SoundSystemFMOD::update(v33);
}


void __fastcall SoundEngine::playUI(int a1, int **a2, int _R2, int a4)
{
  SoundEngine::playUI(a1, a2, _R2, a4);
}


void __fastcall SoundEngine::~SoundEngine(SoundEngine *this)
{
  SoundEngine *v1; // r0@1

  v1 = SoundEngine::~SoundEngine(this);
  j_j_j__ZdlPv_4((void *)v1);
}


FMOD::ChannelControl *__fastcall SoundEngine::unMute(SoundEngine *this)
{
  *((_BYTE *)this + 288) = 0;
  return j_j_j__ZN15SoundSystemFMOD4muteEb((SoundEngine *)((char *)this + 8), 0);
}


void __fastcall SoundEngine::~SoundEngine(SoundEngine *this)
{
  SoundEngine::~SoundEngine(this);
}


void __fastcall SoundEngine::stop(SoundEngine *this, int a2, unsigned __int64 a3)
{
  j_j_j__ZN15SoundSystemFMOD4stopEy((SoundEngine *)((char *)this + 8), a2, a3);
}


void __fastcall SoundEngine::playMusic(int a1, int **a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@2
  SoundSystemFMOD *v5; // r5@2
  char *v6; // r6@2
  int v7; // r0@2
  char *v8; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  char v11; // [sp+4h] [bp-2Ch]@1
  char *v12; // [sp+8h] [bp-28h]@1
  signed __int64 v13; // [sp+Ch] [bp-24h]@1
  int v14; // [sp+14h] [bp-1Ch]@1
  __int16 v15; // [sp+18h] [bp-18h]@1

  v2 = a1;
  v3 = (int *)a2;
  v11 = 0;
  v12 = (char *)&unk_28898CC;
  v13 = 1065353216LL;
  v14 = 0;
  v15 = 256;
  if ( SoundRepository::get((pthread_mutex_t *)(a1 + 244), a2, (int)&v11) == 1 )
  {
    v4 = Options::getMusic(*(Options **)(v2 + 276));
    v5 = (SoundSystemFMOD *)(v2 + 8);
    SoundSystemFMOD::setMusicVolume(v5, *(float *)&v4);
    v6 = SoundItem::getSoundName((SoundItem *)&v11);
    v7 = SoundItem::getVolume((SoundItem *)&v11);
    SoundSystemFMOD::playMusic((int)v5, v3, (int **)v6, *(float *)&v7);
  }
  v8 = v12 - 12;
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


void __fastcall SoundEngine::stop(int a1, const void **a2)
{
  SoundEngine::stop(a1, a2);
}


void __fastcall SoundEngine::stopAllSounds(SoundEngine *this)
{
  SoundEngine::stopAllSounds(this);
}


void __fastcall SoundEngine::stop(int a1, const void **a2)
{
  j_j_j__ZN15SoundSystemFMOD4stopERKSs(a1 + 8, a2);
}


SoundEngine *__fastcall SoundEngine::~SoundEngine(SoundEngine *this)
{
  SoundEngine *v1; // r10@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r4@8
  unsigned int v6; // r0@10
  char *v7; // r0@15
  int v8; // r5@18
  int v9; // r7@18
  int v10; // r4@19
  unsigned int *v11; // r1@20
  unsigned int v12; // r0@22
  unsigned int *v13; // r6@26
  unsigned int v14; // r0@28
  void *v15; // r0@37
  void *v16; // r4@38
  char *v17; // r0@39

  v1 = this;
  *(_DWORD *)this = &off_26DF14C;
  Options::unregisterObserver(*((Options **)this + 69), (void *)this);
  SoundMapping::~SoundMapping((SoundEngine *)((char *)v1 + 292));
  v2 = *((_DWORD *)v1 + 70);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<SoundEvent>>,std::allocator<std::pair<std::string const,std::shared_ptr<SoundEvent>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 248);
  v7 = (char *)*((_DWORD *)v1 + 62);
  if ( v7 && (char *)v1 + 272 != v7 )
    operator delete(v7);
  v9 = *(_QWORD *)((char *)v1 + 228) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 228);
  if ( v8 != v9 )
    do
      v10 = *(_DWORD *)(v8 + 4);
      if ( v10 )
        v11 = (unsigned int *)(v10 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 == 1 )
          v13 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
          }
          else
            v14 = (*v13)--;
          if ( v14 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      v8 += 8;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 57);
  if ( v8 )
    operator delete((void *)v8);
  v15 = (void *)*((_DWORD *)v1 + 52);
  if ( v15 )
      v16 = *(void **)v15;
      operator delete(v15);
      v15 = v16;
    while ( v16 );
  _aeabi_memclr4(*((_QWORD *)v1 + 25), 4 * (*((_QWORD *)v1 + 25) >> 32));
  *((_DWORD *)v1 + 52) = 0;
  *((_DWORD *)v1 + 53) = 0;
  v17 = (char *)*((_DWORD *)v1 + 50);
  if ( v17 && (char *)v1 + 224 != v17 )
    operator delete(v17);
  SoundSystemFMOD::~SoundSystemFMOD((SoundEngine *)((char *)v1 + 8));
  return v1;
}


void __fastcall SoundEngine::stopAllSounds(SoundEngine *this)
{
  j_j_j__ZN15SoundSystemFMOD13stopAllSoundsEv((SoundEngine *)((char *)this + 8));
}


_DWORD *__fastcall SoundEngine::SoundEngine(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r8@1
  int v8; // r10@1
  AppPlatform **v9; // r0@2
  int *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@7
  double v13; // r0@8
  double v14; // r0@9
  int v15; // r7@11
  void *v16; // r4@11
  int v17; // r11@12
  __int64 v18; // r0@12
  int v19; // r7@14
  void *v20; // r4@14
  int v21; // r0@15
  AppPlatform **v22; // r0@22
  int v23; // r6@25
  _DWORD *v24; // r0@25
  __int64 v25; // r1@25
  int v26; // r6@27
  _DWORD *v27; // r0@27
  __int64 v28; // r1@27
  int v29; // r0@29
  int v30; // r0@29
  unsigned int *v32; // r2@31
  signed int v33; // r1@33
  unsigned int *v34; // r2@35
  _DWORD *v35; // [sp+8h] [bp-50h]@27
  __int64 v36; // [sp+10h] [bp-48h]@27
  _DWORD *v37; // [sp+18h] [bp-40h]@25
  __int64 v38; // [sp+20h] [bp-38h]@25
  int v39; // [sp+28h] [bp-30h]@7
  int v40; // [sp+2Ch] [bp-2Ch]@4

  v5 = a1;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  *a1 = &off_26DF14C;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v9 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v9 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v10 = AppPlatform::getTempPath(*v9);
  sub_119C854(&v40, v10);
  sub_119C894((const void **)&v40, "/temp_sounds/", 0xDu);
    v11 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v11 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v11 + 20))(&v39);
  SoundSystemFMOD::SoundSystemFMOD((int)(v5 + 2), v8, &v40, &v39);
  v12 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v39 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
  HIDWORD(v13) = v40;
  LODWORD(v13) = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v40 - 4);
        HIDWORD(v13) = __ldrex(v34);
      while ( __strex(HIDWORD(v13) - 1, v34) );
      HIDWORD(v13) = (*v34)--;
    if ( SHIDWORD(v13) <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)LODWORD(v13));
  v5[52] = 0;
  v5[53] = 0;
  v5[54] = 1065353216;
  LODWORD(v13) = v5 + 54;
  *(_DWORD *)(LODWORD(v13) + 4) = 0;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v13)));
  v5[51] = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
    v5[56] = 0;
    v16 = v5 + 56;
    if ( LODWORD(v14) >= 0x40000000 )
      sub_119C874();
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  v5[50] = v16;
  v5[57] = 0;
  v17 = (int)(v5 + 57);
  *(_DWORD *)(v17 + 12) = 0;
  *(_DWORD *)(v17 + 4) = 0;
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v17 + 16) = 0;
  *(_DWORD *)(v17 + 28) = 0;
  *(_DWORD *)(v17 + 32) = 0;
  *(_DWORD *)(v17 + 36) = 1065353216;
  *(_DWORD *)(v17 + 40) = 0;
  LODWORD(v14) = v5 + 66;
  v18 = __PAIR__(10, sub_119C844(v14));
  v5[63] = v18;
  if ( (_DWORD)v18 == 1 )
    v20 = v5 + 68;
    v5[68] = 0;
    if ( (unsigned int)v18 >= 0x40000000 )
    v19 = 4 * v18;
    v20 = operator new(4 * v18);
    _aeabi_memclr4(v20, v19);
  v5[62] = v20;
  v5[69] = *(_DWORD *)v6;
  v21 = *(_DWORD *)(v6 + 4);
  v5[70] = v21;
  if ( v21 )
    LODWORD(v18) = v18 + 4;
      {
        HIDWORD(v18) = __ldrex((unsigned int *)v18);
        ++HIDWORD(v18);
      }
      while ( __strex(HIDWORD(v18), (unsigned int *)v18) );
      HIDWORD(v18) = *(_DWORD *)v18 + 1;
      *(_DWORD *)v18 = HIDWORD(v18);
  v5[71] = v8;
  *((_WORD *)v5 + 144) = 0;
  *((_BYTE *)v5 + 290) = 0;
  LODWORD(v18) = v5 + 73;
  SoundMapping::SoundMapping(v18);
  v5[109] = a5;
    v22 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v22 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  *((_BYTE *)v5 + 440) = AppPlatform::isLowMemoryDevice(*v22);
  if ( SoundSystemFMOD::preinit((SoundSystemFMOD *)(v5 + 2)) )
    SoundSystemFMOD::setOutputDevice((int)(v5 + 2), v7);
    SoundSystemFMOD::init((SoundSystemFMOD *)(v5 + 2));
    v23 = Options::get(v5[69], 42);
    v24 = operator new(4u);
    LODWORD(v25) = sub_106FD12;
    *v24 = v5;
    HIDWORD(v25) = sub_106FCF8;
    v37 = v24;
    v38 = v25;
    Option::registerObserver(v23, (int)v5, (int)&v37);
    if ( (_DWORD)v38 )
      ((void (*)(void))v38)();
    v26 = Options::get(v5[69], 43);
    v27 = operator new(4u);
    LODWORD(v28) = sub_106FD62;
    *v27 = v5;
    HIDWORD(v28) = sub_106FD48;
    v35 = v27;
    v36 = v28;
    Option::registerObserver(v26, (int)v5, (int)&v35);
    if ( (_DWORD)v36 )
      ((void (*)(void))v36)();
    v29 = Options::getSound((Options *)v5[69]);
    SoundSystemFMOD::setSoundVolume((SoundSystemFMOD *)(v5 + 2), *(float *)&v29);
    v30 = Options::getMusic((Options *)v5[69]);
    SoundSystemFMOD::setMusicVolume((SoundSystemFMOD *)(v5 + 2), *(float *)&v30);
  return v5;
}


int __fastcall SoundEngine::_loadSoundItem(SoundEngine *this, SoundItem *a2)
{
  SoundItem *v2; // r4@1
  SoundEngine *v3; // r8@1
  int *v4; // r9@1
  int v5; // r7@1
  int v6; // r5@1
  char v7; // r1@1

  v2 = a2;
  v3 = this;
  v4 = (int *)SoundItem::getSoundName(a2);
  v5 = SoundItem::isStream(v2);
  v6 = SoundItem::is3D(v2);
  SoundItem::getMinDistance(v2);
  SoundItem::getMaxDistance(v2);
  v7 = SoundSystemFMOD::load((int)v3 + 8, v4, v5, v6);
  return j_j_j__ZN9SoundItem9setLoadedEb(v2, v7);
}


unsigned int __fastcall SoundEngine::unloadMusic(SoundEngine *this)
{
  SoundEngine *v1; // r4@1
  char *v2; // r9@1
  unsigned int result; // r0@1
  int i; // r5@1
  __int64 v5; // kr00_8@2
  unsigned int *v6; // r0@3
  unsigned int v7; // r1@5
  SoundItem *v8; // r4@9
  SoundItem *j; // r6@9
  char *v10; // r0@10
  unsigned int *v11; // r1@13
  unsigned int *v12; // r4@19

  v1 = this;
  v2 = (char *)this + 8;
  result = (unsigned int)SoundSystemFMOD::stopMusic((SoundEngine *)((char *)this + 8));
  for ( i = *((_DWORD *)v1 + 64); i; i = *(_DWORD *)i )
  {
    v5 = *(_QWORD *)(i + 8);
    if ( HIDWORD(v5) )
    {
      v6 = (unsigned int *)(HIDWORD(v5) + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 + 1, v6) );
      }
      else
        ++*v6;
    }
    result = Util::compareNoCase(5, "music", *(_DWORD *)(*(_DWORD *)(v5 + 4) - 12), *(_BYTE **)(v5 + 4));
    if ( result == 1 )
      v8 = (SoundItem *)(*(_QWORD *)(v5 + 20) >> 32);
      for ( j = (SoundItem *)*(_QWORD *)(v5 + 20); v8 != j; j = (SoundItem *)((char *)j + 24) )
        v10 = SoundItem::getSoundName(j);
        SoundSystemFMOD::unload((int)v2, (int **)v10);
        SoundItem::setLoaded(j, 0);
      result = SoundEvent::refreshLoadedSoundLookup((SoundEvent *)v5);
      v11 = (unsigned int *)(HIDWORD(v5) + 4);
          result = __ldrex(v11);
        while ( __strex(result - 1, v11) );
        result = (*v11)--;
      if ( result == 1 )
        v12 = (unsigned int *)(HIDWORD(v5) + 8);
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 8))(HIDWORD(v5));
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v12);
          while ( __strex(result - 1, v12) );
        }
        else
          result = (*v12)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v5) + 12))(HIDWORD(v5));
  }
  return result;
}


void __fastcall SoundEngine::stop(SoundEngine *this, int a2, unsigned __int64 a3)
{
  SoundEngine::stop(this, a2, a3);
}
