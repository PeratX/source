

Json::Value *__fastcall Geometry::_parseNodes(Geometry *this, const Json::Value *a2)
{
  const Json::Value *v2; // r9@1
  Geometry *v3; // r4@1
  Json::Value *result; // r0@1
  Json::Value *v5; // r11@1
  Geometry *v6; // r0@2
  int v7; // r4@2
  Json::Value *v8; // r10@2
  const char *v9; // r8@2
  void **v10; // r7@2
  unsigned int v11; // r1@2
  const char *v12; // r6@2
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  void *v17; // r6@15
  const Json::Value *v18; // r0@20
  int v19; // r5@20
  Json::Value *v20; // r9@20
  void *v21; // r0@20
  size_t v22; // r5@21
  int v23; // r10@22
  int v24; // r8@22
  int v25; // r7@22
  int i; // r0@22
  _DWORD *v27; // r0@24
  size_t v28; // r4@24
  size_t v29; // r2@24
  int v30; // r0@26
  int v31; // r8@32
  _DWORD *v32; // r1@33
  size_t v33; // r2@33
  size_t v34; // r4@33
  int v35; // r0@35
  char *v36; // r11@40
  char *v37; // r0@41
  int v38; // r12@41
  int v39; // r3@41
  __int64 v40; // kr00_8@41
  int v41; // r12@41
  void *v42; // r1@41
  Json::Value *v43; // r0@44
  Json::Value *v44; // r0@46
  Json::Value *v45; // r0@46
  Json::Value *v46; // r0@46
  const Json::Value *v52; // r0@50
  Json::Value *v53; // r4@50
  Json::Value *v54; // r0@52
  Json::Value *v56; // r0@52
  Json::Value *v58; // r0@52
  const Json::Value *v60; // r0@53
  Json::Value *v61; // r0@55
  Json::Value *v63; // r0@55
  Json::Value *v65; // r0@55
  int v67; // r5@56
  Json::Value *v68; // r5@56
  Json::Value *v69; // r0@58
  Json::Value *v70; // r10@58
  const Json::Value *v71; // r0@58
  char v72; // r0@59
  const Json::Value *v73; // r0@61
  void **v74; // r8@61
  Json::Value *v75; // r0@63
  Json::Value *v77; // r0@63
  Json::Value *v79; // r0@63
  const Json::Value *v81; // r0@64
  Json::Value *v82; // r0@66
  Json::Value *v84; // r0@66
  Json::Value *v86; // r0@66
  const Json::Value *v88; // r0@67
  Json::Value *v89; // r0@69
  int v90; // r9@69 OVERLAPPED
  Json::Value *v91; // r0@69
  int v92; // r7@69
  Json::Value *v93; // r0@71
  int v95; // r10@71 OVERLAPPED
  __int64 v96; // r0@71
  void **v97; // r12@72
  Json::Value *v98; // r8@72
  float v99; // r5@72
  float v100; // r7@72
  int v101; // r2@72
  float v102; // r4@72
  float v103; // r5@72
  float v104; // r7@72
  Json::Value *v105; // r0@72
  int v106; // [sp+14h] [bp-10Ch]@56
  Json::Value *v107; // [sp+1Ch] [bp-104h]@32
  Geometry *v108; // [sp+2Ch] [bp-F4h]@2
  int v109; // [sp+30h] [bp-F0h]@2
  unsigned int v110; // [sp+34h] [bp-ECh]@20
  const Json::Value *v111; // [sp+3Ch] [bp-E4h]@1
  char v112; // [sp+40h] [bp-E0h]@67
  char v113; // [sp+50h] [bp-D0h]@64
  char v114; // [sp+60h] [bp-C0h]@61
  char v115; // [sp+70h] [bp-B0h]@56
  char v116; // [sp+80h] [bp-A0h]@58
  float v117; // [sp+84h] [bp-9Ch]@72
  float v118; // [sp+88h] [bp-98h]@72
  float v119; // [sp+8Ch] [bp-94h]@72
  float v120; // [sp+90h] [bp-90h]@72
  float v121; // [sp+94h] [bp-8Ch]@72
  float v122; // [sp+98h] [bp-88h]@72
  int v123; // [sp+9Ch] [bp-84h]@69
  int v124; // [sp+A0h] [bp-80h]@69
  char v125; // [sp+A8h] [bp-78h]@56
  char v126; // [sp+B0h] [bp-70h]@56
  char v127; // [sp+B8h] [bp-68h]@50
  char v128; // [sp+C8h] [bp-58h]@15
  int v129; // [sp+E0h] [bp-40h]@2
  void *s2; // [sp+E4h] [bp-3Ch]@15
  char v131; // [sp+E8h] [bp-38h]@2

  v2 = a2;
  v3 = this;
  v111 = a2;
  result = (Json::Value *)Json::Value::size(a2);
  v5 = result;
  if ( result )
  {
    v6 = v3;
    v7 = (int)v3 + 20;
    v108 = v6;
    v109 = (int)v6 + 16;
    v8 = (Json::Value *)&v131;
    v9 = "name";
    v10 = (void **)&v129;
    v11 = 0;
    v12 = (const char *)&unk_257BC67;
    do
    {
      v110 = v11;
      v18 = (const Json::Value *)Json::Value::operator[]((int)v2, v11);
      Json::Value::Value(v8, v18);
      v19 = Json::Value::operator[](v8, v9);
      sub_21E94B4(v10, v12);
      Json::Value::asString((int *)&s2, v19, (int *)v10);
      v20 = v8;
      v21 = (void *)(v129 - 12);
      if ( (int *)(v129 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v129 - 4);
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
          j_j_j_j__ZdlPv_9(v21);
      }
      v17 = s2;
      v22 = *((_DWORD *)s2 - 3);
      if ( v22 )
        v23 = v7;
        v24 = v7;
        v25 = v7;
        for ( i = *((_DWORD *)v108 + 6); i; v24 = v25 )
          v25 = i;
          while ( 1 )
          {
            v27 = *(_DWORD **)(v25 + 16);
            v28 = *(v27 - 3);
            v29 = *(v27 - 3);
            if ( v28 > v22 )
              v29 = v22;
            v30 = memcmp(v27, v17, v29);
            if ( !v30 )
              v30 = v28 - v22;
            if ( v30 >= 0 )
              break;
            v25 = *(_DWORD *)(v25 + 12);
            if ( !v25 )
            {
              v25 = v24;
              goto LABEL_32;
            }
          }
          i = *(_DWORD *)(v25 + 8);
LABEL_32:
        v31 = v23;
        v107 = v5;
        if ( v25 == v23 )
          goto LABEL_80;
        v32 = *(_DWORD **)(v25 + 16);
        v33 = v22;
        v34 = *(v32 - 3);
        if ( v22 > v34 )
          v33 = *(v32 - 3);
        v35 = memcmp(v17, v32, v33);
        if ( !v35 )
          v35 = v22 - v34;
        if ( v35 < 0 )
          v25 = v23;
LABEL_80:
          v37 = std::map<std::string,Geometry::Node,std::less<std::string>,std::allocator<std::pair<std::string const,Geometry::Node>>>::operator[](
                  v109,
                  (const void **)&s2);
          v8 = v20;
          v2 = v111;
          v38 = (int)(v37 + 4);
          v40 = *(_QWORD *)&Vec3::ZERO;
          v39 = dword_2822498;
          *(_WORD *)v37 = 0;
          *(_QWORD *)v38 = v40;
          *(_DWORD *)(v38 + 8) = v39;
          v41 = (int)(v37 + 16);
          *(_QWORD *)v41 = v40;
          *(_DWORD *)(v41 + 8) = v39;
          *(_DWORD *)(v41 + 12) = 0;
          v42 = (void *)*((_DWORD *)v37 + 8);
          *((_DWORD *)v37 + 10) = 0;
          *((_DWORD *)v37 + 8) = 0;
          *((_DWORD *)v37 + 9) = 0;
          if ( v42 )
            operator delete(v42);
          v10 = (void **)&v129;
          v36 = std::map<std::string,Geometry::Node,std::less<std::string>,std::allocator<std::pair<std::string const,Geometry::Node>>>::operator[](
          v36 = (char *)(v25 + 20);
        v43 = (Json::Value *)Json::Value::operator[](v8, "reset");
        if ( Json::Value::asBool(v43, 0) == 1 )
          *((_DWORD *)v36 + 9) = *((_DWORD *)v36 + 8);
        v44 = (Json::Value *)Json::Value::operator[](v8, "mirror");
        *v36 = Json::Value::asBool(v44, 0);
        v45 = (Json::Value *)Json::Value::operator[](v8, "neverRender");
        v36[1] = Json::Value::asBool(v45, 0);
        v46 = (Json::Value *)Json::Value::operator[](v8, "inflate");
        LODWORD(_R0) = Json::Value::asFloat(v46, *((float *)v36 + 7));
        __asm
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VSTR            S0, [R11,#0x1C]
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
          _R0 = *((_QWORD *)v36 + 4);
          _ZF = (_DWORD)_R0 == HIDWORD(_R0);
            __asm { VSTR            S0, [R0,#0x24] }
            LODWORD(_R0) = _R0 + 40;
          while ( HIDWORD(_R0) != (_DWORD)_R0 );
        v52 = (const Json::Value *)Json::Value::operator[](v8, "pivot");
        Json::Value::Value((Json::Value *)&v128, v52);
        v53 = (Json::Value *)&v127;
        if ( Json::Value::isArray((Json::Value *)&v128) == 1
          && (unsigned int)Json::Value::size((Json::Value *)&v128) >= 3 )
          v54 = (Json::Value *)Json::Value::operator[]((int)&v128, 0);
          _R6 = Json::Value::asFloat(v54, 0.0);
          v56 = (Json::Value *)Json::Value::operator[]((int)&v128, 1u);
          _R5 = Json::Value::asFloat(v56, 0.0);
          v58 = (Json::Value *)Json::Value::operator[]((int)&v128, 2u);
          _R0 = Json::Value::asFloat(v58, 0.0);
          __asm
            VMOV            S0, R6
            VMOV            S2, R5
            VMOV            S4, R0
            VSTR            S0, [R11,#4]
            VSTR            S2, [R11,#8]
            VSTR            S4, [R11,#0xC]
        v60 = (const Json::Value *)Json::Value::operator[](v8, "rotation");
        Json::Value::Value((Json::Value *)&v127, v60);
        if ( Json::Value::isArray((Json::Value *)&v127) == 1
          && (unsigned int)Json::Value::size((Json::Value *)&v127) >= 3 )
          v61 = (Json::Value *)Json::Value::operator[]((int)&v127, 0);
          _R6 = Json::Value::asFloat(v61, 0.0);
          v63 = (Json::Value *)Json::Value::operator[]((int)&v127, 1u);
          _R5 = Json::Value::asFloat(v63, 0.0);
          v65 = (Json::Value *)Json::Value::operator[]((int)&v127, 2u);
          _R0 = Json::Value::asFloat(v65, 0.0);
            VSTR            S0, [R11,#0x10]
            VSTR            S2, [R11,#0x14]
            VSTR            S4, [R11,#0x18]
        v67 = Json::Value::operator[](v8, "cubes");
        Json::Value::begin((Json::Value *)&v126, v67);
        Json::Value::end((Json::Value *)&v125, v67);
        v68 = (Json::Value *)&v115;
        v106 = v31;
        while ( Json::ValueIteratorBase::isEqual(
                  (Json::ValueIteratorBase *)&v126,
                  (const Json::ValueIteratorBase *)&v125) != 1 )
          v69 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v126);
          v70 = v69;
          *(_DWORD *)((unsigned int)&v116 | 4) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 4) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 8) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 0xC) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 0x10) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 0x14) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 0x18) = 0;
          *(_DWORD *)(((unsigned int)&v116 | 4) + 0x1C) = 0;
          v71 = (const Json::Value *)Json::Value::operator[](v69, "mirror");
          Json::Value::Value(v68, v71);
          if ( Json::Value::isBool(v68) == 1 )
            v72 = Json::Value::asBool(v68, 0);
          else
            v72 = *v36;
          v116 = v72;
          v73 = (const Json::Value *)Json::Value::operator[](v70, "origin");
          Json::Value::Value((Json::Value *)&v114, v73);
          v74 = v10;
          if ( Json::Value::isArray((Json::Value *)&v114) == 1
            && (unsigned int)Json::Value::size((Json::Value *)&v114) >= 3 )
            v75 = (Json::Value *)Json::Value::operator[]((int)&v114, 0);
            _R0 = Json::Value::asFloat(v75, 0.0);
            __asm
              VMOV            S0, R0
              VSTR            S0, [SP,#0x120+var_9C]
            v77 = (Json::Value *)Json::Value::operator[]((int)&v114, 1u);
            _R0 = Json::Value::asFloat(v77, 0.0);
              VSTR            S0, [SP,#0x120+var_98]
            v79 = (Json::Value *)Json::Value::operator[]((int)&v114, 2u);
            _R0 = Json::Value::asFloat(v79, 0.0);
              VSTR            S0, [SP,#0x120+var_94]
          v81 = (const Json::Value *)Json::Value::operator[](v70, "size");
          Json::Value::Value((Json::Value *)&v113, v81);
          if ( Json::Value::isArray((Json::Value *)&v113) == 1
            && (unsigned int)Json::Value::size((Json::Value *)&v113) >= 3 )
            v82 = (Json::Value *)Json::Value::operator[]((int)&v113, 0);
            _R0 = Json::Value::asFloat(v82, 0.0);
              VSTR            S0, [SP,#0x120+var_90]
            v84 = (Json::Value *)Json::Value::operator[]((int)&v113, 1u);
            _R0 = Json::Value::asFloat(v84, 0.0);
              VSTR            S0, [SP,#0x120+var_8C]
            v86 = (Json::Value *)Json::Value::operator[]((int)&v113, 2u);
            _R0 = Json::Value::asFloat(v86, 0.0);
              VSTR            S0, [SP,#0x120+var_88]
          v88 = (const Json::Value *)Json::Value::operator[](v70, "uv");
          Json::Value::Value((Json::Value *)&v112, v88);
          v111 = v2;
          if ( Json::Value::isArray((Json::Value *)&v112) != 1
            || (unsigned int)Json::Value::size((Json::Value *)&v112) < 2 )
            v92 = 0;
            v90 = 0;
            v89 = (Json::Value *)Json::Value::operator[]((int)&v112, 0);
            v90 = Json::Value::asInt(v89, 0);
            v123 = v90;
            v91 = (Json::Value *)Json::Value::operator[]((int)&v112, 1u);
            v92 = Json::Value::asInt(v91, 0);
            v124 = v92;
          v93 = (Json::Value *)Json::Value::operator[](v70, "inflate");
          _R0 = Json::Value::asFloat(v93, *((float *)v36 + 7));
          __asm { VMOV            S0, R0 }
          v95 = v92;
          __asm { VSTR            S0, [SP,#0x120+var_7C] }
          v96 = *(_QWORD *)(v36 + 36);
          if ( (_DWORD)v96 == HIDWORD(v96) )
            std::vector<Geometry::Box,std::allocator<Geometry::Box>>::_M_emplace_back_aux<Geometry::Box const&>(
              (unsigned __int64 *)v36 + 4,
              (int)&v116);
            v105 = (Json::Value *)&v112;
            v97 = v74;
            v98 = v68;
            v99 = v117;
            v100 = v118;
            *(_DWORD *)v96 = *(_DWORD *)&v116;
            *(float *)(v96 + 4) = v99;
            *(float *)(v96 + 8) = v100;
            v101 = v96 + 12;
            v102 = v120;
            v103 = v121;
            v104 = v122;
            *(float *)v101 = v119;
            *(float *)(v101 + 4) = v102;
            *(float *)(v101 + 8) = v103;
            *(float *)(v101 + 12) = v104;
            v68 = v98;
            v74 = v97;
            *(_QWORD *)(v96 + 28) = *(_QWORD *)&v90;
            *((_DWORD *)v36 + 9) += 40;
          Json::Value::~Value(v105);
          Json::Value::~Value((Json::Value *)&v113);
          Json::Value::~Value((Json::Value *)&v114);
          Json::Value::~Value(v68);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v126);
          v8 = (Json::Value *)&v131;
          v53 = (Json::Value *)&v127;
          v10 = v74;
        Json::Value::~Value(v53);
        Json::Value::~Value((Json::Value *)&v128);
        v17 = s2;
        v5 = v107;
        v9 = "name";
        v7 = v106;
      else
        v2 = v111;
      if ( (int *)((char *)v17 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)((char *)v17 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9((char *)v17 - 12);
      result = Json::Value::~Value(v8);
      v11 = v110 + 1;
      v12 = (const char *)&unk_257BC67;
    }
    while ( v110 + 1 < (unsigned int)v5 );
  }
  return result;
}


int __fastcall Geometry::Geometry(float a1, int *a2, int a3, int a4, int a5)
{
  int v6; // r7@1
  int *v7; // r6@1
  float v8; // r4@1
  int v13; // r0@1
  int v14; // r6@1
  int i; // r7@1
  char *v16; // r0@2

  _R5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)LODWORD(a1));
  __asm
  {
    VMOV            S2, R5
    VLDR            S0, [SP,#0x18+arg_0]
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S0, S0
    VSTR            S2, [R4,#4]
    VSTR            S0, [R4,#8]
  }
  sub_21E8AF4((int *)(LODWORD(v8) + 12), v7);
  *(_DWORD *)(LODWORD(v8) + 20) = 0;
  v13 = LODWORD(v8) + 20;
  *(_DWORD *)(v13 + 4) = 0;
  *(_DWORD *)(v13 + 8) = 0;
  *(_DWORD *)(v13 + 12) = 0;
  *(_DWORD *)(v13 + 16) = 0;
  *(_DWORD *)(v13 + 8) = v13;
  *(_DWORD *)(v13 + 12) = v13;
  v14 = *(_DWORD *)(v6 + 28);
  for ( i = v6 + 20; v14 != i; v14 = sub_21D4820(v14) )
    v16 = std::map<std::string,Geometry::Node,std::less<std::string>,std::allocator<std::pair<std::string const,Geometry::Node>>>::operator[](
            LODWORD(v8) + 16,
            (const void **)(v14 + 16));
    *(_WORD *)v16 = *(_WORD *)(v14 + 20);
    *((_DWORD *)v16 + 1) = *(_DWORD *)(v14 + 24);
    *((_DWORD *)v16 + 2) = *(_DWORD *)(v14 + 28);
    *((_DWORD *)v16 + 3) = *(_DWORD *)(v14 + 32);
    *((_DWORD *)v16 + 4) = *(_DWORD *)(v14 + 36);
    *((_DWORD *)v16 + 5) = *(_DWORD *)(v14 + 40);
    *((_DWORD *)v16 + 6) = *(_DWORD *)(v14 + 44);
    *((_DWORD *)v16 + 7) = *(_DWORD *)(v14 + 48);
    std::vector<Geometry::Box,std::allocator<Geometry::Box>>::operator=(
      (unsigned __int64 *)v16 + 4,
      (unsigned __int64 *)(v14 + 52));
  return LODWORD(v8);
}


int __fastcall Geometry::getNode(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r9@1
  int v6; // r7@1
  const void *v7; // r5@2
  int v8; // r10@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r6@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  int result; // r0@20

  v2 = a1 + 20;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 24);
  v5 = a1 + 20;
  v6 = a1 + 20;
  if ( v4 )
  {
    v7 = *v3;
    v8 = a1 + 20;
    v9 = *((_DWORD *)*v3 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 != v2 )
    v14 = *(_DWORD **)(v6 + 16);
    v15 = *((_DWORD *)*v3 - 3);
    v16 = *(v14 - 3);
    v17 = *((_DWORD *)*v3 - 3);
    if ( v15 > v16 )
      v17 = *(v14 - 3);
    v18 = memcmp(*v3, v14, v17);
    if ( !v18 )
      v18 = v15 - v16;
    if ( v18 < 0 )
      v6 = v2;
    v5 = v6;
  result = 0;
  if ( v5 != v2 )
    result = v5 + 20;
  return result;
}


SkinAdjustments *__fastcall Geometry::Geometry(SkinAdjustments *a1, int *a2, int a3, int a4)
{
  int *v6; // r6@1
  SkinAdjustments *v7; // r7@1
  SkinAdjustments *result; // r0@1

  _R4 = a4;
  _R5 = a3;
  v6 = a2;
  v7 = a1;
  SkinAdjustments::SkinAdjustments(a1);
  __asm
  {
    VMOV            S0, R5
    VMOV            S2, R4
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VSTR            S0, [R7,#4]
    VSTR            S2, [R7,#8]
  }
  sub_21E8AF4((int *)v7 + 3, v6);
  *((_DWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  *((_DWORD *)v7 + 9) = 0;
  *((_DWORD *)v7 + 5) = 0;
  result = v7;
  *((_DWORD *)v7 + 7) = (char *)v7 + 20;
  *((_DWORD *)v7 + 8) = (char *)v7 + 20;
  return result;
}


Json::Value *__fastcall Geometry::parse(Geometry *this, const Json::Value *a2)
{
  Geometry *v2; // r4@1
  const Json::Value *v3; // r0@1
  int v5; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = (const Json::Value *)Json::Value::operator[]((int)a2, "bones");
  Json::Value::Value((Json::Value *)&v5, v3);
  Geometry::_parseNodes(v2, (const Json::Value *)&v5);
  return Json::Value::~Value((Json::Value *)&v5);
}
