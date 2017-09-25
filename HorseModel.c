

int __fastcall HorseModel::render(int a1, int a2, int a3, int a4, float a5, int a6, int a7, int a8, int a9)
{
  int v9; // r6@1
  int v10; // r4@1
  int v11; // r5@1
  int v12; // r8@1 OVERLAPPED
  int v13; // r9@1
  int v14; // r7@1 OVERLAPPED
  unsigned int v15; // r10@1
  __int64 v16; // r0@5
  signed int v17; // r8@6
  __int64 v22; // r0@9
  __int64 v25; // r0@10
  __int64 v26; // r0@10
  __int64 v27; // r0@10
  __int64 v28; // r0@10
  __int64 v29; // r0@10
  __int64 v30; // r0@10
  __int64 v31; // r0@10
  __int64 v32; // r0@10
  __int64 v33; // r0@10
  __int64 v34; // r0@11
  __int64 v35; // r0@11
  int v36; // r6@12
  __int64 v40; // r0@14
  __int64 v41; // r0@14
  __int64 v42; // r0@14
  __int64 v43; // r0@14
  __int64 v44; // r0@14
  __int64 v45; // r0@14
  __int64 v46; // r0@14
  __int64 v47; // r0@14
  __int64 v48; // r0@14
  __int64 v49; // r0@14
  __int64 v50; // r0@14
  __int64 v52; // r0@16
  __int64 v53; // r0@16
  __int64 v54; // r0@16
  __int64 v55; // r0@16
  __int64 v56; // r0@16
  __int64 v60; // r0@22
  __int64 v61; // r0@23
  __int64 v62; // r0@24
  __int64 v63; // r0@24
  __int64 v64; // r0@25
  __int64 v66; // [sp+8h] [bp-88h]@6
  int v67; // [sp+10h] [bp-80h]@12
  int v68; // [sp+14h] [bp-7Ch]@12
  int v69; // [sp+18h] [bp-78h]@12
  int v70; // [sp+1Ch] [bp-74h]@12
  int v71; // [sp+20h] [bp-70h]@12
  int v72; // [sp+24h] [bp-6Ch]@12
  int v73; // [sp+28h] [bp-68h]@12
  int v74; // [sp+2Ch] [bp-64h]@12
  int v75; // [sp+30h] [bp-60h]@12
  int v76; // [sp+34h] [bp-5Ch]@12
  int v77; // [sp+38h] [bp-58h]@12
  int v78; // [sp+3Ch] [bp-54h]@12
  int v79; // [sp+40h] [bp-50h]@12
  int v80; // [sp+44h] [bp-4Ch]@12
  int v81; // [sp+48h] [bp-48h]@12
  int v82; // [sp+4Ch] [bp-44h]@12
  char v83; // [sp+50h] [bp-40h]@12

  v9 = a3;
  v10 = a1;
  v11 = a2;
  v12 = (*(int (__fastcall **)(int))(*(_DWORD *)a3 + 1200))(a3);
  v13 = 0;
  v14 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)v9 + 1208))(v9, 0);
  v15 = 0;
  if ( !*(_BYTE *)(v10 + 24) )
  {
    v13 = Entity::hasSaddle((Entity *)v9);
    if ( *(_BYTE *)(v10 + 24) )
      v15 = 0;
    else
      v15 = Entity::isChested((Entity *)v9);
  }
  v16 = *(_QWORD *)(v9 + 476);
  if ( HIDWORD(v16) == (_DWORD)v16 )
    v66 = *(_QWORD *)&v14;
    v17 = 0;
  else
    v17 = *(_DWORD *)v16;
    if ( *(_DWORD *)v16 )
      v17 = 1;
  __asm { VLDR            S18, [SP,#0x90+arg_10] }
  _R11 = SynchedEntityData::getFloat((SynchedEntityData *)(v9 + 176), 39);
  if ( v13 == 1 )
    __asm { VMOV            R6, S18 }
    LODWORD(v22) = v10 + 1856;
    ModelPart::render(v22, v10, _R6, 0, 0);
    HIDWORD(v25) = v11;
    LODWORD(v25) = v10 + 6256;
    ModelPart::render(v25, v10, _R6, 0, 0);
    HIDWORD(v26) = v11;
    LODWORD(v26) = v10 + 6476;
    ModelPart::render(v26, v10, _R6, 0, 0);
    HIDWORD(v27) = v11;
    LODWORD(v27) = v10 + 6696;
    ModelPart::render(v27, v10, _R6, 0, 0);
    HIDWORD(v28) = v11;
    LODWORD(v28) = v10 + 6916;
    ModelPart::render(v28, v10, _R6, 0, 0);
    LODWORD(v29) = v10 + 7136;
    ModelPart::render(v29, v10, _R6, 0, 0);
    HIDWORD(v30) = v11;
    LODWORD(v30) = v10 + 7356;
    ModelPart::render(v30, v10, _R6, 0, 0);
    HIDWORD(v31) = v11;
    LODWORD(v31) = v10 + 7576;
    ModelPart::render(v31, v10, _R6, 0, 0);
    HIDWORD(v32) = v11;
    LODWORD(v32) = v10 + 7796;
    ModelPart::render(v32, v10, _R6, 0, 0);
    HIDWORD(v33) = v11;
    LODWORD(v33) = v10 + 8016;
    ModelPart::render(v33, v10, _R6, 0, 0);
    if ( v17 == 1 )
    {
      HIDWORD(v34) = v11;
      LODWORD(v34) = v10 + 8236;
      ModelPart::render(v34, v10, _R6, 0, 0);
      HIDWORD(v35) = v11;
      LODWORD(v35) = v10 + 8456;
      ModelPart::render(v35, v10, _R6, 0, 0);
    }
  MatrixStack::push((MatrixStack *)&v83, *(_DWORD *)(v11 + 16) + 16);
  v36 = MatrixStack::MatrixStackRef::operator*((int)&v83);
  __asm { VMOV            S16, R11 }
  _aeabi_memclr8(&v67, 64);
  v67 = *(_DWORD *)v36;
  v68 = *(_DWORD *)(v36 + 4);
  v69 = *(_DWORD *)(v36 + 8);
  v70 = *(_DWORD *)(v36 + 12);
  v71 = *(_DWORD *)(v36 + 16);
  v72 = *(_DWORD *)(v36 + 20);
  v73 = *(_DWORD *)(v36 + 24);
  v74 = *(_DWORD *)(v36 + 28);
  v75 = *(_DWORD *)(v36 + 32);
  v76 = *(_DWORD *)(v36 + 36);
  v77 = *(_DWORD *)(v36 + 40);
  v78 = *(_DWORD *)(v36 + 44);
  v79 = *(_DWORD *)(v36 + 48);
  v80 = *(_DWORD *)(v36 + 52);
  v81 = *(_DWORD *)(v36 + 56);
  v82 = *(_DWORD *)(v36 + 60);
  if ( *(_BYTE *)(v10 + 24) )
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v83);
    __asm
      VMOV.F32        S0, #0.5
      VMUL.F32        S2, S16, S0
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0,#0x10]
      VDIV.F32        S0, S0, S16
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x1C]
    LODWORD(_R0) = MatrixStack::MatrixStackRef::operator->((int)&v83);
      VMOV.F32        S0, #1.0
      VLDR            S2, =-0.55
      VLDR            S4, [R0,#0x18]
      VLDR            S6, [R0,#0x1C]
      VLDR            S8, [R0,#0x10]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VSUB.F32        S0, S0, S16
      VMUL.F32        S0, S0, S2
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
  __asm { VMOV            R7, S18 }
  LODWORD(_R0) = v10 + 3176;
  v40 = __PAIR__(v11, ModelPart::render(_R0, v10, _R7, 0, 0));
  LODWORD(v40) = v10 + 3396;
  v41 = __PAIR__(v11, ModelPart::render(v40, v10, _R7, 0, 0));
  LODWORD(v41) = v10 + 3616;
  v42 = __PAIR__(v11, ModelPart::render(v41, v10, _R7, 0, 0));
  LODWORD(v42) = v10 + 3836;
  v43 = __PAIR__(v11, ModelPart::render(v42, v10, _R7, 0, 0));
  LODWORD(v43) = v10 + 4056;
  ModelPart::render(v43, v10, _R7, 0, 0);
  HIDWORD(v44) = v11;
  LODWORD(v44) = v10 + 4276;
  ModelPart::render(v44, v10, _R7, 0, 0);
  LODWORD(v45) = v10 + 4496;
  ModelPart::render(v45, v10, _R7, 0, 0);
  HIDWORD(v46) = v11;
  LODWORD(v46) = v10 + 4716;
  ModelPart::render(v46, v10, _R7, 0, 0);
  LODWORD(v47) = v10 + 4936;
  ModelPart::render(v47, v10, _R7, 0, 0);
  HIDWORD(v48) = v11;
  LODWORD(v48) = v10 + 5156;
  ModelPart::render(v48, v10, _R7, 0, 0);
  LODWORD(v49) = v10 + 5376;
  ModelPart::render(v49, v10, _R7, 0, 0);
  HIDWORD(v50) = v11;
  LODWORD(v50) = v10 + 5596;
  ModelPart::render(v50, v10, _R7, 0, 0);
    MatrixStack::MatrixStackRef::operator=((int)&v83, (int)&v67);
      VMOV.F32        S2, #-0.75
  LODWORD(_R0) = v10 + 2296;
  v52 = __PAIR__(v11, ModelPart::render(_R0, v10, _R7, 0, 0));
  LODWORD(v52) = v10 + 2516;
  v53 = __PAIR__(v11, ModelPart::render(v52, v10, _R7, 0, 0));
  LODWORD(v53) = v10 + 2736;
  v54 = __PAIR__(v11, ModelPart::render(v53, v10, _R7, 0, 0));
  LODWORD(v54) = v10 + 2956;
  v55 = __PAIR__(v11, ModelPart::render(v54, v10, _R7, 0, 0));
  LODWORD(v55) = v10 + 1636;
  v56 = __PAIR__(v11, ModelPart::render(v55, v10, _R7, 0, 0));
  LODWORD(v56) = v10 + 2076;
  _R0 = __PAIR__(v11, ModelPart::render(v56, v10, _R7, 0, 0));
    __asm { VMOV.F32        S0, #0.5 }
    _R1 = v66;
      VMUL.F32        S2, S16, S16
      VMOV            S18, R1
      VCMPE.F32       S18, #0.0
      VMRS            APSR_nzcv, FPSCR
      VLDR            S2, [R0]
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      LODWORD(_R0) = MatrixStack::MatrixStackRef::operator->((int)&v83);
      __asm
      {
        VMOV.F32        S0, #1.0
        VLDR            S2, =-0.6
        VLDR            S4, [R0,#0x18]
        VLDR            S8, [R0,#0x10]
        VLDR            S6, [R0,#0x1C]
        VLDR            S10, [R0,#0x34]
        VLDR            S12, [R0,#0x38]
        VLDR            S14, [R0,#0x3C]
        VSUB.F32        S0, S0, S16
        VMUL.F32        S0, S0, S2
        VLDR            S2, [R0,#0x14]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S4, S4, S0
        VMUL.F32        S8, S8, S0
        VMUL.F32        S0, S6, S0
        VLDR            S6, [R0,#0x30]
        VADD.F32        S2, S10, S2
        VADD.F32        S4, S12, S4
        VADD.F32        S6, S6, S8
        VADD.F32        S0, S14, S0
        VSTR            S6, [R0,#0x30]
        VSTR            S2, [R0,#0x34]
        VSTR            S4, [R0,#0x38]
      }
        VLDR            S2, =0.15
        VLDR            S4, =-0.6
        VMUL.F32        S2, S18, S2
        VLDR            S6, [R0,#0x18]
        VLDR            S8, [R0,#0x1C]
        VLDR            S10, [R0,#0x20]
        VLDR            S12, [R0,#0x24]
        VLDR            S14, [R0,#0x28]
        VLDR            S1, [R0,#0x2C]
        VLDR            S3, [R0,#0x10]
        VMUL.F32        S0, S0, S4
        VLDR            S4, [R0,#0x14]
        VMUL.F32        S12, S12, S2
        VMUL.F32        S10, S10, S2
        VMUL.F32        S14, S14, S2
        VMUL.F32        S6, S6, S0
        VMUL.F32        S3, S3, S0
        VMUL.F32        S0, S8, S0
        VMUL.F32        S2, S1, S2
        VADD.F32        S6, S14, S6
        VADD.F32        S8, S10, S3
        VADD.F32        S0, S2, S0
        VLDR            S2, [R0,#0x30]
        VADD.F32        S4, S4, S10
        VADD.F32        S6, S6, S12
        VADD.F32        S2, S8, S2
        VADD.F32        S0, S0, S14
        VSTR            S2, [R0,#0x30]
        VSTR            S4, [R0,#0x34]
        VSTR            S6, [R0,#0x38]
    __asm { VSTR            S0, [R0,#0x3C] }
  if ( (unsigned int)(HIDWORD(v66) - 1) > 1 )
    LODWORD(_R0) = v10 + 756;
    v61 = __PAIR__(v11, ModelPart::render(_R0, v10, _R7, 0, 0));
    LODWORD(v61) = v10 + 976;
    ModelPart::render(v61, v10, _R7, 0, 0);
    LODWORD(_R0) = v10 + 1196;
    v60 = __PAIR__(v11, ModelPart::render(_R0, v10, _R7, 0, 0));
    LODWORD(v60) = v10 + 1416;
    ModelPart::render(v60, v10, _R7, 0, 0);
  HIDWORD(v62) = v11;
  LODWORD(v62) = v10 + 96;
  ModelPart::render(v62, v10, _R7, 0, 0);
  MatrixStack::MatrixStackRef::operator=((int)&v83, (int)&v67);
  if ( v15 == 1 )
    LODWORD(v63) = v10 + 5816;
    ModelPart::render(v63, v10, _R7, 0, 0);
    HIDWORD(v64) = v11;
    LODWORD(v64) = v10 + 6036;
    ModelPart::render(v64, v10, _R7, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v83);
}


void __fastcall HorseModel::~HorseModel(HorseModel *this)
{
  HorseModel::~HorseModel(this);
}


void __fastcall HorseModel::setRotation(HorseModel *this, ModelPart *a2, __int64 a3, float a4)
{
  __asm
  {
    VLDR            S0, [SP,#arg_0]
    VSTR            S0, [R1,#0x2C]
  }
  *(_QWORD *)((char *)a2 + 36) = a3;
}


void __fastcall HorseModel::~HorseModel(HorseModel *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = HorseModel::~HorseModel(this);
  j_j_j__ZdlPv_5((void *)v1);
}


HorseModel *__fastcall HorseModel::prepareMobModel(HorseModel *this, Mob *a2, float a3, float a4, float a5)
{
  Mob *v9; // r6@1
  HorseModel *v10; // r4@1
  float v15; // r3@1
  float v17; // r3@1
  float v20; // r1@1
  int v32; // r2@13
  int v34; // r2@13
  float v42; // r1@13
  float v49; // r1@13
  float v53; // r1@13
  signed int v63; // r1@21
  int v64; // r0@22
  int v65; // r0@22
  int v66; // r3@22
  int v67; // r0@22
  int v68; // r0@22
  int v71; // r0@29
  int v72; // r0@29
  HorseModel *result; // r0@29
  int v77; // [sp+10h] [bp-88h]@11
  int v82; // [sp+24h] [bp-74h]@8
  int v83; // [sp+28h] [bp-70h]@8

  __asm { VLDR            S0, [SP,#0x98+arg_0] }
  v9 = a2;
  v10 = this;
  __asm { VMOV            R5, S0 }
  _R9 = a3;
  _R8 = a4;
  _R0 = mce::Math::lerpRotate(*((mce::Math **)a2 + 854), *((float *)a2 + 853), _R5, a4);
  __asm { VMOV            S16, R0 }
  _R0 = mce::Math::lerpRotate(*((mce::Math **)v9 + 856), *((float *)v9 + 855), _R5, v15);
  __asm
  {
    VMOV            S0, R0
    VSUB.F32        S16, S0, S16
  }
  _R7 = mce::Math::lerpRotate(*((mce::Math **)v9 + 32), *((float *)v9 + 30), _R5, v17);
  __asm { VMOV            R0, S16 }
  _R0 = mce::Math::wrapDegrees(_R0, v20);
    VMOV.F32        S0, #20.0
    VMOV            S17, R0
    VLDR            S22, =0.2
    VMOV.F32        S2, #-20.0
    VMOV            S16, R8
  _R0 = &mce::Math::DEGRAD;
    VMOV            S18, R9
    VCMPE.F32       S17, S0
    VLDR            S30, [R0]
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S17, S0 }
    VMOV            S0, R7
    VCMPE.F32       S17, S2
    VMUL.F32        S20, S30, S0
    VCMPE.F32       S16, S22
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S17, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm { VSTR            S16, [SP,#0x98+var_6C] }
  else
    __asm
    {
      VMUL.F32        S0, S18, S22
      VMOV            R0, S0
    }
    _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::DEGRAD));
      VMOV            S0, R0
      VSTR            S16, [SP,#0x98+var_6C]
      VMUL.F32        S0, S0, S16
      VADD.F32        S0, S0, S16
      VMUL.F32        S0, S0, S22
      VADD.F32        S20, S0, S20
  _R7 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v9 + 1208))(v9, LODWORD(_R5));
  _R0 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v9 + 1212))(v9, LODWORD(_R5));
    VMOV.F32        S26, #1.0
    VMOV            S22, R0
    VMOV            S16, R7
    VSUB.F32        S24, S26, S22
  _R0 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v9 + 1216))(v9, LODWORD(_R5));
  __asm { VMOV            S28, R0 }
  v83 = *((_DWORD *)v9 + 1089);
  v82 = Entity::hasSaddle(v9);
  _R0 = *(_QWORD *)((char *)v9 + 476);
  _ZF = HIDWORD(_R0) == (_DWORD)_R0;
  HIDWORD(_R0) = 0;
  if ( !_ZF )
    HIDWORD(_R0) = *(_DWORD *)_R0;
    if ( *(_DWORD *)_R0 )
      HIDWORD(_R0) = 1;
    VCMPE.F32       S22, S16
    VLDR            S0, =0.6662
    VMOV.F32        S2, #15.0
    VMUL.F32        S0, S18, S0
  v77 = HIDWORD(_R0);
  LODWORD(_R0) = &mce::Math::PI;
    VMOV.F32        S5, #11.0
    VMOV.F32        S4, #-6.0
    VMOV.F32        S6, S22
    VLDR            S21, [R0]
    VMOV.F32        S1, #10.0
    VMUL.F32        S8, S30, S2
    VSTR            S21, [SP,#0x98+var_78]
    VMOV.F32        S3, #3.0
    VADD.F32        S0, S21, S0
    VMOV.F32        S10, #18.0
    VMOV.F32        S12, #14.0
    VMOV.F32        S14, #5.5
    VMUL.F32        S5, S16, S5
    VMUL.F32        S4, S22, S4
    VMUL.F32        S7, S22, S2
    VMOV            R0, S0
    VMOV.F32        S0, #4.0
    VMUL.F32        S2, S24, S1
    VLDR            S1, =2.1817
    VMUL.F32        S23, S24, S3
    VMUL.F32        S1, S16, S1
    __asm { VMOVLT.F32      S6, S16 }
    VADD.F32        S4, S4, S5
    VSUB.F32        S26, S26, S6
    VSTR            S7, [SP,#0x98+var_7C]
    VADD.F32        S6, S8, S20
    VSTR            S20, [SP,#0x98+var_8C]
    VMUL.F32        S8, S22, S10
  _R5 = *((_DWORD *)v9 + 104);
    VMUL.F32        S10, S24, S12
    VMUL.F32        S12, S22, S14
    VMUL.F32        S14, S30, S17
    VADD.F32        S31, S2, S7
    VMUL.F32        S0, S26, S0
    VMUL.F32        S6, S6, S22
    VADD.F32        S27, S10, S8
    VADD.F32        S29, S23, S12
    VMUL.F32        S19, S14, S26
    VADD.F32        S18, S4, S0
    VADD.F32        S25, S6, S1
  _R0 = mce::Math::cos((mce::Math *)_R0, *((float *)&_R0 + 1));
    VLDR            S4, =0.5236
    VMOV.F32        S0, #-10.0
    VLDR            S8, =-45.0
    VMUL.F32        S6, S22, S17
    VADD.F32        S4, S20, S4
    VLDR            S17, [SP,#0x98+var_6C]
    VMUL.F32        S8, S22, S8
    VMOV.F32        S9, #9.0
    VLDR            S7, =0.6
    VMOV.F32        S12, #-0.5
    VMUL.F32        S2, S16, S0
    VLDR            S5, =0.8
    VMUL.F32        S4, S4, S26
    VMUL.F32        S14, S8, S30
  _R1 = &mce::Math::DEGRAD;
    VMUL.F32        S10, S6, S30
    VMOV.F32        S11, #0.5
    VSUB.F32        S2, S2, S22
    VADD.F32        S8, S25, S4
    VLDR            S4, =0.02
    VSUB.F32        S3, S4, S28
    VMUL.F32        S4, S22, S9
    VADD.F32        S6, S2, S0
    VLDR            S0, =0.05
    VADD.F32        S2, S10, S19
    VLDR            S10, =-0.03
    VMUL.F32        S1, S28, S0
    VMUL.F32        S0, S17, S12
    VMOV            S12, R5
    VADD.F32        S4, S23, S4
    VCVT.F32.S32    S12, S12
    VSTR            S8, [R4,#0x84]
    VMUL.F32        S10, S28, S10
    VSTR            S2, [R4,#0x88]
    VMOV.F32        S2, #-8.0
    VSTR            S18, [R4,#0x64]
    VSTR            S6, [R4,#0x68]
    VSTR            S4, [R2]
    VMOV.F32        S4, #-2.0
    VSTR            S27, [R2]
    VSTR            S29, [R11]
    VMUL.F32        S10, S10, S21
    VSTR            S31, [R2]
    VMUL.F32        S27, S21, S11
    VLDR            S31, =0.2
    VSTR            S14, [R2]
    VMUL.F32        S14, S1, S21
    VLDR            S1, [SP,#0x98+arg_0]
    VSTR            S18, [R4,#0x2F8]
    VADD.F32        S12, S12, S1
    VSTR            S18, [R4,#0x3D4]
    VSTR            S18, [R6]
    VSTR            S18, [R3]
    VMUL.F32        S2, S24, S2
  *((_DWORD *)v10 + 80) = 1017370378;
  *((_DWORD *)v10 + 135) = 0;
    VSTR            S12, [SP,#0x98+var_84]
    VMUL.F32        S12, S12, S7
    VSTR            S18, [R2]
    VSTR            S6, [R4,#0x2FC]
    VMOV            S18, R0
    VSTR            S6, [R4,#0x3D8]
    VSTR            S6, [R6]
    VSTR            S6, [R3]
    VSTR            S6, [R2]
    VSTR            S3, [R4,#0x144]
    VSTR            S28, [R4,#0x220]
    VMUL.F32        S28, S0, S18
    VADD.F32        S6, S21, S12
    VSTR            S8, [R4,#0x318]
    VMUL.F32        S0, S22, S4
    VSTR            S8, [R4,#0x3F4]
    VMUL.F32        S4, S24, S9
    VSTR            S8, [R3]
    VSTR            S8, [R2]
    VMUL.F32        S8, S17, S5
  v32 = *((_DWORD *)v10 + 33);
  *((_DWORD *)v10 + 418) = v32;
    VMOV            R0, S6
    VSTR            S10, [R4,#0x160]
    VLDR            S10, [R1]
    VLDR            S12, [SP,#0x98+var_7C]
    VLDR            S6, =-0.2
    VADD.F32        S16, S4, S0
    VMUL.F32        S19, S8, S18
    VSTR            S10, [SP,#0x98+var_80]
    VMUL.F32        S29, S12, S10
    VSTR            S14, [R4,#0x23C]
    VMUL.F32        S10, S28, S24
  *((_DWORD *)v10 + 528) = v32;
  v34 = *((_DWORD *)v10 + 34);
  __asm { VADD.F32        S26, S0, S2 }
  *((_DWORD *)v10 + 199) = v34;
  *((_DWORD *)v10 + 254) = v34;
  *((_DWORD *)v10 + 309) = v34;
  __asm { VMUL.F32        S8, S19, S31 }
  *((_DWORD *)v10 + 364) = v34;
  __asm { VADD.F32        S20, S29, S27 }
  *((_DWORD *)v10 + 419) = v34;
  __asm { VMUL.F32        S6, S19, S6 }
  *((_DWORD *)v10 + 89) = 0;
  *((_DWORD *)v10 + 144) = 0;
  _R7 = (int)v10 + 4504;
  _R9 = (int)v10 + 4500;
  __asm { VSTR            S10, [SP,#0x98+var_7C] }
  *((_DWORD *)v10 + 529) = v34;
    VSTR            S8, [SP,#0x98+var_98]
    VMOV.F32        S23, S10
    VADD.F32        S30, S20, S10
    VSTR            S6, [SP,#0x98+var_94]
    VSTR            S6, [R1]
  _R6 = mce::Math::cos(_R0, COERCE_FLOAT((HorseModel *)((char *)v10 + 6072)));
  _R10 = (int)v10 + 5160;
  _R8 = (int)v10 + 5164;
  _R0 = (int)v10 + 3180;
    VSTR            S16, [R9]
    VSTR            S26, [R7]
    VSTR            S16, [R10]
    VSTR            S26, [R8]
    VLDR            S26, [R0]
    VMOV            R0, S30
  _R0 = mce::Math::sin(_R0, v42);
  __asm { VMOV.F32        S2, #1.5 }
  _R1 = (int)v10 + 3184;
    VMOV.F32        S25, #7.0
    VMUL.F32        S16, S21, S2
    VMUL.F32        S0, S0, S25
    VADD.F32        S30, S29, S16
    VADD.F32        S0, S0, S26
    VSTR            S0, [R0]
    VADD.F32        S0, S30, S23
    VLDR            S23, [R1]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT((HorseModel *)((char *)v10 + 3184)));
    VMOV.F32        S0, #0.5
    VMUL.F32        S0, S17, S0
    VMUL.F32        S26, S0, S18
    VMUL.F32        S17, S26, S24
    VADD.F32        S0, S0, S23
    VADD.F32        S2, S20, S17
  _R0 = (int)v10 + 3840;
    VLDR            S18, [R0]
    VMOV            R0, S2
  _R0 = mce::Math::sin(_R0, v49);
    VADD.F32        S2, S30, S17
    VADD.F32        S0, S0, S18
  _R0 = (int)v10 + 3844;
    VLDR            S23, [R0]
  _R0 = mce::Math::cos(_R0, v53);
    VLDR            S0, =-60.0
    VMOV            S18, R6
    VLDR            S21, [SP,#0x98+var_80]
    VMUL.F32        S4, S19, S24
    VMUL.F32        S0, S21, S0
    VSUB.F32        S2, S0, S18
    VMUL.F32        S2, S2, S22
    VMUL.F32        S0, S0, S22
    VSUB.F32        S20, S2, S4
    VADD.F32        S30, S0, S4
    VADD.F32        S0, S30, S27
    VMOV            R1, S0
    VLDR            S23, [R9]
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VADD.F32        S0, S30, S16
    VLDR            S23, [R7]
  _R0 = mce::Math::cos(_R1, *(float *)&_R1);
    VADD.F32        S0, S20, S27
    VLDR            S23, [R10]
    VADD.F32        S0, S20, S16
    VMOV            S2, R0
    VMUL.F32        S0, S2, S25
    VSTR            S0, [R1]
    VLDR            S16, [R8]
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT((HorseModel *)((char *)v10 + 5380)));
    VCMPE.F32       S26, #0.0
    VLDR            S27, =0.0
    VCMPE.F32       S28, #0.0
    VMOV.F32        S2, S27
    VMOV.F32        S4, #-5.0
    VMOV.F32        S8, S27
    VADD.F32        S14, S29, S17
    VMUL.F32        S4, S4, S21
    __asm { VMOVGT.F32      S2, S26 }
    VSUB.F32        S0, S28, S2
    VADD.F32        S2, S2, S19
    VMUL.F32        S0, S0, S24
    VMUL.F32        S2, S2, S24
    VADD.F32        S6, S4, S0
    __asm { VMOVGT.F32      S8, S28 }
    VSUB.F32        S0, S26, S8
    VADD.F32        S12, S29, S12
    VSUB.F32        S8, S8, S19
    VMUL.F32        S10, S0, S24
    VMUL.F32        S8, S8, S24
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S0, S16
    VSTR            S12, [R2]
    VMOV.F32        S12, S27
    VSTR            S6, [R0]
    VMUL.F32        S6, S18, S31
    VSTR            S14, [R0]
    VSTR            S4, [R0]
    VADD.F32        S10, S6, S31
    VSUB.F32        S6, S31, S6
    VCMPE.F32       S10, #0.0
    VCMPE.F32       S6, #0.0
    __asm { VMOVGT.F32      S12, S10 }
    VMOV.F32        S10, S27
    __asm { VMOVGT.F32      S10, S6 }
    VLDR            S14, [SP,#0x98+var_78]
    VMUL.F32        S6, S14, S12
    VSTR            S30, [R1]
    VMUL.F32        S10, S14, S10
    VADD.F32        S6, S6, S30
    VADD.F32        S10, S10, S20
    VMUL.F32        S10, S10, S22
    VADD.F32        S2, S6, S2
    VADD.F32        S6, S10, S8
    VSTR            S2, [R0]
    VSTR            S20, [R0]
  *((_DWORD *)v10 + 905) = *((_DWORD *)v10 + 850);
  *((_DWORD *)v10 + 906) = *((_DWORD *)v10 + 851);
  *((_DWORD *)v10 + 1070) = *((_DWORD *)v10 + 1015);
  *((_DWORD *)v10 + 1071) = *((_DWORD *)v10 + 1016);
  *((_DWORD *)v10 + 1235) = *((_DWORD *)v10 + 1180);
  *((_DWORD *)v10 + 1236) = *((_DWORD *)v10 + 1181);
  v63 = 5600;
  *((_DWORD *)v10 + 1400) = *((_DWORD *)v10 + 1345);
  __asm { VSTR            S0, [R0] }
  if ( v82 == 1 )
      VMOV.F32        S2, #0.5
      VMOV.F32        S4, #11.0
      VADD.F32        S0, S24, S24
      VMUL.F32        S2, S22, S2
      VMUL.F32        S4, S22, S4
      VADD.F32        S2, S0, S2
      VADD.F32        S0, S0, S4
      VSTR            S2, [R0]
      VSTR            S0, [R0]
    *((_DWORD *)v10 + 1455) = *((_DWORD *)v10 + 1510);
      VLDR            S0, [SP,#0x98+var_8C]
    *((_DWORD *)v10 + 1456) = *((_DWORD *)v10 + 1511);
    v64 = *((_DWORD *)v10 + 583);
    *((_DWORD *)v10 + 1573) = v64;
    *((_DWORD *)v10 + 1628) = v64;
    *((_DWORD *)v10 + 1683) = v64;
    v65 = *((_DWORD *)v10 + 25);
    *((_DWORD *)v10 + 2060) = v65;
    *((_DWORD *)v10 + 2115) = v65;
    *((_DWORD *)v10 + 465) = v65;
    *((_DWORD *)v10 + 1950) = v65;
    *((_DWORD *)v10 + 2005) = v65;
    v66 = *((_DWORD *)v10 + 26);
    *((_DWORD *)v10 + 2061) = v66;
    *((_DWORD *)v10 + 2116) = v66;
    *((_DWORD *)v10 + 466) = v66;
    *((_DWORD *)v10 + 1951) = v66;
    *((_DWORD *)v10 + 2006) = v66;
    v67 = *((_DWORD *)v10 + 33);
    *((_DWORD *)v10 + 473) = v67;
    *((_DWORD *)v10 + 1958) = v67;
    *((_DWORD *)v10 + 2013) = v67;
    v68 = *((_DWORD *)v10 + 34);
    *((_DWORD *)v10 + 474) = v68;
    *((_DWORD *)v10 + 1959) = v68;
    *((_DWORD *)v10 + 2069) = v68;
    *((_DWORD *)v10 + 2014) = v68;
    v63 = 8496;
    *((_DWORD *)v10 + 2124) = v68;
    if ( v77 == 1 )
      *((_DWORD *)v10 + 1738) = -1081734510;
      *((_DWORD *)v10 + 1793) = -1081734510;
      *((_DWORD *)v10 + 1848) = -1081734510;
      *((_DWORD *)v10 + 1903) = -1081734510;
      v63 = 0;
      *((_DWORD *)v10 + 1740) = 0;
      *((_DWORD *)v10 + 1795) = 0;
      *((_DWORD *)v10 + 1850) = 0;
      *((_DWORD *)v10 + 1905) = 0;
    else
      __asm
      {
        VLDR            S0, =0.33333
        VMUL.F32        S0, S19, S0
        VSTR            S0, [R0]
        VLDR            S0, [SP,#0x98+var_98]
        VLDR            S0, [SP,#0x98+var_94]
      }
  if ( v83 )
      VLDR            S0, =0.7
      VLDR            S2, [SP,#0x98+var_84]
      VMUL.F32        S0, S2, S0
    _R0 = mce::Math::cos(_R0, *(float *)&v63);
    __asm { VMOV            S0, R0 }
      VMOV.F32        S2, #1.5
      VLDR            S0, [SP,#0x98+var_6C]
      VMUL.F32        S0, S0, S2
      VLDR            S2, =-1.3089
      VADD.F32        S27, S0, S2
      VLDR            S0, =0.0
      VCMPE.F32       S27, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S27, S0 }
  v71 = *((_DWORD *)v10 + 630);
  __asm { VLDR            S0, =-0.2618 }
  *((_DWORD *)v10 + 685) = v71;
  *((_DWORD *)v10 + 740) = v71;
  __asm { VADD.F32        S0, S27, S0 }
  v72 = *((_DWORD *)v10 + 631);
  *((_DWORD *)v10 + 686) = v72;
  *((_DWORD *)v10 + 741) = v72;
    VSTR            S27, [R0]
  result = (HorseModel *)((char *)v10 + 2992);
  return result;
}


AppPlatformListener *__fastcall HorseModel::~HorseModel(HorseModel *this)
{
  HorseModel *v1; // r4@1
  mce::MaterialPtr *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26E5614;
  v2 = (HorseModel *)((char *)this + 48);
  ModelPart::~ModelPart((HorseModel *)((char *)this + 8456));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 8236));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 8016));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 7796));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 7576));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 7356));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 7136));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 6916));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 6696));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 6476));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 6256));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 6036));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 5816));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 5596));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 5376));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 5156));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 4936));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 4716));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 4496));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 4276));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 4056));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 3836));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 3616));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 3396));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 3176));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 2956));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 2736));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 2516));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 2296));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 2076));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 1856));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 1636));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 1416));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 1196));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 976));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 756));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 536));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 316));
  ModelPart::~ModelPart((HorseModel *)((char *)v1 + 96));
  mce::MaterialPtr::~MaterialPtr((HorseModel *)((char *)v1 + 84));
  mce::MaterialPtr::~MaterialPtr((HorseModel *)((char *)v1 + 72));
  mce::MaterialPtr::~MaterialPtr((HorseModel *)((char *)v1 + 60));
  mce::MaterialPtr::~MaterialPtr(v2);
  return j_j_j__ZN5ModelD2Ev_0(v1);
}


_QWORD *__fastcall HorseModel::HorseModel(_QWORD *a1, int a2)
{
  int v2; // r10@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  void *v5; // r0@2
  int v6; // r9@3
  void *v7; // r0@3
  void *v8; // r0@4
  int v9; // r5@5
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  void *v16; // r0@11
  void *v17; // r0@12
  void *v18; // r0@13
  void *v19; // r0@14
  void *v20; // r0@15
  void *v21; // r0@16
  void *v22; // r0@17
  void *v23; // r0@18
  void *v24; // r0@19
  void *v25; // r0@20
  void *v26; // r0@21
  void *v27; // r0@22
  void *v28; // r0@23
  void *v29; // r0@24
  void *v30; // r0@25
  void *v31; // r0@26
  void *v32; // r0@27
  void *v33; // r0@28
  void *v34; // r0@29
  void *v35; // r0@30
  void *v36; // r0@31
  void *v37; // r0@32
  void *v38; // r0@33
  void *v39; // r0@34
  void *v40; // r0@35
  void *v41; // r0@36
  void *v42; // r0@37
  void *v43; // r0@38
  void *v44; // r0@39
  void *v45; // r0@40
  void *v46; // r0@41
  void *v47; // r0@42
  void *v48; // r0@43
  unsigned int *v50; // r2@45
  signed int v51; // r1@47
  unsigned int *v52; // r2@49
  signed int v53; // r1@51
  unsigned int *v54; // r2@53
  signed int v55; // r1@55
  unsigned int *v56; // r2@57
  signed int v57; // r1@59
  unsigned int *v58; // r2@61
  signed int v59; // r1@63
  unsigned int *v60; // r2@65
  signed int v61; // r1@67
  unsigned int *v62; // r2@69
  signed int v63; // r1@71
  unsigned int *v64; // r2@73
  signed int v65; // r1@75
  unsigned int *v66; // r2@77
  signed int v67; // r1@79
  unsigned int *v68; // r2@81
  signed int v69; // r1@83
  unsigned int *v70; // r2@85
  signed int v71; // r1@87
  unsigned int *v72; // r2@89
  signed int v73; // r1@91
  unsigned int *v74; // r2@93
  signed int v75; // r1@95
  unsigned int *v76; // r2@97
  signed int v77; // r1@99
  unsigned int *v78; // r2@101
  signed int v79; // r1@103
  unsigned int *v80; // r2@105
  signed int v81; // r1@107
  unsigned int *v82; // r2@109
  signed int v83; // r1@111
  unsigned int *v84; // r2@113
  signed int v85; // r1@115
  unsigned int *v86; // r2@117
  signed int v87; // r1@119
  unsigned int *v88; // r2@121
  signed int v89; // r1@123
  unsigned int *v90; // r2@125
  signed int v91; // r1@127
  unsigned int *v92; // r2@129
  signed int v93; // r1@131
  unsigned int *v94; // r2@133
  signed int v95; // r1@135
  unsigned int *v96; // r2@137
  signed int v97; // r1@139
  unsigned int *v98; // r2@141
  signed int v99; // r1@143
  unsigned int *v100; // r2@145
  signed int v101; // r1@147
  unsigned int *v102; // r2@149
  signed int v103; // r1@151
  unsigned int *v104; // r2@153
  signed int v105; // r1@155
  unsigned int *v106; // r2@157
  signed int v107; // r1@159
  unsigned int *v108; // r2@161
  signed int v109; // r1@163
  unsigned int *v110; // r2@165
  signed int v111; // r1@167
  unsigned int *v112; // r2@169
  signed int v113; // r1@171
  unsigned int *v114; // r2@173
  signed int v115; // r1@175
  unsigned int *v116; // r2@177
  signed int v117; // r1@179
  unsigned int *v118; // r2@181
  signed int v119; // r1@183
  unsigned int *v120; // r2@185
  signed int v121; // r1@187
  unsigned int *v122; // r2@189
  signed int v123; // r1@191
  unsigned int *v124; // r2@193
  signed int v125; // r1@195
  unsigned int *v126; // r2@197
  signed int v127; // r1@199
  unsigned int *v128; // r2@201
  signed int v129; // r1@203
  unsigned int *v130; // r2@205
  signed int v131; // r1@207
  unsigned int *v132; // r2@209
  signed int v133; // r1@211
  unsigned int *v134; // r2@213
  signed int v135; // r1@215
  mce::MaterialPtr *v136; // [sp+80h] [bp-218h]@4
  int v137; // [sp+11Ch] [bp-17Ch]@43
  int v138; // [sp+124h] [bp-174h]@42
  int v139; // [sp+12Ch] [bp-16Ch]@41
  int v140; // [sp+134h] [bp-164h]@40
  int v141; // [sp+13Ch] [bp-15Ch]@39
  int v142; // [sp+144h] [bp-154h]@38
  int v143; // [sp+14Ch] [bp-14Ch]@37
  int v144; // [sp+154h] [bp-144h]@36
  int v145; // [sp+15Ch] [bp-13Ch]@35
  int v146; // [sp+164h] [bp-134h]@34
  int v147; // [sp+16Ch] [bp-12Ch]@33
  int v148; // [sp+174h] [bp-124h]@32
  int v149; // [sp+17Ch] [bp-11Ch]@31
  int v150; // [sp+184h] [bp-114h]@30
  int v151; // [sp+18Ch] [bp-10Ch]@29
  int v152; // [sp+194h] [bp-104h]@28
  int v153; // [sp+19Ch] [bp-FCh]@27
  int v154; // [sp+1A4h] [bp-F4h]@26
  int v155; // [sp+1ACh] [bp-ECh]@25
  int v156; // [sp+1B4h] [bp-E4h]@24
  int v157; // [sp+1BCh] [bp-DCh]@23
  int v158; // [sp+1C4h] [bp-D4h]@22
  int v159; // [sp+1CCh] [bp-CCh]@21
  int v160; // [sp+1D4h] [bp-C4h]@20
  int v161; // [sp+1DCh] [bp-BCh]@19
  int v162; // [sp+1E4h] [bp-B4h]@18
  int v163; // [sp+1ECh] [bp-ACh]@17
  int v164; // [sp+1F4h] [bp-A4h]@16
  int v165; // [sp+1FCh] [bp-9Ch]@15
  int v166; // [sp+204h] [bp-94h]@14
  int v167; // [sp+20Ch] [bp-8Ch]@13
  int v168; // [sp+214h] [bp-84h]@12
  int v169; // [sp+21Ch] [bp-7Ch]@11
  int v170; // [sp+224h] [bp-74h]@10
  int v171; // [sp+22Ch] [bp-6Ch]@9
  int v172; // [sp+234h] [bp-64h]@8
  int v173; // [sp+23Ch] [bp-5Ch]@7
  int v174; // [sp+244h] [bp-54h]@6
  int v175; // [sp+24Ch] [bp-4Ch]@5
  int v176; // [sp+254h] [bp-44h]@4
  int v177; // [sp+25Ch] [bp-3Ch]@3
  int v178; // [sp+264h] [bp-34h]@2
  int v179; // [sp+26Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = a1;
  Model::Model(a1);
  *(_DWORD *)v3 = &off_26E5614;
  sub_21E94B4((void **)&v179, "horse");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v3 + 6),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v179);
  v4 = (void *)(v179 - 12);
  if ( (int *)(v179 - 12) != &dword_28898C0 )
  {
    v50 = (unsigned int *)(v179 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
    }
    else
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v178, "horse_leather_armor");
    (mce::MaterialPtr *)((char *)v3 + 60),
    &v178);
  v5 = (void *)(v178 - 12);
  if ( (int *)(v178 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v178 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v177, "horse_saddle");
  v6 = (int)(v3 + 9);
    (mce::MaterialPtr *)(v3 + 9),
    &v177);
  v7 = (void *)(v177 - 12);
  if ( (int *)(v177 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v177 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v176, "horse_hair");
  v136 = mce::MaterialPtr::MaterialPtr(
           (mce::MaterialPtr *)((char *)v3 + 84),
           (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
           &v176);
  v8 = (void *)(v176 - 12);
  if ( (int *)(v176 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v176 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 12), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 316)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 67), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 756)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 122), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1196)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 177), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 1636)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 232), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2076)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 287), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2516)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 342), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 2956)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 397), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 3396)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 452), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 3836)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 507), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4276)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 562), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 4716)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 617), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 5156)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 672), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 5596)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 727), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 6036)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 782), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 6476)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 837), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 6916)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 892), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 7356)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 947), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 7796)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 1002), 0, 0, 64, 32);
  v9 = (int)v3 + 8236;
  ModelPart::ModelPart(COERCE_FLOAT((_QWORD *)((char *)v3 + 8236)), 0, 0, 64, 32);
  ModelPart::ModelPart(COERCE_FLOAT(v3 + 1057), 0, 0, 64, 32);
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 287));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 2516));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 342));
  Model::registerParts((Model *)v3, (ModelPart *)((char *)v3 + 2956));
  Model::registerParts((Model *)v3, (ModelPart *)(v3 + 397));
  Model::registerParts<ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &,ModelPart &>(
    (ModelPart *)v3,
    (ModelPart *)((char *)v3 + 3396),
    (ModelPart *)(v3 + 452),
    (ModelPart *)((char *)v3 + 3836),
    (ModelPart *)(v3 + 507),
    (ModelPart *)((char *)v3 + 4276),
    (ModelPart *)(v3 + 562),
    (ModelPart *)((char *)v3 + 4716),
    (int)(v3 + 617),
    (int)v3 + 5156,
    (int)(v3 + 672),
    (int)v3 + 5596,
    (int)(v3 + 12),
    (int)v3 + 316,
    (int)(v3 + 67),
    (int)v3 + 756,
    (int)(v3 + 122),
    (int)v3 + 1196,
    (int)(v3 + 177),
    (int)v3 + 1636,
    (int)(v3 + 727),
    (int)v3 + 6036,
    (int)(v3 + 782),
    (int)v3 + 6476,
    (int)(v3 + 837),
    (int)(v3 + 892),
    (int)v3 + 6916,
    (int)(v3 + 947),
    __PAIR__((unsigned int)v3 + 7796, (unsigned int)v3 + 7356),
    (unsigned int)(v3 + 1002),
    (int)v3 + 8236,
    (ModelPart *)(v3 + 1057),
    (ModelPart *)((char *)v3 + 2076),
    (ModelPart *)(v3 + 232));
  *((_DWORD *)v3 + 7) = v3 + 6;
  sub_21E94B4((void **)&v175, "Body");
  ModelPart::load((int)(v3 + 287), v2, (const void **)&v175, 0);
  v10 = (void *)(v175 - 12);
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v175 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v9 = (int)v3 + 8236;
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v174, "TailA");
  ModelPart::load((int)v3 + 2516, v2, (const void **)&v174, 0);
  v11 = (void *)(v174 - 12);
  if ( (int *)(v174 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v174 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v173, "TailB");
  ModelPart::load((int)(v3 + 342), v2, (const void **)&v173, 0);
  v12 = (void *)(v173 - 12);
  if ( (int *)(v173 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v173 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v172, "TailC");
  ModelPart::load((int)v3 + 2956, v2, (const void **)&v172, 0);
  v13 = (void *)(v172 - 12);
  if ( (int *)(v172 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v172 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v171, "Leg1A");
  ModelPart::load((int)(v3 + 397), v2, (const void **)&v171, 0);
  v14 = (void *)(v171 - 12);
  if ( (int *)(v171 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v171 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v170, "Leg1B");
  ModelPart::load((int)v3 + 3396, v2, (const void **)&v170, 0);
  v15 = (void *)(v170 - 12);
  if ( (int *)(v170 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v170 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v169, "Leg1C");
  ModelPart::load((int)(v3 + 452), v2, (const void **)&v169, 0);
  v16 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v169 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v168, "Leg2A");
  ModelPart::load((int)v3 + 3836, v2, (const void **)&v168, 0);
  v17 = (void *)(v168 - 12);
  if ( (int *)(v168 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v168 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v167, "Leg2B");
  ModelPart::load((int)(v3 + 507), v2, (const void **)&v167, 0);
  v18 = (void *)(v167 - 12);
  if ( (int *)(v167 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v167 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v166, "Leg2C");
  ModelPart::load((int)v3 + 4276, v2, (const void **)&v166, 0);
  v19 = (void *)(v166 - 12);
  if ( (int *)(v166 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v166 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v165, "Leg3A");
  ModelPart::load((int)(v3 + 562), v2, (const void **)&v165, 0);
  v20 = (void *)(v165 - 12);
  if ( (int *)(v165 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v165 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v164, "Leg3B");
  ModelPart::load((int)v3 + 4716, v2, (const void **)&v164, 0);
  v21 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v164 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v163, "Leg3C");
  ModelPart::load((int)(v3 + 617), v2, (const void **)&v163, 0);
  v22 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v163 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v162, "Leg4A");
  ModelPart::load((int)v3 + 5156, v2, (const void **)&v162, 0);
  v23 = (void *)(v162 - 12);
  if ( (int *)(v162 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v162 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v161, "Leg4B");
  ModelPart::load((int)(v3 + 672), v2, (const void **)&v161, 0);
  v24 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v161 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v160, "Leg4C");
  ModelPart::load((int)v3 + 5596, v2, (const void **)&v160, 0);
  v25 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v160 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v159, "Head");
  ModelPart::load((int)(v3 + 12), v2, (const void **)&v159, 0);
  v26 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v159 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v158, "UMouth");
  ModelPart::load((int)v3 + 316, v2, (const void **)&v158, (int)(v3 + 12));
  v27 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v92 = (unsigned int *)(v158 - 4);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v157, "LMouth");
  ModelPart::load((int)(v3 + 67), v2, (const void **)&v157, (int)(v3 + 12));
  v28 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v157 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v156, "Ear1");
  ModelPart::load((int)v3 + 756, v2, (const void **)&v156, 0);
  v29 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v156 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v155, "Ear2");
  ModelPart::load((int)(v3 + 122), v2, (const void **)&v155, 0);
  v30 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v155 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v154, "MuleEarL");
  ModelPart::load((int)v3 + 1196, v2, (const void **)&v154, 0);
  v31 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v100 = (unsigned int *)(v154 - 4);
        v101 = __ldrex(v100);
      while ( __strex(v101 - 1, v100) );
      v101 = (*v100)--;
    if ( v101 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v153, "MuleEarR");
  ModelPart::load((int)(v3 + 177), v2, (const void **)&v153, 0);
  v32 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v102 = (unsigned int *)(v153 - 4);
        v103 = __ldrex(v102);
      while ( __strex(v103 - 1, v102) );
      v103 = (*v102)--;
    if ( v103 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v152, "Neck");
  ModelPart::load((int)v3 + 1636, v2, (const void **)&v152, 0);
  v33 = (void *)(v152 - 12);
  if ( (int *)(v152 - 12) != &dword_28898C0 )
    v104 = (unsigned int *)(v152 - 4);
        v105 = __ldrex(v104);
      while ( __strex(v105 - 1, v104) );
      v105 = (*v104)--;
    if ( v105 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v151, "Bag1");
  ModelPart::load((int)(v3 + 727), v2, (const void **)&v151, 0);
  v34 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v151 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v150, "Bag2");
  ModelPart::load((int)v3 + 6036, v2, (const void **)&v150, 0);
  v35 = (void *)(v150 - 12);
  if ( (int *)(v150 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v150 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v149, "Saddle");
  ModelPart::load((int)(v3 + 782), v2, (const void **)&v149, 0);
  v36 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v149 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v148, "SaddleB");
  ModelPart::load((int)v3 + 6476, v2, (const void **)&v148, 0);
  v37 = (void *)(v148 - 12);
  if ( (int *)(v148 - 12) != &dword_28898C0 )
    v112 = (unsigned int *)(v148 - 4);
        v113 = __ldrex(v112);
      while ( __strex(v113 - 1, v112) );
      v113 = (*v112)--;
    if ( v113 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v147, "SaddleC");
  ModelPart::load((int)(v3 + 837), v2, (const void **)&v147, 0);
  v38 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v114 = (unsigned int *)(v147 - 4);
        v115 = __ldrex(v114);
      while ( __strex(v115 - 1, v114) );
      v115 = (*v114)--;
    if ( v115 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v146, "SaddleL2");
  ModelPart::load((int)(v3 + 892), v2, (const void **)&v146, 0);
  v39 = (void *)(v146 - 12);
  if ( (int *)(v146 - 12) != &dword_28898C0 )
    v116 = (unsigned int *)(v146 - 4);
        v117 = __ldrex(v116);
      while ( __strex(v117 - 1, v116) );
      v117 = (*v116)--;
    if ( v117 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v145, "SaddleL");
  ModelPart::load((int)v3 + 6916, v2, (const void **)&v145, 0);
  v40 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v118 = (unsigned int *)(v145 - 4);
        v119 = __ldrex(v118);
      while ( __strex(v119 - 1, v118) );
      v119 = (*v118)--;
    if ( v119 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v144, "SaddleR2");
  ModelPart::load((int)(v3 + 947), v2, (const void **)&v144, 0);
  v41 = (void *)(v144 - 12);
  if ( (int *)(v144 - 12) != &dword_28898C0 )
    v120 = (unsigned int *)(v144 - 4);
        v121 = __ldrex(v120);
      while ( __strex(v121 - 1, v120) );
      v121 = (*v120)--;
    if ( v121 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v143, "SaddleR");
  ModelPart::load((int)v3 + 7356, v2, (const void **)&v143, 0);
  v42 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v122 = (unsigned int *)(v143 - 4);
        v123 = __ldrex(v122);
      while ( __strex(v123 - 1, v122) );
      v123 = (*v122)--;
    if ( v123 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  sub_21E94B4((void **)&v142, "SaddleMouthL");
  ModelPart::load((int)v3 + 7796, v2, (const void **)&v142, 0);
  v43 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v124 = (unsigned int *)(v142 - 4);
        v125 = __ldrex(v124);
      while ( __strex(v125 - 1, v124) );
      v125 = (*v124)--;
    if ( v125 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  sub_21E94B4((void **)&v141, "SaddleMouthR");
  ModelPart::load((int)(v3 + 1002), v2, (const void **)&v141, 0);
  v44 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v126 = (unsigned int *)(v141 - 4);
        v127 = __ldrex(v126);
      while ( __strex(v127 - 1, v126) );
      v127 = (*v126)--;
    if ( v127 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  sub_21E94B4((void **)&v140, "SaddleMouthLine");
  ModelPart::load(v9, v2, (const void **)&v140, 0);
  v45 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v128 = (unsigned int *)(v140 - 4);
        v129 = __ldrex(v128);
      while ( __strex(v129 - 1, v128) );
      v129 = (*v128)--;
    if ( v129 <= 0 )
      j_j_j_j__ZdlPv_9(v45);
  sub_21E94B4((void **)&v139, "SaddleMouthLineR");
  ModelPart::load((int)(v3 + 1057), v2, (const void **)&v139, 0);
  v46 = (void *)(v139 - 12);
  if ( (int *)(v139 - 12) != &dword_28898C0 )
    v130 = (unsigned int *)(v139 - 4);
        v131 = __ldrex(v130);
      while ( __strex(v131 - 1, v130) );
      v131 = (*v130)--;
    if ( v131 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  sub_21E94B4((void **)&v138, "Mane");
  ModelPart::load((int)v3 + 2076, v2, (const void **)&v138, 0);
  v47 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v132 = (unsigned int *)(v138 - 4);
        v133 = __ldrex(v132);
      while ( __strex(v133 - 1, v132) );
      v133 = (*v132)--;
    if ( v133 <= 0 )
      j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v137, "HeadSaddle");
  ModelPart::load((int)(v3 + 232), v2, (const void **)&v137, 0);
  v48 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v134 = (unsigned int *)(v137 - 4);
        v135 = __ldrex(v134);
      while ( __strex(v135 - 1, v134) );
      v135 = (*v134)--;
    if ( v135 <= 0 )
      j_j_j_j__ZdlPv_9(v48);
  *((_DWORD *)v3 + 486) = v6;
  *((_DWORD *)v3 + 1971) = v6;
  *((_DWORD *)v3 + 2026) = v6;
  *((_DWORD *)v3 + 2081) = v6;
  *((_DWORD *)v3 + 2136) = v6;
  *((_DWORD *)v3 + 651) = v136;
  *((_DWORD *)v3 + 706) = v136;
  *((_DWORD *)v3 + 761) = v136;
  *((_DWORD *)v3 + 541) = v136;
  *((_DWORD *)v3 + 2) = 0;
  *((_DWORD *)v3 + 3) = -1090519040;
  *((_DWORD *)v3 + 4) = 1050253722;
  return v3;
}
