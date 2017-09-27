

void __fastcall Potion::getPotentencyDescription(int *a1, int a2, int a3, int a4)
{
  Potion::getPotentencyDescription(a1, a2, a3, a4);
}


void __fastcall Potion::appendFormattedPotionText(int a1, const void **a2, int a3, int a4)
{
  const void **v4; // r11@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r7@1
  int v8; // r0@2
  MobEffect *v9; // r10@2
  int v10; // r0@2
  int *v11; // r1@2
  const void **v12; // r0@4
  const void **v13; // r0@4
  char *v14; // r0@4
  char *v15; // r0@5
  void *v16; // r0@6
  char *v17; // r0@8
  unsigned __int64 *v18; // r5@8
  int v19; // r0@8
  __int64 v20; // kr00_8@8
  void *v21; // r9@9
  int v22; // r1@9
  signed int v23; // r0@10
  int v24; // r7@13
  Attribute **v25; // r10@14
  int v26; // r3@14
  unsigned int *v27; // r3@15
  unsigned int v28; // r7@17
  __int64 v29; // kr10_8@22
  unsigned int v30; // r1@22
  const void **v31; // r0@24
  const void **v32; // r0@26
  char *v33; // r0@26
  char *v34; // r0@27
  void *v35; // r0@28
  void *v36; // r0@29
  char *v37; // r0@30
  int *v38; // r2@31
  void *v43; // r6@33
  int v44; // r0@33
  unsigned int *v45; // r2@34
  signed int v46; // r1@36
  unsigned int *v47; // r2@38
  signed int v48; // r1@40
  unsigned int *v49; // r2@42
  signed int v50; // r1@44
  unsigned int *v51; // r2@58
  signed int v52; // r1@60
  void **v53; // r5@61
  unsigned int *v54; // r2@62
  signed int v55; // r1@64
  unsigned int *v56; // r2@66
  signed int v57; // r1@68
  int *v58; // r5@69
  unsigned int *v59; // r2@70
  signed int v60; // r1@72
  unsigned int *v61; // r2@74
  signed int v62; // r1@76
  unsigned int *v63; // r2@78
  signed int v64; // r1@80
  unsigned int *v65; // r2@82
  signed int v66; // r1@84
  unsigned int *v67; // r2@86
  signed int v68; // r1@88
  unsigned int *v69; // r2@90
  signed int v70; // r1@92
  unsigned int *v71; // r2@94
  signed int v72; // r1@96
  unsigned int *v73; // r2@98
  signed int v74; // r1@100
  unsigned int *v75; // r2@102
  signed int v76; // r1@104
  int v77; // r5@154
  int v78; // r11@154
  int v79; // r4@154
  int (__fastcall *v80)(MobEffect *, int, int); // r6@154
  int v81; // r0@154
  const void **v85; // r5@156
  void *v86; // r0@156
  const char *v87; // r2@157
  const void **v88; // r0@159
  void *v89; // r0@159
  __int64 v90; // r2@159
  char *v91; // r0@159
  __int64 v92; // r4@160
  unsigned int *v93; // r2@162
  signed int v94; // r1@164
  int *v95; // r0@170
  void *v96; // r0@175
  void *v97; // r0@176
  char *v98; // r0@177
  void *v99; // r0@178
  const void **v100; // r0@179
  const void **v101; // r0@179
  char *v102; // r0@179
  char *v103; // r0@180
  void *v104; // r0@181
  void *v105; // r0@182
  void *v106; // r0@183
  void *v107; // r0@184
  int v108; // r0@187
  int v109; // r7@188
  int v110; // r5@188
  unsigned int *v111; // r1@189
  unsigned int v112; // r0@191
  unsigned int *v113; // r4@195
  unsigned int v114; // r0@197
  void *v115; // r0@205
  void *v116; // r0@206
  unsigned int *v117; // r2@208
  signed int v118; // r1@210
  unsigned int *v119; // r2@212
  signed int v120; // r1@214
  unsigned int *v121; // r2@224
  signed int v122; // r1@226
  unsigned int *v123; // r2@228
  signed int v124; // r1@230
  unsigned int *v125; // r2@232
  signed int v126; // r1@234
  unsigned int *v127; // r2@236
  signed int v128; // r1@238
  unsigned int *v129; // r2@240
  signed int v130; // r1@242
  void **v131; // [sp+20h] [bp-1A8h]@33
  void **v132; // [sp+24h] [bp-1A4h]@33
  void **v133; // [sp+28h] [bp-1A0h]@33
  void **v134; // [sp+2Ch] [bp-19Ch]@33
  void **v135; // [sp+30h] [bp-198h]@33
  const void **v136; // [sp+34h] [bp-194h]@31
  int *v137; // [sp+3Ch] [bp-18Ch]@33
  Attribute **v138; // [sp+60h] [bp-168h]@154
  MobEffectInstance *v139; // [sp+64h] [bp-164h]@9
  MobEffect *v140; // [sp+68h] [bp-160h]@9
  int v141; // [sp+6Ch] [bp-15Ch]@69
  char *v142; // [sp+70h] [bp-158h]@86
  char *v143; // [sp+74h] [bp-154h]@82
  int v144; // [sp+78h] [bp-150h]@70
  int v145; // [sp+7Ch] [bp-14Ch]@66
  void *ptr; // [sp+80h] [bp-148h]@159
  void *v147; // [sp+84h] [bp-144h]@159
  char *v148; // [sp+88h] [bp-140h]@159
  int v149; // [sp+8Ch] [bp-13Ch]@61
  char *v150; // [sp+90h] [bp-138h]@74
  char *v151; // [sp+94h] [bp-134h]@62
  int v152; // [sp+98h] [bp-130h]@94
  int v153; // [sp+9Ch] [bp-12Ch]@58
  int v154; // [sp+A0h] [bp-128h]@98
  void **v155; // [sp+A4h] [bp-124h]@156
  int v156; // [sp+A8h] [bp-120h]@185
  void **v157; // [sp+ACh] [bp-11Ch]@156
  void **v158; // [sp+B0h] [bp-118h]@159
  int v159; // [sp+CCh] [bp-FCh]@185
  int v160; // [sp+D4h] [bp-F4h]@102
  int v161; // [sp+D8h] [bp-F0h]@185
  int v162; // [sp+164h] [bp-64h]@22
  int v163; // [sp+168h] [bp-60h]@22
  char *v164; // [sp+16Ch] [bp-5Ch]@22
  char *v165; // [sp+170h] [bp-58h]@26
  char *v166; // [sp+174h] [bp-54h]@26
  int v167; // [sp+178h] [bp-50h]@4
  char *v168; // [sp+17Ch] [bp-4Ch]@4
  char *v169; // [sp+180h] [bp-48h]@4
  int v170; // [sp+184h] [bp-44h]@4
  int v171; // [sp+188h] [bp-40h]@4

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( sub_21E7D6C((const void **)(a1 + 8), (const char *)&unk_257BC67) )
  {
    v8 = MobEffectInstance::getId((MobEffectInstance *)(v5 + 12));
    v9 = (MobEffect *)MobEffect::mMobEffects[v8];
    v10 = MobEffect::isHarmful((MobEffect *)MobEffect::mMobEffects[v8]);
    v11 = (int *)&unk_2804864;
    if ( v10 )
      v11 = (int *)&unk_2804878;
    sub_21E8AF4(&v171, v11);
    Potion::getPotentencyDescription(&v170, v5, v7, v6);
    sub_21E8AF4(&v167, &Util::NEW_LINE);
    sub_21E72F0((const void **)&v167, (const void **)&v171);
    v12 = sub_21E72F0((const void **)&v167, (const void **)&v170);
    v168 = (char *)*v12;
    *v12 = &unk_28898CC;
    v13 = sub_21E72F0((const void **)&v168, (const void **)&unk_2804894);
    v169 = (char *)*v13;
    *v13 = &unk_28898CC;
    sub_21E72F0(v4, (const void **)&v169);
    v14 = v169 - 12;
    if ( (int *)(v169 - 12) != &dword_28898C0 )
    {
      v45 = (unsigned int *)(v169 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = v168 - 12;
    if ( (int *)(v168 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v168 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v167 - 12);
    if ( (int *)(v167 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v167 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    if ( MobEffectInstance::getId((MobEffectInstance *)(v5 + 12)) >= 1 )
      v17 = MobEffect::viewAttributeModifiers(v9);
      v18 = (unsigned __int64 *)v17;
      v20 = *(_QWORD *)v17;
      v19 = *(_QWORD *)v17 >> 32;
      if ( v19 == (_DWORD)v20 )
        v139 = (MobEffectInstance *)(v5 + 12);
        v140 = v9;
        v21 = 0;
        v22 = v19;
        v23 = v19 - v20;
        if ( (unsigned int)(-1431655765 * (v23 >> 2)) >= 0x15555556 )
          sub_21E57F4();
        v21 = operator new(v23);
        v19 = *v18 >> 32;
        v22 = *v18;
      if ( v22 != v19 )
        v24 = (int)v21;
        {
          v25 = (Attribute **)v24;
          *(_DWORD *)v24 = *(_DWORD *)v22;
          *(_DWORD *)(v24 + 4) = *(_DWORD *)(v22 + 4);
          v26 = *(_DWORD *)(v22 + 8);
          *(_DWORD *)(v24 + 8) = v26;
          if ( v26 )
          {
            v27 = (unsigned int *)(v26 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 + 1, v27) );
            }
            else
              ++*v27;
          }
          v22 += 12;
          v24 = (int)(v25 + 3);
        }
        while ( v22 != v19 );
        if ( (void *)v24 != v21 )
          EntityInteraction::setInteractText(&v171, (int *)&unk_280485C);
          v164 = (char *)&unk_28898CC;
          sub_21E6FCC((const void **)&v164, *(_DWORD *)(v171 - 12) + 2);
          sub_21E7408((const void **)&v164, "\n\n", 2u);
          sub_21E72F0((const void **)&v164, (const void **)&v171);
          sub_21E94B4((void **)&v162, "potion.effects.whenDrank");
          I18n::get(&v163, (int **)&v162);
          v29 = *(_QWORD *)(v164 - 12);
          v30 = *(_DWORD *)(v163 - 12) + v29;
          if ( v30 > HIDWORD(v29) && v30 <= *(_DWORD *)(v163 - 8) )
            v31 = sub_21E82D8((const void **)&v163, 0, (unsigned int)v164, (_BYTE *)v29);
          else
            v31 = sub_21E72F0((const void **)&v164, (const void **)&v163);
          v165 = (char *)*v31;
          *v31 = &unk_28898CC;
          v32 = sub_21E72F0((const void **)&v165, (const void **)&unk_2804894);
          v166 = (char *)*v32;
          *v32 = &unk_28898CC;
          sub_21E72F0(v4, (const void **)&v166);
          v33 = v166 - 12;
          if ( (int *)(v166 - 12) != &dword_28898C0 )
            v121 = (unsigned int *)(v166 - 4);
                v122 = __ldrex(v121);
              while ( __strex(v122 - 1, v121) );
              v122 = (*v121)--;
            if ( v122 <= 0 )
              j_j_j_j__ZdlPv_9(v33);
          v34 = v165 - 12;
          if ( (int *)(v165 - 12) != &dword_28898C0 )
            v123 = (unsigned int *)(v165 - 4);
                v124 = __ldrex(v123);
              while ( __strex(v124 - 1, v123) );
              v124 = (*v123)--;
            if ( v124 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          v35 = (void *)(v163 - 12);
          if ( (int *)(v163 - 12) != &dword_28898C0 )
            v125 = (unsigned int *)(v163 - 4);
                v126 = __ldrex(v125);
              while ( __strex(v126 - 1, v125) );
              v126 = (*v125)--;
            if ( v126 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          v36 = (void *)(v162 - 12);
          if ( (int *)(v162 - 12) != &dword_28898C0 )
            v127 = (unsigned int *)(v162 - 4);
                v128 = __ldrex(v127);
              while ( __strex(v128 - 1, v127) );
              v128 = (*v127)--;
            if ( v128 <= 0 )
              j_j_j_j__ZdlPv_9(v36);
          v37 = v164 - 12;
          if ( (int *)(v164 - 12) != &dword_28898C0 )
            v129 = (unsigned int *)(v164 - 4);
                v130 = __ldrex(v129);
              while ( __strex(v130 - 1, v129) );
              v130 = (*v129)--;
            if ( v130 <= 0 )
              j_j_j_j__ZdlPv_9(v37);
          v136 = v4;
          v38 = (int *)&unk_280486C;
          __asm { VLDR            S16, =100.0 }
          if ( !_ZF )
            v38 = (int *)&unk_2804878;
          v137 = v38;
          v135 = off_26D3F60;
          v134 = (void **)off_26D3F6C;
          v133 = (void **)off_26D3F68;
          v131 = off_26D3F84;
          v132 = off_26D3F80[0];
          v43 = &unk_28898CC;
          v44 = (int)v21;
          do
            v77 = *(_DWORD *)(v44 + 4);
            v78 = (int)v43;
            v138 = (Attribute **)v44;
            v79 = AttributeModifier::getOperation(*(AttributeModifier **)(v44 + 4));
            v80 = *(int (__fastcall **)(MobEffect *, int, int))(*(_DWORD *)v140 + 24);
            v81 = MobEffectInstance::getAmplifier(v139);
            _R0 = v80(v140, v81, v77);
            __asm
              VMOV            S18, R0
              VMUL.F32        S0, S18, S16
            if ( !_CF )
              __asm { VMOVCC.F32      S18, S0 }
            sub_21D103C((int)&v155, 24);
              VABS.F32        S0, S18
              VCVT.F64.F32    D0, S0
              VMOV            R2, R3, D0
            sub_21CC9F0((char *)&v157);
            v85 = (const void **)Attribute::getName(*v138);
            v43 = (void *)v78;
            v153 = v78;
            sub_21E6FCC((const void **)&v153, *((_DWORD *)*v85 - 3) + 15);
            sub_21E7408((const void **)&v153, "attribute.name.", 0xFu);
            sub_21E72F0((const void **)&v153, v85);
            I18n::get(&v154, (int **)&v153);
            v53 = (void **)&v149;
            v86 = (void *)(v153 - 12);
            if ( (int *)(v153 - 12) != &dword_28898C0 )
              v51 = (unsigned int *)(v153 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v52 = __ldrex(v51);
                while ( __strex(v52 - 1, v51) );
                v53 = (void **)&v149;
              }
              else
                v52 = (*v51)--;
              if ( v52 <= 0 )
                j_j_j_j__ZdlPv_9(v86);
            Util::toString<int,(void *)0,(void *)0>(v53, v79);
              VCMPE.F32       S18, #0.0
              VMRS            APSR_nzcv, FPSCR
            v87 = "attribute.modifier.take.";
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v87 = "attribute.modifier.plus.";
            v88 = sub_21E82D8((const void **)v53, 0, (unsigned int)v87, (_BYTE *)0x18);
            v150 = (char *)*v88;
            *v88 = (const void *)v78;
            sub_21CFED8(&v144, (int)&v158);
            sub_21E8AF4(&v145, &v154);
            ptr = 0;
            v147 = 0;
            v148 = 0;
            v89 = operator new(8u);
            ptr = v89;
            v148 = (char *)v89 + 8;
            v147 = (void *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                             (int)&v144,
                             (int)&ptr,
                             (int)v89);
            I18n::get((int *)&v151, (int *)&v150, (unsigned __int64 *)&ptr);
            Util::format((Util *)&v152, v151, v90);
            v91 = v151 - 12;
            if ( (int *)(v151 - 12) != &dword_28898C0 )
              v54 = (unsigned int *)(v151 - 4);
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j__ZdlPv_9(v91);
            v92 = *(_QWORD *)&ptr;
            if ( ptr != v147 )
                v95 = (int *)(*(_DWORD *)v92 - 12);
                if ( v95 != &dword_28898C0 )
                {
                  v93 = (unsigned int *)(*(_DWORD *)v92 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v94 = __ldrex(v93);
                    while ( __strex(v94 - 1, v93) );
                  }
                  else
                    v94 = (*v93)--;
                  if ( v94 <= 0 )
                    j_j_j_j__ZdlPv_9(v95);
                }
                LODWORD(v92) = v92 + 4;
              while ( (_DWORD)v92 != HIDWORD(v92) );
              LODWORD(v92) = ptr;
            if ( (_DWORD)v92 )
              operator delete((void *)v92);
            v58 = &v141;
            v96 = (void *)(v145 - 12);
            if ( (int *)(v145 - 12) != &dword_28898C0 )
              v56 = (unsigned int *)(v145 - 4);
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
                v58 = &v141;
                v57 = (*v56)--;
              if ( v57 <= 0 )
                j_j_j_j__ZdlPv_9(v96);
            v97 = (void *)(v144 - 12);
            if ( (int *)(v144 - 12) != &dword_28898C0 )
              v59 = (unsigned int *)(v144 - 4);
                  v60 = __ldrex(v59);
                while ( __strex(v60 - 1, v59) );
                v60 = (*v59)--;
              if ( v60 <= 0 )
                j_j_j_j__ZdlPv_9(v97);
            v98 = v150 - 12;
            if ( (int *)(v150 - 12) != &dword_28898C0 )
              v61 = (unsigned int *)(v150 - 4);
                  v62 = __ldrex(v61);
                while ( __strex(v62 - 1, v61) );
                v62 = (*v61)--;
              if ( v62 <= 0 )
                j_j_j_j__ZdlPv_9(v98);
            v99 = (void *)(v149 - 12);
            if ( (int *)(v149 - 12) != &dword_28898C0 )
              v63 = (unsigned int *)(v149 - 4);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j__ZdlPv_9(v99);
            EntityInteraction::setInteractText(&v171, v137);
            sub_21E8AF4(v58, &Util::NEW_LINE);
            sub_21E72F0((const void **)v58, (const void **)&v171);
            v100 = sub_21E72F0((const void **)v58, (const void **)&v152);
            v142 = (char *)*v100;
            *v100 = (const void *)v78;
            v101 = sub_21E72F0((const void **)&v142, (const void **)&unk_2804894);
            v143 = (char *)*v101;
            *v101 = (const void *)v78;
            sub_21E72F0(v136, (const void **)&v143);
            v102 = v143 - 12;
            if ( (int *)(v143 - 12) != &dword_28898C0 )
              v65 = (unsigned int *)(v143 - 4);
                  v66 = __ldrex(v65);
                while ( __strex(v66 - 1, v65) );
                v66 = (*v65)--;
              if ( v66 <= 0 )
                j_j_j_j__ZdlPv_9(v102);
            v103 = v142 - 12;
            if ( (int *)(v142 - 12) != &dword_28898C0 )
              v67 = (unsigned int *)(v142 - 4);
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j__ZdlPv_9(v103);
            v104 = (void *)(v141 - 12);
            if ( (int *)(v141 - 12) != &dword_28898C0 )
              v69 = (unsigned int *)(v141 - 4);
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j__ZdlPv_9(v104);
            v105 = (void *)(v152 - 12);
            if ( (int *)(v152 - 12) != &dword_28898C0 )
              v71 = (unsigned int *)(v152 - 4);
                  v72 = __ldrex(v71);
                while ( __strex(v72 - 1, v71) );
                v72 = (*v71)--;
              if ( v72 <= 0 )
                j_j_j_j__ZdlPv_9(v105);
            v106 = (void *)(v154 - 12);
            if ( (int *)(v154 - 12) != &dword_28898C0 )
              v73 = (unsigned int *)(v154 - 4);
                  v74 = __ldrex(v73);
                while ( __strex(v74 - 1, v73) );
                v74 = (*v73)--;
              if ( v74 <= 0 )
                j_j_j_j__ZdlPv_9(v106);
            v155 = v135;
            *(_DWORD *)((char *)*(v135 - 3) + (_DWORD)&v155) = v132;
            v157 = v131;
            v158 = &off_27734E8;
            v107 = (void *)(v160 - 12);
            if ( (int *)(v160 - 12) != &dword_28898C0 )
              v75 = (unsigned int *)(v160 - 4);
                  v76 = __ldrex(v75);
                while ( __strex(v76 - 1, v75) );
                v76 = (*v75)--;
              if ( v76 <= 0 )
                j_j_j_j__ZdlPv_9(v107);
            v158 = &off_26D40A8;
            sub_21C802C((unsigned int **)&v159);
            v155 = v133;
            *(_DWORD *)((char *)*(v133 - 3) + (_DWORD)&v155) = v134;
            v156 = 0;
            sub_21B6560(&v161);
            v44 = (int)(v138 + 3);
          while ( v138 != v25 );
          if ( (void *)v24 != v21 )
            v108 = (int)v21;
            do
              v109 = v108;
              v110 = *(_DWORD *)(v108 + 8);
              if ( v110 )
                v111 = (unsigned int *)(v110 + 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v112 = __ldrex(v111);
                  while ( __strex(v112 - 1, v111) );
                else
                  v112 = (*v111)--;
                if ( v112 == 1 )
                  v113 = (unsigned int *)(v110 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 8))(v110);
                      v114 = __ldrex(v113);
                    while ( __strex(v114 - 1, v113) );
                    v114 = (*v113)--;
                  if ( v114 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v110 + 12))(v110);
              v108 = v109 + 12;
            while ( (Attribute **)v109 != v25 );
      if ( v21 )
        operator delete(v21);
    v115 = (void *)(v170 - 12);
    if ( (int *)(v170 - 12) != &dword_28898C0 )
      v117 = (unsigned int *)(v170 - 4);
          v118 = __ldrex(v117);
        while ( __strex(v118 - 1, v117) );
        v118 = (*v117)--;
      if ( v118 <= 0 )
        j_j_j_j__ZdlPv_9(v115);
    v116 = (void *)(v171 - 12);
    if ( (int *)(v171 - 12) != &dword_28898C0 )
      v119 = (unsigned int *)(v171 - 4);
          v120 = __ldrex(v119);
        while ( __strex(v120 - 1, v119) );
        v120 = (*v119)--;
      if ( v120 <= 0 )
        j_j_j_j__ZdlPv_9(v116);
  }
}


int __fastcall Potion::getPotionCount(Potion *this)
{
  return Potion::mLastId;
}


char *__fastcall Potion::getMobEffect(Potion *this)
{
  return (char *)this + 12;
}


void __fastcall Potion::appendFormattedPotionText(int a1, const void **a2, int a3, int a4)
{
  Potion::appendFormattedPotionText(a1, a2, a3, a4);
}


void __fastcall Potion::effectPotencyToString(Potion *this, int a2)
{
  MobEffectInstance *v2; // r5@1
  void **v3; // r4@1
  int v4; // r0@2
  const void **v5; // r0@2
  char *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+8h] [bp-28h]@2
  char *v13; // [sp+Ch] [bp-24h]@2

  v2 = (MobEffectInstance *)(a2 + 12);
  v3 = (void **)this;
  if ( MobEffectInstance::getAmplifier((MobEffectInstance *)(a2 + 12)) < 1 )
  {
    sub_21E94B4(v3, (const char *)&unk_257BC67);
  }
  else
    v4 = MobEffectInstance::getAmplifier(v2);
    Util::toString<int,(void *)0,(void *)0>((void **)&v12, v4);
    v5 = sub_21E82D8((const void **)&v12, 0, (unsigned int)"potion.potency.", (_BYTE *)0xF);
    v13 = (char *)*v5;
    *v5 = &unk_28898CC;
    I18n::get((int *)v3, (int **)&v13);
    v6 = v13 - 12;
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v12 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
}


int __fastcall Potion::Potion(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+0h] [bp-30h]@1
  int v13; // [sp+4h] [bp-2Ch]@1
  int v14; // [sp+8h] [bp-28h]@1
  int v15; // [sp+Ch] [bp-24h]@1
  int v16; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
  MobEffectInstance::MobEffectInstance((MobEffectInstance *)&v12, 0);
  *(_DWORD *)v3 = 0;
  sub_21E8AF4((int *)(v3 + 4), v2);
  sub_21E8AF4((int *)(v3 + 8), &v16);
  v4 = v3 + 12;
  v5 = v13;
  v6 = v14;
  v7 = v15;
  *(_DWORD *)v4 = v12;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  return v3;
}


void __fastcall Potion::effectPotencyToString(Potion *this, int a2)
{
  Potion::effectPotencyToString(this, a2);
}


void __fastcall Potion::getDescriptionId(void **a1, int a2, int a3)
{
  Potion::getDescriptionId(a1, a2, a3);
}


int __fastcall Potion::Potion(int a1, int *a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r12@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  sub_21E8AF4((int *)(a1 + 8), a2);
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *(_DWORD *)(v4 + 8);
  v7 = *(_DWORD *)(v4 + 12);
  v8 = v3 + 12;
  *(_DWORD *)v8 = *(_DWORD *)v4;
  *(_DWORD *)(v8 + 4) = v5;
  *(_DWORD *)(v8 + 8) = v6;
  *(_DWORD *)(v8 + 12) = v7;
  return v3;
}


int __fastcall Potion::Potion(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  MobEffectInstance::MobEffectInstance((MobEffectInstance *)(a1 + 12), 0);
  return v1;
}


int __fastcall Potion::getBasePotion(Potion *this, int a2)
{
  _DWORD *v2; // r1@1

  v2 = &Item::mPotion;
  if ( this == (Potion *)2 )
    v2 = &Item::mLingering_potion;
  if ( this == (Potion *)1 )
    v2 = &Item::mSplash_potion;
  return *v2;
}


void __fastcall Potion::getName(int *a1, int a2, int a3)
{
  int *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  Potion::getDescriptionId((void **)&v7, a2, a3);
  I18n::get(v3, (int **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall Potion::Potion(int a1, int *a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r6@1
  int v6; // r5@1
  int *v7; // r7@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r12@1

  v4 = a1;
  *(_DWORD *)a1 = 0;
  v5 = (int *)(a1 + 8);
  v6 = a4;
  v7 = a3;
  sub_21E8AF4((int *)(a1 + 4), a2);
  sub_21E8AF4(v5, v7);
  v8 = *(_DWORD *)(v6 + 4);
  v9 = *(_DWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v6 + 12);
  v11 = v4 + 12;
  *(_DWORD *)v11 = *(_DWORD *)v6;
  *(_DWORD *)(v11 + 4) = v8;
  *(_DWORD *)(v11 + 8) = v9;
  *(_DWORD *)(v11 + 12) = v10;
  return v4;
}


int __fastcall Potion::addPotion(int result)
{
  int v1; // r3@1
  _DWORD *v2; // r1@1
  _DWORD *v3; // r5@1
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // t1@1
  int v7; // r6@1
  unsigned int v8; // r1@5
  unsigned int *v9; // r1@9
  unsigned int *v10; // r7@15

  v1 = Potion::mLastId++;
  v2 = *(_DWORD **)result;
  v3 = &Potion::mPotions[2 * v1];
  *v2 = v1;
  Potion::mPotions[2 * v1] = v2;
  v6 = v3[1];
  v5 = v3 + 1;
  v4 = v6;
  v7 = *(_DWORD *)(result + 4);
  if ( v7 != v6 )
  {
    if ( v7 )
    {
      result = v7 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex((unsigned int *)result);
        while ( __strex(v8 + 1, (unsigned int *)result) );
        v4 = *v5;
      }
      else
        ++*(_DWORD *)result;
    }
    if ( v4 )
      v9 = (unsigned int *)(v4 + 4);
          result = __ldrex(v9);
        while ( __strex(result - 1, v9) );
        result = (*v9)--;
      if ( result == 1 )
        v10 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v10);
          while ( __strex(result - 1, v10) );
        }
        else
          result = (*v10)--;
        if ( result == 1 )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *v5 = v7;
  }
  return result;
}


void __fastcall Potion::getDescriptionId(void **a1, int a2, int a3)
{
  void **v3; // r4@1
  int v4; // r5@1
  const void **v5; // r6@1
  int v6; // r2@1
  const void **v7; // r7@1
  int v8; // r1@1
  int v9; // r0@1
  const void **v10; // r0@3
  const void **v11; // r0@3
  const void **v12; // r0@3
  char *v13; // r0@3
  char *v14; // r0@4
  char *v15; // r0@5
  char *v16; // r0@6
  unsigned int *v17; // r2@7
  signed int v18; // r1@9
  const void **v19; // r0@12
  char *v20; // r0@12
  const void **v21; // r0@18
  char *v22; // r0@18
  char *v23; // r0@30
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@37
  signed int v27; // r1@39
  unsigned int *v28; // r2@41
  signed int v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  unsigned int *v32; // r2@56
  signed int v33; // r1@58
  unsigned int *v34; // r2@60
  signed int v35; // r1@62
  char *v36; // [sp+0h] [bp-40h]@35
  char *v37; // [sp+4h] [bp-3Ch]@30
  char *v38; // [sp+8h] [bp-38h]@3
  char *v39; // [sp+Ch] [bp-34h]@3
  char *v40; // [sp+10h] [bp-30h]@3
  char *v41; // [sp+14h] [bp-2Ch]@3
  char *v42; // [sp+18h] [bp-28h]@18
  char *v43; // [sp+1Ch] [bp-24h]@18
  char *v44; // [sp+20h] [bp-20h]@12
  char *v45; // [sp+24h] [bp-1Ch]@12

  v3 = a1;
  v4 = a3;
  *a1 = &unk_28898CC;
  v5 = (const void **)(a2 + 8);
  v7 = (const void **)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v8 = *(_DWORD *)(*(_DWORD *)(a2 + 8) - 12);
  v9 = *(_DWORD *)(v6 - 12);
  if ( !v8 )
  {
    if ( !v9 )
    {
      sub_21E8190(v3, "%item.emptyPotion.name", (_BYTE *)0x16);
      goto LABEL_28;
    }
    v44 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v44, v9 + 15);
    sub_21E7408((const void **)&v44, "%potion.prefix.", 0xFu);
    sub_21E72F0((const void **)&v44, v7);
    v19 = sub_21E7408((const void **)&v44, " %item.potion.name", 0x12u);
    v45 = (char *)*v19;
    *v19 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3,
      (int *)&v45);
    v20 = v45 - 12;
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v45 - 4);
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
        j_j_j_j__ZdlPv_9(v20);
    v16 = v44 - 12;
    if ( (int *)(v44 - 12) == &dword_28898C0 )
    v17 = (unsigned int *)(v44 - 4);
    if ( !&pthread_create )
      goto LABEL_25;
    __dmb();
    do
      v18 = __ldrex(v17);
    while ( __strex(v18 - 1, v17) );
LABEL_26:
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
    goto LABEL_28;
  }
  if ( !v9 )
    v42 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v42, v8 + 8);
    sub_21E7408((const void **)&v42, "%potion.", 8u);
    sub_21E72F0((const void **)&v42, v5);
    v21 = sub_21E7408((const void **)&v42, ".postfix", 8u);
    v43 = (char *)*v21;
    *v21 = &unk_28898CC;
      (int *)&v43);
    v22 = v43 - 12;
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v43 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v16 = v42 - 12;
    if ( (int *)(v42 - 12) == &dword_28898C0 )
    v17 = (unsigned int *)(v42 - 4);
    goto LABEL_26;
  v38 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v38, v9 + 15);
  sub_21E7408((const void **)&v38, "%potion.prefix.", 0xFu);
  sub_21E72F0((const void **)&v38, v7);
  v10 = sub_21E7408((const void **)&v38, " %potion.", 9u);
  v39 = (char *)*v10;
  *v10 = &unk_28898CC;
  v11 = sub_21E72F0((const void **)&v39, v5);
  v40 = (char *)*v11;
  *v11 = &unk_28898CC;
  v12 = sub_21E7408((const void **)&v40, ".postfix", 8u);
  v41 = (char *)*v12;
  *v12 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3,
    (int *)&v41);
  v13 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v40 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v39 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v38 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      goto LABEL_26;
LABEL_25:
    v18 = (*v17)--;
LABEL_28:
  if ( v4 == 2 )
    v36 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v36, *((_DWORD *)*v3 - 3) + 22);
    sub_21E7408((const void **)&v36, "%potion.prefix.linger ", 0x16u);
    sub_21E72F0((const void **)&v36, (const void **)v3);
      (int *)&v36);
    v23 = v36 - 12;
    if ( (int *)(v36 - 12) == &dword_28898C0 )
      return;
    v24 = (unsigned int *)(v36 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      goto LABEL_54;
    goto LABEL_53;
  if ( v4 == 1 )
    v37 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v37, *((_DWORD *)*v3 - 3) + 23);
    sub_21E7408((const void **)&v37, "%potion.prefix.grenade ", 0x17u);
    sub_21E72F0((const void **)&v37, (const void **)v3);
      (int *)&v37);
    v23 = v37 - 12;
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v37 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        goto LABEL_54;
LABEL_53:
      v25 = (*v24)--;
LABEL_54:
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
}


void __fastcall Potion::getPotentencyDescription(int *a1, int a2, int a3, int a4)
{
  int *v4; // r8@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r7@1
  int v8; // r0@1
  const void **v9; // r0@2
  char *v10; // r0@2
  void *v11; // r0@3
  char *v12; // r0@4
  void *v13; // r0@6
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  void *v16; // r0@11
  const void **v17; // r0@18
  __int64 v18; // kr00_8@18
  unsigned int v19; // r1@18
  const void **v20; // r0@20
  char *v21; // r0@27
  void *v22; // r0@28
  void *v23; // r0@29
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@51
  signed int v31; // r1@53
  unsigned int *v32; // r2@67
  signed int v33; // r1@69
  unsigned int *v34; // r2@71
  signed int v35; // r1@73
  unsigned int *v36; // r2@75
  signed int v37; // r1@77
  int v38; // [sp+4h] [bp-4Ch]@18
  int v39; // [sp+8h] [bp-48h]@18
  unsigned int v40; // [sp+Ch] [bp-44h]@18
  char *v41; // [sp+10h] [bp-40h]@27
  int v42; // [sp+14h] [bp-3Ch]@21
  int v43; // [sp+18h] [bp-38h]@6
  char *v44; // [sp+1Ch] [bp-34h]@2
  int v45; // [sp+20h] [bp-30h]@2
  char *v46; // [sp+24h] [bp-2Ch]@2
  int v47; // [sp+2Ch] [bp-24h]@11
  int v48; // [sp+30h] [bp-20h]@11

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  sub_21E8AF4(a1, (int *)&Util::EMPTY_STRING);
  v8 = *(_DWORD *)(*(_DWORD *)(v5 + 8) - 12);
  if ( v8 )
  {
    v44 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v44, v8 + 7);
    sub_21E7408((const void **)&v44, "potion.", 7u);
    sub_21E72F0((const void **)&v44, (const void **)(v5 + 8));
    I18n::get(&v45, (int **)&v44);
    v9 = sub_21E7408((const void **)&v45, " ", 1u);
    v46 = (char *)*v9;
    *v9 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v4,
      (int *)&v46);
    v10 = v46 - 12;
    if ( (int *)(v46 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v45 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = v44 - 12;
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v44 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    if ( MobEffectInstance::getDuration((MobEffectInstance *)(v5 + 12)) <= 1 )
      Potion::effectPotencyToString((Potion *)&v43, v5);
      sub_21E72F0((const void **)v4, (const void **)&v43);
      v13 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) == &dword_28898C0 )
        return;
      v14 = (unsigned int *)(v43 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        goto LABEL_48;
LABEL_47:
      v15 = (*v14)--;
LABEL_48:
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
      return;
    if ( !MobEffectInstance::getAmplifier((MobEffectInstance *)(v5 + 12)) )
      Potion::effectDurationToString(&v42, v5, v7, v6);
      sub_21E72F0((const void **)v4, (const void **)&v42);
      v13 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) == &dword_28898C0 )
      v14 = (unsigned int *)(v42 - 4);
      goto LABEL_47;
    Potion::effectPotencyToString((Potion *)&v39, v5);
    v17 = sub_21E7408((const void **)&v39, " ", 1u);
    v40 = (unsigned int)*v17;
    *v17 = &unk_28898CC;
    Potion::effectDurationToString(&v38, v5, v7, v6);
    v18 = *(_QWORD *)(v40 - 12);
    v19 = *(_DWORD *)(v38 - 12) + v18;
    if ( v19 > HIDWORD(v18) && v19 <= *(_DWORD *)(v38 - 8) )
      v20 = sub_21E82D8((const void **)&v38, 0, v40, (_BYTE *)v18);
    else
      v20 = sub_21E72F0((const void **)&v40, (const void **)&v38);
    v41 = (char *)*v20;
    *v20 = &unk_28898CC;
    sub_21E72F0((const void **)v4, (const void **)&v41);
    v21 = v41 - 12;
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v41 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v38 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v40 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v13 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v39 - 4);
  }
  else
    sub_21E94B4((void **)&v47, "potion.empty");
    I18n::get(&v48, (int **)&v47);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v48);
    v16 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v48 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v13 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v47 - 4);
}


int __fastcall Potion::getPotion(int result, int a2)
{
  int v2; // r3@2
  int v3; // r1@2
  unsigned int v4; // r1@6

  if ( (unsigned int)a2 > 0x3F )
  {
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  }
  else
    v2 = Potion::mPotions[2 * a2];
    v3 = Potion::mPotions[2 * a2 + 1];
    *(_DWORD *)result = v2;
    *(_DWORD *)(result + 4) = v3;
    if ( v3 )
    {
      result = v3 + 4;
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex((unsigned int *)result);
        while ( __strex(v4 + 1, (unsigned int *)result) );
      }
      else
        ++*(_DWORD *)result;
    }
  return result;
}


int __fastcall Potion::getPotionId(Potion *this)
{
  return *(_DWORD *)this;
}


_DWORD *__fastcall Potion::effectDurationToString(int *a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int *v5; // r8@1
  int v7; // r7@1
  MobEffectInstance *v9; // r0@3
  char *v17; // r0@6
  char *v18; // r4@6
  int v19; // r4@7
  int v20; // r5@8
  char v21; // r0@10
  char *v27; // r0@13
  void **v28; // r0@13
  void *v29; // r0@13
  unsigned int *v31; // r2@15
  signed int v32; // r1@17
  void **v33; // [sp+4h] [bp-DCh]@1
  int v34; // [sp+8h] [bp-D8h]@14
  void **v35; // [sp+Ch] [bp-D4h]@6
  void **v36; // [sp+10h] [bp-D0h]@13
  int v37; // [sp+2Ch] [bp-B4h]@14
  int v38; // [sp+34h] [bp-ACh]@13
  int v39; // [sp+38h] [bp-A8h]@14

  v4 = a2;
  v5 = a1;
  _R6 = a4;
  v7 = a3;
  sub_21D103C((int)&v33, 24);
  if ( v7 == 1 )
  {
    _R7 = MobEffectInstance::getSplashDuration((MobEffectInstance *)(v4 + 12));
  }
  else
    v9 = (MobEffectInstance *)(v4 + 12);
    if ( v7 == 2 )
    {
      _R7 = MobEffectInstance::getLingerDuration(v9);
    }
    else
      _R0 = MobEffectInstance::getDuration(v9);
      __asm
      {
        VMOV            S2, R0
        VMOV            S0, R6
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S2, S0
        VCVTR.S32.F32   S0, S0
        VMOV            R7, S0
      }
  sub_21CBF38((char *)&v35, (int)"(", 1);
  _R0 = 458129845;
  __asm { SMMUL.W         R0, R7, R0 }
  v17 = (char *)sub_21CC43C(&v35, ((signed int)_R0 >> 7) + (_R0 >> 31));
  sub_21CBF38(v17, (int)":", 1);
  v18 = (char *)*(v33 - 3) + (_DWORD)&v33;
  if ( v18[117] )
    v19 = (int)(v18 + 116);
    v20 = *((_DWORD *)v18 + 31);
    if ( !v20 )
      sub_21E5824();
    if ( *(_BYTE *)(v20 + 28) )
      v21 = *(_BYTE *)(v20 + 61);
      sub_21B50F0(*((_DWORD *)v18 + 31));
      v21 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v20 + 24))(v20, 32);
    v18[116] = v21;
    *(_BYTE *)(v19 + 1) = 1;
  _R0 = 1717986919;
  _R0 = ((signed int)_R0 >> 3) + (_R0 >> 31);
  _R1 = -2004318071;
  __asm { SMMLA.W         R1, R1, R0, R0 }
  *(_BYTE *)v19 = 48;
  *(_DWORD *)((char *)*(v33 - 3) + (_DWORD)&v33 + 8) = 2;
  v27 = (char *)sub_21CC43C(&v35, _R0 - 60 * (((signed int)_R1 >> 5) + (_R1 >> 31)));
  sub_21CBF38(v27, (int)")", 1);
  sub_21CFED8(v5, (int)&v36);
  v28 = off_26D3F84;
  v33 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v33) = off_26D3F80[0];
  v35 = v28;
  v36 = &off_27734E8;
  v29 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v36 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v37);
  v33 = (void **)off_26D3F68;
  *(void ***)((char *)&v33 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v34 = 0;
  return sub_21B6560(&v39);
}
