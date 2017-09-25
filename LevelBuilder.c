

void __fastcall LevelBuilder::_destroyBuilders(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  __int64 v2; // kr00_8@1
  RenderChunkBuilder **v3; // r5@2
  RenderChunkBuilder *v4; // r0@4
  __int64 v5; // kr08_8@6
  RenderChunkSorter **v6; // r5@7
  RenderChunkSorter *v7; // r0@9

  v1 = this;
  v2 = *((_QWORD *)this + 61);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (RenderChunkBuilder **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = RenderChunkBuilder::~RenderChunkBuilder(*v3);
        operator delete((void *)v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (RenderChunkBuilder **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 123) = v2;
  v5 = *(_QWORD *)((char *)v1 + 500);
  if ( HIDWORD(v5) != (_DWORD)v5 )
    v6 = (RenderChunkSorter **)v5;
      if ( *v6 )
        v7 = RenderChunkSorter::~RenderChunkSorter(*v6);
        operator delete((void *)v7);
      *v6 = 0;
      ++v6;
    while ( (RenderChunkSorter **)HIDWORD(v5) != v6 );
  *((_DWORD *)v1 + 126) = v5;
}


void __fastcall LevelBuilder::onAppSuspended(LevelBuilder *this)
{
  LevelBuilder::onAppSuspended(this);
}


void __fastcall LevelBuilder::onDimensionChanged(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  __int64 v2; // kr08_8@1
  RenderChunkBuilder **v3; // r5@2
  RenderChunkBuilder *v4; // r0@4
  __int64 v5; // kr10_8@6
  RenderChunkSorter **v6; // r5@7
  RenderChunkSorter *v7; // r0@9
  int v8; // r0@11
  int v9; // r1@11
  int v10; // kr00_4@13
  int v11; // r6@13
  int v20; // r8@14

  v1 = this;
  v2 = *((_QWORD *)this + 61);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (RenderChunkBuilder **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = RenderChunkBuilder::~RenderChunkBuilder(*v3);
        operator delete((void *)v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (RenderChunkBuilder **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 123) = v2;
  v5 = *(_QWORD *)((char *)v1 + 500);
  if ( HIDWORD(v5) != (_DWORD)v5 )
    v6 = (RenderChunkSorter **)v5;
      if ( *v6 )
        v7 = RenderChunkSorter::~RenderChunkSorter(*v6);
        operator delete((void *)v7);
      *v6 = 0;
      ++v6;
    while ( (RenderChunkSorter **)HIDWORD(v5) != v6 );
  *((_DWORD *)v1 + 126) = v5;
  v8 = *((_DWORD *)v1 + 171);
  v9 = *(_DWORD *)(v8 + 456);
  if ( v9 < *(_DWORD *)(v8 + 464) )
    v9 = *(_DWORD *)(v8 + 464);
  *((_DWORD *)v1 + 120) = v9;
  v10 = LevelRendererCamera::getDimensionHeight((LevelRendererCamera *)v8);
  *((_WORD *)v1 + 242) = v10 / 16;
  v11 = *((_DWORD *)v1 + 109);
  if ( v11 )
    __asm { VMOV.F32        S0, #0.25 }
    _R0 = &mce::Math::PI;
    __asm
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = sinf(_R0);
    _R1 = *((_DWORD *)v1 + 171);
      VMOV            S4, R0
      VLDR            S2, =0.0625
    v20 = *((_DWORD *)v1 + 120);
      VLDR            S0, [R1,#0x170]
      VMUL.F32        S2, S4, S2
      VCVT.F32.S32    S0, S0
    _R0 = ceilf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v11 + 20))(v11, v20, v10 / 16, 3 * _R0);
  *((_BYTE *)v1 + 888) = 1;
  *((_DWORD *)v1 + 221) = 0;
  j_j_j__ZN12LevelBuilder16recreateBuildersEv(v1);
}


signed int __fastcall LevelBuilder::onBrightnessChanged(LevelBuilder *this, BlockSource *a2, const BlockPos *a3)
{
  LevelBuilder *v3; // r4@1
  int v4; // r0@1
  signed int v5; // r1@1
  signed int v6; // r2@1
  signed int v7; // r5@1
  signed int v8; // r3@1
  signed int result; // r0@1
  signed int v10; // r11@1
  int v11; // r6@1
  signed int v12; // r5@1
  int v13; // r8@1
  int v14; // r9@1
  int v15; // r6@1
  signed int v16; // r7@1
  signed int v17; // r5@1
  bool v18; // nf@7
  unsigned __int8 v19; // vf@7
  signed int v20; // [sp+4h] [bp-3Ch]@1
  signed int v21; // [sp+8h] [bp-38h]@1
  int v22; // [sp+Ch] [bp-34h]@1
  int v23; // [sp+10h] [bp-30h]@7
  signed int v24; // [sp+14h] [bp-2Ch]@7
  int v25; // [sp+18h] [bp-28h]@7

  v3 = this;
  v4 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v7 = v5 + 1;
  v8 = v4 + 1;
  result = v4 - 1;
  --v5;
  v10 = result >> 4;
  v11 = ((v8 >> 4) + 1 - (result >> 4)) * ((v7 >> 4) + 1 - (v5 >> 4));
  v12 = v6-- + 1;
  v13 = 0;
  v14 = v6 >> 4;
  v21 = v6 >> 4;
  v20 = result >> 4;
  v15 = v11 * ((v12 >> 4) + 1 - (v6 >> 4));
  v22 = v12 >> 4;
  v16 = v8 >> 4;
  v17 = v5 >> 4;
  while ( v15 != v13 )
  {
    v23 = v10;
    v24 = v17;
    v25 = v14;
    LevelBuilder::setDirty(v3, (const SubChunkPos *)&v23, 0, 0);
    result = v10 + 1;
    ++v13;
    v19 = __OFSUB__(v10, v16);
    v18 = v10++ - v16 < 0;
    if ( !(v18 ^ v19) )
    {
      result = v21;
      if ( v14 >= v22 )
        ++v17;
      else
        result = v14 + 1;
      v10 = v20;
      v14 = result;
    }
  }
  return result;
}


RenderChunk *__fastcall LevelBuilder::setDirty(LevelBuilder *this, const SubChunkPos *a2, int a3, int a4)
{
  int v4; // r4@0
  LevelBuilder *v5; // r5@1
  int v6; // r7@1
  RenderChunk *result; // r0@1
  int v8; // r6@1
  const SubChunkPos *v9; // r8@1
  int v10; // r1@2
  signed int v11; // r2@2
  bool v12; // nf@2
  unsigned __int8 v13; // vf@2
  int v14; // r2@3
  int v15; // r9@6
  int v16; // r10@8
  int v17; // r0@10
  __int64 v18; // kr00_8@10
  int v19; // r3@10
  int v20; // r4@10
  int v21; // r9@10
  int v22; // r1@13
  int v23; // r2@13
  int v24; // r1@13
  int v25; // r6@14
  int v26; // r1@14
  int (__fastcall *v27)(int, char *); // r4@14
  unsigned __int8 *v28; // r4@15
  unsigned int v29; // r1@16
  unsigned int v30; // r1@21
  char v31; // [sp+4h] [bp-44h]@23
  char v32; // [sp+Ch] [bp-3Ch]@18
  char v33; // [sp+14h] [bp-34h]@14
  int v34; // [sp+20h] [bp-28h]@13
  int v35; // [sp+24h] [bp-24h]@13

  v5 = this;
  v6 = a4;
  result = (RenderChunk *)*((_DWORD *)this + 109);
  v8 = a3;
  v9 = a2;
  if ( result )
  {
    v10 = *((_DWORD *)v5 + 171);
    v11 = *(_DWORD *)(v10 + 468);
    v13 = __OFSUB__(v11, 1);
    v12 = v11 - 1 < 0;
    if ( v11 >= 1 )
    {
      v4 = *(_DWORD *)v9;
      v14 = *(_DWORD *)(v10 + 432);
      v13 = __OFSUB__(*(_DWORD *)v9, v14);
      v12 = *(_DWORD *)v9 - v14 < 0;
    }
    if ( !(v12 ^ v13) && v4 <= *(_DWORD *)(v10 + 444) )
      v15 = *((_DWORD *)v9 + 1);
      if ( v15 >= *(_DWORD *)(v10 + 436) && v15 <= *(_DWORD *)(v10 + 448) )
      {
        v16 = *((_DWORD *)v9 + 2);
        if ( v16 >= *(_DWORD *)(v10 + 440) && v16 <= *(_DWORD *)(v10 + 452) )
        {
          (*(void (**)(void))(*(_DWORD *)result + 36))();
          v17 = *((_DWORD *)v5 + 171);
          v18 = *(_QWORD *)(v17 + 432);
          v19 = v4 - v18;
          v20 = *(_DWORD *)(v17 + 480);
          v21 = v19
              + *(_DWORD *)(v17 + 456) * (v16 - *(_DWORD *)(v17 + 440))
              + *(_DWORD *)(v17 + 468) * (v15 - HIDWORD(v18));
          result = *(RenderChunk **)(v20 + 4 * v21);
          if ( !result )
          {
            if ( v8 != 1 )
              return result;
            v28 = (unsigned __int8 *)v5 + 728;
            do
            {
              do
                v30 = __ldrex(v28);
              while ( __strex(1u, v28) );
              __dmb();
            }
            while ( v30 );
            std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos const&>(
              &v31,
              (unsigned __int64 *)v5 + 86,
              (int)v9);
            goto LABEL_24;
          }
          if ( v6 == 1 )
            RenderChunk::setVisibilityChanged(result);
            result = *(RenderChunk **)(v20 + 4 * v21);
          v22 = *((_DWORD *)v5 + 170);
          v23 = *(_DWORD *)(v22 + 1552);
          v24 = *(_DWORD *)(v22 + 1556);
          v34 = v23;
          v35 = v24;
          RenderChunk::setDirty((int)result, &v34, v8);
          if ( v8
            || (v25 = *((_DWORD *)v5 + 109),
                v26 = *(_DWORD *)(v20 + 4 * v21),
                v27 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v25 + 28),
                RenderChunk::getPosition((RenderChunk *)&v33, v26),
                result = (RenderChunk *)v27(v25, &v33),
                result == (RenderChunk *)1) )
                v29 = __ldrex(v28);
            while ( v29 );
              &v32,
LABEL_24:
            result = 0;
            __dmb();
            *v28 = 0;
            return result;
        }
      }
  }
  return result;
}


signed int __fastcall LevelBuilder::onBlockChanged(LevelBuilder *a1, int a2, int a3, char *a4, char *a5, int a6, int a7)
{
  char *v7; // r6@1
  int v8; // r5@1
  signed int result; // r0@2
  int v10; // r8@3
  int v11; // r0@3
  int v12; // lr@3
  signed int v13; // r4@3
  int v14; // r12@3
  __int64 v15; // kr00_8@3
  int v16; // r7@3
  int v17; // r5@3
  bool v18; // zf@5
  signed int v19; // r1@5
  signed int v20; // r2@5
  int v21; // r11@5
  signed int v22; // r6@5
  signed int v23; // r5@5
  signed int v24; // r3@5
  int v25; // r4@5
  int v26; // r6@5
  signed int v27; // r9@5
  int v28; // r4@5
  unsigned int v29; // r2@5
  signed int v30; // r10@5
  int v31; // r11@5
  int v32; // r8@7
  int v33; // r5@7
  int v34; // r3@13
  bool v35; // nf@15
  unsigned __int8 v36; // vf@15
  int v37; // [sp+4h] [bp-4Ch]@5
  signed int v38; // [sp+8h] [bp-48h]@5
  signed int v39; // [sp+Ch] [bp-44h]@5
  int v40; // [sp+10h] [bp-40h]@5
  LevelBuilder *v41; // [sp+14h] [bp-3Ch]@1
  char v42; // [sp+18h] [bp-38h]@2
  char v43; // [sp+1Ch] [bp-34h]@1
  int v44; // [sp+20h] [bp-30h]@13
  signed int v45; // [sp+24h] [bp-2Ch]@13
  signed int v46; // [sp+28h] [bp-28h]@13

  v7 = a4;
  v41 = a1;
  v8 = a3;
  v43 = *a4;
  if ( LevelRendererCamera::affectsTessellation(&v43) == 1
    || (v42 = *a5, result = LevelRendererCamera::affectsTessellation(&v42), result == 1) )
  {
    v10 = a6;
    v11 = ClientInstance::getCameraTargetEntity(*(ClientInstance **)(*((_DWORD *)v41 + 170) + 4508));
    v12 = (unsigned __int8)*a5;
    v13 = 0;
    v14 = (unsigned __int8)*v7;
    v15 = *(_QWORD *)v8;
    v16 = 0;
    v17 = *(_DWORD *)(v8 + 8);
    if ( v14 != v12 )
      v13 = 1;
    v18 = v11 == a7;
    v19 = v15 - v13;
    result = 0;
    v20 = HIDWORD(v15) - v13;
    v40 = ((signed int)v15 + v13) >> 4;
    v21 = (((HIDWORD(v15) + v13) >> 4) + 1 - ((HIDWORD(v15) - v13) >> 4)) * (v40 + 1 - (((signed int)v15 - v13) >> 4));
    v22 = v17 - v13;
    v23 = v17 + v13;
    v24 = v22 >> 4;
    v25 = (v23 >> 4) + 1 - (v22 >> 4);
    v26 = v19 >> 4;
    v27 = v20 >> 4;
    v28 = v21 * v25;
    v39 = v23 >> 4;
    v38 = v24;
    v29 = v10 & 0x10000;
    v30 = v24;
    v37 = v19 >> 4;
    v31 = Block::mSolid[v12];
    if ( v18 )
      result = 1;
    v32 = Block::mSolid[v14];
    v33 = result | (v29 >> 16);
    while ( v28 != v16 )
    {
      v34 = 0;
      v44 = v26;
      v45 = v27;
      v46 = v30;
      if ( v32 != v31 )
        v34 = 1;
      LevelBuilder::setDirty(v41, (const SubChunkPos *)&v44, v33, v34);
      result = v26 + 1;
      ++v16;
      v36 = __OFSUB__(v26, v40);
      v35 = v26++ - v40 < 0;
      if ( !(v35 ^ v36) )
      {
        result = v38;
        if ( v30 >= v39 )
          ++v27;
        else
          result = v30 + 1;
        v26 = v37;
        v30 = result;
      }
    }
  }
  return result;
}


signed int __fastcall LevelBuilder::_recaptureViewAreaDimensions(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // kr00_4@3
  int v5; // r6@3
  int v14; // r8@4
  signed int result; // r0@5

  v1 = this;
  v2 = *((_DWORD *)this + 171);
  v3 = *(_DWORD *)(v2 + 456);
  if ( v3 < *(_DWORD *)(v2 + 464) )
    v3 = *(_DWORD *)(v2 + 464);
  *((_DWORD *)v1 + 120) = v3;
  v4 = LevelRendererCamera::getDimensionHeight((LevelRendererCamera *)v2);
  *((_WORD *)v1 + 242) = v4 / 16;
  v5 = *((_DWORD *)v1 + 109);
  if ( v5 )
  {
    __asm { VMOV.F32        S0, #0.25 }
    _R0 = &mce::Math::PI;
    __asm
    {
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    }
    _R0 = sinf(_R0);
    _R1 = *((_DWORD *)v1 + 171);
      VMOV            S4, R0
      VLDR            S2, =0.0625
    v14 = *((_DWORD *)v1 + 120);
      VLDR            S0, [R1,#0x170]
      VMUL.F32        S2, S4, S2
      VCVT.F32.S32    S0, S0
    _R0 = ceilf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v5 + 20))(v5, v14, v4 / 16, 3 * _R0);
  }
  result = 1;
  *((_BYTE *)v1 + 888) = 1;
  return result;
}


int __fastcall LevelBuilder::_shouldCullThisFrame(LevelBuilder *this, const Vec3 *a2, const Vec3 *a3, int a4)
{
  int v6; // r7@1
  Option *v8; // r0@1
  int result; // r0@5
  int v16; // r0@20
  int v17; // r1@20
  char *v27; // r0@33
  int v28; // r1@37
  int v29; // r2@37
  int v30; // r7@37
  __int64 v31; // kr10_8@37
  signed int v35; // r2@37
  signed int v40; // r0@37
  int v41; // [sp+0h] [bp-50h]@20
  int v42; // [sp+4h] [bp-4Ch]@22
  int v43; // [sp+8h] [bp-48h]@20
  int v44; // [sp+Ch] [bp-44h]@22
  char v45; // [sp+10h] [bp-40h]@20
  int v46; // [sp+14h] [bp-3Ch]@20
  char v47; // [sp+1Ch] [bp-34h]@20
  int v48; // [sp+20h] [bp-30h]@20

  _R4 = this;
  _R5 = a2;
  v6 = a4;
  _R6 = a3;
  v8 = (Option *)Options::get(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 171) + 1256) + 4500), 91);
  if ( Option::getBool(v8) != 1 )
    return 1;
  if ( *((_BYTE *)_R4 + 888) )
  {
    *((_BYTE *)_R4 + 888) = 0;
LABEL_8:
    *((_DWORD *)_R4 + 110) = *(_DWORD *)_R5;
    *((_DWORD *)_R4 + 111) = *((_DWORD *)_R5 + 1);
    *((_DWORD *)_R4 + 112) = *((_DWORD *)_R5 + 2);
  }
  __asm { VLDR            S16, [R4,#0x1DC] }
  _R0 = LevelRendererCamera::getFogEndDistance(*((LevelRendererCamera **)_R4 + 171));
  __asm
    VMOV            S0, R0
    VMOV.F32        S2, #8.0
    VSUB.F32        S0, S16, S0
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    *((_DWORD *)_R4 + 119) = LevelRendererCamera::getFogEndDistance(*((LevelRendererCamera **)_R4 + 171));
  _R8 = (int)_R4 + 440;
    VLDR            S0, =3.4028e38
    VLDR            S6, [R8]
    VCMPE.F32       S6, S0
  if ( _ZF || !*((_DWORD *)_R4 + 221) )
    goto LABEL_8;
    VLDR            S4, [R5]
    VLDR            S2, [R5,#4]
    VLDR            S8, [R4,#0x1BC]
    VSUB.F32        S6, S4, S6
    VLDR            S0, [R5,#8]
    VSUB.F32        S8, S2, S8
    VLDR            S10, [R4,#0x1C0]
    VSUB.F32        S10, S0, S10
    VMUL.F32        S6, S6, S6
    VMUL.F32        S8, S8, S8
    VMUL.F32        S10, S10, S10
    VADD.F32        S6, S8, S6
    VMOV.F32        S8, #16.0
    VADD.F32        S6, S6, S10
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
  if ( !(_NF ^ _VF) )
    __asm { VSTR            S4, [R4,#0x1B8] }
    result = 1;
    __asm
    {
      VSTR            S2, [R4,#0x1BC]
      VSTR            S0, [R4,#0x1C0]
    }
    return result;
  if ( *((_BYTE *)_R4 + 889)
    && *((_DWORD *)_R4 + 4) == (signed int)((*((_QWORD *)_R4 + 61) >> 32) - *((_QWORD *)_R4 + 61)) >> 2 )
      VSTR            S4, [R4,#0x1B8]
    *((_BYTE *)_R4 + 889) = 0;
  if ( v6 != 1 )
    BlockPos::BlockPos((int)&v47, (int)_R5);
    BlockPos::BlockPos((int)&v45, (int)_R4 + 440);
    ChunkPos::ChunkPos((ChunkPos *)&v43, (const BlockPos *)&v47);
    ChunkPos::ChunkPos((ChunkPos *)&v41, (const BlockPos *)&v45);
    v16 = v46;
    v17 = v48;
    if ( v43 == v41 && (v16 ^ (unsigned int)v17) <= 0xF && v44 == v42 )
      return 0;
    VLDR            S2, [R4,#0x1C4]
    VMOV.F32        S16, #0.5
    VLDR            S4, [R4,#0x1C8]
    VLDR            S6, [R6]
    VMUL.F32        S12, S2, S2
    VLDR            S8, [R6,#4]
    VMUL.F32        S14, S4, S4
    VMUL.F32        S1, S6, S6
    VLDR            S0, [R4,#0x1CC]
    VMUL.F32        S3, S8, S8
    VLDR            S10, [R6,#8]
    VMUL.F32        S5, S0, S0
    VADD.F32        S12, S14, S12
    VMUL.F32        S14, S10, S10
    VADD.F32        S1, S3, S1
    VADD.F32        S12, S12, S5
    VADD.F32        S14, S1, S14
    VSQRT.F32       S1, S12
    VSQRT.F32       S12, S14
    VCMPE.F32       S1, S16
  if ( _NF ^ _VF )
      VLDR            S0, =0.0001
      VCMPE.F32       S12, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R1 = *(&Vec3::ZERO + 1);
      _R2 = Vec3::ZERO;
      _R0 = dword_2822498;
    else
      __asm
      {
        VDIV.F32        S0, S10, S12
        VDIV.F32        S2, S8, S12
        VDIV.F32        S4, S6, S12
        VMOV            R0, S0
        VMOV            R1, S2
        VMOV            R2, S4
      }
    *((_DWORD *)_R4 + 113) = _R2;
    *((_DWORD *)_R4 + 114) = _R1;
    *((_DWORD *)_R4 + 115) = _R0;
    VLDR            S14, =0.0001
    VCMPE.F32       S12, S14
    _R6 = *(&Vec3::ZERO + 1);
    _R7 = Vec3::ZERO;
    _R5 = dword_2822498;
  else
      VDIV.F32        S10, S10, S12
      VDIV.F32        S8, S8, S12
      VDIV.F32        S6, S6, S12
      VMOV            R5, S10
      VMOV            R6, S8
      VMOV            R7, S6
    VMOV            S6, R7
    VMOV            S8, R6
    VMUL.F32        S2, S2, S6
    VMUL.F32        S4, S4, S8
    VMOV            S6, R5
  __dmb();
    VMUL.F32        S0, S0, S6
    VADD.F32        S2, S4, S2
    VADD.F32        S18, S2, S0
  if ( _ZF && j___cxa_guard_acquire((unsigned int *)&byte_27E4D08) )
    _R0 = &mce::Math::DEGRAD;
      VLDR            S0, [R0]
      VMUL.F32        S0, S0, S16
      VMOV            R0, S0
    dword_27E4D04 = cosf(_R0);
    j___cxa_guard_release((unsigned int *)&byte_27E4D08);
  _R0 = &unk_27E4D00;
    VLDR            S0, [R0,#4]
    VCMPE.F32       S18, S0
    *((_DWORD *)_R4 + 113) = _R7;
    *((_DWORD *)_R4 + 114) = _R6;
    *((_DWORD *)_R4 + 115) = _R5;
  v27 = LevelRendererCamera::getLevelRendererArea(*((LevelRendererCamera **)_R4 + 171));
  v28 = *((_DWORD *)v27 + 12);
  v29 = *((_DWORD *)v27 + 13);
  v30 = *((_DWORD *)v27 + 15);
  v31 = *((_QWORD *)v27 + 8);
  _R0 = (*((_QWORD *)v27 + 8) >> 32) + *((_DWORD *)v27 + 14);
  _R1 = v28 + v30;
    VMOV            S0, R1
    VMOV            S2, R0
  _R0 = v31 + v29;
  __asm { VCVT.F32.S32    S0, S0 }
  v35 = 0;
    VCVT.F32.S32    S2, S2
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
    VLDR            S6, [R4,#0x1D0]
    VLDR            S8, [R4,#0x1D8]
    VCVTR.S32.F32   S6, S6
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VCVTR.S32.F32   S8, S8
    VMUL.F32        S4, S4, S16
    VMOV            R3, S6
    VSTR            S0, [R4,#0x1D0]
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S10, S2
    VMOV            R1, S8
    VSTR            S4, [R4,#0x1D4]
    VSTR            S2, [R4,#0x1D8]
    VMOV            R0, S10
    VMOV            R1, S0
  v40 = 0;
  if ( !_ZF )
    v40 = 1;
  if ( _R1 != _R3 )
    v35 = 1;
  return v40 | v35;
}


signed int __fastcall LevelBuilder::onAreaChanged(LevelBuilder *this, BlockSource *a2, const BlockPos *a3, const BlockPos *a4)
{
  LevelBuilder *v4; // r4@1
  signed int result; // r0@1
  signed int v6; // r1@1
  signed int v7; // r5@1
  int v8; // r6@1
  signed int v9; // r2@1
  int v10; // r11@1
  signed int v11; // r5@1
  int v12; // r8@1
  int v13; // r9@1
  int v14; // r6@1
  signed int v15; // r7@1
  bool v16; // nf@7
  unsigned __int8 v17; // vf@7
  int v18; // [sp+4h] [bp-3Ch]@1
  signed int v19; // [sp+8h] [bp-38h]@1
  int v20; // [sp+Ch] [bp-34h]@1
  int v21; // [sp+10h] [bp-30h]@7
  signed int v22; // [sp+14h] [bp-2Ch]@7
  int v23; // [sp+18h] [bp-28h]@7

  v4 = this;
  result = *(_QWORD *)a4;
  v7 = *(_QWORD *)a3 >> 32;
  v6 = *(_QWORD *)a3;
  v8 = ((signed int)(*(_QWORD *)a4 >> 32) >> 4) + 1 - (v7 >> 4);
  v9 = *((_DWORD *)a3 + 2);
  v10 = v6 >> 4;
  v11 = v7 >> 4;
  v12 = 0;
  v13 = v9 >> 4;
  v20 = *((_DWORD *)a4 + 2) >> 4;
  v19 = v9 >> 4;
  v18 = v6 >> 4;
  v14 = (v20 + 1 - (v9 >> 4)) * ((result >> 4) + 1 - (v6 >> 4)) * v8;
  v15 = result >> 4;
  while ( v14 != v12 )
  {
    v21 = v10;
    v22 = v11;
    v23 = v13;
    LevelBuilder::setDirty(v4, (const SubChunkPos *)&v21, 0, 1);
    result = v10 + 1;
    ++v12;
    v17 = __OFSUB__(v10, v15);
    v16 = v10++ - v15 < 0;
    if ( !(v16 ^ v17) )
    {
      result = v19;
      if ( v13 >= v20 )
        ++v11;
      else
        result = v13 + 1;
      v10 = v18;
      v13 = result;
    }
  }
  return result;
}


int __fastcall LevelBuilder::getFrustumAABB(float a1, float a2, int _R2, int _R3, int a5, int a6)
{
  float v11; // [sp+0h] [bp-20h]@1
  float v12; // [sp+Ch] [bp-14h]@1

  __asm
  {
    VMOV            S0, R2
    VLDR            S4, [SP,#0x20+arg_0]
    VMOV            S2, R3
    VLDR            S6, [SP,#0x20+arg_4]
    VSUB.F32        S10, S4, S0
    VSUB.F32        S8, S2, S0
    VADD.F32        S2, S2, S0
    VSUB.F32        S12, S6, S0
    VADD.F32        S4, S4, S0
    VADD.F32        S0, S6, S0
    VSTR            S8, [SP,#0x20+var_14]
    VSTR            S10, [SP,#0x20+var_10]
    VSTR            S2, [SP,#0x20+var_20]
    VSTR            S4, [SP,#0x20+var_1C]
    VSTR            S12, [SP,#0x20+var_C]
    VSTR            S0, [SP,#0x20+var_18]
  }
  return AABB::AABB(SLODWORD(a1), (int)&v12, (int)&v11);
}


unsigned int *__fastcall LevelBuilder::_buildRenderChunks(LevelBuilder *this, const Vec3 *a2)
{
  LevelBuilder *v2; // r4@1
  const Vec3 *v3; // r5@1
  int v4; // r7@1
  unsigned int v5; // r1@2
  unsigned int *result; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  unsigned int v9; // r2@7
  signed int v10; // r12@7
  int v11; // r1@9
  int v12; // r8@14
  unsigned int *v13; // r6@15
  int v14; // r6@23
  unsigned int *v15; // r0@24
  unsigned int v16; // r1@26
  int v17; // r0@29
  unsigned int *v18; // r2@30
  unsigned int v19; // r1@32
  int v20; // r8@37
  int v21; // r1@37
  int v22; // r2@37
  __int64 v23; // kr00_8@37
  unsigned int *v24; // r0@38
  unsigned int v25; // r1@40
  _DWORD *v26; // r0@43
  int v27; // r12@43
  int v28; // r2@43
  int v29; // r3@43
  int v30; // r4@47
  unsigned int *v31; // r1@48
  unsigned int *v32; // r5@54
  char v33; // [sp+8h] [bp-58h]@43
  int (*v34)(void); // [sp+10h] [bp-50h]@43
  int v35; // [sp+18h] [bp-48h]@37
  int v36; // [sp+1Ch] [bp-44h]@37
  int v37; // [sp+20h] [bp-40h]@37
  _DWORD *v38; // [sp+28h] [bp-38h]@43
  int (*v39)(void); // [sp+30h] [bp-30h]@43
  signed int (__fastcall *v40)(int **); // [sp+34h] [bp-2Ch]@43
  int v41; // [sp+38h] [bp-28h]@23
  int v42; // [sp+3Ch] [bp-24h]@23

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 224);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 4);
    result = (unsigned int *)(v4 + 4);
    while ( v5 )
    {
      __dmb();
      v7 = __ldrex(result);
      if ( v7 == v5 )
      {
        v8 = __strex(v5 + 1, result);
        v5 = v7;
        if ( !v8 )
        {
          __dmb();
          v9 = *result;
          v10 = *result;
          if ( *result )
            v10 = 1;
          v11 = *((_DWORD *)v2 + 223) != 0;
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(result);
            while ( __strex(v9 - 1, result) );
          }
          else
            *result = v9 - 1;
          v12 = v10 & v11;
          if ( v9 == 1 )
            v13 = (unsigned int *)(v4 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
            if ( &pthread_create )
            {
              __dmb();
              do
                result = (unsigned int *)__ldrex(v13);
              while ( __strex((unsigned int)result - 1, v13) );
            }
            else
              result = (unsigned int *)(*v13)--;
            if ( result == (unsigned int *)1 )
              result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
          if ( v12 )
            return result;
          break;
        }
      }
      else
        __clrex();
    }
  }
  j__ZNSt12__shared_ptrIbLN9__gnu_cxx12_Lock_policyE2EEC2ISaIbEJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v41);
  *((_DWORD *)v2 + 223) = v41;
  v14 = v42;
  if ( v42 )
    v15 = (unsigned int *)(v42 + 8);
    if ( &pthread_create )
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 + 1, v15) );
    else
      ++*v15;
  v17 = *((_DWORD *)v2 + 224);
  if ( v17 )
    v18 = (unsigned int *)(v17 + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      (*(void (**)(void))(*(_DWORD *)v17 + 12))();
  *((_DWORD *)v2 + 224) = v14;
  v20 = *(_DWORD *)(*((_DWORD *)v2 + 170) + 4524);
  v21 = *((_DWORD *)v3 + 1);
  v22 = *((_DWORD *)v3 + 2);
  v35 = *(_DWORD *)v3;
  v36 = v21;
  v37 = v22;
  v23 = *(_QWORD *)&v41;
    v24 = (unsigned int *)(v42 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  v26 = operator new(0x18u);
  *v26 = v2;
  v27 = (int)(v26 + 1);
  v28 = v36;
  v29 = v37;
  *(_DWORD *)v27 = v35;
  *(_DWORD *)(v27 + 4) = v28;
  *(_DWORD *)(v27 + 8) = v29;
  *(_QWORD *)(v27 + 12) = v23;
  v38 = v26;
  v39 = (int (*)(void))sub_13561BC;
  v40 = sub_1355C9C;
  v34 = 0;
  result = (unsigned int *)TaskGroup::queue(v20, (int)&v38, (int)&v33, 0x190u, 0);
  if ( v34 )
    result = (unsigned int *)v34();
  if ( v39 )
    result = (unsigned int *)v39();
  v30 = v42;
    v31 = (unsigned int *)(v42 + 4);
        result = (unsigned int *)__ldrex(v31);
      while ( __strex((unsigned int)result - 1, v31) );
      result = (unsigned int *)(*v31)--;
    if ( result == (unsigned int *)1 )
      v32 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
      if ( &pthread_create )
        __dmb();
        do
          result = (unsigned int *)__ldrex(v32);
        while ( __strex((unsigned int)result - 1, v32) );
        result = (unsigned int *)(*v32)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
  return result;
}


void __fastcall LevelBuilder::recreateBuilders(LevelBuilder *this)
{
  int v1; // r7@0
  LevelBuilder *v2; // r4@1
  BlockSource *v3; // r6@1
  bool v4; // zf@1
  ChunkSource *v5; // r0@4
  __int64 v6; // r0@4
  RenderChunkBuilder *v7; // r0@7
  int i; // r6@9
  __int64 v9; // r0@10
  RenderChunkSorter *v10; // r0@13
  RenderChunkSorter *v11; // [sp+0h] [bp-28h]@10
  RenderChunkBuilder *v12; // [sp+4h] [bp-24h]@4

  v2 = this;
  v3 = *(BlockSource **)(*((_DWORD *)this + 171) + 1244);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = *((_DWORD *)this + 4);
    v4 = v1 == 0;
  }
  if ( !v4 )
    do
    {
      v5 = (ChunkSource *)BlockSource::getChunkSource(v3);
      std::make_unique<RenderChunkBuilder,ChunkSource &,std::shared_ptr<RenderChunkSorterSharedInfo> &>(
        &v12,
        v5,
        (int)v2 + 904);
      v6 = *(_QWORD *)((char *)v2 + 492);
      if ( (_DWORD)v6 == HIDWORD(v6) )
      {
        std::vector<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>,std::allocator<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>>::_M_emplace_back_aux<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>(
          (_QWORD *)v2 + 61,
          (int *)&v12);
        if ( v12 )
        {
          v7 = RenderChunkBuilder::~RenderChunkBuilder(v12);
          operator delete((void *)v7);
        }
      }
      else
        HIDWORD(v6) = v12;
        v12 = 0;
        *(_DWORD *)v6 = HIDWORD(v6);
        *((_DWORD *)v2 + 123) = v6 + 4;
      --v1;
      v12 = 0;
    }
    while ( v1 );
    for ( i = *((_DWORD *)v2 + 4); i; v11 = 0 )
      std::make_unique<RenderChunkSorter,std::shared_ptr<RenderChunkSorterSharedInfo> &>(&v11, (int)v2 + 904);
      v9 = *((_QWORD *)v2 + 63);
      if ( (_DWORD)v9 == HIDWORD(v9) )
        std::vector<std::unique_ptr<RenderChunkSorter,std::default_delete<RenderChunkSorter>>,std::allocator<std::unique_ptr<RenderChunkSorter,std::default_delete<RenderChunkSorter>>>>::_M_emplace_back_aux<std::unique_ptr<RenderChunkSorter,std::default_delete<RenderChunkSorter>>>(
          (LevelBuilder *)((char *)v2 + 500),
          (int *)&v11);
        if ( v11 )
          v10 = RenderChunkSorter::~RenderChunkSorter(v11);
          operator delete((void *)v10);
        HIDWORD(v9) = v11;
        v11 = 0;
        *(_DWORD *)v9 = HIDWORD(v9);
        *((_DWORD *)v2 + 126) = v9 + 4;
      --i;
}


void __fastcall LevelBuilder::recreateBuilders(LevelBuilder *this)
{
  LevelBuilder::recreateBuilders(this);
}


int __fastcall LevelBuilder::getCameraDeltaToUpdateArea(LevelBuilder *this)
{
  int result; // r0@5

  __asm
  {
    VMOV.F32        S2, #8.0
    VMOV.F32        S0, #16.0
  }
  _R0 = *(_DWORD *)(*((_DWORD *)this + 171) + 368);
    VMOV            S4, R0
    VCVT.F32.S32    S4, S4
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S2 }
    VLDR            S2, =0.0625
    VMUL.F32        S2, S4, S2
  __asm { VMOV            R0, S0 }
  return result;
}


signed int __fastcall LevelBuilder::_uploadFinishedRenderChunk(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  RenderChunkBuilder *v5; // r0@5
  RenderChunkBuilder *v7; // [sp+4h] [bp-34h]@1
  char v8; // [sp+8h] [bp-30h]@6
  char v9; // [sp+10h] [bp-28h]@6
  char v10; // [sp+1Ch] [bp-1Ch]@6

  v2 = a2;
  v3 = a1;
  RenderChunk::endRebuild((RenderChunk *)&v7, *a2);
  v4 = *(_QWORD *)(v3 + 492);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    std::vector<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>,std::allocator<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>>::_M_emplace_back_aux<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>(
      (_QWORD *)(v3 + 488),
      (int *)&v7);
  }
  else
    HIDWORD(v4) = v7;
    v7 = 0;
    *(_DWORD *)v4 = HIDWORD(v4);
    *(_DWORD *)(v3 + 492) = v4 + 4;
  if ( v7 )
    v5 = RenderChunkBuilder::~RenderChunkBuilder(v7);
    operator delete((void *)v5);
  v7 = 0;
  RenderChunk::getPosition((RenderChunk *)&v9, *v2);
  SubChunkPos::SubChunkPos((SubChunkPos *)&v10, (const BlockPos *)&v9);
  return std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos&>(
           &v8,
           (unsigned __int64 *)(v3 + 808),
           (int)&v10);
}


signed int __fastcall LevelBuilder::_trackBuiltChunk(int a1, int *a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-30h]@1
  char v5; // [sp+8h] [bp-28h]@1
  char v6; // [sp+14h] [bp-1Ch]@1

  v2 = a1;
  RenderChunk::getPosition((RenderChunk *)&v5, *a2);
  SubChunkPos::SubChunkPos((SubChunkPos *)&v6, (const BlockPos *)&v5);
  return std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos&>(
           &v4,
           (unsigned __int64 *)(v2 + 808),
           (int)&v6);
}


signed int __fastcall LevelBuilder::setDirty(LevelBuilder *this, const BlockPos *a2, const BlockPos *a3, int a4, int a5)
{
  LevelBuilder *v5; // r5@1
  signed int result; // r0@1
  signed int v7; // r8@1
  int v8; // r4@1
  int v9; // r3@1
  signed int v10; // r1@1
  int v11; // r6@1
  int v12; // r10@1
  signed int v13; // r7@1
  signed int v14; // r9@1
  int v15; // r11@1
  int v16; // r8@1
  int v17; // r6@1
  bool v18; // nf@7
  unsigned __int8 v19; // vf@7
  int v20; // [sp+4h] [bp-3Ch]@1
  signed int v21; // [sp+8h] [bp-38h]@1
  int v22; // [sp+Ch] [bp-34h]@1
  int v23; // [sp+10h] [bp-30h]@7
  signed int v24; // [sp+14h] [bp-2Ch]@7
  int v25; // [sp+18h] [bp-28h]@7

  v5 = this;
  result = *(_QWORD *)a2 >> 32;
  v7 = *(_QWORD *)a2;
  v8 = a4;
  v9 = ((signed int)(*(_QWORD *)a3 >> 32) >> 4) + 1 - (result >> 4);
  v10 = *((_DWORD *)a2 + 2);
  v11 = ((signed int)*(_QWORD *)a3 >> 4) + 1 - (v7 >> 4);
  v12 = v7 >> 4;
  v13 = (signed int)*(_QWORD *)a3 >> 4;
  v14 = result >> 4;
  v15 = 0;
  v16 = v10 >> 4;
  v22 = *((_DWORD *)a3 + 2) >> 4;
  v21 = v10 >> 4;
  v17 = (v22 + 1 - (v10 >> 4)) * v9 * v11;
  v20 = v12;
  while ( v17 != v15 )
  {
    v23 = v12;
    v24 = v14;
    v25 = v16;
    LevelBuilder::setDirty(v5, (const SubChunkPos *)&v23, v8, a5);
    result = v12 + 1;
    ++v15;
    v19 = __OFSUB__(v12, v13);
    v18 = v12++ - v13 < 0;
    if ( !(v18 ^ v19) )
    {
      result = v21;
      if ( v16 >= v22 )
        ++v14;
      else
        result = v16 + 1;
      v12 = v20;
      v16 = result;
    }
  }
  return result;
}


signed int __fastcall LevelBuilder::cullerIsVisible(LevelBuilder *this, const AABB *a2)
{
  signed int result; // r0@4
  float v9; // [sp+0h] [bp-28h]@1
  float v10; // [sp+Ch] [bp-1Ch]@1

  _R4 = this;
  _R5 = a2;
  __asm
  {
    VLDR            S0, [R4,#0xD8]
    VLDR            S6, [R5]
    VLDR            S2, [R4,#0xDC]
    VLDR            S8, [R5,#4]
    VSUB.F32        S6, S6, S0
    VLDR            S4, [R4,#0xE0]
    VLDR            S10, [R5,#8]
    VSUB.F32        S8, S8, S2
    VSUB.F32        S10, S10, S4
    VSTR            S6, [SP,#0x28+var_1C]
    VSTR            S8, [SP,#0x28+var_18]
    VSTR            S10, [SP,#0x28+var_14]
    VLDR            S6, [R5,#0xC]
    VLDR            S8, [R5,#0x10]
    VLDR            S10, [R5,#0x14]
    VSUB.F32        S0, S6, S0
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x28+var_28]
    VSTR            S2, [SP,#0x28+var_24]
    VSTR            S4, [SP,#0x28+var_20]
  }
  if ( Frustum::cubeInFrustum((int)this + 24, (int)&v10, (int)&v9) )
    goto LABEL_8;
  if ( !*((_BYTE *)_R4 + 20) )
    goto LABEL_9;
    VLDR            S0, [R4,#0x1A4]
    VLDR            S2, [R4,#0x1A8]
    VLDR            S4, [R4,#0x1AC]
  if ( Frustum::cubeInFrustum((int)_R4 + 228, (int)&v10, (int)&v9) )
LABEL_8:
    result = 1;
  else
LABEL_9:
    result = 0;
  return result;
}


void __fastcall LevelBuilder::onAppSuspended(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  __int64 v2; // kr00_8@1
  RenderChunkBuilder **v3; // r5@2
  RenderChunkBuilder *v4; // r0@4
  __int64 v5; // kr08_8@6
  RenderChunkSorter **v6; // r5@7
  RenderChunkSorter *v7; // r0@9

  v1 = this;
  v2 = *((_QWORD *)this + 61);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (RenderChunkBuilder **)v2;
    do
    {
      if ( *v3 )
      {
        v4 = RenderChunkBuilder::~RenderChunkBuilder(*v3);
        operator delete((void *)v4);
      }
      *v3 = 0;
      ++v3;
    }
    while ( (RenderChunkBuilder **)HIDWORD(v2) != v3 );
  }
  *((_DWORD *)v1 + 123) = v2;
  v5 = *(_QWORD *)((char *)v1 + 500);
  if ( HIDWORD(v5) != (_DWORD)v5 )
    v6 = (RenderChunkSorter **)v5;
      if ( *v6 )
        v7 = RenderChunkSorter::~RenderChunkSorter(*v6);
        operator delete((void *)v7);
      *v6 = 0;
      ++v6;
    while ( (RenderChunkSorter **)HIDWORD(v5) != v6 );
  *((_DWORD *)v1 + 126) = v5;
}


RenderChunk *__fastcall LevelBuilder::setDirty(LevelBuilder *this, const BlockPos *a2, int a3, int a4)
{
  __int64 v4; // kr00_8@1
  signed int v5; // r4@1
  int v7; // [sp+4h] [bp-14h]@1
  int v8; // [sp+8h] [bp-10h]@1
  int v9; // [sp+Ch] [bp-Ch]@1

  v4 = *(_QWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  v7 = (signed int)*(_QWORD *)a2 >> 4;
  v8 = SHIDWORD(v4) >> 4;
  v9 = v5 >> 4;
  return LevelBuilder::setDirty(this, (const SubChunkPos *)&v7, a3, a4);
}


int __fastcall LevelBuilder::onLowMemory(int result)
{
  __int64 i; // r4@1
  RenderChunkBuilder *v2; // t1@2

  for ( i = *(_QWORD *)(result + 488); HIDWORD(i) != (_DWORD)i; result = RenderChunkBuilder::trim(v2) )
  {
    v2 = *(RenderChunkBuilder **)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


int __fastcall LevelBuilder::_prepareRenderChunkRenderList(LevelBuilder *this, const Vec3 *a2, int a3)
{
  LevelBuilder *v3; // r5@1
  int result; // r0@1
  Option *v10; // r0@2
  unsigned __int8 *v11; // r9@2
  int v12; // r0@2
  int v13; // r6@3
  __int64 v14; // kr08_8@5
  unsigned int v15; // r7@5
  unsigned int v16; // r5@5
  LevelBuilder **v17; // r0@5
  LevelBuilder *v18; // r8@6
  LevelBuilder *v19; // r4@6
  LevelBuilder *v21; // r11@13
  LevelRendererCamera *v24; // r4@21
  int *v25; // r0@21
  RenderChunk *v26; // r7@21
  unsigned int *v27; // r0@22
  unsigned int v28; // r1@23
  __int64 v29; // r0@25
  unsigned int v30; // r0@27
  void *v31; // r10@30
  char *v32; // r5@30
  unsigned int v33; // r2@30
  unsigned int v34; // r1@32
  unsigned int v35; // r4@32
  RenderChunk **v36; // r8@39
  int v37; // r8@41
  unsigned int v38; // r0@46
  BlockSource *v39; // r4@52
  int v40; // r5@52
  unsigned int *v42; // r0@56
  unsigned int v43; // r1@57
  RenderChunk *v44; // r4@59
  bool v45; // zf@63
  int v46; // r11@66
  int v47; // r8@66
  LevelBuilder *v48; // r6@66
  LevelBuilder *v49; // r0@66
  LevelBuilder *v50; // r5@67
  int v51; // r10@69
  int v52; // r1@70
  int v53; // r1@73
  int v54; // r1@74
  int v55; // r4@82
  __int64 v56; // r0@90
  int *v57; // r8@91
  int v59; // r7@93
  signed int v60; // r3@94
  int v62; // r4@98
  int v63; // r0@99
  int v65; // r6@100
  RenderChunk *v66; // t1@101
  int v67; // [sp+Ch] [bp-ECh]@2
  LevelBuilder *v68; // [sp+10h] [bp-E8h]@2
  int v69; // [sp+18h] [bp-E0h]@2
  unsigned __int64 *v70; // [sp+1Ch] [bp-DCh]@2
  unsigned __int64 *v71; // [sp+20h] [bp-D8h]@2
  int v72; // [sp+24h] [bp-D4h]@2
  int v73; // [sp+28h] [bp-D0h]@5
  int v74; // [sp+2Ch] [bp-CCh]@2
  int v75; // [sp+30h] [bp-C8h]@2
  int v76; // [sp+34h] [bp-C4h]@5
  int v77; // [sp+38h] [bp-C0h]@1
  int v78; // [sp+3Ch] [bp-BCh]@3
  int v79; // [sp+40h] [bp-B8h]@3
  int v80; // [sp+44h] [bp-B4h]@74
  const Vec3 *v81; // [sp+48h] [bp-B0h]@1
  int v82; // [sp+4Ch] [bp-ACh]@4
  char v83; // [sp+50h] [bp-A8h]@29
  char v84; // [sp+58h] [bp-A0h]@48
  __int64 v85; // [sp+60h] [bp-98h]@45
  char v86; // [sp+68h] [bp-90h]@21
  RenderChunk *v87; // [sp+74h] [bp-84h]@21
  float v88; // [sp+78h] [bp-80h]@20
  float v91; // [sp+84h] [bp-74h]@15
  char v94; // [sp+90h] [bp-68h]@52
  int v95; // [sp+94h] [bp-64h]@52
  float v96; // [sp+9Ch] [bp-5Ch]@18

  v3 = this;
  v81 = a2;
  result = *((_DWORD *)this + 109);
  v77 = (int)v3;
  if ( !result )
    return result;
  *((_DWORD *)v3 + 213) = *((_DWORD *)v3 + 212);
  v67 = a3;
  v70 = (unsigned __int64 *)((char *)v3 + 872);
  (*(void (**)(void))(*(_DWORD *)result + 16))();
  *((_DWORD *)v3 + 221) = -1431655765 * ((signed int)((*((_QWORD *)v3 + 109) >> 32) - *((_QWORD *)v3 + 109)) >> 2);
  _R0 = (LevelRendererCamera *)*((_DWORD *)v3 + 171);
  __asm { VLDR            S16, [R0,#0x174] }
  _R0 = LevelRendererCamera::getFogEndDistance(_R0);
  __asm
  {
    VMOV            S2, R0
    VLDR            S0, =13.856
    VADD.F32        S20, S2, S0
  }
  v10 = (Option *)Options::get(*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v3 + 171) + 1256) + 4500), 91);
  v75 = Option::getBool(v10);
  v71 = (unsigned __int64 *)((char *)v3 + 688);
  v69 = (int)v3 + 228;
  v72 = (int)v3 + 24;
  __asm { VMUL.F32        S18, S16, S16 }
  v68 = (LevelBuilder *)((char *)v3 + 788);
    VMUL.F32        S20, S20, S20
    VMOV.F32        S22, #16.0
    VLDR            S16, =0.0
    VMOV.F32        S24, #8.0
  v11 = (unsigned __int8 *)v3 + 728;
  v74 = 0;
  v12 = 0;
  do
    while ( 2 )
    {
      v79 = v12;
      v13 = *((_QWORD *)v3 + 109);
      v78 = *((_QWORD *)v3 + 109) >> 32;
      if ( v13 == v78 )
        goto LABEL_81;
      do
      {
        v82 = v13;
        if ( !v79 )
        {
          v14 = *(_QWORD *)v13;
          v76 = *(_DWORD *)(v13 + 8);
          v15 = *(_DWORD *)(v77 + 784);
          v16 = 8976890 * v14 + 981131 * HIDWORD(v14) + v76;
          v73 = *(_DWORD *)(v77 + 780);
          v17 = *(LevelBuilder ***)(*(_DWORD *)(v77 + 780) + 4 * (v16 % v15));
          if ( v17 )
          {
            v18 = *v17;
            v19 = (LevelBuilder *)*((_DWORD *)*v17 + 4);
            while ( 1 )
            {
              _ZF = v19 == (LevelBuilder *)v16;
              if ( v19 == (LevelBuilder *)v16 )
                _ZF = (_DWORD)v14 == *((_DWORD *)v18 + 1);
              if ( _ZF && *(_QWORD *)v13 >> 32 == *((_DWORD *)v18 + 2) && v76 == *((_DWORD *)v18 + 3) )
                break;
              v21 = *(LevelBuilder **)v18;
              if ( *(_DWORD *)v18 )
              {
                v19 = (LevelBuilder *)*((_DWORD *)v21 + 4);
                v17 = (LevelBuilder **)v18;
                v18 = *(LevelBuilder **)v18;
                if ( *((_DWORD *)v21 + 4) % v15 == v16 % v15 )
                  continue;
              }
              goto LABEL_15;
            }
            v45 = v17 == 0;
            if ( v17 )
              v19 = *v17;
              v45 = *v17 == 0;
            if ( !v45 )
              v46 = *(_DWORD *)(v77 + 780);
              v47 = *((_DWORD *)v19 + 4) % v15;
              v48 = *(LevelBuilder **)(v73 + 4 * v47);
              v49 = *(LevelBuilder **)(v73 + 4 * v47);
              do
                v50 = v49;
                v49 = *(LevelBuilder **)v49;
              while ( v49 != v19 );
              if ( v48 != v50 )
                v51 = v77;
                if ( *(_DWORD *)v19 )
                {
                  v52 = *(_DWORD *)(*(_DWORD *)v19 + 16) % v15;
                  if ( v52 != v47 )
                    *(_DWORD *)(v73 + 4 * v52) = v50;
                }
                goto LABEL_79;
              v53 = *(_DWORD *)v19;
              v51 = v77;
              if ( *(_DWORD *)v19 )
                v80 = *(_DWORD *)v19;
                v54 = *(_DWORD *)(v53 + 16) % v15;
                if ( v54 == v47 )
LABEL_79:
                  *(_DWORD *)v50 = *(_DWORD *)v19;
                  v77 = v51;
                  operator delete((void *)v19);
                  --*(_DWORD *)(v51 + 792);
                  goto LABEL_15;
                *(_DWORD *)(v73 + 4 * v54) = v48;
                v46 = *(_DWORD *)(v77 + 780);
                v53 = v80;
                v48 = *(LevelBuilder **)(v46 + 4 * v47);
              if ( v68 == v48 )
                *(_DWORD *)v68 = v53;
              *(_DWORD *)(v46 + 4 * v47) = 0;
              goto LABEL_79;
          }
        }
LABEL_15:
        SubChunkPos::asFloats((SubChunkPos *)&v91, v82);
        __asm
          VLDR            S0, [SP,#0xF8+var_74]
          VLDR            S2, [SP,#0xF8+var_70]
          VLDR            S4, [SP,#0xF8+var_6C]
          VMUL.F32        S0, S0, S22
          VMUL.F32        S2, S2, S22
        _R0 = v81;
          VMUL.F32        S4, S4, S22
          VADD.F32        S0, S0, S24
          VADD.F32        S2, S2, S24
          VADD.F32        S4, S4, S24
          VSTR            S0, [SP,#0xF8+var_80]
          VSTR            S2, [SP,#0xF8+var_7C]
          VSTR            S4, [SP,#0xF8+var_78]
          VLDR            S6, [R0]
          VLDR            S8, [R0,#4]
          VSUB.F32        S6, S6, S0
          VLDR            S10, [R0,#8]
          VSUB.F32        S8, S8, S2
          VSUB.F32        S10, S10, S4
          VMUL.F32        S6, S6, S6
          VMUL.F32        S8, S8, S8
          VMUL.F32        S10, S10, S10
          VADD.F32        S6, S8, S6
          VADD.F32        S6, S6, S10
          VCMPE.F32       S6, S20
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          _R11 = v77;
          if ( v75 != 1 )
            goto LABEL_106;
          __asm
            VLDR            S6, [R11,#0xD8]
            VLDR            S8, [R11,#0xDC]
            VLDR            S10, [R11,#0xE0]
            VSUB.F32        S0, S0, S6
            VSUB.F32        S2, S2, S8
            VSUB.F32        S4, S4, S10
            VSTR            S0, [SP,#0xF8+var_5C]
            VSTR            S2, [SP,#0xF8+var_58]
            VSTR            S4, [SP,#0xF8+var_54]
          if ( Frustum::sphereInFrustum(v72, (int)&v96, 1096659927) )
          if ( *(_BYTE *)(v77 + 20) )
            __asm
              VLDR            S0, [R11,#0x1A4]
              VLDR            S6, [SP,#0xF8+var_80]
              VLDR            S2, [R11,#0x1A8]
              VLDR            S8, [SP,#0xF8+var_7C]
              VSUB.F32        S0, S6, S0
              VLDR            S4, [R11,#0x1AC]
              VLDR            S10, [SP,#0xF8+var_78]
              VSUB.F32        S2, S8, S2
              VSUB.F32        S4, S10, S4
              VSTR            S0, [SP,#0xF8+var_5C]
              VSTR            S2, [SP,#0xF8+var_58]
              VSTR            S4, [SP,#0xF8+var_54]
            if ( Frustum::sphereInFrustum(v69, (int)&v96, 1096659927) == 1 )
LABEL_106:
              BlockPos::BlockPos((int)&v96, (int)&v88);
              v24 = *(LevelRendererCamera **)(v77 + 684);
              SubChunkPos::SubChunkPos((SubChunkPos *)&v86, (const BlockPos *)&v96);
              v25 = LevelRendererCamera::getChunkAt(v24, (const SubChunkPos *)&v86);
              v87 = 0;
              v26 = (RenderChunk *)*v25;
              if ( *v25 )
                v27 = (unsigned int *)((char *)v26 + 840);
                __dmb();
                do
                  v28 = __ldrex(v27);
                while ( __strex(v28 + 1, v27) );
                v87 = v26;
                if ( !RenderChunk::isEmpty(v26) )
                  v29 = *(_QWORD *)(v77 + 852);
                  if ( (_DWORD)v29 == HIDWORD(v29) )
                  {
                    v31 = *(void **)(v77 + 848);
                    v32 = 0;
                    v33 = ((signed int)v29 - (signed int)v31) >> 2;
                    if ( !v33 )
                      v33 = 1;
                    HIDWORD(v29) = v33 + (((signed int)v29 - (signed int)v31) >> 2);
                    v35 = v33 + (((signed int)v29 - (signed int)v31) >> 2);
                    if ( 0 != HIDWORD(v29) >> 30 )
                      v35 = 0x3FFFFFFF;
                    if ( v34 < v33 )
                    if ( v35 )
                    {
                      if ( v35 >= 0x40000000 )
                        sub_21E57F4();
                      v32 = (char *)operator new(4 * v35);
                      LODWORD(v29) = *(_QWORD *)(v77 + 848) >> 32;
                      v31 = (void *)*(_QWORD *)(v77 + 848);
                    }
                    v36 = (RenderChunk **)&v32[v29 - (_DWORD)v31];
                    *v36 = v26;
                    if ( ((signed int)v29 - (signed int)v31) >> 2 )
                      _aeabi_memmove4(v32, v31);
                    v37 = (int)(v36 + 1);
                    if ( v31 )
                      operator delete(v31);
                    *(_DWORD *)(v77 + 848) = v32;
                    *(_DWORD *)(v77 + 852) = v37;
                    *(_DWORD *)(v77 + 856) = &v32[4 * v35];
                  }
                  else
                    *(_DWORD *)v29 = v26;
                    *(_DWORD *)(v77 + 852) += 4;
                RenderChunk::updateDistanceFromPlayer(v26, v81);
                if ( RenderChunk::isBuildState((int)v26, 2) == 1 )
                  v85 = *(_QWORD *)(*(_DWORD *)(v77 + 680) + 1552);
                  if ( RenderChunk::isDirty((int)v26, &v85, 0, 10) == 1 )
                    do
                      do
                        v38 = __ldrex(v11);
                      while ( __strex(1u, v11) );
                      __dmb();
                    while ( v38 );
                    std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos const&>(
                      &v84,
                      v71,
                      v82);
                    __dmb();
                    *v11 = 0;
                    v26 = v87;
                  else if ( *((_BYTE *)v26 + 328) )
                    if ( mce::Mesh::isValid((RenderChunk *)((char *)v26 + 104)) == 1
                      && RenderChunk::isBuildState((int)v26, 2) == 1 )
                      v39 = *(BlockSource **)(*(_DWORD *)(v77 + 684) + 1244);
                      RenderChunk::getPosition((RenderChunk *)&v94, (int)v26);
                      v95 -= 16;
                      v40 = v95;
                      if ( v40 < BlockSource::getAllocatedHeightAt(v39, (const BlockPos *)&v94) )
                        LevelBuilder::scheduleChunkSort(v77, (int *)&v87);
                _R0 = RenderChunk::getAverageBrightness(v26);
                __asm
                  VMOV            S0, R0
                  VADD.F32        S16, S0, S16
                ++v74;
              else
                  do
                    v30 = __ldrex(v11);
                  while ( __strex(1u, v11) );
                  __dmb();
                while ( v30 );
                std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos const&>(
                  &v83,
                  v71,
                  v82);
                *v11 = 0;
                v26 = v87;
              if ( v26 )
                v42 = (unsigned int *)((char *)v26 + 840);
                  v43 = __ldrex(v42);
                while ( __strex(v43 - 1, v42) );
                if ( v43 == 1 )
                  v44 = v87;
                  if ( v87 )
                    RenderChunk::~RenderChunk(v87);
                    PoolAllocator::release((PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator, (void *)v44);
        v13 = v82 + 12;
      }
      while ( v82 + 12 != v78 );
      v13 = *(_DWORD *)v70;
LABEL_81:
      v3 = (LevelBuilder *)v77;
      *(_DWORD *)(v77 + 876) = v13;
      if ( !v79 )
        v55 = *(_DWORD *)(v77 + 788);
        v12 = 1;
        if ( v55 )
          while ( 1 )
            if ( v13 == *(_DWORD *)(v77 + 880) )
              std::vector<SubChunkPos,std::allocator<SubChunkPos>>::_M_emplace_back_aux<SubChunkPos const&>(
                v70,
                v55 + 4);
            else
              *(_DWORD *)v13 = *(_DWORD *)(v55 + 4);
              *(_DWORD *)(v13 + 4) = *(_DWORD *)(v55 + 8);
              *(_DWORD *)(v13 + 8) = *(_DWORD *)(v55 + 12);
              *(_DWORD *)(v77 + 876) = v13 + 12;
            v55 = *(_DWORD *)v55;
            if ( !v55 )
              break;
            v13 = *(_DWORD *)(v77 + 876);
          break;
        continue;
      break;
    }
    v12 = v79 + 1;
  while ( v79 + 1 < 2 );
  v56 = *(_QWORD *)(v77 + 848);
  if ( (_DWORD)v56 != HIDWORD(v56) )
    v57 = (int *)*(_QWORD *)(v77 + 848);
    for ( HIDWORD(v56) = *(_QWORD *)(v77 + 848); ; HIDWORD(v56) = v62 )
      _R2 = *v57;
      v59 = (HIDWORD(v56) - (signed int)v56) >> 2;
      while ( 1 )
        v60 = v59;
        if ( v59 < 1 )
        v59 >>= 1;
        __asm { VLDR            S0, [R2] }
        _R6 = *(_DWORD *)(v56 + 4 * (v60 >> 1));
          VLDR            S2, [R6]
          VCMPE.F32       S2, S0
        if ( _NF ^ _VF )
          LODWORD(v56) = v56 + 4 * v59;
          v59 = v60 - 1 - v59;
          LODWORD(v56) = v56 + 4;
      v62 = (int)(v57 + 1);
      std::__rotate<__gnu_cxx::__normal_iterator<RenderChunk **,std::vector<RenderChunk *,std::allocator<RenderChunk *>>>>(
        v56,
        (int *)HIDWORD(v56),
        (int)(v57 + 1));
      if ( v57 + 1 == *(int **)(v77 + 852) )
        break;
      LODWORD(v56) = *(_DWORD *)(v77 + 848);
      ++v57;
    v63 = *(_DWORD *)(v77 + 848);
    if ( v63 != v62 )
      __asm { VMOV            R4, S18 }
      v65 = v63 - 4;
        v66 = *(RenderChunk **)(v65 + 4);
        v65 += 4;
        LevelRendererCamera::queueChunk(*(LevelRendererCamera **)(v77 + 684), v66, _R4, v67);
      while ( v57 != (int *)v65 );
  result = v74;
  if ( v74 )
    __asm
      VMOV            S0, R0
      VLDR            S4, =0.1
      VCVT.F32.S32    S0, S0
    result = *(_DWORD *)(v77 + 684);
      VLDR            S2, [R0,#0x168]
      VDIV.F32        S0, S16, S0
      VSUB.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VADD.F32        S0, S0, S2
      VSTR            S0, [R0,#0x168]
  return result;
}


signed int __fastcall LevelBuilder::cullerIsVisible(LevelBuilder *this, const Vec3 *a2, float a3)
{
  int v9; // r4@1
  signed int result; // r0@4
  float v11; // [sp+4h] [bp-1Ch]@1

  _R5 = this;
  _R6 = a2;
  __asm
  {
    VLDR            S0, [R5,#0xD8]
    VLDR            S6, [R6]
    VLDR            S2, [R5,#0xDC]
  }
  v9 = LODWORD(a3);
    VLDR            S8, [R6,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R5,#0xE0]
    VLDR            S10, [R6,#8]
    VSUB.F32        S2, S8, S2
    VSUB.F32        S4, S10, S4
    VSTR            S0, [SP,#0x20+var_1C]
    VSTR            S2, [SP,#0x20+var_18]
    VSTR            S4, [SP,#0x20+var_14]
  if ( Frustum::sphereInFrustum((int)this + 24, (int)&v11, SLODWORD(a3)) )
    goto LABEL_8;
  if ( !*((_BYTE *)_R5 + 20) )
    goto LABEL_9;
    VLDR            S0, [R5,#0x1A4]
    VLDR            S2, [R5,#0x1A8]
    VLDR            S4, [R5,#0x1AC]
  if ( Frustum::sphereInFrustum((int)_R5 + 228, (int)&v11, v9) )
LABEL_8:
    result = 1;
  else
LABEL_9:
    result = 0;
  return result;
}


int __fastcall LevelBuilder::LevelBuilder(int a1, Level *a2, int a3, int a4)
{
  int v4; // r4@1
  Level *v5; // r8@1
  int v6; // r7@1
  int v7; // r6@1
  void *v8; // r0@2
  ChunkVisibilityCache *v9; // r5@4
  double v10; // r0@4
  unsigned int v11; // r0@4
  int v12; // r5@6
  void *v13; // r6@6
  double v14; // r0@7
  __int64 v15; // kr00_8@8
  __int64 v16; // kr08_8@8
  __int64 v17; // kr10_8@8
  __int64 v18; // kr18_8@8
  __int64 v19; // kr20_8@8
  __int64 v20; // kr28_8@8
  void *v21; // r7@8
  unsigned int v22; // r6@10
  void *v23; // t1@11
  double v24; // r0@13
  int v25; // r5@15
  void *v26; // r7@15
  unsigned int v27; // r0@16
  int v28; // r5@18
  void *v29; // r7@18
  void *v31; // [sp+0h] [bp-50h]@7
  int v32; // [sp+4h] [bp-4Ch]@8
  __int64 v33; // [sp+8h] [bp-48h]@8
  __int64 v34; // [sp+10h] [bp-40h]@8
  __int64 v35; // [sp+18h] [bp-38h]@8
  __int64 v36; // [sp+20h] [bp-30h]@8

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  *(_QWORD *)a1 = (unsigned int)&off_26E6DE8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  *(_DWORD *)(v4 + 16) = (*(int (**)(void))(**(_DWORD **)v8 + 452))();
  *(_BYTE *)(v4 + 20) = 0;
  Frustum::Frustum((Frustum *)(v4 + 24));
  *(_DWORD *)(v4 + 216) = 0;
  *(_DWORD *)(v4 + 220) = 0;
  *(_DWORD *)(v4 + 224) = 0;
  Frustum::Frustum((Frustum *)(v4 + 228));
  *(_DWORD *)(v4 + 420) = 0;
  *(_DWORD *)(v4 + 424) = 0;
  *(_DWORD *)(v4 + 428) = 0;
  v9 = (ChunkVisibilityCache *)operator new(0x14u);
  ChunkVisibilityCache::ChunkVisibilityCache(v9);
  HIDWORD(v10) = 2139095039;
  *(_DWORD *)(v4 + 432) = v9;
  *(_DWORD *)(v4 + 436) = 0;
  *(_DWORD *)(v4 + 440) = 2139095039;
  *(_DWORD *)(v4 + 444) = 2139095039;
  *(_DWORD *)(v4 + 448) = 2139095039;
  *(_DWORD *)(v4 + 452) = 0;
  *(_DWORD *)(v4 + 456) = 0;
  *(_DWORD *)(v4 + 460) = 0;
  *(_DWORD *)(v4 + 464) = 2139095039;
  *(_DWORD *)(v4 + 468) = 2139095039;
  *(_DWORD *)(v4 + 472) = 2139095039;
  *(_DWORD *)(v4 + 476) = 0;
  *(_DWORD *)(v4 + 480) = -1;
  *(_WORD *)(v4 + 484) = 0;
  *(_DWORD *)(v4 + 504) = 0;
  *(_DWORD *)(v4 + 508) = 0;
  *(_DWORD *)(v4 + 496) = 0;
  *(_DWORD *)(v4 + 500) = 0;
  *(_DWORD *)(v4 + 488) = 0;
  *(_DWORD *)(v4 + 492) = 0;
  *(_DWORD *)(v4 + 512) = 0;
  *(_DWORD *)(v4 + 516) = 0;
  *(_DWORD *)(v4 + 520) = 0;
  *(_DWORD *)(v4 + 524) = 0;
  *(_DWORD *)(v4 + 528) = 0;
  *(_DWORD *)(v4 + 532) = 0;
  *(_DWORD *)(v4 + 536) = 0;
  *(_DWORD *)(v4 + 540) = 0;
  *(_DWORD *)(v4 + 544) = 0;
  *(_DWORD *)(v4 + 548) = 0;
  *(_DWORD *)(v4 + 552) = 0;
  *(_DWORD *)(v4 + 556) = 0;
  *(_DWORD *)(v4 + 560) = 0;
  *(_DWORD *)(v4 + 564) = 0;
  *(_DWORD *)(v4 + 568) = 0;
  *(_DWORD *)(v4 + 572) = 0;
  *(_DWORD *)(v4 + 576) = 0;
  *(_DWORD *)(v4 + 580) = 0;
  *(_DWORD *)(v4 + 584) = 0;
  *(_DWORD *)(v4 + 588) = 0;
  *(_DWORD *)(v4 + 592) = 0;
  *(_DWORD *)(v4 + 596) = 0;
  *(_DWORD *)(v4 + 600) = 0;
  *(_DWORD *)(v4 + 604) = 0;
  *(_DWORD *)(v4 + 608) = 0;
  *(_DWORD *)(v4 + 612) = 0;
  *(_DWORD *)(v4 + 616) = 0;
  *(_DWORD *)(v4 + 620) = 0;
  *(_DWORD *)(v4 + 624) = 0;
  *(_DWORD *)(v4 + 628) = 0;
  *(_DWORD *)(v4 + 632) = 0;
  *(_DWORD *)(v4 + 636) = 0;
  *(_DWORD *)(v4 + 640) = 0;
  *(_DWORD *)(v4 + 644) = 0;
  *(_DWORD *)(v4 + 648) = 0;
  *(_DWORD *)(v4 + 652) = 0;
  *(_DWORD *)(v4 + 656) = 0;
  *(_DWORD *)(v4 + 660) = 0;
  *(_DWORD *)(v4 + 664) = 0;
  *(_DWORD *)(v4 + 668) = 0;
  *(_DWORD *)(v4 + 672) = 0;
  *(_DWORD *)(v4 + 676) = 0;
  *(_DWORD *)(v4 + 680) = v6;
  *(_DWORD *)(v4 + 684) = v7;
  *(_DWORD *)(v4 + 696) = 0;
  *(_DWORD *)(v4 + 700) = 0;
  *(_DWORD *)(v4 + 704) = 1065353216;
  *(_DWORD *)(v4 + 708) = 0;
  LODWORD(v10) = v4 + 704;
  v11 = sub_21E6254(v10);
  *(_DWORD *)(v4 + 692) = v11;
  if ( v11 == 1 )
  {
    v13 = (void *)(v4 + 712);
    *(_DWORD *)(v4 + 712) = 0;
  }
    if ( v11 >= 0x40000000 )
      sub_21E57F4();
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  *(_DWORD *)(v4 + 688) = v13;
  *(_DWORD *)(v4 + 716) = 0;
  *(_DWORD *)(v4 + 720) = 0;
  *(_DWORD *)(v4 + 724) = 0;
  __dmb();
  *(_BYTE *)(v4 + 728) = 0;
  _aeabi_memclr8(&v31, 40);
  std::_Deque_base<SubChunkPos,std::allocator<SubChunkPos>>::_M_initialize_map((int)&v31, 0);
  _aeabi_memclr4(v4 + 732, 40);
  std::_Deque_base<SubChunkPos,std::allocator<SubChunkPos>>::_M_initialize_map(v4 + 732, 0);
  HIDWORD(v14) = v31;
  if ( v31 )
    v15 = *(_QWORD *)(v4 + 740);
    v16 = *(_QWORD *)(v4 + 748);
    v17 = v33;
    *(_QWORD *)(v4 + 748) = v34;
    *(_QWORD *)(v4 + 740) = v17;
    v33 = v15;
    v34 = v16;
    v18 = *(_QWORD *)(v4 + 756);
    v19 = *(_QWORD *)(v4 + 764);
    v20 = v35;
    *(_QWORD *)(v4 + 764) = v36;
    *(_QWORD *)(v4 + 756) = v20;
    v35 = v18;
    v36 = v19;
    v21 = *(void **)(v4 + 732);
    *(_DWORD *)(v4 + 732) = HIDWORD(v14);
    v31 = v21;
    LODWORD(v14) = *(_DWORD *)(v4 + 736);
    HIDWORD(v14) = v32;
    *(_DWORD *)(v4 + 736) = v32;
    v32 = LODWORD(v14);
    if ( v21 )
    {
      if ( HIDWORD(v16) < HIDWORD(v19) + 4 )
      {
        v22 = HIDWORD(v16) - 4;
        do
        {
          v23 = *(void **)(v22 + 4);
          v22 += 4;
          operator delete(v23);
        }
        while ( v22 < HIDWORD(v19) );
      }
      operator delete(v21);
    }
  *(_BYTE *)(v4 + 772) = 0;
  *(_DWORD *)(v4 + 788) = 0;
  *(_DWORD *)(v4 + 792) = 0;
  *(_DWORD *)(v4 + 796) = 1065353216;
  *(_DWORD *)(v4 + 800) = 0;
  LODWORD(v14) = v4 + 796;
  v24 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v14)));
  *(_DWORD *)(v4 + 784) = LODWORD(v24);
  if ( LODWORD(v24) == 1 )
    v26 = (void *)(v4 + 804);
    *(_DWORD *)(v4 + 804) = 0;
    if ( LODWORD(v24) >= 0x40000000 )
    v25 = 4 * LODWORD(v24);
    v26 = operator new(4 * LODWORD(v24));
    _aeabi_memclr4(v26, v25);
  *(_DWORD *)(v4 + 780) = v26;
  *(_DWORD *)(v4 + 816) = 0;
  *(_DWORD *)(v4 + 820) = 0;
  *(_DWORD *)(v4 + 824) = 1065353216;
  *(_DWORD *)(v4 + 828) = 0;
  LODWORD(v24) = v4 + 824;
  v27 = sub_21E6254(v24);
  *(_DWORD *)(v4 + 812) = v27;
  if ( v27 == 1 )
    v29 = (void *)(v4 + 832);
    *(_DWORD *)(v4 + 832) = 0;
    if ( v27 >= 0x40000000 )
    v28 = 4 * v27;
    v29 = operator new(4 * v27);
    _aeabi_memclr4(v29, v28);
  *(_DWORD *)(v4 + 808) = v29;
  _aeabi_memclr4(v4 + 836, 52);
  *(_BYTE *)(v4 + 888) = 1;
  *(_BYTE *)(v4 + 889) = 0;
  *(_DWORD *)(v4 + 892) = 0;
  *(_DWORD *)(v4 + 896) = 0;
  *(_DWORD *)(v4 + 900) = 0;
  j__ZNSt12__shared_ptrI27RenderChunkSorterSharedInfoLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_(v4 + 904);
  *(_DWORD *)(v4 + 776) = 0;
  Level::addListener(v5, (LevelListener *)v4);
  LevelBuilder::recreateBuilders((LevelBuilder *)v4);
  return v4;
}


signed int __fastcall LevelBuilder::onAppResumed(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // kr00_4@3
  int v5; // r6@3
  int v14; // r8@4
  signed int result; // r0@5

  v1 = this;
  LevelBuilder::recreateBuilders(this);
  v2 = *((_DWORD *)v1 + 171);
  v3 = *(_DWORD *)(v2 + 456);
  if ( v3 < *(_DWORD *)(v2 + 464) )
    v3 = *(_DWORD *)(v2 + 464);
  *((_DWORD *)v1 + 120) = v3;
  v4 = LevelRendererCamera::getDimensionHeight((LevelRendererCamera *)v2);
  *((_WORD *)v1 + 242) = v4 / 16;
  v5 = *((_DWORD *)v1 + 109);
  if ( v5 )
  {
    __asm { VMOV.F32        S0, #0.25 }
    _R0 = &mce::Math::PI;
    __asm
    {
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    }
    _R0 = sinf(_R0);
    _R1 = *((_DWORD *)v1 + 171);
      VMOV            S4, R0
      VLDR            S2, =0.0625
    v14 = *((_DWORD *)v1 + 120);
      VLDR            S0, [R1,#0x170]
      VMUL.F32        S2, S4, S2
      VCVT.F32.S32    S0, S0
    _R0 = ceilf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v5 + 20))(v5, v14, v4 / 16, 3 * _R0);
  }
  result = 1;
  *((_BYTE *)v1 + 888) = 1;
  return result;
}


void __fastcall LevelBuilder::~LevelBuilder(LevelBuilder *this)
{
  LevelBuilder *v1; // r0@1

  v1 = LevelBuilder::~LevelBuilder(this);
  j_j_j__ZdlPv_5((void *)v1);
}


unsigned __int64 __fastcall LevelBuilder::startLevelBuildForThisFrame(int a1, int a2, const Vec3 *a3, const Vec3 *a4, int a5, int a6)
{
  int v6; // r5@1
  const Vec3 *v7; // r8@1
  int v8; // r0@1
  const Vec3 *v9; // r9@1
  int v10; // r11@1
  Option *v11; // r0@4
  int v12; // r10@4
  LevelCullerDistanceField *v13; // r6@5
  Option *v14; // r0@6
  int v15; // r0@8
  signed int v16; // r0@10
  Option *v17; // r0@11
  LevelCullerOriginal *v18; // r6@12
  int v19; // r0@14
  LevelRendererCamera *v20; // r0@17
  int v21; // r1@17
  int v22; // kr00_4@19
  int v23; // r4@19
  int v35; // r1@22
  _DWORD *v38; // r0@26
  int v39; // r0@26
  int v40; // r0@26
  int v41; // r4@26
  int v42; // r6@26
  int v43; // r0@26
  int v44; // r0@30
  int v45; // r1@30
  int v46; // kr08_4@32
  int v47; // r6@32
  int v52; // r10@33
  int v56; // r3@36
  __int64 v61; // [sp+0h] [bp-50h]@0
  int v62; // [sp+8h] [bp-48h]@24
  double v63; // [sp+10h] [bp-40h]@24
  unsigned int v65; // [sp+20h] [bp-30h]@24

  v6 = a1;
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 900);
  v9 = a3;
  v10 = a2;
  if ( v8 == 2 )
  {
    v17 = (Option *)Options::get(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 684) + 1256) + 4500), 91);
    if ( Option::getBool(v17) )
      goto LABEL_22;
    v18 = (LevelCullerOriginal *)operator new(0xA0u);
    LevelCullerOriginal::LevelCullerOriginal(v18);
    v12 = v6 + 684;
    goto LABEL_14;
  }
  if ( v8 == 1 )
    v14 = (Option *)Options::get(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 684) + 1256) + 4500), 91);
    if ( Option::getBool(v14) != 1 )
    v13 = (LevelCullerDistanceField *)operator new(0xF0u);
    LevelCullerDistanceField::LevelCullerDistanceField(v13);
    goto LABEL_8;
  if ( v8 )
    goto LABEL_22;
  v11 = (Option *)Options::get(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 684) + 1256) + 4500), 91);
  v12 = v6 + 684;
  if ( Option::getBool(v11) != 1 )
LABEL_14:
    v19 = *(_DWORD *)(v6 + 436);
    *(_DWORD *)(v6 + 436) = v18;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
    v16 = 1;
    goto LABEL_17;
  v13 = (LevelCullerDistanceField *)operator new(0xF0u);
  LevelCullerDistanceField::LevelCullerDistanceField(v13);
LABEL_8:
  v15 = *(_DWORD *)(v6 + 436);
  *(_DWORD *)(v6 + 436) = v13;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v16 = 2;
LABEL_17:
  *(_DWORD *)(v6 + 900) = v16;
  v20 = *(LevelRendererCamera **)v12;
  v21 = *(_DWORD *)(*(_DWORD *)v12 + 456);
  if ( v21 < *(_DWORD *)(*(_DWORD *)v12 + 464) )
    v21 = *(_DWORD *)(*(_DWORD *)v12 + 464);
  *(_DWORD *)(v6 + 480) = v21;
  v22 = LevelRendererCamera::getDimensionHeight(v20);
  *(_WORD *)(v6 + 484) = v22 / 16;
  v23 = *(_DWORD *)(v6 + 436);
  if ( v23 )
    __asm { VMOV.F32        S0, #0.25 }
    _R0 = &mce::Math::PI;
    __asm
    {
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R0, S0
    }
    _R0 = sinf(_R0);
    _R1 = *(LevelRendererCamera **)v12;
      VMOV            S4, R0
      VLDR            S2, =0.0625
      VLDR            S0, [R1,#0x170]
      VMUL.F32        S2, S4, S2
      VCVT.F32.S32    S0, S0
    _R0 = ceilf(_R0);
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
    (*(void (__fastcall **)(int, _DWORD, int, int))(*(_DWORD *)v23 + 20))(v23, *(_DWORD *)(v6 + 480), v22 / 16, 3 * _R0);
  *(_BYTE *)(v6 + 888) = 1;
LABEL_22:
  *(_DWORD *)(v6 + 12) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = 0;
  v35 = *(_DWORD *)(v10 + 56);
  if ( v35 != 1 )
    LOBYTE(v35) = 0;
  *(_BYTE *)(v6 + 20) = v35;
  *(_DWORD *)(v6 + 516) = *(_DWORD *)(v6 + 512);
  *(_DWORD *)(v6 + 528) = *(_DWORD *)(v6 + 524);
  *(_DWORD *)(v6 + 540) = *(_DWORD *)(v6 + 536);
  *(_DWORD *)(v6 + 552) = *(_DWORD *)(v6 + 548);
  *(_DWORD *)(v6 + 564) = *(_DWORD *)(v6 + 560);
  *(_DWORD *)(v6 + 576) = *(_DWORD *)(v6 + 572);
  *(_DWORD *)(v6 + 588) = *(_DWORD *)(v6 + 584);
  *(_DWORD *)(v6 + 600) = *(_DWORD *)(v6 + 596);
  *(_DWORD *)(v6 + 612) = *(_DWORD *)(v6 + 608);
  *(_DWORD *)(v6 + 624) = *(_DWORD *)(v6 + 620);
  *(_DWORD *)(v6 + 636) = *(_DWORD *)(v6 + 632);
  *(_DWORD *)(v6 + 648) = *(_DWORD *)(v6 + 644);
  *(_DWORD *)(v6 + 660) = *(_DWORD *)(v6 + 656);
  *(_DWORD *)(v6 + 672) = *(_DWORD *)(v6 + 668);
  v63 = 0.0;
  v65 = 14;
  v62 = unk_27F636C;
  unk_27F636C = &v62;
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R2
    VSTR            D0, [SP,#0x50+var_40]
    VSTR            D0, [SP,#0x50+var_38]
  _R2 = v62;
  if ( v62 )
      VMOV            D0, R0, R1
      VLDR            D1, [R2,#8]
      VADD.F64        D0, D1, D0
      VSTR            D0, [R2,#8]
  v38 = *(_DWORD **)v10;
  *(_DWORD *)(v6 + 24) = **(_DWORD **)v10;
  *(_DWORD *)(v6 + 28) = v38[1];
  *(_DWORD *)(v6 + 32) = v38[2];
  *(_DWORD *)(v6 + 36) = v38[3];
  *(_DWORD *)(v6 + 40) = v38[4];
  *(_DWORD *)(v6 + 44) = v38[5];
  *(_DWORD *)(v6 + 48) = v38[6];
  *(_DWORD *)(v6 + 52) = v38[7];
  *(_DWORD *)(v6 + 56) = v38[8];
  *(_DWORD *)(v6 + 60) = v38[9];
  *(_DWORD *)(v6 + 64) = v38[10];
  *(_DWORD *)(v6 + 68) = v38[11];
  *(_DWORD *)(v6 + 72) = v38[12];
  *(_DWORD *)(v6 + 76) = v38[13];
  *(_DWORD *)(v6 + 80) = v38[14];
  *(_DWORD *)(v6 + 84) = v38[15];
  *(_DWORD *)(v6 + 88) = v38[16];
  *(_DWORD *)(v6 + 92) = v38[17];
  *(_DWORD *)(v6 + 96) = v38[18];
  *(_DWORD *)(v6 + 100) = v38[19];
  *(_DWORD *)(v6 + 104) = v38[20];
  *(_DWORD *)(v6 + 108) = v38[21];
  *(_DWORD *)(v6 + 112) = v38[22];
  *(_DWORD *)(v6 + 116) = v38[23];
  *(_DWORD *)(v6 + 120) = v38[24];
  *(_DWORD *)(v6 + 124) = v38[25];
  *(_DWORD *)(v6 + 128) = v38[26];
  *(_DWORD *)(v6 + 132) = v38[27];
  *(_DWORD *)(v6 + 136) = v38[28];
  *(_DWORD *)(v6 + 140) = v38[29];
  *(_DWORD *)(v6 + 144) = v38[30];
  *(_DWORD *)(v6 + 148) = v38[31];
  *(_DWORD *)(v6 + 152) = v38[32];
  *(_DWORD *)(v6 + 156) = v38[33];
  *(_DWORD *)(v6 + 160) = v38[34];
  *(_DWORD *)(v6 + 164) = v38[35];
  *(_DWORD *)(v6 + 168) = v38[36];
  *(_DWORD *)(v6 + 172) = v38[37];
  *(_DWORD *)(v6 + 176) = v38[38];
  *(_DWORD *)(v6 + 180) = v38[39];
  *(_DWORD *)(v6 + 184) = v38[40];
  *(_DWORD *)(v6 + 188) = v38[41];
  *(_DWORD *)(v6 + 192) = v38[42];
  *(_DWORD *)(v6 + 196) = v38[43];
  *(_DWORD *)(v6 + 200) = v38[44];
  *(_DWORD *)(v6 + 204) = v38[45];
  *(_DWORD *)(v6 + 208) = v38[46];
  *(_DWORD *)(v6 + 212) = v38[47];
  *(_DWORD *)(v6 + 216) = v38[48];
  *(_DWORD *)(v6 + 220) = v38[49];
  *(_DWORD *)(v6 + 224) = v38[50];
  v39 = *(_DWORD *)(v10 + 4);
  *(_DWORD *)(v6 + 228) = *(_DWORD *)v39;
  *(_DWORD *)(v6 + 232) = *(_DWORD *)(v39 + 4);
  *(_DWORD *)(v6 + 236) = *(_DWORD *)(v39 + 8);
  *(_DWORD *)(v6 + 240) = *(_DWORD *)(v39 + 12);
  *(_DWORD *)(v6 + 244) = *(_DWORD *)(v39 + 16);
  *(_DWORD *)(v6 + 248) = *(_DWORD *)(v39 + 20);
  *(_DWORD *)(v6 + 252) = *(_DWORD *)(v39 + 24);
  *(_DWORD *)(v6 + 256) = *(_DWORD *)(v39 + 28);
  *(_DWORD *)(v6 + 260) = *(_DWORD *)(v39 + 32);
  *(_DWORD *)(v6 + 264) = *(_DWORD *)(v39 + 36);
  *(_DWORD *)(v6 + 268) = *(_DWORD *)(v39 + 40);
  *(_DWORD *)(v6 + 272) = *(_DWORD *)(v39 + 44);
  *(_DWORD *)(v6 + 276) = *(_DWORD *)(v39 + 48);
  *(_DWORD *)(v6 + 280) = *(_DWORD *)(v39 + 52);
  *(_DWORD *)(v6 + 284) = *(_DWORD *)(v39 + 56);
  *(_DWORD *)(v6 + 288) = *(_DWORD *)(v39 + 60);
  *(_DWORD *)(v6 + 292) = *(_DWORD *)(v39 + 64);
  *(_DWORD *)(v6 + 296) = *(_DWORD *)(v39 + 68);
  *(_DWORD *)(v6 + 300) = *(_DWORD *)(v39 + 72);
  *(_DWORD *)(v6 + 304) = *(_DWORD *)(v39 + 76);
  *(_DWORD *)(v6 + 308) = *(_DWORD *)(v39 + 80);
  *(_DWORD *)(v6 + 312) = *(_DWORD *)(v39 + 84);
  *(_DWORD *)(v6 + 316) = *(_DWORD *)(v39 + 88);
  *(_DWORD *)(v6 + 320) = *(_DWORD *)(v39 + 92);
  *(_DWORD *)(v6 + 324) = *(_DWORD *)(v39 + 96);
  *(_DWORD *)(v6 + 328) = *(_DWORD *)(v39 + 100);
  *(_DWORD *)(v6 + 332) = *(_DWORD *)(v39 + 104);
  *(_DWORD *)(v6 + 336) = *(_DWORD *)(v39 + 108);
  *(_DWORD *)(v6 + 340) = *(_DWORD *)(v39 + 112);
  *(_DWORD *)(v6 + 344) = *(_DWORD *)(v39 + 116);
  *(_DWORD *)(v6 + 348) = *(_DWORD *)(v39 + 120);
  *(_DWORD *)(v6 + 352) = *(_DWORD *)(v39 + 124);
  *(_DWORD *)(v6 + 356) = *(_DWORD *)(v39 + 128);
  *(_DWORD *)(v6 + 360) = *(_DWORD *)(v39 + 132);
  *(_DWORD *)(v6 + 364) = *(_DWORD *)(v39 + 136);
  *(_DWORD *)(v6 + 368) = *(_DWORD *)(v39 + 140);
  *(_DWORD *)(v6 + 372) = *(_DWORD *)(v39 + 144);
  *(_DWORD *)(v6 + 376) = *(_DWORD *)(v39 + 148);
  *(_DWORD *)(v6 + 380) = *(_DWORD *)(v39 + 152);
  *(_DWORD *)(v6 + 384) = *(_DWORD *)(v39 + 156);
  *(_DWORD *)(v6 + 388) = *(_DWORD *)(v39 + 160);
  *(_DWORD *)(v6 + 392) = *(_DWORD *)(v39 + 164);
  *(_DWORD *)(v6 + 396) = *(_DWORD *)(v39 + 168);
  *(_DWORD *)(v6 + 400) = *(_DWORD *)(v39 + 172);
  *(_DWORD *)(v6 + 404) = *(_DWORD *)(v39 + 176);
  *(_DWORD *)(v6 + 408) = *(_DWORD *)(v39 + 180);
  *(_DWORD *)(v6 + 412) = *(_DWORD *)(v39 + 184);
  *(_DWORD *)(v6 + 416) = *(_DWORD *)(v39 + 188);
  *(_DWORD *)(v6 + 420) = *(_DWORD *)(v39 + 192);
  *(_DWORD *)(v6 + 424) = *(_DWORD *)(v39 + 196);
  *(_DWORD *)(v6 + 428) = *(_DWORD *)(v39 + 200);
  LevelBuilder::_buildRenderChunks((LevelBuilder *)v6, v9);
  v40 = *(_DWORD *)(v6 + 684);
  v41 = *(_DWORD *)(v40 + 456);
  v42 = *(_DWORD *)(v40 + 464);
  v43 = LevelRendererCamera::getDimensionHeight((LevelRendererCamera *)v40);
  if ( v41 < v42 )
    v41 = v42;
  if ( v41 != *(_DWORD *)(v6 + 480) || *(_WORD *)(v6 + 484) != v43 / 16 )
    v44 = *(_DWORD *)(v6 + 684);
    v45 = *(_DWORD *)(v44 + 456);
    if ( v45 < *(_DWORD *)(v44 + 464) )
      v45 = *(_DWORD *)(v44 + 464);
    *(_DWORD *)(v6 + 480) = v45;
    v46 = LevelRendererCamera::getDimensionHeight((LevelRendererCamera *)v44);
    *(_WORD *)(v6 + 484) = v46 / 16;
    v47 = *(_DWORD *)(v6 + 436);
    if ( v47 )
      __asm { VMOV.F32        S0, #0.25 }
      _R0 = &mce::Math::PI;
      __asm
      {
        VLDR            S2, [R0]
        VMUL.F32        S0, S2, S0
        VMOV            R0, S0
      }
      _R0 = sinf(_R0);
      _R1 = *(_DWORD *)(v6 + 684);
        VMOV            S4, R0
        VLDR            S2, =0.0625
      v52 = *(_DWORD *)(v6 + 480);
        VLDR            S0, [R1,#0x170]
        VMUL.F32        S2, S4, S2
        VCVT.F32.S32    S0, S0
      _R0 = ceilf(_R0);
        VMOV            S0, R0
        VCVTR.S32.F32   S0, S0
      (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)v47 + 20))(v47, v52, v46 / 16, 3 * _R0);
    *(_BYTE *)(v6 + 888) = 1;
  if ( LevelBuilder::_shouldCullThisFrame((LevelBuilder *)v6, v9, v7, a5) == 1 )
    v56 = *(_DWORD *)(v6 + 684);
    (*(void (**)(void))(**(_DWORD **)(v6 + 436) + 8))();
  LevelBuilder::_prepareRenderChunkRenderList((LevelBuilder *)v6, v9, a6);
  LODWORD(_R0) = getTimeS();
    VMOV            D1, R0, R1
    VLDR            D0, [SP,#0x50+var_40]
    VADD.F64        D2, D0, D1
    VSTR            D2, [SP,#0x50+var_40]
    VLDR            D0, [SP,#0x50+var_38]
    VADD.F64        D0, D0, D1
  HIDWORD(_R0) = v62;
      VLDR            D2, [R1,#8]
      VSUB.F64        D1, D2, D1
      VSTR            D1, [R1,#8]
      VLDR            D2, [SP,#0x50+var_40]
  __asm { VMOV            R2, R3, D2 }
  LODWORD(_R0) = &ProfilerLite::gProfilerLiteInstance;
  unk_27F636C = v62;
  __asm { VSTR            D0, [SP,#0x50+var_50] }
  return __PAIR__(v65, ProfilerLite::_endScope(_R0, _R2, _R3, v61));
}


LevelBuilder *__fastcall LevelBuilder::~LevelBuilder(LevelBuilder *this)
{
  LevelBuilder *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  int v7; // r0@15
  unsigned int *v8; // r2@16
  unsigned int v9; // r1@18
  void *v10; // r0@23
  void *v11; // r0@25
  void *v12; // r0@27
  void *v13; // r0@29
  void *v14; // r0@31
  void *v15; // r5@32
  char *v16; // r0@33
  void *v17; // r0@36
  void *v18; // r5@37
  char *v19; // r0@38
  void *v20; // r0@41
  unsigned int v21; // r5@42
  unsigned int v22; // r1@42
  unsigned int v23; // r6@43
  void *v24; // t1@44
  void *v25; // r0@47
  void *v26; // r0@49
  void *v27; // r5@50
  char *v28; // r0@51
  void *v29; // r0@54
  void *v30; // r0@56
  void *v31; // r0@58
  void *v32; // r0@60
  void *v33; // r0@62
  void *v34; // r0@64
  void *v35; // r0@66
  void *v36; // r0@68
  void *v37; // r0@70
  void *v38; // r0@72
  void *v39; // r0@74
  void *v40; // r0@76
  void *v41; // r0@78
  void *v42; // r0@80
  RenderChunkSorter **v43; // r5@82 OVERLAPPED
  RenderChunkSorter **v44; // r6@82 OVERLAPPED
  RenderChunkSorter *v45; // r0@84
  RenderChunkBuilder **v46; // r5@89 OVERLAPPED
  RenderChunkBuilder **v47; // r6@89 OVERLAPPED
  RenderChunkBuilder *v48; // r0@91
  int v49; // r0@96
  void **v50; // r5@98
  LevelBuilder *result; // r0@102

  v1 = this;
  *(_DWORD *)this = &off_26E6DE8;
  Level::removeListener(*(Level **)(*((_DWORD *)this + 170) + 4496), this);
  v2 = *((_DWORD *)v1 + 227);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = *((_DWORD *)v1 + 224);
  if ( v7 )
    v8 = (unsigned int *)(v7 + 8);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 == 1 )
      (*(void (**)(void))(*(_DWORD *)v7 + 12))();
  v10 = (void *)*((_DWORD *)v1 + 218);
  if ( v10 )
    operator delete(v10);
  v11 = (void *)*((_DWORD *)v1 + 215);
  if ( v11 )
    operator delete(v11);
  v12 = (void *)*((_DWORD *)v1 + 212);
  if ( v12 )
    operator delete(v12);
  v13 = (void *)*((_DWORD *)v1 + 209);
  if ( v13 )
    operator delete(v13);
  v14 = (void *)*((_DWORD *)v1 + 204);
  if ( v14 )
    do
      v15 = *(void **)v14;
      operator delete(v14);
      v14 = v15;
    while ( v15 );
  _aeabi_memclr4(*((_QWORD *)v1 + 101), 4 * (*((_QWORD *)v1 + 101) >> 32));
  *((_DWORD *)v1 + 204) = 0;
  *((_DWORD *)v1 + 205) = 0;
  v16 = (char *)*((_DWORD *)v1 + 202);
  if ( v16 && (char *)v1 + 832 != v16 )
    operator delete(v16);
  v17 = (void *)*((_DWORD *)v1 + 197);
  if ( v17 )
      v18 = *(void **)v17;
      operator delete(v17);
      v17 = v18;
    while ( v18 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 780), 4 * (*(_QWORD *)((char *)v1 + 780) >> 32));
  *((_DWORD *)v1 + 197) = 0;
  *((_DWORD *)v1 + 198) = 0;
  v19 = (char *)*((_DWORD *)v1 + 195);
  if ( v19 && (char *)v1 + 804 != v19 )
    operator delete(v19);
  v20 = (void *)*((_DWORD *)v1 + 183);
  if ( v20 )
    v21 = *((_DWORD *)v1 + 192);
    v22 = *((_DWORD *)v1 + 188);
    if ( v22 < v21 + 4 )
      v23 = v22 - 4;
        v24 = *(void **)(v23 + 4);
        v23 += 4;
        operator delete(v24);
      while ( v23 < v21 );
      v20 = (void *)*((_DWORD *)v1 + 183);
    operator delete(v20);
  v25 = (void *)*((_DWORD *)v1 + 179);
  if ( v25 )
    operator delete(v25);
  v26 = (void *)*((_DWORD *)v1 + 174);
  if ( v26 )
      v27 = *(void **)v26;
      operator delete(v26);
      v26 = v27;
    while ( v27 );
  _aeabi_memclr4(*((_QWORD *)v1 + 86), 4 * (*((_QWORD *)v1 + 86) >> 32));
  *((_DWORD *)v1 + 174) = 0;
  *((_DWORD *)v1 + 175) = 0;
  v28 = (char *)*((_DWORD *)v1 + 172);
  if ( v28 && (char *)v1 + 712 != v28 )
    operator delete(v28);
  v29 = (void *)*((_DWORD *)v1 + 167);
  if ( v29 )
    operator delete(v29);
  v30 = (void *)*((_DWORD *)v1 + 164);
  if ( v30 )
    operator delete(v30);
  v31 = (void *)*((_DWORD *)v1 + 161);
  if ( v31 )
    operator delete(v31);
  v32 = (void *)*((_DWORD *)v1 + 158);
  if ( v32 )
    operator delete(v32);
  v33 = (void *)*((_DWORD *)v1 + 155);
  if ( v33 )
    operator delete(v33);
  v34 = (void *)*((_DWORD *)v1 + 152);
  if ( v34 )
    operator delete(v34);
  v35 = (void *)*((_DWORD *)v1 + 149);
  if ( v35 )
    operator delete(v35);
  v36 = (void *)*((_DWORD *)v1 + 146);
  if ( v36 )
    operator delete(v36);
  v37 = (void *)*((_DWORD *)v1 + 143);
  if ( v37 )
    operator delete(v37);
  v38 = (void *)*((_DWORD *)v1 + 140);
  if ( v38 )
    operator delete(v38);
  v39 = (void *)*((_DWORD *)v1 + 137);
  if ( v39 )
    operator delete(v39);
  v40 = (void *)*((_DWORD *)v1 + 134);
  if ( v40 )
    operator delete(v40);
  v41 = (void *)*((_DWORD *)v1 + 131);
  if ( v41 )
    operator delete(v41);
  v42 = (void *)*((_DWORD *)v1 + 128);
  if ( v42 )
    operator delete(v42);
  *(_QWORD *)&v43 = *(_QWORD *)((char *)v1 + 500);
  if ( v43 != v44 )
      if ( *v43 )
        v45 = RenderChunkSorter::~RenderChunkSorter(*v43);
        operator delete((void *)v45);
      *v43 = 0;
      ++v43;
    while ( v44 != v43 );
    v43 = (RenderChunkSorter **)*((_DWORD *)v1 + 125);
  if ( v43 )
    operator delete(v43);
  *(_QWORD *)&v46 = *((_QWORD *)v1 + 61);
  if ( v46 != v47 )
      if ( *v46 )
        v48 = RenderChunkBuilder::~RenderChunkBuilder(*v46);
        operator delete((void *)v48);
      *v46 = 0;
      ++v46;
    while ( v47 != v46 );
    v46 = (RenderChunkBuilder **)*((_DWORD *)v1 + 122);
  if ( v46 )
    operator delete(v46);
  v49 = *((_DWORD *)v1 + 109);
  if ( v49 )
    (*(void (**)(void))(*(_DWORD *)v49 + 4))();
  *((_DWORD *)v1 + 109) = 0;
  v50 = (void **)*((_DWORD *)v1 + 108);
  if ( v50 )
    if ( *v50 )
      operator delete(*v50);
    operator delete(v50);
  result = v1;
  *((_DWORD *)v1 + 108) = 0;
  return result;
}


int __fastcall LevelBuilder::chunkIsInvalid(LevelBuilder *this, const SubChunkPos *a2)
{
  int result; // r0@1

  result = *((_DWORD *)this + 109);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 32))();
  return result;
}


unsigned int __fastcall LevelBuilder::waitForImmediateRebuilds(LevelBuilder *this)
{
  LevelBuilder *v1; // r11@1
  signed int v3; // r8@1
  unsigned __int8 *v4; // r10@1
  int v5; // r2@3
  int v6; // r12@3
  int v7; // lr@3
  int v8; // r2@4
  int v9; // r3@4
  int v10; // r5@4 OVERLAPPED
  int v11; // r6@4 OVERLAPPED
  int v18; // r9@5
  unsigned int result; // r0@5
  int v20; // r1@5
  unsigned int v23; // r0@8
  int v24; // r0@10
  int v25; // r0@11
  int v26; // r0@12
  int *v27; // r0@13
  int *v28; // r5@13
  int v29; // r0@13
  ChunkSource *v30; // r0@16
  __int64 v31; // r0@16
  RenderChunkBuilder *v32; // r0@18
  char *v33; // [sp+8h] [bp-48h]@1
  unsigned __int64 *v34; // [sp+Ch] [bp-44h]@1
  char *v35; // [sp+10h] [bp-40h]@1
  RenderChunkBuilder *v36; // [sp+14h] [bp-3Ch]@2
  char v37; // [sp+18h] [bp-38h]@15
  int v38; // [sp+20h] [bp-30h]@7
  int v39; // [sp+24h] [bp-2Ch]@7
  int v40; // [sp+28h] [bp-28h]@7

  v1 = this;
  _R9 = -715827883;
  v3 = -1431655765;
  v4 = (unsigned __int8 *)this + 772;
  v34 = (unsigned __int64 *)((char *)this + 780);
  v33 = (char *)this + 488;
  v35 = (char *)this + 904;
  while ( 1 )
  {
    v5 = *((_DWORD *)v1 + 194);
    __dmb();
    v6 = *((_DWORD *)v1 + 188);
    v7 = *((_DWORD *)v1 + 192);
    if ( !v5 )
      break;
    v8 = *((_DWORD *)v1 + 185);
    v9 = *((_DWORD *)v1 + 187);
    *(_QWORD *)&v10 = *(_QWORD *)((char *)v1 + 756);
LABEL_6:
    _R0 = v9 - v8;
    __asm { SMMUL.W         R0, R0, R9 }
    if ( ((v10 - v11) >> 2) * v3 + 42 * ((v7 - v6) >> 2) - 42 != ((signed int)_R0 >> 1) + (_R0 >> 31) )
    {
      v38 = 0;
      v39 = 0;
      v40 = 0;
      do
      {
        do
          v23 = __ldrex(v4);
        while ( __strex(1u, v4) );
        __dmb();
      }
      while ( v23 );
      v24 = *((_DWORD *)v1 + 185);
      v38 = *(_DWORD *)v24;
      v39 = *(_DWORD *)(v24 + 4);
      v40 = *(_DWORD *)(v24 + 8);
      if ( v24 == *((_DWORD *)v1 + 187) - 12 )
        operator delete(*((void **)v1 + 186));
        v26 = *((_DWORD *)v1 + 188);
        *((_DWORD *)v1 + 188) = v26 + 4;
        v25 = *(_DWORD *)(v26 + 4);
        *((_DWORD *)v1 + 186) = v25;
        *((_DWORD *)v1 + 187) = v25 + 504;
      else
        v25 = v24 + 12;
      *((_DWORD *)v1 + 185) = v25;
      __dmb();
      *((_BYTE *)v1 + 772) = 0;
      v27 = LevelRendererCamera::getChunkAt(*((LevelRendererCamera **)v1 + 171), (const SubChunkPos *)&v38);
      v28 = v27;
      v29 = *v27;
      if ( v29 && RenderChunk::isBuildState(v29, 0) == 1 )
        LevelBuilder::_uploadFinishedRenderChunk((int)v1, v28);
        std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos&>(
          &v37,
          v34,
          (int)&v38);
        v30 = (ChunkSource *)BlockSource::getChunkSource(*(BlockSource **)(*((_DWORD *)v1 + 171) + 1244));
        std::make_unique<RenderChunkBuilder,ChunkSource &,std::shared_ptr<RenderChunkSorterSharedInfo> &>(
          &v36,
          v30,
          (int)v35);
        v31 = *(_QWORD *)((char *)v1 + 492);
        if ( (_DWORD)v31 == HIDWORD(v31) )
        {
          std::vector<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>,std::allocator<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>>::_M_emplace_back_aux<std::unique_ptr<RenderChunkBuilder,std::default_delete<RenderChunkBuilder>>>(
            v33,
            (int *)&v36);
          if ( v36 )
          {
            v32 = RenderChunkBuilder::~RenderChunkBuilder(v36);
            operator delete((void *)v32);
          }
          v36 = 0;
        }
        else
          *(_DWORD *)v31 = v36;
          *((_DWORD *)v1 + 123) = v31 + 4;
    }
  }
  v8 = *((_DWORD *)v1 + 185);
  v9 = *((_DWORD *)v1 + 187);
  *(_QWORD *)&v10 = *(_QWORD *)((char *)v1 + 756);
  _R0 = v9 - v8;
  __asm { SMMUL.W         R0, R0, R9 }
  v18 = ((v10 - v11) >> 2) * v3 + 42 * ((v7 - v6) >> 2);
  result = ((signed int)_R0 >> 1) + (_R0 >> 31);
  v20 = v18 - 42;
  if ( v20 != result )
    goto LABEL_6;
  return result;
}


void __fastcall LevelBuilder::~LevelBuilder(LevelBuilder *this)
{
  LevelBuilder::~LevelBuilder(this);
}


BackgroundTask *__fastcall LevelBuilder::scheduleChunkBuild(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r9@1
  int v5; // r8@1
  char *v6; // r0@2
  int v7; // r1@2
  int v8; // r6@2
  RenderChunkBuilder *v9; // r2@2
  char *v10; // r0@2
  RenderChunkBuilder *v11; // r0@3
  int v12; // r0@4
  _DWORD *v13; // r6@4
  RenderChunkBuilder *v14; // r0@4
  RenderChunkBuilder *v15; // r0@5
  char v16; // r5@6
  int v17; // r6@6
  unsigned int *v18; // r0@7
  unsigned int v19; // r1@8
  int v20; // r7@9
  int v21; // r8@9
  _DWORD *v22; // r0@9
  BackgroundTask *result; // r0@9
  int v24; // r7@14
  int v25; // r8@14
  _DWORD *v26; // r0@14
  int v27; // r5@14
  unsigned int *v28; // r1@15
  unsigned int v29; // r2@16
  _DWORD *v30; // r0@18
  __int64 v31; // r1@18
  _DWORD *v38; // [sp+4h] [bp-8Ch]@18
  __int64 v39; // [sp+Ch] [bp-84h]@18
  _DWORD *v40; // [sp+14h] [bp-7Ch]@14
  int (*v41)(void); // [sp+1Ch] [bp-74h]@14
  signed int (__fastcall *v42)(int *); // [sp+20h] [bp-70h]@14
  char v43; // [sp+24h] [bp-6Ch]@9
  int (*v44)(void); // [sp+2Ch] [bp-64h]@9
  _DWORD *v45; // [sp+34h] [bp-5Ch]@9
  int (*v46)(void); // [sp+3Ch] [bp-54h]@9
  signed int (__fastcall *v47)(int **); // [sp+40h] [bp-50h]@9
  int v48; // [sp+44h] [bp-4Ch]@2
  int v49; // [sp+48h] [bp-48h]@2
  int v50; // [sp+4Ch] [bp-44h]@2
  RenderChunkBuilder *v51; // [sp+50h] [bp-40h]@2
  char v52; // [sp+54h] [bp-3Ch]@13
  char v53; // [sp+5Ch] [bp-34h]@13
  char v54; // [sp+68h] [bp-28h]@13

  v3 = a1;
  v4 = a2;
  v5 = a3;
  if ( (unsigned int)*(_QWORD *)(a1 + 488) == *(_QWORD *)(a1 + 488) >> 32 )
  {
    RenderChunk::getPosition((RenderChunk *)&v53, *a2);
    SubChunkPos::SubChunkPos((SubChunkPos *)&v54, (const BlockPos *)&v53);
    result = (BackgroundTask *)std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos&>(
                                 &v52,
                                 (unsigned __int64 *)(v3 + 808),
                                 (int)&v54);
  }
  else
    v6 = LevelRendererCamera::getWorldSpaceCamera(*(LevelRendererCamera **)(a1 + 684));
    v7 = *(_DWORD *)(v3 + 492);
    v8 = *v4;
    v9 = *(RenderChunkBuilder **)(v7 - 4);
    *(_DWORD *)(v7 - 4) = 0;
    v51 = v9;
    v10 = mce::Camera::getPosition((mce::Camera *)v6);
    v48 = *(_DWORD *)v10;
    v49 = *((_DWORD *)v10 + 1);
    v50 = *((_DWORD *)v10 + 2);
    RenderChunk::startRebuild(v8, (int *)&v51, (int)&v48);
    if ( v51 )
    {
      v11 = RenderChunkBuilder::~RenderChunkBuilder(v51);
      operator delete((void *)v11);
    }
    v51 = 0;
    v12 = *(_DWORD *)(v3 + 492);
    v13 = (_DWORD *)(v12 - 4);
    *(_DWORD *)(v3 + 492) = v12 - 4;
    v14 = *(RenderChunkBuilder **)(v12 - 4);
    if ( v14 )
      v15 = RenderChunkBuilder::~RenderChunkBuilder(v14);
      operator delete((void *)v15);
    *v13 = 0;
    v16 = Options::getTransparentLeaves(*(Options **)(*(_DWORD *)(v3 + 680) + 4500));
    v17 = Options::getSmoothLighting(*(Options **)(*(_DWORD *)(v3 + 680) + 4500));
    if ( v5 == 1 )
      v18 = (unsigned int *)(v3 + 776);
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      v20 = *v4;
      v21 = *(_DWORD *)(*(_DWORD *)(v3 + 680) + 4520);
      v22 = operator new(0xCu);
      *v22 = v20;
      v22[1] = v3;
      v22[2] = (v17 << 8) & 0xFFFFFFFE | v16 & 1;
      v45 = v22;
      v46 = (int (*)(void))sub_1356A0E;
      v47 = sub_1356916;
      v44 = 0;
      result = TaskGroup::queue(v21, (int)&v45, (int)&v43, 0, 0);
      if ( v44 )
        result = (BackgroundTask *)v44();
      if ( v46 )
        result = (BackgroundTask *)v46();
    else
      v24 = *v4;
      v25 = *(_DWORD *)(*(_DWORD *)(v3 + 680) + 4520);
      v26 = operator new(0xCu);
      *v26 = v24;
      v26[1] = v3;
      v26[2] = (v17 << 8) & 0xFFFFFFFE | v16 & 1;
      v27 = 0;
      v40 = v26;
      v41 = (int (*)(void))sub_1356B50;
      v42 = sub_1356B30;
      if ( v24 )
      {
        v28 = (unsigned int *)(v24 + 840);
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 + 1, v28) );
        v27 = v24;
      }
      v30 = operator new(8u);
      HIDWORD(v31) = sub_1356B8E;
      *v30 = v27;
      v30[1] = v3;
      LODWORD(v31) = sub_1356B98;
      v38 = v30;
      v39 = v31;
      _R0 = *v4;
      __asm
        VLDR            S0, [R0]
        VSQRT.F32       S0, S0
        VCVTR.S32.F32   S0, S0
        VMOV            R0, S0
      result = TaskGroup::queue(v25, (int)&v40, (int)&v38, _R0 + 16, 0x40u);
      if ( (_DWORD)v39 )
        result = (BackgroundTask *)((int (*)(void))v39)();
      if ( v41 )
        result = (BackgroundTask *)v41();
  return result;
}


void __fastcall LevelBuilder::_destroyBuilders(LevelBuilder *this)
{
  LevelBuilder::_destroyBuilders(this);
}


int __fastcall LevelBuilder::addChunkToBuild(LevelBuilder *this, const SubChunkPos *a2)
{
  unsigned __int8 *v2; // r4@1
  unsigned int v3; // r3@2
  int result; // r0@4
  int v5; // [sp+0h] [bp-10h]@4

  v2 = (unsigned __int8 *)this + 728;
  do
  {
    do
      v3 = __ldrex(v2);
    while ( __strex(1u, v2) );
    __dmb();
  }
  while ( v3 );
  std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos const&>(
    &v5,
    (unsigned __int64 *)this + 86,
    (int)a2);
  result = 0;
  __dmb();
  *v2 = 0;
  return result;
}


Player *__fastcall LevelBuilder::onNewChunkFor(LevelBuilder *this, Player *a2, LevelChunk *a3)
{
  Entity *v3; // r6@1
  LevelChunk *v4; // r4@1
  Player *result; // r0@1
  char *v6; // r0@3
  __int64 v7; // kr00_8@3
  int v8; // r7@3
  char *v9; // r0@3
  signed int v10; // r10@3
  signed int v11; // r7@3
  signed int v12; // r8@3
  int v13; // r5@3
  BlockSource *v14; // r6@3
  Player *v15; // r1@3
  signed int v16; // r2@3
  signed int v17; // r11@3
  int v18; // r8@3
  signed int v19; // r10@3 OVERLAPPED
  bool v20; // nf@4
  unsigned __int8 v21; // vf@4
  int v22; // r0@4
  int v23; // r1@6
  Player *v24; // r9@10 OVERLAPPED
  LevelChunk *v25; // r0@11
  bool v26; // zf@11
  signed int v27; // [sp+0h] [bp-50h]@3
  int v28; // [sp+Ch] [bp-44h]@3
  LevelBuilder *v29; // [sp+10h] [bp-40h]@1
  Player *v30; // [sp+14h] [bp-3Ch]@15
  int v31; // [sp+18h] [bp-38h]@15
  signed int v32; // [sp+1Ch] [bp-34h]@15
  __int64 v33; // [sp+20h] [bp-30h]@11

  v29 = this;
  v3 = a2;
  v4 = a3;
  result = *(Player **)(*((_DWORD *)this + 170) + 4512);
  if ( result == a2 )
  {
    result = (Player *)Entity::isRegionValid(a2);
    if ( result == (Player *)1 )
    {
      v6 = LevelChunk::getMin(v4);
      v7 = *(_QWORD *)v6;
      v8 = *((_DWORD *)v6 + 2);
      v9 = LevelChunk::getMax(v4);
      v10 = *(_QWORD *)v9 + 16;
      v11 = v8 - 16;
      v12 = *((_DWORD *)v9 + 2) + 16;
      v13 = ((v10 >> 4) + 1 - (((signed int)v7 - 16) >> 4))
          * (((signed int)(*(_QWORD *)v9 >> 32) >> 4) + 1 - (SHIDWORD(v7) >> 4))
          * ((v12 >> 4) + 1 - (v11 >> 4));
      v14 = (BlockSource *)Entity::getRegion(v3);
      v28 = SHIDWORD(v7) >> 4;
      v15 = (Player *)(((signed int)v7 - 16) >> 4);
      v16 = v12 >> 4;
      v17 = v10 >> 4;
      v18 = 0;
      v19 = v11 >> 4;
      v27 = v16;
LABEL_9:
      result = v15;
      while ( 1 )
      {
        v24 = result;
        if ( v13 == v18 )
          break;
        v33 = *(_QWORD *)(&v19 - 1);
        v25 = (LevelChunk *)BlockSource::getChunk(v14, (const ChunkPos *)&v33);
        v26 = v25 == 0;
        if ( v25 )
          v26 = v25 == v4;
        if ( !v26 && LevelChunk::isDirty(v25) == 1 )
        {
          v30 = v24;
          v31 = v28;
          v32 = v19;
          LevelBuilder::setDirty(v29, (const SubChunkPos *)&v30, 0, 1);
        }
        ++v18;
        result = (Player *)((char *)v24 + 1);
        if ( (signed int)v24 >= v17 )
          v21 = __OFSUB__(v19, v27);
          v20 = v19 - v27 < 0;
          v22 = v11 >> 4;
          if ( v19 < v27 )
            v22 = v19 + 1;
          v23 = v28;
          v19 = v22;
          if ( !(v20 ^ v21) )
            v23 = v28 + 1;
          v28 = v23;
          v15 = (Player *)(((signed int)v7 - 16) >> 4);
          goto LABEL_9;
      }
    }
  }
  return result;
}


void __fastcall LevelBuilder::onDimensionChanged(LevelBuilder *this)
{
  LevelBuilder::onDimensionChanged(this);
}


signed int __fastcall LevelBuilder::closeEnoughForImmediateRebuild(LevelBuilder *this, RenderChunk *a2, const Vec3 *a3)
{
  signed int result; // r0@1
  int v9; // [sp+0h] [bp-28h]@1
  float v10; // [sp+Ch] [bp-1Ch]@1

  _R4 = a3;
  RenderChunk::getCenter((RenderChunk *)&v9, (int)a2);
  Vec3::Vec3((int)&v10, (int)&v9);
  __asm { VLDR            S0, [R4] }
  result = 0;
  __asm
  {
    VLDR            S6, [SP,#0x28+var_1C]
    VLDR            S2, [R4,#4]
    VLDR            S8, [SP,#0x28+var_18]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R4,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [SP,#0x28+var_14]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =576.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


signed int __fastcall LevelBuilder::scheduleChunkSort(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  signed int v4; // r6@1
  char *v5; // r0@2
  int v6; // r1@2
  int v7; // r7@2
  RenderChunkSorter *v8; // r2@2
  char *v9; // r0@2
  RenderChunkSorter *v10; // r0@3
  int v11; // r7@4
  int v12; // r0@4
  _DWORD *v13; // r6@4
  RenderChunkSorter *v14; // r0@4
  RenderChunkSorter *v15; // r0@5
  int v20; // r6@6
  int v21; // r8@6
  _DWORD *v22; // r0@8
  unsigned int *v23; // r0@9
  unsigned int v24; // r1@10
  _DWORD *v25; // r0@12
  __int64 v26; // r1@12
  _DWORD *v30; // [sp+8h] [bp-50h]@12
  __int64 v31; // [sp+10h] [bp-48h]@12
  _DWORD *v32; // [sp+18h] [bp-40h]@8
  void (*v33)(void); // [sp+20h] [bp-38h]@8
  signed int (__fastcall *v34)(RenderChunk ***); // [sp+24h] [bp-34h]@8
  int v35; // [sp+28h] [bp-30h]@2
  int v36; // [sp+2Ch] [bp-2Ch]@2
  int v37; // [sp+30h] [bp-28h]@2
  RenderChunkSorter *v38; // [sp+34h] [bp-24h]@2

  v2 = a1;
  v3 = a2;
  v4 = 0;
  if ( (unsigned int)*(_QWORD *)(a1 + 500) != *(_QWORD *)(a1 + 500) >> 32 )
  {
    v5 = LevelRendererCamera::getWorldSpaceCamera(*(LevelRendererCamera **)(a1 + 684));
    v6 = *(_DWORD *)(v2 + 504);
    v7 = *v3;
    v8 = *(RenderChunkSorter **)(v6 - 4);
    *(_DWORD *)(v6 - 4) = 0;
    v38 = v8;
    v9 = mce::Camera::getPosition((mce::Camera *)v5);
    v35 = *(_DWORD *)v9;
    v36 = *((_DWORD *)v9 + 1);
    v37 = *((_DWORD *)v9 + 2);
    RenderChunk::startFaceSortOnly(v7, (int *)&v38, (int)&v35);
    if ( v38 )
    {
      v10 = RenderChunkSorter::~RenderChunkSorter(v38);
      operator delete((void *)v10);
    }
    v11 = 0;
    v38 = 0;
    v12 = *(_DWORD *)(v2 + 504);
    v13 = (_DWORD *)(v12 - 4);
    *(_DWORD *)(v2 + 504) = v12 - 4;
    v14 = *(RenderChunkSorter **)(v12 - 4);
    if ( v14 )
      v15 = RenderChunkSorter::~RenderChunkSorter(v14);
      operator delete((void *)v15);
    *v13 = 0;
    __asm { VMOV.F32        S0, #2.0 }
    v20 = *v3;
    __asm { VMOV.F32        S16, #0.5 }
    v21 = *(_DWORD *)(*(_DWORD *)(v2 + 680) + 4520);
    if ( *(_BYTE *)(*v3 + 356) )
      __asm { VMOVNE.F32      S16, S0 }
    v22 = operator new(4u);
    *v22 = v20;
    v32 = v22;
    v33 = (void (*)(void))sub_1356D1A;
    v34 = sub_1356D0C;
    if ( v20 )
      v23 = (unsigned int *)(v20 + 840);
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      v11 = v20;
    v25 = operator new(8u);
    HIDWORD(v26) = sub_1356D50;
    *v25 = v11;
    v25[1] = v2;
    LODWORD(v26) = sub_1356DAC;
    v30 = v25;
    v31 = v26;
    _R0 = *v3;
    __asm
      VLDR            S0, [R0]
      VSQRT.F32       S0, S0
      VDIV.F32        S0, S0, S16
      VCVTR.S32.F32   S0, S0
      VMOV            R3, S0
    TaskGroup::queue(v21, (int)&v32, (int)&v30, _R3, 0x40u);
    if ( (_DWORD)v31 )
      ((void (*)(void))v31)();
    if ( v33 )
      v33();
    v4 = 1;
  }
  return v4;
}


BackgroundTask *__fastcall LevelBuilder::tryRebuild(int a1, int *a2, const Vec3 *a3)
{
  int *v3; // r9@1
  int v4; // r11@1
  RenderChunk *v5; // r7@1
  BackgroundTask *result; // r0@1
  int v8; // r0@2
  int v9; // r1@2
  int v10; // r0@2
  int v11; // r4@3
  BlockSource *v12; // r6@5
  BlockSource *v13; // r5@7
  int v14; // r4@7
  int v15; // r6@8
  int v20; // r0@13
  int v21; // r1@13
  char v22; // [sp+4h] [bp-5Ch]@5
  int v23[3]; // [sp+10h] [bp-50h]@2
  char v24; // [sp+1Ch] [bp-44h]@16
  char v25; // [sp+24h] [bp-3Ch]@9
  float v26; // [sp+30h] [bp-30h]@7
  int v27; // [sp+34h] [bp-2Ch]@7

  v3 = a2;
  v4 = a1;
  v5 = (RenderChunk *)*a2;
  _R8 = a3;
  result = (BackgroundTask *)RenderChunk::isBuildState(*a2, 0);
  if ( result )
    return result;
  v8 = *(_DWORD *)(v4 + 680);
  v9 = *(_DWORD *)(v8 + 1552);
  v10 = *(_DWORD *)(v8 + 1556);
  v23[0] = v9;
  v23[1] = v10;
  v11 = RenderChunk::isDirty((int)v5, (__int64 *)v23, 0, 10) == 1 ? RenderChunk::isBuildState((int)v5, 2) ^ 1 : 1;
  v12 = *(BlockSource **)(*(_DWORD *)(v4 + 684) + 1244);
  RenderChunk::getPosition((RenderChunk *)&v22, (int)v5);
  result = (BackgroundTask *)BlockSource::hasChunksAt(v12, (const BlockPos *)&v22, 16);
  if ( result != (BackgroundTask *)1 )
  if ( v11 )
  {
LABEL_16:
    RenderChunk::getPosition((RenderChunk *)&v25, *v3);
    SubChunkPos::SubChunkPos((SubChunkPos *)&v26, (const BlockPos *)&v25);
    return (BackgroundTask *)std::_Hashtable<SubChunkPos,SubChunkPos,std::allocator<SubChunkPos>,std::__detail::_Identity,std::equal_to<SubChunkPos>,std::hash<SubChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::_M_emplace<SubChunkPos&>(
                               &v24,
                               (unsigned __int64 *)(v4 + 808),
                               (int)&v26);
  }
  ++*(_DWORD *)(v4 + 8);
  v13 = *(BlockSource **)(*(_DWORD *)(v4 + 684) + 1244);
  RenderChunk::getPosition((RenderChunk *)&v26, (int)v5);
  v27 -= 16;
  v14 = v27;
  if ( v14 >= BlockSource::getAllocatedHeightAt(v13, (const BlockPos *)&v26) )
    v20 = BlockSource::getDimension(v12);
    v21 = 0;
    if ( *(_BYTE *)(v20 + 108) == (unsigned __int8)Brightness::MIN )
      v21 = 1;
    RenderChunk::makeReadyAsEmpty(v5, v21);
    goto LABEL_16;
  RenderChunk::updateDistanceFromPlayer((RenderChunk *)*v3, _R8);
  v15 = 0;
  if ( RenderChunk::hasImmediateChange(v5) == 1 )
    RenderChunk::getCenter((RenderChunk *)&v25, *v3);
    Vec3::Vec3((int)&v26, (int)&v25);
    __asm
    {
      VLDR            S0, [R8]
      VLDR            S6, [SP,#0x60+var_30]
      VLDR            S2, [R8,#4]
      VLDR            S8, [SP,#0x60+var_2C]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R8,#8]
      VSUB.F32        S2, S8, S2
      VLDR            S10, [SP,#0x60+var_28]
      VSUB.F32        S4, S10, S4
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, =576.0
      VADD.F32        S0, S0, S4
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      v15 = 1;
  return LevelBuilder::scheduleChunkBuild(v4, v3, v15);
}


signed int __fastcall LevelBuilder::isChunkAllEmpty(LevelBuilder *this, RenderChunk *a2)
{
  BlockSource *v2; // r4@1
  int v3; // r6@1
  int v4; // r0@1
  signed int v5; // r1@1
  char v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1

  v2 = *(BlockSource **)(*((_DWORD *)this + 171) + 1244);
  RenderChunk::getPosition((RenderChunk *)&v7, (int)a2);
  v8 -= 16;
  v3 = v8;
  v4 = BlockSource::getAllocatedHeightAt(v2, (const BlockPos *)&v7);
  v5 = 0;
  if ( v3 >= v4 )
    v5 = 1;
  return v5;
}


_BOOL4 __fastcall LevelBuilder::isPositionVisible(LevelBuilder *this, const BlockPos *a2)
{
  int v2; // r0@1

  v2 = *((_DWORD *)this + 109);
  return v2 && (*(int (**)(void))(*(_DWORD *)v2 + 28))();
}
