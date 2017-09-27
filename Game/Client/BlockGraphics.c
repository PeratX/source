

int __fastcall BlockGraphics::randomlyModifyPosition(BlockGraphics *this, const BlockPos *a2, int *a3, _DWORD *a4)
{
  *a4 = 0;
  return (*(int (__fastcall **)(BlockGraphics *))(*(_DWORD *)a2 + 60))(this);
}


void __fastcall BlockGraphics::randomlyModifyPosition(BlockGraphics *this, const BlockPos *a2, int a3)
{
  BlockGraphics::randomlyModifyPosition(this, a2, a3);
}


signed int __fastcall BlockGraphics::setCarriedTextures(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  Json::Value *v3; // r5@1
  BlockGraphics *v4; // r4@1
  void *v5; // r0@3
  void *v6; // r0@4
  Json::Value *v8; // r0@9
  Json::Value *v9; // r0@10
  Json::Value *v10; // r0@11
  void *v11; // r6@12
  void *v12; // r6@12
  void *v13; // r5@12
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  void *v19; // r0@17
  void *v20; // r4@18
  void *v21; // r6@18
  Json::Value *v22; // r0@20
  Json::Value *v23; // r0@21
  Json::Value *v24; // r0@22
  Json::Value *v25; // r0@23
  Json::Value *v26; // r0@24
  Json::Value *v27; // r0@25
  void *v28; // r6@26
  void *v29; // r6@26
  void *v30; // r6@26
  void *v31; // r7@26
  void *v32; // r6@26
  void *v33; // r5@26
  void *v34; // r0@26
  void *v35; // r0@27
  void *v36; // r0@28
  void *v37; // r0@29
  void *v38; // r0@30
  void *v39; // r0@31
  void *v40; // r0@32
  void *v41; // r0@33
  void *v42; // r0@34
  void *v43; // r0@35
  void *v44; // r0@36
  void *v45; // r0@37
  void *v46; // r6@38
  void *v47; // r4@40
  void *v48; // r6@40
  unsigned int *v49; // r2@42
  signed int v50; // r1@44
  int *v51; // r0@50
  unsigned int *v52; // r2@56
  signed int v53; // r1@58
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@71
  signed int v57; // r1@73
  int *v58; // r0@79
  unsigned int *v59; // r2@85
  signed int v60; // r1@87
  int *v61; // r0@93
  unsigned int *v62; // r2@96
  signed int v63; // r1@98
  unsigned int *v64; // r2@100
  signed int v65; // r1@102
  unsigned int *v66; // r2@104
  signed int v67; // r1@106
  unsigned int *v68; // r2@108
  signed int v69; // r1@110
  unsigned int *v70; // r2@112
  signed int v71; // r1@114
  unsigned int *v72; // r2@116
  signed int v73; // r1@118
  unsigned int *v74; // r2@144
  signed int v75; // r1@146
  unsigned int *v76; // r2@148
  signed int v77; // r1@150
  unsigned int *v78; // r2@152
  signed int v79; // r1@154
  unsigned int *v80; // r2@156
  signed int v81; // r1@158
  unsigned int *v82; // r2@160
  signed int v83; // r1@162
  unsigned int *v84; // r2@164
  signed int v85; // r1@166
  unsigned int *v86; // r2@168
  signed int v87; // r1@170
  unsigned int *v88; // r2@172
  signed int v89; // r1@174
  unsigned int *v90; // r2@176
  signed int v91; // r1@178
  unsigned int *v92; // r2@180
  signed int v93; // r1@182
  unsigned int *v94; // r2@184
  signed int v95; // r1@186
  unsigned int *v96; // r2@188
  signed int v97; // r1@190
  int v98; // [sp+14h] [bp-A4h]@26
  int v99; // [sp+18h] [bp-A0h]@26
  int v100; // [sp+20h] [bp-98h]@26
  int v101; // [sp+24h] [bp-94h]@26
  int v102; // [sp+2Ch] [bp-8Ch]@26
  int v103; // [sp+30h] [bp-88h]@26
  int v104; // [sp+38h] [bp-80h]@26
  int v105; // [sp+3Ch] [bp-7Ch]@26
  int v106; // [sp+44h] [bp-74h]@26
  int v107; // [sp+48h] [bp-70h]@26
  int v108; // [sp+50h] [bp-68h]@26
  int v109; // [sp+54h] [bp-64h]@26
  int v110; // [sp+5Ch] [bp-5Ch]@12
  int v111; // [sp+60h] [bp-58h]@12
  int v112; // [sp+68h] [bp-50h]@12
  int v113; // [sp+6Ch] [bp-4Ch]@12
  int v114; // [sp+74h] [bp-44h]@12
  int v115; // [sp+78h] [bp-40h]@12
  void *v116; // [sp+7Ch] [bp-3Ch]@7
  void *v117; // [sp+80h] [bp-38h]@7
  int v118; // [sp+8Ch] [bp-2Ch]@3
  int v119; // [sp+90h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  if ( Json::Value::isNull(a2) )
    return 1;
  if ( Json::Value::isString(v3) == 1 )
  {
    sub_119C884((void **)&v118, (const char *)&unk_257BC67);
    Json::Value::asString(&v119, (int)v3, &v118);
    BlockGraphics::setCarriedTextureItem((int)v4, &v119, &v119, &v119, &v119, &v119, &v119);
    v5 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
    {
      v52 = (unsigned int *)(v119 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      }
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v118 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
  if ( Json::Value::isObject(v3) == 1 )
    Json::Value::getMemberNames((Json::Value *)&v116, (int)v3);
    if ( 6 == ((_BYTE *)v117 - (_BYTE *)v116) >> 2 )
      v22 = (Json::Value *)Json::Value::operator[]((int)v3, "up");
      if ( Json::Value::isString(v22) == 1 )
        v23 = (Json::Value *)Json::Value::operator[]((int)v3, "down");
        if ( Json::Value::isString(v23) == 1 )
        {
          v24 = (Json::Value *)Json::Value::operator[]((int)v3, "north");
          if ( Json::Value::isString(v24) == 1 )
          {
            v25 = (Json::Value *)Json::Value::operator[]((int)v3, "south");
            if ( Json::Value::isString(v25) == 1 )
            {
              v26 = (Json::Value *)Json::Value::operator[]((int)v3, "west");
              if ( Json::Value::isString(v26) == 1 )
              {
                v27 = (Json::Value *)Json::Value::operator[]((int)v3, "east");
                if ( Json::Value::isString(v27) == 1 )
                {
                  v28 = Json::Value::operator[]((int)v3, "up");
                  sub_119C884((void **)&v108, (const char *)&unk_257BC67);
                  Json::Value::asString(&v109, (int)v28, &v108);
                  v29 = Json::Value::operator[]((int)v3, "down");
                  sub_119C884((void **)&v106, (const char *)&unk_257BC67);
                  Json::Value::asString(&v107, (int)v29, &v106);
                  v30 = Json::Value::operator[]((int)v3, "north");
                  sub_119C884((void **)&v104, (const char *)&unk_257BC67);
                  Json::Value::asString(&v105, (int)v30, &v104);
                  v31 = Json::Value::operator[]((int)v3, "south");
                  sub_119C884((void **)&v102, (const char *)&unk_257BC67);
                  Json::Value::asString(&v103, (int)v31, &v102);
                  v32 = Json::Value::operator[]((int)v3, "west");
                  sub_119C884((void **)&v100, (const char *)&unk_257BC67);
                  Json::Value::asString(&v101, (int)v32, &v100);
                  v33 = Json::Value::operator[]((int)v3, "east");
                  sub_119C884((void **)&v98, (const char *)&unk_257BC67);
                  Json::Value::asString(&v99, (int)v33, &v98);
                  BlockGraphics::setCarriedTextureItem((int)v4, &v109, &v107, &v105, &v103, &v101, &v99);
                  v34 = (void *)(v99 - 12);
                  if ( (int *)(v99 - 12) != &dword_28898C0 )
                  {
                    v74 = (unsigned int *)(v99 - 4);
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
                      j_j_j_j_j__ZdlPv_9_1(v34);
                  }
                  v35 = (void *)(v98 - 12);
                  if ( (int *)(v98 - 12) != &dword_28898C0 )
                    v76 = (unsigned int *)(v98 - 4);
                        v77 = __ldrex(v76);
                      while ( __strex(v77 - 1, v76) );
                      v77 = (*v76)--;
                    if ( v77 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v35);
                  v36 = (void *)(v101 - 12);
                  if ( (int *)(v101 - 12) != &dword_28898C0 )
                    v78 = (unsigned int *)(v101 - 4);
                        v79 = __ldrex(v78);
                      while ( __strex(v79 - 1, v78) );
                      v79 = (*v78)--;
                    if ( v79 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v36);
                  v37 = (void *)(v100 - 12);
                  if ( (int *)(v100 - 12) != &dword_28898C0 )
                    v80 = (unsigned int *)(v100 - 4);
                        v81 = __ldrex(v80);
                      while ( __strex(v81 - 1, v80) );
                      v81 = (*v80)--;
                    if ( v81 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v37);
                  v38 = (void *)(v103 - 12);
                  if ( (int *)(v103 - 12) != &dword_28898C0 )
                    v82 = (unsigned int *)(v103 - 4);
                        v83 = __ldrex(v82);
                      while ( __strex(v83 - 1, v82) );
                      v83 = (*v82)--;
                    if ( v83 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v38);
                  v39 = (void *)(v102 - 12);
                  if ( (int *)(v102 - 12) != &dword_28898C0 )
                    v84 = (unsigned int *)(v102 - 4);
                        v85 = __ldrex(v84);
                      while ( __strex(v85 - 1, v84) );
                      v85 = (*v84)--;
                    if ( v85 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v39);
                  v40 = (void *)(v105 - 12);
                  if ( (int *)(v105 - 12) != &dword_28898C0 )
                    v86 = (unsigned int *)(v105 - 4);
                        v87 = __ldrex(v86);
                      while ( __strex(v87 - 1, v86) );
                      v87 = (*v86)--;
                    if ( v87 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v40);
                  v41 = (void *)(v104 - 12);
                  if ( (int *)(v104 - 12) != &dword_28898C0 )
                    v88 = (unsigned int *)(v104 - 4);
                        v89 = __ldrex(v88);
                      while ( __strex(v89 - 1, v88) );
                      v89 = (*v88)--;
                    if ( v89 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v41);
                  v42 = (void *)(v107 - 12);
                  if ( (int *)(v107 - 12) != &dword_28898C0 )
                    v90 = (unsigned int *)(v107 - 4);
                        v91 = __ldrex(v90);
                      while ( __strex(v91 - 1, v90) );
                      v91 = (*v90)--;
                    if ( v91 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v42);
                  v43 = (void *)(v106 - 12);
                  if ( (int *)(v106 - 12) != &dword_28898C0 )
                    v92 = (unsigned int *)(v106 - 4);
                        v93 = __ldrex(v92);
                      while ( __strex(v93 - 1, v92) );
                      v93 = (*v92)--;
                    if ( v93 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v43);
                  v44 = (void *)(v109 - 12);
                  if ( (int *)(v109 - 12) != &dword_28898C0 )
                    v94 = (unsigned int *)(v109 - 4);
                        v95 = __ldrex(v94);
                      while ( __strex(v95 - 1, v94) );
                      v95 = (*v94)--;
                    if ( v95 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v44);
                  v45 = (void *)(v108 - 12);
                  if ( (int *)(v108 - 12) != &dword_28898C0 )
                    v96 = (unsigned int *)(v108 - 4);
                        v97 = __ldrex(v96);
                      while ( __strex(v97 - 1, v96) );
                      v97 = (*v96)--;
                    if ( v97 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v45);
                  v46 = v117;
                  v20 = v116;
                  if ( v116 == v117 )
                    goto LABEL_82;
                  do
                    v61 = (int *)(*(_DWORD *)v20 - 12);
                    if ( v61 != &dword_28898C0 )
                      v59 = (unsigned int *)(*(_DWORD *)v20 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v60 = __ldrex(v59);
                        while ( __strex(v60 - 1, v59) );
                      }
                      else
                        v60 = (*v59)--;
                      if ( v60 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v61);
                    v20 = (char *)v20 + 4;
                  while ( v20 != v46 );
                  goto LABEL_81;
                }
              }
            }
          }
        }
    else if ( ((_BYTE *)v117 - (_BYTE *)v116) >> 2 == 3 )
      v8 = (Json::Value *)Json::Value::operator[]((int)v3, "up");
      if ( Json::Value::isString(v8) == 1 )
        v9 = (Json::Value *)Json::Value::operator[]((int)v3, "down");
        if ( Json::Value::isString(v9) == 1 )
          v10 = (Json::Value *)Json::Value::operator[]((int)v3, "side");
          if ( Json::Value::isString(v10) == 1 )
            v11 = Json::Value::operator[]((int)v3, "up");
            sub_119C884((void **)&v114, (const char *)&unk_257BC67);
            Json::Value::asString(&v115, (int)v11, &v114);
            v12 = Json::Value::operator[]((int)v3, "down");
            sub_119C884((void **)&v112, (const char *)&unk_257BC67);
            Json::Value::asString(&v113, (int)v12, &v112);
            v13 = Json::Value::operator[]((int)v3, "side");
            sub_119C884((void **)&v110, (const char *)&unk_257BC67);
            Json::Value::asString(&v111, (int)v13, &v110);
            BlockGraphics::setCarriedTextureItem((int)v4, &v115, &v113, &v111, &v111, &v111, &v111);
            v14 = (void *)(v111 - 12);
            if ( (int *)(v111 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v111 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
              else
                v63 = (*v62)--;
              if ( v63 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v14);
            v15 = (void *)(v110 - 12);
            if ( (int *)(v110 - 12) != &dword_28898C0 )
              v64 = (unsigned int *)(v110 - 4);
                  v65 = __ldrex(v64);
                while ( __strex(v65 - 1, v64) );
                v65 = (*v64)--;
              if ( v65 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v15);
            v16 = (void *)(v113 - 12);
            if ( (int *)(v113 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)(v113 - 4);
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v16);
            v17 = (void *)(v112 - 12);
            if ( (int *)(v112 - 12) != &dword_28898C0 )
              v68 = (unsigned int *)(v112 - 4);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v17);
            v18 = (void *)(v115 - 12);
            if ( (int *)(v115 - 12) != &dword_28898C0 )
              v70 = (unsigned int *)(v115 - 4);
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
                v71 = (*v70)--;
              if ( v71 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v18);
            v19 = (void *)(v114 - 12);
            if ( (int *)(v114 - 12) != &dword_28898C0 )
              v72 = (unsigned int *)(v114 - 4);
                  v73 = __ldrex(v72);
                while ( __strex(v73 - 1, v72) );
                v73 = (*v72)--;
              if ( v73 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v19);
            v21 = v117;
            v20 = v116;
            if ( v116 == v117 )
              goto LABEL_82;
            do
              v58 = (int *)(*(_DWORD *)v20 - 12);
              if ( v58 != &dword_28898C0 )
                v56 = (unsigned int *)(*(_DWORD *)v20 - 4);
                if ( &pthread_create )
                  __dmb();
                    v57 = __ldrex(v56);
                  while ( __strex(v57 - 1, v56) );
                else
                  v57 = (*v56)--;
                if ( v57 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v58);
              v20 = (char *)v20 + 4;
            while ( v20 != v21 );
LABEL_81:
LABEL_82:
            if ( v20 )
              operator delete(v20);
            return 1;
    v48 = v117;
    v47 = v116;
    if ( v116 != v117 )
      do
        v51 = (int *)(*(_DWORD *)v47 - 12);
        if ( v51 != &dword_28898C0 )
          v49 = (unsigned int *)(*(_DWORD *)v47 - 4);
          if ( &pthread_create )
            __dmb();
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
          else
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v51);
        v47 = (char *)v47 + 4;
      while ( v47 != v48 );
      v47 = v116;
    if ( v47 )
      operator delete(v47);
  return 0;
}


int __fastcall BlockGraphics::chooseRandomTexture(int a1, __int64 *a2)
{
  signed int v4; // r3@1
  int v9; // r2@3
  int v10; // r3@3

  _R12 = a1;
  _R0 = *a2;
  v4 = HIDWORD(_R0) - _R0;
  if ( 1 != (HIDWORD(_R0) - (signed int)_R0) >> 5 )
  {
    if ( v4 < 33 )
    {
LABEL_6:
      LODWORD(_R0) = HIDWORD(_R0) - 32;
    }
    else
      __asm { VMOV            S0, R12 }
      v9 = (v4 >> 5) - 1;
      v10 = 0;
      while ( 1 )
      {
        __asm
        {
          VLDR            S2, [R0]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          break;
        __asm { VSUB.F32        S0, S0, S2 }
        ++v10;
        LODWORD(_R0) = _R0 + 32;
        if ( v10 >= v9 )
          goto LABEL_6;
      }
  }
  return _R0;
}


int __fastcall BlockGraphics::isAlphaTested(BlockGraphics *this)
{
  BlockGraphics *v1; // r1@1
  int result; // r0@1
  int v3; // r2@1
  bool v4; // zf@1
  int v5; // r0@4
  char v6; // r1@4

  v1 = this;
  result = 1;
  v3 = *((_DWORD *)v1 + 4);
  v4 = v3 == 5;
  if ( v3 != 5 )
    v4 = v3 == 8;
  if ( !v4 )
  {
    v5 = *((_BYTE *)v1 + 48);
    v6 = 0;
    if ( v3 == 4 )
      v6 = 1;
    result = (v5 != 0) & (unsigned __int8)v6;
  }
  return result;
}


int *__fastcall BlockGraphics::getTextureItem(int **a1)
{
  int **v1; // r1@1
  int v2; // r4@1
  unsigned int v3; // r0@2
  unsigned int *v4; // r6@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int *v7; // r5@9
  char v8; // r0@11
  unsigned int *v9; // r1@15
  unsigned int v10; // r0@17
  unsigned int *v11; // r6@21
  unsigned int v12; // r0@23

  v1 = a1;
  v2 = dword_27CC824;
  if ( dword_27CC824 )
  {
    v3 = *(_DWORD *)(dword_27CC824 + 4);
    v4 = (unsigned int *)(dword_27CC824 + 4);
    while ( v3 )
    {
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
      {
        v6 = __strex(v3 + 1, v4);
        v3 = v5;
        if ( !v6 )
        {
          __dmb();
          if ( *v4 && BlockGraphics::mTerrainTextureAtlas )
          {
            v7 = (int *)TextureAtlas::getTextureItem(BlockGraphics::mTerrainTextureAtlas, v1);
            goto LABEL_15;
          }
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v2 = 0;
LABEL_11:
  v8 = byte_27CC864;
  __dmb();
  if ( !(v8 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC864) )
    dword_27CC868 = (int)&unk_28898CC;
    *(_DWORD *)algn_27CC86C = 0;
    *(_DWORD *)&algn_27CC86C[4] = 0;
    *(_DWORD *)&algn_27CC86C[8] = 0;
    *(_DWORD *)&algn_27CC86C[12] = 0;
    _cxa_atexit(TextureAtlasItem::~TextureAtlasItem);
    j___cxa_guard_release((unsigned int *)&byte_27CC864);
  v7 = &dword_27CC868;
  if ( v2 )
LABEL_15:
    v9 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return v7;
}


int __fastcall BlockGraphics::getExtraRenderLayers(BlockGraphics *this)
{
  return 0;
}


int __fastcall BlockGraphics::setMapColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 32) = v2;
  *(_DWORD *)(result + 36) = v3;
  *(_DWORD *)(result + 40) = v4;
  *(_DWORD *)(result + 44) = v5;
  return result;
}


int __fastcall BlockGraphics::getTexture(BlockGraphics *this, const BlockPos *a2, int a3, int a4)
{
  char *v4; // r0@1
  int v5; // r2@2
  int v6; // r3@6
  int *v7; // r5@6
  int result; // r0@6
  int v9; // r4@6
  _DWORD *v10; // r4@6
  int v11; // t1@6
  signed int v13; // r3@7
  int v18; // r1@8
  int v19; // r3@8

  v4 = (char *)this + 20 * a3;
  if ( a4 <= -1 )
  {
    v5 = *((_DWORD *)v4 + 23);
    a4 = 0;
  }
  else
    v5 = *(_QWORD *)(v4 + 92);
    if ( -1431655765 * ((signed int)((*(_QWORD *)(v4 + 92) >> 32) - v5) >> 2) <= a4 )
      a4 = 0;
  v6 = 3 * a4;
  v7 = (int *)(v5 + 4 * v6);
  result = *(_DWORD *)(v5 + 4 * v6);
  v9 = v5 + 4 * v6;
  v11 = *(_DWORD *)(v9 + 4);
  v10 = (_DWORD *)(v9 + 4);
  if ( v11 - result != 32 )
    _R1 = BlockPos::randomFloat(a2);
    result = *v7;
    v13 = *v10 - *v7;
    if ( v13 < 33 )
    {
LABEL_11:
      result = *v10 - 32;
    }
    else
      __asm { VMOV            S0, R1 }
      v18 = (v13 >> 5) - 1;
      v19 = 0;
      while ( 1 )
      {
        __asm
        {
          VLDR            S2, [R0]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          break;
        __asm { VSUB.F32        S0, S0, S2 }
        ++v19;
        result += 32;
        if ( v19 >= v18 )
          goto LABEL_11;
      }
  return result;
}


BlockGraphics *__fastcall BlockGraphics::~BlockGraphics(BlockGraphics *this)
{
  BlockGraphics *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  int v12; // r1@6
  void *v13; // r0@6
  int v14; // r1@7
  void *v15; // r0@7
  int v16; // r1@8
  void *v17; // r0@8
  int v18; // r1@9
  void *v19; // r0@9
  int v20; // r1@10
  void *v21; // r0@10
  int v22; // r1@11
  void *v23; // r0@11
  int v24; // r1@12
  void *v25; // r0@12
  unsigned int *v27; // r2@14
  signed int v28; // r1@16
  unsigned int *v29; // r2@18
  signed int v30; // r1@20
  unsigned int *v31; // r2@22
  signed int v32; // r1@24
  unsigned int *v33; // r2@26
  signed int v34; // r1@28
  unsigned int *v35; // r2@30
  signed int v36; // r1@32
  unsigned int *v37; // r2@34
  signed int v38; // r1@36
  unsigned int *v39; // r2@38
  signed int v40; // r1@40
  unsigned int *v41; // r2@42
  signed int v42; // r1@44
  unsigned int *v43; // r2@46
  signed int v44; // r1@48
  unsigned int *v45; // r2@50
  signed int v46; // r1@52
  unsigned int *v47; // r2@54
  signed int v48; // r1@56
  unsigned int *v49; // r2@58
  signed int v50; // r1@60

  v1 = this;
  *(_DWORD *)this = &off_26DAEB4;
  v2 = *((_DWORD *)this + 92);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 91);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v4 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 90);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v6 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 89);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v8 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = *((_DWORD *)v1 + 88);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v10 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = *((_DWORD *)v1 + 87);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v12 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = *((_DWORD *)v1 + 86);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v14 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = *((_DWORD *)v1 + 85);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v16 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = *((_DWORD *)v1 + 84);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v18 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  v20 = *((_DWORD *)v1 + 83);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v20 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = *((_DWORD *)v1 + 82);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v22 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = *((_DWORD *)v1 + 81);
  v25 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v24 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 304));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 284));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 264));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 244));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 224));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 204));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 184));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 164));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 144));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 124));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 104));
  TextureAtlasItem::~TextureAtlasItem((BlockGraphics *)((char *)v1 + 84));
  return v1;
}


signed int __fastcall BlockGraphics::setTextures(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  Json::Value *v3; // r5@1
  BlockGraphics *v4; // r4@1
  void *v5; // r0@3
  void *v6; // r0@4
  Json::Value *v8; // r0@9
  Json::Value *v9; // r0@10
  Json::Value *v10; // r0@11
  void *v11; // r6@12
  void *v12; // r6@12
  void *v13; // r5@12
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  void *v19; // r0@17
  void *v20; // r4@18
  void *v21; // r6@18
  Json::Value *v22; // r0@20
  Json::Value *v23; // r0@21
  Json::Value *v24; // r0@22
  Json::Value *v25; // r0@23
  Json::Value *v26; // r0@24
  Json::Value *v27; // r0@25
  void *v28; // r6@26
  void *v29; // r6@26
  void *v30; // r6@26
  void *v31; // r7@26
  void *v32; // r6@26
  void *v33; // r5@26
  void *v34; // r0@26
  void *v35; // r0@27
  void *v36; // r0@28
  void *v37; // r0@29
  void *v38; // r0@30
  void *v39; // r0@31
  void *v40; // r0@32
  void *v41; // r0@33
  void *v42; // r0@34
  void *v43; // r0@35
  void *v44; // r0@36
  void *v45; // r0@37
  void *v46; // r6@38
  void *v47; // r4@40
  void *v48; // r6@40
  unsigned int *v49; // r2@42
  signed int v50; // r1@44
  int *v51; // r0@50
  unsigned int *v52; // r2@56
  signed int v53; // r1@58
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@71
  signed int v57; // r1@73
  int *v58; // r0@79
  unsigned int *v59; // r2@85
  signed int v60; // r1@87
  int *v61; // r0@93
  unsigned int *v62; // r2@96
  signed int v63; // r1@98
  unsigned int *v64; // r2@100
  signed int v65; // r1@102
  unsigned int *v66; // r2@104
  signed int v67; // r1@106
  unsigned int *v68; // r2@108
  signed int v69; // r1@110
  unsigned int *v70; // r2@112
  signed int v71; // r1@114
  unsigned int *v72; // r2@116
  signed int v73; // r1@118
  unsigned int *v74; // r2@144
  signed int v75; // r1@146
  unsigned int *v76; // r2@148
  signed int v77; // r1@150
  unsigned int *v78; // r2@152
  signed int v79; // r1@154
  unsigned int *v80; // r2@156
  signed int v81; // r1@158
  unsigned int *v82; // r2@160
  signed int v83; // r1@162
  unsigned int *v84; // r2@164
  signed int v85; // r1@166
  unsigned int *v86; // r2@168
  signed int v87; // r1@170
  unsigned int *v88; // r2@172
  signed int v89; // r1@174
  unsigned int *v90; // r2@176
  signed int v91; // r1@178
  unsigned int *v92; // r2@180
  signed int v93; // r1@182
  unsigned int *v94; // r2@184
  signed int v95; // r1@186
  unsigned int *v96; // r2@188
  signed int v97; // r1@190
  int v98; // [sp+14h] [bp-A4h]@26
  int v99; // [sp+18h] [bp-A0h]@26
  int v100; // [sp+20h] [bp-98h]@26
  int v101; // [sp+24h] [bp-94h]@26
  int v102; // [sp+2Ch] [bp-8Ch]@26
  int v103; // [sp+30h] [bp-88h]@26
  int v104; // [sp+38h] [bp-80h]@26
  int v105; // [sp+3Ch] [bp-7Ch]@26
  int v106; // [sp+44h] [bp-74h]@26
  int v107; // [sp+48h] [bp-70h]@26
  int v108; // [sp+50h] [bp-68h]@26
  int v109; // [sp+54h] [bp-64h]@26
  int v110; // [sp+5Ch] [bp-5Ch]@12
  int v111; // [sp+60h] [bp-58h]@12
  int v112; // [sp+68h] [bp-50h]@12
  int v113; // [sp+6Ch] [bp-4Ch]@12
  int v114; // [sp+74h] [bp-44h]@12
  int v115; // [sp+78h] [bp-40h]@12
  void *v116; // [sp+7Ch] [bp-3Ch]@7
  void *v117; // [sp+80h] [bp-38h]@7
  int v118; // [sp+8Ch] [bp-2Ch]@3
  int v119; // [sp+90h] [bp-28h]@3

  v3 = a2;
  v4 = this;
  if ( Json::Value::isNull(a2) )
    return 1;
  if ( Json::Value::isString(v3) == 1 )
  {
    sub_119C884((void **)&v118, (const char *)&unk_257BC67);
    Json::Value::asString(&v119, (int)v3, &v118);
    BlockGraphics::setTextureItem((int)v4, &v119, &v119, &v119, &v119, &v119, &v119);
    v5 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
    {
      v52 = (unsigned int *)(v119 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      }
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v5);
    }
    v6 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v118 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v6);
  }
  if ( Json::Value::isObject(v3) == 1 )
    Json::Value::getMemberNames((Json::Value *)&v116, (int)v3);
    if ( 6 == ((_BYTE *)v117 - (_BYTE *)v116) >> 2 )
      v22 = (Json::Value *)Json::Value::operator[]((int)v3, "up");
      if ( Json::Value::isString(v22) == 1 )
        v23 = (Json::Value *)Json::Value::operator[]((int)v3, "down");
        if ( Json::Value::isString(v23) == 1 )
        {
          v24 = (Json::Value *)Json::Value::operator[]((int)v3, "north");
          if ( Json::Value::isString(v24) == 1 )
          {
            v25 = (Json::Value *)Json::Value::operator[]((int)v3, "south");
            if ( Json::Value::isString(v25) == 1 )
            {
              v26 = (Json::Value *)Json::Value::operator[]((int)v3, "west");
              if ( Json::Value::isString(v26) == 1 )
              {
                v27 = (Json::Value *)Json::Value::operator[]((int)v3, "east");
                if ( Json::Value::isString(v27) == 1 )
                {
                  v28 = Json::Value::operator[]((int)v3, "up");
                  sub_119C884((void **)&v108, (const char *)&unk_257BC67);
                  Json::Value::asString(&v109, (int)v28, &v108);
                  v29 = Json::Value::operator[]((int)v3, "down");
                  sub_119C884((void **)&v106, (const char *)&unk_257BC67);
                  Json::Value::asString(&v107, (int)v29, &v106);
                  v30 = Json::Value::operator[]((int)v3, "north");
                  sub_119C884((void **)&v104, (const char *)&unk_257BC67);
                  Json::Value::asString(&v105, (int)v30, &v104);
                  v31 = Json::Value::operator[]((int)v3, "south");
                  sub_119C884((void **)&v102, (const char *)&unk_257BC67);
                  Json::Value::asString(&v103, (int)v31, &v102);
                  v32 = Json::Value::operator[]((int)v3, "west");
                  sub_119C884((void **)&v100, (const char *)&unk_257BC67);
                  Json::Value::asString(&v101, (int)v32, &v100);
                  v33 = Json::Value::operator[]((int)v3, "east");
                  sub_119C884((void **)&v98, (const char *)&unk_257BC67);
                  Json::Value::asString(&v99, (int)v33, &v98);
                  BlockGraphics::setTextureItem((int)v4, &v109, &v107, &v105, &v103, &v101, &v99);
                  v34 = (void *)(v99 - 12);
                  if ( (int *)(v99 - 12) != &dword_28898C0 )
                  {
                    v74 = (unsigned int *)(v99 - 4);
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
                      j_j_j_j_j__ZdlPv_9_1(v34);
                  }
                  v35 = (void *)(v98 - 12);
                  if ( (int *)(v98 - 12) != &dword_28898C0 )
                    v76 = (unsigned int *)(v98 - 4);
                        v77 = __ldrex(v76);
                      while ( __strex(v77 - 1, v76) );
                      v77 = (*v76)--;
                    if ( v77 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v35);
                  v36 = (void *)(v101 - 12);
                  if ( (int *)(v101 - 12) != &dword_28898C0 )
                    v78 = (unsigned int *)(v101 - 4);
                        v79 = __ldrex(v78);
                      while ( __strex(v79 - 1, v78) );
                      v79 = (*v78)--;
                    if ( v79 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v36);
                  v37 = (void *)(v100 - 12);
                  if ( (int *)(v100 - 12) != &dword_28898C0 )
                    v80 = (unsigned int *)(v100 - 4);
                        v81 = __ldrex(v80);
                      while ( __strex(v81 - 1, v80) );
                      v81 = (*v80)--;
                    if ( v81 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v37);
                  v38 = (void *)(v103 - 12);
                  if ( (int *)(v103 - 12) != &dword_28898C0 )
                    v82 = (unsigned int *)(v103 - 4);
                        v83 = __ldrex(v82);
                      while ( __strex(v83 - 1, v82) );
                      v83 = (*v82)--;
                    if ( v83 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v38);
                  v39 = (void *)(v102 - 12);
                  if ( (int *)(v102 - 12) != &dword_28898C0 )
                    v84 = (unsigned int *)(v102 - 4);
                        v85 = __ldrex(v84);
                      while ( __strex(v85 - 1, v84) );
                      v85 = (*v84)--;
                    if ( v85 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v39);
                  v40 = (void *)(v105 - 12);
                  if ( (int *)(v105 - 12) != &dword_28898C0 )
                    v86 = (unsigned int *)(v105 - 4);
                        v87 = __ldrex(v86);
                      while ( __strex(v87 - 1, v86) );
                      v87 = (*v86)--;
                    if ( v87 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v40);
                  v41 = (void *)(v104 - 12);
                  if ( (int *)(v104 - 12) != &dword_28898C0 )
                    v88 = (unsigned int *)(v104 - 4);
                        v89 = __ldrex(v88);
                      while ( __strex(v89 - 1, v88) );
                      v89 = (*v88)--;
                    if ( v89 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v41);
                  v42 = (void *)(v107 - 12);
                  if ( (int *)(v107 - 12) != &dword_28898C0 )
                    v90 = (unsigned int *)(v107 - 4);
                        v91 = __ldrex(v90);
                      while ( __strex(v91 - 1, v90) );
                      v91 = (*v90)--;
                    if ( v91 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v42);
                  v43 = (void *)(v106 - 12);
                  if ( (int *)(v106 - 12) != &dword_28898C0 )
                    v92 = (unsigned int *)(v106 - 4);
                        v93 = __ldrex(v92);
                      while ( __strex(v93 - 1, v92) );
                      v93 = (*v92)--;
                    if ( v93 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v43);
                  v44 = (void *)(v109 - 12);
                  if ( (int *)(v109 - 12) != &dword_28898C0 )
                    v94 = (unsigned int *)(v109 - 4);
                        v95 = __ldrex(v94);
                      while ( __strex(v95 - 1, v94) );
                      v95 = (*v94)--;
                    if ( v95 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v44);
                  v45 = (void *)(v108 - 12);
                  if ( (int *)(v108 - 12) != &dword_28898C0 )
                    v96 = (unsigned int *)(v108 - 4);
                        v97 = __ldrex(v96);
                      while ( __strex(v97 - 1, v96) );
                      v97 = (*v96)--;
                    if ( v97 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v45);
                  v46 = v117;
                  v20 = v116;
                  if ( v116 == v117 )
                    goto LABEL_82;
                  do
                    v61 = (int *)(*(_DWORD *)v20 - 12);
                    if ( v61 != &dword_28898C0 )
                      v59 = (unsigned int *)(*(_DWORD *)v20 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v60 = __ldrex(v59);
                        while ( __strex(v60 - 1, v59) );
                      }
                      else
                        v60 = (*v59)--;
                      if ( v60 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v61);
                    v20 = (char *)v20 + 4;
                  while ( v20 != v46 );
                  goto LABEL_81;
                }
              }
            }
          }
        }
    else if ( ((_BYTE *)v117 - (_BYTE *)v116) >> 2 == 3 )
      v8 = (Json::Value *)Json::Value::operator[]((int)v3, "up");
      if ( Json::Value::isString(v8) == 1 )
        v9 = (Json::Value *)Json::Value::operator[]((int)v3, "down");
        if ( Json::Value::isString(v9) == 1 )
          v10 = (Json::Value *)Json::Value::operator[]((int)v3, "side");
          if ( Json::Value::isString(v10) == 1 )
            v11 = Json::Value::operator[]((int)v3, "up");
            sub_119C884((void **)&v114, (const char *)&unk_257BC67);
            Json::Value::asString(&v115, (int)v11, &v114);
            v12 = Json::Value::operator[]((int)v3, "down");
            sub_119C884((void **)&v112, (const char *)&unk_257BC67);
            Json::Value::asString(&v113, (int)v12, &v112);
            v13 = Json::Value::operator[]((int)v3, "side");
            sub_119C884((void **)&v110, (const char *)&unk_257BC67);
            Json::Value::asString(&v111, (int)v13, &v110);
            BlockGraphics::setTextureItem((int)v4, &v115, &v113, &v111, &v111, &v111, &v111);
            v14 = (void *)(v111 - 12);
            if ( (int *)(v111 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v111 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
              else
                v63 = (*v62)--;
              if ( v63 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v14);
            v15 = (void *)(v110 - 12);
            if ( (int *)(v110 - 12) != &dword_28898C0 )
              v64 = (unsigned int *)(v110 - 4);
                  v65 = __ldrex(v64);
                while ( __strex(v65 - 1, v64) );
                v65 = (*v64)--;
              if ( v65 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v15);
            v16 = (void *)(v113 - 12);
            if ( (int *)(v113 - 12) != &dword_28898C0 )
              v66 = (unsigned int *)(v113 - 4);
                  v67 = __ldrex(v66);
                while ( __strex(v67 - 1, v66) );
                v67 = (*v66)--;
              if ( v67 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v16);
            v17 = (void *)(v112 - 12);
            if ( (int *)(v112 - 12) != &dword_28898C0 )
              v68 = (unsigned int *)(v112 - 4);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v17);
            v18 = (void *)(v115 - 12);
            if ( (int *)(v115 - 12) != &dword_28898C0 )
              v70 = (unsigned int *)(v115 - 4);
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
                v71 = (*v70)--;
              if ( v71 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v18);
            v19 = (void *)(v114 - 12);
            if ( (int *)(v114 - 12) != &dword_28898C0 )
              v72 = (unsigned int *)(v114 - 4);
                  v73 = __ldrex(v72);
                while ( __strex(v73 - 1, v72) );
                v73 = (*v72)--;
              if ( v73 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v19);
            v21 = v117;
            v20 = v116;
            if ( v116 == v117 )
              goto LABEL_82;
            do
              v58 = (int *)(*(_DWORD *)v20 - 12);
              if ( v58 != &dword_28898C0 )
                v56 = (unsigned int *)(*(_DWORD *)v20 - 4);
                if ( &pthread_create )
                  __dmb();
                    v57 = __ldrex(v56);
                  while ( __strex(v57 - 1, v56) );
                else
                  v57 = (*v56)--;
                if ( v57 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v58);
              v20 = (char *)v20 + 4;
            while ( v20 != v21 );
LABEL_81:
LABEL_82:
            if ( v20 )
              operator delete(v20);
            return 1;
    v48 = v117;
    v47 = v116;
    if ( v116 != v117 )
      do
        v51 = (int *)(*(_DWORD *)v47 - 12);
        if ( v51 != &dword_28898C0 )
          v49 = (unsigned int *)(*(_DWORD *)v47 - 4);
          if ( &pthread_create )
            __dmb();
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
          else
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v51);
        v47 = (char *)v47 + 4;
      while ( v47 != v48 );
      v47 = v116;
    if ( v47 )
      operator delete(v47);
  return 0;
}


unsigned int *__fastcall BlockGraphics::reloadBlockUVs(BlockGraphics *this, TextureAtlas *a2)
{
  BlockGraphics *v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  unsigned int v5; // r1@2
  unsigned int v6; // r2@5
  unsigned int v7; // r3@6
  unsigned int v8; // r1@7
  unsigned int v9; // r6@7
  unsigned int *v10; // r7@15
  int **v11; // r0@22
  int *v12; // r9@25
  int v13; // r1@26
  int v14; // r6@27
  int v15; // r7@29
  int v16; // r0@29
  int v17; // r5@30
  int *v18; // r4@30
  int v19; // r0@31
  int v20; // r5@32
  int *v21; // r4@32

  v2 = this;
  result = &BlockGraphics::mTerrainTextureAtlas;
  v4 = dword_27CC824;
  if ( dword_27CC824 )
  {
    v5 = *(_DWORD *)(dword_27CC824 + 4);
    result = (unsigned int *)(dword_27CC824 + 4);
    while ( v5 )
    {
      __dmb();
      v6 = __ldrex(result);
      if ( v6 == v5 )
      {
        v7 = __strex(v5 + 1, result);
        v5 = v6;
        if ( !v7 )
        {
          __dmb();
          v8 = *result;
          v9 = BlockGraphics::mTerrainTextureAtlas;
          if ( !*result )
            v9 = *result;
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(result);
            while ( __strex(v8 - 1, result) );
          }
          else
            *result = v8 - 1;
          if ( v8 != 1 )
            goto LABEL_37;
          v10 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
              result = (unsigned int *)__ldrex(v10);
            while ( __strex((unsigned int)result - 1, v10) );
            result = (unsigned int *)(*v10)--;
          if ( result != (unsigned int *)1 )
LABEL_37:
            if ( (BlockGraphics *)v9 != v2 )
              return result;
            v11 = BlockGraphics::mBlocks;
            result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
          v12 = *v11;
          do
            v13 = *v12;
            if ( *v12 )
            {
              v14 = 0;
              while ( 1 )
              {
                v15 = *((_BYTE *)&Facing::DIRECTIONS + v14);
                v16 = v13 + 4 * v15;
                if ( *(_DWORD *)(*(_DWORD *)(v16 + 324) - 12) )
                {
                  v17 = v13 + 20 * v15;
                  v18 = BlockGraphics::getTextureItem((int **)(v16 + 324));
                  EntityInteraction::setInteractText((int *)(v17 + 84), v18);
                  *(_DWORD *)(v17 + 88) = v18[1];
                  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
                    v17 + 92,
                    (unsigned __int64 *)v18 + 1);
                  v13 = *v12;
                }
                v19 = v13 + 4 * v15;
                if ( *(_DWORD *)(*(_DWORD *)(v19 + 348) - 12) )
                  v20 = v13 + 20 * v15;
                  v21 = BlockGraphics::getTextureItem((int **)(v19 + 348));
                  EntityInteraction::setInteractText((int *)(v20 + 204), v21);
                  *(_DWORD *)(v20 + 208) = v21[1];
                    v20 + 212,
                    (unsigned __int64 *)v21 + 1);
                if ( ++v14 == 6 )
                  break;
                v13 = *v12;
              }
            }
            ++v12;
            result = &BlockGraphics::mBlocks[256];
          while ( v12 != &BlockGraphics::mBlocks[256] );
          return result;
        }
      }
      else
        __clrex();
    }
  }
  return result;
}


Json::Value *__fastcall BlockGraphics::initBlocks(BlockGraphics *this, ResourcePackManager *a2)
{
  BlockGraphics *v2; // r8@1
  __int64 v3; // kr00_8@1
  int v4; // r5@2
  void *v5; // r0@8
  char *v6; // r0@9
  char *v7; // r0@10
  void *v8; // r0@11
  void *v9; // r0@12
  _BYTE *v10; // r0@13
  void *v11; // r0@13
  _BYTE *v12; // r0@14
  void *v13; // r0@14
  void *v14; // r0@15
  void *v15; // r0@16
  void *v16; // r0@17
  void *v17; // r0@18
  void *v18; // r0@19
  void *v19; // r0@20
  void *v20; // r0@21
  void *v21; // r0@22
  void *v22; // r0@23
  void *v23; // r0@24
  void *v24; // r0@25
  void *v25; // r0@26
  void *v26; // r0@27
  void *v27; // r0@28
  void *v28; // r0@29
  void *v29; // r0@30
  void *v30; // r0@31
  void *v31; // r0@32
  _BYTE *v32; // r0@33
  int v33; // r12@33
  void *v34; // r0@33
  void *v35; // r0@34
  void *v36; // r0@35
  void *v37; // r0@36
  void *v38; // r0@37
  void *v39; // r0@38
  void *v40; // r0@39
  void *v41; // r0@40
  void *v42; // r0@41
  void *v43; // r0@42
  void *v44; // r0@43
  void *v45; // r0@44
  void *v46; // r0@45
  void *v47; // r0@46
  void *v48; // r0@47
  void *v49; // r0@48
  void *v50; // r0@49
  void *v51; // r0@50
  _BYTE *v52; // r0@51
  void *v53; // r0@51
  _BYTE *v54; // r0@52
  void *v55; // r0@52
  void *v56; // r0@53
  void *v57; // r0@54
  _BYTE *v58; // r0@55
  void *v59; // r0@55
  void *v60; // r0@56
  void *v61; // r0@57
  void *v62; // r0@58
  void *v63; // r0@59
  void *v64; // r0@60
  void *v65; // r0@61
  void *v66; // r0@62
  void *v67; // r0@63
  void *v68; // r0@64
  void *v69; // r0@65
  _BYTE *v70; // r0@66
  int v71; // r12@66
  void *v72; // r0@66
  void *v73; // r0@67
  void *v74; // r0@68
  void *v75; // r0@69
  void *v76; // r0@70
  void *v77; // r0@71
  void *v78; // r0@72
  void *v79; // r0@73
  void *v80; // r0@74
  void *v81; // r0@75
  void *v82; // r0@76
  void *v83; // r0@77
  void *v84; // r0@78
  void (*v85)(void); // r3@79
  void *v86; // r0@79
  void *v87; // r0@80
  void (*v88)(void); // r3@81
  void *v89; // r0@81
  void *v90; // r0@82
  void *v91; // r0@83
  void *v92; // r0@84
  void *v93; // r0@85
  void (*v94)(void); // r3@86
  void *v95; // r0@86
  void *v96; // r0@87
  void *v97; // r0@88
  void *v98; // r0@89
  void *v99; // r0@90
  void *v100; // r0@91
  void *v101; // r0@92
  void *v102; // r0@93
  _BYTE *v103; // r4@94
  int v104; // r1@94
  int v105; // r2@94
  int v106; // r3@94
  int v107; // r12@94
  void *v108; // r0@94
  _BYTE *v109; // r0@95
  void *v110; // r0@95
  void *v111; // r0@96
  void *v112; // r0@97
  void *v113; // r0@98
  _BYTE *v114; // r0@99
  void *v115; // r0@99
  void *v116; // r0@100
  void *v117; // r0@101
  void *v118; // r0@102
  void (*v119)(void); // r3@103
  void *v120; // r0@103
  void *v121; // r0@104
  void *v122; // r0@105
  void *v123; // r0@106
  void *v124; // r0@107
  void *v125; // r0@108
  void *v126; // r0@109
  _BYTE *v127; // r0@110
  void *v128; // r0@110
  _BYTE *v129; // r0@111
  void *v130; // r0@111
  void *v131; // r0@112
  void *v132; // r0@113
  _BYTE *v133; // r0@114
  void *v134; // r0@114
  void *v135; // r0@115
  void *v136; // r0@116
  void *v137; // r0@117
  _BYTE *v138; // r4@118
  int v139; // r1@118
  int v140; // r2@118
  int v141; // r3@118
  int v142; // r12@118
  void *v143; // r0@118
  void *v144; // r0@119
  _BYTE *v145; // r0@120
  void *v146; // r0@120
  void *v147; // r0@121
  void *v148; // r0@122
  void *v149; // r0@123
  void *v150; // r0@124
  _BYTE *v151; // r0@125
  void *v152; // r0@125
  void *v153; // r0@126
  void *v154; // r0@127
  void *v155; // r0@128
  void *v156; // r0@129
  void *v157; // r0@130
  void *v158; // r0@131
  void *v159; // r0@132
  _BYTE *v160; // r0@133
  int v161; // r12@133
  void *v162; // r0@133
  void *v163; // r0@134
  void *v164; // r0@135
  void *v165; // r0@136
  void *v166; // r0@137
  void *v167; // r0@138
  void *v168; // r0@139
  void (*v169)(void); // r3@140
  void *v170; // r0@140
  void *v171; // r0@141
  void *v172; // r0@142
  void *v173; // r0@143
  void *v174; // r0@144
  _BYTE *v175; // r0@145
  void *v176; // r0@145
  void *v177; // r0@146
  _BYTE *v178; // r0@147
  void *v179; // r0@147
  void *v180; // r0@148
  void *v181; // r0@149
  void *v182; // r0@150
  void *v183; // r0@151
  void *v184; // r0@152
  void *v185; // r0@153
  void *v186; // r0@154
  void *v187; // r0@155
  void *v188; // r0@156
  void *v189; // r0@157
  void *v190; // r0@158
  void *v191; // r0@159
  void *v192; // r0@160
  void (*v193)(void); // r3@161
  void *v194; // r0@161
  void (*v195)(void); // r3@162
  void *v196; // r0@162
  void *v197; // r0@163
  void *v198; // r0@164
  void *v199; // r0@165
  void *v200; // r0@166
  void *v201; // r0@167
  void (*v202)(void); // r3@168
  void *v203; // r0@168
  _BYTE *v204; // r0@169
  void *v205; // r0@169
  _BYTE *v206; // r0@170
  void *v207; // r0@170
  void *v208; // r0@171
  void *v209; // r0@172
  void *v210; // r0@173
  void *v211; // r0@174
  void *v212; // r0@175
  void *v213; // r0@176
  void *v214; // r0@177
  void *v215; // r0@178
  void *v216; // r0@179
  void *v217; // r0@180
  void *v218; // r0@181
  void *v219; // r0@182
  void *v220; // r0@183
  void *v221; // r0@184
  void *v222; // r0@185
  void *v223; // r0@186
  void *v224; // r0@187
  _BYTE *v225; // r0@188
  void *v226; // r0@188
  void (*v227)(void); // r3@189
  void *v228; // r0@189
  void *v229; // r0@190
  _BYTE *v230; // r0@191
  void *v231; // r0@191
  void *v232; // r0@192
  void *v233; // r0@193
  void *v234; // r0@194
  void *v235; // r0@195
  void (*v236)(void); // r3@196
  void *v237; // r0@196
  void *v238; // r0@197
  void *v239; // r0@198
  void *v240; // r0@199
  void *v241; // r0@200
  void *v242; // r0@201
  void *v243; // r0@202
  void *v244; // r0@203
  void *v245; // r0@204
  void *v246; // r0@205
  void *v247; // r0@206
  void *v248; // r0@207
  void *v249; // r0@208
  void *v250; // r0@209
  void *v251; // r0@210
  void *v252; // r0@211
  void *v253; // r0@212
  void *v254; // r0@213
  void *v255; // r0@214
  void *v256; // r0@215
  void *v257; // r0@216
  void *v258; // r0@217
  void *v259; // r0@218
  void *v260; // r0@219
  void *v261; // r0@220
  void *v262; // r0@221
  void *v263; // r0@222
  void *v264; // r0@223
  void *v265; // r0@224
  void *v266; // r0@225
  void *v267; // r0@226
  void *v268; // r0@227
  void *v269; // r0@228
  void *v270; // r0@229
  void *v271; // r0@230
  void *v272; // r0@231
  void *v273; // r0@232
  void *v274; // r0@233
  void *v275; // r0@234
  void *v276; // r0@235
  _BYTE *v277; // r0@236
  void *v278; // r0@236
  void *v279; // r0@237
  void *v280; // r0@238
  void *v281; // r0@239
  void *v282; // r0@240
  void *v283; // r0@241
  void *v284; // r0@242
  void *v285; // r0@243
  void *v286; // r0@244
  void *v287; // r0@245
  void *v288; // r0@246
  void *v289; // r0@247
  void *v290; // r0@248
  void *v291; // r0@249
  signed int v292; // r6@250
  unsigned int *v293; // r2@251
  signed int v294; // r1@253
  unsigned int *v295; // r2@255
  signed int v296; // r1@257
  int v297; // r9@266
  int v298; // r1@267
  signed int v299; // r0@267
  int v300; // r2@268
  bool v301; // nf@269
  unsigned __int8 v302; // vf@269
  void *v303; // r0@272
  void *v304; // r0@274
  void *v305; // r0@278
  unsigned int *v307; // r2@280
  signed int v308; // r1@282
  unsigned int *v309; // r2@284
  signed int v310; // r1@286
  unsigned int *v311; // r2@288
  signed int v312; // r1@290
  unsigned int *v313; // r2@292
  signed int v314; // r1@294
  unsigned int *v315; // r2@296
  signed int v316; // r1@298
  unsigned int *v317; // r2@300
  signed int v318; // r1@302
  unsigned int *v319; // r2@304
  signed int v320; // r1@306
  unsigned int *v321; // r2@308
  signed int v322; // r1@310
  unsigned int *v323; // r2@312
  signed int v324; // r1@314
  unsigned int *v325; // r2@316
  signed int v326; // r1@318
  unsigned int *v327; // r2@320
  signed int v328; // r1@322
  unsigned int *v329; // r2@324
  signed int v330; // r1@326
  unsigned int *v331; // r2@328
  signed int v332; // r1@330
  unsigned int *v333; // r2@332
  signed int v334; // r1@334
  unsigned int *v335; // r2@336
  signed int v336; // r1@338
  unsigned int *v337; // r2@340
  signed int v338; // r1@342
  unsigned int *v339; // r2@344
  signed int v340; // r1@346
  unsigned int *v341; // r2@348
  signed int v342; // r1@350
  unsigned int *v343; // r2@352
  signed int v344; // r1@354
  unsigned int *v345; // r2@356
  signed int v346; // r1@358
  unsigned int *v347; // r2@360
  signed int v348; // r1@362
  unsigned int *v349; // r2@364
  signed int v350; // r1@366
  unsigned int *v351; // r2@368
  signed int v352; // r1@370
  unsigned int *v353; // r2@372
  signed int v354; // r1@374
  unsigned int *v355; // r2@376
  signed int v356; // r1@378
  unsigned int *v357; // r2@380
  signed int v358; // r1@382
  unsigned int *v359; // r2@384
  signed int v360; // r1@386
  unsigned int *v361; // r2@388
  signed int v362; // r1@390
  unsigned int *v363; // r2@392
  signed int v364; // r1@394
  unsigned int *v365; // r2@396
  signed int v366; // r1@398
  unsigned int *v367; // r2@400
  signed int v368; // r1@402
  unsigned int *v369; // r2@404
  signed int v370; // r1@406
  unsigned int *v371; // r2@408
  signed int v372; // r1@410
  unsigned int *v373; // r2@412
  signed int v374; // r1@414
  unsigned int *v375; // r2@416
  signed int v376; // r1@418
  unsigned int *v377; // r2@420
  signed int v378; // r1@422
  unsigned int *v379; // r2@424
  signed int v380; // r1@426
  unsigned int *v381; // r2@428
  signed int v382; // r1@430
  unsigned int *v383; // r2@432
  signed int v384; // r1@434
  unsigned int *v385; // r2@436
  signed int v386; // r1@438
  unsigned int *v387; // r2@440
  signed int v388; // r1@442
  unsigned int *v389; // r2@444
  signed int v390; // r1@446
  unsigned int *v391; // r2@448
  signed int v392; // r1@450
  unsigned int *v393; // r2@452
  signed int v394; // r1@454
  unsigned int *v395; // r2@456
  signed int v396; // r1@458
  unsigned int *v397; // r2@460
  signed int v398; // r1@462
  unsigned int *v399; // r2@464
  signed int v400; // r1@466
  unsigned int *v401; // r2@468
  signed int v402; // r1@470
  unsigned int *v403; // r2@472
  signed int v404; // r1@474
  unsigned int *v405; // r2@476
  signed int v406; // r1@478
  unsigned int *v407; // r2@480
  signed int v408; // r1@482
  unsigned int *v409; // r2@484
  signed int v410; // r1@486
  unsigned int *v411; // r2@488
  signed int v412; // r1@490
  unsigned int *v413; // r2@492
  signed int v414; // r1@494
  unsigned int *v415; // r2@496
  signed int v416; // r1@498
  unsigned int *v417; // r2@500
  signed int v418; // r1@502
  unsigned int *v419; // r2@504
  signed int v420; // r1@506
  unsigned int *v421; // r2@508
  signed int v422; // r1@510
  unsigned int *v423; // r2@512
  signed int v424; // r1@514
  unsigned int *v425; // r2@516
  signed int v426; // r1@518
  unsigned int *v427; // r2@520
  signed int v428; // r1@522
  unsigned int *v429; // r2@524
  signed int v430; // r1@526
  unsigned int *v431; // r2@528
  signed int v432; // r1@530
  unsigned int *v433; // r2@532
  signed int v434; // r1@534
  unsigned int *v435; // r2@536
  signed int v436; // r1@538
  unsigned int *v437; // r2@540
  signed int v438; // r1@542
  unsigned int *v439; // r2@544
  signed int v440; // r1@546
  unsigned int *v441; // r2@548
  signed int v442; // r1@550
  unsigned int *v443; // r2@552
  signed int v444; // r1@554
  unsigned int *v445; // r2@556
  signed int v446; // r1@558
  unsigned int *v447; // r2@560
  signed int v448; // r1@562
  unsigned int *v449; // r2@564
  signed int v450; // r1@566
  unsigned int *v451; // r2@568
  signed int v452; // r1@570
  unsigned int *v453; // r2@572
  signed int v454; // r1@574
  unsigned int *v455; // r2@576
  signed int v456; // r1@578
  unsigned int *v457; // r2@580
  signed int v458; // r1@582
  unsigned int *v459; // r2@584
  signed int v460; // r1@586
  unsigned int *v461; // r2@588
  signed int v462; // r1@590
  unsigned int *v463; // r2@592
  signed int v464; // r1@594
  unsigned int *v465; // r2@596
  signed int v466; // r1@598
  unsigned int *v467; // r2@600
  signed int v468; // r1@602
  unsigned int *v469; // r2@604
  signed int v470; // r1@606
  unsigned int *v471; // r2@608
  signed int v472; // r1@610
  unsigned int *v473; // r2@612
  signed int v474; // r1@614
  unsigned int *v475; // r2@616
  signed int v476; // r1@618
  unsigned int *v477; // r2@620
  signed int v478; // r1@622
  unsigned int *v479; // r2@624
  signed int v480; // r1@626
  unsigned int *v481; // r2@628
  signed int v482; // r1@630
  unsigned int *v483; // r2@632
  signed int v484; // r1@634
  unsigned int *v485; // r2@636
  signed int v486; // r1@638
  unsigned int *v487; // r2@640
  signed int v488; // r1@642
  unsigned int *v489; // r2@644
  signed int v490; // r1@646
  unsigned int *v491; // r2@648
  signed int v492; // r1@650
  unsigned int *v493; // r2@652
  signed int v494; // r1@654
  unsigned int *v495; // r2@656
  signed int v496; // r1@658
  unsigned int *v497; // r2@660
  signed int v498; // r1@662
  unsigned int *v499; // r2@664
  signed int v500; // r1@666
  unsigned int *v501; // r2@668
  signed int v502; // r1@670
  unsigned int *v503; // r2@672
  signed int v504; // r1@674
  unsigned int *v505; // r2@676
  signed int v506; // r1@678
  unsigned int *v507; // r2@680
  signed int v508; // r1@682
  unsigned int *v509; // r2@684
  signed int v510; // r1@686
  unsigned int *v511; // r2@688
  signed int v512; // r1@690
  unsigned int *v513; // r2@692
  signed int v514; // r1@694
  unsigned int *v515; // r2@696
  signed int v516; // r1@698
  unsigned int *v517; // r2@700
  signed int v518; // r1@702
  unsigned int *v519; // r2@704
  signed int v520; // r1@706
  unsigned int *v521; // r2@708
  signed int v522; // r1@710
  unsigned int *v523; // r2@712
  signed int v524; // r1@714
  unsigned int *v525; // r2@716
  signed int v526; // r1@718
  unsigned int *v527; // r2@720
  signed int v528; // r1@722
  unsigned int *v529; // r2@724
  signed int v530; // r1@726
  unsigned int *v531; // r2@728
  signed int v532; // r1@730
  unsigned int *v533; // r2@732
  signed int v534; // r1@734
  unsigned int *v535; // r2@736
  signed int v536; // r1@738
  unsigned int *v537; // r2@740
  signed int v538; // r1@742
  unsigned int *v539; // r2@744
  signed int v540; // r1@746
  unsigned int *v541; // r2@748
  signed int v542; // r1@750
  unsigned int *v543; // r2@752
  signed int v544; // r1@754
  unsigned int *v545; // r2@756
  signed int v546; // r1@758
  unsigned int *v547; // r2@760
  signed int v548; // r1@762
  unsigned int *v549; // r2@764
  signed int v550; // r1@766
  unsigned int *v551; // r2@768
  signed int v552; // r1@770
  unsigned int *v553; // r2@772
  signed int v554; // r1@774
  unsigned int *v555; // r2@776
  signed int v556; // r1@778
  unsigned int *v557; // r2@780
  signed int v558; // r1@782
  unsigned int *v559; // r2@784
  signed int v560; // r1@786
  unsigned int *v561; // r2@788
  signed int v562; // r1@790
  unsigned int *v563; // r2@792
  signed int v564; // r1@794
  unsigned int *v565; // r2@796
  signed int v566; // r1@798
  unsigned int *v567; // r2@800
  signed int v568; // r1@802
  unsigned int *v569; // r2@804
  signed int v570; // r1@806
  unsigned int *v571; // r2@808
  signed int v572; // r1@810
  unsigned int *v573; // r2@812
  signed int v574; // r1@814
  unsigned int *v575; // r2@816
  signed int v576; // r1@818
  unsigned int *v577; // r2@820
  signed int v578; // r1@822
  unsigned int *v579; // r2@824
  signed int v580; // r1@826
  unsigned int *v581; // r2@828
  signed int v582; // r1@830
  unsigned int *v583; // r2@832
  signed int v584; // r1@834
  unsigned int *v585; // r2@836
  signed int v586; // r1@838
  unsigned int *v587; // r2@840
  signed int v588; // r1@842
  unsigned int *v589; // r2@844
  signed int v590; // r1@846
  unsigned int *v591; // r2@848
  signed int v592; // r1@850
  unsigned int *v593; // r2@852
  signed int v594; // r1@854
  unsigned int *v595; // r2@856
  signed int v596; // r1@858
  unsigned int *v597; // r2@860
  signed int v598; // r1@862
  unsigned int *v599; // r2@864
  signed int v600; // r1@866
  unsigned int *v601; // r2@868
  signed int v602; // r1@870
  unsigned int *v603; // r2@872
  signed int v604; // r1@874
  unsigned int *v605; // r2@876
  signed int v606; // r1@878
  unsigned int *v607; // r2@880
  signed int v608; // r1@882
  unsigned int *v609; // r2@884
  signed int v610; // r1@886
  unsigned int *v611; // r2@888
  signed int v612; // r1@890
  unsigned int *v613; // r2@892
  signed int v614; // r1@894
  unsigned int *v615; // r2@896
  signed int v616; // r1@898
  unsigned int *v617; // r2@900
  signed int v618; // r1@902
  unsigned int *v619; // r2@904
  signed int v620; // r1@906
  unsigned int *v621; // r2@908
  signed int v622; // r1@910
  unsigned int *v623; // r2@912
  signed int v624; // r1@914
  unsigned int *v625; // r2@916
  signed int v626; // r1@918
  unsigned int *v627; // r2@920
  signed int v628; // r1@922
  unsigned int *v629; // r2@924
  signed int v630; // r1@926
  unsigned int *v631; // r2@928
  signed int v632; // r1@930
  unsigned int *v633; // r2@932
  signed int v634; // r1@934
  unsigned int *v635; // r2@936
  signed int v636; // r1@938
  unsigned int *v637; // r2@940
  signed int v638; // r1@942
  unsigned int *v639; // r2@944
  signed int v640; // r1@946
  unsigned int *v641; // r2@948
  signed int v642; // r1@950
  unsigned int *v643; // r2@952
  signed int v644; // r1@954
  unsigned int *v645; // r2@956
  signed int v646; // r1@958
  unsigned int *v647; // r2@960
  signed int v648; // r1@962
  unsigned int *v649; // r2@964
  signed int v650; // r1@966
  unsigned int *v651; // r2@968
  signed int v652; // r1@970
  unsigned int *v653; // r2@972
  signed int v654; // r1@974
  unsigned int *v655; // r2@976
  signed int v656; // r1@978
  unsigned int *v657; // r2@980
  signed int v658; // r1@982
  unsigned int *v659; // r2@984
  signed int v660; // r1@986
  unsigned int *v661; // r2@988
  signed int v662; // r1@990
  unsigned int *v663; // r2@992
  signed int v664; // r1@994
  unsigned int *v665; // r2@996
  signed int v666; // r1@998
  unsigned int *v667; // r2@1000
  signed int v668; // r1@1002
  unsigned int *v669; // r2@1004
  signed int v670; // r1@1006
  unsigned int *v671; // r2@1008
  signed int v672; // r1@1010
  unsigned int *v673; // r2@1012
  signed int v674; // r1@1014
  unsigned int *v675; // r2@1016
  signed int v676; // r1@1018
  unsigned int *v677; // r2@1020
  signed int v678; // r1@1022
  unsigned int *v679; // r2@1024
  signed int v680; // r1@1026
  unsigned int *v681; // r2@1028
  signed int v682; // r1@1030
  unsigned int *v683; // r2@1032
  signed int v684; // r1@1034
  unsigned int *v685; // r2@1036
  signed int v686; // r1@1038
  unsigned int *v687; // r2@1040
  signed int v688; // r1@1042
  unsigned int *v689; // r2@1044
  signed int v690; // r1@1046
  unsigned int *v691; // r2@1048
  signed int v692; // r1@1050
  unsigned int *v693; // r2@1052
  signed int v694; // r1@1054
  unsigned int *v695; // r2@1056
  signed int v696; // r1@1058
  unsigned int *v697; // r2@1060
  signed int v698; // r1@1062
  unsigned int *v699; // r2@1064
  signed int v700; // r1@1066
  unsigned int *v701; // r2@1068
  signed int v702; // r1@1070
  unsigned int *v703; // r2@1072
  signed int v704; // r1@1074
  unsigned int *v705; // r2@1076
  signed int v706; // r1@1078
  unsigned int *v707; // r2@1080
  signed int v708; // r1@1082
  unsigned int *v709; // r2@1084
  signed int v710; // r1@1086
  unsigned int *v711; // r2@1088
  signed int v712; // r1@1090
  unsigned int *v713; // r2@1092
  signed int v714; // r1@1094
  unsigned int *v715; // r2@1096
  signed int v716; // r1@1098
  unsigned int *v717; // r2@1100
  signed int v718; // r1@1102
  unsigned int *v719; // r2@1104
  signed int v720; // r1@1106
  unsigned int *v721; // r2@1108
  signed int v722; // r1@1110
  unsigned int *v723; // r2@1112
  signed int v724; // r1@1114
  unsigned int *v725; // r2@1116
  signed int v726; // r1@1118
  unsigned int *v727; // r2@1120
  signed int v728; // r1@1122
  unsigned int *v729; // r2@1124
  signed int v730; // r1@1126
  unsigned int *v731; // r2@1128
  signed int v732; // r1@1130
  unsigned int *v733; // r2@1132
  signed int v734; // r1@1134
  unsigned int *v735; // r2@1136
  signed int v736; // r1@1138
  unsigned int *v737; // r2@1140
  signed int v738; // r1@1142
  unsigned int *v739; // r2@1144
  signed int v740; // r1@1146
  unsigned int *v741; // r2@1148
  signed int v742; // r1@1150
  unsigned int *v743; // r2@1152
  signed int v744; // r1@1154
  unsigned int *v745; // r2@1156
  signed int v746; // r1@1158
  unsigned int *v747; // r2@1160
  signed int v748; // r1@1162
  unsigned int *v749; // r2@1164
  signed int v750; // r1@1166
  unsigned int *v751; // r2@1168
  signed int v752; // r1@1170
  unsigned int *v753; // r2@1172
  signed int v754; // r1@1174
  unsigned int *v755; // r2@1176
  signed int v756; // r1@1178
  unsigned int *v757; // r2@1180
  signed int v758; // r1@1182
  unsigned int *v759; // r2@1184
  signed int v760; // r1@1186
  unsigned int *v761; // r2@1188
  signed int v762; // r1@1190
  unsigned int *v763; // r2@1192
  signed int v764; // r1@1194
  unsigned int *v765; // r2@1196
  signed int v766; // r1@1198
  unsigned int *v767; // r2@1200
  signed int v768; // r1@1202
  unsigned int *v769; // r2@1204
  signed int v770; // r1@1206
  unsigned int *v771; // r2@1208
  signed int v772; // r1@1210
  unsigned int *v773; // r2@1212
  signed int v774; // r1@1214
  unsigned int *v775; // r2@1216
  signed int v776; // r1@1218
  unsigned int *v777; // r2@1220
  signed int v778; // r1@1222
  unsigned int *v779; // r2@1224
  signed int v780; // r1@1226
  unsigned int *v781; // r2@1228
  signed int v782; // r1@1230
  unsigned int *v783; // r2@1232
  signed int v784; // r1@1234
  unsigned int *v785; // r2@1236
  signed int v786; // r1@1238
  unsigned int *v787; // r2@1240
  signed int v788; // r1@1242
  unsigned int *v789; // r2@1244
  signed int v790; // r1@1246
  unsigned int *v791; // r2@2216
  signed int v792; // r1@2218
  int v793; // [sp+18h] [bp-980h]@251
  int v794; // [sp+1Ch] [bp-97Ch]@255
  int v795; // [sp+24h] [bp-974h]@249
  int v796; // [sp+2Ch] [bp-96Ch]@248
  int v797; // [sp+34h] [bp-964h]@247
  int v798; // [sp+3Ch] [bp-95Ch]@246
  int v799; // [sp+44h] [bp-954h]@245
  int v800; // [sp+4Ch] [bp-94Ch]@244
  int v801; // [sp+54h] [bp-944h]@243
  int v802; // [sp+5Ch] [bp-93Ch]@242
  int v803; // [sp+64h] [bp-934h]@241
  int v804; // [sp+6Ch] [bp-92Ch]@240
  int v805; // [sp+74h] [bp-924h]@239
  int v806; // [sp+7Ch] [bp-91Ch]@238
  int v807; // [sp+84h] [bp-914h]@237
  int v808; // [sp+8Ch] [bp-90Ch]@236
  int v809; // [sp+94h] [bp-904h]@235
  int v810; // [sp+9Ch] [bp-8FCh]@234
  int v811; // [sp+A4h] [bp-8F4h]@233
  int v812; // [sp+ACh] [bp-8ECh]@232
  int v813; // [sp+B4h] [bp-8E4h]@231
  int v814; // [sp+BCh] [bp-8DCh]@230
  int v815; // [sp+C4h] [bp-8D4h]@229
  int v816; // [sp+CCh] [bp-8CCh]@228
  int v817; // [sp+D4h] [bp-8C4h]@227
  int v818; // [sp+DCh] [bp-8BCh]@226
  int v819; // [sp+E4h] [bp-8B4h]@225
  int v820; // [sp+ECh] [bp-8ACh]@224
  int v821; // [sp+F4h] [bp-8A4h]@223
  int v822; // [sp+FCh] [bp-89Ch]@222
  int v823; // [sp+104h] [bp-894h]@221
  int v824; // [sp+10Ch] [bp-88Ch]@220
  int v825; // [sp+114h] [bp-884h]@219
  int v826; // [sp+11Ch] [bp-87Ch]@218
  int v827; // [sp+124h] [bp-874h]@217
  int v828; // [sp+12Ch] [bp-86Ch]@216
  int v829; // [sp+134h] [bp-864h]@215
  int v830; // [sp+13Ch] [bp-85Ch]@214
  int v831; // [sp+144h] [bp-854h]@213
  int v832; // [sp+14Ch] [bp-84Ch]@212
  int v833; // [sp+154h] [bp-844h]@211
  int v834; // [sp+15Ch] [bp-83Ch]@210
  int v835; // [sp+164h] [bp-834h]@209
  int v836; // [sp+16Ch] [bp-82Ch]@208
  int v837; // [sp+174h] [bp-824h]@207
  int v838; // [sp+17Ch] [bp-81Ch]@206
  int v839; // [sp+184h] [bp-814h]@205
  int v840; // [sp+18Ch] [bp-80Ch]@204
  int v841; // [sp+194h] [bp-804h]@203
  int v842; // [sp+19Ch] [bp-7FCh]@202
  int v843; // [sp+1A4h] [bp-7F4h]@201
  int v844; // [sp+1ACh] [bp-7ECh]@200
  int v845; // [sp+1B4h] [bp-7E4h]@199
  int v846; // [sp+1BCh] [bp-7DCh]@198
  int v847; // [sp+1C4h] [bp-7D4h]@197
  int v848; // [sp+1C8h] [bp-7D0h]@196
  signed int v849; // [sp+1CCh] [bp-7CCh]@196
  signed int v850; // [sp+1D0h] [bp-7C8h]@196
  int v851; // [sp+1D4h] [bp-7C4h]@196
  int v852; // [sp+1D8h] [bp-7C0h]@196
  int v853; // [sp+1DCh] [bp-7BCh]@196
  int v854; // [sp+1E4h] [bp-7B4h]@196
  int v855; // [sp+1ECh] [bp-7ACh]@195
  int v856; // [sp+1F4h] [bp-7A4h]@194
  int v857; // [sp+1FCh] [bp-79Ch]@193
  int v858; // [sp+204h] [bp-794h]@192
  int v859; // [sp+20Ch] [bp-78Ch]@191
  int v860; // [sp+214h] [bp-784h]@190
  int v861; // [sp+218h] [bp-780h]@189
  signed int v862; // [sp+21Ch] [bp-77Ch]@189
  signed int v863; // [sp+220h] [bp-778h]@189
  int v864; // [sp+224h] [bp-774h]@189
  signed int v865; // [sp+228h] [bp-770h]@189
  signed int v866; // [sp+22Ch] [bp-76Ch]@189
  int v867; // [sp+234h] [bp-764h]@189
  int v868; // [sp+23Ch] [bp-75Ch]@188
  int v869; // [sp+244h] [bp-754h]@187
  int v870; // [sp+24Ch] [bp-74Ch]@186
  int v871; // [sp+254h] [bp-744h]@185
  int v872; // [sp+25Ch] [bp-73Ch]@184
  int v873; // [sp+264h] [bp-734h]@183
  int v874; // [sp+26Ch] [bp-72Ch]@182
  int v875; // [sp+274h] [bp-724h]@181
  int v876; // [sp+27Ch] [bp-71Ch]@180
  int v877; // [sp+284h] [bp-714h]@179
  int v878; // [sp+28Ch] [bp-70Ch]@178
  int v879; // [sp+294h] [bp-704h]@177
  int v880; // [sp+29Ch] [bp-6FCh]@176
  int v881; // [sp+2A4h] [bp-6F4h]@175
  int v882; // [sp+2ACh] [bp-6ECh]@174
  int v883; // [sp+2B4h] [bp-6E4h]@173
  int v884; // [sp+2BCh] [bp-6DCh]@172
  int v885; // [sp+2C4h] [bp-6D4h]@171
  int v886; // [sp+2CCh] [bp-6CCh]@170
  int v887; // [sp+2D4h] [bp-6C4h]@169
  int v888; // [sp+2D8h] [bp-6C0h]@168
  signed int v889; // [sp+2DCh] [bp-6BCh]@168
  signed int v890; // [sp+2E0h] [bp-6B8h]@168
  int v891; // [sp+2E4h] [bp-6B4h]@168
  int v892; // [sp+2E8h] [bp-6B0h]@168
  int v893; // [sp+2ECh] [bp-6ACh]@168
  int v894; // [sp+2F4h] [bp-6A4h]@168
  int v895; // [sp+2FCh] [bp-69Ch]@167
  int v896; // [sp+304h] [bp-694h]@166
  int v897; // [sp+30Ch] [bp-68Ch]@165
  int v898; // [sp+314h] [bp-684h]@164
  int v899; // [sp+31Ch] [bp-67Ch]@163
  int v900; // [sp+320h] [bp-678h]@162
  signed int v901; // [sp+324h] [bp-674h]@162
  signed int v902; // [sp+328h] [bp-670h]@162
  int v903; // [sp+32Ch] [bp-66Ch]@162
  signed int v904; // [sp+330h] [bp-668h]@162
  signed int v905; // [sp+334h] [bp-664h]@162
  int v906; // [sp+33Ch] [bp-65Ch]@162
  int v907; // [sp+340h] [bp-658h]@161
  signed int v908; // [sp+344h] [bp-654h]@161
  signed int v909; // [sp+348h] [bp-650h]@161
  int v910; // [sp+34Ch] [bp-64Ch]@161
  signed int v911; // [sp+350h] [bp-648h]@161
  signed int v912; // [sp+354h] [bp-644h]@161
  int v913; // [sp+35Ch] [bp-63Ch]@161
  int v914; // [sp+364h] [bp-634h]@160
  int v915; // [sp+36Ch] [bp-62Ch]@159
  int v916; // [sp+374h] [bp-624h]@158
  int v917; // [sp+37Ch] [bp-61Ch]@157
  int v918; // [sp+384h] [bp-614h]@156
  int v919; // [sp+38Ch] [bp-60Ch]@155
  int v920; // [sp+394h] [bp-604h]@154
  int v921; // [sp+39Ch] [bp-5FCh]@153
  int v922; // [sp+3A4h] [bp-5F4h]@152
  int v923; // [sp+3ACh] [bp-5ECh]@151
  int v924; // [sp+3B4h] [bp-5E4h]@150
  int v925; // [sp+3BCh] [bp-5DCh]@149
  int v926; // [sp+3C4h] [bp-5D4h]@148
  int v927; // [sp+3CCh] [bp-5CCh]@147
  int v928; // [sp+3D4h] [bp-5C4h]@146
  int v929; // [sp+3DCh] [bp-5BCh]@145
  int v930; // [sp+3E4h] [bp-5B4h]@144
  int v931; // [sp+3ECh] [bp-5ACh]@143
  int v932; // [sp+3F4h] [bp-5A4h]@142
  int v933; // [sp+3FCh] [bp-59Ch]@141
  int v934; // [sp+400h] [bp-598h]@140
  int v935; // [sp+404h] [bp-594h]@140
  int v936; // [sp+408h] [bp-590h]@140
  int v937; // [sp+40Ch] [bp-58Ch]@140
  int v938; // [sp+410h] [bp-588h]@140
  int v939; // [sp+414h] [bp-584h]@140
  int v940; // [sp+41Ch] [bp-57Ch]@140
  int v941; // [sp+424h] [bp-574h]@139
  int v942; // [sp+42Ch] [bp-56Ch]@138
  int v943; // [sp+434h] [bp-564h]@137
  int v944; // [sp+43Ch] [bp-55Ch]@136
  int v945; // [sp+444h] [bp-554h]@135
  int v946; // [sp+44Ch] [bp-54Ch]@134
  int v947; // [sp+454h] [bp-544h]@133
  int v948; // [sp+45Ch] [bp-53Ch]@132
  int v949; // [sp+464h] [bp-534h]@131
  int v950; // [sp+46Ch] [bp-52Ch]@130
  int v951; // [sp+474h] [bp-524h]@129
  int v952; // [sp+47Ch] [bp-51Ch]@128
  int v953; // [sp+484h] [bp-514h]@127
  int v954; // [sp+48Ch] [bp-50Ch]@126
  int v955; // [sp+494h] [bp-504h]@125
  int v956; // [sp+49Ch] [bp-4FCh]@124
  int v957; // [sp+4A4h] [bp-4F4h]@123
  int v958; // [sp+4ACh] [bp-4ECh]@122
  int v959; // [sp+4B4h] [bp-4E4h]@121
  int v960; // [sp+4BCh] [bp-4DCh]@120
  int v961; // [sp+4C4h] [bp-4D4h]@119
  char v962; // [sp+4C8h] [bp-4D0h]@118
  int v963; // [sp+4CCh] [bp-4CCh]@118
  int v964; // [sp+4D0h] [bp-4C8h]@118
  int v965; // [sp+4D4h] [bp-4C4h]@118
  int v966; // [sp+4DCh] [bp-4BCh]@118
  int v967; // [sp+4E4h] [bp-4B4h]@117
  int v968; // [sp+4ECh] [bp-4ACh]@116
  int v969; // [sp+4F4h] [bp-4A4h]@115
  int v970; // [sp+4FCh] [bp-49Ch]@114
  int v971; // [sp+504h] [bp-494h]@113
  int v972; // [sp+50Ch] [bp-48Ch]@112
  int v973; // [sp+514h] [bp-484h]@111
  int v974; // [sp+51Ch] [bp-47Ch]@110
  int v975; // [sp+524h] [bp-474h]@109
  int v976; // [sp+52Ch] [bp-46Ch]@108
  int v977; // [sp+534h] [bp-464h]@107
  int v978; // [sp+53Ch] [bp-45Ch]@106
  int v979; // [sp+544h] [bp-454h]@105
  int v980; // [sp+54Ch] [bp-44Ch]@104
  int v981; // [sp+550h] [bp-448h]@103
  int v982; // [sp+554h] [bp-444h]@103
  int v983; // [sp+558h] [bp-440h]@103
  int v984; // [sp+55Ch] [bp-43Ch]@103
  int v985; // [sp+560h] [bp-438h]@103
  int v986; // [sp+564h] [bp-434h]@103
  int v987; // [sp+56Ch] [bp-42Ch]@103
  int v988; // [sp+574h] [bp-424h]@102
  int v989; // [sp+57Ch] [bp-41Ch]@101
  int v990; // [sp+584h] [bp-414h]@100
  int v991; // [sp+58Ch] [bp-40Ch]@99
  int v992; // [sp+594h] [bp-404h]@98
  int v993; // [sp+59Ch] [bp-3FCh]@97
  int v994; // [sp+5A4h] [bp-3F4h]@96
  int v995; // [sp+5ACh] [bp-3ECh]@95
  char v996; // [sp+5B0h] [bp-3E8h]@94
  int v997; // [sp+5B4h] [bp-3E4h]@94
  int v998; // [sp+5B8h] [bp-3E0h]@94
  int v999; // [sp+5BCh] [bp-3DCh]@94
  int v1000; // [sp+5C8h] [bp-3D0h]@94
  int v1001; // [sp+5D0h] [bp-3C8h]@93
  int v1002; // [sp+5D8h] [bp-3C0h]@92
  int v1003; // [sp+5E0h] [bp-3B8h]@91
  int v1004; // [sp+5E8h] [bp-3B0h]@90
  int v1005; // [sp+5F0h] [bp-3A8h]@89
  int v1006; // [sp+5F8h] [bp-3A0h]@88
  int v1007; // [sp+600h] [bp-398h]@87
  int v1008; // [sp+604h] [bp-394h]@86
  int v1009; // [sp+608h] [bp-390h]@86
  int v1010; // [sp+60Ch] [bp-38Ch]@86
  int v1011; // [sp+610h] [bp-388h]@86
  int v1012; // [sp+614h] [bp-384h]@86
  int v1013; // [sp+618h] [bp-380h]@86
  int v1014; // [sp+620h] [bp-378h]@86
  int v1015; // [sp+628h] [bp-370h]@85
  int v1016; // [sp+630h] [bp-368h]@84
  int v1017; // [sp+638h] [bp-360h]@83
  int v1018; // [sp+640h] [bp-358h]@82
  int v1019; // [sp+644h] [bp-354h]@81
  int v1020; // [sp+648h] [bp-350h]@81
  int v1021; // [sp+64Ch] [bp-34Ch]@81
  int v1022; // [sp+650h] [bp-348h]@81
  int v1023; // [sp+654h] [bp-344h]@81
  int v1024; // [sp+658h] [bp-340h]@81
  int v1025; // [sp+660h] [bp-338h]@81
  int v1026; // [sp+668h] [bp-330h]@80
  int v1027; // [sp+66Ch] [bp-32Ch]@79
  int v1028; // [sp+670h] [bp-328h]@79
  int v1029; // [sp+674h] [bp-324h]@79
  int v1030; // [sp+678h] [bp-320h]@79
  int v1031; // [sp+67Ch] [bp-31Ch]@79
  int v1032; // [sp+680h] [bp-318h]@79
  int v1033; // [sp+688h] [bp-310h]@79
  int v1034; // [sp+690h] [bp-308h]@78
  int v1035; // [sp+698h] [bp-300h]@77
  int v1036; // [sp+6A0h] [bp-2F8h]@76
  int v1037; // [sp+6A8h] [bp-2F0h]@75
  int v1038; // [sp+6B0h] [bp-2E8h]@74
  int v1039; // [sp+6B8h] [bp-2E0h]@73
  int v1040; // [sp+6C0h] [bp-2D8h]@72
  int v1041; // [sp+6C8h] [bp-2D0h]@71
  int v1042; // [sp+6D0h] [bp-2C8h]@70
  int v1043; // [sp+6D8h] [bp-2C0h]@69
  int v1044; // [sp+6E0h] [bp-2B8h]@68
  int v1045; // [sp+6E8h] [bp-2B0h]@67
  int v1046; // [sp+6F0h] [bp-2A8h]@66
  int v1047; // [sp+6F8h] [bp-2A0h]@65
  int v1048; // [sp+700h] [bp-298h]@64
  int v1049; // [sp+708h] [bp-290h]@63
  int v1050; // [sp+710h] [bp-288h]@62
  int v1051; // [sp+718h] [bp-280h]@61
  int v1052; // [sp+720h] [bp-278h]@60
  int v1053; // [sp+728h] [bp-270h]@59
  int v1054; // [sp+730h] [bp-268h]@58
  int v1055; // [sp+738h] [bp-260h]@57
  int v1056; // [sp+740h] [bp-258h]@56
  int v1057; // [sp+748h] [bp-250h]@55
  int v1058; // [sp+750h] [bp-248h]@54
  int v1059; // [sp+758h] [bp-240h]@53
  int v1060; // [sp+760h] [bp-238h]@52
  int v1061; // [sp+768h] [bp-230h]@51
  int v1062; // [sp+770h] [bp-228h]@50
  int v1063; // [sp+778h] [bp-220h]@49
  int v1064; // [sp+780h] [bp-218h]@48
  int v1065; // [sp+788h] [bp-210h]@47
  int v1066; // [sp+790h] [bp-208h]@46
  int v1067; // [sp+798h] [bp-200h]@45
  int v1068; // [sp+7A0h] [bp-1F8h]@44
  int v1069; // [sp+7A8h] [bp-1F0h]@43
  int v1070; // [sp+7B0h] [bp-1E8h]@42
  int v1071; // [sp+7B8h] [bp-1E0h]@41
  int v1072; // [sp+7C0h] [bp-1D8h]@40
  int v1073; // [sp+7C8h] [bp-1D0h]@39
  int v1074; // [sp+7D0h] [bp-1C8h]@38
  int v1075; // [sp+7D8h] [bp-1C0h]@37
  int v1076; // [sp+7E0h] [bp-1B8h]@36
  int v1077; // [sp+7E8h] [bp-1B0h]@35
  int v1078; // [sp+7F0h] [bp-1A8h]@34
  int v1079; // [sp+7F8h] [bp-1A0h]@33
  int v1080; // [sp+800h] [bp-198h]@32
  int v1081; // [sp+808h] [bp-190h]@31
  int v1082; // [sp+810h] [bp-188h]@30
  int v1083; // [sp+818h] [bp-180h]@29
  int v1084; // [sp+820h] [bp-178h]@28
  int v1085; // [sp+828h] [bp-170h]@27
  int v1086; // [sp+830h] [bp-168h]@26
  int v1087; // [sp+838h] [bp-160h]@25
  int v1088; // [sp+840h] [bp-158h]@24
  int v1089; // [sp+848h] [bp-150h]@23
  int v1090; // [sp+850h] [bp-148h]@22
  int v1091; // [sp+858h] [bp-140h]@21
  int v1092; // [sp+860h] [bp-138h]@20
  int v1093; // [sp+868h] [bp-130h]@19
  int v1094; // [sp+870h] [bp-128h]@18
  int v1095; // [sp+878h] [bp-120h]@17
  int v1096; // [sp+880h] [bp-118h]@16
  int v1097; // [sp+888h] [bp-110h]@15
  int v1098; // [sp+890h] [bp-108h]@14
  int v1099; // [sp+898h] [bp-100h]@13
  int v1100; // [sp+8A0h] [bp-F8h]@12
  int v1101; // [sp+8A8h] [bp-F0h]@11
  char *v1102; // [sp+8B0h] [bp-E8h]@9
  char *v1103; // [sp+8B4h] [bp-E4h]@9
  int v1104; // [sp+8B8h] [bp-E0h]@9
  char v1105; // [sp+8BCh] [bp-DCh]@6
  void (*v1106)(void); // [sp+8C4h] [bp-D4h]@6
  int v1107; // [sp+8D0h] [bp-C8h]@6
  void **v1108; // [sp+8D4h] [bp-C4h]@6
  int v1109; // [sp+8D8h] [bp-C0h]@278
  void (*v1110)(void); // [sp+8E8h] [bp-B0h]@276
  char v1111; // [sp+8F0h] [bp-A8h]@6
  char v1112; // [sp+960h] [bp-38h]@6

  v2 = this;
  v3 = *(_QWORD *)&BlockGraphics::mOwnedBlocks;
  if ( dword_27CC82C != BlockGraphics::mOwnedBlocks )
  {
    v4 = BlockGraphics::mOwnedBlocks;
    do
    {
      if ( *(_DWORD *)v4 )
        (*(void (**)(void))(**(_DWORD **)v4 + 4))();
      *(_DWORD *)v4 = 0;
      v4 += 4;
    }
    while ( HIDWORD(v3) != v4 );
  }
  dword_27CC82C = v3;
  _aeabi_memclr8(BlockGraphics::mBlocks, 1024);
  Json::Value::Value(&v1112, 0);
  Json::Reader::Reader((Json::Reader *)&v1111);
  sub_119C884((void **)&v1107, "blocks.json");
  v1106 = 0;
  JsonMergeStrategy::JsonMergeStrategy((int)&v1108, &v1107, (int)&v1112, (int)&v1105);
  if ( v1106 )
    v1106();
  v5 = (void *)(v1107 - 12);
  if ( (int *)(v1107 - 12) != &dword_28898C0 )
    v307 = (unsigned int *)(v1107 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v308 = __ldrex(v307);
      while ( __strex(v308 - 1, v307) );
    else
      v308 = (*v307)--;
    if ( v308 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  sub_119C884((void **)&v1102, "blocks.json");
  v1103 = v1102;
  v1102 = (char *)&unk_28898CC;
  v1104 = 0;
  ResourcePackManager::loadAllVersionsOf((int)v2);
  v6 = v1103 - 12;
  if ( (int *)(v1103 - 12) != &dword_28898C0 )
    v309 = (unsigned int *)(v1103 - 4);
        v310 = __ldrex(v309);
      while ( __strex(v310 - 1, v309) );
      v310 = (*v309)--;
    if ( v310 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = v1102 - 12;
  if ( (int *)(v1102 - 12) != &dword_28898C0 )
    v311 = (unsigned int *)(v1102 - 4);
        v312 = __ldrex(v311);
      while ( __strex(v312 - 1, v311) );
      v312 = (*v311)--;
    if ( v312 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v1101, "air");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1101);
  v8 = (void *)(v1101 - 12);
  if ( (int *)(v1101 - 12) != &dword_28898C0 )
    v313 = (unsigned int *)(v1101 - 4);
        v314 = __ldrex(v313);
      while ( __strex(v314 - 1, v313) );
      v314 = (*v313)--;
    if ( v314 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v1100, "stone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1100);
  v9 = (void *)(v1100 - 12);
  if ( (int *)(v1100 - 12) != &dword_28898C0 )
    v315 = (unsigned int *)(v1100 - 4);
        v316 = __ldrex(v315);
      while ( __strex(v316 - 1, v315) );
      v316 = (*v315)--;
    if ( v316 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  sub_119C884((void **)&v1099, "grass");
  v10 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1099);
  *((_DWORD *)v10 + 8) = 1056898816;
  *((_DWORD *)v10 + 9) = 1060287155;
  *((_DWORD *)v10 + 10) = 1046536418;
  *((_DWORD *)v10 + 11) = 0;
  v11 = (void *)(v1099 - 12);
  if ( (int *)(v1099 - 12) != &dword_28898C0 )
    v317 = (unsigned int *)(v1099 - 4);
        v318 = __ldrex(v317);
      while ( __strex(v318 - 1, v317) );
      v318 = (*v317)--;
    if ( v318 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v1098, "dirt");
  v12 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1098);
  *((_DWORD *)v12 + 8) = 1058510744;
  *((_DWORD *)v12 + 9) = 1054530268;
  *((_DWORD *)v12 + 10) = 1050319515;
  *((_DWORD *)v12 + 11) = 0;
  v13 = (void *)(v1098 - 12);
  if ( (int *)(v1098 - 12) != &dword_28898C0 )
    v319 = (unsigned int *)(v1098 - 4);
        v320 = __ldrex(v319);
      while ( __strex(v320 - 1, v319) );
      v320 = (*v319)--;
    if ( v320 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v1097, "cobblestone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1097);
  v14 = (void *)(v1097 - 12);
  if ( (int *)(v1097 - 12) != &dword_28898C0 )
    v321 = (unsigned int *)(v1097 - 4);
        v322 = __ldrex(v321);
      while ( __strex(v322 - 1, v321) );
      v322 = (*v321)--;
    if ( v322 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v1096, "planks");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1096);
  v15 = (void *)(v1096 - 12);
  if ( (int *)(v1096 - 12) != &dword_28898C0 )
    v323 = (unsigned int *)(v1096 - 4);
        v324 = __ldrex(v323);
      while ( __strex(v324 - 1, v323) );
      v324 = (*v323)--;
    if ( v324 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v1095, "sapling");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1095);
  v16 = (void *)(v1095 - 12);
  if ( (int *)(v1095 - 12) != &dword_28898C0 )
    v325 = (unsigned int *)(v1095 - 4);
        v326 = __ldrex(v325);
      while ( __strex(v326 - 1, v325) );
      v326 = (*v325)--;
    if ( v326 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v1094, "bedrock");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1094);
  v17 = (void *)(v1094 - 12);
  if ( (int *)(v1094 - 12) != &dword_28898C0 )
    v327 = (unsigned int *)(v1094 - 4);
        v328 = __ldrex(v327);
      while ( __strex(v328 - 1, v327) );
      v328 = (*v327)--;
    if ( v328 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v1093, "flowing_water");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1093);
  v18 = (void *)(v1093 - 12);
  if ( (int *)(v1093 - 12) != &dword_28898C0 )
    v329 = (unsigned int *)(v1093 - 4);
        v330 = __ldrex(v329);
      while ( __strex(v330 - 1, v329) );
      v330 = (*v329)--;
    if ( v330 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v1092, "water");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1092);
  v19 = (void *)(v1092 - 12);
  if ( (int *)(v1092 - 12) != &dword_28898C0 )
    v331 = (unsigned int *)(v1092 - 4);
        v332 = __ldrex(v331);
      while ( __strex(v332 - 1, v331) );
      v332 = (*v331)--;
    if ( v332 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v1091, "flowing_lava");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1091);
  v20 = (void *)(v1091 - 12);
  if ( (int *)(v1091 - 12) != &dword_28898C0 )
    v333 = (unsigned int *)(v1091 - 4);
        v334 = __ldrex(v333);
      while ( __strex(v334 - 1, v333) );
      v334 = (*v333)--;
    if ( v334 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v1090, "lava");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1090);
  v21 = (void *)(v1090 - 12);
  if ( (int *)(v1090 - 12) != &dword_28898C0 )
    v335 = (unsigned int *)(v1090 - 4);
        v336 = __ldrex(v335);
      while ( __strex(v336 - 1, v335) );
      v336 = (*v335)--;
    if ( v336 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v1089, "sand");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1089);
  v22 = (void *)(v1089 - 12);
  if ( (int *)(v1089 - 12) != &dword_28898C0 )
    v337 = (unsigned int *)(v1089 - 4);
        v338 = __ldrex(v337);
      while ( __strex(v338 - 1, v337) );
      v338 = (*v337)--;
    if ( v338 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v1088, "gravel");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1088);
  v23 = (void *)(v1088 - 12);
  if ( (int *)(v1088 - 12) != &dword_28898C0 )
    v339 = (unsigned int *)(v1088 - 4);
        v340 = __ldrex(v339);
      while ( __strex(v340 - 1, v339) );
      v340 = (*v339)--;
    if ( v340 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  sub_119C884((void **)&v1087, "gold_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1087);
  v24 = (void *)(v1087 - 12);
  if ( (int *)(v1087 - 12) != &dword_28898C0 )
    v341 = (unsigned int *)(v1087 - 4);
        v342 = __ldrex(v341);
      while ( __strex(v342 - 1, v341) );
      v342 = (*v341)--;
    if ( v342 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  sub_119C884((void **)&v1086, "iron_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1086);
  v25 = (void *)(v1086 - 12);
  if ( (int *)(v1086 - 12) != &dword_28898C0 )
    v343 = (unsigned int *)(v1086 - 4);
        v344 = __ldrex(v343);
      while ( __strex(v344 - 1, v343) );
      v344 = (*v343)--;
    if ( v344 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  sub_119C884((void **)&v1085, "coal_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1085);
  v26 = (void *)(v1085 - 12);
  if ( (int *)(v1085 - 12) != &dword_28898C0 )
    v345 = (unsigned int *)(v1085 - 4);
        v346 = __ldrex(v345);
      while ( __strex(v346 - 1, v345) );
      v346 = (*v345)--;
    if ( v346 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  sub_119C884((void **)&v1084, "log");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1084);
  v27 = (void *)(v1084 - 12);
  if ( (int *)(v1084 - 12) != &dword_28898C0 )
    v347 = (unsigned int *)(v1084 - 4);
        v348 = __ldrex(v347);
      while ( __strex(v348 - 1, v347) );
      v348 = (*v347)--;
    if ( v348 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119C884((void **)&v1083, "leaves");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1083);
  v28 = (void *)(v1083 - 12);
  if ( (int *)(v1083 - 12) != &dword_28898C0 )
    v349 = (unsigned int *)(v1083 - 4);
        v350 = __ldrex(v349);
      while ( __strex(v350 - 1, v349) );
      v350 = (*v349)--;
    if ( v350 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  sub_119C884((void **)&v1082, "sponge");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1082);
  v29 = (void *)(v1082 - 12);
  if ( (int *)(v1082 - 12) != &dword_28898C0 )
    v351 = (unsigned int *)(v1082 - 4);
        v352 = __ldrex(v351);
      while ( __strex(v352 - 1, v351) );
      v352 = (*v351)--;
    if ( v352 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119C884((void **)&v1081, "glass");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1081);
  v30 = (void *)(v1081 - 12);
  if ( (int *)(v1081 - 12) != &dword_28898C0 )
    v353 = (unsigned int *)(v1081 - 4);
        v354 = __ldrex(v353);
      while ( __strex(v354 - 1, v353) );
      v354 = (*v353)--;
    if ( v354 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  sub_119C884((void **)&v1080, "lapis_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1080);
  v31 = (void *)(v1080 - 12);
  if ( (int *)(v1080 - 12) != &dword_28898C0 )
    v355 = (unsigned int *)(v1080 - 4);
        v356 = __ldrex(v355);
      while ( __strex(v356 - 1, v355) );
      v356 = (*v355)--;
    if ( v356 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  sub_119C884((void **)&v1079, "lapis_block");
  v32 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1079);
  v33 = (int)(v32 + 32);
  *(_DWORD *)v33 = 1049924757;
  *(_DWORD *)(v33 + 4) = 1056997505;
  *(_DWORD *)(v33 + 8) = 1065353216;
  *((_DWORD *)v32 + 11) = 0;
  v34 = (void *)(v1079 - 12);
  if ( (int *)(v1079 - 12) != &dword_28898C0 )
    v357 = (unsigned int *)(v1079 - 4);
        v358 = __ldrex(v357);
      while ( __strex(v358 - 1, v357) );
      v358 = (*v357)--;
    if ( v358 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v34);
  sub_119C884((void **)&v1078, "dispenser");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1078);
  v35 = (void *)(v1078 - 12);
  if ( (int *)(v1078 - 12) != &dword_28898C0 )
    v359 = (unsigned int *)(v1078 - 4);
        v360 = __ldrex(v359);
      while ( __strex(v360 - 1, v359) );
      v360 = (*v359)--;
    if ( v360 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  sub_119C884((void **)&v1077, "sandstone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1077);
  v36 = (void *)(v1077 - 12);
  if ( (int *)(v1077 - 12) != &dword_28898C0 )
    v361 = (unsigned int *)(v1077 - 4);
        v362 = __ldrex(v361);
      while ( __strex(v362 - 1, v361) );
      v362 = (*v361)--;
    if ( v362 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  sub_119C884((void **)&v1076, "noteblock");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1076);
  v37 = (void *)(v1076 - 12);
  if ( (int *)(v1076 - 12) != &dword_28898C0 )
    v363 = (unsigned int *)(v1076 - 4);
        v364 = __ldrex(v363);
      while ( __strex(v364 - 1, v363) );
      v364 = (*v363)--;
    if ( v364 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  sub_119C884((void **)&v1075, "bed");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1075);
  v38 = (void *)(v1075 - 12);
  if ( (int *)(v1075 - 12) != &dword_28898C0 )
    v365 = (unsigned int *)(v1075 - 4);
        v366 = __ldrex(v365);
      while ( __strex(v366 - 1, v365) );
      v366 = (*v365)--;
    if ( v366 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  sub_119C884((void **)&v1074, "golden_rail");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1074);
  v39 = (void *)(v1074 - 12);
  if ( (int *)(v1074 - 12) != &dword_28898C0 )
    v367 = (unsigned int *)(v1074 - 4);
        v368 = __ldrex(v367);
      while ( __strex(v368 - 1, v367) );
      v368 = (*v367)--;
    if ( v368 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119C884((void **)&v1073, "detector_rail");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1073);
  v40 = (void *)(v1073 - 12);
  if ( (int *)(v1073 - 12) != &dword_28898C0 )
    v369 = (unsigned int *)(v1073 - 4);
        v370 = __ldrex(v369);
      while ( __strex(v370 - 1, v369) );
      v370 = (*v369)--;
    if ( v370 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  sub_119C884((void **)&v1072, "sticky_piston");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1072);
  v41 = (void *)(v1072 - 12);
  if ( (int *)(v1072 - 12) != &dword_28898C0 )
    v371 = (unsigned int *)(v1072 - 4);
        v372 = __ldrex(v371);
      while ( __strex(v372 - 1, v371) );
      v372 = (*v371)--;
    if ( v372 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v1071, "web");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1071);
  v42 = (void *)(v1071 - 12);
  if ( (int *)(v1071 - 12) != &dword_28898C0 )
    v373 = (unsigned int *)(v1071 - 4);
        v374 = __ldrex(v373);
      while ( __strex(v374 - 1, v373) );
      v374 = (*v373)--;
    if ( v374 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  sub_119C884((void **)&v1070, "tallgrass");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1070);
  v43 = (void *)(v1070 - 12);
  if ( (int *)(v1070 - 12) != &dword_28898C0 )
    v375 = (unsigned int *)(v1070 - 4);
        v376 = __ldrex(v375);
      while ( __strex(v376 - 1, v375) );
      v376 = (*v375)--;
    if ( v376 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  sub_119C884((void **)&v1069, "deadbush");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1069);
  v44 = (void *)(v1069 - 12);
  if ( (int *)(v1069 - 12) != &dword_28898C0 )
    v377 = (unsigned int *)(v1069 - 4);
        v378 = __ldrex(v377);
      while ( __strex(v378 - 1, v377) );
      v378 = (*v377)--;
    if ( v378 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
  sub_119C884((void **)&v1068, "piston");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1068);
  v45 = (void *)(v1068 - 12);
  if ( (int *)(v1068 - 12) != &dword_28898C0 )
    v379 = (unsigned int *)(v1068 - 4);
        v380 = __ldrex(v379);
      while ( __strex(v380 - 1, v379) );
      v380 = (*v379)--;
    if ( v380 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v45);
  sub_119C884((void **)&v1067, "pistonArmCollision");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1067);
  v46 = (void *)(v1067 - 12);
  if ( (int *)(v1067 - 12) != &dword_28898C0 )
    v381 = (unsigned int *)(v1067 - 4);
        v382 = __ldrex(v381);
      while ( __strex(v382 - 1, v381) );
      v382 = (*v381)--;
    if ( v382 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v46);
  sub_119C884((void **)&v1066, "wool");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1066);
  v47 = (void *)(v1066 - 12);
  if ( (int *)(v1066 - 12) != &dword_28898C0 )
    v383 = (unsigned int *)(v1066 - 4);
        v384 = __ldrex(v383);
      while ( __strex(v384 - 1, v383) );
      v384 = (*v383)--;
    if ( v384 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v47);
  sub_119C884((void **)&v1065, "yellow_flower");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1065);
  v48 = (void *)(v1065 - 12);
  if ( (int *)(v1065 - 12) != &dword_28898C0 )
    v385 = (unsigned int *)(v1065 - 4);
        v386 = __ldrex(v385);
      while ( __strex(v386 - 1, v385) );
      v386 = (*v385)--;
    if ( v386 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v48);
  sub_119C884((void **)&v1064, "red_flower");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1064);
  v49 = (void *)(v1064 - 12);
  if ( (int *)(v1064 - 12) != &dword_28898C0 )
    v387 = (unsigned int *)(v1064 - 4);
        v388 = __ldrex(v387);
      while ( __strex(v388 - 1, v387) );
      v388 = (*v387)--;
    if ( v388 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v49);
  sub_119C884((void **)&v1063, "brown_mushroom");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1063);
  v50 = (void *)(v1063 - 12);
  if ( (int *)(v1063 - 12) != &dword_28898C0 )
    v389 = (unsigned int *)(v1063 - 4);
        v390 = __ldrex(v389);
      while ( __strex(v390 - 1, v389) );
      v390 = (*v389)--;
    if ( v390 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v50);
  sub_119C884((void **)&v1062, "red_mushroom");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1062);
  v51 = (void *)(v1062 - 12);
  if ( (int *)(v1062 - 12) != &dword_28898C0 )
    v391 = (unsigned int *)(v1062 - 4);
        v392 = __ldrex(v391);
      while ( __strex(v392 - 1, v391) );
      v392 = (*v391)--;
    if ( v392 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v51);
  sub_119C884((void **)&v1061, "gold_block");
  v52 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1061) + 32;
  *(_DWORD *)v52 = 1065024252;
  *((_DWORD *)v52 + 1) = 1064234736;
  *((_DWORD *)v52 + 2) = 1050319515;
  *((_DWORD *)v52 + 3) = 0;
  v53 = (void *)(v1061 - 12);
  if ( (int *)(v1061 - 12) != &dword_28898C0 )
    v393 = (unsigned int *)(v1061 - 4);
        v394 = __ldrex(v393);
      while ( __strex(v394 - 1, v393) );
      v394 = (*v393)--;
    if ( v394 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v53);
  sub_119C884((void **)&v1060, "iron_block");
  v54 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1060);
  *((_DWORD *)v54 + 8) = 1059563432;
  *((_DWORD *)v54 + 9) = 1059563432;
  *((_DWORD *)v54 + 10) = 1059563432;
  *((_DWORD *)v54 + 11) = 0;
  v55 = (void *)(v1060 - 12);
  if ( (int *)(v1060 - 12) != &dword_28898C0 )
    v395 = (unsigned int *)(v1060 - 4);
        v396 = __ldrex(v395);
      while ( __strex(v396 - 1, v395) );
      v396 = (*v395)--;
    if ( v396 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v55);
  sub_119C884((void **)&v1059, "double_stone_slab");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1059);
  v56 = (void *)(v1059 - 12);
  if ( (int *)(v1059 - 12) != &dword_28898C0 )
    v397 = (unsigned int *)(v1059 - 4);
        v398 = __ldrex(v397);
      while ( __strex(v398 - 1, v397) );
      v398 = (*v397)--;
    if ( v398 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v56);
  sub_119C884((void **)&v1058, "stone_slab");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1058);
  v57 = (void *)(v1058 - 12);
  if ( (int *)(v1058 - 12) != &dword_28898C0 )
    v399 = (unsigned int *)(v1058 - 4);
        v400 = __ldrex(v399);
      while ( __strex(v400 - 1, v399) );
      v400 = (*v399)--;
    if ( v400 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v57);
  sub_119C884((void **)&v1057, "brick_block");
  v58 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1057);
  *((_DWORD *)v58 + 8) = 1058642330;
  *((_DWORD *)v58 + 9) = 1045220558;
  *((_DWORD *)v58 + 10) = 1045220558;
  *((_DWORD *)v58 + 11) = 0;
  v59 = (void *)(v1057 - 12);
  if ( (int *)(v1057 - 12) != &dword_28898C0 )
    v401 = (unsigned int *)(v1057 - 4);
        v402 = __ldrex(v401);
      while ( __strex(v402 - 1, v401) );
      v402 = (*v401)--;
    if ( v402 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v59);
  sub_119C884((void **)&v1056, "tnt");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1056);
  v60 = (void *)(v1056 - 12);
  if ( (int *)(v1056 - 12) != &dword_28898C0 )
    v403 = (unsigned int *)(v1056 - 4);
        v404 = __ldrex(v403);
      while ( __strex(v404 - 1, v403) );
      v404 = (*v403)--;
    if ( v404 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v60);
  sub_119C884((void **)&v1055, "bookshelf");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1055);
  v61 = (void *)(v1055 - 12);
  if ( (int *)(v1055 - 12) != &dword_28898C0 )
    v405 = (unsigned int *)(v1055 - 4);
        v406 = __ldrex(v405);
      while ( __strex(v406 - 1, v405) );
      v406 = (*v405)--;
    if ( v406 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
  sub_119C884((void **)&v1054, "mossy_cobblestone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1054);
  v62 = (void *)(v1054 - 12);
  if ( (int *)(v1054 - 12) != &dword_28898C0 )
    v407 = (unsigned int *)(v1054 - 4);
        v408 = __ldrex(v407);
      while ( __strex(v408 - 1, v407) );
      v408 = (*v407)--;
    if ( v408 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v62);
  sub_119C884((void **)&v1053, "obsidian");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1053);
  v63 = (void *)(v1053 - 12);
  if ( (int *)(v1053 - 12) != &dword_28898C0 )
    v409 = (unsigned int *)(v1053 - 4);
        v410 = __ldrex(v409);
      while ( __strex(v410 - 1, v409) );
      v410 = (*v409)--;
    if ( v410 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v63);
  sub_119C884((void **)&v1052, "torch");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1052);
  v64 = (void *)(v1052 - 12);
  if ( (int *)(v1052 - 12) != &dword_28898C0 )
    v411 = (unsigned int *)(v1052 - 4);
        v412 = __ldrex(v411);
      while ( __strex(v412 - 1, v411) );
      v412 = (*v411)--;
    if ( v412 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v64);
  sub_119C884((void **)&v1051, "mob_spawner");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1051);
  v65 = (void *)(v1051 - 12);
  if ( (int *)(v1051 - 12) != &dword_28898C0 )
    v413 = (unsigned int *)(v1051 - 4);
        v414 = __ldrex(v413);
      while ( __strex(v414 - 1, v413) );
      v414 = (*v413)--;
    if ( v414 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v65);
  sub_119C884((void **)&v1050, "oak_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1050);
  v66 = (void *)(v1050 - 12);
  if ( (int *)(v1050 - 12) != &dword_28898C0 )
    v415 = (unsigned int *)(v1050 - 4);
        v416 = __ldrex(v415);
      while ( __strex(v416 - 1, v415) );
      v416 = (*v415)--;
    if ( v416 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v66);
  sub_119C884((void **)&v1049, "chest");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1049);
  v67 = (void *)(v1049 - 12);
  if ( (int *)(v1049 - 12) != &dword_28898C0 )
    v417 = (unsigned int *)(v1049 - 4);
        v418 = __ldrex(v417);
      while ( __strex(v418 - 1, v417) );
      v418 = (*v417)--;
    if ( v418 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v67);
  sub_119C884((void **)&v1048, "redstone_wire");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1048);
  v68 = (void *)(v1048 - 12);
  if ( (int *)(v1048 - 12) != &dword_28898C0 )
    v419 = (unsigned int *)(v1048 - 4);
        v420 = __ldrex(v419);
      while ( __strex(v420 - 1, v419) );
      v420 = (*v419)--;
    if ( v420 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v68);
  sub_119C884((void **)&v1047, "diamond_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1047);
  v69 = (void *)(v1047 - 12);
  if ( (int *)(v1047 - 12) != &dword_28898C0 )
    v421 = (unsigned int *)(v1047 - 4);
        v422 = __ldrex(v421);
      while ( __strex(v422 - 1, v421) );
      v422 = (*v421)--;
    if ( v422 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v69);
  sub_119C884((void **)&v1046, "diamond_block");
  v70 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1046);
  v71 = (int)(v70 + 32);
  *(_DWORD *)v71 = 1052293305;
  *(_DWORD *)(v71 + 4) = 1062984669;
  *(_DWORD *)(v71 + 8) = 1062589911;
  *((_DWORD *)v70 + 11) = 0;
  v72 = (void *)(v1046 - 12);
  if ( (int *)(v1046 - 12) != &dword_28898C0 )
    v423 = (unsigned int *)(v1046 - 4);
        v424 = __ldrex(v423);
      while ( __strex(v424 - 1, v423) );
      v424 = (*v423)--;
    if ( v424 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v72);
  sub_119C884((void **)&v1045, "crafting_table");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1045);
  v73 = (void *)(v1045 - 12);
  if ( (int *)(v1045 - 12) != &dword_28898C0 )
    v425 = (unsigned int *)(v1045 - 4);
        v426 = __ldrex(v425);
      while ( __strex(v426 - 1, v425) );
      v426 = (*v425)--;
    if ( v426 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v73);
  sub_119C884((void **)&v1044, "wheat");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1044);
  v74 = (void *)(v1044 - 12);
  if ( (int *)(v1044 - 12) != &dword_28898C0 )
    v427 = (unsigned int *)(v1044 - 4);
        v428 = __ldrex(v427);
      while ( __strex(v428 - 1, v427) );
      v428 = (*v427)--;
    if ( v428 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v74);
  sub_119C884((void **)&v1043, "farmland");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1043);
  v75 = (void *)(v1043 - 12);
  if ( (int *)(v1043 - 12) != &dword_28898C0 )
    v429 = (unsigned int *)(v1043 - 4);
        v430 = __ldrex(v429);
      while ( __strex(v430 - 1, v429) );
      v430 = (*v429)--;
    if ( v430 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v75);
  sub_119C884((void **)&v1042, "furnace");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1042);
  v76 = (void *)(v1042 - 12);
  if ( (int *)(v1042 - 12) != &dword_28898C0 )
    v431 = (unsigned int *)(v1042 - 4);
        v432 = __ldrex(v431);
      while ( __strex(v432 - 1, v431) );
      v432 = (*v431)--;
    if ( v432 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v76);
  sub_119C884((void **)&v1041, "lit_furnace");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1041);
  v77 = (void *)(v1041 - 12);
  if ( (int *)(v1041 - 12) != &dword_28898C0 )
    v433 = (unsigned int *)(v1041 - 4);
        v434 = __ldrex(v433);
      while ( __strex(v434 - 1, v433) );
      v434 = (*v433)--;
    if ( v434 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v77);
  sub_119C884((void **)&v1040, "standing_sign");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1040);
  v78 = (void *)(v1040 - 12);
  if ( (int *)(v1040 - 12) != &dword_28898C0 )
    v435 = (unsigned int *)(v1040 - 4);
        v436 = __ldrex(v435);
      while ( __strex(v436 - 1, v435) );
      v436 = (*v435)--;
    if ( v436 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v78);
  sub_119C884((void **)&v1039, "wooden_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1039);
  v79 = (void *)(v1039 - 12);
  if ( (int *)(v1039 - 12) != &dword_28898C0 )
    v437 = (unsigned int *)(v1039 - 4);
        v438 = __ldrex(v437);
      while ( __strex(v438 - 1, v437) );
      v438 = (*v437)--;
    if ( v438 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  sub_119C884((void **)&v1038, "ladder");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1038);
  v80 = (void *)(v1038 - 12);
  if ( (int *)(v1038 - 12) != &dword_28898C0 )
    v439 = (unsigned int *)(v1038 - 4);
        v440 = __ldrex(v439);
      while ( __strex(v440 - 1, v439) );
      v440 = (*v439)--;
    if ( v440 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  sub_119C884((void **)&v1037, "rail");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1037);
  v81 = (void *)(v1037 - 12);
  if ( (int *)(v1037 - 12) != &dword_28898C0 )
    v441 = (unsigned int *)(v1037 - 4);
        v442 = __ldrex(v441);
      while ( __strex(v442 - 1, v441) );
      v442 = (*v441)--;
    if ( v442 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v81);
  sub_119C884((void **)&v1036, "stone_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1036);
  v82 = (void *)(v1036 - 12);
  if ( (int *)(v1036 - 12) != &dword_28898C0 )
    v443 = (unsigned int *)(v1036 - 4);
        v444 = __ldrex(v443);
      while ( __strex(v444 - 1, v443) );
      v444 = (*v443)--;
    if ( v444 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v82);
  sub_119C884((void **)&v1035, "wall_sign");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1035);
  v83 = (void *)(v1035 - 12);
  if ( (int *)(v1035 - 12) != &dword_28898C0 )
    v445 = (unsigned int *)(v1035 - 4);
        v446 = __ldrex(v445);
      while ( __strex(v446 - 1, v445) );
      v446 = (*v445)--;
    if ( v446 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v83);
  sub_119C884((void **)&v1034, "lever");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1034);
  v84 = (void *)(v1034 - 12);
  if ( (int *)(v1034 - 12) != &dword_28898C0 )
    v447 = (unsigned int *)(v1034 - 4);
        v448 = __ldrex(v447);
      while ( __strex(v448 - 1, v447) );
      v448 = (*v447)--;
    if ( v448 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v84);
  sub_119C884((void **)&v1033, "stone_pressure_plate");
  v85 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v1033) + 68);
  v1030 = 1053609165;
  v1031 = 1053609165;
  v1027 = 1058642330;
  v1028 = 1058642330;
  v1032 = 1053609165;
  v1029 = 1058642330;
  v85();
  v86 = (void *)(v1033 - 12);
  if ( (int *)(v1033 - 12) != &dword_28898C0 )
    v449 = (unsigned int *)(v1033 - 4);
        v450 = __ldrex(v449);
      while ( __strex(v450 - 1, v449) );
      v450 = (*v449)--;
    if ( v450 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v86);
  sub_119C884((void **)&v1026, "iron_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1026);
  v87 = (void *)(v1026 - 12);
  if ( (int *)(v1026 - 12) != &dword_28898C0 )
    v451 = (unsigned int *)(v1026 - 4);
        v452 = __ldrex(v451);
      while ( __strex(v452 - 1, v451) );
      v452 = (*v451)--;
    if ( v452 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v87);
  sub_119C884((void **)&v1025, "wooden_pressure_plate");
  v88 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v1025) + 68);
  v1022 = 1053609165;
  v1023 = 1053609165;
  v1019 = 1058642330;
  v1020 = 1058642330;
  v1024 = 1053609165;
  v1021 = 1058642330;
  v88();
  v89 = (void *)(v1025 - 12);
  if ( (int *)(v1025 - 12) != &dword_28898C0 )
    v453 = (unsigned int *)(v1025 - 4);
        v454 = __ldrex(v453);
      while ( __strex(v454 - 1, v453) );
      v454 = (*v453)--;
    if ( v454 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v89);
  sub_119C884((void **)&v1018, "redstone_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1018);
  v90 = (void *)(v1018 - 12);
  if ( (int *)(v1018 - 12) != &dword_28898C0 )
    v455 = (unsigned int *)(v1018 - 4);
        v456 = __ldrex(v455);
      while ( __strex(v456 - 1, v455) );
      v456 = (*v455)--;
    if ( v456 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v90);
  sub_119C884((void **)&v1017, "lit_redstone_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1017);
  v91 = (void *)(v1017 - 12);
  if ( (int *)(v1017 - 12) != &dword_28898C0 )
    v457 = (unsigned int *)(v1017 - 4);
        v458 = __ldrex(v457);
      while ( __strex(v458 - 1, v457) );
      v458 = (*v457)--;
    if ( v458 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v91);
  sub_119C884((void **)&v1016, "unlit_redstone_torch");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1016);
  v92 = (void *)(v1016 - 12);
  if ( (int *)(v1016 - 12) != &dword_28898C0 )
    v459 = (unsigned int *)(v1016 - 4);
        v460 = __ldrex(v459);
      while ( __strex(v460 - 1, v459) );
      v460 = (*v459)--;
    if ( v460 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v92);
  sub_119C884((void **)&v1015, "redstone_torch");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1015);
  v93 = (void *)(v1015 - 12);
  if ( (int *)(v1015 - 12) != &dword_28898C0 )
    v461 = (unsigned int *)(v1015 - 4);
        v462 = __ldrex(v461);
      while ( __strex(v462 - 1, v461) );
      v462 = (*v461)--;
    if ( v462 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v93);
  sub_119C884((void **)&v1014, "stone_button");
  v94 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v1014) + 68);
  v1011 = 1053609165;
  v1012 = 1053609165;
  v1008 = 1058642330;
  v1009 = 1058642330;
  v1013 = 1053609165;
  v1010 = 1058642330;
  v94();
  v95 = (void *)(v1014 - 12);
  if ( (int *)(v1014 - 12) != &dword_28898C0 )
    v463 = (unsigned int *)(v1014 - 4);
        v464 = __ldrex(v463);
      while ( __strex(v464 - 1, v463) );
      v464 = (*v463)--;
    if ( v464 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v95);
  sub_119C884((void **)&v1007, "snow_layer");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1007);
  v96 = (void *)(v1007 - 12);
  if ( (int *)(v1007 - 12) != &dword_28898C0 )
    v465 = (unsigned int *)(v1007 - 4);
        v466 = __ldrex(v465);
      while ( __strex(v466 - 1, v465) );
      v466 = (*v465)--;
    if ( v466 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v96);
  sub_119C884((void **)&v1006, "ice");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1006);
  v97 = (void *)(v1006 - 12);
  if ( (int *)(v1006 - 12) != &dword_28898C0 )
    v467 = (unsigned int *)(v1006 - 4);
        v468 = __ldrex(v467);
      while ( __strex(v468 - 1, v467) );
      v468 = (*v467)--;
    if ( v468 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v97);
  sub_119C884((void **)&v1005, "snow");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1005);
  v98 = (void *)(v1005 - 12);
  if ( (int *)(v1005 - 12) != &dword_28898C0 )
    v469 = (unsigned int *)(v1005 - 4);
        v470 = __ldrex(v469);
      while ( __strex(v470 - 1, v469) );
      v470 = (*v469)--;
    if ( v470 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v98);
  sub_119C884((void **)&v1004, "cactus");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1004);
  v99 = (void *)(v1004 - 12);
  if ( (int *)(v1004 - 12) != &dword_28898C0 )
    v471 = (unsigned int *)(v1004 - 4);
        v472 = __ldrex(v471);
      while ( __strex(v472 - 1, v471) );
      v472 = (*v471)--;
    if ( v472 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v99);
  sub_119C884((void **)&v1003, "clay");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1003);
  v100 = (void *)(v1003 - 12);
  if ( (int *)(v1003 - 12) != &dword_28898C0 )
    v473 = (unsigned int *)(v1003 - 4);
        v474 = __ldrex(v473);
      while ( __strex(v474 - 1, v473) );
      v474 = (*v473)--;
    if ( v474 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v100);
  sub_119C884((void **)&v1002, "reeds");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1002);
  v101 = (void *)(v1002 - 12);
  if ( (int *)(v1002 - 12) != &dword_28898C0 )
    v475 = (unsigned int *)(v1002 - 4);
        v476 = __ldrex(v475);
      while ( __strex(v476 - 1, v475) );
      v476 = (*v475)--;
    if ( v476 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v101);
  sub_119C884((void **)&v1001, "jukebox");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v1001);
  v102 = (void *)(v1001 - 12);
  if ( (int *)(v1001 - 12) != &dword_28898C0 )
    v477 = (unsigned int *)(v1001 - 4);
        v478 = __ldrex(v477);
      while ( __strex(v478 - 1, v477) );
      v478 = (*v477)--;
    if ( v478 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v102);
  sub_119C884((void **)&v1000, "fence");
  v103 = registerBlockGraphics((int)&v1112, (unsigned int *)&v1000);
  WoodBlock::getWoodMaterialColor((int)&v996, 0);
  v104 = v997;
  v105 = v998;
  v106 = v999;
  v107 = (int)(v103 + 32);
  *(_DWORD *)v107 = *(_DWORD *)&v996;
  *(_DWORD *)(v107 + 4) = v104;
  *(_DWORD *)(v107 + 8) = v105;
  *(_DWORD *)(v107 + 12) = v106;
  v108 = (void *)(v1000 - 12);
  if ( (int *)(v1000 - 12) != &dword_28898C0 )
    v479 = (unsigned int *)(v1000 - 4);
        v480 = __ldrex(v479);
      while ( __strex(v480 - 1, v479) );
      v480 = (*v479)--;
    if ( v480 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v108);
  sub_119C884((void **)&v995, "nether_brick_fence");
  v109 = registerBlockGraphics((int)&v1112, (unsigned int *)&v995);
  *((_DWORD *)v109 + 8) = 1054925026;
  *((_DWORD *)v109 + 9) = 1006665857;
  *((_DWORD *)v109 + 10) = 0;
  *((_DWORD *)v109 + 11) = 0;
  v110 = (void *)(v995 - 12);
  if ( (int *)(v995 - 12) != &dword_28898C0 )
    v481 = (unsigned int *)(v995 - 4);
        v482 = __ldrex(v481);
      while ( __strex(v482 - 1, v481) );
      v482 = (*v481)--;
    if ( v482 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v110);
  sub_119C884((void **)&v994, "pumpkin");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v994);
  v111 = (void *)(v994 - 12);
  if ( (int *)(v994 - 12) != &dword_28898C0 )
    v483 = (unsigned int *)(v994 - 4);
        v484 = __ldrex(v483);
      while ( __strex(v484 - 1, v483) );
      v484 = (*v483)--;
    if ( v484 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v111);
  sub_119C884((void **)&v993, "netherrack");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v993);
  v112 = (void *)(v993 - 12);
  if ( (int *)(v993 - 12) != &dword_28898C0 )
    v485 = (unsigned int *)(v993 - 4);
        v486 = __ldrex(v485);
      while ( __strex(v486 - 1, v485) );
      v486 = (*v485)--;
    if ( v486 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v112);
  sub_119C884((void **)&v992, "magma");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v992);
  v113 = (void *)(v992 - 12);
  if ( (int *)(v992 - 12) != &dword_28898C0 )
    v487 = (unsigned int *)(v992 - 4);
        v488 = __ldrex(v487);
      while ( __strex(v488 - 1, v487) );
      v488 = (*v487)--;
    if ( v488 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v113);
  sub_119C884((void **)&v991, "soul_sand");
  v114 = registerBlockGraphics((int)&v1112, (unsigned int *)&v991);
  *((_DWORD *)v114 + 8) = 1053609166;
  *((_DWORD *)v114 + 9) = 1050187929;
  *((_DWORD *)v114 + 10) = 1045220558;
  *((_DWORD *)v114 + 11) = 0;
  v115 = (void *)(v991 - 12);
  if ( (int *)(v991 - 12) != &dword_28898C0 )
    v489 = (unsigned int *)(v991 - 4);
        v490 = __ldrex(v489);
      while ( __strex(v490 - 1, v489) );
      v490 = (*v489)--;
    if ( v490 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v115);
  sub_119C884((void **)&v990, "glowstone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v990);
  v116 = (void *)(v990 - 12);
  if ( (int *)(v990 - 12) != &dword_28898C0 )
    v491 = (unsigned int *)(v990 - 4);
        v492 = __ldrex(v491);
      while ( __strex(v492 - 1, v491) );
      v492 = (*v491)--;
    if ( v492 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v116);
  sub_119C884((void **)&v989, "portal");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v989);
  v117 = (void *)(v989 - 12);
  if ( (int *)(v989 - 12) != &dword_28898C0 )
    v493 = (unsigned int *)(v989 - 4);
        v494 = __ldrex(v493);
      while ( __strex(v494 - 1, v493) );
      v494 = (*v493)--;
    if ( v494 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v117);
  sub_119C884((void **)&v988, "lit_pumpkin");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v988);
  v118 = (void *)(v988 - 12);
  if ( (int *)(v988 - 12) != &dword_28898C0 )
    v495 = (unsigned int *)(v988 - 4);
        v496 = __ldrex(v495);
      while ( __strex(v496 - 1, v495) );
      v496 = (*v495)--;
    if ( v496 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v118);
  sub_119C884((void **)&v987, "cake");
  v119 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v987) + 68);
  v984 = 0;
  v985 = 0;
  v986 = 0;
  v981 = 1065353216;
  v982 = 1056964608;
  v983 = 1065353216;
  v119();
  v120 = (void *)(v987 - 12);
  if ( (int *)(v987 - 12) != &dword_28898C0 )
    v497 = (unsigned int *)(v987 - 4);
        v498 = __ldrex(v497);
      while ( __strex(v498 - 1, v497) );
      v498 = (*v497)--;
    if ( v498 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v120);
  sub_119C884((void **)&v980, "unpowered_repeater");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v980);
  v121 = (void *)(v980 - 12);
  if ( (int *)(v980 - 12) != &dword_28898C0 )
    v499 = (unsigned int *)(v980 - 4);
        v500 = __ldrex(v499);
      while ( __strex(v500 - 1, v499) );
      v500 = (*v499)--;
    if ( v500 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v121);
  sub_119C884((void **)&v979, "powered_repeater");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v979);
  v122 = (void *)(v979 - 12);
  if ( (int *)(v979 - 12) != &dword_28898C0 )
    v501 = (unsigned int *)(v979 - 4);
        v502 = __ldrex(v501);
      while ( __strex(v502 - 1, v501) );
      v502 = (*v501)--;
    if ( v502 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v122);
  sub_119C884((void **)&v978, "invisibleBedrock");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v978);
  v123 = (void *)(v978 - 12);
  if ( (int *)(v978 - 12) != &dword_28898C0 )
    v503 = (unsigned int *)(v978 - 4);
        v504 = __ldrex(v503);
      while ( __strex(v504 - 1, v503) );
      v504 = (*v503)--;
    if ( v504 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v123);
  sub_119C884((void **)&v977, "trapdoor");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v977);
  v124 = (void *)(v977 - 12);
  if ( (int *)(v977 - 12) != &dword_28898C0 )
    v505 = (unsigned int *)(v977 - 4);
        v506 = __ldrex(v505);
      while ( __strex(v506 - 1, v505) );
      v506 = (*v505)--;
    if ( v506 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v124);
  sub_119C884((void **)&v976, "monster_egg");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v976);
  v125 = (void *)(v976 - 12);
  if ( (int *)(v976 - 12) != &dword_28898C0 )
    v507 = (unsigned int *)(v976 - 4);
        v508 = __ldrex(v507);
      while ( __strex(v508 - 1, v507) );
      v508 = (*v507)--;
    if ( v508 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v125);
  sub_119C884((void **)&v975, "stonebrick");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v975);
  v126 = (void *)(v975 - 12);
  if ( (int *)(v975 - 12) != &dword_28898C0 )
    v509 = (unsigned int *)(v975 - 4);
        v510 = __ldrex(v509);
      while ( __strex(v510 - 1, v509) );
      v510 = (*v509)--;
    if ( v510 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v126);
  sub_119C884((void **)&v974, "brown_mushroom_block");
  v127 = registerBlockGraphics((int)&v1112, (unsigned int *)&v974);
  *((_DWORD *)v127 + 8) = 1058510744;
  *((_DWORD *)v127 + 9) = 1054530268;
  *((_DWORD *)v127 + 10) = 1050319515;
  *((_DWORD *)v127 + 11) = 0;
  v128 = (void *)(v974 - 12);
  if ( (int *)(v974 - 12) != &dword_28898C0 )
    v511 = (unsigned int *)(v974 - 4);
        v512 = __ldrex(v511);
      while ( __strex(v512 - 1, v511) );
      v512 = (*v511)--;
    if ( v512 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v128);
  sub_119C884((void **)&v973, "red_mushroom_block");
  v129 = registerBlockGraphics((int)&v1112, (unsigned int *)&v973);
  *((_DWORD *)v129 + 8) = 1058642330;
  *((_DWORD *)v129 + 9) = 1045220558;
  *((_DWORD *)v129 + 10) = 1045220558;
  *((_DWORD *)v129 + 11) = 0;
  v130 = (void *)(v973 - 12);
  if ( (int *)(v973 - 12) != &dword_28898C0 )
    v513 = (unsigned int *)(v973 - 4);
        v514 = __ldrex(v513);
      while ( __strex(v514 - 1, v513) );
      v514 = (*v513)--;
    if ( v514 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v130);
  sub_119C884((void **)&v972, "iron_bars");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v972);
  v131 = (void *)(v972 - 12);
  if ( (int *)(v972 - 12) != &dword_28898C0 )
    v515 = (unsigned int *)(v972 - 4);
        v516 = __ldrex(v515);
      while ( __strex(v516 - 1, v515) );
      v516 = (*v515)--;
    if ( v516 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v131);
  sub_119C884((void **)&v971, "glass_pane");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v971);
  v132 = (void *)(v971 - 12);
  if ( (int *)(v971 - 12) != &dword_28898C0 )
    v517 = (unsigned int *)(v971 - 4);
        v518 = __ldrex(v517);
      while ( __strex(v518 - 1, v517) );
      v518 = (*v517)--;
    if ( v518 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v132);
  sub_119C884((void **)&v970, "melon_block");
  v133 = registerBlockGraphics((int)&v1112, (unsigned int *)&v970);
  *((_DWORD *)v133 + 8) = 1056898816;
  *((_DWORD *)v133 + 9) = 1061997774;
  *((_DWORD *)v133 + 10) = 1036568778;
  *((_DWORD *)v133 + 11) = 0;
  v134 = (void *)(v970 - 12);
  if ( (int *)(v970 - 12) != &dword_28898C0 )
    v519 = (unsigned int *)(v970 - 4);
        v520 = __ldrex(v519);
      while ( __strex(v520 - 1, v519) );
      v520 = (*v519)--;
    if ( v520 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v134);
  sub_119C884((void **)&v969, "pumpkin_stem");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v969);
  v135 = (void *)(v969 - 12);
  if ( (int *)(v969 - 12) != &dword_28898C0 )
    v521 = (unsigned int *)(v969 - 4);
        v522 = __ldrex(v521);
      while ( __strex(v522 - 1, v521) );
      v522 = (*v521)--;
    if ( v522 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v135);
  sub_119C884((void **)&v968, "melon_stem");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v968);
  v136 = (void *)(v968 - 12);
  if ( (int *)(v968 - 12) != &dword_28898C0 )
    v523 = (unsigned int *)(v968 - 4);
        v524 = __ldrex(v523);
      while ( __strex(v524 - 1, v523) );
      v524 = (*v523)--;
    if ( v524 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v136);
  sub_119C884((void **)&v967, "vine");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v967);
  v137 = (void *)(v967 - 12);
  if ( (int *)(v967 - 12) != &dword_28898C0 )
    v525 = (unsigned int *)(v967 - 4);
        v526 = __ldrex(v525);
      while ( __strex(v526 - 1, v525) );
      v526 = (*v525)--;
    if ( v526 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v137);
  sub_119C884((void **)&v966, "fence_gate");
  v138 = registerBlockGraphics((int)&v1112, (unsigned int *)&v966);
  WoodBlock::getWoodMaterialColor((int)&v962, 0);
  v139 = v963;
  v140 = v964;
  v141 = v965;
  v142 = (int)(v138 + 32);
  *(_DWORD *)v142 = *(_DWORD *)&v962;
  *(_DWORD *)(v142 + 4) = v139;
  *(_DWORD *)(v142 + 8) = v140;
  *(_DWORD *)(v142 + 12) = v141;
  v143 = (void *)(v966 - 12);
  if ( (int *)(v966 - 12) != &dword_28898C0 )
    v527 = (unsigned int *)(v966 - 4);
        v528 = __ldrex(v527);
      while ( __strex(v528 - 1, v527) );
      v528 = (*v527)--;
    if ( v528 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v143);
  sub_119C884((void **)&v961, "brick_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v961);
  v144 = (void *)(v961 - 12);
  if ( (int *)(v961 - 12) != &dword_28898C0 )
    v529 = (unsigned int *)(v961 - 4);
        v530 = __ldrex(v529);
      while ( __strex(v530 - 1, v529) );
      v530 = (*v529)--;
    if ( v530 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v144);
  sub_119C884((void **)&v960, "mycelium");
  v145 = registerBlockGraphics((int)&v1112, (unsigned int *)&v960);
  *((_DWORD *)v145 + 8) = 1056898816;
  *((_DWORD *)v145 + 9) = 1048378622;
  *((_DWORD *)v145 + 10) = 1060287155;
  *((_DWORD *)v145 + 11) = 0;
  v146 = (void *)(v960 - 12);
  if ( (int *)(v960 - 12) != &dword_28898C0 )
    v531 = (unsigned int *)(v960 - 4);
        v532 = __ldrex(v531);
      while ( __strex(v532 - 1, v531) );
      v532 = (*v531)--;
    if ( v532 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v146);
  sub_119C884((void **)&v959, "waterlily");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v959);
  v147 = (void *)(v959 - 12);
  if ( (int *)(v959 - 12) != &dword_28898C0 )
    v533 = (unsigned int *)(v959 - 4);
        v534 = __ldrex(v533);
      while ( __strex(v534 - 1, v533) );
      v534 = (*v533)--;
    if ( v534 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v147);
  sub_119C884((void **)&v958, "brewing_stand");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v958);
  v148 = (void *)(v958 - 12);
  if ( (int *)(v958 - 12) != &dword_28898C0 )
    v535 = (unsigned int *)(v958 - 4);
        v536 = __ldrex(v535);
      while ( __strex(v536 - 1, v535) );
      v536 = (*v535)--;
    if ( v536 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v148);
  sub_119C884((void **)&v957, "cauldron");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v957);
  v149 = (void *)(v957 - 12);
  if ( (int *)(v957 - 12) != &dword_28898C0 )
    v537 = (unsigned int *)(v957 - 4);
        v538 = __ldrex(v537);
      while ( __strex(v538 - 1, v537) );
      v538 = (*v537)--;
    if ( v538 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v149);
  sub_119C884((void **)&v956, "end_portal");
  *((_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v956) + 5) = 80;
  v150 = (void *)(v956 - 12);
  if ( (int *)(v956 - 12) != &dword_28898C0 )
    v539 = (unsigned int *)(v956 - 4);
        v540 = __ldrex(v539);
      while ( __strex(v540 - 1, v539) );
      v540 = (*v539)--;
    if ( v540 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v150);
  sub_119C884((void **)&v955, "end_portal_frame");
  v151 = registerBlockGraphics((int)&v1112, (unsigned int *)&v955);
  *((_DWORD *)v151 + 8) = 1053609166;
  *((_DWORD *)v151 + 9) = 1056898816;
  *((_DWORD *)v151 + 10) = 1045220558;
  *((_DWORD *)v151 + 11) = 0;
  v152 = (void *)(v955 - 12);
  if ( (int *)(v955 - 12) != &dword_28898C0 )
    v541 = (unsigned int *)(v955 - 4);
        v542 = __ldrex(v541);
      while ( __strex(v542 - 1, v541) );
      v542 = (*v541)--;
    if ( v542 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v152);
  sub_119C884((void **)&v954, "end_bricks");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v954);
  v153 = (void *)(v954 - 12);
  if ( (int *)(v954 - 12) != &dword_28898C0 )
    v543 = (unsigned int *)(v954 - 4);
        v544 = __ldrex(v543);
      while ( __strex(v544 - 1, v543) );
      v544 = (*v543)--;
    if ( v544 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v153);
  sub_119C884((void **)&v953, "end_stone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v953);
  v154 = (void *)(v953 - 12);
  if ( (int *)(v953 - 12) != &dword_28898C0 )
    v545 = (unsigned int *)(v953 - 4);
        v546 = __ldrex(v545);
      while ( __strex(v546 - 1, v545) );
      v546 = (*v545)--;
    if ( v546 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v154);
  sub_119C884((void **)&v952, "end_rod");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v952);
  v155 = (void *)(v952 - 12);
  if ( (int *)(v952 - 12) != &dword_28898C0 )
    v547 = (unsigned int *)(v952 - 4);
        v548 = __ldrex(v547);
      while ( __strex(v548 - 1, v547) );
      v548 = (*v547)--;
    if ( v548 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v155);
  sub_119C884((void **)&v951, "redstone_lamp");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v951);
  v156 = (void *)(v951 - 12);
  if ( (int *)(v951 - 12) != &dword_28898C0 )
    v549 = (unsigned int *)(v951 - 4);
        v550 = __ldrex(v549);
      while ( __strex(v550 - 1, v549) );
      v550 = (*v549)--;
    if ( v550 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v156);
  sub_119C884((void **)&v950, "lit_redstone_lamp");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v950);
  v157 = (void *)(v950 - 12);
  if ( (int *)(v950 - 12) != &dword_28898C0 )
    v551 = (unsigned int *)(v950 - 4);
        v552 = __ldrex(v551);
      while ( __strex(v552 - 1, v551) );
      v552 = (*v551)--;
    if ( v552 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v157);
  sub_119C884((void **)&v949, "cocoa");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v949);
  v158 = (void *)(v949 - 12);
  if ( (int *)(v949 - 12) != &dword_28898C0 )
    v553 = (unsigned int *)(v949 - 4);
        v554 = __ldrex(v553);
      while ( __strex(v554 - 1, v553) );
      v554 = (*v553)--;
    if ( v554 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v158);
  sub_119C884((void **)&v948, "emerald_ore");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v948);
  v159 = (void *)(v948 - 12);
  if ( (int *)(v948 - 12) != &dword_28898C0 )
    v555 = (unsigned int *)(v948 - 4);
        v556 = __ldrex(v555);
      while ( __strex(v556 - 1, v555) );
      v556 = (*v555)--;
    if ( v556 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v159);
  sub_119C884((void **)&v947, "emerald_block");
  v160 = registerBlockGraphics((int)&v1112, (unsigned int *)&v947);
  v161 = (int)(v160 + 32);
  *(_DWORD *)v161 = 0;
  *(_DWORD *)(v161 + 4) = 1062853083;
  *(_DWORD *)(v161 + 8) = 1047062762;
  *((_DWORD *)v160 + 11) = 0;
  v162 = (void *)(v947 - 12);
  if ( (int *)(v947 - 12) != &dword_28898C0 )
    v557 = (unsigned int *)(v947 - 4);
        v558 = __ldrex(v557);
      while ( __strex(v558 - 1, v557) );
      v558 = (*v557)--;
    if ( v558 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v162);
  sub_119C884((void **)&v946, "spruce_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v946);
  v163 = (void *)(v946 - 12);
  if ( (int *)(v946 - 12) != &dword_28898C0 )
    v559 = (unsigned int *)(v946 - 4);
        v560 = __ldrex(v559);
      while ( __strex(v560 - 1, v559) );
      v560 = (*v559)--;
    if ( v560 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v163);
  sub_119C884((void **)&v945, "birch_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v945);
  v164 = (void *)(v945 - 12);
  if ( (int *)(v945 - 12) != &dword_28898C0 )
    v561 = (unsigned int *)(v945 - 4);
        v562 = __ldrex(v561);
      while ( __strex(v562 - 1, v561) );
      v562 = (*v561)--;
    if ( v562 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v164);
  sub_119C884((void **)&v944, "jungle_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v944);
  v165 = (void *)(v944 - 12);
  if ( (int *)(v944 - 12) != &dword_28898C0 )
    v563 = (unsigned int *)(v944 - 4);
        v564 = __ldrex(v563);
      while ( __strex(v564 - 1, v563) );
      v564 = (*v563)--;
    if ( v564 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v165);
  sub_119C884((void **)&v943, "undyed_shulker_box");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v943);
  v166 = (void *)(v943 - 12);
  if ( (int *)(v943 - 12) != &dword_28898C0 )
    v565 = (unsigned int *)(v943 - 4);
        v566 = __ldrex(v565);
      while ( __strex(v566 - 1, v565) );
      v566 = (*v565)--;
    if ( v566 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v166);
  sub_119C884((void **)&v942, "shulker_box");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v942);
  v167 = (void *)(v942 - 12);
  if ( (int *)(v942 - 12) != &dword_28898C0 )
    v567 = (unsigned int *)(v942 - 4);
        v568 = __ldrex(v567);
      while ( __strex(v568 - 1, v567) );
      v568 = (*v567)--;
    if ( v568 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v167);
  sub_119C884((void **)&v941, "beacon");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v941);
  v168 = (void *)(v941 - 12);
  if ( (int *)(v941 - 12) != &dword_28898C0 )
    v569 = (unsigned int *)(v941 - 4);
        v570 = __ldrex(v569);
      while ( __strex(v570 - 1, v569) );
      v570 = (*v569)--;
    if ( v570 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v168);
  sub_119C884((void **)&v940, "wooden_button");
  v169 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v940) + 68);
  v937 = 1053609165;
  v938 = 1053609165;
  v934 = 1058642330;
  v935 = 1058642330;
  v939 = 1053609165;
  v936 = 1058642330;
  v169();
  v170 = (void *)(v940 - 12);
  if ( (int *)(v940 - 12) != &dword_28898C0 )
    v571 = (unsigned int *)(v940 - 4);
        v572 = __ldrex(v571);
      while ( __strex(v572 - 1, v571) );
      v572 = (*v571)--;
    if ( v572 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v170);
  sub_119C884((void **)&v933, "stone_brick_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v933);
  v171 = (void *)(v933 - 12);
  if ( (int *)(v933 - 12) != &dword_28898C0 )
    v573 = (unsigned int *)(v933 - 4);
        v574 = __ldrex(v573);
      while ( __strex(v574 - 1, v573) );
      v574 = (*v573)--;
    if ( v574 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v171);
  sub_119C884((void **)&v932, "nether_brick");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v932);
  v172 = (void *)(v932 - 12);
  if ( (int *)(v932 - 12) != &dword_28898C0 )
    v575 = (unsigned int *)(v932 - 4);
        v576 = __ldrex(v575);
      while ( __strex(v576 - 1, v575) );
      v576 = (*v575)--;
    if ( v576 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v172);
  sub_119C884((void **)&v931, "nether_brick_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v931);
  v173 = (void *)(v931 - 12);
  if ( (int *)(v931 - 12) != &dword_28898C0 )
    v577 = (unsigned int *)(v931 - 4);
        v578 = __ldrex(v577);
      while ( __strex(v578 - 1, v577) );
      v578 = (*v577)--;
    if ( v578 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v173);
  sub_119C884((void **)&v930, "red_nether_brick");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v930);
  v174 = (void *)(v930 - 12);
  if ( (int *)(v930 - 12) != &dword_28898C0 )
    v579 = (unsigned int *)(v930 - 4);
        v580 = __ldrex(v579);
      while ( __strex(v580 - 1, v579) );
      v580 = (*v579)--;
    if ( v580 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v174);
  sub_119C884((void **)&v929, "nether_wart");
  v175 = registerBlockGraphics((int)&v1112, (unsigned int *)&v929);
  *((_DWORD *)v175 + 8) = 1058642330;
  *((_DWORD *)v175 + 9) = 1045220558;
  *((_DWORD *)v175 + 10) = 1045220558;
  *((_DWORD *)v175 + 11) = 0;
  v176 = (void *)(v929 - 12);
  if ( (int *)(v929 - 12) != &dword_28898C0 )
    v581 = (unsigned int *)(v929 - 4);
        v582 = __ldrex(v581);
      while ( __strex(v582 - 1, v581) );
      v582 = (*v581)--;
    if ( v582 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v176);
  sub_119C884((void **)&v928, "nether_wart_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v928);
  v177 = (void *)(v928 - 12);
  if ( (int *)(v928 - 12) != &dword_28898C0 )
    v583 = (unsigned int *)(v928 - 4);
        v584 = __ldrex(v583);
      while ( __strex(v584 - 1, v583) );
      v584 = (*v583)--;
    if ( v584 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v177);
  sub_119C884((void **)&v927, "enchanting_table");
  v178 = registerBlockGraphics((int)&v1112, (unsigned int *)&v927);
  *((_DWORD *)v178 + 8) = 1058642330;
  *((_DWORD *)v178 + 9) = 1045220558;
  *((_DWORD *)v178 + 10) = 1045220558;
  *((_DWORD *)v178 + 11) = 0;
  v179 = (void *)(v927 - 12);
  if ( (int *)(v927 - 12) != &dword_28898C0 )
    v585 = (unsigned int *)(v927 - 4);
        v586 = __ldrex(v585);
      while ( __strex(v586 - 1, v585) );
      v586 = (*v585)--;
    if ( v586 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v179);
  sub_119C884((void **)&v926, "dropper");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v926);
  v180 = (void *)(v926 - 12);
  if ( (int *)(v926 - 12) != &dword_28898C0 )
    v587 = (unsigned int *)(v926 - 4);
        v588 = __ldrex(v587);
      while ( __strex(v588 - 1, v587) );
      v588 = (*v587)--;
    if ( v588 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v180);
  sub_119C884((void **)&v925, "activator_rail");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v925);
  v181 = (void *)(v925 - 12);
  if ( (int *)(v925 - 12) != &dword_28898C0 )
    v589 = (unsigned int *)(v925 - 4);
        v590 = __ldrex(v589);
      while ( __strex(v590 - 1, v589) );
      v590 = (*v589)--;
    if ( v590 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v181);
  sub_119C884((void **)&v924, "sandstone_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v924);
  v182 = (void *)(v924 - 12);
  if ( (int *)(v924 - 12) != &dword_28898C0 )
    v591 = (unsigned int *)(v924 - 4);
        v592 = __ldrex(v591);
      while ( __strex(v592 - 1, v591) );
      v592 = (*v591)--;
    if ( v592 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v182);
  sub_119C884((void **)&v923, "ender_chest");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v923);
  v183 = (void *)(v923 - 12);
  if ( (int *)(v923 - 12) != &dword_28898C0 )
    v593 = (unsigned int *)(v923 - 4);
        v594 = __ldrex(v593);
      while ( __strex(v594 - 1, v593) );
      v594 = (*v593)--;
    if ( v594 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v183);
  sub_119C884((void **)&v922, "tripwire_hook");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v922);
  v184 = (void *)(v922 - 12);
  if ( (int *)(v922 - 12) != &dword_28898C0 )
    v595 = (unsigned int *)(v922 - 4);
        v596 = __ldrex(v595);
      while ( __strex(v596 - 1, v595) );
      v596 = (*v595)--;
    if ( v596 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v184);
  sub_119C884((void **)&v921, "tripWire");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v921);
  v185 = (void *)(v921 - 12);
  if ( (int *)(v921 - 12) != &dword_28898C0 )
    v597 = (unsigned int *)(v921 - 4);
        v598 = __ldrex(v597);
      while ( __strex(v598 - 1, v597) );
      v598 = (*v597)--;
    if ( v598 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v185);
  sub_119C884((void **)&v920, "cobblestone_wall");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v920);
  v186 = (void *)(v920 - 12);
  if ( (int *)(v920 - 12) != &dword_28898C0 )
    v599 = (unsigned int *)(v920 - 4);
        v600 = __ldrex(v599);
      while ( __strex(v600 - 1, v599) );
      v600 = (*v599)--;
    if ( v600 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v186);
  sub_119C884((void **)&v919, "flower_pot");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v919);
  v187 = (void *)(v919 - 12);
  if ( (int *)(v919 - 12) != &dword_28898C0 )
    v601 = (unsigned int *)(v919 - 4);
        v602 = __ldrex(v601);
      while ( __strex(v602 - 1, v601) );
      v602 = (*v601)--;
    if ( v602 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v187);
  sub_119C884((void **)&v918, "carrots");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v918);
  v188 = (void *)(v918 - 12);
  if ( (int *)(v918 - 12) != &dword_28898C0 )
    v603 = (unsigned int *)(v918 - 4);
        v604 = __ldrex(v603);
      while ( __strex(v604 - 1, v603) );
      v604 = (*v603)--;
    if ( v604 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v188);
  sub_119C884((void **)&v917, "potatoes");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v917);
  v189 = (void *)(v917 - 12);
  if ( (int *)(v917 - 12) != &dword_28898C0 )
    v605 = (unsigned int *)(v917 - 4);
        v606 = __ldrex(v605);
      while ( __strex(v606 - 1, v605) );
      v606 = (*v605)--;
    if ( v606 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v189);
  sub_119C884((void **)&v916, "skull");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v916);
  v190 = (void *)(v916 - 12);
  if ( (int *)(v916 - 12) != &dword_28898C0 )
    v607 = (unsigned int *)(v916 - 4);
        v608 = __ldrex(v607);
      while ( __strex(v608 - 1, v607) );
      v608 = (*v607)--;
    if ( v608 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v190);
  sub_119C884((void **)&v915, "anvil");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v915);
  v191 = (void *)(v915 - 12);
  if ( (int *)(v915 - 12) != &dword_28898C0 )
    v609 = (unsigned int *)(v915 - 4);
        v610 = __ldrex(v609);
      while ( __strex(v610 - 1, v609) );
      v610 = (*v609)--;
    if ( v610 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v191);
  sub_119C884((void **)&v914, "trapped_chest");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v914);
  v192 = (void *)(v914 - 12);
  if ( (int *)(v914 - 12) != &dword_28898C0 )
    v611 = (unsigned int *)(v914 - 4);
        v612 = __ldrex(v611);
      while ( __strex(v612 - 1, v611) );
      v612 = (*v611)--;
    if ( v612 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v192);
  sub_119C884((void **)&v913, "light_weighted_pressure_plate");
  v193 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v913) + 68);
  v911 = 1053609165;
  v912 = 1053609165;
  v907 = 1058642330;
  v908 = 1058642330;
  v909 = 1058642330;
  v910 = 1053609165;
  v193();
  v194 = (void *)(v913 - 12);
  if ( (int *)(v913 - 12) != &dword_28898C0 )
    v613 = (unsigned int *)(v913 - 4);
        v614 = __ldrex(v613);
      while ( __strex(v614 - 1, v613) );
      v614 = (*v613)--;
    if ( v614 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v194);
  sub_119C884((void **)&v906, "heavy_weighted_pressure_plate");
  v195 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v906) + 68);
  v904 = 1053609165;
  v905 = 1053609165;
  v900 = 1058642330;
  v901 = 1058642330;
  v902 = 1058642330;
  v903 = 1053609165;
  v195();
  v196 = (void *)(v906 - 12);
  if ( (int *)(v906 - 12) != &dword_28898C0 )
    v615 = (unsigned int *)(v906 - 4);
        v616 = __ldrex(v615);
      while ( __strex(v616 - 1, v615) );
      v616 = (*v615)--;
    if ( v616 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v196);
  sub_119C884((void **)&v899, "unpowered_comparator");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v899);
  v197 = (void *)(v899 - 12);
  if ( (int *)(v899 - 12) != &dword_28898C0 )
    v617 = (unsigned int *)(v899 - 4);
        v618 = __ldrex(v617);
      while ( __strex(v618 - 1, v617) );
      v618 = (*v617)--;
    if ( v618 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v197);
  sub_119C884((void **)&v898, "powered_comparator");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v898);
  v198 = (void *)(v898 - 12);
  if ( (int *)(v898 - 12) != &dword_28898C0 )
    v619 = (unsigned int *)(v898 - 4);
        v620 = __ldrex(v619);
      while ( __strex(v620 - 1, v619) );
      v620 = (*v619)--;
    if ( v620 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v198);
  sub_119C884((void **)&v897, "command_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v897);
  v199 = (void *)(v897 - 12);
  if ( (int *)(v897 - 12) != &dword_28898C0 )
    v621 = (unsigned int *)(v897 - 4);
        v622 = __ldrex(v621);
      while ( __strex(v622 - 1, v621) );
      v622 = (*v621)--;
    if ( v622 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v199);
  sub_119C884((void **)&v896, "repeating_command_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v896);
  v200 = (void *)(v896 - 12);
  if ( (int *)(v896 - 12) != &dword_28898C0 )
    v623 = (unsigned int *)(v896 - 4);
        v624 = __ldrex(v623);
      while ( __strex(v624 - 1, v623) );
      v624 = (*v623)--;
    if ( v624 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v200);
  sub_119C884((void **)&v895, "chain_command_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v895);
  v201 = (void *)(v895 - 12);
  if ( (int *)(v895 - 12) != &dword_28898C0 )
    v625 = (unsigned int *)(v895 - 4);
        v626 = __ldrex(v625);
      while ( __strex(v626 - 1, v625) );
      v626 = (*v625)--;
    if ( v626 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v201);
  sub_119C884((void **)&v894, "daylight_detector");
  v202 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v894) + 68);
  v891 = 0;
  v892 = 0;
  v893 = 0;
  v888 = 1065353216;
  v889 = 1052770304;
  v890 = 1065353216;
  v202();
  v203 = (void *)(v894 - 12);
  if ( (int *)(v894 - 12) != &dword_28898C0 )
    v627 = (unsigned int *)(v894 - 4);
        v628 = __ldrex(v627);
      while ( __strex(v628 - 1, v627) );
      v628 = (*v627)--;
    if ( v628 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v203);
  sub_119C884((void **)&v887, "redstone_block");
  v204 = registerBlockGraphics((int)&v1112, (unsigned int *)&v887);
  *((_DWORD *)v204 + 8) = 1065353216;
  *((_DWORD *)v204 + 9) = 0;
  *((_DWORD *)v204 + 10) = 0;
  *((_DWORD *)v204 + 11) = 0;
  v205 = (void *)(v887 - 12);
  if ( (int *)(v887 - 12) != &dword_28898C0 )
    v629 = (unsigned int *)(v887 - 4);
        v630 = __ldrex(v629);
      while ( __strex(v630 - 1, v629) );
      v630 = (*v629)--;
    if ( v630 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v205);
  sub_119C884((void **)&v886, "quartz_ore");
  v206 = registerBlockGraphics((int)&v1112, (unsigned int *)&v886);
  *((_DWORD *)v206 + 8) = 1054925026;
  *((_DWORD *)v206 + 9) = 1006665857;
  *((_DWORD *)v206 + 10) = 0;
  *((_DWORD *)v206 + 11) = 0;
  v207 = (void *)(v886 - 12);
  if ( (int *)(v886 - 12) != &dword_28898C0 )
    v631 = (unsigned int *)(v886 - 4);
        v632 = __ldrex(v631);
      while ( __strex(v632 - 1, v631) );
      v632 = (*v631)--;
    if ( v632 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v207);
  sub_119C884((void **)&v885, "hopper");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v885)[49] = 1;
  v208 = (void *)(v885 - 12);
  if ( (int *)(v885 - 12) != &dword_28898C0 )
    v633 = (unsigned int *)(v885 - 4);
        v634 = __ldrex(v633);
      while ( __strex(v634 - 1, v633) );
      v634 = (*v633)--;
    if ( v634 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v208);
  sub_119C884((void **)&v884, "bone_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v884);
  v209 = (void *)(v884 - 12);
  if ( (int *)(v884 - 12) != &dword_28898C0 )
    v635 = (unsigned int *)(v884 - 4);
        v636 = __ldrex(v635);
      while ( __strex(v636 - 1, v635) );
      v636 = (*v635)--;
    if ( v636 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v209);
  sub_119C884((void **)&v883, "quartz_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v883);
  v210 = (void *)(v883 - 12);
  if ( (int *)(v883 - 12) != &dword_28898C0 )
    v637 = (unsigned int *)(v883 - 4);
        v638 = __ldrex(v637);
      while ( __strex(v638 - 1, v637) );
      v638 = (*v637)--;
    if ( v638 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v210);
  sub_119C884((void **)&v882, "quartz_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v882);
  v211 = (void *)(v882 - 12);
  if ( (int *)(v882 - 12) != &dword_28898C0 )
    v639 = (unsigned int *)(v882 - 4);
        v640 = __ldrex(v639);
      while ( __strex(v640 - 1, v639) );
      v640 = (*v639)--;
    if ( v640 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v211);
  sub_119C884((void **)&v881, "purpur_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v881);
  v212 = (void *)(v881 - 12);
  if ( (int *)(v881 - 12) != &dword_28898C0 )
    v641 = (unsigned int *)(v881 - 4);
        v642 = __ldrex(v641);
      while ( __strex(v642 - 1, v641) );
      v642 = (*v641)--;
    if ( v642 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v212);
  sub_119C884((void **)&v880, "purpur_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v880);
  v213 = (void *)(v880 - 12);
  if ( (int *)(v880 - 12) != &dword_28898C0 )
    v643 = (unsigned int *)(v880 - 4);
        v644 = __ldrex(v643);
      while ( __strex(v644 - 1, v643) );
      v644 = (*v643)--;
    if ( v644 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v213);
  sub_119C884((void **)&v879, "chorus_plant");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v879);
  v214 = (void *)(v879 - 12);
  if ( (int *)(v879 - 12) != &dword_28898C0 )
    v645 = (unsigned int *)(v879 - 4);
        v646 = __ldrex(v645);
      while ( __strex(v646 - 1, v645) );
      v646 = (*v645)--;
    if ( v646 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v214);
  sub_119C884((void **)&v878, "chorus_flower");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v878);
  v215 = (void *)(v878 - 12);
  if ( (int *)(v878 - 12) != &dword_28898C0 )
    v647 = (unsigned int *)(v878 - 4);
        v648 = __ldrex(v647);
      while ( __strex(v648 - 1, v647) );
      v648 = (*v647)--;
    if ( v648 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v215);
  sub_119C884((void **)&v877, "double_wooden_slab");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v877);
  v216 = (void *)(v877 - 12);
  if ( (int *)(v877 - 12) != &dword_28898C0 )
    v649 = (unsigned int *)(v877 - 4);
        v650 = __ldrex(v649);
      while ( __strex(v650 - 1, v649) );
      v650 = (*v649)--;
    if ( v650 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v216);
  sub_119C884((void **)&v876, "wooden_slab");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v876);
  v217 = (void *)(v876 - 12);
  if ( (int *)(v876 - 12) != &dword_28898C0 )
    v651 = (unsigned int *)(v876 - 4);
        v652 = __ldrex(v651);
      while ( __strex(v652 - 1, v651) );
      v652 = (*v651)--;
    if ( v652 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v217);
  sub_119C884((void **)&v875, "stained_hardened_clay");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v875);
  v218 = (void *)(v875 - 12);
  if ( (int *)(v875 - 12) != &dword_28898C0 )
    v653 = (unsigned int *)(v875 - 4);
        v654 = __ldrex(v653);
      while ( __strex(v654 - 1, v653) );
      v654 = (*v653)--;
    if ( v654 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v218);
  sub_119C884((void **)&v874, "leaves2");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v874);
  v219 = (void *)(v874 - 12);
  if ( (int *)(v874 - 12) != &dword_28898C0 )
    v655 = (unsigned int *)(v874 - 4);
        v656 = __ldrex(v655);
      while ( __strex(v656 - 1, v655) );
      v656 = (*v655)--;
    if ( v656 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v219);
  sub_119C884((void **)&v873, "log2");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v873);
  v220 = (void *)(v873 - 12);
  if ( (int *)(v873 - 12) != &dword_28898C0 )
    v657 = (unsigned int *)(v873 - 4);
        v658 = __ldrex(v657);
      while ( __strex(v658 - 1, v657) );
      v658 = (*v657)--;
    if ( v658 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v220);
  sub_119C884((void **)&v872, "acacia_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v872);
  v221 = (void *)(v872 - 12);
  if ( (int *)(v872 - 12) != &dword_28898C0 )
    v659 = (unsigned int *)(v872 - 4);
        v660 = __ldrex(v659);
      while ( __strex(v660 - 1, v659) );
      v660 = (*v659)--;
    if ( v660 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v221);
  sub_119C884((void **)&v871, "dark_oak_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v871);
  v222 = (void *)(v871 - 12);
  if ( (int *)(v871 - 12) != &dword_28898C0 )
    v661 = (unsigned int *)(v871 - 4);
        v662 = __ldrex(v661);
      while ( __strex(v662 - 1, v661) );
      v662 = (*v661)--;
    if ( v662 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v222);
  sub_119C884((void **)&v870, "slime");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v870)[49] = 1;
  v223 = (void *)(v870 - 12);
  if ( (int *)(v870 - 12) != &dword_28898C0 )
    v663 = (unsigned int *)(v870 - 4);
        v664 = __ldrex(v663);
      while ( __strex(v664 - 1, v663) );
      v664 = (*v663)--;
    if ( v664 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v223);
  sub_119C884((void **)&v869, "iron_trapdoor");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v869);
  v224 = (void *)(v869 - 12);
  if ( (int *)(v869 - 12) != &dword_28898C0 )
    v665 = (unsigned int *)(v869 - 4);
        v666 = __ldrex(v665);
      while ( __strex(v666 - 1, v665) );
      v666 = (*v665)--;
    if ( v666 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v224);
  sub_119C884((void **)&v868, "hay_block");
  v225 = registerBlockGraphics((int)&v1112, (unsigned int *)&v868);
  *((_DWORD *)v225 + 8) = 1063642599;
  *((_DWORD *)v225 + 9) = 1063642599;
  *((_DWORD *)v225 + 10) = 1045220558;
  *((_DWORD *)v225 + 11) = 0;
  v226 = (void *)(v868 - 12);
  if ( (int *)(v868 - 12) != &dword_28898C0 )
    v667 = (unsigned int *)(v868 - 4);
        v668 = __ldrex(v667);
      while ( __strex(v668 - 1, v667) );
      v668 = (*v667)--;
    if ( v668 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v226);
  sub_119C884((void **)&v867, "carpet");
  v227 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v867) + 68);
  v865 = 1053609165;
  v866 = 1053609165;
  v861 = 1058642330;
  v862 = 1058642330;
  v863 = 1058642330;
  v864 = 1053609165;
  v227();
  v228 = (void *)(v867 - 12);
  if ( (int *)(v867 - 12) != &dword_28898C0 )
    v669 = (unsigned int *)(v867 - 4);
        v670 = __ldrex(v669);
      while ( __strex(v670 - 1, v669) );
      v670 = (*v669)--;
    if ( v670 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v228);
  sub_119C884((void **)&v860, "hardened_clay");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v860);
  v229 = (void *)(v860 - 12);
  if ( (int *)(v860 - 12) != &dword_28898C0 )
    v671 = (unsigned int *)(v860 - 4);
        v672 = __ldrex(v671);
      while ( __strex(v672 - 1, v671) );
      v672 = (*v671)--;
    if ( v672 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v229);
  sub_119C884((void **)&v859, "coal_block");
  v230 = registerBlockGraphics((int)&v1112, (unsigned int *)&v859);
  *((_DWORD *)v230 + 8) = 1036568778;
  *((_DWORD *)v230 + 9) = 1036568778;
  *((_DWORD *)v230 + 10) = 1036568778;
  *((_DWORD *)v230 + 11) = 0;
  v231 = (void *)(v859 - 12);
  if ( (int *)(v859 - 12) != &dword_28898C0 )
    v673 = (unsigned int *)(v859 - 4);
        v674 = __ldrex(v673);
      while ( __strex(v674 - 1, v673) );
      v674 = (*v673)--;
    if ( v674 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v231);
  sub_119C884((void **)&v858, "packed_ice");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v858);
  v232 = (void *)(v858 - 12);
  if ( (int *)(v858 - 12) != &dword_28898C0 )
    v675 = (unsigned int *)(v858 - 4);
        v676 = __ldrex(v675);
      while ( __strex(v676 - 1, v675) );
      v676 = (*v675)--;
    if ( v676 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v232);
  sub_119C884((void **)&v857, "double_plant");
  *((_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v857) + 5) = 40;
  v233 = (void *)(v857 - 12);
  if ( (int *)(v857 - 12) != &dword_28898C0 )
    v677 = (unsigned int *)(v857 - 4);
        v678 = __ldrex(v677);
      while ( __strex(v678 - 1, v677) );
      v678 = (*v677)--;
    if ( v678 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v233);
  sub_119C884((void **)&v856, "standing_banner");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v856);
  v234 = (void *)(v856 - 12);
  if ( (int *)(v856 - 12) != &dword_28898C0 )
    v679 = (unsigned int *)(v856 - 4);
        v680 = __ldrex(v679);
      while ( __strex(v680 - 1, v679) );
      v680 = (*v679)--;
    if ( v680 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v234);
  sub_119C884((void **)&v855, "wall_banner");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v855);
  v235 = (void *)(v855 - 12);
  if ( (int *)(v855 - 12) != &dword_28898C0 )
    v681 = (unsigned int *)(v855 - 4);
        v682 = __ldrex(v681);
      while ( __strex(v682 - 1, v681) );
      v682 = (*v681)--;
    if ( v682 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v235);
  sub_119C884((void **)&v854, "daylight_detector_inverted");
  v236 = *(void (**)(void))(*(_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v854) + 68);
  v851 = 0;
  v852 = 0;
  v853 = 0;
  v848 = 1065353216;
  v849 = 1052770304;
  v850 = 1065353216;
  v236();
  v237 = (void *)(v854 - 12);
  if ( (int *)(v854 - 12) != &dword_28898C0 )
    v683 = (unsigned int *)(v854 - 4);
        v684 = __ldrex(v683);
      while ( __strex(v684 - 1, v683) );
      v684 = (*v683)--;
    if ( v684 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v237);
  sub_119C884((void **)&v847, "red_sandstone");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v847);
  v238 = (void *)(v847 - 12);
  if ( (int *)(v847 - 12) != &dword_28898C0 )
    v685 = (unsigned int *)(v847 - 4);
        v686 = __ldrex(v685);
      while ( __strex(v686 - 1, v685) );
      v686 = (*v685)--;
    if ( v686 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v238);
  sub_119C884((void **)&v846, "red_sandstone_stairs");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v846);
  v239 = (void *)(v846 - 12);
  if ( (int *)(v846 - 12) != &dword_28898C0 )
    v687 = (unsigned int *)(v846 - 4);
        v688 = __ldrex(v687);
      while ( __strex(v688 - 1, v687) );
      v688 = (*v687)--;
    if ( v688 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v239);
  sub_119C884((void **)&v845, "double_stone_slab2");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v845);
  v240 = (void *)(v845 - 12);
  if ( (int *)(v845 - 12) != &dword_28898C0 )
    v689 = (unsigned int *)(v845 - 4);
        v690 = __ldrex(v689);
      while ( __strex(v690 - 1, v689) );
      v690 = (*v689)--;
    if ( v690 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v240);
  sub_119C884((void **)&v844, "stone_slab2");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v844);
  v241 = (void *)(v844 - 12);
  if ( (int *)(v844 - 12) != &dword_28898C0 )
    v691 = (unsigned int *)(v844 - 4);
        v692 = __ldrex(v691);
      while ( __strex(v692 - 1, v691) );
      v692 = (*v691)--;
    if ( v692 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v241);
  sub_119C884((void **)&v843, "spruce_fence_gate");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v843);
  v242 = (void *)(v843 - 12);
  if ( (int *)(v843 - 12) != &dword_28898C0 )
    v693 = (unsigned int *)(v843 - 4);
        v694 = __ldrex(v693);
      while ( __strex(v694 - 1, v693) );
      v694 = (*v693)--;
    if ( v694 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v242);
  sub_119C884((void **)&v842, "birch_fence_gate");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v842);
  v243 = (void *)(v842 - 12);
  if ( (int *)(v842 - 12) != &dword_28898C0 )
    v695 = (unsigned int *)(v842 - 4);
        v696 = __ldrex(v695);
      while ( __strex(v696 - 1, v695) );
      v696 = (*v695)--;
    if ( v696 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v243);
  sub_119C884((void **)&v841, "jungle_fence_gate");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v841);
  v244 = (void *)(v841 - 12);
  if ( (int *)(v841 - 12) != &dword_28898C0 )
    v697 = (unsigned int *)(v841 - 4);
        v698 = __ldrex(v697);
      while ( __strex(v698 - 1, v697) );
      v698 = (*v697)--;
    if ( v698 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v244);
  sub_119C884((void **)&v840, "dark_oak_fence_gate");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v840);
  v245 = (void *)(v840 - 12);
  if ( (int *)(v840 - 12) != &dword_28898C0 )
    v699 = (unsigned int *)(v840 - 4);
        v700 = __ldrex(v699);
      while ( __strex(v700 - 1, v699) );
      v700 = (*v699)--;
    if ( v700 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v245);
  sub_119C884((void **)&v839, "acacia_fence_gate");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v839);
  v246 = (void *)(v839 - 12);
  if ( (int *)(v839 - 12) != &dword_28898C0 )
    v701 = (unsigned int *)(v839 - 4);
        v702 = __ldrex(v701);
      while ( __strex(v702 - 1, v701) );
      v702 = (*v701)--;
    if ( v702 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v246);
  sub_119C884((void **)&v838, "spruce_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v838);
  v247 = (void *)(v838 - 12);
  if ( (int *)(v838 - 12) != &dword_28898C0 )
    v703 = (unsigned int *)(v838 - 4);
        v704 = __ldrex(v703);
      while ( __strex(v704 - 1, v703) );
      v704 = (*v703)--;
    if ( v704 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v247);
  sub_119C884((void **)&v837, "birch_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v837);
  v248 = (void *)(v837 - 12);
  if ( (int *)(v837 - 12) != &dword_28898C0 )
    v705 = (unsigned int *)(v837 - 4);
        v706 = __ldrex(v705);
      while ( __strex(v706 - 1, v705) );
      v706 = (*v705)--;
    if ( v706 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v248);
  sub_119C884((void **)&v836, "jungle_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v836);
  v249 = (void *)(v836 - 12);
  if ( (int *)(v836 - 12) != &dword_28898C0 )
    v707 = (unsigned int *)(v836 - 4);
        v708 = __ldrex(v707);
      while ( __strex(v708 - 1, v707) );
      v708 = (*v707)--;
    if ( v708 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v249);
  sub_119C884((void **)&v835, "acacia_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v835);
  v250 = (void *)(v835 - 12);
  if ( (int *)(v835 - 12) != &dword_28898C0 )
    v709 = (unsigned int *)(v835 - 4);
        v710 = __ldrex(v709);
      while ( __strex(v710 - 1, v709) );
      v710 = (*v709)--;
    if ( v710 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v250);
  sub_119C884((void **)&v834, "dark_oak_door");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v834);
  v251 = (void *)(v834 - 12);
  if ( (int *)(v834 - 12) != &dword_28898C0 )
    v711 = (unsigned int *)(v834 - 4);
        v712 = __ldrex(v711);
      while ( __strex(v712 - 1, v711) );
      v712 = (*v711)--;
    if ( v712 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v251);
  sub_119C884((void **)&v833, "dragon_egg");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v833);
  v252 = (void *)(v833 - 12);
  if ( (int *)(v833 - 12) != &dword_28898C0 )
    v713 = (unsigned int *)(v833 - 4);
        v714 = __ldrex(v713);
      while ( __strex(v714 - 1, v713) );
      v714 = (*v713)--;
    if ( v714 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v252);
  sub_119C884((void **)&v832, "grass_path");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v832);
  v253 = (void *)(v832 - 12);
  if ( (int *)(v832 - 12) != &dword_28898C0 )
    v715 = (unsigned int *)(v832 - 4);
        v716 = __ldrex(v715);
      while ( __strex(v716 - 1, v715) );
      v716 = (*v715)--;
    if ( v716 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v253);
  sub_119C884((void **)&v831, "frame");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v831);
  v254 = (void *)(v831 - 12);
  if ( (int *)(v831 - 12) != &dword_28898C0 )
    v717 = (unsigned int *)(v831 - 4);
        v718 = __ldrex(v717);
      while ( __strex(v718 - 1, v717) );
      v718 = (*v717)--;
    if ( v718 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v254);
  sub_119C884((void **)&v830, "end_gateway");
  *((_DWORD *)registerBlockGraphics((int)&v1112, (unsigned int *)&v830) + 5) = 82;
  v255 = (void *)(v830 - 12);
  if ( (int *)(v830 - 12) != &dword_28898C0 )
    v719 = (unsigned int *)(v830 - 4);
        v720 = __ldrex(v719);
      while ( __strex(v720 - 1, v719) );
      v720 = (*v719)--;
    if ( v720 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v255);
  sub_119C884((void **)&v829, "prismarine");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v829);
  v256 = (void *)(v829 - 12);
  if ( (int *)(v829 - 12) != &dword_28898C0 )
    v721 = (unsigned int *)(v829 - 4);
        v722 = __ldrex(v721);
      while ( __strex(v722 - 1, v721) );
      v722 = (*v721)--;
    if ( v722 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v256);
  sub_119C884((void **)&v828, "seaLantern");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v828);
  v257 = (void *)(v828 - 12);
  if ( (int *)(v828 - 12) != &dword_28898C0 )
    v723 = (unsigned int *)(v828 - 4);
        v724 = __ldrex(v723);
      while ( __strex(v724 - 1, v723) );
      v724 = (*v723)--;
    if ( v724 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v257);
  sub_119C884((void **)&v827, "structure_block");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v827);
  v258 = (void *)(v827 - 12);
  if ( (int *)(v827 - 12) != &dword_28898C0 )
    v725 = (unsigned int *)(v827 - 4);
        v726 = __ldrex(v725);
      while ( __strex(v726 - 1, v725) );
      v726 = (*v725)--;
    if ( v726 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v258);
  sub_119C884((void **)&v826, "white_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v826);
  v259 = (void *)(v826 - 12);
  if ( (int *)(v826 - 12) != &dword_28898C0 )
    v727 = (unsigned int *)(v826 - 4);
        v728 = __ldrex(v727);
      while ( __strex(v728 - 1, v727) );
      v728 = (*v727)--;
    if ( v728 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v259);
  sub_119C884((void **)&v825, "orange_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v825);
  v260 = (void *)(v825 - 12);
  if ( (int *)(v825 - 12) != &dword_28898C0 )
    v729 = (unsigned int *)(v825 - 4);
        v730 = __ldrex(v729);
      while ( __strex(v730 - 1, v729) );
      v730 = (*v729)--;
    if ( v730 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v260);
  sub_119C884((void **)&v824, "magenta_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v824);
  v261 = (void *)(v824 - 12);
  if ( (int *)(v824 - 12) != &dword_28898C0 )
    v731 = (unsigned int *)(v824 - 4);
        v732 = __ldrex(v731);
      while ( __strex(v732 - 1, v731) );
      v732 = (*v731)--;
    if ( v732 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v261);
  sub_119C884((void **)&v823, "light_blue_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v823);
  v262 = (void *)(v823 - 12);
  if ( (int *)(v823 - 12) != &dword_28898C0 )
    v733 = (unsigned int *)(v823 - 4);
        v734 = __ldrex(v733);
      while ( __strex(v734 - 1, v733) );
      v734 = (*v733)--;
    if ( v734 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v262);
  sub_119C884((void **)&v822, "yellow_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v822);
  v263 = (void *)(v822 - 12);
  if ( (int *)(v822 - 12) != &dword_28898C0 )
    v735 = (unsigned int *)(v822 - 4);
        v736 = __ldrex(v735);
      while ( __strex(v736 - 1, v735) );
      v736 = (*v735)--;
    if ( v736 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v263);
  sub_119C884((void **)&v821, "lime_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v821);
  v264 = (void *)(v821 - 12);
  if ( (int *)(v821 - 12) != &dword_28898C0 )
    v737 = (unsigned int *)(v821 - 4);
        v738 = __ldrex(v737);
      while ( __strex(v738 - 1, v737) );
      v738 = (*v737)--;
    if ( v738 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v264);
  sub_119C884((void **)&v820, "pink_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v820);
  v265 = (void *)(v820 - 12);
  if ( (int *)(v820 - 12) != &dword_28898C0 )
    v739 = (unsigned int *)(v820 - 4);
        v740 = __ldrex(v739);
      while ( __strex(v740 - 1, v739) );
      v740 = (*v739)--;
    if ( v740 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v265);
  sub_119C884((void **)&v819, "gray_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v819);
  v266 = (void *)(v819 - 12);
  if ( (int *)(v819 - 12) != &dword_28898C0 )
    v741 = (unsigned int *)(v819 - 4);
        v742 = __ldrex(v741);
      while ( __strex(v742 - 1, v741) );
      v742 = (*v741)--;
    if ( v742 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v266);
  sub_119C884((void **)&v818, "silver_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v818);
  v267 = (void *)(v818 - 12);
  if ( (int *)(v818 - 12) != &dword_28898C0 )
    v743 = (unsigned int *)(v818 - 4);
        v744 = __ldrex(v743);
      while ( __strex(v744 - 1, v743) );
      v744 = (*v743)--;
    if ( v744 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v267);
  sub_119C884((void **)&v817, "cyan_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v817);
  v268 = (void *)(v817 - 12);
  if ( (int *)(v817 - 12) != &dword_28898C0 )
    v745 = (unsigned int *)(v817 - 4);
        v746 = __ldrex(v745);
      while ( __strex(v746 - 1, v745) );
      v746 = (*v745)--;
    if ( v746 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v268);
  sub_119C884((void **)&v816, "purple_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v816);
  v269 = (void *)(v816 - 12);
  if ( (int *)(v816 - 12) != &dword_28898C0 )
    v747 = (unsigned int *)(v816 - 4);
        v748 = __ldrex(v747);
      while ( __strex(v748 - 1, v747) );
      v748 = (*v747)--;
    if ( v748 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v269);
  sub_119C884((void **)&v815, "blue_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v815);
  v270 = (void *)(v815 - 12);
  if ( (int *)(v815 - 12) != &dword_28898C0 )
    v749 = (unsigned int *)(v815 - 4);
        v750 = __ldrex(v749);
      while ( __strex(v750 - 1, v749) );
      v750 = (*v749)--;
    if ( v750 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v270);
  sub_119C884((void **)&v814, "brown_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v814);
  v271 = (void *)(v814 - 12);
  if ( (int *)(v814 - 12) != &dword_28898C0 )
    v751 = (unsigned int *)(v814 - 4);
        v752 = __ldrex(v751);
      while ( __strex(v752 - 1, v751) );
      v752 = (*v751)--;
    if ( v752 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v271);
  sub_119C884((void **)&v813, "green_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v813);
  v272 = (void *)(v813 - 12);
  if ( (int *)(v813 - 12) != &dword_28898C0 )
    v753 = (unsigned int *)(v813 - 4);
        v754 = __ldrex(v753);
      while ( __strex(v754 - 1, v753) );
      v754 = (*v753)--;
    if ( v754 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v272);
  sub_119C884((void **)&v812, "red_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v812);
  v273 = (void *)(v812 - 12);
  if ( (int *)(v812 - 12) != &dword_28898C0 )
    v755 = (unsigned int *)(v812 - 4);
        v756 = __ldrex(v755);
      while ( __strex(v756 - 1, v755) );
      v756 = (*v755)--;
    if ( v756 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v273);
  sub_119C884((void **)&v811, "black_glazed_terracotta");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v811);
  v274 = (void *)(v811 - 12);
  if ( (int *)(v811 - 12) != &dword_28898C0 )
    v757 = (unsigned int *)(v811 - 4);
        v758 = __ldrex(v757);
      while ( __strex(v758 - 1, v757) );
      v758 = (*v757)--;
    if ( v758 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v274);
  sub_119C884((void **)&v810, "concrete");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v810);
  v275 = (void *)(v810 - 12);
  if ( (int *)(v810 - 12) != &dword_28898C0 )
    v759 = (unsigned int *)(v810 - 4);
        v760 = __ldrex(v759);
      while ( __strex(v760 - 1, v759) );
      v760 = (*v759)--;
    if ( v760 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v275);
  sub_119C884((void **)&v809, "concretePowder");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v809);
  v276 = (void *)(v809 - 12);
  if ( (int *)(v809 - 12) != &dword_28898C0 )
    v761 = (unsigned int *)(v809 - 4);
        v762 = __ldrex(v761);
      while ( __strex(v762 - 1, v761) );
      v762 = (*v761)--;
    if ( v762 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v276);
  sub_119C884((void **)&v808, "podzol");
  v277 = registerBlockGraphics((int)&v1112, (unsigned int *)&v808);
  *((_DWORD *)v277 + 8) = 1058510744;
  *((_DWORD *)v277 + 9) = 1054530268;
  *((_DWORD *)v277 + 10) = 1050319515;
  *((_DWORD *)v277 + 11) = 0;
  v278 = (void *)(v808 - 12);
  if ( (int *)(v808 - 12) != &dword_28898C0 )
    v763 = (unsigned int *)(v808 - 4);
        v764 = __ldrex(v763);
      while ( __strex(v764 - 1, v763) );
      v764 = (*v763)--;
    if ( v764 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v278);
  sub_119C884((void **)&v807, "beetroot");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v807);
  v279 = (void *)(v807 - 12);
  if ( (int *)(v807 - 12) != &dword_28898C0 )
    v765 = (unsigned int *)(v807 - 4);
        v766 = __ldrex(v765);
      while ( __strex(v766 - 1, v765) );
      v766 = (*v765)--;
    if ( v766 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v279);
  sub_119C884((void **)&v806, "stonecutter");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v806);
  v280 = (void *)(v806 - 12);
  if ( (int *)(v806 - 12) != &dword_28898C0 )
    v767 = (unsigned int *)(v806 - 4);
        v768 = __ldrex(v767);
      while ( __strex(v768 - 1, v767) );
      v768 = (*v767)--;
    if ( v768 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v280);
  sub_119C884((void **)&v805, "glowingobsidian");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v805);
  v281 = (void *)(v805 - 12);
  if ( (int *)(v805 - 12) != &dword_28898C0 )
    v769 = (unsigned int *)(v805 - 4);
        v770 = __ldrex(v769);
      while ( __strex(v770 - 1, v769) );
      v770 = (*v769)--;
    if ( v770 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v281);
  sub_119C884((void **)&v804, "netherreactor");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v804);
  v282 = (void *)(v804 - 12);
  if ( (int *)(v804 - 12) != &dword_28898C0 )
    v771 = (unsigned int *)(v804 - 4);
        v772 = __ldrex(v771);
      while ( __strex(v772 - 1, v771) );
      v772 = (*v771)--;
    if ( v772 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v282);
  sub_119C884((void **)&v803, "info_update");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v803);
  v283 = (void *)(v803 - 12);
  if ( (int *)(v803 - 12) != &dword_28898C0 )
    v773 = (unsigned int *)(v803 - 4);
        v774 = __ldrex(v773);
      while ( __strex(v774 - 1, v773) );
      v774 = (*v773)--;
    if ( v774 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v283);
  sub_119C884((void **)&v802, "info_update2");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v802);
  v284 = (void *)(v802 - 12);
  if ( (int *)(v802 - 12) != &dword_28898C0 )
    v775 = (unsigned int *)(v802 - 4);
        v776 = __ldrex(v775);
      while ( __strex(v776 - 1, v775) );
      v776 = (*v775)--;
    if ( v776 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v284);
  sub_119C884((void **)&v801, "movingBlock");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v801);
  v285 = (void *)(v801 - 12);
  if ( (int *)(v801 - 12) != &dword_28898C0 )
    v777 = (unsigned int *)(v801 - 4);
        v778 = __ldrex(v777);
      while ( __strex(v778 - 1, v777) );
      v778 = (*v777)--;
    if ( v778 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v285);
  sub_119C884((void **)&v800, "observer");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v800);
  v286 = (void *)(v800 - 12);
  if ( (int *)(v800 - 12) != &dword_28898C0 )
    v779 = (unsigned int *)(v800 - 4);
        v780 = __ldrex(v779);
      while ( __strex(v780 - 1, v779) );
      v780 = (*v779)--;
    if ( v780 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v286);
  sub_119C884((void **)&v799, "stained_glass");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v799);
  v287 = (void *)(v799 - 12);
  if ( (int *)(v799 - 12) != &dword_28898C0 )
    v781 = (unsigned int *)(v799 - 4);
        v782 = __ldrex(v781);
      while ( __strex(v782 - 1, v781) );
      v782 = (*v781)--;
    if ( v782 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v287);
  sub_119C884((void **)&v798, "stained_glass_pane");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v798)[49] = 1;
  v288 = (void *)(v798 - 12);
  if ( (int *)(v798 - 12) != &dword_28898C0 )
    v783 = (unsigned int *)(v798 - 4);
        v784 = __ldrex(v783);
      while ( __strex(v784 - 1, v783) );
      v784 = (*v783)--;
    if ( v784 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v288);
  sub_119C884((void **)&v797, "frosted_ice");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v797);
  v289 = (void *)(v797 - 12);
  if ( (int *)(v797 - 12) != &dword_28898C0 )
    v785 = (unsigned int *)(v797 - 4);
        v786 = __ldrex(v785);
      while ( __strex(v786 - 1, v785) );
      v786 = (*v785)--;
    if ( v786 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v289);
  sub_119C884((void **)&v796, "reserved6");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v796);
  v290 = (void *)(v796 - 12);
  if ( (int *)(v796 - 12) != &dword_28898C0 )
    v787 = (unsigned int *)(v796 - 4);
        v788 = __ldrex(v787);
      while ( __strex(v788 - 1, v787) );
      v788 = (*v787)--;
    if ( v788 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v290);
  sub_119C884((void **)&v795, "fire");
  registerBlockGraphics((int)&v1112, (unsigned int *)&v795);
  v291 = (void *)(v795 - 12);
  if ( (int *)(v795 - 12) != &dword_28898C0 )
    v789 = (unsigned int *)(v795 - 4);
        v790 = __ldrex(v789);
      while ( __strex(v790 - 1, v789) );
      v790 = (*v789)--;
    if ( v790 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v291);
  v292 = 1;
  do
    v297 = BlockGraphics::mBlocks[v292];
    if ( v297 )
      v298 = 0;
      v299 = 84;
      {
        v300 = *(_DWORD *)(*(_DWORD *)(v297 + v299) - 12);
        if ( !v300 )
          break;
        v299 += 20;
        v302 = __OFSUB__(v298, 5);
        v301 = v298++ - 5 < 0;
      }
      while ( v301 ^ v302 );
      if ( v300 )
        goto LABEL_275;
      Util::toString<int,(void *)0,(void *)0>((void **)&v794, v292);
      registerBlockGraphics((int)&v1112, (unsigned int *)&v794);
      v303 = (void *)(v794 - 12);
      if ( (int *)(v794 - 12) != &dword_28898C0 )
        v295 = (unsigned int *)(v794 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v296 = __ldrex(v295);
          while ( __strex(v296 - 1, v295) );
        }
        else
          v296 = (*v295)--;
        if ( v296 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v303);
      v297 = BlockGraphics::mBlocks[v292];
    sub_119C884((void **)&v793, "missing_tile");
    BlockGraphics::setTextureItem(v297, &v793, &v793, &v793, &v793, &v793, &v793);
    v304 = (void *)(v793 - 12);
    if ( (int *)(v793 - 12) != &dword_28898C0 )
      v293 = (unsigned int *)(v793 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v294 = __ldrex(v293);
        while ( __strex(v294 - 1, v293) );
      else
        v294 = (*v293)--;
      if ( v294 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v304);
LABEL_275:
    ++v292;
  while ( v292 < 256 );
  v1108 = &off_26EAB00;
  if ( v1110 )
    v1110();
  v305 = (void *)(v1109 - 12);
  if ( (int *)(v1109 - 12) != &dword_28898C0 )
    v791 = (unsigned int *)(v1109 - 4);
        v792 = __ldrex(v791);
      while ( __strex(v792 - 1, v791) );
      v792 = (*v791)--;
    if ( v792 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v305);
  Json::Reader::~Reader((Json::Reader *)&v1111);
  return Json::Value::~Value((Json::Value *)&v1112);
}


int __fastcall BlockGraphics::setTextureItem(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  int v7; // r4@1
  int *v8; // r5@1
  int *v9; // r6@1
  int *v10; // r0@1
  int *v11; // r7@1
  int *v12; // r0@1
  int *v13; // r6@1
  int *v14; // r0@1
  int *v15; // r5@1
  int *v16; // r0@1
  int *v17; // r5@1
  int *v18; // r0@1
  int *v19; // r5@1
  int *v20; // r0@1
  int *v21; // r5@1

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = EntityInteraction::setInteractText((int *)(a1 + 328), a2);
  v11 = BlockGraphics::getTextureItem((int **)v10);
  EntityInteraction::setInteractText((int *)(v7 + 104), v11);
  *(_DWORD *)(v7 + 108) = v11[1];
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v7 + 112,
    (unsigned __int64 *)v11 + 1);
  v12 = EntityInteraction::setInteractText((int *)(v7 + 324), v9);
  v13 = BlockGraphics::getTextureItem((int **)v12);
  EntityInteraction::setInteractText((int *)(v7 + 84), v13);
  *(_DWORD *)(v7 + 88) = v13[1];
    v7 + 92,
    (unsigned __int64 *)v13 + 1);
  v14 = EntityInteraction::setInteractText((int *)(v7 + 332), v8);
  v15 = BlockGraphics::getTextureItem((int **)v14);
  EntityInteraction::setInteractText((int *)(v7 + 124), v15);
  *(_DWORD *)(v7 + 128) = v15[1];
    v7 + 132,
    (unsigned __int64 *)v15 + 1);
  v16 = EntityInteraction::setInteractText((int *)(v7 + 336), a5);
  v17 = BlockGraphics::getTextureItem((int **)v16);
  EntityInteraction::setInteractText((int *)(v7 + 144), v17);
  *(_DWORD *)(v7 + 148) = v17[1];
    v7 + 152,
    (unsigned __int64 *)v17 + 1);
  v18 = EntityInteraction::setInteractText((int *)(v7 + 340), a6);
  v19 = BlockGraphics::getTextureItem((int **)v18);
  EntityInteraction::setInteractText((int *)(v7 + 164), v19);
  *(_DWORD *)(v7 + 168) = v19[1];
    v7 + 172,
    (unsigned __int64 *)v19 + 1);
  v20 = EntityInteraction::setInteractText((int *)(v7 + 344), a7);
  v21 = BlockGraphics::getTextureItem((int **)v20);
  EntityInteraction::setInteractText((int *)(v7 + 184), v21);
  *(_DWORD *)(v7 + 188) = v21[1];
    v7 + 192,
    (unsigned __int64 *)v21 + 1);
  return v7;
}


signed int __fastcall BlockGraphics::setBlockShape(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  BlockGraphics *v3; // r5@1
  Json::Value *v4; // r9@1
  char v5; // r0@1
  int v6; // r7@3
  char *v7; // r4@3
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // r1@16
  int v11; // t1@16
  void *v12; // r0@16
  BlockGraphics *v13; // r9@21
  int v14; // r0@21
  void *v15; // r5@22
  size_t v16; // r6@22
  int *v17; // r8@22
  int *v18; // r4@23
  _DWORD *v19; // r0@24
  size_t v20; // r7@24
  size_t v21; // r2@24
  int v22; // r0@26
  char *v24; // r5@36
  _DWORD *v25; // r1@36
  unsigned int v26; // r6@36
  unsigned int v27; // r7@36
  size_t v28; // r2@36
  int v29; // r0@38
  void *v30; // r0@45
  unsigned int *v32; // r2@51
  signed int v33; // r1@53
  unsigned int *v34; // r2@55
  signed int v35; // r1@57
  int v36; // [sp+8h] [bp-2D8h]@21
  void *s2; // [sp+Ch] [bp-2D4h]@21
  char v38[4]; // [sp+10h] [bp-2D0h]@3
  int v39; // [sp+14h] [bp-2CCh]@3
  int v40; // [sp+18h] [bp-2C8h]@3
  int v41; // [sp+1Ch] [bp-2C4h]@3
  int v42; // [sp+20h] [bp-2C0h]@3
  int v43; // [sp+24h] [bp-2BCh]@3
  int v44; // [sp+28h] [bp-2B8h]@3
  int v45; // [sp+2Ch] [bp-2B4h]@3
  int v46; // [sp+30h] [bp-2B0h]@3
  int v47; // [sp+34h] [bp-2ACh]@3
  int v48; // [sp+38h] [bp-2A8h]@3
  int v49; // [sp+3Ch] [bp-2A4h]@3
  int v50; // [sp+40h] [bp-2A0h]@3
  int v51; // [sp+44h] [bp-29Ch]@3
  int v52; // [sp+48h] [bp-298h]@3
  int v53; // [sp+4Ch] [bp-294h]@3
  int v54; // [sp+50h] [bp-290h]@3
  int v55; // [sp+54h] [bp-28Ch]@3
  int v56; // [sp+58h] [bp-288h]@3
  int v57; // [sp+5Ch] [bp-284h]@3
  int v58; // [sp+60h] [bp-280h]@3
  int v59; // [sp+64h] [bp-27Ch]@3
  int v60; // [sp+68h] [bp-278h]@3
  int v61; // [sp+6Ch] [bp-274h]@3
  int v62; // [sp+70h] [bp-270h]@3
  int v63; // [sp+74h] [bp-26Ch]@3
  int v64; // [sp+78h] [bp-268h]@3
  int v65; // [sp+7Ch] [bp-264h]@3
  int v66; // [sp+80h] [bp-260h]@3
  int v67; // [sp+84h] [bp-25Ch]@3
  int v68; // [sp+88h] [bp-258h]@3
  int v69; // [sp+8Ch] [bp-254h]@3
  int v70; // [sp+90h] [bp-250h]@3
  int v71; // [sp+94h] [bp-24Ch]@3
  int v72; // [sp+98h] [bp-248h]@3
  int v73; // [sp+9Ch] [bp-244h]@3
  int v74; // [sp+A0h] [bp-240h]@3
  int v75; // [sp+A4h] [bp-23Ch]@3
  int v76; // [sp+A8h] [bp-238h]@3
  int v77; // [sp+ACh] [bp-234h]@3
  int v78; // [sp+B0h] [bp-230h]@3
  int v79; // [sp+B4h] [bp-22Ch]@3
  int v80; // [sp+B8h] [bp-228h]@3
  int v81; // [sp+BCh] [bp-224h]@3
  int v82; // [sp+C0h] [bp-220h]@3
  int v83; // [sp+C4h] [bp-21Ch]@3
  int v84; // [sp+C8h] [bp-218h]@3
  int v85; // [sp+CCh] [bp-214h]@3
  int v86; // [sp+D0h] [bp-210h]@3
  int v87; // [sp+D4h] [bp-20Ch]@3
  int v88; // [sp+D8h] [bp-208h]@3
  int v89; // [sp+DCh] [bp-204h]@3
  int v90; // [sp+E0h] [bp-200h]@3
  int v91; // [sp+E4h] [bp-1FCh]@3
  int v92; // [sp+E8h] [bp-1F8h]@3
  int v93; // [sp+ECh] [bp-1F4h]@3
  int v94; // [sp+F0h] [bp-1F0h]@3
  int v95; // [sp+F4h] [bp-1ECh]@3
  int v96; // [sp+F8h] [bp-1E8h]@3
  int v97; // [sp+FCh] [bp-1E4h]@3
  int v98; // [sp+100h] [bp-1E0h]@3
  int v99; // [sp+104h] [bp-1DCh]@3
  int v100; // [sp+108h] [bp-1D8h]@3
  int v101; // [sp+10Ch] [bp-1D4h]@3
  int v102; // [sp+110h] [bp-1D0h]@3
  int v103; // [sp+114h] [bp-1CCh]@3
  int v104; // [sp+118h] [bp-1C8h]@3
  int v105; // [sp+11Ch] [bp-1C4h]@3
  int v106; // [sp+120h] [bp-1C0h]@3
  int v107; // [sp+124h] [bp-1BCh]@3
  int v108; // [sp+128h] [bp-1B8h]@3
  int v109; // [sp+12Ch] [bp-1B4h]@3
  int v110; // [sp+130h] [bp-1B0h]@3
  int v111; // [sp+134h] [bp-1ACh]@3
  int v112; // [sp+138h] [bp-1A8h]@3
  int v113; // [sp+13Ch] [bp-1A4h]@3
  int v114; // [sp+140h] [bp-1A0h]@3
  int v115; // [sp+144h] [bp-19Ch]@3
  int v116; // [sp+148h] [bp-198h]@3
  int v117; // [sp+14Ch] [bp-194h]@3
  int v118; // [sp+150h] [bp-190h]@3
  int v119; // [sp+154h] [bp-18Ch]@3
  int v120; // [sp+158h] [bp-188h]@3
  int v121; // [sp+15Ch] [bp-184h]@3
  int v122; // [sp+160h] [bp-180h]@3
  int v123; // [sp+164h] [bp-17Ch]@3
  int v124; // [sp+168h] [bp-178h]@3
  int v125; // [sp+16Ch] [bp-174h]@3
  int v126; // [sp+170h] [bp-170h]@3
  int v127; // [sp+174h] [bp-16Ch]@3
  int v128; // [sp+178h] [bp-168h]@3
  int v129; // [sp+17Ch] [bp-164h]@3
  int v130; // [sp+180h] [bp-160h]@3
  int v131; // [sp+184h] [bp-15Ch]@3
  int v132; // [sp+188h] [bp-158h]@3
  int v133; // [sp+18Ch] [bp-154h]@3
  int v134; // [sp+190h] [bp-150h]@3
  int v135; // [sp+194h] [bp-14Ch]@3
  int v136; // [sp+198h] [bp-148h]@3
  int v137; // [sp+19Ch] [bp-144h]@3
  int v138; // [sp+1A0h] [bp-140h]@3
  int v139; // [sp+1A4h] [bp-13Ch]@3
  int v140; // [sp+1A8h] [bp-138h]@3
  int v141; // [sp+1ACh] [bp-134h]@3
  int v142; // [sp+1B0h] [bp-130h]@3
  int v143; // [sp+1B4h] [bp-12Ch]@3
  int v144; // [sp+1B8h] [bp-128h]@3
  int v145; // [sp+1BCh] [bp-124h]@3
  int v146; // [sp+1C0h] [bp-120h]@3
  int v147; // [sp+1C4h] [bp-11Ch]@3
  int v148; // [sp+1C8h] [bp-118h]@3
  int v149; // [sp+1CCh] [bp-114h]@3
  char v150; // [sp+1D0h] [bp-110h]@3
  int v151; // [sp+2B0h] [bp-30h]@4
  int v152; // [sp+2B4h] [bp-2Ch]@4

  v3 = this;
  v4 = a2;
  v5 = byte_27CC860;
  __dmb();
  if ( !(v5 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC860) )
  {
    sub_119C884((void **)v38, "invisible");
    v39 = -1;
    sub_119C884((void **)&v40, "block");
    v41 = 0;
    sub_119C884((void **)&v42, "cross_texture");
    v43 = 1;
    sub_119C884((void **)&v44, "torch");
    v45 = 2;
    sub_119C884((void **)&v46, "fire");
    v47 = 3;
    sub_119C884((void **)&v48, "water");
    v49 = 4;
    sub_119C884((void **)&v50, "red_dust");
    v51 = 5;
    sub_119C884((void **)&v52, "rows");
    v53 = 6;
    sub_119C884((void **)&v54, "door");
    v55 = 7;
    sub_119C884((void **)&v56, "ladder");
    v57 = 8;
    sub_119C884((void **)&v58, "rail");
    v59 = 9;
    sub_119C884((void **)&v60, "stairs");
    v61 = 10;
    sub_119C884((void **)&v62, "fence");
    v63 = 11;
    sub_119C884((void **)&v64, "lever");
    v65 = 12;
    sub_119C884((void **)&v66, "cactus");
    v67 = 13;
    sub_119C884((void **)&v68, "bed");
    v69 = 14;
    sub_119C884((void **)&v70, "diode");
    v71 = 15;
    sub_119C884((void **)&v72, "iron_fence");
    v73 = 18;
    sub_119C884((void **)&v74, "stem");
    v75 = 19;
    sub_119C884((void **)&v76, "vine");
    v77 = 20;
    sub_119C884((void **)&v78, "fence_gate");
    v79 = 21;
    sub_119C884((void **)&v80, "chest");
    v81 = 22;
    sub_119C884((void **)&v82, "lilypad");
    v83 = 23;
    sub_119C884((void **)&v84, "brewing_stand");
    v85 = 25;
    sub_119C884((void **)&v86, "portal_frame");
    v87 = 26;
    sub_119C884((void **)&v88, "cocoa");
    v89 = 28;
    sub_119C884((void **)&v90, "tree");
    v91 = 31;
    sub_119C884((void **)&v92, "wall");
    v93 = 32;
    sub_119C884((void **)&v94, "double_plant");
    v95 = 40;
    sub_119C884((void **)&v96, "flower_pot");
    v97 = 42;
    sub_119C884((void **)&v98, "anvil");
    v99 = 43;
    sub_119C884((void **)&v100, "cross_texture_poly");
    v101 = 65;
    sub_119C884((void **)&v102, "double_plant_poly");
    v103 = 66;
    sub_119C884((void **)&v104, "block_half");
    v105 = 67;
    sub_119C884((void **)&v106, "top_snow");
    v107 = 68;
    sub_119C884((void **)&v108, "tripwire");
    v109 = 69;
    sub_119C884((void **)&v110, "tripwire_hook");
    v111 = 70;
    sub_119C884((void **)&v112, "cauldron");
    v113 = 71;
    sub_119C884((void **)&v114, "repeater");
    v115 = 72;
    sub_119C884((void **)&v116, "comparator");
    v117 = 73;
    sub_119C884((void **)&v118, "hopper");
    v119 = 74;
    sub_119C884((void **)&v120, "slime_block");
    v121 = 75;
    sub_119C884((void **)&v122, "piston");
    v123 = 76;
    sub_119C884((void **)&v124, "beacon");
    v125 = 77;
    sub_119C884((void **)&v126, "chorus_plant");
    v127 = 78;
    sub_119C884((void **)&v128, "chorus_flower");
    v129 = 79;
    sub_119C884((void **)&v130, "dragon_egg");
    v131 = 44;
    sub_119C884((void **)&v132, "end_portal");
    v133 = 80;
    sub_119C884((void **)&v134, "end_rod");
    v135 = 81;
    sub_119C884((void **)&v136, "structure_void");
    v137 = 48;
    sub_119C884((void **)&v138, "facing_block");
    v139 = 84;
    sub_119C884((void **)&v140, "command_block");
    v141 = 85;
    sub_119C884((void **)&v142, "terracotta");
    v143 = 86;
    sub_119C884((void **)&v144, "double_side_fence");
    v145 = 87;
    sub_119C884((void **)&v146, "frame");
    v147 = 88;
    sub_119C884((void **)&v148, "shulker_box");
    v149 = 89;
    v6 = 0;
    v7 = &v150;
    dword_27CC8D4 = 0;
    dword_27CC8D8 = 0;
    unk_27CC8E4 = 0;
    unk_27CC8DC = &dword_27CC8D4;
    unk_27CC8E0 = &dword_27CC8D4;
    do
    {
      std::_Rb_tree<std::string,std::pair<std::string const,BlockShape>,std::_Select1st<std::pair<std::string const,BlockShape>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockShape>>>::_M_get_insert_hint_unique_pos(
        (int)&v151,
        (int)&unk_27CC8D0,
        (int)&dword_27CC8D4,
        (const void **)&v38[v6]);
      if ( v152 )
        std::_Rb_tree<std::string,std::pair<std::string const,BlockShape>,std::_Select1st<std::pair<std::string const,BlockShape>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockShape>>>::_M_insert_<std::pair<std::string const,BlockShape> const&>(
          (int)&unk_27CC8D0,
          v151,
          v152,
          (const void **)&v38[v6]);
      v6 += 8;
    }
    while ( v6 != 448 );
      v11 = *((_DWORD *)v7 - 2);
      v7 -= 8;
      v10 = v11;
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
    while ( v7 != v38 );
    _cxa_atexit(std::map<std::string,BlockShape,std::less<std::string>,std::allocator<std::pair<std::string const,BlockShape>>>::~map);
    j___cxa_guard_release((unsigned int *)&byte_27CC860);
  }
  if ( Json::Value::isNull(v4) )
    return 1;
  if ( Json::Value::isString(v4) == 1 )
    sub_119C884((void **)&v36, (const char *)&unk_257BC67);
    Json::Value::asString((int *)&s2, (int)v4, &v36);
    v13 = v3;
    v14 = dword_27CC8D8;
    if ( dword_27CC8D8 )
      v15 = s2;
      v16 = *((_DWORD *)s2 - 3);
      v17 = &dword_27CC8D4;
      do
        v18 = (int *)v14;
        while ( 1 )
          v19 = (_DWORD *)v18[4];
          v20 = *(v19 - 3);
          v21 = *(v19 - 3);
          if ( v20 > v16 )
            v21 = v16;
          v22 = memcmp(v19, v15, v21);
          if ( !v22 )
            v22 = v20 - v16;
          if ( v22 >= 0 )
            break;
          v18 = (int *)v18[3];
          if ( !v18 )
          {
            v18 = v17;
            goto LABEL_35;
          }
        v14 = v18[2];
        v17 = v18;
      while ( v14 );
    else
      v18 = &dword_27CC8D4;
LABEL_35:
    if ( v18 == &dword_27CC8D4 )
      v24 = (char *)s2;
      v25 = (_DWORD *)v18[4];
      v26 = *((_DWORD *)s2 - 3);
      v27 = *(v25 - 3);
      v28 = *((_DWORD *)s2 - 3);
      if ( v26 > v27 )
        v28 = *(v25 - 3);
      v29 = memcmp(s2, v25, v28);
      if ( !v29 )
        v29 = v26 - v27;
      if ( v29 < 0 )
        v18 = &dword_27CC8D4;
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24 - 12);
    v30 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v36 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
      return 0;
    *((_DWORD *)v13 + 5) = v18[5];
  return 0;
}


void __fastcall BlockGraphics::~BlockGraphics(BlockGraphics *this)
{
  BlockGraphics::~BlockGraphics(this);
}


int __fastcall BlockGraphics::getTextureVariations(__int64 this, int a2)
{
  HIDWORD(this) *= 5;
  if ( a2 <= -1 )
  {
    a2 = 0;
    LODWORD(this) = *(_DWORD *)(this + 4 * HIDWORD(this) + 92);
  }
  else
    this = *(_QWORD *)(this + 4 * HIDWORD(this) + 92);
    if ( -1431655765 * ((HIDWORD(this) - (signed int)this) >> 2) <= a2 )
      a2 = 0;
  return this + 12 * a2;
}


int __fastcall BlockGraphics::enableAllowSame(int result)
{
  *(_BYTE *)(result + 49) = 1;
  return result;
}


int __fastcall BlockGraphics::setSoundType(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


signed int __fastcall BlockGraphics::isFull(BlockGraphics *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 5);
  result = 1;
  if ( (unsigned int)(v1 - 84) >= 2 && v1 && v1 != 31 )
    result = 0;
  return result;
}


signed int __fastcall BlockGraphics::getColor(BlockGraphics *this, int a2)
{
  return -1;
}


int __fastcall BlockGraphics::lookupByName(unsigned int *a1, int a2)
{
  int v2; // r7@1
  int v3; // r1@1
  int v4; // r4@4
  unsigned int v5; // r9@6
  unsigned int v6; // r10@6
  int v7; // r11@6
  int *v8; // r5@6
  int v9; // r6@7
  _DWORD *v10; // r8@7
  int v11; // r7@7
  const void *v12; // r1@9
  size_t v13; // r2@9
  int v14; // r0@10
  int v15; // r4@11
  char *v16; // r0@15
  unsigned int v17; // r9@16
  unsigned int v18; // r10@16
  int v19; // r11@16
  int *v20; // r5@16
  int v21; // r6@17
  _DWORD *v22; // r8@17
  int v23; // r7@17
  _DWORD *v24; // r1@19
  size_t v25; // r2@19
  int v26; // r4@21
  bool v27; // zf@26
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  char *v30; // r0@44
  unsigned int *v32; // r2@46
  signed int v33; // r1@48
  char *v34; // [sp+0h] [bp-40h]@15
  void *s1; // [sp+4h] [bp-3Ch]@3

  v2 = a2;
  v3 = *(_DWORD *)(*a1 - 12);
  if ( !v3 )
    return 0;
  if ( v2 == 1 )
    Util::toLower(&s1, v3, *a1);
  else
    sub_119C854((int *)&s1, (int *)a1);
  v5 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v6 = unk_27CC838;
  v7 = v5 % unk_27CC838;
  v8 = *(int **)(BlockGraphics::mBlockLookupMap + 4 * (v5 % unk_27CC838));
  if ( v8 )
  {
    v9 = *v8;
    v10 = s1;
    v11 = *(_DWORD *)(*v8 + 12);
    while ( 1 )
    {
      if ( v11 == v5 )
      {
        v12 = *(const void **)(v9 + 4);
        v13 = *(v10 - 3);
        if ( v13 == *((_DWORD *)v12 - 3) )
        {
          v14 = memcmp(v10, v12, v13);
          if ( !v14 )
            break;
        }
      }
      v15 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
        v11 = *(_DWORD *)(v15 + 12);
        v8 = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v15 + 12) % v6 == v7 )
          continue;
      goto LABEL_13;
    }
    v27 = v8 == 0;
    if ( v8 )
      v14 = *v8;
      v27 = *v8 == 0;
    if ( !v27 )
      goto LABEL_33;
  }
LABEL_13:
  if ( sub_119CA58((int *)&s1, "tile.", 0, 5u) != -1 )
    v4 = 0;
    goto LABEL_44;
  v34 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v34, *((_DWORD *)s1 - 3) + 5);
  sub_119C894((const void **)&v34, "tile.", 5u);
  sub_119C8A4((const void **)&v34, (const void **)&s1);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&s1,
    (int *)&v34);
  v16 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v18 = unk_27CC838;
  v19 = v17 % unk_27CC838;
  v20 = *(int **)(BlockGraphics::mBlockLookupMap + 4 * (v17 % unk_27CC838));
  if ( !v20 )
  v21 = *v20;
  v22 = s1;
  v23 = *(_DWORD *)(*v20 + 12);
  while ( 1 )
    if ( v23 == v17 )
      v24 = *(_DWORD **)(v21 + 4);
      v25 = *(v22 - 3);
      if ( v25 == *(v24 - 3) && !memcmp(v22, v24, v25) )
        break;
    v26 = *(_DWORD *)v21;
    if ( !*(_DWORD *)v21 )
      v4 = 0;
      goto LABEL_44;
    v23 = *(_DWORD *)(v26 + 12);
    v20 = (int *)v21;
    v21 = *(_DWORD *)v21;
    if ( *(_DWORD *)(v26 + 12) % v18 != v19 )
  if ( v20 )
    v14 = *v20;
    if ( *v20 )
LABEL_33:
      v4 = *(_DWORD *)(v14 + 8);
LABEL_44:
  v30 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)((char *)s1 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  return v4;
}


void __fastcall BlockGraphics::~BlockGraphics(BlockGraphics *this)
{
  BlockGraphics *v1; // r0@1

  v1 = BlockGraphics::~BlockGraphics(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall BlockGraphics::_chooseRandomTexture(int a1, __int64 *a2)
{
  int v8; // r2@2
  int v9; // r3@2

  _R2 = a1;
  _R0 = *a2;
  if ( HIDWORD(_R0) - (signed int)_R0 < 33 )
  {
LABEL_5:
    LODWORD(_R0) = HIDWORD(_R0) - 32;
  }
  else
    __asm { VMOV            S0, R2 }
    v8 = ((HIDWORD(_R0) - (signed int)_R0) >> 5) - 1;
    v9 = 0;
    while ( 1 )
    {
      __asm
      {
        VLDR            S2, [R0]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        break;
      __asm { VSUB.F32        S0, S0, S2 }
      ++v9;
      LODWORD(_R0) = _R0 + 32;
      if ( v9 >= v8 )
        goto LABEL_5;
    }
  return _R0;
}


int __fastcall BlockGraphics::setBlockShape(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


int __fastcall BlockGraphics::BlockGraphics(int a1, unsigned int *a2)
{
  int v2; // r4@1
  unsigned int *v3; // r5@1
  int v4; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26DAEB4;
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 28) = 1065353216;
  *(_DWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 49) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  AABB::AABB((AABB *)(a1 + 56));
  *(_DWORD *)(v2 + 92) = 0;
  *(_DWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 84) = &unk_28898CC;
  *(_DWORD *)(v2 + 88) = 0;
  *(_DWORD *)(v2 + 100) = 0;
  *(_DWORD *)(v2 + 104) = &unk_28898CC;
  *(_DWORD *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 124) = &unk_28898CC;
  *(_DWORD *)(v2 + 128) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = &unk_28898CC;
  *(_DWORD *)(v2 + 156) = 0;
  *(_DWORD *)(v2 + 160) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  *(_DWORD *)(v2 + 172) = 0;
  *(_DWORD *)(v2 + 176) = 0;
  *(_DWORD *)(v2 + 164) = &unk_28898CC;
  *(_DWORD *)(v2 + 168) = 0;
  *(_DWORD *)(v2 + 180) = 0;
  *(_DWORD *)(v2 + 184) = &unk_28898CC;
  *(_DWORD *)(v2 + 196) = 0;
  *(_DWORD *)(v2 + 200) = 0;
  *(_DWORD *)(v2 + 188) = 0;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 212) = 0;
  *(_DWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 204) = &unk_28898CC;
  *(_DWORD *)(v2 + 208) = 0;
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 224) = &unk_28898CC;
  *(_DWORD *)(v2 + 236) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 228) = 0;
  *(_DWORD *)(v2 + 232) = 0;
  *(_DWORD *)(v2 + 252) = 0;
  *(_DWORD *)(v2 + 256) = 0;
  *(_DWORD *)(v2 + 244) = &unk_28898CC;
  *(_DWORD *)(v2 + 248) = 0;
  *(_DWORD *)(v2 + 260) = 0;
  *(_DWORD *)(v2 + 264) = &unk_28898CC;
  *(_DWORD *)(v2 + 276) = 0;
  *(_DWORD *)(v2 + 280) = 0;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 292) = 0;
  *(_DWORD *)(v2 + 296) = 0;
  *(_DWORD *)(v2 + 284) = &unk_28898CC;
  *(_DWORD *)(v2 + 288) = 0;
  *(_DWORD *)(v2 + 300) = 0;
  *(_DWORD *)(v2 + 304) = &unk_28898CC;
  *(_DWORD *)(v2 + 316) = 0;
  *(_DWORD *)(v2 + 320) = 0;
  *(_DWORD *)(v2 + 308) = 0;
  *(_DWORD *)(v2 + 312) = 0;
  *(_DWORD *)(v2 + 324) = &unk_28898CC;
  *(_DWORD *)(v2 + 328) = &unk_28898CC;
  *(_DWORD *)(v2 + 332) = &unk_28898CC;
  *(_DWORD *)(v2 + 336) = &unk_28898CC;
  *(_DWORD *)(v2 + 340) = &unk_28898CC;
  *(_DWORD *)(v2 + 344) = &unk_28898CC;
  *(_DWORD *)(v2 + 348) = &unk_28898CC;
  *(_DWORD *)(v2 + 352) = &unk_28898CC;
  *(_DWORD *)(v2 + 356) = &unk_28898CC;
  *(_DWORD *)(v2 + 360) = &unk_28898CC;
  *(_DWORD *)(v2 + 364) = &unk_28898CC;
  *(_DWORD *)(v2 + 368) = &unk_28898CC;
  v4 = Block::lookupByName(v3, 1);
  *(_DWORD *)(v2 + 8) = v4;
  *(_BYTE *)(v2 + 4) = *(_BYTE *)(v4 + 4);
  return v2;
}


signed int __fastcall BlockGraphics::getColor(BlockGraphics *this, BlockSource *a2, const BlockPos *a3)
{
  return -1;
}


int __fastcall BlockGraphics::setAllFacesIsotropic(int result)
{
  *(_DWORD *)(result + 12) = 255;
  return result;
}


int __fastcall BlockGraphics::isSeasonTinted(BlockGraphics *this, BlockSource *a2, const BlockPos *a3)
{
  return 0;
}


int __fastcall BlockGraphics::getMapColor(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)(a2 + 32);
  v3 = *(_DWORD *)(a2 + 36);
  v4 = *(_DWORD *)(a2 + 40);
  v5 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


char *__fastcall BlockGraphics::getAtlasItem(BlockGraphics *this, int a2)
{
  return (char *)this + 20 * a2 + 84;
}


      if ( (v5 = BlockGraphics::getBlockShape((BlockGraphics *)result), v5 <= 0x1C) && (1 << v5)
{
      {
        result = unk_2700410;
        if ( unk_2700410 )
        {
          v6 = (_BYTE *)Facing::ALL_FACES;
          v14 = unk_2700410 + Facing::ALL_FACES;
          do
          {
            v7 = *((_QWORD *)BlockGraphics::getAtlasItem(v15, *v6) + 1);
            if ( HIDWORD(v7) != (_DWORD)v7 )
            {
              v8 = 0;
              do
              {
                HIDWORD(v9) = *v6;
                LODWORD(v9) = v15;
                for ( i = *(_QWORD *)BlockGraphics::getTextureVariations(v9, v8);
                      HIDWORD(i) != (_DWORD)i;
                      LODWORD(i) = i + 32 )
                {
                  if ( !std::_Hashtable<ResourceLocation,std::pair<ResourceLocation const,mce::ImageBuffer const*>,std::allocator<std::pair<ResourceLocation const,mce::ImageBuffer const*>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::count(
                          (unsigned __int64 *)v1[1],
                          (int **)(i + 24)) )
                  {
                    v11 = v1[1];
                    v12 = mce::TextureGroup::getTexturePair(
                            *(mce::TextureGroup **)(v2 + 60),
                            (const ResourceLocation *)(i + 24));
                    v17 = mce::TextureContainer::getImage((mce::TextureContainer *)(v12 + 64), 0);
                    std::_Hashtable<ResourceLocation,std::pair<ResourceLocation const,mce::ImageBuffer const*>,std::allocator<std::pair<ResourceLocation const,mce::ImageBuffer const*>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ResourceLocation const&,mce::ImageBuffer*>(
                      &v16,
                      v11,
                      i + 24,
                      &v17);
                  }
                }
                ++v8;
              }
              while ( v8 != -1431655765 * ((HIDWORD(v7) - (signed int)v7) >> 2) );
            }
            ++v6;
            result = v14;
          }
          while ( v6 != (_BYTE *)v14 );
        }
      }
    }
    v3 = v13 + 1;
  }
  while ( v13 != 255 );
  return result;
}


signed int __fastcall BlockGraphics::setTextureIsotropic(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  Json::Value *v3; // r9@1
  BlockGraphics *v4; // r8@1
  signed int v5; // r10@2
  char v6; // r0@7
  void *v7; // r0@15
  void *v8; // r0@16
  void *v9; // r0@17
  char v10; // r0@19
  void *v11; // r0@33
  void *v12; // r0@34
  void *v13; // r0@35
  void *v14; // r0@36
  void *v15; // r0@37
  void *v16; // r0@38
  void *v17; // r6@40
  void *v18; // r10@40
  signed int v19; // r11@40
  char *v20; // r1@41
  unsigned int *v21; // r2@42
  signed int v22; // r5@44
  char *v23; // r4@48
  int *v24; // r0@49
  signed int v25; // r5@52
  Json::Value *v26; // r0@54
  signed int v27; // r0@54
  int v28; // r11@54
  void *v29; // r2@54
  int v30; // r7@56
  int v31; // r6@56
  Json::Value *v32; // r0@59
  Json::Value *v33; // r0@60
  unsigned int *v35; // r2@67
  signed int v36; // r1@69
  unsigned int *v37; // r2@71
  signed int v38; // r1@73
  unsigned int *v39; // r2@75
  signed int v40; // r1@77
  unsigned int *v41; // r2@79
  signed int v42; // r1@81
  unsigned int *v43; // r2@83
  signed int v44; // r1@85
  unsigned int *v45; // r2@87
  signed int v46; // r1@89
  unsigned int *v47; // r2@91
  signed int v48; // r1@93
  unsigned int *v49; // r2@95
  signed int v50; // r1@97
  unsigned int *v51; // r2@99
  signed int v52; // r1@101
  __int64 v53; // [sp+4h] [bp-B4h]@40
  void *v54; // [sp+Ch] [bp-ACh]@40
  int v55; // [sp+14h] [bp-A4h]@21
  int v56; // [sp+18h] [bp-A0h]@21
  int v57; // [sp+1Ch] [bp-9Ch]@21
  int v58; // [sp+20h] [bp-98h]@21
  int v59; // [sp+24h] [bp-94h]@21
  int v60; // [sp+28h] [bp-90h]@21
  int v61; // [sp+2Ch] [bp-8Ch]@21
  int v62; // [sp+30h] [bp-88h]@21
  int v63; // [sp+34h] [bp-84h]@21
  int v64; // [sp+38h] [bp-80h]@21
  int v65; // [sp+3Ch] [bp-7Ch]@21
  int v66; // [sp+40h] [bp-78h]@21
  int v67; // [sp+44h] [bp-74h]@9
  int v68; // [sp+48h] [bp-70h]@9
  int v69; // [sp+4Ch] [bp-6Ch]@9
  int v70; // [sp+50h] [bp-68h]@9
  int v71; // [sp+54h] [bp-64h]@9
  int v72; // [sp+58h] [bp-60h]@9
  int v73; // [sp+68h] [bp-50h]@9
  int v74; // [sp+6Ch] [bp-4Ch]@9
  int v75; // [sp+88h] [bp-30h]@21
  int v76; // [sp+8Ch] [bp-2Ch]@21
  char v77; // [sp+90h] [bp-28h]@41

  v3 = a2;
  v4 = this;
  if ( Json::Value::isNull(a2) )
  {
    v5 = 1;
  }
  else if ( Json::Value::isBool(v3) != 1 || Json::Value::asBool(v3, 0) != 1 )
    if ( Json::Value::isObject(v3) == 1 )
    {
      v6 = byte_27CC858;
      __dmb();
      if ( !(v6 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC858) )
      {
        sub_119C884((void **)&v67, "up");
        v68 = 2;
        sub_119C884((void **)&v69, "down");
        v70 = 1;
        sub_119C884((void **)&v71, "side");
        v72 = 60;
        dword_27CC898 = 0;
        dword_27CC89C = 0;
        unk_27CC8A8 = 0;
        unk_27CC8A0 = &dword_27CC898;
        unk_27CC8A4 = &dword_27CC898;
        std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_hint_unique_pos(
          (int)&v73,
          (int)&unk_27CC894,
          (int)&dword_27CC898,
          (const void **)&v67);
        if ( v74 )
          std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_<std::pair<std::string const,int> const&>(
            (int)&unk_27CC894,
            v73,
            v74,
            (const void **)&v67);
          (const void **)&v69);
            (const void **)&v69);
          (const void **)&v71);
            (const void **)&v71);
        v7 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
        {
          v35 = (unsigned int *)(v71 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v7);
        }
        v8 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v69 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v8);
        v9 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v67 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v9);
        _cxa_atexit(std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::~map);
        j___cxa_guard_release((unsigned int *)&byte_27CC858);
      }
      v10 = byte_27CC85C;
      if ( !(v10 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27CC85C) )
        sub_119C884((void **)&v55, "up");
        v56 = 2;
        sub_119C884((void **)&v57, "down");
        v58 = 1;
        sub_119C884((void **)&v59, "north");
        v60 = 4;
        sub_119C884((void **)&v61, "south");
        v62 = 8;
        sub_119C884((void **)&v63, "west");
        v64 = 16;
        sub_119C884((void **)&v65, "east");
        v66 = 32;
        dword_27CC8B0 = 0;
        dword_27CC8B4 = 0;
        unk_27CC8C0 = 0;
        dword_27CC8B8 = (int)&dword_27CC8B0;
        unk_27CC8BC = &dword_27CC8B0;
          (int)&v75,
          (int)&unk_27CC8AC,
          (int)&dword_27CC8B0,
          (const void **)&v55);
        if ( v76 )
            (int)&unk_27CC8AC,
            v75,
            v76,
            (const void **)&v55);
          (const void **)&v57);
            (const void **)&v57);
          (const void **)&v59);
            (const void **)&v59);
          (const void **)&v61);
            (const void **)&v61);
          (const void **)&v63);
            (const void **)&v63);
          (const void **)&v65);
            (const void **)&v65);
        v11 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v65 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v11);
        v12 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v63 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v12);
        v13 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v61 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
        v14 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v59 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v14);
        v15 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v57 - 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v15);
        v16 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v55 - 4);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v16);
        j___cxa_guard_release((unsigned int *)&byte_27CC85C);
      Json::Value::getMemberNames((Json::Value *)((char *)&v53 + 4), (int)v3);
      v18 = v54;
      v17 = (void *)HIDWORD(v53);
      v19 = (signed int)v54 - HIDWORD(v53);
      if ( v54 != (void *)HIDWORD(v53) )
        v20 = &v77;
        do
          v24 = (int *)(*(_DWORD *)v17 - 12);
          if ( v24 != &dword_28898C0 )
            v21 = (unsigned int *)(*(_DWORD *)v17 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v22 = __ldrex(v21);
              while ( __strex(v22 - 1, v21) );
            }
            else
              v22 = (*v21)--;
            if ( v22 <= 0 )
              v23 = v20;
              j_j_j_j_j__ZdlPv_9_1(v24);
              v20 = v23;
          v17 = (char *)v17 + 4;
        while ( v17 != v18 );
        v17 = (void *)HIDWORD(v53);
        v4 = (BlockGraphics *)v53;
      v25 = v19 >> 2;
      if ( v17 )
        operator delete(v17);
      v26 = (Json::Value *)Json::Value::operator[]((int)v3, "side");
      v27 = Json::Value::isNull(v26);
      v5 = 0;
      v28 = 0;
      v29 = &unk_27CC894;
      if ( v27 )
        v29 = &unk_27CC8AC;
      v30 = *((_DWORD *)v29 + 3);
      v31 = (int)v29 + 4;
      while ( v30 != v31 )
        v32 = (Json::Value *)Json::Value::operator[]((int)v3, (const char **)(v30 + 16));
        if ( Json::Value::isBool(v32) == 1 )
          v33 = (Json::Value *)Json::Value::operator[]((int)v3, (const char **)(v30 + 16));
          --v25;
          if ( Json::Value::asBool(v33, 0) == 1 )
            v28 |= *(_DWORD *)(v30 + 20);
        v30 = sub_119CAC8(v30);
      *((_DWORD *)v4 + 3) = v28;
      if ( !v25 )
        v5 = 1;
    }
    else
  else
    *((_DWORD *)v4 + 3) = 255;
  return v5;
}


signed int __fastcall BlockGraphics::isFullAndOpaque(BlockGraphics *this)
{
  BlockGraphics *v1; // r5@1
  int v2; // r0@1
  int v4; // r0@8
  signed int v11; // r4@5
  float v13; // [sp+4h] [bp-3Ch]@8
  int v16; // [sp+10h] [bp-30h]@8
  int v17; // [sp+14h] [bp-2Ch]@8
  int v18; // [sp+18h] [bp-28h]@8
  int v19; // [sp+1Ch] [bp-24h]@8
  int v20; // [sp+20h] [bp-20h]@8
  int v21; // [sp+24h] [bp-1Ch]@8
  char v22; // [sp+28h] [bp-18h]@8

  v1 = this;
  v2 = *((_DWORD *)this + 5);
  if ( (unsigned int)(v2 - 84) < 2 )
    goto LABEL_19;
  _ZF = v2 == 31;
  if ( v2 != 31 )
    _ZF = v2 == 0;
  if ( _ZF )
  {
LABEL_19:
    if ( Block::getRenderLayer(*((Block **)v1 + 2)) != 3 && Block::getRenderLayer(*((Block **)v1 + 2)) != 6 )
    {
      v11 = 0;
    }
    else
      AABB::AABB((AABB *)&v16);
      v4 = (*(int (__fastcall **)(BlockGraphics *, _DWORD, int *, _DWORD))(*(_DWORD *)v1 + 44))(v1, 0, &v16, 0);
      v16 = *(_DWORD *)v4;
      v17 = *(_DWORD *)(v4 + 4);
      v18 = *(_DWORD *)(v4 + 8);
      v19 = *(_DWORD *)(v4 + 12);
      v20 = *(_DWORD *)(v4 + 16);
      v21 = *(_DWORD *)(v4 + 20);
      v22 = *(_BYTE *)(v4 + 24);
      AABB::getBounds((AABB *)&v13, (int)&v16);
      __asm { VLDR            S2, [SP,#0x40+var_3C] }
      _R0 = &Vec3::ONE;
      __asm
      {
        VLDR            S0, [R0]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        v11 = 0;
        __asm { VLDR            S0, [SP,#0x40+var_38] }
        _R0 = &Vec3::ONE;
        __asm
        {
          VLDR            S2, [R0,#4]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm { VLDR            S0, [SP,#0x40+var_34] }
          _R0 = &Vec3::ONE;
          __asm
          {
            VLDR            S2, [R0,#8]
            VCMPE.F32       S0, S2
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _ZF )
            v11 = 1;
  }
  else
    v11 = 0;
  return v11;
}


int __fastcall BlockGraphics::setTextureIsotropic(int result, unsigned int a2)
{
  *(_DWORD *)(result + 12) = a2;
  return result;
}


int __fastcall BlockGraphics::getTexture(__int64 this, int a2, int a3)
{
  HIDWORD(this) *= 5;
  if ( a2 <= -1 )
  {
    a2 = 0;
    LODWORD(this) = *(_DWORD *)(this + 4 * HIDWORD(this) + 92);
  }
  else
    this = *(_QWORD *)(this + 4 * HIDWORD(this) + 92);
    if ( -1431655765 * ((HIDWORD(this) - (signed int)this) >> 2) <= a2 )
      a2 = 0;
  HIDWORD(this) = this + 12 * a2;
  if ( a3 <= -1 )
    LODWORD(this) = *(_DWORD *)HIDWORD(this);
    a3 = 0;
    this = *(_QWORD *)HIDWORD(this);
    if ( (HIDWORD(this) - (signed int)this) >> 5 <= a3 )
      a3 = 0;
  return this + 32 * a3;
}


signed int __fastcall BlockGraphics::setSoundType(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  BlockGraphics *v3; // r5@1
  BlockGraphics *v4; // r6@1
  signed int v5; // r5@2
  void *v6; // r0@2
  void *v7; // r0@3
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-28h]@2
  int v14; // [sp+Ch] [bp-24h]@2

  v3 = a2;
  v4 = this;
  if ( !Json::Value::isNull(a2) )
  {
    sub_119C884((void **)&v13, "normal");
    Json::Value::asString(&v14, (int)v3, &v13);
    v5 = BlockSoundTypeFromString((unsigned int *)&v14);
    v6 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    v7 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v13 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    if ( v5 != 16 )
      *((_DWORD *)v4 + 13) = v5;
  }
  return 1;
}


void __fastcall BlockGraphics::randomlyModifyPosition(BlockGraphics *this, const BlockPos *a2, int a3)
{
  Vec3::Vec3((int)this, a3);
}


_BOOL4 __fastcall BlockGraphics::isTextureIsotropic(BlockGraphics *this, signed __int8 a2)
{
  return (*((_DWORD *)this + 3) & (1 << a2)) != 0;
}


int __fastcall BlockGraphics::getCarriedTexture(BlockGraphics *this, int a2, int a3, int a4)
{
  __int64 v4; // r0@1
  int v5; // r12@1
  int v6; // r0@6
  int v7; // r1@6
  int result; // r0@10

  HIDWORD(v4) = (char *)this + 20 * a2;
  LODWORD(v4) = *(_QWORD *)(HIDWORD(v4) + 212) >> 32;
  v5 = *(_QWORD *)(HIDWORD(v4) + 212);
  if ( (_DWORD)v4 == v5 )
  {
    if ( a3 <= -1 )
    {
      LODWORD(v4) = *(_DWORD *)(HIDWORD(v4) + 92);
      a3 = 0;
    }
    else
      v4 = *(_QWORD *)(HIDWORD(v4) + 92);
      if ( -1431655765 * ((HIDWORD(v4) - (signed int)v4) >> 2) <= a3 )
        a3 = 0;
    HIDWORD(v4) = v4 + 12 * a3;
    if ( a4 <= -1 )
      LODWORD(v4) = *(_DWORD *)HIDWORD(v4);
      a4 = 0;
      v4 = *(_QWORD *)HIDWORD(v4);
      if ( (HIDWORD(v4) - (signed int)v4) >> 5 <= a4 )
        a4 = 0;
    result = v4 + 32 * a4;
  }
  else
    v6 = -1431655765 * (((signed int)v4 - v5) >> 2);
    v7 = 0;
    if ( a3 > -1 )
      v7 = a3;
    if ( v6 <= a3 )
      v7 = 0;
    result = *(_DWORD *)(v5 + 12 * v7) + 32 * a4;
  return result;
}


int __fastcall BlockGraphics::getVisualShape(BlockGraphics *this, BlockSource *a2, const BlockPos *a3, AABB *a4, bool a5)
{
  BlockGraphics *v5; // r5@1
  AABB *v6; // r4@1
  int (__fastcall *v7)(BlockGraphics *, unsigned int, AABB *, _DWORD); // r6@1
  unsigned int v8; // r0@1

  v5 = this;
  v6 = a4;
  v7 = *(int (__fastcall **)(BlockGraphics *, unsigned int, AABB *, _DWORD))(*(_DWORD *)this + 44);
  v8 = BlockSource::getData(a2, a3);
  return v7(v5, v8, v6, 0);
}


int __fastcall BlockGraphics::getMapColor(int result, const FullBlock *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *((_DWORD *)a2 + 8);
  v3 = *((_DWORD *)a2 + 9);
  v4 = *((_DWORD *)a2 + 10);
  v5 = *((_DWORD *)a2 + 11);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


int __fastcall BlockGraphics::setCarriedTextureItem(int a1, int *a2, int *a3, int *a4, int *a5, int *a6, int *a7)
{
  int v7; // r4@1
  int *v8; // r5@1
  int *v9; // r6@1
  int *v10; // r0@1
  int *v11; // r7@1
  int *v12; // r0@1
  int *v13; // r6@1
  int *v14; // r0@1
  int *v15; // r5@1
  int *v16; // r0@1
  int *v17; // r5@1
  int *v18; // r0@1
  int *v19; // r5@1
  int *v20; // r0@1
  int *v21; // r5@1

  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = EntityInteraction::setInteractText((int *)(a1 + 352), a2);
  v11 = BlockGraphics::getTextureItem((int **)v10);
  EntityInteraction::setInteractText((int *)(v7 + 224), v11);
  *(_DWORD *)(v7 + 228) = v11[1];
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v7 + 232,
    (unsigned __int64 *)v11 + 1);
  v12 = EntityInteraction::setInteractText((int *)(v7 + 348), v9);
  v13 = BlockGraphics::getTextureItem((int **)v12);
  EntityInteraction::setInteractText((int *)(v7 + 204), v13);
  *(_DWORD *)(v7 + 208) = v13[1];
    v7 + 212,
    (unsigned __int64 *)v13 + 1);
  v14 = EntityInteraction::setInteractText((int *)(v7 + 356), v8);
  v15 = BlockGraphics::getTextureItem((int **)v14);
  EntityInteraction::setInteractText((int *)(v7 + 244), v15);
  *(_DWORD *)(v7 + 248) = v15[1];
    v7 + 252,
    (unsigned __int64 *)v15 + 1);
  v16 = EntityInteraction::setInteractText((int *)(v7 + 360), a5);
  v17 = BlockGraphics::getTextureItem((int **)v16);
  EntityInteraction::setInteractText((int *)(v7 + 264), v17);
  *(_DWORD *)(v7 + 268) = v17[1];
    v7 + 272,
    (unsigned __int64 *)v17 + 1);
  v18 = EntityInteraction::setInteractText((int *)(v7 + 364), a6);
  v19 = BlockGraphics::getTextureItem((int **)v18);
  EntityInteraction::setInteractText((int *)(v7 + 284), v19);
  *(_DWORD *)(v7 + 288) = v19[1];
    v7 + 292,
    (unsigned __int64 *)v19 + 1);
  v20 = EntityInteraction::setInteractText((int *)(v7 + 368), a7);
  v21 = BlockGraphics::getTextureItem((int **)v20);
  EntityInteraction::setInteractText((int *)(v7 + 304), v21);
  *(_DWORD *)(v7 + 308) = v21[1];
    v7 + 312,
    (unsigned __int64 *)v21 + 1);
  return v7;
}


signed int __fastcall BlockGraphics::setBrightnessGamma(BlockGraphics *this, BlockGraphics *a2, const Json::Value *a3)
{
  Json::Value *v3; // r5@1
  BlockGraphics *v4; // r4@1

  v3 = a2;
  v4 = this;
  if ( !Json::Value::isNull(a2) )
  {
    if ( Json::Value::isNumeric(v3) != 1 )
      return 0;
    *((_DWORD *)v4 + 7) = Json::Value::asFloat(v3, 0.0);
  }
  return 1;
}


_DWORD *__fastcall BlockGraphics::setTextureAtlas(int a1)
{
  int v1; // r5@1
  unsigned int *v2; // r0@2
  unsigned int v3; // r1@4
  int v4; // r0@7
  unsigned int *v5; // r2@8
  unsigned int v6; // r1@10
  _DWORD *result; // r0@15

  BlockGraphics::mTerrainTextureAtlas = *(_DWORD *)a1;
  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 )
  {
    v2 = (unsigned int *)(v1 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex(v2);
      while ( __strex(v3 + 1, v2) );
    }
    else
      ++*v2;
  }
  v4 = dword_27CC824;
  if ( dword_27CC824 )
    v5 = (unsigned int *)(dword_27CC824 + 8);
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
      v6 = (*v5)--;
    if ( v6 == 1 )
      (*(void (**)(void))(*(_DWORD *)v4 + 12))();
  result = &BlockGraphics::mTerrainTextureAtlas;
  dword_27CC824 = v1;
  return result;
}


int __fastcall BlockGraphics::teardownBlocks(BlockGraphics *this)
{
  __int64 v1; // r4@1
  int v2; // r7@2
  unsigned __int64 *v3; // r6@6
  unsigned int *v4; // r2@8
  signed int v5; // r1@10
  unsigned __int64 *v6; // r5@16
  int v7; // r1@16
  void *v8; // r0@16
  int result; // r0@18

  _aeabi_memclr8(BlockGraphics::mBlocks, 1024);
  v1 = *(_QWORD *)&BlockGraphics::mOwnedBlocks;
  if ( dword_27CC82C != BlockGraphics::mOwnedBlocks )
  {
    v2 = BlockGraphics::mOwnedBlocks;
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( HIDWORD(v1) != v2 );
  }
  dword_27CC82C = v1;
  v3 = (unsigned __int64 *)dword_27CC83C;
  if ( dword_27CC83C )
      v6 = v3;
      v7 = *v3 >> 32;
      v3 = (unsigned __int64 *)*v3;
      v8 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      operator delete(v6);
    while ( v3 );
  _aeabi_memclr4(BlockGraphics::mBlockLookupMap, 4 * unk_27CC838);
  result = 0;
  dword_27CC83C = 0;
  unk_27CC840 = 0;
  return result;
}


int __fastcall BlockGraphics::getTextureUVCoordinateSet(TextureUVCoordinateSet *this, int **a2, int a3, int a4)
{
  TextureUVCoordinateSet *v4; // r9@1
  int v5; // r8@1
  int v6; // r7@1
  int v7; // r4@1
  unsigned int v8; // r2@2
  unsigned int *v9; // r0@2
  unsigned int v10; // r3@5
  unsigned int v11; // r6@6
  int v12; // r8@9
  int v13; // r2@9
  int v14; // r3@9
  int v15; // r5@9
  int v16; // r6@9
  int v17; // r7@9
  int result; // r0@11
  unsigned int *v19; // r1@12
  unsigned int *v20; // r5@18

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = dword_27CC824;
  if ( dword_27CC824 )
  {
    v8 = *(_DWORD *)(dword_27CC824 + 4);
    v9 = (unsigned int *)(dword_27CC824 + 4);
    while ( v8 )
    {
      __dmb();
      v10 = __ldrex(v9);
      if ( v10 == v8 )
      {
        v11 = __strex(v8 + 1, v9);
        v8 = v10;
        if ( !v11 )
        {
          __dmb();
          if ( *v9 && BlockGraphics::mTerrainTextureAtlas )
          {
            v12 = *(_DWORD *)(*(_DWORD *)(TextureAtlas::getTextureItem(BlockGraphics::mTerrainTextureAtlas, a2) + 8)
                            + 12 * v6)
                + 32 * v5;
            v13 = *(_DWORD *)(v12 + 4);
            v14 = *(_DWORD *)(v12 + 8);
            v15 = *(_DWORD *)(v12 + 12);
            v16 = *(_DWORD *)(v12 + 16);
            v17 = *(_DWORD *)(v12 + 20);
            *(_DWORD *)v4 = *(_DWORD *)v12;
            *((_DWORD *)v4 + 1) = v13;
            *((_DWORD *)v4 + 2) = v14;
            *((_DWORD *)v4 + 3) = v15;
            *((_DWORD *)v4 + 4) = v16;
            *((_DWORD *)v4 + 5) = v17;
            sub_119C854((int *)v4 + 6, (int *)(v12 + 24));
            *((_DWORD *)v4 + 7) = *(_DWORD *)(v12 + 28);
            goto LABEL_12;
          }
          goto LABEL_11;
        }
      }
      else
        __clrex();
    }
  }
  v7 = 0;
LABEL_11:
  result = TextureUVCoordinateSet::TextureUVCoordinateSet(v4);
  if ( v7 )
LABEL_12:
    v19 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      do
        result = __ldrex(v19);
      while ( __strex(result - 1, v19) );
    else
      result = (*v19)--;
    if ( result == 1 )
      v20 = (unsigned int *)(v7 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v20);
        while ( __strex(result - 1, v20) );
        result = (*v20)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


char *__fastcall BlockGraphics::getVisualShape(BlockGraphics *this, unsigned __int8 a2, AABB *a3, bool a4)
{
  return (char *)this + 56;
}


int __fastcall BlockGraphics::getIconYOffset(BlockGraphics *this)
{
  return 0;
}


__int64 __fastcall BlockGraphics::setVisualShape(__int64 this)
{
  LODWORD(this) = this + 56;
  return j_j_j__ZN4AABB3setERKS_(this);
}


int __fastcall BlockGraphics::onGraphicsModeChanged(int result, bool a2, int a3)
{
  int v3; // r12@1
  signed int v4; // r1@3
  signed int v5; // r1@8

  *(_BYTE *)(result + 48) = a2;
  v3 = *(_BYTE *)(result + 4);
  if ( v3 == *(_BYTE *)(Block::mTallgrass + 4) )
  {
    if ( a3 == 1 )
      v4 = 65;
    else
      v4 = 1;
    *(_DWORD *)(result + 20) = v4;
  }
  else if ( v3 == *(_BYTE *)(Block::mDoublePlant + 4) )
      v5 = 66;
      v5 = 40;
    *(_DWORD *)(result + 20) = v5;
  else if ( v3 == *(_BYTE *)(Block::mLeaves + 4) )
    *(_BYTE *)(result + 49) = a2;
  else if ( v3 == *(_BYTE *)(Block::mLeaves2 + 4) )
  return result;
}
