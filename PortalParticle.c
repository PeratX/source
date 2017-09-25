

int __fastcall PortalParticle::init(PortalParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  PortalParticle *v5; // r10@1
  const Vec3 *v6; // r9@1
  const Vec3 *v7; // r8@1
  unsigned int v8; // r0@1
  int v9; // r1@1
  signed int v10; // r2@1
  int v11; // r0@2
  int *v12; // r4@2
  int v13; // r6@2
  char v14; // r0@3
  int v15; // r0@3
  int v16; // r3@3
  int v17; // r4@3
  int v18; // r5@3
  int v19; // r6@3
  int v20; // r7@3
  void *v21; // r0@3
  int v22; // r0@4
  int v23; // r0@4
  int v24; // r0@4
  unsigned int *v32; // r2@5
  signed int v33; // r1@7
  int v34; // [sp+0h] [bp-A28h]@3
  int v35; // [sp+4h] [bp-A24h]@3
  int v36; // [sp+8h] [bp-A20h]@3
  int v37; // [sp+Ch] [bp-A1Ch]@3
  int v38; // [sp+10h] [bp-A18h]@3
  int v39; // [sp+14h] [bp-A14h]@3
  int v40; // [sp+18h] [bp-A10h]@3
  int v41; // [sp+1Ch] [bp-A0Ch]@3
  unsigned int v42; // [sp+20h] [bp-A08h]@1
  unsigned int v43; // [sp+24h] [bp-A04h]@1
  int v44; // [sp+9E4h] [bp-44h]@1
  char v45; // [sp+9E8h] [bp-40h]@1
  int v46; // [sp+9ECh] [bp-3Ch]@1
  int v47; // [sp+9F0h] [bp-38h]@3

  v5 = this;
  v6 = a3;
  v7 = a2;
  v8 = sub_119D73C((int)&Random::mRandomDevice);
  v42 = v8;
  v44 = 625;
  v9 = 0;
  v10 = 1;
  v45 = 0;
  v46 = 0;
  v43 = v8;
  do
  {
    v11 = v8 ^ (v8 >> 30);
    v12 = (int *)(&v42 + v9);
    v13 = v9++ + 1812433253 * v11;
    v8 = v10++ + 1812433253 * v11;
    v12[2] = v13 + 1;
  }
  while ( v9 != 397 );
  v44 = 624;
  v47 = 398;
  v14 = Random::_genRandInt32((Random *)&v42);
  TextureUVCoordinateSet::fromOldSystem((TextureUVCoordinateSet *)&v34, v14 & 7);
  v15 = (int)v5 + 12;
  v16 = v35;
  v17 = v36;
  v18 = v37;
  v19 = v38;
  v20 = v39;
  *(_DWORD *)v15 = v34;
  *(_DWORD *)(v15 + 4) = v16;
  *(_DWORD *)(v15 + 8) = v17;
  *(_DWORD *)(v15 + 12) = v18;
  *(_DWORD *)(v15 + 16) = v19;
  *(_DWORD *)(v15 + 20) = v20;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v5 + 9,
    &v40);
  *((_DWORD *)v5 + 10) = v41;
  v21 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  *((_DWORD *)v5 + 2) = Random::_genRandInt32((Random *)&v42) % 0xA + 40;
  *((_DWORD *)v5 + 36) = *(_DWORD *)v6;
  *((_DWORD *)v5 + 37) = *((_DWORD *)v6 + 1);
  *((_DWORD *)v5 + 38) = *((_DWORD *)v6 + 2);
  v22 = *(_DWORD *)v7;
  *((_DWORD *)v5 + 54) = *(_DWORD *)v7;
  *((_DWORD *)v5 + 39) = v22;
  v23 = *((_DWORD *)v7 + 1);
  *((_DWORD *)v5 + 55) = v23;
  *((_DWORD *)v5 + 40) = v23;
  v24 = *((_DWORD *)v7 + 2);
  *((_DWORD *)v5 + 56) = v24;
  *((_DWORD *)v5 + 41) = v24;
  _R0 = Random::_genRandInt32((Random *)&v42);
  __asm
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.2
    VMOV.F32        S4, #0.5
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S0, S4
    VSTR            S0, [R10,#0x3C]
    VSTR            S0, [R10,#0xD4]
    VLDR            S2, =0.6
    VLDR            S4, =0.18
    VLDR            S6, =0.54
    VMUL.F32        S2, S0, S2
    VMUL.F32        S4, S0, S4
    VLDR            S8, =0.12
    VMUL.F32        S0, S0, S6
    VLDR            S6, =0.4
    VLDR            S10, =0.36
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S8
    VADD.F32        S0, S0, S10
    VSTR            S2, [R10,#0x44]
    VSTR            S4, [R10,#0x48]
    VSTR            S0, [R10,#0x4C]
  return (*(int (__fastcall **)(PortalParticle *))(*(_DWORD *)v5 + 16))(v5);
}


int __fastcall PortalParticle::normalTick(int result)
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
    VDIV.F32        S0, S2, S0
    VMOV.F32        S2, #-2.0
    VMUL.F32        S8, S0, S0
    VMUL.F32        S2, S8, S2
    VMOV.F32        S8, #1.0
    VADD.F32        S2, S0, S2
    VSUB.F32        S0, S8, S0
    VADD.F32        S2, S2, S8
    VMUL.F32        S4, S2, S4
    VADD.F32        S4, S4, S6
    VSTR            S4, [R0,#0x9C]
    VLDR            S4, [R0,#0x94]
    VLDR            S6, [R0,#0xDC]
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


void __fastcall PortalParticle::~PortalParticle(PortalParticle *this)
{
  PortalParticle::~PortalParticle(this);
}


void __fastcall PortalParticle::~PortalParticle(PortalParticle *this)
{
  PortalParticle *v1; // r4@1
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


int __fastcall PortalParticle::PortalParticle(int a1, int a2, int a3)
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
  *(_DWORD *)v3 = &off_26D9E1C;
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


signed int __fastcall PortalParticle::render(Particle *a1, int a2)
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
    VSUB.F32        S0, S2, S0
    VMUL.F32        S0, S0, S0
    VMUL.F32        S0, S0, S4
    VSTR            S0, [R0,#0x3C]
  }
  return j_j_j__ZN8Particle6renderER21ParticleRenderContext(a1, a2);
}
