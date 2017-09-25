

int __fastcall BreakingItemParticle::init(BreakingItemParticle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5)
{
  int v6; // r1@1
  int v7; // r0@1
  int v8; // r0@5
  int v9; // r8@5
  int v10; // r12@5
  int v11; // r2@5
  int v12; // r3@5
  int v13; // r5@5
  int v14; // r6@5
  int v15; // r7@5
  int result; // r0@5

  _R4 = this;
  v6 = a4 >> 16;
  v7 = *((_DWORD *)this + 53);
  if ( !v7 || v6 >= 1 && *(_WORD *)(v7 + 18) != v6 )
  {
    v7 = Item::mItems[v6];
    *((_DWORD *)_R4 + 53) = v7;
  }
  v8 = (*(int (**)(void))(*(_DWORD *)v7 + 248))();
  v9 = v8;
  v10 = (int)_R4 + 12;
  v11 = *(_DWORD *)(v8 + 4);
  v12 = *(_DWORD *)(v8 + 8);
  v13 = *(_DWORD *)(v8 + 12);
  v14 = *(_DWORD *)(v8 + 16);
  v15 = *(_DWORD *)(v8 + 20);
  *(_DWORD *)v10 = *(_DWORD *)v8;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  *(_DWORD *)(v10 + 12) = v13;
  *(_DWORD *)(v10 + 16) = v14;
  *(_DWORD *)(v10 + 20) = v15;
  EntityInteraction::setInteractText((int *)_R4 + 9, (int *)(v8 + 24));
  __asm { VMOV.F32        S0, #0.5 }
  *((_DWORD *)_R4 + 10) = *(_DWORD *)(v9 + 28);
  *((_DWORD *)_R4 + 17) = 1065353216;
  *((_DWORD *)_R4 + 18) = 1065353216;
  *((_DWORD *)_R4 + 19) = 1065353216;
  __asm
    VLDR            S2, [R4,#0x3C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x3C]
  *((_DWORD *)_R4 + 16) = Block::getGravity((Block *)Block::mSnow);
  result = *((_DWORD *)_R4 + 25);
  if ( result == 44 )
    result = j_j_j__ZN8Particle8setPowerEf(_R4, 0.5);
  return result;
}


int __fastcall BreakingItemParticle::render(int a1, int a2)
{
  TextureUVCoordinateSet *v8; // r7@1
  int v10; // r0@1
  int v13; // r0@1
  int v16; // r0@1
  int result; // r0@1
  Tessellator *v22; // r5@2
  float v30; // ST00_4@2
  float v31; // ST04_4@2
  float v35; // ST00_4@2
  float v36; // ST04_4@2
  float v40; // ST00_4@2
  float v41; // ST04_4@2
  float v42; // [sp+0h] [bp-88h]@0
  float v43; // [sp+4h] [bp-84h]@0
  float v44; // [sp+8h] [bp-80h]@2
  float v48; // [sp+18h] [bp-70h]@2

  __asm { VMOV.F32        S16, #0.25 }
  _R4 = (Particle *)a1;
  __asm { VLDR            S0, [R4,#0x2C] }
  _R6 = a2;
  v8 = (TextureUVCoordinateSet *)(a1 + 12);
  __asm
  {
    VMUL.F32        S0, S0, S16
    VMOV            R1, S0
  }
  v10 = TextureUVCoordinateSet::offsetWidth((TextureUVCoordinateSet *)(a1 + 12), _R1, 0.0);
    VMOV.F32        S18, #1.0
    VLDR            S0, [R4,#0x2C]
  _R8 = v10;
    VADD.F32        S0, S0, S18
  v13 = TextureUVCoordinateSet::offsetWidth(v8, _R1, 0.0);
  __asm { VLDR            S0, [R4,#0x30] }
  _R9 = v13;
  v16 = TextureUVCoordinateSet::offsetHeight(v8, _R1, 0.0);
  _R5 = v16;
  result = TextureUVCoordinateSet::offsetHeight(v8, _R1, 0.0);
    VLDR            S0, [R4,#0x9C]
    VLDR            S6, [R4,#0xA8]
    VLDR            S2, [R4,#0xA0]
    VLDR            S8, [R4,#0xAC]
    VSUB.F32        S12, S0, S6
    VLDR            S0, [R6,#0x14]
    VSUB.F32        S2, S2, S8
    VLDR            S4, [R4,#0xA4]
    VLDR            S10, [R4,#0xB0]
  _R1 = *(_DWORD *)(_R6 + 8);
    VSUB.F32        S4, S4, S10
    VLDR            S14, [R6,#0x10]
    VMUL.F32        S12, S12, S0
    VLDR            S1, [R1,#8]
    VMUL.F32        S2, S2, S0
    VMUL.F32        S4, S4, S0
    VADD.F32        S6, S12, S6
    VLDR            S12, [R1,#4]
    VADD.F32        S2, S2, S8
    VLDR            S8, [R1]
    VADD.F32        S4, S4, S10
    VSUB.F32        S16, S6, S8
    VSUB.F32        S20, S2, S12
    VSUB.F32        S18, S4, S1
    VMUL.F32        S2, S16, S16
    VMUL.F32        S4, S20, S20
    VMUL.F32        S6, S18, S18
    VADD.F32        S2, S4, S2
    VADD.F32        S17, S2, S6
    VCMPE.F32       S17, S14
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV            R2, S0
      VLDR            S2, [R4,#0x3C]
      VMOV            S24, R0
      VLDR            S4, =0.1
      VMOV            S28, R5
    }
    v22 = *(Tessellator **)(_R6 + 4);
      VMUL.F32        S26, S2, S4
      VMOV            S30, R8
      VMOV            S22, R9
    (*(void (__fastcall **)(float *, Particle *, int))(*(_DWORD *)_R4 + 28))(&v44, _R4, _R2);
      VLDR            S0, [R4,#0x44]
      VLDR            S8, [SP,#0x88+var_80]
      VLDR            S2, [R4,#0x48]
      VLDR            S10, [SP,#0x88+var_7C]
      VMUL.F32        S0, S8, S0
      VLDR            S4, [R4,#0x4C]
      VLDR            S6, [R4,#0x50]
      VMUL.F32        S2, S10, S2
      VLDR            S12, [SP,#0x88+var_78]
      VLDR            S14, [SP,#0x88+var_74]
      VMUL.F32        S4, S12, S4
      VMUL.F32        S6, S14, S6
      VSTR            S0, [SP,#0x88+var_70]
      VSTR            S2, [SP,#0x88+var_6C]
      VSTR            S4, [SP,#0x88+var_68]
      VSTR            S6, [SP,#0x88+var_64]
    Tessellator::color(v22, (const Color *)&v48);
    __asm { VMOV            R2, S17 }
    Particle::_updateVertexData(_R4, *(const Vec3 **)(_R6 + 12), _R2);
      VLDR            S0, [R4,#0x78]
      VLDR            S4, [R4,#0x80]
      VLDR            S2, [R4,#0x7C]
      VLDR            S6, [R4,#0x84]
      VADD.F32        S0, S4, S0
      VLDR            S8, [R4,#0x88]
      VADD.F32        S2, S6, S2
      VSTR            S30, [SP,#0x88+var_88]
      VMUL.F32        S4, S8, S26
      VSTR            S24, [SP,#0x88+var_84]
      VMUL.F32        S0, S26, S0
      VMUL.F32        S2, S26, S2
      VSUB.F32        S4, S20, S4
      VSUB.F32        S0, S16, S0
      VSUB.F32        S2, S18, S2
      VMOV            R2, S4
      VMOV            R1, S0
      VMOV            R3, S2
    Tessellator::vertexUV(v22, _R1, _R2, _R3, v42, v43);
      VSUB.F32        S0, S4, S0
      VSUB.F32        S2, S6, S2
      VSTR            S28, [SP,#0x88+var_84]
      VMUL.F32        S0, S0, S26
      VMUL.F32        S2, S2, S26
      VADD.F32        S4, S4, S20
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S18
    Tessellator::vertexUV(v22, _R1, _R2, _R3, v30, v31);
      VSTR            S22, [SP,#0x88+var_88]
    Tessellator::vertexUV(v22, _R1, _R2, _R3, v35, v36);
      VSUB.F32        S0, S0, S4
      VSUB.F32        S2, S2, S6
    result = Tessellator::vertexUV(v22, _R1, _R2, _R3, v40, v41);
  return result;
}


void __fastcall BreakingItemParticle::~BreakingItemParticle(BreakingItemParticle *this)
{
  BreakingItemParticle::~BreakingItemParticle(this);
}


void *__fastcall BreakingItemParticle::getParticleTexture(BreakingItemParticle *this)
{
  return &Particle::ITEMS_ATLAS;
}


void __fastcall BreakingItemParticle::~BreakingItemParticle(BreakingItemParticle *this)
{
  BreakingItemParticle *v1; // r4@1
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
