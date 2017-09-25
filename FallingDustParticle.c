

signed int __fastcall FallingDustParticle::render(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r8@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-48h]@1
  int v15; // [sp+4h] [bp-44h]@1
  int v16; // [sp+8h] [bp-40h]@1
  int v17; // [sp+Ch] [bp-3Ch]@1
  int v18; // [sp+10h] [bp-38h]@1
  int v19; // [sp+14h] [bp-34h]@1
  int v20; // [sp+18h] [bp-30h]@1
  int v21; // [sp+1Ch] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  TextureUVCoordinateSet::fromOldSystem(
    (TextureUVCoordinateSet *)&v14,
    *(_DWORD *)(a1 + 216) / 4 - *(_DWORD *)(a1 + 52) / 4 * *(_DWORD *)(a1 + 216) / *(_DWORD *)(a1 + 8));
  v4 = v2 + 12;
  v5 = v15;
  v6 = v16;
  v7 = v17;
  v8 = v18;
  v9 = v19;
  *(_DWORD *)v4 = v14;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 36),
    &v20);
  *(_DWORD *)(v2 + 40) = v21;
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v20 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  return Particle::render((Particle *)v2, v3);
}


unsigned int __fastcall FallingDustParticle::init(FallingDustParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v14; // r0@1
  Random *v15; // r5@1
  unsigned int result; // r0@1

  _R4 = this;
  _R0 = (unsigned __int16)a4 >> 8;
  _R1 = ((unsigned int)a4 >> 16) & 0xFF;
  __asm
  {
    VLDR            S8, =0.0039216
    VMOV            S2, R0
  }
  _R0 = (unsigned int)a4 >> 24;
  __asm { VMOV            S0, R1 }
  _R1 = (unsigned __int8)a4;
    VMOV            S6, R0
    VMOV            S4, R1
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S2, S8
    VMUL.F32        S4, S4, S8
    VMUL.F32        S6, S6, S8
    VSTR            S0, [R4,#0x44]
    VSTR            S2, [R4,#0x48]
    VSTR            S4, [R4,#0x4C]
    VSTR            S6, [R4,#0x50]
  *((_QWORD *)_R4 + 18) = *(_QWORD *)&Vec3::ZERO;
  *((_DWORD *)_R4 + 38) = dword_2822498;
  v14 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v15 = v14;
  _R0 = Random::_genRandInt32(v14);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
  _R0 = &mce::Math::TAU;
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VLDR            S2, [R0]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x70]
  _R0 = Random::_genRandInt32(v15);
    VMOV.F32        S2, #-0.5
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.1
    VLDR            S2, =0.675
    VSTR            S0, [R4,#0xDC]
    VLDR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
  _R6 = *((_DWORD *)_R4 + 54);
  result = Random::_genRandInt32(v15);
    VLDR            S2, =0.8
    VMOV            S4, R6
    VLDR            S6, =0.2
    VLDR            S2, =0.9
    VADD.F32        S0, S0, S6
    VMUL.F32        S2, S4, S2
    VDIV.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  return result;
}


int __fastcall FallingDustParticle::normalTick(FallingDustParticle *this)
{
  int *v8; // r0@1
  int result; // r0@3
  int v10; // [sp+4h] [bp-Ch]@1

  _R4 = this;
  *((_DWORD *)_R4 + 42) = *((_DWORD *)_R4 + 39);
  *((_DWORD *)_R4 + 43) = *((_DWORD *)_R4 + 40);
  *((_DWORD *)_R4 + 44) = *((_DWORD *)_R4 + 41);
  _R0 = &mce::Math::PI;
  _R1 = *((_DWORD *)_R4 + 28);
  *((_DWORD *)_R4 + 29) = _R1;
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S2, [R4,#0xDC]
    VMUL.F32        S0, S2, S0
    VMOV            S2, R1
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x70]
  }
  Particle::move(_R4, (FallingDustParticle *)((char *)_R4 + 144));
    VLDR            S0, =-0.003
    VLDR            S2, [R4,#0x94]
    VLDR            S2, =-0.14
    VCMPE.F32       S0, S2
    VSTR            S0, [R4,#0x94]
    VMRS            APSR_nzcv, FPSCR
  v10 = -1106289623;
  v8 = &v10;
  if ( !(_NF ^ _VF) )
    v8 = (int *)((char *)_R4 + 148);
  result = *v8;
  *((_DWORD *)_R4 + 37) = result;
  return result;
}


unsigned int __fastcall FallingDustParticle::getParticleLightColor(FallingDustParticle *this, float a2)
{
  FallingDustParticle *v3; // r4@1
  int v8; // r0@1
  int *v9; // r6@2
  int v10; // r1@6
  char v12; // [sp+4h] [bp-3Ch]@6
  char v13; // [sp+8h] [bp-38h]@6
  unsigned __int16 v14; // [sp+Ah] [bp-36h]@2
  int v15; // [sp+Ch] [bp-34h]@1
  int v16; // [sp+14h] [bp-2Ch]@1
  char v17; // [sp+18h] [bp-28h]@1
  int v18; // [sp+1Ch] [bp-24h]@4
  char v19; // [sp+24h] [bp-1Ch]@1

  _R5 = a2;
  v3 = this;
  AABB::getBounds((AABB *)&v19, LODWORD(a2) + 184);
  __asm
  {
    VLDR            S0, =0.66
    VLDR            S2, [SP,#0x40+var_18]
  }
  v8 = *(_DWORD *)(LODWORD(_R5) + 164);
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.3
    VADD.F32        S0, S0, S2
    VLDR            S2, [R5,#0xA0]
  v15 = *(_DWORD *)(LODWORD(_R5) + 156);
    VSTR            S0, [SP,#0x40+var_30]
  v16 = v8;
  BlockPos::BlockPos((int)&v17, (int)&v15);
  if ( *(_BYTE *)(LODWORD(_R5) + 224) )
    v9 = (int *)(LODWORD(_R5) + 140);
    BlockSource::getBlockAndData((BlockSource *)&v14, *(const BlockPos **)(LODWORD(_R5) + 140), (int)&v17);
    if ( v14 == (unsigned __int16)FullBlock::AIR )
      *(_BYTE *)(LODWORD(_R5) + 224) = 0;
    --v18;
  else
  v10 = *v9;
  v12 = Brightness::MIN;
  BlockSource::getLightColor((int)&v13, v10, (int)&v17, &v12);
  return LightTexture::getColorForUV((int)v3, (int)&v13);
}


void __fastcall FallingDustParticle::~FallingDustParticle(FallingDustParticle *this)
{
  FallingDustParticle::~FallingDustParticle(this);
}


void __fastcall FallingDustParticle::~FallingDustParticle(FallingDustParticle *this)
{
  FallingDustParticle *v1; // r4@1
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  operator delete((void *)v1);
}
