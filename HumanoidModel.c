

int __fastcall HumanoidModel::prepareSkinAdjustments(int result)
{
  *(_DWORD *)(result + 4292) |= *(_DWORD *)(result + 4296);
  return result;
}


void __fastcall HumanoidModel::~HumanoidModel(HumanoidModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = HumanoidModel::~HumanoidModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall HumanoidModel::prepareMobModel(HumanoidModel *this, Mob *a2, float a3, float a4, float a5)
{
  HumanoidModel *v6; // r4@1
  int v7; // r0@1
  char v8; // r1@1
  int result; // r0@8

  _R5 = a2;
  v6 = this;
  *((_BYTE *)this + 4276) = (*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 312))(a2);
  v7 = Mob::getGlidingTicks(_R5);
  v8 = 0;
  if ( v7 > 4 )
    v8 = 1;
  *((_BYTE *)v6 + 4278) = v8;
  if ( v7 < 5 )
  {
    *((_DWORD *)v6 + 1070) = 1065353216;
  }
  else
    __asm
    {
      VLDR            S0, [R5,#0x6C]
      VLDR            S2, [R5,#0x70]
      VMUL.F32        S0, S0, S0
      VLDR            S4, [R5,#0x74]
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #5.0
      VADD.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
      VMUL.F32        S2, S0, S0
      VMUL.F32        S0, S2, S0
      VMOV.F32        S2, #1.0
      VSTR            S0, [R0]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      *((_DWORD *)v6 + 1070) = 1065353216;
  *((_DWORD *)v6 + 1071) = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 920))(_R5);
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 924))(_R5);
  *((_DWORD *)v6 + 1072) = result;
  return result;
}


int __fastcall HumanoidModel::setupAnim(HumanoidModel *this, float _R1, float _R2, float a4, float a5, float a6, float a7)
{
  int v13; // r7@1
  float v20; // r1@6
  char *v25; // r0@39
  char *v27; // r0@39
  char *v28; // r0@39
  char *v30; // r0@39
  char *v33; // r0@39
  char *v35; // r0@39
  float v36; // r1@39
  int v39; // r9@40
  float v42; // r1@40
  float v45; // r1@40
  float v47; // r1@40
  float v49; // r1@40
  float v51; // r1@40
  int v52; // r0@40
  float v55; // r1@40
  int v108; // [sp+0h] [bp-A0h]@40
  int v109; // [sp+8h] [bp-98h]@39
  int v110; // [sp+Ch] [bp-94h]@39
  ModelPart *v111; // [sp+10h] [bp-90h]@39
  int v112; // [sp+14h] [bp-8Ch]@39
  int v113; // [sp+18h] [bp-88h]@39
  int v114; // [sp+1Ch] [bp-84h]@39
  int v115; // [sp+20h] [bp-80h]@39
  float v116; // [sp+24h] [bp-7Ch]@40
  float v117; // [sp+24h] [bp-7Ch]@51
  ModelPart *v118; // [sp+28h] [bp-78h]@17
  int v119; // [sp+2Ch] [bp-74h]@40
  int v120; // [sp+2Ch] [bp-74h]@51
  int v121; // [sp+30h] [bp-70h]@39
  float v122; // [sp+34h] [bp-6Ch]@4
  int v123; // [sp+34h] [bp-6Ch]@52
  int v124; // [sp+38h] [bp-68h]@39
  int v125; // [sp+3Ch] [bp-64h]@39
  float v126; // [sp+40h] [bp-60h]@39
  float *v127; // [sp+44h] [bp-5Ch]@3
  int v128; // [sp+44h] [bp-5Ch]@60

  _R4 = this;
  __asm
  {
    VLDR            S0, =0.0055556
    VMOV.F32        S18, #1.0
    VLDR            S2, [SP,#0xA0+arg_0]
    VMOV.F32        S6, #-1.0
    VMUL.F32        S2, S2, S0
  }
  _R0 = &mce::Math::PI;
  v13 = *((_DWORD *)_R4 + 1073);
    VMOV            S24, R2
    VLDR            S16, [R0]
    VMOV.F32        S4, S18
  if ( !_ZF )
    __asm { VMOVNE.F32      S4, S6 }
    VLDR            S6, [SP,#0xA0+arg_4]
    VMUL.F32        S2, S2, S16
  v127 = (float *)((char *)_R4 + 4292);
    VMUL.F32        S8, S2, S4
    VMOV            S2, R1
    VSTR            S8, [R4,#0x88]
  if ( *((_BYTE *)_R4 + 4278) )
    __asm { VLDR            S0, =-45.0 }
    v122 = a4;
    __asm { VMUL.F32        S0, S4, S0 }
    _R0 = &mce::Math::DEGRAD;
    __asm
    {
      VLDR            S4, [R0]
      VMUL.F32        S0, S0, S4
    }
  else
    __asm { VMUL.F32        S0, S6, S0 }
      VMUL.F32        S0, S0, S16
    VLDR            S4, =0.6662
    VSTR            S0, [R4,#0x84]
    VMUL.F32        S20, S2, S4
    VMOV            R5, S20
  _R0 = mce::Math::cos(_R5, _R1);
    VADD.F32        S0, S16, S20
    VMOV            R1, S0
    VMOV            S0, R0
  _R6 = (int)_R4 + 4280;
    VMUL.F32        S20, S0, S24
    VLDR            S22, [R6]
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
    VLDR            S2, [R6]
    VDIV.F32        S20, S20, S22
  *((_DWORD *)_R4 + 198) = 0;
  *((_DWORD *)_R4 + 253) = 0;
  *((_DWORD *)_R4 + 200) = 0;
  *((_DWORD *)_R4 + 255) = 0;
  v20 = *v127;
    VMUL.F32        S0, S0, S24
    VDIV.F32        S22, S0, S2
    __asm { VLDR            S0, =0.0 }
    *((_DWORD *)_R4 + 198) = 0;
    *((_DWORD *)_R4 + 253) = 0;
LABEL_16:
    *((_DWORD *)_R4 + 200) = 0;
    *((_DWORD *)_R4 + 255) = 0;
    goto LABEL_17;
  if ( LOBYTE(v20) & 0x10 )
      VSTR            S22, [R4,#0x318]
      VSTR            S22, [R4,#0x3F4]
      VMOV.F32        S0, S22
  if ( LOBYTE(v20) & 2 )
      VMOV.F32        S0, #-0.5
      VMUL.F32        S0, S16, S0
      VSTR            S0, [R4,#0x318]
      VSTR            S0, [R4,#0x3F4]
    goto LABEL_16;
  if ( !(LOBYTE(v20) & 0x20) )
    goto LABEL_69;
  __asm { VLDR            S0, =3.4028e38 }
  _R0 = (int)_R4 + 4304;
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF || *((_DWORD *)_R4 + 5) & 0x7FFFFFFF )
LABEL_69:
      VMOV.F32        S0, S20
      VSTR            S20, [R4,#0x3F4]
      VNEG.F32        S0, S16
    _R0 = mce::Math::cos(_R5, v20);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S24
    *((_DWORD *)_R4 + 200) = -1097229926;
    v20 = *v127;
LABEL_17:
    VLDR            S2, =1.4
    VMUL.F32        S4, S20, S2
    VMUL.F32        S2, S22, S2
  v118 = (HumanoidModel *)((char *)_R4 + 96);
    VSTR            S4, [R2]
    VSTR            S2, [R5]
  *((_DWORD *)_R4 + 309) = 0;
  *((_DWORD *)_R4 + 364) = 0;
  if ( *((_BYTE *)_R4 + 25) )
    if ( LOBYTE(v20) & 2 )
      __asm
      {
        VMOV.F32        S2, #-0.25
        VMUL.F32        S4, S16, S2
        VLDR            S2, [R4,#0x318]
        VSUB.F32        S2, S2, S4
        VSUB.F32        S0, S0, S4
        VSTR            S2, [R4,#0x318]
        VSTR            S0, [R4,#0x3F4]
      }
    else
      __asm { VLDR            S2, [R4,#0x318] }
      VLDR            S4, =-0.2
      VMUL.F32        S4, S16, S4
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S0, S4
      VSTR            S2, [R4,#0x318]
    if ( _ZF )
        VLDR            S2, =-0.4
        VLDR            S4, =0.1
        VLDR            S6, =-0.1
        VMUL.F32        S2, S16, S2
        VMUL.F32        S4, S16, S4
        VMUL.F32        S6, S16, S6
        VSTR            S2, [R2]
        VSTR            S2, [R5]
        VSTR            S4, [R7]
        VSTR            S6, [R3]
        VSTR            S4, [R2]
        VSTR            S4, [R5]
  else if ( LOBYTE(v20) & 4 )
    *(_QWORD *)((char *)_R4 + 1452) = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)_R4 + 365) = dword_2822498;
    *((_QWORD *)_R4 + 154) = *(_QWORD *)&Vec3::ZERO;
    *((_DWORD *)_R4 + 310) = dword_2822498;
    if ( LOBYTE(v20) & 8 )
      __asm { VSTR            S20, [R2] }
      if ( !(LOWORD(v20) & 0x200) )
        goto LABEL_32;
      __asm { VSTR            S22, [R2] }
    __asm { VSTR            S20, [R5] }
LABEL_32:
  if ( !(LOBYTE(v20) & 2) )
    __asm { VLDR            S2, =3.4028e38 }
    _R1 = (int)_R4 + 4300;
      VLDR            S4, [R1]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
        VMOV.F32        S8, #0.5
        VMUL.F32        S4, S4, S6
        VMUL.F32        S0, S0, S8
        VMUL.F32        S4, S4, S16
        VADD.F32        S0, S0, S4
    _R1 = (int)_R4 + 4304;
      VLDR            S0, [R1]
      VCMPE.F32       S0, S2
        VLDR            S2, =-0.1
        VMOV.F32        S4, #0.5
        VMUL.F32        S0, S0, S2
        VMUL.F32        S2, S2, S4
        VMUL.F32        S0, S0, S16
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x318]
  *((_DWORD *)_R4 + 199) = 0;
  *((_DWORD *)_R4 + 254) = 0;
  v25 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 756));
  _R6 = *(_QWORD *)v25;
  v110 = *(_QWORD *)v25 >> 32;
  v126 = *((float *)v25 + 2);
  v27 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 976));
  v124 = *(_DWORD *)v27;
  v115 = *((_DWORD *)v27 + 1);
  v125 = *((_DWORD *)v27 + 2);
  v28 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 1196));
  v113 = *(_DWORD *)v28;
  v121 = *((_DWORD *)v28 + 1);
  _R8 = *((_DWORD *)v28 + 2);
  v30 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 1416));
  v114 = *(_DWORD *)v30;
  _R11 = *(_QWORD *)(v30 + 4) >> 32;
  _R7 = *(_QWORD *)(v30 + 4);
  v33 = ModelPart::getOrigin(v118);
  v111 = *(ModelPart **)v33;
  _R5 = *(_QWORD *)(v33 + 4);
  v112 = *(_QWORD *)(v33 + 4) >> 32;
  v35 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 536));
  LODWORD(v36) = *(_QWORD *)v35 >> 32;
  _R10 = *(_QWORD *)v35;
  v109 = *((_DWORD *)v35 + 2);
    VLDR            S0, [R4,#0x14]
    VLDR            S2, =-9990.0
    VCMPE.F32       S0, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOV            R0, S0 }
    v108 = _R5;
    v119 = _R7;
    v39 = _R10;
    v116 = v36;
    _R0 = mce::Math::sqrt(_R0, v36);
      VADD.F32        S0, S16, S16
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = mce::Math::sin(_R0, v42);
      VLDR            S0, =0.2
      VSTR            S0, [R4,#0x240]
    _R10 = mce::Math::sin(_R0, v45);
    _R6 = mce::Math::cos(*((mce::Math **)_R4 + 144), v47);
    _R7 = mce::Math::sin(*((mce::Math **)_R4 + 144), v49);
    v52 = mce::Math::cos(*((mce::Math **)_R4 + 144), v51);
    __asm { VLDR            S0, [R4,#0x240] }
    _R5 = v52;
      VLDR            S2, [R4,#0x31C]
      VADD.F32        S2, S2, S0
      VSTR            S2, [R4,#0x31C]
      VLDR            S2, [R4,#0x3F8]
      VSTR            S2, [R4,#0x3F8]
      VLDR            S2, [R4,#0x3F4]
      VADD.F32        S0, S2, S0
      VLDR            S0, [R4,#0x14]
      VSUB.F32        S0, S18, S0
      VMUL.F32        S0, S0, S0
    _R0 = mce::Math::sin(_R0, v55);
      VMOV            S26, R0
      VMOV.F32        S20, #0.75
      VLDR            S22, =-0.7
      VLDR            S24, =-1.2
      VMOV            R1, S0
    _R0 = mce::Math::sin(_R1, *(float *)&_R1);
      VLDR            S0, [R4,#0x84]
      VMOV            S4, R0
      VMUL.F32        S6, S26, S24
      VLDR            S2, [R4,#0x318]
      VADD.F32        S0, S0, S22
      VMUL.F32        S4, S4, S20
      VMOV.F32        S8, #5.0
      VMOV.F32        S10, #-5.0
      VMOV            S12, R7
      VMOV            S14, R5
      VADD.F32        S2, S2, S6
      VMOV            S6, R6
      VMUL.F32        S0, S4, S0
      VMOV            S4, R10
      VMUL.F32        S6, S6, S10
      VMUL.F32        S4, S4, S8
      VMUL.F32        S8, S14, S8
      VMUL.F32        S2, S12, S10
      VMOV            R6, S6
      VMOV            R1, S4
      VMOV            R3, S8
      VLDR            S0, [R4,#0x240]
      VMOV            R2, S2
      VLDR            S4, [R4,#0x31C]
      VADD.F32        S0, S0, S0
      VADD.F32        S0, S4, S0
      VSTR            S0, [R4,#0x31C]
    if ( *(_BYTE *)v127 & 0x20 )
      __asm { VLDR            S0, =3.4028e38 }
      _R0 = (int)_R4 + 4304;
      _R10 = v39;
        VLDR            S2, [R0]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        v124 = _R3;
        v125 = _R2;
        v126 = _R1;
        v36 = v116;
        _R7 = v119;
        _R5 = v108;
      else
        __asm { VLDR            S0, [R4,#0x14] }
        __asm
        {
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm { VMUL.F32        S0, S16, S0 }
          v124 = _R3;
          v125 = _R2;
          v126 = _R1;
          __asm { VMOV            R0, S0 }
          _R0 = mce::Math::sin(_R0, _R1);
          __asm
          {
            VLDR            S0, =0.4
            VMOV            S2, R0
            VMUL.F32        S0, S2, S0
            VSTR            S0, [R4,#0x320]
          }
        else
      v124 = _R3;
      v125 = _R2;
      v126 = _R1;
      v36 = v116;
      _R7 = v119;
      _R5 = v108;
  _R0 = v122;
  __asm { VMOV            S20, R0 }
  if ( *((_BYTE *)_R4 + 4276) )
    if ( *((_BYTE *)_R4 + 4293) & 2 )
      v120 = _R6;
      v117 = v36;
      __asm { VMOV.F32        S4, #-4.0 }
      *((_DWORD *)_R4 + 143) = -1090519040;
        VLDR            S0, =0.4
        VADD.F32        S2, S2, S0
      __asm { VMOV.F32        S4, #4.0 }
      *((_DWORD *)_R4 + 143) = 1056964608;
      VMOV            S6, R11
      VMOV            S10, R5
      VADD.F32        S8, S2, S0
      VADD.F32        S0, S6, S4
      VMOV            S2, R8
      VMOV.F32        S4, #-3.0
      VSTR            S8, [R4,#0x3F4]
      VMOV            S8, R7
    _R0 = v121;
    _R9 = v110;
    _R6 = v109;
      VMOV            S6, R0
      VADD.F32        S8, S8, S4
      VADD.F32        S4, S6, S4
      VADD.F32        S6, S10, S18
      VMOV            R8, S2
      VMOV            R7, S8
      VMOV            R5, S6
    v123 = _R0;
    __asm { VMOV            R0, S4 }
    v121 = _R0;
    v120 = _R6;
    v123 = _R11;
    v117 = v36;
    *((_DWORD *)_R4 + 143) = 0;
    VLDR            S0, =0.09
    VMUL.F32        S0, S20, S0
    VMOV            R0, S0
  _R0 = mce::Math::cos(_R0, v36);
    VLDR            S0, =0.067
    VLDR            S20, =0.05
    VMUL.F32        S0, S0, S20
    VADD.F32        S18, S0, S20
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VLDR            S0, [R4,#0x320]
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4,#0x320]
    VLDR            S0, [R4,#0x3FC]
    VSUB.F32        S2, S0, S18
    VSTR            S2, [R4,#0x3FC]
  if ( !(*(_BYTE *)v127 & 0xC) )
    _R0 = (int)_R4 + 1452;
      VLDR            S2, [R0]
      VSUB.F32        S2, S2, S0
      VSTR            S2, [R0]
  if ( *((_BYTE *)_R4 + 4277) )
      VMOV.F32        S2, #0.5
      VLDR            S4, =-0.1
      VLDR            S6, [R4,#0x88]
      VADD.F32        S6, S6, S2
      VMUL.F32        S2, S16, S2
      VSTR            S4, [R4,#0x31C]
      VSTR            S6, [R4,#0x3F8]
      VLDR            S4, [R4,#0x84]
      VSTR            S18, [R4,#0x320]
      VSUB.F32        S2, S4, S2
      VNEG.F32        S4, S18
      VADD.F32        S6, S2, S0
      VSUB.F32        S0, S2, S0
      VSTR            S4, [R4,#0x3FC]
      VSTR            S6, [R4,#0x318]
    _R0 = ModelPart::getOrigin((HumanoidModel *)((char *)_R4 + 2076));
    _R1 = v126;
      VMOV.F32        S0, #12.0
      VLDR            S3, [R0,#4]
      VMOV            S10, R8
      VLDR            S5, [R0,#8]
      VMOV            S2, R1
    _R1 = v124;
      VLDR            S1, [R0]
      VSUB.F32        S10, S10, S5
    _R0 = v120;
      VSUB.F32        S2, S2, S5
      VMOV            S4, R1
    _R1 = v125;
      VSUB.F32        S0, S0, S3
      VMOV            S7, R0
    _R0 = v112;
    __asm { VMOV            S6, R1 }
    _R1 = v113;
      VSUB.F32        S4, S4, S1
      VMOV            S9, R0
    _R0 = v111;
    __asm { VMOV            S8, R1 }
    _R1 = v114;
      VSUB.F32        S6, S6, S5
      VMOV            S3, R0
      VMOV            S12, R1
    _R1 = v123;
      VSUB.F32        S8, S8, S1
      VSUB.F32        S7, S7, S1
      VMOV            S14, R1
      VSUB.F32        S12, S12, S1
      VSUB.F32        S14, S14, S5
      VSUB.F32        S3, S3, S1
      VSUB.F32        S9, S9, S5
      VMOV            R12, S12
      VMOV            R0, S14
      VMOV            S14, R6
      VMOV            S12, R10
      VMOV            R2, S3
      VMOV            R8, S14
      VMOV            R11, S12
      VMOV            R0, S10
      VMOV            S10, R7
      VADD.F32        S10, S0, S10
      VMOV            R6, S10
    v128 = _R0;
      VMOV            S8, R0
      VMOV            R0, S6
      VADD.F32        S8, S0, S8
    v125 = _R0;
    _R0 = v115;
      VMOV            R0, S4
      VMOV            S4, R9
      VADD.F32        S6, S0, S6
      VADD.F32        S4, S0, S4
      VMOV            R1, S6
      VMOV            R9, S4
    v124 = _R0;
      VMOV            R0, S2
      VMOV            S2, R5
      VMOV            R5, S9
      VADD.F32        S2, S0, S2
      VMOV            LR, S2
    v126 = *(float *)&_R0;
    __asm { VMOV            R0, S7 }
    v120 = _R0;
    *(float *)&_R0 = v117;
      VADD.F32        S0, S0, S7
      VMOV            R10, S0
    v128 = _R8;
    _R8 = _R6;
    _R11 = _R10;
    _LR = _R5;
    _R6 = _R7;
    _R12 = v114;
    _R3 = v113;
    _R7 = v121;
    _R10 = v117;
    HIDWORD(_R0) = v115;
    _R5 = v112;
    _R2 = v111;
  _R0 = (int)_R4 + 4284;
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    __asm { VLDR            S4, [R4,#0x318] }
    _R0 = &HumanoidModel::ARM_ANGLE_X_USE_ITEM_STARTUP;
      VMUL.F32        S2, S2, S0
      VADD.F32        S2, S4, S2
      VLDR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VLDR            S2, [R4,#0x320]
      VSTR            S0, [R4,#0x320]
  _R0 = (int)_R4 + 4288;
      VLDR            S2, [R0,#0xC]
  *((_DWORD *)_R4 + 189) = v120;
  *((_DWORD *)_R4 + 190) = _R9;
  *((float *)_R4 + 191) = v126;
  LODWORD(_R0) = v124;
  *((_QWORD *)_R4 + 122) = _R0;
  *((_DWORD *)_R4 + 246) = v125;
  *((_DWORD *)_R4 + 299) = _R3;
  *((_DWORD *)_R4 + 300) = _R7;
  *((_DWORD *)_R4 + 301) = v128;
  *((_DWORD *)_R4 + 354) = _R12;
  *((_DWORD *)_R4 + 355) = _R6;
  *((_DWORD *)_R4 + 356) = v123;
  *((_DWORD *)_R4 + 24) = _R2;
  *((_DWORD *)_R4 + 25) = _LR;
  *((_DWORD *)_R4 + 26) = _R5;
  *((_DWORD *)_R4 + 134) = _R11;
  *((float *)_R4 + 135) = _R10;
  *((_DWORD *)_R4 + 136) = _R8;
  return j_j_j__ZN5Model13copyModelPartERK9ModelPartRS0_(v118, (HumanoidModel *)((char *)_R4 + 316), _R2);
}


unsigned __int64 __fastcall HumanoidModel::render(float a1, float a2, float a3, float a4, float a5, int a6, int a7, int a8, int a9)
{
  float v9; // r7@1
  float v10; // r5@1
  int v11; // r4@1
  float v12; // r6@1
  float v17; // r3@4
  __int64 v21; // r0@6
  __int64 v24; // r0@7
  __int64 v27; // r0@9
  __int64 v28; // r0@9
  __int64 v29; // r0@9
  __int64 v30; // r0@9
  __int64 v31; // r0@9
  char v33; // [sp+10h] [bp-48h]@7

  v9 = a3;
  v10 = a2;
  v11 = LODWORD(a1);
  v12 = a4;
  Entity::hasCategory(SLODWORD(a3), 2);
  __asm
  {
    VLDR            S16, [SP,#0x58+arg_10]
    VLDR            S18, [SP,#0x58+arg_C]
    VLDR            S20, [SP,#0x58+arg_8]
    VLDR            S22, [SP,#0x58+arg_4]
    VLDR            S24, [SP,#0x58+arg_0]
  }
  if ( _ZF && Entity::isRiding((Entity *)LODWORD(v9)) == 1 && *(_BYTE *)(Entity::getRide((Entity *)LODWORD(v9)) + 528) )
    _R0 = mce::Math::lerpRotate(*(mce::Math **)(LODWORD(v9) + 3416), *(float *)(LODWORD(v9) + 3412), 0.0, v17);
    __asm
    {
      VLDR            S0, =90.0
      VMOV            S2, R0
      VADD.F32        S0, S20, S0
      VADD.F32        S20, S0, S2
    }
    VMOV            R2, S24
    VMOV            R3, S22
    VSTR            S20, [SP,#0x58+var_58]
    VSTR            S18, [SP,#0x58+var_54]
    VSTR            S16, [SP,#0x58+var_50]
  (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v11 + 64))(v11, LODWORD(v12), _R2, _R3);
  if ( *(_BYTE *)(v11 + 24) )
    MatrixStack::push((MatrixStack *)&v33, *(_DWORD *)(LODWORD(v10) + 16) + 16);
    _R0 = __PAIR__(LODWORD(v10), MatrixStack::MatrixStackRef::operator->((int)&v33));
      VLDR            S0, =1.4
      VMOV            R3, S16
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    LODWORD(_R0) = v11 + 96;
    ModelPart::render(_R0, v11, _R3, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v33);
  else
    __asm { VMOV            R3, S16 }
    LODWORD(v21) = v11 + 96;
    v24 = __PAIR__(LODWORD(v10), ModelPart::render(v21, v11, _R3, 0, 0));
  __asm { VMOV            R6, S16 }
  LODWORD(v24) = v11 + 536;
  v27 = __PAIR__(LODWORD(v10), ModelPart::render(v24, v11, _R6, 0, 0));
  LODWORD(v27) = v11 + 756;
  v28 = __PAIR__(LODWORD(v10), ModelPart::render(v27, v11, _R6, 0, 0));
  LODWORD(v28) = v11 + 976;
  v29 = __PAIR__(LODWORD(v10), ModelPart::render(v28, v11, _R6, 0, 0));
  LODWORD(v29) = v11 + 1196;
  v30 = __PAIR__(LODWORD(v10), ModelPart::render(v29, v11, _R6, 0, 0));
  LODWORD(v30) = v11 + 1416;
  v31 = __PAIR__(LODWORD(v10), ModelPart::render(v30, v11, _R6, 0, 0));
  LODWORD(v31) = v11 + 316;
  return __PAIR__(LODWORD(v10), ModelPart::render(v31, v11, _R6, 0, 0));
}


_QWORD *__fastcall HumanoidModel::HumanoidModel(_QWORD *a1, int a2)
{
  int v2; // r9@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  const Vec3 *v8; // r7@5
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  int v16; // r0@12
  int v17; // r6@12
  void *v18; // r0@12
  int v24; // r0@15
  int v25; // r6@15
  void *v26; // r0@15
  int v27; // r0@18
  int v28; // r6@18
  void *v29; // r0@18
  char *v30; // r0@20
  int v31; // r0@21
  int v32; // r6@21
  void *v33; // r0@21
  char *v34; // r0@23
  int v35; // r0@24
  int v36; // r6@24
  void *v37; // r0@24
  char *v38; // r0@26
  int v39; // r0@27
  int v40; // r6@27
  void *v41; // r0@27
  char *v42; // r0@29
  int v43; // r0@30
  int v44; // r6@30
  void *v45; // r0@30
  char *v46; // r0@32
  int v47; // r0@33
  int v48; // r6@33
  void *v49; // r0@33
  char *v50; // r0@35
  int v51; // r0@36
  int v52; // r6@36
  void *v53; // r0@36
  char *v54; // r0@38
  int v55; // r0@39
  int v56; // r6@39
  void *v57; // r0@39
  char *v58; // r0@41
  int v59; // r0@42
  int v60; // r6@42
  void *v61; // r0@42
  char *v62; // r0@44
  unsigned int *v64; // r2@46
  signed int v65; // r1@48
  unsigned int *v66; // r2@50
  signed int v67; // r1@52
  unsigned int *v68; // r2@54
  signed int v69; // r1@56
  unsigned int *v70; // r2@58
  signed int v71; // r1@60
  unsigned int *v72; // r2@62
  signed int v73; // r1@64
  unsigned int *v74; // r2@66
  signed int v75; // r1@68
  unsigned int *v76; // r2@70
  signed int v77; // r1@72
  unsigned int *v78; // r2@74
  signed int v79; // r1@76
  unsigned int *v80; // r2@78
  signed int v81; // r1@80
  unsigned int *v82; // r2@82
  signed int v83; // r1@84
  unsigned int *v84; // r2@86
  signed int v85; // r1@88
  unsigned int *v86; // r2@90
  signed int v87; // r1@92
  unsigned int *v88; // r2@94
  signed int v89; // r1@96
  unsigned int *v90; // r2@98
  signed int v91; // r1@100
  unsigned int *v92; // r2@102
  signed int v93; // r1@104
  unsigned int *v94; // r2@106
  signed int v95; // r1@108
  unsigned int *v96; // r2@110
  signed int v97; // r1@112
  unsigned int *v98; // r2@114
  signed int v99; // r1@116
  unsigned int *v100; // r2@118
  signed int v101; // r1@120
  unsigned int *v102; // r2@122
  signed int v103; // r1@124
  unsigned int *v104; // r2@126
  signed int v105; // r1@128
  unsigned int *v106; // r2@130
  signed int v107; // r1@132
  ModelPart *v108; // [sp+20h] [bp-140h]@5
  ModelPart *v109; // [sp+24h] [bp-13Ch]@5
  ModelPart *v110; // [sp+28h] [bp-138h]@5
  ModelPart *v111; // [sp+2Ch] [bp-134h]@5
  ModelPart *v112; // [sp+30h] [bp-130h]@5
  ModelPart *v113; // [sp+34h] [bp-12Ch]@5
  ModelPart *v114; // [sp+38h] [bp-128h]@5
  ModelPart *v115; // [sp+3Ch] [bp-124h]@5
  ModelPart *v116; // [sp+40h] [bp-120h]@5
  ModelPart *v117; // [sp+44h] [bp-11Ch]@5
  ModelPart *v118; // [sp+4Ch] [bp-114h]@5
  ModelPart *v119; // [sp+50h] [bp-110h]@5
  ModelPart *v120; // [sp+54h] [bp-10Ch]@5
  int v121; // [sp+5Ch] [bp-104h]@42
  int v122; // [sp+64h] [bp-FCh]@39
  int v123; // [sp+6Ch] [bp-F4h]@36
  int v124; // [sp+74h] [bp-ECh]@33
  int v125; // [sp+7Ch] [bp-E4h]@30
  int v126; // [sp+84h] [bp-DCh]@27
  int v127; // [sp+8Ch] [bp-D4h]@24
  int v128; // [sp+94h] [bp-CCh]@21
  int v129; // [sp+9Ch] [bp-C4h]@18
  int v130; // [sp+A0h] [bp-C0h]@17
  signed int v131; // [sp+A4h] [bp-BCh]@17
  int v132; // [sp+A8h] [bp-B8h]@17
  int v133; // [sp+ACh] [bp-B4h]@17
  signed __int64 v134; // [sp+B0h] [bp-B0h]@17
  int v135; // [sp+BCh] [bp-A4h]@15
  float v136; // [sp+C0h] [bp-A0h]@14
  int v137; // [sp+CCh] [bp-94h]@14
  int v138; // [sp+D0h] [bp-90h]@14
  int v139; // [sp+D4h] [bp-8Ch]@14
  int v140; // [sp+DCh] [bp-84h]@12
  int v141; // [sp+E4h] [bp-7Ch]@11
  int v142; // [sp+ECh] [bp-74h]@10
  int v143; // [sp+F4h] [bp-6Ch]@9
  int v144; // [sp+FCh] [bp-64h]@8
  int v145; // [sp+104h] [bp-5Ch]@7
  int v146; // [sp+10Ch] [bp-54h]@6
  int v147; // [sp+114h] [bp-4Ch]@5
  int v148; // [sp+11Ch] [bp-44h]@4
  int v149; // [sp+124h] [bp-3Ch]@3
  int v150; // [sp+12Ch] [bp-34h]@2
  int v151; // [sp+134h] [bp-2Ch]@1

  v2 = a2;
  _R4 = a1;
  Model::Model(a1);
  *(_DWORD *)_R4 = &off_26E566C;
  sub_21E94B4((void **)&v151, "armor");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(_R4 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v151);
  v4 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
  {
    v64 = (unsigned int *)(v151 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
    }
    else
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v150, "armor_leather");
    (mce::MaterialPtr *)((char *)_R4 + 60),
    &v150);
  v5 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v150 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v149, "armor_enchanted");
    (mce::MaterialPtr *)(_R4 + 9),
    &v149);
  v6 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v149 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v148, "armor_leather_enchanted");
    (mce::MaterialPtr *)((char *)_R4 + 84),
    &v148);
  v7 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v148 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 12), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 316)), 0, 0, 64, 32);
  v119 = (ModelPart *)(_R4 + 67);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 67), 0, 0, 64, 32);
  v120 = (ModelPart *)((char *)_R4 + 756);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 756)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 122), 0, 0, 64, 32);
  v8 = (const Vec3 *)(_R4 + 12);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 1196)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 177), 0, 0, 64, 32);
  v118 = (ModelPart *)((char *)_R4 + 1636);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 1636)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 232), 0, 0, 64, 32);
  v117 = (ModelPart *)((char *)_R4 + 2076);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 2076)), 0, 0, 64, 32);
  v116 = (ModelPart *)(_R4 + 287);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 287), 0, 0, 64, 32);
  v115 = (ModelPart *)((char *)_R4 + 2516);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 2516)), 0, 0, 64, 32);
  v113 = (ModelPart *)(_R4 + 342);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 342), 0, 0, 64, 32);
  v112 = (ModelPart *)((char *)_R4 + 2956);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 2956)), 0, 0, 64, 32);
  v110 = (ModelPart *)(_R4 + 397);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 397), 0, 0, 64, 32);
  v108 = (ModelPart *)((char *)_R4 + 3396);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 3396)), 0, 0, 64, 32);
  v114 = (ModelPart *)(_R4 + 452);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 452), 0, 0, 64, 32);
  v111 = (ModelPart *)((char *)_R4 + 3836);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)_R4 + 3836)), 0, 0, 64, 32);
  v109 = (ModelPart *)(_R4 + 507);
  ModelPart::ModelPart(COERCE_FLOAT(_R4 + 507), 0, 0, 64, 32);
  *((_BYTE *)_R4 + 4276) = 0;
  *((_BYTE *)_R4 + 4277) = 0;
  *((_BYTE *)_R4 + 4278) = 0;
  *((_DWORD *)_R4 + 1070) = 1065353216;
  *((_DWORD *)_R4 + 1071) = 0;
  *((_DWORD *)_R4 + 1072) = 0;
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)((char *)_R4 + 4292));
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)(_R4 + 537));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 12));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 67));
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 756));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 122));
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 1196));
  Model::registerParts((Model *)_R4, (ModelPart *)(_R4 + 177));
  Model::registerParts((Model *)_R4, (ModelPart *)((char *)_R4 + 316));
  sub_21E94B4((void **)&v147, "head");
  ModelPart::load((int)(_R4 + 12), v2, (const void **)&v147, 0);
  v9 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v147 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v146, "hat");
  ModelPart::load((int)_R4 + 316, v2, (const void **)&v146, 0);
  v10 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v146 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v145, "body");
  ModelPart::load((int)v119, v2, (const void **)&v145, 0);
  v11 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v145 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v144, "rightArm");
  ModelPart::load((int)v120, v2, (const void **)&v144, 0);
  v12 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v144 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v143, "leftArm");
  ModelPart::load((int)(_R4 + 122), v2, (const void **)&v143, 0);
  v13 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v143 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v142, "rightLeg");
  ModelPart::load((int)_R4 + 1196, v2, (const void **)&v142, 0);
  v14 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v142 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v141, "leftLeg");
  ModelPart::load((int)(_R4 + 177), v2, (const void **)&v141, 0);
  v15 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v141 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v140, "rightItem");
  ModelPart::load((int)v118, v2, (const void **)&v140, (int)v120);
  v17 = v16;
  v18 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v140 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( !v17 )
    v137 = -1061158912;
    v138 = 1091567616;
    v139 = 1065353216;
    ModelPart::setOrigin(v118, (const Vec3 *)&v137);
    _R0 = ModelPart::getOrigin(v118);
    __asm
      VLDR            S0, [R4,#0x300]
      VLDR            S6, [R0]
      VLDR            S2, [R4,#0x304]
      VLDR            S8, [R0,#4]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R4,#0x308]
      VLDR            S10, [R0,#8]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [SP,#0x160+var_A0]
      VSTR            S2, [SP,#0x160+var_9C]
      VSTR            S4, [SP,#0x160+var_98]
    ModelPart::setPos(v118, (const Vec3 *)&v136);
    ModelPart::addChild(v120, v118);
  *((_DWORD *)_R4 + 464) = *((_DWORD *)_R4 + 409);
  *((_DWORD *)_R4 + 465) = *((_DWORD *)_R4 + 410);
  *((_DWORD *)_R4 + 466) = *((_DWORD *)_R4 + 411);
  *((_DWORD *)_R4 + 473) = *((_DWORD *)_R4 + 418);
  *((_DWORD *)_R4 + 474) = *((_DWORD *)_R4 + 419);
  *((_DWORD *)_R4 + 475) = *((_DWORD *)_R4 + 420);
  ModelPart::addChild((ModelPart *)(_R4 + 122), (ModelPart *)(_R4 + 232));
  sub_21E94B4((void **)&v135, "waist");
  ModelPart::load((int)v117, v2, (const void **)&v135, 0);
  v25 = v24;
  v26 = (void *)(v135 - 12);
  if ( (int *)(v135 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v135 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  if ( !v25 )
    v133 = 0;
    v134 = 1094713344LL;
    ModelPart::setPos(v117, (const Vec3 *)&v133);
    v130 = 0;
    v131 = 1094713344;
    v132 = 0;
    ModelPart::setOrigin(v117, (const Vec3 *)&v130);
  sub_21E94B4((void **)&v129, "bodyArmorOffset");
  ModelPart::load((int)v116, v2, (const void **)&v129, 0);
  v28 = v27;
  v29 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v129 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  if ( !v28 )
    ModelPart::setPos(v116, v119);
    v30 = ModelPart::getOrigin(v119);
    ModelPart::setOrigin(v116, (const Vec3 *)v30);
  sub_21E94B4((void **)&v128, "waistArmorOffset");
  ModelPart::load((int)v114, v2, (const void **)&v128, 0);
  v32 = v31;
  v33 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v128 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  if ( !v32 )
    ModelPart::setPos(v114, v119);
    v34 = ModelPart::getOrigin(v119);
    ModelPart::setOrigin(v114, (const Vec3 *)v34);
  sub_21E94B4((void **)&v127, "helmetArmorOffset");
  ModelPart::load((int)v115, v2, (const void **)&v127, 0);
  v36 = v35;
  v37 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v127 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  if ( !v36 )
    ModelPart::setPos(v115, v8);
    v38 = ModelPart::getOrigin(v8);
    ModelPart::setOrigin(v115, (const Vec3 *)v38);
  sub_21E94B4((void **)&v126, "rightArmArmorOffset");
  ModelPart::load((int)v113, v2, (const void **)&v126, 0);
  v40 = v39;
  v41 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v126 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( !v40 )
    ModelPart::setPos(v113, v120);
    v42 = ModelPart::getOrigin(v120);
    ModelPart::setOrigin(v113, (const Vec3 *)v42);
  sub_21E94B4((void **)&v125, "leftArmArmorOffset");
  ModelPart::load((int)v112, v2, (const void **)&v125, 0);
  v44 = v43;
  v45 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v125 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  if ( !v44 )
    ModelPart::setPos(v112, (const Vec3 *)(_R4 + 122));
    v46 = ModelPart::getOrigin((ModelPart *)(_R4 + 122));
    ModelPart::setOrigin(v112, (const Vec3 *)v46);
  sub_21E94B4((void **)&v124, "rightLegArmorOffset");
  ModelPart::load((int)v111, v2, (const void **)&v124, 0);
  v48 = v47;
  v49 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v124 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  if ( !v48 )
    ModelPart::setPos(v111, (const Vec3 *)((char *)_R4 + 1196));
    v50 = ModelPart::getOrigin((ModelPart *)((char *)_R4 + 1196));
    ModelPart::setOrigin(v111, (const Vec3 *)v50);
  sub_21E94B4((void **)&v123, "leftLegArmorOffset");
  ModelPart::load((int)v109, v2, (const void **)&v123, 0);
  v52 = v51;
  v53 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v123 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  if ( !v52 )
    ModelPart::setPos(v109, (const Vec3 *)(_R4 + 177));
    v54 = ModelPart::getOrigin((ModelPart *)(_R4 + 177));
    ModelPart::setOrigin(v109, (const Vec3 *)v54);
  sub_21E94B4((void **)&v122, "rightBootArmorOffset");
  ModelPart::load((int)v110, v2, (const void **)&v122, 0);
  v56 = v55;
  v57 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v122 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  if ( !v56 )
    ModelPart::setPos(v110, (const Vec3 *)((char *)_R4 + 1196));
    v58 = ModelPart::getOrigin((ModelPart *)((char *)_R4 + 1196));
    ModelPart::setOrigin(v110, (const Vec3 *)v58);
  sub_21E94B4((void **)&v121, "leftBootArmorOffset");
  ModelPart::load((int)v108, v2, (const void **)&v121, 0);
  v60 = v59;
  v61 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v121 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  if ( !v60 )
    ModelPart::setPos(v108, (const Vec3 *)(_R4 + 177));
    v62 = ModelPart::getOrigin((ModelPart *)(_R4 + 177));
    ModelPart::setOrigin(v108, (const Vec3 *)v62);
  *((_DWORD *)_R4 + 1076) = 2139095039;
  *((_DWORD *)_R4 + 1075) = 2139095039;
  *((_DWORD *)_R4 + 1074) = **(_DWORD **)(v2 + 4);
  return _R4;
}


AppPlatformListener *__fastcall HumanoidModel::~HumanoidModel(HumanoidModel *this)
{
  HumanoidModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E566C;
  v2 = (HumanoidModel *)((char *)this + 48);
  ModelPart::~ModelPart((HumanoidModel *)((char *)this + 4056));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 3836));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 3616));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 3396));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 3176));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 2956));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 2736));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 2516));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 2296));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 2076));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 1856));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 1636));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 1416));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 1196));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 976));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 756));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 536));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 316));
  ModelPart::~ModelPart((HumanoidModel *)((char *)v1 + 96));
  mce::MaterialPtr::~MaterialPtr((HumanoidModel *)((char *)v1 + 84));
  mce::MaterialPtr::~MaterialPtr((HumanoidModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((HumanoidModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev(v1);
}


_QWORD *__fastcall HumanoidModel::HumanoidModel(_QWORD *a1, float a2, int a3, int a4, int a5)
{
  int v5; // r9@1
  int v6; // r5@1
  _QWORD *v7; // r4@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  void *v11; // r0@4
  unsigned int *v21; // r2@6
  signed int v22; // r1@8
  unsigned int *v23; // r2@10
  signed int v24; // r1@12
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  unsigned int *v27; // r2@18
  signed int v28; // r1@20
  float v29; // [sp+4Ch] [bp-16Ch]@1
  int v30; // [sp+60h] [bp-158h]@5
  int v31; // [sp+68h] [bp-150h]@5
  int v32; // [sp+6Ch] [bp-14Ch]@5
  signed int v33; // [sp+70h] [bp-148h]@5
  int v34; // [sp+74h] [bp-144h]@5
  int v35; // [sp+78h] [bp-140h]@5
  int v36; // [sp+7Ch] [bp-13Ch]@5
  int v37; // [sp+80h] [bp-138h]@5
  int v38; // [sp+84h] [bp-134h]@5
  int v39; // [sp+8Ch] [bp-12Ch]@5
  int v40; // [sp+90h] [bp-128h]@5
  signed int v41; // [sp+94h] [bp-124h]@5
  signed int v42; // [sp+98h] [bp-120h]@5
  int v43; // [sp+9Ch] [bp-11Ch]@5
  int v44; // [sp+A0h] [bp-118h]@5
  int v45; // [sp+A4h] [bp-114h]@5
  int v46; // [sp+A8h] [bp-110h]@5
  int v47; // [sp+B0h] [bp-108h]@5
  int v48; // [sp+B4h] [bp-104h]@5
  signed int v49; // [sp+B8h] [bp-100h]@5
  int v50; // [sp+BCh] [bp-FCh]@5
  int v51; // [sp+C0h] [bp-F8h]@5
  signed int v52; // [sp+C4h] [bp-F4h]@5
  signed int v53; // [sp+C8h] [bp-F0h]@5
  int v54; // [sp+CCh] [bp-ECh]@5
  int v55; // [sp+D4h] [bp-E4h]@5
  int v56; // [sp+D8h] [bp-E0h]@5
  signed int v57; // [sp+DCh] [bp-DCh]@5
  signed int v58; // [sp+E0h] [bp-D8h]@5
  int v59; // [sp+E4h] [bp-D4h]@5
  signed int v60; // [sp+E8h] [bp-D0h]@5
  signed int v61; // [sp+ECh] [bp-CCh]@5
  int v62; // [sp+F0h] [bp-C8h]@5
  int v63; // [sp+F8h] [bp-C0h]@5
  int v64; // [sp+FCh] [bp-BCh]@5
  int v65; // [sp+100h] [bp-B8h]@5
  int v66; // [sp+104h] [bp-B4h]@5
  int v67; // [sp+108h] [bp-B0h]@5
  int v68; // [sp+10Ch] [bp-ACh]@5
  int v69; // [sp+110h] [bp-A8h]@5
  int v70; // [sp+114h] [bp-A4h]@5
  int v71; // [sp+11Ch] [bp-9Ch]@5
  int v72; // [sp+120h] [bp-98h]@5
  signed int v73; // [sp+124h] [bp-94h]@5
  int v74; // [sp+128h] [bp-90h]@5
  int v75; // [sp+12Ch] [bp-8Ch]@5
  signed int v76; // [sp+130h] [bp-88h]@5
  signed int v77; // [sp+134h] [bp-84h]@5
  int v78; // [sp+138h] [bp-80h]@5
  int v79; // [sp+140h] [bp-78h]@5
  int v80; // [sp+144h] [bp-74h]@5
  signed int v81; // [sp+148h] [bp-70h]@5
  int v82; // [sp+14Ch] [bp-6Ch]@5
  int v83; // [sp+150h] [bp-68h]@5
  signed int v84; // [sp+154h] [bp-64h]@5
  signed int v85; // [sp+158h] [bp-60h]@5
  int v86; // [sp+160h] [bp-58h]@4
  int v87; // [sp+168h] [bp-50h]@3
  int v88; // [sp+170h] [bp-48h]@2
  int v89; // [sp+178h] [bp-40h]@1

  v5 = a4;
  v6 = a3;
  v29 = a2;
  v7 = a1;
  Model::Model(a1);
  *(_DWORD *)v7 = &off_26E566C;
  sub_21E94B4((void **)&v89, "armor");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v7 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v89);
  v8 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v89 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  sub_21E94B4((void **)&v88, "armor_leather");
    (mce::MaterialPtr *)((char *)v7 + 60),
    &v88);
  v9 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v88 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v87, "armor_enchanted");
    (mce::MaterialPtr *)(v7 + 9),
    &v87);
  v10 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v87 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v86, "armor_leather_enchanted");
    (mce::MaterialPtr *)((char *)v7 + 84),
    &v86);
  v11 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v86 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 12), 0, 0, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 316)), 32, 0, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 67), 16, 16, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 756)), 40, 16, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 122), 40, 16, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 1196)), 0, 16, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 177), 0, 16, v5, a5);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 1636)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 232), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 2076)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 287), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 2516)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 342), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 2956)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 397), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 3396)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 452), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v7 + 3836)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v7 + 507), 0, 0, 64, 32);
  *((_BYTE *)v7 + 4276) = 0;
  *((_BYTE *)v7 + 4277) = 0;
  *((_BYTE *)v7 + 4278) = 0;
  *((_DWORD *)v7 + 1070) = 1065353216;
  *((_DWORD *)v7 + 1071) = 0;
  *((_DWORD *)v7 + 1072) = 0;
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)((char *)v7 + 4292));
  _R6 = v29;
  SkinAdjustments::SkinAdjustments((SkinAdjustments *)(v7 + 537));
  Model::registerParts((Model *)v7, (ModelPart *)(v7 + 12));
  Model::registerParts((Model *)v7, (ModelPart *)(v7 + 67));
  Model::registerParts((Model *)v7, (ModelPart *)((char *)v7 + 756));
  Model::registerParts((Model *)v7, (ModelPart *)(v7 + 122));
  Model::registerParts((Model *)v7, (ModelPart *)((char *)v7 + 1196));
  Model::registerParts((Model *)v7, (ModelPart *)(v7 + 177));
  Model::registerParts((Model *)v7, (ModelPart *)((char *)v7 + 316));
  __asm { VMOV            S18, R6 }
  v83 = -1065353216;
  v84 = -1056964608;
  v85 = -1065353216;
  v80 = 1090519040;
  v81 = 1090519040;
  v82 = 1090519040;
  ModelPart::addBox((ModelPart *)(v7 + 12), (const Vec3 *)&v83, (const Vec3 *)&v80, v29, (const Color *)&Color::WHITE);
  _R0 = v6;
  __asm { VMOV            S16, R0 }
  v78 = 0;
  __asm { VSTR            S16, [SP,#0x1B8+var_7C] }
  v79 = 0;
  ModelPart::setPos((ModelPart *)(v7 + 12), (const Vec3 *)&v78);
  __asm { VMOV.F32        S0, #0.5 }
  v75 = -1065353216;
  v76 = -1056964608;
  v77 = -1065353216;
  v72 = 1090519040;
  v73 = 1090519040;
  v74 = 1090519040;
  __asm
    VADD.F32        S0, S18, S0
    VMOV            R3, S0
  ModelPart::addBox(
    (ModelPart *)((char *)v7 + 316),
    (const Vec3 *)&v75,
    (const Vec3 *)&v72,
    _R3,
    (const Color *)&Color::WHITE);
  v70 = 0;
  __asm { VSTR            S16, [SP,#0x1B8+var_A0] }
  v71 = 0;
  ModelPart::setPos((ModelPart *)((char *)v7 + 316), (const Vec3 *)&v70);
  ModelPart::setNeverRender((ModelPart *)((char *)v7 + 316), 1);
  v67 = -1065353216;
  v68 = 0;
  v69 = -1073741824;
  v64 = 1090519040;
  v65 = 1094713344;
  v66 = 1082130432;
  ModelPart::addBox((ModelPart *)(v7 + 67), (const Vec3 *)&v67, (const Vec3 *)&v64, v29, (const Color *)&Color::WHITE);
  v62 = 0;
  __asm { VSTR            S16, [SP,#0x1B8+var_C4] }
  v63 = 0;
  ModelPart::setPos((ModelPart *)(v7 + 67), (const Vec3 *)&v62);
    VLDR            S0, =-0.001
  v59 = -1069547520;
  v60 = -1073741824;
  v61 = -1073741824;
  v56 = 1082130432;
  v57 = 1094713344;
  v58 = 1082130432;
  __asm { VMOV            R7, S0 }
    (ModelPart *)((char *)v7 + 756),
    (const Vec3 *)&v59,
    (const Vec3 *)&v56,
    _R7,
  __asm { VMOV.F32        S0, #2.0 }
  v54 = -1063256064;
    VADD.F32        S18, S16, S0
    VSTR            S18, [SP,#0x1B8+var_E8]
  v55 = 0;
  ModelPart::setPos((ModelPart *)((char *)v7 + 756), (const Vec3 *)&v54);
  *((_BYTE *)v7 + 1028) = 1;
  v51 = -1082130432;
  v52 = -1073741824;
  v53 = -1073741824;
  v48 = 1082130432;
  v49 = 1094713344;
  v50 = 1082130432;
  ModelPart::addBox((ModelPart *)(v7 + 122), (const Vec3 *)&v51, (const Vec3 *)&v48, _R7, (const Color *)&Color::WHITE);
  v46 = 1084227584;
  __asm { VSTR            S18, [SP,#0x1B8+var_10C] }
  v47 = 0;
  ModelPart::setPos((ModelPart *)(v7 + 122), (const Vec3 *)&v46);
  v43 = -1073741824;
  v44 = 0;
  v45 = -1073741824;
  v40 = 1082130432;
  v41 = 1094713344;
  v42 = 1082130432;
    (ModelPart *)((char *)v7 + 1196),
    (const Vec3 *)&v43,
    (const Vec3 *)&v40,
  __asm { VMOV.F32        S0, #12.0 }
  v38 = -1074580685;
    VADD.F32        S16, S16, S0
    VSTR            S16, [SP,#0x1B8+var_130]
  v39 = 0;
  ModelPart::setPos((ModelPart *)((char *)v7 + 1196), (const Vec3 *)&v38);
  *((_BYTE *)v7 + 1468) = 1;
  v35 = -1073741824;
  v36 = 0;
  v37 = -1073741824;
  v32 = 1082130432;
  v33 = 1094713344;
  v34 = 1082130432;
  ModelPart::addBox((ModelPart *)(v7 + 177), (const Vec3 *)&v35, (const Vec3 *)&v32, _R7, (const Color *)&Color::WHITE);
  v30 = 1072902963;
  __asm { VSTR            S16, [SP,#0x1B8+var_154] }
  v31 = 0;
  ModelPart::setPos((ModelPart *)(v7 + 177), (const Vec3 *)&v30);
  *((_DWORD *)v7 + 1076) = 2139095039;
  *((_DWORD *)v7 + 1075) = 2139095039;
  return v7;
}


int __fastcall HumanoidModel::clearSkinAdjustments(int result)
{
  *(_DWORD *)(result + 4292) = 0;
  return result;
}


int __fastcall HumanoidModel::getHeightAdjustment(HumanoidModel *this)
{
  int result; // r0@3
  int v6; // [sp+0h] [bp-30h]@1
  char v8; // [sp+Ch] [bp-24h]@1

  Model::buildAABB((Model *)&v8, (int)this);
  AABB::getBounds((AABB *)&v6, (int)&v8);
  __asm
  {
    VMOV.F32        S0, #20.0
    VLDR            S2, [SP,#0x30+var_2C]
    VMOV.F32        S4, #-20.0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VLDR            S2, =0.0625
    VADD.F32        S0, S0, S4
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


void __fastcall HumanoidModel::~HumanoidModel(HumanoidModel *this)
{
  HumanoidModel::~HumanoidModel(this);
}
