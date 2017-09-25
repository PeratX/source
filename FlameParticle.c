

int __fastcall FlameParticle::FlameParticle(int a1, int a2, int a3)
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
  *(_DWORD *)v3 = &off_26D9BDC;
  *(_DWORD *)(v3 + 212) = 0;
  *(_BYTE *)(v3 + 180) = 1;
  *(_BYTE *)(v3 + 108) = 1;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 48);
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
  return v3;
}


void __fastcall FlameParticle::~FlameParticle(FlameParticle *this)
{
  FlameParticle *v1; // r4@1
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


signed int __fastcall FlameParticle::render(Particle *a1, int a2)
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
    VMOV.F32        S2, #-0.5
    VMUL.F32        S0, S0, S0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S6
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R0,#0x3C]
  }
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext(a1, a2);
}


int __fastcall FlameParticle::init(FlameParticle *this, const Vec3 *a2, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  Random *v10; // r0@1
  Random *v11; // r5@1
  int result; // r0@1

  _R4 = this;
  __asm
  {
    VLDR            S0, =0.01
    VLDR            S2, [R4,#0x90]
    VLDR            S4, [R2]
    VMUL.F32        S2, S2, S0
    VADD.F32        S2, S2, S4
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VLDR            S4, [R2,#4]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VLDR            S2, [R2,#8]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x98]
  }
  v10 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v11 = v10;
  _R0 = Random::_genRandInt32(v10);
    VMOV            S0, R0
    VCVT.F64.U32    D9, S0
  _R0 = Random::_genRandInt32(v11);
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D1, D9, D8
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S2, D1
    VCVT.F32.F64    S0, D0
    VSUB.F32        S0, S2, S0
    VLDR            S18, =0.05
    VLDR            S2, [R4,#0x9C]
    VMUL.F32        S0, S0, S18
    VSTR            S0, [R4,#0x9C]
    VCVT.F64.U32    D10, S0
    VMUL.F64        D1, D10, D8
    VLDR            S2, [R4,#0xA0]
    VSTR            S0, [R4,#0xA0]
    VLDR            S2, [R4,#0xA4]
    VSTR            S0, [R4,#0xA4]
  *((_DWORD *)_R4 + 53) = *((_DWORD *)_R4 + 15);
  *((_DWORD *)_R4 + 19) = 1065353216;
  *((_DWORD *)_R4 + 17) = 1065353216;
  *((_DWORD *)_R4 + 18) = 1065353216;
    VLDR            S2, =0.8
    VMOV.F32        S4, #8.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.2
    VDIV.F32        S0, S4, S0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  result = _R0 + 4;
  *((_DWORD *)_R4 + 2) = result;
  return result;
}


void __fastcall FlameParticle::~FlameParticle(FlameParticle *this)
{
  FlameParticle::~FlameParticle(this);
}


int __fastcall FlameParticle::normalTick(FlameParticle *this)
{
  int result; // r0@1

  _R4 = this;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  Particle::move(this, (FlameParticle *)((char *)this + 144));
  __asm
  {
    VLDR            S4, =0.96
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S4, S2, S4
    VSTR            S4, [R4,#0x98]
  }
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
    __asm
    {
      VLDRNE          S4, =0.672
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R4,#0x90]
      VSTRNE          S2, [R4,#0x98]
    }
  return result;
}


int __fastcall FlameParticle::getParticleLightColor(int result, float a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r1@1

  v2 = *(_QWORD *)&qword_283E614;
  v3 = unk_283E61C;
  *(_DWORD *)result = Color::WHITE;
  *(_QWORD *)(result + 4) = v2;
  *(_DWORD *)(result + 12) = v3;
  return result;
}
