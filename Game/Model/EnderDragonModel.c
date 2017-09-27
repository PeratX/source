

int __fastcall EnderDragonModel::render(int a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9)
{
  int v10; // r7@1
  float v21; // r0@1
  int v24; // r5@1
  float v28; // r1@1
  float v32; // r1@5
  float v35; // r10@7
  float v48; // r1@8
  mce::Math *v63; // r0@11
  float v64; // r1@11
  float v68; // r1@11
  __int64 v70; // r0@11
  int v72; // r5@11
  __int64 v74; // r0@11
  float v78; // r0@11
  __int64 v82; // r0@11
  __int64 v83; // r0@11
  __int64 v84; // r0@11
  __int64 v85; // r0@11
  __int64 v86; // r0@11
  __int64 v87; // r0@11
  __int64 v88; // r0@11
  void **v91; // r7@13
  __int64 v95; // r0@14
  int v106; // r0@16
  signed int v109; // ST1C_4@16
  int v110; // ST20_4@16
  void **v112; // r5@16
  int v119; // [sp+8h] [bp-150h]@7
  Entity *v120; // [sp+Ch] [bp-14Ch]@1
  int v121; // [sp+10h] [bp-148h]@7
  int v122; // [sp+14h] [bp-144h]@1
  int v123; // [sp+18h] [bp-140h]@7
  signed int v124; // [sp+1Ch] [bp-13Ch]@7
  signed int v125; // [sp+20h] [bp-138h]@7
  void *v126; // [sp+24h] [bp-134h]@13
  void *v127; // [sp+30h] [bp-128h]@11
  char v128; // [sp+3Ch] [bp-11Ch]@11
  void *v129; // [sp+44h] [bp-114h]@11
  void *v130; // [sp+50h] [bp-108h]@8
  void *v131; // [sp+5Ch] [bp-FCh]@5
  void *ptr; // [sp+68h] [bp-F0h]@1
  void *v133; // [sp+74h] [bp-E4h]@1
  void *v134; // [sp+80h] [bp-D8h]@1
  int v135; // [sp+8Ch] [bp-CCh]@1
  int v136; // [sp+90h] [bp-C8h]@1
  int v137; // [sp+94h] [bp-C4h]@1
  char v138; // [sp+98h] [bp-C0h]@1
  float v139; // [sp+A0h] [bp-B8h]@1
  int v140; // [sp+A4h] [bp-B4h]@11
  int v141; // [sp+A8h] [bp-B0h]@11
  int v142; // [sp+ACh] [bp-ACh]@1
  int v143; // [sp+B0h] [bp-A8h]@1
  int v144; // [sp+B4h] [bp-A4h]@1
  int v145; // [sp+B8h] [bp-A0h]@1
  int v146; // [sp+BCh] [bp-9Ch]@1
  int v147; // [sp+C0h] [bp-98h]@1
  int v148; // [sp+C4h] [bp-94h]@1
  int v149; // [sp+C8h] [bp-90h]@1
  int v150; // [sp+CCh] [bp-8Ch]@1
  int v151; // [sp+D0h] [bp-88h]@1
  int v152; // [sp+D4h] [bp-84h]@1
  int v153; // [sp+D8h] [bp-80h]@1
  int v154; // [sp+DCh] [bp-7Ch]@1
  int v155; // [sp+E0h] [bp-78h]@1
  int v156; // [sp+E4h] [bp-74h]@1
  int v157; // [sp+E8h] [bp-70h]@1
  float v158; // [sp+ECh] [bp-6Ch]@11

  _R11 = a1;
  v122 = a2;
  v10 = a3;
  v120 = (Entity *)a3;
  MatrixStack::push((MatrixStack *)&v138, *(_DWORD *)(a2 + 16) + 16);
  _R0 = v10 + 4304;
  __asm
  {
    VLDR            S4, [R11,#0x30]
    VLDR            S0, [R0]
  }
  _R0 = v10 + 4308;
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
  _R0 = &mce::Math::PI;
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S28, S0, S0
    VMUL.F32        S16, S28, S0
    VMOV            R0, S16
  _R0 = sinf(_R0);
    VMOV.F32        S0, #-1.0
    VMOV.F32        S18, #1.0
    VADD.F32        S0, S16, S0
    VMOV            R1, S0
    VMOV            S0, R0
    VADD.F32        S16, S0, S18
  v21 = sinf(_R1);
  __asm { VLDR            S0, =0.2 }
  _R4 = v21;
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R11,#0x21C]
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v138);
    VMOV.F32        S0, #3.0
    VLDR            S16, =0.05
    VMOV            S2, R4
    VLDR            S6, [R0,#0x18]
    VMOV.F32        S4, #-3.0
    VLDR            S10, [R0,#0x20]
    VLDR            S12, [R0,#0x24]
    VLDR            S14, [R0,#0x28]
    VLDR            S8, [R0,#0x1C]
    VLDR            S1, [R0,#0x2C]
    VLDR            S3, [R0,#0x10]
    VADD.F32        S2, S2, S18
    VMUL.F32        S12, S12, S4
    VMUL.F32        S10, S10, S4
    VMUL.F32        S14, S14, S4
    VMUL.F32        S4, S1, S4
    VMUL.F32        S30, S2, S0
    VMOV.F32        S0, #-2.0
    VMUL.F32        S2, S30, S16
    VLDR            S2, [R0,#0x14]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S6, S6, S0
    VMUL.F32        S3, S3, S0
    VMUL.F32        S0, S8, S0
    VADD.F32        S2, S12, S2
    VLDR            S12, [R0,#0x38]
    VADD.F32        S6, S14, S6
    VLDR            S14, [R0,#0x3C]
    VADD.F32        S8, S10, S3
    VLDR            S10, [R0,#0x34]
    VADD.F32        S0, S4, S0
    VLDR            S4, [R0,#0x30]
    VADD.F32        S2, S2, S10
    VADD.F32        S6, S6, S12
    VADD.F32        S4, S8, S4
    VADD.F32        S0, S0, S14
    VSTR            S4, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S6, [R0,#0x38]
    VSTR            S0, [R0,#0x3C]
  v24 = MatrixStack::MatrixStackRef::operator->((int)&v138);
  __asm { VLDR            S0, =0.1 }
  v135 = 1065353216;
  __asm { VMUL.F32        S0, S30, S0 }
  v136 = 0;
  v137 = 0;
  __asm { VSTR            S0, [SP,#0x158+var_B8] }
  glm::rotate<float>((int)&v142, v24, (int)&v139, (int)&v135);
  *(_DWORD *)v24 = v142;
  *(_DWORD *)(v24 + 4) = v143;
  *(_DWORD *)(v24 + 8) = v144;
  *(_DWORD *)(v24 + 12) = v145;
  *(_DWORD *)(v24 + 16) = v146;
  *(_DWORD *)(v24 + 20) = v147;
  *(_DWORD *)(v24 + 24) = v148;
  *(_DWORD *)(v24 + 28) = v149;
  *(_DWORD *)(v24 + 32) = v150;
  *(_DWORD *)(v24 + 36) = v151;
  *(_DWORD *)(v24 + 40) = v152;
  *(_DWORD *)(v24 + 44) = v153;
  *(_DWORD *)(v24 + 48) = v154;
  *(_DWORD *)(v24 + 52) = v155;
  *(_DWORD *)(v24 + 56) = v156;
  *(_DWORD *)(v24 + 60) = v157;
  EnderDragon::getLatencyPos((EnderDragon *)&v134, v10, COERCE_FLOAT(6), *(_DWORD *)(_R11 + 48));
  EnderDragon::getLatencyPos((EnderDragon *)&v133, v10, COERCE_FLOAT(5), *(_DWORD *)(_R11 + 48));
  _R0 = v133;
  __asm { VLDR            S18, [R0] }
  EnderDragon::getLatencyPos((EnderDragon *)&ptr, v10, COERCE_FLOAT(10), *(_DWORD *)(_R11 + 48));
  _R0 = ptr;
    VSUB.F32        S0, S18, S0
    VMOV            R0, S0
  _R5 = mce::Math::wrapDegrees(_R0, v28);
  if ( ptr )
    operator delete(ptr);
  if ( v133 )
    operator delete(v133);
  EnderDragon::getLatencyPos((EnderDragon *)&v131, v10, COERCE_FLOAT(5), *(_DWORD *)(_R11 + 48));
  __asm { VMOV.F32        S0, #0.5 }
  _R0 = v131;
    VMOV            S21, R5
    VMUL.F32        S0, S21, S0
  _R4 = mce::Math::wrapDegrees(_R0, v32);
  __asm { VLDR            S31, [SP,#0x158+arg_10] }
  if ( v131 )
    operator delete(v131);
    VMOV.F32        S22, #1.5
    VMOV.F32        S17, #7.5
    VMOV.F32        S23, #-1.5
    VMOV.F32        S24, #10.0
    VMOV            S18, R4
    VLDR            S20, =0.45
  LODWORD(v35) = 5;
  __asm { VLDR            S29, =0.15 }
  _R8 = 0;
  __asm { VLDR            S0, [R0] }
  v125 = -1052770304;
  __asm { VMUL.F32        S27, S0, S28 }
  _R0 = &mce::Math::DEGRAD;
  v119 = _R11 + 284;
  v124 = 1101004800;
    VLDR            S25, [R0]
    VMOV            R0, S31
  v121 = _R0;
  v123 = 0;
  do
    EnderDragon::getLatencyPos((EnderDragon *)&v130, v10, v35, *(_DWORD *)(_R11 + 48));
    __asm
    {
      VMOV            S0, R8
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S20
      VADD.F32        S0, S0, S27
      VMOV            R0, S0
    }
    _R9 = cosf(_R0);
    _R0 = v134;
    _R1 = v130;
      VLDR            S0, [R0]
      VLDR            S2, [R1]
      VSUB.F32        S0, S2, S0
    _R0 = mce::Math::wrapDegrees(_R0, *(float *)&v130);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S22
      VMUL.F32        S0, S0, S25
      VSTR            S0, [R11,#0x144]
    _R0 = EnderDragon::getHeadPartYOffset(v120, _R8, (int *)&v134, (int *)&v130);
      VMOV            S2, R0
      VMOV            S0, R9
      VMUL.F32        S2, S2, S17
      VMUL.F32        S0, S0, S29
      VMUL.F32        S2, S2, S25
      VADD.F32        S0, S2, S0
      VSTR            S0, [R11,#0x140]
    _R0 = v130;
      VSUB.F32        S0, S0, S18
    _R0 = mce::Math::wrapDegrees(_R0, v48);
      VMUL.F32        S0, S0, S23
      VSTR            S0, [R11,#0x148]
    *(_DWORD *)(_R11 + 284) = v123;
    *(_DWORD *)(_R11 + 288) = v124;
    *(_DWORD *)(_R11 + 292) = v125;
    _R6 = *(_QWORD *)(_R11 + 320);
    _R4 = cosf(COERCE_FLOAT(*(_QWORD *)(_R11 + 320) >> 32));
    _R5 = cosf(*(float *)&_R6);
    LODWORD(_R6) = sinf(*(float *)&_R6);
    HIDWORD(_R6) = sinf(*((float *)&_R6 + 1));
    ModelPart::render(__PAIR__(v122, v119), _R11, v121, 0, 0);
    __asm { VMOV            S2, R4 }
    _R0 = v124;
      VMOV            S0, R5
      VMUL.F32        S2, S2, S24
      VMUL.F32        S4, S0, S24
      VMOV            S6, R6
      VMOV            S8, R7
      VMUL.F32        S6, S6, S24
      VMUL.F32        S0, S2, S0
    _R0 = v123;
      VMUL.F32        S4, S4, S8
      VMOV            S8, R0
    _R0 = v125;
      VADD.F32        S31, S6, S2
      VMOV            S10, R0
      VSUB.F32        S19, S8, S4
      VSUB.F32        S26, S10, S0
    if ( !_ZF )
      operator delete(v130);
    __asm { VMOV            R0, S31 }
    v10 = (int)v120;
    ++_R8;
    --LODWORD(v35);
    v124 = _R0;
    __asm { VMOV            R0, S19 }
    v123 = _R0;
    __asm { VMOV            R0, S26 }
    v125 = _R0;
  while ( _NF ^ _VF );
    VSTR            S19, [R11,#0x40]
    VSTR            S31, [R11,#0x44]
    VSTR            S26, [R11,#0x48]
  EnderDragon::getLatencyPos((EnderDragon *)&v129, (int)v120, 0.0, *(_DWORD *)(_R11 + 48));
  _R0 = v134;
  _R1 = v129;
    VLDR            S2, [R1]
    VSUB.F32        S0, S2, S0
  _R0 = mce::Math::wrapDegrees(_R0, *(float *)&v129);
    VMUL.F32        S0, S25, S0
    VSTR            S0, [R11,#0x68]
  v63 = (mce::Math *)EnderDragon::getHeadPartYOffset(v120, 6, (int *)&v134, (int *)&v129);
  _R0 = mce::Math::wrapDegrees(v63, v64);
    VMUL.F32        S0, S0, S17
    VMUL.F32        S0, S0, S25
    VSTR            S0, [R11,#0x64]
  _R0 = v129;
    VSUB.F32        S0, S0, S18
  _R0 = mce::Math::wrapDegrees(_R0, v68);
    VNMUL.F32       S0, S0, S25
    VSTR            S0, [R11,#0x6C]
  LODWORD(v70) = _R11 + 64;
  ModelPart::render(v70, _R11, v121, 0, 0);
  MatrixStack::push((MatrixStack *)&v128, *(_DWORD *)(v122 + 16) + 16);
  MatrixStack::MatrixStackRef::operator=((int)&v138, (int)&v128);
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v128);
    VLDR            S0, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VADD.F32        S0, S10, S0
    VLDR            S4, [R0,#0x1C]
    VLDR            S6, [R0,#0x10]
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S14, S4
    VADD.F32        S6, S8, S6
    VSTR            S6, [R0,#0x30]
    VSTR            S0, [R0,#0x34]
    VSTR            S2, [R0,#0x38]
    VSTR            S4, [R0,#0x3C]
  v72 = MatrixStack::MatrixStackRef::operator->((int)&v138);
  __asm { VMUL.F32        S0, S21, S23 }
  v139 = 0.0;
  v140 = 0;
  v141 = 1065353216;
  __asm { VSTR            S0, [SP,#0x158+var_6C] }
  glm::rotate<float>((int)&v142, v72, (int)&v158, (int)&v139);
  *(_DWORD *)v72 = v142;
  *(_DWORD *)(v72 + 4) = v143;
  *(_DWORD *)(v72 + 8) = v144;
  *(_DWORD *)(v72 + 12) = v145;
  *(_DWORD *)(v72 + 16) = v146;
  *(_DWORD *)(v72 + 20) = v147;
  *(_DWORD *)(v72 + 24) = v148;
  *(_DWORD *)(v72 + 28) = v149;
  *(_DWORD *)(v72 + 32) = v150;
  *(_DWORD *)(v72 + 36) = v151;
  *(_DWORD *)(v72 + 40) = v152;
  *(_DWORD *)(v72 + 44) = v153;
  *(_DWORD *)(v72 + 48) = v154;
  *(_DWORD *)(v72 + 52) = v155;
  *(_DWORD *)(v72 + 56) = v156;
  *(_DWORD *)(v72 + 60) = v157;
    VSUB.F32        S0, S10, S0
    VSUB.F32        S2, S12, S2
    VSUB.F32        S4, S14, S4
    VSUB.F32        S6, S8, S6
  *(_DWORD *)(_R11 + 768) = 0;
  LODWORD(v74) = _R11 + 724;
  ModelPart::render(v74, _R11, v121, 0, 0);
    VLDR            S21, [R0]
    VMUL.F32        S28, S21, S28
    VMOV            R4, S28
  _R0 = cosf(_R4);
  __asm { VMOV            S26, R0 }
  v78 = sinf(_R4);
  __asm { VMOV.F32        S0, #2.0 }
  _R4 = v78;
    VADD.F32        S0, S28, S0
    VMOV.F32        S0, #0.125
    VLDR            S2, =-0.2
    VMOV            S4, R4
    VLDR            S6, =0.005
    VMOV.F32        S14, #0.5
    VMOV            S10, R0
    VMUL.F32        S2, S26, S2
    VMUL.F32        S6, S30, S6
    VMOV.F32        S12, #-0.75
    VADD.F32        S4, S4, S0
    VMOV.F32        S1, #0.75
    VADD.F32        S23, S10, S14
    VLDR            S10, =0.8
    VMOV.F32        S8, #-0.5
    VADD.F32        S25, S2, S0
    VLDR            S0, =1.3
    VADD.F32        S31, S6, S14
    VADD.F32        S19, S6, S0
    VMUL.F32        S27, S4, S10
    VMOV.F32        S4, #1.0
    VMUL.F32        S2, S23, S12
    VADD.F32        S26, S6, S1
    VSUB.F32        S30, S8, S6
    VSTR            S25, [R3]
  *(_DWORD *)(_R11 + 3624) = 1048576000;
    VSTR            S27, [R2]
    VADD.F32        S29, S6, S4
    VSTR            S2, [R1]
    VSTR            S29, [R11,#0x3D4]
    VSTR            S31, [R0]
    VSTR            S26, [R0]
    VSTR            S19, [R0]
    VSTR            S30, [R0]
  LODWORD(v82) = _R11 + 3584;
  v83 = __PAIR__(v122, ModelPart::render(v82, _R11, v121, 0, 0));
  LODWORD(v83) = _R11 + 1384;
  v84 = __PAIR__(v122, ModelPart::render(v83, _R11, v121, 0, 0));
  LODWORD(v84) = _R11 + 944;
  v85 = __PAIR__(v122, ModelPart::render(v84, _R11, v121, 0, 0));
    VMOV.F32        S2, #0.75
    VSUB.F32        S0, S21, S27
    VSTR            S25, [R1]
  *(_DWORD *)(_R11 + 3844) = 1048576000;
    VMUL.F32        S2, S23, S2
    VSTR            S0, [R0]
    VSTR            S2, [R0]
    VSTR            S29, [R0]
  LODWORD(v85) = _R11 + 3804;
  v86 = __PAIR__(v122, ModelPart::render(v85, _R11, v121, 0, 0));
  LODWORD(v86) = _R11 + 1604;
  v87 = __PAIR__(v122, ModelPart::render(v86, _R11, v121, 0, 0));
  LODWORD(v87) = _R11 + 1164;
  ModelPart::render(v87, _R11, v121, 0, 0);
  EnderDragon::getLatencyPos((EnderDragon *)&v127, (int)v120, COERCE_FLOAT(11), *(_DWORD *)(_R11 + 48));
  LODWORD(v88) = &v134;
  std::vector<float,std::allocator<float>>::operator=(v88);
  if ( v127 )
    operator delete(v127);
  _R9 = 1114636288;
  _R6 = 1092616192;
  v91 = &v126;
  __asm { VLDR            S19, =180.0 }
  _R5 = 0;
    VLDR            S26, [R0]
    VMUL.F32        S30, S26, S17
    VLDR            S17, =0.0
    EnderDragon::getLatencyPos((EnderDragon *)v91, (int)v120, COERCE_FLOAT(_R8 + 12), *(_DWORD *)(_R11 + 48));
    LODWORD(v95) = &v129;
    std::vector<float,std::allocator<float>>::operator=(v95);
    if ( v126 )
      operator delete(v126);
      VADD.F32        S0, S0, S28
    _R4 = sinf(_R0);
    _R1 = v129;
    _R0 = mce::Math::wrapDegrees(_R0, *(float *)&v129);
      VMOV            S0, R4
      VMUL.F32        S0, S0, S16
      VADD.F32        S17, S0, S17
      VADD.F32        S0, S0, S19
      VMUL.F32        S0, S26, S0
      VLDR            S0, [R0,#4]
      VLDR            S2, [R1,#4]
      VMUL.F32        S0, S30, S0
      VADD.F32        S0, S0, S17
      VLDR            S0, [R1]
    __asm { VMOV            S0, R0 }
    v106 = _R11 + 284;
      VMUL.F32        S0, S0, S26
    *(_DWORD *)v106 = _R5;
    *(_DWORD *)(v106 + 4) = _R6;
    *(_DWORD *)(v106 + 8) = _R9;
      VLDR            S23, [R11,#0x140]
      VLDR            S21, [R11,#0x144]
    __asm { VMOV            R4, S23 }
    _R0 = cosf(_R4);
    v109 = _R6;
    v110 = _R5;
      VMOV            R6, S21
    v112 = v91;
    __asm { VMUL.F32        S21, S0, S24 }
    _R7 = sinf(_R6);
    _R6 = cosf(_R6);
    _R0 = sinf(_R4);
    _R0 = v109;
    __asm { VMOV            S4, R7 }
    v91 = v112;
    __asm { VMOV            S2, R6 }
      VMUL.F32        S0, S0, S24
      VMUL.F32        S2, S21, S2
      VMUL.F32        S4, S21, S4
    _R0 = v110;
      VMOV            S6, R9
      VADD.F32        S0, S0, S8
      VSUB.F32        S2, S6, S2
      VSUB.F32        S4, S10, S4
      VMOV            R6, S0
      VMOV            R9, S2
      VMOV            R5, S4
  if ( v129 )
    operator delete(v129);
  if ( v134 )
    operator delete(v134);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v138);
}


void __fastcall EnderDragonModel::~EnderDragonModel(EnderDragonModel *this)
{
  EnderDragonModel::~EnderDragonModel(this);
}


_QWORD *__fastcall EnderDragonModel::EnderDragonModel(_QWORD *a1, int a2)
{
  int v2; // r9@1
  _QWORD *v3; // r8@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  void *v17; // r0@14
  void *v18; // r0@15
  void *v19; // r0@16
  void *v20; // r0@17
  void *v21; // r0@18
  void *v22; // r0@19
  void *v23; // r0@20
  void *v24; // r0@21
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  unsigned int *v52; // r2@75
  signed int v53; // r1@77
  unsigned int *v54; // r2@79
  signed int v55; // r1@81
  unsigned int *v56; // r2@83
  signed int v57; // r1@85
  unsigned int *v58; // r2@87
  signed int v59; // r1@89
  unsigned int *v60; // r2@91
  signed int v61; // r1@93
  unsigned int *v62; // r2@95
  signed int v63; // r1@97
  unsigned int *v64; // r2@99
  signed int v65; // r1@101
  unsigned int *v66; // r2@103
  signed int v67; // r1@105
  ModelPart *v68; // [sp+38h] [bp-100h]@2
  ModelPart *v69; // [sp+3Ch] [bp-FCh]@2
  ModelPart *v70; // [sp+40h] [bp-F8h]@2
  ModelPart *v71; // [sp+44h] [bp-F4h]@2
  ModelPart *v72; // [sp+48h] [bp-F0h]@2
  ModelPart *v73; // [sp+4Ch] [bp-ECh]@2
  ModelPart *v74; // [sp+50h] [bp-E8h]@2
  ModelPart *v75; // [sp+54h] [bp-E4h]@2
  ModelPart *v76; // [sp+58h] [bp-E0h]@2
  ModelPart *v77; // [sp+5Ch] [bp-DCh]@2
  ModelPart *v78; // [sp+60h] [bp-D8h]@2
  ModelPart *v79; // [sp+64h] [bp-D4h]@2
  int v80; // [sp+6Ch] [bp-CCh]@21
  int v81; // [sp+74h] [bp-C4h]@20
  int v82; // [sp+7Ch] [bp-BCh]@19
  int v83; // [sp+84h] [bp-B4h]@18
  int v84; // [sp+8Ch] [bp-ACh]@17
  int v85; // [sp+94h] [bp-A4h]@16
  int v86; // [sp+9Ch] [bp-9Ch]@15
  int v87; // [sp+A4h] [bp-94h]@14
  int v88; // [sp+ACh] [bp-8Ch]@13
  int v89; // [sp+B4h] [bp-84h]@12
  int v90; // [sp+BCh] [bp-7Ch]@11
  int v91; // [sp+C4h] [bp-74h]@10
  int v92; // [sp+CCh] [bp-6Ch]@9
  int v93; // [sp+D4h] [bp-64h]@8
  int v94; // [sp+DCh] [bp-5Ch]@7
  int v95; // [sp+E4h] [bp-54h]@6
  int v96; // [sp+ECh] [bp-4Ch]@5
  int v97; // [sp+F4h] [bp-44h]@4
  int v98; // [sp+FCh] [bp-3Ch]@3
  int v99; // [sp+104h] [bp-34h]@2
  int v100; // [sp+10Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E8354;
  sub_21E94B4((void **)&v100, "ender_dragon");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)v3 + 52),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v100);
  v4 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v100 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 8), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 284)), 0, 0, 64, 32);
  v79 = (ModelPart *)(v3 + 63);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 63), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 724)), 0, 0, 64, 32);
  v78 = (ModelPart *)(v3 + 118);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 118), 0, 0, 64, 32);
  v76 = (ModelPart *)((char *)v3 + 1164);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1164)), 0, 0, 64, 32);
  v77 = (ModelPart *)(v3 + 173);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 173), 0, 0, 64, 32);
  v75 = (ModelPart *)((char *)v3 + 1604);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1604)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 228), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2044)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 283), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2484)), 0, 0, 64, 32);
  v74 = (ModelPart *)(v3 + 338);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 338), 0, 0, 64, 32);
  v72 = (ModelPart *)((char *)v3 + 2924);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2924)), 0, 0, 64, 32);
  v73 = (ModelPart *)(v3 + 393);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 393), 0, 0, 64, 32);
  v70 = (ModelPart *)((char *)v3 + 3364);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 3364)), 0, 0, 64, 32);
  v71 = (ModelPart *)(v3 + 448);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 448), 0, 0, 64, 32);
  v68 = (ModelPart *)((char *)v3 + 3804);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 3804)), 0, 0, 64, 32);
  v69 = (ModelPart *)(v3 + 503);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 503), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4244)), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 8));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 284));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 63));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 724));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 118));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1164));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 173));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 1604));
  Model::registerParts<ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &>(
    (ModelPart *)v3,
    (ModelPart *)(v3 + 228),
    (ModelPart *)((char *)v3 + 2044),
    (ModelPart *)(v3 + 283),
    (ModelPart *)((char *)v3 + 2484),
    (ModelPart *)(v3 + 338),
    (ModelPart *)((char *)v3 + 2924),
    (ModelPart *)(v3 + 393),
    (int)v3 + 3364,
    (ModelPart *)(v3 + 448),
    (ModelPart *)(v3 + 503),
    (ModelPart *)((char *)v3 + 3804),
    (ModelPart *)((char *)v3 + 4244));
  *((_DWORD *)v3 + 7) = (char *)v3 + 52;
  sub_21E94B4((void **)&v99, "head");
  ModelPart::load((int)(v3 + 8), v2, (const void **)&v99, 0);
  v5 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v99 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v98, "neck");
  ModelPart::load((int)v3 + 284, v2, (const void **)&v98, 0);
  v6 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v98 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v97, "jaw");
  ModelPart::load((int)v79, v2, (const void **)&v97, 0);
  v7 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v97 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v96, "body");
  ModelPart::load((int)v3 + 724, v2, (const void **)&v96, 0);
  v8 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v96 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v95, "rearleg");
  ModelPart::load((int)v78, v2, (const void **)&v95, 0);
  v9 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v95 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v94, "rearleg1");
  ModelPart::load((int)v76, v2, (const void **)&v94, 0);
  v10 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v94 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v93, "frontleg");
  ModelPart::load((int)v77, v2, (const void **)&v93, 0);
  v11 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v93 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v92, "frontleg1");
  ModelPart::load((int)v75, v2, (const void **)&v92, 0);
  v12 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v92 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v91, "rearlegtip");
  ModelPart::load((int)(v3 + 228), v2, (const void **)&v91, 0);
  v13 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v91 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v90, "rearlegtip1");
  ModelPart::load((int)v3 + 2044, v2, (const void **)&v90, 0);
  v14 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v90 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v89, "frontlegtip");
  ModelPart::load((int)(v3 + 283), v2, (const void **)&v89, 0);
  v15 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v89 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v88, "frontlegtip1");
  ModelPart::load((int)v3 + 2484, v2, (const void **)&v88, 0);
  v16 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v88 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v87, "rearfoot");
  ModelPart::load((int)v74, v2, (const void **)&v87, 0);
  v17 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v87 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v86, "rearfoot1");
  ModelPart::load((int)v72, v2, (const void **)&v86, 0);
  v18 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v86 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v85, "frontfoot");
  ModelPart::load((int)v73, v2, (const void **)&v85, 0);
  v19 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v85 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v84, "frontfoot1");
  ModelPart::load((int)v70, v2, (const void **)&v84, 0);
  v20 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v84 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v83, "wing");
  ModelPart::load((int)v71, v2, (const void **)&v83, 0);
  v21 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v83 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v82, "wingtip");
  ModelPart::load((int)v69, v2, (const void **)&v82, 0);
  v22 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v82 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v81, "wing1");
  ModelPart::load((int)v68, v2, (const void **)&v81, 0);
  v23 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v81 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v80, "wingtip1");
  ModelPart::load((int)v3 + 4244, v2, (const void **)&v80, 0);
  v24 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v80 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  ModelPart::addChild((ModelPart *)(v3 + 8), v79);
  ModelPart::addChild(v71, v69);
  ModelPart::addChild(v68, (ModelPart *)((char *)v3 + 4244));
  ModelPart::addChild(v77, (ModelPart *)(v3 + 283));
  ModelPart::addChild((ModelPart *)(v3 + 283), v73);
  ModelPart::addChild(v75, (ModelPart *)((char *)v3 + 2484));
  ModelPart::addChild((ModelPart *)((char *)v3 + 2484), v70);
  ModelPart::addChild(v78, (ModelPart *)(v3 + 228));
  ModelPart::addChild((ModelPart *)(v3 + 228), v74);
  ModelPart::addChild(v76, (ModelPart *)((char *)v3 + 2044));
  ModelPart::addChild((ModelPart *)((char *)v3 + 2044), v72);
  return v3;
}


void __fastcall EnderDragonModel::~EnderDragonModel(EnderDragonModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = EnderDragonModel::~EnderDragonModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall EnderDragonModel::prepareMobModel(EnderDragonModel *this, Mob *a2, float a3, float a4, float a5)
{
  EnderDragonModel::prepareMobModel(this, a2, a3, a4, a5);
}


void __fastcall EnderDragonModel::prepareMobModel(EnderDragonModel *this, Mob *a2, float a3, float a4, float a5)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R0,#0x30]
  }
}


AppPlatformListener *__fastcall EnderDragonModel::~EnderDragonModel(EnderDragonModel *this)
{
  EnderDragonModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E8354;
  v2 = (EnderDragonModel *)((char *)this + 52);
  ModelPart::~ModelPart((EnderDragonModel *)((char *)this + 4244));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 4024));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 3804));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 3584));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 3364));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 3144));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 2924));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 2704));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 2484));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 2264));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 2044));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 1824));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 1604));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 1384));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 1164));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 944));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 724));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 504));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 284));
  ModelPart::~ModelPart((EnderDragonModel *)((char *)v1 + 64));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}
