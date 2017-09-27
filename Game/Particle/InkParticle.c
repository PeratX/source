

unsigned int __fastcall InkParticle::init(InkParticle *this, const Vec3 *a2, const Vec3 *_R2, int a4, ParticleEngine *a5)
{
  Random *v11; // r0@1
  Random *v12; // r6@1
  unsigned int result; // r0@3

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
    VSTR            S0, [R4,#0x98]
    VLDR            S6, [R2]
    VADD.F32        S2, S2, S6
    VLDR            S2, [R2,#4]
    VADD.F32        S2, S4, S2
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R2,#8]
    VADD.F32        S0, S0, S2
  v11 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v12 = v11;
  _R0 = Random::_genRandInt32(v11);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.05
    VMOV            S4, R5
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =100.0
    VCVT.F32.S32    S18, S4
    VLDR            S4, =0.00375
  if ( _ZF )
    __asm { VMOVEQ.F32      S18, S2 }
    VLDR            S2, =0.0075
    VSTR            S0, [R4,#0x4C]
    VSTR            S0, [R4,#0x48]
    VSTR            S0, [R4,#0x44]
    VLDR            S0, [R4,#0x3C]
    VMUL.F32        S0, S0, S18
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S0, S4
    VSTR            S2, [R4,#0x3C]
    VSTR            S0, [R4,#0xD4]
    VSTR            S2, [R4,#0xD8]
  result = Random::_genRandInt32(v12);
    VLDR            S2, =0.8
    VLDR            S4, =0.2
    VLDR            S2, =0.12
    VMUL.F32        S2, S18, S2
    VADD.F32        S0, S0, S4
    VDIV.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  return result;
}


signed int __fastcall InkParticle::render(int a1, int a2)
{
  int v10; // r3@5
  int v11; // r4@5
  int v12; // r5@5
  int v13; // r6@5
  int v14; // r7@5
  void *v15; // r0@5
  unsigned int *v17; // r2@7
  signed int v18; // r1@9
  int v19; // [sp+0h] [bp-50h]@1
  int v20; // [sp+4h] [bp-4Ch]@5
  int v21; // [sp+8h] [bp-48h]@5
  int v22; // [sp+Ch] [bp-44h]@5
  int v23; // [sp+10h] [bp-40h]@5
  int v24; // [sp+14h] [bp-3Ch]@5
  int v25; // [sp+18h] [bp-38h]@5
  int v26; // [sp+1Ch] [bp-34h]@5

  _R10 = a1;
  _R8 = a2;
  _R6 = *(_DWORD *)(a1 + 8);
  _R4 = *(_DWORD *)(a1 + 52);
  __asm { VLDR            S16, [R8,#0x14] }
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v19, 8 - 8 * _R4 / *(_DWORD *)(a1 + 8));
  __asm
  {
    VMOV            S0, R4
    VMOV            S2, R6
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VADD.F32        S0, S0, S16
    VDIV.F32        S0, S0, S2
    VMOV.F32        S2, #16.0
    VMUL.F32        S16, S0, S2
    VLDR            S0, =0.0
    VMOV.F32        S2, #1.0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S0 }
    VCMPE.F32       S16, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S2 }
  v10 = v20;
  v11 = v21;
  v12 = v22;
  v13 = v23;
  v14 = v24;
  *(_DWORD *)(_R10 + 12) = v19;
  *(_DWORD *)(_R10 + 16) = v10;
  *(_DWORD *)(_R10 + 20) = v11;
  *(_DWORD *)(_R10 + 24) = v12;
  *(_DWORD *)(_R10 + 28) = v13;
  *(_DWORD *)(_R10 + 32) = v14;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(_R10 + 36),
    &v25);
  *(_DWORD *)(_R10 + 40) = v26;
  v15 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v15);
    VLDR            S0, [R10,#0xD4]
    VLDR            S2, [R10,#0xD8]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S16
    VADD.F32        S0, S2, S0
    VSTR            S0, [R10,#0x3C]
  return Particle::render((Particle *)_R10, _R8);
}


void __fastcall InkParticle::~InkParticle(InkParticle *this)
{
  InkParticle *v1; // r4@1
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


void __fastcall InkParticle::~InkParticle(InkParticle *this)
{
  InkParticle::~InkParticle(this);
}


InkParticle *__fastcall InkParticle::normalTick(InkParticle *this)
{
  char *v2; // r6@1
  BlockSource *v3; // r7@1
  int *v4; // r0@1
  InkParticle *result; // r0@6
  char v10; // [sp+4h] [bp-24h]@1

  _R5 = this;
  v2 = (char *)this + 156;
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  Particle::move(this, (InkParticle *)((char *)this + 144));
  v3 = (BlockSource *)*((_DWORD *)_R5 + 35);
  BlockPos::BlockPos((int)&v10, (int)v2);
  v4 = (int *)BlockSource::getMaterial(v3, (const BlockPos *)&v10);
  if ( Material::isType(v4, 0) == 1 )
  {
    __asm
    {
      VLDREQ          S0, =-0.008
      VLDREQ          S2, [R5,#0x94]
      VADDEQ.F32      S0, S2, S0
      VSTREQ          S0, [R5,#0x94]
    }
  }
  __asm
    VLDR            S2, [R5,#0xA0]
    VLDR            S4, [R5,#0xAC]
    VLDR            S0, [R5,#0x90]
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _ZF )
      VLDR            S2, =1.1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R5,#0x90]
      VLDR            S4, [R5,#0x98]
      VMUL.F32        S2, S4, S2
      VSTR            S2, [R5,#0x98]
  else
    __asm { VLDR            S2, [R5,#0x98] }
  __asm { VLDR            S4, =0.92 }
  result = (InkParticle *)((char *)_R5 + 152);
    VMUL.F32        S6, S0, S4
    VSTR            S6, [R5,#0x90]
    VLDR            S6, [R5,#0x94]
    VMUL.F32        S6, S6, S4
    VMUL.F32        S4, S2, S4
    VSTR            S6, [R5,#0x94]
    VSTR            S4, [R5,#0x98]
  if ( *((_BYTE *)_R5 + 181) )
      VLDRNE          S4, =0.644
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R8]
      VSTRNE          S2, [R0]
  return result;
}
