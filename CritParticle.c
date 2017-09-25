

void __fastcall CritParticle::~CritParticle(CritParticle *this)
{
  CritParticle *v1; // r4@1
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


int __fastcall CritParticle::normalTick(CritParticle *this)
{
  int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  Particle::move(this, (CritParticle *)((char *)this + 144));
  __asm
  {
    VLDR            S0, =0.96
    VLDR            S2, [R4,#0x48]
    VLDR            S4, =0.7
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.9
    VLDR            S8, =-0.02
    VSTR            S0, [R4,#0x48]
    VLDR            S0, [R4,#0x4C]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R4,#0x4C]
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R4,#0x90]
    VLDR            S6, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S4, S2, S4
    VADD.F32        S6, S6, S8
    VSTR            S4, [R4,#0x98]
    VSTR            S6, [R4,#0x94]
  }
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
    __asm
    {
      VLDRNE          S4, =0.49
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R4,#0x90]
      VSTRNE          S2, [R4,#0x98]
    }
  return result;
}


int __fastcall CritParticle::init(CritParticle *this, const Vec3 *a2, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  Random *v11; // r0@1
  Random *v12; // r6@1

  _R4 = this;
  __asm
  {
    VLDR            S0, =0.1
    VLDR            S2, [R4,#0x90]
  }
  _R5 = a4;
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VLDR            S4, [R4,#0x94]
    VMUL.F32        S4, S4, S0
    VSTR            S4, [R4,#0x94]
    VLDR            S6, [R4,#0x98]
    VMUL.F32        S0, S6, S0
    VLDR            S6, =0.4
    VSTR            S0, [R4,#0x98]
    VLDR            S8, [R2]
    VLDR            S10, [R2,#4]
    VLDR            S12, [R2,#8]
    VMUL.F32        S8, S8, S6
    VMUL.F32        S10, S10, S6
    VMUL.F32        S6, S12, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VADD.F32        S0, S0, S6
  v11 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v12 = v11;
  _R0 = Random::_genRandInt32(v11);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.3
    VCVT.F64.U32    D0, S0
  if ( _ZF )
    _R5 = 1;
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S18, =0.6
    VMOV            S4, R5
    VMOV.F32        S2, #0.75
    VCVT.F32.S32    S20, S4
    VADD.F32        S0, S0, S18
    VMUL.F32        S2, S20, S2
    VSTR            S0, [R4,#0x4C]
    VSTR            S0, [R4,#0x48]
    VSTR            S0, [R4,#0x44]
    VLDR            S0, [R4,#0x3C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD8]
  _R0 = Random::_genRandInt32(v12);
    VLDR            S2, =0.8
    VMOV.F32        S2, #6.0
    VDIV.F32        S0, S2, S0
    VMUL.F32        S0, S0, S20
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  *((_DWORD *)_R4 + 2) = _R0 * _R5;
  return (*(int (__fastcall **)(CritParticle *))(*(_DWORD *)_R4 + 16))(_R4);
}


void __fastcall CritParticle::~CritParticle(CritParticle *this)
{
  CritParticle::~CritParticle(this);
}


int __fastcall CritParticle::CritParticle(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  void *v10; // r0@1
  unsigned int *v12; // r2@3
  signed int v13; // r1@5
  int v14; // [sp+0h] [bp-40h]@1
  int v15; // [sp+4h] [bp-3Ch]@1
  int v16; // [sp+8h] [bp-38h]@1
  int v17; // [sp+Ch] [bp-34h]@1
  int v18; // [sp+10h] [bp-30h]@1
  int v19; // [sp+14h] [bp-2Ch]@1
  int v20; // [sp+18h] [bp-28h]@1
  int v21; // [sp+1Ch] [bp-24h]@1

  v3 = a1;
  Particle::Particle(a1, a2, a3);
  *(_DWORD *)v3 = &off_26D9B4C;
  *(_BYTE *)(v3 + 212) = 1;
  *(_DWORD *)(v3 + 216) = 0;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 65);
  v4 = v3 + 12;
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
    (int *)(v3 + 36),
    &v20);
  *(_DWORD *)(v3 + 40) = v21;
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
  *(_BYTE *)(v3 + 180) = 0;
  return v3;
}


Particle *__fastcall CritParticle::render(Particle *result, int a2)
{
  if ( *((_BYTE *)result + 212) )
  {
    __asm
    {
      VLDR            S2, [R0,#0x34]
      VLDR            S0, [R0,#8]
      VLDR            S4, [R0,#0xD8]
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
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VCMPE.F32       S0, S6
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S6 }
      VMUL.F32        S0, S0, S4
      VSTR            S0, [R0,#0x3C]
    result = (Particle *)j_j_j__ZN8Particle6renderER21ParticleRenderContext(result, a2);
  }
  return result;
}
