

int __fastcall EnchantingTableParticle::EnchantingTableParticle(int a1, int a2, int a3)
{
  int result; // r0@1

  result = Particle::Particle(a1, a2, a3);
  *(_DWORD *)result = &off_26E6524;
  *(_DWORD *)(result + 212) = 0;
  *(_DWORD *)(result + 216) = 0;
  *(_DWORD *)(result + 220) = 0;
  *(_DWORD *)(result + 224) = 0;
  return result;
}


int __fastcall EnchantingTableParticle::normalTick(int result)
{
  *(_DWORD *)(result + 168) = *(_DWORD *)(result + 156);
  *(_DWORD *)(result + 172) = *(_DWORD *)(result + 160);
  *(_DWORD *)(result + 176) = *(_DWORD *)(result + 164);
  __asm
  {
    VLDR            S0, [R0,#8]
    VLDR            S2, [R0,#0x34]
    VLDR            S4, [R0,#0x90]
    VLDR            S6, [R0,#0xD8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S10, =-1.2
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VMUL.F32        S8, S0, S0
    VSUB.F32        S2, S2, S0
    VMUL.F32        S8, S8, S10
    VMUL.F32        S4, S2, S4
    VMUL.F32        S0, S8, S0
    VADD.F32        S4, S4, S6
    VSTR            S4, [R0,#0x9C]
    VLDR            S4, [R0,#0x94]
    VLDR            S6, [R0,#0xDC]
    VMUL.F32        S4, S4, S2
    VADD.F32        S0, S0, S6
    VADD.F32        S0, S0, S4
    VSTR            S0, [R0,#0xA0]
    VLDR            S0, [R0,#0x98]
    VLDR            S4, [R0,#0xE0]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0,#0xA4]
  }
  return result;
}


void __fastcall EnchantingTableParticle::init(EnchantingTableParticle *this, const Vec3 *_R1, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  EnchantingTableParticle::init(this, _R1, _R2, a4, a5);
}


void __fastcall EnchantingTableParticle::~EnchantingTableParticle(EnchantingTableParticle *this)
{
  EnchantingTableParticle *v1; // r4@1
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


void __fastcall EnchantingTableParticle::~EnchantingTableParticle(EnchantingTableParticle *this)
{
  EnchantingTableParticle::~EnchantingTableParticle(this);
}


void __fastcall EnchantingTableParticle::init(EnchantingTableParticle *this, const Vec3 *_R1, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  EnchantingTableParticle *v5; // r4@1
  Random *v10; // r5@1
  unsigned int v14; // kr00_4@1
  int v15; // r12@1
  int v16; // r2@1
  int v17; // r3@1
  int v18; // r5@1
  int v19; // r6@1
  int v20; // r7@1
  void *v21; // r0@1
  unsigned int *v22; // r2@3
  signed int v23; // r1@5
  int v24; // [sp+0h] [bp-50h]@1
  int v25; // [sp+4h] [bp-4Ch]@1
  int v26; // [sp+8h] [bp-48h]@1
  int v27; // [sp+Ch] [bp-44h]@1
  int v28; // [sp+10h] [bp-40h]@1
  int v29; // [sp+14h] [bp-3Ch]@1
  int v30; // [sp+18h] [bp-38h]@1
  int v31; // [sp+1Ch] [bp-34h]@1
  float v32; // [sp+20h] [bp-30h]@1

  v5 = this;
  *((_DWORD *)this + 36) = *(_DWORD *)_R2;
  *((_DWORD *)this + 37) = *((_DWORD *)_R2 + 1);
  *((_DWORD *)this + 38) = *((_DWORD *)_R2 + 2);
  *((_DWORD *)this + 54) = *(_DWORD *)_R1;
  *((_DWORD *)this + 55) = *((_DWORD *)_R1 + 1);
  *((_DWORD *)this + 56) = *((_DWORD *)_R1 + 2);
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S6, [R2]
    VLDR            S2, [R1,#4]
    VLDR            S4, [R1,#8]
    VADD.F32        S0, S6, S0
    VLDR            S8, [R2,#4]
    VLDR            S10, [R2,#8]
    VADD.F32        S2, S8, S2
    VADD.F32        S4, S10, S4
    VSTR            S0, [SP,#0x50+var_30]
    VSTR            S2, [SP,#0x50+var_2C]
    VSTR            S4, [SP,#0x50+var_28]
    VSTR            S0, [R4,#0xA8]
    VSTR            S2, [R4,#0xAC]
    VSTR            S4, [R4,#0xB0]
  }
  Particle::setPos(this, (const Vec3 *)&v32);
  v10 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R6 = Random::_genRandInt32(v10);
  _R0 = Random::_genRandInt32(v10);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VMOV            S2, R6
    VLDR            S6, =0.54
    VCVT.F64.U32    D0, S0
    VCVT.F64.U32    D1, S2
    VMUL.F64        D0, D0, D8
    VMUL.F64        D1, D1, D8
    VMOV.F32        S4, #0.5
    VLDR            S8, =0.36
    VCVT.F32.F64    S0, D0
    VCVT.F32.F64    S2, D1
    VMUL.F32        S0, S0, S4
    VLDR            S4, =0.6
    VMUL.F32        S6, S2, S6
    VMUL.F32        S2, S2, S4
    VLDR            S4, =0.2
    VADD.F32        S0, S0, S4
    VLDR            S4, =0.4
    VADD.F32        S6, S6, S8
    VADD.F32        S2, S2, S4
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
    VSTR            S6, [R4,#0x44]
    VSTR            S6, [R4,#0x48]
    VSTR            S2, [R4,#0x4C]
  *((_DWORD *)v5 + 20) = 1065353216;
    VLDR            S2, =40.0
    VMOV.F32        S4, #10.0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  *((_BYTE *)v5 + 180) = 1;
  v14 = Random::_genRandInt32(v10);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v24, v14 % 0x1A + 225);
  v15 = (int)v5 + 12;
  v16 = v25;
  v17 = v26;
  v18 = v27;
  v19 = v28;
  v20 = v29;
  *(_DWORD *)v15 = v24;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  *(_DWORD *)(v15 + 12) = v18;
  *(_DWORD *)(v15 + 16) = v19;
  *(_DWORD *)(v15 + 20) = v20;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v5 + 9,
    &v30);
  *((_DWORD *)v5 + 10) = v31;
  v21 = (void *)(v30 - 12);
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
      j_j_j_j__ZdlPv_9(v21);
}
