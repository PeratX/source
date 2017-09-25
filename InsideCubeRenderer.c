

int __fastcall InsideCubeRenderer::_rebuildCubeMesh(InsideCubeRenderer *this, Tessellator *a2)
{
  Tessellator *v2; // r5@1
  InsideCubeRenderer *v3; // r8@1
  char v12; // [sp+8h] [bp-B0h]@1
  float v13; // [sp+6Ch] [bp-4Ch]@1
  float v14; // [sp+78h] [bp-40h]@1
  float v15; // [sp+84h] [bp-34h]@1
  float v16; // [sp+90h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  Tessellator::begin((int)a2, 2, 24, 0);
  Tessellator::vertex(v2, (const Vec3 *)&Vec3::ZERO);
  _R7 = Vec3::UNIT_X;
  Tessellator::vertex(v2, (const Vec3 *)Vec3::UNIT_X);
  __asm
  {
    VLDR            S0, [R7]
    VLDR            S2, [R7,#4]
    VLDR            S4, [R7,#8]
  }
  _R6 = &Vec3::UNIT_Z;
    VLDR            S6, [R6]
    VLDR            S8, [R6,#4]
    VLDR            S10, [R6,#8]
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0xB8+var_28]
    VSTR            S2, [SP,#0xB8+var_24]
    VSTR            S4, [SP,#0xB8+var_20]
  Tessellator::vertex(v2, (const Vec3 *)&v16);
  Tessellator::vertex(v2, (const Vec3 *)&Vec3::UNIT_Z);
  _R4 = &Vec3::UNIT_Y;
  Tessellator::vertex(v2, (const Vec3 *)&Vec3::UNIT_Y);
    VLDR            S0, [R4]
    VLDR            S6, [R7]
    VLDR            S2, [R4,#4]
    VLDR            S8, [R7,#4]
    VLDR            S4, [R4,#8]
    VLDR            S10, [R7,#8]
    VSTR            S0, [SP,#0xB8+var_34]
    VSTR            S2, [SP,#0xB8+var_30]
    VSTR            S4, [SP,#0xB8+var_2C]
  Tessellator::vertex(v2, (const Vec3 *)&v15);
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0xB8+var_40]
    VSTR            S2, [SP,#0xB8+var_3C]
    VSTR            S4, [SP,#0xB8+var_38]
  Tessellator::vertex(v2, (const Vec3 *)&v14);
    VSTR            S0, [SP,#0xB8+var_4C]
    VSTR            S2, [SP,#0xB8+var_48]
    VSTR            S4, [SP,#0xB8+var_44]
  Tessellator::vertex(v2, (const Vec3 *)&v13);
  Tessellator::beginIndices(v2, 0);
  Tessellator::quad(v2, 3u, 2u, 1u, 0);
  Tessellator::quad(v2, 4u, 5u, 6u, 7u);
  Tessellator::quad(v2, 0, 1u, 5u, 4u);
  Tessellator::quad(v2, 1u, 2u, 6u, 5u);
  Tessellator::quad(v2, 2u, 3u, 7u, 6u);
  Tessellator::quad(v2, 3u, 0, 4u, 7u);
  Tessellator::end((Tessellator *)&v12, (const char *)v2, 0, 0);
  mce::Mesh::operator=((int)v3 + 40, (int)&v12);
  return mce::Mesh::~Mesh((mce::Mesh *)&v12);
}


void __fastcall InsideCubeRenderer::~InsideCubeRenderer(InsideCubeRenderer *this)
{
  InsideCubeRenderer::~InsideCubeRenderer(this);
}


void __fastcall InsideCubeRenderer::~InsideCubeRenderer(InsideCubeRenderer *this)
{
  AppPlatformListener *v1; // r4@1
  mce::Mesh *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DC76C;
  v2 = (InsideCubeRenderer *)((char *)this + 40);
  mce::MaterialPtr::~MaterialPtr((InsideCubeRenderer *)((char *)this + 140));
  mce::Mesh::~Mesh(v2);
  AppPlatformListener::~AppPlatformListener(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall InsideCubeRenderer::_determineBlocksToRender(int a1, float a2, mce::Math **a3, int a4)
{
  InsideCubeRenderer::_determineBlocksToRender(a1, a2, a3, a4);
}


char *__fastcall InsideCubeRenderer::_determineBlocksToRender(int a1, float a2, mce::Math **a3, int a4)
{
  mce::Math **v4; // r5@1
  int v5; // r4@1
  float v7; // r1@1
  float v12; // r1@1
  Entity *v13; // r11@3
  char *v14; // r5@3
  int *v15; // r10@3
  signed int v16; // r2@3
  signed int v17; // r3@4
  int v18; // r8@4
  signed int v19; // r6@5
  int v20; // r7@5
  BlockSource *v21; // r0@6
  int v22; // r9@6
  BlockSource *v23; // r0@8
  int v24; // r8@8
  int *v25; // r7@8
  int *v26; // r0@8
  int (__fastcall *v27)(int, int, int *); // r10@9
  int v28; // r0@9
  int v29; // r0@9
  char v30; // r1@9
  char v31; // r2@11
  char *v34; // r4@26
  signed int v35; // r8@26
  signed int v38; // r7@27
  char *v40; // r10@28
  char *result; // r0@28
  __int64 v44; // r0@30
  signed int v45; // r0@32
  signed int v46; // r0@32
  unsigned int v47; // r1@32
  unsigned int v48; // r2@34
  unsigned int v49; // r0@34
  int v50; // r11@39
  char *v51; // r8@39
  char *v52; // r4@39
  int v53; // r0@39
  int v54; // r2@39
  char *v55; // r1@39
  int v56; // r3@40
  int v57; // r6@40
  int v58; // r7@40
  int v59; // r6@42
  __int64 v61; // r0@59
  signed int v62; // r0@61
  signed int v63; // r0@61
  unsigned int v64; // r1@61
  unsigned int v65; // r2@63
  unsigned int v66; // r0@63
  int v67; // r9@68
  char *v68; // r11@68
  int v69; // r0@68
  int v70; // r2@68
  char *v71; // r1@68
  __int64 v72; // kr20_8@69
  int v73; // r6@69
  int v74; // r6@71
  float v75; // [sp+4h] [bp-CCh]@1
  int v76; // [sp+8h] [bp-C8h]@4
  char *v77; // [sp+Ch] [bp-C4h]@4
  int v78; // [sp+10h] [bp-C0h]@1
  mce::Math **v79; // [sp+14h] [bp-BCh]@1
  signed int v80; // [sp+18h] [bp-B8h]@4
  int v81; // [sp+1Ch] [bp-B4h]@3
  char *v82; // [sp+20h] [bp-B0h]@5
  int v83; // [sp+24h] [bp-ACh]@5
  int v84; // [sp+28h] [bp-A8h]@1
  char *v85; // [sp+2Ch] [bp-A4h]@3
  int v86; // [sp+30h] [bp-A0h]@5
  int v87; // [sp+34h] [bp-9Ch]@4
  signed int v88; // [sp+34h] [bp-9Ch]@27
  int v89; // [sp+38h] [bp-98h]@5
  signed int v90; // [sp+38h] [bp-98h]@28
  int v91; // [sp+3Ch] [bp-94h]@1
  int v92[2]; // [sp+40h] [bp-90h]@3
  int v93; // [sp+48h] [bp-88h]@6
  char v94; // [sp+4Dh] [bp-83h]@3

  v4 = a3;
  v5 = a1;
  _R7 = a4;
  v79 = a3;
  v75 = a2;
  v84 = a1;
  v78 = mce::Math::floor(*a3, a2);
  _R6 = mce::Math::floor(v4[1], v7);
  __asm { VMOV            S16, R7 }
  v91 = mce::Math::floor(v4[2], v12);
  if ( _R6 < 1 )
    _R6 = 1;
  __asm { VMOV            S0, R6 }
  v81 = _R6;
  __asm { VCVT.F32.S32    S18, S0 }
  v13 = (Entity *)ClientInstance::getCameraEntity(*(ClientInstance **)(v5 + 8));
  *(_BYTE *)(v5 + 152) = 0;
  v14 = &v94;
  v15 = v92;
  v16 = -1;
  v85 = 0;
  do
  {
    v17 = -1;
    v77 = v14;
    v18 = v16 + v78;
    v80 = v16;
    v87 = v16 + v78;
    v76 = v16 + 1;
    do
    {
      v86 = v17 | v16;
      v19 = -1;
      v82 = v14;
      v20 = v17 + v81;
      v89 = v17 + v81;
      v83 = v17 + 1;
      do
      {
        v92[0] = v18;
        v92[1] = v20;
        v93 = v91 + v19;
        v21 = (BlockSource *)Entity::getRegion(v13);
        v22 = BlockSource::getBlock(v21, v92[0], v92[1], v93);
        if ( *(_BYTE *)(v22 + 4) == BlockID::AIR )
        {
          *v14 = 0;
          goto LABEL_23;
        }
        v23 = (BlockSource *)Entity::getRegion(v13);
        v24 = BlockSource::isConsideredSolidBlock(v23, (const BlockPos *)v15);
        v25 = v15;
        v26 = (int *)Block::getMaterial((Block *)v22);
        if ( Material::isType(v26, 7) == 1 )
          v27 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v22 + 408);
          v28 = Entity::getRegion(v13);
          v29 = v27(v22, v28, v25);
          v30 = 0;
          if ( v29 == 6 )
            v30 = 1;
          v31 = 0;
          if ( v29 == 3 )
            v31 = 1;
          *v14 = v30 | v31 | v24;
          if ( !v24 )
          {
            _ZF = v29 == 3;
            if ( v29 != 3 )
              _ZF = v29 == 6;
            if ( !_ZF )
            {
LABEL_22:
              v15 = v25;
              v85 = (char *)1;
              v20 = v89;
              v18 = v87;
              goto LABEL_23;
            }
          }
        else
          *v14 = v24;
          if ( v24 != 1 )
            goto LABEL_22;
        v18 = v87;
        if ( !(v86 | v19) )
          *(_BYTE *)(v84 + 152) = 1;
        v15 = v25;
        v20 = v89;
LABEL_23:
        ++v19;
        ++v14;
      }
      while ( v19 != 2 );
      v17 = v83;
      v16 = v80;
      v14 = v82 + 3;
    }
    while ( v83 != 2 );
    v14 = v77 + 9;
    v16 = v76;
  }
  while ( v76 != 2 );
  _R0 = v91;
  __asm
    VMOV.F32        S20, #1.0
    VMOV.F32        S22, #-1.0
  v34 = &v94;
  v35 = -1;
    VMOV            S0, R0
    VCVT.F32.S32    S24, S0
  _R0 = v78;
    VADD.F32        S28, S16, S20
    VMOV.F32        S30, S22
    VCVT.F32.S32    S0, S0
  _R9 = v79;
  __asm { VSTR            S0, [SP,#0xD0+var_A0] }
    __asm
      VLDR            S0, [SP,#0xD0+var_A0]
      VMOV.F32        S23, S22
    v38 = -1;
    __asm { VADD.F32        S0, S30, S0 }
    _R0 = v78 + v35++;
      VMOV            S2, R0
      VCVT.F32.S32    S17, S2
    v88 = v35;
      VSUB.F32        S19, S0, S16
      VADD.F32        S21, S0, S28
      v40 = (char *)-1;
      _R0 = v81 + v38++;
      __asm
        VMOV            S0, R0
        VCVT.F32.S32    S25, S0
      result = v85;
      v90 = v38;
      if ( (unsigned __int8)v85 & 1 )
        while ( 1 )
          result = v40++;
          if ( v40[(_DWORD)(&v34[9 * v35] + 3 * v38)] )
            _R0 = &result[v91];
            __asm
              VMOV            S0, R0
              VCVT.F32.S32    S27, S0
            v44 = *(_QWORD *)(LODWORD(v75) + 4);
            if ( (_DWORD)v44 == HIDWORD(v44) )
              v45 = v44 - *(_DWORD *)LODWORD(v75);
              _ZF = v45 == 0;
              v46 = v45 >> 2;
              v47 = -1431655765 * v46;
              if ( _ZF )
                v47 = 1;
              v49 = v47 + -1431655765 * v46;
              v48 = v49;
              if ( v49 > 0x15555555 )
                v49 = 357913941;
              if ( v48 < v47 )
                goto LABEL_78;
              v50 = 3 * v49;
              v51 = v34;
              v52 = (char *)operator new(12 * v49);
              v54 = *(_QWORD *)LODWORD(v75) >> 32;
              v53 = *(_QWORD *)LODWORD(v75);
              __asm
              {
                VSTR            S17, [R1]
                VSTR            S25, [R1,#4]
                VSTR            S27, [R1,#8]
              }
              v55 = v52;
              if ( !_ZF )
                do
                {
                  v56 = *(_DWORD *)v53;
                  v57 = *(_DWORD *)(v53 + 4);
                  v58 = *(_DWORD *)(v53 + 8);
                  v53 += 12;
                  *(_DWORD *)v55 = v56;
                  *((_DWORD *)v55 + 1) = v57;
                  *((_DWORD *)v55 + 2) = v58;
                  v55 += 12;
                }
                while ( v54 != v53 );
                v53 = *(_DWORD *)LODWORD(v75);
              v59 = (int)(v55 + 12);
              if ( v53 )
                operator delete((void *)v53);
              result = &v52[4 * v50];
              *(_DWORD *)LODWORD(v75) = v52;
              *(_DWORD *)(LODWORD(v75) + 4) = v59;
              *(_DWORD *)(LODWORD(v75) + 8) = result;
              v34 = v51;
              v38 = v90;
              v35 = v88;
            else
                VSTR            S17, [R0]
                VSTR            S25, [R0,#4]
                VSTR            S27, [R0,#8]
              result = (char *)(*(_DWORD *)(LODWORD(v75) + 4) + 12);
              *(_DWORD *)(LODWORD(v75) + 4) = result;
          if ( (signed int)v40 >= 2 )
            goto LABEL_75;
        VADD.F32        S0, S23, S18
        VMOV.F32        S31, S22
        VADD.F32        S27, S0, S28
        VSUB.F32        S29, S0, S16
        __asm
          VLDR            S0, [R9]
          VCMPE.F32       S19, S0
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          __asm
            VLDR            S6, [R9,#4]
            VCMPE.F32       S29, S6
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              VADD.F32        S2, S31, S24
              VLDR            S4, [R9,#8]
              VADD.F32        S8, S2, S28
              VCMPE.F32       S8, S4
              VMRS            APSR_nzcv, FPSCR
            if ( !(_NF ^ _VF) )
                VCMPE.F32       S27, S6
                VMRS            APSR_nzcv, FPSCR
              if ( !(_NF ^ _VF) )
                __asm
                  VCMPEGE.F32     S21, S0
                  VMRSGE          APSR_nzcv, FPSCR
                  VSUB.F32        S0, S2, S16
                  VCMPE.F32       S0, S4
                  VMRS            APSR_nzcv, FPSCR
                if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  result = (char *)v40[(_DWORD)(&v34[9 * v35] + 3 * v38) + 1];
                  if ( v40[(_DWORD)(&v34[9 * v35] + 3 * v38) + 1] )
                  {
                    _R0 = (int)&v40[v91];
                    __asm
                    {
                      VMOV            S0, R0
                      VCVT.F32.S32    S26, S0
                    }
                    v61 = *(_QWORD *)(LODWORD(v75) + 4);
                    if ( (_DWORD)v61 == HIDWORD(v61) )
                      v62 = v61 - *(_DWORD *)LODWORD(v75);
                      _ZF = v62 == 0;
                      v63 = v62 >> 2;
                      v64 = -1431655765 * v63;
                      if ( _ZF )
                        v64 = 1;
                      v66 = v64 + -1431655765 * v63;
                      v65 = v66;
                      if ( v66 > 0x15555555 )
                        v66 = 357913941;
                      _CF = v65 >= v64;
                      LOWORD(v64) = 21846;
                      if ( !_CF )
                      HIWORD(v64) = 5461;
                      if ( v66 >= v64 )
LABEL_78:
                        sub_119C874();
                      v67 = 3 * v66;
                      v68 = (char *)operator new(12 * v66);
                      v70 = *(_QWORD *)LODWORD(v75) >> 32;
                      v69 = *(_QWORD *)LODWORD(v75);
                      __asm
                      {
                        VSTR            S17, [R1]
                        VSTR            S25, [R1,#4]
                        VSTR            S26, [R1,#8]
                      }
                      v71 = v68;
                      if ( !_ZF )
                        do
                        {
                          v72 = *(_QWORD *)v69;
                          v73 = *(_DWORD *)(v69 + 8);
                          v69 += 12;
                          *(_QWORD *)v71 = v72;
                          *((_DWORD *)v71 + 2) = v73;
                          v71 += 12;
                        }
                        while ( v70 != v69 );
                        v69 = *(_DWORD *)LODWORD(v75);
                      v74 = (int)(v71 + 12);
                      if ( v69 )
                        operator delete((void *)v69);
                      *(_DWORD *)LODWORD(v75) = v68;
                      *(_DWORD *)(LODWORD(v75) + 4) = v74;
                      result = &v68[4 * v67];
                      _R9 = v79;
                      *(_DWORD *)(LODWORD(v75) + 8) = result;
                    else
                        VSTR            S17, [R0]
                        VSTR            S25, [R0,#4]
                        VSTR            S26, [R0,#8]
                      result = (char *)(*(_DWORD *)(LODWORD(v75) + 4) + 12);
                      *(_DWORD *)(LODWORD(v75) + 4) = result;
                  }
        __asm { VADD.F32        S31, S31, S20 }
        ++v40;
      while ( (signed int)v40 < 2 );
LABEL_75:
      __asm { VADD.F32        S23, S23, S20 }
    while ( v38 < 2 );
    __asm { VADD.F32        S30, S30, S20 }
  while ( v35 < 2 );
  return result;
}


void __fastcall InsideCubeRenderer::_determineBlocksToRenderTransition(int a1, int a2)
{
  InsideCubeRenderer::_determineBlocksToRenderTransition(a1, a2);
}


void __fastcall InsideCubeRenderer::render(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r9@1
  Entity *v4; // r0@1
  int v5; // r0@5
  int v6; // r0@7
  int v7; // r0@9
  int v8; // r0@9
  int v9; // r0@9
  LevelRenderer *v14; // r0@9
  char *v15; // r0@9
  int v16; // r0@9
  int v19; // r0@10
  Entity *v20; // r0@13
  unsigned int v23; // r6@18
  unsigned int v24; // r8@18
  LevelRenderer *v25; // r0@19
  char *v26; // r0@19
  void *ptr; // [sp+4h] [bp-1BCh]@17
  float v28; // [sp+8h] [bp-1B8h]@19
  float v31; // [sp+14h] [bp-1ACh]@19
  int v32; // [sp+20h] [bp-1A0h]@17
  int v33; // [sp+24h] [bp-19Ch]@17
  int v34; // [sp+28h] [bp-198h]@17
  int v35; // [sp+2Ch] [bp-194h]@17
  __int64 v36; // [sp+30h] [bp-190h]@10
  int v37; // [sp+38h] [bp-188h]@10
  char v38; // [sp+3Ch] [bp-184h]@9
  int v39; // [sp+44h] [bp-17Ch]@9
  float v40; // [sp+48h] [bp-178h]@9
  char v43; // [sp+54h] [bp-16Ch]@9
  char v44; // [sp+94h] [bp-12Ch]@9
  char v45; // [sp+D4h] [bp-ECh]@9
  __int64 v46; // [sp+114h] [bp-ACh]@8
  int v47; // [sp+11Ch] [bp-A4h]@8
  _BYTE *v48; // [sp+120h] [bp-A0h]@9
  _BYTE *v49; // [sp+124h] [bp-9Ch]@11
  int v50; // [sp+128h] [bp-98h]@11

  v2 = a1;
  v3 = a2;
  v4 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(a1 + 8));
  if ( Entity::isRiding(v4)
    || !ClientInstance::isLivingroomMode(*(ClientInstance **)(v2 + 8))
    && (ClientInstance::isHoloRealityMode(*(ClientInstance **)(v2 + 8)) != 1
     || (ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 8)) != 1
      || (v5 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8)),
          (*(int (**)(void))(*(_DWORD *)v5 + 308))() == 1))
     && (ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 8))
      || (v6 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8)),
          (*(int (**)(void))(*(_DWORD *)v6 + 308))() == 1))) )
  {
    v46 = 0LL;
    v47 = 0;
    if ( ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 8)) == 1 )
    {
      v7 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
      HolographicPlatform::getTransform((int)&v45, v7, 15, 1, 10);
      v8 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
      HolographicPlatform::getTransform((int)&v44, v8, 21, 15, 0);
      v9 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
      HolographicPlatform::getTransform((int)&v43, v9, 22, 15, 0);
      glm::detail::operator*<float>((int)&v48, (int)&v45, (int)&v44);
      __asm
      {
        VLDR            S16, [SP,#0x1C0+var_70]
        VLDR            S18, [SP,#0x1C0+var_6C]
        VLDR            S20, [SP,#0x1C0+var_68]
      }
      glm::detail::operator*<float>((int)&v48, (int)&v45, (int)&v43);
        VLDR            S22, [SP,#0x1C0+var_70]
        VLDR            S24, [SP,#0x1C0+var_6C]
        VLDR            S26, [SP,#0x1C0+var_68]
      v14 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(v2 + 8));
      v15 = LevelRenderer::getLevelRendererPlayer(v14);
      LevelRendererPlayer::getComfortRenderAdj((LevelRendererPlayer *)&v40, (int)v15);
        VMOV.F32        S28, #0.5
        VLDR            S4, [SP,#0x1C0+var_178]
        VADD.F32        S0, S22, S16
        VADD.F32        S2, S24, S18
        VMUL.F32        S0, S0, S28
        VMUL.F32        S2, S2, S28
        VADD.F32        S0, S0, S4
        VADD.F32        S4, S26, S20
        VSTR            S0, [SP,#0x1C0+var_AC]
        VLDR            S0, [SP,#0x1C0+var_174]
        VADD.F32        S0, S2, S0
        VMUL.F32        S2, S4, S28
        VSTR            S0, [SP,#0x1C0+var_AC+4]
        VLDR            S0, [SP,#0x1C0+var_170]
        VSTR            S0, [SP,#0x1C0+var_A4]
      v16 = ClientInstance::getHoloInput(*(ClientInstance **)(v2 + 8));
      HolographicPlatform::getTransformTranslation((int)&v38, v16, 2, 1, 0);
      __asm { VSUB.F32        S0, S22, S16 }
      _R10 = *(_QWORD *)&v38;
      __asm { VSUB.F32        S2, S24, S18 }
      _R4 = v39;
        VSUB.F32        S4, S26, S20
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VMOV.F32        S2, #0.25
        VSQRT.F32       S0, S0
        VADD.F32        S16, S0, S2
    }
    else
      v19 = ClientInstance::getCameraEntity(*(ClientInstance **)(v2 + 8));
      Entity::getInterpolatedPosition((Entity *)&v36, *(float *)&v19, *(_DWORD *)(v3 + 8));
      __asm { VMOV.F32        S16, #0.25 }
      _R10 = v36;
      _R4 = v37;
      v46 = v36;
      v47 = v37;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    if ( ClientInstance::isHoloRealityMode(*(ClientInstance **)(v2 + 8)) == 1
      && ClientInstance::isRealityFullVRMode(*(ClientInstance **)(v2 + 8))
      || (v20 = (Entity *)ClientInstance::getLocalPlayer(*(ClientInstance **)(v2 + 8)), Entity::isRiding(v20) == 1) )
      __asm { VMOV            R3, S16 }
      InsideCubeRenderer::_determineBlocksToRender(v2, COERCE_FLOAT(&v48), (mce::Math **)&v46, _R3);
    else if ( ClientInstance::isVRTransitioning(*(ClientInstance **)(v2 + 8)) == 1 )
      InsideCubeRenderer::_determineBlocksToRenderTransition(v2, (int)&v48);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 1065353216;
    ptr = v48;
    if ( v49 != v48 )
        VMOV            S16, R4
        VMOV            S18, R11
      _R7 = (int)(v48 + 4);
      __asm { VMOV            S20, R10 }
      v23 = -1431655765 * ((v49 - v48) >> 2);
      v24 = 0;
      do
        __asm
        {
          VLDR            S0, [R7,#-4]
          VLDR            S2, [R7]
          VLDR            S4, [R7,#4]
          VSUB.F32        S26, S0, S20
          VSUB.F32        S24, S2, S18
          VSUB.F32        S22, S4, S16
          VSTR            S26, [SP,#0x1C0+var_1AC]
          VSTR            S24, [SP,#0x1C0+var_1A8]
          VSTR            S22, [SP,#0x1C0+var_1A4]
        }
        v25 = (LevelRenderer *)ClientInstance::getLevelRenderer(*(ClientInstance **)(v2 + 8));
        v26 = LevelRenderer::getLevelRendererPlayer(v25);
        LevelRendererPlayer::getComfortRenderAdj((LevelRendererPlayer *)&v28, (int)v26);
          VLDR            S0, [SP,#0x1C0+var_1B8]
          VSUB.F32        S0, S26, S0
          VSTR            S0, [SP,#0x1C0+var_1AC]
          VLDR            S0, [SP,#0x1C0+var_1B4]
          VSUB.F32        S0, S24, S0
          VSTR            S0, [SP,#0x1C0+var_1A8]
          VLDR            S0, [SP,#0x1C0+var_1B0]
          VSUB.F32        S0, S22, S0
          VSTR            S0, [SP,#0x1C0+var_1A4]
        InsideCubeRenderer::_renderSpecificCube(v2, v3, (int)&v31, (const Color *)&v32);
        ++v24;
        _R7 += 12;
      while ( v24 < v23 );
    if ( ptr )
      operator delete(ptr);
  }
}


_QWORD *__fastcall InsideCubeRenderer::InsideCubeRenderer(_QWORD *a1, int a2)
{
  int v2; // r5@1
  _QWORD *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-2Ch]@1
  char v9; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)v3 = &off_26DC76C;
  *((_DWORD *)v3 + 2) = v2;
  *((_DWORD *)v3 + 3) = 0;
  v3[2] = 4575657221408423936LL;
  *((_DWORD *)v3 + 6) = 0;
  *((_DWORD *)v3 + 7) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 9) = 0;
  mce::Mesh::Mesh((mce::Mesh *)(v3 + 5));
  mce::MaterialPtr::MaterialPtr((mce::MaterialPtr *)((char *)v3 + 140));
  *((_BYTE *)v3 + 152) = 0;
  sub_119C884((void **)&v8, "terrain_inside_block");
  mce::RenderMaterialGroup::getMaterial(
    (mce::MaterialPtr *)&v9,
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v8);
  mce::MaterialPtr::operator=((mce::MaterialPtr *)((char *)v3 + 140), (mce::MaterialPtr *)&v9);
  mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v9);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  return v3;
}


void __fastcall InsideCubeRenderer::render(int a1, int a2)
{
  InsideCubeRenderer::render(a1, a2);
}


int __fastcall InsideCubeRenderer::_renderSpecificCube(int a1, int a2, int a3, const Color *a4)
{
  int v4; // r4@1
  int v5; // r5@1
  const Color *v6; // r8@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r2@1
  int v10; // r3@1
  char v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  MatrixStack::pushIdentity((MatrixStack *)&v12, *(_DWORD *)(a2 + 16) + 16);
  v8 = MatrixStack::MatrixStackRef::operator->((int)&v12) + 48;
  v9 = *(_DWORD *)(v7 + 4);
  v10 = *(_DWORD *)(v7 + 8);
  *(_DWORD *)v8 = *(_DWORD *)v7;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  ShaderColor::setColor(*(ShaderColor **)(v4 + 48), v6);
  if ( !mce::Mesh::isValid((mce::Mesh *)(v5 + 40)) )
    InsideCubeRenderer::_rebuildCubeMesh((InsideCubeRenderer *)v5, *(Tessellator **)(v4 + 40));
  mce::Mesh::render((mce::Buffer *)(v5 + 40), v4, v5 + 140, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v12);
}


AppPlatformListener *__fastcall InsideCubeRenderer::~InsideCubeRenderer(InsideCubeRenderer *this)
{
  AppPlatformListener *v1; // r4@1
  mce::Mesh *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26DC76C;
  v2 = (InsideCubeRenderer *)((char *)this + 40);
  mce::MaterialPtr::~MaterialPtr((InsideCubeRenderer *)((char *)this + 140));
  mce::Mesh::~Mesh(v2);
  return j_j_j__ZN19AppPlatformListenerD2Ev_0(v1);
}


char *__fastcall InsideCubeRenderer::_determineBlocksToRenderTransition(int a1, int a2)
{
  int v3; // r9@1
  Entity *v4; // r8@1
  float v5; // r1@1
  int v6; // r4@1
  float v7; // r1@1
  int v8; // r6@1
  float v9; // r1@1
  int v10; // r0@1
  int v15; // r7@1
  int v17; // r1@1
  const BlockPos *v19; // r6@1
  _BYTE *v21; // r4@1
  int v22; // r0@2
  int v23; // r1@2
  char *result; // r0@3
  signed int v25; // r11@3
  int v26; // r10@3
  BlockSource *v27; // r0@6
  BlockSource *v28; // r0@7
  __int64 v29; // r0@8
  signed int v30; // r0@10
  signed int v31; // r0@10
  unsigned int v32; // r1@10
  unsigned int v33; // r2@12
  unsigned int v34; // r0@12
  char *v35; // r7@17
  int v36; // r0@17
  int v37; // r2@17
  char *v38; // r1@17
  int v39; // r3@18
  int v40; // r4@18
  int v41; // r6@18
  int v42; // r4@20
  int v43; // [sp+4h] [bp-94h]@1
  int v44; // [sp+8h] [bp-90h]@2
  char *v45; // [sp+Ch] [bp-8Ch]@1
  int v46; // [sp+14h] [bp-84h]@1
  int v47; // [sp+18h] [bp-80h]@3
  int v48; // [sp+1Ch] [bp-7Ch]@17
  float v49; // [sp+20h] [bp-78h]@2
  int v50; // [sp+24h] [bp-74h]@1
  int v51; // [sp+28h] [bp-70h]@6
  int v52; // [sp+2Ch] [bp-6Ch]@6

  _R5 = a1;
  v3 = a2;
  v4 = (Entity *)ClientInstance::getCameraEntity(*(ClientInstance **)(a1 + 8));
  v6 = mce::Math::floor(*(mce::Math **)(_R5 + 28), v5);
  v43 = v6;
  v8 = mce::Math::floor(*(mce::Math **)(_R5 + 32), v7);
  v45 = (char *)v8;
  v10 = mce::Math::floor(*(mce::Math **)(_R5 + 36), v9);
  __asm { VLDR            S0, [R5,#0xC] }
  v15 = v10;
  __asm { VLDR            S2, [R5,#0x10] }
  _R0 = v6 - 3;
  __asm
  {
    VABS.F32        S0, S0
    VLDR            S4, [R5,#0x14]
    VABS.F32        S2, S2
  }
  v46 = v15;
  __asm { VABS.F32        S4, S4 }
  v17 = -3;
  __asm { VMOV            S6, R0 }
  _R0 = v8 - 2;
  __asm { VMOV.F32        S24, #1.0 }
  v19 = (const BlockPos *)&v50;
  __asm { VMOV            S8, R0 }
  _R0 = v15 - 3;
    VCVT.F32.S32    S6, S6
    VMOV            S10, R0
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #0.5
    VCVT.F32.S32    S8, S8
    VCVT.F32.S32    S10, S10
  v21 = &BlockID::AIR;
    VADD.F32        S0, S0, S4
    VADD.F32        S16, S6, S2
    VADD.F32        S18, S8, S2
    VADD.F32        S20, S10, S2
    VMUL.F32        S22, S0, S2
  do
    __asm { VMOV.F32        S26, S18 }
    v44 = v17;
    v22 = v43 + v17;
    v23 = -2;
    v49 = *(float *)&v22;
    do
    {
      __asm { VMOV.F32        S28, S20 }
      result = v45;
      v25 = -3;
      v47 = v23;
      v26 = (int)&v45[v23];
      do
      {
        __asm
        {
          VLDR            S0, [R5,#0xC]
          VLDR            S2, [R5,#0x10]
          VMUL.F32        S0, S0, S16
          VLDR            S4, [R5,#0x14]
          VMUL.F32        S2, S2, S26
          VLDR            S6, [R5,#0x18]
          VMUL.F32        S4, S4, S28
          VADD.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VSUB.F32        S0, S0, S6
          VABS.F32        S0, S0
          VCMPE.F32       S0, S22
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          *(float *)&v50 = v49;
          v51 = v26;
          v52 = v25 + v15;
          v27 = (BlockSource *)Entity::getRegion(v4);
          result = (char *)*(_BYTE *)(BlockSource::getBlock(v27, v50, v51, v52) + 4);
          if ( result != (char *)*v21 )
          {
            v28 = (BlockSource *)Entity::getRegion(v4);
            result = (char *)BlockSource::isConsideredSolidBlock(v28, v19);
            if ( result == (char *)1 )
            {
              __asm
              {
                VLDR            S0, [SP,#0x98+var_74]
                VLDR            S2, [SP,#0x98+var_70]
                VLDR            S4, [SP,#0x98+var_6C]
                VCVT.F32.S32    S30, S4
                VCVT.F32.S32    S17, S2
                VCVT.F32.S32    S19, S0
              }
              v29 = *(_QWORD *)(v3 + 4);
              if ( (_DWORD)v29 == HIDWORD(v29) )
                v30 = v29 - *(_DWORD *)v3;
                _ZF = v30 == 0;
                v31 = v30 >> 2;
                v32 = -1431655765 * v31;
                if ( _ZF )
                  v32 = 1;
                v34 = v32 + -1431655765 * v31;
                v33 = v34;
                if ( v34 > 0x15555555 )
                  v34 = 357913941;
                _CF = v33 >= v32;
                LOWORD(v32) = 21846;
                if ( !_CF )
                HIWORD(v32) = 5461;
                if ( v34 >= v32 )
                  sub_119C874();
                v48 = 3 * v34;
                v35 = (char *)operator new(12 * v34);
                v37 = *(_QWORD *)v3 >> 32;
                v36 = *(_QWORD *)v3;
                __asm
                {
                  VSTR            S19, [R1]
                  VSTR            S17, [R1,#4]
                  VSTR            S30, [R1,#8]
                }
                v38 = v35;
                if ( !_ZF )
                  do
                  {
                    v39 = *(_DWORD *)v36;
                    v40 = *(_DWORD *)(v36 + 4);
                    v41 = *(_DWORD *)(v36 + 8);
                    v36 += 12;
                    *(_DWORD *)v38 = v39;
                    *((_DWORD *)v38 + 1) = v40;
                    *((_DWORD *)v38 + 2) = v41;
                    v38 += 12;
                  }
                  while ( v37 != v36 );
                  v36 = *(_DWORD *)v3;
                v42 = (int)(v38 + 12);
                if ( v36 )
                  operator delete((void *)v36);
                v19 = (const BlockPos *)&v50;
                *(_DWORD *)v3 = v35;
                *(_DWORD *)(v3 + 4) = v42;
                result = &v35[4 * v48];
                *(_DWORD *)(v3 + 8) = result;
                v15 = v46;
                v21 = &BlockID::AIR;
              else
                  VSTR            S19, [R0]
                  VSTR            S17, [R0,#4]
                  VSTR            S30, [R0,#8]
                result = (char *)(*(_DWORD *)(v3 + 4) + 12);
                *(_DWORD *)(v3 + 4) = result;
            }
          }
        __asm { VADD.F32        S28, S28, S24 }
        ++v25;
      }
      while ( v25 < 4 );
      __asm { VADD.F32        S26, S26, S24 }
      v23 = v47 + 1;
    }
    while ( v47 + 1 < 3 );
    __asm { VADD.F32        S16, S16, S24 }
    v17 = v44 + 1;
  while ( v44 + 1 < 4 );
  return result;
}
