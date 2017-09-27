

int __fastcall WaterWakeParticle::WaterWakeParticle(int a1, int a2, int a3)
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
  *(_DWORD *)v3 = &off_26D9F3C;
  *(_DWORD *)(v3 + 8) = 16;
  *(_BYTE *)(v3 + 180) = 1;
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v14, 80);
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


void __fastcall WaterWakeParticle::~WaterWakeParticle(WaterWakeParticle *this)
{
  WaterWakeParticle::~WaterWakeParticle(this);
}


void __fastcall WaterWakeParticle::~WaterWakeParticle(WaterWakeParticle *this)
{
  WaterWakeParticle *v1; // r4@1
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


void __fastcall WaterWakeParticle::normalTick(WaterWakeParticle *this)
{
  int v8; // r12@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r6@1
  int v13; // r7@1
  void *v14; // r0@1
  unsigned int *v15; // r2@3
  signed int v16; // r1@5
  int v17; // [sp+0h] [bp-40h]@1
  int v18; // [sp+4h] [bp-3Ch]@1
  int v19; // [sp+8h] [bp-38h]@1
  int v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+10h] [bp-30h]@1
  int v22; // [sp+14h] [bp-2Ch]@1
  int v23; // [sp+18h] [bp-28h]@1
  int v24; // [sp+1Ch] [bp-24h]@1

  _R4 = this;
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
  Particle::move(this, (WaterWakeParticle *)((char *)this + 144));
    VLDR            S0, =0.98
    VLDR            S2, [R4,#0x90]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R4,#0x90]
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.001
    VSTR            S0, [R4,#0x98]
  _R5 = 60 - *((_DWORD *)_R4 + 2);
    VMOV            S0, R5
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R1, S0
  Particle::setSize(_R4, _R1);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v17, _R5 % 4 + 19);
  v8 = (int)_R4 + 12;
  v9 = v18;
  v10 = v19;
  v11 = v20;
  v12 = v21;
  v13 = v22;
  *(_DWORD *)v8 = v17;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v8 + 12) = v11;
  *(_DWORD *)(v8 + 16) = v12;
  *(_DWORD *)(v8 + 20) = v13;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R4 + 9,
    &v23);
  *((_DWORD *)_R4 + 10) = v24;
  v14 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
}


int __fastcall WaterWakeParticle::init(WaterWakeParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  const Vec3 *v6; // r9@1
  Random *v7; // r0@1
  Random *v12; // r8@1
  int v14; // r12@1
  int v15; // r2@1
  int v16; // r3@1
  int v17; // r5@1
  int v18; // r6@1
  int v19; // r7@1
  void *v20; // r0@1
  int result; // r0@2
  unsigned int *v23; // r2@3
  signed int v24; // r1@5
  int v25; // [sp+0h] [bp-58h]@1
  int v26; // [sp+4h] [bp-54h]@1
  int v27; // [sp+8h] [bp-50h]@1
  int v28; // [sp+Ch] [bp-4Ch]@1
  int v29; // [sp+10h] [bp-48h]@1
  int v30; // [sp+14h] [bp-44h]@1
  int v31; // [sp+18h] [bp-40h]@1
  int v32; // [sp+1Ch] [bp-3Ch]@1

  _R4 = this;
  v6 = a3;
  v7 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  __asm { VLDR            S18, =0.3 }
  v12 = v7;
  __asm
  {
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S0, S0, S18
    VSTR            S0, [R4,#0x90]
  }
  _R0 = Random::_genRandInt32(v7);
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.2
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.1
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x94]
    VLDR            S0, [R4,#0x98]
    VSTR            S0, [R4,#0x98]
  *((_DWORD *)_R4 + 17) = 1065353216;
  *((_DWORD *)_R4 + 18) = 1065353216;
  *((_DWORD *)_R4 + 19) = 1065353216;
  Particle::setSize(_R4, 0.01);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v25, 19);
  v14 = (int)_R4 + 12;
  v15 = v26;
  v16 = v27;
  v17 = v28;
  v18 = v29;
  v19 = v30;
  *(_DWORD *)v14 = v25;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  *(_DWORD *)(v14 + 16) = v18;
  *(_DWORD *)(v14 + 20) = v19;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)_R4 + 9,
    &v31);
  *((_DWORD *)_R4 + 10) = v32;
  v20 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  _R0 = Random::_genRandInt32(v12);
    VLDR            D1, =0.8
    VCVT.F64.F32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            D1, =0.2
    VADD.F64        D0, D0, D1
    VMOV.F64        D1, #8.0
    VDIV.F64        D0, D1, D0
    VCVTR.S32.F64   S0, D0
    VSTR            S0, [R4,#8]
  *((_DWORD *)_R4 + 16) = 0;
  *((_DWORD *)_R4 + 36) = *(_DWORD *)v6;
  *((_DWORD *)_R4 + 37) = *((_DWORD *)v6 + 1);
  result = *((_DWORD *)v6 + 2);
  *((_DWORD *)_R4 + 38) = result;
  return result;
}


void __fastcall WaterWakeParticle::normalTick(WaterWakeParticle *this)
{
  WaterWakeParticle::normalTick(this);
}
