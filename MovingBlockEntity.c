

int __fastcall MovingBlockEntity::registerPiston(MovingBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  MovingBlockEntity *v4; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = this;
  result = *(_BYTE *)(BlockSource::getBlock(a2, a3) + 4);
  if ( result == *(_BYTE *)(Block::mPiston + 4) || result == *(_BYTE *)(Block::mStickyPiston + 4) )
  {
    *((_DWORD *)v4 + 26) = *(_DWORD *)v3;
    *((_DWORD *)v4 + 27) = *((_DWORD *)v3 + 1);
    result = *((_DWORD *)v3 + 2);
    *((_DWORD *)v4 + 28) = result;
  }
  return result;
}


char *__fastcall MovingBlockEntity::getBlock(MovingBlockEntity *this)
{
  return (char *)this + 102;
}


int __fastcall MovingBlockEntity::getDrawPos(MovingBlockEntity *this, BlockSource *a2, float a3, float a4)
{
  MovingBlockEntity *v4; // r4@1
  int v5; // r0@1
  const BlockPos *v6; // r7@1
  float v7; // r5@1
  BlockSource *v8; // r6@1
  int v10; // r0@4
  PistonBlockEntity *v11; // r0@6
  PistonBlockEntity *v12; // r7@6
  char *v13; // r0@6
  int result; // r0@9
  float v18; // [sp+4h] [bp-3Ch]@6

  v4 = this;
  v6 = (BlockSource *)((char *)a2 + 104);
  v5 = *((_DWORD *)a2 + 26);
  v7 = a4;
  v8 = (BlockSource *)LODWORD(a3);
  _ZF = v5 == 0;
  if ( !v5 )
    _ZF = *((_DWORD *)a2 + 27) == -1;
  if ( _ZF && !*((_DWORD *)a2 + 28)
    || (v10 = *(_BYTE *)(BlockSource::getBlock((BlockSource *)LODWORD(a3), (BlockSource *)((char *)a2 + 104)) + 4),
        v10 != *(_BYTE *)(Block::mPiston + 4))
    && v10 != *(_BYTE *)(Block::mStickyPiston + 4) )
  {
    result = 0;
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
  }
  else
    v11 = (PistonBlockEntity *)BlockSource::getBlockEntity(v8, v6);
    v12 = v11;
    v13 = PistonBlockEntity::getFacingDir(v11, v8);
    Vec3::Vec3((int)&v18, (int)v13);
    if ( PistonBlockEntity::isRetracting(v12) == 1 )
    {
      __asm
      {
        VLDR            S18, =0.0
        VMOV.F32        S20, S18
        VMOV.F32        S16, S18
      }
    }
    else
        VLDR            S0, [SP,#0x40+var_3C]
        VLDR            S2, [SP,#0x40+var_38]
        VLDR            S4, [SP,#0x40+var_34]
        VNEG.F32        S18, S0
        VNEG.F32        S20, S2
        VNEG.F32        S16, S4
    result = PistonBlockEntity::getProgress(v12, v7);
    __asm
      VLDR            S0, [SP,#0x40+var_3C]
      VMOV            S6, R0
      VLDR            S2, [SP,#0x40+var_38]
      VLDR            S4, [SP,#0x40+var_34]
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VADD.F32        S0, S0, S18
      VADD.F32        S2, S2, S20
      VADD.F32        S4, S4, S16
      VSTR            S0, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
  return result;
}


CompoundTag *__fastcall MovingBlockEntity::getUpdatePacket(MovingBlockEntity *this, BlockSource *a2)
{
  MovingBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


int __fastcall MovingBlockEntity::setBlockEntity(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(v2 + 116) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall MovingBlockEntity::load(MovingBlockEntity *this, const CompoundTag *a2)
{
  MovingBlockEntity::load(this, a2);
}


signed int __fastcall MovingBlockEntity::_validPistonPos(MovingBlockEntity *this, BlockSource *a2)
{
  int v2; // r3@1
  bool v3; // zf@1
  signed int result; // r0@6
  int v5; // r1@7

  v2 = *((_DWORD *)this + 26);
  v3 = v2 == 0;
  if ( !v2 )
    v3 = *((_DWORD *)this + 27) == -1;
  if ( !v3 || *((_DWORD *)this + 28) )
  {
    v5 = *(_BYTE *)(BlockSource::getBlock(a2, (MovingBlockEntity *)((char *)this + 104)) + 4);
    if ( v5 == *(_BYTE *)(Block::mPiston + 4) )
    {
      result = 1;
    }
    else
      result = 0;
      if ( v5 == *(_BYTE *)(Block::mStickyPiston + 4) )
        result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall MovingBlockEntity::~MovingBlockEntity(MovingBlockEntity *this)
{
  MovingBlockEntity::~MovingBlockEntity(this);
}


BlockEntity *__fastcall MovingBlockEntity::~MovingBlockEntity(MovingBlockEntity *this)
{
  MovingBlockEntity *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_270A290;
  v2 = *((_DWORD *)this + 29);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 29) = 0;
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall MovingBlockEntity::setBlock(int result, FullBlock *a2)
{
  *(_BYTE *)(result + 102) = *(_BYTE *)a2;
  *(_BYTE *)(result + 103) = *((_BYTE *)a2 + 1);
  return result;
}


RakNet *__fastcall MovingBlockEntity::moveCollidedEntities(MovingBlockEntity *this, PistonBlockEntity *a2, BlockSource *a3)
{
  MovingBlockEntity *v3; // r9@1
  PistonBlockEntity *v4; // r4@1
  BlockSource *v5; // r8@1
  char *v6; // r0@3
  int v7; // r1@6
  int v8; // r1@6
  int v9; // r4@6
  int v10; // r5@6
  int v11; // r4@6
  int v12; // r5@6
  int v13; // r6@6
  int v17; // r0@6
  int v18; // r2@6
  int v19; // r3@6
  int v20; // r6@6
  int v21; // r3@6
  int v22; // r4@6
  int v23; // r6@6
  int v24; // r0@6
  int v25; // r2@6
  int v26; // r3@6
  int v27; // r7@6
  int v28; // r3@6
  int v29; // r6@6
  int v30; // r7@6
  int v31; // r0@6
  int v32; // r1@6
  char *v33; // r0@7
  char *v34; // r4@7
  int *v35; // r5@7
  int v36; // r1@7 OVERLAPPED
  int v37; // r2@7 OVERLAPPED
  signed int v38; // r0@7
  int *v39; // r0@9
  signed int v40; // r2@10
  signed int v41; // r4@11
  int v42; // r0@11
  int *v43; // r2@11
  int v44; // t1@12
  char *v46; // r10@17
  char *v47; // r0@17
  char *v48; // r5@17
  int v49; // r1@17 OVERLAPPED
  int v50; // r2@17 OVERLAPPED
  signed int v51; // r0@17
  char *v52; // r0@19
  signed int v53; // r2@20
  signed int v54; // r4@21
  Entity **v60; // r4@21
  Entity *v61; // r7@22
  int v62; // r6@22
  int v63; // r5@22
  int v64; // r0@22
  char *v65; // r8@24
  char *v66; // r7@26
  int v67; // r6@26
  unsigned int v68; // r1@26
  unsigned int v69; // r0@28
  unsigned int v70; // r9@28
  unsigned int v71; // r1@36
  int v72; // r3@37
  int v73; // r2@37
  unsigned int v74; // r0@38
  int v75; // r5@40
  char *v76; // r9@16 OVERLAPPED
  char *v77; // r10@16 OVERLAPPED
  int *v78; // r5@48
  char *v79; // r0@48
  char *v80; // r4@48
  int v81; // r1@48 OVERLAPPED
  int v82; // r2@48 OVERLAPPED
  signed int v83; // r0@48
  signed int v84; // r2@51
  int *v85; // r10@52
  signed int v86; // r4@52
  int v87; // r8@52
  int v88; // r11@53
  int v89; // r1@53
  char *v93; // r0@59
  int v94; // r1@59
  __int64 v95; // kr08_8@60
  int v96; // r4@60
  _QWORD *v98; // r2@61
  bool v99; // zf@64
  int v100; // r2@69
  unsigned int v101; // r0@71
  unsigned int v102; // r3@71
  RakNet *result; // r0@85
  BlockSource *v104; // [sp+Ch] [bp-18Ch]@15
  __int64 v105; // [sp+10h] [bp-188h]@21
  int v106; // [sp+18h] [bp-180h]@21
  int v107; // [sp+1Ch] [bp-17Ch]@4
  int v108; // [sp+20h] [bp-178h]@21
  int v109; // [sp+24h] [bp-174h]@21
  __int64 v110; // [sp+24h] [bp-174h]@51
  char *ptr; // [sp+28h] [bp-170h]@20
  _BYTE *v112; // [sp+2Ch] [bp-16Ch]@6
  int v113; // [sp+30h] [bp-168h]@4
  int v114; // [sp+34h] [bp-164h]@4
  int v115; // [sp+38h] [bp-160h]@4
  float v116; // [sp+3Ch] [bp-15Ch]@53
  int v118; // [sp+44h] [bp-154h]@54
  char v119; // [sp+48h] [bp-150h]@22
  int v120; // [sp+4Ch] [bp-14Ch]@22
  int v121; // [sp+54h] [bp-144h]@22
  int v122; // [sp+58h] [bp-140h]@22
  int v123; // [sp+5Ch] [bp-13Ch]@22
  int v124; // [sp+60h] [bp-138h]@17
  int v125; // [sp+64h] [bp-134h]@17
  int v126; // [sp+68h] [bp-130h]@17
  int v127; // [sp+6Ch] [bp-12Ch]@17
  int v128; // [sp+70h] [bp-128h]@17
  int v129; // [sp+74h] [bp-124h]@17
  int v130; // [sp+78h] [bp-120h]@17
  float v131; // [sp+7Ch] [bp-11Ch]@6
  float v134; // [sp+88h] [bp-110h]@6
  float v137; // [sp+94h] [bp-104h]@6
  int v138; // [sp+A0h] [bp-F8h]@6
  int v139; // [sp+A4h] [bp-F4h]@6
  int v140; // [sp+A8h] [bp-F0h]@6
  int v141; // [sp+ACh] [bp-ECh]@6
  int v142; // [sp+B0h] [bp-E8h]@6
  int v143; // [sp+B4h] [bp-E4h]@6
  int v144; // [sp+B8h] [bp-E0h]@6
  int v145; // [sp+C0h] [bp-D8h]@6
  int v146; // [sp+C4h] [bp-D4h]@6
  int v147; // [sp+C8h] [bp-D0h]@6
  int v148; // [sp+CCh] [bp-CCh]@6
  int v149; // [sp+D0h] [bp-C8h]@6
  int v150; // [sp+D4h] [bp-C4h]@6
  int v151; // [sp+D8h] [bp-C0h]@6
  float v152; // [sp+DCh] [bp-BCh]@6
  float v155; // [sp+E8h] [bp-B0h]@6
  float v158; // [sp+F4h] [bp-A4h]@6
  char v159; // [sp+100h] [bp-98h]@6
  int v160; // [sp+120h] [bp-78h]@6
  int v161; // [sp+124h] [bp-74h]@6
  int v162; // [sp+128h] [bp-70h]@6
  int v163; // [sp+12Ch] [bp-6Ch]@6
  int v164; // [sp+130h] [bp-68h]@6
  int v165; // [sp+134h] [bp-64h]@6
  int v166; // [sp+138h] [bp-60h]@6
  int v167; // [sp+13Ch] [bp-5Ch]@3
  int v168; // [sp+140h] [bp-58h]@4
  int v169; // [sp+144h] [bp-54h]@4
  int v170; // [sp+148h] [bp-50h]@6
  int v171; // [sp+14Ch] [bp-4Ch]@6
  int v172; // [sp+150h] [bp-48h]@6
  int v173; // [sp+154h] [bp-44h]@6
  int v174; // [sp+158h] [bp-40h]@6
  int v175; // [sp+15Ch] [bp-3Ch]@6
  int v176; // [sp+160h] [bp-38h]@6
  RakNet *v177; // [sp+164h] [bp-34h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v177 = _stack_chk_guard;
  if ( PistonBlockEntity::isRetracted(a2) || PistonBlockEntity::isExpanded(v4) )
    goto LABEL_85;
  v6 = PistonBlockEntity::getFacingDir(v4, v5);
  Vec3::Vec3((int)&v167, (int)v6);
  if ( PistonBlockEntity::isRetracting(v4) == 1 )
  {
    v107 = (int)v4;
    v113 = v169 ^ 0x80000000;
    v115 = v168 ^ 0x80000000;
    v114 = v167 ^ 0x80000000;
  }
  else
    v114 = v167;
    v115 = v168;
    v113 = v169;
  v112 = (char *)v3 + 102;
  v7 = *((_BYTE *)v3 + 103);
  v8 = (*(int (**)(void))(*(_DWORD *)Block::mBlocks[*((_BYTE *)v3 + 102)] + 420))();
  v9 = *(_DWORD *)(v8 + 4);
  v10 = *(_DWORD *)(v8 + 8);
  v160 = *(_DWORD *)v8;
  v161 = v9;
  v162 = v10;
  v11 = *(_DWORD *)(v8 + 16);
  v12 = *(_DWORD *)(v8 + 20);
  v13 = *(_DWORD *)(v8 + 24);
  v163 = *(_DWORD *)(v8 + 12);
  v164 = v11;
  v165 = v12;
  v166 = v13;
  _aeabi_memmove4(&v159, v8);
  Vec3::Vec3((int)&v155, (int)v3 + 32);
  MovingBlockEntity::getDrawPos((MovingBlockEntity *)&v152, v3, *(float *)&v5, 0.0);
  __asm
    VLDR            S0, [SP,#0x198+var_B0]
    VLDR            S6, [SP,#0x198+var_BC]
    VLDR            S2, [SP,#0x198+var_AC]
    VLDR            S8, [SP,#0x198+var_B8]
    VADD.F32        S0, S6, S0
    VLDR            S4, [SP,#0x198+var_A8]
    VLDR            S10, [SP,#0x198+var_B4]
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x198+var_A4]
    VSTR            S2, [SP,#0x198+var_A0]
    VSTR            S4, [SP,#0x198+var_9C]
  v17 = AABB::move((AABB *)&v159, (const Vec3 *)&v158);
  v18 = *(_DWORD *)v17;
  v19 = *(_DWORD *)(v17 + 4);
  v20 = *(_DWORD *)(v17 + 8);
  v17 += 12;
  v170 = v18;
  v171 = v19;
  v172 = v20;
  v21 = *(_DWORD *)(v17 + 4);
  v22 = *(_DWORD *)(v17 + 8);
  v23 = *(_DWORD *)(v17 + 12);
  v173 = *(_DWORD *)v17;
  v174 = v21;
  v175 = v22;
  v176 = v23;
  v138 = v160;
  v139 = v161;
  v140 = v162;
  v141 = v163;
  v142 = v164;
  v143 = v165;
  v144 = v166;
  Vec3::Vec3((int)&v134, (int)v3 + 32);
  MovingBlockEntity::getDrawPos((MovingBlockEntity *)&v131, v3, *(float *)&v5, 1.0);
    VLDR            S0, [SP,#0x198+var_110]
    VLDR            S6, [SP,#0x198+var_11C]
    VLDR            S2, [SP,#0x198+var_10C]
    VLDR            S8, [SP,#0x198+var_118]
    VLDR            S4, [SP,#0x198+var_108]
    VLDR            S10, [SP,#0x198+var_114]
    VSTR            S0, [SP,#0x198+var_104]
    VSTR            S2, [SP,#0x198+var_100]
    VSTR            S4, [SP,#0x198+var_FC]
  v24 = AABB::move((AABB *)&v138, (const Vec3 *)&v137);
  v25 = *(_DWORD *)v24;
  v26 = *(_DWORD *)(v24 + 4);
  v27 = *(_DWORD *)(v24 + 8);
  v24 += 12;
  v145 = v25;
  v146 = v26;
  v147 = v27;
  v28 = *(_DWORD *)(v24 + 4);
  v29 = *(_DWORD *)(v24 + 8);
  v30 = *(_DWORD *)(v24 + 12);
  v148 = *(_DWORD *)v24;
  v149 = v28;
  v150 = v29;
  v151 = v30;
  v31 = FullBlock::getBlock((MovingBlockEntity *)((char *)v3 + 102));
  v32 = *((_BYTE *)v3 + 103);
  if ( (*(int (**)(void))(*(_DWORD *)v31 + 200))() == 1 )
    v33 = BlockSource::fetchEntities(v5, 0, (const AABB *)&v145);
    v34 = v33;
    v35 = 0;
    *(_QWORD *)&v36 = *(_QWORD *)v33;
    v38 = v37 - v36;
    if ( (v37 - v36) >> 2 )
    {
      if ( (unsigned int)(v38 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v39 = (int *)operator new(v38);
      *(_QWORD *)&v36 = *(_QWORD *)v34;
      v35 = v39;
    }
    v40 = v37 - v36;
    if ( v40 >> 2 )
      v41 = v40 >> 2;
      _aeabi_memmove4(v35, v36);
      v42 = 4 * v41;
      v43 = v35;
      do
      {
        v44 = *v43;
        ++v43;
        v42 -= 4;
        *(_BYTE *)(v44 + 537) = 1;
      }
      while ( v42 );
    if ( v35 )
      operator delete(v35);
  _R0 = v115;
  v104 = v5;
    VMOV            S16, R0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
    v124 = v170;
    v126 = v172;
    v46 = 0;
    v127 = v173;
    v128 = v174;
    v129 = v175;
    v130 = v176;
    __asm { VLDR            S0, =0.05 }
    v125 = v174;
    __asm
      VMOV            S2, R0
      VADD.F32        S0, S2, S0
      VSTR            S0, [SP,#0x198+var_128]
    v47 = BlockSource::fetchEntities(v5, 0, (const AABB *)&v124);
    v48 = v47;
    *(_QWORD *)&v49 = *(_QWORD *)v47;
    v51 = v50 - v49;
    if ( 0 != (v50 - v49) >> 2 )
      if ( (unsigned int)(v51 >> 2) >= 0x40000000 )
      v52 = (char *)operator new(v51);
      *(_QWORD *)&v49 = *(_QWORD *)v48;
      v46 = v52;
    v53 = v50 - v49;
    ptr = v46;
    v77 = 0;
    v76 = 0;
    if ( v53 >> 2 )
      v54 = v53 >> 2;
      _aeabi_memmove4(ptr, v49);
      __asm { VMOV.F32        S0, #0.5 }
      _R0 = v113;
      v77 = 0;
      v76 = 0;
      __asm { VMOV            S2, R0 }
      _R0 = v114;
      __asm
        VMOV            S4, R0
        VMUL.F32        S2, S2, S0
        VMUL.F32        S6, S16, S0
        VMUL.F32        S0, S4, S0
        VMOV            R0, S2
      v106 = _R0;
      __asm { VMOV            R0, S6 }
      HIDWORD(v105) = _R0;
      __asm { VMOV            R0, S0 }
      LODWORD(v105) = _R0;
      v109 = (int)&ptr[4 * v54];
      v60 = (Entity **)ptr;
      v108 = 0;
        v61 = *v60;
        v62 = *(_DWORD *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)*v60 + 52))(*v60);
        AABB::getCenter((AABB *)&v119, (int)&v124);
        v63 = v120;
        v64 = *(_DWORD *)((*(int (__fastcall **)(Entity *))(*(_DWORD *)v61 + 52))(v61) + 8);
        v121 = v62;
        v122 = v63;
        v123 = v64;
        if ( AABB::contains((AABB *)&v124, (const Vec3 *)&v121) == 1 && Entity::isControlledByLocalInstance(v61) == 1 )
        {
          PistonBlockEntity::moveEntityLastProgress(v107, v61, v105, v106);
          v65 = Entity::getUniqueID(v61);
          if ( v76 == (char *)v108 )
          {
            v66 = 0;
            v67 = (v76 - v77) >> 3;
            v68 = (v76 - v77) >> 3;
            if ( !v67 )
              v68 = 1;
            v70 = v68 + ((v76 - v77) >> 3);
            v69 = v70;
            if ( 0 != v70 >> 29 )
              v70 = 0x1FFFFFFF;
            if ( v69 < v68 )
            if ( v70 )
            {
              if ( v70 >= 0x20000000 )
                sub_21E57F4();
              v66 = (char *)operator new(8 * v70);
            }
            *(_QWORD *)&v66[8 * v67] = *(_QWORD *)v65;
            if ( v77 == (char *)v108 )
              v77 = (char *)v108;
              v74 = (unsigned int)v66;
            else
              v71 = 0;
              do
              {
                v72 = *(_DWORD *)&v77[v71 + 4];
                *(_DWORD *)&v66[v71] = *(_DWORD *)&v77[v71];
                v73 = (int)&v66[v71];
                v71 += 8;
                *(_DWORD *)(v73 + 4) = v72;
              }
              while ( v108 - (_DWORD)v77 != v71 );
              v74 = (unsigned int)&v66[((v108 - 8 - (_DWORD)v77) & 0xFFFFFFF8) + 8];
            v75 = v74 + 8;
            if ( v77 )
              operator delete(v77);
            v108 = (int)&v66[8 * v70];
            v77 = v66;
            v76 = (char *)v75;
          }
          else
            *(_QWORD *)v76 = *(_QWORD *)v65;
            v76 += 8;
        }
        ++v60;
      while ( v60 != (Entity **)v109 );
    if ( ptr )
      operator delete(ptr);
  v78 = 0;
  v79 = BlockSource::fetchEntities(v104, 0, (const AABB *)&v145);
  v80 = v79;
  *(_QWORD *)&v81 = *(_QWORD *)v79;
  v83 = v82 - v81;
  if ( 0 != (v82 - v81) >> 2 )
    if ( (unsigned int)(v83 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v78 = (int *)operator new(v83);
    *(_QWORD *)&v81 = *(_QWORD *)v80;
  v84 = v82 - v81;
  v110 = *(_QWORD *)&v76;
  if ( v84 >> 2 )
    v85 = v78;
    v86 = v84 >> 2;
    _aeabi_memmove4(v78, v81);
    v87 = (int)&v78[v86];
    __asm { VLDR            S16, =0.0001 }
    while ( 1 )
      v88 = *v85;
      AABB::axisInside((int)&v116, (int)&v145, *v85 + 264, v114, v115, v113);
      if ( Block::hasProperty(Block::mBlocks[*v112], v89, 0x40000LL) == 1 )
        __asm
          VLDR            S0, [SP,#0x198+var_15C]
          VLDR            S2, [SP,#0x198+var_158]
          VMUL.F32        S6, S0, S0
          VLDR            S4, [SP,#0x198+var_154]
          VMUL.F32        S8, S2, S2
          VMUL.F32        S10, S4, S4
          VADD.F32        S6, S8, S6
          VADD.F32        S6, S6, S10
          VSQRT.F32       S6, S6
          VCMPE.F32       S6, S16
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          _R1 = *(&Vec3::ZERO + 1);
          _R2 = Vec3::ZERO;
          _R0 = dword_2822498;
        else
          __asm
            VDIV.F32        S4, S4, S6
            VDIV.F32        S2, S2, S6
            VDIV.F32        S0, S0, S6
            VMOV            R0, S4
            VMOV            R1, S2
            VMOV            R2, S0
        *(_DWORD *)(v88 + 108) = _R2;
        *(_DWORD *)(v88 + 112) = _R1;
        *(_DWORD *)(v88 + 116) = _R0;
      if ( Entity::isControlledByLocalInstance((Entity *)v88) != 1 )
        goto LABEL_80;
      v93 = Entity::getUniqueID((Entity *)v88);
      v94 = HIDWORD(v110);
      if ( ((signed int)v110 - HIDWORD(v110)) >> 5 >= 1 )
        v95 = *(_QWORD *)v93;
        v96 = (((signed int)v110 - HIDWORD(v110)) >> 5) + 1;
        v94 = HIDWORD(v110);
        do
          _ZF = *(_QWORD *)v94 == v95;
          v98 = (_QWORD *)v94;
          if ( *(_QWORD *)v94 != v95 )
            v98 = (_QWORD *)(v94 + 8);
            _ZF = *(_QWORD *)(v94 + 8) == v95;
          if ( _ZF )
            goto LABEL_78;
          v98 = (_QWORD *)(v94 + 16);
          v99 = *(_QWORD *)(v94 + 16) == v95;
          if ( *(_QWORD *)(v94 + 16) != v95 )
            v98 = (_QWORD *)(v94 + 24);
            v99 = *(_QWORD *)(v94 + 24) == v95;
          if ( v99 )
          --v96;
          v94 += 32;
        while ( v96 > 1 );
      if ( 1 == ((signed int)v110 - v94) >> 3 )
        break;
      v100 = ((signed int)v110 - v94) >> 3;
      if ( v100 == 3 )
        v102 = *(_QWORD *)v93 >> 32;
        v101 = *(_QWORD *)v93;
        v98 = (_QWORD *)v94;
        if ( *(_QWORD *)v94 == __PAIR__(v102, v101) )
          goto LABEL_78;
        v98 = (_QWORD *)(v94 + 8);
      else
        if ( v100 != 2 )
          goto LABEL_79;
      if ( *v98 != __PAIR__(v102, v101) )
        ++v98;
        goto LABEL_77;
LABEL_78:
      if ( v98 == (_QWORD *)v110 )
LABEL_79:
        PistonBlockEntity::moveEntityLastProgress(v107, (Entity *)v88, *(__int64 *)&v116, v118);
LABEL_80:
      ++v85;
      if ( v85 == (int *)v87 )
        goto LABEL_81;
    v102 = *(_QWORD *)v93 >> 32;
    v101 = *(_QWORD *)v93;
    v98 = (_QWORD *)v94;
LABEL_77:
    if ( *v98 != __PAIR__(v102, v101) )
      goto LABEL_79;
    goto LABEL_78;
LABEL_81:
  if ( v78 )
    operator delete(v78);
  if ( HIDWORD(v110) )
    operator delete((void *)HIDWORD(v110));
LABEL_85:
  result = (RakNet *)(_stack_chk_guard - v177);
  if ( _stack_chk_guard != v177 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall MovingBlockEntity::~MovingBlockEntity(MovingBlockEntity *this)
{
  MovingBlockEntity *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_270A290;
  v2 = *((_DWORD *)this + 29);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 29) = 0;
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall MovingBlockEntity::MovingBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "MovingBlock");
  BlockEntity::BlockEntity(v3, 19, v2);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_270A290;
  *(_BYTE *)(v3 + 102) = 0;
  *(_BYTE *)(v3 + 103) = 0;
  *(_QWORD *)(v3 + 104) = -4294967296LL;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 84) = 8;
  return v3;
}


int __fastcall MovingBlockEntity::tick(MovingBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r4@1
  MovingBlockEntity *v3; // r5@1
  int v4; // r0@1
  bool v5; // zf@1
  int result; // r0@4
  char *v7; // r0@8
  char v8; // r1@8
  int v9; // r0@8
  int v10; // [sp+Ch] [bp-24h]@8
  char v11; // [sp+10h] [bp-20h]@8
  char v12; // [sp+11h] [bp-1Fh]@8
  int v13; // [sp+14h] [bp-1Ch]@8
  int v14; // [sp+18h] [bp-18h]@8
  int v15; // [sp+1Ch] [bp-14h]@8

  v2 = a2;
  v3 = this;
  BlockEntity::tick(this, a2);
  v4 = *((_DWORD *)v3 + 26);
  v5 = v4 == 0;
  if ( !v4 )
    v5 = *((_DWORD *)v3 + 27) == -1;
  if ( v5 && !*((_DWORD *)v3 + 28)
    || (result = *(_BYTE *)(BlockSource::getBlock(v2, (MovingBlockEntity *)((char *)v3 + 104)) + 4),
        result != *(_BYTE *)(Block::mPiston + 4))
    && result != *(_BYTE *)(Block::mStickyPiston + 4) )
  {
    v7 = BlockEntity::getPosition(v3);
    v13 = *(_DWORD *)v7;
    v14 = *((_DWORD *)v7 + 1);
    v15 = *((_DWORD *)v7 + 2);
    v8 = *((_BYTE *)v3 + 103);
    v11 = *((_BYTE *)v3 + 102);
    v12 = v8;
    v9 = *((_DWORD *)v3 + 29);
    *((_DWORD *)v3 + 29) = 0;
    v10 = v9;
    BlockSource::setBlockAndData((int)v2, (BlockPos *)&v13, (int)&v11, 3, 0, (int)&v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    result = 0;
  }
  return result;
}


void __fastcall MovingBlockEntity::load(MovingBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  MovingBlockEntity *v3; // r7@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  signed int v9; // r6@6
  void *v10; // r0@6
  const CompoundTag *v11; // r5@8
  void *v12; // r0@8
  int v13; // r1@9
  int v14; // r0@9
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  unsigned int *v25; // r2@34
  signed int v26; // r1@36
  unsigned int *v27; // r2@62
  signed int v28; // r1@64
  int v29; // [sp+4h] [bp-54h]@9
  int v30; // [sp+Ch] [bp-4Ch]@8
  int v31; // [sp+14h] [bp-44h]@6
  int v32; // [sp+1Ch] [bp-3Ch]@5
  int v33; // [sp+24h] [bp-34h]@4
  int v34; // [sp+2Ch] [bp-2Ch]@3
  int v35; // [sp+34h] [bp-24h]@2
  int v36; // [sp+3Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v36, "movingBlockId");
  *((_BYTE *)v3 + 102) = CompoundTag::getByte((int)v2, (const void **)&v36);
  v4 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v35, "movingBlockData");
  *((_BYTE *)v3 + 103) = CompoundTag::getByte((int)v2, (const void **)&v35);
  v5 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v35 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v34, "pistonPosX");
  *((_DWORD *)v3 + 26) = CompoundTag::getInt((int)v2, (const void **)&v34);
  v6 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v33, "pistonPosY");
  *((_DWORD *)v3 + 27) = CompoundTag::getInt((int)v2, (const void **)&v33);
  v7 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v33 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v32, "pistonPosZ");
  *((_DWORD *)v3 + 28) = CompoundTag::getInt((int)v2, (const void **)&v32);
  v8 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v32 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v31, "movingEntity");
  v9 = CompoundTag::contains((int)v2, (const void **)&v31, 10);
  v10 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v31 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v9 == 1 )
    sub_21E94B4((void **)&v30, "movingEntity");
    v11 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v30);
    v12 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v30 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
    BlockEntity::loadStatic((BlockEntity *)&v29, v11);
    v13 = v29;
    v29 = 0;
    v14 = *((_DWORD *)v3 + 29);
    *((_DWORD *)v3 + 29) = v13;
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
      if ( v29 )
        (*(void (**)(void))(*(_DWORD *)v29 + 4))();
}


int __fastcall MovingBlockEntity::aquireBlockEntity(int result, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a2 + 116) = 0;
  *(_DWORD *)result = v2;
  return result;
}


signed int __fastcall MovingBlockEntity::save(MovingBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  MovingBlockEntity *v3; // r5@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r6@7
  int v10; // r0@7
  void *v11; // r0@10
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  signed int result; // r0@15
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  void *v25; // [sp+0h] [bp-48h]@8
  int v26; // [sp+8h] [bp-40h]@8
  int v27; // [sp+10h] [bp-38h]@6
  int v28; // [sp+18h] [bp-30h]@5
  int v29; // [sp+20h] [bp-28h]@4
  int v30; // [sp+28h] [bp-20h]@3
  int v31; // [sp+30h] [bp-18h]@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v31, "movingBlockId");
    CompoundTag::putByte((int)v2, (const void **)&v31, *((_BYTE *)v3 + 102));
    v4 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
    {
      v15 = (unsigned int *)(v31 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    sub_21E94B4((void **)&v30, "movingBlockData");
    CompoundTag::putByte((int)v2, (const void **)&v30, *((_BYTE *)v3 + 103));
    v5 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v30 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    sub_21E94B4((void **)&v29, "pistonPosX");
    CompoundTag::putInt((int)v2, (const void **)&v29, *((_DWORD *)v3 + 26));
    v6 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v29 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v28, "pistonPosY");
    CompoundTag::putInt((int)v2, (const void **)&v28, *((_DWORD *)v3 + 27));
    v7 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v28 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v27, "pistonPosZ");
    CompoundTag::putInt((int)v2, (const void **)&v27, *((_DWORD *)v3 + 28));
    v8 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v9);
    v10 = *((_DWORD *)v3 + 29);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
      sub_21E94B4((void **)&v26, "movingEntity");
      v25 = v9;
      CompoundTag::putCompound((int)v2, (const void **)&v26, (int *)&v25);
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
      v25 = 0;
      v11 = (void *)(v26 - 12);
      if ( (int *)(v26 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
    else
      (*(void (__fastcall **)(void *))(*(_DWORD *)v9 + 4))(v9);
    result = 1;
  }
  else
    result = 0;
  return result;
}
