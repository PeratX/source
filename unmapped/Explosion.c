

char *__fastcall Explosion::getToBlow(Explosion *this)
{
  return (char *)this + 16;
}


int __fastcall Explosion::setMaxResistance(int result, float a2)
{
  *(float *)(result + 56) = a2;
  return result;
}


void __fastcall Explosion::explode(Explosion *this)
{
  BlockSource *v5; // r5@2
  int *v6; // r0@2
  int v7; // r0@2
  BlockSource *v8; // r5@5
  Block *v9; // r0@5
  float v10; // r1@5
  float v12; // r8@7
  int v13; // r9@7
  int v14; // r10@7
  int v16; // r11@7
  int v19; // r5@16
  BlockSource *v20; // r7@17
  Block *v21; // r0@17
  BlockSource *v22; // r5@20
  int *v23; // r0@20
  signed int v27; // r0@25
  signed int v28; // r1@27
  int v30; // r0@29
  signed int v31; // r1@29
  int v32; // r0@31
  float v35; // r2@39
  int *v36; // r0@41
  Block *v37; // r5@43
  BlockSource *v38; // r0@45
  Block *v39; // r0@45
  int v41; // r0@47
  int *v42; // r0@49
  int v44; // r0@59
  float v47; // r1@59
  int v48; // r0@59
  float v51; // r1@59
  int v52; // r0@59
  float v55; // r1@59
  int v56; // r0@59
  float v59; // r1@59
  int v60; // r0@59
  float v63; // r1@59
  __int64 v65; // r5@59
  char *v66; // r0@59
  char *v67; // r5@59
  _DWORD *v68; // r6@59
  int v69; // r1@59 OVERLAPPED
  int v70; // r2@59 OVERLAPPED
  signed int v71; // r0@59
  _DWORD *v72; // r0@61
  signed int v73; // r5@62
  Entity *v74; // r0@64
  int v76; // r0@65
  const EntityDamageSource *v78; // r7@70
  unsigned int v79; // r5@70
  int v80; // r10@70
  int v84; // r0@75
  int v86; // r9@78
  int v87; // r1@78
  Entity *v88; // r2@78
  float v89; // r1@79
  _DWORD *v90; // r9@80
  const EntityDamageSource *v91; // r6@80
  char *v92; // r7@80
  signed int v96; // [sp+Ch] [bp-1A4h]@2
  int v98; // [sp+14h] [bp-19Ch]@24
  int v99; // [sp+18h] [bp-198h]@25
  int v100; // [sp+20h] [bp-190h]@33
  float v101; // [sp+24h] [bp-18Ch]@86
  char v102; // [sp+30h] [bp-180h]@80
  char v103; // [sp+38h] [bp-178h]@83
  char v104; // [sp+40h] [bp-170h]@82
  char v105; // [sp+68h] [bp-148h]@70
  unsigned int v106; // [sp+A8h] [bp-108h]@78
  unsigned int v107; // [sp+ACh] [bp-104h]@78
  char v108; // [sp+B0h] [bp-100h]@59
  int v109; // [sp+CCh] [bp-E4h]@45
  int v110; // [sp+D0h] [bp-E0h]@45
  float v111; // [sp+D4h] [bp-DCh]@45
  char v112; // [sp+D8h] [bp-D8h]@53
  int v113; // [sp+E0h] [bp-D0h]@47
  int v114; // [sp+E4h] [bp-CCh]@41
  float v115; // [sp+E8h] [bp-C8h]@45
  float v116; // [sp+ECh] [bp-C4h]@45
  char v117; // [sp+F0h] [bp-C0h]@20
  char v118; // [sp+FCh] [bp-B4h]@17
  char v119; // [sp+108h] [bp-A8h]@5
  int v120; // [sp+114h] [bp-9Ch]@4
  signed int v121; // [sp+118h] [bp-98h]@4
  int v122; // [sp+11Ch] [bp-94h]@4
  float v123; // [sp+120h] [bp-90h]@4
  float v124; // [sp+124h] [bp-8Ch]@39
  float v125; // [sp+128h] [bp-88h]@39
  char v126; // [sp+13Ch] [bp-74h]@2

  _R4 = this;
  __asm
  {
    VLDR            S22, [R4,#0xC]
    VCMPE.F32       S22, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    v5 = (BlockSource *)*((_DWORD *)this + 13);
    BlockPos::BlockPos((int)&v126, (int)this);
    v6 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v126);
    v96 = Material::isType(v6, 5);
    v7 = *((_DWORD *)_R4 + 12);
    if ( v7 && !*(_BYTE *)(v7 + 216) )
    {
      v120 = 1048576000;
      v121 = 1048576000;
      v122 = 1048576000;
      AABB::grow((AABB *)&v123, (const Vec3 *)(v7 + 264), (int)&v120);
      v96 = BlockSource::containsLiquid(*((const BlockPos **)_R4 + 13), (mce::Math **)&v123, 5);
    }
    v8 = (BlockSource *)*((_DWORD *)_R4 + 13);
    BlockPos::BlockPos((int)&v119, (int)_R4);
    v9 = (Block *)BlockSource::getBlock(v8, (const BlockPos *)&v119);
    if ( Block::isSolid(v9) == 1 )
      _R0 = *((_DWORD *)_R4 + 12);
      if ( _R0 )
      {
        __asm
        {
          VLDR            S0, [R0,#0x6C]
          VLDR            S2, [R0,#0x70]
          VMUL.F32        S0, S0, S0
          VLDR            S4, [R0,#0x74]
          VMUL.F32        S2, S2, S2
        }
        v12 = *(float *)_R4;
        v13 = *((_DWORD *)_R4 + 1);
        v14 = *((_DWORD *)_R4 + 2);
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VSQRT.F32       S0, S0
          VMOV            R0, S0
        v16 = mce::Math::ceil(_R0, v10);
        if ( v16 >= 5 )
          v16 = 5;
        if ( v16 < 1 )
          __asm { VSTR            S22, [SP,#0x1B0+var_1A8] }
        else
          _R0 = *((_DWORD *)_R4 + 12);
          __asm
          {
            VLDR            S0, [R0,#0x6C]
            VLDR            S2, [R0,#0x70]
            VMUL.F32        S6, S0, S0
            VLDR            S4, [R0,#0x74]
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
            _R0 = &Vec3::ZERO;
            __asm
            {
              VLDR            S16, [R0]
              VLDR            S18, [R0,#4]
              VLDR            S20, [R0,#8]
            }
          else
              VDIV.F32        S20, S4, S6
              VDIV.F32        S18, S2, S6
              VDIV.F32        S16, S0, S6
          v19 = 0;
          while ( 1 )
              VLDR            S0, [R4]
              VSUB.F32        S0, S0, S16
              VSTR            S0, [R4]
              VLDR            S0, [R4,#4]
              VSUB.F32        S0, S0, S18
              VSTR            S0, [R4,#4]
              VLDR            S0, [R4,#8]
              VSUB.F32        S0, S0, S20
              VSTR            S0, [R4,#8]
            v20 = (BlockSource *)*((_DWORD *)_R4 + 13);
            BlockPos::BlockPos((int)&v118, (int)_R4);
            v21 = (Block *)BlockSource::getBlock(v20, (const BlockPos *)&v118);
            if ( !Block::isSolid(v21) )
              break;
            if ( ++v19 >= v16 )
              __asm { VSTR            S22, [SP,#0x1B0+var_1A8] }
              *(float *)_R4 = v12;
              *((_DWORD *)_R4 + 1) = v13;
              *((_DWORD *)_R4 + 2) = v14;
              goto LABEL_21;
          v22 = (BlockSource *)*((_DWORD *)_R4 + 13);
          BlockPos::BlockPos((int)&v117, (int)_R4);
          v23 = (int *)BlockSource::getMaterial(v22, (const BlockPos *)&v117);
          v96 = Material::isType(v23, 5);
      }
      else
        __asm { VSTR            S22, [SP,#0x1B0+var_1A8] }
    else
      __asm { VSTR            S22, [SP,#0x1B0+var_1A8] }
LABEL_21:
    if ( !v96 && *((_BYTE *)_R4 + 45) )
      _R9 = (int)_R4 + 56;
      __asm
        VLDR            S24, =0.6
        VLDR            S26, =0.7
        VLDR            S28, =0.3
        VLDR            S30, =0.0
      _R2 = 0;
        VLDR            S17, =-0.225
        VLDR            S19, =-0.06
        VLDR            S21, =-0.09
        VLDR            S25, =0.2
      do
        __asm { VMOV            S0, R2 }
        v98 = _R2;
        __asm { VLDR            S2, =0.13333 }
        _R3 = 0;
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S2
          VMOV.F32        S2, #-1.0
          VADD.F32        S27, S0, S2
          VMUL.F32        S0, S27, S27
          VSTR            S0, [SP,#0x1B0+var_1A0]
        do
          __asm { VMOV            S0, R3 }
          v99 = _R3;
            VLDR            S2, =0.13333
            VCVT.F32.S32    S0, S0
          v27 = 0;
          if ( _ZF )
            v27 = 1;
          v28 = 0;
          _R11 = 0;
          if ( !_R3 )
            v28 = 1;
          v30 = v27 | v28;
          v31 = 0;
            VMUL.F32        S0, S0, S2
            VMOV.F32        S2, #-1.0
            VADD.F32        S31, S0, S2
            VLDR            S2, [SP,#0x1B0+var_1A0]
            v31 = 1;
          v32 = v30 | v31;
          v10 = 0.0;
          if ( !_R2 )
            LODWORD(v10) = 1;
          v100 = v32 | LODWORD(v10);
            VMUL.F32        S0, S31, S31
            VADD.F32        S16, S0, S2
          do
            if ( v100 )
              goto LABEL_95;
            _ZF = _R11 == 15;
            if ( _R11 != 15 )
              _ZF = _R11 == 0;
            if ( _ZF )
LABEL_95:
              __asm
              {
                VMOV            S0, R11
                VLDR            S20, [R4,#0xC]
                VCVT.F32.S32    S18, S0
              }
              _R0 = Random::_genRandInt32((Explosion *)((char *)_R4 + 60));
                VMOV            S0, R0
                VLDR            D1, =2.32830644e-10
                VCVT.F64.U32    D0, S0
              v10 = *((float *)_R4 + 1);
              v35 = *((float *)_R4 + 2);
              v123 = *(float *)_R4;
              v124 = v10;
              v125 = v35;
                VMUL.F64        D0, D0, D1
                VCVT.F32.F64    S0, D0
                VMUL.F32        S0, S0, S24
                VADD.F32        S0, S0, S26
                VMUL.F32        S29, S0, S20
                VCMPE.F32       S29, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm
                {
                  VLDR            S0, =0.13333
                  VMOV.F32        S2, #-1.0
                  VMUL.F32        S0, S18, S0
                  VADD.F32        S0, S0, S2
                  VMUL.F32        S2, S0, S0
                  VADD.F32        S2, S16, S2
                  VSQRT.F32       S2, S2
                  VDIV.F32        S0, S0, S2
                  VDIV.F32        S4, S31, S2
                  VDIV.F32        S2, S27, S2
                  VMUL.F32        S18, S0, S28
                  VMUL.F32        S20, S4, S28
                  VMUL.F32        S22, S2, S28
                }
                do
                  BlockPos::BlockPos((int)&v114, (int)&v123);
                  v36 = (int *)BlockSource::getMaterial(*((BlockSource **)_R4 + 13), (const BlockPos *)&v114);
                  if ( Material::isType(v36, 5) )
                    __asm { VMOVNE.F32      S29, S30 }
                  v37 = (Block *)BlockSource::getBlock(*((BlockSource **)_R4 + 13), (const BlockPos *)&v114);
                  if ( Block::isType(v37, (const Block *)Block::mAir) )
                  {
                    if ( !*((_BYTE *)_R4 + 44) )
                      goto LABEL_54;
                    v38 = (BlockSource *)*((_DWORD *)_R4 + 13);
                    v109 = v114;
                    v110 = LODWORD(v115) - 1;
                    v111 = v116;
                    v39 = (Block *)BlockSource::getBlock(v38, (const BlockPos *)&v109);
                    if ( Block::isSolid(v39) != 1 )
                  }
                  else
                    _R0 = (*(int (__fastcall **)(Block *, _DWORD))(*(_DWORD *)v37 + 284))(v37, *((_DWORD *)_R4 + 12));
                    v113 = _R0;
                    __asm { VMOV            S23, R0 }
                    v41 = *((_DWORD *)_R4 + 12);
                    if ( v41 && (*(int (**)(void))(*(_DWORD *)v41 + 672))() == 1 )
                    {
                      __asm { VLDR            S0, [R9] }
                      v10 = COERCE_FLOAT(&v113);
                      v42 = (int *)((char *)_R4 + 56);
                      __asm
                      {
                        VCMPE.F32       S23, S0
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( _NF ^ _VF )
                        v42 = &v113;
                      v113 = *v42;
                      __asm { VMOV            S23, R0 }
                    }
                    __asm
                      VMUL.F32        S0, S23, S19
                      VADD.F32        S2, S29, S21
                      VMUL.F32        S4, S23, S25
                      VADD.F32        S29, S2, S0
                      VSTR            S4, [SP,#0x1B0+var_D0]
                      VCMPE.F32       S29, #0.0
                      VMRS            APSR_nzcv, FPSCR
                    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  std::_Hashtable<BlockPos,BlockPos,std::allocator<BlockPos>,std::__detail::_Identity,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<BlockPos&>(
                    &v112,
                    (unsigned __int64 *)_R4 + 2,
                    (int)&v114);
LABEL_54:
                  __asm
                    VLDR            S0, [SP,#0x1B0+var_90]
                    VADD.F32        S29, S29, S17
                    VADD.F32        S0, S0, S22
                    VCMPE.F32       S29, #0.0
                    VMRS            APSR_nzcv, FPSCR
                    VSTR            S0, [SP,#0x1B0+var_90]
                    VLDR            S0, [SP,#0x1B0+var_8C]
                    VADD.F32        S0, S0, S20
                    VSTR            S0, [SP,#0x1B0+var_8C]
                    VLDR            S0, [SP,#0x1B0+var_88]
                    VADD.F32        S0, S0, S18
                    VSTR            S0, [SP,#0x1B0+var_88]
                while ( !((unsigned __int8)(_NF ^ _VF) | _ZF) );
            ++_R11;
          while ( _R11 != 16 );
          _R2 = v98;
          _R3 = v99 + 1;
        while ( v99 != 15 );
        _R2 = v98 + 1;
      while ( v98 != 15 );
    __asm
      VLDR            S16, [R4,#0xC]
      VMOV.F32        S2, #-1.0
      VLDR            S0, [R4]
      VADD.F32        S18, S16, S16
      VSUB.F32        S22, S2, S18
      VADD.F32        S0, S22, S0
      VMOV            R0, S0
    v44 = mce::Math::floor(_R0, v10);
      VMOV.F32        S20, #1.0
    _R8 = v44;
      VADD.F32        S24, S18, S20
      VADD.F32        S0, S24, S0
    v48 = mce::Math::floor(_R0, v47);
    __asm { VLDR            S0, [R4,#4] }
    _R9 = v48;
    v52 = mce::Math::floor(_R0, v51);
    _R7 = v52;
    v56 = mce::Math::floor(_R0, v55);
    __asm { VLDR            S0, [R4,#8] }
    _R5 = v56;
    v60 = mce::Math::floor(_R0, v59);
    _R6 = v60;
    _R0 = mce::Math::floor(_R0, v63);
      VMOV            S0, R8
      VMOV            S2, R7
      VMOV            S10, R0
      VMOV            S4, R6
      VMOV            S6, R9
      VMOV            S8, R5
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VCVT.F32.S32    S6, S6
      VCVT.F32.S32    S8, S8
      VCVT.F32.S32    S10, S10
      VSTR            S0, [SP,#0x1B0+var_90]
      VSTR            S2, [SP,#0x1B0+var_8C]
      VSTR            S4, [SP,#0x1B0+var_88]
      VSTR            S6, [SP,#0x1B0+var_CC]
      VSTR            S8, [SP,#0x1B0+var_C8]
      VSTR            S10, [SP,#0x1B0+var_C4]
    v65 = *((_QWORD *)_R4 + 6);
    AABB::AABB((int)&v108, (int)&v123, (int)&v114);
    v66 = BlockSource::fetchEntities((BlockSource *)HIDWORD(v65), (Entity *)v65, (const AABB *)&v108);
    v67 = v66;
    v68 = 0;
    *(_QWORD *)&v69 = *(_QWORD *)v66;
    v71 = v70 - v69;
    if ( (v70 - v69) >> 2 )
      if ( (unsigned int)(v71 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v72 = operator new(v71);
      *(_QWORD *)&v69 = *(_QWORD *)v67;
      v68 = v72;
    v73 = v70 - v69;
    if ( v70 != v69 )
      _aeabi_memmove4(v68, v69);
    v74 = (Entity *)*((_DWORD *)_R4 + 12);
    if ( v74 )
      _R0 = Entity::getRadius(v74);
      __asm { VMOV            S22, R0 }
      v76 = *((_DWORD *)_R4 + 12);
      if ( v76 )
        _R0 = (*(int (**)(void))(*(_DWORD *)v76 + 52))();
        _R0 = (int)_R4;
      __asm { VLDR            S22, =0.0 }
      _R0 = (int)_R4;
    if ( v73 >> 2 )
        VMOV.F32        S0, #7.0
        VLDR            S24, [R0]
        VLDR            S26, [R0,#4]
      v78 = (const EntityDamageSource *)&v105;
      __asm { VLDR            S28, [R0,#8] }
      v79 = v73 >> 2;
      __asm { VLDR            S17, =0.0 }
      v80 = 0;
      __asm { VMUL.F32        S30, S16, S0 }
      while ( 1 )
        _R11 = v68[v80];
          VLDR            S16, [R11,#0x48]
          VLDR            S19, [R11,#0x50]
          VLDR            S21, [R11,#0x10C]
        _R0 = Entity::getRadius((Entity *)v68[v80]);
          VSUB.F32        S2, S21, S26
          VSUB.F32        S4, S16, S24
          VSUB.F32        S0, S19, S28
          VMOV            S6, R0
          VADD.F32        S2, S2, S4
          VSUB.F32        S0, S0, S6
          VSUB.F32        S0, S0, S22
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S0, S17 }
          VDIV.F32        S16, S0, S18
          VCMPE.F32       S16, S20
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          goto LABEL_87;
        _R0 = BlockSource::getSeenPercent(*((BlockSource **)_R4 + 13), _R4, (const AABB *)(_R11 + 264));
          VSUB.F32        S2, S20, S16
          VMOV            S0, R0
        v84 = *((_DWORD *)_R4 + 12);
          VMUL.F32        S16, S0, S2
          VMUL.F32        S0, S16, S16
          VADD.F32        S0, S0, S16
          VMUL.F32        S0, S30, S0
          VADD.F32        S0, S0, S20
          VCVTR.S32.F32   S0, S0
          VMOV            R8, S0
        if ( _ZF )
          break;
        if ( v96 )
          _R8 = 0;
        v86 = BlockSource::getLevel(*((BlockSource **)_R4 + 13));
        (*(void (__fastcall **)(unsigned int *))(**((_DWORD **)_R4 + 12) + 500))(&v106);
        v88 = (Entity *)Level::fetchEntity(v86, v87, v106, v107, 0);
        if ( !v88 )
          if ( Entity::hasCategory(*((_DWORD *)_R4 + 12), 2) == 1 )
            EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v104, *((Entity **)_R4 + 12), 11);
            v90 = v68;
            v91 = v78;
            Entity::hurt((Entity *)_R11, (const EntityDamageSource *)&v104, _R8, 1, 0);
            EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v104);
LABEL_85:
            v78 = v91;
            v68 = v90;
            goto LABEL_86;
          EntityDamageSource::EntityDamageSource((int)&v103, 10);
          v90 = v68;
          v91 = v78;
          v92 = &v103;
          Entity::hurt((Entity *)_R11, (const EntityDamageSource *)&v103, _R8, 1, 0);
LABEL_84:
          EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)v92);
          goto LABEL_85;
        EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)v78, *((_DWORD *)_R4 + 12), v88, 11);
        Entity::hurt((Entity *)_R11, v78, _R8, 1, 0);
        EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource(v78);
LABEL_86:
          VLDR            S0, [R4]
          VLDR            S6, [R11,#0x48]
          VLDR            S2, [R4,#4]
          VLDR            S8, [R11,#0x4C]
          VSUB.F32        S21, S6, S0
          VLDR            S4, [R4,#8]
          VSUB.F32        S23, S8, S2
          VLDR            S10, [R11,#0x50]
          VSUB.F32        S19, S10, S4
          VMUL.F32        S0, S21, S21
          VMUL.F32        S2, S23, S23
          VMUL.F32        S4, S19, S19
        _R0 = mce::Math::invSqrt(_R0, v89);
          VMUL.F32        S2, S21, S16
          VMUL.F32        S4, S23, S16
          VMUL.F32        S6, S0, S16
          VMUL.F32        S2, S2, S0
          VMUL.F32        S0, S4, S0
          VMUL.F32        S4, S6, S19
          VSTR            S2, [SP,#0x1B0+var_18C]
          VSTR            S0, [SP,#0x1B0+var_188]
          VSTR            S4, [SP,#0x1B0+var_184]
        (*(void (__fastcall **)(int, float *))(*(_DWORD *)_R11 + 280))(_R11, &v101);
LABEL_87:
        if ( ++v80 >= v79 )
            VLDR            S0, [SP,#0x1B0+var_1A8]
            VSTR            S0, [R4,#0xC]
          goto LABEL_90;
      EntityDamageSource::EntityDamageSource((int)&v102, 10);
      v90 = v68;
      v91 = v78;
      v92 = &v102;
      Entity::hurt((Entity *)_R11, (const EntityDamageSource *)&v102, _R8, 1, 0);
      goto LABEL_84;
      VLDR            S0, [SP,#0x1B0+var_1A8]
      VSTR            S0, [R4,#0xC]
    if ( !_ZF )
LABEL_90:
      operator delete(v68);
}


int __fastcall Explosion::finalizeExplosion(Explosion *this)
{
  Level *v2; // r8@1
  int v3; // r7@1
  int v4; // r11@1
  int v5; // r10@1
  int v14; // r1@2
  int v15; // r1@2
  int v16; // r4@6
  int v17; // r7@6
  int v18; // r9@6
  Level *v19; // r10@7
  Random *v20; // r6@7
  int v24; // r1@9
  int v25; // r12@9
  int v29; // r5@12
  Level *v30; // r6@12
  int v31; // r11@12
  char *v32; // r0@12
  int v33; // r10@13
  void (__fastcall *v34)(int, int, int, unsigned int); // ST24_4@13
  unsigned int v35; // r0@13
  int v36; // r0@15
  int v37; // r0@15
  int v38; // r1@15
  int v39; // r2@15
  int v40; // r3@19
  int v41; // r3@21
  int v42; // r2@23
  int v43; // r1@25
  int i; // r7@32
  int v45; // r2@33
  int v46; // r3@33
  const BlockPos *v47; // r1@33
  int v48; // r0@36
  int v49; // r0@36
  int v50; // r1@36
  int v51; // r2@36
  int v52; // r3@36
  int v53; // r3@38
  int v54; // r3@40
  int v55; // r3@42
  int v56; // r2@44
  int v57; // r1@46
  int result; // r0@52
  BlockSource *v59; // r0@53
  int v60; // [sp+20h] [bp-118h]@32
  int v61; // [sp+24h] [bp-114h]@32
  signed int v62; // [sp+28h] [bp-110h]@7
  int v63; // [sp+2Ch] [bp-10Ch]@7
  int v64; // [sp+30h] [bp-108h]@1
  int v65; // [sp+34h] [bp-104h]@1
  int v66; // [sp+38h] [bp-100h]@1
  Explosion *v67; // [sp+3Ch] [bp-FCh]@1
  int v68; // [sp+40h] [bp-F8h]@53
  int v69; // [sp+44h] [bp-F4h]@53
  int v70; // [sp+48h] [bp-F0h]@53
  int v71; // [sp+4Ch] [bp-ECh]@53
  int v72; // [sp+50h] [bp-E8h]@53
  int v73; // [sp+54h] [bp-E4h]@53
  char v74; // [sp+58h] [bp-E0h]@36
  char v75; // [sp+59h] [bp-DFh]@36
  int v76; // [sp+5Ch] [bp-DCh]@33
  int v77; // [sp+60h] [bp-D8h]@33
  int v78; // [sp+64h] [bp-D4h]@33
  char v79; // [sp+68h] [bp-D0h]@15
  char v80; // [sp+69h] [bp-CFh]@15
  float v81; // [sp+6Ch] [bp-CCh]@9
  float v82; // [sp+78h] [bp-C0h]@9
  float v85; // [sp+84h] [bp-B4h]@9
  int v86; // [sp+90h] [bp-A8h]@9
  int v87; // [sp+94h] [bp-A4h]@9
  int v88; // [sp+98h] [bp-A0h]@9
  int v89; // [sp+9Ch] [bp-9Ch]@9
  int v90; // [sp+A0h] [bp-98h]@9
  int v91; // [sp+A4h] [bp-94h]@9
  float v92; // [sp+A8h] [bp-90h]@9
  unsigned __int8 v95; // [sp+B4h] [bp-84h]@8
  int v96; // [sp+B8h] [bp-80h]@2
  int v97; // [sp+BCh] [bp-7Ch]@2
  int v98; // [sp+C0h] [bp-78h]@2
  int v99; // [sp+C4h] [bp-74h]@1
  int v100; // [sp+C8h] [bp-70h]@1
  int v101; // [sp+CCh] [bp-6Ch]@1

  _R4 = this;
  v67 = this;
  v2 = (Level *)BlockSource::getLevel(*((BlockSource **)this + 13));
  v66 = BlockPos::MIN;
  v3 = dword_2816258;
  v4 = dword_2816254;
  v64 = BlockPos::MAX;
  v5 = dword_2816264;
  v65 = unk_2816260;
  _R0 = *(_DWORD *)_R4;
  _R2 = *((_DWORD *)_R4 + 1);
  _R3 = *((_DWORD *)_R4 + 2);
  v99 = *(_DWORD *)_R4;
  v100 = _R2;
  v101 = _R3;
  __asm
  {
    VLDR            S0, [R4,#0xC]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VMOV            S16, R3
      VMOV            S18, R2
      VMOV            S20, R0
    }
  else
    _R4 = v67;
    v14 = *((_DWORD *)v67 + 13);
    v96 = _R0;
    v97 = _R2;
    v98 = _R3;
    Level::broadcastSoundEvent(v2, v14, 46, (int)&v96, -1, 1, 0, 0);
      VMOV.F32        S0, #2.0
      VLDR            S2, [R4,#0xC]
    v15 = 15;
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v15 = 14;
    Level::addParticle((int)v2, v15, (int)&v99);
      VLDR            S20, [R4]
      VLDR            S18, [R4,#4]
      VLDR            S16, [R4,#8]
  v16 = v3;
  v17 = v5;
  v18 = *((_DWORD *)v67 + 6);
  if ( v18 )
      VMOV.F32        S28, #0.5
      VLDR            D11, =2.32830644e-10
    v19 = v2;
    v20 = (Explosion *)((char *)v67 + 60);
      VLDR            S17, =0.1
      VLDR            S29, =0.3
    v63 = v17;
    v62 = 0;
    do
      BlockSource::getBlockID((BlockSource *)&v95, *((const BlockPos **)v67 + 13), v18 + 4);
      if ( !(Random::_genRandInt32(v20) & 7) )
      {
        _R0 = Random::_genRandInt32(v20);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D15, S0
        }
          VCVT.F64.U32    D12, S0
          VMUL.F64        D1, D15, D11
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D11
          VMUL.F64        D2, D12, D11
          VCVT.F32.F64    S2, D1
          VCVT.F32.F64    S4, D2
          VCVT.F32.F64    S0, D0
          VSTR            S2, [SP,#0x138+var_B4]
          VSTR            S4, [SP,#0x138+var_B0]
          VSTR            S0, [SP,#0x138+var_AC]
        BlockPos::BlockPos((int)&v86, (int)&v85);
        v24 = *(_DWORD *)(v18 + 8);
        v25 = *(_DWORD *)(v18 + 12);
        v89 = *(_DWORD *)(v18 + 4) + v86;
        v90 = v87 + v24;
        v91 = v88 + v25;
        _R5 = v67;
        Vec3::Vec3((int)&v92, (int)&v89);
          VLDR            S0, [SP,#0x138+var_90]
          VLDR            S2, [SP,#0x138+var_8C]
          VLDR            S4, [SP,#0x138+var_88]
          VSUB.F32        S0, S0, S20
          VSUB.F32        S2, S2, S18
          VSUB.F32        S24, S4, S16
          VSTR            S0, [SP,#0x138+var_C0]
          VMUL.F32        S30, S0, S0
          VSTR            S2, [SP,#0x138+var_BC]
          VMUL.F32        S21, S2, S2
          VSTR            S24, [SP,#0x138+var_B8]
          VLDR            S19, [R5,#0xC]
          VMUL.F32        S24, S24, S24
          VCVT.F64.U32    D13, S0
          VADD.F32        S30, S21, S30
          VADD.F32        S2, S30, S24
          VADD.F32        S2, S2, S2
          VLDR            S6, [SP,#0x138+var_90]
          VMUL.F64        D2, D13, D11
          VADD.F32        S2, S2, S17
          VLDR            S8, [SP,#0x138+var_8C]
          VDIV.F32        S2, S19, S2
          VMUL.F32        S0, S0, S4
          VLDR            S10, [SP,#0x138+var_88]
          VADD.F32        S0, S0, S29
          VMUL.F32        S0, S0, S2
          VLDR            S2, [SP,#0x138+var_C0]
          VMUL.F32        S2, S0, S2
          VSTR            S2, [SP,#0x138+var_C0]
          VLDR            S2, [SP,#0x138+var_BC]
          VLDR            S2, [SP,#0x138+var_B8]
          VSTR            S0, [SP,#0x138+var_B8]
          VLDR            S0, [R5]
          VLDR            S2, [R5,#4]
          VLDR            S4, [R5,#8]
          VADD.F32        S0, S0, S6
          VADD.F32        S2, S2, S8
          VADD.F32        S4, S4, S10
          VMUL.F32        S0, S0, S28
          VMUL.F32        S2, S2, S28
          VMUL.F32        S4, S4, S28
          VSTR            S0, [SP,#0x138+var_CC]
          VSTR            S2, [SP,#0x138+var_C8]
          VSTR            S4, [SP,#0x138+var_C4]
        Level::addParticle((int)v19, 5, (int)&v81);
        Level::addParticle((int)v19, 4, (int)&v92);
      }
      if ( v95 )
        if ( !Level::isClientSide(v19) )
          v29 = v4;
          v30 = v19;
          v31 = Block::mBlocks[v95];
          v32 = Level::getLevelData(v19);
          if ( LevelData::getGameType((LevelData *)v32) != 1 )
          {
            v33 = *((_DWORD *)v67 + 13);
            v34 = *(void (__fastcall **)(int, int, int, unsigned int))(*(_DWORD *)v31 + 276);
            v35 = BlockSource::getData(*((BlockSource **)v67 + 13), (const BlockPos *)(v18 + 4));
            v34(v31, v33, v18 + 4, v35);
          }
          (*(void (__fastcall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v31 + 164))(
            v31,
            *((_QWORD *)v67 + 6) >> 32,
            v18 + 4,
            *((_QWORD *)v67 + 6));
          v19 = v30;
          v20 = (Explosion *)((char *)v67 + 60);
          v4 = v29;
        v36 = *((_DWORD *)v67 + 13);
        v79 = 0;
        v80 = 0;
        BlockSource::setBlockAndData(v36, (BlockPos *)(v18 + 4), (int)&v79, 1, 0);
        v37 = *(_DWORD *)(v18 + 4);
        v38 = *(_DWORD *)(v18 + 8);
        v39 = *(_DWORD *)(v18 + 12);
        if ( v16 < v39 )
          v16 = *(_DWORD *)(v18 + 12);
        if ( v4 < v38 )
          v4 = *(_DWORD *)(v18 + 8);
        v40 = v66;
        if ( v66 < v37 )
          v40 = *(_DWORD *)(v18 + 4);
        v66 = v40;
        v41 = v63;
        if ( v39 < v63 )
          v41 = *(_DWORD *)(v18 + 12);
        v42 = v65;
        v63 = v41;
        if ( v38 < v65 )
          v42 = *(_DWORD *)(v18 + 8);
        v43 = v64;
        v65 = v42;
        if ( v37 < v64 )
          v43 = *(_DWORD *)(v18 + 4);
        v64 = v43;
        ++v62;
      v18 = *(_DWORD *)v18;
    while ( v18 );
    v63 = v5;
  if ( *((_BYTE *)v67 + 44) )
    v60 = v16;
    v61 = v4;
    for ( i = *((_DWORD *)v67 + 6); i; i = *(_DWORD *)i )
      BlockSource::getBlockID((BlockSource *)&v92, *((const BlockPos **)v67 + 13), i + 4);
      v45 = *(_DWORD *)(i + 8);
      v46 = *(_DWORD *)(i + 12);
      v47 = (const BlockPos *)*((_DWORD *)v67 + 13);
      v76 = *(_DWORD *)(i + 4);
      v77 = v45 - 1;
      v78 = v46;
      BlockSource::getBlockID((BlockSource *)&v82, v47, (int)&v76);
      if ( !LOBYTE(v92) && Block::mSolid[LOBYTE(v82)] && !(Random::_genRandInt32((Explosion *)((char *)v67 + 60)) % 3) )
        v48 = *((_DWORD *)v67 + 13);
        v74 = *(_BYTE *)(Block::mFire + 4);
        v75 = 0;
        BlockSource::setBlockAndData(v48, (BlockPos *)(i + 4), (int)&v74, 3, 0);
        v49 = *(_DWORD *)(i + 4);
        v50 = *(_DWORD *)(i + 8);
        v51 = *(_DWORD *)(i + 12);
        v52 = v60;
        if ( v60 < v51 )
          v52 = *(_DWORD *)(i + 12);
        v60 = v52;
        v53 = v61;
        if ( v61 < v50 )
          v53 = *(_DWORD *)(i + 8);
        v61 = v53;
        v54 = v66;
        if ( v66 < v49 )
          v54 = *(_DWORD *)(i + 4);
        v66 = v54;
        v55 = v63;
        if ( v51 < v63 )
          v55 = *(_DWORD *)(i + 12);
        v56 = v65;
        v63 = v55;
        if ( v50 < v65 )
          v56 = *(_DWORD *)(i + 8);
        v57 = v64;
        v65 = v56;
        if ( v49 < v64 )
          v57 = *(_DWORD *)(i + 4);
        v64 = v57;
  result = v62;
  if ( v62 >= 1 )
    v59 = (BlockSource *)*((_DWORD *)v67 + 13);
    v71 = v64 - 1;
    v72 = v65 - 1;
    v73 = v63 - 1;
    v68 = v66 + 1;
    v69 = v61 + 1;
    v70 = v60 + 1;
    result = BlockSource::fireAreaChanged(v59, (const BlockPos *)&v71, (const BlockPos *)&v68);
  return result;
}


int __fastcall Explosion::Explosion(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r8@1
  float v7; // r4@1
  double v8; // r0@1
  int v9; // r2@1
  unsigned int v14; // r0@1
  int v15; // r5@3
  void *v16; // r7@3
  unsigned int v17; // r0@4
  signed int v18; // r2@4
  signed int v19; // r1@4
  int v20; // r0@5
  int v21; // r7@5

  v5 = a3;
  v6 = a2;
  v7 = a1;
  HIDWORD(v8) = *(_DWORD *)(a4 + 4);
  v9 = *(_DWORD *)(a4 + 8);
  __asm { VLDR            S0, [SP,#0x18+arg_0] }
  *(_DWORD *)LODWORD(a1) = *(_DWORD *)a4;
  *(_DWORD *)(LODWORD(a1) + 4) = HIDWORD(v8);
  *(_DWORD *)(LODWORD(a1) + 8) = v9;
  __asm { VSTR            S0, [R4,#0xC] }
  *(_DWORD *)(LODWORD(a1) + 24) = 0;
  *(_DWORD *)(LODWORD(a1) + 28) = 0;
  *(_DWORD *)(LODWORD(a1) + 32) = 1065353216;
  LODWORD(v8) = LODWORD(a1) + 32;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v14 = sub_21E6254(v8);
  *(_DWORD *)(LODWORD(v7) + 20) = v14;
  if ( v14 == 1 )
  {
    *(_DWORD *)(LODWORD(v7) + 40) = 0;
    v16 = (void *)(LODWORD(v7) + 40);
  }
  else
    if ( v14 >= 0x40000000 )
      sub_21E57F4();
    v15 = 4 * v14;
    v16 = operator new(4 * v14);
    _aeabi_memclr4(v16, v15);
  *(_DWORD *)(LODWORD(v7) + 16) = v16;
  *(_BYTE *)(LODWORD(v7) + 44) = 0;
  *(_BYTE *)(LODWORD(v7) + 45) = 1;
  *(_DWORD *)(LODWORD(v7) + 48) = v5;
  *(_DWORD *)(LODWORD(v7) + 52) = v6;
  *(_DWORD *)(LODWORD(v7) + 56) = 2139095039;
  v17 = sub_21E67AC((int)&Random::mRandomDevice);
  *(_DWORD *)(LODWORD(v7) + 60) = v17;
  v18 = 17;
  *(_DWORD *)(LODWORD(v7) + 2560) = 625;
  v19 = 1;
  *(_BYTE *)(LODWORD(v7) + 2564) = 0;
  *(_DWORD *)(LODWORD(v7) + 2568) = 0;
  *(_DWORD *)(LODWORD(v7) + 64) = v17;
  do
    v20 = v17 ^ (v17 >> 30);
    v21 = v18 + 1812433253 * v20;
    v17 = v19++ + 1812433253 * v20;
    *(_DWORD *)(LODWORD(v7) + 4 * v18++) = v21 - 16;
  while ( v18 != 414 );
  *(_DWORD *)(LODWORD(v7) + 2560) = 624;
  *(_DWORD *)(LODWORD(v7) + 2572) = 398;
  return LODWORD(v7);
}


void __fastcall Explosion::explode(Explosion *this)
{
  Explosion::explode(this);
}


int __fastcall Explosion::setBreaking(int result, bool a2)
{
  *(_BYTE *)(result + 45) = a2;
  return result;
}


int __fastcall Explosion::setFire(int result, bool a2)
{
  *(_BYTE *)(result + 44) = a2;
  return result;
}
