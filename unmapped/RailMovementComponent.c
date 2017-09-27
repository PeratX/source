

int __fastcall RailMovementComponent::_canSnapOnRail(RailMovementComponent *this, BlockPos *a2)
{
  Entity **v2; // r9@1
  BlockPos *v3; // r4@1
  int v10; // r0@3
  signed int v11; // r6@2
  signed int v12; // r7@4
  const BlockPos *v13; // r0@5
  int v14; // r1@5
  signed int v15; // r1@8
  BaseRailBlock *v17; // [sp+0h] [bp-20h]@5

  v2 = (Entity **)this;
  v3 = a2;
  _R0 = *(_DWORD *)this;
  __asm
  {
    VLDR            S0, [R0,#0x70]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV            R0, S0 }
    v10 = j_mce::Math::ceil((mce::Math *)(_R0 ^ 0x80000000), *(float *)&a2);
    v11 = v10;
    if ( v10 < 0 )
    {
LABEL_8:
      v15 = 0;
      return v10 & v15;
    }
  else
    v11 = 1;
  v12 = -1;
  while ( 1 )
    v13 = (const BlockPos *)j_Entity::getRegion(*v2);
    j_BlockSource::getBlockID((BlockSource *)&v17, v13, (int)v3);
    if ( j_BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v17, v14) )
      v10 = 1;
      v15 = 1;
    if ( Block::mSolid[(unsigned __int8)v17] )
      break;
    ++v12;
    v10 = *((_DWORD *)v3 + 1) - 1;
    *((_DWORD *)v3 + 1) = v10;
    if ( v12 >= v11 )
      goto LABEL_8;
  v10 = 0;
  v15 = 1;
  return v10 & v15;
}


int __fastcall RailMovementComponent::comeOffTrack(RailMovementComponent *this, float _R1)
{
  __asm { VMOV            S0, R1 }
  _R2 = *(_DWORD *)this;
  __asm
  {
    VNEG.F32        S2, S0
    VLDR            S4, [R2,#0x6C]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VSTRLT          S2, [R2,#0x6C] }
    _R2 = *(_DWORD *)this;
    __asm { VLDRLT          S4, [R2,#0x6C] }
    VCMPE.F32       S4, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VSTRGT          S0, [R2,#0x6C] }
    VLDR            S4, [R2,#0x74]
    __asm { VSTRLT          S2, [R2,#0x74] }
    __asm { VLDRLT          S4, [R2,#0x74] }
    __asm { VSTRGT          S0, [R2,#0x74] }
  if ( *(_BYTE *)(_R2 + 216) )
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [R2,#0x6C]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R2,#0x6C]
    }
    _R1 = *(_DWORD *)this;
      VLDR            S2, [R1,#0x74]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R1,#0x74]
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)_R2 + 76))(_R2, _R2 + 108);
}


_QWORD *__fastcall RailMovementComponent::RailMovementComponent(_QWORD *result, int a2)
{
  signed int v2; // r2@1

  v2 = 1053609165;
  *result = *(_QWORD *)&a2;
  return result;
}


int __fastcall RailMovementComponent::initFromDefinition(int result)
{
  *(_DWORD *)(result + 4) = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 376) + 4);
  return result;
}


int __fastcall RailMovementComponent::moveAlongTrack(RailMovementComponent *this, const BlockPos *a2, float a3, float a4, int a5, int a6)
{
  RailMovementComponent *v6; // r11@1
  signed int v7; // r6@1
  signed int v11; // r0@1
  signed int v15; // r5@1
  signed int v16; // r4@1
  int v17; // r7@1
  int v18; // r2@1
  unsigned int v19; // r0@7
  int v20; // r4@11
  _DWORD *v21; // r9@17
  float v23; // r0@17
  float v25; // r1@17
  int v28; // r0@17
  float v31; // r1@17
  float v33; // r1@17
  Entity **v34; // r5@17
  Mob **v35; // r8@23
  Mob **v36; // r11@23
  __int64 v37; // kr00_8@23
  float v45; // r1@27
  int v47; // r11@31
  Entity **v48; // r8@31
  Entity *v58; // r0@49
  void (__fastcall *v59)(Entity *, float *); // r2@53
  float v60; // r1@53
  int v61; // r0@54
  int v62; // r0@55
  int v63; // r2@56
  void (*v64)(void); // r7@56
  signed int v65; // r6@56
  signed int v66; // r9@56
  int v68; // r2@60
  void (*v69)(void); // r7@60
  float v70; // r1@61
  int v73; // r7@64
  void (*v74)(void); // r6@64
  int v75; // r5@65
  int v76; // r6@65
  float v77; // r1@65
  int v79; // r7@65
  int result; // r0@69
  BlockSource *v86; // r0@73
  int v87; // r2@73
  int v88; // r3@73
  Block *v89; // r7@73
  BlockSource *v90; // r0@73
  int v91; // r2@73
  int v92; // r3@73
  Block *v93; // r5@73
  BlockSource *v94; // r0@80
  __int64 v95; // r1@80
  int v96; // r3@80
  Block *v97; // r7@80
  BlockSource *v98; // r0@80
  __int64 v99; // r1@80
  int v100; // r3@80
  Block *v101; // r5@80
  int v102; // [sp+8h] [bp-F8h]@17
  signed int v103; // [sp+Ch] [bp-F4h]@1
  signed int v104; // [sp+10h] [bp-F0h]@11
  float v105; // [sp+14h] [bp-ECh]@1
  int v106; // [sp+18h] [bp-E8h]@17
  signed int v107; // [sp+1Ch] [bp-E4h]@11
  const BlockPos *v108; // [sp+20h] [bp-E0h]@11
  int v109; // [sp+24h] [bp-DCh]@17
  float v110; // [sp+28h] [bp-D8h]@17
  __int64 v111; // [sp+2Ch] [bp-D4h]@80
  int v112; // [sp+34h] [bp-CCh]@80
  __int64 v113; // [sp+38h] [bp-C8h]@80
  int v114; // [sp+40h] [bp-C0h]@80
  int v115; // [sp+44h] [bp-BCh]@73
  int v116; // [sp+48h] [bp-B8h]@73
  int v117; // [sp+4Ch] [bp-B4h]@73
  int v118; // [sp+50h] [bp-B0h]@73
  int v119; // [sp+54h] [bp-ACh]@73
  int v120; // [sp+58h] [bp-A8h]@73
  int v121; // [sp+5Ch] [bp-A4h]@64
  float v122; // [sp+60h] [bp-A0h]@64
  int v123; // [sp+64h] [bp-9Ch]@64
  int v124; // [sp+68h] [bp-98h]@61
  float v125; // [sp+6Ch] [bp-94h]@61
  int v126; // [sp+70h] [bp-90h]@61
  int v127; // [sp+74h] [bp-8Ch]@60
  int v128; // [sp+7Ch] [bp-84h]@60
  int v129; // [sp+80h] [bp-80h]@56
  int v130; // [sp+88h] [bp-78h]@56
  float v131; // [sp+8Ch] [bp-74h]@53
  int v132; // [sp+90h] [bp-70h]@53
  int v133; // [sp+A4h] [bp-5Ch]@1
  float v134; // [sp+A8h] [bp-58h]@1
  int v135; // [sp+ACh] [bp-54h]@1

  v6 = this;
  v7 = 0;
  _R8 = a4;
  v105 = a3;
  _R9 = a2;
  *(_DWORD *)(*(_DWORD *)this + 224) = 0;
  _R10 = *(_DWORD *)this;
  v133 = 0;
  v134 = 0.0;
  v135 = 0;
  v11 = j_RailMovement::getPos((Entity *)_R10, (int)&v133, *(_QWORD *)(_R10 + 72), *(_DWORD *)(_R10 + 80));
  __asm { VLDR            S0, [R9,#4] }
  v15 = 0;
  v103 = v11;
  v16 = 0;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R10,#0x4C]
  }
  v17 = a6;
  v18 = *(_BYTE *)(Block::mGoldenRail + 4);
  if ( v18 != a5 )
    v15 = 1;
  if ( !(a6 & 8) )
    v16 = 1;
  if ( v18 == a5 )
    v7 = 1;
  v19 = j_BaseRailBlock::isUsesDataBit((BaseRailBlock *)Block::mBlocks[a5]);
  if ( v19 )
    v17 = a6 & 7;
  if ( v19 <= 3 )
    __asm
    {
      VLDR            S0, [R9,#4]
      VMOV.F32        S2, #1.0
      VCVT.F32.S32    S0, S0
      VADD.F32        S0, S0, S2
      VSTR            S0, [R10,#0x4C]
    }
  v104 = v15;
  v107 = v16;
  v108 = _R9;
  v20 = v16 & v7;
  __asm { VMOV            S0, R8 }
  switch ( v17 )
    case 2:
      __asm
      {
        VLDR            S2, [R10,#0x6C]; jumptable 01A855FC case 2
        VSUB.F32        S0, S2, S0
        VSTR            S0, [R10,#0x6C]
      }
      break;
    case 3:
        VLDR            S2, [R10,#0x6C]; jumptable 01A855FC case 3
        VADD.F32        S0, S2, S0
    case 4:
        VLDR            S2, [R10,#0x74]; jumptable 01A855FC case 4
      goto LABEL_16;
    case 5:
        VLDR            S2, [R10,#0x74]; jumptable 01A855FC case 5
LABEL_16:
      __asm { VSTR            S0, [R10,#0x74] }
    default:
  v102 = v17;
  v21 = &RailMovement::EXITS[6 * v17];
  _R7 = RailMovement::EXITS[6 * v17];
  v23 = *((float *)v21 + 3);
  v110 = v23;
  _R0 = LODWORD(v23) - _R7;
  v25 = *((float *)v21 + 5);
  __asm { VMOV            S0, R0 }
  v106 = v21[2];
  _R0 = LODWORD(v25) - v106;
  v109 = v21[5];
    VCVT.F32.S32    S16, S0
    VMOV            S0, R0
    VCVT.F32.S32    S18, S0
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  v28 = j_mce::Math::sqrt(_R0, v25);
  __asm { VLDR            S0, [R10,#0x6C] }
  _R6 = v28;
    VLDR            S2, [R10,#0x74]
    VMOV.F32        S22, #2.0
    VMUL.F32        S4, S0, S0
    VMUL.F32        S6, S2, S2
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S18
    VNEG.F32        S24, S16
    VADD.F32        S4, S6, S4
    VADD.F32        S20, S2, S0
    VMOV            R0, S4
  _R0 = j_mce::Math::sqrt(_R0, v31);
  __asm { VCMPE.F32       S20, #0.0 }
  v34 = (Entity **)v6;
    VMRS            APSR_nzcv, FPSCR
    VNEG.F32        S2, S18
    VCMPE.F32       S0, S22
    VMOV            S4, R6
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S24 }
    VCMPE.F32       S20, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S22 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVLT.F32      S18, S2 }
    VMUL.F32        S2, S16, S0
    VMUL.F32        S0, S18, S0
    VDIV.F32        S2, S2, S4
    VDIV.F32        S0, S0, S4
    VSTR            S2, [R10,#0x6C]
    VSTR            S0, [R10,#0x74]
  v37 = *(_QWORD *)(*(_DWORD *)v6 + 476);
  v36 = (Mob **)(*(_QWORD *)(*(_DWORD *)v6 + 476) >> 32);
  v35 = (Mob **)v37;
  if ( (Mob **)v37 != v36 )
      VLDR            S18, =0.01
      VLDR            S20, =0.1
    _R0 = &mce::Math::DEGRAD;
    __asm { VLDR            S16, [R0] }
    do
      if ( j_Entity::hasCategory((int)*v35, 2) == 1 )
        _R0 = j_Mob::getYya(*v35);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          _R0 = *v35;
          __asm
          {
            VLDR            S0, [R0,#0x7C]
            VMUL.F32        S0, S16, S0
            VMOV            R0, S0
          }
          _R6 = j_mce::Math::sin(_R0, v33);
            VMUL.F32        S0, S0, S16
          _R0 = j_mce::Math::cos(_R0, v45);
            VLDR            S0, [R10,#0x6C]
            VLDR            S2, [R10,#0x74]
            VMUL.F32        S4, S0, S0
            VMUL.F32        S6, S2, S2
            VADD.F32        S4, S6, S4
            VCMPE.F32       S4, S18
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm { VMOV            S4, R6 }
            v20 = 0;
            __asm
            {
              VMOV            S6, R0
              VMUL.F32        S4, S4, S20
              VMUL.F32        S6, S6, S20
              VSUB.F32        S0, S0, S4
              VADD.F32        S2, S2, S6
              VSTR            S0, [R10,#0x6C]
              VSTR            S2, [R10,#0x74]
            }
      ++v35;
    while ( v36 != v35 );
  v47 = v20;
  v48 = v34;
  if ( v20 & 1 )
      VLDR            S0, [R10,#0x6C]
      VLDR            S2, [R10,#0x74]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = j_mce::Math::sqrt(_R0, v33);
      VLDR            S0, =0.03
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      *(_DWORD *)(_R10 + 108) = 0;
      *(_DWORD *)(_R10 + 112) = 0;
      *(_DWORD *)(_R10 + 116) = 0;
    else
        VMOV.F32        S0, #0.5
        VLDR            S2, [R10,#0x6C]
        VLDR            S4, [R10,#0x74]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S4, S0
        VSTR            S2, [R10,#0x6C]
  _R5 = v106;
  __asm { VMOV            S2, R7 }
  _R0 = v105;
  __asm { VMOV.F32        S1, #0.5 }
  _R6 = v21[1];
    VMOV            S0, R5
    VMOV            S16, R0
    VCVT.F32.S32    S2, S2
  _R0 = v110;
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
  _R4 = v108;
  _R0 = v109;
    VMUL.F32        S3, S2, S1
    VLDR            S6, [R4]
    VLDR            S8, [R4,#8]
    VMOV            S10, R0
    VCVT.F32.S32    S12, S10
    VCVT.F32.S32    S10, S8
    VCVT.F32.S32    S8, S6
    VSUB.F32        S4, S4, S2
    VSUB.F32        S6, S12, S0
    VMUL.F32        S0, S0, S1
    VADD.F32        S12, S10, S1
    VADD.F32        S14, S8, S1
    VMUL.F32        S2, S4, S1
    VMUL.F32        S4, S6, S1
    VADD.F32        S0, S12, S0
    VADD.F32        S6, S14, S3
    VCMPE.F32       S2, #0.0
  if ( _ZF )
      VSTR            S14, [R10,#0x48]
      VLDR            S8, [R10,#0x50]
      VSUB.F32        S8, S8, S10
  else
      VLDR            S10, [R10,#0x48]
      VCMPE.F32       S4, #0.0
    if ( _ZF )
        VSUB.F32        S8, S10, S8
        VSTR            S12, [R10,#0x50]
        VLDR            S8, [R10,#0x50]
        VSUB.F32        S10, S10, S6
        VSUB.F32        S8, S8, S0
        VMUL.F32        S10, S10, S2
        VMUL.F32        S8, S8, S4
        VADD.F32        S8, S8, S10
        VADD.F32        S8, S8, S8
    VMUL.F32        S2, S8, S2
    VMUL.F32        S4, S8, S4
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S4, S0
    VLDR            S4, =0.00001
    VSTR            S2, [R10,#0x48]
    VSTR            S0, [R10,#0x50]
    VLDR            S6, [R10,#0x4C]
  _R0 = *v48;
    VLDR            S6, [R0,#0x13C]
    VADD.F32        S4, S4, S6
    VSTR            S2, [SP,#0x100+var_68]
    VSTR            S4, [SP,#0x100+var_64]
    VSTR            S0, [SP,#0x100+var_60]
  (*(void (**)(void))(*(_DWORD *)*v48 + 48))();
    VMOV.F32        S18, #0.75
    VLDR            S20, [R10,#0x6C]
    VLDR            S22, [R10,#0x74]
    VMUL.F32        S24, S20, S18
  j_Entity::isRide(*v48);
    VNEG.F32        S0, S16
    VMUL.F32        S2, S22, S18
  if ( !_ZF )
    __asm { VMOVNE.F32      S20, S24 }
  __asm { VCMPE.F32       S20, S0 }
    __asm { VMOVNE.F32      S22, S2 }
    VCMPE.F32       S22, S0
    __asm { VMOVLT.F32      S20, S0 }
    VCMPE.F32       S20, S16
    __asm { VMOVLT.F32      S22, S0 }
    VCMPE.F32       S22, S16
  v58 = *v48;
    __asm { VMOVGT.F32      S20, S16 }
    __asm { VMOVGT.F32      S22, S16 }
  v59 = *(void (__fastcall **)(Entity *, float *))(*(_DWORD *)v58 + 76);
  __asm { VSTR            S20, [SP,#0x100+var_74] }
  v132 = 0;
  __asm { VSTR            S22, [SP,#0x100+var_6C] }
  v59(v58, &v131);
  if ( _R6
    && (v61 = j_mce::Math::floor(*(mce::Math **)(_R10 + 72), v60), v60 = *(float *)v108, v61 - *(_DWORD *)v108 == _R7)
    && (v62 = j_mce::Math::floor(*(mce::Math **)(_R10 + 80), v60), v60 = *((float *)v108 + 2),
                                                                   v62 - LODWORD(v60) == v106) )
      VMOV            S0, R6
      VLDR            S2, [R10,#0x4C]
    v63 = *(_DWORD *)(_R10 + 80);
    __asm { VADD.F32        S0, S2, S0 }
    v64 = *(void (**)(void))(*(_DWORD *)*v48 + 48);
    v129 = *(_DWORD *)(_R10 + 72);
    __asm { VSTR            S0, [SP,#0x100+var_7C] }
    v130 = v63;
    v64();
    v66 = v104;
    v65 = v103;
    _R5 = v21[4];
    if ( _R5
      && j_mce::Math::floor(*(mce::Math **)(_R10 + 72), v60) - *(_DWORD *)v108 == LODWORD(v110)
      && j_mce::Math::floor(*(mce::Math **)(_R10 + 80), v110) - *((_DWORD *)v108 + 2) == v109 )
        VMOV            S0, R5
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R10,#0x4C]
      v68 = *(_DWORD *)(_R10 + 80);
      __asm { VADD.F32        S0, S2, S0 }
      v69 = *(void (**)(void))(*(_DWORD *)*v48 + 48);
      v127 = *(_DWORD *)(_R10 + 72);
      __asm { VSTR            S0, [SP,#0x100+var_88] }
      v128 = v68;
      v69();
  v124 = 0;
  v125 = 0.0;
  v126 = 0;
  if ( (j_RailMovement::getPos(*v48, (int)&v124, *(_QWORD *)(_R10 + 72), *(_DWORD *)(_R10 + 80)) & v65) == 1 )
      VLDR            S16, [SP,#0x100+var_94]
      VLDR            S18, [SP,#0x100+var_58]
    _R0 = j_mce::Math::sqrt(_R0, v70);
      VMOV            S0, R0
      VCMPE.F32       S0, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VSUB.F32        S4, S18, S16
        VLDR            S6, =0.05
        VDIV.F32        S2, S2, S0
        VMUL.F32        S4, S4, S6
        VADD.F32        S4, S0, S4
        VMUL.F32        S2, S2, S4
        VLDR            S2, [R10,#0x74]
        VDIV.F32        S0, S2, S0
        VMUL.F32        S0, S0, S4
        VSTR            S0, [R10,#0x74]
    v73 = *(_DWORD *)(_R10 + 80);
    v74 = *(void (**)(void))(*(_DWORD *)*v48 + 48);
    v121 = *(_DWORD *)(_R10 + 72);
    v122 = v125;
    v123 = v73;
    v74();
  v75 = v107 | v66;
  v76 = j_mce::Math::floor(*(mce::Math **)(_R10 + 72), v70);
  v79 = j_mce::Math::floor(*(mce::Math **)(_R10 + 80), v77);
  _ZF = v76 == *(_DWORD *)v108;
  if ( v76 == *(_DWORD *)v108 )
    _ZF = v79 == *((_DWORD *)v108 + 2);
    _R0 = j_mce::Math::sqrt(_R0, _R1);
    __asm { VMOV            S2, R0 }
    LODWORD(_R1) = v76 - *(_DWORD *)v108;
      VMOV            S0, R1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R10,#0x6C]
    _R0 = v79 - *((_DWORD *)v108 + 2);
      VSTR            S0, [R10,#0x74]
  result = v75 | v47;
  if ( !((v75 | v47) & 1) )
    result = j_mce::Math::sqrt(_R0, _R1);
      VLDR            S2, =0.01
      VCMPE.F32       S0, S2
        VLDR            S6, =0.06
        VDIV.F32        S4, S2, S0
        VADD.F32        S2, S4, S2
        VMUL.F32        S0, S0, S6
        VADD.F32        S0, S0, S2
      return result;
    if ( v102 != BaseRailBlock::DIR_FLAT_X[0] )
      result = BaseRailBlock::DIR_FLAT_Z;
      if ( v102 != BaseRailBlock::DIR_FLAT_Z )
        return result;
      v94 = (BlockSource *)j_Entity::getRegion(*v48);
      LODWORD(v95) = *(_DWORD *)v108;
      HIDWORD(v95) = *((_DWORD *)v108 + 1);
      v96 = *((_DWORD *)v108 + 2);
      v113 = v95;
      v114 = v96 - 1;
      v97 = (Block *)j_BlockSource::getBlock(v94, (const BlockPos *)&v113);
      v98 = (BlockSource *)j_Entity::getRegion(*v48);
      LODWORD(v99) = *(_DWORD *)v108;
      HIDWORD(v99) = *((_DWORD *)v108 + 1);
      v100 = *((_DWORD *)v108 + 2);
      v111 = v99;
      v112 = v100 + 1;
      v101 = (Block *)j_BlockSource::getBlock(v98, (const BlockPos *)&v111);
      if ( j_Block::isSolidBlockingBlock(v97) != 1 || (*(int (__fastcall **)(Block *))(*(_DWORD *)v97 + 100))(v97) )
        result = j_Block::isSolidBlockingBlock(v101);
        if ( result != 1 )
          return result;
        result = (*(int (__fastcall **)(Block *))(*(_DWORD *)v101 + 100))(v101);
        if ( result )
        result = -1130113270;
      else
        result = 1017370378;
      *(_DWORD *)(_R10 + 116) = result;
    v86 = (BlockSource *)j_Entity::getRegion(*v48);
    v87 = *((_DWORD *)v108 + 1);
    v88 = *((_DWORD *)v108 + 2);
    v118 = *(_DWORD *)v108 - 1;
    v119 = v87;
    v120 = v88;
    v89 = (Block *)j_BlockSource::getBlock(v86, (const BlockPos *)&v118);
    v90 = (BlockSource *)j_Entity::getRegion(*v48);
    v91 = *((_DWORD *)v108 + 1);
    v92 = *((_DWORD *)v108 + 2);
    v115 = *(_DWORD *)v108 + 1;
    v116 = v91;
    v117 = v92;
    v93 = (Block *)j_BlockSource::getBlock(v90, (const BlockPos *)&v115);
    if ( j_Block::isSolidBlockingBlock(v89) != 1 || (*(int (__fastcall **)(Block *))(*(_DWORD *)v89 + 100))(v89) )
      result = j_Block::isSolidBlockingBlock(v93);
      if ( result == 1 )
        result = (*(int (__fastcall **)(Block *))(*(_DWORD *)v93 + 100))(v93);
        if ( !result )
          result = -1130113270;
          *(_DWORD *)(_R10 + 108) = -1130113270;
      result = 1017370378;
      *(_DWORD *)(_R10 + 108) = 1017370378;
  return result;
}


int __fastcall RailMovementComponent::tick(RailMovementComponent *this)
{
  float v6; // r1@1
  int v9; // r5@2
  signed int v10; // r6@4
  const BlockPos *v11; // r0@5
  int v12; // r1@5
  const BlockPos *v16; // r0@19
  int v18; // [sp+Ch] [bp-3Ch]@19
  char v19; // [sp+10h] [bp-38h]@1
  int v20; // [sp+14h] [bp-34h]@7
  BaseRailBlock *v21; // [sp+1Ch] [bp-2Ch]@5

  _R4 = (Entity **)this;
  __asm { VLDR            S16, [R4,#4] }
  j_BlockPos::BlockPos((int)&v19, *(_DWORD *)this + 72);
  _R0 = *_R4;
  __asm
  {
    VLDR            S0, [R0,#0x70]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOV            R0, S0 }
    v9 = j_mce::Math::ceil((mce::Math *)(_R0 ^ 0x80000000), v6);
    if ( v9 < 0 )
    {
LABEL_8:
      __asm { VNEG.F32        S0, S16 }
      _R0 = *_R4;
      __asm
      {
        VLDR            S2, [R0,#0x6C]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        __asm { VSTRLT          S0, [R0,#0x6C] }
        _R0 = *_R4;
        __asm { VLDRLT          S2, [R0,#0x6C] }
        VCMPE.F32       S2, S16
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VSTRGT          S16, [R0,#0x6C] }
        VLDR            S2, [R0,#0x74]
        __asm { VSTRLT          S0, [R0,#0x74] }
        __asm { VLDRLT          S2, [R0,#0x74] }
        __asm { VSTRGT          S16, [R0,#0x74] }
      if ( *((_BYTE *)_R0 + 216) )
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S2, [R0,#0x6C]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R0,#0x6C]
        }
          VLDR            S2, [R0,#0x74]
          VMUL.F32        S0, S2, S0
          VSTR            S0, [R0,#0x74]
      return (*(int (**)(void))(*(_DWORD *)_R0 + 76))();
    }
  else
    v9 = 1;
  v10 = -1;
  while ( 1 )
    v11 = (const BlockPos *)j_Entity::getRegion(*_R4);
    j_BlockSource::getBlockID((BlockSource *)&v21, v11, (int)&v19);
    if ( j_BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v21, v12) )
      break;
    if ( !Block::mSolid[(unsigned __int8)v21] )
      ++v10;
      --v20;
      if ( v10 < v9 )
        continue;
    goto LABEL_8;
  v16 = (const BlockPos *)j_Entity::getRegion(*_R4);
  j_BlockSource::getBlockAndData((BlockSource *)&v18, v16, (int)&v19);
  __asm { VMOV            R2, S16 }
  return j_RailMovementComponent::moveAlongTrack(
           (RailMovementComponent *)_R4,
           (const BlockPos *)&v19,
           _R2,
           0.0078125,
           (unsigned __int8)v18,
           BYTE1(v18));
}
