

void __fastcall WaterDropParticle::~WaterDropParticle(WaterDropParticle *this)
{
  WaterDropParticle *v1; // r4@1
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


unsigned int __fastcall WaterDropParticle::init(WaterDropParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v6; // r0@1
  Random *v11; // r8@1
  char v13; // r0@1
  int v14; // r0@1
  int v15; // r3@1
  int v16; // r4@1
  int v17; // r5@1
  int v18; // r6@1
  int v19; // r7@1
  void *v20; // r0@1
  unsigned int result; // r0@2
  unsigned int *v22; // r2@3
  signed int v23; // r1@5
  int v24; // [sp+0h] [bp-60h]@1
  int v25; // [sp+4h] [bp-5Ch]@1
  int v26; // [sp+8h] [bp-58h]@1
  int v27; // [sp+Ch] [bp-54h]@1
  int v28; // [sp+10h] [bp-50h]@1
  int v29; // [sp+14h] [bp-4Ch]@1
  int v30; // [sp+18h] [bp-48h]@1
  int v31; // [sp+1Ch] [bp-44h]@1

  _R10 = this;
  v6 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  __asm { VLDR            S20, =0.3 }
  v11 = v6;
  __asm
  {
    VLDR            S0, [R10,#0x90]
    VMUL.F32        S0, S0, S20
    VSTR            S0, [R10,#0x90]
  }
  _R0 = Random::_genRandInt32(v6);
    VMOV            S0, R0
    VLDR            D9, =2.32830644e-10
    VLDR            S16, =0.2
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D9
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S16
    VLDR            S2, =0.1
    VADD.F32        S0, S0, S2
    VSTR            S0, [R10,#0x94]
    VLDR            S0, [R10,#0x98]
    VSTR            S0, [R10,#0x98]
  *((_DWORD *)_R10 + 17) = 1065353216;
  *((_DWORD *)_R10 + 18) = 1065353216;
  *((_DWORD *)_R10 + 19) = 1065353216;
  v13 = Random::_genRandInt32(v11);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v24, (v13 & 3) + 19);
  v14 = (int)_R10 + 12;
  v15 = v25;
  v16 = v26;
  v17 = v27;
  v18 = v28;
  v19 = v29;
  *(_DWORD *)v14 = v24;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  *(_DWORD *)(v14 + 16) = v18;
  *(_DWORD *)(v14 + 20) = v19;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R10 + 9,
    &v30);
  *((_DWORD *)_R10 + 10) = v31;
  v20 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  Particle::setSize(_R10, 0.01);
  *((_DWORD *)_R10 + 16) = 1031127695;
  result = Random::_genRandInt32(v11);
    VLDR            S2, =0.8
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #8.0
    VADD.F32        S0, S0, S16
    VDIV.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R10,#8]
  return result;
}


int __fastcall WaterDropParticle::normalTick(WaterDropParticle *this)
{
  char *v2; // r5@1
  Random *v7; // r0@2
  BlockSource *v9; // r6@5
  Block *v10; // r0@5
  Material *v11; // r5@5
  float v12; // r1@5
  int result; // r0@6
  int v14; // r8@7
  BlockSource *v15; // r6@7
  float v16; // r1@7
  int v17; // r7@7
  float v18; // r1@7
  int v19; // r5@7
  float v20; // r1@7
  int v21; // r0@7
  LiquidBlock *v22; // r0@7
  int v23; // r1@7
  char v25; // [sp+4h] [bp-24h]@5

  _R4 = this;
  v2 = (char *)this + 156;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S0, [R4,#0x40]
    VLDR            S2, [R4,#0x94]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  }
  Particle::move(this, (WaterDropParticle *)((char *)this + 144));
    VLDR            S0, =0.98
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x98]
  if ( *((_BYTE *)_R4 + 181) )
    v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
    _R0 = Random::_genRandInt32(v7);
    __asm
    {
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VMOV.F32        S2, #0.5
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S0, S2
      VLDR            S0, =0.7
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      *((_DWORD *)_R4 + 2) = 0;
      VLDR            S2, [R4,#0x90]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R4,#0x90]
      VLDR            S2, [R4,#0x98]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R4,#0x98]
  v9 = (BlockSource *)*((_DWORD *)_R4 + 35);
  BlockPos::BlockPos((int)&v25, (int)v2);
  v10 = (Block *)BlockSource::getBlock(v9, (const BlockPos *)&v25);
  v11 = (Material *)Block::getMaterial(v10);
  if ( Material::isLiquid(v11) || (result = Material::isSolid(v11), result == 1) )
    v14 = mce::Math::floor(*((mce::Math **)_R4 + 40), v12);
    v15 = (BlockSource *)*((_DWORD *)_R4 + 35);
    v17 = mce::Math::floor(*((mce::Math **)_R4 + 39), v16);
    v19 = mce::Math::floor(*((mce::Math **)_R4 + 40), v18);
    v21 = mce::Math::floor(*((mce::Math **)_R4 + 41), v20);
    v22 = (LiquidBlock *)BlockSource::getData(v15, v17, v19, v21);
    result = LiquidBlock::getHeightFromData(v22, v23);
    _R1 = v14 + 1;
      VMOV            S2, R0
      VMOV            S0, R1
      VCVT.F32.S32    S0, S0
      VSUB.F32        S0, S0, S2
      VLDR            S2, [R4,#0xA0]
      VCMPE.F32       S2, S0
      result = 0;
  return result;
}


int __fastcall WaterDropParticle::_shouldUpdateVertexData(WaterDropParticle *this, float a2)
{
  return 0;
}


void __fastcall WaterDropParticle::~WaterDropParticle(WaterDropParticle *this)
{
  WaterDropParticle::~WaterDropParticle(this);
}


_DWORD *__fastcall WaterDropParticle::WaterDropParticle(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Particle::Particle(a1, a2, a3);
  *result = &off_26D9E4C;
  return result;
}
