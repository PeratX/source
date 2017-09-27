

void __fastcall LavaParticle::~LavaParticle(LavaParticle *this)
{
  LavaParticle *v1; // r4@1
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


int __fastcall LavaParticle::normalTick(LavaParticle *this)
{
  Random *v7; // r0@1
  int v9; // r0@2
  __int64 v10; // ST0C_8@2
  int v11; // ST14_4@2
  int result; // r0@3

  _R4 = this;
  _R5 = (char *)this + 156;
  *((_DWORD *)_R5 + 3) = *((_DWORD *)this + 39);
  *((_DWORD *)_R5 + 4) = *((_DWORD *)this + 40);
  *((_DWORD *)_R5 + 5) = *((_DWORD *)this + 41);
  __asm
  {
    VLDR            S0, [R5,#-0x68]
    VLDR            S2, [R5,#-0x94]
    VCVT.F32.S32    S16, S2
    VCVT.F32.S32    S18, S0
  }
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R0 = Random::_genRandInt32(v7);
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
    VDIV.F32        S4, S18, S16
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v9 = BlockSource::getLevel(*((BlockSource **)_R4 + 35));
    v10 = *((_QWORD *)_R4 + 18);
    v11 = *((_DWORD *)_R4 + 38);
    Level::addParticle(v9, 4, (int)_R5);
    VLDR            S0, =-0.03
    VLDR            S2, [R4,#0x94]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x94]
  Particle::move(_R4, (LavaParticle *)((char *)_R4 + 144));
    VLDR            S4, =0.999
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S4, S2, S4
    VSTR            S4, [R4,#0x98]
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
    __asm
    {
      VLDRNE          S4, =0.6993
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R5]
      VSTRNE          S2, [R6]
    }
  return result;
}


void __fastcall LavaParticle::~LavaParticle(LavaParticle *this)
{
  LavaParticle::~LavaParticle(this);
}


int __fastcall LavaParticle::LavaParticle(int a1, int a2, int a3)
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
  *(_DWORD *)v3 = &off_26D9C0C;
  *(_DWORD *)(v3 + 212) = 0;
  *(_DWORD *)(v3 + 76) = 1065353216;
  *(_DWORD *)(v3 + 68) = 1065353216;
  *(_DWORD *)(v3 + 72) = 1065353216;
  *(_BYTE *)(v3 + 180) = 0;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 49);
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


signed int __fastcall LavaParticle::render(Particle *a1, int a2)
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
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VMUL.F32        S0, S0, S0
    VSUB.F32        S0, S2, S0
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R0,#0x3C]
  }
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext(a1, a2);
}


int __fastcall LavaParticle::getParticleLightColor(int result, float a2)
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


unsigned int __fastcall LavaParticle::init(LavaParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  Random *v6; // r0@1
  Random *v11; // r5@1
  unsigned int result; // r0@1

  _R4 = this;
  v6 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  __asm { VLDR            S0, =0.8 }
  v11 = v6;
  __asm
  {
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x98]
  }
  _R0 = Random::_genRandInt32(v6);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.4
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.05
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x94]
  _R0 = Random::_genRandInt32(v11);
    VLDR            S2, =0.2
    VADD.F32        S0, S0, S0
    VLDR            S2, [R4,#0x3C]
    VSTR            S0, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
  result = Random::_genRandInt32(v11);
    VLDR            D1, =0.8
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            D1, =0.2
    VADD.F64        D0, D0, D1
    VMOV.F64        D1, #16.0
    VDIV.F64        D0, D1, D0
    VCVTR.S32.F64   S0, D0
    VSTR            S0, [R4,#8]
  return result;
}
