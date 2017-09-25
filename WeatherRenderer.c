

signed int __fastcall WeatherRenderer::setConstants(WeatherRenderer *this, float a2)
{
  WeatherRenderer *v2; // r4@1
  char *v3; // r0@1
  char *v4; // r0@1

  v2 = this;
  v3 = LevelRenderer::getLevelRendererPlayer(*((LevelRenderer **)this + 7));
  v4 = LevelRendererCamera::getCameraTargetPos((LevelRendererCamera *)v3);
  *((_DWORD *)v2 + 910) = *(_DWORD *)v4;
  *((_DWORD *)v2 + 911) = *((_DWORD *)v4 + 1);
  *((_DWORD *)v2 + 912) = *((_DWORD *)v4 + 2);
  return 1;
}


int __fastcall WeatherRenderer::setPassConstants(float a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v7; // ST04_4@1
  signed int v14; // r5@1
  int v15; // r10@1
  int v16; // r0@1
  int v17; // r1@1
  int v18; // r0@1
  int v19; // r1@1
  int v20; // r0@1
  int v21; // r1@1
  int v22; // r12@1
  int v23; // r1@1
  int v24; // r2@1
  int v25; // r3@1
  int v26; // r2@1
  int v27; // r3@1
  int v28; // r4@1
  int v29; // r0@1
  int v30; // r1@1
  int v31; // r7@1
  int v34; // r0@1
  int v35; // r1@1
  float v38; // r2@1
  float v41; // r2@1
  float v44; // r2@1
  int v49; // r7@1
  int v53; // r9@1
  float v55; // r2@1
  int v56; // r0@1
  int v57; // r4@1
  float v59; // r2@1
  int v60; // r0@1
  int v61; // r1@1
  int v63; // r8@2
  int v66; // r7@6
  int v67; // r4@6
  int v68; // r0@6
  signed int v69; // r1@8
  signed int v70; // r0@8
  signed int v71; // r2@8
  int v72; // r3@11
  int v73; // r7@11
  int v74; // r1@11
  int v75; // r2@11
  int v77; // [sp+0h] [bp-80h]@1
  int v78; // [sp+10h] [bp-70h]@1
  char v79; // [sp+14h] [bp-6Ch]@6
  char v80; // [sp+15h] [bp-6Bh]@6
  float v81; // [sp+18h] [bp-68h]@6

  v5 = a2;
  _R6 = a1;
  v7 = a4;
  v78 = a3;
  v77 = a2;
  _R0 = MatrixStack::top(*(MatrixStack **)(a2 + 16));
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R6,#0xD8]
    VMOV.F32        S4, #-0.5
    VLDR            S6, [R0,#8]
    VLDR            S8, [R0,#0x18]
    VLDR            S10, [R0,#0x28]
  }
  _R9 = LODWORD(_R6) + 3664;
  v14 = 0;
    VMUL.F32        S0, S2, S0
    VMUL.F32        S2, S2, S4
    VMUL.F32        S4, S6, S0
    VNMUL.F32       S6, S6, S0
    VMUL.F32        S12, S8, S0
    VMUL.F32        S14, S10, S0
    VNMUL.F32       S8, S8, S0
    VNMUL.F32       S0, S10, S0
    VSUB.F32        S4, S2, S4
    VSTR            S6, [R0]
    VSUB.F32        S6, S2, S12
    VSUB.F32        S2, S2, S14
    VSTR            S8, [R1]
    VSTR            S0, [R0]
    VSTR            S4, [R9]
    VSTR            S2, [R0]
  v15 = *(_DWORD *)(v5 + 32);
  v16 = *(_DWORD *)(v15 + 636);
  v17 = *(_DWORD *)(v16 + 20);
  *(_DWORD *)v17 = 0;
  *(_DWORD *)(v17 + 4) = 0;
  *(_DWORD *)(v17 + 8) = 0;
  *(_DWORD *)(v17 + 12) = 0;
  *(_BYTE *)(v16 + 17) = 1;
  v18 = *(_DWORD *)(v15 + 640);
  v19 = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v19 = 0;
  *(_DWORD *)(v19 + 4) = 0;
  *(_DWORD *)(v19 + 8) = 0;
  *(_DWORD *)(v19 + 12) = 0;
  *(_BYTE *)(v18 + 17) = 1;
  v20 = *(_DWORD *)(v15 + 644);
  v21 = *(_DWORD *)(v20 + 20);
  *(_DWORD *)v21 = 0;
  *(_DWORD *)(v21 + 4) = 0;
  *(_DWORD *)(v21 + 8) = 0;
  *(_DWORD *)(v21 + 12) = 0;
  *(_BYTE *)(v20 + 17) = 1;
  v22 = *(_DWORD *)(v15 + 648);
  v23 = *(_DWORD *)(v22 + 20);
  *(_DWORD *)v23 = 0;
  *(_DWORD *)(v23 + 4) = 0;
  *(_DWORD *)(v23 + 8) = 0;
  *(_DWORD *)(v23 + 12) = 0;
  v24 = *(_DWORD *)(v15 + 652);
  v25 = *(_DWORD *)(v24 + 20);
  *(_DWORD *)v25 = 0;
  *(_DWORD *)(v25 + 4) = 0;
  *(_DWORD *)(v25 + 8) = 0;
  *(_DWORD *)(v25 + 12) = 0;
  *(_BYTE *)(v24 + 17) = 1;
  v26 = *(_DWORD *)(v15 + 656);
  v27 = *(_DWORD *)(v26 + 20);
  *(_DWORD *)v27 = 0;
  *(_DWORD *)(v27 + 4) = 0;
  *(_DWORD *)(v27 + 8) = 0;
  *(_DWORD *)(v27 + 12) = 0;
  v28 = *(_DWORD *)(LODWORD(_R6) + 3644);
  v29 = *(_DWORD *)(LODWORD(_R6) + 3648);
  *(_DWORD *)v23 = *(_DWORD *)(LODWORD(_R6) + 3640);
  *(_DWORD *)(v23 + 4) = v28;
  *(_DWORD *)(v23 + 8) = v29;
  *(_DWORD *)(v23 + 12) = 1065353216;
  *(_BYTE *)(v22 + 17) = 1;
  v30 = *(_DWORD *)(LODWORD(_R6) + 3656);
  v31 = *(_DWORD *)(LODWORD(_R6) + 3660);
  *(_DWORD *)v27 = *(_DWORD *)(LODWORD(_R6) + 3652);
  *(_DWORD *)(v27 + 4) = v30;
  *(_DWORD *)(v27 + 8) = v31;
  *(_BYTE *)(v26 + 17) = 1;
  _R4 = LODWORD(_R6) + 20 * v78;
  _R0 = MatrixStack::top((MatrixStack *)(*(_DWORD *)(v5 + 16) + 32));
    VLDR            S0, [R4,#0x8C]
    VLDR            S2, [R4,#0x90]
    VLDR            S6, [R0,#0x14]
    VDIV.F32        S0, S2, S0
  v34 = *(_DWORD *)(v15 + 652);
  v35 = *(_DWORD *)(v34 + 20);
    VLDR            S2, =0.56232
    VLDR            S4, [R4,#0x94]
    VMUL.F32        S2, S6, S2
    VLDR            S16, [SP,#0x80+arg_0]
    VSTR            S2, [R1]
    VSTR            S0, [R1,#4]
  *(_DWORD *)(v35 + 8) = 0;
  *(_DWORD *)(v35 + 12) = 0;
  *(_BYTE *)(v34 + 17) = 1;
  _R8 = LODWORD(_R6) + 1120 * v78 + 112 * v7;
    VLDR            S2, [R8,#0x12C]
    VLDR            S4, [R8,#0x164]
    VLDR            S0, [R8,#0x130]
    VSUB.F32        S4, S4, S2
    VLDR            S6, [R8,#0x168]
    VLDR            S18, [R8,#0x134]
    VLDR            S20, [R8,#0x16C]
    VMUL.F32        S4, S4, S16
    VADD.F32        S2, S4, S2
    VSUB.F32        S4, S6, S0
    VMOV            R0, S2
    VMUL.F32        S2, S4, S16
    VADD.F32        S22, S2, S0
  _R7 = mce::Math::wrap(_R0, *(float *)(LODWORD(_R6) + 216), v38);
  __asm { VMOV            R0, S22 }
  _R0 = mce::Math::wrap(_R0, *(float *)(LODWORD(_R6) + 216), v41);
    VSUB.F32        S0, S20, S18
    VMOV            S22, R0
    VMOV            S24, R7
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S18
    VMOV            R0, S0
  _R0 = mce::Math::wrap(_R0, *(float *)(LODWORD(_R6) + 216), v44);
  _R1 = LODWORD(_R6) + 3644;
    VLDR            S6, [R8,#0x170]
    VLDR            S2, [R9]
    VMOV            S26, R0
    VLDR            S0, [R1]
  _R1 = LODWORD(_R6) + 3640;
    VLDR            S8, [R8,#0x174]
    VLDR            S4, [R1]
    VSUB.F32        S0, S22, S0
  _R1 = LODWORD(_R6) + 3668;
    VSUB.F32        S4, S24, S4
    VLDR            S18, [R8,#0x178]
  v49 = *(_DWORD *)(v15 + 636);
    VADD.F32        S0, S0, S8
    VADD.F32        S4, S4, S6
    VSUB.F32        S2, S4, S2
  _R1 = LODWORD(_R6) + 3672;
    VSUB.F32        S20, S0, S4
    VLDR            S22, [R1]
  _R1 = LODWORD(_R6) + 3648;
    VLDR            S24, [R1]
    VMOV            R2, S2
  v53 = mce::Math::wrap(_R2, *(float *)(LODWORD(_R6) + 216), *(float *)&_R2);
  __asm { VMOV            R0, S20 }
  v56 = mce::Math::wrap(_R0, *(float *)(LODWORD(_R6) + 216), v55);
  __asm { VSUB.F32        S0, S26, S24 }
  v57 = v56;
    VSUB.F32        S0, S0, S22
  v60 = mce::Math::wrap(_R0, *(float *)(LODWORD(_R6) + 216), v59);
  v61 = *(_DWORD *)(v49 + 20);
  *(_DWORD *)v61 = v53;
  *(_DWORD *)(v61 + 4) = v57;
  *(_DWORD *)(v61 + 8) = v60;
  *(_DWORD *)(v61 + 12) = 1065353216;
  *(_BYTE *)(v49 + 17) = 1;
    VLDR            S0, [R8,#0x124]
    VLDR            S8, [R8,#0x15C]
    VLDR            S2, [R8,#0x128]
    VLDR            S10, [R8,#0x160]
    VSUB.F32        S8, S8, S0
    VLDR            S6, [R8,#0x120]
    VLDR            S4, [R8,#0x158]
    VSUB.F32        S10, S10, S2
    VSUB.F32        S4, S4, S6
    VMUL.F32        S8, S8, S16
    VMUL.F32        S10, S10, S16
    VMUL.F32        S12, S4, S16
    VADD.F32        S4, S10, S2
    VADD.F32        S2, S8, S0
    VADD.F32        S0, S12, S6
  if ( _ZF )
    __asm { VMUL.F32        S6, S0, S0 }
    v63 = v77;
    __asm
    {
      VMUL.F32        S8, S2, S2
      VMUL.F32        S10, S4, S4
      VADD.F32        S6, S8, S6
      VLDR            S8, =0.0001
      VADD.F32        S6, S6, S10
      VSQRT.F32       S6, S6
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      _R1 = *(&Vec3::ZERO + 1);
      _R2 = Vec3::ZERO;
      _R0 = dword_2822498;
    else
      __asm
      {
        VDIV.F32        S4, S4, S6
        VDIV.F32        S2, S2, S6
        VDIV.F32        S0, S0, S6
        VMOV            R0, S4
        VMOV            R1, S2
        VMOV            R2, S0
      }
  else
    __asm { VMOV            R0, S4 }
      VMOV            R1, S2
      VMOV            R2, S0
  v66 = *(_DWORD *)(v15 + 640);
  v67 = *(_DWORD *)(v66 + 20);
  *(_DWORD *)v67 = _R2;
  *(_DWORD *)(v67 + 4) = _R1;
  *(_DWORD *)(v67 + 8) = _R0;
  *(_DWORD *)(v67 + 12) = 0;
  *(_BYTE *)(v66 + 17) = 1;
  v79 = Brightness::MIN;
  v80 = Brightness::MAX;
  LightTexture::getColorForUV((int)&v81, (int)&v79);
    VLDR            S0, =0.299
    VLDR            S2, [SP,#0x80+var_68]
    VLDR            S4, [SP,#0x80+var_64]
    VLDR            S8, =0.587
    VLDR            S6, [SP,#0x80+var_60]
    VMUL.F32        S2, S4, S8
    VLDR            S4, =0.114
  v68 = *(_DWORD *)(v15 + 644);
    VMUL.F32        S4, S6, S4
    VADD.F32        S0, S2, S0
  *(_DWORD *)(*(_DWORD *)(v68 + 20) + 12) = 1065353216;
    VADD.F32        S0, S0, S4
    VSTR            S0, [R1]
    VSTR            S0, [R1,#8]
  *(_BYTE *)(v68 + 17) = 1;
    v71 = 1040187392;
    v70 = 1056964608;
    v69 = 1040187392;
  else if ( v78 == 2 )
    v69 = 1042284544;
    v70 = 1023410176;
    v71 = 1023410176;
    v14 = 1023410176;
    v69 = 0;
    v70 = 1040187392;
    v14 = 0;
  v72 = *(_DWORD *)(v15 + 660);
  v73 = *(_DWORD *)(v72 + 20);
  *(_DWORD *)v73 = v14;
  *(_DWORD *)(v73 + 4) = v69;
  *(_DWORD *)(v73 + 8) = v71;
  *(_DWORD *)(v73 + 12) = v70;
  *(_BYTE *)(v72 + 17) = 1;
  v74 = *(_DWORD *)(v15 + 664);
  v75 = *(_DWORD *)(v74 + 20);
  *(_DWORD *)v75 = 1106247680;
  *(_DWORD *)(v75 + 4) = 1106247680;
  *(_DWORD *)(v75 + 8) = 1106247680;
  *(_DWORD *)(v75 + 12) = 1065353216;
  *(_BYTE *)(v74 + 17) = 1;
  return mce::ConstantBufferConstantsBase::sync(
           (mce::ConstantBufferConstantsBase *)(v15 + 628),
           *(mce::RenderContext **)(v63 + 12));
}


int __fastcall WeatherRenderer::_updateOcclusionAtPos(WeatherRenderer *this, BlockSource *a2, const BlockPos *a3)
{
  WeatherRenderer *v3; // r4@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r9@1
  int v6; // r1@2
  mce::TextureGroup *v7; // r7@4
  char *v8; // r7@4
  void *v9; // r0@4
  mce::TextureContainer *v10; // r7@5
  int result; // r0@5
  unsigned int v12; // r0@6
  int v13; // r7@6
  unsigned int v14; // r1@6
  int v15; // r5@6
  int v16; // r8@8
  int v17; // r11@8
  int v18; // r1@10
  int v24; // r0@12
  int v26; // r0@14
  unsigned int *v27; // r2@16
  signed int v28; // r1@18
  unsigned int v29; // [sp+0h] [bp-78h]@10
  char v30; // [sp+4h] [bp-74h]@14
  char v31; // [sp+8h] [bp-70h]@14
  unsigned __int8 v32; // [sp+9h] [bp-6Fh]@14
  char v33; // [sp+Ch] [bp-6Ch]@12
  int v34; // [sp+10h] [bp-68h]@12
  float v35; // [sp+18h] [bp-60h]@12
  int v36; // [sp+1Ch] [bp-5Ch]@12
  int v37; // [sp+20h] [bp-58h]@12
  int v38; // [sp+24h] [bp-54h]@12
  char v39; // [sp+2Ch] [bp-4Ch]@12
  char v40; // [sp+30h] [bp-48h]@12
  unsigned __int8 v41; // [sp+31h] [bp-47h]@12
  char v42; // [sp+34h] [bp-44h]@10
  int v43; // [sp+38h] [bp-40h]@10
  int v44; // [sp+40h] [bp-38h]@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( (unsigned int)Player::getClientSubId(*((Player **)this + 3)) > 3 )
    v6 = 2;
  else
    v6 = Player::getClientSubId(*((Player **)v3 + 3)) + 2;
  v7 = (mce::TextureGroup *)*((_DWORD *)v3 + 6);
  mce::TextureGroup::getLocationFor((void **)&v44, v6);
  v8 = mce::TextureGroup::getTexturePair(v7, (const ResourceLocation *)&v44);
  v9 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v10 = (mce::TextureContainer *)(v8 + 64);
  result = mce::TextureContainer::isValid(v10);
  if ( result == 1 )
    v12 = mce::TextureContainer::getImageData(v10, 0, 0);
    v13 = *((_DWORD *)v3 + 57);
    v14 = v12;
    v15 = *(_DWORD *)v4;
    result = v13 - 32;
    if ( *(_DWORD *)v4 >= v13 - 32 )
      result = v13 + 32;
      if ( v15 < v13 + 32 )
      {
        result = *((_DWORD *)v3 + 59);
        v16 = *((_DWORD *)v4 + 2);
        v17 = result - 32;
        if ( v16 >= result - 32 )
        {
          result += 32;
          if ( v16 < result )
          {
            v29 = v14;
            BlockSource::getTopRainBlockPos((BlockSource *)&v42, v5, v4);
            v18 = v43;
            if ( v43 < 0 )
              v18 = 0;
            v43 = v18;
            v39 = Brightness::MIN;
            BlockSource::getLightColor((int)&v40, (int)v5, (int)&v42, &v39);
            __asm { VLDR            S16, =0.066667 }
            v37 = 0;
            v35 = 0.0;
            v36 = 0;
            _R0 = v41;
            __asm
            {
              VMOV            S0, R0
              VCVT.F32.U32    S0, S0
              VMUL.F32        S0, S0, S16
              VSTR            S0, [SP,#0x78+var_58]
            }
            v38 = 0;
            BlockSource::getTopSnowBlockPos((BlockSource *)&v33, v5, v4);
            v24 = v34;
            if ( v34 < 0 )
              v24 = 0;
            v34 = v24;
            v30 = Brightness::MIN;
            BlockSource::getLightColor((int)&v31, (int)v5, (int)&v42, &v30);
            v40 = v31;
            _R0 = v32;
            v41 = v32;
              VSTR            S0, [SP,#0x78+var_60]
            v26 = Color::toARGB((Color *)&v35);
            *(_DWORD *)(v29 + 4 * (32 - v13 + v15 + ((v16 - v17) << 6))) = v26 | (v43 << 24) | (v34 << 8);
            result = 1;
            *((_BYTE *)v3 + 225) = 1;
          }
        }
      }
  return result;
}


void __fastcall WeatherRenderer::~WeatherRenderer(WeatherRenderer *this)
{
  AppPlatformListener *v1; // r0@1

  v1 = WeatherRenderer::~WeatherRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


char *__fastcall WeatherRenderer::onNewChunkFor(WeatherRenderer *this, Player *a2, LevelChunk *a3)
{
  WeatherRenderer *v3; // r4@1
  LevelChunk *v4; // r5@1
  char *result; // r0@1
  Player *v6; // r6@1
  char *v11; // r0@2
  int v12; // r6@2
  int v13; // r7@2

  v3 = this;
  v4 = a3;
  result = (char *)*((_DWORD *)this + 3);
  v6 = a2;
  if ( (Player *)result == a2 )
  {
    _R0 = (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 52))(a2);
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S16, =-32.0
      VADD.F32        S18, S0, S16
    }
    _R0 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v6 + 52))(v6);
      VLDR            S0, [R0,#8]
      VADD.F32        S20, S0, S16
    v11 = LevelChunk::getMin(v4);
    v12 = *(_DWORD *)v11;
    v13 = *((_DWORD *)v11 + 2);
    __asm { VCVTR.S32.F32   S16, S18 }
    result = LevelChunk::getMax(v4);
      VCVTR.S32.F32   S0, S20
      VMOV            R1, S0
    _R2 = _R1 + 64;
    _VF = __OFSUB__(_R1 + 64, v13);
    _NF = _R1 + 64 - v13 < 0;
    if ( _R1 + 64 >= v13 )
      __asm { VMOVGE          R2, S16 }
      _VF = __OFSUB__(_R2 + 64, v12);
      _NF = _R2 + 64 - v12 < 0;
    if ( !(_NF ^ _VF) && _R2 <= *(_DWORD *)result )
      result = (char *)*((_DWORD *)result + 2);
      if ( _R1 <= (signed int)result )
      {
        result = (char *)1;
        *((_BYTE *)v3 + 224) = 1;
      }
  }
  return result;
}


int __fastcall WeatherRenderer::_buildParticleMesh(WeatherRenderer *this, Tessellator *a2)
{
  Tessellator *v3; // r5@1
  unsigned int v8; // r0@1
  int v9; // r1@1
  signed int v10; // r2@1
  int v11; // r0@2
  int *v12; // r7@2
  int v13; // r4@2
  int v14; // r4@4
  char v21; // [sp+4h] [bp-A9Ch]@6
  float v22; // [sp+68h] [bp-A38h]@5
  unsigned int v23; // [sp+74h] [bp-A2Ch]@1
  unsigned int v24; // [sp+78h] [bp-A28h]@1
  int v25; // [sp+A38h] [bp-68h]@1
  char v26; // [sp+A3Ch] [bp-64h]@1
  int v27; // [sp+A40h] [bp-60h]@1
  int v28; // [sp+A44h] [bp-5Ch]@3

  _R8 = this;
  v3 = a2;
  __asm { VLDR            S16, [R8,#0xD8] }
  v8 = sub_119D73C((int)&Random::mRandomDevice);
  v23 = v8;
  v25 = 625;
  v9 = 0;
  v10 = 1;
  v26 = 0;
  v27 = 0;
  v24 = v8;
  do
  {
    v11 = v8 ^ (v8 >> 30);
    v12 = (int *)(&v23 + v9);
    v13 = v9++ + 1812433253 * v11;
    v8 = v10++ + 1812433253 * v11;
    v12[2] = v13 + 1;
  }
  while ( v9 != 397 );
  v25 = 624;
  v28 = 398;
  Tessellator::begin((int)v3, 1, 4 * *((_DWORD *)_R8 + 33), 0);
  if ( *((_DWORD *)_R8 + 33) >= 1 )
    __asm
    {
      VLDR            D9, =2.32830644e-10
      VLDR            S20, =0.0039216
    }
    v14 = 0;
    do
      __asm { VLDR            S22, [R8,#0xD8] }
      _R0 = Random::_genRandInt32((Random *)&v23);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D12, S0
      }
        VCVT.F64.U32    D13, S0
        VMUL.F64        D1, D12, D9
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D9
        VMUL.F64        D2, D13, D9
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S4, D2
        VCVT.F32.F64    S0, D0
        VMUL.F32        S2, S2, S22
        VMUL.F32        S4, S4, S22
        VMUL.F32        S0, S0, S22
        VADD.F32        S2, S2, S16
        VADD.F32        S4, S4, S16
        VADD.F32        S0, S0, S16
        VSTR            S2, [SP,#0xAA0+var_A38]
        VSTR            S4, [SP,#0xAA0+var_A34]
        VSTR            S0, [SP,#0xAA0+var_A30]
      _R0 = Random::_genRandInt32((Random *)&v23) & 7;
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S20
        VMOV            R1, S0
      Tessellator::color(v3, _R1, 1.0, 1.0, 1.0);
      Tessellator::vertexUV(v3, (const Vec3 *)&v22, 4575657221408423936LL);
      Tessellator::vertexUV(v3, (const Vec3 *)&v22, 0LL);
      Tessellator::vertexUV(v3, (const Vec3 *)&v22, 1065353216LL);
      Tessellator::vertexUV(v3, (const Vec3 *)&v22, 4575657222473777152LL);
      ++v14;
    while ( v14 < *((_DWORD *)_R8 + 33) );
  Tessellator::end((Tessellator *)&v21, (const char *)v3, 0, 0);
  mce::Mesh::operator=((int)_R8 + 32, (int)&v21);
  return mce::Mesh::~Mesh((mce::Mesh *)&v21);
}


int __fastcall WeatherRenderer::render(float a1, int a2)
{
  char *v8; // r0@5
  int result; // r0@5
  char *v10; // r0@6
  char *v11; // r0@6
  int v12; // r9@6
  int *v13; // r8@6
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  int v18; // r2@24
  mce::TextureGroup *v19; // r7@26
  char *v20; // r0@26
  char *v21; // r0@27
  int v23; // r10@28
  int v24; // r0@31
  float v25; // r1@31
  int v28; // r0@33
  int v29; // r8@34
  int v30; // r7@34
  int v31; // [sp+0h] [bp-C0h]@0
  char *v32; // [sp+38h] [bp-88h]@11
  char *v33; // [sp+3Ch] [bp-84h]@7
  int v34; // [sp+40h] [bp-80h]@26
  char v35; // [sp+44h] [bp-7Ch]@26
  char v36; // [sp+5Ch] [bp-64h]@26
  char v37; // [sp+74h] [bp-4Ch]@6

  _R5 = a1;
  __asm
  {
    VLDR            S0, =0.01
    VLDR            S2, [R5,#0xC8]
  }
  _R4 = a2;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    goto LABEL_42;
    VLDR            S2, [R5,#0xD0]
  if ( !(_NF ^ _VF)
    || (v8 = LevelRenderer::getLevelRendererPlayer(*(LevelRenderer **)(LODWORD(a1) + 28)),
        result = LevelRendererCamera::isUnderWater((LevelRendererCamera *)v8),
        result == 1) )
LABEL_42:
    MatrixStack::pushIdentity((MatrixStack *)&v37, *(_DWORD *)(_R4 + 16) + 16);
    v10 = LevelRenderer::getLevelRendererPlayer(*(LevelRenderer **)(LODWORD(_R5) + 28));
    v11 = LevelRendererCamera::getCameraTargetPos((LevelRendererCamera *)v10);
    __asm { VMOV.F32        S16, #0.5 }
    *(_DWORD *)(LODWORD(_R5) + 3640) = *(_DWORD *)v11;
    *(_DWORD *)(LODWORD(_R5) + 3644) = *((_DWORD *)v11 + 1);
    v12 = 0;
    *(_DWORD *)(LODWORD(_R5) + 3648) = *((_DWORD *)v11 + 2);
    __asm { VLDR            S18, =0.1 }
    v13 = &dword_28898C0;
    do
    {
      if ( (unsigned int)Player::getClientSubId(*(Player **)(LODWORD(_R5) + 12)) > 3 )
        v18 = 2;
      else
        v18 = Player::getClientSubId(*(Player **)(LODWORD(_R5) + 12)) + 2;
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v36, *(mce::TextureGroup **)(LODWORD(_R5) + 24), v18);
      v19 = *(mce::TextureGroup **)(LODWORD(_R5) + 24);
      sub_119C884((void **)&v32, "textures/environment/weather");
      v33 = v32;
      v32 = (char *)&unk_28898CC;
      v34 = 0;
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v35, v19, (int)&v33, 0);
      v20 = v33 - 12;
      if ( (int *)(v33 - 12) != v13 )
      {
        v14 = (unsigned int *)(v33 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      }
      v21 = v32 - 12;
      if ( (int *)(v32 - 12) != v13 )
        v16 = (unsigned int *)(v32 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      _R2 = LODWORD(_R5) + 200;
      v23 = LODWORD(_R5) + 3708;
      if ( !v12
        || (v23 = LODWORD(_R5) + 3720, _R2 = LODWORD(_R5) + 208, v12 == 1)
        || (v23 = LODWORD(_R5) + 3732, _R2 = LODWORD(_R5) + 3696, v12 == 2) )
        __asm { VLDR            S20, [R2] }
        v24 = Options::getFancyGraphics(*(Options **)(LODWORD(_R5) + 16));
        __asm { VMUL.F32        S0, S20, S16 }
        if ( v24 )
          __asm { VMOVNE.F32      S0, S20 }
        _R0 = *(_DWORD *)(LODWORD(_R5) + 136);
        __asm
          VMUL.F32        S0, S0, S18
          VMOV            S2, R0
          VCVT.F32.S32    S2, S2
          VMUL.F32        S0, S0, S2
          VMOV            R0, S0
        v28 = mce::Math::floor(_R0, v25);
        if ( v28 >= 1 )
          v29 = 0;
          v30 = 6 * v28;
          {
            __asm
            {
              VLDR            S0, [R4,#8]
              VSTR            S0, [SP,#0xC0+var_C0]
            }
            WeatherRenderer::setPassConstants(_R5, _R4, v12, v29, v31);
            if ( !mce::Mesh::isValid((mce::Mesh *)(LODWORD(_R5) + 32)) )
              WeatherRenderer::_buildParticleMesh((WeatherRenderer *)LODWORD(_R5), *(Tessellator **)(_R4 + 40));
            mce::Mesh::render((mce::Buffer *)(LODWORD(_R5) + 32), _R4, v23, (int)&v35, (int)&v36, 0, v30);
            ++v29;
          }
          while ( v29 < 10 );
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v35);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v36);
      v13 = &dword_28898C0;
      ++v12;
    }
    while ( v12 < 3 );
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v37);
  return result;
}


void __fastcall WeatherRenderer::~WeatherRenderer(WeatherRenderer *this)
{
  WeatherRenderer::~WeatherRenderer(this);
}


WeatherRenderer *__fastcall WeatherRenderer::updatePrecipitation(WeatherRenderer *this, float _R1, const BlockPos *a3)
{
  WeatherRenderer *v7; // r4@1
  const BlockPos *v8; // r5@1
  int v9; // r3@1
  int v10; // r7@1
  int v11; // r0@1
  BlockSource *v12; // r10@1
  void *v16; // r4@1
  int v17; // r1@4
  int v18; // r2@4
  __int64 v19; // kr00_8@4
  int v20; // r6@4
  int v21; // r0@4
  char *v23; // r0@9
  WeatherRenderer *result; // r0@15
  WeatherRenderer *v25; // [sp+0h] [bp-50h]@1
  int v26; // [sp+4h] [bp-4Ch]@4
  int v27; // [sp+8h] [bp-48h]@4
  int v28; // [sp+Ch] [bp-44h]@4

  __asm { VMOV.F32        S0, #0.5 }
  v7 = this;
  v8 = a3;
  __asm { VMOV            S2, R1 }
  v9 = *((_DWORD *)this + 923);
  v10 = *((_DWORD *)this + 924);
  *((_DWORD *)this + 919) = *((_DWORD *)this + 922);
  *((_DWORD *)this + 920) = v9;
  *((_DWORD *)this + 921) = v10;
  __asm { VMUL.F32        S20, S2, S0 }
  *((_DWORD *)this + 922) = 0;
  *((_DWORD *)this + 923) = 0;
  *((_DWORD *)this + 924) = 0;
  v25 = this;
  v11 = Entity::getRegion(*((Entity **)this + 3));
  __asm { VCMPE.F32       S20, #0.0 }
  v12 = (BlockSource *)v11;
  __asm { VMRS            APSR_nzcv, FPSCR }
  _R9 = (int)v7 + 3692;
  __asm { VLDR            S16, =0.0 }
  _R11 = (int)v7 + 3688;
  _R0 = &Biome::RAIN_TEMP_THRESHOLD;
  __asm { VMOV.F32        S18, S16 }
  v16 = &unk_27D1D7C;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S20 }
  __asm { VLDR            S20, [R0] }
  do
  {
    v17 = *((_DWORD *)v16 + 1);
    v18 = *((_DWORD *)v16 + 2);
    v19 = *(_QWORD *)v8;
    v20 = *((_DWORD *)v8 + 2);
    v26 = *(_DWORD *)v16 + *(_QWORD *)v8;
    v27 = HIDWORD(v19) + v17;
    v28 = v20 + v18;
    v21 = BlockSource::getBiome(v12, (const BlockPos *)&v26);
    if ( *(_BYTE *)(v21 + 260) )
    {
      _R0 = Biome::getTemperature((Biome *)v21, v12, (const BlockPos *)&v26);
      __asm
      {
        VMOV            S0, R0
        VCMPE.F32       S0, S20
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VLDR            S0, [R9]
          VADD.F32        S0, S0, S18
          VSTR            S0, [R9]
        }
      else
          VLDR            S0, [R11]
          VSTR            S0, [R11]
    }
    v16 = (char *)v16 + 12;
  }
  while ( v16 != &unk_27D1EC0 );
  v23 = LevelRenderer::getLevelRendererPlayer(*((LevelRenderer **)v25 + 7));
  LevelRendererCamera::isUnderWater((LevelRendererCamera *)v23);
  __asm
    VMOV.F32        S0, #1.0
    VMOV.F32        S2, S16
  if ( !_ZF )
    __asm { VMOVNE.F32      S2, S0 }
    VSTR            S2, [R0]
    VLDR            S2, [R11]
    VLDR            S4, [R9]
    VADD.F32        S2, S4, S2
    VLDR            S4, =0.2
    VMUL.F32        S2, S2, S4
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S0
    __asm { VMOVGT.F32      S16, S2 }
    VLDR            S2, =0.01
    __asm { VMOVGT.F32      S16, S0 }
    VLDR            S0, =0.99
    VSTR            S16, [R0]
  result = (WeatherRenderer *)((char *)v25 + 3704);
    VMUL.F32        S2, S16, S2
    VLDR            S4, [R0]
    VMUL.F32        S0, S4, S0
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0]
  return result;
}


signed int __fastcall WeatherRenderer::onAppSuspended(WeatherRenderer *this)
{
  WeatherRenderer *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  mce::Mesh::reset((WeatherRenderer *)((char *)this + 32));
  result = 1;
  *((_BYTE *)v1 + 224) = 1;
  return result;
}


unsigned int __fastcall WeatherRenderer::tick(WeatherRenderer *this, BlockSource *a2, float a3)
{
  Dimension *v5; // r0@1
  Weather *v6; // r6@1
  int v7; // r0@1
  int v8; // r0@1
  char *v15; // r0@3
  PerlinSimplexNoise *v19; // r6@5
  int v21; // r5@5
  int v22; // r4@5
  int v23; // r10@6
  int v24; // r0@6
  int v36; // r0@14
  int v37; // r1@15
  unsigned int result; // r0@17
  int *v39; // r7@17
  mce::TextureGroup *v40; // r4@22
  char *v41; // r4@22
  void *v42; // r0@22
  mce::TextureGroup *v43; // r4@24
  char *v44; // r5@24
  void *v45; // r0@24
  int v46; // r0@25
  int v47; // r4@25
  int v48; // r1@25
  int v49; // r9@25
  signed int v50; // r2@25
  int v51; // r0@25
  int v52; // r10@29
  int v53; // r6@29
  int v54; // r5@31
  int v55; // r8@33
  int v56; // r2@36
  int v57; // r3@36
  int v58; // r6@36
  int v59; // r1@40
  int v60; // r2@40
  int v61; // r4@42
  int v62; // r2@42
  char *v63; // r6@44
  int v64; // r11@44
  char *v65; // r11@46
  int v66; // r0@48
  int v67; // r10@48
  int v68; // r0@52
  int v69; // r0@54
  int v70; // r0@55
  int v72; // r0@57
  int v74; // r0@59
  unsigned int *v75; // r2@65
  signed int v76; // r1@67
  unsigned int *v77; // r2@73
  signed int v78; // r1@75
  TexturePair *v79; // [sp+4h] [bp-40F4h]@29
  char *v80; // [sp+8h] [bp-40F0h]@48
  int v81; // [sp+Ch] [bp-40ECh]@46
  int v82; // [sp+10h] [bp-40E8h]@6
  int v83; // [sp+10h] [bp-40E8h]@46
  int v84; // [sp+14h] [bp-40E4h]@5
  int v85; // [sp+14h] [bp-40E4h]@46
  int v86; // [sp+18h] [bp-40E0h]@6
  int v87; // [sp+1Ch] [bp-40DCh]@6
  BlockSource *v88; // [sp+20h] [bp-40D8h]@1
  int v89; // [sp+24h] [bp-40D4h]@6
  unsigned int v90; // [sp+24h] [bp-40D4h]@25
  WeatherRenderer *v91; // [sp+28h] [bp-40D0h]@1
  WeatherRenderer *v92; // [sp+28h] [bp-40D0h]@33
  int v93; // [sp+2Ch] [bp-40CCh]@22
  char v94; // [sp+34h] [bp-40C4h]@59
  char v95; // [sp+38h] [bp-40C0h]@59
  unsigned __int8 v96; // [sp+39h] [bp-40BFh]@59
  char v97; // [sp+3Ch] [bp-40BCh]@57
  int v98; // [sp+40h] [bp-40B8h]@57
  float v99; // [sp+48h] [bp-40B0h]@57
  int v100; // [sp+4Ch] [bp-40ACh]@57
  int v101; // [sp+50h] [bp-40A8h]@57
  int v102; // [sp+54h] [bp-40A4h]@57
  char v103; // [sp+58h] [bp-40A0h]@57
  char v104; // [sp+5Ch] [bp-409Ch]@57
  unsigned __int8 v105; // [sp+5Dh] [bp-409Bh]@57
  char v106; // [sp+60h] [bp-4098h]@55
  int v107; // [sp+64h] [bp-4094h]@55
  char v108[12]; // [sp+6Ch] [bp-408Ch]@44
  int v109; // [sp+406Ch] [bp-8Ch]@17
  int v110; // [sp+4078h] [bp-80h]@24
  char v111; // [sp+4080h] [bp-78h]@14
  int v112; // [sp+4084h] [bp-74h]@19
  int v113; // [sp+4088h] [bp-70h]@20
  int v114; // [sp+408Ch] [bp-6Ch]@1

  _R8 = this;
  _R4 = a3;
  v88 = a2;
  v91 = this;
  v5 = (Dimension *)BlockSource::getDimension(a2);
  v6 = (Weather *)Dimension::getWeather(v5);
  v7 = (*(int (**)(void))(**((_DWORD **)_R8 + 3) + 52))();
  BlockPos::BlockPos((int)&v114, v7);
  v8 = Weather::getRainLevel(v6, 0.0);
  WeatherRenderer::updatePrecipitation(_R8, *(float *)&v8, (const BlockPos *)&v114);
  Weather::setFogLevel(v6, *((float *)_R8 + 926));
  _R0 = *((_DWORD *)_R8 + 922);
  __asm { VMOV.F32        S4, #0.5 }
  *((_DWORD *)_R8 + 51) = _R0;
  __asm { VMOV            S8, R4 }
  _R1 = *((_DWORD *)_R8 + 923);
  *((_DWORD *)_R8 + 53) = _R1;
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, [R8,#0xC8]
    VMOV            S6, R1
    VADD.F32        S0, S0, S2
    VMUL.F32        S2, S0, S4
    VSTR            S2, [R8,#0xC8]
    VLDR            S2, [R8,#0xD0]
    VADD.F32        S2, S6, S2
    VLDR            S6, =0.05
    VMUL.F32        S16, S8, S6
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VSTR            S2, [R8,#0xD0]
    VSTR            S16, [R8,#0xDC]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v15 = LevelRenderer::getLevelRendererPlayer(*((LevelRenderer **)_R8 + 7));
    if ( LevelRendererCamera::isUnderWater((LevelRendererCamera *)v15) != 1 )
    {
      result = 1;
      *((_BYTE *)_R8 + 224) = 1;
      return result;
    }
    __asm { VLDR            S16, [R8,#0xDC] }
    VLDR            S18, =0.1
    VMUL.F32        S0, S16, S18
    VMOV            R4, S0
  _R5 = PerlinSimplexNoise::getValue((WeatherRenderer *)((char *)_R8 + 240), _R4, 0.1);
  _R0 = PerlinSimplexNoise::getValue((WeatherRenderer *)((char *)_R8 + 240), _R4, 0.5);
  __asm { VMOV            S0, R0 }
  v84 = (int)_R8 + 1500;
  v19 = (WeatherRenderer *)((char *)_R8 + 260);
    VMUL.F32        S18, S0, S18
    VMOV            S20, R5
  _R0 = PerlinSimplexNoise::getValue((WeatherRenderer *)((char *)_R8 + 240), _R4, 1.0);
    VMOV            S22, R0
    VLDR            S24, =0.01
  v21 = 0;
  v22 = 0;
  do
    v23 = 0;
    v89 = v22;
    v24 = (int)_R8 + 20 * v22;
    v82 = v21;
    _R12 = v24 + 156;
    _LR = v24 + 140;
    v87 = v24 + 156;
    v86 = v24 + 140;
    do
      _R9 = (int)_R8 + v21;
      _R0 = *(_QWORD *)((char *)_R8 + v21 + 336);
      *(_QWORD *)(_R9 + 280) = _R0;
      *(_DWORD *)(_R9 + 288) = *(_DWORD *)((char *)_R8 + v21 + 344);
      __asm { VMOV            S12, R0 }
      *(_DWORD *)(_R9 + 292) = *(_DWORD *)((char *)_R8 + v21 + 348);
      __asm
      {
        VMUL.F32        S0, S18, S12
        VMUL.F32        S2, S12, S20
      }
      *(_DWORD *)(_R9 + 296) = *(_DWORD *)((char *)_R8 + v21 + 352);
      __asm { VMUL.F32        S4, S12, S22 }
      HIDWORD(_R0) = *(_DWORD *)((char *)_R8 + v21 + 356);
      *(_DWORD *)(_R9 + 300) = HIDWORD(_R0);
      _R2 = *(_DWORD *)((char *)_R8 + v21 + 360);
      *(_DWORD *)(_R9 + 304) = _R2;
      _R3 = *(_DWORD *)((char *)_R8 + v21 + 364);
      *(_DWORD *)(_R9 + 308) = _R3;
      *(_DWORD *)(_R9 + 312) = *(_DWORD *)((char *)_R8 + v21 + 368);
      __asm { VMOV            S10, R3 }
      *(_DWORD *)(_R9 + 316) = *(_DWORD *)((char *)_R8 + v21 + 372);
      *(_DWORD *)(_R9 + 320) = *(_DWORD *)((char *)_R8 + v21 + 376);
      *(_DWORD *)(_R9 + 324) = *(_DWORD *)((char *)_R8 + v21 + 380);
      *(_DWORD *)(_R9 + 328) = *(_DWORD *)((char *)_R8 + v21 + 384);
      *(_DWORD *)(_R9 + 332) = *(_DWORD *)((char *)_R8 + v21 + 388);
        VLDR            S6, [R9,#0x154]
        VLDR            S14, [LR]
        VMUL.F32        S2, S2, S6
        VMUL.F32        S8, S0, S6
        VMUL.F32        S4, S4, S6
        VLDR            S6, [R12]
        VMUL.F32        S0, S2, S6
        VMUL.F32        S2, S8, S6
        VMOV            S6, R1
        VMOV            S8, R2
        VSTR            S0, [R9,#0x158]
        VSTR            S2, [R9,#0x15C]
        VSTR            S4, [R9,#0x160]
      if ( !_ZF )
        __asm { VMUL.F32        S26, S12, S14 }
        if ( v22 == 1 )
        {
          __asm { VMOV            R4, S16 }
          _R7 = PerlinSimplexNoise::getValue(v19, _R4, *(float *)(v84 + v23));
          _R11 = v84 + v23;
          _R8 = PerlinSimplexNoise::getValue(v19, _R4, *(float *)((char *)_R8 + v23 + 1504));
          __asm { VMOV            S28, R7 }
          _R0 = PerlinSimplexNoise::getValue(v19, _R4, *(float *)(v84 + v23 + 8));
          __asm { VMUL.F32        S0, S28, S24 }
          _R12 = v87;
          _LR = v86;
          __asm
          {
            VLDR            S4, [R9,#0x154]
            VMOV            S2, R8
            VLDR            S6, [R9,#0x158]
            VMUL.F32        S2, S2, S24
          }
          _R8 = v91;
            VMUL.F32        S0, S0, S4
            VMUL.F32        S2, S2, S4
            VADD.F32        S0, S0, S6
            VMOV            S6, R0
            VMUL.F32        S6, S6, S24
            VSTR            S0, [R9,#0x158]
            VLDR            S8, [R9,#0x15C]
            VADD.F32        S2, S8, S2
            VMUL.F32        S4, S6, S4
            VSTR            S2, [R9,#0x15C]
            VLDR            S6, [R9,#0x160]
            VADD.F32        S4, S6, S4
            VSTR            S4, [R9,#0x160]
            VLDR            S6, [R11,#-0x18]
            VLDR            S8, [R9,#0x168]
            VLDR            S10, [R9,#0x16C]
        }
        __asm { VSUB.F32        S2, S2, S26 }
        v22 = v89;
        __asm { VSTR            S2, [R9,#0x15C] }
      __asm { VADD.F32        S0, S6, S0 }
      v23 += 112;
      __asm { VADD.F32        S2, S8, S2 }
      v21 += 112;
        VADD.F32        S4, S10, S4
        VSTR            S0, [R9,#0x164]
        VSTR            S2, [R9,#0x168]
        VSTR            S4, [R9,#0x16C]
    while ( !_ZF );
    ++v22;
    v21 = v82 + 1120;
  while ( v22 != 3 );
  v36 = (*(int (**)(void))(**((_DWORD **)_R8 + 3) + 52))();
  BlockPos::BlockPos((int)&v111, v36);
  if ( (unsigned int)Player::getClientSubId(*((Player **)_R8 + 3)) >= 4 )
    v37 = 2;
  else
    v37 = Player::getClientSubId(*((Player **)_R8 + 3)) + 2;
  result = *((_WORD *)_R8 + 112);
  v39 = &v109;
  if ( (_BYTE)result
    || *((_DWORD *)_R8 + 57) != *(_DWORD *)&v111
    || *((_DWORD *)_R8 + 58) != v112
    || *((_DWORD *)_R8 + 59) != v113 )
    v43 = (mce::TextureGroup *)*((_DWORD *)_R8 + 6);
    mce::TextureGroup::getLocationFor((void **)&v110, v37);
    v44 = mce::TextureGroup::getTexturePair(v43, (const ResourceLocation *)&v110);
    v45 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v110 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v39 = &v109;
      else
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v45);
    v90 = mce::TextureContainer::getImageData((mce::TextureContainer *)(v44 + 64), 0, 0);
    v46 = *(_QWORD *)(v39 + 5) >> 32;
    v47 = *(_QWORD *)(v39 + 5);
    v48 = v39[7];
    *v39 = v47 - 32;
    v39[1] = v46;
    v39[2] = v48 - 32;
    v49 = *((_DWORD *)_R8 + 57);
    v50 = *((_BYTE *)_R8 + 224);
    v51 = v47 - v49;
    if ( v47 - v49 < 0 )
      v51 = -v51;
    if ( 64 - v51 < 1 )
      v50 = 1;
    v52 = *((_DWORD *)_R8 + 59);
    v79 = (TexturePair *)v44;
    v53 = v48 - v52;
    if ( v48 - v52 < 0 )
      v53 = -v53;
    v54 = 64 - v53;
    if ( 64 - v53 < 1 )
    v92 = _R8;
    *((_BYTE *)_R8 + 224) = v50;
    v55 = v47;
    if ( v54 >= 1 && !v50 && 64 - v51 >= 1 )
      v56 = v48 - v52;
      v57 = 0;
      v58 = v47 - v49;
      if ( v48 - v52 <= 0 )
        v56 = 0;
      if ( v58 <= 0 )
        v58 = 0;
      v59 = v52 - v48;
      v60 = (v56 << 8) + 4 * v58;
      if ( v59 > 0 )
        v57 = v59;
      v61 = v90 + v60;
      v62 = v57 << 6;
      if ( v49 - v55 > 0 )
        v62 = v49 - v55 + (v57 << 6);
      v63 = &v108[4 * v62];
      v64 = 256 - 4 * v51;
      do
        _aeabi_memcpy4(v63, v61, v64);
        --v54;
        v63 += 256;
        v61 += 256;
      while ( v54 );
    v83 = v52 + 32;
    v85 = v52 - 32;
    v65 = v108;
    __asm { VLDR            S16, =0.066667 }
    v81 = 0;
    while ( 1 )
      v66 = v55 - 32;
      v67 = 0;
      v80 = v65;
      *v39 = v55 - 32;
        if ( *((_BYTE *)v92 + 224) || v66 < v49 - 32 || v66 >= v49 + 32 || (v68 = v39[2], v68 < v85) || v68 >= v83 )
          BlockSource::getTopRainBlockPos((BlockSource *)&v106, v88, (const BlockPos *)&v109);
          v70 = v107;
          if ( v107 < 0 )
            v70 = 0;
          v107 = v70;
          v103 = Brightness::MIN;
          BlockSource::getLightColor((int)&v104, (int)v88, (int)&v106, &v103);
          v101 = 0;
          v99 = 0.0;
          v100 = 0;
          _R0 = v105;
            VMOV            S0, R0
            VCVT.F32.U32    S0, S0
            VMUL.F32        S0, S0, S16
            VSTR            S0, [SP,#0x40F8+var_40A8]
          v102 = 0;
          BlockSource::getTopSnowBlockPos((BlockSource *)&v97, v88, (const BlockPos *)&v109);
          v72 = v98;
          if ( v98 < 0 )
            v72 = 0;
          v98 = v72;
          v94 = Brightness::MIN;
          BlockSource::getLightColor((int)&v95, (int)v88, (int)&v106, &v94);
          v104 = v95;
          _R0 = v96;
          v105 = v96;
            VSTR            S0, [SP,#0x40F8+var_40B0]
          v74 = Color::toARGB((Color *)&v99);
          v69 = v74 | (v107 << 24) | (v98 << 8);
        else
          v69 = *(_DWORD *)v65;
        v65 += 4;
        *(_DWORD *)(v90 + 4 * v67++) = v69;
        v66 = *v39 + 1;
        *v39 = v66;
      while ( v67 != 64 );
      ++v39[2];
      if ( v81 == 63 )
        break;
      ++v81;
      v65 = v80 + 256;
      v55 = v39[5];
      v90 += 256;
    TexturePair::sync(v79);
    *((_WORD *)v92 + 112) = 0;
    *((_DWORD *)v92 + 57) = v39[5];
    *((_DWORD *)v92 + 58) = v39[6];
    result = v39[7];
    *((_DWORD *)v92 + 59) = result;
  else if ( result >= 0x100 )
    v40 = (mce::TextureGroup *)*((_DWORD *)_R8 + 6);
    mce::TextureGroup::getLocationFor((void **)&v93, v37);
    v41 = mce::TextureGroup::getTexturePair(v40, (const ResourceLocation *)&v93);
    v42 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v93 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v42);
    TexturePair::sync((TexturePair *)v41);
    result = 0;
    *((_BYTE *)_R8 + 225) = 0;
  return result;
}


WeatherRenderer *__fastcall WeatherRenderer::onBlockChanged(WeatherRenderer *result, BlockSource *a2, const BlockPos *a3)
{
  if ( *((_BYTE *)result + 224) )
  {
    if ( !*((_BYTE *)result + 224) )
      result = (WeatherRenderer *)WeatherRenderer::_updateOcclusionAtPos(result, a2, a3);
  }
  else
    result = (WeatherRenderer *)j_j_j__ZN15WeatherRenderer21_updateOcclusionAtPosER11BlockSourceRK8BlockPos(
                                  result,
                                  a2,
                                  a3);
  return result;
}


_QWORD *__fastcall WeatherRenderer::WeatherRenderer(_QWORD *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r7@1
  int v7; // r6@1
  int v9; // r8@1
  int v10; // r1@1
  unsigned int *v11; // r1@2
  unsigned int v12; // r2@4
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  BlockSource *v16; // r0@10
  Level *v17; // r0@10
  int v18; // r5@10
  unsigned int v19; // r0@10
  signed int v20; // r1@10
  int v21; // r0@11
  int *v22; // r4@11
  int v23; // r6@11
  int v24; // r3@12
  int v29; // r0@12
  int v30; // r11@12
  int v31; // r0@12
  float v32; // r1@12
  int v33; // r9@13
  int v35; // r5@14
  unsigned int *v49; // r2@17
  signed int v50; // r1@19
  unsigned int *v51; // r2@21
  signed int v52; // r1@23
  unsigned int *v53; // r2@25
  signed int v54; // r1@27
  float v55; // [sp+0h] [bp-A68h]@13
  int v56; // [sp+4h] [bp-A64h]@13
  unsigned int v57; // [sp+20h] [bp-A48h]@10
  unsigned int v58; // [sp+24h] [bp-A44h]@10
  int v59; // [sp+9E4h] [bp-84h]@10
  char v60; // [sp+9E8h] [bp-80h]@10
  int v61; // [sp+9ECh] [bp-7Ch]@10
  int v62; // [sp+9F0h] [bp-78h]@12
  int v63; // [sp+9F8h] [bp-70h]@9
  int v64; // [sp+A00h] [bp-68h]@8
  int v65; // [sp+A08h] [bp-60h]@7

  v5 = a4;
  v6 = a3;
  v7 = a2;
  _R10 = a1;
  AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)_R10 = &off_26DCB40;
  *((_DWORD *)_R10 + 2) = &off_26DCB88;
  v9 = (int)(_R10 + 1);
  *(_DWORD *)(v9 + 4) = v7;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)v6;
  v10 = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v9 + 12) = v10;
  if ( v10 )
  {
    v11 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  }
  *((_DWORD *)_R10 + 6) = v5;
  *((_DWORD *)_R10 + 7) = a5;
  mce::Mesh::Mesh((mce::Mesh *)(_R10 + 4));
  *((_DWORD *)_R10 + 33) = 2500;
  *((_DWORD *)_R10 + 55) = 0;
  *((_DWORD *)_R10 + 52) = 0;
  *((_DWORD *)_R10 + 53) = 0;
  *((_DWORD *)_R10 + 50) = 0;
  *((_DWORD *)_R10 + 51) = 0;
  *((_BYTE *)_R10 + 224) = 1;
  *((_BYTE *)_R10 + 225) = 1;
  *((_DWORD *)_R10 + 57) = 0;
  *((_DWORD *)_R10 + 58) = 0;
  *((_DWORD *)_R10 + 59) = 0;
  PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)(_R10 + 30), 0x929u, 1);
  PerlinSimplexNoise::PerlinSimplexNoise((PerlinSimplexNoise *)((char *)_R10 + 260), 0x1A85u, 3);
  _aeabi_memclr4(_R10 + 36, 48);
  _aeabi_memclr4(_R10 + 43, 48);
  _aeabi_memclr4(_R10 + 50, 48);
  _aeabi_memclr4(_R10 + 57, 48);
  _aeabi_memclr4(_R10 + 64, 48);
  _aeabi_memclr4(_R10 + 71, 48);
  _aeabi_memclr4(_R10 + 78, 48);
  _aeabi_memclr4(_R10 + 85, 48);
  _aeabi_memclr4(_R10 + 92, 48);
  _aeabi_memclr4(_R10 + 99, 48);
  _aeabi_memclr4(_R10 + 106, 48);
  _aeabi_memclr4(_R10 + 113, 48);
  _aeabi_memclr4(_R10 + 120, 48);
  _aeabi_memclr4(_R10 + 127, 48);
  _aeabi_memclr4(_R10 + 134, 48);
  _aeabi_memclr4(_R10 + 141, 48);
  _aeabi_memclr4(_R10 + 148, 48);
  _aeabi_memclr4(_R10 + 155, 48);
  _aeabi_memclr4(_R10 + 162, 48);
  _aeabi_memclr4(_R10 + 169, 48);
  _aeabi_memclr4(_R10 + 176, 48);
  _aeabi_memclr4(_R10 + 183, 48);
  _aeabi_memclr4(_R10 + 190, 48);
  _aeabi_memclr4(_R10 + 197, 48);
  _aeabi_memclr4(_R10 + 204, 48);
  _aeabi_memclr4(_R10 + 211, 48);
  _aeabi_memclr4(_R10 + 218, 48);
  _aeabi_memclr4(_R10 + 225, 48);
  _aeabi_memclr4(_R10 + 232, 48);
  _aeabi_memclr4(_R10 + 239, 48);
  _aeabi_memclr4(_R10 + 246, 48);
  _aeabi_memclr4(_R10 + 253, 48);
  _aeabi_memclr4(_R10 + 260, 48);
  _aeabi_memclr4(_R10 + 267, 48);
  _aeabi_memclr4(_R10 + 274, 48);
  _aeabi_memclr4(_R10 + 281, 48);
  _aeabi_memclr4(_R10 + 288, 48);
  _aeabi_memclr4(_R10 + 295, 48);
  _aeabi_memclr4(_R10 + 302, 48);
  _aeabi_memclr4(_R10 + 309, 48);
  _aeabi_memclr4(_R10 + 316, 48);
  _aeabi_memclr4(_R10 + 323, 48);
  _aeabi_memclr4(_R10 + 330, 48);
  _aeabi_memclr4(_R10 + 337, 48);
  _aeabi_memclr4(_R10 + 344, 48);
  _aeabi_memclr4(_R10 + 351, 48);
  _aeabi_memclr4(_R10 + 358, 48);
  _aeabi_memclr4(_R10 + 365, 48);
  _aeabi_memclr4(_R10 + 372, 48);
  _aeabi_memclr4(_R10 + 379, 48);
  _aeabi_memclr4(_R10 + 386, 48);
  _aeabi_memclr4(_R10 + 393, 48);
  _aeabi_memclr4(_R10 + 400, 48);
  _aeabi_memclr4(_R10 + 407, 48);
  _aeabi_memclr4(_R10 + 414, 48);
  _aeabi_memclr4(_R10 + 421, 48);
  _aeabi_memclr4(_R10 + 428, 48);
  _aeabi_memclr4(_R10 + 435, 48);
  _aeabi_memclr4(_R10 + 442, 48);
  _aeabi_memclr4(_R10 + 449, 48);
  *((_DWORD *)_R10 + 925) = 0;
  *((_DWORD *)_R10 + 926) = 0;
  _aeabi_memclr4(_R10 + 455, 36);
  sub_119C884((void **)&v65, "rain");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)((char *)_R10 + 3708),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v65);
  v13 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v65 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v64, "snow");
    (mce::MaterialPtr *)(_R10 + 465),
    &v64);
  v14 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v64 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v63, "plankton");
    (mce::MaterialPtr *)((char *)_R10 + 3732),
    &v63);
  v15 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v63 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (BlockSource *)Entity::getRegion(*((Entity **)_R10 + 3));
  BlockSource::addListener(v16, (BlockSourceListener *)(_R10 + 1));
  v17 = (Level *)Entity::getLevel(*((Entity **)_R10 + 3));
  Level::addListener(v17, (LevelListener *)(_R10 + 1));
  v18 = 0;
  *((_DWORD *)_R10 + 919) = 0;
  *((_DWORD *)_R10 + 920) = 0;
  *((_DWORD *)_R10 + 921) = 0;
  *((_DWORD *)_R10 + 922) = 0;
  *((_DWORD *)_R10 + 923) = 0;
  *((_DWORD *)_R10 + 924) = 0;
  v19 = sub_119D73C((int)&Random::mRandomDevice);
  v57 = v19;
  v59 = 625;
  v20 = 1;
  v60 = 0;
  v61 = 0;
  v58 = v19;
  do
    v21 = v19 ^ (v19 >> 30);
    v22 = (int *)(&v57 + v18);
    v23 = v18++ + 1812433253 * v21;
    v19 = v20++ + 1812433253 * v21;
    v22[2] = v23 + 1;
  while ( v18 != 397 );
  v59 = 624;
  v62 = 398;
  *((_DWORD *)_R10 + 54) = 1106247680;
  v24 = (int)_R10 + 140;
  __asm
    VMOV.F32        S18, #0.5
    VMOV.F32        S20, #0.75
  *(_DWORD *)v24 = 1058642330;
  *(_DWORD *)(v24 + 4) = 1056964608;
  *(_DWORD *)(v24 + 8) = 1036831949;
  *(_DWORD *)(v24 + 12) = 1058642330;
  *(_DWORD *)(v24 + 16) = 1036831949;
  __asm { VMOV.F32        S22, #10.0 }
  v29 = (int)(_R10 + 20);
  v30 = 0;
  *(_DWORD *)v29 = 1028443341;
  *(_DWORD *)(v29 + 4) = 1045220557;
  *(_DWORD *)(v29 + 8) = 1045220557;
  *(_DWORD *)(v29 + 12) = 1065353216;
  *(_DWORD *)(v29 + 16) = 1028443341;
  v31 = (int)_R10 + 180;
  *(_DWORD *)v31 = 1065353216;
  *(_DWORD *)(v31 + 4) = 1028443341;
  *(_DWORD *)(v31 + 8) = 1028443341;
  *(_DWORD *)(v31 + 12) = 1065353216;
  *(_DWORD *)(v31 + 16) = 1008981770;
  v32 = 0.0;
  __asm { VLDR            D8, =2.32830644e-10 }
    v33 = 0;
    v55 = v32;
    v56 = v30;
    do
      _R0 = Random::_genRandInt32((Random *)&v57);
      __asm { VMOV            S0, R0 }
      v35 = (int)_R10 + v30;
      __asm
      {
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S18
        VADD.F32        S0, S0, S20
        VSTR            S0, [R5,#0x118]
        VLDR            S24, [R10,#0xD8]
      }
        VMOV            S0, R0
        VCVT.F64.U32    D13, S0
      _R7 = Random::_genRandInt32((Random *)&v57);
        VMOV            S2, R7
        VMOV            S4, R0
        VCVT.F64.U32    D1, S2
        VCVT.F64.U32    D2, S4
        VMUL.F64        D1, D1, D8
        VMUL.F64        D2, D2, D8
        VMUL.F64        D0, D13, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S4, D2
        VMUL.F32        S0, S0, S24
        VMUL.F32        S2, S2, S24
        VMUL.F32        S4, S4, S24
        VSTR            S0, [R5,#0x12C]
        VSTR            S2, [R5,#0x130]
        VSTR            S4, [R5,#0x134]
      *(_DWORD *)(v35 + 288) = 0;
      *(_DWORD *)(v35 + 292) = 0;
      *(_DWORD *)(v35 + 296) = 0;
        VADD.F32        S0, S0, S18
        VSTR            S0, [R5,#0x11C]
        VSTR            S0, [R5,#0x138]
        VSTR            S2, [R5,#0x13C]
        VSTR            S4, [R5,#0x140]
        VCVT.F64.U32    D12, S0
      _R8 = Random::_genRandInt32((Random *)&v57);
      __asm { VMOV            S2, R8 }
      ++v33;
      __asm { VMOV            S4, R0 }
      v30 += 112;
        VMUL.F64        D0, D12, D8
        VMUL.F32        S0, S0, S22
        VMUL.F32        S2, S2, S22
        VMUL.F32        S4, S4, S22
        VSTR            S0, [R5,#0x144]
        VSTR            S2, [R5,#0x148]
        VSTR            S4, [R5,#0x14C]
      *(_QWORD *)(v35 + 336) = *(_QWORD *)(v35 + 280);
      *(_DWORD *)(v35 + 344) = *(_DWORD *)(v35 + 288);
      *(_DWORD *)(v35 + 348) = *(_DWORD *)(v35 + 292);
      *(_DWORD *)(v35 + 352) = *(_DWORD *)(v35 + 296);
      *(_DWORD *)(v35 + 356) = *(_DWORD *)(v35 + 300);
      *(_DWORD *)(v35 + 360) = *(_DWORD *)(v35 + 304);
      *(_DWORD *)(v35 + 364) = *(_DWORD *)(v35 + 308);
      *(_DWORD *)(v35 + 368) = *(_DWORD *)(v35 + 312);
      *(_DWORD *)(v35 + 372) = *(_DWORD *)(v35 + 316);
      *(_DWORD *)(v35 + 376) = *(_DWORD *)(v35 + 320);
        VSTR            S0, [R5,#0x17C]
        VSTR            S2, [R5,#0x180]
        VSTR            S4, [R5,#0x184]
    while ( _NF ^ _VF );
    v30 = v56 + 1120;
    LODWORD(v32) = LODWORD(v55) + 1;
  while ( LODWORD(v55) + 1 < 3 );
  _R0 = *((_DWORD *)_R10 + 33);
    VLDR            S2, =0.37037
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  *((_DWORD *)_R10 + 34) = mce::Math::floor(_R0, v32);
  return _R10;
}


AppPlatformListener *__fastcall WeatherRenderer::~WeatherRenderer(WeatherRenderer *this)
{
  WeatherRenderer *v1; // r4@1
  BlockSourceListener *v2; // r5@1
  BlockSource *v3; // r0@1
  Level *v4; // r0@1
  int v5; // r5@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r0@4
  unsigned int *v8; // r6@8
  unsigned int v9; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26DCB40;
  *((_DWORD *)this + 2) = &off_26DCB88;
  v2 = (WeatherRenderer *)((char *)this + 8);
  v3 = (BlockSource *)Entity::getRegion(*((Entity **)this + 3));
  BlockSource::removeListener(v3, v2);
  v4 = (Level *)Entity::getLevel(*((Entity **)v1 + 3));
  Level::removeListener(v4, v2);
  mce::MaterialPtr::~MaterialPtr((WeatherRenderer *)((char *)v1 + 3732));
  mce::MaterialPtr::~MaterialPtr((WeatherRenderer *)((char *)v1 + 3720));
  mce::MaterialPtr::~MaterialPtr((WeatherRenderer *)((char *)v1 + 3708));
  PerlinSimplexNoise::~PerlinSimplexNoise((WeatherRenderer *)((char *)v1 + 260));
  PerlinSimplexNoise::~PerlinSimplexNoise((WeatherRenderer *)((char *)v1 + 240));
  mce::Mesh::~Mesh((WeatherRenderer *)((char *)v1 + 32));
  v5 = *((_DWORD *)v1 + 5);
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return j_j_j__ZN19AppPlatformListenerD2Ev_0(v1);
}


int __fastcall WeatherRenderer::onChunkLoaded(int result, LevelChunk *a2)
{
  *(_BYTE *)(result + 224) = 1;
  return result;
}
