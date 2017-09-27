

Entity *__fastcall EnderDragon::~EnderDragon(EnderDragon *this)
{
  EnderDragon *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  Path *v4; // r0@5
  Path *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26F5DB4;
  BinaryHeap::~BinaryHeap((EnderDragon *)((char *)this + 5180));
  v2 = (void *)*((_DWORD *)v1 + 1292);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 1289);
  if ( v3 )
    operator delete(v3);
  v4 = (Path *)*((_DWORD *)v1 + 1078);
  if ( v4 )
  {
    v5 = Path::~Path(v4);
    operator delete((void *)v5);
  }
  *((_DWORD *)v1 + 1078) = 0;
  return j_j_j__ZN3MobD2Ev_0(v1);
}


int __fastcall EnderDragon::isImmobile(EnderDragon *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 353) )
    result = 1;
  else
    result = Entity::getStatusFlag((int)this, 16);
  return result;
}


void __fastcall EnderDragon::aiStep(EnderDragon *this)
{
  Level *v2; // r0@2
  char *v3; // r0@2
  Level *v5; // r0@2
  char *v6; // r0@2
  Level *v11; // r0@2
  char *v12; // r0@2
  int v14; // r0@2
  void (__fastcall *v22)(EnderDragon *, signed int, char *, signed int); // r6@10
  int v23; // r1@12
  void (__fastcall *v24)(EnderDragon *, signed int, char *, signed int); // r6@13
  unsigned int v25; // r5@13
  int v26; // r9@13
  Level *v27; // r0@13
  char *v28; // r0@13
  int v29; // r1@13 OVERLAPPED
  int v30; // r2@13 OVERLAPPED
  float v32; // r1@16
  int v33; // r0@16
  float v38; // r1@16
  int v39; // r0@18
  signed int v41; // r2@20
  signed int *v42; // r1@20
  signed int v43; // r3@21
  EnderDragon *v44; // r2@21
  int v45; // r2@24
  int v46; // r3@24
  float v53; // r1@30
  int v54; // r0@34
  int v57; // r0@34
  mce::Degree *v58; // r0@34
  float v61; // r1@34
  float v68; // r1@41
  float *v75; // r1@52
  Level *v86; // r0@62
  int v87; // r0@62
  int v89; // r0@67
  const Vec3 *v90; // r1@67
  BlockSource *v91; // r7@67
  const AABB *v92; // r0@67
  unsigned __int64 *v93; // r0@67
  const Vec3 *v94; // r1@67
  const AABB *v95; // r0@67
  unsigned __int64 *v96; // r0@67
  const Vec3 *v97; // r1@67
  __int64 *v98; // r0@67
  const Vec3 *v99; // r1@67
  __int64 *v100; // r0@67
  float v105; // r1@68
  float v109; // r6@68
  AABB **v110; // r0@72
  AABB *v111; // r5@75
  float v114; // r1@77
  Level *v119; // r0@82
  mce::Math *v120; // ST0C_4@83
  char v121; // r8@83
  mce::Math *v122; // ST0C_4@83
  char v123; // r6@83
  mce::Math *v124; // ST0C_4@83
  BossComponent *v125; // r5@83
  mce::Math ***v129; // [sp+10h] [bp-1D8h]@68
  mce::Math ***v130; // [sp+14h] [bp-1D4h]@68
  mce::Math ***v131; // [sp+18h] [bp-1D0h]@68
  float v132; // [sp+28h] [bp-1C0h]@78
  void *v133; // [sp+34h] [bp-1B4h]@77
  float v134; // [sp+40h] [bp-1A8h]@68
  float v135; // [sp+4Ch] [bp-19Ch]@68
  void *v136; // [sp+58h] [bp-190h]@68
  int v137; // [sp+64h] [bp-184h]@67
  signed int v138; // [sp+68h] [bp-180h]@67
  int v139; // [sp+6Ch] [bp-17Ch]@67
  char v140; // [sp+70h] [bp-178h]@67
  int v141; // [sp+8Ch] [bp-15Ch]@67
  signed int v142; // [sp+90h] [bp-158h]@67
  int v143; // [sp+94h] [bp-154h]@67
  char v144; // [sp+98h] [bp-150h]@67
  char v145; // [sp+B4h] [bp-134h]@67
  int v146; // [sp+D0h] [bp-118h]@67
  signed int v147; // [sp+D4h] [bp-114h]@67
  signed int v148; // [sp+D8h] [bp-110h]@67
  char v149; // [sp+DCh] [bp-10Ch]@67
  int v150; // [sp+F8h] [bp-F0h]@67
  signed int v151; // [sp+FCh] [bp-ECh]@67
  signed int v152; // [sp+100h] [bp-E8h]@67
  float v153; // [sp+104h] [bp-E4h]@62
  float v154; // [sp+110h] [bp-D8h]@62
  float v155; // [sp+11Ch] [bp-CCh]@62
  void *ptr; // [sp+128h] [bp-C0h]@58
  void *v157; // [sp+134h] [bp-B4h]@58
  float v158; // [sp+140h] [bp-A8h]@52
  char v159; // [sp+14Ch] [bp-9Ch]@34
  char v160; // [sp+150h] [bp-98h]@13
  char v161; // [sp+15Ch] [bp-8Ch]@10
  int v162; // [sp+168h] [bp-80h]@2
  int v163; // [sp+16Ch] [bp-7Ch]@2
  int v164; // [sp+170h] [bp-78h]@2
  float v165; // [sp+174h] [bp-74h]@2

  _R11 = this;
  Monster::aiStep(this);
  if ( Mob::getHealth(_R11) <= 0 )
  {
    v2 = (Level *)Entity::getLevel(_R11);
    v3 = Level::getRandom(v2);
    _R5 = Random::_genRandInt32((Random *)v3);
    v5 = (Level *)Entity::getLevel(_R11);
    v6 = Level::getRandom(v5);
    _R0 = Random::_genRandInt32((Random *)v6);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
      VMOV            S0, R5
      VCVT.F64.U32    D9, S0
    }
    v11 = (Level *)Entity::getLevel(_R11);
    v12 = Level::getRandom(v11);
    __asm { VLDR            D10, =2.32830644e-10 }
    _R0 = Random::_genRandInt32((Random *)v12);
      VMUL.F64        D1, D8, D10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D10
      VMUL.F64        D2, D9, D10
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VMOV.F32        S8, #4.0
      VADD.F32        S2, S2, S6
      VMOV.F32        S10, #8.0
      VADD.F32        S4, S4, S6
      VADD.F32        S0, S0, S6
      VMOV.F32        S12, #2.0
      VMUL.F32        S2, S2, S8
      VMUL.F32        S16, S4, S10
      VMUL.F32        S20, S0, S10
      VADD.F32        S18, S2, S12
    v14 = Entity::getLevel(_R11);
      VLDR            S0, [R11,#0x48]
      VLDR            S2, [R11,#0x4C]
      VLDR            S4, [R11,#0x50]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S18, S2
      VADD.F32        S4, S20, S4
      VSTR            S0, [SP,#0x1E8+var_74]
      VSTR            S2, [SP,#0x1E8+var_70]
      VSTR            S4, [SP,#0x1E8+var_6C]
    v162 = 0;
    v163 = 0;
    v164 = 0;
    Level::addParticle(v14, 14, (int)&v165);
  }
  if ( *((_BYTE *)_R11 + 5152) )
    ++*((_DWORD *)_R11 + 862);
    return;
  _R4 = (EnderDragon *)((char *)_R11 + 4308);
  if ( (*(int (__fastcall **)(EnderDragon *))(*(_DWORD *)_R11 + 288))(_R11) == 1 )
    _R7 = (EnderDragon *)((char *)_R11 + 4304);
  else
    __asm { VLDR            S2, [R4] }
    _R0 = &mce::Math::PI;
      VLDR            S16, [R0]
      VADD.F32        S0, S16, S16
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    _R5 = cosf(_R0);
      VLDR            S0, [R7]
      VADD.F32        S0, S0, S0
      VMUL.F32        S0, S16, S0
    _R0 = cosf(_R0);
      VLDR            S0, =-0.3
      VMOV            S2, R5
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
      {
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v22 = *(void (__fastcall **)(EnderDragon *, signed int, char *, signed int))(*(_DWORD *)_R11 + 556);
        Entity::getAttachPos((AABB *)&v161, (int)_R11, 1, 0);
        v22(_R11, 28, &v161, -1);
    if ( !Entity::isSitting(_R11) )
      v23 = *((_DWORD *)_R11 + 1281);
      *((_DWORD *)_R11 + 1281) = v23 - 1;
      if ( v23 <= 0 )
        v24 = *(void (__fastcall **)(EnderDragon *, signed int, char *, signed int))(*(_DWORD *)_R11 + 556);
        v25 = 0;
        Entity::getAttachPos((AABB *)&v160, (int)_R11, 3, 0);
        v24(_R11, 19, &v160, -1);
        v26 = EnderDragon::GROWL_INTERVAL_MIN;
        v27 = (Level *)Entity::getLevel(_R11);
        v28 = Level::getRandom(v27);
        *(_QWORD *)&v29 = *(_QWORD *)&EnderDragon::GROWL_INTERVAL_MIN;
        if ( EnderDragon::GROWL_INTERVAL_MAX != EnderDragon::GROWL_INTERVAL_MIN )
          v25 = Random::_genRandInt32((Random *)v28) % (v30 - v29);
        *((_DWORD *)_R11 + 1281) = v25 + v26;
  EnderDragon::checkCrystals(_R11);
  *(_DWORD *)_R7 = *(_DWORD *)_R4;
  __asm
    VLDR            S0, [R11,#0x48]
    VLDR            S4, [R11,#0x54]
    VLDR            S2, [R11,#0x50]
    VLDR            S6, [R11,#0x5C]
    VSUB.F32        S0, S4, S0
    VLDR            S20, [R11,#0x4C]
    VSUB.F32        S2, S6, S2
    VLDR            S22, [R11,#0x58]
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  v33 = mce::Math::sqrt(_R0, v32);
  __asm { VSUB.F32        S0, S22, S20 }
  _R5 = v33;
    VMOV.F32        S16, #10.0
    VMOV.F32        S18, #1.0
    VCVT.F64.F32    D0, S0
    VMOV            R0, R1, D0
  _R6 = exp2(_R0);
  if ( Entity::isSitting(_R11) == 1 )
    __asm { VLDR            S0, =0.1 }
      VLDR            S2, =0.2
      VMUL.F32        S0, S0, S16
    v39 = *((_BYTE *)_R11 + 5120);
      VADD.F32        S0, S0, S18
      VDIV.F32        S0, S2, S0
      VMOV            D1, R6, R7
      VMUL.F32        S0, S0, S2
    if ( !_ZF )
        VMOVNE.F32      S2, #0.5
        VMULNE.F32      S0, S0, S2
    VLDR            S2, [R4]
    VSTR            S0, [R4]
  _R0 = mce::Math::wrapDegrees(*((mce::Math **)_R11 + 31), v38);
  *((_DWORD *)_R11 + 31) = _R0;
  v41 = *((_DWORD *)_R11 + 1271);
  v42 = (signed int *)((char *)_R11 + 5084);
  if ( v41 <= -1 )
    __asm { VMOV            S0, R0 }
    v43 = 63;
    __asm { VSTR            S0, [R0] }
    *((_DWORD *)_R11 + 1080) = *((_DWORD *)_R11 + 19);
    *((_DWORD *)_R11 + 1081) = 0;
    v44 = (EnderDragon *)((char *)_R11 + 4336);
    do
      --v43;
      *((_DWORD *)v44 - 2) = *((_DWORD *)_R11 + 31);
      *((_DWORD *)v44 - 1) = *((_DWORD *)_R11 + 19);
      *(_DWORD *)v44 = 0;
      v44 = (EnderDragon *)((char *)v44 + 12);
    while ( v43 );
    _R0 = *((_DWORD *)_R11 + 31);
    v41 = *v42;
  v45 = v41 + 1;
  v46 = (int)_R11 + 4316;
  if ( v45 == 64 )
    v45 = 0;
  *v42 = v45;
  *(_DWORD *)(v46 + 12 * v45) = _R0;
  *(_DWORD *)(v46 + 12 * *v42 + 4) = *((_DWORD *)_R11 + 19);
  _R0 = (int)_R11 + 5140;
  _R1 = (int)_R11 + 5144;
  __asm { VLDR            S28, [R0] }
  _R0 = (int)_R11 + 5136;
    VLDR            S26, [R1]
    VLDR            S30, [R0]
    VCMPE.F32       S30, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_91;
    VCMPEEQ.F32     S28, #0.0
    VMRSEQ          APSR_nzcv, FPSCR
    VCMPE.F32       S26, #0.0
LABEL_91:
    __asm { VLDR            S0, [R11,#0x48] }
    _R1 = (int)_R11 + 4008;
      VLDR            S2, [R11,#0x50]
      VSUB.F32        S17, S30, S0
      VLDR            S24, [R11,#0x4C]
      VSUB.F32        S21, S26, S2
      VLDR            S23, [R1]
      VMUL.F32        S22, S17, S17
      VMUL.F32        S20, S21, S21
      VADD.F32        S0, S20, S22
    _R0 = mce::Math::sqrt(_R0, COERCE_FLOAT((EnderDragon *)((char *)_R11 + 4008)));
      VSUB.F32        S19, S28, S24
      VLDR            S24, =0.1
      VNEG.F32        S2, S23
      VDIV.F32        S0, S19, S0
      VCMPE.F32       S0, S2
      VCMPE.F32       S0, S23
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S2, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S2, S23 }
      VMUL.F32        S0, S2, S24
      VLDR            S2, [R11,#0x70]
      VADD.F32        S0, S0, S2
      VSTR            S0, [R11,#0x70]
    v54 = mce::Math::wrapDegrees(*((mce::Math **)_R11 + 31), v53);
    __asm { VMOV            R2, S17 }
    *((_DWORD *)_R11 + 31) = v54;
    __asm { VMOV            R1, S21 }
    LODWORD(_R0) = _R2;
    v57 = mce::Math::atan2(_R0, _R2);
    mce::Degree::Degree((int)&v159, v57);
    _R0 = mce::Degree::asFloat(v58);
      VLDR            S0, =180.0
      VLDR            S2, [R0]
      VSUB.F32        S0, S0, S2
      VLDR            S2, [R11,#0x7C]
    _R0 = mce::Math::wrapDegrees(_R0, v61);
      VSUB.F32        S0, S30, S0
      VLDR            S21, =-50.0
      VSUB.F32        S2, S28, S2
      VSUB.F32        S4, S26, S4
      VLDR            S26, =0.0001
      VMUL.F32        S6, S0, S0
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VMOV            S8, R0
      VCMPE.F32       S8, S21
      VADD.F32        S6, S6, S10
      VLDR            S10, =50.0
      VCMPE.F32       S8, S10
      VSQRT.F32       S6, S6
      __asm { VMOVGT.F32      S21, S8 }
      VCMPE.F32       S6, S26
      __asm { VMOVGT.F32      S21, S10 }
    if ( _NF ^ _VF )
      _R0 = &Vec3::ZERO;
        VLDR            S27, [R0]
        VLDR            S25, [R0,#4]
        VLDR            S23, [R0,#8]
    else
        VDIV.F32        S23, S4, S6
        VDIV.F32        S25, S2, S6
        VDIV.F32        S27, S0, S6
      VLDR            S0, [R11,#0x7C]
      VLDR            S28, [R11,#0x70]
    _R0 = &mce::Math::DEGRAD;
      VMOV            R5, S0
    _R0 = sinf(_R5);
    __asm { VMOV            S17, R0 }
    _R0 = cosf(_R5);
      VMUL.F32        S2, S28, S28
      VMUL.F32        S4, S17, S17
      VADD.F32        S2, S2, S4
      VSQRT.F32       S2, S2
      VCMPE.F32       S2, S26
        VLDR            S28, [R0]
        VLDR            S30, [R0,#4]
        VLDR            S17, [R0,#8]
        VNEG.F32        S0, S0
        VDIV.F32        S30, S28, S2
        VDIV.F32        S28, S17, S2
        VDIV.F32        S17, S0, S2
    _R4 = (int)_R11 + 4156;
      VMUL.F32        S29, S19, S19
      VLDR            S19, =0.8
      VLDR            S0, [R4]
      VMUL.F32        S4, S28, S27
      VMUL.F32        S0, S0, S19
      VSTR            S0, [R4]
      VLDR            S0, [R11,#0x6C]
      VLDR            S2, [R11,#0x74]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #0.5
      VADD.F32        S2, S4, S2
      VMUL.F32        S0, S30, S25
      VMUL.F32        S4, S17, S23
      VADD.F32        S23, S0, S4
    _R0 = mce::Math::sqrt(_R0, v68);
      VLDR            S0, =0.66667
      VMOV            S2, R0
      VLDR            S4, =40.0
      VMUL.F32        S0, S23, S0
      VLDR            S6, =0.0
      VADD.F32        S2, S2, S18
    _R0 = (int)_R11 + 5132;
      VCMPE.F32       S0, #0.0
      VCMPE.F32       S2, S4
      __asm { VMOVLT.F32      S0, S6 }
      __asm { VMOVLT.F32      S4, S2 }
      VLDR            S6, [R0]
      VCMPE.F32       S6, #0.0
    if ( _ZF )
      __asm { VDIV.F32        S2, S4, S2 }
        VMUL.F32        S2, S4, S2
        VDIV.F32        S2, S6, S2
      VADD.F32        S4, S22, S18
      VMOV.F32        S6, #2.0
      VMUL.F32        S2, S2, S21
      VADD.F32        S4, S4, S29
      VADD.F32        S4, S4, S20
      VDIV.F32        S4, S6, S4
      VMUL.F32        S0, S0, S4
      VSUB.F32        S4, S18, S4
      VADD.F32        S0, S4, S0
      VLDR            S4, [R4]
      VLDR            S4, =0.06
      VMUL.F32        S4, S2, S24
      VSTR            S2, [R4]
      VMOV            R3, S0
      VADD.F32        S0, S0, S4
      VSTR            S0, [R11,#0x7C]
    (*(void (__fastcall **)(EnderDragon *, _DWORD))(*(_DWORD *)_R11 + 100))(_R11, 0);
    if ( *((_BYTE *)_R11 + 5120) )
      __asm { VLDR            S0, [R11,#0x6C] }
      v75 = &v158;
        VLDR            S2, [R11,#0x70]
        VLDR            S4, [R11,#0x74]
        VMUL.F32        S0, S0, S19
        VMUL.F32        S2, S2, S19
        VMUL.F32        S4, S4, S19
        VSTR            S0, [SP,#0x1E8+var_A8]
        VSTR            S2, [SP,#0x1E8+var_A4]
        VSTR            S4, [SP,#0x1E8+var_A0]
      v75 = (float *)((char *)_R11 + 108);
    (*(void (__fastcall **)(EnderDragon *, float *))(*(_DWORD *)_R11 + 76))(_R11, v75);
      VLDR            S2, [R11,#0x6C]
      VLDR            S0, [R11,#0x70]
      VMUL.F32        S6, S2, S2
      VLDR            S4, [R11,#0x74]
      VMUL.F32        S8, S0, S0
        VLDR            S6, [R0]
        VLDR            S8, [R0,#4]
        VLDR            S10, [R0,#8]
        VDIV.F32        S10, S4, S6
        VDIV.F32        S8, S0, S6
        VDIV.F32        S6, S2, S6
      VMUL.F32        S10, S10, S17
      VMUL.F32        S8, S8, S30
      VMUL.F32        S6, S6, S28
      VADD.F32        S10, S10, S18
      VADD.F32        S8, S10, S8
      VLDR            S8, =0.075
      VMUL.F32        S6, S6, S8
      VLDR            S8, =0.91
      VMUL.F32        S0, S0, S8
      VADD.F32        S6, S6, S19
      VMUL.F32        S2, S6, S2
      VMUL.F32        S4, S6, S4
      VSTR            S2, [R11,#0x6C]
      VSTR            S4, [R11,#0x74]
  *((_DWORD *)_R11 + 853) = *((_DWORD *)_R11 + 31);
  EnderDragon::getLatencyPos((EnderDragon *)&v157, (int)_R11, COERCE_FLOAT(5), 1065353216);
  _R5 = v157;
  __asm { VLDR            S18, [R5,#4] }
  EnderDragon::getLatencyPos((EnderDragon *)&ptr, (int)_R11, COERCE_FLOAT(10), 1065353216);
  _R0 = ptr;
    VLDR            S0, [R0,#4]
    VSUB.F32        S0, S18, S0
  _R1 = &mce::Math::DEGRAD;
    VMUL.F32        S18, S0, S16
    VLDR            S16, [R1]
    operator delete(ptr);
  __asm { VMUL.F32        S24, S18, S16 }
    operator delete(_R5);
    VLDR            S0, [R11,#0x7C]
    VLDR            S26, [R11,#0x4C]
    VMUL.F32        S0, S16, S0
    VLDR            S28, [R11,#0x50]
    VLDR            S30, [R11,#0x48]
    VMOV            R5, S0
  _R0 = sinf(_R5);
    VLDR            S0, [R11,#0x10C]
    VMOV            S18, R0
    VLDR            S2, [R11,#0x118]
    VMOV.F32        S17, #0.5
    VSUB.F32        S22, S2, S0
  _R0 = cosf(_R5);
    VMOV            S20, R0
    VMUL.F32        S0, S18, S17
    VMUL.F32        S2, S20, S17
    VMUL.F32        S22, S22, S17
    VADD.F32        S0, S30, S0
    VSUB.F32        S2, S28, S2
    VADD.F32        S4, S26, S22
    VSTR            S0, [SP,#0x1E8+var_CC]
    VSTR            S4, [SP,#0x1E8+var_C8]
    VSTR            S2, [SP,#0x1E8+var_C4]
  AABB::centerAt(*((AABB **)_R11 + 1274), (const Vec3 *)&v155);
    VMOV.F32        S0, #4.5
    VLDR            S4, [R11,#0x50]
    VMOV.F32        S2, #2.0
    VMUL.F32        S30, S18, S0
    VMUL.F32        S26, S20, S0
    VADD.F32        S28, S22, S2
    VLDR            S2, [R11,#0x4C]
    VADD.F32        S4, S4, S30
    VADD.F32        S0, S0, S26
    VADD.F32        S2, S28, S2
    VSTR            S0, [SP,#0x1E8+var_D8]
    VSTR            S2, [SP,#0x1E8+var_D4]
    VSTR            S4, [SP,#0x1E8+var_D0]
  AABB::centerAt(*((AABB **)_R11 + 1278), (const Vec3 *)&v154);
    VSUB.F32        S0, S0, S26
    VSUB.F32        S4, S4, S30
    VSTR            S0, [SP,#0x1E8+var_E4]
    VSTR            S2, [SP,#0x1E8+var_E0]
    VSTR            S4, [SP,#0x1E8+var_DC]
  AABB::centerAt(*((AABB **)_R11 + 1279), (const Vec3 *)&v153);
  __asm { VMOV            R5, S24 }
  _R8 = cosf(_R5);
  _R6 = sinf(_R5);
  v86 = (Level *)Entity::getLevel(_R11);
  v87 = Level::isClientSide(v86);
  _ZF = v87 == 0;
  if ( !v87 )
    _ZF = *((_DWORD *)_R11 + 858) == 0;
  if ( _ZF && !Entity::isSitting(_R11) )
    v89 = Entity::getRegion(_R11);
    v90 = (const Vec3 *)*((_DWORD *)_R11 + 1278);
    v91 = (BlockSource *)v89;
    v150 = 1082130432;
    v151 = 0x40000000;
    v152 = 1082130432;
    AABB::grow((AABB *)&v149, v90, (int)&v150);
    v92 = (const AABB *)AABB::move((AABB *)&v149, 0.0, -2.0, 0.0);
    v93 = (unsigned __int64 *)BlockSource::fetchEntities(v91, _R11, v92);
    EnderDragon::knockBack((int)_R11, v93);
    v94 = (const Vec3 *)*((_DWORD *)_R11 + 1279);
    v146 = 1082130432;
    v147 = 0x40000000;
    v148 = 1082130432;
    AABB::grow((AABB *)&v145, v94, (int)&v146);
    v95 = (const AABB *)AABB::move((AABB *)&v145, 0.0, -2.0, 0.0);
    v96 = (unsigned __int64 *)BlockSource::fetchEntities(v91, _R11, v95);
    EnderDragon::knockBack((int)_R11, v96);
    v97 = (const Vec3 *)*((_DWORD *)_R11 + 1272);
    v141 = 1065353216;
    v142 = 1065353216;
    v143 = 1065353216;
    AABB::grow((AABB *)&v144, v97, (int)&v141);
    v98 = (__int64 *)BlockSource::fetchEntities(v91, _R11, (const AABB *)&v144);
    EnderDragon::hurtEntities(_R11, v98);
    v99 = (const Vec3 *)*((_DWORD *)_R11 + 1273);
    v137 = 1065353216;
    v138 = 1065353216;
    v139 = 1065353216;
    AABB::grow((AABB *)&v140, v99, (int)&v137);
    v100 = (__int64 *)BlockSource::fetchEntities(v91, _R11, (const AABB *)&v140);
    EnderDragon::hurtEntities(_R11, v100);
  EnderDragon::getLatencyPos((EnderDragon *)&v136, (int)_R11, COERCE_FLOAT(5), 1065353216);
  __asm { VLDR            S0, =-0.01 }
  _R0 = (int)_R11 + 4156;
    VLDR            S4, [R11,#0x7C]
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S16, S4
  _R7 = sinf(_R5);
  _R5 = cosf(_R5);
  _R0 = EnderDragon::getHeadYOffset(_R11, v105);
    VMOV.F32        S2, #6.5
    VLDR            S6, [R11,#0x48]
    VMOV            S0, R0
    VLDR            S8, [R11,#0x4C]
    VMOV            S26, R8
    VLDR            S10, [R11,#0x50]
    VMOV            S24, R6
    VADD.F32        S22, S0, S22
    VMOV            S28, R5
    VMOV            S30, R7
    VMUL.F32        S0, S24, S2
    VMUL.F32        S4, S26, S2
    VADD.F32        S0, S22, S0
    VMUL.F32        S2, S4, S30
    VMUL.F32        S4, S4, S28
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S6, S2
    VSUB.F32        S4, S10, S4
    VSTR            S2, [SP,#0x1E8+var_19C]
    VSTR            S0, [SP,#0x1E8+var_198]
    VSTR            S4, [SP,#0x1E8+var_194]
  AABB::centerAt(*((AABB **)_R11 + 1272), (const Vec3 *)&v135);
    VMOV.F32        S0, #5.5
    VMUL.F32        S2, S26, S0
    VMUL.F32        S0, S24, S0
    VMUL.F32        S4, S2, S30
    VMUL.F32        S2, S2, S28
    VADD.F32        S4, S6, S4
    VSUB.F32        S2, S10, S2
    VSTR            S4, [SP,#0x1E8+var_1A8]
    VSTR            S0, [SP,#0x1E8+var_1A4]
    VSTR            S2, [SP,#0x1E8+var_1A0]
  AABB::centerAt(*((AABB **)_R11 + 1273), (const Vec3 *)&v134);
  __asm { VMOV.F32        S22, #1.5 }
  v129 = (mce::Math ***)((char *)_R11 + 5096);
  v131 = (mce::Math ***)((char *)_R11 + 5088);
  v130 = (mce::Math ***)((char *)_R11 + 5092);
  _R10 = v136;
    VMUL.F32        S20, S20, S22
    VMUL.F32        S18, S18, S22
  _R9 = 0;
  LODWORD(v109) = 4;
  do
    if ( _R9 == 2 )
      v110 = (AABB **)((char *)_R11 + 5108);
      goto LABEL_75;
    if ( _R9 == 1 )
      v110 = (AABB **)((char *)_R11 + 5104);
    if ( !_R9 )
      v110 = (AABB **)((char *)_R11 + 5100);
LABEL_75:
      v111 = *v110;
      goto LABEL_77;
    v111 = 0;
LABEL_77:
    EnderDragon::getLatencyPos((EnderDragon *)&v133, (int)_R11, v109, 1065353216);
    _R7 = v133;
      VLDR            S0, [R10]
      VLDR            S28, [R11,#0x7C]
      VLDR            S2, [R7]
      VSUB.F32        S0, S2, S0
    _R0 = mce::Math::wrapDegrees(_R0, v114);
    ++_R9;
      VMOV            S0, R9
      VCVT.F32.S32    S0, S0
      if ( !_R7 )
        goto LABEL_81;
        VADD.F32        S2, S2, S28
        VADD.F32        S28, S0, S0
        VMUL.F32        S2, S16, S2
        VADD.F32        S0, S28, S22
        VMOV            R4, S2
        VMUL.F32        S30, S0, S24
      _R8 = cosf(_R4);
      _R0 = sinf(_R4);
        VMOV            S0, R0
        VLDR            S8, [R11,#0x4C]
        VMOV            S2, R8
        VLDR            S6, [R11,#0x48]
        VMUL.F32        S0, S0, S28
        VLDR            S10, [R11,#0x50]
        VSUB.F32        S4, S22, S30
        VMUL.F32        S2, S2, S28
        VADD.F32        S0, S0, S18
        VADD.F32        S4, S4, S8
        VLDR            S8, [R7,#4]
        VADD.F32        S2, S2, S20
        VMUL.F32        S0, S0, S26
        VLDR            S8, [R10,#4]
        VMUL.F32        S2, S2, S26
        VSUB.F32        S0, S6, S0
        VSUB.F32        S4, S4, S8
        VADD.F32        S2, S10, S2
        VSTR            S0, [SP,#0x1E8+var_1C0]
        VSTR            S4, [SP,#0x1E8+var_1BC]
        VSTR            S2, [SP,#0x1E8+var_1B8]
      AABB::centerAt(v111, (const Vec3 *)&v132);
    operator delete(_R7);
LABEL_81:
    LODWORD(v109) += 2;
  while ( _R9 < 3 );
  v119 = (Level *)Entity::getLevel(_R11);
  if ( !Level::isClientSide(v119) )
    v120 = (*v131)[6];
    v121 = EnderDragon::checkWalls(
             (int)_R11,
             **v131,
             (int)(*v131)[1],
             (int)(*v131)[2],
             (*v131)[3],
             (mce::Math *)*((_QWORD *)*v131 + 2),
             *((_QWORD *)*v131 + 2) >> 32);
    v122 = (*v130)[6];
    v123 = EnderDragon::checkWalls(
             **v130,
             (int)(*v130)[1],
             (int)(*v130)[2],
             (*v130)[3],
             (mce::Math *)*((_QWORD *)*v130 + 2),
             *((_QWORD *)*v130 + 2) >> 32);
    v124 = (*v129)[6];
    *((_BYTE *)_R11 + 5120) = EnderDragon::checkWalls(
                                (int)_R11,
                                **v129,
                                (int)(*v129)[1],
                                (int)(*v129)[2],
                                (*v129)[3],
                                (mce::Math *)*((_QWORD *)*v129 + 2),
                                *((_QWORD *)*v129 + 2) >> 32) | v121 | v123;
    v125 = (BossComponent *)*((_DWORD *)_R11 + 809);
    if ( v125 )
      if ( *((_DWORD *)_R11 + 862) )
        BossComponent::setPercent(*((BossComponent **)_R11 + 809), 0.0);
      else
        _R6 = Mob::getHealth(_R11);
        _R0 = Mob::getMaxHealth(_R11);
        __asm
        {
          VMOV            S0, R0
          VMOV            S2, R6
          VCVT.F32.S32    S0, S0
          VCVT.F32.S32    S2, S2
          VDIV.F32        S0, S2, S0
          VMOV            R1, S0
        }
        BossComponent::setPercent(v125, _R1);
  if ( _R10 )
    operator delete(_R10);
}


int __fastcall EnderDragon::setTargetPos(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 5136) = a2;
  *(_DWORD *)(result + 5140) = a3;
  *(_DWORD *)(result + 5144) = a4;
  return result;
}


signed int __fastcall EnderDragon::_hurt(EnderDragon *this, const EntityDamageSource *a2, int _R2, bool a4, bool a5)
{
  __asm
  {
    VMOV            S0, R2
    VCVT.F32.S32    S0, S0
    VMOV            R3, S0
  }
  return j_j_j__ZN11EnderDragon5_hurtEP4AABBRK18EntityDamageSourcef(this, *((AABB **)this + 65), a2, _R3);
}


unsigned int __fastcall EnderDragon::findClosestNode(EnderDragon *this)
{
  EnderDragon *v1; // r4@1
  int *v6; // r7@2
  char *v7; // r8@2
  signed int v11; // r1@3
  signed int v18; // r5@8
  int v23; // r6@11
  BlockSource *v24; // r0@11
  int v25; // r0@11
  int v26; // r0@11
  int v27; // r1@11
  int v28; // r0@19
  unsigned __int64 *v30; // [sp+4h] [bp-ACh]@2
  float v31; // [sp+8h] [bp-A8h]@15
  int v32; // [sp+Ch] [bp-A4h]@15
  char v33; // [sp+14h] [bp-9Ch]@15
  float v34; // [sp+3Ch] [bp-74h]@11
  int v35; // [sp+40h] [bp-70h]@11

  v1 = this;
  if ( *((_DWORD *)this + 1290) == *((_DWORD *)this + 1289) )
  {
    v30 = (unsigned __int64 *)((char *)this + 5156);
    __asm
    {
      VMOV.F32        S22, #0.125
      VMOV.F32        S26, #0.25
    }
    v6 = (int *)((char *)this + 5160);
    __asm { VMOV.F32        S28, #20.0 }
    v7 = (char *)this + 5164;
    _R0 = &mce::Math::PI;
      VLDR            S18, =0.083333
      VLDR            S20, =60.0
    _R9 = -12;
      VLDR            S16, [R0]
      VLDR            S24, =40.0
    while ( 1 )
      _R0 = _R9 + 12;
      v11 = 1;
      if ( _R9 + 12 >= _R9 )
        v11 = 0;
      if ( v11 )
        break;
      if ( _R0 > 0x13 )
      {
        _R0 = _R9 - 8;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S26
          VMUL.F32        S0, S0, S16
          VSUB.F32        S0, S0, S16
          VADD.F32        S0, S0, S0
          VMOV            R5, S0
        }
        _R6 = cosf(_R5);
        _R0 = sinf(_R5);
          VMOV            S2, R6
          VMUL.F32        S30, S0, S28
          VMUL.F32        S17, S2, S28
        goto LABEL_10;
      }
      __asm
        VMOV            S0, R9
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S22
        VMUL.F32        S0, S0, S16
        VSUB.F32        S0, S0, S16
        VADD.F32        S0, S0, S0
        VMOV            R5, S0
      _R6 = cosf(_R5);
      _R0 = sinf(_R5);
      __asm { VMOV            S0, R0 }
      v18 = 15;
        VMOV            S2, R6
        VMUL.F32        S30, S0, S24
        VMUL.F32        S17, S2, S24
LABEL_11:
      v23 = *(_WORD *)(Entity::getDimension(v1) + 20);
      v24 = (BlockSource *)Entity::getRegion(v1);
        VCVTR.S32.F32   S0, S17
        VSTR            S0, [SP,#0xB0+var_74]
      v35 = 0;
        VCVTR.S32.F32   S0, S30
        VSTR            S0, [SP,#0xB0+var_6C]
      v25 = BlockSource::getAboveTopSolidBlock(v24, (const BlockPos *)&v34, 0, 0);
      __asm { VCVTR.S32.F32   S0, S17 }
      v26 = v25 + v18;
      v27 = v23 + 10;
      __asm { VSTR            S0, [SP,#0xB0+var_A8] }
      if ( _NF ^ _VF )
        v27 = v26;
      if ( v27 > 128 )
        v27 = 128;
      v32 = v27;
        VSTR            S0, [SP,#0xB0+var_A0]
      Node::Node((Node *)&v33, (const BlockPos *)&v31);
      if ( *v6 == *(_DWORD *)v7 )
        std::vector<Node,std::allocator<Node>>::_M_emplace_back_aux<Node>(v30, (int)&v33);
      else
        Node::Node(*v6, (int)&v33);
        *v6 += 40;
      if ( ++_R9 == 12 )
        v28 = *((_DWORD *)v1 + 1292);
        *(_DWORD *)v28 = 6146;
        *(_DWORD *)(v28 + 4) = 8197;
        *(_DWORD *)(v28 + 8) = 8202;
        *(_DWORD *)(v28 + 12) = 16404;
        *(_DWORD *)(v28 + 16) = 32808;
        *(_DWORD *)(v28 + 20) = 32848;
        *(_DWORD *)(v28 + 24) = 65696;
        *(_DWORD *)(v28 + 28) = 131392;
        *(_DWORD *)(v28 + 32) = 131712;
        *(_DWORD *)(v28 + 36) = 263424;
        *(_DWORD *)(v28 + 40) = 526848;
        *(_DWORD *)(v28 + 44) = 525313;
        *(_DWORD *)(v28 + 48) = 1581057;
        *(_DWORD *)(v28 + 52) = 3166214;
        *(_DWORD *)(v28 + 56) = 2138120;
        *(_DWORD *)(v28 + 60) = 6373424;
        *(_DWORD *)(v28 + 64) = 4358208;
        *(_DWORD *)(v28 + 68) = 12910976;
        *(_DWORD *)(v28 + 72) = 9044480;
        *(_DWORD *)(v28 + 76) = 9706496;
        *(_DWORD *)(v28 + 80) = 15216640;
        *(_DWORD *)(v28 + 84) = 13688832;
        *(_DWORD *)(v28 + 88) = 11763712;
        *(_DWORD *)(v28 + 92) = 8257536;
        return EnderDragon::findClosestNode(
                 (int)v1,
                 *((mce::Math **)v1 + 18),
                 *((mce::Math **)v1 + 19),
                 *((mce::Math **)v1 + 20));
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S18
      VMUL.F32        S0, S0, S16
      VSUB.F32        S0, S0, S16
      VADD.F32        S0, S0, S0
      VMOV            R6, S0
    _R5 = cosf(_R6);
    _R0 = sinf(_R6);
      VMOV            S2, R5
      VMUL.F32        S30, S0, S20
      VMUL.F32        S17, S2, S20
LABEL_10:
    v18 = 5;
    goto LABEL_11;
  }
  return EnderDragon::findClosestNode(
           (int)v1,
           *((mce::Math **)v1 + 18),
           *((mce::Math **)v1 + 19),
           *((mce::Math **)v1 + 20));
}


unsigned int __fastcall EnderDragon::findClosestNode(int a1, mce::Math *a2, mce::Math *a3, mce::Math *a4)
{
  int v4; // r4@1
  mce::Math *v5; // r5@1
  mce::Math *v6; // r6@1
  float v7; // r1@1
  float v8; // r1@1
  EndDragonFight *v9; // r0@1
  unsigned int v10; // r6@3
  int v11; // r1@5
  int *v12; // r5@6
  _DWORD *v13; // r10@6
  int v18; // r7@6
  unsigned int v19; // r4@6
  int v22; // [sp+4h] [bp-5Ch]@1
  int v23; // [sp+8h] [bp-58h]@1
  int v24; // [sp+Ch] [bp-54h]@1
  char v25; // [sp+10h] [bp-50h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v22 = mce::Math::floor(a2, *(float *)&a2);
  v23 = mce::Math::floor(v6, v7);
  v24 = mce::Math::floor(v5, v8);
  Node::Node((Node *)&v25, (const BlockPos *)&v22);
  v9 = *(EndDragonFight **)(v4 + 5208);
  if ( v9 && EndDragonFight::getCrystalsAlive(v9) )
    v10 = 0;
  else
    v10 = 12;
  v11 = *(_DWORD *)(v4 + 5156);
  if ( v10 >= -858993459 * ((*(_DWORD *)(v4 + 5160) - v11) >> 3) )
  {
    v19 = 0;
  }
    v12 = (int *)(v4 + 5156);
    v13 = (_DWORD *)(v4 + 5160);
    __asm { VLDR            S16, =10000.0 }
    v18 = 40 * v10;
    do
    {
      _R0 = Node::distanceToSqr((Node *)(v11 + v18), (Node *)&v25);
      __asm { VMOV            S0, R0 }
      v11 = *v12;
      __asm
      {
        VMOV.F32        S2, S16
        VCMPE.F32       S0, S16
      }
      v18 += 40;
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S2, S0 }
        VMOV.F32        S16, S2
        v19 = v10;
      ++v10;
    }
    while ( v10 < -858993459 * ((*v13 - *v12) >> 3) );
  return v19;
}


int __fastcall EnderDragon::remove(EnderDragon *this)
{
  EnderDragon *v1; // r4@1
  BossComponent *v2; // r0@1
  int result; // r0@3
  Level *v4; // r0@4

  v1 = this;
  Entity::remove(this);
  *((_DWORD *)v1 + 1287) = 0;
  v2 = (BossComponent *)*((_DWORD *)v1 + 809);
  if ( v2 )
  {
    BossComponent::setHealthBarVisible(v2, 0);
    BossComponent::setPercent(*((BossComponent **)v1 + 809), 0.0);
  }
  result = *((_DWORD *)v1 + 1302);
  if ( result )
    v4 = (Level *)Entity::getLevel(v1);
    result = Level::isClientSide(v4);
    if ( !result )
      result = j_j_j__ZN14EndDragonFight15setDragonKilledER11EnderDragon(*((EndDragonFight **)v1 + 1302), v1);
  return result;
}


int __fastcall EnderDragon::reloadHardcoded(int a1)
{
  int v1; // r4@1
  int result; // r0@1
  BossComponent *v3; // r6@2
  int v4; // r5@2
  void *v5; // r0@3
  void *v6; // r6@4
  void *v7; // r0@5

  v1 = a1;
  result = *(_BYTE *)(a1 + 3081);
  if ( !result )
  {
    v3 = (BossComponent *)operator new(0x50u);
    BossComponent::BossComponent((int)v3, (Mob *)v1, 0);
    v4 = *(_DWORD *)(v1 + 3236);
    *(_DWORD *)(v1 + 3236) = v3;
    if ( v4 )
    {
      v5 = *(void **)(v4 + 56);
      if ( v5 )
      {
        do
        {
          v6 = *(void **)v5;
          operator delete(v5);
          v5 = v6;
        }
        while ( v6 );
      }
      _aeabi_memclr4(*(_QWORD *)(v4 + 48), 4 * (*(_QWORD *)(v4 + 48) >> 32));
      *(_DWORD *)(v4 + 56) = 0;
      *(_DWORD *)(v4 + 60) = 0;
      v7 = *(void **)(v4 + 48);
      if ( v7 )
        if ( (void *)(v4 + 72) != v7 )
          operator delete(v7);
      operator delete((void *)v4);
      v3 = *(BossComponent **)(v1 + 3236);
    }
    result = j_j_j__ZN13BossComponent11setRangeSqrEi(v3, 15000);
  }
  return result;
}


int __fastcall EnderDragon::checkWalls(int a1, mce::Math *this, int a3, int a4, mce::Math *a5, mce::Math *a6, int a7)
{
  Entity *v7; // r6@1
  int v10; // r5@1
  float v11; // r1@1
  int v12; // r0@1
  int v13; // r4@1
  float v14; // r1@1
  int v15; // r0@1
  int v16; // r11@1
  float v17; // r1@1
  int v18; // r0@1
  int v19; // r8@1
  float v20; // r1@1
  float v21; // r1@1
  int v22; // r7@1
  BlockSource *v23; // r6@1
  char v24; // r0@1
  signed int v33; // r0@2
  signed int v34; // r1@4
  int v35; // r0@8
  int v36; // r9@10
  Block *v37; // r10@10
  int *v38; // r11@10
  Level *v39; // r0@12
  unsigned __int64 *v40; // r0@12
  Level *v41; // r0@28
  char *v42; // r0@28
  Level *v44; // r0@28
  char *v45; // r0@28
  Level *v47; // r0@28
  char *v48; // r0@28
  Player *v50; // r0@28
  __int64 v51; // r2@28
  int v53; // [sp+8h] [bp-C8h]@6
  int v54; // [sp+14h] [bp-BCh]@6
  int v55; // [sp+1Ch] [bp-B4h]@1
  int v56; // [sp+20h] [bp-B0h]@1
  int v57; // [sp+34h] [bp-9Ch]@1
  int v58; // [sp+38h] [bp-98h]@1
  char v59; // [sp+44h] [bp-8Ch]@2
  mce::Math *v60; // [sp+48h] [bp-88h]@1
  Entity *v61; // [sp+4Ch] [bp-84h]@1
  float v62; // [sp+50h] [bp-80h]@28
  char v63; // [sp+5Ch] [bp-74h]@9
  int v64; // [sp+60h] [bp-70h]@10
  int v65; // [sp+64h] [bp-6Ch]@10

  v7 = (Entity *)a1;
  _R10 = (mce::Math *)a4;
  _R9 = (mce::Math *)a3;
  v60 = this;
  v61 = (Entity *)a1;
  v10 = mce::Math::floor(this, *(float *)&this);
  v12 = mce::Math::floor(_R9, v11);
  v13 = v12;
  v56 = v12;
  v15 = mce::Math::floor(_R10, v14);
  v16 = v15;
  v57 = v15;
  v18 = mce::Math::floor(a5, v17);
  v19 = v18;
  v55 = v18;
  v58 = mce::Math::floor(a6, v20);
  v22 = mce::Math::floor((mce::Math *)a7, v21);
  v23 = (BlockSource *)Entity::getRegion(v7);
  v24 = 0;
  if ( v10 <= v19 )
  {
    v59 = 0;
    __asm { VMOV            S16, R10 }
    _R0 = v60;
    __asm
    {
      VMOV            S18, R9
      VMOV            S20, R0
    }
    _R0 = a7;
    __asm { VMOV            S17, R0 }
    _R0 = a6;
    __asm { VMOV            S24, R0 }
    _R0 = a5;
    __asm { VMOV            S26, R0 }
    v33 = 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v33 = 1;
    v34 = 0;
    if ( v13 > v58 )
      v34 = 1;
    v54 = v33 | v34;
    v53 = 0;
    do
      if ( !v54 )
      {
        do
        {
          v35 = v16;
          do
          {
            v36 = v35;
            *(_DWORD *)&v63 = v10;
            v64 = v13;
            v65 = v35;
            v37 = (Block *)BlockSource::getBlock(v23, (const BlockPos *)&v63);
            v38 = (int *)Block::getMaterial(v37);
            if ( !Material::isType(v38, 0) && !Material::isType(v38, 13) )
            {
              v39 = (Level *)Entity::getLevel(v61);
              v40 = (unsigned __int64 *)Level::getGameRules(v39);
              if ( GameRules::getBool(v40, (int **)&GameRules::MOB_GRIEFING) != 1
                || Block::isType(v37, (const Block *)Block::mObsidian)
                || Block::isType(v37, (const Block *)Block::mEndStone)
                || Block::isType(v37, (const Block *)Block::mEndPortalFrame)
                || Block::isType(v37, (const Block *)Block::mEndPortal)
                || Block::isType(v37, (const Block *)Block::mBedrock)
                || Block::isType(v37, (const Block *)Block::mCommandBlock)
                || Block::isType(v37, (const Block *)Block::mRepeatingCommandBlock)
                || Block::isType(v37, (const Block *)Block::mChainCommandBlock)
                || Block::isType(v37, (const Block *)Block::mIronFence)
                || Block::isType(v37, (const Block *)Block::mEndGateway) )
              {
                v59 = 1;
              }
              else
                v53 |= BlockSource::removeBlock(v23, (const BlockPos *)&v63);
            }
            v35 = v36 + 1;
          }
          while ( v36 < v22 );
          v16 = v57;
          _VF = __OFSUB__(v13, v58);
          _NF = v13++ - v58 < 0;
        }
        while ( _NF ^ _VF );
      }
      v13 = v56;
      _VF = __OFSUB__(v10, v55);
      _NF = v10++ - v55 < 0;
    while ( _NF ^ _VF );
    if ( v53 & 1 )
      v41 = (Level *)Entity::getLevel(v61);
      v42 = Level::getRandom(v41);
      _R0 = Random::_genRandInt32((Random *)v42);
      __asm
        VMOV            S0, R0
        VCVT.F64.U32    D14, S0
      v44 = (Level *)Entity::getLevel(v61);
      v45 = Level::getRandom(v44);
      _R0 = Random::_genRandInt32((Random *)v45);
        VCVT.F64.U32    D15, S0
      v47 = (Level *)Entity::getLevel(v61);
      v48 = Level::getRandom(v47);
      __asm { VLDR            D11, =2.32830644e-10 }
      _R0 = Random::_genRandInt32((Random *)v48);
        VMUL.F64        D1, D14, D11
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D11
        VMUL.F64        D2, D15, D11
        VSUB.F32        S6, S26, S20
        VCVT.F32.F64    S2, D1
        VSUB.F32        S8, S24, S18
        VCVT.F32.F64    S4, D2
        VSUB.F32        S10, S17, S16
        VCVT.F32.F64    S0, D0
        VMUL.F32        S2, S2, S6
        VMUL.F32        S4, S4, S8
        VMUL.F32        S0, S0, S10
        VADD.F32        S20, S2, S20
        VADD.F32        S18, S4, S18
        VADD.F32        S16, S0, S16
      v50 = (Player *)Entity::getLevel(v61);
      LODWORD(v51) = &v62;
      HIDWORD(v51) = 14;
        VSTR            S20, [SP,#0xD0+var_80]
        VSTR            S18, [SP,#0xD0+var_7C]
        VSTR            S16, [SP,#0xD0+var_78]
      Level::broadcastLevelEvent(v50, 2009, v51, 0);
    v24 = v59;
  }
  return v24 & 1;
}


int __fastcall EnderDragon::isInvulnerableTo(EnderDragon *this, const EntityDamageSource *a2)
{
  const EntityDamageSource *v2; // r4@1
  Entity *v3; // r5@1
  int v4; // r0@3
  int result; // r0@4

  v2 = a2;
  v3 = this;
  if ( Entity::isSitting(this) == 1
    && EntityDamageSource::getCause(v2) == 3
    && (v4 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v2 + 56))(v2),
        EntityClassTree::isOfType(v4, 4194384)) )
  {
    result = 1;
  }
  else
    result = Entity::isInvulnerableTo(v3, v2);
  return result;
}


int __fastcall EnderDragon::getHeadPos(EnderDragon *this, int a2)
{
  EnderDragon *v2; // r4@1
  char v4; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  AABB::getCenter((AABB *)&v4, *(_DWORD *)(a2 + 5088));
  return BlockPos::BlockPos((int)v2, (int)&v4);
}


int __fastcall EnderDragon::incrementFlameCount(int result)
{
  ++*(_DWORD *)(result + 5148);
  return result;
}


void __fastcall EnderDragon::onCrystalDestroyed(int a1, Entity *a2, int a3, int a4)
{
  int v4; // r8@0
  int v5; // r6@1
  int v6; // r4@1
  Entity *v7; // r5@1
  int v8; // r7@1
  int v9; // r0@1
  int v10; // r7@2
  int v11; // r1@2
  int v12; // r0@2
  int v13; // r0@3
  Entity *v14; // r6@4
  int v15; // r0@4
  int v16; // r6@10
  bool v17; // zf@10
  double v18; // r0@13
  unsigned int v19; // r0@13
  int v20; // r7@15
  int *v21; // r5@15
  int v22; // r7@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  void *v25; // r6@26
  int v26; // r1@26
  void *v27; // r0@26
  bool v28; // zf@28
  void *ptr; // [sp+8h] [bp-90h]@13
  unsigned int v30; // [sp+Ch] [bp-8Ch]@13
  int v31; // [sp+10h] [bp-88h]@13
  int v32; // [sp+14h] [bp-84h]@13
  signed int v33; // [sp+18h] [bp-80h]@13
  int v34; // [sp+1Ch] [bp-7Ch]@13
  int v35; // [sp+20h] [bp-78h]@13
  char v36; // [sp+28h] [bp-70h]@32
  char v37; // [sp+30h] [bp-68h]@7
  int v38; // [sp+5Ch] [bp-3Ch]@3
  int v39; // [sp+60h] [bp-38h]@3
  int v40; // [sp+64h] [bp-34h]@3
  unsigned int v41; // [sp+68h] [bp-30h]@2
  unsigned int v42; // [sp+6Ch] [bp-2Ch]@2

  v5 = a4;
  v6 = a1;
  v7 = a2;
  v8 = a3;
  v9 = (*(int (__fastcall **)(int))(*(_DWORD *)a4 + 36))(a4);
  if ( EntityClassTree::isOfType(v9, 319) == 1 )
  {
    v10 = Entity::getLevel((Entity *)v6);
    (*(void (__fastcall **)(unsigned int *, int))(*(_DWORD *)v5 + 32))(&v41, v5);
    v12 = Level::fetchEntity(v10, v11, v41, v42, 0);
  }
  else
    v13 = Entity::getDimension((Entity *)v6);
    v38 = *(_DWORD *)v8;
    v39 = *(_DWORD *)(v8 + 4);
    v40 = *(_DWORD *)(v8 + 8);
    v12 = Dimension::fetchNearestAttackablePlayer(v13, (int)&v38, 1115684864, 0);
  v14 = (Entity *)v12;
  v15 = Entity::getLevel((Entity *)v6);
  if ( Level::fetchEntity(v15, 0, *(_DWORD *)(v6 + 5200), *(_DWORD *)(v6 + 5204), 0)
    && *(_QWORD *)Entity::getUniqueID(v7) == *(_QWORD *)(v6 + 5200) )
    if ( !v14 )
    {
      EntityDamageSource::EntityDamageSource((int)&v36, 10);
      EnderDragon::_hurt((EnderDragon *)v6, *(AABB **)(v6 + 5088), (const EntityDamageSource *)&v36, 10.0);
      EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v36);
      return;
    }
    EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v37, v14, 10);
    EnderDragon::_hurt((EnderDragon *)v6, *(AABB **)(v6 + 5088), (const EntityDamageSource *)&v37, 10.0);
    EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v37);
  else if ( !v14 )
    return;
  if ( !Entity::isSitting((Entity *)v6) )
    (*(void (__fastcall **)(int, Entity *))(*(_DWORD *)v6 + 340))(v6, v14);
    v16 = *(_DWORD *)(v6 + 48);
    v17 = v16 == 0;
    if ( v16 )
      v4 = *(_DWORD *)(v16 + 260);
      v17 = v4 == 0;
    if ( !v17 )
      v35 = 0;
      HIDWORD(v18) = 10;
      v31 = 0;
      v32 = 0;
      ptr = 0;
      v33 = 1065353216;
      v34 = 0;
      LODWORD(v18) = &v33;
      v19 = sub_21E6254(v18);
      v30 = v19;
      if ( v19 == 1 )
      {
        v35 = 0;
        v21 = &v35;
      }
      else
        if ( v19 >= 0x40000000 )
          sub_21E57F4();
        v20 = 4 * v19;
        v21 = (int *)operator new(4 * v19);
        _aeabi_memclr4(v21, v20);
      ptr = v21;
      EntityDefinitionDescriptor::executeTrigger(
        v16,
        (const Entity *)v6,
        (DefinitionTrigger *)(v4 + 4),
        (const VariantParameterList *)&ptr);
      v22 = v31;
      while ( v22 )
        v25 = (void *)v22;
        v26 = *(_DWORD *)(v22 + 8);
        v22 = *(_DWORD *)v22;
        v27 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
        {
          v23 = (unsigned int *)(v26 - 4);
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
            j_j_j_j__ZdlPv_9(v27);
        }
        operator delete(v25);
      _aeabi_memclr4(ptr, 4 * v30);
      v28 = ptr == 0;
      if ( ptr )
        v28 = &v35 == ptr;
      if ( !v28 )
        operator delete(ptr);
}


void __fastcall EnderDragon::onCrystalDestroyed(int a1, Entity *a2, int a3, int a4)
{
  EnderDragon::onCrystalDestroyed(a1, a2, a3, a4);
}


int __fastcall EnderDragon::getLatencyPos(EnderDragon *this, int a2, float a3, int _R3)
{
  int v8; // r5@1
  EnderDragon *v9; // r6@1
  char v10; // r8@1
  int v11; // r0@1
  int v12; // r9@1
  char *v13; // r0@3
  float v14; // r1@3
  int result; // r0@3

  __asm { VMOV.F32        S18, #1.0 }
  v8 = a2;
  __asm { VMOV            S0, R3 }
  v9 = this;
  v10 = LOBYTE(a3);
  __asm { VSUB.F32        S16, S18, S0 }
  v11 = Mob::getHealth((Mob *)a2);
  v12 = *(_DWORD *)(v8 + 5084);
  if ( v11 < 1 )
    __asm { VMOVLT.F32      S16, S18 }
  *(_DWORD *)v9 = 0;
  *((_DWORD *)v9 + 1) = 0;
  *((_DWORD *)v9 + 2) = 0;
  v13 = (char *)operator new(0xCu);
  *(_DWORD *)v9 = v13;
  *((_DWORD *)v9 + 2) = v13 + 12;
  *(_DWORD *)v13 = 0;
  *((_DWORD *)v13 + 1) = 0;
  *((_DWORD *)v9 + 1) = v13 + 12;
  LODWORD(v14) = v8 + 4316;
  *((_DWORD *)v13 + 2) = 0;
  _R5 = v8 + 4316 + 12 * (((_BYTE)v12 - v10) & 0x3F);
  _R6 = LODWORD(v14) + 12 * (((_BYTE)v12 - v10 + 63) & 0x3F);
  __asm
  {
    VLDR            S18, [R5]
    VLDR            S0, [R6]
    VSUB.F32        S0, S0, S18
    VMOV            R0, S0
  }
  result = mce::Math::wrapDegrees(_R0, v14);
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4]
    VLDR            S0, [R5,#4]
    VLDR            S2, [R6,#4]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S16
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#4]
    VLDR            S0, [R5,#8]
    VLDR            S2, [R6,#8]
    VSTR            S0, [R4,#8]
  return result;
}


void __fastcall EnderDragon::checkCrystals(EnderDragon *this)
{
  EnderDragon::checkCrystals(this);
}


signed int __fastcall EnderDragon::getEntityTypeId(EnderDragon *this)
{
  return 2869;
}


int __fastcall EnderDragon::getExperienceReward(EnderDragon *this)
{
  return 0;
}


int __fastcall EnderDragon::shouldDespawn(EnderDragon *this)
{
  return 0;
}


int __fastcall EnderDragon::onSizeUpdated(int result)
{
  __asm
  {
    VMOV.F32        S0, #0.25
    VLDR            S6, [R0,#0x134]
    VMOV.F32        S2, #-0.4375
    VLDR            S4, [R0,#0x130]
  }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S0, S6, S0
    VMUL.F32        S2, S4, S2
    VSTR            S0, [R0,#0x170]
    VSTR            S2, [R0,#0x174]
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S0, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


void __fastcall EnderDragon::~EnderDragon(EnderDragon *this)
{
  EnderDragon::~EnderDragon(this);
}


signed int __fastcall EnderDragon::reallyHurt(EnderDragon *this, const EntityDamageSource *a2, float _R2)
{
  __asm
  {
    VMOV            S0, R2
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S0
  }
  return Monster::_hurt(this, a2, _R2, 0, 0);
}


int __fastcall EnderDragon::getShadowRadius(EnderDragon *this)
{
  int result; // r0@1

  _R0 = Entity::getShadowRadius(this);
  __asm
  {
    VLDR            S0, =0.3
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall EnderDragon::canBeAffected(EnderDragon *this, const MobEffectInstance *a2)
{
  return 0;
}


int __fastcall EnderDragon::getHeadPartYOffset(Entity *a1, int a2, int *a3, int *a4)
{
  int *v4; // r4@1
  int *v5; // r5@1
  int result; // r0@2

  v4 = a4;
  v5 = a3;
  _R6 = a2;
  if ( Entity::isSitting(a1) == 1 )
  {
    __asm
    {
      VMOV            S0, R6
      VCVT.F32.S32    S0, S0
      VMOV            R0, S0
    }
  }
  else if ( _R6 == 6 )
      VLDR            S0, =0.0
  else
    _R0 = *v5;
    _R1 = *v4;
      VLDR            S0, [R0,#4]
      VLDR            S2, [R1,#4]
      VSUB.F32        S0, S2, S0
  return result;
}


int __fastcall EnderDragon::getHeadLookVector(EnderDragon *this, float a2, float a3)
{
  EnderDragon *v3; // r4@1
  float v4; // r5@1
  float v5; // r6@1
  float v6; // r3@1
  int v7; // r7@2
  int result; // r0@2
  int v9; // [sp+4h] [bp-2Ch]@3
  int v10; // [sp+8h] [bp-28h]@3
  int v11; // [sp+Ch] [bp-24h]@3
  int v12; // [sp+10h] [bp-20h]@2
  int v13; // [sp+14h] [bp-1Ch]@2
  int v14; // [sp+18h] [bp-18h]@2

  v3 = this;
  v4 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v5 = a3;
  if ( Entity::isSitting((Entity *)LODWORD(a2)) == 1 )
  {
    v7 = *(_DWORD *)(LODWORD(v4) + 120);
    *(_DWORD *)(LODWORD(v4) + 120) = -1036779520;
    Entity::getViewVector((Entity *)&v12, v4, v5, v6);
    *(_DWORD *)v3 = v12;
    *((_DWORD *)v3 + 1) = v13;
    result = v14;
    *((_DWORD *)v3 + 2) = v14;
    *(_DWORD *)(LODWORD(v4) + 120) = v7;
  }
  else
    Entity::getViewVector((Entity *)&v9, v4, v5, v6);
    *(_DWORD *)v3 = v9;
    *((_DWORD *)v3 + 1) = v10;
    result = v11;
    *((_DWORD *)v3 + 2) = v11;
  return result;
}


int __fastcall EnderDragon::knockBack(int result, unsigned __int64 *a2)
{
  Mob **v2; // r6@1
  Mob **v3; // r7@1
  Entity *v4; // r4@1
  void (*v11)(void); // r2@5
  char v12; // [sp+8h] [bp-78h]@7
  int v13; // [sp+38h] [bp-48h]@5

  v2 = (Mob **)(*a2 >> 32);
  v3 = (Mob **)*a2;
  v4 = (Entity *)result;
  if ( v3 != v2 )
  {
    __asm { VMOV.F32        S8, #0.5 }
    _R0 = *(_DWORD *)(result + 5096);
    __asm
    {
      VMOV.F32        S20, #4.0
      VLDR            S0, [R0]
      VLDR            S2, [R0,#0xC]
      VLDR            S4, [R0,#8]
      VLDR            S6, [R0,#0x14]
      VADD.F32        S0, S2, S0
      VADD.F32        S4, S6, S4
      VMUL.F32        S18, S0, S8
      VMUL.F32        S16, S4, S8
    }
    do
      if ( (*(int (**)(void))(*(_DWORD *)*v3 + 488))() == 256
        || (result = (*(int (**)(void))(*(_DWORD *)*v3 + 488))(), result == 319) )
      {
        _R0 = *v3;
        __asm
        {
          VLDR            S0, [R0,#0x48]
          VLDR            S2, [R0,#0x50]
          VSUB.F32        S0, S0, S18
          VSUB.F32        S2, S2, S16
        }
        v11 = *(void (**)(void))(*(_DWORD *)*v3 + 276);
          VMUL.F32        S4, S0, S0
          VMUL.F32        S6, S2, S2
          VADD.F32        S4, S6, S4
          VDIV.F32        S0, S0, S4
          VDIV.F32        S2, S2, S4
          VMUL.F32        S0, S0, S20
          VMUL.F32        S2, S2, S20
          VSTR            S0, [SP,#0x80+var_4C]
        v13 = 1045220557;
        __asm { VSTR            S2, [SP,#0x80+var_44] }
        v11();
        result = Entity::isSitting(v4);
        if ( !result )
          result = Mob::getLastHurtByMobTimestamp(*v3);
          if ( result < *((_DWORD *)*v3 + 104) - 2 )
          {
            EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v12, v4, 2);
            Entity::hurt(*v3, (const EntityDamageSource *)&v12, 5, 1, 0);
            result = (int)EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v12);
          }
      }
      ++v3;
    while ( v2 != v3 );
  }
  return result;
}


int __fastcall EnderDragon::hurtEntities(Entity *a1, __int64 *a2)
{
  __int64 *v2; // r4@1
  Entity *v3; // r10@1
  __int64 v4; // r0@1
  unsigned int v5; // r5@2
  Entity *v6; // r7@3
  char v8; // [sp+8h] [bp-48h]@5

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    do
    {
      v6 = *(Entity **)(v4 + 4 * v5);
      if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v6 + 488))(*(_DWORD *)(v4 + 4 * v5)) == 256
        || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6) == 319 )
      {
        EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v8, v3, 2);
        Entity::hurt(v6, (const EntityDamageSource *)&v8, 10, 1, 0);
        EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v8);
      }
      v4 = *v2;
      ++v5;
    }
    while ( v5 < (HIDWORD(v4) - (signed int)v4) >> 2 );
  }
  return v4;
}


signed int __fastcall EnderDragon::canExistInPeaceful(EnderDragon *this)
{
  return 1;
}


int __fastcall EnderDragon::isFishable(EnderDragon *this)
{
  return 0;
}


int __fastcall EnderDragon::setSitting(EnderDragon *this, int a2)
{
  EnderDragon *v2; // r4@1
  int result; // r0@1

  v2 = this;
  Entity::setSitting(this, a2);
  result = 0;
  *((_DWORD *)v2 + 27) = 0;
  *((_DWORD *)v2 + 28) = 0;
  *((_DWORD *)v2 + 29) = 0;
  return result;
}


void __fastcall EnderDragon::reconstructPath(EnderDragon *this, Node *a2, Node *a3, int a4)
{
  int v4; // r6@1
  EnderDragon *v5; // r8@1
  Node *v6; // r9@1
  unsigned int v7; // r4@1
  int v8; // r0@1
  void *v9; // r0@4
  int v10; // r5@4
  int v11; // r2@4
  int v12; // r0@4
  bool v13; // zf@4
  int v14; // r3@7
  void *v15; // r6@9
  Path *v16; // r0@9
  Path *v17; // r0@10
  void *v18; // r5@11
  void *v19; // r0@11
  void *ptr; // [sp+0h] [bp-28h]@3
  int v21; // [sp+4h] [bp-24h]@3
  char *v22; // [sp+8h] [bp-20h]@3

  v4 = a4;
  v5 = this;
  v6 = a2;
  v7 = 0;
  v8 = a4;
  do
  {
    v8 = *(_DWORD *)(v8 + 32);
    ++v7;
  }
  while ( v8 );
  ptr = 0;
  v21 = 0;
  v22 = 0;
  if ( v7 >= 0x40000000 )
    sub_21E57F4();
  v9 = operator new(4 * v7);
  ptr = v9;
  v10 = (int)v9 + 4 * v7;
  v22 = (char *)v9 + 4 * v7;
  _aeabi_memclr4(v9, 4 * v7);
  v21 = v10;
  *(_DWORD *)(v10 - 4) = v4;
  v12 = *(_DWORD *)(v4 + 32);
  v13 = v12 == 0;
  if ( v12 )
    *(_DWORD *)(v10 - 8) = v12;
    v11 = *(_DWORD *)(v12 + 32);
    v13 = v11 == 0;
  if ( !v13 )
    v14 = 4 * v7 - 12;
    do
    {
      *(_DWORD *)((char *)ptr + v14) = v11;
      v14 -= 4;
      v11 = *(_DWORD *)(v11 + 32);
    }
    while ( v11 );
  v15 = operator new(0x10u);
  Path::Path((int)v15, (__int64 *)&ptr);
  v16 = (Path *)*((_DWORD *)v6 + 1078);
  *((_DWORD *)v6 + 1078) = v15;
  if ( v16 )
    v17 = Path::~Path(v16);
    operator delete((void *)v17);
  v18 = operator new(0x10u);
  Path::Path((int)v18, (__int64 *)&ptr);
  v19 = ptr;
  *(_DWORD *)v5 = v18;
  if ( v19 )
    operator delete(v19);
}


int __fastcall EnderDragon::setDragonFight(int result, EndDragonFight *a2)
{
  *(_DWORD *)(result + 5208) = a2;
  return result;
}


int __fastcall EnderDragon::EnderDragon(int a1, int a2, int *a3)
{
  int v3; // r8@1
  Path *v4; // r0@1
  Path *v5; // r0@2
  void *v6; // r6@3
  void *v7; // r0@3
  void *v8; // r0@5
  void **v9; // r9@7
  int v10; // r5@7
  int v11; // r10@8
  char *v12; // r11@8
  int v13; // r12@8
  char *v14; // r1@9
  int v15; // r2@9
  char *v16; // r3@10
  int v17; // r0@10
  int v18; // r2@10
  int v19; // r6@10
  int v20; // r7@10
  int v21; // r0@10
  int v22; // r4@10
  int v23; // r6@10
  int v24; // r7@10
  int v25; // r5@11
  int v26; // r0@14
  void **v28; // [sp+14h] [bp-11Ch]@1
  void **v29; // [sp+18h] [bp-118h]@1
  char v30; // [sp+1Ch] [bp-114h]@14
  char v31; // [sp+38h] [bp-F8h]@14
  char v32; // [sp+54h] [bp-DCh]@14
  char v33; // [sp+70h] [bp-C0h]@14
  char v34; // [sp+8Ch] [bp-A4h]@14
  char v35; // [sp+A8h] [bp-88h]@14
  char v36; // [sp+C4h] [bp-6Ch]@14
  char v37; // [sp+E0h] [bp-50h]@14
  char v38; // [sp+FCh] [bp-34h]@7
  int v39; // [sp+108h] [bp-28h]@7

  v3 = a1;
  Monster::Monster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F5DB4;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 4308) = 0;
  *(_DWORD *)(v3 + 4312) = 0;
  *(_DWORD *)(v3 + 5084) = -1;
  *(_BYTE *)(v3 + 5120) = 0;
  *(_DWORD *)(v3 + 5124) = 100;
  *(_DWORD *)(v3 + 5128) = 0;
  *(_DWORD *)(v3 + 5132) = 1060320051;
  *(_BYTE *)(v3 + 5152) = 0;
  *(_DWORD *)(v3 + 5148) = 0;
  *(_DWORD *)(v3 + 5144) = 0;
  *(_DWORD *)(v3 + 5140) = 0;
  *(_DWORD *)(v3 + 5136) = 0;
  *(_DWORD *)(v3 + 5176) = 0;
  *(_DWORD *)(v3 + 5172) = 0;
  *(_DWORD *)(v3 + 5168) = 0;
  *(_DWORD *)(v3 + 5164) = 0;
  *(_DWORD *)(v3 + 5160) = 0;
  v28 = (void **)(v3 + 5168);
  *(_DWORD *)(v3 + 5156) = 0;
  v29 = (void **)(v3 + 5156);
  BinaryHeap::BinaryHeap((BinaryHeap *)(v3 + 5180));
  *(_DWORD *)(v3 + 5204) = -1;
  *(_DWORD *)(v3 + 5200) = -1;
  *(_DWORD *)(v3 + 5208) = 0;
  v4 = *(Path **)(v3 + 4312);
  if ( v4 )
  {
    v5 = Path::~Path(v4);
    operator delete((void *)v5);
  }
  Entity::setPersistent((Entity *)v3);
  _aeabi_memclr4(v3 + 4316, 768);
  v6 = operator new(0x60u);
  _aeabi_memclr4(v6, 96);
  v7 = *v28;
  *v28 = v6;
  *(_DWORD *)(v3 + 5172) = (char *)v6 + 96;
  *(_DWORD *)(v3 + 5176) = (char *)v6 + 96;
  if ( v7 )
    operator delete(v7);
  v8 = *v29;
  *v29 = 0;
  if ( v8 )
    operator delete(v8);
  BinaryHeap::BinaryHeap((BinaryHeap *)&v38);
  std::vector<Node *,std::allocator<Node *>>::operator=(__PAIR__(&v38, v3 + 5180));
  *(_DWORD *)(v3 + 5192) = v39;
  BinaryHeap::~BinaryHeap((BinaryHeap *)&v38);
  *(_DWORD *)(v3 + 4008) = 1058642330;
  *(_DWORD *)(v3 + 248) = 12;
  v9 = (void **)(v3 + 292);
  v10 = *(_DWORD *)(v3 + 292);
  if ( (unsigned int)(-1227133513 * ((*(_DWORD *)(v3 + 300) - v10) >> 2)) <= 7 )
    v11 = *(_DWORD *)(v3 + 296);
    v12 = (char *)operator new(0xE0u);
    v13 = (v11 - v10) >> 2;
    if ( v11 != v10 )
    {
      v14 = v12;
      v15 = v10;
      do
      {
        v16 = v14;
        v17 = *(_DWORD *)v15;
        v19 = *(_DWORD *)(v15 + 4);
        v20 = *(_DWORD *)(v15 + 8);
        v18 = v15 + 12;
        v10 += 28;
        v14 += 28;
        *(_DWORD *)v16 = v17;
        *((_DWORD *)v16 + 1) = v19;
        *((_DWORD *)v16 + 2) = v20;
        v16 += 12;
        v21 = *(_DWORD *)v18;
        v22 = *(_DWORD *)(v18 + 4);
        v23 = *(_DWORD *)(v18 + 8);
        v24 = *(_DWORD *)(v18 + 12);
        v15 = v10;
        *(_DWORD *)v16 = v21;
        *((_DWORD *)v16 + 1) = v22;
        *((_DWORD *)v16 + 2) = v23;
        *((_DWORD *)v16 + 3) = v24;
      }
      while ( v11 != v10 );
    }
    v25 = -1227133513 * v13;
    if ( *v9 )
      operator delete(*v9);
    *(_DWORD *)(v3 + 292) = v12;
    *(_DWORD *)(v3 + 296) = &v12[28 * v25];
    *(_DWORD *)(v3 + 300) = v12 + 224;
  AABB::AABB(COERCE_FLOAT(&v37), 0.0, 0LL, 1065353216, 1065353216, 1065353216);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v37);
  *(_DWORD *)(v3 + 5088) = *(_DWORD *)(v3 + 292);
  AABB::AABB(COERCE_FLOAT(&v36), 0.0, 0LL, 1077936128, 1077936128, 1077936128);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v36);
  *(_DWORD *)(v3 + 5092) = *(_DWORD *)(v3 + 292) + 28;
  AABB::AABB(COERCE_FLOAT(&v35), 0.0, 0LL, 1084227584, 1077936128, 1084227584);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v35);
  *(_DWORD *)(v3 + 5096) = *(_DWORD *)(v3 + 292) + 56;
  AABB::AABB(COERCE_FLOAT(&v34), 0.0, 0LL, 0x40000000, 0x40000000, 0x40000000);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v34);
  *(_DWORD *)(v3 + 5100) = *(_DWORD *)(v3 + 292) + 84;
  AABB::AABB(COERCE_FLOAT(&v33), 0.0, 0LL, 0x40000000, 0x40000000, 0x40000000);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v33);
  *(_DWORD *)(v3 + 5104) = *(_DWORD *)(v3 + 292) + 112;
  AABB::AABB(COERCE_FLOAT(&v32), 0.0, 0LL, 0x40000000, 0x40000000, 0x40000000);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v32);
  *(_DWORD *)(v3 + 5108) = *(_DWORD *)(v3 + 292) + 140;
  AABB::AABB(COERCE_FLOAT(&v31), 0.0, 0LL, 1082130432, 1077936128, 1082130432);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v31);
  *(_DWORD *)(v3 + 5112) = *(_DWORD *)(v3 + 292) + 168;
  AABB::AABB(COERCE_FLOAT(&v30), 0.0, 0LL, 1082130432, 1077936128, 1082130432);
  std::vector<AABB,std::allocator<AABB>>::push_back(v3 + 292, (int)&v30);
  *(_DWORD *)(v3 + 5116) = *(_DWORD *)(v3 + 292) + 196;
  v26 = Mob::getMaxHealth((Mob *)v3);
  Mob::serializationSetHealth((Mob *)v3, v26);
  (*(void (__fastcall **)(int, signed int, signed int))(*(_DWORD *)v3 + 680))(v3, 1098907648, 1090519040);
  Entity::setGlobal((Entity *)v3, 1);
  Entity::setAutonomous((Entity *)v3, 1);
  return v3;
}


int __fastcall EnderDragon::getTargetPos(int result, int a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r1@1

  v2 = *(_DWORD *)(a2 + 5140);
  v3 = *(_DWORD *)(a2 + 5136);
  v4 = *(_DWORD *)(a2 + 5144);
  *(_DWORD *)result = v3;
  *(_DWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 8) = v4;
  return result;
}


void __fastcall EnderDragon::findPath(EnderDragon *this, int a2, int a3, Node *a4, int a5)
{
  int v5; // r10@1
  EnderDragon *v6; // r11@1
  int v7; // r1@1
  int v8; // r0@1
  int v9; // r1@2
  int v10; // r7@2
  int v11; // r5@4
  Node *v12; // r4@4
  int v13; // r0@4
  BinaryHeap *v14; // r6@4
  EndDragonFight *v15; // r0@4
  signed int v16; // r0@6
  int *v17; // r11@9
  Node *v18; // r8@9
  int v25; // r0@10
  int v26; // r12@10
  int v27; // r3@13
  unsigned int v28; // r6@13
  __int64 v29; // r4@20
  Node *v33; // r2@31
  Node *v35; // r2@34
  int v36; // r3@35
  int v37; // r3@40
  int v38; // [sp+4h] [bp-5Ch]@9
  EnderDragon *v39; // [sp+8h] [bp-58h]@9
  __int64 v40; // [sp+10h] [bp-50h]@8
  Node *v41; // [sp+18h] [bp-48h]@18
  BinaryHeap *v42; // [sp+24h] [bp-3Ch]@4
  Node *v43; // [sp+28h] [bp-38h]@4
  int *v44; // [sp+2Ch] [bp-34h]@9

  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)(a2 + 5160);
  v8 = *(_DWORD *)(v5 + 5156);
  if ( v8 != v7 )
  {
    v9 = -v7;
    v10 = v8 + 20;
    do
    {
      *(_BYTE *)(v10 + 16) = 0;
      *(_DWORD *)(v10 + 12) = 0;
      *(_DWORD *)(v10 - 4) = 0;
      *(_DWORD *)v10 = 0;
      *(_DWORD *)(v10 + 4) = 0;
      *(_DWORD *)(v10 - 8) = -1;
      v10 += 40;
    }
    while ( v10 + v9 != 20 );
  }
  v11 = v8 + 40 * a3;
  *(_DWORD *)(v11 + 16) = 0;
  v12 = (Node *)(v8 + 40 * (_DWORD)a4);
  v43 = v12;
  v13 = Node::distanceTo((Node *)(v8 + 40 * a3), v12);
  *(_DWORD *)(v11 + 20) = v13;
  *(_DWORD *)(v11 + 24) = v13;
  v14 = (BinaryHeap *)(v5 + 5180);
  v42 = (BinaryHeap *)(v5 + 5180);
  BinaryHeap::clear((BinaryHeap *)(v5 + 5180));
  BinaryHeap::insert((BinaryHeap *)(v5 + 5180), (Node *)v11);
  v15 = *(EndDragonFight **)(v5 + 5208);
  if ( v15 && EndDragonFight::getCrystalsAlive(v15) )
    v16 = 0;
  else
    v16 = 12;
  HIDWORD(v40) = v16;
  if ( BinaryHeap::isEmpty((BinaryHeap *)(v5 + 5180)) )
LABEL_44:
    *(_DWORD *)v6 = 0;
    v44 = (int *)(v5 + 5160);
    v39 = v6;
    v17 = (int *)(v5 + 5156);
    v18 = (Node *)v11;
    v38 = v11;
      _R9 = BinaryHeap::pop(v14);
      if ( Node::equals((Node *)_R9, v12) == 1 )
      {
        v36 = a5;
        if ( a5 )
          *(_DWORD *)(a5 + 32) = v12;
        else
          v36 = (int)v12;
        EnderDragon::reconstructPath(v39, (Node *)v5, v35, v36);
        return;
      }
      _R0 = Node::distanceTo((Node *)_R9, v12);
      __asm { VMOV            S16, R0 }
      _R0 = Node::distanceTo(v18, v12);
      __asm
        VMOV            S0, R0
        VCMPE.F32       S16, S0
      *(_BYTE *)(_R9 + 36) = 1;
      __asm { VMRS            APSR_nzcv, FPSCR }
      v25 = *v17;
      v26 = *v44;
      if ( _NF ^ _VF )
        v18 = (Node *)_R9;
      if ( v26 == v25 )
LABEL_18:
        v28 = 0;
        v41 = v18;
      else
        v27 = v25 + 4;
        while ( *(_DWORD *)(v27 - 4) != *(_DWORD *)_R9
             || *(_DWORD *)v27 != *(_DWORD *)(_R9 + 4)
             || *(_DWORD *)(v27 + 4) != *(_DWORD *)(_R9 + 8) )
        {
          ++v28;
          v27 += 40;
          if ( v28 >= -858993459 * ((v26 - v25) >> 3) )
            goto LABEL_18;
        }
      if ( HIDWORD(v40) < -858993459 * ((v26 - v25) >> 3) )
        LODWORD(v40) = 40 * HIDWORD(v40);
        v29 = v40;
        do
          if ( (*(_DWORD *)(*(_DWORD *)(v5 + 5168) + 4 * v28) & (1 << SBYTE4(v29))) >= 1 )
          {
            _R8 = v25 + v29;
            if ( !*(_BYTE *)(v25 + v29 + 36) )
            {
              __asm { VLDR            S16, [R9,#0x10] }
              _R0 = Node::distanceTo((Node *)_R9, (Node *)_R8);
              __asm
              {
                VMOV            S0, R0
                VADD.F32        S16, S0, S16
              }
              if ( Node::inOpenSet((Node *)_R8) != 1 )
                goto LABEL_47;
                VLDR            S0, [R8,#0x10]
                VCMPE.F32       S16, S0
                VMRS            APSR_nzcv, FPSCR
              if ( _NF ^ _VF )
LABEL_47:
                *(_DWORD *)(_R8 + 32) = _R9;
                __asm { VSTR            S16, [R8,#0x10] }
                *(_DWORD *)(_R8 + 20) = Node::distanceTo((Node *)_R8, v43);
                Node::inOpenSet((Node *)_R8);
                __asm
                {
                  VLDR            S0, [R8,#0x14]
                  VLDR            S2, [R8,#0x10]
                  VADD.F32        S0, S0, S2
                }
                if ( _ZF )
                  __asm { VMOV            R2, S0 }
                  BinaryHeap::changeCost(v42, (Node *)_R8, _R2);
                else
                  __asm { VSTR            S0, [R8,#0x18] }
                  BinaryHeap::insert(v42, (Node *)_R8);
                v17 = (int *)(v5 + 5156);
            }
          }
          LODWORD(v29) = v29 + 40;
          v25 = *v17;
          ++HIDWORD(v29);
        while ( HIDWORD(v29) < -858993459 * ((*v44 - *v17) >> 3) );
      v14 = (BinaryHeap *)(v5 + 5180);
      v12 = v43;
      v18 = v41;
    while ( !BinaryHeap::isEmpty(v42) );
    v6 = v39;
    if ( v41 == (Node *)v38 )
      goto LABEL_44;
    v37 = a5;
    if ( a5 )
      *(_DWORD *)(a5 + 32) = v41;
    else
      v37 = (int)v41;
    EnderDragon::reconstructPath(v39, (Node *)v5, v33, v37);
}


int __fastcall EnderDragon::getNearestCrystal(EnderDragon *this)
{
  EnderDragon *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  return Level::fetchEntity(v2, 0, *((_DWORD *)v1 + 1300), *((_DWORD *)v1 + 1301), 0);
}


void __fastcall EnderDragon::findPath(EnderDragon *this, int a2, int a3, Node *a4, int a5)
{
  EnderDragon::findPath(this, a2, a3, a4, a5);
}


void __fastcall EnderDragon::~EnderDragon(EnderDragon *this)
{
  EnderDragon *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  Path *v4; // r0@5
  Path *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_26F5DB4;
  BinaryHeap::~BinaryHeap((EnderDragon *)((char *)this + 5180));
  v2 = (void *)*((_DWORD *)v1 + 1292);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 1289);
  if ( v3 )
    operator delete(v3);
  v4 = (Path *)*((_DWORD *)v1 + 1078);
  if ( v4 )
  {
    v5 = Path::~Path(v4);
    operator delete((void *)v5);
  }
  *((_DWORD *)v1 + 1078) = 0;
  Mob::~Mob(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EnderDragon::resetFlameCount(int result)
{
  *(_DWORD *)(result + 5148) = 0;
  return result;
}


int __fastcall EnderDragon::setTurnSpeed(int result, float a2)
{
  *(float *)(result + 5132) = a2;
  return result;
}


int __fastcall EnderDragon::tickDeath(EnderDragon *this)
{
  Player *v2; // r8@1
  BossComponent *v3; // r0@1
  Level *v4; // r0@4
  char *v5; // r0@4
  Level *v7; // r0@4
  char *v8; // r0@4
  Level *v14; // r0@4
  char *v15; // r0@4
  int v17; // r0@4
  EndDragonFight *v18; // r0@5
  Level *v19; // r0@10
  int v23; // r1@12
  int v25; // r0@13
  void (__fastcall *v26)(EnderDragon *, signed int, char *, signed int); // r7@15
  void (__fastcall *v27)(EnderDragon *, int *); // r2@16
  int result; // r0@16
  Level *v29; // r0@17
  float v30; // r1@17
  int v32; // r0@18
  int v33; // [sp+10h] [bp-60h]@16
  signed int v34; // [sp+14h] [bp-5Ch]@16
  int v35; // [sp+18h] [bp-58h]@16
  char v36; // [sp+1Ch] [bp-54h]@15
  int v37; // [sp+28h] [bp-48h]@4
  int v38; // [sp+2Ch] [bp-44h]@4
  int v39; // [sp+30h] [bp-40h]@4
  float v40; // [sp+34h] [bp-3Ch]@4

  _R4 = this;
  v2 = (Player *)Entity::getRegion(this);
  *((_BYTE *)_R4 + 5152) = 1;
  v3 = (BossComponent *)*((_DWORD *)_R4 + 809);
  if ( v3 )
    BossComponent::setPercent(v3, 0.0);
  if ( (unsigned int)(*((_DWORD *)_R4 + 862) - 180) <= 0x14 )
  {
    v4 = (Level *)Entity::getLevel(_R4);
    v5 = Level::getRandom(v4);
    _R6 = Random::_genRandInt32((Random *)v5);
    v7 = (Level *)Entity::getLevel(_R4);
    v8 = Level::getRandom(v7);
    _R0 = Random::_genRandInt32((Random *)v8);
    __asm
    {
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
      VMOV            S0, R6
      VCVT.F64.U32    D9, S0
    }
    v14 = (Level *)Entity::getLevel(_R4);
    v15 = Level::getRandom(v14);
    __asm { VLDR            D10, =2.32830644e-10 }
    _R0 = Random::_genRandInt32((Random *)v15);
      VMUL.F64        D1, D8, D10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D10
      VMUL.F64        D2, D9, D10
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VCVT.F32.F64    S0, D0
      VMOV.F32        S8, #4.0
      VADD.F32        S2, S2, S6
      VMOV.F32        S10, #8.0
      VADD.F32        S4, S4, S6
      VADD.F32        S0, S0, S6
      VMOV.F32        S12, #2.0
      VMUL.F32        S2, S2, S8
      VMUL.F32        S16, S4, S10
      VMUL.F32        S20, S0, S10
      VADD.F32        S18, S2, S12
    v17 = Entity::getLevel(_R4);
      VLDR            S0, [R4,#0x48]
      VLDR            S2, [R4,#0x4C]
      VLDR            S4, [R4,#0x50]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S18, S2
      VADD.F32        S4, S20, S4
      VSTR            S0, [SP,#0x70+var_3C]
      VSTR            S2, [SP,#0x70+var_38]
      VSTR            S4, [SP,#0x70+var_34]
    v37 = 0;
    v38 = 0;
    v39 = 0;
    Level::addParticle(v17, 15, (int)&v40);
  }
  v18 = (EndDragonFight *)*((_DWORD *)_R4 + 1302);
  if ( v18 )
    EndDragonFight::hasPreviouslyKilledDragon(v18);
      VLDR            S0, =500.0
      VLDR            S16, =12000.0
    if ( !_ZF )
      __asm { VMOVNE.F32      S16, S0 }
  else
    __asm { VLDR            S16, =500.0 }
  v19 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v19) )
    _R0 = *((_DWORD *)_R4 + 862);
    if ( _R0 >= 151 )
      _R1 = 1717986919;
      __asm { SMMUL.W         R1, R0, R1 }
      v23 = _R0 - 5 * (((signed int)_R1 >> 1) + (_R1 >> 31));
      if ( !v23 )
      {
        __asm
        {
          VLDR            S0, =0.08
          VMUL.F32        S0, S16, S0
          VMOV            R0, S0
        }
        v25 = mce::Math::floor(_R0, COERCE_FLOAT(v23));
        ExperienceOrb::spawnOrbs(v2, (EnderDragon *)((char *)_R4 + 72), v25, 2, 0);
        _R0 = *((_DWORD *)_R4 + 862);
      }
    if ( _R0 == 2 )
      v26 = *(void (__fastcall **)(EnderDragon *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
      Entity::getAttachPos((AABB *)&v36, (int)_R4, 1, 0);
      v26(_R4, 14, &v36, -1);
  *((_DWORD *)_R4 + 27) = 0;
  *((_DWORD *)_R4 + 28) = 0;
  *((_DWORD *)_R4 + 29) = 0;
  v27 = *(void (__fastcall **)(EnderDragon *, int *))(*(_DWORD *)_R4 + 76);
  v33 = 0;
  v34 = 1036831949;
  v35 = 0;
  v27(_R4, &v33);
  __asm
    VMOV.F32        S0, #20.0
    VLDR            S2, [R4,#0x7C]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x7C]
    VSTR            S0, [R0]
  result = *((_DWORD *)_R4 + 862);
  if ( result >= 200 )
    v29 = (Level *)Entity::getLevel(_R4);
    result = Level::isClientSide(v29);
    if ( !result )
      __asm
        VLDR            S0, =0.2
        VMUL.F32        S0, S16, S0
        VMOV            R0, S0
      v32 = mce::Math::floor(_R0, v30);
      ExperienceOrb::spawnOrbs(v2, (EnderDragon *)((char *)_R4 + 72), v32, 2, 0);
      result = (*(int (__fastcall **)(EnderDragon *))(*(_DWORD *)_R4 + 44))(_R4);
  return result;
}


int __fastcall EnderDragon::isPushable(EnderDragon *this)
{
  return 0;
}


signed int __fastcall EnderDragon::_hurt(EnderDragon *this, AABB *a2, const EntityDamageSource *a3, float _R3)
{
  int *v4; // r8@0
  EntityDamageSource *v5; // r6@1
  AABB *v6; // r5@1
  EnderDragon *v7; // r4@1
  int v11; // r0@3
  int v12; // r7@4
  int v13; // r1@4
  int v14; // r0@4
  AABB *v15; // r0@6
  signed int result; // r0@14
  int v18; // r0@21
  int v19; // r9@21
  int v21; // r5@23
  int v22; // r1@23
  int v23; // r0@23
  int v24; // r7@26
  bool v25; // zf@26
  double v26; // r0@29
  unsigned int v27; // r0@29
  int v28; // r5@31
  int *v29; // r6@31
  int v30; // r5@32
  unsigned int *v31; // r2@36
  signed int v32; // r1@38
  void *v33; // r7@44
  int v34; // r1@44
  void *v35; // r0@44
  BossComponent *v36; // r0@49
  int v40; // r6@53
  bool v41; // zf@53
  double v42; // r0@56
  unsigned int v43; // r0@56
  int v44; // r7@58
  int *v45; // r5@58
  int v46; // r7@59
  unsigned int *v47; // r2@61
  signed int v48; // r1@63
  void *v49; // r6@69
  int v50; // r1@69
  void *v51; // r0@69
  bool v52; // zf@71
  void *v53; // [sp+10h] [bp-88h]@56
  unsigned int v54; // [sp+14h] [bp-84h]@56
  int v55; // [sp+18h] [bp-80h]@56
  int v56; // [sp+1Ch] [bp-7Ch]@56
  signed int v57; // [sp+20h] [bp-78h]@56
  int v58; // [sp+24h] [bp-74h]@56
  int v59; // [sp+28h] [bp-70h]@56
  void *ptr; // [sp+30h] [bp-68h]@29
  unsigned int v61; // [sp+34h] [bp-64h]@29
  int v62; // [sp+38h] [bp-60h]@29
  int v63; // [sp+3Ch] [bp-5Ch]@29
  signed int v64; // [sp+40h] [bp-58h]@29
  int v65; // [sp+44h] [bp-54h]@29
  int v66; // [sp+48h] [bp-50h]@29
  unsigned int v67; // [sp+50h] [bp-48h]@23
  unsigned int v68; // [sp+54h] [bp-44h]@23
  unsigned int v69; // [sp+58h] [bp-40h]@4
  unsigned int v70; // [sp+5Ch] [bp-3Ch]@4

  v5 = a3;
  v6 = a2;
  v7 = this;
  __asm { VMOV            S16, R3 }
  if ( Entity::isSitting(this) == 1 && EntityDamageSource::getCause(v5) == 3 )
  {
    v11 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 56))(v5);
    if ( EntityClassTree::isOfType(v11, 4194384) == 1 )
    {
      v12 = Entity::getLevel(v7);
      (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 52))(&v69, v5);
      v14 = Level::fetchEntity(v12, v13, v69, v70, 0);
      if ( v14 )
      {
        (*(void (**)(void))(*(_DWORD *)v14 + 504))();
        __asm { VLDR            S16, =0.0 }
      }
    }
  }
  v15 = (AABB *)*((_DWORD *)v7 + 1272);
  _ZF = v15 == v6;
  if ( v15 != v6 )
    _ZF = *((_DWORD *)v7 + 1273) == (_DWORD)v6;
  if ( !_ZF )
    __asm
      VMOV.F32        S0, #1.0
      VMOV.F32        S2, #0.25
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S2, S16, S2
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    __asm { VADD.F32        S16, S16, S2 }
  __asm
    VLDR            S0, =0.01
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    return 0;
  if ( EntityDamageSource::getCause(v5) == 4 )
  if ( *((_DWORD *)v7 + 862) > 0 )
  if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 36))(v5) != 319
    && EntityDamageSource::getCause(v5) != 10 )
    if ( EntityDamageSource::getCause(v5) == 13 )
      (*(void (__fastcall **)(EnderDragon *))(*(_DWORD *)v7 + 44))(v7);
    goto LABEL_75;
  v18 = Mob::getHealth(v7);
  __asm { VCVTR.S32.F32   S0, S16 }
  v19 = v18;
  __asm { VMOV            R7, S0 }
  Monster::_hurt(v7, v5, _R7, 0, 0);
  if ( *((_DWORD *)v7 + 809) )
    if ( (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v5 + 36))(v5) == 319 )
      v21 = Entity::getLevel(v7);
      (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v67, v5);
      v23 = Level::fetchEntity(v21, v22, v67, v68, 0);
      if ( v23 )
        BossComponent::addPlayerToParty(
          *((_DWORD *)v7 + 809),
          *(_DWORD *)(v23 + 4568),
          *(_QWORD *)(v23 + 4560),
          *(_QWORD *)(v23 + 4568),
          _R7);
  if ( Mob::getHealth(v7) <= 0 )
    Mob::serializationSetHealth(v7, 1);
    *((_DWORD *)v7 + 862) = 1;
    v24 = *((_DWORD *)v7 + 12);
    v25 = v24 == 0;
    if ( v24 )
      v4 = *(int **)(v24 + 236);
      v25 = v4 == 0;
    if ( !v25 )
      v66 = 0;
      HIDWORD(v26) = 10;
      v62 = 0;
      v63 = 0;
      ptr = 0;
      v64 = 1065353216;
      v65 = 0;
      LODWORD(v26) = &v64;
      v27 = sub_21E6254(v26);
      v61 = v27;
      if ( v27 == 1 )
        v66 = 0;
        v29 = &v66;
      else
        if ( v27 >= 0x40000000 )
          goto LABEL_79;
        v28 = 4 * v27;
        v29 = (int *)operator new(4 * v27);
        _aeabi_memclr4(v29, v28);
      ptr = v29;
      EntityDefinitionDescriptor::executeTrigger(
        v24,
        v7,
        (DefinitionTrigger *)(v4 + 1),
        (const VariantParameterList *)&ptr);
      v30 = v62;
      if ( v62 )
        v4 = &dword_28898C0;
        do
        {
          v33 = (void *)v30;
          v34 = *(_DWORD *)(v30 + 8);
          v30 = *(_DWORD *)v30;
          v35 = (void *)(v34 - 12);
          if ( (int *)(v34 - 12) != &dword_28898C0 )
          {
            v31 = (unsigned int *)(v34 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v32 = __ldrex(v31);
              while ( __strex(v32 - 1, v31) );
            }
            else
              v32 = (*v31)--;
            if ( v32 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          }
          operator delete(v33);
        }
        while ( v30 );
      _aeabi_memclr4(ptr, 4 * v61);
      if ( ptr && &v66 != ptr )
        operator delete(ptr);
    v36 = (BossComponent *)*((_DWORD *)v7 + 809);
    if ( v36 )
      BossComponent::sendDeathTelemetry(v36);
  if ( Entity::isSitting(v7) != 1 )
  _R6 = *((_DWORD *)v7 + 1282) + v19 - Mob::getHealth(v7);
  _R1 = &EnderDragon::SITTING_ALLOWED_DAMAGE_PERCENTAGE;
  *((_DWORD *)v7 + 1282) = _R6;
  __asm { VLDR            S16, [R1] }
  _R0 = Mob::getMaxHealth(v7);
    VMOV            S0, R0
    VMOV            S2, R6
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VMUL.F32        S0, S0, S16
    VCMPE.F32       S2, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
  *((_DWORD *)v7 + 1282) = 0;
  v40 = *((_DWORD *)v7 + 12);
  v41 = v40 == 0;
  if ( v40 )
    v4 = *(int **)(v40 + 260);
    v41 = v4 == 0;
  if ( v41 )
  v59 = 0;
  HIDWORD(v42) = 10;
  v55 = 0;
  v56 = 0;
  v53 = 0;
  v57 = 1065353216;
  v58 = 0;
  LODWORD(v42) = &v57;
  v43 = sub_21E6254(v42);
  v54 = v43;
  if ( v43 != 1 )
    if ( v43 < 0x40000000 )
      v44 = 4 * v43;
      v45 = (int *)operator new(4 * v43);
      _aeabi_memclr4(v45, v44);
      goto LABEL_59;
LABEL_79:
    sub_21E57F4();
  v45 = &v59;
LABEL_59:
  v53 = v45;
  EntityDefinitionDescriptor::executeTrigger(v40, v7, (DefinitionTrigger *)(v4 + 1), (const VariantParameterList *)&v53);
  v46 = v55;
  while ( v46 )
    v49 = (void *)v46;
    v50 = *(_DWORD *)(v46 + 8);
    v46 = *(_DWORD *)v46;
    v51 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
        __dmb();
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    operator delete(v49);
  _aeabi_memclr4(v53, 4 * v54);
  result = 1;
  v52 = v53 == 0;
  if ( v53 )
    v52 = &v59 == v53;
  if ( !v52 )
    operator delete(v53);
LABEL_75:
    result = 1;
  return result;
}


void __fastcall EnderDragon::checkCrystals(EnderDragon *this)
{
  EnderDragon *v1; // r8@1
  int v2; // r0@1
  int v10; // r5@3
  int v11; // r0@4
  Level *v12; // r0@5
  char *v13; // r0@5
  int v14; // r5@6
  _QWORD *v15; // r0@6
  _QWORD *v16; // r6@6
  char *v17; // r9@6
  int v18; // r1@6 OVERLAPPED
  int v19; // r2@6 OVERLAPPED
  signed int v20; // r0@6
  char *v21; // r0@8
  signed int v22; // r2@9
  signed int v23; // r4@10
  int v25; // r4@10
  int v26; // r5@10
  Entity *v27; // r6@10
  Entity *v28; // r7@11
  int v30; // [sp+8h] [bp-50h]@6
  signed int v31; // [sp+Ch] [bp-4Ch]@6
  int v32; // [sp+10h] [bp-48h]@6
  char v33; // [sp+14h] [bp-44h]@6

  v1 = this;
  v2 = Entity::getLevel(this);
  if ( Level::fetchEntity(v2, 0, *((_DWORD *)v1 + 1300), *((_DWORD *)v1 + 1301), 0) )
  {
    _R0 = *((_DWORD *)v1 + 104);
    _R1 = 1717986919;
    __asm { SMMUL.W         R1, R0, R1 }
    if ( _R0 == 10 * (((signed int)_R1 >> 2) + (_R1 >> 31)) )
    {
      v10 = Mob::getHealth(v1);
      if ( v10 < Mob::getMaxHealth(v1) )
      {
        v11 = Mob::getHealth(v1);
        Mob::serializationSetHealth(v1, v11 + 1);
      }
    }
  }
  v12 = (Level *)Entity::getLevel(v1);
  v13 = Level::getRandom(v12);
  if ( !(Random::_genRandInt32((Random *)v13) % 0xA) )
    v14 = Entity::getRegion(v1);
    v30 = 1107296256;
    v31 = 1107296256;
    v32 = 1107296256;
    AABB::grow((AABB *)&v33, (EnderDragon *)((char *)v1 + 264), (int)&v30);
    v15 = (_QWORD *)BlockSource::fetchEntities(v14, 71, (int)&v33, 0);
    v16 = v15;
    v17 = 0;
    *(_QWORD *)&v18 = *v15;
    v20 = v19 - v18;
    if ( 0 != (v19 - v18) >> 2 )
      if ( (unsigned int)(v20 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v21 = (char *)operator new(v20);
      *(_QWORD *)&v18 = *v16;
      v17 = v21;
    v22 = v19 - v18;
    if ( 0 == v22 >> 2 )
      goto LABEL_23;
    v23 = v22 >> 2;
    _R0 = &EnderCrystal::HEAL_DISTANCE;
    __asm
      VLDR            S0, [R0]
      VMUL.F32        S16, S0, S0
    _aeabi_memmove4(v17, v18);
    v25 = 4 * v23;
    v26 = 0;
    v27 = 0;
    do
      v28 = *(Entity **)&v17[v26];
      _R0 = Entity::distanceToSqr(*(Entity **)&v17[v26], v1);
      __asm { VMOV            S0, R0 }
      v26 += 4;
      __asm
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S16, S0 }
        v27 = v28;
    while ( v25 != v26 );
    if ( v27 )
      *((_QWORD *)v1 + 650) = *(_QWORD *)Entity::getUniqueID(v27);
    else
LABEL_23:
      *((_DWORD *)v1 + 1301) = -1;
      *((_DWORD *)v1 + 1300) = -1;
    if ( v17 )
      operator delete(v17);
}


void __fastcall EnderDragon::aiStep(EnderDragon *this)
{
  EnderDragon::aiStep(this);
}


void __fastcall EnderDragon::reconstructPath(EnderDragon *this, Node *a2, Node *a3, int a4)
{
  EnderDragon::reconstructPath(this, a2, a3, a4);
}


void __fastcall EnderDragon::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  if ( a2 == 3 )
  {
    *(_DWORD *)(a1 + 3448) = 1;
  }
  else if ( a2 == 37 )
    *(_BYTE *)(a1 + 5152) = 1;
    j_j_j__ZN3Mob22serializationSetHealthEi_0((Mob *)a1, 0);
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi((MinecraftEventing *)a1, a2, a3);
}


int __fastcall EnderDragon::getHeadYOffset(EnderDragon *this, float a2)
{
  EnderDragon *v2; // r4@1
  int result; // r0@8
  void *ptr; // [sp+0h] [bp-30h]@3
  void *v11; // [sp+Ch] [bp-24h]@3

  v2 = this;
  if ( Entity::isSitting(this) )
  {
    __asm { VMOV.F32        S0, #-1.0 }
  }
  else
    EnderDragon::getLatencyPos((EnderDragon *)&v11, (int)v2, COERCE_FLOAT(5), 1065353216);
    EnderDragon::getLatencyPos((EnderDragon *)&ptr, (int)v2, 0.0, 1065353216);
    _R0 = ptr;
    _R4 = v11;
    __asm
    {
      VLDR            S16, [R0,#4]
      VLDR            S18, [R4,#4]
    }
    if ( !_ZF )
      operator delete(ptr);
    if ( _R4 )
      operator delete(_R4);
    __asm { VSUB.F32        S0, S18, S16 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall EnderDragon::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  EnderDragon::handleEntityEvent(a1, a2, a3);
}
