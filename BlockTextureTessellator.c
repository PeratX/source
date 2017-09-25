

int __fastcall BlockTextureTessellator::render(BlockTextureTessellator *this, Tessellator *_R1, const Vec3 *a3, const TextureUVCoordinateSet *a4, int a5, float a6, float a7, const Vec3 *a8, int a9, int a10, float a11, bool a12)
{
  BlockTextureTessellator *v12; // r5@1
  const Vec3 *v17; // r4@1
  unsigned __int64 *v18; // r0@1
  unsigned __int64 *v19; // r6@1
  unsigned __int64 v20; // r0@1
  unsigned int v25; // r0@5
  int v31; // r0@7
  int v40; // r0@10
  int v49; // r0@13
  int v55; // r4@16
  int v58; // r7@18
  int v59; // r11@18
  float v80; // ST00_4@38
  float v81; // ST04_4@38
  float v84; // ST00_4@38
  float v85; // ST04_4@38
  float v91; // ST00_4@37
  float v92; // ST04_4@37
  float v96; // ST00_4@37
  float v97; // ST04_4@37
  float v105; // ST00_4@42
  float v106; // ST04_4@42
  float v110; // ST00_4@42
  float v111; // ST04_4@42
  float v114; // ST00_4@42
  float v115; // ST04_4@42
  float v117; // [sp+0h] [bp-D0h]@0
  float v118; // [sp+0h] [bp-D0h]@37
  float v119; // [sp+4h] [bp-CCh]@0
  float v120; // [sp+4h] [bp-CCh]@37
  int v122; // [sp+14h] [bp-BCh]@17
  int v128; // [sp+2Ch] [bp-A4h]@16
  Tessellator *v131; // [sp+38h] [bp-98h]@2
  int v135; // [sp+48h] [bp-88h]@18
  float v136; // [sp+4Ch] [bp-84h]@41
  __int64 v137; // [sp+58h] [bp-78h]@3
  int v138; // [sp+60h] [bp-70h]@4

  v12 = this;
  __asm { VLDR            S26, [R1] }
  v17 = a3;
  __asm
  {
    VLDR            S30, [R1,#4]
    VLDR            S28, [R1,#8]
  }
  v18 = (unsigned __int64 *)std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>,std::allocator<std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                              (int)&BlockTextureTessellator::mTessellatedTextures,
                              (int **)a3 + 6);
  v19 = v18;
  v20 = *v18;
  if ( (_DWORD)v20 != HIDWORD(v20) )
    __asm
    {
      VLDR            S0, [SP,#0xD0+arg_4]
      VLDR            S2, =0.017453
    }
    v131 = v12;
      VMUL.F32        S0, S0, S2
      VMOV            R7, S0
    _R0 = cosf(_R7);
      VMOV            S23, R0
      VSTR            S23, [SP,#0xD0+var_A8]
    _R0 = sinf(_R7);
      VMOV            S2, R0
      VMUL.F32        S0, S23, S23
      VMUL.F32        S4, S2, S2
      VNEG.F32        S19, S2
      VLDR            S2, =0.0001
      VADD.F32        S0, S4, S0
      VSTR            S19, [SP,#0xD0+var_AC]
      VSQRT.F32       S0, S0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v138 = dword_2822498;
      v137 = *(_QWORD *)&Vec3::ZERO;
    else
      __asm
      {
        VDIV.F32        S2, S19, S0
        VDIV.F32        S0, S23, S0
        VSTR            S2, [SP,#0xD0+var_78]
      }
      HIDWORD(v137) = 0;
      __asm { VSTR            S0, [SP,#0xD0+var_70] }
    _R5 = v17;
    v25 = *((_DWORD *)v17 + 5);
    _R1 = (unsigned __int16)v25;
    _R4 = v25 >> 16;
      VMOV            S0, R1
      VCVT.F32.U32    S16, S0
      VLDR            S18, [R5,#4]
      VLDR            S20, [R5,#0xC]
      VCMPE.F32       S20, S18
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        VMUL.F32        S0, S16, S18
        VMOV            R0, S0
      v31 = roundf(_R0);
      __asm { VMUL.F32        S0, S16, S20 }
      _R7 = v31;
        VMUL.F32        S0, S16, S20
      _R7 = roundf(_R0);
      __asm { VMUL.F32        S0, S16, S18 }
    __asm { VMOV            R0, S0 }
    _R0 = roundf(_R0);
      VMOV            S0, R0
      VMOV            S2, R7
      VCVTR.S32.F32   S0, S0
      VCVTR.S32.F32   S2, S2
      VMOV            R0, S0
      VMOV            R1, S2
      VMOV            S0, R4
      VCVT.F32.U32    S22, S0
    _R0 = (unsigned __int16)(_R1 - _R0);
      VCVT.F32.U32    S0, S0
      VLDR            S24, [R5,#8]
      VLDR            S17, [R5,#0x10]
      VCMPE.F32       S17, S24
      VSTR            S0, [SP,#0xD0+var_9C]
        VMUL.F32        S0, S22, S24
      v40 = roundf(_R0);
      __asm { VMUL.F32        S0, S22, S17 }
      _R7 = v40;
        VMUL.F32        S0, S22, S17
      __asm { VMUL.F32        S0, S22, S24 }
      VLDR            S22, [SP,#0xD0+arg_14]
      VSTR            S0, [SP,#0xD0+var_A0]
      v49 = roundf(_R0);
      _R7 = v49;
      VCMPE.F32       S22, #0.0
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S22 }
    LODWORD(v20) = *v19 >> 32;
    v55 = *v19;
    v128 = v20;
    if ( v55 != (_DWORD)v20 )
        VMOV.F32        S4, #1.0
        VMOV.F32        S2, #0.5
      v122 = a5 / 2;
        VDIV.F32        S0, S4, S0
        VADD.F32        S6, S26, S2
        VSTR            S0, [SP,#0xD0+var_C0]
        VADD.F32        S2, S28, S2
        VSTR            S6, [SP,#0xD0+var_B0]
        VSTR            S2, [SP,#0xD0+var_B4]
        VADD.F32        S2, S30, S4
        VSTR            S2, [SP,#0xD0+var_B8]
      do
        _R8 = *(_QWORD *)v55 >> 32;
        _R9 = *(_QWORD *)v55;
        v58 = *(_QWORD *)(v55 + 8) >> 32;
        v59 = *(_QWORD *)(v55 + 8);
        _R0 = a7;
        __asm
        {
          VMOV            S0, R9
          VCVT.F32.S32    S0, S0
          VLDR            S20, [SP,#0xD0+var_9C]
          VLDR            S16, [R0]
          VLDR            S18, [R0,#8]
          VDIV.F32        S0, S0, S20
          VMOV            R1, S0
        }
        v135 = TextureUVCoordinateSet::offsetWidth(_R5, _R1, 0.0);
        _R0 = *(_DWORD *)(v55 + 4);
          VMOV            S0, R0
          VLDR            S22, [SP,#0xD0+var_A0]
        if ( !_ZF )
          v59 = -v59;
          VDIV.F32        S0, S0, S22
        _R6 = TextureUVCoordinateSet::offsetHeight(_R5, _R1, 0.0);
        _R0 = *(_DWORD *)v55 + *(_DWORD *)(v55 + 8);
          _R9 = a5 - _R9;
        _R0 = TextureUVCoordinateSet::offsetWidth(_R5, _R1, 0.0);
        _R1 = v58 + _R8;
          VMOV            S6, R8
          VMOV            S2, R1
        _R2 = *(_DWORD *)(v55 + 4) + *(_DWORD *)(v55 + 12);
          VMOV            S31, R0
          VMOV            S0, R2
          VCVT.F32.S32    S2, S2
        _R2 = _R9 - v122;
        __asm { VMOV            S4, R2 }
        _R2 = _R9 - v122 + v59;
          VCVT.F32.S32    S4, S4
          VCVT.F32.S32    S6, S6
          VLDR            S8, [SP,#0xD0+var_C0]
        _R2 = v135;
          VMUL.F32        S22, S2, S8
          VMUL.F32        S2, S4, S8
          VMOV            S20, R2
          VMUL.F32        S21, S0, S8
          VMUL.F32        S24, S6, S8
          VMUL.F32        S26, S22, S18
          VMUL.F32        S0, S2, S23
          VMUL.F32        S28, S22, S16
          VMUL.F32        S30, S2, S19
          VSTR            S0, [SP,#0xD0+var_88]
          VMUL.F32        S0, S21, S19
          VMOV            S19, R6
          VSTR            S0, [SP,#0xD0+var_8C]
        _R0 = TextureUVCoordinateSet::offsetHeight(_R5, _R1, 0.0);
          VCMPE.F32       S20, S31
          VLDR            S2, =-0.0001
          VMRS            APSR_nzcv, FPSCR
          VMOV            S17, R0
          VLDR            S29, =0.0001
          VMUL.F32        S21, S21, S23
          VMOV.F32        S25, S2
          VLDR            S0, =0.0
          VMOV.F32        S23, S29
          VCMPE.F32       S19, S17
          VMOV.F32        S27, S2
        if ( _NF ^ _VF )
          __asm
          {
            VMOVLT.F32      S23, S2
            VMOVLT.F32      S25, S29
          }
          VCMPE.F32       S18, #0.0
            VMOVLT.F32      S27, S29
            VMOVLT.F32      S29, S2
          VCMPE.F32       S16, #0.0
          VMUL.F32        S2, S16, S24
        if ( _ZF )
          __asm { VMOVEQ.F32      S26, S0 }
          VSTR            S26, [SP,#0xD0+var_90]
          __asm { VMOVEQ.F32      S28, S0 }
          VSTR            S28, [SP,#0xD0+var_94]
          VMUL.F32        S28, S18, S24
        __asm { VMRS            APSR_nzcv, FPSCR }
          __asm { VMOVEQ.F32      S2, S0 }
        __asm { VMOV.F32        S18, S2 }
        if ( a9 == 1 )
          Tessellator::normal(v131, (const Vec3 *)&v137);
          VLDR            S0, [SP,#0xD0+var_B8]
          VADD.F32        S31, S31, S23
          VLDR            S2, [SP,#0xD0+var_B4]
          VADD.F32        S23, S20, S25
          VSUB.F32        S4, S0, S22
          VLDR            S6, [SP,#0xD0+var_88]
          VSUB.F32        S16, S0, S24
          VLDR            S0, [SP,#0xD0+var_B0]
          VSUB.F32        S26, S2, S30
          VSUB.F32        S30, S0, S6
          VLDR            S6, [SP,#0xD0+var_8C]
          VSUB.F32        S22, S0, S21
          VSUB.F32        S24, S2, S6
          VADD.F32        S29, S17, S29
          VADD.F32        S20, S19, S27
            VMOV.F32        S25, S18
            VMOV.F32        S18, S28
            VSTR            S23, [SP,#0xD0+var_D0]
            VMOV            R6, S16
            VSTR            S20, [SP,#0xD0+var_CC]
            VMOV.F32        S27, S4
            VADD.F32        S0, S30, S25
            VADD.F32        S2, S26, S18
            VMOV            R1, S0
            VMOV            R3, S2
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v117, v119);
            VADD.F32        S0, S22, S25
            VADD.F32        S2, S24, S18
            VSTR            S31, [SP,#0xD0+var_D0]
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v80, v81);
            VLDR            S21, [SP,#0xD0+var_94]
            VMOV            R6, S27
            VLDR            S17, [SP,#0xD0+var_90]
            VADD.F32        S0, S22, S21
            VADD.F32        S2, S24, S17
            VSTR            S29, [SP,#0xD0+var_CC]
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v84, v85);
            VADD.F32        S0, S21, S30
            VADD.F32        S2, S17, S26
        else
            VMOV            R6, S4
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v91, v92);
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v96, v97);
        Tessellator::vertexUV(v131, _R1, _R6, _R3, v118, v120);
          VLDR            S28, [SP,#0xD0+var_A8]
          VLDR            S19, [SP,#0xD0+var_AC]
        if ( a8 == (const Vec3 *)1 )
          if ( a9 == 1 )
            __asm
            {
              VLDR            S0, [SP,#0xD0+var_78]
              VLDR            S2, [SP,#0xD0+var_78+4]
              VLDR            S4, [SP,#0xD0+var_70]
              VNEG.F32        S0, S0
              VNEG.F32        S2, S2
              VNEG.F32        S4, S4
              VSTR            S0, [SP,#0xD0+var_84]
              VSTR            S2, [SP,#0xD0+var_80]
              VSTR            S4, [SP,#0xD0+var_7C]
            }
            Tessellator::normal(v131, (const Vec3 *)&v136);
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v105, v106);
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v110, v111);
          Tessellator::vertexUV(v131, _R1, _R6, _R3, v114, v115);
        __asm { VMOV.F32        S23, S28 }
        v55 += 24;
        LODWORD(v20) = v128;
      while ( v55 != v128 );
  return v20;
}


int __fastcall BlockTextureTessellator::getTessellatedTexturesInfo(BlockTextureTessellator *this, const ResourceLocation *a2)
{
  return std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>,std::allocator<std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int)&BlockTextureTessellator::mTessellatedTextures,
           (int **)this);
}


int __fastcall BlockTextureTessellator::clearRegisteredUVs(BlockTextureTessellator *this)
{
  int v1; // r6@1
  unsigned int *v2; // r2@3
  signed int v3; // r1@5
  int v4; // r5@11
  void *v5; // r0@11
  int v6; // r1@13
  void *v7; // r0@13
  int result; // r0@15

  v1 = unk_27CD094;
  while ( v1 )
  {
    v4 = v1;
    v5 = *(void **)(v1 + 12);
    v1 = *(_DWORD *)v1;
    if ( v5 )
      operator delete(v5);
    v6 = *(_DWORD *)(v4 + 4);
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v2 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v3 = __ldrex(v2);
        while ( __strex(v3 - 1, v2) );
      }
      else
        v3 = (*v2)--;
      if ( v3 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v7);
    }
    operator delete((void *)v4);
  }
  _aeabi_memclr4(BlockTextureTessellator::mTessellatedTextures, 4 * unk_27CD090);
  result = 0;
  unk_27CD094 = 0;
  unk_27CD098 = 0;
  return result;
}


int __fastcall BlockTextureTessellator::generateUV(BlockTextureTessellator *this, const ResourceLocation *a2, const mce::ImageBuffer *a3)
{
  mce::ImageBuffer *v3; // r6@1
  int **v4; // r8@1
  char *v5; // r0@1
  int v6; // r5@1
  char *v7; // r0@1
  int v8; // r11@1
  int v9; // r7@2
  char *v10; // r0@2
  int v11; // r4@4
  bool v12; // zf@4
  char *v13; // r9@7
  int v14; // r7@7
  int v15; // r4@7
  signed int v16; // r10@7
  char *v17; // r8@8
  signed int v18; // r5@8
  unsigned int v19; // r0@9
  bool v20; // cf@9
  char v21; // r0@9
  int v22; // r7@13
  unsigned int v23; // r4@13
  char *v24; // r0@13
  void *v25; // r0@13
  void *v26; // r0@15
  void *v27; // r0@16
  unsigned __int64 *v28; // r0@16
  int **v30; // [sp+0h] [bp-58h]@2
  char *v31; // [sp+4h] [bp-54h]@4
  int v32; // [sp+8h] [bp-50h]@1
  int v33; // [sp+Ch] [bp-4Ch]@1
  void *ptr; // [sp+10h] [bp-48h]@16
  void *v35; // [sp+14h] [bp-44h]@16
  void *v36; // [sp+18h] [bp-40h]@16
  int v37; // [sp+1Ch] [bp-3Ch]@13
  int v38; // [sp+20h] [bp-38h]@13
  int v39; // [sp+24h] [bp-34h]@13
  char *v40; // [sp+28h] [bp-30h]@2
  int v41; // [sp+2Ch] [bp-2Ch]@2
  char *v42; // [sp+30h] [bp-28h]@2

  v3 = a2;
  v4 = (int **)this;
  v5 = mce::ImageBuffer::getImageDescription(a2);
  v6 = *(_DWORD *)v5;
  v33 = *(_DWORD *)v5;
  v7 = mce::ImageBuffer::getImageDescription(v3);
  v8 = *((_DWORD *)v7 + 1);
  v32 = *((_DWORD *)v7 + 1);
  if ( *((_DWORD *)mce::ImageBuffer::getImageDescription(v3) + 2) == 28 )
  {
    v9 = v8 * v6;
    v10 = 0;
    v30 = v4;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    if ( v8 * v6 )
      v10 = (char *)operator new(v8 * v6);
    v31 = v10;
    v40 = v10;
    v11 = (int)&v10[v9];
    v42 = &v10[v9];
    _aeabi_memclr(v10, v8 * v6);
    v12 = v6 == 0;
    v41 = v11;
    if ( v6 )
      v12 = v8 == 0;
    if ( !v12 )
    {
      v13 = v31;
      v14 = 4 * v6;
      v15 = 0;
      v16 = 3;
      do
      {
        v17 = v13;
        v18 = v16;
        do
        {
          v19 = *(_BYTE *)(mce::ImageBuffer::get(v3, 0) + v18);
          v18 += v14;
          v20 = v19 >= 0xA;
          v12 = v19 == 10;
          v21 = 0;
          if ( !v12 && v20 )
            v21 = 1;
          --v8;
          *v17++ = v21;
        }
        while ( v8 );
        v8 = v32;
        v16 += 4;
        ++v15;
        v13 += v32;
      }
      while ( v15 != v33 );
    }
    v4 = v30;
    v22 = std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>,std::allocator<std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int)&BlockTextureTessellator::mTessellatedTextures,
            v30);
    v23 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v3);
    v24 = mce::ImageBuffer::getImageDescription(v3);
    MinimumCoveringRectangles::getRectangles((int)&v37, &v40, v23, *((_DWORD *)v24 + 1));
    v25 = *(void **)v22;
    *(_DWORD *)v22 = v37;
    v37 = 0;
    *(_DWORD *)(v22 + 4) = v38;
    v38 = 0;
    *(_DWORD *)(v22 + 8) = v39;
    v39 = 0;
    if ( v25 )
      operator delete(v25);
    v26 = v31;
  }
  else
    v27 = operator new(0x18u);
    *(_DWORD *)v27 = 0;
    *((_DWORD *)v27 + 1) = 0;
    *((_DWORD *)v27 + 2) = v6;
    *((_DWORD *)v27 + 3) = v8;
    *((_DWORD *)v27 + 4) = 0;
    *((_DWORD *)v27 + 5) = 0;
    ptr = v27;
    v27 = (char *)v27 + 24;
    v35 = v27;
    v36 = v27;
    v28 = (unsigned __int64 *)std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>,std::allocator<std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                                (int)&BlockTextureTessellator::mTessellatedTextures,
                                v4);
    std::vector<Rect2D,std::allocator<Rect2D>>::operator=(v28, (unsigned __int64 *)&ptr);
    v26 = ptr;
  if ( v26 )
    operator delete(v26);
  return std::__detail::_Map_base<ResourceLocation,std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>,std::allocator<std::pair<ResourceLocation const,std::vector<Rect2D,std::allocator<Rect2D>>>>,std::__detail::_Select1st,std::equal_to<ResourceLocation>,std::hash<ResourceLocation>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (int)&BlockTextureTessellator::mTessellatedTextures,
           v4);
}


int __fastcall BlockTextureTessellator::render(int this, float _R1, int a3, int a4, int a5, float a6, int a7, const Vec3 *a8, int a9, int a10, float a11, bool a12)
{
  return BlockTextureTessellator::render(
           (BlockTextureTessellator *)this,
           (Tessellator *)LODWORD(_R1),
           (const Vec3 *)a3,
           (const TextureUVCoordinateSet *)a4,
           a5,
           a6,
           *(float *)&a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
