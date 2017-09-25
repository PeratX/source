

mce::TexturePtr *__fastcall Particle::resetStaticResources(Particle *this)
{
  int v2; // [sp+0h] [bp-80h]@1
  char v3; // [sp+18h] [bp-68h]@1
  char v4; // [sp+30h] [bp-50h]@1
  char v5; // [sp+48h] [bp-38h]@1
  char v6; // [sp+60h] [bp-20h]@1

  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v6);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::PARTICLE_ATLAS, (mce::TexturePtr *)&v6);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v6);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v5);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::TERRAIN_ATLAS, (mce::TexturePtr *)&v5);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v5);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v4);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::ITEMS_ATLAS, (mce::TexturePtr *)&v4);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v4);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v3);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::FLAME_ATLAS, (mce::TexturePtr *)&v3);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v3);
  mce::TexturePtr::TexturePtr((mce::TexturePtr *)&v2);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::FORCEFIELD_ATLAS, (mce::TexturePtr *)&v2);
  return mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v2);
}


void *__fastcall Particle::getParticleTexture(Particle *this)
{
  return &Particle::PARTICLE_ATLAS;
}


signed int __fastcall Particle::render(Particle *a1, int a2)
{
  signed int result; // r0@1
  Tessellator *v9; // r5@2
  float v21; // ST00_4@8
  float v22; // ST04_4@8
  float v26; // ST00_4@8
  float v27; // ST04_4@8
  float v31; // ST00_4@8
  float v32; // ST04_4@8
  float v33; // [sp+0h] [bp-98h]@0
  float v34; // [sp+4h] [bp-94h]@0
  float v47; // [sp+38h] [bp-60h]@2

  _R4 = a1;
  _R6 = a2;
  __asm
  {
    VLDR            S0, [R4,#0x9C]
    VLDR            S6, [R4,#0xA8]
    VLDR            S2, [R4,#0xA0]
    VLDR            S8, [R4,#0xAC]
    VSUB.F32        S0, S0, S6
    VLDR            S26, [R6,#0x14]
    VSUB.F32        S2, S2, S8
    VLDR            S4, [R4,#0xA4]
    VLDR            S10, [R4,#0xB0]
  }
  result = *(_DWORD *)(a2 + 8);
    VSUB.F32        S4, S4, S10
    VLDR            S12, [R6,#0x10]
    VMUL.F32        S0, S0, S26
    VLDR            S14, [R0,#8]
    VMUL.F32        S2, S2, S26
    VMUL.F32        S4, S4, S26
    VADD.F32        S0, S0, S6
    VLDR            S6, [R0]
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#4]
    VADD.F32        S4, S4, S10
    VSUB.F32        S16, S0, S6
    VSUB.F32        S18, S2, S8
    VSUB.F32        S20, S4, S14
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VMUL.F32        S4, S20, S20
    VADD.F32        S0, S2, S0
    VADD.F32        S22, S0, S4
    VCMPE.F32       S22, S12
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S24, [R4,#0x3C]
      VLDR            S0, =0.1
      VLDR            S2, [R4,#0x48]
      VMUL.F32        S30, S24, S0
      VLDR            S10, [R4,#0x58]
      VLDR            S0, [R4,#0x44]
      VLDR            S8, [R4,#0x54]
      VMUL.F32        S2, S10, S2
      VLDR            S4, [R4,#0x4C]
      VLDR            S12, [R4,#0x5C]
      VMUL.F32        S0, S8, S0
      VLDR            S6, [R4,#0x50]
      VLDR            S14, [R4,#0x60]
      VMUL.F32        S4, S12, S4
    }
    v9 = *(Tessellator **)(a2 + 4);
      VMUL.F32        S6, S14, S6
      VSTR            S0, [SP,#0x98+var_60]
      VSTR            S2, [SP,#0x98+var_5C]
      VSTR            S4, [SP,#0x98+var_58]
      VSTR            S6, [SP,#0x98+var_54]
    Tessellator::color(*(Tessellator **)(a2 + 4), (const Color *)&v47);
    __asm { VMOV            R2, S22 }
    Particle::_updateVertexData(_R4, *(const Vec3 **)(_R6 + 12), _R2);
      VLDR            S0, =-0.1
      VLDR            S6, [R4,#0x80]
      VMUL.F32        S0, S24, S0
      VLDR            S2, [R4,#0x78]
      VLDR            S4, [R4,#0x7C]
      VMUL.F32        S10, S6, S30
      VLDR            S8, [R4,#0x84]
      VSUB.F32        S5, S2, S6
      VADD.F32        S9, S6, S2
      VLDR            S13, [R4,#0x88]
      VSUB.F32        S3, S6, S2
      VSUB.F32        S7, S4, S8
      VMUL.F32        S14, S8, S30
      VMUL.F32        S12, S0, S2
      VSUB.F32        S11, S8, S4
      VMUL.F32        S1, S0, S4
      VADD.F32        S8, S8, S4
      VMUL.F32        S24, S0, S13
      VMUL.F32        S6, S3, S30
      VMUL.F32        S22, S13, S30
      VSUB.F32        S2, S12, S10
      VMUL.F32        S4, S11, S30
      VSUB.F32        S0, S1, S14
      VMUL.F32        S17, S5, S30
      VMUL.F32        S19, S7, S30
      VMUL.F32        S28, S9, S30
      VMUL.F32        S30, S8, S30
      VSTR            S2, [SP,#0x98+var_90]
      VSTR            S24, [SP,#0x98+var_8C]
      VSTR            S0, [SP,#0x98+var_88]
      VSTR            S6, [SP,#0x98+var_84]
      VSTR            S22, [SP,#0x98+var_80]
      VSTR            S4, [SP,#0x98+var_7C]
      VSTR            S28, [SP,#0x98+var_78]
      VSTR            S22, [SP,#0x98+var_74]
      VSTR            S30, [SP,#0x98+var_70]
      VSTR            S17, [SP,#0x98+var_6C]
      VSTR            S24, [SP,#0x98+var_68]
      VSTR            S19, [SP,#0x98+var_64]
      VLDR            S8, [R4,#0x70]
      VCMPE.F32       S8, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
      __asm { VMOV.F32        S4, S24 }
    else
      _R0 = *(_DWORD *)(_R6 + 12);
      __asm
      {
        VLDR            S10, [R4,#0x9C]
        VLDR            S12, [R4,#0xA0]
        VLDR            S1, [R0]
        VLDR            S3, [R0,#4]
        VSUB.F32        S10, S10, S1
        VLDR            S14, [R4,#0xA4]
        VSUB.F32        S12, S12, S3
        VLDR            S5, [R0,#8]
        VSUB.F32        S14, S14, S5
        VMUL.F32        S1, S10, S10
        VMUL.F32        S3, S12, S12
        VMUL.F32        S5, S14, S14
        VADD.F32        S1, S3, S1
        VLDR            S3, =0.0001
        VADD.F32        S1, S1, S5
        VSQRT.F32       S1, S1
        VCMPE.F32       S1, S3
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _NF ^ _VF )
        _R1 = *(&Vec3::ZERO + 1);
        _R2 = Vec3::ZERO;
        _R0 = dword_2822498;
      else
        __asm
        {
          VDIV.F32        S14, S14, S1
          VDIV.F32        S12, S12, S1
          VDIV.F32        S10, S10, S1
          VMOV            R0, S14
          VMOV            R1, S12
          VMOV            R2, S10
        }
        VLDR            S10, [R4,#0x74]
        VMOV            S12, R2
        VMOV            S14, R1
        VSUB.F32        S10, S8, S10
        VMUL.F32        S1, S12, S12
        VMUL.F32        S3, S14, S14
        VMOV            S5, R0
        VNEG.F32        S12, S12
        VMUL.F32        S7, S5, S5
        VNEG.F32        S14, S14
        VMUL.F32        S10, S10, S26
        VADD.F32        S3, S10, S8
        VADD.F32        S8, S1, S7
        VMUL.F32        S10, S3, S3
        VADD.F32        S1, S8, S10
        VNEG.F32        S10, S5
        VDIV.F32        S8, S12, S1
        VDIV.F32        S12, S14, S1
        VDIV.F32        S10, S10, S1
        VMUL.F32        S14, S0, S8
        VMUL.F32        S5, S2, S10
        VMUL.F32        S7, S2, S12
        VMUL.F32        S9, S24, S8
        VMUL.F32        S11, S4, S8
        VMUL.F32        S13, S6, S10
        VMUL.F32        S15, S6, S12
        VMUL.F32        S26, S22, S8
        VSUB.F32        S5, S5, S14
        VMUL.F32        S14, S22, S10
        VSUB.F32        S7, S9, S7
        VMUL.F32        S9, S4, S12
        VSUB.F32        S11, S13, S11
        VMUL.F32        S17, S0, S12
        VSUB.F32        S13, S26, S15
        VMUL.F32        S15, S5, S10
        VMUL.F32        S19, S5, S8
        VMUL.F32        S26, S7, S12
        VSUB.F32        S9, S9, S14
        VMUL.F32        S14, S11, S10
        VMUL.F32        S28, S13, S12
        VMUL.F32        S30, S13, S8
        VSUB.F32        S15, S26, S15
        VMUL.F32        S26, S9, S10
        VSUB.F32        S28, S28, S14
        VMUL.F32        S14, S9, S12
        VADD.F32        S15, S15, S15
        VSUB.F32        S26, S26, S30
        VMUL.F32        S30, S11, S8
        VSUB.F32        S30, S30, S14
        VMUL.F32        S14, S24, S10
        VSUB.F32        S17, S17, S14
        VMUL.F32        S14, S17, S12
        VMUL.F32        S21, S17, S10
        VSUB.F32        S19, S19, S14
        VMUL.F32        S14, S7, S8
        VSUB.F32        S21, S21, S14
        VDIV.F32        S14, S3, S1
        VADD.F32        S14, S14, S14
        VMUL.F32        S1, S17, S14
        VMUL.F32        S3, S11, S14
        VMUL.F32        S5, S5, S14
        VMUL.F32        S9, S9, S14
        VMUL.F32        S7, S7, S14
        VADD.F32        S11, S21, S21
        VADD.F32        S2, S1, S2
        VMUL.F32        S1, S13, S14
        VADD.F32        S5, S5, S24
        VADD.F32        S6, S9, S6
        VADD.F32        S0, S7, S0
        VADD.F32        S7, S19, S19
        VADD.F32        S9, S28, S28
        VADD.F32        S3, S3, S22
        VADD.F32        S13, S26, S26
        VADD.F32        S4, S1, S4
        VADD.F32        S1, S30, S30
        VADD.F32        S2, S2, S15
        VADD.F32        S5, S5, S11
        VADD.F32        S0, S0, S7
        VADD.F32        S6, S6, S9
        VADD.F32        S3, S3, S13
        VADD.F32        S4, S4, S1
        VSTR            S2, [SP,#0x98+var_90]
        VSTR            S5, [SP,#0x98+var_8C]
        VSTR            S0, [SP,#0x98+var_88]
        VSTR            S6, [SP,#0x98+var_84]
        VSTR            S3, [SP,#0x98+var_80]
        VSTR            S4, [SP,#0x98+var_7C]
        VLDR            S0, [SP,#0x98+var_78]
        VLDR            S2, [SP,#0x98+var_74]
        VLDR            S4, [SP,#0x98+var_70]
        VMUL.F32        S1, S0, S10
        VMUL.F32        S3, S0, S12
        VMUL.F32        S6, S4, S8
        VMUL.F32        S5, S2, S8
        VMUL.F32        S7, S2, S10
        VSUB.F32        S6, S1, S6
        VSUB.F32        S1, S5, S3
        VSUB.F32        S3, S9, S7
        VMUL.F32        S5, S6, S10
        VMUL.F32        S7, S1, S12
        VMUL.F32        S9, S1, S8
        VMUL.F32        S15, S6, S8
        VMUL.F32        S11, S3, S10
        VMUL.F32        S13, S3, S12
        VMUL.F32        S3, S3, S14
        VMUL.F32        S6, S6, S14
        VSUB.F32        S5, S7, S5
        VMUL.F32        S1, S1, S14
        VSUB.F32        S7, S11, S9
        VSUB.F32        S9, S15, S13
        VADD.F32        S0, S3, S0
        VADD.F32        S2, S6, S2
        VADD.F32        S3, S5, S5
        VADD.F32        S6, S7, S7
        VADD.F32        S1, S9, S9
        VADD.F32        S28, S0, S3
        VADD.F32        S22, S2, S6
        VADD.F32        S30, S4, S1
        VSTR            S28, [SP,#0x98+var_78]
        VSTR            S22, [SP,#0x98+var_74]
        VSTR            S30, [SP,#0x98+var_70]
        VLDR            S0, [SP,#0x98+var_6C]
        VLDR            S2, [SP,#0x98+var_68]
        VLDR            S4, [SP,#0x98+var_64]
        VMUL.F32        S10, S3, S10
        VMUL.F32        S12, S3, S12
        VMUL.F32        S8, S6, S8
        VMUL.F32        S14, S1, S14
        VSUB.F32        S10, S10, S9
        VSUB.F32        S8, S8, S12
        VADD.F32        S4, S14, S4
        VADD.F32        S12, S5, S5
        VADD.F32        S6, S10, S10
        VADD.F32        S8, S8, S8
        VADD.F32        S17, S0, S12
        VADD.F32        S24, S2, S6
        VADD.F32        S19, S4, S8
        VSTR            S17, [SP,#0x98+var_6C]
        VSTR            S24, [SP,#0x98+var_68]
        VSTR            S19, [SP,#0x98+var_64]
        VLDR            S2, [SP,#0x98+var_90]
        VLDR            S4, [SP,#0x98+var_8C]
        VLDR            S0, [SP,#0x98+var_88]
      VADD.F32        S2, S2, S16
      VADD.F32        S4, S4, S18
      VADD.F32        S0, S0, S20
      VMOV            R1, S2
      VLDR            S2, [R4,#0x1C]
      VMOV            R2, S4
      VMOV            R3, S0
      VLDR            S0, [R4,#0x18]
      VSTR            S0, [SP,#0x98+var_98]
      VSTR            S2, [SP,#0x98+var_94]
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v33, v34);
      VLDR            S0, [SP,#0x98+var_84]
      VLDR            S2, [SP,#0x98+var_80]
      VLDR            S4, [SP,#0x98+var_7C]
      VADD.F32        S0, S0, S16
      VADD.F32        S2, S2, S18
      VADD.F32        S4, S4, S20
      VMOV            R1, S0
      VLDR            S0, [R4,#0x14]
      VMOV            R2, S2
      VLDR            S2, [R4,#0x18]
      VMOV            R3, S4
      VSTR            S2, [SP,#0x98+var_98]
      VSTR            S0, [SP,#0x98+var_94]
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v21, v22);
      VADD.F32        S0, S28, S16
      VADD.F32        S2, S22, S18
      VADD.F32        S4, S30, S20
      VLDR            S0, [R4,#0x10]
      VLDR            S2, [R4,#0x14]
    Tessellator::vertexUV(v9, _R1, _R2, _R3, v26, v27);
      VADD.F32        S0, S17, S16
      VADD.F32        S2, S24, S18
      VADD.F32        S4, S19, S20
    result = Tessellator::vertexUV(v9, _R1, _R2, _R3, v31, v32);
  return result;
}


void __fastcall Particle::~Particle(Particle *this)
{
  Particle::~Particle(this);
}


int __fastcall Particle::normalTick(Particle *this)
{
  int result; // r0@1

  _R4 = this;
  __asm { VLDR            S0, =-0.04 }
  *((_DWORD *)this + 42) = *((_DWORD *)this + 39);
  *((_DWORD *)this + 43) = *((_DWORD *)this + 40);
  *((_DWORD *)this + 44) = *((_DWORD *)this + 41);
  *((_DWORD *)this + 29) = *((_DWORD *)this + 28);
  __asm
  {
    VLDR            S2, [R4,#0x40]
    VLDR            S4, [R4,#0x94]
    VMUL.F32        S0, S2, S0
    VADD.F32        S0, S4, S0
    VSTR            S0, [R4,#0x94]
  }
  Particle::move(this, (Particle *)((char *)this + 144));
    VLDR            S4, =0.98
    VLDR            S0, [R4,#0x90]
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R4,#0x90]
    VLDR            S2, [R4,#0x94]
    VMUL.F32        S2, S2, S4
    VSTR            S2, [R4,#0x94]
    VLDR            S2, [R4,#0x98]
    VMUL.F32        S4, S2, S4
    VSTR            S4, [R4,#0x98]
  result = *((_BYTE *)_R4 + 181);
  if ( *((_BYTE *)_R4 + 181) )
    __asm
    {
      VLDRNE          S4, =0.686
      VMULNE.F32      S0, S0, S4
      VMULNE.F32      S2, S2, S4
      VSTRNE          S0, [R4,#0x90]
      VSTRNE          S2, [R4,#0x98]
    }
  return result;
}


Particle *__fastcall Particle::~Particle(Particle *this)
{
  Particle *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9AEC;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}


Particle *__fastcall Particle::scale(Particle *this, float _R1)
{
  Particle *result; // r0@1
  float v8; // [sp+0h] [bp-38h]@1
  int v9; // [sp+Ch] [bp-2Ch]@1
  int v10; // [sp+10h] [bp-28h]@1
  int v11; // [sp+14h] [bp-24h]@1
  int v12; // [sp+18h] [bp-20h]@1
  int v13; // [sp+1Ch] [bp-1Ch]@1
  int v14; // [sp+20h] [bp-18h]@1
  char v15; // [sp+24h] [bp-14h]@1

  __asm
  {
    VLDR            S0, =0.2
    VMOV            S16, R1
  }
  _R4 = this;
    VMUL.F32        S0, S16, S0
    VSTR            S0, [SP,#0x38+var_38]
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S0, [SP,#0x38+var_30]
  AABB::resize((AABB *)&v9, (Particle *)((char *)this + 184), (int)&v8);
  *((_DWORD *)_R4 + 46) = v9;
  *((_DWORD *)_R4 + 47) = v10;
  *((_DWORD *)_R4 + 48) = v11;
  *((_DWORD *)_R4 + 49) = v12;
  *((_DWORD *)_R4 + 50) = v13;
  *((_DWORD *)_R4 + 51) = v14;
  *((_BYTE *)_R4 + 208) = v15;
  result = _R4;
    VLDR            S0, [R4,#0x3C]
    VMUL.F32        S0, S0, S16
    VSTR            S0, [R4,#0x3C]
  return result;
}


void __fastcall Particle::initStaticResources(Particle *this, mce::TextureGroup *a2)
{
  mce::TextureGroup *v2; // r5@1
  char *v3; // r0@1
  char *v4; // r0@2
  char *v5; // r0@3
  char *v6; // r0@4
  char *v7; // r0@5
  char *v8; // r0@6
  char *v9; // r0@7
  char *v10; // r0@8
  char *v11; // r0@9
  char *v12; // r0@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  unsigned int *v27; // r2@40
  signed int v28; // r1@42
  unsigned int *v29; // r2@44
  signed int v30; // r1@46
  unsigned int *v31; // r2@48
  signed int v32; // r1@50
  char *v33; // [sp+8h] [bp-D8h]@9
  char *v34; // [sp+Ch] [bp-D4h]@9
  int v35; // [sp+10h] [bp-D0h]@9
  char v36; // [sp+14h] [bp-CCh]@9
  char *v37; // [sp+30h] [bp-B0h]@7
  char *v38; // [sp+34h] [bp-ACh]@7
  int v39; // [sp+38h] [bp-A8h]@7
  char v40; // [sp+3Ch] [bp-A4h]@7
  char *v41; // [sp+58h] [bp-88h]@5
  char *v42; // [sp+5Ch] [bp-84h]@5
  int v43; // [sp+60h] [bp-80h]@5
  char v44; // [sp+64h] [bp-7Ch]@5
  char *v45; // [sp+80h] [bp-60h]@3
  char *v46; // [sp+84h] [bp-5Ch]@3
  int v47; // [sp+88h] [bp-58h]@3
  char v48; // [sp+8Ch] [bp-54h]@3
  char *v49; // [sp+A8h] [bp-38h]@1
  char *v50; // [sp+ACh] [bp-34h]@1
  int v51; // [sp+B0h] [bp-30h]@1
  char v52; // [sp+B4h] [bp-2Ch]@1

  v2 = this;
  sub_119C884((void **)&v49, "textures/particle/particles");
  v50 = v49;
  v49 = (char *)&unk_28898CC;
  v51 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v52, v2, (int)&v50, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::PARTICLE_ATLAS, (mce::TexturePtr *)&v52);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v52);
  v3 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = v49 - 12;
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v49 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  sub_119C884((void **)&v45, "atlas.terrain");
  v46 = v45;
  v45 = (char *)&unk_28898CC;
  v47 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v48, v2, (int)&v46, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::TERRAIN_ATLAS, (mce::TexturePtr *)&v48);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v48);
  v5 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v46 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = v45 - 12;
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v45 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  sub_119C884((void **)&v41, "atlas.items");
  v42 = v41;
  v41 = (char *)&unk_28898CC;
  v43 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v44, v2, (int)&v42, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::ITEMS_ATLAS, (mce::TexturePtr *)&v44);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v44);
  v7 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = v41 - 12;
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v41 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v37, "textures/flame_atlas");
  v38 = v37;
  v37 = (char *)&unk_28898CC;
  v39 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v40, v2, (int)&v38, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::FLAME_ATLAS, (mce::TexturePtr *)&v40);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v40);
  v9 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v37 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v33, "textures/forcefield_atlas");
  v34 = v33;
  v33 = (char *)&unk_28898CC;
  v35 = 0;
  mce::TextureGroup::getTexture((mce::TexturePtr *)&v36, v2, (int)&v34, 0);
  mce::TexturePtr::operator=((mce::TexturePtr *)&Particle::FORCEFIELD_ATLAS, (mce::TexturePtr *)&v36);
  mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v36);
  v11 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v33 - 12;
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v33 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


int __fastcall Particle::_generateVertexOffsets(Particle *this, const Vec3 *_R1, float *a3, float *a4, float *a5, float *a6, float *a7)
{
  float *v11; // r5@1
  __int64 v13; // r6@1
  float v14; // r1@1
  float v15; // r1@1
  float v17; // r1@1
  float v19; // r1@1
  float v21; // r1@1
  int result; // r0@1
  float v23; // [sp+4h] [bp-34h]@1
  char v24; // [sp+10h] [bp-28h]@1
  mce::Math *v25; // [sp+14h] [bp-24h]@1

  __asm { VLDR            S0, [R0,#0x9C] }
  v11 = a4;
  __asm { VLDR            S6, [R1] }
  _R4 = a3;
  __asm
  {
    VLDR            S2, [R0,#0xA0]
    VLDR            S4, [R0,#0xA4]
    VSUB.F32        S0, S6, S0
    VLDR            S8, [R1,#4]
    VLDR            S10, [R1,#8]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x38+var_34]
    VSTR            S2, [SP,#0x38+var_30]
    VSTR            S4, [SP,#0x38+var_2C]
  }
  mce::MathUtility::getRotationFromNegZToVector((int)&v24, (int)&v23);
  v13 = *(_QWORD *)&v24;
  *(_DWORD *)_R4 = mce::Math::cos(v25, v14);
  _R0 = mce::Math::sin((mce::Math *)HIDWORD(v13), v15);
  *(_DWORD *)v11 = _R0;
  __asm { VMOV            S16, R0 }
  _R0 = mce::Math::sin((mce::Math *)v13, v17);
    VMOV            S0, R0
    VNMUL.F32       S0, S16, S0
    VSTR            S0, [R0]
    VLDR            S16, [R4]
  _R0 = mce::Math::sin((mce::Math *)v13, v19);
    VMUL.F32        S0, S0, S16
  result = mce::Math::cos((mce::Math *)v13, v21);
  *(_DWORD *)a7 = result;
  return result;
}


int __fastcall Particle::Particle(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = &off_26D9AEC;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  TextureUVCoordinateSet::TextureUVCoordinateSet((TextureUVCoordinateSet *)(a1 + 12));
  *(_DWORD *)(v3 + 92) = 0;
  *(_DWORD *)(v3 + 96) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_DWORD *)(v3 + 80) = 0;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 100) = v4;
  *(_DWORD *)(v3 + 104) = 1;
  *(_BYTE *)(v3 + 108) = 0;
  *(_DWORD *)(v3 + 140) = v5;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  _aeabi_memclr4(v3 + 144, 36);
  *(_BYTE *)(v3 + 180) = 1;
  AABB::AABB((AABB *)(v3 + 184));
  return v3;
}


int __fastcall Particle::setPower(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x90]
    VLDR            S4, =-0.1
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0,#0x90]
    VLDR            S2, [R0,#0x94]
    VADD.F32        S2, S2, S4
    VLDR            S4, =0.1
    VSTR            S2, [R0,#0x94]
    VLDR            S2, [R0,#0x98]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x98]
  }
  return result;
}


int __fastcall Particle::setPos(Particle *this, const Vec3 *a2)
{
  *((_DWORD *)this + 39) = *(_DWORD *)a2;
  *((_DWORD *)this + 40) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 41) = *((_DWORD *)a2 + 2);
  return j_j_j__ZN4AABB8centerAtERK4Vec3_0((Particle *)((char *)this + 184), a2);
}


int __fastcall Particle::_init(Particle *this, const Vec3 *a2, const Vec3 *a3, int a4, ParticleEngine *a5, const CompoundTag *a6)
{
  const Vec3 *v6; // r7@1
  int v8; // r0@1
  __int64 v10; // r1@1
  int v11; // r8@1
  Random *v12; // r0@1
  Random *v13; // r5@1
  int v27; // r12@3
  int v28; // r1@3
  int v29; // r2@3
  int v30; // r3@3
  char v32; // [sp+8h] [bp-78h]@3
  int v33; // [sp+Ch] [bp-74h]@3
  int v34; // [sp+10h] [bp-70h]@3
  int v35; // [sp+14h] [bp-6Ch]@3
  int v36; // [sp+18h] [bp-68h]@1
  signed int v37; // [sp+1Ch] [bp-64h]@1
  int v38; // [sp+20h] [bp-60h]@1
  int v39; // [sp+24h] [bp-5Ch]@1
  int v40; // [sp+28h] [bp-58h]@1
  int v41; // [sp+2Ch] [bp-54h]@1
  int v42; // [sp+30h] [bp-50h]@1
  int v43; // [sp+34h] [bp-4Ch]@1
  int v44; // [sp+38h] [bp-48h]@1
  char v45; // [sp+3Ch] [bp-44h]@1

  v6 = a2;
  _R4 = this;
  v8 = *(_DWORD *)a2;
  _R9 = a3;
  *((_DWORD *)_R4 + 39) = *(_DWORD *)a2;
  LODWORD(v10) = *((_DWORD *)a2 + 1);
  v11 = a4;
  *((_DWORD *)_R4 + 40) = v10;
  HIDWORD(v10) = *((_DWORD *)v6 + 2);
  *((_DWORD *)_R4 + 41) = HIDWORD(v10);
  *((_DWORD *)_R4 + 42) = v8;
  *(_QWORD *)((char *)_R4 + 172) = v10;
  *((_DWORD *)_R4 + 16) = 0;
  *((_DWORD *)_R4 + 13) = 0;
  *((_DWORD *)_R4 + 14) = 0;
  *((_DWORD *)_R4 + 19) = 1065353216;
  *((_DWORD *)_R4 + 17) = 1065353216;
  *((_DWORD *)_R4 + 18) = 1065353216;
  *((_DWORD *)_R4 + 39) = *(_DWORD *)v6;
  *((_DWORD *)_R4 + 40) = *((_DWORD *)v6 + 1);
  *((_DWORD *)_R4 + 41) = *((_DWORD *)v6 + 2);
  AABB::centerAt((Particle *)((char *)_R4 + 184), v6);
  v36 = 1045220557;
  v37 = 1045220557;
  v38 = 1045220557;
  AABB::resize((AABB *)&v39, (Particle *)((char *)_R4 + 184), (int)&v36);
  *((_DWORD *)_R4 + 46) = v39;
  *((_DWORD *)_R4 + 47) = v40;
  *((_DWORD *)_R4 + 48) = v41;
  *((_DWORD *)_R4 + 49) = v42;
  *((_DWORD *)_R4 + 50) = v43;
  *((_DWORD *)_R4 + 51) = v44;
  *((_BYTE *)_R4 + 208) = v45;
  v12 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  v13 = v12;
  __asm { VLDR            S18, [R9] }
  _R0 = Random::_genRandInt32(v12);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S20, =-0.4
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VLDR            S22, =0.8
    VADD.F32        S2, S18, S20
    VMUL.F32        S0, S0, S22
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x90]
    VLDR            S18, [R9,#4]
  }
  _R0 = Random::_genRandInt32(v13);
    VSTR            S0, [R4,#0x94]
    VLDR            S18, [R9,#8]
    VSTR            S0, [R4,#0x98]
    VCVT.F64.U32    D9, S0
    VLDR            S20, =0.1
    VMUL.F64        D4, D9, D8
    VLDR            S2, [R4,#0x90]
    VMOV.F32        S18, #1.0
    VLDR            S4, [R4,#0x94]
    VMUL.F32        S10, S2, S2
    VLDR            S6, [R4,#0x98]
    VMUL.F32        S12, S4, S4
    VMUL.F32        S14, S6, S6
    VADD.F32        S10, S12, S10
    VCVT.F32.F64    S8, D4
    VADD.F32        S10, S10, S14
    VADD.F32        S8, S8, S18
    VSQRT.F32       S10, S10
    VADD.F32        S0, S8, S0
    VLDR            S8, =0.06
    VMUL.F32        S0, S0, S8
    VDIV.F32        S0, S0, S10
    VMUL.F32        S4, S0, S4
    VMUL.F32        S2, S0, S2
    VMUL.F32        S0, S6, S0
    VADD.F32        S4, S4, S20
    VSTR            S2, [R4,#0x90]
    VSTR            S4, [R4,#0x94]
    VMOV.F32        S22, #3.0
    VSTR            S0, [R4,#0x2C]
    VSTR            S0, [R4,#0x30]
    VADD.F32        S0, S0, S18
    VSTR            S0, [R4,#0x3C]
    VLDR            S2, =0.9
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #4.0
    VADD.F32        S0, S0, S20
    VDIV.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  if ( !_ZF )
    (*(void (__fastcall **)(Particle *))(*(_DWORD *)_R4 + 4))(_R4);
  (**(void (__fastcall ***)(Particle *, const Vec3 *, const Vec3 *, int))_R4)(_R4, v6, _R9, v11);
  (*(void (__fastcall **)(char *, Particle *, _DWORD))(*(_DWORD *)_R4 + 28))(&v32, _R4, 0);
  v27 = (int)_R4 + 84;
  v28 = v33;
  v29 = v34;
  v30 = v35;
  *(_DWORD *)v27 = *(_DWORD *)&v32;
  *(_DWORD *)(v27 + 4) = v28;
  *(_DWORD *)(v27 + 8) = v29;
  *(_DWORD *)(v27 + 12) = v30;
  return (*(int (__fastcall **)(Particle *))(*(_DWORD *)_R4 + 16))(_R4);
}


int __fastcall Particle::_updateVertexData(Particle *this, const Vec3 *a2, float a3)
{
  int result; // r0@2
  __int64 v10; // r5@3
  float v11; // r1@3
  float v12; // r1@3
  float v14; // r1@3
  float v16; // r1@3
  float v18; // r1@3
  float v19; // [sp+4h] [bp-2Ch]@3
  char v20; // [sp+10h] [bp-20h]@3
  mce::Math *v21; // [sp+14h] [bp-1Ch]@3

  _R4 = this;
  _R5 = a2;
  if ( *((_DWORD *)this + 13) < 2
    || (result = (*(int (__fastcall **)(Particle *, _DWORD))(*(_DWORD *)this + 36))(this, LODWORD(a3)), result == 1) )
  {
    __asm
    {
      VLDR            S0, [R4,#0x9C]
      VLDR            S6, [R5]
      VLDR            S2, [R4,#0xA0]
      VLDR            S8, [R5,#4]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R4,#0xA4]
      VLDR            S10, [R5,#8]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [SP,#0x30+var_2C]
      VSTR            S2, [SP,#0x30+var_28]
      VSTR            S4, [SP,#0x30+var_24]
    }
    mce::MathUtility::getRotationFromNegZToVector((int)&v20, (int)&v19);
    v10 = *(_QWORD *)&v20;
    *((_DWORD *)_R4 + 30) = mce::Math::cos(v21, v11);
    _R0 = mce::Math::sin((mce::Math *)HIDWORD(v10), v12);
    *((_DWORD *)_R4 + 31) = _R0;
    __asm { VMOV            S16, R0 }
    _R0 = mce::Math::sin((mce::Math *)v10, v14);
      VMOV            S0, R0
      VNMUL.F32       S0, S16, S0
      VSTR            S0, [R4,#0x80]
      VLDR            S16, [R4,#0x78]
    _R0 = mce::Math::sin((mce::Math *)v10, v16);
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R4,#0x84]
    *((_DWORD *)_R4 + 34) = mce::Math::cos((mce::Math *)v10, v18);
    result = 0;
    *((_DWORD *)_R4 + 14) = 0;
  }
  return result;
}


unsigned int __fastcall Particle::getParticleLightColor(Particle *this, float a2, int _R2)
{
  int v8; // r1@1
  unsigned int v9; // r8@1
  unsigned int v10; // r4@1
  int v11; // r1@1
  char *v12; // r10@1
  char *v13; // r7@1
  char *v14; // r1@1
  char *v15; // r0@3
  unsigned int v16; // r6@5
  unsigned int v17; // r4@5
  int v18; // r1@5
  char *v19; // r1@5
  char *v20; // r0@7
  unsigned int v21; // r6@9
  unsigned int v22; // r4@9
  int v23; // r1@9
  char *v24; // r1@9
  char *v25; // r0@11
  unsigned int v26; // r6@13
  unsigned int v27; // r4@13
  int v28; // r1@13
  char *v29; // r1@13
  char *v30; // r0@15
  unsigned int v31; // r6@17
  unsigned int v32; // r4@17
  int v33; // r1@17
  char *v34; // r1@17
  char *v35; // r0@19
  unsigned int v36; // r4@21
  unsigned int v37; // r6@21
  int v38; // r1@21
  Particle *v40; // [sp+4h] [bp-50h]@1
  char v41; // [sp+8h] [bp-4Ch]@25
  char v42; // [sp+9h] [bp-4Bh]@25
  char v43; // [sp+Ch] [bp-48h]@21
  unsigned __int8 v44; // [sp+10h] [bp-44h]@21
  unsigned __int8 v45; // [sp+11h] [bp-43h]@21
  char v46; // [sp+14h] [bp-40h]@17
  unsigned __int8 v47; // [sp+18h] [bp-3Ch]@17
  unsigned __int8 v48; // [sp+19h] [bp-3Bh]@17
  char v49; // [sp+1Ch] [bp-38h]@13
  unsigned __int8 v50; // [sp+20h] [bp-34h]@13
  unsigned __int8 v51; // [sp+21h] [bp-33h]@13
  char v52; // [sp+24h] [bp-30h]@9
  unsigned __int8 v53; // [sp+28h] [bp-2Ch]@9
  unsigned __int8 v54; // [sp+29h] [bp-2Bh]@9
  char v55; // [sp+2Ch] [bp-28h]@5
  unsigned __int8 v56; // [sp+30h] [bp-24h]@5
  unsigned __int8 v57; // [sp+31h] [bp-23h]@5
  char v58; // [sp+34h] [bp-20h]@1
  unsigned __int8 v59; // [sp+38h] [bp-1Ch]@1
  unsigned __int8 v60; // [sp+39h] [bp-1Bh]@1
  __int64 v61; // [sp+3Ch] [bp-18h]@1
  int v62; // [sp+44h] [bp-10h]@1
  unsigned __int8 v63; // [sp+4Ah] [bp-Ah]@1
  unsigned __int8 v64; // [sp+4Bh] [bp-9h]@1
  char v65; // [sp+4Ch] [bp-8h]@1
  unsigned __int8 v66; // [sp+50h] [bp-4h]@1
  unsigned __int8 v67; // [sp+51h] [bp-3h]@1
  __int64 v68; // [sp+54h] [bp+0h]@1
  int v69; // [sp+5Ch] [bp+8h]@1
  float v70; // [sp+60h] [bp+Ch]@1

  _R5 = a2;
  __asm
  {
    VMOV            S12, R2
    VLDR            S0, [R5,#0x9C]
    VLDR            S6, [R5,#0xA8]
    VLDR            S2, [R5,#0xA0]
    VLDR            S8, [R5,#0xAC]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R5,#0xA4]
    VLDR            S10, [R5,#0xB0]
    VSUB.F32        S2, S2, S8
  }
  v40 = this;
    VSUB.F32        S4, S4, S10
    VMUL.F32        S0, S0, S12
    VMUL.F32        S2, S2, S12
    VMUL.F32        S4, S4, S12
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S10
    VSTR            S0, [SP,#0x6C+var_C]
    VSTR            S2, [SP,#0x6C+var_8]
    VSTR            S4, [SP,#0x6C+var_4]
  BlockPos::BlockPos((int)&v68, (int)&v70);
  v8 = *(_DWORD *)(LODWORD(_R5) + 140);
  v65 = Brightness::MIN;
  BlockSource::getLightColor((int)&v66, v8, (int)&v68, &v65);
  v9 = v66;
  v10 = v67;
  v64 = v66;
  v63 = v67;
  v61 = v68 + 0x100000000LL;
  v62 = v69;
  v11 = *(_DWORD *)(LODWORD(_R5) + 140);
  v58 = Brightness::MIN;
  BlockSource::getLightColor((int)&v59, v11, (int)&v61, &v58);
  v12 = (char *)&v63;
  v13 = (char *)&v64;
  v66 = v59;
  v67 = v60;
  v14 = (char *)&v63;
  if ( v10 < v60 )
    v14 = (char *)((unsigned int)&v66 | 1);
  v15 = (char *)&v64;
  if ( v9 < v59 )
    v15 = (char *)&v66;
  v16 = (unsigned __int8)*v14;
  v17 = (unsigned __int8)*v15;
  v64 = *v15;
  v63 = v16;
  v61 = v68 - 0x100000000LL;
  v18 = *(_DWORD *)(LODWORD(_R5) + 140);
  v55 = Brightness::MIN;
  BlockSource::getLightColor((int)&v56, v18, (int)&v61, &v55);
  v66 = v56;
  v67 = v57;
  v19 = (char *)&v63;
  if ( v16 < v57 )
    v19 = (char *)((unsigned int)&v66 | 1);
  v20 = (char *)&v64;
  if ( v17 < v56 )
    v20 = (char *)&v66;
  v21 = (unsigned __int8)*v19;
  v22 = (unsigned __int8)*v20;
  v64 = *v20;
  v63 = v21;
  v61 = v68;
  v62 = v69 - 1;
  v23 = *(_DWORD *)(LODWORD(_R5) + 140);
  v52 = Brightness::MIN;
  BlockSource::getLightColor((int)&v53, v23, (int)&v61, &v52);
  v66 = v53;
  v67 = v54;
  v24 = (char *)&v63;
  if ( v21 < v54 )
    v24 = (char *)((unsigned int)&v66 | 1);
  v25 = (char *)&v64;
  if ( v22 < v53 )
    v25 = (char *)&v66;
  v26 = (unsigned __int8)*v24;
  v27 = (unsigned __int8)*v25;
  v64 = *v25;
  v63 = v26;
  v62 = v69 + 1;
  v28 = *(_DWORD *)(LODWORD(_R5) + 140);
  v49 = Brightness::MIN;
  BlockSource::getLightColor((int)&v50, v28, (int)&v61, &v49);
  v66 = v50;
  v67 = v51;
  v29 = (char *)&v63;
  if ( v26 < v51 )
    v29 = (char *)((unsigned int)&v66 | 1);
  v30 = (char *)&v64;
  if ( v27 < v50 )
    v30 = (char *)&v66;
  v31 = (unsigned __int8)*v29;
  v32 = (unsigned __int8)*v30;
  v64 = *v30;
  v63 = v31;
  LODWORD(v61) = v68 + 1;
  HIDWORD(v61) = HIDWORD(v68);
  v33 = *(_DWORD *)(LODWORD(_R5) + 140);
  v46 = Brightness::MIN;
  BlockSource::getLightColor((int)&v47, v33, (int)&v61, &v46);
  v66 = v47;
  v67 = v48;
  v34 = (char *)&v63;
  if ( v31 < v48 )
    v34 = (char *)((unsigned int)&v66 | 1);
  v35 = (char *)&v64;
  if ( v32 < v47 )
    v35 = (char *)&v66;
  v36 = (unsigned __int8)*v34;
  v64 = *v35;
  v37 = v64;
  v63 = v36;
  LODWORD(v61) = v68 - 1;
  v38 = *(_DWORD *)(LODWORD(_R5) + 140);
  v43 = Brightness::MIN;
  BlockSource::getLightColor((int)&v44, v38, (int)&v61, &v43);
  v66 = v44;
  v67 = v45;
  if ( v37 < v44 )
    v13 = (char *)&v66;
  if ( v36 < v45 )
    v12 = (char *)((unsigned int)&v66 | 1);
  v41 = *v13;
  v42 = *v12;
  return LightTexture::getColorForUV((int)v40, (int)&v41);
}


void __fastcall Particle::initStaticResources(Particle *this, mce::TextureGroup *a2)
{
  Particle::initStaticResources(this, a2);
}


int __fastcall Particle::setSize(Particle *this, float a2)
{
  Particle *v2; // r4@1
  int result; // r0@1
  float v4; // [sp+0h] [bp-30h]@1
  float v5; // [sp+4h] [bp-2Ch]@1
  float v6; // [sp+8h] [bp-28h]@1
  int v7; // [sp+Ch] [bp-24h]@1
  int v8; // [sp+10h] [bp-20h]@1
  int v9; // [sp+14h] [bp-1Ch]@1
  int v10; // [sp+18h] [bp-18h]@1
  int v11; // [sp+1Ch] [bp-14h]@1
  int v12; // [sp+20h] [bp-10h]@1
  unsigned __int8 v13; // [sp+24h] [bp-Ch]@1

  v2 = this;
  v4 = a2;
  v5 = a2;
  v6 = a2;
  AABB::resize((AABB *)&v7, (Particle *)((char *)this + 184), (int)&v4);
  *((_DWORD *)v2 + 46) = v7;
  *((_DWORD *)v2 + 47) = v8;
  *((_DWORD *)v2 + 48) = v9;
  *((_DWORD *)v2 + 49) = v10;
  *((_DWORD *)v2 + 50) = v11;
  *((_DWORD *)v2 + 51) = v12;
  result = v13;
  *((_BYTE *)v2 + 208) = v13;
  return result;
}


void __fastcall Particle::~Particle(Particle *this)
{
  Particle *v1; // r4@1
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


signed int __fastcall Particle::move(Particle *this, const Vec3 *a2)
{
  Particle *v2; // r4@1
  signed int result; // r0@2
  float v5; // r1@3
  float v6; // r2@3
  BlockSource *v7; // r5@3
  char *v8; // r10@3
  AABB *v9; // r5@3
  AABB *v10; // r7@3
  AABB *v18; // r5@5
  AABB *v19; // r7@5
  AABB *v23; // r5@7
  AABB *v24; // r7@7
  int v28; // [sp+8h] [bp-60h]@9
  int v29; // [sp+Ch] [bp-5Ch]@9
  int v30; // [sp+10h] [bp-58h]@9
  char v31; // [sp+14h] [bp-54h]@3
  float v32; // [sp+30h] [bp-38h]@3
  float v33; // [sp+34h] [bp-34h]@3
  float v34; // [sp+38h] [bp-30h]@3
  int v35; // [sp+3Ch] [bp-2Ch]@2
  int v36; // [sp+40h] [bp-28h]@2
  int v37; // [sp+44h] [bp-24h]@2

  v2 = this;
  _R8 = a2;
  if ( *((_BYTE *)this + 180) )
  {
    AABB::move((Particle *)((char *)this + 184), a2);
    AABB::getCenter((AABB *)&v35, (int)v2 + 184);
    *((_DWORD *)v2 + 39) = v35;
    *((_DWORD *)v2 + 40) = v36;
    result = v37;
    *((_DWORD *)v2 + 41) = v37;
  }
  else
    v5 = *((float *)a2 + 1);
    v6 = *((float *)_R8 + 2);
    v32 = *(float *)_R8;
    v33 = v5;
    v34 = v6;
    v7 = (BlockSource *)*((_DWORD *)this + 35);
    AABB::expanded((AABB *)&v31, (Particle *)((char *)this + 184), (int)&v32);
    v8 = BlockSource::fetchCollisionShapes(v7, v7, (const AABB *)&v31, 0, 1, 0);
    v10 = (AABB *)(*(_QWORD *)v8 >> 32);
    v9 = (AABB *)*(_QWORD *)v8;
    __asm { VLDR            S0, [SP,#0x68+var_34] }
    for ( ; v10 != v9; v33 = _R0 )
    {
      __asm { VMOV            R2, S0 }
      _R0 = COERCE_FLOAT(AABB::clipYCollide(v9, (Particle *)((char *)v2 + 184), _R2, 0));
      v9 = (AABB *)((char *)v9 + 28);
      __asm { VMOV            S0, R0 }
    }
    __asm { VMOV            R2, S0 }
    AABB::move((Particle *)((char *)v2 + 184), 0.0, _R2, 0.0);
    v19 = (AABB *)(*(_QWORD *)v8 >> 32);
    v18 = (AABB *)*(_QWORD *)v8;
    __asm { VLDR            S0, [SP,#0x68+var_38] }
    for ( ; v19 != v18; v32 = _R0 )
      _R0 = COERCE_FLOAT(AABB::clipXCollide(v18, (Particle *)((char *)v2 + 184), _R2, 0));
      v18 = (AABB *)((char *)v18 + 28);
    __asm { VMOV            R1, S0 }
    AABB::move((Particle *)((char *)v2 + 184), _R1, 0.0, 0.0);
    v24 = (AABB *)(*(_QWORD *)v8 >> 32);
    v23 = (AABB *)*(_QWORD *)v8;
    __asm { VLDR            S0, [SP,#0x68+var_30] }
    for ( ; v24 != v23; v34 = _R0 )
      _R0 = COERCE_FLOAT(AABB::clipZCollide(v23, (Particle *)((char *)v2 + 184), _R2, 0));
      v23 = (AABB *)((char *)v23 + 28);
    __asm { VMOV            R3, S0 }
    AABB::move((Particle *)((char *)v2 + 184), 0.0, 0.0, _R3);
    AABB::getCenter((AABB *)&v28, (int)v2 + 184);
    *((_DWORD *)v2 + 39) = v28;
    *((_DWORD *)v2 + 40) = v29;
    *((_DWORD *)v2 + 41) = v30;
    result = 0;
    __asm
      VLDR            S0, [R8,#4]
      VLDR            S2, [SP,#0x68+var_34]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S2
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      result = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _ZF )
      result = 0;
    *((_BYTE *)v2 + 181) = result;
      VLDR            S4, [R8]
      VLDR            S6, [SP,#0x68+var_38]
      VCMPE.F32       S4, S6
    if ( !_ZF )
      *((_DWORD *)v2 + 36) = 0;
      *((_DWORD *)v2 + 37) = 0;
      VLDR            S0, [SP,#0x68+var_30]
      VLDR            S2, [R8,#8]
      VCMPE.F32       S2, S0
      *((_DWORD *)v2 + 38) = 0;
  return result;
}


signed int __fastcall Particle::_shouldUpdateVertexData(Particle *this, float _R1)
{
  int v6; // r1@1
  int v8; // r2@1
  signed int result; // r0@1

  __asm
  {
    VMOV.F32        S0, #0.25
    VMOV            S2, R1
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
  }
  v6 = *((_DWORD *)this + 14);
  __asm { VMOV            R0, S0 }
  v8 = _R0 + 5;
  result = 0;
  if ( v6 >= v8 )
    result = 1;
  return result;
}
