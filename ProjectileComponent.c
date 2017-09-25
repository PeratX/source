

int __fastcall ProjectileComponent::shoot(ProjectileComponent *this, Mob *a2)
{
  Mob *v2; // r6@1
  Level *v4; // r7@1
  float v5; // r6@1
  char v13; // [sp+8h] [bp-20h]@1

  v2 = a2;
  _R4 = this;
  v4 = (Level *)j_Entity::getLevel(a2);
  j_ProjectileComponent::getShooterAngle((ProjectileComponent *)&v13, _R4, (int)v2);
  v5 = *((float *)_R4 + 45);
  _R0 = j_Level::getDifficulty(v4);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R4,#0x110]
    VLDR            S2, [R4,#0x10C]
    VMUL.F32        S0, S4, S0
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMOV            R3, S2 }
  return j_ProjectileComponent::shoot(_R4, (const Vec3 *)&v13, v5, _R3, (const Vec3 *)&Vec3::ZERO, 0);
}


char *__fastcall ProjectileComponent::getThrownPos(ProjectileComponent *this)
{
  return (char *)this + 20;
}


unsigned int __fastcall ProjectileComponent::initFromDefinition(ProjectileComponent *this)
{
  ProjectileComponent *v1; // r10@1
  int v2; // r5@1
  __int16 v3; // r0@1
  __int16 v4; // r0@1
  unsigned int result; // r0@1
  char *v6; // r4@1
  int *v7; // r7@1 OVERLAPPED
  int *v8; // r8@1 OVERLAPPED
  int v9; // r9@2
  _BYTE *v10; // r11@4
  int v11; // r5@4
  unsigned int v12; // r1@4
  unsigned int v13; // r0@6
  unsigned int v14; // r6@6
  void *v15; // r0@12
  signed int v16; // r2@13
  int v17; // r4@13

  v1 = this;
  v2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 4) + 48) + 368);
  *((_DWORD *)this + 45) = *(_DWORD *)(v2 + 16);
  *((_DWORD *)this + 47) = *(_DWORD *)(v2 + 4);
  *((_DWORD *)this + 48) = *(_DWORD *)(v2 + 8);
  *((_DWORD *)this + 49) = *(_DWORD *)(v2 + 12);
  *((_DWORD *)this + 50) = *(_DWORD *)(v2 + 32);
  *((_DWORD *)this + 51) = *(_DWORD *)(v2 + 24);
  *((_DWORD *)this + 52) = *(_DWORD *)(v2 + 28);
  EntityInteraction::setInteractText((int *)this + 57, (int *)(v2 + 100));
  EntityInteraction::setInteractText((int *)v1 + 58, (int *)(v2 + 104));
  *((_DWORD *)v1 + 60) = *(_DWORD *)(v2 + 112);
  j_std::vector<std::shared_ptr<FilterGroup>,std::allocator<std::shared_ptr<FilterGroup>>>::operator=(
    (int)v1 + 244,
    (__int64 *)(v2 + 116));
  j_std::vector<std::shared_ptr<FilterTest>,std::allocator<std::shared_ptr<FilterTest>>>::operator=(
    (int)v1 + 256,
    (__int64 *)(v2 + 128));
  *((_DWORD *)v1 + 68) = *(_DWORD *)(v2 + 40);
  *((_DWORD *)v1 + 67) = *(_DWORD *)(v2 + 36);
  *((_BYTE *)v1 + 312) = *(_BYTE *)(v2 + 72);
  *((_BYTE *)v1 + 322) = *(_BYTE *)(v2 + 140);
  *((_BYTE *)v1 + 323) = *(_BYTE *)(v2 + 144);
  *((_DWORD *)v1 + 69) = *(_DWORD *)(v2 + 56);
  *((_DWORD *)v1 + 70) = *(_DWORD *)(v2 + 44);
  *((_DWORD *)v1 + 71) = *(_DWORD *)(v2 + 48);
  *((_DWORD *)v1 + 72) = *(_DWORD *)(v2 + 52);
  *((_BYTE *)v1 + 292) = *(_BYTE *)(v2 + 20);
  v3 = *(_WORD *)(v2 + 60);
  *((_BYTE *)v1 + 300) = v3;
  *((_BYTE *)v1 + 303) = HIBYTE(v3);
  *((_BYTE *)v1 + 320) = j_soundEventFromString((unsigned int *)(v2 + 76));
  *((_BYTE *)v1 + 321) = j_soundEventFromString((unsigned int *)(v2 + 80));
  *((_DWORD *)v1 + 79) = *(_DWORD *)(v2 + 84);
  *((_DWORD *)v1 + 76) = *(_DWORD *)(v2 + 64);
  *((_DWORD *)v1 + 77) = *(_DWORD *)(v2 + 68);
  *((_BYTE *)v1 + 328) = *(_BYTE *)(v2 + 145);
  *((_BYTE *)v1 + 325) = *(_BYTE *)(v2 + 141);
  v4 = *(_WORD *)(v2 + 142);
  *((_BYTE *)v1 + 326) = v4;
  *((_BYTE *)v1 + 327) = HIBYTE(v4);
  result = *(_BYTE *)(v2 + 146);
  *((_BYTE *)v1 + 380) = result;
  v6 = (char *)*((_DWORD *)v1 + 54);
  *((_DWORD *)v1 + 55) = v6;
  for ( *(_QWORD *)&v7 = *(_QWORD *)(v2 + 88); v8 != v7; ++v7 )
  {
    v9 = *v7;
    if ( v6 == *((char **)v1 + 56) )
    {
      v10 = (_BYTE *)*((_DWORD *)v1 + 54);
      v11 = 0;
      v12 = (v6 - v10) >> 2;
      if ( !v12 )
        v12 = 1;
      v13 = v12 + ((v6 - v10) >> 2);
      v14 = v12 + ((v6 - v10) >> 2);
      if ( 0 != v13 >> 30 )
        v14 = 0x3FFFFFFF;
      if ( v13 < v12 )
      if ( v14 )
      {
        if ( v14 >= 0x40000000 )
          sub_21E57F4();
        v15 = j_operator new(4 * v14);
        v6 = (char *)(*((_QWORD *)v1 + 27) >> 32);
        v10 = (_BYTE *)*((_QWORD *)v1 + 27);
        v11 = (int)v15;
      }
      v16 = v6 - v10;
      v17 = v11 + v6 - v10;
      *(_DWORD *)(v11 + v16) = v9;
      if ( v16 >> 2 )
        j___aeabi_memmove4_0(v11, (int)v10);
      v6 = (char *)(v17 + 4);
      if ( v10 )
        j_operator delete(v10);
      result = v11 + 4 * v14;
      *((_DWORD *)v1 + 54) = v11;
      *((_DWORD *)v1 + 55) = v6;
      *((_DWORD *)v1 + 56) = result;
    }
    else
      *(_DWORD *)v6 = v9;
      result = *((_DWORD *)v1 + 55);
      v6 = (char *)(result + 4);
      *((_DWORD *)v1 + 55) = result + 4;
  }
  return result;
}


unsigned int __fastcall ProjectileComponent::selectNextMoveDirection(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r10@1
  float *v9; // r0@2
  float v10; // r5@2
  int v12; // r0@2
  Entity **v16; // r4@2
  int v18; // r0@3
  unsigned int v19; // r5@4
  unsigned int v23; // r9@4
  int v24; // r0@5
  int v25; // r0@8
  BlockSource *v26; // r0@9
  _BYTE *v27; // r0@10
  char v28; // r1@10
  char *v29; // r10@11
  char *v30; // r5@11
  BlockSource *v31; // r0@14
  int v32; // r7@18
  int v33; // r0@19
  BlockSource *v34; // r0@20
  BlockSource *v35; // r0@23
  int v36; // r2@25
  unsigned int v37; // r0@26
  unsigned int v38; // r8@28
  char *v39; // r1@31
  int v40; // r2@32
  unsigned int v41; // r0@33
  unsigned int v42; // r8@35
  char *v43; // r0@35
  int v44; // r5@39
  char *v45; // r7@40
  char *v46; // r7@42
  int v47; // r5@45
  char *v48; // r7@46
  char *v49; // r7@48
  int v50; // r0@51
  BlockSource *v51; // r0@52
  __int64 v52; // r1@52
  char *v53; // r2@53
  BlockSource *v54; // r0@57
  __int64 v55; // r1@57
  int v56; // r6@60
  unsigned int v57; // r1@61
  unsigned int v58; // r0@63
  int v59; // r5@66
  char *v60; // r7@66
  char v61; // r0@66
  unsigned int v62; // r1@68
  unsigned int v63; // r0@70
  int v64; // r5@73
  unsigned int v65; // r1@84
  char *v66; // r8@85
  signed int v67; // r10@85
  BlockSource *v68; // r5@86
  signed int v69; // r0@86
  signed int v73; // r0@107
  float v78; // r1@111
  unsigned int result; // r0@114
  int v81; // [sp+4h] [bp-DCh]@9
  char v82; // [sp+8h] [bp-D8h]@86
  __int64 v83; // [sp+14h] [bp-CCh]@57
  int v84; // [sp+1Ch] [bp-C4h]@57
  __int64 v85; // [sp+20h] [bp-C0h]@52
  int v86; // [sp+28h] [bp-B8h]@52
  int v87; // [sp+2Ch] [bp-B4h]@23
  int v88; // [sp+30h] [bp-B0h]@23
  int v89; // [sp+34h] [bp-ACh]@23
  int v90; // [sp+38h] [bp-A8h]@20
  int v91; // [sp+3Ch] [bp-A4h]@20
  int v92; // [sp+40h] [bp-A0h]@20
  int v93; // [sp+44h] [bp-9Ch]@14
  int v94; // [sp+48h] [bp-98h]@14
  int v95; // [sp+4Ch] [bp-94h]@14
  int v96; // [sp+50h] [bp-90h]@9
  int v97; // [sp+54h] [bp-8Ch]@9
  int v98; // [sp+58h] [bp-88h]@9
  int v99; // [sp+5Ch] [bp-84h]@5
  int v100; // [sp+60h] [bp-80h]@9
  int v101; // [sp+64h] [bp-7Ch]@9
  char v102; // [sp+68h] [bp-78h]@2
  int v103; // [sp+70h] [bp-70h]@2
  char v104; // [sp+74h] [bp-6Ch]@3
  int v105; // [sp+78h] [bp-68h]@3
  int v106; // [sp+7Ch] [bp-64h]@3

  v2 = a1;
  v3 = a2;
  _R0 = *(_DWORD *)(a1 + 348);
  if ( _R0 )
  {
    __asm
    {
      VLDR            S0, [R0,#0x130]
      VLDR            S2, [R0,#0x134]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VSQRT.F32       S16, S0
    }
    v9 = (float *)(*(int (**)(void))(*(_DWORD *)_R0 + 52))();
    __asm { VMOV.F32        S0, #0.5 }
    v10 = *v9;
    __asm { VMUL.F32        S16, S16, S0 }
    _R0 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(v2 + 348) + 52))(*(_DWORD *)(v2 + 348));
      VLDR            S0, [R0,#4]
      VADD.F32        S18, S0, S16
    v12 = (*(int (**)(void))(**(_DWORD **)(v2 + 348) + 52))();
    __asm { VMOV            R2, S18 }
    j_BlockPos::BlockPos((BlockPos *)&v102, v10, _R2, *(float *)(v12 + 8));
    *(_QWORD *)&_R7 = *(_QWORD *)&v102;
    v16 = (Entity **)(v2 + 16);
    _R6 = v103;
  }
  else
    v18 = (*(int (**)(void))(**(_DWORD **)(v2 + 16) + 52))();
    j_BlockPos::BlockPos((int)&v104, v18);
    _R7 = *(_DWORD *)&v104;
    __asm { VMOV.F32        S16, #0.5 }
    _R6 = v106;
    _R8 = v105 - 1;
  v19 = j_Random::_genRandInt32((Entity *)((char *)*v16 + 552));
  _R0 = (*(int (**)(void))(*(_DWORD *)*v16 + 52))();
  __asm { VLDR            S18, [R0] }
  _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)*v16 + 52))(*v16);
  __asm { VLDR            S20, [R0,#4] }
  __asm
    VMOV.F32        S0, #0.5
    VMOV            S2, R7
    VMOV            S4, R8
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VLDR            S12, [R0,#8]
    VSUB.F32        S6, S0, S18
    VSUB.F32        S8, S0, S20
    VSUB.F32        S12, S0, S12
    VADD.F32        S10, S6, S2
    VMOV            S6, R6
    VADD.F32        S8, S8, S4
  v23 = v19 % 6;
    VCVT.F32.S32    S6, S6
    VMUL.F32        S10, S10, S10
    VMUL.F32        S8, S8, S8
    VADD.F32        S12, S12, S6
    VADD.F32        S8, S8, S10
    VMUL.F32        S10, S12, S12
    VMOV.F32        S12, #4.0
    VCMPE.F32       S8, S12
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
      VADD.F32        S18, S6, S0
      VADD.F32        S20, S16, S4
      VADD.F32        S22, S2, S0
    goto LABEL_106;
  v24 = (*(int (**)(void))(*(_DWORD *)*v16 + 52))();
  j_BlockPos::BlockPos((int)&v99, v24);
  if ( !v3 )
    v81 = 0;
    v29 = 0;
    v30 = 0;
    goto LABEL_19;
  v25 = v99;
  if ( v99 < _R7 )
    v81 = v3;
    v26 = (BlockSource *)j_Entity::getRegion(*v16);
    v96 = v99 + 1;
    v97 = v100;
    v98 = v101;
    if ( j_BlockSource::isEmptyBlock(v26, (const BlockPos *)&v96) )
      v27 = j_operator new(1u);
      v28 = 5;
LABEL_16:
      v29 = v27;
      *v27 = v28;
      v30 = v27 + 1;
      goto LABEL_18;
    v25 = v99;
  v81 = v3;
  if ( v25 > _R7 )
    v31 = (BlockSource *)j_Entity::getRegion(*v16);
    v93 = v99 - 1;
    v94 = v100;
    v95 = v101;
    if ( j_BlockSource::isEmptyBlock(v31, (const BlockPos *)&v93) == 1 )
      v28 = 4;
      goto LABEL_16;
  v29 = 0;
  v30 = 0;
LABEL_18:
  v32 = (int)v30;
  if ( v81 == 1 )
    goto LABEL_51;
LABEL_19:
  v33 = v100;
  if ( v100 >= _R8 )
LABEL_22:
    if ( v33 > _R8 )
      v35 = (BlockSource *)j_Entity::getRegion(*v16);
      v87 = v99;
      v88 = v100 - 1;
      v89 = v101;
      if ( j_BlockSource::isEmptyBlock(v35, (const BlockPos *)&v87) == 1 )
      {
        v40 = v30 - v29;
        if ( v30 - v29 == -1 )
          sub_21E5A04("vector::_M_emplace_back_aux");
        v41 = v30 - v29;
        if ( v30 == v29 )
          v41 = 1;
        v42 = v41 + v40;
        _CF = v41 + v40 >= v41;
        v43 = 0;
        if ( !_CF )
          v42 = -1;
        if ( v42 )
        {
          v43 = (char *)j_operator new(v42);
          v40 = v30 - v29;
        }
        v44 = (int)&v43[v40];
        v43[v40] = 0;
        if ( (char *)v32 != v29 )
          v45 = v43;
          j___aeabi_memmove_0((int)v43, (int)v29);
          v43 = v45;
        v30 = (char *)(v44 + 1);
        if ( v29 )
          v46 = v43;
          j_operator delete(v29);
          v43 = v46;
        v32 = (int)&v43[v42];
        v29 = v43;
      }
    goto LABEL_50;
  v34 = (BlockSource *)j_Entity::getRegion(*v16);
  v90 = v99;
  v91 = v100 + 1;
  v92 = v101;
  if ( !j_BlockSource::isEmptyBlock(v34, (const BlockPos *)&v90) )
    v33 = v100;
    goto LABEL_22;
  v36 = v30 - v29;
  if ( v30 - v29 == -1 )
    sub_21E5A04("vector::_M_emplace_back_aux");
  v37 = v30 - v29;
  if ( v30 == v29 )
    v37 = 1;
  v38 = v37 + v36;
  if ( v37 + v36 < v37 )
    v38 = -1;
  if ( v38 )
    v39 = (char *)j_operator new(v38);
    v36 = v30 - v29;
    v39 = 0;
  v47 = (int)&v39[v36];
  v39[v36] = 1;
  if ( (char *)v32 != v29 )
    v48 = v39;
    j___aeabi_memmove_0((int)v39, (int)v29);
    v39 = v48;
  v30 = (char *)(v47 + 1);
  if ( v29 )
    v49 = v39;
    j_operator delete(v29);
    v39 = v49;
  v32 = (int)&v39[v38];
  v29 = v39;
LABEL_50:
  if ( v81 != 2 )
LABEL_51:
    v50 = v101;
    if ( v101 < _R6 )
      v51 = (BlockSource *)j_Entity::getRegion(*v16);
      LODWORD(v52) = v99;
      HIDWORD(v52) = v100;
      v85 = v52;
      v86 = v101 + 1;
      if ( j_BlockSource::isEmptyBlock(v51, (const BlockPos *)&v85) )
        v53 = (char *)v32;
        if ( v30 != (char *)v32 )
          *v30++ = 3;
          goto LABEL_82;
        v56 = v30 - v29;
        v57 = v30 - v29;
          v57 = 1;
        v58 = v57 + v56;
        if ( v57 + v56 < v57 )
          v58 = -1;
        if ( v58 )
          v59 = v32;
          v60 = (char *)j_operator new(v58);
          v53 = (char *)v59;
          v61 = 3;
        else
          v60 = 0;
LABEL_77:
        v60[v56] = v61;
        if ( v53 != v29 )
          j___aeabi_memmove_0((int)v60, (int)v29);
        v30 = &v60[v56 + 1];
        v29 = v60;
        goto LABEL_82;
      v50 = v101;
    if ( v50 <= _R6 )
      goto LABEL_82;
    v54 = (BlockSource *)j_Entity::getRegion(*v16);
    LODWORD(v55) = v99;
    HIDWORD(v55) = v100;
    v83 = v55;
    v84 = v101 - 1;
    if ( j_BlockSource::isEmptyBlock(v54, (const BlockPos *)&v83) != 1 )
    v53 = (char *)v32;
    if ( v30 != (char *)v32 )
      *v30++ = 2;
    v56 = v30 - v29;
    if ( v30 - v29 == -1 )
      sub_21E5A04("vector::_M_emplace_back_aux");
    v62 = v30 - v29;
    if ( v30 == v29 )
      v62 = 1;
    v63 = v62 + v56;
    if ( v62 + v56 < v62 )
      v63 = -1;
    if ( v63 )
      v64 = v32;
      v60 = (char *)j_operator new(v63);
      v53 = (char *)v64;
    else
      v60 = 0;
    v61 = 2;
    goto LABEL_77;
LABEL_82:
  if ( v29 == v30 )
    v66 = v29;
    v67 = 5;
    while ( 1 )
      v68 = (BlockSource *)j_Entity::getRegion(*v16);
      j_BlockPos::relative((BlockPos *)&v82, (int)&v99, v23, 1);
      v69 = j_BlockSource::isEmptyBlock(v68, (const BlockPos *)&v82);
      if ( v67 < 1 || (v69 ^ 1) != 1 )
        break;
      --v67;
      v23 = j_Random::_genRandInt32((Entity *)((char *)*v16 + 552)) % 6;
      v65 = 0;
      v65 = j_Random::_genRandInt32((Entity *)((char *)*v16 + 552)) % (v30 - v29);
    v23 = (unsigned __int8)v29[v65];
    VMOV.F32        S22, #1.0
    VLDR            S16, =0.0
    VMOV.F32        S24, #-1.0
    VMOV.F32        S18, S16
  if ( _ZF )
    __asm { VMOVEQ.F32      S18, S22 }
  if ( v23 == 4 )
    __asm { VMOVEQ.F32      S18, S24 }
  __asm { VLDR            S20, [R0] }
  _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v16 + 52))(*v16);
  __asm { VMOV.F32        S26, S16 }
    __asm { VMOVEQ.F32      S26, S22 }
  if ( !v23 )
    __asm { VMOVEQ.F32      S26, S24 }
  __asm { VLDR            S28, [R0,#4] }
  if ( v23 == 3 )
    __asm { VMOVEQ.F32      S16, S22 }
  if ( v23 == 2 )
    __asm { VMOVEQ.F32      S16, S24 }
  __asm { VLDR            S24, [R0,#8] }
  if ( !_ZF )
    j_operator delete(v66);
    VADD.F32        S22, S20, S18
    VADD.F32        S20, S28, S26
    VADD.F32        S18, S24, S16
LABEL_106:
  if ( (v23 & 0xFE) == 4 )
    v73 = 0;
  else if ( v23 <= 1 )
    v73 = 1;
    v73 = 2;
  *(_DWORD *)(v2 + 376) = v73;
  __asm { VLDR            S16, [R0] }
    VSUB.F32        S16, S22, S16
    VLDR            S0, [R0,#4]
    VSUB.F32        S20, S20, S0
    VLDR            S0, [R0,#8]
    VMUL.F32        S2, S16, S16
    VMUL.F32        S4, S20, S20
    VSUB.F32        S18, S18, S0
    VADD.F32        S0, S4, S2
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = j_mce::Math::sqrt(_R0, v78);
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
      VLDR            S2, =0.0
      VMOV.F32        S4, S2
      VMOV.F32        S0, S2
      VDIV.F32        S2, S18, S0
      VDIV.F32        S4, S20, S0
      VDIV.F32        S6, S16, S0
      VLDR            S8, =0.15
      VMUL.F32        S0, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S2, S6, S8
    VSTR            S2, [R11,#0x168]
    VSTR            S4, [R11,#0x16C]
    VSTR            S0, [R11,#0x170]
  result = 10 * (j_Random::_genRandInt32((Random *)(*(_DWORD *)(v2 + 16) + 552)) % 5) + 10;
  *(_DWORD *)(v2 + 372) = result;
  return result;
}


int __fastcall ProjectileComponent::setKnockbackForce(int result, float a2)
{
  *(float *)(result + 296) = a2;
  return result;
}


unsigned int __fastcall ProjectileComponent::getShooterAngle(ProjectileComponent *this, Mob *a2, int a3)
{
  ProjectileComponent *v3; // r4@1
  int v4; // r5@1
  float v12; // r1@1
  float v15; // r1@1
  float v18; // r1@1
  float v21; // r1@1
  int v22; // r6@1
  float v24; // r1@1
  unsigned int result; // r0@1
  float v27; // [sp+0h] [bp-58h]@1
  float v28; // [sp+8h] [bp-50h]@1
  float v29; // [sp+10h] [bp-48h]@1
  char v30; // [sp+18h] [bp-40h]@1
  char v32; // [sp+20h] [bp-38h]@1

  v3 = this;
  v4 = a3;
  _R9 = a2;
  j_Entity::getRotation((Entity *)&v32, a3);
  __asm { VLDR            S0, [SP,#0x58+var_34] }
  _R0 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  }
  _R8 = j_mce::Math::cos(_R0, v12);
  j_Entity::getRotation((Entity *)&v30, v4);
    VLDR            S0, [SP,#0x58+var_3C]
    VMUL.F32        S0, S0, S16
  _R10 = j_mce::Math::sin(_R0, v15);
  j_Entity::getRotation((Entity *)&v29, v4);
    VLDR            S0, [SP,#0x58+var_48]
  _R7 = j_mce::Math::cos(_R0, v18);
  j_Entity::getRotation((Entity *)&v28, v4);
    VLDR            S0, [R9,#0xD0]
    VLDR            S2, [SP,#0x58+var_50]
    VADD.F32        S0, S0, S2
  v22 = j_mce::Math::sin(_R0, v21);
  j_Entity::getRotation((Entity *)&v27, v4);
    VLDR            S0, [SP,#0x58+var_58]
    VMOV            S2, R7
    VMOV            S16, R8
    VMOV            S0, R10
    VNMUL.F32       S18, S0, S2
  _R0 = j_mce::Math::cos(_R0, v24);
    VMOV            S0, R0
    VSTR            S18, [R4]
  result = v22 ^ 0x80000000;
  *((_DWORD *)v3 + 1) = v22 ^ 0x80000000;
    VSTR            S0, [R4,#8]
  return result;
}


int __fastcall ProjectileComponent::onHit(ProjectileComponent *this, const HitResult *a2)
{
  ProjectileComponent *v2; // r4@1
  char v3; // r0@1
  int v4; // r4@1
  int v5; // r2@1
  Level *v6; // r8@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r0@1
  __int64 v10; // r6@1
  int v11; // t1@2
  int result; // r0@3

  v2 = this;
  v3 = *((_BYTE *)a2 + 4);
  *((_DWORD *)v2 + 27) = *(_DWORD *)a2;
  v4 = (int)v2 + 108;
  *(_BYTE *)(v4 + 4) = v3;
  *(_DWORD *)(v4 + 8) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(v4 + 12) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(v4 + 16) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(v4 + 20) = *((_DWORD *)a2 + 5);
  *(_DWORD *)(v4 + 24) = *((_DWORD *)a2 + 6);
  *(_DWORD *)(v4 + 28) = *((_DWORD *)a2 + 7);
  v5 = *((_DWORD *)a2 + 8);
  *(_WORD *)(v4 + 36) = *((_WORD *)a2 + 18);
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 40) = *((_DWORD *)a2 + 10);
  *(_DWORD *)(v4 + 44) = *((_DWORD *)a2 + 11);
  *(_DWORD *)(v4 + 48) = *((_DWORD *)a2 + 12);
  *(_DWORD *)(v4 + 52) = *((_DWORD *)a2 + 13);
  *(_DWORD *)(v4 + 56) = *((_DWORD *)a2 + 14);
  *(_DWORD *)(v4 + 60) = *((_DWORD *)a2 + 15);
  *(_BYTE *)(v4 + 64) = *((_BYTE *)a2 + 64);
  v6 = (Level *)j_Entity::getLevel(*(Entity **)(v4 - 92));
  v7 = j_Entity::getRegion(*(Entity **)(v4 - 92));
  v8 = *(_BYTE *)(v4 + 212);
  v9 = (*(int (**)(void))(**(_DWORD **)(v4 - 92) + 52))();
  j_Level::broadcastSoundEvent(v6, v7, v8, v9, -1, 1, 0, 0);
  v10 = *(_QWORD *)(v4 + 108);
  while ( HIDWORD(v10) != (_DWORD)v10 )
  {
    v11 = *(_DWORD *)v10;
    LODWORD(v10) = v10 + 4;
    (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  }
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 1 )
    result = j_j_j__ZN6Entity23setChainedDamageEffectsEb_0(*(Entity **)(v4 + 32), 0);
  return result;
}


int __fastcall ProjectileComponent::getOffset(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)(a2 + 188);
  v3 = *(_DWORD *)(a2 + 196);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  return result;
}


int __fastcall ProjectileComponent::getUncertainty(int _R0, int _R1)
{
  int result; // r0@3

  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R0,#0x110]
    VLDR            S2, [R0,#0x10C]
    VMUL.F32        S0, S4, S0
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


void __fastcall ProjectileComponent::addAdditionalSaveData(ProjectileComponent *this, CompoundTag *a2)
{
  ProjectileComponent::addAdditionalSaveData(this, a2);
}


int __fastcall ProjectileComponent::setShakeTime(int result, int a2)
{
  *(_DWORD *)(result + 56) = a2;
  return result;
}


void __fastcall ProjectileComponent::readAdditionalSaveData(ProjectileComponent *this, const CompoundTag *a2)
{
  ProjectileComponent::readAdditionalSaveData(this, a2);
}


int __fastcall ProjectileComponent::setShouldBounce(int result, bool a2)
{
  *(_BYTE *)(result + 380) = a2;
  return result;
}


char *__fastcall ProjectileComponent::getApexPos(ProjectileComponent *this)
{
  return (char *)this + 32;
}


void __fastcall ProjectileComponent::addAdditionalSaveData(ProjectileComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  ProjectileComponent *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "TargetID");
  j_CompoundTag::putInt64((int)v2, (const void **)&v7, *((_QWORD *)v3 + 44), *((_QWORD *)v3 + 44) >> 32);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall ProjectileComponent::setInGround(ProjectileComponent *this, bool a2)
{
  int result; // r0@1

  *(_BYTE *)this = a2;
  result = *((_DWORD *)this + 4);
  *(_BYTE *)(result + 216) = a2;
  return result;
}


int __fastcall ProjectileComponent::setSplashRange(int result, float a2)
{
  *(float *)(result + 288) = a2;
  return result;
}


unsigned int __fastcall ProjectileComponent::tick(ProjectileComponent *this)
{
  unsigned int v2; // r0@2
  unsigned int result; // r0@3
  int v4; // r0@6
  unsigned __int64 *v5; // r5@8
  int v6; // r0@8
  int v7; // r0@10
  float v8; // r1@10
  int v10; // r2@10
  int v16; // r5@14
  int v19; // t1@14
  int v21; // t1@14
  BlockSource *v22; // r8@15
  int v23; // r0@16
  Block *v24; // r7@18
  int v25; // ST00_4@20
  int v26; // r1@20
  int v27; // r2@20
  int v28; // r3@20
  float v30; // r2@21
  float v31; // r3@21
  int v32; // r1@21
  int v33; // r1@21
  int v34; // r5@21
  char *v35; // r0@21
  int v36; // r5@21
  int v37; // r7@21
  HeavyBlock *v38; // r5@24
  int v39; // ST00_4@26
  int v40; // r0@29
  Level *v41; // r0@31
  char *v42; // r0@31
  Level *v45; // r0@31
  char *v46; // r0@31
  Level *v49; // r0@31
  char *v50; // r0@31
  int v53; // r1@33
  int v54; // r2@33
  unsigned int v55; // r8@34
  int v56; // r5@35
  char *v57; // r7@36
  char *v58; // r7@39
  int v59; // r7@40
  int v60; // r0@41
  char *v61; // r7@41
  const Vec3 *v62; // r7@42
  const Vec3 *v63; // r9@42
  signed int v64; // r0@45
  signed int v65; // r1@45
  int v67; // r0@49
  int v68; // r0@51
  int v69; // r0@69
  int v70; // r0@69
  int v71; // r0@72
  int v72; // r0@73
  int v73; // [sp+20h] [bp-218h]@34
  unsigned __int64 *v74; // [sp+24h] [bp-214h]@21
  int v75; // [sp+28h] [bp-210h]@69
  char v76; // [sp+2Ch] [bp-20Ch]@69
  int v77; // [sp+30h] [bp-208h]@69
  int v78; // [sp+34h] [bp-204h]@69
  int v79; // [sp+38h] [bp-200h]@69
  int v80; // [sp+3Ch] [bp-1FCh]@69
  int v81; // [sp+40h] [bp-1F8h]@69
  int v82; // [sp+44h] [bp-1F4h]@69
  int v83; // [sp+48h] [bp-1F0h]@69
  unsigned __int16 v84; // [sp+4Ch] [bp-1ECh]@69
  int v85; // [sp+50h] [bp-1E8h]@69
  int v86; // [sp+54h] [bp-1E4h]@69
  int v87; // [sp+58h] [bp-1E0h]@69
  int v88; // [sp+5Ch] [bp-1DCh]@69
  int v89; // [sp+60h] [bp-1D8h]@69
  int v90; // [sp+64h] [bp-1D4h]@69
  char v91; // [sp+68h] [bp-1D0h]@69
  int v92; // [sp+70h] [bp-1C8h]@60
  signed int v93; // [sp+74h] [bp-1C4h]@60
  int v94; // [sp+78h] [bp-1C0h]@60
  int v95; // [sp+7Ch] [bp-1BCh]@55
  signed int v96; // [sp+80h] [bp-1B8h]@55
  int v97; // [sp+84h] [bp-1B4h]@55
  int v98; // [sp+88h] [bp-1B0h]@26
  float v99; // [sp+9Ch] [bp-19Ch]@45
  int v102; // [sp+CCh] [bp-16Ch]@43
  signed int v103; // [sp+D0h] [bp-168h]@43
  int v104; // [sp+D4h] [bp-164h]@43
  __int64 v105; // [sp+D8h] [bp-160h]@41
  __int64 v106; // [sp+E0h] [bp-158h]@39
  __int64 v107; // [sp+E8h] [bp-150h]@36
  int v108; // [sp+F4h] [bp-144h]@21
  signed int v109; // [sp+F8h] [bp-140h]@21
  int v110; // [sp+FCh] [bp-13Ch]@21
  char v111; // [sp+100h] [bp-138h]@21
  char v112; // [sp+11Ch] [bp-11Ch]@21
  int v113; // [sp+138h] [bp-100h]@21
  char v114; // [sp+13Ch] [bp-FCh]@21
  int v115; // [sp+140h] [bp-F8h]@21
  int v116; // [sp+144h] [bp-F4h]@21
  int v117; // [sp+148h] [bp-F0h]@21
  int v118; // [sp+14Ch] [bp-ECh]@21
  int v119; // [sp+150h] [bp-E8h]@21
  int v120; // [sp+154h] [bp-E4h]@21
  int v121; // [sp+158h] [bp-E0h]@21
  __int16 v122; // [sp+15Ch] [bp-DCh]@21
  int v123; // [sp+160h] [bp-D8h]@21
  int v124; // [sp+164h] [bp-D4h]@21
  int v125; // [sp+168h] [bp-D0h]@21
  int v126; // [sp+16Ch] [bp-CCh]@21
  int v127; // [sp+170h] [bp-C8h]@21
  int v128; // [sp+174h] [bp-C4h]@21
  char v129; // [sp+178h] [bp-C0h]@21
  float v130; // [sp+17Ch] [bp-BCh]@21
  float v131; // [sp+188h] [bp-B0h]@21
  float v132; // [sp+18Ch] [bp-ACh]@21
  float v133; // [sp+190h] [bp-A8h]@21
  int v134; // [sp+194h] [bp-A4h]@67
  signed int v135; // [sp+198h] [bp-A0h]@67
  int v136; // [sp+19Ch] [bp-9Ch]@67
  int v137; // [sp+1A0h] [bp-98h]@67
  int v138; // [sp+1A4h] [bp-94h]@67
  int v139; // [sp+1A8h] [bp-90h]@67
  int v140; // [sp+1ACh] [bp-8Ch]@67
  int v141; // [sp+1B0h] [bp-88h]@67
  int v142; // [sp+1B4h] [bp-84h]@67
  char v143; // [sp+1B8h] [bp-80h]@67
  int v144; // [sp+1BCh] [bp-7Ch]@43
  int v145; // [sp+1C0h] [bp-78h]@67
  int v146; // [sp+1C4h] [bp-74h]@67
  int v147; // [sp+1C8h] [bp-70h]@67
  int v148; // [sp+1CCh] [bp-6Ch]@67
  int v149; // [sp+1D0h] [bp-68h]@67
  char v150; // [sp+1D4h] [bp-64h]@67
  char v151; // [sp+1D8h] [bp-60h]@28
  char v152; // [sp+1F4h] [bp-44h]@20

  _R4 = this;
  if ( *((_BYTE *)this + 388) )
  {
    v2 = *((_DWORD *)this + 96);
    if ( v2 <= 4 )
    {
      result = v2 + 1;
      *((_DWORD *)_R4 + 96) = result;
      return result;
    }
    *((_DWORD *)_R4 + 96) = 0;
    j_ProjectileComponent::onHit(_R4, (ProjectileComponent *)((char *)_R4 + 392));
    *((_BYTE *)_R4 + 388) = 0;
  }
  if ( !*((_BYTE *)_R4 + 44) )
    v4 = (*(int (**)(void))(**((_DWORD **)_R4 + 4) + 52))();
    *((_DWORD *)_R4 + 8) = *(_DWORD *)v4;
    *((_DWORD *)_R4 + 9) = *(_DWORD *)(v4 + 4);
    *((_DWORD *)_R4 + 10) = *(_DWORD *)(v4 + 8);
  if ( ((unsigned int)*((_QWORD *)_R4 + 42) & (unsigned int)(*((_QWORD *)_R4 + 42) >> 32)) != -1 )
    v5 = (unsigned __int64 *)((char *)_R4 + 336);
    v6 = j_Entity::getLevel(*((Entity **)_R4 + 4));
    if ( j_Level::fetchEntity(v6, 0, *v5, *v5 >> 32, 0) )
      *((_QWORD *)_R4 + 44) = *v5;
      *(_DWORD *)v5 = -1;
      *((_DWORD *)_R4 + 85) = -1;
      j_ProjectileComponent::selectNextMoveDirection((int)_R4, -1);
  v7 = j_Entity::getLevel(*((Entity **)_R4 + 4));
  *((_DWORD *)_R4 + 87) = j_Level::fetchEntity(v7, 0, *((_QWORD *)_R4 + 44), *((_QWORD *)_R4 + 44) >> 32, 0);
  v8 = 6.8056e38/*NaN*/;
  _R0 = *((_DWORD *)_R4 + 4);
  v10 = *(_DWORD *)(_R0 + 128);
  _ZF = (v10 & 0x7FFFFFFF) == 0;
  if ( !(v10 & 0x7FFFFFFF) )
    _ZF = (*(_DWORD *)(_R0 + 132) & 0x7FFFFFFF) == 0;
  if ( _ZF || (LODWORD(v8) = *((_BYTE *)_R4 + 328)) != 0 )
    __asm
      VLDR            S0, [R0,#0x6C]
      VLDR            S2, [R0,#0x74]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    v16 = j_mce::Math::sqrt(_R0, v8);
    _R0 = j_atan2f(*(float *)(*((_DWORD *)_R4 + 4) + 108), *(float *)(*((_DWORD *)_R4 + 4) + 116));
    __asm { VMOV            S0, R0 }
    _R1 = &mce::Math::RADDEG;
      VLDR            S16, [R1]
      VMUL.F32        S0, S16, S0
      VSTR            S0, [R6,#0x7C]
    v19 = *((_DWORD *)_R4 + 4);
    __asm { VSTR            S0, [R0,#0x84] }
    _R0 = j_atan2f(*(float *)(*((_DWORD *)_R4 + 4) + 112), *(float *)&v16);
      VMOV            S0, R0
      VSTR            S0, [R6,#0x78]
    v21 = *((_DWORD *)_R4 + 4);
    __asm { VSTR            S0, [R0,#0x80] }
    _R0 = *((_DWORD *)_R4 + 4);
  v22 = (BlockSource *)j_Entity::getRegion((Entity *)_R0);
  if ( *((_DWORD *)_R4 + 14) >= 1 )
    v23 = j_Entity::getLevel(*((Entity **)_R4 + 4));
    j_Level::broadcastEntityEvent(v23, *((_DWORD *)_R4 + 4), 39, *((_DWORD *)_R4 + 14));
    *((_DWORD *)_R4 + 14) = 0;
  if ( *(_BYTE *)_R4 )
    *(_DWORD *)(*((_DWORD *)_R4 + 4) + 116) = 0;
    *(_DWORD *)(*((_DWORD *)_R4 + 4) + 112) = 0;
    *(_DWORD *)(*((_DWORD *)_R4 + 4) + 108) = 0;
    v24 = (Block *)j_BlockSource::getBlock(v22, (ProjectileComponent *)((char *)_R4 + 76));
    if ( j_Block::isType(v24, (const Block *)Block::mTNT) == 1 )
      if ( (*(int (**)(void))(**((_DWORD **)_R4 + 4) + 320))() == 1 )
      {
        v25 = *((_DWORD *)_R4 + 4);
        (*(void (__cdecl **)(_DWORD))(*(_DWORD *)Block::mTNT + 240))(Block::mTNT);
        v26 = *((_DWORD *)_R4 + 19);
        v27 = *((_DWORD *)_R4 + 20);
        v28 = *((_DWORD *)_R4 + 21);
        v152 = BlockID::AIR;
        j_BlockSource::setBlock((int)v22, v26, v27, v28, &v152, 3);
      }
    else if ( j_Block::isHeavy(v24) == 1 )
      v38 = (HeavyBlock *)j_BlockSource::getBlock(v22, (ProjectileComponent *)((char *)_R4 + 76));
      if ( (*(int (**)(void))(*(_DWORD *)v38 + 516))() == 1 )
        j_HeavyBlock::triggerFallCheck(v38, v22, (ProjectileComponent *)((char *)_R4 + 76));
    j_AABB::AABB((AABB *)&v98);
    v39 = *((_DWORD *)_R4 + 4);
    if ( (*(int (__fastcall **)(Block *, int *, BlockSource *, char *))(*(_DWORD *)v24 + 12))(
           v24,
           &v98,
           v22,
           (char *)_R4 + 76) != 1
      || j_AABB::isEmpty((AABB *)&v98)
      || (j_AABB::AABB((int)&v151, (int)_R4 + 88, (int)_R4 + 88),
          !j_AABB::intersectsInner((AABB *)&v98, (const AABB *)&v151)) )
      *(_BYTE *)_R4 = 0;
      *(_BYTE *)(*((_DWORD *)_R4 + 4) + 216) = 0;
      v41 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 4));
      v42 = j_Level::getRandom(v41);
      _R0 = j_Random::_genRandInt32((Random *)v42);
      __asm
        VMOV            S0, R0
        VLDR            D8, =2.32830644e-10
        VLDR            S18, =0.2
        VCVT.F64.U32    D0, S0
      _R0 = *((_DWORD *)_R4 + 4);
        VMUL.F64        D0, D0, D8
        VLDR            S2, [R0,#0x6C]
        VCVT.F32.F64    S0, D0
        VMUL.F32        S2, S2, S18
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R0,#0x6C]
      v45 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 4));
      v46 = j_Level::getRandom(v45);
      _R0 = j_Random::_genRandInt32((Random *)v46);
        VLDR            S2, [R0,#0x70]
        VSTR            S0, [R0,#0x70]
      v49 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 4));
      v50 = j_Level::getRandom(v49);
      _R0 = j_Random::_genRandInt32((Random *)v50);
        VLDR            S2, [R0,#0x74]
        VSTR            S0, [R0,#0x74]
      *((_DWORD *)_R4 + 12) = 0;
      *((_DWORD *)_R4 + 13) = 0;
    else
      v40 = *((_DWORD *)_R4 + 12) + 1;
      *((_DWORD *)_R4 + 12) = v40;
      if ( v40 == 1200 )
        (*(void (__cdecl **)(_DWORD))(**((_DWORD **)_R4 + 4) + 44))(*((_DWORD *)_R4 + 4));
      else
        j_AABB::AABB((int)&v144, *((_DWORD *)_R4 + 4) + 72, *((_DWORD *)_R4 + 4) + 72);
        v134 = 1040187392;
        v135 = 1040187392;
        v136 = 1040187392;
        j_AABB::grow((AABB *)&v137, (const Vec3 *)&v144, (int)&v134);
        v144 = v137;
        v145 = v138;
        v146 = v139;
        v147 = v140;
        v148 = v141;
        v149 = v142;
        v150 = v143;
        (*(void (__cdecl **)(_DWORD))(**((_DWORD **)_R4 + 4) + 88))(*((_DWORD *)_R4 + 4));
  else
    ++*((_DWORD *)_R4 + 13);
    v30 = *(float *)(_R0 + 76);
    v31 = *(float *)(_R0 + 80);
    v131 = *(float *)(_R0 + 72);
    v132 = v30;
    v133 = v31;
      VLDR            S0, [R0,#0x4C]
      VLDR            S8, [R0,#0x70]
      VLDR            S2, [R0,#0x50]
      VLDR            S10, [R0,#0x74]
      VADD.F32        S0, S8, S0
      VLDR            S4, [R0,#0x48]
      VLDR            S6, [R0,#0x6C]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S6, S4
      VSTR            S4, [SP,#0x238+var_BC]
      VSTR            S0, [SP,#0x238+var_B8]
      VSTR            S2, [SP,#0x238+var_B4]
    j_BlockSource::clip((BlockSource *)&v113, v22, (const Vec3 *)&v131, (int)&v130, 0, 1, 200, 1);
    v32 = v113;
    *((_BYTE *)_R4 + 112) = v114;
    *((_DWORD *)_R4 + 27) = v32;
    *((_DWORD *)_R4 + 29) = v115;
    *((_DWORD *)_R4 + 30) = v116;
    *((_DWORD *)_R4 + 31) = v117;
    *((_DWORD *)_R4 + 32) = v118;
    *((_DWORD *)_R4 + 33) = v119;
    *((_DWORD *)_R4 + 34) = v120;
    v33 = v121;
    *((_WORD *)_R4 + 72) = v122;
    *((_DWORD *)_R4 + 35) = v33;
    *((_DWORD *)_R4 + 37) = v123;
    *((_DWORD *)_R4 + 38) = v124;
    *((_DWORD *)_R4 + 39) = v125;
    *((_DWORD *)_R4 + 40) = v126;
    *((_DWORD *)_R4 + 41) = v127;
    *((_DWORD *)_R4 + 42) = v128;
    *((_BYTE *)_R4 + 172) = v129;
    v34 = *((_DWORD *)_R4 + 4);
    j_AABB::expanded((AABB *)&v111, (const Vec3 *)(v34 + 264), v34 + 108);
    v108 = 1065353216;
    v109 = 1065353216;
    v110 = 1065353216;
    j_AABB::grow((AABB *)&v112, (const Vec3 *)&v111, (int)&v108);
    v35 = j_BlockSource::fetchEntities(v22, (Entity *)v34, (const AABB *)&v112);
    v36 = (int)_R4 + 140;
    v37 = (int)_R4 + 108;
    v74 = (unsigned __int64 *)v35;
    if ( (*((_DWORD *)_R4 + 27) & 0xFFFFFFFE) == 2 )
      __asm { VLDR            S16, =0.0 }
        VLDR            S0, [SP,#0x238+var_B0]
        VLDR            S6, [R4,#0x80]
        VLDR            S2, [SP,#0x238+var_AC]
        VLDR            S8, [R4,#0x84]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [SP,#0x238+var_A8]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [R4,#0x88]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VSQRT.F32       S16, S0
    v53 = *(_QWORD *)v35 >> 32;
    v54 = *(_QWORD *)v35;
    if ( v53 != v54 )
      __asm { VLDR            S18, =0.0 }
      v55 = 0;
      v73 = 0;
      do
        v56 = *(_DWORD *)(v54 + 4 * v55);
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v56 + 292))(*(_DWORD *)(v54 + 4 * v55)) == 1 )
        {
          v57 = j_Entity::getUniqueID((Entity *)v56);
          (*(void (__fastcall **)(__int64 *))(**((_DWORD **)_R4 + 4) + 500))(&v107);
          if ( *(_QWORD *)v57 ^ v107 || *((_DWORD *)_R4 + 13) >= 5 )
          {
            if ( *((_BYTE *)_R4 + 324)
              || (v58 = j_Entity::getUniqueID((Entity *)v56),
                  j_Entity::getOwnerId((Entity *)&v106, *((_DWORD *)_R4 + 4)),
                  *(_QWORD *)v58 ^ v106) )
            {
              v59 = (signed int)((*(_QWORD *)(v56 + 476) >> 32) - *(_QWORD *)(v56 + 476)) >> 2;
              if ( v59 <= j_Entity::getControllingSeat((Entity *)v56)
                || (v60 = j_Entity::getControllingSeat((Entity *)v56),
                    v61 = j_Entity::getUniqueID(*(Entity **)(*(_DWORD *)(v56 + 476) + 4 * v60)),
                    j_Entity::getOwnerId((Entity *)&v105, *((_DWORD *)_R4 + 4)),
                    *(_QWORD *)v61 ^ v105) )
              {
                v62 = (const Vec3 *)(*(_QWORD *)(v56 + 292) >> 32);
                v63 = (const Vec3 *)*(_QWORD *)(v56 + 292);
                if ( v62 == v63 )
                {
                  v102 = 1050253722;
                  v103 = 1050253722;
                  v104 = 1050253722;
                  j_AABB::grow((AABB *)&v144, (const Vec3 *)(v56 + 264), (int)&v102);
                  if ( j_AABB::contains((AABB *)&v144, (const Vec3 *)&v131) )
                  {
                    v53 = v56;
                    v36 = (int)_R4 + 140;
                    v37 = (int)_R4 + 108;
                    goto LABEL_69;
                  }
                  j_AABB::clip((AABB *)&v98, (const Vec3 *)&v144, (const Vec3 *)&v131, (int)&v130);
                  if ( (v98 & 0xFFFFFFFE) != 2 )
                    __asm { VLDR            S0, [SP,#0x238+var_B0] }
                    v64 = 0;
                    __asm { VLDR            S6, [SP,#0x238+var_19C] }
                    v65 = 0;
                    __asm
                    {
                      VLDR            S2, [SP,#0x238+var_AC]
                      VLDR            S8, [SP,#0x238+var_198]
                      VSUB.F32        S0, S6, S0
                      VLDR            S4, [SP,#0x238+var_A8]
                      VSUB.F32        S2, S8, S2
                      VLDR            S10, [SP,#0x238+var_194]
                      VSUB.F32        S4, S10, S4
                      VMUL.F32        S0, S0, S0
                      VMUL.F32        S2, S2, S2
                      VMUL.F32        S4, S4, S4
                      VADD.F32        S0, S2, S0
                      VADD.F32        S0, S0, S4
                      VSQRT.F32       S0, S0
                      VCMPE.F32       S0, S16
                      VMRS            APSR_nzcv, FPSCR
                      VCMPE.F32       S16, #0.0
                    }
                    if ( _NF ^ _VF )
                      v64 = 1;
                    __asm { VMRS            APSR_nzcv, FPSCR }
                    if ( _ZF )
                      v65 = 1;
                    v67 = v64 | v65;
                    _ZF = v67 == 0;
                    if ( v67 )
                      __asm { VMOVNE.F32      S16, S0 }
                    v68 = v73;
                    if ( !_ZF )
                      v68 = v56;
                    v73 = v68;
                }
                else if ( v63 != v62 )
                  while ( 1 )
                    v95 = 1050253722;
                    v96 = 1050253722;
                    v97 = 1050253722;
                    j_AABB::grow((AABB *)&v144, v63, (int)&v95);
                    if ( j_AABB::contains((AABB *)&v144, (const Vec3 *)&v131) )
                      break;
                    j_AABB::clip((AABB *)&v98, (const Vec3 *)&v144, (const Vec3 *)&v131, (int)&v130);
                    if ( (v98 & 0xFFFFFFFE) != 2 )
                      __asm
                      {
                        VLDR            S0, [SP,#0x238+var_B0]
                        VCMPE.F32       S16, #0.0
                        VLDR            S6, [SP,#0x238+var_19C]
                        VLDR            S2, [SP,#0x238+var_AC]
                        VLDR            S8, [SP,#0x238+var_198]
                        VSUB.F32        S0, S6, S0
                        VLDR            S4, [SP,#0x238+var_A8]
                        VSUB.F32        S2, S8, S2
                        VLDR            S10, [SP,#0x238+var_194]
                        VMRS            APSR_nzcv, FPSCR
                        VSUB.F32        S4, S10, S4
                        VMUL.F32        S0, S0, S0
                        VMUL.F32        S2, S2, S2
                        VMUL.F32        S4, S4, S4
                        VADD.F32        S0, S2, S0
                        VADD.F32        S0, S0, S4
                        VSQRT.F32       S20, S0
                      }
                      if ( _ZF )
                        goto LABEL_83;
                        VCMPE.F32       S20, S16
                      if ( _NF ^ _VF )
LABEL_83:
                        v92 = 1050589266;
                        v93 = 1050589266;
                        v94 = 1050589266;
                        j_Entity::setLastHitBB((Entity *)v56, (const Vec3 *)&v99, (const Vec3 *)&v92);
                        __asm { VMOV.F32        S16, S20 }
                        v73 = v56;
                    v63 = (const Vec3 *)((char *)v63 + 28);
                    if ( v62 == v63 )
                      goto LABEL_64;
                  __asm { VMOV.F32        S16, S18 }
                  v73 = v56;
              }
            }
          }
        }
LABEL_64:
        ++v55;
        v54 = *v74;
      while ( v55 < (signed int)((*v74 >> 32) - v54) >> 2 );
      v53 = v73;
      v36 = (int)_R4 + 140;
      v37 = (int)_R4 + 108;
      if ( !v73 )
        goto LABEL_70;
LABEL_69:
      j_HitResult::HitResult((int)&v75, v53);
      v69 = v75;
      *(_BYTE *)(v37 + 4) = v76;
      *(_DWORD *)v37 = v69;
      *((_DWORD *)_R4 + 29) = v77;
      *((_DWORD *)_R4 + 30) = v78;
      *((_DWORD *)_R4 + 31) = v79;
      *((_DWORD *)_R4 + 32) = v80;
      *((_DWORD *)_R4 + 33) = v81;
      *((_DWORD *)_R4 + 34) = v82;
      v70 = v83;
      v53 = v84;
      *(_WORD *)(v36 + 4) = v84;
      *(_DWORD *)v36 = v70;
      *((_DWORD *)_R4 + 37) = v85;
      *((_DWORD *)_R4 + 38) = v86;
      *((_DWORD *)_R4 + 39) = v87;
      *((_DWORD *)_R4 + 40) = v88;
      *((_DWORD *)_R4 + 41) = v89;
      *((_DWORD *)_R4 + 42) = v90;
      *((_BYTE *)_R4 + 172) = v91;
LABEL_70:
    if ( *((_BYTE *)_R4 + 325)
      && *(_DWORD *)v37 == 1
      && (v71 = (*(int (**)(void))(**(_DWORD **)v36 + 488))(), v53 = 319, v71 == 319) )
      v72 = *(_DWORD *)v37;
      *((_BYTE *)_R4 + 396) = *(_BYTE *)(v37 + 4);
      *((_DWORD *)_R4 + 98) = v72;
      *((_DWORD *)_R4 + 100) = *((_DWORD *)_R4 + 29);
      *((_DWORD *)_R4 + 101) = *((_DWORD *)_R4 + 30);
      *((_DWORD *)_R4 + 102) = *((_DWORD *)_R4 + 31);
      *((_DWORD *)_R4 + 103) = *((_DWORD *)_R4 + 32);
      *((_DWORD *)_R4 + 104) = *((_DWORD *)_R4 + 33);
      *((_DWORD *)_R4 + 105) = *((_DWORD *)_R4 + 34);
      v53 = *(_DWORD *)v36;
      *((_WORD *)_R4 + 214) = *(_WORD *)(v36 + 4);
      *((_DWORD *)_R4 + 106) = v53;
      *((_DWORD *)_R4 + 108) = *((_DWORD *)_R4 + 37);
      *((_DWORD *)_R4 + 109) = *((_DWORD *)_R4 + 38);
      *((_DWORD *)_R4 + 110) = *((_DWORD *)_R4 + 39);
      *((_DWORD *)_R4 + 111) = *((_DWORD *)_R4 + 40);
      *((_DWORD *)_R4 + 112) = *((_DWORD *)_R4 + 41);
      *((_DWORD *)_R4 + 113) = *((_DWORD *)_R4 + 42);
      *((_BYTE *)_R4 + 456) = *((_BYTE *)_R4 + 172);
      *((_BYTE *)_R4 + 388) = 1;
    else if ( (*(_DWORD *)v37 & 0xFFFFFFFE) != 2 )
      j_ProjectileComponent::onHit(_R4, (const HitResult *)v37);
    if ( *((_BYTE *)_R4 + 328) )
      j_ProjectileComponent::handleMovementHoming(_R4);
      j_ProjectileComponent::handleMovementGravity(_R4, *(float *)&v53);
  result = *((_DWORD *)_R4 + 4);
  __asm
    VLDR            S0, [R0,#0x70]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
    *((_BYTE *)_R4 + 44) = 1;
  return result;
}


int __fastcall ProjectileComponent::setFlightTime(int result, int a2)
{
  *(_DWORD *)(result + 52) = a2;
  return result;
}


void __fastcall ProjectileComponent::readAdditionalSaveData(ProjectileComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ProjectileComponent *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "TargetID");
  *((_QWORD *)v3 + 42) = j_CompoundTag::getInt64((int)v2, (const void **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


Entity *__fastcall ProjectileComponent::handleMovementHoming(ProjectileComponent *this)
{
  Level *v2; // r0@1
  int v3; // r0@2
  Level *v13; // r0@18
  Entity *result; // r0@18
  signed int v15; // r0@21
  int v16; // r0@22
  int v17; // r8@25
  BlockSource *v18; // r7@25
  int v19; // r0@26
  Entity *v20; // r1@29
  Entity *v21; // [sp+0h] [bp-48h]@26
  Entity *v22; // [sp+4h] [bp-44h]@31
  Entity *v23; // [sp+8h] [bp-40h]@30
  char v24; // [sp+Ch] [bp-3Ch]@25
  Entity *v25; // [sp+18h] [bp-30h]@25
  Entity *v26; // [sp+1Ch] [bp-2Ch]@31
  Entity *v27; // [sp+20h] [bp-28h]@30

  _R4 = this;
  v2 = (Level *)j_Entity::getLevel(*((Entity **)this + 4));
  if ( !j_Level::isClientSide(v2) )
  {
    v3 = *((_DWORD *)_R4 + 87);
    if ( v3 && (*(int (**)(void))(*(_DWORD *)v3 + 316))() == 1 )
    {
      __asm
      {
        VLDR            S0, =1.025
        VMOV.F32        S4, #-1.0
        VLDR            S2, [R4,#0x168]
        VMOV.F32        S6, #1.0
        VMUL.F32        S2, S2, S0
        VMOV.F32        S8, S4
        VMOV.F32        S10, S4
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, S6
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S8, S2 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S8, S6 }
        VSTR            S8, [R4,#0x168]
        VLDR            S2, [R4,#0x16C]
        __asm { VMOVGT.F32      S10, S2 }
        __asm { VMOVGT.F32      S10, S6 }
        VSTR            S10, [R4,#0x16C]
        VLDR            S2, [R4,#0x170]
        VMUL.F32        S0, S2, S0
        VCMPE.F32       S0, S4
        VCMPE.F32       S0, S6
        __asm { VMOVGT.F32      S4, S0 }
        __asm { VMOVGT.F32      S4, S6 }
        VLDR            S6, =0.2
        VSTR            S4, [R4,#0x170]
      _R0 = *((_DWORD *)_R4 + 4);
        VLDR            S0, [R0,#0x6C]
        VSUB.F32        S2, S8, S0
        VMUL.F32        S2, S2, S6
        VADD.F32        S0, S2, S0
        VSTR            S0, [R0,#0x6C]
        VLDR            S0, [R0,#0x70]
        VSUB.F32        S2, S10, S0
        VSTR            S0, [R0,#0x70]
        VLDR            S0, [R0,#0x74]
        VSUB.F32        S2, S4, S0
        VSTR            S0, [R0,#0x74]
    }
    else
        VLDR            D1, =-0.04
        VCVT.F64.F32    D0, S0
        VADD.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
  }
  _R0 = *((_DWORD *)_R4 + 4);
  __asm
    VLDR            S0, [R0,#0x4C]
    VLDR            S8, [R0,#0x70]
    VLDR            S2, [R0,#0x50]
    VLDR            S10, [R0,#0x74]
    VADD.F32        S0, S8, S0
    VLDR            S4, [R0,#0x48]
    VLDR            S6, [R0,#0x6C]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S6, S4
    VSTR            S4, [SP,#0x48+var_24]
    VSTR            S0, [SP,#0x48+var_20]
    VSTR            S2, [SP,#0x48+var_1C]
  (*(void (**)(void))(*(_DWORD *)_R0 + 48))();
  v13 = (Level *)j_Entity::getLevel(*((Entity **)_R4 + 4));
  result = (Entity *)j_Level::isClientSide(v13);
  if ( !result )
    result = (Entity *)*((_DWORD *)_R4 + 87);
    if ( result )
      result = (Entity *)j_Entity::isRemoved(result);
      if ( !result )
        v15 = *((_DWORD *)_R4 + 93);
        if ( v15 >= 1 )
        {
          v16 = v15 - 1;
          *((_DWORD *)_R4 + 93) = v16;
          if ( !v16 )
            j_ProjectileComponent::selectNextMoveDirection((int)_R4, *((_DWORD *)_R4 + 94));
        }
        result = (Entity *)*((_DWORD *)_R4 + 94);
        if ( result != (Entity *)-1 )
          j_BlockPos::BlockPos((int)&v25, *((_DWORD *)_R4 + 4) + 72);
          v17 = *((_DWORD *)_R4 + 94);
          v18 = (BlockSource *)j_Entity::getRegion(*((Entity **)_R4 + 4));
          j_BlockPos::relative((BlockPos *)&v24, (int)&v25, *((_BYTE *)_R4 + 376), 1);
          if ( j_BlockSource::isSolidBlockingBlock(v18, (const BlockPos *)&v24) == 1 )
            goto LABEL_36;
          v19 = (*(int (**)(void))(**((_DWORD **)_R4 + 87) + 52))();
          result = (Entity *)j_BlockPos::BlockPos((int)&v21, v19);
          if ( v17 == 2 )
          {
            result = v23;
            v20 = v27;
          }
          else if ( v17 == 1 )
            result = v22;
            v20 = v26;
          else
            if ( v17 )
              return result;
            result = v21;
            v20 = v25;
          if ( v20 == result )
LABEL_36:
            result = (Entity *)j_ProjectileComponent::selectNextMoveDirection((int)_R4, v17);
  return result;
}


int __fastcall ProjectileComponent::shoot(ProjectileComponent *this, const Vec3 *a2, float _R2, float a4, const Vec3 *a5, Entity *a6)
{
  ProjectileComponent *v6; // r4@1
  Level *v19; // r0@9
  char *v20; // r0@9
  Level *v22; // r0@9
  char *v23; // r0@9
  Level *v25; // r0@9
  char *v26; // r0@9
  float v30; // r1@9
  int v31; // r5@9
  __int64 v32; // r0@9
  __int64 v33; // r2@9
  int v34; // r0@9
  __int64 v35; // r0@9
  __int64 v36; // r2@9
  int v37; // r0@9
  int v38; // r0@9
  int result; // r0@9

  v6 = this;
  _R0 = *(_DWORD *)a2;
  _R7 = *((_DWORD *)v6 + 4);
  _R5 = a4;
  __asm { VMOV            S18, R2 }
  *(_DWORD *)(_R7 + 108) = *(_DWORD *)a2;
  _R3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)(_R7 + 112) = _R3;
  _R1 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(_R7 + 116) = _R1;
  *((_DWORD *)v6 + 87) = a6;
  if ( a6 )
  {
    j_ProjectileComponent::selectNextMoveDirection((int)v6, -1);
    *((_QWORD *)v6 + 44) = *(_QWORD *)j_Entity::getUniqueID(*((Entity **)v6 + 87));
    __asm
    {
      VLDR            S0, [R7,#0x6C]
      VLDR            S2, [R7,#0x70]
      VLDR            S4, [R7,#0x74]
    }
  }
  else
      VMOV            S0, R0
      VMOV            S2, R3
      VMOV            S4, R1
  __asm
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VLDR            S16, =0.0
    VMUL.F32        S4, S4, S4
  _R6 = a5;
  __asm { VMOV            S20, R5 }
  if ( _ZF )
    __asm { VMOVEQ.F32      S16, S18 }
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  _R0 = j_mce::Math::sqrt(_R0, COERCE_FLOAT(*((_BYTE *)v6 + 328)));
    VMOV            S0, R0
    VLDR            S2, =0.001
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    *(_QWORD *)(_R7 + 108) = *(_QWORD *)&Vec3::ZERO;
    *(_DWORD *)(_R7 + 116) = dword_2822498;
      VMOV.F32        S2, #1.0
      VLDR            S4, [R7,#0x70]
      VLDR            S6, [R7,#0x74]
      VDIV.F32        S0, S2, S0
      VLDR            S2, [R7,#0x6C]
      VMUL.F32        S4, S4, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S6, S0
      VSTR            S2, [R7,#0x6C]
      VSTR            S4, [R7,#0x70]
      VSTR            S0, [R7,#0x74]
    VLDR            S0, =0.0075
    VMUL.F32        S18, S20, S0
  v19 = (Level *)j_Entity::getLevel(*((Entity **)v6 + 4));
  v20 = j_Level::getRandom(v19);
  _R0 = j_Random::nextGaussian((Random *)v20);
    VLDR            S2, [R7,#0x6C]
    VMUL.F32        S0, S18, S0
    VADD.F32        S0, S0, S2
    VSTR            S0, [R7,#0x6C]
  v22 = (Level *)j_Entity::getLevel(*((Entity **)v6 + 4));
  v23 = j_Level::getRandom(v22);
  _R0 = j_Random::nextGaussian((Random *)v23);
    VLDR            S2, [R7,#0x70]
    VSTR            S0, [R7,#0x70]
  v25 = (Level *)j_Entity::getLevel(*((Entity **)v6 + 4));
  v26 = j_Level::getRandom(v25);
  _R0 = j_Random::nextGaussian((Random *)v26);
    VLDR            S2, [R7,#0x74]
    VSTR            S0, [R7,#0x74]
    VMUL.F32        S0, S0, S16
    VLDR            S4, [R7,#0x70]
    VMUL.F32        S2, S2, S16
    VLDR            S6, [R6]
    VMUL.F32        S4, S4, S16
    VLDR            S8, [R6,#4]
    VLDR            S10, [R6,#8]
    VADD.F32        S0, S10, S0
    VADD.F32        S2, S6, S2
    VADD.F32        S4, S8, S4
    VSTR            S2, [R7,#0x6C]
    VSTR            S4, [R7,#0x70]
  _R0 = *((_DWORD *)v6 + 4);
    VLDR            S0, [R6]
    VLDR            S2, [R0,#0x48]
    VSTR            S0, [R0,#0x48]
    VLDR            S0, [R6,#4]
    VLDR            S2, [R0,#0x4C]
    VSTR            S0, [R0,#0x4C]
    VLDR            S0, [R6,#8]
    VLDR            S2, [R0,#0x50]
    VSTR            S0, [R0,#0x50]
    VLDR            S0, [R7,#0x6C]
  v31 = j_mce::Math::sqrt(_R0, v30);
  LODWORD(v32) = *(_DWORD *)(_R7 + 108);
  HIDWORD(v32) = *(_DWORD *)(_R7 + 116);
  v34 = j_mce::Math::atan2(v32, v33);
  v35 = __PAIR__(v31, j_mce::operator*(v34, 1113927392));
  *(_DWORD *)(*((_DWORD *)v6 + 4) + 124) = v35;
  *(_DWORD *)(*((_DWORD *)v6 + 4) + 132) = v35;
  LODWORD(v35) = *(_DWORD *)(_R7 + 112);
  v37 = j_mce::Math::atan2(v35, v36);
  v38 = j_mce::operator*(v37, 1113927392);
  *(_DWORD *)(*((_DWORD *)v6 + 4) + 120) = v38;
  *(_DWORD *)(*((_DWORD *)v6 + 4) + 128) = v38;
  result = 0;
  *((_DWORD *)v6 + 12) = 0;
  return result;
}


char *__fastcall ProjectileComponent::getBlockStuckTo(ProjectileComponent *this)
{
  return (char *)this + 76;
}


int __fastcall ProjectileComponent::handleMovementGravity(ProjectileComponent *this, float a2)
{
  int v10; // r5@1

  _R4 = this;
  _R0 = *((_DWORD *)this + 4);
  __asm
  {
    VLDR            S0, [R0,#0x48]
    VLDR            S2, [R0,#0x6C]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0,#0x48]
    VLDR            S0, [R0,#0x4C]
    VLDR            S2, [R0,#0x70]
    VSTR            S0, [R0,#0x4C]
    VLDR            S0, [R0,#0x50]
    VLDR            S2, [R0,#0x74]
    VSTR            S0, [R0,#0x50]
  }
  _R0 = *((_DWORD *)_R4 + 4);
    VLDR            S0, [R0,#0x6C]
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  v10 = j_mce::Math::sqrt(_R0, a2);
  _R0 = j_atan2f(*(float *)(*((_DWORD *)_R4 + 4) + 108), *(float *)(*((_DWORD *)_R4 + 4) + 116));
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::RADDEG;
    VLDR            S16, [R1]
    VMUL.F32        S0, S16, S0
    VSTR            S0, [R6,#0x7C]
  _R0 = j_atan2f(*(float *)(*((_DWORD *)_R4 + 4) + 112), *(float *)&v10);
    VMOV            S0, R0
    VLDR            S4, =0.2
    VSTR            S0, [R6,#0x78]
    VLDR            S0, [R0,#0x78]
    VLDR            S2, [R0,#0x80]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R0,#0x78]
    VLDR            S0, [R0,#0x7C]
    VLDR            S2, [R0,#0x84]
    VSTR            S0, [R0,#0x7C]
  if ( !*(_BYTE *)_R4 )
    __asm
    {
      VLDR            S16, [R4,#0xCC]
      VLDR            S18, [R4,#0x130]
    }
    if ( (*(int (**)(void))(**((_DWORD **)_R4 + 4) + 208))() == 1 )
      __asm { VLDREQ          S18, [R4,#0x134] }
    _R0 = *((_DWORD *)_R4 + 4);
      VLDR            S0, [R0,#0x6C]
      VLDR            S2, [R0,#0x70]
      VLDR            S4, [R0,#0x74]
      VMUL.F32        S0, S0, S18
      VMUL.F32        S2, S2, S18
      VMUL.F32        S4, S4, S18
      VSTR            S0, [R0,#0x6C]
      VSTR            S2, [R0,#0x70]
      VSTR            S4, [R0,#0x74]
      VLDR            S0, [R0,#0x70]
      VSUB.F32        S0, S0, S16
      VSTR            S0, [R0,#0x70]
  return (*(int (**)(void))(**((_DWORD **)_R4 + 4) + 48))();
}


int __fastcall ProjectileComponent::hurt(ProjectileComponent *this, const EntityDamageSource *a2)
{
  EntityDamageSource *v2; // r5@1
  ProjectileComponent *v3; // r4@1
  int v4; // r9@2
  signed int v5; // r0@2
  int v7; // r7@7
  int v8; // r1@7
  Entity *v9; // r8@7
  float v10; // r3@7
  int v17; // r3@10
  int v18; // r7@10
  void (__fastcall *v19)(int); // r6@10
  __int64 v20; // r2@10
  int v21; // r1@11
  int v22; // r1@11
  unsigned int v23; // r0@13
  unsigned int v24; // r0@14
  Player *v25; // r6@17
  int v26; // r0@17
  int result; // r0@18
  int v28; // [sp+8h] [bp-78h]@11
  char v29; // [sp+Ch] [bp-74h]@11
  int v30; // [sp+10h] [bp-70h]@11
  int v31; // [sp+14h] [bp-6Ch]@11
  int v32; // [sp+18h] [bp-68h]@11
  int v33; // [sp+1Ch] [bp-64h]@11
  int v34; // [sp+20h] [bp-60h]@11
  int v35; // [sp+24h] [bp-5Ch]@11
  int v36; // [sp+28h] [bp-58h]@11
  __int16 v37; // [sp+2Ch] [bp-54h]@11
  int v38; // [sp+30h] [bp-50h]@11
  int v39; // [sp+34h] [bp-4Ch]@11
  int v40; // [sp+38h] [bp-48h]@11
  int v41; // [sp+3Ch] [bp-44h]@11
  int v42; // [sp+40h] [bp-40h]@11
  int v43; // [sp+44h] [bp-3Ch]@11
  char v44; // [sp+48h] [bp-38h]@11
  float v45; // [sp+4Ch] [bp-34h]@7
  unsigned int v48; // [sp+58h] [bp-28h]@7
  unsigned int v49; // [sp+5Ch] [bp-24h]@7
  int v50; // [sp+60h] [bp-20h]@2

  v2 = a2;
  v3 = this;
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 8))(a2) == 1 )
  {
    v4 = j_EntityDamageSource::getCause(v2);
    v50 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v2 + 40))(v2);
    v5 = j_EntityClassTree::hasCategory(&v50, 2);
    _ZF = v4 == 13;
    if ( v4 != 13 )
      _ZF = v5 == 1;
    if ( _ZF )
    {
      if ( *((_BYTE *)v3 + 325) )
      {
        v7 = j_Entity::getLevel(*((Entity **)v3 + 4));
        (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v2 + 32))(&v48, v2);
        v9 = (Entity *)j_Level::fetchEntity(v7, v8, v48, v49, 0);
        j_Entity::getViewVector((Entity *)&v45, *(float *)&v9, 1.0, v10);
        __asm
        {
          VLDR            S0, [SP,#0x80+var_34]
          VLDR            S2, [SP,#0x80+var_30]
          VMUL.F32        S6, S0, S0
          VLDR            S4, [SP,#0x80+var_2C]
          VMUL.F32        S8, S2, S2
          VMUL.F32        S10, S4, S4
          VADD.F32        S6, S8, S6
          VLDR            S8, =0.0001
          VADD.F32        S6, S6, S10
          VSQRT.F32       S6, S6
          VCMPE.F32       S6, S8
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          _R1 = *(&Vec3::ZERO + 1);
          _R2 = Vec3::ZERO;
          _R0 = dword_2822498;
        else
          __asm
          {
            VDIV.F32        S4, S4, S6
            VDIV.F32        S2, S2, S6
            VDIV.F32        S0, S0, S6
            VMOV            R0, S4
            VMOV            R1, S2
            VMOV            R2, S0
          }
        v17 = *((_DWORD *)v3 + 4);
        *(_DWORD *)(v17 + 108) = _R2;
        *(_DWORD *)(v17 + 112) = _R1;
        *(_DWORD *)(v17 + 116) = _R0;
        v18 = *((_DWORD *)v3 + 4);
        v19 = *(void (__fastcall **)(int))(*(_DWORD *)v18 + 348);
        v20 = *(_QWORD *)j_Entity::getUniqueID(v9);
        v19(v18);
        if ( j_Entity::getProjectileComponent(*((Entity **)v3 + 4)) )
          *(_BYTE *)(j_Entity::getProjectileComponent(*((Entity **)v3 + 4)) + 324) = 1;
          *((_BYTE *)v3 + 388) = 0;
          j_HitResult::HitResult((HitResult *)&v28);
          v21 = v28;
          *((_BYTE *)v3 + 396) = v29;
          *((_DWORD *)v3 + 98) = v21;
          *((_DWORD *)v3 + 100) = v30;
          *((_DWORD *)v3 + 101) = v31;
          *((_DWORD *)v3 + 102) = v32;
          *((_DWORD *)v3 + 103) = v33;
          *((_DWORD *)v3 + 104) = v34;
          *((_DWORD *)v3 + 105) = v35;
          v22 = v36;
          *((_WORD *)v3 + 214) = v37;
          *((_DWORD *)v3 + 106) = v22;
          *((_DWORD *)v3 + 108) = v38;
          *((_DWORD *)v3 + 109) = v39;
          *((_DWORD *)v3 + 110) = v40;
          *((_DWORD *)v3 + 111) = v41;
          *((_DWORD *)v3 + 112) = v42;
          *((_DWORD *)v3 + 113) = v43;
          *((_BYTE *)v3 + 456) = v44;
      }
      if ( v4 == 13 || (v23 = *((_WORD *)v3 + 163), (_BYTE)v23) )
        (*(void (**)(void))(**((_DWORD **)v3 + 4) + 44))();
        v24 = *((_BYTE *)v3 + 327);
      else
        v24 = v23 >> 8;
      if ( v24 )
        v25 = (Player *)j_Entity::getLevel(*((Entity **)v3 + 4));
        v26 = (*(int (**)(void))(**((_DWORD **)v3 + 4) + 52))();
        j_Level::broadcastLevelEvent(v25, 2012, __PAIR__(15, v26), 0);
    }
  }
  result = j_EntityDamageSource::getCause(v2);
  if ( result == 10 )
    result = (*(int (**)(void))(**((_DWORD **)v3 + 4) + 44))();
  return result;
}


int __fastcall ProjectileComponent::setOwnerId(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 8) = a3;
  return result;
}


int __fastcall ProjectileComponent::setBlockStuckTo(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 76) = *(_DWORD *)a2;
  *(_DWORD *)(result + 80) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 84) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall ProjectileComponent::ProjectileComponent(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  int v5; // r0@1
  int v6; // r1@1
  int v8; // [sp+0h] [bp-60h]@1
  char v9; // [sp+4h] [bp-5Ch]@1
  int v10; // [sp+8h] [bp-58h]@1
  int v11; // [sp+Ch] [bp-54h]@1
  int v12; // [sp+10h] [bp-50h]@1
  int v13; // [sp+14h] [bp-4Ch]@1
  int v14; // [sp+18h] [bp-48h]@1
  int v15; // [sp+1Ch] [bp-44h]@1
  int v16; // [sp+20h] [bp-40h]@1
  __int16 v17; // [sp+24h] [bp-3Ch]@1
  int v18; // [sp+28h] [bp-38h]@1
  int v19; // [sp+2Ch] [bp-34h]@1
  int v20; // [sp+30h] [bp-30h]@1
  int v21; // [sp+34h] [bp-2Ch]@1
  int v22; // [sp+38h] [bp-28h]@1
  int v23; // [sp+3Ch] [bp-24h]@1
  char v24; // [sp+40h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  *(_BYTE *)a1 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 60) = -1;
  *(_DWORD *)(a1 + 64) = -1;
  *(_DWORD *)(a1 + 68) = -1;
  j___aeabi_memclr8_0(a1 + 72, 36);
  j_HitResult::HitResult((HitResult *)(v2 + 108));
  *(_BYTE *)(v2 + 176) = 6;
  *(_DWORD *)(v2 + 188) = 0;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 196) = 0;
  *(_DWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 220) = 0;
  *(_DWORD *)(v2 + 224) = 0;
  *(_DWORD *)(v2 + 228) = &unk_28898CC;
  *(_DWORD *)(v2 + 232) = &unk_28898CC;
  *(_DWORD *)(v2 + 264) = 0;
  *(_DWORD *)(v2 + 256) = 0;
  *(_DWORD *)(v2 + 260) = 0;
  *(_DWORD *)(v2 + 248) = 0;
  *(_DWORD *)(v2 + 252) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 244) = 0;
  *(_DWORD *)(v2 + 236) = &off_26F1930;
  *(_DWORD *)(v2 + 268) = 0;
  *(_DWORD *)(v2 + 272) = 0;
  *(_DWORD *)(v2 + 276) = 256;
  *(_DWORD *)(v2 + 280) = 1084227584;
  *(_DWORD *)(v2 + 284) = 0;
  *(_DWORD *)(v2 + 288) = 1082130432;
  *(_BYTE *)(v2 + 292) = 1;
  *(_DWORD *)(v2 + 296) = 0;
  *(_DWORD *)(v2 + 300) = 0;
  *(_DWORD *)(v2 + 304) = 1065185444;
  *(_DWORD *)(v2 + 308) = 1058642330;
  *(_BYTE *)(v2 + 322) = 0;
  *(_BYTE *)(v2 + 323) = 1;
  *(_BYTE *)(v2 + 324) = 0;
  *(_BYTE *)(v2 + 328) = 0;
  *(_DWORD *)(v2 + 336) = -1;
  *(_DWORD *)(v2 + 340) = -1;
  *(_DWORD *)(v2 + 344) = 0;
  *(_DWORD *)(v2 + 348) = 0;
  *(_DWORD *)(v2 + 352) = -1;
  *(_DWORD *)(v2 + 356) = -1;
  *(_DWORD *)(v2 + 360) = 0;
  *(_DWORD *)(v2 + 364) = 0;
  *(_DWORD *)(v2 + 368) = 0;
  *(_BYTE *)(v2 + 380) = 1;
  *(_DWORD *)(v2 + 384) = 0;
  *(_BYTE *)(v2 + 388) = 0;
  j_HitResult::HitResult((HitResult *)(v2 + 392));
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
  *(_DWORD *)(v2 + 20) = *(_DWORD *)v4;
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(v4 + 8);
  j_HitResult::HitResult((HitResult *)&v8);
  v5 = v8;
  *(_BYTE *)(v2 + 396) = v9;
  *(_DWORD *)(v2 + 392) = v5;
  *(_DWORD *)(v2 + 400) = v10;
  *(_DWORD *)(v2 + 404) = v11;
  *(_DWORD *)(v2 + 408) = v12;
  *(_DWORD *)(v2 + 412) = v13;
  *(_DWORD *)(v2 + 416) = v14;
  *(_DWORD *)(v2 + 420) = v15;
  v6 = v16;
  *(_WORD *)(v2 + 428) = v17;
  *(_DWORD *)(v2 + 424) = v6;
  *(_DWORD *)(v2 + 432) = v18;
  *(_DWORD *)(v2 + 436) = v19;
  *(_DWORD *)(v2 + 440) = v20;
  *(_DWORD *)(v2 + 444) = v21;
  *(_DWORD *)(v2 + 448) = v22;
  *(_DWORD *)(v2 + 452) = v23;
  *(_BYTE *)(v2 + 456) = v24;
  return v2;
}


int __fastcall ProjectileComponent::lerpMotion(ProjectileComponent *this, const Vec3 *a2)
{
  ProjectileComponent *v2; // r4@1
  int v4; // r0@1
  int result; // r0@1
  int v6; // r2@1
  int v12; // r6@5
  __int64 v13; // r0@5
  __int64 v14; // r2@5
  int v15; // r0@5
  __int64 v16; // r0@5
  __int64 v17; // r2@5
  int v18; // r0@5

  v2 = this;
  _R5 = a2;
  v4 = *((_DWORD *)this + 4);
  *(_DWORD *)(v4 + 108) = *(_DWORD *)a2;
  *(_DWORD *)(v4 + 112) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(v4 + 116) = *((_DWORD *)a2 + 2);
  result = *((_DWORD *)v2 + 4);
  v6 = *(_DWORD *)(result + 128);
  _ZF = (v6 & 0x7FFFFFFF) == 0;
  if ( !(v6 & 0x7FFFFFFF) )
  {
    result = *(_DWORD *)(result + 132);
    _ZF = (result & 0x7FFFFFFF) == 0;
  }
  if ( _ZF )
    __asm
    {
      VLDR            S0, [R5]
      VLDR            S2, [R5,#8]
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    v12 = j_mce::Math::sqrt(_R0, 6.8056e38/*NaN*/);
    LODWORD(v13) = *(_DWORD *)_R5;
    HIDWORD(v13) = *((_DWORD *)_R5 + 2);
    v15 = j_mce::Math::atan2(v13, v14);
    v16 = __PAIR__(v12, j_mce::operator*(v15, 1113927392));
    *(_DWORD *)(*((_DWORD *)v2 + 4) + 124) = v16;
    *(_DWORD *)(*((_DWORD *)v2 + 4) + 132) = v16;
    LODWORD(v16) = *((_DWORD *)_R5 + 1);
    v18 = j_mce::Math::atan2(v16, v17);
    result = j_mce::operator*(v18, 1113927392);
    *(_DWORD *)(*((_DWORD *)v2 + 4) + 120) = result;
    *(_DWORD *)(*((_DWORD *)v2 + 4) + 128) = result;
  return result;
}
