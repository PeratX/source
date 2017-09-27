

int __fastcall CSHA1::ReportHash(int a1, char *a2, int a3)
{
  int v3; // r8@1
  char *v4; // r10@1
  int v5; // r7@1
  int v6; // r4@3
  const char *v7; // r5@3
  int result; // r0@7
  int v9; // r4@9
  char s; // [sp+4h] [bp-34h]@3
  RakNet *v11; // [sp+14h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v11 = _stack_chk_guard;
  if ( !a2 )
  {
    result = 0;
    goto LABEL_13;
  }
  if ( (a3 | 2) == 2 )
    j_snprintf(&s, 0xFu, "%02X", *(_BYTE *)(a1 + 96));
    j_strcpy(v4, &s);
    v6 = 0;
    v7 = " %02X";
    if ( v5 )
      v7 = "%02X";
    do
    {
      j_snprintf(&s, 0xFu, v7, *(_BYTE *)(v3 + 97 + v6));
      j_strcat(v4, &s);
      ++v6;
    }
    while ( v6 != 19 );
    goto LABEL_11;
  if ( a3 == 1 )
    j_snprintf(&s, 0xFu, "%u", *(_BYTE *)(a1 + 96));
    v9 = 0;
      j_snprintf(&s, 0xFu, " %u", *(_BYTE *)(v3 + 97 + v9));
      ++v9;
    while ( v9 != 19 );
LABEL_11:
    result = 1;
  result = 0;
LABEL_13:
  if ( _stack_chk_guard != v11 )
    j___stack_chk_fail_0(result);
  return result;
}


unsigned __int32 __fastcall CSHA1::Final(CSHA1 *this)
{
  CSHA1 *v1; // r4@1
  unsigned int v2; // r0@1
  unsigned int v3; // r1@1
  int v4; // r2@1
  int v5; // r5@4
  unsigned int v6; // r0@8
  int v7; // r2@8
  int v8; // r1@9
  int v9; // r6@12
  int v10; // r1@17
  int v11; // r5@20
  int v12; // r0@20
  int v13; // r3@24
  int v14; // r1@24
  int v15; // r3@24
  char v17; // [sp+0h] [bp-20h]@1
  char v18; // [sp+1h] [bp-1Fh]@1
  char v19; // [sp+2h] [bp-1Eh]@1
  char v20; // [sp+3h] [bp-1Dh]@1
  char v21; // [sp+4h] [bp-1Ch]@1
  char v22; // [sp+5h] [bp-1Bh]@1
  char v23; // [sp+6h] [bp-1Ah]@1
  char v24; // [sp+7h] [bp-19h]@1

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v17 = BYTE3(v2);
  v18 = v2 >> 16;
  v19 = BYTE1(v2);
  v20 = v2;
  v3 = *((_DWORD *)v1 + 5);
  v21 = *((_DWORD *)v1 + 5) >> 24;
  v22 = v3 >> 16;
  v23 = BYTE1(v3);
  v24 = v3;
  *((_DWORD *)v1 + 5) = v3 + 8;
  v4 = (v3 >> 3) & 0x3F;
  if ( v3 >= 0xFFFFFFF8 )
    *((_DWORD *)v1 + 6) = ++v2;
  *((_DWORD *)v1 + 6) = v2;
  if ( (unsigned int)(v4 + 1) < 0x40 )
  {
    v5 = 0;
  }
  else
    v5 = 64 - v4;
    j___aeabi_memcpy_0((int)v1 + v4 + 32, (int)"?", 64 - v4);
    j_CSHA1::Transform(v1, (unsigned __int32 *)v1, (const unsigned __int8 *)v1 + 32);
    if ( v5 == 1 )
      goto LABEL_8;
    v4 = 0;
  j___aeabi_memcpy_0((int)v1 + v4 + 32, (int)&aA_3[v5], 1 - v5);
LABEL_8:
  v6 = *((_DWORD *)v1 + 5);
  v7 = (v6 >> 3) & 0x3F;
  if ( (*((_DWORD *)v1 + 5) & 0x1F8) != 448 )
    while ( 1 )
    {
      *((_DWORD *)v1 + 5) = v6 + 8;
      v8 = *((_DWORD *)v1 + 6);
      if ( v6 >= 0xFFFFFFF8 )
        *((_DWORD *)v1 + 6) = ++v8;
      *((_DWORD *)v1 + 6) = v8;
      if ( (unsigned int)(v7 + 1) < 0x40 )
        break;
      v9 = 64 - v7;
      j___aeabi_memclr_0((int)v1 + v7 + 32, 64 - v7);
      j_CSHA1::Transform(v1, (unsigned __int32 *)v1, (const unsigned __int8 *)v1 + 32);
      if ( v9 != 1 )
      {
        v7 = 0;
LABEL_15:
        j___aeabi_memcpy_0((int)v1 + v7 + 32, (int)&unk_2630750 + v9, 1 - v9);
      }
      v6 = *((_DWORD *)v1 + 5);
      v7 = (v6 >> 3) & 0x3F;
      if ( (*((_DWORD *)v1 + 5) & 0x1F8) == 448 )
        goto LABEL_17;
    }
    v9 = 0;
    goto LABEL_15;
LABEL_17:
  *((_DWORD *)v1 + 5) = v6 + 64;
  v10 = *((_DWORD *)v1 + 6);
  if ( v6 >= 0xFFFFFFC0 )
    *((_DWORD *)v1 + 6) = ++v10;
  *((_DWORD *)v1 + 6) = v10;
  if ( (unsigned int)(v7 + 8) < 0x40 )
    v11 = 0;
    v11 = 64 - v7;
    j___aeabi_memcpy_0((int)v1 + v7 + 32, (int)&v17, 64 - v7);
    v7 = 0;
    v12 = 0;
    if ( v11 == 8 )
      goto LABEL_24;
  j___aeabi_memcpy_0((int)v1 + v7 + 32, (int)(&v17 + v11), 8 - v11);
  v7 = 0;
  v12 = 0;
  do
LABEL_24:
    v13 = ~v7 & 0x18;
    v7 += 8;
    v14 = *(_DWORD *)((char *)v1 + (v12 & 0xFFFFFFFC)) >> v13;
    v15 = (int)v1 + v12++;
    *(_BYTE *)(v15 + 96) = v14;
  while ( v12 != 20 );
  j___aeabi_memclr4_0((int)v1 + 32, 64);
  *(_DWORD *)v1 = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  *((_DWORD *)v1 + 6) = 0;
  return j_CSHA1::Transform(v1, (unsigned __int32 *)v1, (const unsigned __int8 *)v1 + 32);
}


int __fastcall CSHA1::Reset(int result)
{
  *(_DWORD *)result = 1732584193;
  *(_DWORD *)(result + 4) = -271733879;
  *(_DWORD *)(result + 8) = -1732584194;
  *(_DWORD *)(result + 12) = 271733878;
  *(_DWORD *)(result + 16) = -1009589776;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


signed int __fastcall CSHA1::GetHash(CSHA1 *this, unsigned __int8 *a2)
{
  signed int result; // r0@2

  if ( a2 )
  {
    j___aeabi_memcpy_0((int)a2, (int)this + 96, 20);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall CSHA1::~CSHA1(int result)
{
  *(_DWORD *)result = 1732584193;
  *(_DWORD *)(result + 4) = -271733879;
  *(_DWORD *)(result + 8) = -1732584194;
  *(_DWORD *)(result + 12) = 271733878;
  *(_DWORD *)(result + 16) = -1009589776;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


unsigned int __fastcall CSHA1::Update(CSHA1 *this, const unsigned __int8 *a2, unsigned __int32 a3)
{
  CSHA1 *v3; // r5@1
  const unsigned __int8 *v4; // r6@1
  unsigned int v5; // r1@1
  unsigned __int32 v6; // r4@1
  signed int v7; // r2@1
  unsigned int v8; // r0@1
  int v9; // r0@3
  int v10; // r9@3
  unsigned int result; // r0@5
  int v12; // r7@6

  v3 = this;
  v4 = a2;
  v5 = *((_DWORD *)this + 5);
  v6 = a3;
  v7 = 1;
  v8 = v5 + 8 * v6;
  *((_DWORD *)v3 + 5) = v8;
  if ( v8 >= v5 )
    v7 = 0;
  v9 = *((_DWORD *)v3 + 6);
  v10 = (v5 >> 3) & 0x3F;
  if ( v7 )
    *((_DWORD *)v3 + 6) = ++v9;
  *((_DWORD *)v3 + 6) = v9 + (v6 >> 29);
  result = v10 + v6;
  if ( v10 + v6 < 0x40 )
  {
    v12 = 0;
  }
  else
    v12 = 64 - v10;
    j___aeabi_memcpy_0((int)v3 + v10 + 32, (int)v4, 64 - v10);
    j_CSHA1::Transform(v3, (unsigned __int32 *)v3, (const unsigned __int8 *)v3 + 32);
    result = 127 - v10;
    while ( result < v6 )
    {
      j_CSHA1::Transform(v3, (unsigned __int32 *)v3, &v4[v12]);
      result = v12 + 127;
      v12 += 64;
    }
    v10 = 0;
  if ( v12 != v6 )
    result = j_j___aeabi_memcpy_4((int)v3 + v10 + 32, (int)&v4[v12], v6 - v12);
  return result;
}


int __fastcall CSHA1::ReportHash_a(int a1, char *a2, int a3)
{
  int v3; // r8@1
  char *v4; // r10@1
  int v5; // r7@1
  int v6; // r4@3
  const char *v7; // r5@3
  int result; // r0@7
  int v9; // r4@9
  char s; // [sp+4h] [bp-34h]@3
  RakNet *v11; // [sp+14h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v11 = _stack_chk_guard;
  if ( !a2 )
  {
    result = 0;
    goto LABEL_13;
  }
  if ( (a3 | 2) == 2 )
    j_sprintf(&s, "%02X", *(_BYTE *)(a1 + 96));
    j_strcpy(v4, &s);
    v6 = 0;
    v7 = " %02X";
    if ( v5 )
      v7 = "%02X";
    do
    {
      j_sprintf(&s, v7, *(_BYTE *)(v3 + 97 + v6));
      j_strcat(v4, &s);
      ++v6;
    }
    while ( v6 != 19 );
    goto LABEL_11;
  if ( a3 == 1 )
    j_sprintf(&s, "%u", *(_BYTE *)(a1 + 96));
    v9 = 0;
      j_sprintf(&s, " %u", *(_BYTE *)(v3 + 97 + v9));
      ++v9;
    while ( v9 != 19 );
LABEL_11:
    result = 1;
  result = 0;
LABEL_13:
  if ( _stack_chk_guard != v11 )
    j___stack_chk_fail_0(result);
  return result;
}


unsigned int __fastcall CSHA1::HashFile(CSHA1 *this, const char *a2)
{
  CSHA1 *v2; // r4@1
  FILE *v3; // r10@2
  void *v4; // r6@3
  size_t v5; // r0@4
  unsigned int v6; // r7@4
  unsigned int v7; // r1@5
  signed int v8; // r2@5
  unsigned int v9; // r0@5
  int v10; // r0@7
  int v11; // r11@7
  int v12; // r5@10
  unsigned int v13; // r0@10
  __int16 v14; // r4@18
  unsigned int result; // r0@18

  v2 = this;
  if ( a2 && (v3 = j_fopen(a2, "rb")) != 0 )
  {
    v4 = j_operator new[](0x80200u);
    do
    {
      v5 = j_fread(v4, 1u, 0x80200u, v3);
      v6 = v5;
      if ( !v5 )
        break;
      v7 = *((_DWORD *)v2 + 5);
      v8 = 1;
      v9 = v7 + 8 * v5;
      *((_DWORD *)v2 + 5) = v9;
      if ( v9 >= v7 )
        v8 = 0;
      v10 = *((_DWORD *)v2 + 6);
      v11 = (v7 >> 3) & 0x3F;
      if ( v8 )
        *((_DWORD *)v2 + 6) = ++v10;
      *((_DWORD *)v2 + 6) = v10 + (v6 >> 29);
      if ( v11 + v6 < 0x40 )
      {
        v12 = 0;
      }
      else
        v12 = 64 - v11;
        j___aeabi_memcpy_0((int)v2 + v11 + 32, (int)v4, 64 - v11);
        j_CSHA1::Transform(v2, (unsigned __int32 *)v2, (const unsigned __int8 *)v2 + 32);
        v13 = 127 - v11;
        while ( v13 < v6 )
        {
          j_CSHA1::Transform(v2, (unsigned __int32 *)v2, (const unsigned __int8 *)v4 + v12);
          v13 = v12 + 127;
          v12 += 64;
        }
        v11 = 0;
      if ( v6 != v12 )
        j___aeabi_memcpy_0((int)v2 + v11 + 32, (int)v4 + v12, v6 - v12);
    }
    while ( v6 > 0x801FF );
    v14 = *((_WORD *)v3 + 6);
    j_fclose(v3);
    j_operator delete[](v4);
    result = (v14 & 0x20u) >> 5;
  }
  else
    result = 0;
  return result;
}


int __fastcall CSHA1::CSHA1(int result)
{
  *(_DWORD *)(result + 192) = result + 128;
  *(_DWORD *)result = 1732584193;
  *(_DWORD *)(result + 4) = -271733879;
  *(_DWORD *)(result + 8) = -1732584194;
  *(_DWORD *)(result + 12) = 271733878;
  *(_DWORD *)(result + 16) = -1009589776;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


char *__fastcall CSHA1::GetHash(CSHA1 *this)
{
  return (char *)this + 96;
}


unsigned __int32 __fastcall CSHA1::Transform(CSHA1 *this, unsigned __int32 *a2, const unsigned __int8 *a3)
{
  unsigned __int32 *v3; // r11@1
  CSHA1 *v4; // r4@1
  __int64 v5; // kr00_8@1
  int v6; // ST34_4@1
  __int64 v7; // r8@1
  unsigned __int32 v8; // ST18_4@1
  int v9; // r0@1
  unsigned int v10; // r12@1
  unsigned int v11; // r1@1
  unsigned int v12; // ST0C_4@1
  unsigned int v13; // r1@1
  unsigned int v14; // ST24_4@1
  unsigned int v15; // r1@1
  unsigned int v16; // ST38_4@1
  unsigned int v17; // r1@1
  unsigned int v18; // ST50_4@1
  unsigned int v19; // r1@1
  int v20; // r0@1
  unsigned int v21; // ST6C_4@1
  unsigned int v22; // r1@1
  unsigned int v23; // ST7C_4@1
  unsigned int v24; // r1@1
  unsigned int v25; // ST90_4@1
  unsigned int v26; // r1@1
  unsigned int v27; // STB0_4@1
  unsigned int v28; // r1@1
  unsigned int v29; // STD8_4@1
  unsigned int v30; // r1@1
  unsigned int v31; // STF0_4@1
  unsigned int v32; // r1@1
  int v33; // r0@1
  unsigned int v34; // ST108_4@1
  unsigned int v35; // r1@1
  unsigned int v36; // ST110_4@1
  unsigned int v37; // r1@1
  unsigned int v38; // STF8_4@1
  unsigned int v39; // r6@1
  unsigned int v40; // r1@1
  unsigned int v41; // STFC_4@1
  unsigned int v42; // r7@1
  unsigned int v43; // r1@1
  unsigned int v44; // ST138_4@1
  int v45; // ST140_4@1
  int v46; // off@1
  int v47; // ST13C_4@1
  int v48; // off@1
  int v49; // r0@1
  int v50; // r2@1
  int v51; // STF4_4@1
  int v52; // off@1
  int v53; // r7@1
  int v54; // ST130_4@1
  int v55; // off@1
  int v56; // ST12C_4@1
  int v57; // off@1
  int v58; // off@1
  int v59; // ST134_4@1
  int v60; // off@1
  int v61; // r0@1
  int v62; // r3@1
  int v63; // STE8_4@1
  int v64; // off@1
  int v65; // r7@1
  int v66; // ST128_4@1
  int v67; // off@1
  int v68; // ST124_4@1
  int v69; // off@1
  int v70; // off@1
  int v71; // ST120_4@1
  int v72; // off@1
  int v73; // r0@1
  int v74; // r7@1
  int v75; // STC8_4@1
  int v76; // off@1
  int v77; // r6@1
  int v78; // ST11C_4@1
  int v79; // off@1
  int v80; // ST118_4@1
  int v81; // off@1
  int v82; // off@1
  int v83; // ST114_4@1
  int v84; // off@1
  int v85; // r0@1
  int v86; // r1@1
  int v87; // ST9C_4@1
  int v88; // off@1
  int v89; // r5@1
  int v90; // r2@1
  int v91; // ST10C_4@1
  int v92; // off@1
  int v93; // ST104_4@1
  int v94; // off@1
  int v95; // off@1
  int v96; // ST100_4@1
  int v97; // off@1
  int v98; // r0@1
  int v99; // r2@1
  int v100; // ST80_4@1
  int v101; // off@1
  int v102; // r7@1
  int v103; // STEC_4@1
  int v104; // off@1
  int v105; // STE4_4@1
  int v106; // off@1
  int v107; // off@1
  int v108; // STE0_4@1
  int v109; // off@1
  int v110; // r0@1
  int v111; // r3@1
  int v112; // ST68_4@1
  int v113; // off@1
  int v114; // r7@1
  int v115; // STD4_4@1
  int v116; // off@1
  int v117; // STD0_4@1
  int v118; // off@1
  int v119; // off@1
  int v120; // STDC_4@1
  int v121; // off@1
  int v122; // r0@1
  int v123; // r7@1
  int v124; // ST60_4@1
  int v125; // off@1
  int v126; // r6@1
  int v127; // STC4_4@1
  int v128; // off@1
  int v129; // STC0_4@1
  int v130; // off@1
  int v131; // off@1
  int v132; // STCC_4@1
  int v133; // off@1
  int v134; // r0@1
  int v135; // r1@1
  int v136; // ST54_4@1
  int v137; // off@1
  int v138; // r5@1
  int v139; // r2@1
  int v140; // STB8_4@1
  int v141; // off@1
  int v142; // STB4_4@1
  int v143; // off@1
  int v144; // off@1
  int v145; // STBC_4@1
  int v146; // off@1
  int v147; // r0@1
  int v148; // r2@1
  int v149; // ST4C_4@1
  int v150; // off@1
  int v151; // r7@1
  int v152; // STA8_4@1
  int v153; // off@1
  int v154; // STA4_4@1
  int v155; // off@1
  int v156; // off@1
  int v157; // STAC_4@1
  int v158; // off@1
  int v159; // r0@1
  int v160; // r3@1
  int v161; // ST44_4@1
  int v162; // off@1
  int v163; // r7@1
  int v164; // ST98_4@1
  int v165; // off@1
  int v166; // ST94_4@1
  int v167; // off@1
  int v168; // off@1
  int v169; // STA0_4@1
  int v170; // off@1
  int v171; // r0@1
  int v172; // r7@1
  int v173; // ST30_4@1
  int v174; // off@1
  int v175; // r6@1
  int v176; // ST8C_4@1
  int v177; // off@1
  int v178; // ST84_4@1
  int v179; // off@1
  int v180; // off@1
  int v181; // ST88_4@1
  int v182; // off@1
  int v183; // r0@1
  int v184; // r1@1
  int v185; // ST28_4@1
  int v186; // off@1
  int v187; // r5@1
  int v188; // r2@1
  int v189; // ST78_4@1
  int v190; // off@1
  int v191; // ST74_4@1
  int v192; // off@1
  int v193; // off@1
  int v194; // ST70_4@1
  int v195; // off@1
  int v196; // r0@1
  int v197; // r2@1
  int v198; // ST08_4@1
  int v199; // off@1
  int v200; // r7@1
  int v201; // ST64_4@1
  int v202; // off@1
  int v203; // ST5C_4@1
  int v204; // off@1
  int v205; // off@1
  int v206; // ST58_4@1
  int v207; // off@1
  int v208; // r0@1
  int v209; // r3@1
  int v210; // ST04_4@1
  int v211; // off@1
  int v212; // r7@1
  int v213; // ST48_4@1
  int v214; // off@1
  int v215; // ST40_4@1
  int v216; // off@1
  int v217; // off@1
  int v218; // ST3C_4@1
  int v219; // off@1
  int v220; // r0@1
  int v221; // r6@1
  int v222; // lr@1
  int v223; // off@1
  int v224; // r7@1
  int v225; // ST2C_4@1
  int v226; // off@1
  int v227; // ST20_4@1
  int v228; // off@1
  int v229; // off@1
  int v230; // ST1C_4@1
  int v231; // off@1
  int v232; // r0@1
  int v233; // ST14_4@1
  int v234; // off@1
  int v235; // ST10_4@1
  int v236; // r1@1
  int v237; // off@1
  int v238; // off@1
  int v239; // r2@1
  int v240; // off@1
  int v241; // r0@1
  int v242; // off@1
  int v243; // r2@1
  int v244; // off@1
  int v245; // off@1
  int v246; // r2@1
  int v247; // off@1
  int v248; // r2@1
  int v249; // off@1
  int v250; // r2@1
  int v251; // off@1
  int v252; // r2@1
  int v253; // off@1
  int v254; // r3@1
  int v255; // off@1
  int v256; // off@1
  int v257; // r2@1
  int v258; // r3@1
  int v259; // off@1
  int v260; // off@1
  int v261; // r7@1
  int v262; // r2@1
  int v263; // off@1
  int v264; // off@1
  int v265; // r2@1
  int v266; // r2@1
  int v267; // off@1
  int v268; // r0@1
  int v269; // off@1
  int v270; // off@1
  int v271; // r6@1
  int v272; // r2@1
  int v273; // off@1
  int v274; // r2@1
  int v275; // off@1
  int v276; // r3@1
  int v277; // off@1
  int v278; // off@1
  int v279; // r0@1
  int v280; // r2@1
  int v281; // off@1
  int v282; // r2@1
  int v283; // off@1
  int v284; // off@1
  int v285; // r0@1
  int v286; // off@1
  int v287; // r2@1
  int v288; // r3@1
  int v289; // off@1
  int v290; // off@1
  int v291; // r2@1
  int v292; // off@1
  int v293; // off@1
  int v294; // r2@1
  int v295; // off@1
  int v296; // r2@1
  int v297; // r3@1
  int v298; // off@1
  int v299; // off@1
  int v300; // r2@1
  int v301; // off@1
  int v302; // off@1
  int v303; // r2@1
  int v304; // off@1
  int v305; // r2@1
  int v306; // r3@1
  int v307; // off@1
  int v308; // off@1
  int v309; // r7@1
  int v310; // r2@1
  int v311; // off@1
  int v312; // off@1
  int v313; // r2@1
  int v314; // r2@1
  int v315; // off@1
  int v316; // r0@1
  int v317; // off@1
  int v318; // off@1
  int v319; // r6@1
  int v320; // r2@1
  int v321; // off@1
  int v322; // r2@1
  int v323; // off@1
  int v324; // r3@1
  int v325; // off@1
  int v326; // off@1
  int v327; // r0@1
  int v328; // r2@1
  int v329; // off@1
  int v330; // r2@1
  int v331; // off@1
  int v332; // off@1
  int v333; // r0@1
  int v334; // r2@1
  int v335; // off@1
  int v336; // r5@1
  int v337; // off@1
  int v338; // r2@1
  int v339; // r3@1
  int v340; // off@1
  int v341; // r3@1
  int v342; // off@1
  int v343; // off@1
  int v344; // r2@1
  int v345; // off@1
  int v346; // r3@1
  int v347; // r5@1
  int v348; // off@1
  int v349; // r5@1
  int v350; // off@1
  int v351; // r3@1
  int v352; // off@1
  int v353; // r7@1
  int v354; // off@1
  int v355; // off@1
  int v356; // r5@1
  int v357; // r7@1
  int v358; // off@1
  int v359; // off@1
  int v360; // r4@1
  int v361; // r5@1
  int v362; // off@1
  int v363; // r4@1
  int v364; // off@1
  int v365; // off@1
  int v366; // r4@1
  int v367; // r6@1
  int v368; // off@1
  int v369; // off@1
  int v370; // r1@1
  int v371; // r4@1
  int v372; // off@1
  int v373; // r1@1
  int v374; // off@1
  int v375; // r0@1
  int v376; // off@1
  int v377; // r2@1
  int v378; // off@1
  int v379; // off@1
  int v380; // r1@1
  int v381; // off@1
  int v382; // r0@1
  int v383; // r0@1
  int v384; // off@1
  int v385; // off@1
  int v386; // r0@1
  int v387; // r3@1
  int v388; // off@1
  int v389; // off@1
  int v390; // off@1
  int v391; // r0@1
  int v392; // r0@1
  int v393; // off@1
  int v394; // off@1
  int v395; // r0@1
  int v396; // r5@1
  int v397; // off@1
  int v398; // r6@1
  int v399; // off@1
  int v400; // off@1
  int v401; // r0@1
  int v402; // r4@1
  int v403; // off@1
  int v404; // off@1
  int v405; // r2@1
  int v406; // off@1
  int v407; // r7@1
  int v408; // r2@1
  int v409; // off@1
  int v410; // off@1
  int v411; // r2@1
  int v412; // r1@1
  int v413; // off@1
  int v414; // off@1
  int v415; // r1@1
  int v416; // r2@1
  int v417; // off@1
  int v418; // r1@1
  int v419; // off@1
  int v420; // off@1
  int v421; // r2@1
  int v422; // off@1
  int v423; // r2@1
  int v424; // off@1
  int v425; // r6@1
  int v426; // r2@1
  int v427; // off@1
  int v428; // off@1
  int v429; // r2@1
  int v430; // r2@1
  int v431; // off@1
  int v432; // r2@1
  int v433; // off@1
  int v434; // off@1
  int v435; // r2@1
  int v436; // off@1
  int v437; // off@1
  int v438; // r2@1
  int v439; // r0@1
  int v440; // off@1
  int v441; // r0@1
  int v442; // off@1
  int v443; // r2@1
  int v444; // off@1
  int v445; // r2@1
  int v446; // off@1
  int v447; // off@1
  int v448; // r0@1
  int v449; // r2@1
  int v450; // off@1
  int v451; // r2@1
  int v452; // off@1
  int v453; // off@1
  int v454; // r7@1
  int v455; // r2@1
  int v456; // off@1
  int v457; // off@1
  int v458; // r2@1
  int v459; // r1@1
  int v460; // off@1
  int v461; // r1@1
  int v462; // off@1
  int v463; // r2@1
  int v464; // off@1
  int v465; // r2@1
  int v466; // off@1
  int v467; // off@1
  int v468; // r1@1
  int v469; // r2@1
  int v470; // off@1
  int v471; // r2@1
  int v472; // off@1
  int v473; // off@1
  int v474; // r6@1
  int v475; // r2@1
  int v476; // off@1
  int v477; // off@1
  int v478; // r2@1
  int v479; // r2@1
  int v480; // off@1
  int v481; // r2@1
  int v482; // off@1
  int v483; // off@1
  int v484; // r2@1
  int v485; // off@1
  int v486; // off@1
  int v487; // r2@1
  int v488; // r0@1
  int v489; // off@1
  int v490; // r0@1
  int v491; // off@1
  int v492; // r2@1
  int v493; // off@1
  int v494; // r2@1
  int v495; // off@1
  int v496; // off@1
  int v497; // r0@1
  int v498; // r2@1
  int v499; // off@1
  int v500; // r2@1
  int v501; // off@1
  int v502; // off@1
  int v503; // r7@1
  int v504; // r2@1
  int v505; // off@1
  int v506; // off@1
  int v507; // r2@1
  int v508; // r1@1
  int v509; // off@1
  int v510; // r1@1
  int v511; // off@1
  int v512; // r2@1
  int v513; // off@1
  int v514; // r2@1
  int v515; // off@1
  int v516; // off@1
  int v517; // r1@1
  int v518; // r2@1
  int v519; // off@1
  int v520; // r2@1
  int v521; // off@1
  int v522; // off@1
  int v523; // r6@1
  int v524; // r2@1
  int v525; // off@1
  int v526; // off@1
  int v527; // r2@1
  int v528; // r2@1
  int v529; // off@1
  int v530; // r2@1
  int v531; // off@1
  int v532; // off@1
  int v533; // r2@1
  int v534; // off@1
  int v535; // off@1
  int v536; // r2@1
  int v537; // r0@1
  int v538; // off@1
  int v539; // r0@1
  int v540; // off@1
  int v541; // r2@1
  int v542; // off@1
  int v543; // r2@1
  int v544; // off@1
  int v545; // off@1
  int v546; // r0@1
  int v547; // r2@1
  int v548; // off@1
  int v549; // r2@1
  int v550; // off@1
  int v551; // r3@1
  int v552; // off@1
  int v553; // r3@1
  int v554; // off@1
  int v555; // off@1
  int v556; // r2@1
  int v557; // r1@1
  int v558; // off@1
  int v559; // r1@1
  int v560; // off@1
  int v561; // off@1
  int v562; // r3@1
  int v563; // r1@1
  int v564; // off@1
  int v565; // off@1
  int v566; // r1@1
  int v567; // r1@1
  int v568; // off@1
  int v569; // r1@1
  int v570; // off@1
  int v571; // off@1
  int v572; // r7@1
  int v573; // r1@1
  int v574; // off@1
  int v575; // off@1
  int v576; // r1@1
  int v577; // r1@1
  int v578; // off@1
  int v579; // r1@1
  int v580; // off@1
  int v581; // off@1
  int v582; // r6@1
  int v583; // r1@1
  int v584; // off@1
  int v585; // off@1
  int v586; // r1@1
  int v587; // r0@1
  int v588; // off@1
  int v589; // r0@1
  int v590; // off@1
  int v591; // r1@1
  int v592; // off@1
  int v593; // r1@1
  int v594; // off@1
  int v595; // off@1
  int v596; // r0@1
  int v597; // r1@1
  int v598; // off@1
  int v599; // r1@1
  int v600; // off@1
  int v601; // r2@1
  int v602; // off@1
  int v603; // r2@1
  int v604; // off@1
  int v605; // off@1
  int v606; // r1@1
  int v607; // r2@1
  int v608; // off@1
  int v609; // r2@1
  int v610; // off@1
  int v611; // r3@1
  int v612; // off@1
  int v613; // off@1
  int v614; // r2@1
  int v615; // off@1
  int v616; // off@1
  int v617; // r2@1
  int v618; // r2@1
  int v619; // off@1
  int v620; // r2@1
  int v621; // off@1
  int v622; // r3@1
  int v623; // off@1
  int v624; // off@1
  int v625; // r7@1
  int v626; // r2@1
  int v627; // off@1
  int v628; // off@1
  int v629; // r2@1
  int v630; // r2@1
  int v631; // off@1
  int v632; // r2@1
  int v633; // off@1
  int v634; // r3@1
  int v635; // off@1
  int v636; // off@1
  int v637; // r6@1
  int v638; // r2@1
  int v639; // off@1
  int v640; // off@1
  int v641; // r2@1
  int v642; // r3@1
  int v643; // off@1
  int v644; // r0@1
  int v645; // off@1
  int v646; // r0@1
  int v647; // off@1
  int v648; // r2@1
  int v649; // off@1
  int v650; // r2@1
  int v651; // off@1
  int v652; // off@1
  int v653; // r0@1
  int v654; // r1@1
  int v655; // off@1
  int v656; // r3@1
  int v657; // off@1
  int v658; // r1@1
  int v659; // off@1
  int v660; // r2@1
  int v661; // off@1
  int v662; // r2@1
  int v663; // off@1
  int v664; // r1@1
  int v665; // off@1
  int v666; // r2@1
  int v667; // off@1
  int v668; // r2@1
  int v669; // off@1
  int v670; // r3@1
  int v671; // off@1
  int v672; // off@1
  int v673; // r2@1
  int v674; // off@1
  int v675; // off@1
  int v676; // r2@1
  int v677; // r2@1
  int v678; // off@1
  int v679; // r2@1
  int v680; // off@1
  int v681; // r3@1
  int v682; // off@1
  int v683; // off@1
  int v684; // r7@1
  int v685; // r2@1
  int v686; // off@1
  int v687; // off@1
  int v688; // r2@1
  int v689; // r2@1
  int v690; // off@1
  int v691; // r2@1
  int v692; // off@1
  int v693; // r3@1
  int v694; // off@1
  int v695; // off@1
  int v696; // r6@1
  int v697; // r2@1
  int v698; // off@1
  int v699; // off@1
  int v700; // r2@1
  int v701; // r3@1
  int v702; // off@1
  int v703; // r0@1
  int v704; // off@1
  int v705; // r0@1
  int v706; // off@1
  int v707; // r2@1
  int v708; // off@1
  int v709; // r2@1
  int v710; // off@1
  int v711; // off@1
  int v712; // r0@1
  int v713; // r1@1
  int v714; // off@1
  int v715; // r3@1
  int v716; // off@1
  int v717; // r1@1
  int v718; // off@1
  int v719; // r2@1
  int v720; // off@1
  int v721; // r2@1
  int v722; // off@1
  int v723; // r1@1
  int v724; // off@1
  int v725; // r2@1
  int v726; // off@1
  int v727; // r2@1
  int v728; // off@1
  int v729; // r3@1
  int v730; // off@1
  int v731; // off@1
  int v732; // r2@1
  int v733; // off@1
  int v734; // off@1
  int v735; // r2@1
  int v736; // r2@1
  int v737; // off@1
  int v738; // r2@1
  int v739; // off@1
  int v740; // r3@1
  int v741; // off@1
  int v742; // off@1
  int v743; // r7@1
  int v744; // r2@1
  int v745; // off@1
  int v746; // off@1
  int v747; // r2@1
  int v748; // r2@1
  int v749; // off@1
  int v750; // r2@1
  int v751; // off@1
  int v752; // r3@1
  int v753; // off@1
  int v754; // off@1
  int v755; // r6@1
  int v756; // r2@1
  int v757; // off@1
  int v758; // off@1
  int v759; // r2@1
  int v760; // r3@1
  int v761; // off@1
  int v762; // r0@1
  int v763; // off@1
  int v764; // r0@1
  int v765; // off@1
  int v766; // r2@1
  int v767; // off@1
  int v768; // r2@1
  int v769; // off@1
  int v770; // off@1
  int v771; // r0@1
  int v772; // r1@1
  int v773; // off@1
  int v774; // r3@1
  int v775; // off@1
  int v776; // r1@1
  int v777; // off@1
  int v778; // r2@1
  int v779; // off@1
  int v780; // r2@1
  int v781; // off@1
  int v782; // r1@1
  int v783; // off@1
  int v784; // r2@1
  int v785; // off@1
  int v786; // r2@1
  int v787; // off@1
  int v788; // r3@1
  int v789; // off@1
  int v790; // off@1
  int v791; // r2@1
  int v792; // off@1
  int v793; // off@1
  int v794; // r2@1
  int v795; // r2@1
  int v796; // off@1
  int v797; // r2@1
  int v798; // off@1
  int v799; // r3@1
  int v800; // off@1
  int v801; // off@1
  int v802; // r7@1
  int v803; // r2@1
  int v804; // off@1
  int v805; // off@1
  int v806; // r2@1
  int v807; // r2@1
  int v808; // off@1
  int v809; // r2@1
  int v810; // off@1
  int v811; // r3@1
  int v812; // off@1
  int v813; // off@1
  int v814; // r6@1
  int v815; // r2@1
  int v816; // off@1
  int v817; // off@1
  int v818; // r2@1
  int v819; // r3@1
  int v820; // off@1
  int v821; // r0@1
  int v822; // off@1
  int v823; // r0@1
  int v824; // off@1
  int v825; // r2@1
  int v826; // off@1
  int v827; // r2@1
  int v828; // off@1
  int v829; // off@1
  int v830; // r0@1
  int v831; // r1@1
  int v832; // off@1
  int v833; // r1@1
  int v834; // off@1
  int v835; // r2@1
  int v836; // off@1
  int v837; // off@1
  int v838; // r10@1
  int v839; // r1@1
  int v840; // off@1
  int v841; // off@1
  int v842; // r1@1
  int v843; // r1@1
  int v844; // off@1
  int v845; // r1@1
  int v846; // off@1
  int v847; // r2@1
  int v848; // off@1
  int v849; // r2@1
  int v850; // off@1
  int v851; // off@1
  int v852; // r1@1
  int v853; // r2@1
  int v854; // off@1
  int v855; // r2@1
  int v856; // off@1
  int v857; // r3@1
  int v858; // off@1
  int v859; // off@1
  int v860; // r3@1
  int v861; // r2@1
  int v862; // off@1
  int v863; // r3@1
  int v864; // off@1
  int v865; // r3@1
  int v866; // off@1
  int v867; // r7@1
  int v868; // off@1
  int v869; // off@1
  int v870; // r7@1
  int v871; // r0@1
  int v872; // off@1
  int v873; // off@1
  int v874; // r3@1
  int v875; // r0@1
  int v876; // off@1
  int v877; // r7@1
  int v878; // off@1
  int v879; // r7@1
  int v880; // off@1
  int v881; // off@1
  int v882; // r0@1
  int v883; // r7@1
  int v884; // off@1
  int v885; // r7@1
  int v886; // off@1
  int v887; // off@1
  int v888; // r6@1
  int v889; // r7@1
  int v890; // off@1
  int v891; // off@1
  int v892; // r7@1
  int v893; // r1@1
  int v894; // off@1
  int v895; // r1@1
  int v896; // off@1
  int v897; // r7@1
  int v898; // off@1
  int v899; // r7@1
  int v900; // off@1
  int v901; // off@1
  int v902; // r1@1
  int v903; // r2@1
  int v904; // off@1
  int v905; // r2@1
  int v906; // off@1
  int v907; // r7@1
  int v908; // off@1
  int v909; // r7@1
  int v910; // off@1
  int v911; // off@1
  int v912; // r2@1
  int v913; // r3@1
  int v914; // off@1
  int v915; // r3@1
  int v916; // off@1
  int v917; // r7@1
  int v918; // off@1
  int v919; // r7@1
  int v920; // off@1
  int v921; // off@1
  int v922; // r3@1
  int v923; // r0@1
  int v924; // off@1
  int v925; // r0@1
  int v926; // off@1
  int v927; // r7@1
  int v928; // off@1
  int v929; // r7@1
  int v930; // off@1
  int v931; // off@1
  int v932; // r0@1
  int v933; // r7@1
  int v934; // off@1
  int v935; // r7@1
  int v936; // off@1
  int v937; // off@1
  int v938; // r6@1
  int v939; // r7@1
  int v940; // off@1
  int v941; // off@1
  int v942; // r7@1
  int v943; // r1@1
  int v944; // off@1
  int v945; // r1@1
  int v946; // off@1
  int v947; // r7@1
  int v948; // off@1
  int v949; // r7@1
  int v950; // off@1
  int v951; // off@1
  int v952; // r1@1
  int v953; // r2@1
  int v954; // off@1
  int v955; // r2@1
  int v956; // off@1
  int v957; // r7@1
  int v958; // off@1
  int v959; // r7@1
  int v960; // off@1
  int v961; // off@1
  int v962; // r2@1
  int v963; // r3@1
  int v964; // off@1
  int v965; // r3@1
  int v966; // off@1
  int v967; // r7@1
  int v968; // off@1
  int v969; // r7@1
  int v970; // off@1
  int v971; // off@1
  int v972; // r3@1
  int v973; // r0@1
  int v974; // off@1
  int v975; // r0@1
  int v976; // off@1
  int v977; // r7@1
  int v978; // off@1
  int v979; // r7@1
  int v980; // off@1
  int v981; // off@1
  int v982; // r0@1
  int v983; // r7@1
  int v984; // off@1
  int v985; // r7@1
  int v986; // off@1
  int v987; // off@1
  int v988; // r6@1
  int v989; // r7@1
  int v990; // off@1
  int v991; // off@1
  int v992; // r7@1
  int v993; // r1@1
  int v994; // off@1
  int v995; // r1@1
  int v996; // off@1
  int v997; // off@1
  int v998; // r7@1
  int v999; // r1@1
  int v1000; // off@1
  int v1001; // off@1
  int v1002; // r1@1
  int v1003; // r1@1
  int v1004; // off@1
  int v1005; // r1@1
  int v1006; // off@1
  int v1007; // r2@1
  int v1008; // off@1
  int v1009; // r2@1
  int v1010; // off@1
  int v1011; // off@1
  int v1012; // r1@1
  int v1013; // r2@1
  int v1014; // off@1
  int v1015; // r2@1
  int v1016; // off@1
  int v1017; // r3@1
  int v1018; // off@1
  int v1019; // r3@1
  int v1020; // off@1
  int v1021; // off@1
  int v1022; // r2@1
  int v1023; // r0@1
  int v1024; // off@1
  int v1025; // r0@1
  int v1026; // off@1
  int v1027; // r3@1
  int v1028; // off@1
  int v1029; // r3@1
  int v1030; // off@1
  int v1031; // off@1
  int v1032; // r0@1
  int v1033; // r3@1
  int v1034; // off@1
  int v1035; // r3@1
  int v1036; // off@1
  int v1037; // r6@1
  int v1038; // off@1
  int v1039; // r6@1
  int v1040; // off@1
  int v1041; // off@1
  int v1042; // r3@1
  int v1043; // off@1
  int v1044; // r7@1
  int v1045; // r7@1
  int v1046; // off@1
  int v1047; // off@1
  int v1048; // off@1
  int v1049; // off@1
  unsigned __int32 result; // r0@1
  int v1051; // off@1

  v3 = a2;
  v4 = this;
  v5 = *(_QWORD *)a2;
  v6 = *(_QWORD *)a2 >> 32;
  v7 = *((_QWORD *)a2 + 1);
  v8 = a2[4];
  j___aeabi_memcpy_0(*((_DWORD *)this + 48), (int)a3, 64);
  v9 = *((_DWORD *)v4 + 48);
  v10 = __rev(*(_DWORD *)v9);
  *(_DWORD *)v9 = v10;
  v11 = __rev(*(_DWORD *)(v9 + 4));
  *(_DWORD *)(v9 + 4) = v11;
  v12 = v11;
  v13 = __rev(*(_DWORD *)(v9 + 8));
  *(_DWORD *)(v9 + 8) = v13;
  v14 = v13;
  v15 = __rev(*(_DWORD *)(v9 + 12));
  *(_DWORD *)(v9 + 12) = v15;
  v16 = v15;
  v17 = __rev(*(_DWORD *)(v9 + 16));
  *(_DWORD *)(v9 + 16) = v17;
  v18 = v17;
  v19 = __rev(*(_DWORD *)(v9 + 20));
  *(_DWORD *)(v9 + 20) = v19;
  v20 = *((_DWORD *)v4 + 48);
  v21 = v19;
  v22 = __rev(*(_DWORD *)(v20 + 24));
  *(_DWORD *)(v20 + 24) = v22;
  v23 = v22;
  v24 = __rev(*(_DWORD *)(v20 + 28));
  *(_DWORD *)(v20 + 28) = v24;
  v25 = v24;
  v26 = __rev(*(_DWORD *)(v20 + 32));
  *(_DWORD *)(v20 + 32) = v26;
  v27 = v26;
  v28 = __rev(*(_DWORD *)(v20 + 36));
  *(_DWORD *)(v20 + 36) = v28;
  v29 = v28;
  v30 = __rev(*(_DWORD *)(v20 + 40));
  *(_DWORD *)(v20 + 40) = v30;
  v31 = v30;
  v32 = __rev(*(_DWORD *)(v20 + 44));
  *(_DWORD *)(v20 + 44) = v32;
  v33 = *((_DWORD *)v4 + 48);
  v34 = v32;
  v35 = __rev(*(_DWORD *)(v33 + 48));
  *(_DWORD *)(v33 + 48) = v35;
  v36 = v35;
  v37 = __rev(*(_DWORD *)(v33 + 52));
  *(_DWORD *)(v33 + 52) = v37;
  v38 = v37;
  v39 = v37;
  v40 = __rev(*(_DWORD *)(v33 + 56));
  *(_DWORD *)(v33 + 56) = v40;
  v41 = v40;
  v42 = v40;
  v43 = __rev(*(_DWORD *)(v33 + 60));
  *(_DWORD *)(v33 + 60) = v43;
  v44 = v43;
  v45 = *(_DWORD *)v33 ^ *(_DWORD *)(v33 + 8) ^ *(_DWORD *)(v33 + 32) ^ v39;
  v46 = __ROR4__(v45, 31);
  *(_DWORD *)v33 = v46;
  v47 = *(_DWORD *)(v33 + 4) ^ *(_DWORD *)(v33 + 12) ^ *(_DWORD *)(v33 + 36) ^ v42;
  v48 = __ROR4__(v47, 31);
  *(_DWORD *)(v33 + 4) = v48;
  v49 = *((_DWORD *)v4 + 48);
  v50 = *(_DWORD *)(v49 + 16);
  v51 = *(_DWORD *)(v49 + 40) ^ *(_DWORD *)(v49 + 60) ^ v50 ^ *(_DWORD *)(v49 + 8);
  v52 = __ROR4__(v51, 31);
  *(_DWORD *)(v49 + 8) = v52;
  v53 = *(_DWORD *)(v49 + 20);
  v54 = *(_DWORD *)v49 ^ *(_DWORD *)(v49 + 44) ^ v53 ^ *(_DWORD *)(v49 + 12);
  v55 = __ROR4__(v54, 31);
  *(_DWORD *)(v49 + 12) = v55;
  v56 = *(_DWORD *)(v49 + 4) ^ *(_DWORD *)(v49 + 48) ^ *(_DWORD *)(v49 + 24) ^ v50;
  v57 = __ROR4__(v56, 31);
  *(_DWORD *)(v49 + 16) = v57;
  v58 = __ROR4__(v51, 31);
  v59 = *(_DWORD *)(v49 + 28) ^ *(_DWORD *)(v49 + 52) ^ v58 ^ v53;
  v60 = __ROR4__(v59, 31);
  *(_DWORD *)(v49 + 20) = v60;
  v61 = *((_DWORD *)v4 + 48);
  v62 = *(_DWORD *)(v61 + 32);
  v63 = *(_DWORD *)(v61 + 24) ^ *(_DWORD *)(v61 + 12) ^ *(_DWORD *)(v61 + 56) ^ v62;
  v64 = __ROR4__(v63, 31);
  *(_DWORD *)(v61 + 24) = v64;
  v65 = *(_DWORD *)(v61 + 36);
  v66 = *(_DWORD *)(v61 + 16) ^ *(_DWORD *)(v61 + 60) ^ v65 ^ *(_DWORD *)(v61 + 28);
  v67 = __ROR4__(v66, 31);
  *(_DWORD *)(v61 + 28) = v67;
  v68 = *(_DWORD *)v61 ^ *(_DWORD *)(v61 + 20) ^ *(_DWORD *)(v61 + 40) ^ v62;
  v69 = __ROR4__(v68, 31);
  *(_DWORD *)(v61 + 32) = v69;
  v70 = __ROR4__(v63, 31);
  v71 = *(_DWORD *)(v61 + 4) ^ v70 ^ *(_DWORD *)(v61 + 44) ^ v65;
  v72 = __ROR4__(v71, 31);
  *(_DWORD *)(v61 + 36) = v72;
  v73 = *((_DWORD *)v4 + 48);
  v74 = *(_DWORD *)(v73 + 48);
  v75 = *(_DWORD *)(v73 + 8) ^ *(_DWORD *)(v73 + 28) ^ v74 ^ *(_DWORD *)(v73 + 40);
  v76 = __ROR4__(v75, 31);
  *(_DWORD *)(v73 + 40) = v76;
  v77 = *(_DWORD *)(v73 + 52);
  v78 = *(_DWORD *)(v73 + 12) ^ *(_DWORD *)(v73 + 32) ^ v77 ^ *(_DWORD *)(v73 + 44);
  v79 = __ROR4__(v78, 31);
  *(_DWORD *)(v73 + 44) = v79;
  v80 = *(_DWORD *)(v73 + 16) ^ *(_DWORD *)(v73 + 36) ^ *(_DWORD *)(v73 + 56) ^ v74;
  v81 = __ROR4__(v80, 31);
  *(_DWORD *)(v73 + 48) = v81;
  v82 = __ROR4__(v75, 31);
  v83 = *(_DWORD *)(v73 + 20) ^ v82 ^ *(_DWORD *)(v73 + 60) ^ v77;
  v84 = __ROR4__(v83, 31);
  *(_DWORD *)(v73 + 52) = v84;
  v85 = *((_DWORD *)v4 + 48);
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(v85 + 24) ^ *(_DWORD *)(v85 + 44) ^ *(_DWORD *)v85 ^ *(_DWORD *)(v85 + 56);
  v88 = __ROR4__(v87, 31);
  v89 = *(_DWORD *)(v85 + 24) ^ *(_DWORD *)(v85 + 44) ^ *(_DWORD *)v85 ^ *(_DWORD *)(v85 + 56);
  *(_DWORD *)(v85 + 56) = v88;
  v90 = *(_DWORD *)(v85 + 4);
  v91 = *(_DWORD *)(v85 + 28) ^ *(_DWORD *)(v85 + 48) ^ v90 ^ *(_DWORD *)(v85 + 60);
  v92 = __ROR4__(v91, 31);
  *(_DWORD *)(v85 + 60) = v92;
  v93 = v86 ^ *(_DWORD *)(v85 + 8) ^ *(_DWORD *)(v85 + 32) ^ *(_DWORD *)(v85 + 52);
  v94 = __ROR4__(v93, 31);
  *(_DWORD *)v85 = v94;
  v95 = __ROR4__(v89, 31);
  v96 = *(_DWORD *)(v85 + 12) ^ *(_DWORD *)(v85 + 36) ^ v95 ^ v90;
  v97 = __ROR4__(v96, 31);
  *(_DWORD *)(v85 + 4) = v97;
  v98 = *((_DWORD *)v4 + 48);
  v99 = *(_DWORD *)(v98 + 16);
  v100 = *(_DWORD *)(v98 + 40) ^ *(_DWORD *)(v98 + 60) ^ v99 ^ *(_DWORD *)(v98 + 8);
  v101 = __ROR4__(v100, 31);
  *(_DWORD *)(v98 + 8) = v101;
  v102 = *(_DWORD *)(v98 + 20);
  v103 = *(_DWORD *)v98 ^ *(_DWORD *)(v98 + 44) ^ v102 ^ *(_DWORD *)(v98 + 12);
  v104 = __ROR4__(v103, 31);
  *(_DWORD *)(v98 + 12) = v104;
  v105 = *(_DWORD *)(v98 + 4) ^ *(_DWORD *)(v98 + 48) ^ *(_DWORD *)(v98 + 24) ^ v99;
  v106 = __ROR4__(v105, 31);
  *(_DWORD *)(v98 + 16) = v106;
  v107 = __ROR4__(v100, 31);
  v108 = *(_DWORD *)(v98 + 28) ^ *(_DWORD *)(v98 + 52) ^ v107 ^ v102;
  v109 = __ROR4__(v108, 31);
  *(_DWORD *)(v98 + 20) = v109;
  v110 = *((_DWORD *)v4 + 48);
  v111 = *(_DWORD *)(v110 + 32);
  v112 = *(_DWORD *)(v110 + 24) ^ *(_DWORD *)(v110 + 12) ^ *(_DWORD *)(v110 + 56) ^ v111;
  v113 = __ROR4__(v112, 31);
  *(_DWORD *)(v110 + 24) = v113;
  v114 = *(_DWORD *)(v110 + 36);
  v115 = *(_DWORD *)(v110 + 16) ^ *(_DWORD *)(v110 + 60) ^ v114 ^ *(_DWORD *)(v110 + 28);
  v116 = __ROR4__(v115, 31);
  *(_DWORD *)(v110 + 28) = v116;
  v117 = *(_DWORD *)v110 ^ *(_DWORD *)(v110 + 20) ^ *(_DWORD *)(v110 + 40) ^ v111;
  v118 = __ROR4__(v117, 31);
  *(_DWORD *)(v110 + 32) = v118;
  v119 = __ROR4__(v112, 31);
  v120 = *(_DWORD *)(v110 + 4) ^ v119 ^ *(_DWORD *)(v110 + 44) ^ v114;
  v121 = __ROR4__(v120, 31);
  *(_DWORD *)(v110 + 36) = v121;
  v122 = *((_DWORD *)v4 + 48);
  v123 = *(_DWORD *)(v122 + 48);
  v124 = *(_DWORD *)(v122 + 8) ^ *(_DWORD *)(v122 + 28) ^ v123 ^ *(_DWORD *)(v122 + 40);
  v125 = __ROR4__(v124, 31);
  *(_DWORD *)(v122 + 40) = v125;
  v126 = *(_DWORD *)(v122 + 52);
  v127 = *(_DWORD *)(v122 + 12) ^ *(_DWORD *)(v122 + 32) ^ v126 ^ *(_DWORD *)(v122 + 44);
  v128 = __ROR4__(v127, 31);
  *(_DWORD *)(v122 + 44) = v128;
  v129 = *(_DWORD *)(v122 + 16) ^ *(_DWORD *)(v122 + 36) ^ *(_DWORD *)(v122 + 56) ^ v123;
  v130 = __ROR4__(v129, 31);
  *(_DWORD *)(v122 + 48) = v130;
  v131 = __ROR4__(v124, 31);
  v132 = *(_DWORD *)(v122 + 20) ^ v131 ^ *(_DWORD *)(v122 + 60) ^ v126;
  v133 = __ROR4__(v132, 31);
  *(_DWORD *)(v122 + 52) = v133;
  v134 = *((_DWORD *)v4 + 48);
  v135 = *(_DWORD *)v134;
  v136 = *(_DWORD *)(v134 + 24) ^ *(_DWORD *)(v134 + 44) ^ *(_DWORD *)v134 ^ *(_DWORD *)(v134 + 56);
  v137 = __ROR4__(v136, 31);
  v138 = *(_DWORD *)(v134 + 24) ^ *(_DWORD *)(v134 + 44) ^ *(_DWORD *)v134 ^ *(_DWORD *)(v134 + 56);
  *(_DWORD *)(v134 + 56) = v137;
  v139 = *(_DWORD *)(v134 + 4);
  v140 = *(_DWORD *)(v134 + 28) ^ *(_DWORD *)(v134 + 48) ^ v139 ^ *(_DWORD *)(v134 + 60);
  v141 = __ROR4__(v140, 31);
  *(_DWORD *)(v134 + 60) = v141;
  v142 = v135 ^ *(_DWORD *)(v134 + 8) ^ *(_DWORD *)(v134 + 32) ^ *(_DWORD *)(v134 + 52);
  v143 = __ROR4__(v142, 31);
  *(_DWORD *)v134 = v143;
  v144 = __ROR4__(v138, 31);
  v145 = *(_DWORD *)(v134 + 12) ^ *(_DWORD *)(v134 + 36) ^ v144 ^ v139;
  v146 = __ROR4__(v145, 31);
  *(_DWORD *)(v134 + 4) = v146;
  v147 = *((_DWORD *)v4 + 48);
  v148 = *(_DWORD *)(v147 + 16);
  v149 = *(_DWORD *)(v147 + 40) ^ *(_DWORD *)(v147 + 60) ^ v148 ^ *(_DWORD *)(v147 + 8);
  v150 = __ROR4__(v149, 31);
  *(_DWORD *)(v147 + 8) = v150;
  v151 = *(_DWORD *)(v147 + 20);
  v152 = *(_DWORD *)v147 ^ *(_DWORD *)(v147 + 44) ^ v151 ^ *(_DWORD *)(v147 + 12);
  v153 = __ROR4__(v152, 31);
  *(_DWORD *)(v147 + 12) = v153;
  v154 = *(_DWORD *)(v147 + 4) ^ *(_DWORD *)(v147 + 48) ^ *(_DWORD *)(v147 + 24) ^ v148;
  v155 = __ROR4__(v154, 31);
  *(_DWORD *)(v147 + 16) = v155;
  v156 = __ROR4__(v149, 31);
  v157 = *(_DWORD *)(v147 + 28) ^ *(_DWORD *)(v147 + 52) ^ v156 ^ v151;
  v158 = __ROR4__(v157, 31);
  *(_DWORD *)(v147 + 20) = v158;
  v159 = *((_DWORD *)v4 + 48);
  v160 = *(_DWORD *)(v159 + 32);
  v161 = *(_DWORD *)(v159 + 24) ^ *(_DWORD *)(v159 + 12) ^ *(_DWORD *)(v159 + 56) ^ v160;
  v162 = __ROR4__(v161, 31);
  *(_DWORD *)(v159 + 24) = v162;
  v163 = *(_DWORD *)(v159 + 36);
  v164 = *(_DWORD *)(v159 + 16) ^ *(_DWORD *)(v159 + 60) ^ v163 ^ *(_DWORD *)(v159 + 28);
  v165 = __ROR4__(v164, 31);
  *(_DWORD *)(v159 + 28) = v165;
  v166 = *(_DWORD *)v159 ^ *(_DWORD *)(v159 + 20) ^ *(_DWORD *)(v159 + 40) ^ v160;
  v167 = __ROR4__(v166, 31);
  *(_DWORD *)(v159 + 32) = v167;
  v168 = __ROR4__(v161, 31);
  v169 = *(_DWORD *)(v159 + 4) ^ v168 ^ *(_DWORD *)(v159 + 44) ^ v163;
  v170 = __ROR4__(v169, 31);
  *(_DWORD *)(v159 + 36) = v170;
  v171 = *((_DWORD *)v4 + 48);
  v172 = *(_DWORD *)(v171 + 48);
  v173 = *(_DWORD *)(v171 + 8) ^ *(_DWORD *)(v171 + 28) ^ v172 ^ *(_DWORD *)(v171 + 40);
  v174 = __ROR4__(v173, 31);
  *(_DWORD *)(v171 + 40) = v174;
  v175 = *(_DWORD *)(v171 + 52);
  v176 = *(_DWORD *)(v171 + 12) ^ *(_DWORD *)(v171 + 32) ^ v175 ^ *(_DWORD *)(v171 + 44);
  v177 = __ROR4__(v176, 31);
  *(_DWORD *)(v171 + 44) = v177;
  v178 = *(_DWORD *)(v171 + 16) ^ *(_DWORD *)(v171 + 36) ^ *(_DWORD *)(v171 + 56) ^ v172;
  v179 = __ROR4__(v178, 31);
  *(_DWORD *)(v171 + 48) = v179;
  v180 = __ROR4__(v173, 31);
  v181 = *(_DWORD *)(v171 + 20) ^ v180 ^ *(_DWORD *)(v171 + 60) ^ v175;
  v182 = __ROR4__(v181, 31);
  *(_DWORD *)(v171 + 52) = v182;
  v183 = *((_DWORD *)v4 + 48);
  v184 = *(_DWORD *)v183;
  v185 = *(_DWORD *)(v183 + 24) ^ *(_DWORD *)(v183 + 44) ^ *(_DWORD *)v183 ^ *(_DWORD *)(v183 + 56);
  v186 = __ROR4__(v185, 31);
  v187 = *(_DWORD *)(v183 + 24) ^ *(_DWORD *)(v183 + 44) ^ *(_DWORD *)v183 ^ *(_DWORD *)(v183 + 56);
  *(_DWORD *)(v183 + 56) = v186;
  v188 = *(_DWORD *)(v183 + 4);
  v189 = *(_DWORD *)(v183 + 28) ^ *(_DWORD *)(v183 + 48) ^ v188 ^ *(_DWORD *)(v183 + 60);
  v190 = __ROR4__(v189, 31);
  *(_DWORD *)(v183 + 60) = v190;
  v191 = v184 ^ *(_DWORD *)(v183 + 8) ^ *(_DWORD *)(v183 + 32) ^ *(_DWORD *)(v183 + 52);
  v192 = __ROR4__(v191, 31);
  *(_DWORD *)v183 = v192;
  v193 = __ROR4__(v187, 31);
  v194 = *(_DWORD *)(v183 + 12) ^ *(_DWORD *)(v183 + 36) ^ v193 ^ v188;
  v195 = __ROR4__(v194, 31);
  *(_DWORD *)(v183 + 4) = v195;
  v196 = *((_DWORD *)v4 + 48);
  v197 = *(_DWORD *)(v196 + 16);
  v198 = *(_DWORD *)(v196 + 40) ^ *(_DWORD *)(v196 + 60) ^ v197 ^ *(_DWORD *)(v196 + 8);
  v199 = __ROR4__(v198, 31);
  *(_DWORD *)(v196 + 8) = v199;
  v200 = *(_DWORD *)(v196 + 20);
  v201 = *(_DWORD *)v196 ^ *(_DWORD *)(v196 + 44) ^ v200 ^ *(_DWORD *)(v196 + 12);
  v202 = __ROR4__(v201, 31);
  *(_DWORD *)(v196 + 12) = v202;
  v203 = *(_DWORD *)(v196 + 4) ^ *(_DWORD *)(v196 + 48) ^ *(_DWORD *)(v196 + 24) ^ v197;
  v204 = __ROR4__(v203, 31);
  *(_DWORD *)(v196 + 16) = v204;
  v205 = __ROR4__(v198, 31);
  v206 = *(_DWORD *)(v196 + 28) ^ *(_DWORD *)(v196 + 52) ^ v205 ^ v200;
  v207 = __ROR4__(v206, 31);
  *(_DWORD *)(v196 + 20) = v207;
  v208 = *((_DWORD *)v4 + 48);
  v209 = *(_DWORD *)(v208 + 32);
  v210 = *(_DWORD *)(v208 + 24) ^ *(_DWORD *)(v208 + 12) ^ *(_DWORD *)(v208 + 56) ^ v209;
  v211 = __ROR4__(v210, 31);
  *(_DWORD *)(v208 + 24) = v211;
  v212 = *(_DWORD *)(v208 + 36);
  v213 = *(_DWORD *)(v208 + 16) ^ *(_DWORD *)(v208 + 60) ^ v212 ^ *(_DWORD *)(v208 + 28);
  v214 = __ROR4__(v213, 31);
  *(_DWORD *)(v208 + 28) = v214;
  v215 = *(_DWORD *)v208 ^ *(_DWORD *)(v208 + 20) ^ *(_DWORD *)(v208 + 40) ^ v209;
  v216 = __ROR4__(v215, 31);
  *(_DWORD *)(v208 + 32) = v216;
  v217 = __ROR4__(v210, 31);
  v218 = *(_DWORD *)(v208 + 4) ^ v217 ^ *(_DWORD *)(v208 + 44) ^ v212;
  v219 = __ROR4__(v218, 31);
  *(_DWORD *)(v208 + 36) = v219;
  v220 = *((_DWORD *)v4 + 48);
  v221 = *(_DWORD *)(v220 + 48);
  v222 = *(_DWORD *)(v220 + 8) ^ *(_DWORD *)(v220 + 28) ^ v221 ^ *(_DWORD *)(v220 + 40);
  v223 = __ROR4__(v222, 31);
  *(_DWORD *)(v220 + 40) = v223;
  v224 = *(_DWORD *)(v220 + 52);
  v225 = *(_DWORD *)(v220 + 12) ^ *(_DWORD *)(v220 + 32) ^ v224 ^ *(_DWORD *)(v220 + 44);
  v226 = __ROR4__(v225, 31);
  *(_DWORD *)(v220 + 44) = v226;
  v227 = *(_DWORD *)(v220 + 16) ^ *(_DWORD *)(v220 + 36) ^ *(_DWORD *)(v220 + 56) ^ v221;
  v228 = __ROR4__(v227, 31);
  *(_DWORD *)(v220 + 48) = v228;
  v229 = __ROR4__(v222, 31);
  v230 = *(_DWORD *)(v220 + 20) ^ v229 ^ *(_DWORD *)(v220 + 60) ^ v224;
  v231 = __ROR4__(v230, 31);
  *(_DWORD *)(v220 + 52) = v231;
  v232 = *((_DWORD *)v4 + 48);
  v233 = *(_DWORD *)v232 ^ *(_DWORD *)(v232 + 24) ^ *(_DWORD *)(v232 + 44) ^ *(_DWORD *)(v232 + 56);
  v234 = __ROR4__(v233, 31);
  *(_DWORD *)(v232 + 56) = v234;
  v235 = *(_DWORD *)(v232 + 4) ^ *(_DWORD *)(v232 + 28) ^ *(_DWORD *)(v232 + 48) ^ *(_DWORD *)(v232 + 60);
  v237 = __ROR4__(v235, 31);
  v236 = v237;
  v238 = __ROR4__(v6, 2);
  *(_DWORD *)(v232 + 60) = v236;
  v239 = (v7 ^ v238) & v5;
  v240 = __ROR4__(v5, 27);
  v241 = v8 + v240 + ((HIDWORD(v7) ^ v7) & v6 ^ HIDWORD(v7)) + v10 + 1518500249;
  v242 = __ROR4__(v241, 27);
  HIDWORD(v7) += (v239 ^ v7) + v12 + v242 + 1518500249;
  v244 = __ROR4__(v6, 2);
  v243 = v244;
  v245 = __ROR4__(v5, 2);
  v246 = (v243 ^ v245) & v241;
  v247 = __ROR4__(v6, 2);
  v248 = (v246 ^ v247) + v14 + v7;
  v249 = __ROR4__(HIDWORD(v7), 27);
  LODWORD(v7) = v248 + v249 + 1518500249;
  v251 = __ROR4__(v241, 2);
  v250 = v251;
  v253 = __ROR4__(v5, 2);
  v252 = v250 ^ v253;
  v255 = __ROR4__(v6, 2);
  v254 = v16 + v255;
  v256 = __ROR4__(v5, 2);
  v257 = (v252 & HIDWORD(v7) ^ v256) + v254;
  v259 = __ROR4__(v5, 2);
  v258 = v18 + v259;
  v260 = __ROR4__(v7, 27);
  v261 = v257 + v260 + 1518500249;
  v263 = __ROR4__(HIDWORD(v7), 2);
  v262 = v263;
  v264 = __ROR4__(v241, 2);
  v265 = (v262 ^ v264) & v7;
  v267 = __ROR4__(v241, 2);
  v266 = v265 ^ v267;
  v269 = __ROR4__(v241, 2);
  v268 = v21 + v269;
  v270 = __ROR4__(v261, 27);
  v271 = v266 + v258 + v270 + 1518500249;
  v273 = __ROR4__(v7, 2);
  v272 = v273;
  v275 = __ROR4__(HIDWORD(v7), 2);
  v274 = v272 ^ v275;
  v277 = __ROR4__(HIDWORD(v7), 2);
  v276 = v23 + v277;
  v278 = __ROR4__(HIDWORD(v7), 2);
  v279 = v268 + (v274 & v261 ^ v278);
  v281 = __ROR4__(v261, 2);
  v280 = v281;
  v283 = __ROR4__(v7, 2);
  v282 = v280 ^ v283;
  v284 = __ROR4__(v271, 27);
  v285 = v279 + v284 + 1518500249;
  v286 = __ROR4__(v7, 2);
  v287 = (v282 & v271 ^ v286) + v276;
  v289 = __ROR4__(v7, 2);
  v288 = v25 + v289;
  v290 = __ROR4__(v285, 27);
  HIDWORD(v7) = v287 + v290 + 1518500249;
  v292 = __ROR4__(v271, 2);
  v291 = v292;
  v293 = __ROR4__(v261, 2);
  v294 = (v291 ^ v293) & v285;
  v295 = __ROR4__(v261, 2);
  v296 = (v294 ^ v295) + v288;
  v298 = __ROR4__(v261, 2);
  v297 = v27 + v298;
  v299 = __ROR4__(HIDWORD(v7), 27);
  LODWORD(v7) = v296 + v299 + 1518500249;
  v301 = __ROR4__(v285, 2);
  v300 = v301;
  v302 = __ROR4__(v271, 2);
  v303 = (v300 ^ v302) & HIDWORD(v7);
  v304 = __ROR4__(v271, 2);
  v305 = (v303 ^ v304) + v297;
  v307 = __ROR4__(v271, 2);
  v306 = v29 + v307;
  v308 = __ROR4__(v7, 27);
  v309 = v305 + v308 + 1518500249;
  v311 = __ROR4__(HIDWORD(v7), 2);
  v310 = v311;
  v312 = __ROR4__(v285, 2);
  v313 = (v310 ^ v312) & v7;
  v315 = __ROR4__(v285, 2);
  v314 = v313 ^ v315;
  v317 = __ROR4__(v285, 2);
  v316 = v31 + v317;
  v318 = __ROR4__(v309, 27);
  v319 = v314 + v306 + v318 + 1518500249;
  v321 = __ROR4__(v7, 2);
  v320 = v321;
  v323 = __ROR4__(HIDWORD(v7), 2);
  v322 = v320 ^ v323;
  v325 = __ROR4__(HIDWORD(v7), 2);
  v324 = v34 + v325;
  v326 = __ROR4__(HIDWORD(v7), 2);
  v327 = v316 + (v322 & v309 ^ v326);
  v329 = __ROR4__(v309, 2);
  v328 = v329;
  v331 = __ROR4__(v7, 2);
  v330 = v328 ^ v331;
  v332 = __ROR4__(v319, 27);
  v333 = v327 + v332 + 1518500249;
  v335 = __ROR4__(v7, 2);
  v334 = v330 & v319 ^ v335;
  v337 = __ROR4__(v7, 2);
  v336 = v36 + v337;
  v338 = v334 + v324;
  v340 = __ROR4__(v319, 2);
  v339 = v340;
  v342 = __ROR4__(v309, 2);
  v341 = v339 ^ v342;
  v343 = __ROR4__(v333, 27);
  v344 = v338 + v343 + 1518500249;
  v345 = __ROR4__(v309, 2);
  v346 = (v341 & v333 ^ v345) + v336;
  v348 = __ROR4__(v333, 2);
  v347 = v348;
  v350 = __ROR4__(v319, 2);
  v349 = v347 ^ v350;
  v352 = __ROR4__(v344, 27);
  v351 = v346 + v352;
  v354 = __ROR4__(v309, 2);
  v353 = v38 + v354;
  v355 = __ROR4__(v319, 2);
  v356 = (v349 & v344 ^ v355) + v353;
  v351 += 1518500249;
  v358 = __ROR4__(v344, 2);
  v357 = v358;
  v359 = __ROR4__(v333, 2);
  v360 = (v357 ^ v359) & v351;
  v362 = __ROR4__(v351, 27);
  v361 = v356 + v362;
  v364 = __ROR4__(v333, 2);
  v363 = v360 ^ v364;
  v365 = __ROR4__(v319, 2);
  v366 = v363 + v41 + v365;
  v361 += 1518500249;
  v368 = __ROR4__(v351, 2);
  v367 = v368;
  v369 = __ROR4__(v344, 2);
  v370 = (v367 ^ v369) & v361;
  v372 = __ROR4__(v361, 27);
  v371 = v366 + v372;
  v374 = __ROR4__(v344, 2);
  v373 = v370 ^ v374;
  v371 += 1518500249;
  v376 = __ROR4__(v333, 2);
  v375 = v44 + v376;
  v378 = __ROR4__(v361, 2);
  v377 = v378;
  v379 = __ROR4__(v371, 27);
  v380 = v375 + v373 + v379 + 1518500249;
  v381 = __ROR4__(v351, 2);
  v382 = (v377 ^ v381) & v371;
  v384 = __ROR4__(v351, 2);
  v383 = v382 ^ v384;
  v385 = __ROR4__(v45, 31);
  v386 = v383 + v357 + v385;
  v388 = __ROR4__(v371, 2);
  v387 = v388;
  v389 = __ROR4__(v380, 27);
  HIDWORD(v7) = v386 + v389 + 1518500249;
  v390 = __ROR4__(v361, 2);
  v391 = (v387 ^ v390) & v380;
  v393 = __ROR4__(v361, 2);
  v392 = v391 ^ v393;
  v394 = __ROR4__(v47, 31);
  v395 = v392 + v367 + v394;
  v397 = __ROR4__(v380, 2);
  v396 = v397;
  v399 = __ROR4__(v371, 2);
  v398 = v396 ^ v399;
  v400 = __ROR4__(HIDWORD(v7), 27);
  v401 = v395 + v400 + 1518500249;
  v403 = __ROR4__(v371, 2);
  v402 = v398 & HIDWORD(v7) ^ v403;
  v404 = __ROR4__(v51, 31);
  v405 = v377 + v404 + v402;
  v406 = __ROR4__(v401, 27);
  v407 = v405 + v406 + 1518500249;
  v409 = __ROR4__(HIDWORD(v7), 2);
  v408 = v409;
  v410 = __ROR4__(v380, 2);
  v411 = (v408 ^ v410) & v401;
  v413 = __ROR4__(v380, 2);
  v412 = v411 ^ v413;
  v414 = __ROR4__(v54, 31);
  v415 = v412 + v387 + v414;
  v417 = __ROR4__(v401, 2);
  v416 = v417;
  v419 = __ROR4__(v407, 27);
  v418 = v415 + v419;
  v420 = __ROR4__(HIDWORD(v7), 2);
  v418 += 1518500249;
  v421 = v416 ^ v420 ^ v407;
  v422 = __ROR4__(v56, 31);
  v423 = v421 + v396 + v422;
  v424 = __ROR4__(v418, 27);
  v425 = v423 + v424 + 1859775393;
  v427 = __ROR4__(v407, 2);
  v426 = v427;
  v428 = __ROR4__(v401, 2);
  v429 = v426 ^ v428 ^ v418;
  v431 = __ROR4__(HIDWORD(v7), 2);
  v430 = v429 + v431;
  v433 = __ROR4__(v59, 31);
  v432 = v430 + v433;
  v434 = __ROR4__(v425, 27);
  HIDWORD(v7) = v432 + v434 + 1859775393;
  v436 = __ROR4__(v418, 2);
  v435 = v436;
  v437 = __ROR4__(v407, 2);
  v438 = v435 ^ v437 ^ v425;
  v440 = __ROR4__(v401, 2);
  v439 = v438 + v440;
  v442 = __ROR4__(v63, 31);
  v441 = v439 + v442;
  v444 = __ROR4__(v425, 2);
  v443 = v444;
  v446 = __ROR4__(v418, 2);
  v445 = v443 ^ v446;
  v447 = __ROR4__(HIDWORD(v7), 27);
  v448 = v441 + v447 + 1859775393;
  v450 = __ROR4__(v407, 2);
  v449 = (v445 ^ HIDWORD(v7)) + v450;
  v452 = __ROR4__(v66, 31);
  v451 = v449 + v452;
  v453 = __ROR4__(v448, 27);
  v454 = v451 + v453 + 1859775393;
  v456 = __ROR4__(HIDWORD(v7), 2);
  v455 = v456;
  v457 = __ROR4__(v425, 2);
  v458 = v455 ^ v457 ^ v448;
  v460 = __ROR4__(v418, 2);
  v459 = v458 + v460;
  v462 = __ROR4__(v68, 31);
  v461 = v459 + v462;
  v464 = __ROR4__(v448, 2);
  v463 = v464;
  v466 = __ROR4__(HIDWORD(v7), 2);
  v465 = v463 ^ v466;
  v467 = __ROR4__(v454, 27);
  v468 = v461 + v467 + 1859775393;
  v470 = __ROR4__(v425, 2);
  v469 = (v465 ^ v454) + v470;
  v472 = __ROR4__(v71, 31);
  v471 = v469 + v472;
  v473 = __ROR4__(v468, 27);
  v474 = v471 + v473 + 1859775393;
  v476 = __ROR4__(v454, 2);
  v475 = v476;
  v477 = __ROR4__(v448, 2);
  v478 = v475 ^ v477 ^ v468;
  v480 = __ROR4__(HIDWORD(v7), 2);
  v479 = v478 + v480;
  v482 = __ROR4__(v75, 31);
  v481 = v479 + v482;
  v483 = __ROR4__(v474, 27);
  HIDWORD(v7) = v481 + v483 + 1859775393;
  v485 = __ROR4__(v468, 2);
  v484 = v485;
  v486 = __ROR4__(v454, 2);
  v487 = v484 ^ v486 ^ v474;
  v489 = __ROR4__(v448, 2);
  v488 = v487 + v489;
  v491 = __ROR4__(v78, 31);
  v490 = v488 + v491;
  v493 = __ROR4__(v474, 2);
  v492 = v493;
  v495 = __ROR4__(v468, 2);
  v494 = v492 ^ v495;
  v496 = __ROR4__(HIDWORD(v7), 27);
  v497 = v490 + v496 + 1859775393;
  v499 = __ROR4__(v454, 2);
  v498 = (v494 ^ HIDWORD(v7)) + v499;
  v501 = __ROR4__(v80, 31);
  v500 = v498 + v501;
  v502 = __ROR4__(v497, 27);
  v503 = v500 + v502 + 1859775393;
  v505 = __ROR4__(HIDWORD(v7), 2);
  v504 = v505;
  v506 = __ROR4__(v474, 2);
  v507 = v504 ^ v506 ^ v497;
  v509 = __ROR4__(v468, 2);
  v508 = v507 + v509;
  v511 = __ROR4__(v83, 31);
  v510 = v508 + v511;
  v513 = __ROR4__(v497, 2);
  v512 = v513;
  v515 = __ROR4__(HIDWORD(v7), 2);
  v514 = v512 ^ v515;
  v516 = __ROR4__(v503, 27);
  v517 = v510 + v516 + 1859775393;
  v519 = __ROR4__(v474, 2);
  v518 = (v514 ^ v503) + v519;
  v521 = __ROR4__(v87, 31);
  v520 = v518 + v521;
  v522 = __ROR4__(v517, 27);
  v523 = v520 + v522 + 1859775393;
  v525 = __ROR4__(v503, 2);
  v524 = v525;
  v526 = __ROR4__(v497, 2);
  v527 = v524 ^ v526 ^ v517;
  v529 = __ROR4__(HIDWORD(v7), 2);
  v528 = v527 + v529;
  v531 = __ROR4__(v91, 31);
  v530 = v528 + v531;
  v532 = __ROR4__(v523, 27);
  HIDWORD(v7) = v530 + v532 + 1859775393;
  v534 = __ROR4__(v517, 2);
  v533 = v534;
  v535 = __ROR4__(v503, 2);
  v536 = v533 ^ v535 ^ v523;
  v538 = __ROR4__(v497, 2);
  v537 = v536 + v538;
  v540 = __ROR4__(v93, 31);
  v539 = v537 + v540;
  v542 = __ROR4__(v523, 2);
  v541 = v542;
  v544 = __ROR4__(v517, 2);
  v543 = v541 ^ v544;
  v545 = __ROR4__(HIDWORD(v7), 27);
  v546 = v539 + v545 + 1859775393;
  v548 = __ROR4__(v503, 2);
  v547 = (v543 ^ HIDWORD(v7)) + v548;
  v550 = __ROR4__(v96, 31);
  v549 = v547 + v550;
  v552 = __ROR4__(HIDWORD(v7), 2);
  v551 = v552;
  v554 = __ROR4__(v523, 2);
  v553 = v551 ^ v554;
  v555 = __ROR4__(v546, 27);
  v556 = v549 + v555 + 1859775393;
  v558 = __ROR4__(v517, 2);
  v557 = (v553 ^ v546) + v558;
  v560 = __ROR4__(v100, 31);
  v559 = v557 + v560;
  v561 = __ROR4__(v556, 27);
  v562 = v559 + v561 + 1859775393;
  v564 = __ROR4__(v546, 2);
  v563 = v564;
  v565 = __ROR4__(HIDWORD(v7), 2);
  v566 = v563 ^ v565 ^ v556;
  v568 = __ROR4__(v523, 2);
  v567 = v566 + v568;
  v570 = __ROR4__(v103, 31);
  v569 = v567 + v570;
  v571 = __ROR4__(v562, 27);
  v572 = v569 + v571 + 1859775393;
  v574 = __ROR4__(v556, 2);
  v573 = v574;
  v575 = __ROR4__(v546, 2);
  v576 = v573 ^ v575 ^ v562;
  v578 = __ROR4__(HIDWORD(v7), 2);
  v577 = v576 + v578;
  v580 = __ROR4__(v105, 31);
  v579 = v577 + v580;
  v581 = __ROR4__(v572, 27);
  v582 = v579 + v581 + 1859775393;
  v584 = __ROR4__(v562, 2);
  v583 = v584;
  v585 = __ROR4__(v556, 2);
  v586 = v583 ^ v585 ^ v572;
  v588 = __ROR4__(v546, 2);
  v587 = v586 + v588;
  v590 = __ROR4__(v108, 31);
  v589 = v587 + v590;
  v592 = __ROR4__(v572, 2);
  v591 = v592;
  v594 = __ROR4__(v562, 2);
  v593 = v591 ^ v594;
  v595 = __ROR4__(v582, 27);
  v596 = v589 + v595 + 1859775393;
  v598 = __ROR4__(v556, 2);
  v597 = (v593 ^ v582) + v598;
  v600 = __ROR4__(v112, 31);
  v599 = v597 + v600;
  v602 = __ROR4__(v582, 2);
  v601 = v602;
  v604 = __ROR4__(v572, 2);
  v603 = v601 ^ v604;
  v605 = __ROR4__(v596, 27);
  v606 = v599 + v605 + 1859775393;
  v608 = __ROR4__(v562, 2);
  v607 = (v603 ^ v596) + v608;
  v610 = __ROR4__(v115, 31);
  v609 = v607 + v610;
  v612 = __ROR4__(v596, 2);
  v611 = v606 & v612;
  v613 = __ROR4__(v606, 27);
  HIDWORD(v7) = v609 + v613 + 1859775393;
  v615 = __ROR4__(v596, 2);
  v614 = v606 | v615;
  v616 = __ROR4__(v582, 2);
  v617 = v614 & v616 | v611;
  v619 = __ROR4__(v572, 2);
  v618 = v617 + v619;
  v621 = __ROR4__(v117, 31);
  v620 = v618 + v621;
  v623 = __ROR4__(v606, 2);
  v622 = HIDWORD(v7) & v623;
  v624 = __ROR4__(HIDWORD(v7), 27);
  v625 = v620 + v624 - 1894007588;
  v627 = __ROR4__(v606, 2);
  v626 = HIDWORD(v7) | v627;
  v628 = __ROR4__(v596, 2);
  v629 = v626 & v628 | v622;
  v631 = __ROR4__(v582, 2);
  v630 = v629 + v631;
  v633 = __ROR4__(v120, 31);
  v632 = v630 + v633;
  v635 = __ROR4__(HIDWORD(v7), 2);
  v634 = v625 & v635;
  v636 = __ROR4__(v625, 27);
  v637 = v632 + v636 - 1894007588;
  v639 = __ROR4__(HIDWORD(v7), 2);
  v638 = v625 | v639;
  v640 = __ROR4__(v606, 2);
  v641 = v638 & v640 | v634;
  v643 = __ROR4__(v625, 2);
  v642 = v637 & v643;
  v645 = __ROR4__(v596, 2);
  v644 = v641 + v645;
  v647 = __ROR4__(v124, 31);
  v646 = v644 + v647;
  v649 = __ROR4__(v625, 2);
  v648 = v637 | v649;
  v651 = __ROR4__(HIDWORD(v7), 2);
  v650 = v648 & v651;
  v652 = __ROR4__(v637, 27);
  v653 = v646 + v652 - 1894007588;
  v655 = __ROR4__(v606, 2);
  v654 = (v650 | v642) + v655;
  v657 = __ROR4__(v637, 2);
  v656 = v653 & v657;
  v659 = __ROR4__(v127, 31);
  v658 = v654 + v659;
  v661 = __ROR4__(v637, 2);
  v660 = v653 | v661;
  v663 = __ROR4__(v625, 2);
  v662 = v660 & v663;
  v665 = __ROR4__(v653, 27);
  v664 = v658 + v665;
  v667 = __ROR4__(HIDWORD(v7), 2);
  v666 = (v662 | v656) + v667;
  v664 -= 1894007588;
  v669 = __ROR4__(v129, 31);
  v668 = v666 + v669;
  v671 = __ROR4__(v653, 2);
  v670 = v664 & v671;
  v672 = __ROR4__(v664, 27);
  HIDWORD(v7) = v668 + v672 - 1894007588;
  v674 = __ROR4__(v653, 2);
  v673 = v664 | v674;
  v675 = __ROR4__(v637, 2);
  v676 = v673 & v675 | v670;
  v678 = __ROR4__(v625, 2);
  v677 = v676 + v678;
  v680 = __ROR4__(v132, 31);
  v679 = v677 + v680;
  v682 = __ROR4__(v664, 2);
  v681 = HIDWORD(v7) & v682;
  v683 = __ROR4__(HIDWORD(v7), 27);
  v684 = v679 + v683 - 1894007588;
  v686 = __ROR4__(v664, 2);
  v685 = HIDWORD(v7) | v686;
  v687 = __ROR4__(v653, 2);
  v688 = v685 & v687 | v681;
  v690 = __ROR4__(v637, 2);
  v689 = v688 + v690;
  v692 = __ROR4__(v136, 31);
  v691 = v689 + v692;
  v694 = __ROR4__(HIDWORD(v7), 2);
  v693 = v684 & v694;
  v695 = __ROR4__(v684, 27);
  v696 = v691 + v695 - 1894007588;
  v698 = __ROR4__(HIDWORD(v7), 2);
  v697 = v684 | v698;
  v699 = __ROR4__(v664, 2);
  v700 = v697 & v699 | v693;
  v702 = __ROR4__(v684, 2);
  v701 = v696 & v702;
  v704 = __ROR4__(v653, 2);
  v703 = v700 + v704;
  v706 = __ROR4__(v140, 31);
  v705 = v703 + v706;
  v708 = __ROR4__(v684, 2);
  v707 = v696 | v708;
  v710 = __ROR4__(HIDWORD(v7), 2);
  v709 = v707 & v710;
  v711 = __ROR4__(v696, 27);
  v712 = v705 + v711 - 1894007588;
  v714 = __ROR4__(v664, 2);
  v713 = (v709 | v701) + v714;
  v716 = __ROR4__(v696, 2);
  v715 = v712 & v716;
  v718 = __ROR4__(v142, 31);
  v717 = v713 + v718;
  v720 = __ROR4__(v696, 2);
  v719 = v712 | v720;
  v722 = __ROR4__(v684, 2);
  v721 = v719 & v722;
  v724 = __ROR4__(v712, 27);
  v723 = v717 + v724;
  v726 = __ROR4__(HIDWORD(v7), 2);
  v725 = (v721 | v715) + v726;
  v723 -= 1894007588;
  v728 = __ROR4__(v145, 31);
  v727 = v725 + v728;
  v730 = __ROR4__(v712, 2);
  v729 = v723 & v730;
  v731 = __ROR4__(v723, 27);
  HIDWORD(v7) = v727 + v731 - 1894007588;
  v733 = __ROR4__(v712, 2);
  v732 = v723 | v733;
  v734 = __ROR4__(v696, 2);
  v735 = v732 & v734 | v729;
  v737 = __ROR4__(v684, 2);
  v736 = v735 + v737;
  v739 = __ROR4__(v149, 31);
  v738 = v736 + v739;
  v741 = __ROR4__(v723, 2);
  v740 = HIDWORD(v7) & v741;
  v742 = __ROR4__(HIDWORD(v7), 27);
  v743 = v738 + v742 - 1894007588;
  v745 = __ROR4__(v723, 2);
  v744 = HIDWORD(v7) | v745;
  v746 = __ROR4__(v712, 2);
  v747 = v744 & v746 | v740;
  v749 = __ROR4__(v696, 2);
  v748 = v747 + v749;
  v751 = __ROR4__(v152, 31);
  v750 = v748 + v751;
  v753 = __ROR4__(HIDWORD(v7), 2);
  v752 = v743 & v753;
  v754 = __ROR4__(v743, 27);
  v755 = v750 + v754 - 1894007588;
  v757 = __ROR4__(HIDWORD(v7), 2);
  v756 = v743 | v757;
  v758 = __ROR4__(v723, 2);
  v759 = v756 & v758 | v752;
  v761 = __ROR4__(v743, 2);
  v760 = v755 & v761;
  v763 = __ROR4__(v712, 2);
  v762 = v759 + v763;
  v765 = __ROR4__(v154, 31);
  v764 = v762 + v765;
  v767 = __ROR4__(v743, 2);
  v766 = v755 | v767;
  v769 = __ROR4__(HIDWORD(v7), 2);
  v768 = v766 & v769;
  v770 = __ROR4__(v755, 27);
  v771 = v764 + v770 - 1894007588;
  v773 = __ROR4__(v723, 2);
  v772 = (v768 | v760) + v773;
  v775 = __ROR4__(v755, 2);
  v774 = v771 & v775;
  v777 = __ROR4__(v157, 31);
  v776 = v772 + v777;
  v779 = __ROR4__(v755, 2);
  v778 = v771 | v779;
  v781 = __ROR4__(v743, 2);
  v780 = v778 & v781;
  v783 = __ROR4__(v771, 27);
  v782 = v776 + v783;
  v785 = __ROR4__(HIDWORD(v7), 2);
  v784 = (v780 | v774) + v785;
  v782 -= 1894007588;
  v787 = __ROR4__(v161, 31);
  v786 = v784 + v787;
  v789 = __ROR4__(v771, 2);
  v788 = v782 & v789;
  v790 = __ROR4__(v782, 27);
  HIDWORD(v7) = v786 + v790 - 1894007588;
  v792 = __ROR4__(v771, 2);
  v791 = v782 | v792;
  v793 = __ROR4__(v755, 2);
  v794 = v791 & v793 | v788;
  v796 = __ROR4__(v743, 2);
  v795 = v794 + v796;
  v798 = __ROR4__(v164, 31);
  v797 = v795 + v798;
  v800 = __ROR4__(v782, 2);
  v799 = HIDWORD(v7) & v800;
  v801 = __ROR4__(HIDWORD(v7), 27);
  v802 = v797 + v801 - 1894007588;
  v804 = __ROR4__(v782, 2);
  v803 = HIDWORD(v7) | v804;
  v805 = __ROR4__(v771, 2);
  v806 = v803 & v805 | v799;
  v808 = __ROR4__(v755, 2);
  v807 = v806 + v808;
  v810 = __ROR4__(v166, 31);
  v809 = v807 + v810;
  v812 = __ROR4__(HIDWORD(v7), 2);
  v811 = v802 & v812;
  v813 = __ROR4__(v802, 27);
  v814 = v809 + v813 - 1894007588;
  v816 = __ROR4__(HIDWORD(v7), 2);
  v815 = v802 | v816;
  v817 = __ROR4__(v782, 2);
  v818 = v815 & v817 | v811;
  v820 = __ROR4__(v802, 2);
  v819 = v814 & v820;
  v822 = __ROR4__(v771, 2);
  v821 = v818 + v822;
  v824 = __ROR4__(v169, 31);
  v823 = v821 + v824;
  v826 = __ROR4__(v802, 2);
  v825 = v814 | v826;
  v828 = __ROR4__(HIDWORD(v7), 2);
  v827 = v825 & v828;
  v829 = __ROR4__(v814, 27);
  v830 = v823 + v829 - 1894007588;
  v832 = __ROR4__(v782, 2);
  v831 = (v827 | v819) + v832;
  v834 = __ROR4__(v173, 31);
  v833 = v831 + v834;
  v836 = __ROR4__(v814, 2);
  v835 = v830 & v836;
  v837 = __ROR4__(v830, 27);
  v838 = v833 + v837 - 1894007588;
  v840 = __ROR4__(v814, 2);
  v839 = v830 | v840;
  v841 = __ROR4__(v802, 2);
  v842 = v839 & v841 | v835;
  v844 = __ROR4__(HIDWORD(v7), 2);
  v843 = v842 + v844;
  v846 = __ROR4__(v176, 31);
  v845 = v843 + v846;
  v848 = __ROR4__(v830, 2);
  v847 = v848;
  v850 = __ROR4__(v814, 2);
  v849 = v847 ^ v850;
  v851 = __ROR4__(v838, 27);
  v852 = v845 + v851 - 1894007588;
  v854 = __ROR4__(v802, 2);
  v853 = (v849 ^ v838) + v854;
  v856 = __ROR4__(v178, 31);
  v855 = v853 + v856;
  v858 = __ROR4__(v838, 2);
  v857 = v858;
  v859 = __ROR4__(v830, 2);
  v860 = v857 ^ v859 ^ v852;
  v862 = __ROR4__(v852, 27);
  v861 = v855 + v862;
  v864 = __ROR4__(v814, 2);
  v863 = v860 + v864;
  v866 = __ROR4__(v181, 31);
  v865 = v863 + v866;
  v868 = __ROR4__(v852, 2);
  v867 = v868;
  v861 -= 899497514;
  v869 = __ROR4__(v838, 2);
  v870 = v867 ^ v869 ^ v861;
  v872 = __ROR4__(v830, 2);
  v871 = v870 + v872;
  v873 = __ROR4__(v861, 27);
  v874 = v865 + v873 - 899497514;
  v876 = __ROR4__(v185, 31);
  v875 = v871 + v876;
  v878 = __ROR4__(v861, 2);
  v877 = v878;
  v880 = __ROR4__(v852, 2);
  v879 = v877 ^ v880;
  v881 = __ROR4__(v874, 27);
  v882 = v875 + v881 - 899497514;
  v884 = __ROR4__(v838, 2);
  v883 = (v879 ^ v874) + v884;
  v886 = __ROR4__(v189, 31);
  v885 = v883 + v886;
  v887 = __ROR4__(v882, 27);
  v888 = v885 + v887 - 899497514;
  v890 = __ROR4__(v874, 2);
  v889 = v890;
  v891 = __ROR4__(v861, 2);
  v892 = v889 ^ v891 ^ v882;
  v894 = __ROR4__(v852, 2);
  v893 = v892 + v894;
  v896 = __ROR4__(v191, 31);
  v895 = v893 + v896;
  v898 = __ROR4__(v882, 2);
  v897 = v898;
  v900 = __ROR4__(v874, 2);
  v899 = v897 ^ v900;
  v901 = __ROR4__(v888, 27);
  v902 = v895 + v901 - 899497514;
  v904 = __ROR4__(v861, 2);
  v903 = (v899 ^ v888) + v904;
  v906 = __ROR4__(v194, 31);
  v905 = v903 + v906;
  v908 = __ROR4__(v888, 2);
  v907 = v908;
  v910 = __ROR4__(v882, 2);
  v909 = v907 ^ v910;
  v911 = __ROR4__(v902, 27);
  v912 = v905 + v911 - 899497514;
  v914 = __ROR4__(v874, 2);
  v913 = (v909 ^ v902) + v914;
  v916 = __ROR4__(v198, 31);
  v915 = v913 + v916;
  v918 = __ROR4__(v902, 2);
  v917 = v918;
  v920 = __ROR4__(v888, 2);
  v919 = v917 ^ v920;
  v921 = __ROR4__(v912, 27);
  v922 = v915 + v921 - 899497514;
  v924 = __ROR4__(v882, 2);
  v923 = (v919 ^ v912) + v924;
  v926 = __ROR4__(v201, 31);
  v925 = v923 + v926;
  v928 = __ROR4__(v912, 2);
  v927 = v928;
  v930 = __ROR4__(v902, 2);
  v929 = v927 ^ v930;
  v931 = __ROR4__(v922, 27);
  v932 = v925 + v931 - 899497514;
  v934 = __ROR4__(v888, 2);
  v933 = (v929 ^ v922) + v934;
  v936 = __ROR4__(v203, 31);
  v935 = v933 + v936;
  v937 = __ROR4__(v932, 27);
  v938 = v935 + v937 - 899497514;
  v940 = __ROR4__(v922, 2);
  v939 = v940;
  v941 = __ROR4__(v912, 2);
  v942 = v939 ^ v941 ^ v932;
  v944 = __ROR4__(v902, 2);
  v943 = v942 + v944;
  v946 = __ROR4__(v206, 31);
  v945 = v943 + v946;
  v948 = __ROR4__(v932, 2);
  v947 = v948;
  v950 = __ROR4__(v922, 2);
  v949 = v947 ^ v950;
  v951 = __ROR4__(v938, 27);
  v952 = v945 + v951 - 899497514;
  v954 = __ROR4__(v912, 2);
  v953 = (v949 ^ v938) + v954;
  v956 = __ROR4__(v210, 31);
  v955 = v953 + v956;
  v958 = __ROR4__(v938, 2);
  v957 = v958;
  v960 = __ROR4__(v932, 2);
  v959 = v957 ^ v960;
  v961 = __ROR4__(v952, 27);
  v962 = v955 + v961 - 899497514;
  v964 = __ROR4__(v922, 2);
  v963 = (v959 ^ v952) + v964;
  v966 = __ROR4__(v213, 31);
  v965 = v963 + v966;
  v968 = __ROR4__(v952, 2);
  v967 = v968;
  v970 = __ROR4__(v938, 2);
  v969 = v967 ^ v970;
  v971 = __ROR4__(v962, 27);
  v972 = v965 + v971 - 899497514;
  v974 = __ROR4__(v932, 2);
  v973 = (v969 ^ v962) + v974;
  v976 = __ROR4__(v215, 31);
  v975 = v973 + v976;
  v978 = __ROR4__(v962, 2);
  v977 = v978;
  v980 = __ROR4__(v952, 2);
  v979 = v977 ^ v980;
  v981 = __ROR4__(v972, 27);
  v982 = v975 + v981 - 899497514;
  v984 = __ROR4__(v938, 2);
  v983 = (v979 ^ v972) + v984;
  v986 = __ROR4__(v218, 31);
  v985 = v983 + v986;
  v987 = __ROR4__(v982, 27);
  v988 = v985 + v987 - 899497514;
  v990 = __ROR4__(v972, 2);
  v989 = v990;
  v991 = __ROR4__(v962, 2);
  v992 = v989 ^ v991 ^ v982;
  v994 = __ROR4__(v952, 2);
  v993 = v992 + v994;
  v996 = __ROR4__(v222, 31);
  v995 = v993 + v996;
  v997 = __ROR4__(v988, 27);
  v998 = v995 + v997 - 899497514;
  v1000 = __ROR4__(v982, 2);
  v999 = v1000;
  v1001 = __ROR4__(v972, 2);
  v1002 = v999 ^ v1001 ^ v988;
  v1004 = __ROR4__(v962, 2);
  v1003 = v1002 + v1004;
  v1006 = __ROR4__(v225, 31);
  v1005 = v1003 + v1006;
  v1008 = __ROR4__(v988, 2);
  v1007 = v1008;
  v1010 = __ROR4__(v982, 2);
  v1009 = v1007 ^ v1010;
  v1011 = __ROR4__(v998, 27);
  v1012 = v1005 + v1011 - 899497514;
  v1014 = __ROR4__(v972, 2);
  v1013 = (v1009 ^ v998) + v1014;
  v1016 = __ROR4__(v227, 31);
  v1015 = v1013 + v1016;
  v1018 = __ROR4__(v998, 2);
  v1017 = v1018;
  v1020 = __ROR4__(v988, 2);
  v1019 = v1017 ^ v1020;
  v1021 = __ROR4__(v1012, 27);
  v1022 = v1015 + v1021 - 899497514;
  v1024 = __ROR4__(v982, 2);
  v1023 = (v1019 ^ v1012) + v1024;
  v1026 = __ROR4__(v230, 31);
  v1025 = v1023 + v1026;
  v1028 = __ROR4__(v1012, 2);
  v1027 = v1028;
  v1030 = __ROR4__(v998, 2);
  v1029 = v1027 ^ v1030;
  v1031 = __ROR4__(v1022, 27);
  v1032 = v1025 + v1031 - 899497514;
  v1034 = __ROR4__(v988, 2);
  v1033 = (v1029 ^ v1022) + v1034;
  v1036 = __ROR4__(v233, 31);
  v1035 = v1033 + v1036;
  v1038 = __ROR4__(v1022, 2);
  v1037 = v1038;
  v1040 = __ROR4__(v1012, 2);
  v1039 = v1037 ^ v1040;
  v1041 = __ROR4__(v1032, 27);
  v1042 = v1035 + v1041 - 899497514;
  v1043 = __ROR4__(v998, 2);
  v1044 = (v1039 ^ v1032) + v1043 + *v3;
  v1046 = __ROR4__(v235, 31);
  v1045 = v1044 + v1046;
  v1047 = __ROR4__(v1042, 27);
  *v3 = v1045 + v1047 - 899497514;
  v3[1] += v1042;
  v1048 = __ROR4__(v1032, 2);
  v3[2] += v1048;
  v1049 = __ROR4__(v1022, 2);
  v3[3] += v1049;
  v1051 = __ROR4__(v1012, 2);
  result = v3[4] + v1051;
  v3[4] = result;
  return result;
}
