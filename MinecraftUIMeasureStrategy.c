

char *__fastcall MinecraftUIMeasureStrategy::_fillLineWithExtend(int a1, float a2, const void **a3, int a4, char *a5, int a6)
{
  int v10; // r9@1
  const void **v11; // r4@1
  int v13; // r8@1
  int v14; // r0@1
  _BYTE *v15; // r2@1
  char *result; // r0@2
  unsigned int v17; // r3@5
  _BYTE *v18; // r2@5
  int v19; // r0@6

  __asm { VLDR            S0, [SP,#0x20+arg_4] }
  v10 = LODWORD(a2);
  v11 = a3;
  __asm { VMOV            R10, S0 }
  v13 = a4;
  v14 = Font::getLineLength(SLODWORD(a2), &dword_27D2E98, _R10, a4);
  v15 = (_BYTE *)*((_DWORD *)*v11 - 3);
  if ( v14 <= (signed int)a5 )
  {
    if ( !v15 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", -1, 0);
    sub_119CA68(v11, (size_t)(v15 - 1), (_BYTE *)1, 0);
    sub_119C8A4(v11, (const void **)&dword_27D2E98);
    for ( result = (char *)Font::getLineLength(v10, (int *)v11, _R10, v13);
          (signed int)result > (signed int)a5;
          result = (char *)Font::getLineLength(v10, (int *)v11, _R10, v13) )
    {
      v17 = *((_DWORD *)*v11 - 3);
      v18 = *(_BYTE **)(dword_27D2E98 - 12);
      if ( v17 < v17 - (unsigned int)v18 )
        sub_119CA78(
          "%s: __pos (which is %zu) > this->size() (which is %zu)",
          (int)"basic_string::erase",
          v17 - (_DWORD)v18,
          v17);
      sub_119CA68(v11, v17 - (_DWORD)v18, v18, 0);
      v19 = *((_DWORD *)*v11 - 3);
      if ( !v19 )
        sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", -1, 0);
      sub_119CA68(v11, v19 - 1, (_BYTE *)1, 0);
      sub_119C8A4(v11, (const void **)&dword_27D2E98);
    }
  }
  else
    result = sub_119DB1C(v11, 0, v15, 0);
  return result;
}


void __fastcall MinecraftUIMeasureStrategy::_measureText(int a1, int a2, Font *this, int a4, __int64 a5, int a6, int a7)
{
  MinecraftUIMeasureStrategy::_measureText(a1, a2, this, a4, a5, a6, a7);
}


unsigned int __fastcall MinecraftUIMeasureStrategy::_findNextWordPosition(int a1, int *a2, unsigned int a3, int a4, unsigned int *a5, unsigned int *a6)
{
  int *v6; // r4@1
  unsigned int result; // r0@2
  int v8; // r0@3
  bool v9; // zf@3
  char *v10; // r0@6
  char *v11; // r0@8
  unsigned int v12; // r0@9

  v6 = a2;
  *a5 = a3;
  *a6 = a3;
  if ( *(_DWORD *)(*a2 - 12) > a3 )
  {
    v8 = *(_BYTE *)(*a2 + a3);
    v9 = v8 == a4;
    if ( v8 != a4 )
      v9 = v8 == 10;
    if ( !v9 )
    {
      v10 = sub_119C8B4(a2, a4, *a5);
      *a6 = (unsigned int)v10;
      if ( v10 == (char *)-1 )
      {
        v10 = *(char **)(*v6 - 12);
        *a6 = (unsigned int)v10;
      }
      *a6 = (unsigned int)(v10 - 1);
      v11 = sub_119C8B4(v6, 10, *a5);
      if ( v11 == (char *)-1 )
        a3 = *a6;
      else
        v12 = (unsigned int)(v11 - 1);
        if ( v12 < *a6 )
        {
          *a6 = v12;
          a3 = v12;
        }
    }
    result = a3 + 1 - *a5;
  }
  else
    result = 0;
  return result;
}


void __fastcall MinecraftUIMeasureStrategy::_fillCaretOffsets(int a1, int a2, signed int a3, int a4)
{
  signed int v4; // r10@1
  int v5; // r8@1
  int v6; // r11@1
  int v7; // r0@2
  int *v8; // r6@2
  signed int v9; // r5@2
  _BYTE *v10; // r4@5
  char *v11; // r7@5
  signed int v12; // r0@5
  unsigned int v13; // r1@5
  unsigned int v14; // r0@7
  unsigned int v15; // r9@7
  char *v16; // r0@13
  signed int v17; // r2@14
  int v18; // r6@14

  v4 = a3;
  v5 = a4;
  v6 = a2;
  if ( a3 >= 1 )
  {
    v7 = *(_QWORD *)(a2 + 4) >> 32;
    v8 = (int *)*(_QWORD *)(a2 + 4);
    v9 = 0;
    do
    {
      if ( v8 == (int *)v7 )
      {
        v10 = *(_BYTE **)v6;
        v11 = 0;
        v12 = (signed int)v8 - *(_DWORD *)v6;
        v13 = v12 >> 2;
        if ( !(v12 >> 2) )
          v13 = 1;
        v14 = v13 + (v12 >> 2);
        v15 = v14;
        if ( 0 != v14 >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_119C874();
          v16 = (char *)operator new(4 * v15);
          v8 = (int *)(*(_QWORD *)v6 >> 32);
          v10 = (_BYTE *)*(_QWORD *)v6;
          v11 = v16;
        }
        v17 = (char *)v8 - v10;
        v18 = (int)&v11[(char *)v8 - v10];
        *(_DWORD *)&v11[v17] = v5;
        if ( v17 >> 2 )
          _aeabi_memmove4(v11, v10);
        v8 = (int *)(v18 + 4);
        if ( v10 )
          operator delete(v10);
        v7 = (int)&v11[4 * v15];
        *(_DWORD *)v6 = v11;
        *(_DWORD *)(v6 + 4) = v8;
        *(_DWORD *)(v6 + 8) = v7;
      }
      else
        *v8 = v5;
        ++v8;
      ++v9;
    }
    while ( v9 < v4 );
  }
}


int __fastcall MinecraftUIMeasureStrategy::getExtendSize(MinecraftUIMeasureStrategy *this, Font *a2, float a3)
{
  int result; // r0@1

  _R4 = a3;
  _R0 = Font::getLineLength((int)a2, &dword_27D2E98, 1065353216, 0);
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R4
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall MinecraftUIMeasureStrategy::measureTextWidth(int a1, int a2, Font *a3, int a4, int a5, int a6)
{
  MinecraftUIMeasureStrategy::_measureText(a1, a2, a3, a4, 9223372034707292159LL, a5, a6);
}


int __fastcall MinecraftUIMeasureStrategy::MinecraftUIMeasureStrategy(int result, int a2)
{
  *(_DWORD *)result = &off_26DCD64;
  *(_DWORD *)(result + 4) = a2;
  return result;
}


void __fastcall MinecraftUIMeasureStrategy::measureText(int a1, int a2, Font *a3, int a4, __int64 a5, int a6, int a7)
{
  MinecraftUIMeasureStrategy::_measureText(a1, a2, a3, a4, a5, a6, a7);
}


signed int __fastcall MinecraftUIMeasureStrategy::_willTextFitOnOneLine(int a1, int a2, int *a3, int a4, int a5, int a6)
{
  int v6; // r0@1
  signed int v7; // r1@1

  v6 = Font::getLineLength(a2, a3, a6, a4);
  v7 = 0;
  if ( v6 <= a5 )
    v7 = 1;
  return v7;
}


void __fastcall MinecraftUIMeasureStrategy::measureTextHeight(int a1, int a2, Font *a3, int a4, unsigned int a5, int a6, int a7)
{
  MinecraftUIMeasureStrategy::measureTextHeight(a1, a2, a3, a4, a5, a6, a7);
}


int __fastcall MinecraftUIMeasureStrategy::getHyphenSize(MinecraftUIMeasureStrategy *this, Font *a2, float a3)
{
  _R4 = a3;
  _R5 = 0;
  _R6 = (I18n *)Font::getLineLength((int)a2, (int *)algn_27D2E94, 1065353216, 0);
  if ( I18n::languageSupportsHypenSplitting(_R6) == 1 )
  {
    __asm
    {
      VMOV            S2, R6
      VMOV            S0, R4
      VCVT.F32.S32    S2, S2
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R5, S0
    }
  }
  return _R5;
}


void __fastcall MinecraftUIMeasureStrategy::measureTextWidth(int a1, int a2, Font *a3, int a4, int a5, int a6)
{
  MinecraftUIMeasureStrategy::measureTextWidth(a1, a2, a3, a4, a5, a6);
}


void __fastcall MinecraftUIMeasureStrategy::measureText(int a1, int a2, Font *a3, int a4, __int64 a5, int a6, int a7)
{
  MinecraftUIMeasureStrategy::measureText(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall MinecraftUIMeasureStrategy::_measureText(int a1, int a2, Font *this, int a4, __int64 a5, int a6, int a7)
{
  Font *v8; // r10@1
  int v9; // r5@1
  int v10; // r11@1
  int v11; // r8@1
  void *v22; // r0@10
  int *v23; // r4@13
  int *v24; // r6@13
  unsigned int *v25; // r2@15
  signed int v26; // r1@17
  int *v27; // r0@23
  void *v28; // r0@28
  void *v29; // r0@29
  char *v30; // r0@30
  void **v31; // r4@7
  unsigned int v32; // r8@7
  int *v33; // r5@7
  int v34; // r9@7
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  unsigned int *v39; // r2@40
  signed int v40; // r1@42
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  int v43; // r0@64
  unsigned int v44; // r1@64
  void **v45; // r6@66
  char *v46; // r4@66
  char *v47; // r0@68
  unsigned int v48; // r0@69
  signed int v49; // r3@71
  unsigned int v50; // r6@76
  void *v51; // r0@77
  int v52; // r0@80
  int v53; // r1@80 OVERLAPPED
  int v54; // r4@80
  unsigned int v55; // r2@80
  int v56; // r0@83
  signed int v57; // r8@88
  int v58; // r10@89
  int v59; // r0@89
  signed int v60; // r5@89
  void *v61; // r4@92
  unsigned int v62; // r1@92
  unsigned int v63; // r0@94
  unsigned int v64; // r11@94
  signed int v65; // r2@101
  int v67; // r8@110
  _BYTE *v68; // r4@110
  signed int v69; // r9@114
  signed int v70; // r7@115
  int v71; // r0@115
  int *v72; // r5@115
  _BYTE *v73; // r11@118
  char *v74; // r6@118
  unsigned int v75; // r1@118
  unsigned int v76; // r0@120
  unsigned int v77; // r4@120
  signed int v78; // r2@127
  int v79; // r5@127
  unsigned int *v80; // r2@136
  signed int v81; // r1@138
  int v82; // r0@142
  unsigned int v83; // r10@142
  int v84; // r8@144
  int v85; // r0@144
  char *v86; // r5@144
  int v87; // r7@144
  _BYTE *v88; // r11@147
  char *v89; // r6@147
  unsigned int v90; // r1@147
  unsigned int v91; // r0@149
  unsigned int v92; // r4@149
  signed int v93; // r2@156
  int v94; // r5@156
  int v95; // r0@164
  int v96; // r1@164 OVERLAPPED
  int v97; // r4@164
  unsigned int v98; // r2@164
  int v99; // r0@167
  _BYTE *v100; // r4@172
  signed int v101; // r8@179
  signed int v102; // r7@180
  int v103; // r0@180
  char *v104; // r5@180
  _BYTE *v105; // r11@183
  char *v106; // r6@183
  unsigned int v107; // r1@183
  unsigned int v108; // r0@185
  unsigned int v109; // r4@185
  signed int v110; // r2@192
  int v111; // r5@192
  int v112; // r0@201
  int v113; // r4@201
  void *v114; // r0@209
  unsigned int *v115; // r2@210
  signed int v116; // r1@212
  float v117; // r8@222
  int *v118; // r1@223
  int v119; // r1@223
  void *v120; // r0@223
  int v121; // r0@226
  int v122; // r1@226 OVERLAPPED
  int v123; // r4@226
  unsigned int v124; // r2@226
  int v125; // r0@229
  __int64 v126; // r4@239
  int v127; // r6@239
  int v128; // r7@239
  int v130; // r3@245
  int *v131; // r6@249
  int v132; // r3@250
  float *v134; // r1@259
  unsigned int *v135; // r2@262
  signed int v136; // r1@264
  int v137; // [sp+0h] [bp-E8h]@0
  int v138; // [sp+4h] [bp-E4h]@0
  int v139; // [sp+8h] [bp-E0h]@0
  float v140; // [sp+1Ch] [bp-CCh]@7
  int v141; // [sp+24h] [bp-C4h]@7
  int *v142; // [sp+28h] [bp-C0h]@7
  unsigned int v143; // [sp+2Ch] [bp-BCh]@76
  Font *v144; // [sp+34h] [bp-B4h]@1
  float v145; // [sp+38h] [bp-B0h]@261
  int v146; // [sp+3Ch] [bp-ACh]@261
  int v147; // [sp+40h] [bp-A8h]@78
  int v148; // [sp+44h] [bp-A4h]@7
  void *ptr; // [sp+48h] [bp-A0h]@8
  int v150; // [sp+4Ch] [bp-9Ch]@8
  int v151; // [sp+50h] [bp-98h]@8
  float v152; // [sp+54h] [bp-94h]@8
  int v153; // [sp+60h] [bp-88h]@8
  void *v154; // [sp+64h] [bp-84h]@5
  int *v155; // [sp+68h] [bp-80h]@5
  char *v156; // [sp+6Ch] [bp-7Ch]@5
  int *v157; // [sp+70h] [bp-78h]@5
  int *v158; // [sp+74h] [bp-74h]@5
  int *v159; // [sp+78h] [bp-70h]@5
  int v160; // [sp+80h] [bp-68h]@5
  int v161; // [sp+88h] [bp-60h]@5
  void *s1; // [sp+90h] [bp-58h]@5
  float v163; // [sp+94h] [bp-54h]@73
  float v164; // [sp+98h] [bp-50h]@259

  HIDWORD(_R6) = a6;
  v8 = this;
  v9 = a1;
  v10 = a4;
  v144 = this;
  v11 = a2;
  __asm { VLDR            S16, [R7] }
  _R0 = Font::getBaseFontHeight(this);
  __asm
  {
    VMOV            S0, R0
    VLDR            S18, [R7,#4]
    VADD.F32        S0, S18, S0
    VMUL.F32        S22, S0, S16
    VSTR            S22, [SP,#0xE8+var_50]
    VLDR            S16, [R7]
  }
  _R0 = Font::getWrapHeight(v8);
  __asm { VMOV            S20, R0 }
  _R0 = Font::getScaleFactor(v8);
    VLDR            S2, =0.0
    VMUL.F32        S0, S0, S20
    VADD.F32        S0, S0, S18
    VMUL.F32        S16, S0, S16
    VSUB.F32        S0, S22, S16
    VMOV.F32        S18, S16
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S22, S16
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S18, S22 }
  __asm { VSTR            S0, [SP,#0xE8+var_54] }
  sub_119C884(&s1, (const char *)&unk_257BC67);
  sub_119C884((void **)&v161, (const char *)&unk_257BC67);
  sub_119C884((void **)&v160, (const char *)&unk_257BC67);
  v158 = 0;
  v159 = 0;
  v154 = 0;
  v155 = 0;
  v156 = 0;
  v157 = 0;
  __asm { VLDR            S20, [R7] }
  _R0 = Font::getLineLength((int)v8, &dword_27D2E90, 1065353216, 0);
  __asm { VMOV            S0, R0 }
  _KR00_8 = a5;
    VCVT.F32.S32    S0, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  if ( _R0 > (signed int)a5 )
    goto LABEL_272;
    VMOV            S0, R4
    VCVT.F32.S32    S20, S0
    VCMPE.F32       S20, S22
LABEL_272:
    sub_119C884((void **)&v153, (const char *)&unk_257BC67);
    __asm
    {
      VMOV            S0, R6
      VMOV            S2, R4
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VSTR            S0, [SP,#0xE8+var_94]
      VSTR            S2, [SP,#0xE8+var_90]
    }
    ptr = 0;
    v150 = 0;
    v151 = 0;
    MeasureResult::MeasureResult(*(float *)&v9, &v153, (int)&v152, (int)&ptr, 0);
    if ( ptr )
      operator delete(ptr);
    v22 = (void *)(v153 - 12);
    if ( (int *)(v153 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v153 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v22);
    goto LABEL_11;
  v31 = (void **)&v148;
  v141 = v11;
  v32 = 0;
  v140 = *(float *)&v9;
  v33 = (int *)v10;
  v34 = 0;
  v142 = (int *)v10;
  while ( 1 )
    if ( *(_DWORD *)(*v33 - 12) <= v32 )
      v49 = 0;
      v44 = v32;
    else
      v43 = *(_BYTE *)(*v33 + v32);
      if ( v43 != 10 )
        v44 = v32;
        if ( v43 != 32 )
        {
          v45 = v31;
          v46 = sub_119C8B4(v33, 32, v32);
          if ( v46 == (char *)-1 )
            v46 = *(char **)(*v33 - 12);
          v47 = sub_119C8B4(v33, 10, v32);
          v44 = (unsigned int)(v46 - 1);
          v31 = v45;
          if ( v47 != (char *)-1 )
          {
            v48 = (unsigned int)(v47 - 1);
            if ( v48 < v44 )
              v44 = v48;
          }
        }
      v49 = 1 - v32 + v44;
      VLDR            S22, [SP,#0xE8+var_54]
      VADD.F32        S0, S22, S18
      VCMPE.F32       S0, S20
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v117 = v140;
      if ( v158 != v157 )
        EntityInteraction::setInteractText(&v161, v158 - 1);
        v118 = v158 - 1;
        v158 = v118;
        v119 = *v118;
        v120 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v135 = (unsigned int *)(v119 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v136 = __ldrex(v135);
            while ( __strex(v136 - 1, v135) );
          else
            v136 = (*v135)--;
          if ( v136 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v120);
        if ( !*(_BYTE *)(a7 + 4) )
          __asm
            VLDR            S0, [R7]
            VSTR            S0, [SP,#0xE8+var_E4]
          MinecraftUIMeasureStrategy::_fillLineWithExtend(
            v141,
            *(float *)&v8,
            (const void **)&v161,
            *(_BYTE *)(HIDWORD(_R6) + 9),
            (char *)a5,
            v138);
        v121 = v161;
        *(_QWORD *)&v122 = *(_QWORD *)(v161 - 12);
        v123 = v122 + 1;
        if ( v122 + 1 > v124 || *(_DWORD *)(v161 - 4) >= 1 )
          sub_119CAF8((const void **)&v161, v122 + 1);
          v121 = v161;
          v122 = *(_DWORD *)(v161 - 12);
        *(_BYTE *)(v121 + v122) = 10;
        v125 = v161;
        if ( (int *)(v161 - 12) != &dword_28898C0 )
          *(_DWORD *)(v161 - 4) = 0;
          *(_DWORD *)(v125 - 12) = v123;
          *(_BYTE *)(v125 + v123) = byte_26C67B8[0];
        if ( v158 == v159 )
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
            (unsigned __int64 *)&v157,
            &v161);
        else
          sub_119C854(v158, &v161);
          ++v158;
      goto LABEL_239;
    if ( v49 <= 0 )
      break;
    v143 = v44;
    v50 = *(_DWORD *)(*v33 - 12);
    if ( v50 < v32 )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v32, v50);
    sub_119C8C4(v31, v33, v32, v49);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&s1,
      (int *)v31);
    v51 = (void *)(v148 - 12);
    if ( (int *)(v148 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v148 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v51);
    sub_119C854(&v147, &v161);
    sub_119C8A4((const void **)&v147, (const void **)&s1);
    if ( Font::getLineLength((int)v8, &v147, *(_DWORD *)HIDWORD(_R6), *(_BYTE *)(HIDWORD(_R6) + 9)) <= (signed int)a5 )
      EntityInteraction::setInteractText(&v161, &v147);
      if ( *(_BYTE *)(a7 + 4) )
        v57 = *((_DWORD *)s1 - 3);
        if ( v57 >= 1 )
          v58 = HIDWORD(_R6);
          v59 = (int)v156;
          HIDWORD(_R6) = v155;
          v60 = 0;
          do
            if ( HIDWORD(_R6) == v59 )
            {
              v61 = v154;
              LODWORD(_R6) = 0;
              v62 = (HIDWORD(_R6) - (signed int)v154) >> 2;
              if ( !v62 )
                v62 = 1;
              v63 = v62 + ((HIDWORD(_R6) - (signed int)v154) >> 2);
              v64 = v62 + ((HIDWORD(_R6) - (signed int)v154) >> 2);
              if ( 0 != v63 >> 30 )
                v64 = 0x3FFFFFFF;
              if ( v63 < v62 )
              if ( v64 )
              {
                if ( v64 >= 0x40000000 )
                  sub_119C874();
                LODWORD(_R6) = operator new(4 * v64);
                HIDWORD(_R6) = v155;
                v61 = v154;
              }
              v65 = HIDWORD(_R6) - (_DWORD)v61;
              HIDWORD(_R6) = _R6 + HIDWORD(_R6) - (_DWORD)v61;
              *(_DWORD *)(_R6 + v65) = v34;
              if ( v65 >> 2 )
                _aeabi_memmove4(_R6, v61);
              HIDWORD(_R6) += 4;
              if ( v61 )
                operator delete(v61);
              v59 = _R6 + 4 * v64;
              *(_QWORD *)&v154 = _R6;
              v156 = (char *)(_R6 + 4 * v64);
            }
            else
              *(_DWORD *)HIDWORD(_R6) = v34;
              v155 = (int *)HIDWORD(_R6);
            ++v60;
          while ( v60 < v57 );
          goto LABEL_200;
      LODWORD(_R6) = a5;
      if ( Font::getLineLength((int)v8, (int *)&s1, *(_DWORD *)HIDWORD(_R6), *(_BYTE *)(HIDWORD(_R6) + 9)) <= (signed int)a5 )
        v52 = v161;
        *(_QWORD *)&v53 = *(_QWORD *)(v161 - 12);
        v54 = v53 + 1;
        if ( v53 + 1 > v55 || *(_DWORD *)(v161 - 4) >= 1 )
          sub_119CAF8((const void **)&v161, v53 + 1);
          v52 = v161;
          v53 = *(_DWORD *)(v161 - 12);
        *(_BYTE *)(v52 + v53) = 10;
        v56 = v161;
          *(_DWORD *)(v56 - 12) = v54;
          *(_BYTE *)(v56 + v54) = byte_26C67B8[0];
        __asm { VLDR            S0, [SP,#0xE8+var_54] }
        v67 = v34 + 1;
        __asm
          VADD.F32        S0, S0, S16
          VSTR            S0, [SP,#0xE8+var_54]
        v68 = (_BYTE *)*((_DWORD *)s1 - 3);
        if ( v68 == *(_BYTE **)(dword_27D2E90 - 12) && !memcmp(s1, (const void *)dword_27D2E90, *((_DWORD *)s1 - 3)) )
          sub_119CA68((const void **)&s1, 0, v68, 0);
          v67 = v34;
        EntityInteraction::setInteractText(&v161, (int *)&s1);
          v34 = v67;
          goto LABEL_201;
        v69 = *((_DWORD *)s1 - 3);
        if ( v69 < 1 )
        v144 = v8;
        v58 = HIDWORD(_R6);
        v142 = v33;
        v70 = 0;
        v71 = (int)v156;
        v72 = v155;
          if ( v72 == (int *)v71 )
            v73 = v154;
            v74 = 0;
            v75 = ((char *)v72 - (_BYTE *)v154) >> 2;
            if ( !v75 )
              v75 = 1;
            v76 = v75 + (((char *)v72 - (_BYTE *)v154) >> 2);
            v77 = v75 + (((char *)v72 - (_BYTE *)v154) >> 2);
            if ( 0 != v76 >> 30 )
              v77 = 0x3FFFFFFF;
            if ( v76 < v75 )
            if ( v77 )
              if ( v77 >= 0x40000000 )
                sub_119C874();
              v74 = (char *)operator new(4 * v77);
              v72 = v155;
              v73 = v154;
            v78 = (char *)v72 - v73;
            v79 = (int)&v74[(char *)v72 - v73];
            *(_DWORD *)&v74[v78] = v67;
            if ( v78 >> 2 )
              _aeabi_memmove4(v74, v73);
            v72 = (int *)(v79 + 4);
            if ( v73 )
              operator delete(v73);
            v71 = (int)&v74[4 * v77];
            v154 = v74;
            v155 = v72;
            v156 = &v74[4 * v77];
            *v72 = v67;
            ++v72;
          ++v70;
        while ( v70 < v69 );
        v34 = v67;
        goto LABEL_200;
      do
        if ( Font::getLineLength((int)v8, (int *)&s1, *(_DWORD *)HIDWORD(_R6), *(_BYTE *)(HIDWORD(_R6) + 9)) <= (signed int)_R6 )
          break;
          VLDR            S0, [R7]
          VSTR            S0, [SP,#0xE8+var_E0]
        v82 = MinecraftUIMeasureStrategy::_fillLineWithHyphenWord(
                v141,
                (int)v8,
                COERCE_FLOAT(&v161),
                (int)&s1,
                *(_BYTE *)(HIDWORD(_R6) + 9),
                _R6,
                v139,
                (I18n *)*(_BYTE *)(HIDWORD(_R6) + 10));
        v83 = HIDWORD(_R6);
        if ( *(_BYTE *)(a7 + 4) && v82 >= 2 )
          v84 = v82 - 1;
          v85 = (int)v156;
          v86 = (char *)v155;
          v87 = 0;
            if ( v86 == (char *)v85 )
              v88 = v154;
              v89 = 0;
              v90 = (v86 - (_BYTE *)v154) >> 2;
              if ( !v90 )
                v90 = 1;
              v91 = v90 + ((v86 - (_BYTE *)v154) >> 2);
              v92 = v90 + ((v86 - (_BYTE *)v154) >> 2);
              if ( 0 != v91 >> 30 )
                v92 = 0x3FFFFFFF;
              if ( v91 < v90 )
              if ( v92 )
                if ( v92 >= 0x40000000 )
                v89 = (char *)operator new(4 * v92);
                v86 = (char *)v155;
                v88 = v154;
              v93 = v86 - v88;
              v94 = (int)&v89[v86 - v88];
              *(_DWORD *)&v89[v93] = v34;
              if ( v93 >> 2 )
                _aeabi_memmove4(v89, v88);
              v86 = (char *)(v94 + 4);
              if ( v88 )
                operator delete(v88);
              v85 = (int)&v89[4 * v92];
              v154 = v89;
              v155 = (int *)v86;
              v156 = &v89[4 * v92];
              *(_DWORD *)v86 = v34;
              v86 += 4;
            ++v87;
          while ( v87 < v84 );
        v95 = v161;
        _R6 = __PAIR__(v83, (unsigned int)a5);
        *(_QWORD *)&v96 = *(_QWORD *)(v161 - 12);
        v8 = v144;
        v33 = v142;
        v97 = v96 + 1;
        if ( v96 + 1 > v98 || *(_DWORD *)(v161 - 4) >= 1 )
          sub_119CAF8((const void **)&v161, v96 + 1);
          v95 = v161;
          v96 = *(_DWORD *)(v161 - 12);
        *(_BYTE *)(v95 + v96) = 10;
        v99 = v161;
          *(_DWORD *)(v99 - 12) = v97;
          *(_BYTE *)(v99 + v97) = byte_26C67B8[0];
          VLDR            S0, [SP,#0xE8+var_54]
          VADD.F32        S22, S0, S16
          VSTR            S22, [SP,#0xE8+var_54]
        v100 = (_BYTE *)*((_DWORD *)s1 - 3);
        if ( v100 == *(_BYTE **)(dword_27D2E90 - 12) )
          if ( !memcmp(s1, (const void *)dword_27D2E90, *((_DWORD *)s1 - 3)) )
            sub_119CA68((const void **)&s1, 0, v100, 0);
            ++v34;
            v34 += 2;
          v34 += 2;
        sub_119CA68((const void **)&v161, 0, *(_BYTE **)(v161 - 12), 0);
          VADD.F32        S0, S22, S16
          VCMPE.F32       S0, S20
          VMRS            APSR_nzcv, FPSCR
      while ( (unsigned __int8)(_NF ^ _VF) | _ZF );
      EntityInteraction::setInteractText(&v161, (int *)&s1);
        v101 = *((_DWORD *)s1 - 3);
        if ( v101 >= 1 )
          v144 = v8;
          v142 = v33;
          v102 = 0;
          v103 = (int)v156;
          v104 = (char *)v155;
            if ( v104 == (char *)v103 )
              v105 = v154;
              v106 = 0;
              v107 = (v104 - (_BYTE *)v154) >> 2;
              if ( !v107 )
                v107 = 1;
              v108 = v107 + ((v104 - (_BYTE *)v154) >> 2);
              v109 = v107 + ((v104 - (_BYTE *)v154) >> 2);
              if ( 0 != v108 >> 30 )
                v109 = 0x3FFFFFFF;
              if ( v108 < v107 )
              if ( v109 )
                if ( v109 >= 0x40000000 )
                v106 = (char *)operator new(4 * v109);
                v104 = (char *)v155;
                v105 = v154;
              v110 = v104 - v105;
              v111 = (int)&v106[v104 - v105];
              *(_DWORD *)&v106[v110] = v34;
              if ( v110 >> 2 )
                _aeabi_memmove4(v106, v105);
              v104 = (char *)(v111 + 4);
              if ( v105 )
                operator delete(v105);
              v103 = (int)&v106[4 * v109];
              v154 = v106;
              v155 = (int *)v104;
              v156 = &v106[4 * v109];
              *(_DWORD *)v104 = v34;
              v104 += 4;
            ++v102;
          while ( v102 < v101 );
LABEL_200:
          HIDWORD(_R6) = v58;
          v8 = v144;
          v33 = v142;
LABEL_201:
    v112 = v161;
    v113 = *(_DWORD *)(v161 - 12);
    if ( v113 )
      if ( *(_DWORD *)(v161 - 4) >= 0 )
        sub_119CB68((const void **)&v161);
        v112 = v161;
      if ( *(_BYTE *)(v112 + v113 - 1) == 10 )
    v31 = (void **)&v148;
    v32 = v143 + 1;
    v114 = (void *)(v147 - 12);
    if ( (int *)(v147 - 12) != &dword_28898C0 )
      v115 = (unsigned int *)(v147 - 4);
          v116 = __ldrex(v115);
        while ( __strex(v116 - 1, v115) );
        v116 = (*v115)--;
      if ( v116 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v114);
  v117 = v140;
  if ( *(_DWORD *)(v161 - 12) )
    if ( v158 == v159 )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v157,
        &v161);
      sub_119C854(v158, &v161);
      ++v158;
      VADD.F32        S0, S22, S16
      VSTR            S0, [SP,#0xE8+var_54]
LABEL_239:
  v126 = *(_QWORD *)&v157;
  v127 = HIDWORD(_R6);
  v128 = 0;
  if ( v157 == v158 )
    _R0 = 0;
  else
    do
      sub_119C8A4((const void **)&v160, (const void **)v126);
      _R0 = Font::getLineLength((int)v8, (int *)v126, *(_DWORD *)v127, *(_BYTE *)(v127 + 9));
      LODWORD(v126) = v126 + 4;
      if ( v128 > _R0 )
        _R0 = v128;
      v128 = _R0;
    while ( HIDWORD(v126) != (_DWORD)v126 );
  v130 = *(_DWORD *)a7;
  if ( *(_DWORD *)a7 == -1 || v130 > ((char *)v155 - (_BYTE *)v154) >> 2 )
    v130 = (((char *)v155 - (_BYTE *)v154) >> 2) - 1;
  if ( v130 < 1 )
    _R1 = 1;
    v131 = v157;
    if ( v157 == v158 )
      _R1 = 1;
      v132 = v130 + *((_DWORD *)v154 + v130 - 1);
        v132 -= *(_DWORD *)(*v131 - 12);
        if ( v132 > 0 )
          ++_R1;
        if ( v132 < 1 )
        _ZF = v158 - 1 == v131;
        ++v131;
      while ( !_ZF );
    VMOV            S2, R1
  v134 = &v164;
    VCVT.F32.S32    S2, S2
    VLDR            S4, [SP,#0xE8+var_50]
    VLDR            S6, [SP,#0xE8+var_54]
    VCMPE.F32       S6, S4
    VSTR            S0, [SP,#0xE8+var_B0]
    VMUL.F32        S0, S2, S16
  if ( !(_NF ^ _VF) )
    v134 = &v163;
  v146 = *(_DWORD *)v134;
  __asm { VSTR            S0, [SP,#0xE8+var_E8] }
  MeasureResult::MeasureResult(v117, &v160, (int)&v145, (int)&v154, v137);
LABEL_11:
  if ( v154 )
    operator delete(v154);
  v24 = v158;
  v23 = v157;
  if ( v157 != v158 )
      v27 = (int *)(*v23 - 12);
      if ( v27 != &dword_28898C0 )
        v25 = (unsigned int *)(*v23 - 4);
        if ( &pthread_create )
          __dmb();
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      ++v23;
    while ( v23 != v24 );
    v23 = v157;
  if ( v23 )
    operator delete(v23);
  v28 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v160 - 4);
    if ( &pthread_create )
      __dmb();
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v161 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)((char *)s1 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
}


int __fastcall MinecraftUIMeasureStrategy::_fillLineWithHyphenWord(int a1, int a2, float a3, int a4, int a5, int a6, int a7, I18n *a8)
{
  int *v12; // r11@1
  int *v13; // r10@1
  int v15; // r8@1
  int v16; // r5@1
  int v17; // r4@1
  signed int v20; // r6@6
  int v22; // r4@8
  int v23; // r7@8
  const void **v24; // r0@8
  void *v25; // r0@8
  void *v28; // r0@17
  const void **v29; // r0@18
  char *v30; // r0@18
  void *v31; // r0@19
  unsigned int *v32; // r2@22
  signed int v33; // r1@24
  unsigned int *v34; // r2@26
  signed int v35; // r1@28
  unsigned int *v36; // r2@30
  signed int v37; // r1@32
  __int64 v38; // r4@21
  char *v39; // r0@51
  void *v40; // r0@52
  void *v41; // r0@53
  void *v42; // r0@54
  unsigned int *v43; // r2@55
  signed int v44; // r1@57
  unsigned int *v45; // r2@59
  signed int v46; // r1@61
  unsigned int *v47; // r2@67
  signed int v48; // r1@69
  unsigned int *v49; // r2@71
  signed int v50; // r1@73
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  signed int v53; // [sp+8h] [bp-58h]@8
  int v54; // [sp+Ch] [bp-54h]@18
  char *v55; // [sp+10h] [bp-50h]@18
  int v56; // [sp+14h] [bp-4Ch]@17
  int v57; // [sp+18h] [bp-48h]@8
  char *v58; // [sp+1Ch] [bp-44h]@8
  int v59; // [sp+20h] [bp-40h]@8
  int v60; // [sp+24h] [bp-3Ch]@8
  int v61; // [sp+28h] [bp-38h]@8

  __asm { VLDR            S16, [SP,#0x60+arg_8] }
  v12 = (int *)LODWORD(a3);
  v13 = (int *)a4;
  __asm { VMOV            R2, S16 }
  v15 = a2;
  v16 = _R2;
  v17 = Font::getLineLength(a2, v12, _R2, a5);
  if ( a8 )
  {
    _R7 = 0;
  }
  else
    _R6 = (I18n *)Font::getLineLength(v15, (int *)algn_27D2E94, 1065353216, 0);
    if ( I18n::languageSupportsHypenSplitting(_R6) == 1 )
    {
      __asm
      {
        VMOV            S0, R6
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S16
        VCVTR.S32.F32   S0, S0
        VMOV            R7, S0
      }
    }
  if ( _R7 + v17 <= a6 )
    v22 = Util::utf8len(v13, 1);
    sub_119C854(&v61, v13);
    sub_119C854(&v60, v12);
    v53 = v22 + 1;
    Util::utf8substring((const void **)&v59, v13, 0, v22 + 1);
    v23 = v16;
    Util::utf8substring((const void **)&v57, v13, 0, 0);
    v24 = sub_119C984((const void **)&v57, 0, *v12, *(_BYTE **)(*v12 - 12));
    v58 = (char *)*v24;
    *v24 = &unk_28898CC;
    v25 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v57 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v23 = v16;
      else
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    if ( a8 )
      _R5 = 0;
    else if ( I18n::languageSupportsHypenSplitting((I18n *)v25) == 1 )
      _R4 = (I18n *)Font::getLineLength(v15, (int *)algn_27D2E94, 1065353216, 0);
      if ( I18n::languageSupportsHypenSplitting(_R4) == 1 )
        __asm
        {
          VMOV            S0, R4
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S16
          VCVTR.S32.F32   S0, S0
          VMOV            R5, S0
        }
        _R5 = 0;
    else
    v20 = 0;
    while ( Font::getLineLength(v15, (int *)&v58, v23, a5) + _R5 <= a6 )
      EntityInteraction::setInteractText(&v61, &v59);
      EntityInteraction::setInteractText(&v60, (int *)&v58);
      Util::utf8substring((const void **)&v56, v13, ++v20, v53);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v59, &v56);
      v28 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v56 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      Util::utf8substring((const void **)&v54, v13, 0, v20);
      v29 = sub_119C984((const void **)&v54, 0, *v12, *(_BYTE **)(*v12 - 12));
      v55 = (char *)*v29;
      *v29 = &unk_28898CC;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v58,
        (int *)&v55);
      v30 = v55 - 12;
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v55 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v31 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v54 - 4);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v31);
      if ( !*(_DWORD *)(v61 - 12) )
        LODWORD(v38) = 1;
        goto LABEL_48;
    LODWORD(v38) = 0;
LABEL_48:
    EntityInteraction::setInteractText(v13, &v61);
    HIDWORD(v38) = a8;
    EntityInteraction::setInteractText(v12, &v60);
    if ( !v38 && I18n::languageSupportsHypenSplitting(a8) == 1 )
      sub_119C8A4((const void **)v12, (const void **)algn_27D2E94);
    v39 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v58 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v39);
    v40 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v59 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    v41 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v60 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v41);
    v42 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v61 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v42);
  return v20;
}


void __fastcall MinecraftUIMeasureStrategy::measureTextHeight(int a1, int a2, Font *a3, int a4, unsigned int a5, int a6, int a7)
{
  MinecraftUIMeasureStrategy::_measureText(a1, a2, a3, a4, __PAIR__(0x7FFFFFFF, a5), a6, a7);
}


int __fastcall MinecraftUIMeasureStrategy::filterProfanityFromText(int a1, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(a2 + 4);
  return UIProfanityContext::filterProfanityFromString();
}


int __fastcall MinecraftUIMeasureStrategy::getSpaceSize(MinecraftUIMeasureStrategy *this, Font *a2, float a3)
{
  int result; // r0@1

  _R4 = a3;
  _R0 = Font::getLineLength((int)a2, &dword_27D2E90, 1065353216, 0);
  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R4
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}
