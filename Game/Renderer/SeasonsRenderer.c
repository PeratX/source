

int __fastcall SeasonsRenderer::SeasonsRenderer(int result, unsigned int a2)
{
  *(_QWORD *)result = a2;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


void __fastcall SeasonsRenderer::updateTexture(SeasonsRenderer *this)
{
  SeasonsRenderer::updateTexture(this);
}


int __fastcall SeasonsRenderer::tick(SeasonsRenderer *this)
{
  SeasonsRenderer *v1; // r4@1
  mce::TextureGroup *v2; // r5@2
  void *v3; // r0@2
  int result; // r0@5
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int v14; // [sp+0h] [bp-20h]@2

  v1 = this;
  if ( !*((_DWORD *)this + 2) )
  {
    v2 = *(mce::TextureGroup **)this;
    mce::TextureGroup::getLocationFor((void **)&v14, 1);
    *((_DWORD *)v1 + 2) = mce::TextureGroup::getTexturePair(v2, (const ResourceLocation *)&v14);
    v3 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v14 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v3);
    }
  }
  _R0 = *((_DWORD *)v1 + 1);
  _R1 = 1717986919;
  __asm { SMMUL.W         R1, R0, R1 }
  if ( _R0 == 20 * (((signed int)_R1 >> 3) + (_R1 >> 31)) )
    SeasonsRenderer::updateTexture(v1);
    _R0 = *((_DWORD *)v1 + 1);
  result = _R0 + 1;
  *((_DWORD *)v1 + 1) = result;
  return result;
}


void __fastcall SeasonsRenderer::updateTexture(SeasonsRenderer *this)
{
  mce::TextureContainer *v1; // r5@1
  int v2; // r1@1
  Biome *v7; // r4@2
  Biome *v8; // r0@3
  FoliageColor *v10; // r4@4
  int v11; // r7@4
  int v12; // r9@4
  float v13; // r2@4
  unsigned int v14; // r10@5
  int v15; // r9@5
  unsigned int v16; // r0@7
  int v21; // r4@21
  unsigned int v22; // r6@22
  int v23; // r4@22
  char *v24; // r0@24
  SeasonsRenderer *v25; // [sp+4h] [bp-6Ch]@1
  unsigned int v26; // [sp+Ch] [bp-64h]@1
  Biome *v27; // [sp+10h] [bp-60h]@4
  int v28; // [sp+14h] [bp-5Ch]@2
  float v29; // [sp+18h] [bp-58h]@6
  float v30; // [sp+1Ch] [bp-54h]@6
  float v31; // [sp+20h] [bp-50h]@6
  float v32; // [sp+24h] [bp-4Ch]@6

  v25 = this;
  v1 = (mce::TextureContainer *)(*((_DWORD *)this + 2) + 64);
  v26 = mce::TextureContainer::getImageData(v1, 0, 0);
  if ( *((_DWORD *)mce::TextureContainer::getTextureDescription(v1) + 1) )
  {
    __asm
    {
      VMOV.F32        S18, #1.0
      VMOV.F32        S22, #0.5
      VLDR            S16, =0.0039216
      VLDR            S20, =1.8
    }
    v7 = 0;
    v28 = 0;
    do
      v8 = (Biome *)Biome::getBiome(v7, v2);
      _R6 = v8;
      if ( v8 )
      {
        v27 = v7;
        v10 = (FoliageColor *)Biome::getDefaultBiomeTemperature(v8);
        v11 = Biome::getDownfall(_R6);
        v12 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v1);
        if ( *(_DWORD *)mce::TextureContainer::getTextureDescription(v1) )
        {
          v14 = 0;
          v15 = v26 + v12 * v28;
          do
          {
            v31 = 0.0;
            v32 = 0.0;
            v29 = 0.0;
            v30 = 0.0;
            if ( (v14 & 7) - 2 >= 3 )
            {
              if ( (v14 & 7) == 1 )
              {
                v16 = FoliageColor::getEvergreenColor(v10, *(float *)&v11, v13);
              }
              else if ( v14 & 7 )
                v16 = FoliageColor::getFoliageColor(v10, *(float *)&v11, v13);
              else
                v16 = FoliageColor::getGrassColor(v10, *(float *)&v11, v13);
            }
            else
              v16 = FoliageColor::getBirchColor(v10, *(float *)&v11, v13);
            _R1 = (unsigned __int16)v16 >> 8;
            _R2 = (v16 >> 16) & 0xFF;
            __asm { VMOV            S0, R2 }
            _R2 = (unsigned __int8)v16;
            _R0 = v16 >> 24;
            __asm
              VMOV            S2, R1
              VMOV            S4, R2
              VMOV            S6, R0
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VCVT.F32.S32    S6, S6
              VMUL.F32        S0, S0, S16
              VMUL.F32        S2, S2, S16
              VMUL.F32        S4, S4, S16
              VMUL.F32        S6, S6, S16
              VSTR            S0, [SP,#0x70+var_58]
              VSTR            S2, [SP,#0x70+var_54]
              VSTR            S4, [SP,#0x70+var_50]
              VSTR            S6, [SP,#0x70+var_4C]
            if ( _CF )
              __asm
                VLDR            S8, [R6,#0xD0]
                VCMPE.F32       S8, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm
                {
                  VCMPE.F32       S8, S18
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  __asm { VMOVGT.F32      S8, S18 }
                  VSUB.F32        S10, S18, S8
                  VMUL.F32        S12, S8, S20
                  VMUL.F32        S0, S0, S10
                  VMUL.F32        S2, S2, S10
                  VMUL.F32        S4, S4, S10
                  VMUL.F32        S6, S6, S10
                  VADD.F32        S0, S0, S12
                  VADD.F32        S2, S2, S12
                  VADD.F32        S4, S4, S12
                  VADD.F32        S6, S6, S8
                  VSTR            S0, [SP,#0x70+var_58]
                  VSTR            S2, [SP,#0x70+var_54]
                  VSTR            S4, [SP,#0x70+var_50]
                  VSTR            S6, [SP,#0x70+var_4C]
              VMUL.F32        S0, S0, S22
              VMUL.F32        S2, S2, S22
              VMUL.F32        S4, S4, S22
            *(_DWORD *)(v15 + 4 * v14++) = Color::toABGR((Color *)&v29) | 0xFF000000;
          }
          while ( v14 < *(_DWORD *)mce::TextureContainer::getTextureDescription(v1) );
        }
      }
      else
        v29 = Color::RED;
        v30 = unk_283E644;
        v31 = unk_283E648;
        v32 = unk_283E64C;
        v21 = *(_DWORD *)mce::TextureContainer::getTextureDescription(v1);
          v22 = 0;
          v23 = v26 + v21 * v28;
            *(_DWORD *)(v23 + 4 * v22++) = Color::toABGR((Color *)&v29) | 0xFF000000;
          while ( v22 < *(_DWORD *)mce::TextureContainer::getTextureDescription(v1) );
      v24 = mce::TextureContainer::getTextureDescription(v1);
      v7 = (Biome *)((char *)v27 + 1);
      v2 = v28 + 4;
      v28 += 4;
    while ( (unsigned int)v27 + 1 < *((_DWORD *)v24 + 1) );
  }
  TexturePair::sync(*((TexturePair **)v25 + 2));
}


unsigned int __fastcall SeasonsRenderer::getTintedColor(SeasonsRenderer *this, const Color *a2, int a3)
{
  const Color *v8; // r6@1
  int v10; // r0@1
  int v11; // r8@1
  float v13; // r1@1
  int v14; // r5@1
  mce::TextureContainer *v15; // r6@1
  unsigned int v16; // r7@1
  char *v17; // r0@1
  unsigned int v18; // r0@1
  unsigned int result; // r0@1

  __asm { VMOV.F32        S0, #16.0 }
  _R5 = a3;
  __asm { VLDR            S2, [R5] }
  v8 = a2;
  __asm
  {
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v10 = mce::Math::floor(_R0, *(float *)&a2);
  __asm { VLDR            S0, =255.0 }
  v11 = v10;
    VLDR            S2, [R5,#4]
  v14 = mce::Math::floor(_R0, v13);
  v15 = (mce::TextureContainer *)(*((_DWORD *)v8 + 2) + 64);
  v16 = mce::TextureContainer::getImageData(v15, 0, 0);
  v17 = mce::TextureContainer::getTextureDescription(v15);
    VLDR            S8, =0.0039216
    VLDR            S10, =0.0078431
  v18 = *(_DWORD *)(v16 + 4 * (v11 + *(_DWORD *)v17 * v14));
  _R2 = v18 >> 24;
  _R1 = (unsigned __int8)v18;
    VMOV            S0, R2
    VMOV            S2, R1
    VCVT.F32.S32    S0, S0
  _R2 = (unsigned __int16)v18 >> 8;
    VCVT.F32.S32    S2, S2
    VMOV            S4, R2
    VCVT.F32.S32    S4, S4
  result = (v18 >> 16) & 0xFF;
    VMOV            S6, R0
    VMUL.F32        S0, S0, S8
    VCVT.F32.S32    S6, S6
    VMUL.F32        S2, S2, S10
    VMUL.F32        S4, S4, S10
    VMUL.F32        S6, S6, S10
    VSTR            S2, [R4]
    VSTR            S4, [R4,#4]
    VSTR            S6, [R4,#8]
    VSTR            S0, [R4,#0xC]
  return result;
}
