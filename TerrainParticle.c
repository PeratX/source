

void __fastcall TerrainParticle::~TerrainParticle(TerrainParticle *this)
{
  TerrainParticle *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D9EDC;
  v2 = *((_DWORD *)this + 60);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  *(_DWORD *)v1 = &off_26D9AEC;
  v4 = *((_DWORD *)v1 + 9);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  operator delete((void *)v1);
}


signed int __fastcall TerrainParticle::render(Particle *a1, int a2)
{
  signed int result; // r0@1
  Tessellator *v9; // r5@6
  float v17; // ST00_4@6
  float v18; // ST04_4@6
  float v22; // ST00_4@6
  float v23; // ST04_4@6
  float v27; // ST00_4@6
  float v28; // ST04_4@6
  float v29; // [sp+0h] [bp-78h]@0
  float v30; // [sp+4h] [bp-74h]@0
  float v31; // [sp+Ch] [bp-6Ch]@6
  float v32; // [sp+1Ch] [bp-5Ch]@1

  _R4 = a1;
  _R6 = a2;
  __asm
  {
    VLDR            S16, [R4,#0x30]
    VLDR            S18, [R4,#0x2C]
    VLDR            S22, [R4,#0xDC]
    VLDR            S24, [R4,#0xE0]
    VLDR            S20, [R4,#0xE4]
    VLDR            S26, [R4,#0xE8]
  }
  AABB::getBounds((AABB *)&v32, (int)a1 + 184);
    VLDR            S0, [R4,#0x9C]
    VMOV.F32        S1, #0.25
    VLDR            S6, [R4,#0xA8]
    VLDR            S2, [R4,#0xA0]
    VLDR            S8, [R4,#0xAC]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R4,#0xA4]
    VSUB.F32        S2, S2, S8
    VLDR            S10, [R4,#0xB0]
    VLDR            S14, [R6,#0x14]
    VSUB.F32        S4, S4, S10
  result = *(_DWORD *)(_R6 + 8);
    VLDR            S12, [R6,#0x10]
    VMUL.F32        S0, S0, S14
    VLDR            S3, [R0]
    VLDR            S7, [R0,#8]
    VMUL.F32        S2, S2, S14
    VLDR            S5, [R0,#4]
    VMUL.F32        S4, S4, S14
    VSUB.F32        S14, S20, S22
    VADD.F32        S0, S0, S6
    VSUB.F32        S6, S26, S24
    VADD.F32        S2, S2, S8
    VMUL.F32        S8, S16, S1
    VADD.F32        S4, S4, S10
    VMUL.F32        S1, S18, S1
    VSUB.F32        S16, S0, S3
    VSUB.F32        S18, S2, S5
    VMUL.F32        S0, S8, S6
    VSUB.F32        S20, S4, S7
    VLDR            S4, =0.24975
    VMUL.F32        S2, S1, S14
    VMUL.F32        S6, S6, S4
    VMUL.F32        S8, S16, S16
    VMUL.F32        S10, S18, S18
    VADD.F32        S26, S0, S24
    VMUL.F32        S0, S14, S4
    VADD.F32        S30, S2, S22
    VMOV.F32        S22, #1.0
    VMUL.F32        S2, S20, S20
    VADD.F32        S4, S10, S8
    VADD.F32        S6, S26, S6
    VADD.F32        S0, S30, S0
    VMOV.F32        S24, S22
    VADD.F32        S17, S4, S2
    VCMPE.F32       S6, S22
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S22
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S24, S6 }
    VCMPE.F32       S17, S12
    __asm { VMOVLT.F32      S22, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x78+var_5C]
      VLDR            S4, [R4,#0x4C]
      VLDR            S12, [R4,#0x5C]
      VLDR            S6, [R4,#0x50]
      VLDR            S14, [R4,#0x60]
      VMUL.F32        S4, S12, S4
      VLDR            S8, [R4,#0x54]
      VLDR            S10, [R4,#0x58]
      VMUL.F32        S6, S14, S6
      VMUL.F32        S28, S2, S0
      VLDR            S0, [R4,#0x44]
      VLDR            S2, [R4,#0x48]
      VMUL.F32        S0, S8, S0
    }
    v9 = *(Tessellator **)(_R6 + 4);
      VMUL.F32        S2, S10, S2
      VSTR            S0, [SP,#0x78+var_6C]
      VSTR            S2, [SP,#0x78+var_68]
      VSTR            S4, [SP,#0x78+var_64]
      VSTR            S6, [SP,#0x78+var_60]
    Tessellator::color(*(Tessellator **)(_R6 + 4), (const Color *)&v31);
    __asm { VMOV            R2, S17 }
    Particle::_updateVertexData(_R4, *(const Vec3 **)(_R6 + 12), _R2);
      VLDR            S0, [R4,#0x78]
      VLDR            S4, [R4,#0x80]
      VLDR            S2, [R4,#0x7C]
      VLDR            S6, [R4,#0x84]
      VADD.F32        S0, S4, S0
      VLDR            S8, [R4,#0x88]
      VADD.F32        S2, S6, S2
      VSTR            S30, [SP,#0x78+var_78]
      VMUL.F32        S4, S8, S28
      VSTR            S24, [SP,#0x78+var_74]
      VMUL.F32        S0, S28, S0
      VMUL.F32        S2, S28, S2
      VSUB.F32        S4, S18, S4
      VSUB.F32        S0, S16, S0
      VSUB.F32        S2, S20, S2
      VMOV            R2, S4
      VMOV            R1, S0
      VMOV            R3, S2
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v29, v30);
      VSUB.F32        S0, S4, S0
      VSUB.F32        S2, S6, S2
      VSTR            S26, [SP,#0x78+var_74]
      VMUL.F32        S0, S0, S28
      VMUL.F32        S2, S2, S28
      VADD.F32        S4, S4, S18
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S20
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v17, v18);
      VSTR            S22, [SP,#0x78+var_78]
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v22, v23);
      VSUB.F32        S0, S0, S4
      VSUB.F32        S2, S2, S6
    result = Tessellator::vertexUV(v9, _R1, _R2, _R3, v27, v28);
  return result;
}


void *__fastcall TerrainParticle::getParticleTexture(TerrainParticle *this)
{
  return &Particle::TERRAIN_ATLAS;
}


TerrainParticle *__fastcall TerrainParticle::~TerrainParticle(TerrainParticle *this)
{
  TerrainParticle *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26D9EDC;
  v2 = *((_DWORD *)this + 60);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  *(_DWORD *)v1 = &off_26D9AEC;
  v4 = *((_DWORD *)v1 + 9);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  return v1;
}


int __fastcall TerrainParticle::_getTexture(TerrainParticle *this, const FullBlock *a2, float a3)
{
  __int64 v3; // r6@1
  const FullBlock *v4; // r5@1
  int v5; // r4@1
  int v6; // r0@10
  int v7; // r1@10
  int v8; // r0@10
  __int64 *v9; // r0@10

  LODWORD(v3) = this;
  v4 = a2;
  v5 = LODWORD(a3);
  if ( BlockGraphics::getBlock(*((BlockGraphics **)this + 53)) == Block::mBed )
  {
    HIDWORD(v3) = 0;
  }
  else if ( BlockGraphics::getBlock(*(BlockGraphics **)(v3 + 212)) == Block::mCactus )
    HIDWORD(v3) = 2;
  else if ( BlockGraphics::getBlock(*(BlockGraphics **)(v3 + 212)) == Block::mLever )
    HIDWORD(v3) = 5;
  else
    if ( BlockGraphics::getBlock(*(BlockGraphics **)(v3 + 212)) == Block::mBeacon )
      HIDWORD(v3) = 2;
  LODWORD(v3) = *(_DWORD *)(v3 + 212);
  v6 = BlockGraphics::getBlock((BlockGraphics *)v3);
  v7 = *((_BYTE *)v4 + 1);
  v8 = (*(int (**)(void))(*(_DWORD *)v6 + 424))();
  v9 = (__int64 *)BlockGraphics::getTextureVariations(v3, v8);
  return BlockGraphics::chooseRandomTexture(v5, v9);
}


int __fastcall TerrainParticle::init(TerrainParticle *this, const Vec3 *a2, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  const Vec3 *v6; // r8@1
  int v13; // r0@1
  int v15; // r10@3
  int v16; // r0@3
  int v17; // r3@3
  int v18; // r4@3
  int v19; // r5@3
  int v20; // r6@3
  int v21; // r7@3
  Block *v22; // r6@3
  int v23; // r7@3
  int v24; // r0@3
  signed int v25; // r1@4
  signed int v26; // r0@5
  int result; // r0@12
  unsigned int v29; // r5@13
  int v34; // r12@14
  int v35; // r1@14
  int v36; // r2@14
  int v37; // r3@14
  int v42; // r1@32
  int v43; // r2@32
  int v44; // r3@32
  int v45; // r12@32
  int v46; // [sp+0h] [bp-60h]@32
  int v47; // [sp+4h] [bp-5Ch]@32
  int v48; // [sp+8h] [bp-58h]@32
  int v49; // [sp+Ch] [bp-54h]@32
  float v50; // [sp+10h] [bp-50h]@14
  char v51; // [sp+20h] [bp-40h]@14
  int v52; // [sp+24h] [bp-3Ch]@14
  int v53; // [sp+28h] [bp-38h]@14
  int v54; // [sp+2Ch] [bp-34h]@14
  char v55; // [sp+34h] [bp-2Ch]@13

  _R9 = this;
  v6 = a2;
  *((_BYTE *)this + 248) = a4;
  _R1 = (char *)this + 248;
  __asm { VLDR            S0, =0.2 }
  _R1[1] = BYTE1(a4);
  _R0 = (unsigned int)a4 >> 16;
  __asm
  {
    VLDR            S2, [R2]
    VLDR            S8, [R1,#-0x68]
    VMUL.F32        S2, S2, S0
    VLDR            S4, [R2,#4]
    VLDR            S6, [R2,#8]
    VMUL.F32        S4, S4, S0
    VMUL.F32        S0, S6, S0
    VADD.F32        S2, S8, S2
    VSTR            S2, [R1,#-0x68]
    VLDR            S2, [R1,#-0x64]
    VADD.F32        S2, S2, S4
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VSTR            S2, [R1,#-0x64]
    VLDR            S2, [R1,#-0x60]
    VADD.F32        S2, S2, S0
    VLDR            S0, =0.000015259
    VMUL.F32        S0, S4, S0
    VSTR            S2, [R1,#-0x60]
  }
  v13 = BlockGraphics::mBlocks[(unsigned __int8)a4];
  *((_DWORD *)_R1 - 9) = v13;
  if ( !v13 )
    *((_DWORD *)_R9 + 53) = BlockGraphics::mBlocks[*(_BYTE *)(Block::mBedrock + 4)];
  __asm { VMOV            R2, S0 }
  v15 = TerrainParticle::_getTexture(_R9, (const FullBlock *)_R1, _R2);
  v16 = (int)_R9 + 216;
  v17 = *(_DWORD *)(v15 + 4);
  v18 = *(_DWORD *)(v15 + 8);
  v19 = *(_DWORD *)(v15 + 12);
  v20 = *(_DWORD *)(v15 + 16);
  v21 = *(_DWORD *)(v15 + 20);
  *(_DWORD *)v16 = *(_DWORD *)v15;
  *(_DWORD *)(v16 + 4) = v17;
  *(_DWORD *)(v16 + 8) = v18;
  *(_DWORD *)(v16 + 12) = v19;
  *(_DWORD *)(v16 + 16) = v20;
  *(_DWORD *)(v16 + 20) = v21;
  EntityInteraction::setInteractText((int *)_R9 + 60, (int *)(v15 + 24));
  *((_DWORD *)_R9 + 61) = *(_DWORD *)(v15 + 28);
  v22 = (Block *)Block::mBlocks[*(_BYTE *)(*((_DWORD *)_R9 + 53) + 4)];
  *((_DWORD *)_R9 + 16) = Block::getGravity(v22);
  v23 = Block::getRenderLayer(v22);
  v24 = BlockGraphics::getBlockShape(*((BlockGraphics **)_R9 + 53));
  if ( (unsigned int)(v24 - 2) <= 0x1E )
    v25 = 1 << (v24 - 2);
    if ( v25 & 0x40100100 )
    {
      v26 = 0;
      goto LABEL_12;
    }
    if ( v25 & 0x21 )
      goto LABEL_35;
  if ( v24 == 81 )
LABEL_35:
    v26 = 1;
  else
    v26 = 0;
    if ( v23 != 3 && v23 != 6 )
      v26 = 1;
LABEL_12:
  *((_DWORD *)_R9 + 26) = v26;
    VLDR            S0, =0.075
    VLDR            S2, [R9,#0x3C]
    VMUL.F32        S0, S2, S0
    VMOV            R1, S0
    VMOV.F32        S0, #0.5
    VSTR            S0, [R9,#0x3C]
  Particle::setSize(_R9, _R1);
  result = Block::mGrass;
  if ( v22 != (Block *)Block::mGrass )
    BlockPos::BlockPos((int)&v55, (int)v6);
    v29 = (*(int (__fastcall **)(Block *, _DWORD, char *, _DWORD))(*(_DWORD *)v22 + 396))(
            v22,
            *((_DWORD *)_R9 + 35),
            &v55,
            *((_BYTE *)_R9 + 249));
    if ( (*(int (__fastcall **)(Block *, _DWORD, char *))(*(_DWORD *)v22 + 400))(v22, *((_DWORD *)_R9 + 35), &v55) == 1 )
      _R1 = (unsigned __int16)v29 >> 8;
      _R2 = (v29 >> 16) & 0xFF;
      __asm
      {
        VLDR            S8, =0.0039216
        VMOV            S0, R2
      }
      _R2 = (unsigned __int8)v29;
      __asm { VMOV            S2, R1 }
      _R1 = v29 >> 24;
        VMOV            S4, R2
        VMOV            S6, R1
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
        VCVT.F32.S32    S6, S6
        VMUL.F32        S0, S0, S8
        VMUL.F32        S2, S2, S8
        VMUL.F32        S4, S4, S8
        VMUL.F32        S6, S6, S8
        VSTR            S0, [SP,#0x60+var_50]
        VSTR            S2, [SP,#0x60+var_4C]
        VSTR            S4, [SP,#0x60+var_48]
        VSTR            S6, [SP,#0x60+var_44]
      SeasonsRenderer::getTintedColor((SeasonsRenderer *)&v51, *((const Color **)a5 + 487), (int)&v50);
      v34 = (int)_R9 + 68;
      v35 = v52;
      v36 = v53;
      v37 = v54;
      __asm { VMOV.F32        S4, #1.0 }
      *(_DWORD *)v34 = *(_DWORD *)&v51;
      *(_DWORD *)(v34 + 4) = v35;
      *(_DWORD *)(v34 + 8) = v36;
      *(_DWORD *)(v34 + 12) = v37;
        VLDR            S0, [R9,#0x44]
        VLDR            S2, =0.0
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S0, S2 }
        VCMPE.F32       S0, S4
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S4 }
        VSTR            S0, [R9,#0x44]
        VLDR            S0, [R9,#0x48]
        VSTR            S0, [R9,#0x48]
        VLDR            S0, [R9,#0x4C]
        VSTR            S0, [R9,#0x4C]
        VLDR            S0, [R9,#0x50]
      __asm { VSTR            S0, [R9,#0x50] }
    else
      _R0 = (unsigned __int16)v29 >> 8;
      _R1 = (v29 >> 16) & 0xFF;
        VMOV            S0, R1
      _R1 = (unsigned __int8)v29;
      __asm { VMOV            S2, R0 }
      _R0 = v29 >> 24;
        VMOV            S4, R1
        VMOV            S6, R0
        VSTR            S2, [R9,#0x48]
        VSTR            S4, [R9,#0x4C]
        VSTR            S6, [R9,#0x50]
    (*(void (__fastcall **)(int *, TerrainParticle *, _DWORD))(*(_DWORD *)_R9 + 28))(&v46, _R9, 0);
    result = v46;
    v42 = v47;
    v43 = v48;
    v44 = v49;
    v45 = (int)_R9 + 84;
    *(_DWORD *)v45 = v46;
    *(_DWORD *)(v45 + 4) = v42;
    *(_DWORD *)(v45 + 8) = v43;
    *(_DWORD *)(v45 + 12) = v44;
    *((_BYTE *)_R9 + 180) = 0;
  return result;
}


void __fastcall TerrainParticle::~TerrainParticle(TerrainParticle *this)
{
  TerrainParticle::~TerrainParticle(this);
}


int __fastcall TerrainParticle::TerrainParticle(int a1, int a2, int a3)
{
  int v3; // r5@1
  int result; // r0@1

  v3 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D9EDC;
  *(_DWORD *)(v3 + 212) = 0;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(v3 + 216));
  *(_BYTE *)(v3 + 248) = 0;
  result = v3;
  *(_BYTE *)(v3 + 249) = 0;
  *(_DWORD *)(v3 + 104) = 0;
  *(_BYTE *)(v3 + 180) = 0;
  return result;
}


signed int __fastcall TerrainParticle::_useAlphaTesting(int a1, int a2)
{
  signed int v2; // r2@2
  signed int v4; // r1@6

  if ( (unsigned int)(a2 - 2) <= 0x1E )
  {
    v2 = 1 << (a2 - 2);
    if ( v2 & 0x40100100 )
      return 0;
    if ( v2 & 0x21 )
      goto LABEL_14;
  }
  if ( a2 == 81 )
LABEL_14:
    v4 = 1;
  else
    v4 = 0;
    if ( a1 != 3 && a1 != 6 )
      v4 = 1;
  return v4;
}
