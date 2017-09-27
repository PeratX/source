

int __fastcall SemVersion::SemVersion(int a1, __int16 a2, __int16 a3, __int16 a4, int *a5, int *a6, char a7)
{
  int v7; // r4@1

  v7 = a1;
  *(_WORD *)a1 = a2;
  *(_WORD *)(a1 + 2) = a3;
  *(_WORD *)(a1 + 4) = a4;
  sub_21E8AF4((int *)(a1 + 8), a5);
  sub_21E8AF4((int *)(v7 + 12), a6);
  *(_DWORD *)(v7 + 16) = &unk_28898CC;
  *(_BYTE *)(v7 + 20) = a7;
  *(_BYTE *)(v7 + 21) = 0;
  *(_BYTE *)(v7 + 22) = 0;
  j_SemVersion::_parseVersionToString((SemVersion *)v7);
  return v7;
}


int __fastcall SemVersion::operator<(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  unsigned int v4; // r6@1
  unsigned int v5; // r2@1
  unsigned int v6; // r0@1
  unsigned int v7; // r3@1
  unsigned int v8; // r5@1
  unsigned int v9; // r7@1
  bool v10; // zf@2
  int v11; // r0@6
  int *v12; // r4@6
  int v13; // t1@6
  int *v14; // r1@6
  int v15; // t1@6
  int v16; // r9@6
  signed int v17; // r2@6
  signed int v18; // r0@6
  signed int v19; // r9@11
  _DWORD *v20; // r7@15
  _BYTE *v21; // r11@15
  char *v22; // r1@15
  int v23; // r8@15
  int v24; // r6@16
  unsigned int v25; // r10@16
  unsigned int v26; // r9@16
  unsigned int v27; // r4@16
  int v28; // r5@18
  _DWORD *v29; // r1@18
  size_t v30; // r2@18
  int *v31; // r9@28
  int v32; // r0@29
  bool v33; // cf@30
  signed int v34; // r2@30
  signed int v35; // r1@32
  int v37; // r3@37
  int v38; // r0@37
  int v39; // r0@38
  int v40; // r1@38
  _BYTE *v41; // r4@39
  bool v42; // zf@39
  bool v43; // zf@42
  int v44; // r0@46
  int v45; // r0@49
  int v46; // r8@59
  int *v47; // r5@62
  int v48; // r0@63
  int v49; // r12@66
  int v50; // r1@66
  _BYTE *v51; // r5@67
  int v52; // r2@67
  int v53; // r3@67
  bool v54; // zf@68
  _BYTE *v55; // r1@68
  bool v56; // zf@71
  int v57; // r1@77
  int v58; // r2@80
  bool v59; // zf@90
  int v60; // r8@94
  signed int v61; // r1@97
  signed int v62; // r0@99
  _DWORD *v63; // r1@102
  _DWORD *v64; // r0@102
  unsigned int v65; // r5@102
  unsigned int v66; // r4@102
  size_t v67; // r2@102
  unsigned int v68; // r0@104
  unsigned int *v69; // r2@109
  signed int v70; // r1@111
  int *v71; // r0@117
  char *v72; // r4@122
  char *v73; // r7@122
  unsigned int *v74; // r2@124
  signed int v75; // r1@126
  int *v76; // r0@132
  int v77; // [sp+0h] [bp-48h]@28
  char *v78; // [sp+4h] [bp-44h]@16
  int v79; // [sp+4h] [bp-44h]@62
  _DWORD *v80; // [sp+8h] [bp-40h]@15
  _BYTE *v81; // [sp+Ch] [bp-3Ch]@15
  char *v82; // [sp+14h] [bp-34h]@15
  char *v83; // [sp+18h] [bp-30h]@15

  v2 = a2;
  v3 = a1;
  v4 = *(_WORD *)v2;
  v5 = *(_WORD *)(v2 + 2);
  v6 = *(_WORD *)(v2 + 4);
  v7 = *(_WORD *)(v3 + 4);
  v8 = *(_WORD *)v3;
  v9 = *(_WORD *)(v3 + 2);
  if ( v7 == v6 )
  {
    v10 = v9 == v5;
    if ( v9 == v5 )
      v10 = v8 == v4;
    if ( v10 )
    {
      v13 = *(_DWORD *)(v2 + 8);
      v12 = (int *)(v2 + 8);
      v11 = v13;
      v15 = *(_DWORD *)(v3 + 8);
      v14 = (int *)(v3 + 8);
      v16 = *(_DWORD *)(v15 - 12);
      v17 = 0;
      v10 = *(_DWORD *)(v11 - 12) == 0;
      v18 = 0;
      if ( v10 )
        v18 = 1;
      if ( !v16 )
        v17 = 1;
      if ( v17 != v18 )
        return v16 != 0;
      j__versionSplit((int)&v82, v14, 46);
      j__versionSplit((int)&v80, v12, 46);
      v21 = v81;
      v20 = v80;
      v22 = v83;
      v23 = (int)v82;
      if ( v83 == v82 )
      {
LABEL_22:
        v19 = 0;
        if ( (unsigned int)&v22[-v23] < v21 - (_BYTE *)v20 )
          v19 = 1;
LABEL_107:
        if ( (_BYTE *)v20 != v21 )
        {
          do
          {
            v71 = (int *)(*v20 - 12);
            if ( v71 != &dword_28898C0 )
            {
              v69 = (unsigned int *)(*v20 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v70 = __ldrex(v69);
                while ( __strex(v70 - 1, v69) );
              }
              else
                v70 = (*v69)--;
              if ( v70 <= 0 )
                j_j_j_j__ZdlPv_9(v71);
            }
            ++v20;
          }
          while ( (_BYTE *)v20 != v21 );
          v21 = v80;
        }
        if ( v21 )
          j_operator delete(v21);
        v73 = v83;
        v72 = v82;
        if ( v82 != v83 )
            v76 = (int *)(*(_DWORD *)v72 - 12);
            if ( v76 != &dword_28898C0 )
              v74 = (unsigned int *)(*(_DWORD *)v72 - 4);
                  v75 = __ldrex(v74);
                while ( __strex(v75 - 1, v74) );
                v75 = (*v74)--;
              if ( v75 <= 0 )
                j_j_j_j__ZdlPv_9(v76);
            v72 += 4;
          while ( v72 != v73 );
          v72 = v82;
        if ( v72 )
          j_operator delete(v72);
        return v19;
      }
      v24 = 0;
      v25 = 0;
      v78 = v83;
      v26 = (v83 - v82) >> 2;
      v27 = (v81 - (_BYTE *)v80) >> 2;
      while ( 1 )
        if ( v25 >= v27 )
LABEL_21:
          v22 = v78;
          goto LABEL_22;
        v28 = *(_DWORD *)(v23 + v24 * 4);
        v29 = (_DWORD *)v20[v24];
        v30 = *(_DWORD *)(v28 - 12);
        if ( v30 != *(v29 - 3) || j_memcmp_0(*(const void **)(v23 + v24 * 4), v29, v30) )
          break;
        ++v25;
        ++v24;
        if ( v25 >= v26 )
          goto LABEL_21;
      if ( *(_DWORD *)(v28 - 4) <= -1 )
        v77 = v23;
        v32 = v28;
      else
        v31 = (_DWORD *)(v23 + 4 * v25);
        sub_21E8010((const void **)(v23 + 4 * v25));
        v28 = *v31;
        if ( *(_DWORD *)(*v31 - 4) < 0 )
          v32 = *v31;
        else
          sub_21E8010((const void **)(v23 + 4 * v25));
      v37 = v32 + *(_DWORD *)(v32 - 12);
      v38 = (v37 - v28) >> 2;
      if ( v38 >= 1 )
        v39 = v38 + 1;
        v40 = ctype_ + 1;
        while ( 1 )
          v41 = (_BYTE *)v28;
          v42 = (*(_BYTE *)(v40 + *(_BYTE *)v28) & 4) == 0;
          if ( *(_BYTE *)(v40 + *(_BYTE *)v28) & 4 )
            v41 = (_BYTE *)(v28 + 1);
            v42 = (*(_BYTE *)(v40 + *(_BYTE *)(v28 + 1)) & 4) == 0;
          if ( v42 )
            break;
          v41 = (_BYTE *)(v28 + 2);
          v43 = (*(_BYTE *)(v40 + *(_BYTE *)(v28 + 2)) & 4) == 0;
          if ( *(_BYTE *)(v40 + *(_BYTE *)(v28 + 2)) & 4 )
            v41 = (_BYTE *)(v28 + 3);
            v43 = (*(_BYTE *)(v40 + *(_BYTE *)(v28 + 3)) & 4) == 0;
          if ( v43 )
          --v39;
          v28 += 4;
          if ( v39 <= 1 )
            goto LABEL_46;
LABEL_59:
        v46 = v20[v25];
        if ( (_BYTE *)v37 == v41 )
        if ( *(_DWORD *)(v46 - 4) <= -1 )
          v79 = v37;
          v48 = v20[v25];
          v47 = &v20[v25];
          sub_21E8010((const void **)&v20[v25]);
          v46 = *v47;
          if ( *(_DWORD *)(*v47 - 4) < 0 )
            v48 = *v47;
          else
            sub_21E8010((const void **)&v20[v25]);
        v49 = v48 + *(_DWORD *)(v48 - 12);
        v50 = (v49 - v46) >> 2;
        if ( v50 >= 1 )
          v51 = (_BYTE *)v79;
          v52 = v50 + 1;
          v53 = ctype_ + 1;
          while ( 1 )
            v54 = (*(_BYTE *)(v53 + *(_BYTE *)v46) & 4) == 0;
            v55 = (_BYTE *)v46;
            if ( *(_BYTE *)(v53 + *(_BYTE *)v46) & 4 )
              v55 = (_BYTE *)(v46 + 1);
              v54 = (*(_BYTE *)(v53 + *(_BYTE *)(v46 + 1)) & 4) == 0;
            if ( v54 )
              goto LABEL_90;
            v55 = (_BYTE *)(v46 + 2);
            v56 = (*(_BYTE *)(v53 + *(_BYTE *)(v46 + 2)) & 4) == 0;
            if ( *(_BYTE *)(v53 + *(_BYTE *)(v46 + 2)) & 4 )
              v55 = (_BYTE *)(v46 + 3);
              v56 = (*(_BYTE *)(v53 + *(_BYTE *)(v46 + 3)) & 4) == 0;
            if ( v56 )
            --v52;
            v46 += 4;
            if ( v52 <= 1 )
              goto LABEL_77;
        v51 = (_BYTE *)v79;
LABEL_77:
        v57 = v49 - v46;
        if ( v49 - v46 == 3 )
          v58 = ctype_;
          v55 = (_BYTE *)v46;
          if ( !(*(_BYTE *)(ctype_ + *(_BYTE *)v46 + 1) & 4) )
            goto LABEL_90;
          v55 = (_BYTE *)(v46 + 1);
          if ( v57 != 2 )
            if ( v57 == 1 )
              v55 = (_BYTE *)v46;
              v58 = ctype_;
              goto LABEL_86;
            v55 = (_BYTE *)(v48 + *(_DWORD *)(v48 - 12));
        if ( *(_BYTE *)(*v55 + v58 + 1) & 4 )
          ++v55;
LABEL_86:
          if ( *(_BYTE *)(*v55 + v58 + 1) & 4 )
LABEL_90:
        v59 = v51 == v41;
        if ( v51 == v41 )
          v59 = v49 == (_DWORD)v55;
        if ( v59 )
          v60 = j_atoi(*(const char **)(v77 + v24 * 4));
          v19 = 0;
          if ( v60 < j_atoi((const char *)v20[v24]) )
            v19 = 1;
          v10 = v49 == (_DWORD)v55;
          v61 = 0;
          if ( v10 )
            v61 = 1;
          v62 = 0;
          if ( v51 == v41 )
            v62 = 1;
          if ( v62 == v61 )
            v63 = (_DWORD *)v20[v24];
            v64 = *(_DWORD **)(v77 + v24 * 4);
            v65 = *(v63 - 3);
            v66 = *(v64 - 3);
            v67 = *(v64 - 3);
            if ( v66 > (unsigned int)v65 )
              v67 = *(v63 - 3);
            v68 = j_memcmp_0(v64, v63, v67);
            if ( !v68 )
              v68 = v66 - v65;
            v19 = v68 >> 31;
        goto LABEL_107;
LABEL_46:
      v44 = v37 - v28;
      if ( v37 - v28 == 3 )
        v41 = (_BYTE *)v28;
        v45 = ctype_;
        if ( !(*(_BYTE *)(*(_BYTE *)v28 + ctype_ + 1) & 4) )
          goto LABEL_59;
        v41 = (_BYTE *)(v28 + 1);
        if ( v44 != 2 )
          if ( v44 != 1 )
            v41 = (_BYTE *)v37;
            goto LABEL_59;
          v45 = ctype_;
          goto LABEL_55;
      if ( !(*(_BYTE *)(*v41 + v45 + 1) & 4) )
        goto LABEL_59;
      ++v41;
LABEL_55:
      if ( *(_BYTE *)(v45 + *v41 + 1) & 4 )
        v41 = (_BYTE *)v37;
      goto LABEL_59;
    }
  }
  if ( v8 < (unsigned int)v4 )
    return 1;
  if ( v4 < (unsigned int)v8 )
    return 0;
  if ( v9 < (unsigned int)v5 )
  v33 = v5 >= (unsigned int)v9;
  v34 = 0;
  if ( v33 )
    v34 = 1;
  v35 = 0;
  if ( v7 < (unsigned int)v6 )
    v35 = 1;
  return v35 & v34;
}


SemVersion *__fastcall SemVersion::SemVersion(SemVersion *this)
{
  SemVersion *v1; // r4@1

  v1 = this;
  *(_WORD *)this = 0;
  *((_WORD *)this + 1) = 0;
  *((_WORD *)this + 2) = 0;
  *((_DWORD *)this + 2) = &unk_28898CC;
  *((_DWORD *)this + 3) = &unk_28898CC;
  *((_DWORD *)this + 4) = &unk_28898CC;
  *((_WORD *)this + 10) = 1;
  *((_BYTE *)this + 22) = 0;
  j_SemVersion::_parseVersionToString(this);
  return v1;
}


int __fastcall SemVersion::getMajor(SemVersion *this)
{
  return *(_WORD *)this;
}


_DWORD *__fastcall SemVersion::_parseVersionToString(SemVersion *this)
{
  SemVersion *v1; // r8@1
  void **v2; // r6@1
  void **v3; // r7@1
  int v4; // r1@1
  char *v5; // r5@1
  int v6; // r1@1
  char *v7; // r5@1
  int v8; // r1@1
  void *v9; // r0@5
  void **v10; // r0@6
  char *v11; // r0@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int v17; // [sp+4h] [bp-4h]@5
  void **v18; // [sp+8h] [bp+0h]@1
  int v19; // [sp+Ch] [bp+4h]@1
  void **v20; // [sp+10h] [bp+8h]@1
  void **v21; // [sp+14h] [bp+Ch]@1
  int v22; // [sp+18h] [bp+10h]@1
  int v23; // [sp+1Ch] [bp+14h]@1
  int v24; // [sp+20h] [bp+18h]@1
  int v25; // [sp+24h] [bp+1Ch]@1
  int v26; // [sp+28h] [bp+20h]@1
  int v27; // [sp+2Ch] [bp+24h]@1
  int v28; // [sp+30h] [bp+28h]@1
  int v29; // [sp+34h] [bp+2Ch]@1
  char *v30; // [sp+38h] [bp+30h]@1
  void **v31; // [sp+3Ch] [bp+34h]@1
  int v32; // [sp+ACh] [bp+A4h]@1
  __int16 v33; // [sp+B0h] [bp+A8h]@1
  int v34; // [sp+B4h] [bp+ACh]@1
  int v35; // [sp+B8h] [bp+B0h]@1
  int v36; // [sp+BCh] [bp+B4h]@1
  int v37; // [sp+C0h] [bp+B8h]@1

  v1 = this;
  sub_21B6308((int)&v31);
  v31 = &off_26D3AF0;
  v2 = (void **)off_26D3F64;
  v3 = (void **)off_26D3F70;
  v32 = 0;
  v33 = 0;
  v36 = 0;
  v37 = 0;
  v34 = 0;
  v35 = 0;
  v18 = (void **)off_26D3F68;
  *(void ***)((char *)&v18 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v19 = 0;
  sub_21B5AD4((int)*(v18 - 3) + (_DWORD)&v18, 0);
  v20 = v3;
  *(_DWORD *)((char *)*(v3 - 3) + (_DWORD)&v20) = off_26D3F74;
  sub_21B5AD4((int)*(v20 - 3) + (_DWORD)&v20, 0);
  v18 = v2;
  *(_DWORD *)((char *)*(v2 - 3) + (_DWORD)&v18) = off_26D3F78;
  v18 = &off_26D3F94;
  v31 = &off_26D3FBC;
  v20 = &off_26D3FA8;
  v27 = 0;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v21 = &off_26D40A8;
  v22 = 0;
  sub_21C9520((unsigned int **)&v28);
  v21 = &off_27734E8;
  v29 = 24;
  v30 = (char *)&unk_28898CC;
  sub_21B5AD4((int)*(v18 - 3) + (_DWORD)&v18, (unsigned int)&v21);
  v4 = *(_WORD *)v1;
  v5 = sub_21CC440((char *)&v20);
  sub_21CBF38(v5, (int)".", 1);
  v6 = *((_WORD *)v1 + 1);
  v7 = sub_21CC440(v5);
  sub_21CBF38(v7, (int)".", 1);
  v8 = *((_WORD *)v1 + 2);
  sub_21CC440(v7);
  if ( *(_DWORD *)(*((_DWORD *)v1 + 2) - 12) )
  {
    sub_21CBF38((char *)&v20, (int)"-", 1);
    sub_21CBF38((char *)&v20, *((_DWORD *)v1 + 2), *(_DWORD *)(*((_DWORD *)v1 + 2) - 12));
  }
  if ( *(_DWORD *)(*((_DWORD *)v1 + 3) - 12) )
    sub_21CBF38((char *)&v20, (int)"+", 1);
    sub_21CBF38((char *)&v20, *((_DWORD *)v1 + 3), *(_DWORD *)(*((_DWORD *)v1 + 3) - 12));
  sub_21CFED8(&v17, (int)&v21);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 4,
    &v17);
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = off_26D3F84;
  v18 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v18) = off_26D3F80[0];
  v20 = v10;
  v11 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v30 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21C802C((unsigned int **)&v28);
  return sub_21B6560(&v31);
}


int __fastcall SemVersion::SemVersion(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r0@1
  __int16 v6; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = (int *)(a1 + 8);
  v5 = *(_DWORD *)a2;
  *(_WORD *)(v3 + 4) = *(_WORD *)(a2 + 4);
  *(_DWORD *)v3 = v5;
  sub_DA73B4(v4, (int *)(a2 + 8));
  sub_DA73B4((int *)(v3 + 12), (int *)(v2 + 12));
  sub_DA73B4((int *)(v3 + 16), (int *)(v2 + 16));
  v6 = *(_WORD *)(v2 + 20);
  *(_BYTE *)(v3 + 22) = *(_BYTE *)(v2 + 22);
  *(_WORD *)(v3 + 20) = v6;
  return v3;
}


char *__fastcall SemVersion::getPreRelease(SemVersion *this)
{
  return (char *)this + 8;
}


int __fastcall SemVersion::fromString(const void **a1, int a2)
{
  const void **v2; // r5@1
  int v3; // r10@1
  char v4; // r0@1
  char v5; // r0@4
  _BYTE *v6; // r2@10
  int v7; // r8@11
  int v8; // r2@17
  char *v9; // r11@21
  char *v10; // r1@21
  char *v11; // r9@21
  char *v12; // r6@21
  int v13; // r3@23
  unsigned int v14; // r7@23
  char *v15; // r1@23
  unsigned int v16; // r3@35
  __int64 v17; // kr00_8@46
  int v18; // r7@47
  int *v19; // r5@47
  const char *v20; // r6@47
  void **v21; // r0@49
  __int64 v22; // kr08_8@57
  int v23; // r7@58
  int *v24; // r5@58
  const char *v25; // r6@58
  void **v26; // r0@60
  char *v27; // r11@62
  __int64 v28; // kr10_8@68
  int v29; // r7@69
  int *v30; // r5@69
  const char *v31; // r6@69
  void **v32; // r0@71
  __int64 v33; // kr18_8@79
  int v34; // r7@80
  int *v35; // r6@80
  _BYTE *v36; // r5@80
  char *v37; // r0@88
  __int64 v38; // kr20_8@90
  int v39; // r7@91
  int *v40; // r6@91
  _BYTE *v41; // r5@91
  char *v42; // r0@99
  unsigned int *v44; // r2@104
  signed int v45; // r1@106
  unsigned int *v46; // r2@108
  signed int v47; // r1@110
  unsigned int *v48; // r2@112
  signed int v49; // r1@114
  unsigned int *v50; // r2@116
  signed int v51; // r1@118
  unsigned int *v52; // r2@120
  signed int v53; // r1@122
  char *v54; // [sp+8h] [bp-50h]@21
  char *v55; // [sp+Ch] [bp-4Ch]@47
  char *v56; // [sp+10h] [bp-48h]@93
  char *v57; // [sp+14h] [bp-44h]@82
  void *ptr; // [sp+18h] [bp-40h]@8
  _BYTE *v59; // [sp+1Ch] [bp-3Ch]@8
  int v60; // [sp+20h] [bp-38h]@8
  int v61; // [sp+24h] [bp-34h]@8

  v2 = a1;
  v3 = a2;
  v4 = byte_287E804;
  __dmb();
  if ( !(v4 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_287E804) )
  {
    sub_21E94B4(
      &dword_287E800,
      "^(0|[1-9][0-9]*)(\\.(0|[1-9][0-9]*)(\\.(0|[1-9][0-9]*)(?:\\-((?:(?:(?:(?:0[0-9]*[A-Za-z-])|[1-9A-Za-z-])[0-9A-Za-z"
      "-]*)|0)(?:\\.(?:(?:(?:(?:0[0-9]*[A-Za-z-])|[1-9A-Za-z-])[0-9A-Za-z-]*)|0))*))?(?:\\+([0-9A-Za-z-]+(?:\\.[0-9A-Za-z-]+)*))?)?)?");
    j___cxa_atexit_0((int)sub_21E6EDC);
    j_j___cxa_guard_release_0((unsigned int *)&byte_287E804);
  }
  v5 = byte_287E808;
  if ( !(v5 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_287E808) )
    j_std::basic_regex<char,std::regex_traits<char>>::basic_regex<__gnu_cxx::__normal_iterator<char const*,std::string>>(
      (int)&algn_287E809[3],
      dword_287E800,
      (_BYTE *)dword_287E800 + *((_DWORD *)dword_287E800 - 3),
      16);
    j___cxa_atexit_0((int)std::basic_regex<char,std::regex_traits<char>>::~basic_regex);
    j_j___cxa_guard_release_0((unsigned int *)&byte_287E808);
  if ( !sub_21E7D6C(v2, "*") )
    v7 = 0;
    *(_BYTE *)(v3 + 22) = 1;
    return v7;
  v60 = 0;
  v61 = 0;
  ptr = 0;
  v59 = 0;
  if ( j_std::__detail::__regex_algo_impl<__gnu_cxx::__normal_iterator<char const*,std::string>,std::allocator<std::sub_match<__gnu_cxx::__normal_iterator<char const*,std::string>>>,char,std::regex_traits<char>,(std::__detail::_RegexExecutorPolicy)0,false>(
         (int)*v2,
         (int)*v2 + *((_DWORD *)*v2 - 3),
         (int)&ptr,
         (int)&algn_287E809[3],
         0) == 1 )
    if ( v59 == ptr )
    {
      v6 = &std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
    }
    else
      if ( *((_BYTE *)ptr + 8) )
        v6 = ptr;
      if ( v59 - (_BYTE *)ptr == 24 )
        v6 = &std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
    v8 = v6[8] ? (*(_QWORD *)v6 >> 32) - *(_QWORD *)v6 : 0;
    if ( v8 == *((_DWORD *)*v2 - 3) )
      if ( v59 == ptr )
      {
        v54 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v9 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v10 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v11 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v12 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
      }
      else
        v13 = -1431655765 * ((v59 - (_BYTE *)ptr) >> 2);
        v14 = v13 - 2;
        v15 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        if ( *((_BYTE *)ptr + 8) )
          v15 = (char *)ptr + 72;
        if ( v14 <= 6 )
          v15 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v54 = v15;
          v11 = (char *)ptr + 60;
        if ( v14 <= 5 )
          v11 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
          v9 = (char *)ptr + 36;
        if ( v14 <= 3 )
          v9 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        v16 = v13 & 0xFFFFFFFE;
          v10 = (char *)ptr + 12;
        if ( v16 == 2 )
          v10 = (char *)&std::__unmatched_sub<__gnu_cxx::__normal_iterator<char const*,std::string>>(void)::__unmatched;
        if ( v14 >= 8 && *((_BYTE *)ptr + 8) )
          v12 = (char *)ptr + 84;
      if ( v9[8] )
        v7 = (unsigned __int8)v11[8] ^ 1;
        v7 = 1;
      if ( v10[8] )
        v17 = *(_QWORD *)v10;
        if ( (_DWORD)v17 != HIDWORD(v17) )
        {
          v18 = HIDWORD(v17) - v17;
          v55 = v12;
          v19 = sub_21E7E80(HIDWORD(v17) - v17, 0);
          v20 = (const char *)(v19 + 3);
          if ( HIDWORD(v17) - (_DWORD)v17 == 1 )
            *v20 = *(_BYTE *)v17;
          else
            j___aeabi_memcpy_0(HIDWORD(v17) + 12, v17, v18);
          if ( v19 != &dword_28898C0 )
          {
            v19[2] = 0;
            *v19 = v18;
            v20[v18] = byte_26C67B8[0];
          }
LABEL_55:
          *(_WORD *)v3 = j_atoi(v20);
          if ( (int *)(v20 - 12) != &dword_28898C0 )
            v44 = (unsigned int *)(v20 - 4);
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
              j_j_j_j__ZdlPv_9((void *)(v20 - 12));
          if ( v9[8] )
            v22 = *(_QWORD *)v9;
            if ( (_DWORD)v22 != HIDWORD(v22) )
              v23 = HIDWORD(v22) - v22;
              v24 = sub_21E7E80(HIDWORD(v22) - v22, 0);
              v25 = (const char *)(v24 + 3);
              if ( HIDWORD(v22) - (_DWORD)v22 == 1 )
                *v25 = *(_BYTE *)v22;
              else
                j___aeabi_memcpy_0(HIDWORD(v22) + 12, v22, v23);
              v27 = v54;
              if ( v24 != &dword_28898C0 )
              {
                v24[2] = 0;
                *v24 = v23;
                v25[v23] = byte_26C67B8[0];
              }
LABEL_66:
              *(_WORD *)(v3 + 2) = j_atoi(v25);
              if ( (int *)(v25 - 12) != &dword_28898C0 )
                v46 = (unsigned int *)(v25 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v47 = __ldrex(v46);
                  while ( __strex(v47 - 1, v46) );
                }
                else
                  v47 = (*v46)--;
                if ( v47 <= 0 )
                  j_j_j_j__ZdlPv_9((void *)(v25 - 12));
              if ( v11[8] )
                v28 = *(_QWORD *)v11;
                if ( (_DWORD)v28 != HIDWORD(v28) )
                  v29 = HIDWORD(v28) - v28;
                  v30 = sub_21E7E80(HIDWORD(v28) - v28, 0);
                  v31 = (const char *)(v30 + 3);
                  if ( HIDWORD(v28) - (_DWORD)v28 == 1 )
                    *v31 = *(_BYTE *)v28;
                  else
                    j___aeabi_memcpy_0(HIDWORD(v28) + 12, v28, v29);
                  if ( v30 != &dword_28898C0 )
                  {
                    v30[2] = 0;
                    *v30 = v29;
                    v31[v29] = byte_26C67B8[0];
                  }
                  goto LABEL_77;
                v32 = &off_27775D4;
              v31 = (char *)*v32 + 12;
LABEL_77:
              *(_WORD *)(v3 + 4) = j_atoi(v31);
              if ( (int *)(v31 - 12) != &dword_28898C0 )
                v48 = (unsigned int *)(v31 - 4);
                    v49 = __ldrex(v48);
                  while ( __strex(v49 - 1, v48) );
                  v49 = (*v48)--;
                if ( v49 <= 0 )
                  j_j_j_j__ZdlPv_9((void *)(v31 - 12));
              if ( v27[8] )
                v33 = *(_QWORD *)v27;
                if ( (_DWORD)v33 == HIDWORD(v33) )
                  v57 = (char *)&unk_28898CC;
                  v34 = HIDWORD(v33) - v33;
                  v35 = sub_21E7E80(HIDWORD(v33) - v33, 0);
                  v36 = v35 + 3;
                  if ( HIDWORD(v33) - (_DWORD)v33 == 1 )
                    *v36 = *(_BYTE *)v33;
                    j___aeabi_memcpy_0(HIDWORD(v33) + 12, v33, v34);
                  if ( v35 != &dword_28898C0 )
                    v35[2] = 0;
                    *v35 = v34;
                    v36[v34] = byte_26C67B8[0];
                  v57 = (char *)(v35 + 3);
                v57 = (char *)&unk_28898CC;
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)(v3 + 8),
                (int *)&v57);
              v37 = v57 - 12;
              if ( (int *)(v57 - 12) != &dword_28898C0 )
                v50 = (unsigned int *)(v57 - 4);
                    v51 = __ldrex(v50);
                  while ( __strex(v51 - 1, v50) );
                  v51 = (*v50)--;
                if ( v51 <= 0 )
                  j_j_j_j__ZdlPv_9(v37);
              if ( v55[8] )
                v38 = *(_QWORD *)v55;
                if ( (_DWORD)v38 == HIDWORD(v38) )
                  v56 = (char *)&unk_28898CC;
                  v39 = HIDWORD(v38) - v38;
                  v40 = sub_21E7E80(HIDWORD(v38) - v38, 0);
                  v41 = v40 + 3;
                  if ( HIDWORD(v38) - (_DWORD)v38 == 1 )
                    *v41 = *(_BYTE *)v38;
                    j___aeabi_memcpy_0(HIDWORD(v38) + 12, v38, v39);
                  if ( v40 != &dword_28898C0 )
                    v40[2] = 0;
                    *v40 = v39;
                    v41[v39] = byte_26C67B8[0];
                  v56 = (char *)(v40 + 3);
                v56 = (char *)&unk_28898CC;
                (int *)(v3 + 12),
                (int *)&v56);
              v42 = v56 - 12;
              if ( (int *)(v56 - 12) != &dword_28898C0 )
                v52 = (unsigned int *)(v56 - 4);
                    v53 = __ldrex(v52);
                  while ( __strex(v53 - 1, v52) );
                  v53 = (*v52)--;
                if ( v53 <= 0 )
                  j_j_j_j__ZdlPv_9(v42);
              j_SemVersion::_parseVersionToString((SemVersion *)v3);
              *(_BYTE *)(v3 + 21) = 1;
              goto LABEL_101;
            v26 = &off_27775D4;
          v27 = v54;
          v25 = (char *)*v26 + 12;
          goto LABEL_66;
        }
        v55 = v12;
        v21 = &off_27775D4;
      v20 = (char *)*v21 + 12;
      goto LABEL_55;
  EntityInteraction::setInteractText((int *)(v3 + 16), (int *)v2);
  v7 = 2;
LABEL_101:
  if ( ptr )
    j_operator delete(ptr);
  return v7;
}


signed int __fastcall SemVersion::fromJsonArray(SemVersion *this, const Json::Value *a2, SemVersion *a3)
{
  const Json::Value *v3; // r4@1
  Json::Value *v4; // r6@1
  signed int v5; // r5@3
  Json::Value *v6; // r0@3
  Json::Value *v7; // r0@3
  Json::Value *v8; // r0@3

  v3 = a2;
  v4 = this;
  if ( j_Json::Value::isArray(this) == 1 )
  {
    if ( j_Json::Value::size(v4) == 3 )
    {
      v5 = 0;
      v6 = (Json::Value *)j_Json::Value::operator[]((int)v4, 0);
      *(_WORD *)v3 = j_Json::Value::asUInt(v6, 0);
      v7 = (Json::Value *)j_Json::Value::operator[]((int)v4, 1u);
      *((_WORD *)v3 + 1) = j_Json::Value::asUInt(v7, 0);
      v8 = (Json::Value *)j_Json::Value::operator[]((int)v4, 2u);
      *((_WORD *)v3 + 2) = j_Json::Value::asUInt(v8, 0);
      j_SemVersion::_parseVersionToString(v3);
      *((_BYTE *)v3 + 21) = 1;
    }
    else
      v5 = 2;
  }
  else
    v5 = 2;
  return v5;
}


int __fastcall SemVersion::operator>(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int result; // r0@2

  v2 = a2;
  v3 = a1;
  if ( j_SemVersion::operator==(a1, a2) )
    result = 0;
  else
    result = j_SemVersion::operator<(v3, v2) ^ 1;
  return result;
}


char *__fastcall SemVersion::getBuildMeta(SemVersion *this)
{
  return (char *)this + 12;
}


signed int __fastcall SemVersion::satisfies(SemVersion *this, const SemVersion *a2)
{
  SemVersion *v2; // r5@1
  const SemVersion *v3; // r4@1
  int v4; // r0@2
  int v5; // r1@2
  int v6; // r2@2
  signed int v7; // r4@2
  bool v8; // zf@3
  size_t v9; // r2@7
  char *v10; // r0@10
  char *v11; // r0@11
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  void *s2; // [sp+4h] [bp-2Ch]@2
  __int16 v18; // [sp+8h] [bp-28h]@2
  __int16 v19; // [sp+Ah] [bp-26h]@2
  __int16 v20; // [sp+Ch] [bp-24h]@2
  void *s1; // [sp+10h] [bp-20h]@2
  unsigned __int16 v22; // [sp+14h] [bp-1Ch]@2
  unsigned __int16 v23; // [sp+16h] [bp-1Ah]@2
  unsigned __int16 v24; // [sp+18h] [bp-18h]@2

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 20) )
  {
    sub_21E8AF4((int *)&s1, (int *)this + 2);
    v22 = *((_WORD *)v2 + 2);
    v23 = *((_WORD *)v2 + 1);
    v24 = *(_WORD *)v2;
    sub_21E8AF4((int *)&s2, (int *)v3 + 2);
    v4 = *((_WORD *)v3 + 2);
    v18 = *((_WORD *)v3 + 2);
    v5 = *((_WORD *)v3 + 1);
    v19 = *((_WORD *)v3 + 1);
    v6 = *(_WORD *)v3;
    v7 = 0;
    v20 = v6;
    if ( v24 == v6 )
    {
      v8 = v23 == v5;
      if ( v23 == v5 )
        v8 = v22 == v4;
      if ( v8 )
      {
        v7 = 0;
        v9 = *((_DWORD *)s1 - 3);
        if ( v9 == *((_DWORD *)s2 - 3) && !j_memcmp_0(s1, s2, v9) )
          v7 = 1;
      }
    }
    v10 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)((char *)s2 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (char *)s1 - 12;
    if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)((char *)s1 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  else
    if ( (unsigned __int16)*(_DWORD *)this == (unsigned __int16)*(_DWORD *)a2
      && *(_DWORD *)this >> 16 >= *(_DWORD *)a2 >> 16 )
      v7 = 1;
  return v7;
}


char *__fastcall SemVersion::asString(SemVersion *this)
{
  return (char *)this + 16;
}
