

void __fastcall DripParticle::init(DripParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  DripParticle *v5; // r4@1
  int v11; // r12@3
  int v12; // r2@3
  int v13; // r3@3
  int v14; // r5@3
  int v15; // r6@3
  int v16; // r7@3
  void *v20; // r0@3
  unsigned int *v21; // r2@5
  signed int v22; // r1@7
  int v23; // [sp+0h] [bp-40h]@3
  int v24; // [sp+4h] [bp-3Ch]@3
  int v25; // [sp+8h] [bp-38h]@3
  int v26; // [sp+Ch] [bp-34h]@3
  int v27; // [sp+10h] [bp-30h]@3
  int v28; // [sp+14h] [bp-2Ch]@3
  int v29; // [sp+18h] [bp-28h]@3
  int v30; // [sp+1Ch] [bp-24h]@3

  v5 = this;
  __asm
  {
    VMOV.F32        S0, #1.0
    VLDR            S2, =0.2
    VLDR            S4, =0.0
  }
  *((_QWORD *)this + 18) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)this + 38) = dword_2822498;
  _ZF = *((_DWORD *)this + 25) == 23;
  _R0 = &dword_133A654;
  if ( _ZF )
    __asm
    {
      VMOVEQ.F32      S4, S0
      VMOVEQ.F32      S0, S2
    }
    _R0 = &dword_133A658;
    VLDR            S2, [R0]
    VSTR            S0, [R4,#0x44]
    VSTR            S2, [R4,#0x48]
    VSTR            S4, [R4,#0x4C]
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v23, 112);
  v11 = (int)v5 + 12;
  v12 = v24;
  v13 = v25;
  v14 = v26;
  v15 = v27;
  v16 = v28;
  *(_DWORD *)v11 = v23;
  *(_DWORD *)(v11 + 4) = v12;
  *(_DWORD *)(v11 + 8) = v13;
  *(_DWORD *)(v11 + 12) = v14;
  *(_DWORD *)(v11 + 16) = v15;
  *(_DWORD *)(v11 + 20) = v16;
  EntityInteraction::setInteractText((int *)v5 + 9, &v29);
  *((_DWORD *)v5 + 10) = v30;
  *((_DWORD *)v5 + 15) = 1050253722;
  _R0 = TextureUVCoordinateSet::offsetWidthPixel((TextureUVCoordinateSet *)&v23, 7.0, 0.0);
    VMOV            S0, R0
    VSTR            S0, [R4,#0x10]
  _R0 = TextureUVCoordinateSet::offsetWidthPixel((TextureUVCoordinateSet *)&v23, 9.0, 0.0);
    VSTR            S0, [R4,#0x18]
  _R0 = TextureUVCoordinateSet::offsetHeightPixel((TextureUVCoordinateSet *)&v23, 4.0, 0.0);
    VSTR            S0, [R4,#0x1C]
  *((_DWORD *)v5 + 16) = 1031127695;
  *((_DWORD *)v5 + 53) = 40;
  *((_DWORD *)v5 + 2) = 60;
  *((_QWORD *)v5 + 18) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)v5 + 38) = dword_2822498;
  v20 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
}


int __fastcall DripParticle::getParticleLightColor(int result, float a2, int a3)
{
  float v3; // r3@3
  __int64 v4; // kr00_8@3

  if ( *(_DWORD *)(LODWORD(a2) + 100) == 23 )
  {
    result = Particle::getParticleLightColor((Particle *)result, a2, a3);
  }
  else
    v3 = unk_283E614;
    v4 = qword_283E618;
    *(_DWORD *)result = Color::WHITE;
    *(float *)(result + 4) = v3;
    *(_QWORD *)(result + 8) = v4;
  return result;
}


void __fastcall DripParticle::~DripParticle(DripParticle *this)
{
  DripParticle *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9AEC;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


int __fastcall DripParticle::normalTick(DripParticle *this)
{
  char *v2; // r5@1
  int v7; // r0@2
  int v10; // r0@8
  const BlockPos *v11; // r6@10
  Material *v12; // r5@10
  int result; // r0@11
  int v15; // r1@12
  char v16; // [sp+Ch] [bp-3Ch]@10
  unsigned __int8 v17; // [sp+18h] [bp-30h]@10
  char v18[7]; // [sp+19h] [bp-2Fh]@8
  int v19; // [sp+20h] [bp-28h]@8
  int v20; // [sp+24h] [bp-24h]@8

  _R4 = this;
  v2 = (char *)this + 156;
  *((_DWORD *)v2 + 3) = *((_DWORD *)this + 39);
  *((_DWORD *)v2 + 4) = *((_DWORD *)this + 40);
  *((_DWORD *)v2 + 5) = *((_DWORD *)this + 41);
  if ( *((_DWORD *)this + 25) == 24 )
  {
    __asm { VMOV.F32        S0, #16.0 }
    *((_DWORD *)this + 17) = 1065353216;
    __asm { VMOV.F32        S4, #4.0 }
    v7 = *((_DWORD *)this + 53);
    _R1 = 56 - v7;
    __asm { VMOV            S2, R1 }
    _R1 = 48 - v7;
    __asm
    {
      VMOV            S6, R1
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S6, S6
      VDIV.F32        S0, S0, S2
      VDIV.F32        S2, S4, S6
      VSTR            S0, [R4,#0x48]
      VSTR            S2, [R4,#0x4C]
    }
  }
  else
  __asm
    VLDR            S0, [R4,#0x40]
    VLDR            S2, [R4,#0x94]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  *((_DWORD *)_R4 + 53) = v7 - 1;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      VLDR            S2, =0.02
      VLDR            S4, [R4,#0x90]
      VMUL.F32        S0, S0, S2
      VMUL.F32        S4, S4, S2
      VSTR            S4, [R4,#0x90]
      VSTR            S0, [R4,#0x94]
      VLDR            S0, [R4,#0x98]
      VSTR            S0, [R4,#0x98]
  Particle::move(_R4, (DripParticle *)((char *)_R4 + 144));
    VLDR            S2, =0.98
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x90]
    VLDR            S4, [R4,#0x94]
    VMUL.F32        S4, S4, S2
    VSTR            S4, [R4,#0x94]
    VLDR            S4, [R4,#0x98]
    VMUL.F32        S2, S4, S2
    VSTR            S2, [R4,#0x98]
  if ( *((_BYTE *)_R4 + 181) )
    if ( *((_DWORD *)_R4 + 25) == 23 )
      *((_DWORD *)_R4 + 2) = 0;
      v10 = BlockSource::getLevel(*((BlockSource **)_R4 + 35));
      *(_DWORD *)&v18[3] = 0;
      v19 = 0;
      v20 = 0;
      Level::addParticle(v10, 21, (int)v2);
      __asm
      {
        VLDR            S0, [R4,#0x90]
        VLDR            S2, [R4,#0x98]
      }
      VLDR            S4, =0.7
      VMUL.F32        S0, S0, S4
      VMUL.F32        S2, S2, S4
      VSTR            S0, [R6]
      VSTR            S2, [R8]
  v11 = (const BlockPos *)*((_DWORD *)_R4 + 35);
  BlockPos::BlockPos((int)&v16, (int)v2);
  BlockSource::getBlockAndData((BlockSource *)&v17, v11, (int)&v16);
  v12 = (Material *)Block::getMaterial((Block *)Block::mBlocks[v17]);
  if ( Material::isLiquid(v12) || (result = Material::isSolid(v12), result == 1) )
    _R0 = floorf(*((float *)_R4 + 40));
      VMOV.F32        S0, #1.0
      VMOV            S2, R0
      VADD.F32        S16, S2, S0
    result = LiquidBlock::getHeightFromData((LiquidBlock *)(unsigned __int8)v18[0], v15);
      VMOV            S0, R0
      VLDR            S2, [R4,#0xA0]
      VSUB.F32        S0, S16, S0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      result = 0;
  return result;
}


void __fastcall DripParticle::init(DripParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  DripParticle::init(this, a2, a3, a4, a5);
}


void __fastcall DripParticle::~DripParticle(DripParticle *this)
{
  DripParticle::~DripParticle(this);
}
