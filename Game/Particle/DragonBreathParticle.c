

int __fastcall DragonBreathParticle::normalTick(DragonBreathParticle *this)
{
  signed int v2; // r2@1
  int result; // r0@1
  signed int v4; // r1@1
  int v5; // r12@2
  int v6; // r2@2
  int v7; // r3@2
  int v8; // r5@2
  int v9; // r6@2
  int v10; // r7@2
  void *v11; // r0@2
  _BYTE *v12; // r6@4
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  int v19; // [sp+0h] [bp-40h]@2
  int v20; // [sp+4h] [bp-3Ch]@2
  int v21; // [sp+8h] [bp-38h]@2
  int v22; // [sp+Ch] [bp-34h]@2
  int v23; // [sp+10h] [bp-30h]@2
  int v24; // [sp+14h] [bp-2Ch]@2
  int v25; // [sp+18h] [bp-28h]@2
  int v26; // [sp+1Ch] [bp-24h]@2

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  v2 = *((_DWORD *)this + 13);
  result = v2 + 1;
  *((_DWORD *)_R4 + 13) = v2 + 1;
  v4 = *((_DWORD *)_R4 + 2);
  if ( v2 >= v4 )
    return result;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v19, 3 * result / v4 + 5);
  v5 = (int)_R4 + 12;
  v6 = v20;
  v7 = v21;
  v8 = v22;
  v9 = v23;
  v10 = v24;
  *(_DWORD *)v5 = v19;
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  *(_DWORD *)(v5 + 16) = v9;
  *(_DWORD *)(v5 + 20) = v10;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R4 + 9,
    &v25);
  *((_DWORD *)_R4 + 10) = v26;
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  if ( *((_BYTE *)_R4 + 181) )
    *((_DWORD *)_R4 + 37) = 0;
    *((_BYTE *)_R4 + 216) = 1;
    v12 = (char *)_R4 + 216;
LABEL_6:
    __asm
      VLDR            S0, [R4,#0x94]
      VLDR            D1, =0.002
      VCVT.F64.F32    D0, S0
      VADD.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VSTR            S0, [R4,#0x94]
    goto LABEL_7;
  v12 = (char *)_R4 + 216;
  if ( *((_BYTE *)_R4 + 216) )
    goto LABEL_6;
LABEL_7:
  Particle::move(_R4, (DragonBreathParticle *)((char *)_R4 + 144));
  __asm
    VLDR            S2, [R4,#0xA0]
    VLDR            S4, [R4,#0xAC]
    VLDR            S0, [R4,#0x90]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
      VLDR            D1, =1.1
      VMUL.F64        D0, D0, D1
      VSTR            S0, [R4,#0x90]
      VLDR            S4, [R4,#0x98]
      VCVT.F64.F32    D2, S4
      VMUL.F64        D1, D2, D1
      VCVT.F32.F64    S2, D1
      VSTR            S2, [R4,#0x98]
  else
    __asm { VLDR            S2, [R4,#0x98] }
    VLDR            S4, =0.96
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R5]
    VSTR            S2, [R0]
  result = *v12;
  if ( *v12 )
      VLDRNE          S0, [R4,#0x94]
      VMULNE.F32      S0, S0, S4
      VSTRNE          S0, [R4,#0x94]
  return result;
}


void __fastcall DragonBreathParticle::~DragonBreathParticle(DragonBreathParticle *this)
{
  DragonBreathParticle::~DragonBreathParticle(this);
}


void __fastcall DragonBreathParticle::~DragonBreathParticle(DragonBreathParticle *this)
{
  DragonBreathParticle *v1; // r4@1
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


unsigned int __fastcall DragonBreathParticle::init(DragonBreathParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v6; // r0@1
  Random *v7; // r5@1
  unsigned int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 36) = *(_DWORD *)a3;
  *((_DWORD *)this + 37) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 38) = *((_DWORD *)a3 + 2);
  v6 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v7 = v6;
  _R0 = Random::_genRandInt32(v6);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.15686
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.71765
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x44]
  }
  Random::_genRandInt32(v7);
  *((_DWORD *)_R4 + 18) = 0;
  _R0 = Random::_genRandInt32(v7);
    VLDR            S2, =0.15294
    VLDR            S2, =0.82353
    VMOV.F32        S2, #0.75
    VSTR            S0, [R4,#0x4C]
    VLDR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
  result = Random::_genRandInt32(v7);
    VLDR            D1, =0.8
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            D1, =0.2
    VADD.F64        D0, D0, D1
    VMOV.F64        D1, #20.0
    VDIV.F64        D0, D1, D0
    VCVTR.S32.F64   S0, D0
    VSTR            S0, [R4,#8]
  *((_BYTE *)_R4 + 216) = 0;
  *((_BYTE *)_R4 + 180) = 0;
  return result;
}


int __fastcall DragonBreathParticle::DragonBreathParticle(int a1, int a2, int a3)
{
  int result; // r0@1

  result = Particle::Particle(a1, a2, a3);
  *(_DWORD *)result = &off_26E64C4;
  *(_DWORD *)(result + 104) = 2;
  return result;
}


signed int __fastcall DragonBreathParticle::render(Particle *a1, int a2)
{
  __asm
  {
    VLDR            S2, [R0,#0x34]
    VLDR            S0, [R0,#8]
    VLDR            S4, [R0,#0xD4]
    VCVT.F32.S32    S2, S2
    VLDR            S6, [R1,#0x14]
    VCVT.F32.S32    S0, S0
    VADD.F32        S2, S2, S6
    VMOV.F32        S6, #1.0
    VDIV.F32        S0, S2, S0
    VLDR            S2, =32.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S6
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
    VMUL.F32        S0, S2, S4
    VSTR            S0, [R0,#0x3C]
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext_0(a1, a2);
}
