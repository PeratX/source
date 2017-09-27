

int __fastcall LevelRendererCamera::tick(LevelRendererCamera *this)
{
  Dimension *v6; // r0@1
  BlockSource *v7; // r5@3
  int result; // r0@4
  char v10; // [sp+4h] [bp-24h]@3

  __asm { VMOV.F32        S16, #1.0 }
  _R4 = this;
  *((_DWORD *)this + 75) = *((_DWORD *)this + 76);
  v6 = (Dimension *)*((_DWORD *)this + 312);
  if ( v6 && Dimension::getId(v6) != 2 )
  {
    v7 = (BlockSource *)*((_DWORD *)_R4 + 311);
    BlockPos::BlockPos((int)&v10, (int)_R4 + 548);
    _R0 = BlockSource::getBrightness(v7, (const BlockPos *)&v10);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S4, =0.1
      VMOV            S2, R0
      VMUL.F32        S2, S2, S0
      VADD.F32        S0, S2, S0
      VLDR            S2, [R4,#0x130]
      VSUB.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VADD.F32        S16, S0, S2
    }
  }
  __asm { VSTR            S16, [R4,#0x130] }
  result = *((_DWORD *)_R4 + 307);
  if ( result )
    result = (*(int (__fastcall **)(LevelRendererCamera *))(*(_DWORD *)_R4 + 36))(_R4);
  return result;
}


char *__fastcall LevelRendererCamera::_addToRenderChunkQueue(LevelRendererCamera *this, const TerrainLayer *a2, RenderChunk *a3)
{
  RenderChunk *v3; // r4@1
  LevelRendererCamera *v4; // r5@1
  const TerrainLayer *v5; // r6@1
  char *result; // r0@1
  signed int v7; // r0@3
  int v8; // r5@7
  char *v9; // r0@7
  int *v10; // r7@7
  _BYTE *v11; // r8@9
  signed int v12; // r1@9
  unsigned int v13; // r2@9
  unsigned int v14; // r1@11
  unsigned int v15; // r6@11
  char *v16; // r10@17
  int v17; // r4@19
  int v18; // r4@21
  int v19; // [sp+0h] [bp-30h]@3
  int v20; // [sp+4h] [bp-2Ch]@3

  v3 = a3;
  v4 = this;
  v5 = a2;
  result = (char *)RenderChunk::hasLayer(a3, a2);
  if ( result == (char *)1 )
  {
    if ( *((_DWORD *)v5 + 1) == 1 )
    {
      RenderChunk::getPosition((RenderChunk *)&v19, (int)v3);
      v7 = 1;
      if ( v20 >= *((_WORD *)v4 + 626) )
        v7 = 2;
    }
    else
      v7 = 0;
    v8 = *((_DWORD *)v4 + 3 * v7 + 2) + 12 * *(_DWORD *)v5;
    v10 = (int *)(v8 + 4);
    v9 = *(char **)(v8 + 4);
    if ( v9 == *(char **)(v8 + 8) )
      v11 = *(_BYTE **)v8;
      v12 = (signed int)&v9[-*(_DWORD *)v8];
      v13 = v12 >> 2;
      if ( !(v12 >> 2) )
        v13 = 1;
      v14 = v13 + (v12 >> 2);
      v15 = v14;
      if ( 0 != v14 >> 30 )
        v15 = 0x3FFFFFFF;
      if ( v14 < v13 )
      if ( v15 )
      {
        if ( v15 >= 0x40000000 )
          sub_119C874();
        v16 = (char *)operator new(4 * v15);
        v11 = *(_BYTE **)v8;
        v9 = (char *)*v10;
      }
      else
        v16 = 0;
      *(_DWORD *)&v16[v9 - v11] = v3;
      v17 = (int)&v16[v9 - v11];
      if ( 0 != (v9 - v11) >> 2 )
        _aeabi_memmove4(v16, v11);
      v18 = v17 + 4;
      if ( v11 )
        operator delete(v11);
      *(_DWORD *)v8 = v16;
      result = &v16[4 * v15];
      *v10 = v18;
      *(_DWORD *)(v8 + 8) = result;
      *(_DWORD *)v9 = v3;
      result = (char *)(*v10 + 4);
      *v10 = (int)result;
  }
  return result;
}


char *__fastcall LevelRendererCamera::queueRenderEntities(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r5@1
  char *v4; // r11@1
  BlockSource *v10; // r4@3
  int v11; // r1@3
  int v12; // r3@4
  int v13; // r0@4
  int v14; // r1@4
  int v15; // r1@5
  int v16; // r2@5
  Entity **v18; // r6@6
  __int64 v19; // kr08_8@6
  int v21; // r7@16
  __int64 v22; // r0@16
  int v23; // r0@16
  Entity *v24; // r7@18
  _DWORD *v25; // r1@18
  int v26; // r0@18
  int v27; // r2@18
  int v28; // r3@18
  int *v29; // r7@19
  int v30; // r3@23
  int v31; // r0@23
  BlockEntity **v32; // r6@29
  __int64 v33; // kr10_8@29
  char *v34; // r5@30
  int (__fastcall *v38)(int, char *); // r4@32
  char *v39; // r0@32
  char *v40; // r0@33
  char *v41; // r0@34
  int v42; // r1@37
  char *result; // r0@40
  __int64 i; // r6@40
  char *v46; // r5@43
  int v47; // r4@44
  _DWORD *v48; // r1@44
  int v49; // r0@44
  int v50; // r2@44
  int v51; // r3@44
  int *v52; // r5@45
  int v53; // r3@49
  int v54; // r0@49
  char *v55; // r6@54
  Entity *v56; // r7@55
  EntityRenderDispatcher *v57; // r0@58
  char *v58; // r0@59
  _BYTE *v59; // r8@61
  char *v60; // r5@61
  unsigned int v61; // r2@61
  unsigned int v62; // r1@63
  unsigned int v63; // r4@63
  int v64; // r7@70
  int v65; // r7@72
  LevelBuilder *v66; // [sp+14h] [bp-84h]@6
  char v67; // [sp+18h] [bp-80h]@32
  int v68; // [sp+24h] [bp-74h]@30
  int v69; // [sp+28h] [bp-70h]@30
  int v70; // [sp+2Ch] [bp-6Ch]@30
  unsigned int v71; // [sp+30h] [bp-68h]@16
  unsigned int v72; // [sp+34h] [bp-64h]@16
  char v73; // [sp+3Ch] [bp-5Ch]@6
  int v74; // [sp+58h] [bp-40h]@4
  int v75; // [sp+5Ch] [bp-3Ch]@4
  int v76; // [sp+60h] [bp-38h]@4

  v2 = a1;
  v3 = a2;
  std::_Rb_tree<EntityRendererId,std::pair<EntityRendererId const,Entity *>,std::_Select1st<std::pair<EntityRendererId const,Entity *>>,std::less<EntityRendererId>,std::allocator<std::pair<EntityRendererId const,Entity *>>>::_M_erase(
    a1 + 44,
    *(_DWORD *)(a1 + 52));
  v4 = (char *)(v2 + 48);
  *(_DWORD *)(v2 + 56) = v2 + 48;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 60) = v2 + 48;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 1220) = *(_DWORD *)(v2 + 1216);
  *(_DWORD *)(v2 + 72) = *(_DWORD *)(v2 + 68);
  *(_DWORD *)(v2 + 84) = *(_DWORD *)(v2 + 80);
  _R1 = v2 + 92;
  __asm { VLDR            S0, =-13.856 }
  *(_DWORD *)(_R1 + 4) = *(_DWORD *)(v2 + 92);
  __asm
  {
    VLDR            S2, [R1,#0xD8]
    VADD.F32        S0, S2, S0
    VLDR            S2, =72.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  v10 = *(BlockSource **)(v2 + 1244);
  v11 = *(_DWORD *)(v3 + 52);
  if ( v11 )
    v12 = *(_DWORD *)v11;
    v74 = *(_DWORD *)v11;
    v13 = *(_DWORD *)(v11 + 4);
    v75 = *(_DWORD *)(v11 + 4);
    v14 = *(_DWORD *)(v11 + 8);
    v76 = v14;
  else
    v15 = *(_DWORD *)(v2 + 564);
    v16 = *(_DWORD *)(v2 + 568);
    v74 = *(_DWORD *)(v2 + 560);
    v75 = v15;
    v76 = v16;
    v13 = v15;
    v12 = v74;
    v14 = v16;
    VMOV            R2, S0
    VMUL.F32        S16, S0, S0
  v66 = (LevelBuilder *)(v2 + 1260);
  LevelBuilder::getFrustumAABB(COERCE_FLOAT(&v73), COERCE_FLOAT(v2 + 1260), _R2, v12, v13, v14);
  v19 = *(_QWORD *)BlockSource::fetchEntities(v10, 0, (const AABB *)&v73);
  v18 = (Entity **)v19;
  if ( (_DWORD)v19 != HIDWORD(v19) )
    do
    {
      if ( !Entity::isGlobal(*v18) )
      {
        _R0 = (*(int (**)(void))(*(_DWORD *)*v18 + 52))();
        __asm
        {
          VLDR            S0, [R0]
          VLDR            S6, [SP,#0x98+var_40]
          VLDR            S2, [R0,#4]
          VLDR            S8, [SP,#0x98+var_3C]
          VSUB.F32        S0, S6, S0
          VLDR            S4, [R0,#8]
          VSUB.F32        S2, S8, S2
          VLDR            S10, [SP,#0x98+var_38]
          VSUB.F32        S4, S10, S4
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VMUL.F32        S4, S4, S4
          VADD.F32        S0, S2, S0
          VADD.F32        S0, S0, S4
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( LevelRendererCamera::isAABBVisible((LevelRendererCamera *)v2, (Entity *)((char *)*v18 + 264), 0) == 1
            && !Entity::isRemoved(*v18) )
          {
            if ( LevelBuilder::cullerIsVisible(v66, (Entity *)((char *)*v18 + 264))
              || Entity::isRide(*v18) == 1 && Entity::isControlledByLocalInstance(**((Entity ***)*v18 + 119))
              || Entity::isLeashed(*v18) == 1
              && ((v21 = *(_DWORD *)(v2 + 1240),
                   v22 = Entity::getLeashHolder((Entity *)&v71, (int)*v18),
                   (v23 = Level::fetchEntity(v21, SHIDWORD(v22), v71, v72, 0)) == 0)
               || LevelBuilder::cullerIsVisible(v66, (const AABB *)(v23 + 264)) == 1) )
            {
              v24 = *v18;
              v25 = operator new(0x18u);
              v26 = *((_DWORD *)v24 + 62);
              v25[4] = v26;
              v25[5] = *v18;
              v27 = v2 + 48;
              v28 = *(_DWORD *)(v2 + 52);
              if ( v28 )
              {
                do
                {
                  v27 = v28;
                  v29 = (int *)(v28 + 12);
                  if ( v26 < *(_DWORD *)(v28 + 16) )
                    v29 = (int *)(v28 + 8);
                  v28 = *v29;
                }
                while ( *v29 );
              }
              if ( v4 == (char *)v27 )
                v31 = 1;
              else
                v30 = *(_DWORD *)(v27 + 16);
                _VF = __OFSUB__(v26, v30);
                _NF = v26 - v30 < 0;
                v31 = 0;
                if ( _NF ^ _VF )
                  v31 = 1;
              sub_119CAA8(v31, (int)v25, v27, v2 + 48);
              ++*(_DWORD *)(v2 + 64);
            }
          }
      }
      ++v18;
    }
    while ( v18 != (Entity **)HIDWORD(v19) );
  v33 = *(_QWORD *)BlockSource::fetchBlockEntities(v10, (const AABB *)&v73);
  v32 = (BlockEntity **)v33;
  if ( (_DWORD)v33 != HIDWORD(v33) )
      v34 = BlockEntity::getPosition(*v32);
      BlockPos::BlockPos((int)&v68, (int)&v74);
      _R0 = *(_DWORD *)v34 - v68;
      __asm { VMOV            S0, R0 }
      _R0 = *((_DWORD *)v34 + 1) - v69;
      __asm { VMOV            S2, R0 }
      _R0 = *((_DWORD *)v34 + 2) - v70;
      __asm
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VMOV            S4, R0
        VCVT.F32.S32    S4, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v38 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v2 + 88);
        v39 = BlockEntity::getPosition(*v32);
        Vec3::Vec3((int)&v67, (int)v39);
        if ( !v38(v2, &v67) )
          v40 = BlockEntity::getAABB(*v32);
          if ( LevelRendererCamera::isAABBVisible((LevelRendererCamera *)v2, (const AABB *)v40, 0) == 1 )
            v41 = BlockEntity::getAABB(*v32);
            if ( LevelBuilder::cullerIsVisible(v66, (const AABB *)v41) == 1 )
              std::vector<BlockEntity *,std::allocator<BlockEntity *>>::emplace_back<BlockEntity * const&>(
                v2 + 68,
                (int *)v32);
              if ( (*(int (**)(void))(*(_DWORD *)*v32 + 88))() == 1 )
                std::vector<BlockEntity *,std::allocator<BlockEntity *>>::emplace_back<BlockEntity * const&>(
                  v2 + 80,
                  (int *)v32);
              v42 = *(_DWORD *)(v2 + 1244);
              _R0 = (*(int (**)(void))(*(_DWORD *)*v32 + 84))();
              __asm
                VMOV            S0, R0
                VCMPE.F32       S0, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( !_ZF )
                  v2 + 92,
      ++v32;
    while ( (BlockEntity **)HIDWORD(v33) != v32 );
  result = Level::getGlobalEntities(*(Level **)(v2 + 1240));
  for ( i = *(_QWORD *)result; (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 4 )
    v46 = (char *)(*(int (**)(void))(**(_DWORD **)i + 524))();
    result = (char *)BlockSource::getDimensionId(*(BlockSource **)(v2 + 1244));
    if ( v46 == result )
      v47 = *(_DWORD *)i;
      v48 = operator new(0x18u);
      v49 = *(_DWORD *)(v47 + 248);
      v48[4] = v49;
      v48[5] = *(_DWORD *)i;
      v50 = v2 + 48;
      v51 = *(_DWORD *)(v2 + 52);
      if ( v51 )
        do
          v50 = v51;
          v52 = (int *)(v51 + 12);
          if ( v49 < *(_DWORD *)(v51 + 16) )
            v52 = (int *)(v51 + 8);
          v51 = *v52;
        while ( *v52 );
      if ( v4 == (char *)v50 )
        v54 = 1;
      else
        v53 = *(_DWORD *)(v50 + 16);
        _VF = __OFSUB__(v49, v53);
        _NF = v49 - v53 < 0;
        v54 = 0;
        if ( _NF ^ _VF )
          v54 = 1;
      sub_119CAA8(v54, (int)v48, v50, v2 + 48);
      result = (char *)(*(_DWORD *)(v2 + 64) + 1);
      *(_DWORD *)(v2 + 64) = result;
  v55 = *(char **)(v2 + 56);
  if ( v55 != v4 )
      v56 = (Entity *)*((_DWORD *)v55 + 5);
      if ( v56 )
        if ( !Entity::hasCategory(*((_DWORD *)v55 + 5), 1) )
          Entity::setRegion(v56, *(BlockSource **)(v2 + 1244));
        v57 = (EntityRenderDispatcher *)LevelRenderer::getEntityRenderDispatcher(*(LevelRenderer **)(v2 + 1256));
        if ( EntityRenderDispatcher::hasWaterHole(v57, v56) == 1 )
          v58 = *(char **)(v2 + 1220);
          if ( v58 == *(char **)(v2 + 1224) )
            v59 = *(_BYTE **)(v2 + 1216);
            v60 = 0;
            v61 = (v58 - v59) >> 2;
            if ( !v61 )
              v61 = 1;
            v62 = v61 + ((v58 - v59) >> 2);
            v63 = v61 + ((v58 - v59) >> 2);
            if ( 0 != v62 >> 30 )
              v63 = 0x3FFFFFFF;
            if ( v62 < v61 )
            if ( v63 )
              if ( v63 >= 0x40000000 )
                sub_119C874();
              v60 = (char *)operator new(4 * v63);
              v59 = *(_BYTE **)(v2 + 1216);
              v58 = *(char **)(v2 + 1220);
            *(_DWORD *)&v60[v58 - v59] = v56;
            v64 = (int)&v60[v58 - v59];
            if ( 0 != (v58 - v59) >> 2 )
              _aeabi_memmove4(v60, v59);
            v65 = v64 + 4;
            if ( v59 )
              operator delete(v59);
            *(_DWORD *)(v2 + 1216) = v60;
            *(_DWORD *)(v2 + 1220) = v65;
            *(_DWORD *)(v2 + 1224) = &v60[4 * v63];
          else
            *(_DWORD *)v58 = v56;
            *(_DWORD *)(v2 + 1220) += 4;
      result = (char *)sub_119CAC8((int)v55);
      v55 = result;
    while ( result != v4 );
  return result;
}


int __fastcall LevelRendererCamera::fetchRenderChunkReadyCount(LevelRendererCamera *this)
{
  RenderChunk **v1; // r5@1 OVERLAPPED
  RenderChunk **v2; // r6@1 OVERLAPPED
  int i; // r4@1

  *(_QWORD *)&v1 = *((_QWORD *)this + 60);
  for ( i = 0; v2 != v1; ++v1 )
  {
    if ( *v1 && RenderChunk::isReady(*v1) )
      ++i;
  }
  return i;
}


float __fastcall LevelRendererCamera::renderSunOrMoon(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v5; // r6@1
  float result; // r0@3
  int v17; // r7@7
  int v20; // r7@7
  Weather *v21; // r0@7
  int v23; // r7@11
  int v25; // r0@16
  int v26; // [sp+8h] [bp-98h]@7
  float v27; // [sp+Ch] [bp-94h]@7
  __int64 v28; // [sp+10h] [bp-90h]@7
  char v29; // [sp+18h] [bp-88h]@7
  int v30; // [sp+20h] [bp-80h]@7
  int v31; // [sp+24h] [bp-7Ch]@7
  int v32; // [sp+28h] [bp-78h]@7
  float v33; // [sp+2Ch] [bp-74h]@7
  int v34; // [sp+30h] [bp-70h]@7
  int v35; // [sp+34h] [bp-6Ch]@7
  int v36; // [sp+38h] [bp-68h]@7
  int v37; // [sp+3Ch] [bp-64h]@7
  int v38; // [sp+40h] [bp-60h]@7
  int v39; // [sp+44h] [bp-5Ch]@7
  int v40; // [sp+48h] [bp-58h]@7
  int v41; // [sp+4Ch] [bp-54h]@7
  int v42; // [sp+50h] [bp-50h]@7
  int v43; // [sp+54h] [bp-4Ch]@7
  int v44; // [sp+58h] [bp-48h]@7
  int v45; // [sp+5Ch] [bp-44h]@7
  int v46; // [sp+60h] [bp-40h]@7
  int v47; // [sp+64h] [bp-3Ch]@7
  int v48; // [sp+68h] [bp-38h]@7
  int v49; // [sp+6Ch] [bp-34h]@7

  v3 = a2;
  _R5 = a1;
  v5 = a3;
  _R0 = Dimension::getSunAngle(*(Dimension **)(a1 + 1248), *(float *)(a2 + 8));
  __asm
  {
    VMOV            S2, R0
    VLDR            S16, =0.0
    VLDR            S0, =180.0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S16 }
  _R1 = &mce::Math::RADDEG;
    VLDR            S4, [R1]
    VMUL.F32        S2, S4, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  result = fmodf(_R0, 360.0);
    VMOV            S20, R0
    VLDR            S0, =105.0
    VCMPE.F32       S20, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    goto LABEL_20;
    VLDR            S0, =255.0
  if ( !(_NF ^ _VF) )
LABEL_20:
    __asm
    {
      VLDR            S2, =14.04
      VLDR            S0, =9.462
    }
    if ( !_ZF )
      __asm { VMOVNE.F32      S0, S2 }
    __asm { VLDR            S18, [R5,#0x178] }
    _R0 = &mce::Math::DEGRAD;
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
    _R8 = tanf(_R0);
    MatrixStack::push((MatrixStack *)&v29, *(_DWORD *)(v3 + 16) + 16);
    v17 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    v30 = 0;
    v31 = 0;
    v32 = 1065353216;
    __asm { VSTR            S20, [SP,#0xA0+var_74] }
    glm::rotate<float>((int)&v34, v17, (int)&v33, (int)&v30);
    *(_DWORD *)v17 = v34;
    *(_DWORD *)(v17 + 4) = v35;
    *(_DWORD *)(v17 + 8) = v36;
    *(_DWORD *)(v17 + 12) = v37;
    *(_DWORD *)(v17 + 16) = v38;
    *(_DWORD *)(v17 + 20) = v39;
    *(_DWORD *)(v17 + 24) = v40;
    *(_DWORD *)(v17 + 28) = v41;
    *(_DWORD *)(v17 + 32) = v42;
    *(_DWORD *)(v17 + 36) = v43;
    *(_DWORD *)(v17 + 40) = v44;
    *(_DWORD *)(v17 + 44) = v45;
    *(_DWORD *)(v17 + 48) = v46;
    *(_DWORD *)(v17 + 52) = v47;
    *(_DWORD *)(v17 + 56) = v48;
    *(_DWORD *)(v17 + 60) = v49;
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
      VLDR            S0, =1.05
      VLDR            S2, [R0,#0x14]
      VMUL.F32        S0, S18, S0
      VLDR            S4, [R0,#0x18]
      VLDR            S8, [R0,#0x10]
      VLDR            S6, [R0,#0x1C]
      VLDR            S10, [R0,#0x34]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S8, S8, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, [R0,#0x30]
      VADD.F32        S2, S10, S2
      VADD.F32        S4, S12, S4
      VADD.F32        S6, S6, S8
      VADD.F32        S0, S14, S0
      VSTR            S6, [R0,#0x30]
      VSTR            S2, [R0,#0x34]
      VSTR            S4, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
      VLDR            S2, =2.1
      VMOV            S0, R8
      VMUL.F32        S2, S18, S2
      VMUL.F32        S0, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VSTR            S0, [R0,#0x2C]
    v20 = MatrixStack::MatrixStackRef::operator->((int)&v29);
    v26 = 0;
    v27 = 1.0;
    LODWORD(v28) = 0;
    v30 = 1119092736;
    glm::rotate<float>((int)&v34, v20, (int)&v30, (int)&v26);
    *(_DWORD *)v20 = v34;
    *(_DWORD *)(v20 + 4) = v35;
    *(_DWORD *)(v20 + 8) = v36;
    *(_DWORD *)(v20 + 12) = v37;
    *(_DWORD *)(v20 + 16) = v38;
    *(_DWORD *)(v20 + 20) = v39;
    *(_DWORD *)(v20 + 24) = v40;
    *(_DWORD *)(v20 + 28) = v41;
    *(_DWORD *)(v20 + 32) = v42;
    *(_DWORD *)(v20 + 36) = v43;
    *(_DWORD *)(v20 + 40) = v44;
    *(_DWORD *)(v20 + 44) = v45;
    *(_DWORD *)(v20 + 48) = v46;
    *(_DWORD *)(v20 + 52) = v47;
    *(_DWORD *)(v20 + 56) = v48;
    *(_DWORD *)(v20 + 60) = v49;
    v26 = Color::WHITE;
    v27 = unk_283E614;
    v28 = qword_283E618;
    v21 = (Weather *)Dimension::getWeather(*(Dimension **)(_R5 + 1248));
    _R0 = Weather::getFogLevel(v21);
      VMOV.F32        S2, #-2.0
      VMOV            S0, R0
      VMOV.F32        S18, #1.0
      VADD.F32        S0, S0, S18
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S0, S18
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S16, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S16, S18 }
    __asm { VSTR            S16, [SP,#0xA0+var_90+4] }
    ShaderColor::setColor(*(ShaderColor **)(v3 + 48), (const Color *)&v26);
    v23 = _R5 + 188;
    if ( *(_BYTE *)(_R5 + 1233) )
      v23 = _R5 + 212;
    if ( v5 == 1 )
      _R0 = MatrixStack::MatrixStackRef::operator->((int)&v29);
      __asm
      {
        VLDR            S0, =0.35
        VLDR            S2, [R5,#0x164]
        VMUL.F32        S0, S2, S0
        VLDR            S2, [R0]
        VADD.F32        S0, S0, S18
        VMUL.F32        S2, S0, S2
        VSTR            S2, [R0]
        VLDR            S2, [R0,#4]
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R0,#4]
        VLDR            S2, [R0,#8]
        VSTR            S2, [R0,#8]
        VLDR            S2, [R0,#0xC]
        VSTR            S2, [R0,#0xC]
        VLDR            S2, [R0,#0x10]
        VSTR            S2, [R0,#0x10]
        VLDR            S2, [R0,#0x14]
        VSTR            S2, [R0,#0x14]
        VLDR            S2, [R0,#0x18]
        VSTR            S2, [R0,#0x18]
        VLDR            S2, [R0,#0x1C]
        VSTR            S2, [R0,#0x1C]
        VLDR            S2, [R0,#0x20]
        VSTR            S2, [R0,#0x20]
        VLDR            S2, [R0,#0x24]
        VSTR            S2, [R0,#0x24]
        VLDR            S2, [R0,#0x28]
        VSTR            S2, [R0,#0x28]
        VLDR            S2, [R0,#0x2C]
        VSTR            S0, [R0,#0x2C]
      }
      mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(_R5 + 1256) + 516), v3, v23, *(_DWORD *)(_R5 + 1256) + 1464, 0, 0);
        VLDR            S0, [R5,#0x164]
        VLDR            S2, =0.2
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S2, [SP,#0xA0+var_98]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [SP,#0xA0+var_98]
          VLDR            S2, [SP,#0xA0+var_94]
          VSTR            S2, [SP,#0xA0+var_94]
          VLDR            S2, [SP,#0xA0+var_90]
          VMUL.F32        S0, S2, S0
          VSTR            S0, [SP,#0xA0+var_90]
        }
        ShaderColor::setColor(*(ShaderColor **)(v3 + 48), (const Color *)&v26);
        mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(_R5 + 1256) + 516), v3, v23, *(_DWORD *)(_R5 + 1256) + 1464, 0, 0);
    else
      v25 = Dimension::getMoonPhase(*(Dimension **)(_R5 + 1248));
      mce::Mesh::render(
        (mce::Buffer *)(*(_DWORD *)(_R5 + 1256) + 100 * v25 + 616),
        v3,
        v23,
        *(_DWORD *)(_R5 + 1256) + 1488,
        0,
        0);
    result = COERCE_FLOAT(MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v29));
  return result;
}


int __fastcall LevelRendererCamera::skyDarkeningFactor(LevelRendererCamera *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.2
    VLDR            S2, [R0,#0x164]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall LevelRendererCamera::getAllocatedChunks(LevelRendererCamera *this)
{
  int *v1; // r1@1 OVERLAPPED
  int *v2; // r2@1 OVERLAPPED
  int result; // r0@1
  int v4; // t1@2

  *(_QWORD *)&v1 = *((_QWORD *)this + 60);
  result = 0;
  while ( v2 != v1 )
  {
    v4 = *v1;
    ++v1;
    if ( v4 )
      ++result;
  }
  return result;
}


BackgroundTask *__fastcall LevelRendererCamera::tickClouds(int a1, int a2, int _R2)
{
  int v4; // r5@1
  int v12; // r7@1
  BackgroundTask *v15; // r1@4
  BackgroundTask *result; // r0@4
  mce::TextureGroup *v17; // r5@8
  ImageUtils *v18; // r5@8
  char *v19; // r0@8
  char *v20; // r0@9
  bool v21; // r2@10
  unsigned int v22; // r6@12
  int v23; // r5@12
  _DWORD *v24; // r0@12
  signed int v25; // r6@12
  _DWORD *v26; // r0@16
  __int64 v27; // r1@16
  signed int v28; // r3@16
  unsigned int *v29; // r2@23
  signed int v30; // r1@25
  unsigned int *v31; // r2@27
  signed int v32; // r1@29
  _DWORD *v33; // [sp+4h] [bp-64h]@16
  __int64 v34; // [sp+Ch] [bp-5Ch]@16
  _DWORD *v35; // [sp+14h] [bp-54h]@16
  int (*v36)(void); // [sp+1Ch] [bp-4Ch]@16
  signed int (__fastcall *v37)(int **); // [sp+20h] [bp-48h]@16
  char *v38; // [sp+28h] [bp-40h]@8
  char *v39; // [sp+2Ch] [bp-3Ch]@8
  int v40; // [sp+30h] [bp-38h]@8

  _R4 = a1;
  v4 = a2;
  __asm { VMOV            S16, R2 }
  _R0 = _aeabi_ul2f(*(_DWORD *)(*(_DWORD *)(a1 + 1256) + 1552), *(_DWORD *)(*(_DWORD *)(a1 + 1256) + 1556));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.02
  }
  _R0 = _R4 + 1200;
  _R8 = *(_DWORD *)(_R4 + 568);
  __asm { VADD.F32        S0, S0, S16 }
  v12 = *(_DWORD *)(v4 + 56);
    VLDR            S18, [R4,#0x228]
    VMOV            S4, R8
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R4,#0x230]
    VADD.F32        S16, S0, S2
    VLDR            S0, [R0]
  _R0 = _R4 + 1208;
  __asm { VLDR            S2, [R0] }
  _R0 = _R4 + 1204;
    VLDR            S6, [R0]
    VSUB.F32        S2, S2, S4
    VSUB.F32        S0, S0, S16
    VMUL.F32        S4, S6, S6
    VMUL.F32        S2, S2, S2
    VMUL.F32        S0, S0, S0
    VADD.F32        S0, S4, S0
    VADD.F32        S0, S0, S2
    VLDR            S2, =225.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || mce::Mesh::isValid((mce::Mesh *)(_R4 + 572)) != 1 )
    goto LABEL_41;
  __asm { VLDR            S0, =129.0 }
  v15 = 0;
  result = (BackgroundTask *)*(_BYTE *)(_R4 + 1212);
    VCMPE.F32       S18, S0
  if ( !(_NF ^ _VF) )
    v15 = (BackgroundTask *)1;
  if ( v15 != result )
LABEL_41:
    result = (BackgroundTask *)*(_BYTE *)(_R4 + 1213);
    if ( !*(_BYTE *)(_R4 + 1213) )
    {
      v17 = *(mce::TextureGroup **)(*(_DWORD *)(_R4 + 1256) + 12);
      sub_119C884((void **)&v38, "textures/environment/clouds");
      v39 = v38;
      v38 = (char *)&unk_28898CC;
      v40 = 0;
      v18 = (ImageUtils *)(mce::TextureGroup::getTexturePair(v17, (const ResourceLocation *)&v39) + 64);
      v19 = v39 - 12;
      if ( (int *)(v39 - 12) != &dword_28898C0 )
      {
        v29 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      }
      v20 = v38 - 12;
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v38 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      if ( !mce::TextureContainer::isValid(v18) )
        ImageUtils::uncompress(v18, (mce::TextureContainer *)1, v21);
      v22 = mce::TextureContainer::getImage(v18, 0);
      *(_BYTE *)(_R4 + 1213) = 1;
      v23 = *(_DWORD *)(*(_DWORD *)(_R4 + 1256) + 4520);
      v24 = operator new(0x18u);
      __asm
        VLDR            S0, =129.0
        VCMPE.F32       S18, S0
      *v24 = _R4;
      v24[1] = v22;
      __asm { VMRS            APSR_nzcv, FPSCR }
      v25 = 0;
      __asm { VSTR            S16, [R0,#8] }
      if ( !(_NF ^ _VF) )
        v25 = 1;
      if ( v12 != 1 )
        v12 = 0;
      v24[3] = 0;
      v24[4] = _R8;
      v24[5] = v25 | (v12 << 8);
      v35 = v24;
      v36 = (int (*)(void))sub_F1BFD0;
      v37 = sub_F1BF64;
      v26 = operator new(0x14u);
      LODWORD(v27) = sub_F1C06E;
      *v26 = _R4;
      HIDWORD(v27) = sub_F1C016;
      __asm { VSTR            S16, [R0,#4] }
      v26[2] = 0;
      v26[3] = _R8;
      v26[4] = v25;
      v33 = v26;
      v34 = v27;
      v28 = mce::Mesh::isValid((mce::Mesh *)(_R4 + 572));
      if ( v28 )
        v28 = 900;
      result = TaskGroup::queue(v23, (int)&v35, (int)&v33, v28, 0xFFFFFFFF);
      if ( (_DWORD)v34 )
        result = (BackgroundTask *)((int (*)(void))v34)();
      if ( v36 )
        result = (BackgroundTask *)v36();
    }
  return result;
}


int __fastcall LevelRendererCamera::isPositionTooCloseToCamera(LevelRendererCamera *this, const Vec3 *a2)
{
  return 0;
}


signed int __fastcall LevelRendererCamera::queueChunk(LevelRendererCamera *this, RenderChunk *a2, float _R2, int a4)
{
  int v9; // r6@1
  LevelRendererCamera *v10; // r5@1
  signed int result; // r0@2
  const TerrainLayer **v12; // r6@4
  int v13; // r7@5
  const TerrainLayer *v14; // t1@6

  _R4 = a2;
  __asm
  {
    VMOV            S0, R2
    VLDR            S2, [R4]
  }
  v9 = a4;
  v10 = this;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    ++unk_27F3F50;
    v12 = (const TerrainLayer **)TerrainLayer::sNearLayers;
    result = dword_27D2990 - TerrainLayer::sNearLayers;
    if ( (dword_27D2990 - TerrainLayer::sNearLayers) >> 2 )
    {
      v13 = 4 * (result >> 2);
      do
      {
        v14 = *v12;
        ++v12;
        result = (signed int)LevelRendererCamera::_addToRenderChunkQueue(v10, v14, _R4);
        v13 -= 4;
      }
      while ( v13 );
    }
  else
    ++unk_27F3F70;
    LevelRendererCamera::_addToRenderChunkQueue(this, (const TerrainLayer *)&TerrainLayer::Far, a2);
    LevelRendererCamera::_addToRenderChunkQueue(v10, (const TerrainLayer *)&TerrainLayer::FarSeasons, _R4);
    LevelRendererCamera::_addToRenderChunkQueue(v10, (const TerrainLayer *)&TerrainLayer::FarSeasonsAlpha, _R4);
    LevelRendererCamera::_addToRenderChunkQueue(v10, (const TerrainLayer *)&TerrainLayer::BlendFar, _R4);
    result = (signed int)LevelRendererCamera::_addToRenderChunkQueue(
                           v10,
                           (const TerrainLayer *)&TerrainLayer::EndPortal,
                           _R4);
    if ( v9 == 1 )
      result = (signed int)j_j_j__ZN19LevelRendererCamera22_addToRenderChunkQueueERK12TerrainLayerR11RenderChunk(
                             v10,
                             (const TerrainLayer *)&TerrainLayer::Water,
                             _R4);
  return result;
}


char *__fastcall LevelRendererCamera::getViewArea(LevelRendererCamera *this)
{
  return (char *)this + 384;
}


int __fastcall LevelRendererCamera::renderChunkQueue(int a1, unsigned int a2, int **a3)
{
  int **v4; // r10@1
  unsigned int v5; // r11@1
  __int64 v6; // r1@1
  int v7; // r5@1
  signed int v8; // r9@1
  Options *v9; // r0@1
  signed int v10; // r1@1
  signed int v11; // r8@1
  int v12; // r7@1
  int result; // r0@3
  int v18; // r4@6
  int v19; // r0@6
  int v20; // t1@6
  unsigned int v21; // r4@6
  int v23; // r3@6
  int v24; // r0@6
  signed int v25; // r1@6
  __int64 v26; // [sp+0h] [bp-50h]@0
  mce::RenderContext *v27; // [sp+10h] [bp-40h]@1
  float v28; // [sp+14h] [bp-3Ch]@6

  _R6 = a1;
  v4 = a3;
  v5 = a2;
  v6 = *(_QWORD *)a3;
  v7 = 0;
  v8 = 1;
  v9 = *(Options **)(*(_DWORD *)(a1 + 1256) + 4500);
  v10 = (*(_QWORD *)v6 >> 32) - *(_QWORD *)v6;
  v27 = *(mce::RenderContext **)(v5 + 12);
  v11 = v10 >> 2;
  v12 = *(_DWORD *)(v5 + 32);
  if ( *(_DWORD *)(HIDWORD(v6) + 4) == 1 )
  {
    v7 = (v10 >> 2) - 1;
    v8 = -1;
    v11 = -1;
  }
  result = Options::getDevShowChunkMap(v9);
  if ( v7 != v11 )
    __asm
    {
      VLDR            S0, =0.99
      VMOV.F32        S16, #1.0
    }
    if ( result )
      __asm { VMOVNE.F32      S16, S0 }
    do
      v18 = **v4;
      RenderChunk::getPosition((RenderChunk *)&v28, *(_DWORD *)(v18 + 4 * v7));
      v19 = *(_DWORD *)(v12 + 8);
      *(_BYTE *)(v19 + 17) = 1;
      __asm
      {
        VLDR            S0, [SP,#0x50+var_3C]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R6,#0x230]
      }
      v20 = *(_DWORD *)(v19 + 20);
        VSUB.F32        S0, S0, S2
        VSTR            S0, [R0]
        VLDR            S0, [SP,#0x50+var_38]
        VLDR            S2, [R6,#0x234]
        VSTR            S0, [R0,#4]
        VLDR            S0, [SP,#0x50+var_34]
        VLDR            S2, [R6,#0x238]
        VSTR            S0, [R0,#8]
        VSTR            S16, [R0,#0xC]
      mce::ConstantBufferConstantsBase::sync((mce::ConstantBufferConstantsBase *)v12, v27);
      v21 = *(_DWORD *)(v18 + 4 * v7);
      _R0 = mce::Clock::currentTime(*(mce::Clock **)(v5 + 28));
      __asm { VMOV            S0, R0 }
      v24 = *(_DWORD *)(_R6 + 1232);
      __asm { VCVT.F64.F32    D0, S0 }
      v25 = v24 & 0xFF0000;
      if ( v24 & 0xFF0000 )
        v25 = 1;
      v24 = (unsigned __int8)v24;
      if ( (_BYTE)v24 )
        v24 = 1;
      __asm { VSTR            D0, [SP,#0x50+var_50] }
      result = RenderChunk::render(COERCE_DOUBLE(__PAIR__(v5, v21)), (int)v4, v23, v26, v24, v25);
      v7 += v8;
    while ( v11 != v7 );
  return result;
}


int __fastcall LevelRendererCamera::onAppResumed(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r4@1
  int result; // r0@1

  v1 = this;
  LevelBuilder::onAppResumed((LevelRendererCamera *)((char *)this + 1260));
  GridArea<Boxed<RenderChunk>>::clear((int)v1 + 384);
  *((_DWORD *)v1 + 91) = 0;
  LevelRendererCamera::setupViewArea(v1);
  *((_DWORD *)v1 + 131) = *((_DWORD *)v1 + 137);
  *((_DWORD *)v1 + 132) = *((_DWORD *)v1 + 138);
  result = *((_DWORD *)v1 + 139);
  *((_DWORD *)v1 + 133) = result;
  return result;
}


int __fastcall LevelRendererCamera::getCameraDeltaToUpdateArea(LevelRendererCamera *this, float a2)
{
  int result; // r0@5

  __asm
  {
    VMOV            S4, R0
    VLDR            S6, =80.0
    VMOV.F32        S8, #16.0
    VLDR            S2, =0.0625
    VCMPE.F32       S4, S6
    VLDR            S6, =64.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S0, #8.0
    VMUL.F32        S2, S4, S2
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S8 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


signed int __fastcall LevelRendererCamera::isAboveClouds(LevelRendererCamera *this, const BlockPos *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *((_WORD *)this + 626);
  result = 0;
  if ( *((_DWORD *)a2 + 1) >= v2 )
    result = 1;
  return result;
}


int __fastcall LevelRendererCamera::renderChunks(int a1, int a2, LevelRenderer *this, int a4, int a5)
{
  LevelRenderer *v5; // r7@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r8@1
  int *v9; // r4@1
  signed int v10; // r1@3
  int result; // r0@10
  int v12; // r1@10
  int v13; // r3@10
  int v14; // r1@10
  char v15; // r0@14
  int v16; // [sp+4h] [bp-3Ch]@13
  LevelRenderer *v17; // [sp+8h] [bp-38h]@13
  char v18; // [sp+Ch] [bp-34h]@16
  char v19; // [sp+Dh] [bp-33h]@16
  char v20; // [sp+10h] [bp-30h]@6
  int v21; // [sp+14h] [bp-2Ch]@6
  char v22; // [sp+1Ch] [bp-24h]@3
  int v23; // [sp+20h] [bp-20h]@3

  v5 = this;
  v6 = a1;
  v7 = a4;
  v8 = a2;
  v9 = (int *)LevelRenderer::terrainRenderLayerToGeometryLayer(this, (const TerrainLayer *)a2);
  if ( a5 == 2 )
  {
    BlockPos::BlockPos((int)&v20, v6 + 548);
    v10 = 2;
    if ( v21 >= *(_WORD *)(v6 + 1252) )
      v10 = 1;
  }
  else if ( a5 == 1 )
    BlockPos::BlockPos((int)&v22, v6 + 548);
    v10 = 1;
    if ( v23 >= *(_WORD *)(v6 + 1252) )
      v10 = 2;
  else
    v10 = 0;
  result = *v9;
  v12 = *(_DWORD *)(v6 + 12 * v10 + 8);
  v13 = *(_DWORD *)(v12 + 12 * *v9);
  v14 = v12 + 12 * *v9;
  if ( v13 != *(_DWORD *)(v14 + 4) || TerrainLayer::Water == result || TerrainLayer::Blend == result )
    v16 = v14;
    v17 = v5;
    if ( v7 )
      v15 = 1;
    else
      v15 = *(_BYTE *)(v6 + 316);
    v18 = v15;
    v19 = 0;
    result = LevelRendererCamera::renderChunkQueue(v6, v8, (int **)&v16);
  return result;
}


int __fastcall LevelRendererCamera::getCloudCenterPos(LevelRendererCamera *this, float a2, int _R2)
{
  LevelRendererCamera *v4; // r5@1
  int result; // r0@1

  _R4 = a2;
  v4 = this;
  __asm { VMOV            S16, R2 }
  _R0 = _aeabi_ul2f(
          *(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 1256) + 1552),
          *(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 1256) + 1556));
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =0.02
  }
  result = *(_DWORD *)(LODWORD(_R4) + 568);
    VADD.F32        S0, S0, S16
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R4,#0x230]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5]
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = result;
  return result;
}


char *__fastcall LevelRendererCamera::getLevelBuilder(LevelRendererCamera *this)
{
  return (char *)this + 1260;
}


int *__fastcall LevelRendererCamera::recalculateRenderDistance(LevelRendererCamera *this, float _R1)
{
  char *v7; // r1@6
  char *v9; // r2@10
  float v11; // [sp+0h] [bp-10h]@6
  int v12; // [sp+4h] [bp-Ch]@1

  __asm
  {
    VMOV.F32        S6, #16.0
    VLDR            S4, =0.0625
  }
  v12 = 1109393408;
  __asm { VMOV.F32        S2, #8.0 }
  _R2 = *((_DWORD *)this + 92);
    VMOV            S0, R2
    VCVT.F32.S32    S0, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S6 }
  __asm { VMUL.F32        S4, S0, S4 }
    __asm { VMOVGT.F32      S4, S2 }
    VSUB.F32        S0, S0, S4
    VSTR            S0, [SP,#0x10+var_10]
  if ( *((_BYTE *)this + 1233) )
    __asm { VLDR            S2, [R0,#0x144] }
    v7 = (char *)&v11;
    __asm
    {
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v7 = (char *)this + 324;
    _R1 = *(_DWORD *)v7;
    *((_DWORD *)this + 94) = _R1;
    __asm { VMOV            S0, R1 }
  else
      VMOV            S2, R1
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R0,#0x178]
  __asm { VLDR            S2, =40.0 }
  v9 = (char *)&v12;
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    v9 = (char *)this + 376;
  *((_DWORD *)this + 94) = *(_DWORD *)v9;
  return LevelRendererCamera::updateFarChunksDistance(this);
}


signed int __fastcall LevelRendererCamera::tickRain(LevelRendererCamera *this)
{
  Weather *v2; // r0@1
  WeatherRenderer *v4; // r6@1
  BlockSource *v5; // r4@1
  float v6; // r0@1
  signed int result; // r0@1
  signed int v12; // r2@4
  unsigned int v13; // r0@4
  int v14; // r1@4
  int v15; // r0@5
  int *v16; // r4@5
  int v17; // r5@5
  int v18; // r1@7
  int v19; // ST20_4@8
  unsigned int v20; // r7@8
  unsigned int v21; // r4@8
  int v22; // ST1C_4@8
  unsigned int v23; // r6@8
  unsigned int v24; // r0@8
  int *v27; // r11@8
  int v28; // r0@8
  Weather *v29; // r0@11
  Level *v32; // r0@13
  char *v33; // r0@13
  int v34; // r4@14
  float *v35; // r2@14
  int v36; // r1@14
  int v37; // r0@14
  BlockPos *v39; // [sp+18h] [bp-AA0h]@4
  int v40; // [sp+24h] [bp-A94h]@8
  float v41; // [sp+34h] [bp-A84h]@16
  float v44; // [sp+40h] [bp-A78h]@19
  int v45; // [sp+4Ch] [bp-A6Ch]@14
  int v46; // [sp+50h] [bp-A68h]@14
  int v47; // [sp+54h] [bp-A64h]@14
  char v48; // [sp+58h] [bp-A60h]@14
  unsigned int v49; // [sp+64h] [bp-A54h]@8
  int v50; // [sp+68h] [bp-A50h]@8
  int v51; // [sp+6Ch] [bp-A4Ch]@8
  unsigned int v52; // [sp+70h] [bp-A48h]@8
  int v53; // [sp+74h] [bp-A44h]@8
  unsigned int v54; // [sp+78h] [bp-A40h]@8
  unsigned int v55; // [sp+7Ch] [bp-A3Ch]@8
  int v56; // [sp+80h] [bp-A38h]@8
  unsigned int v57; // [sp+84h] [bp-A34h]@8
  int v58; // [sp+88h] [bp-A30h]@6
  int v59; // [sp+8Ch] [bp-A2Ch]@8
  int v60; // [sp+90h] [bp-A28h]@8
  unsigned int v61; // [sp+94h] [bp-A24h]@4
  unsigned int v62; // [sp+98h] [bp-A20h]@4
  int v63; // [sp+A58h] [bp-60h]@4
  char v64; // [sp+A5Ch] [bp-5Ch]@4
  int v65; // [sp+A60h] [bp-58h]@4
  int v66; // [sp+A64h] [bp-54h]@6

  _R9 = this;
  v2 = (Weather *)Dimension::getWeather(*((Dimension **)this + 312));
  _R8 = Weather::getRainLevel(v2, 1.0);
  Options::getFancyGraphics(*(Options **)(*((_DWORD *)_R9 + 314) + 4500));
  v4 = (WeatherRenderer *)*((_DWORD *)_R9 + 307);
  v5 = (BlockSource *)*((_DWORD *)_R9 + 311);
  v6 = COERCE_FLOAT(_aeabi_ul2f(*(_DWORD *)(*((_DWORD *)_R9 + 314) + 1552), *(_DWORD *)(*((_DWORD *)_R9 + 314) + 1556)));
  result = WeatherRenderer::tick(v4, v5, v6);
  __asm
  {
    VMOV.F32        S0, #0.5
    VMOV            S2, R8
    VMUL.F32        S16, S2, S0
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S2 }
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v12 = 1;
    v39 = v5;
    v13 = 312987231 * *(_DWORD *)(*((_DWORD *)_R9 + 314) + 1552);
    v61 = v13;
    v63 = 625;
    v14 = 0;
    v64 = 0;
    v65 = 0;
    v62 = v13;
    do
    {
      v15 = v13 ^ (v13 >> 30);
      v16 = (int *)(&v61 + v14);
      v17 = v14++ + 1812433253 * v15;
      v13 = v12++ + 1812433253 * v15;
      v16[2] = v17 + 1;
    }
    while ( v14 != 397 );
    v63 = 624;
    v66 = 398;
    BlockPos::BlockPos((int)&v58, (int)_R9 + 548);
    __asm
      VMUL.F32        S0, S16, S16
      VLDR            S2, =100.0
    *((_DWORD *)_R9 + 85) = 0;
    *((_DWORD *)_R9 + 86) = 0;
    *((_DWORD *)_R9 + 83) = 0;
    *((_DWORD *)_R9 + 84) = 0;
      VMUL.F32        S0, S0, S2
      VCVTR.S32.F32   S2, S0
      VCVTR.S32.F32   S0, S0
      VSTR            S2, [R9,#0x160]
      VMOV            R0, S0
    if ( result >= 1 )
      __asm
      {
        VLDR            D8, =2.32830644e-10
        VLDR            S18, =0.2
      }
      v18 = 0;
      __asm { VLDR            S20, =1024.0 }
      while ( 1 )
        v19 = v58;
        v40 = v18;
        v20 = Random::_genRandInt32((Random *)&v61);
        v21 = Random::_genRandInt32((Random *)&v61);
        v22 = v60;
        v23 = Random::_genRandInt32((Random *)&v61);
        v24 = Random::_genRandInt32((Random *)&v61);
        _R4 = v20 % 0xA - v21 % 0xA + v19;
        v55 = _R4;
        v56 = v59;
        _R6 = v23 % 0xA - v24 % 0xA + v22;
        v57 = _R6;
        BlockSource::getTopRainBlockPos((BlockSource *)&v52, v39, (const BlockPos *)&v55);
        v55 = v52;
        v56 = v53;
        v49 = v52;
        v57 = v54;
        v50 = v53 - 1;
        v51 = v54;
        v27 = (int *)BlockSource::getMaterial(v39, (const BlockPos *)&v49);
        v28 = BlockSource::getBiome(v39, (const BlockPos *)&v55);
        if ( v56 > v59 + 10 )
          goto LABEL_21;
        if ( v56 < v59 - 10 )
        if ( !*(_BYTE *)(v28 + 260) )
        v29 = (Weather *)Dimension::getWeather(*((Dimension **)_R9 + 312));
        if ( Weather::isRainingAt(v29, v39, (const BlockPos *)&v55) != 1 )
        _R0 = Random::_genRandInt32((Random *)&v61);
        __asm
        {
          VMOV            S0, R0
          VCVT.F64.U32    D11, S0
        }
          VCVT.F64.U32    D12, S0
        if ( Material::isType(v27, 6) != 1 )
          break;
        v32 = (Level *)BlockSource::getLevel(v39);
        v33 = Level::getRandom(v32);
        if ( !(Random::_genRandInt32((Random *)v33) % 0x14) )
          v34 = BlockSource::getLevel(v39);
          Vec3::Vec3((int)&v48, (int)&v55);
          v45 = 0;
          v46 = 0;
          v35 = (float *)&v48;
          v47 = 0;
          v36 = 4;
          v37 = v34;
LABEL_20:
          Level::addParticle(v37, v36, (int)v35);
LABEL_21:
        result = *((_DWORD *)_R9 + 88);
        v18 = v40 + 1;
        if ( v40 + 1 >= result )
          return result;
      if ( Material::isType(v27, 0) )
        goto LABEL_21;
        VMUL.F64        D0, D11, D8
        VMOV            S4, R4
        VCVT.F32.F64    S0, D0
        VCVT.F32.S32    S4, S4
        VMUL.F64        D1, D12, D8
      ++*((_DWORD *)_R9 + 86);
        VADD.F32        S0, S0, S4
        VMOV            S6, R6
        VCVT.F32.F64    S2, D1
        VSTR            S0, [R9,#0x14C]
        VLDR            S4, [SP,#0xAB8+var_A38]
        VCVT.F32.S32    S6, S6
        VADD.F32        S4, S4, S18
        VADD.F32        S2, S2, S6
        VSTR            S4, [R9,#0x150]
        VSTR            S2, [R9,#0x154]
        VSTR            S0, [SP,#0xAB8+var_A78]
        VSTR            S4, [SP,#0xAB8+var_A74]
        VSTR            S2, [SP,#0xAB8+var_A70]
      Vec3::Vec3((int)&v41, (int)&v55);
        VLDR            S0, [R9,#0x224]
        VLDR            S6, [SP,#0xAB8+var_A84]
        VLDR            S2, [R9,#0x228]
        VLDR            S8, [SP,#0xAB8+var_A80]
        VSUB.F32        S0, S6, S0
        VLDR            S4, [R9,#0x22C]
        VSUB.F32        S2, S8, S2
        VLDR            S10, [SP,#0xAB8+var_A7C]
        VSUB.F32        S4, S10, S4
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VCMPE.F32       S0, S20
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      _R0 = WeatherRenderer::getPrecipitationAmount(*((_DWORD *)_R9 + 307), 0);
        VMOV            S0, R0
        VCMPE.F32       S0, #0.0
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v37 = BlockSource::getLevel(v39);
      v35 = &v44;
      v36 = 31;
      goto LABEL_20;
  return result;
}


LevelRendererCamera *__fastcall LevelRendererCamera::renderEntities(LevelRendererCamera *this, BaseEntityRenderContext *a2)
{
  BaseEntityRenderContext *v2; // r10@1
  LevelRendererCamera *v3; // r9@1
  EntityRenderDispatcher *v4; // r8@1
  LevelRendererCamera *result; // r0@1
  int v6; // r7@1
  Entity *v7; // r6@2
  int v8; // r5@4
  Options *v9; // r0@5

  v2 = a2;
  v3 = this;
  v4 = (EntityRenderDispatcher *)BaseEntityRenderContext::getEntityRenderDispatcher(a2);
  BaseEntityRenderContext::setCameraPosition(v2, (LevelRendererCamera *)((char *)v3 + 548));
  BaseEntityRenderContext::setCameraTargetPosition(v2, (LevelRendererCamera *)((char *)v3 + 560));
  result = (LevelRendererCamera *)BaseEntityRenderContext::setWorldClipRegion(v2, (const AABB *)&AABB::EMPTY);
  v6 = *((_DWORD *)v3 + 14);
  if ( (LevelRendererCamera *)v6 != (LevelRendererCamera *)((char *)v3 + 48) )
  {
    do
    {
      ++unk_27F3F90;
      v7 = *(Entity **)(v6 + 20);
      if ( v7 )
      {
        if ( Entity::isRiding(*(Entity **)(v6 + 20)) != 1
          || (v8 = Entity::getRide(v7),
              v8 != ClientInstance::getLocalPlayer(*(ClientInstance **)(*((_DWORD *)v3 + 314) + 4508)))
          || (v9 = (Options *)ClientInstance::getOptions(*(ClientInstance **)(*((_DWORD *)v3 + 314) + 4508)),
              Options::getPlayerViewPerspective(v9)) )
        {
          EntityRenderDispatcher::render(v4, v2, v7);
        }
      }
      result = (LevelRendererCamera *)sub_119CAC8(v6);
      v6 = (int)result;
    }
    while ( result != (LevelRendererCamera *)((char *)v3 + 48) );
  }
  return result;
}


char *__fastcall LevelRendererCamera::LevelRendererDebugInformation::render(LevelRendererCamera::LevelRendererDebugInformation *this, BaseEntityRenderContext *a2, DebugRenderer *a3)
{
  LevelRendererCamera::LevelRendererDebugInformation *v3; // r5@1
  mce::Camera *v4; // r4@1
  char *v5; // r4@1
  char *result; // r0@1
  mce::Camera *i; // r4@1
  mce::Camera *v8; // r6@1
  char *v9; // r5@2

  v3 = this;
  v4 = (LevelRendererCamera::LevelRendererDebugInformation *)((char *)this + 24);
  mce::Camera::getPosition((LevelRendererCamera::LevelRendererDebugInformation *)((char *)this + 24));
  mce::Camera::getRightVector(v4);
  mce::Camera::getUpVector(v4);
  mce::Camera::getForwardVector(v4);
  v5 = mce::Camera::getFrustum(v4);
  Frustum::getNearClippingPlaneEdges((Frustum *)v5);
  result = Frustum::getFarClippingPlaneEdges((Frustum *)v5);
  v8 = (mce::Camera *)(*(_QWORD *)((char *)v3 + 12) >> 32);
  for ( i = (mce::Camera *)*(_QWORD *)((char *)v3 + 12); v8 != i; i = (mce::Camera *)((char *)i + 368) )
  {
    mce::Camera::getPosition(i);
    mce::Camera::getRightVector(i);
    mce::Camera::getUpVector(i);
    mce::Camera::getForwardVector(i);
    v9 = mce::Camera::getFrustum(i);
    Frustum::getNearClippingPlaneEdges((Frustum *)v9);
    result = Frustum::getFarClippingPlaneEdges((Frustum *)v9);
  }
  return result;
}


int __fastcall LevelRendererCamera::getRenderDistanceZFar(LevelRendererCamera *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x148]
    VLDR            S2, [R0,#0x178]
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall LevelRendererCamera::onWillChangeDimension(LevelRendererCamera *this, Player *a2)
{
  LevelRendererCamera *v2; // r4@1

  v2 = this;
  TaskGroup::flush(*(TaskGroup **)(*((_DWORD *)this + 314) + 4520));
  GridArea<Boxed<RenderChunk>>::clear((int)v2 + 384);
  std::_Rb_tree<EntityRendererId,std::pair<EntityRendererId const,Entity *>,std::_Select1st<std::pair<EntityRendererId const,Entity *>>,std::less<EntityRendererId>,std::allocator<std::pair<EntityRendererId const,Entity *>>>::_M_erase(
    (int)v2 + 44,
    *((_DWORD *)v2 + 13));
  *((_DWORD *)v2 + 13) = 0;
  *((_DWORD *)v2 + 14) = (char *)v2 + 48;
  *(_QWORD *)((char *)v2 + 60) = (unsigned int)v2 + 48;
  *((_BYTE *)v2 + 1213) = 0;
  ParticleEngine::clear(*(ParticleEngine **)(*((_DWORD *)v2 + 314) + 1568));
  LevelBuilder::_destroyBuilders((LevelRendererCamera *)((char *)v2 + 1260));
  return j_j_j__ZN13PoolAllocator4trimEv((PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator);
}


int __fastcall LevelRendererCamera::updatePerChunkFaceSortState(LevelRendererCamera *this, const Vec3 *a2)
{
  LevelRendererCamera *v2; // r4@1
  const Vec3 *v3; // r5@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r1@1
  int v7; // r1@1
  int v8; // r7@1
  int v9; // r9@1
  __int64 v10; // kr08_8@1
  bool v11; // zf@1
  int result; // r0@5
  int v13; // r8@6
  int v14; // r1@6
  int v15; // r2@6
  int v16; // r11@6
  int v17; // r5@6
  _DWORD *v18; // r0@6
  int v19; // r1@6
  int v20; // r2@6
  char v21; // [sp+8h] [bp-60h]@6
  void (*v22)(void); // [sp+10h] [bp-58h]@6
  int v23; // [sp+18h] [bp-50h]@6
  int v24; // [sp+1Ch] [bp-4Ch]@6
  int v25; // [sp+20h] [bp-48h]@6
  _DWORD *v26; // [sp+28h] [bp-40h]@6
  void (*v27)(void); // [sp+30h] [bp-38h]@6
  signed int (__fastcall *v28)(LevelRendererCamera ***); // [sp+34h] [bp-34h]@6
  int v29; // [sp+38h] [bp-30h]@1
  int v30; // [sp+3Ch] [bp-2Ch]@2
  int v31; // [sp+40h] [bp-28h]@5

  v2 = this;
  v3 = a2;
  BlockPos::BlockPos((int)&v29, (int)a2);
  v4 = *((_DWORD *)v2 + 541);
  v5 = *(_DWORD *)v3;
  __dmb();
  *(_DWORD *)v4 = v5;
  v6 = *((_DWORD *)v3 + 1);
  *(_DWORD *)(v4 + 4) = v6;
  v7 = *((_DWORD *)v3 + 2);
  *(_DWORD *)(v4 + 8) = v7;
  v8 = *((_QWORD *)v2 + 64) >> 32;
  v9 = *((_QWORD *)v2 + 64);
  v10 = *(_QWORD *)&v29;
  v11 = v29 == v9;
  if ( v29 == v9 )
    v11 = v30 == v8;
  if ( !v11 || (result = v31, v8 = v30, v31 != *((_DWORD *)v2 + 130)) )
  {
    v13 = *(_DWORD *)(*((_DWORD *)v2 + 314) + 4520);
    v14 = *((_DWORD *)v3 + 1);
    v15 = *((_DWORD *)v3 + 2);
    v23 = *(_DWORD *)v3;
    v24 = v14;
    v25 = v15;
    v16 = *((_DWORD *)v2 + 130);
    v17 = v31;
    v18 = operator new(0x28u);
    *v18 = v2;
    v19 = v23;
    v20 = v24;
    v18[3] = v25;
    v18[2] = v20;
    v18[1] = v19;
    *((_QWORD *)v18 + 2) = v10;
    v18[6] = v17;
    v18[7] = v9;
    v18[8] = v8;
    v18[9] = v16;
    v26 = v18;
    v27 = (void (*)(void))sub_F1CF88;
    v28 = sub_F1CCDE;
    v22 = 0;
    TaskGroup::queue(v13, (int)&v26, (int)&v21, 1u, 0xFFFFFFFF);
    if ( v22 )
      v22();
    if ( v27 )
      v27();
    *((_DWORD *)v2 + 128) = v29;
    *((_DWORD *)v2 + 129) = v30;
    result = v31;
    *((_DWORD *)v2 + 130) = v31;
  }
  return result;
}


signed int __fastcall LevelRendererCamera::setupFog(int a1, int a2, int a3)
{
  int v16; // r1@5
  int v17; // r2@5
  int v18; // r3@5
  int v19; // r12@5
  int v20; // r0@5
  BlockSource *v21; // r7@6
  int v23; // r1@9
  int v24; // r2@9
  int v25; // r3@9
  Dimension *v26; // r0@9
  Weather *v27; // r0@9
  char *v29; // r0@13
  signed int result; // r0@17
  int v32; // [sp+4h] [bp-8Ch]@13
  int v33; // [sp+8h] [bp-88h]@13
  int v34; // [sp+Ch] [bp-84h]@13
  Dimension v35[2]; // [sp+10h] [bp-80h]@13
  char v39; // [sp+20h] [bp-70h]@9
  int v40; // [sp+24h] [bp-6Ch]@9
  int v41; // [sp+28h] [bp-68h]@9
  int v42; // [sp+2Ch] [bp-64h]@9
  char v43; // [sp+34h] [bp-5Ch]@6
  char v44; // [sp+40h] [bp-50h]@5
  int v45; // [sp+44h] [bp-4Ch]@5
  int v46; // [sp+48h] [bp-48h]@5
  int v47; // [sp+4Ch] [bp-44h]@5

  _R9 = a2;
  _R4 = a1;
  __asm { VLDR            S18, [R9,#8] }
  _R8 = a3;
  __asm { VMOV            R10, S18 }
  _R0 = Dimension::getTimeOfDay(*(Dimension **)(a1 + 1248), *(float *)&_R10);
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::TAU;
  __asm
  {
    VLDR            S0, [R1]
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  _R0 = cosf(_R0);
    VMOV            S0, R0
    VLDR            S22, =0.0
    VMOV.F32        S20, #0.5
    VADD.F32        S0, S0, S0
    VMOV.F32        S16, #1.0
    VADD.F32        S0, S0, S20
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S22, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S22, S16 }
  __asm { VMOV            R7, S22 }
  (*(void (__fastcall **)(char *))(**(_DWORD **)(_R4 + 1248) + 140))(&v44);
  v16 = v45;
  v17 = v46;
  v18 = v47;
  v19 = _R4 + 276;
  *(_DWORD *)v19 = *(_DWORD *)&v44;
  *(_DWORD *)(v19 + 4) = v16;
  *(_DWORD *)(v19 + 8) = v17;
  *(_DWORD *)(v19 + 12) = v18;
  *(_DWORD *)(_R4 + 320) = 0;
  *(_DWORD *)(_R4 + 324) = 0;
  v20 = *(_DWORD *)(_R4 + 1232);
  if ( (_BYTE)v20 )
    v21 = *(BlockSource **)(_R4 + 1244);
    BlockPos::BlockPos((int)&v43, _R4 + 548);
    _R0 = BlockSource::getBiome(v21, (const BlockPos *)&v43);
    __asm
    {
      VLDR            S0, =0.65
      VMOV.F32        S10, #10.0
      VLDR            S2, =0.35
      VMUL.F32        S0, S22, S0
      VLDR            S8, [R0,#0x100]
      VLDR            S4, [R0,#0xF8]
      VLDR            S6, [R0,#0xFC]
      VADD.F32        S0, S0, S2
      VLDR            S2, [R0,#0xF4]
      VMUL.F32        S8, S8, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VSUB.F32        S12, S16, S8
      VSTR            S2, [R4,#0x114]
      VSTR            S4, [R4,#0x118]
      VSTR            S0, [R4,#0x11C]
      VSTR            S8, [R4,#0x120]
    }
    *(_DWORD *)(_R4 + 320) = 0;
      VMUL.F32        S6, S12, S10
      VSTR            S6, [R4,#0x144]
  else if ( v20 & 0xFF0000 )
    *(_DWORD *)(_R4 + 276) = 1058642330;
    *(_DWORD *)(_R4 + 280) = 1036831949;
    *(_DWORD *)(_R4 + 284) = 0;
    *(_DWORD *)(_R4 + 288) = 1065353216;
    *(_QWORD *)(_R4 + 320) = 4549716486523977728LL;
  else
    (*(void (__fastcall **)(char *))(**(_DWORD **)(_R4 + 1248) + 140))(&v39);
    v23 = v40;
    v24 = v41;
    v25 = v42;
    *(_DWORD *)(_R4 + 276) = *(_DWORD *)&v39;
    *(_DWORD *)(_R4 + 280) = v23;
    *(_DWORD *)(_R4 + 284) = v24;
    *(_DWORD *)(_R4 + 288) = v25;
    *(_DWORD *)(_R4 + 320) = *(_DWORD *)(_R4 + 312);
    *(_DWORD *)(_R4 + 324) = *(_DWORD *)(_R4 + 308);
    v26 = (Dimension *)BlockSource::getDimension(*(BlockSource **)(_R4 + 1244));
    v27 = (Weather *)Dimension::getWeather(v26);
    _R0 = Weather::getFogLevel(v27);
      VMOV            S22, R0
      VCMPE.F32       S22, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !Dimension::hasCeiling(*(Dimension **)(_R4 + 1248)) )
      __asm
      {
        VLDR            S0, =0.299
        VMUL.F32        S14, S22, S20
        VLDR            S2, [R4,#0x114]
        VLDR            S4, [R4,#0x118]
        VLDR            S10, =0.587
        VMUL.F32        S0, S2, S0
        VLDR            S6, [R4,#0x11C]
        VMUL.F32        S10, S4, S10
        VLDR            S12, =0.114
        VLDR            S8, [R4,#0x120]
        VMUL.F32        S12, S6, S12
        VADD.F32        S0, S10, S0
        VSUB.F32        S10, S16, S22
        VADD.F32        S0, S0, S12
        VMUL.F32        S2, S2, S10
        VMUL.F32        S4, S4, S10
        VMUL.F32        S6, S6, S10
        VMUL.F32        S8, S8, S10
        VMOV.F32        S10, #-0.75
        VMUL.F32        S0, S14, S0
        VADD.F32        S2, S0, S2
        VADD.F32        S4, S0, S4
        VADD.F32        S0, S0, S6
        VADD.F32        S6, S8, S22
        VMUL.F32        S8, S22, S10
        VSTR            S2, [R4,#0x114]
        VSTR            S4, [R4,#0x118]
        VSTR            S0, [R4,#0x11C]
        VSTR            S6, [R4,#0x120]
        VLDR            S0, [R4,#0x140]
        VMUL.F32        S2, S8, S0
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x140]
        VLDR            S0, [R4,#0x144]
        VSTR            S0, [R4,#0x144]
      }
    VLDR            S2, [R4,#0x12C]
    VLDR            S4, [R4,#0x130]
    VLDR            S0, [R4,#0x114]
    VSUB.F32        S2, S2, S4
    VMUL.F32        S2, S2, S18
    VADD.F32        S2, S2, S4
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R4,#0x114]
    VLDR            S0, [R4,#0x118]
    VSTR            S0, [R4,#0x118]
    VLDR            S0, [R4,#0x11C]
    VSTR            S0, [R4,#0x11C]
  if ( !*(_BYTE *)(_R4 + 1233) )
    __asm { VMOV            S18, R8 }
    Dimension::getSunriseColor(v35, *(float *)(_R4 + 1248), _R10);
    v29 = mce::Camera::getForwardVector(*(mce::Camera **)(_R9 + 16));
    __asm { VCMPE.F32       S18, #0.0 }
    v32 = *(_DWORD *)v29;
    __asm { VMRS            APSR_nzcv, FPSCR }
    v33 = *((_DWORD *)v29 + 1);
    v34 = *((_DWORD *)v29 + 2);
    if ( _ZF )
      _R0 = Dimension::getSunIntensity(*(Dimension **)(_R4 + 1248), *(float *)&_R10, (const Vec3 *)&v32, 0.35);
      __asm { VMOV            S18, R0 }
      VLDR            S6, [SP,#0x90+var_74]
      VLDR            S0, [SP,#0x90+var_80]
      VMUL.F32        S8, S6, S18
      VLDR            S2, [SP,#0x90+var_7C]
      VLDR            S4, [SP,#0x90+var_78]
      VLDR            S12, [R4,#0x118]
      VLDR            S14, [R4,#0x11C]
      VLDR            S1, [R4,#0x120]
      VLDR            S3, [R4,#0x114]
      VSUB.F32        S10, S16, S8
      VMUL.F32        S0, S0, S8
      VMUL.F32        S2, S2, S8
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S8, S6
      VMUL.F32        S8, S14, S10
      VLDR            S14, =0.2
      VMUL.F32        S3, S10, S3
      VMUL.F32        S12, S12, S10
      VMUL.F32        S10, S1, S10
      VLDR            S1, [R4,#0x164]
      VMUL.F32        S14, S1, S14
      VADD.F32        S4, S4, S8
      VADD.F32        S0, S0, S3
      VADD.F32        S2, S2, S12
      VADD.F32        S6, S10, S6
      VSUB.F32        S4, S4, S14
      VSUB.F32        S0, S0, S14
      VSUB.F32        S2, S2, S14
      VSUB.F32        S6, S6, S14
      VSTR            S0, [R4,#0x114]
      VSTR            S2, [R4,#0x118]
      VSTR            S4, [R4,#0x11C]
      VSTR            S6, [R4,#0x120]
  __asm { VLDR            S4, [R4,#0x140] }
  result = 0;
    VLDR            S6, [R4,#0x178]
    VLDR            S0, [R4,#0x124]
    VDIV.F32        S4, S4, S6
    VSUB.F32        S0, S0, S4
    VLDR            S2, [R4,#0x144]
    VSTR            S4, [R4,#0x124]
    VDIV.F32        S2, S2, S6
    VABS.F32        S0, S0
    VLDR            S6, =1.1921e-7
    VSTR            S2, [R4,#0x128]
    VCMPE.F32       S0, S6
    result = 1;
  *(_BYTE *)(_R4 + 1235) = result;
  return result;
}


int __fastcall LevelRendererCamera::getMeshSizeInBytes(LevelRendererCamera *this)
{
  RenderChunk **v1; // r5@1 OVERLAPPED
  RenderChunk **v2; // r6@1 OVERLAPPED
  int i; // r4@1

  *(_QWORD *)&v1 = *((_QWORD *)this + 60);
  for ( i = 0; v2 != v1; ++v1 )
  {
    if ( *v1 )
      i += RenderChunk::getMeshSize(*v1);
  }
  return i;
}


int __fastcall LevelRendererCamera::renderShadow(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  char v15; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a1;
  _R7 = a4;
  _R8 = a3;
  MatrixStack::push((MatrixStack *)&v15, *(_DWORD *)(a2 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v15);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R7]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R7,#4]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R7,#8]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VMUL.F32        S5, S7, S12
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S1, S7, S12
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VMUL.F32        S12, S14, S12
    VADD.F32        S0, S0, S5
    VADD.F32        S2, S2, S8
    VLDR            S8, [R0,#0x30]
    VADD.F32        S4, S4, S1
    VADD.F32        S6, S6, S12
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S0, S8
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S2, S10
    VADD.F32        S4, S4, S12
    VADD.F32        S6, S6, S8
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
    VMOV            S0, R8
    VLDR            S2, [R0]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0]
    VSTR            S2, [R0,#4]
    VLDR            S2, [R0,#8]
    VSTR            S2, [R0,#8]
    VLDR            S2, [R0,#0xC]
    VSTR            S2, [R0,#0xC]
    VLDR            S2, [R0,#0x10]
    VSTR            S2, [R0,#0x10]
    VLDR            S2, [R0,#0x14]
    VSTR            S2, [R0,#0x14]
    VLDR            S2, [R0,#0x18]
    VSTR            S2, [R0,#0x18]
    VLDR            S2, [R0,#0x1C]
    VSTR            S2, [R0,#0x1C]
    VLDR            S2, [R0,#0x20]
    VSTR            S2, [R0,#0x20]
    VLDR            S2, [R0,#0x24]
    VSTR            S2, [R0,#0x24]
    VLDR            S2, [R0,#0x28]
    VSTR            S2, [R0,#0x28]
    VLDR            S2, [R0,#0x2C]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x2C]
  mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(v5 + 1256) + 16), v4, v5 + 104, 0, 0);
  mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(v5 + 1256) + 16), v4, v5 + 116, 0, 0);
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v15);
}


int *__fastcall LevelRendererCamera::_resortNearbyChunks(LevelRendererCamera *this, const Vec3 *a2)
{
  LevelRendererCamera *v2; // r5@1
  const Vec3 *v3; // r4@1
  int v4; // r6@1
  signed int v5; // r3@1
  signed int v6; // r2@1
  int v7; // r6@1
  bool v8; // zf@3
  bool v9; // nf@3
  unsigned __int8 v10; // vf@3
  int v11; // r6@3
  signed int v12; // r7@5
  signed int v13; // r11@5
  int v14; // r8@9
  int v15; // r3@9
  int v16; // r3@9
  int *v17; // r7@9
  int *result; // r0@9
  int v19; // r2@10
  int v20; // r2@11
  int v21; // [sp+0h] [bp-78h]@9
  int v22; // [sp+4h] [bp-74h]@9
  int v23; // [sp+8h] [bp-70h]@9
  int *v24; // [sp+Ch] [bp-6Ch]@9
  int v25; // [sp+10h] [bp-68h]@9
  int v26; // [sp+14h] [bp-64h]@1
  int v27; // [sp+18h] [bp-60h]@1
  int v28; // [sp+1Ch] [bp-5Ch]@9
  int v29; // [sp+20h] [bp-58h]@1
  int v30; // [sp+24h] [bp-54h]@1
  int v31; // [sp+28h] [bp-50h]@1
  int v32; // [sp+2Ch] [bp-4Ch]@1
  signed int v33; // [sp+30h] [bp-48h]@1
  int v34; // [sp+34h] [bp-44h]@1
  int v35; // [sp+38h] [bp-40h]@1
  int v36; // [sp+3Ch] [bp-3Ch]@1
  int v37; // [sp+40h] [bp-38h]@9
  int v38; // [sp+44h] [bp-34h]@9
  int *v39; // [sp+48h] [bp-30h]@9
  int v40; // [sp+4Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  BlockPos::BlockPos((int)&v26, (int)a2);
  v4 = *(_WORD *)(*((_DWORD *)v2 + 312) + 120);
  v5 = 0;
  v35 = 0;
  v36 = 0;
  v6 = (v4 << 16) - 0x10000;
  v7 = v27 + 4;
  v33 = 0;
  v34 = 0;
  v31 = 0;
  v32 = 0;
  v30 = 0;
  v40 = 16;
  v29 = (v26 - 4) >> 4;
  if ( v27 + 4 > 0 )
    v5 = v27 + 4;
  v10 = __OFSUB__(v7, v6 >> 16);
  v8 = v7 == v6 >> 16;
  v9 = v7 - (v6 >> 16) < 0;
  v11 = v27 - 4;
  if ( !((unsigned __int8)(v9 ^ v10) | v8) )
    v5 = v6 >> 16;
  v12 = 0;
  v13 = v5 >> 4;
  if ( v11 > 0 )
    v12 = v27 - 4;
  if ( v11 > v6 >> 16 )
    v12 = v6 >> 16;
  v14 = v12 >> 4;
  v15 = (v28 + 4) >> 4;
  v30 = v12 >> 4;
  v31 = (v28 - 4) >> 4;
  v32 = (v26 + 4) >> 4;
  v33 = v13;
  v34 = v15;
  v16 = v15 - v31 + 1;
  v35 = v32 - ((v26 - 4) >> 4) + 1;
  v36 = v13 - (v12 >> 4) + 1;
  v17 = (int *)(v36 * v16 * v35);
  v37 = v16;
  v38 = v16 * v35;
  v39 = v17;
  v21 = (v26 - 4) >> 4;
  v22 = v14;
  v23 = (v28 - 4) >> 4;
  result = &v29;
  v24 = &v29;
  v25 = 0;
  if ( v17 )
  {
    do
    {
      LevelRendererCamera::_notifyCameraMoved(v2, (const SubChunkPos *)&v21, v3, 1);
      v19 = v21++;
      result = (int *)(v25++ + 1);
      if ( v19 >= v24[3] )
      {
        v21 = *v24;
        v20 = v23++;
        if ( v20 >= v24[5] )
        {
          v23 = v24[2];
          ++v22;
        }
      }
    }
    while ( v17 != result );
  }
  return result;
}


int __fastcall LevelRendererCamera::LevelRendererCamera(int a1, LevelRenderer *a2, BlockSource *a3, int a4, int a5)
{
  int v5; // r4@1
  BlockSource *v6; // r8@1
  LevelListener *v7; // r11@1
  int v8; // r9@1
  int v9; // r6@1
  int v10; // r10@1
  int v11; // r5@1
  void *v12; // r0@1
  void *v13; // r0@2
  void *v14; // r0@3
  void *v15; // r0@4
  void *v16; // r0@5
  void *v17; // r0@6
  void *v18; // r0@7
  void *v19; // r0@8
  void *v20; // r0@9
  void *v21; // r0@10
  void *v22; // r0@11
  double v23; // r0@12
  unsigned int v24; // r0@13
  int v25; // r7@15
  void *v26; // r6@15
  void *v27; // r0@17
  Level *v28; // r0@19
  __int64 v29; // kr00_8@19
  unsigned int v30; // r1@19
  void **v31; // r6@23
  __int64 v32; // kr08_8@28
  unsigned int v33; // r1@28
  void **v34; // r7@32
  __int64 v35; // kr10_8@37
  unsigned int v36; // r1@37
  void **v37; // r7@41
  void *v38; // r7@46
  Tessellator *v39; // r0@46
  Tessellator *v40; // r0@47
  TextureTessellator *v41; // r7@48
  int v42; // r5@48
  void *v43; // r0@49
  int v44; // r0@52
  unsigned int *v52; // r2@56
  signed int v53; // r1@58
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@64
  signed int v57; // r1@66
  unsigned int *v58; // r2@68
  signed int v59; // r1@70
  unsigned int *v60; // r2@72
  signed int v61; // r1@74
  unsigned int *v62; // r2@76
  signed int v63; // r1@78
  unsigned int *v64; // r2@80
  signed int v65; // r1@82
  unsigned int *v66; // r2@84
  signed int v67; // r1@86
  unsigned int *v68; // r2@88
  signed int v69; // r1@90
  unsigned int *v70; // r2@92
  signed int v71; // r1@94
  unsigned int *v72; // r2@96
  signed int v73; // r1@98
  unsigned int *v74; // r2@100
  int v75; // [sp+3Ch] [bp-9Ch]@2
  int v76; // [sp+48h] [bp-90h]@1
  LevelRenderer *v77; // [sp+4Ch] [bp-8Ch]@1
  int v78; // [sp+54h] [bp-84h]@12
  int v79; // [sp+5Ch] [bp-7Ch]@11
  int v80; // [sp+64h] [bp-74h]@10
  int v81; // [sp+6Ch] [bp-6Ch]@9
  int v82; // [sp+74h] [bp-64h]@8
  int v83; // [sp+7Ch] [bp-5Ch]@7
  int v84; // [sp+84h] [bp-54h]@6
  int v85; // [sp+8Ch] [bp-4Ch]@5
  int v86; // [sp+94h] [bp-44h]@4
  int v87; // [sp+9Ch] [bp-3Ch]@3
  int v88; // [sp+A4h] [bp-34h]@2
  int v89; // [sp+ACh] [bp-2Ch]@1

  v5 = a1;
  v77 = a2;
  v76 = a4;
  v6 = a3;
  *(_DWORD *)a1 = &off_26DC8FC;
  *(_DWORD *)(a1 + 4) = &off_26DC964;
  v7 = (LevelListener *)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  v8 = a1 + 8;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v9 = a1 + 20;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  v10 = a1 + 32;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  v11 = a1 + 48;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 8) = 0;
  *(_DWORD *)(v11 + 12) = 0;
  *(_DWORD *)(v11 + 16) = 0;
  *(_DWORD *)(v11 + 8) = v11;
  *(_DWORD *)(v11 + 12) = v11;
  _aeabi_memclr4(a1 + 68, 36);
  sub_119C884((void **)&v89, "shadow_back");
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v11 + 56),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v89);
  v12 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
  {
    v52 = (unsigned int *)(v89 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
    }
    else
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
  v75 = v9;
  sub_119C884((void **)&v88, "shadow_front");
    (mce::MaterialPtr *)(v5 + 116),
    &v88);
  v13 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v88 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v87, "shadow_overlay");
    (mce::MaterialPtr *)(v5 + 128),
    &v87);
  v14 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v87 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  sub_119C884((void **)&v86, "stars");
    (mce::MaterialPtr *)(v5 + 140),
    &v86);
  v15 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v86 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  sub_119C884((void **)&v85, "stars_below_water");
    (mce::MaterialPtr *)(v5 + 152),
    &v85);
  v16 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v85 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  sub_119C884((void **)&v84, "skyplane");
    (mce::MaterialPtr *)(v5 + 164),
    &v84);
  v17 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v84 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v83, "skyplane_below_water");
    (mce::MaterialPtr *)(v5 + 176),
    &v83);
  v18 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v83 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  sub_119C884((void **)&v82, "sun_moon");
    (mce::MaterialPtr *)(v5 + 188),
    &v82);
  v19 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v82 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v81, "end_sky");
    (mce::MaterialPtr *)(v5 + 200),
    &v81);
  v20 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v81 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  sub_119C884((void **)&v80, "sun_moon_below_water");
    (mce::MaterialPtr *)(v5 + 212),
    &v80);
  v21 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v80 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  sub_119C884((void **)&v79, "clouds");
    (mce::MaterialPtr *)(v5 + 224),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::switchable,
    &v79);
  v22 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v79 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  sub_119C884((void **)&v78, "cubemap");
    (mce::MaterialPtr *)(v5 + 236),
    &v78);
  HIDWORD(v23) = v78;
  LODWORD(v23) = v78 - 12;
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v78 - 4);
        HIDWORD(v23) = __ldrex(v74);
      while ( __strex(HIDWORD(v23) - 1, v74) );
      HIDWORD(v23) = (*v74)--;
    if ( SHIDWORD(v23) <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)LODWORD(v23));
  *(_DWORD *)(v5 + 256) = 0;
  *(_DWORD *)(v5 + 260) = 0;
  *(_DWORD *)(v5 + 264) = 1065353216;
  *(_DWORD *)(v5 + 268) = 0;
  LODWORD(v23) = v5 + 264;
  v24 = sub_119C844(v23);
  *(_DWORD *)(v5 + 252) = v24;
  if ( v24 == 1 )
    *(_DWORD *)(v5 + 272) = 0;
    v26 = (void *)(v5 + 272);
  else
    if ( v24 >= 0x40000000 )
      sub_119C874();
    v25 = 4 * v24;
    v26 = operator new(4 * v24);
    _aeabi_memclr4(v26, v25);
  *(_DWORD *)(v5 + 248) = v26;
  *(_DWORD *)(v5 + 320) = 0;
  *(_DWORD *)(v5 + 324) = 0;
  _aeabi_memclr4(v5 + 276, 41);
  *(_DWORD *)(v5 + 328) = 1072902963;
  _aeabi_memclr4(v5 + 332, 36);
  *(_DWORD *)(v5 + 368) = -1;
  *(_DWORD *)(v5 + 372) = 0;
  *(_DWORD *)(v5 + 376) = 1065353216;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v27 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v27 = &ServiceLocator<AppPlatform>::mDefaultService;
  *(_DWORD *)(v5 + 380) = (*(int (**)(void))(**(_DWORD **)v27 + 452))();
  *(_DWORD *)(v5 + 392) = 0;
  *(_DWORD *)(v5 + 408) = 0;
  *(_DWORD *)(v5 + 424) = 0;
  _aeabi_memclr4(v5 + 432, 73);
  *(_WORD *)(v5 + 506) = -32768;
  *(_WORD *)(v5 + 508) = 0x7FFF;
  *(_DWORD *)(v5 + 512) = 0;
  *(_DWORD *)(v5 + 516) = 0;
  *(_DWORD *)(v5 + 520) = 0;
  *(_DWORD *)(v5 + 524) = 2139095039;
  *(_DWORD *)(v5 + 528) = 2139095039;
  *(_DWORD *)(v5 + 532) = 2139095039;
  _aeabi_memclr4(v5 + 536, 36);
  mce::Mesh::Mesh((mce::Mesh *)(v5 + 572));
  mce::Camera::Camera((mce::Camera *)(v5 + 672));
  *(_DWORD *)(v5 + 1040) = 1065353216;
  *(_DWORD *)(v5 + 1056) = 0;
  *(_DWORD *)(v5 + 1052) = 0;
  *(_DWORD *)(v5 + 1048) = 0;
  *(_DWORD *)(v5 + 1044) = 0;
  *(_DWORD *)(v5 + 1060) = 1065353216;
  *(_DWORD *)(v5 + 1076) = 0;
  *(_DWORD *)(v5 + 1072) = 0;
  *(_DWORD *)(v5 + 1068) = 0;
  *(_DWORD *)(v5 + 1064) = 0;
  *(_DWORD *)(v5 + 1080) = 1065353216;
  *(_DWORD *)(v5 + 1096) = 0;
  *(_DWORD *)(v5 + 1092) = 0;
  *(_DWORD *)(v5 + 1088) = 0;
  *(_DWORD *)(v5 + 1084) = 0;
  *(_DWORD *)(v5 + 1100) = 1065353216;
  *(_DWORD *)(v5 + 1104) = 1065353216;
  *(_DWORD *)(v5 + 1120) = 0;
  *(_DWORD *)(v5 + 1116) = 0;
  *(_DWORD *)(v5 + 1112) = 0;
  *(_DWORD *)(v5 + 1108) = 0;
  *(_DWORD *)(v5 + 1124) = 1065353216;
  *(_DWORD *)(v5 + 1140) = 0;
  *(_DWORD *)(v5 + 1136) = 0;
  *(_DWORD *)(v5 + 1132) = 0;
  *(_DWORD *)(v5 + 1128) = 0;
  *(_DWORD *)(v5 + 1144) = 1065353216;
  *(_DWORD *)(v5 + 1160) = 0;
  *(_DWORD *)(v5 + 1156) = 0;
  *(_DWORD *)(v5 + 1152) = 0;
  *(_DWORD *)(v5 + 1148) = 0;
  *(_DWORD *)(v5 + 1164) = 1065353216;
  _aeabi_memclr4(v5 + 1168, 46);
  *(_DWORD *)(v5 + 1216) = 0;
  *(_DWORD *)(v5 + 1220) = 0;
  *(_DWORD *)(v5 + 1224) = 0;
  *(_DWORD *)(v5 + 1228) = 0;
  *(_DWORD *)(v5 + 1232) = 0;
  *(_BYTE *)(v5 + 1236) = 1;
  *(_DWORD *)(v5 + 1240) = BlockSource::getLevel(v6);
  *(_DWORD *)(v5 + 1244) = v6;
  *(_DWORD *)(v5 + 1248) = BlockSource::getDimension(v6);
  *(_DWORD *)(v5 + 1256) = v77;
  v28 = (Level *)BlockSource::getLevel(v6);
  LevelBuilder::LevelBuilder((LevelBuilder *)(v5 + 1260), v28, v77, (LevelRendererCamera *)v5);
  *(_DWORD *)(v5 + 2172) = v76;
  *(_DWORD *)(v5 + 2176) = a5;
  v29 = *(_QWORD *)(v5 + 8);
  v30 = -1431655765 * ((HIDWORD(v29) - (signed int)v29) >> 2);
  if ( v30 >= 0xE )
    if ( v30 >= 0xF )
      if ( HIDWORD(v29) != (_DWORD)v29 + 168 )
      {
        v31 = (void **)(v29 + 168);
        do
        {
          if ( *v31 )
            operator delete(*v31);
          v31 += 3;
        }
        while ( (void **)HIDWORD(v29) != v31 );
      }
      *(_DWORD *)(v5 + 12) = v29 + 168;
    std::vector<std::vector<RenderChunk *,std::allocator<RenderChunk *>>,std::allocator<std::vector<RenderChunk *,std::allocator<RenderChunk *>>>>::_M_default_append(
      v8,
      14 - v30);
  v32 = *(_QWORD *)(v5 + 20);
  v33 = -1431655765 * ((HIDWORD(v32) - (signed int)v32) >> 2);
  if ( v33 >= 0xE )
    if ( v33 >= 0xF )
      if ( HIDWORD(v32) != (_DWORD)v32 + 168 )
        v34 = (void **)(v32 + 168);
          if ( *v34 )
            operator delete(*v34);
          v34 += 3;
        while ( (void **)HIDWORD(v32) != v34 );
      *(_DWORD *)(v5 + 24) = v32 + 168;
      v75,
      14 - v33);
  v35 = *(_QWORD *)(v5 + 32);
  v36 = -1431655765 * ((HIDWORD(v35) - (signed int)v35) >> 2);
  if ( v36 >= 0xE )
    if ( v36 >= 0xF )
      if ( HIDWORD(v35) != (_DWORD)v35 + 168 )
        v37 = (void **)(v35 + 168);
          if ( *v37 )
            operator delete(*v37);
          v37 += 3;
        while ( (void **)HIDWORD(v35) != v37 );
      *(_DWORD *)(v5 + 36) = v35 + 168;
      v10,
      14 - v36);
  v38 = operator new(0x10Cu);
  Tessellator::Tessellator((int)v38);
  v39 = *(Tessellator **)(v5 + 1192);
  *(_DWORD *)(v5 + 1192) = v38;
  if ( v39 )
    v40 = Tessellator::~Tessellator(v39);
    operator delete((void *)v40);
  v41 = (TextureTessellator *)operator new(0x18u);
  TextureTessellator::TextureTessellator(v41);
  v42 = *(_DWORD *)(v5 + 1196);
  *(_DWORD *)(v5 + 1196) = v41;
  if ( v42 )
    v43 = *(void **)(v42 + 4);
    if ( v43 )
      operator delete(v43);
    operator delete((void *)v42);
  LevelRendererCamera::setupViewArea((LevelRendererCamera *)v5);
  mce::Mesh::reset((mce::Mesh *)(v5 + 572));
  LevelRendererCamera::_initCubemapTextures((LevelRendererCamera *)v5);
  Level::addListener(*(Level **)(v5 + 1240), v7);
  v44 = Level::getPrimaryLocalPlayer(*(Level **)(v5 + 1240));
  Player::addListener(v44, v5);
  if ( (*(int (**)(void))(**(_DWORD **)(v5 + 1248) + 132))() == 1 )
    _R0 = (*(int (**)(void))(**(_DWORD **)(v5 + 1248) + 156))();
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    LOWORD(_R0) = 0x7FFF;
  *(_WORD *)(v5 + 1252) = _R0;
  return v5;
}


int __fastcall LevelRendererCamera::renderWaterHoles(int result, BaseEntityRenderContext *a2)
{
  BaseEntityRenderContext *v3; // r4@1
  float *v4; // r6@1
  float *i; // r8@1
  int v6; // r0@2
  Entity *v7; // r7@2
  int v8; // r11@2
  float v13; // t1@2
  float v14; // r3@2
  char v15; // [sp+4h] [bp-44h]@2
  float v16; // [sp+Ch] [bp-3Ch]@2
  float v19; // [sp+18h] [bp-30h]@2

  _R5 = result;
  v3 = a2;
  v4 = *(float **)(result + 1216);
  for ( i = *(float **)(result + 1220);
        i != v4;
        result = EntityRenderDispatcher::renderWaterHole(v8, (int)v3, v7, (int)&v19, (int)&v15) )
  {
    ++unk_27F3F90;
    v6 = BaseEntityRenderContext::getEntityRenderDispatcher(v3);
    v7 = *(Entity **)v4;
    v8 = v6;
    Entity::getInterpolatedPosition((Entity *)&v16, *v4, *((_DWORD *)v3 + 1));
    __asm
    {
      VLDR            S0, [R5,#0x230]
      VLDR            S6, [SP,#0x48+var_3C]
      VLDR            S2, [R5,#0x234]
      VLDR            S8, [SP,#0x48+var_38]
      VSUB.F32        S0, S6, S0
      VLDR            S4, [R5,#0x238]
      VLDR            S10, [SP,#0x48+var_34]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VSTR            S0, [SP,#0x48+var_30]
      VSTR            S2, [SP,#0x48+var_2C]
      VSTR            S4, [SP,#0x48+var_28]
    }
    v13 = *v4;
    ++v4;
    Entity::getInterpolatedRotation((Entity *)&v15, v13, *((float *)v3 + 1), v14);
  }
  return result;
}


signed int __fastcall LevelRendererCamera::renderClouds(int a1, int a2)
{
  mce::Mesh *v3; // r8@1
  int v4; // r0@1
  int v10; // r7@1
  int v11; // r6@1
  signed int result; // r0@1
  Dimension v18[2]; // [sp+8h] [bp-A8h]@2
  float v21; // [sp+18h] [bp-98h]@8
  int v22; // [sp+24h] [bp-8Ch]@8
  Dimension v23[2]; // [sp+28h] [bp-88h]@2
  char v27; // [sp+38h] [bp-78h]@2
  char v28; // [sp+40h] [bp-70h]@2
  char v29; // [sp+48h] [bp-68h]@2
  float v30; // [sp+54h] [bp-5Ch]@2

  _R5 = a1;
  v3 = (mce::Mesh *)(a1 + 572);
  v4 = *(_DWORD *)(a1 + 1256);
  _R9 = a2;
  __asm
  {
    VLDR            S20, [R5,#0x234]
    VLDR            S16, [R5,#0x238]
  }
  v10 = *(_DWORD *)(v4 + 1552);
  v11 = *(_DWORD *)(v4 + 1556);
    VLDR            S18, [R5,#0x230]
    VLDR            S22, [R9,#8]
  result = mce::Mesh::isValid(v3);
  if ( result == 1 )
    ChunkPos::ChunkPos((int)&v28, _R5 + 1200);
    BlockPos::BlockPos((int)&v29, (__int64 *)&v28, 0);
    Vec3::Vec3((int)&v30, (int)&v29);
    __asm
    {
      VLDR            S24, [SP,#0xB0+var_5C]
      VLDR            S26, [SP,#0xB0+var_54]
    }
    MatrixStack::push((MatrixStack *)&v27, *(_DWORD *)(_R9 + 16) + 16);
    _R6 = _aeabi_ul2f(v10, v11);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v27);
      VMOV            S2, R6
      VLDR            S4, =-0.02
      VLDR            S0, =128.33
      VADD.F32        S2, S2, S22
      VLDR            S8, [R0,#8]
      VSUB.F32        S0, S0, S20
      VLDR            S12, [R0,#0x10]
      VLDR            S14, [R0,#0x14]
      VLDR            S1, [R0,#0x18]
      VLDR            S10, [R0,#0xC]
      VLDR            S3, [R0,#0x1C]
      VLDMIA          R0, {S5-S6}
      VMUL.F32        S2, S2, S4
      VSUB.F32        S4, S26, S16
      VLDR            S7, [R0,#0x20]
      VMUL.F32        S14, S14, S0
      VMUL.F32        S12, S12, S0
      VMUL.F32        S1, S1, S0
      VMUL.F32        S0, S3, S0
      VSUB.F32        S2, S2, S18
      VMUL.F32        S3, S7, S4
      VLDR            S7, [R0,#0x28]
      VADD.F32        S2, S2, S24
      VMUL.F32        S6, S6, S2
      VMUL.F32        S5, S5, S2
      VMUL.F32        S10, S10, S2
      VMUL.F32        S2, S8, S2
      VLDR            S8, [R0,#0x24]
      VMUL.F32        S8, S8, S4
      VADD.F32        S6, S14, S6
      VLDR            S14, [R0,#0x2C]
      VADD.F32        S12, S12, S5
      VMUL.F32        S5, S7, S4
      VADD.F32        S2, S1, S2
      VADD.F32        S0, S0, S10
      VMUL.F32        S4, S14, S4
      VADD.F32        S6, S6, S8
      VLDR            S8, [R0,#0x34]
      VADD.F32        S10, S12, S3
      VLDR            S12, [R0,#0x38]
      VADD.F32        S2, S2, S5
      VADD.F32        S0, S0, S4
      VLDR            S4, [R0,#0x30]
      VADD.F32        S4, S10, S4
      VLDR            S10, [R0,#0x3C]
      VADD.F32        S2, S2, S12
      VSTR            S4, [R0,#0x30]
      VSTR            S6, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S0, [R0,#0x3C]
      VMOV.F32        S0, #16.0
      VLDR            S2, [R0]
      VMOV.F32        S4, #4.0
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, [R0,#4]
      VLDR            S10, [R0,#0x24]
      VLDR            S12, [R0,#0x28]
      VADD.F32        S0, S10, S0
      VLDR            S4, [R0,#0xC]
      VADD.F32        S2, S12, S2
      VLDR            S6, [R0]
      VLDR            S8, [R0,#0x20]
      VADD.F32        S4, S14, S4
      VLDR            S1, [R0,#0x30]
      VADD.F32        S6, S8, S6
      VLDR            S8, =32.0
      VLDR            S3, [R0,#0x34]
      VMUL.F32        S0, S0, S8
      VLDR            S5, [R0,#0x38]
      VMUL.F32        S2, S2, S8
      VLDR            S7, [R0,#0x3C]
      VMUL.F32        S4, S4, S8
      VMUL.F32        S6, S6, S8
      VSUB.F32        S0, S3, S0
      VSUB.F32        S2, S5, S2
      VSUB.F32        S4, S7, S4
      VSUB.F32        S6, S1, S6
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S4, [R0,#0x3C]
    Dimension::getSunriseColor(v23, *(float *)(_R5 + 1248), *(_DWORD *)(_R9 + 8));
    Dimension::getCloudColor(v18, *(float *)(_R5 + 1248), *(float *)(_R9 + 8));
      VLDR            S6, [SP,#0xB0+var_7C]
      VMOV.F32        S10, #1.0
      VLDR            S8, =0.35
      VLDR            S0, [SP,#0xB0+var_88]
      VLDR            S2, [SP,#0xB0+var_84]
      VLDR            S4, [SP,#0xB0+var_80]
      VLDR            S12, [SP,#0xB0+var_A4]
      VLDR            S14, [SP,#0xB0+var_A0]
      VSUB.F32        S8, S10, S6
      VLDR            S10, [SP,#0xB0+var_A8]
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VMUL.F32        S10, S8, S10
      VMUL.F32        S6, S14, S8
      VLDR            S14, [R5,#0x164]
      VMUL.F32        S12, S12, S8
      VLDR            S8, =-0.2
      VMUL.F32        S8, S14, S8
      VADD.F32        S4, S4, S6
      VLDR            S6, =0.0
      VADD.F32        S0, S0, S8
      VADD.F32        S4, S4, S8
      VADD.F32        S2, S2, S8
      VMOV.F32        S8, S6
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, #0.0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S8, S0 }
      VMOV.F32        S0, S6
      VCMPE.F32       S4, #0.0
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S6, S4 }
      VSTR            S8, [SP,#0xB0+var_98]
      VSTR            S0, [SP,#0xB0+var_94]
      VSTR            S6, [SP,#0xB0+var_90]
    v22 = 1060320051;
    ShaderColor::setColor(*(ShaderColor **)(_R9 + 48), (const Color *)&v21);
    mce::Mesh::render(v3, _R9, _R5 + 224, 0, 0);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v27);
  return result;
}


void *__fastcall LevelRendererCamera::_initCubemapTextures(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r1@1
  signed int v2; // r10@1
  int *v3; // r6@1
  unsigned int *v4; // r2@2
  signed int v5; // r1@4
  const void **v6; // r7@5
  unsigned int *v7; // r2@10
  signed int v8; // r1@12
  void *result; // r0@16
  int *v10; // r11@18
  __int64 v11; // r4@18
  int v12; // r8@18
  _DWORD *v13; // r0@18
  _DWORD *v14; // r6@19
  int v15; // r7@19
  bool v16; // zf@24
  _DWORD *v17; // r0@28
  int *v18; // r0@29
  int v19; // r0@29
  LevelRendererCamera *v20; // r11@29
  void *v21; // r0@29
  signed int v22; // r8@30
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  unsigned int *v27; // r2@39
  signed int v28; // r1@41
  unsigned int *v29; // r2@43
  signed int v30; // r1@45
  LevelRendererCamera *v31; // r4@63
  int *v32; // r11@63
  int v33; // r6@63
  const void **v34; // r0@63
  __int64 v35; // kr00_8@63
  unsigned int v36; // r1@63
  const void **v37; // r0@65
  int v38; // r1@67
  void *v39; // r0@67
  void *v40; // r0@68
  void *v41; // r0@69
  __int64 v42; // kr08_8@71
  __int64 v43; // r0@73
  void *v44; // r0@78
  char *v45; // [sp+14h] [bp-54h]@1
  LevelRendererCamera *v46; // [sp+18h] [bp-50h]@1
  __int64 *v47; // [sp+1Ch] [bp-4Ch]@29
  _DWORD *v48; // [sp+20h] [bp-48h]@29
  int v49; // [sp+24h] [bp-44h]@31
  int v50; // [sp+28h] [bp-40h]@39
  unsigned int v51; // [sp+2Ch] [bp-3Ch]@35
  int v52; // [sp+30h] [bp-38h]@43
  int v53; // [sp+34h] [bp-34h]@67
  int v54; // [sp+38h] [bp-30h]@2
  unsigned int v55; // [sp+3Ch] [bp-2Ch]@5

  v1 = this;
  v45 = (char *)this + 248;
  v2 = 0;
  v46 = this;
  v3 = &dword_28898C0;
  do
  {
    v10 = v3;
    v11 = *((_QWORD *)v1 + 31);
    v12 = v2 % (unsigned int)(*((_QWORD *)v1 + 31) >> 32);
    v13 = *(_DWORD **)(v11 + 4 * v12);
    if ( !v13 )
      goto LABEL_28;
    v14 = (_DWORD *)*v13;
    v15 = *(_DWORD *)(*v13 + 4);
    while ( v2 != v15 )
    {
      LODWORD(v11) = *v14;
      if ( *v14 )
      {
        v15 = *(_DWORD *)(v11 + 4);
        v13 = v14;
        v14 = (_DWORD *)*v14;
        if ( *(_DWORD *)(v11 + 4) % HIDWORD(v11) == v12 )
          continue;
      }
    }
    v16 = v13 == 0;
    if ( v13 )
      v14 = (_DWORD *)*v13;
      v16 = *v13 == 0;
    if ( v16 )
LABEL_28:
      v17 = operator new(0x14u);
      *v17 = 0;
      v17[1] = v2;
      v17[2] = 0;
      v17[3] = 0;
      v17[4] = 0;
      v14 = (_DWORD *)std::_Hashtable<int,std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>,std::allocator<std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                        (int)v45,
                        v12,
                        v2,
                        (int)v17);
    v48 = v14;
    v18 = (int *)Dimension::getDimensionName(v2);
    v6 = (const void **)&v55;
    sub_119C854((int *)&v55, v18);
    Util::toLower((void **)&v54, *(_DWORD *)(v55 - 12), v55);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v55,
      &v54);
    v19 = (int)(v14 + 2);
    v3 = v10;
    v20 = v46;
    v47 = (__int64 *)v19;
    v21 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != v3 )
      v4 = (unsigned int *)(v54 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
        v6 = (const void **)&v55;
      else
        v5 = (*v4)--;
      if ( v5 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = 0;
    do
      v31 = v20;
      v32 = v3;
      v33 = (int)(v3 + 3);
      v50 = v33;
      sub_119CAF8((const void **)&v50, *(_DWORD *)(v55 - 12) + 21);
      sub_119C894((const void **)&v50, "textures/environment/", 0x15u);
      sub_119C8A4((const void **)&v50, v6);
      v34 = sub_119C894((const void **)&v50, "_cubemap/cubemap_", 0x11u);
      v51 = (unsigned int)*v34;
      *v34 = (const void *)v33;
      Util::toString<int,(void *)0,(void *)0>((void **)&v49, v22);
      v35 = *(_QWORD *)(v51 - 12);
      v36 = *(_DWORD *)(v49 - 12) + v35;
      if ( v36 > HIDWORD(v35) && v36 <= *(_DWORD *)(v49 - 8) )
        v37 = sub_119C984((const void **)&v49, 0, v51, (_BYTE *)v35);
        v37 = sub_119C8A4((const void **)&v51, (const void **)&v49);
      v38 = (int)*v37;
      *v37 = (const void *)v33;
      v52 = v38;
      v3 = v32;
      v53 = 0;
      v39 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != v32 )
        v23 = (unsigned int *)(v49 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v3 = v32;
        }
        else
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v39);
      v20 = v31;
      v40 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != v3 )
        v25 = (unsigned int *)(v51 - 4);
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v40);
      v41 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != v3 )
        v27 = (unsigned int *)(v50 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v41);
      if ( ResourcePackManager::hasTexture(*((ResourcePackManager **)v31 + 543), (const ResourceLocation *)&v52) == 1 )
        v42 = *(_QWORD *)(v48 + 3);
        if ( (_DWORD)v42 == HIDWORD(v42) )
          std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TextureGroup &,ResourceLocation &>(
            v47,
            *((mce::TextureGroup **)v31 + 544),
            &v52);
          goto LABEL_78;
        __gnu_cxx::new_allocator<mce::TexturePtr>::construct<mce::TexturePtr,mce::TextureGroup &,ResourceLocation &>(
          (int)v47,
          (mce::TexturePtr *)v42,
          *((mce::TextureGroup **)v31 + 544),
          &v52);
        v43 = *(_QWORD *)(v48 + 3);
        if ( (_DWORD)v43 == HIDWORD(v43) )
          j__ZNSt6vectorIN3mce10TexturePtrESaIS1_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v47);
        mce::TexturePtr::TexturePtr((mce::TexturePtr *)v43);
      v48[3] += 24;
LABEL_78:
      v44 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != v3 )
        v29 = (unsigned int *)(v52 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v44);
      ++v22;
    while ( v22 < 6 );
    result = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != v3 )
      v7 = (unsigned int *)(v55 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(result);
    ++v2;
    v1 = v31;
  }
  while ( v2 < 3 );
  return result;
}


int __fastcall LevelRendererCamera::renderStencilShadowOverlayCube(int a1, int a2)
{
  int v2; // r5@1
  const BlockPos *v4; // r6@1
  BlockSource *v5; // r7@1
  float v10; // r2@1
  mce::Math *v14; // r0@5
  float v16; // r2@5
  int v19; // [sp+0h] [bp-78h]@0
  float v20; // [sp+4h] [bp-74h]@6
  Dimension v21[2]; // [sp+14h] [bp-64h]@1
  char v25; // [sp+24h] [bp-54h]@1
  Dimension v26[2]; // [sp+30h] [bp-48h]@1

  v2 = a1;
  _R8 = a2;
  v4 = *(const BlockPos **)(a1 + 1244);
  v5 = *(BlockSource **)(a1 + 1248);
  BlockPos::BlockPos((int)&v25, a1 + 548);
  __asm
  {
    VLDR            S0, [R8,#8]
    VSTR            S0, [SP,#0x78+var_78]
  }
  Dimension::getSkyColor(v26, v5, v4, COERCE_FLOAT(&v25), v19);
    VLDR            S18, [SP,#0x78+var_48]
    VLDR            S20, [SP,#0x78+var_44]
    VLDR            S22, [SP,#0x78+var_40]
  Dimension::getSunriseColor(v21, *(float *)(v2 + 1248), *(_DWORD *)(_R8 + 8));
    VMOV.F32        S0, #0.5
    VLDR            S12, [SP,#0x78+var_58]
    VMOV.F32        S16, #1.0
    VLDR            S14, =0.4
    VLDR            S6, [SP,#0x78+var_64]
    VLDR            S8, [SP,#0x78+var_60]
    VMUL.F32        S6, S6, S12
    VLDR            S10, [SP,#0x78+var_5C]
    VMUL.F32        S8, S8, S12
    VMUL.F32        S10, S10, S12
    VMUL.F32        S2, S18, S0
    VMUL.F32        S4, S20, S0
    VMUL.F32        S0, S22, S0
    VSUB.F32        S1, S16, S12
    VADD.F32        S2, S2, S14
    VADD.F32        S4, S4, S14
    VADD.F32        S0, S0, S14
    VMUL.F32        S2, S1, S2
    VMUL.F32        S4, S1, S4
    VMUL.F32        S0, S1, S0
    VADD.F32        S2, S6, S2
    VLDR            S6, =0.2126
    VADD.F32        S4, S8, S4
    VLDR            S8, =0.7152
    VADD.F32        S0, S10, S0
    VLDR            S10, =0.0722
    VMUL.F32        S6, S2, S6
    VMUL.F32        S8, S4, S8
    VMUL.F32        S10, S0, S10
    VADD.F32        S6, S8, S6
    VADD.F32        S6, S6, S10
    VSUB.F32        S22, S0, S6
    VSUB.F32        S20, S4, S6
    VSUB.F32        S18, S2, S6
    VCMPE.F32       S22, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
    goto LABEL_9;
    VCMPE.F32       S18, #0.0
  if ( _ZF )
    __asm
    {
      VCMPEEQ.F32     S20, #0.0
      VMRSEQ          APSR_nzcv, FPSCR
      VMOV.F32        S6, #1.0
    }
    _R0 = &Color::NIL;
      VLDR            S8, [R0,#0xC]
      VLDR            S4, [R0]
      VLDR            S2, [R0,#4]
      VADD.F32        S16, S8, S6
      VLDR            S0, [R0,#8]
  else
LABEL_9:
      VMOV            R0, S18
      VMOV            R1, S20
    v14 = (mce::Math *)mce::Math::absMax(_R0, _R1, v10);
    __asm { VMOV            R1, S22 }
    _R0 = mce::Math::absMax(v14, _R1, v16);
      VLDR            S0, =0.03
      VMOV            S2, R0
      VDIV.F32        S4, S0, S2
      VMUL.F32        S0, S4, S22
      VMUL.F32        S2, S4, S20
      VMUL.F32        S4, S4, S18
    VLDR            S6, =0.7
    VADD.F32        S4, S4, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S0, S0, S6
    VSTR            S4, [SP,#0x78+var_74]
    VSTR            S2, [SP,#0x78+var_70]
    VSTR            S0, [SP,#0x78+var_6C]
    VSTR            S16, [SP,#0x78+var_68]
  ShaderColor::setColor(*(ShaderColor **)(_R8 + 48), (const Color *)&v20);
  return mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(v2 + 1256) + 116), _R8, v2 + 128, 0, 0);
}


BlockEntityRenderDispatcher *__fastcall LevelRendererCamera::renderBlockEntities(LevelRendererCamera *this, BaseEntityRenderContext *a2, int a3)
{
  LevelRendererCamera *v3; // r9@1
  BlockEntityRenderDispatcher *result; // r0@1
  BaseEntityRenderContext *v5; // r5@3
  BlockEntity **i; // r4@3
  BlockEntity **v7; // r10@3
  BlockEntity *v8; // t1@4
  BlockEntityRenderDispatcher *v9; // r0@4
  int v10; // [sp+10h] [bp-28h]@1

  v3 = this;
  result = (LevelRendererCamera *)((char *)this + 68);
  v10 = a3;
  if ( a3 )
    result = (LevelRendererCamera *)((char *)v3 + 80);
  v5 = a2;
  v7 = (BlockEntity **)(*(_QWORD *)result >> 32);
  for ( i = (BlockEntity **)*(_QWORD *)result;
        v7 != i;
        result = BlockEntityRenderDispatcher::render(
                   v9,
                   v5,
                   *((BlockSource **)v3 + 311),
                   v8,
                   v10,
                   (const mce::MaterialPtr *)&mce::MaterialPtr::NONE,
                   (const mce::TexturePtr *)&mce::TexturePtr::NONE,
                   0) )
  {
    v8 = *i;
    ++i;
    ++unk_27F3F90;
    v9 = (BlockEntityRenderDispatcher *)BaseEntityRenderContext::getBlockEntityRenderDispatcher(v5);
  }
  return result;
}


int __fastcall LevelRendererCamera::getZFar(LevelRendererCamera *this)
{
  int result; // r0@3

  __asm
  {
    VLDR            S0, [R0,#0x148]
    VLDR            S2, [R0,#0x178]
    VMUL.F32        S0, S0, S2
  }
  _R0 = &LevelRenderer::Z_FAR_MIN;
    VLDR            S2, [R0]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S0 }
  __asm { VMOV            R0, S2 }
  return result;
}


void __fastcall LevelRendererCamera::~LevelRendererCamera(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r0@1

  v1 = LevelRendererCamera::~LevelRendererCamera(this);
  j_j_j__ZdlPv_4((void *)v1);
}


LevelRendererCamera *__fastcall LevelRendererCamera::~LevelRendererCamera(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r9@1
  LevelListener *v2; // r5@1
  char *v3; // r6@1
  int v4; // r0@1
  int v5; // r5@1
  void *v6; // r0@1
  int v7; // r1@1
  int v8; // r1@1
  int v9; // r0@3
  int v10; // r0@5
  void *v11; // r0@7
  int v12; // r5@9
  void *v13; // r0@10
  Tessellator *v14; // r0@13
  Tessellator *v15; // r0@14
  void *v16; // r0@15
  void *v17; // r0@17
  void *v18; // r0@19
  int v19; // r5@21
  int v20; // r6@22
  char *v21; // r0@22
  char *v22; // r7@22
  int v23; // r4@23
  char *v24; // r0@28
  void *v25; // r0@31
  void *v26; // r0@33
  void *v27; // r0@35
  void **v28; // r5@37 OVERLAPPED
  void **v29; // r6@37 OVERLAPPED
  void **v30; // r5@44 OVERLAPPED
  void **v31; // r6@44 OVERLAPPED
  void **v32; // r5@51 OVERLAPPED
  void **v33; // r6@51 OVERLAPPED
  int v35; // [sp+0h] [bp-B0h]@5
  int v36; // [sp+8h] [bp-A8h]@5
  int v37; // [sp+18h] [bp-98h]@5
  int v38; // [sp+28h] [bp-88h]@5
  int v39; // [sp+30h] [bp-80h]@5
  int v40; // [sp+7Ah] [bp-36h]@5
  void *ptr; // [sp+80h] [bp-30h]@1
  int v42; // [sp+84h] [bp-2Ch]@1
  int v43; // [sp+88h] [bp-28h]@1
  int v44; // [sp+8Ch] [bp-24h]@3
  __int16 v45; // [sp+90h] [bp-20h]@3

  v1 = this;
  *(_DWORD *)this = &off_26DC8FC;
  *((_DWORD *)this + 1) = &off_26DC964;
  v2 = (LevelRendererCamera *)((char *)this + 4);
  v3 = (char *)this + 384;
  GridArea<Boxed<RenderChunk>>::clear((int)this + 384);
  v4 = Level::getPrimaryLocalPlayer(*((Level **)v1 + 310));
  Player::removeListener(v4, (int)v1);
  Level::removeListener(*((Level **)v1 + 310), v2);
  v5 = *((_DWORD *)v1 + 423);
  ChunkVisibilityCache::ChunkVisibilityCache((ChunkVisibilityCache *)&ptr);
  v6 = *(void **)v5;
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)v5 = ptr;
  ptr = 0;
  v7 = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = v42;
  v42 = v7;
  v8 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v43;
  v43 = v8;
  if ( v6 )
    operator delete(v6);
  v9 = v44;
  *(_WORD *)(v5 + 16) = v45;
  *(_DWORD *)(v5 + 12) = v9;
  if ( ptr )
    operator delete(ptr);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  _aeabi_memclr8(&v39, 73);
  v40 = 2147450880;
  GridArea<Boxed<RenderChunk>>::clear((int)v3);
  GridArea<Boxed<RenderChunk>>::_move((int)v3, (int)&v35);
  GridArea<Boxed<RenderChunk>>::~GridArea((int)&v35);
  LevelBuilder::~LevelBuilder((LevelRendererCamera *)((char *)v1 + 1260));
  v10 = *((_DWORD *)v1 + 307);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 307) = 0;
  v11 = (void *)*((_DWORD *)v1 + 304);
  if ( v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 299);
  if ( v12 )
  {
    v13 = *(void **)(v12 + 4);
    if ( v13 )
      operator delete(v13);
    operator delete((void *)v12);
  }
  *((_DWORD *)v1 + 299) = 0;
  v14 = (Tessellator *)*((_DWORD *)v1 + 298);
  if ( v14 )
    v15 = Tessellator::~Tessellator(v14);
    operator delete((void *)v15);
  *((_DWORD *)v1 + 298) = 0;
  v16 = (void *)*((_DWORD *)v1 + 176);
  if ( v16 )
    operator delete(v16);
  v17 = (void *)*((_DWORD *)v1 + 172);
  if ( v17 )
    operator delete(v17);
  v18 = (void *)*((_DWORD *)v1 + 168);
  if ( v18 )
    operator delete(v18);
  mce::Mesh::~Mesh((LevelRendererCamera *)((char *)v1 + 572));
  GridArea<Boxed<RenderChunk>>::~GridArea((int)v3);
  v19 = *((_DWORD *)v1 + 64);
  if ( v19 )
    do
    {
      v20 = *(_DWORD *)v19;
      v22 = (char *)(*(_QWORD *)(v19 + 8) >> 32);
      v21 = (char *)*(_QWORD *)(v19 + 8);
      if ( v21 != v22 )
      {
        do
        {
          v23 = (int)(v21 + 24);
          (**(void (***)(void))v21)();
          v21 = (char *)v23;
        }
        while ( v22 != (char *)v23 );
        v21 = *(char **)(v19 + 8);
      }
      if ( v21 )
        operator delete(v21);
      operator delete((void *)v19);
      v19 = v20;
    }
    while ( v20 );
  _aeabi_memclr4(*((_QWORD *)v1 + 31), 4 * (*((_QWORD *)v1 + 31) >> 32));
  *((_DWORD *)v1 + 64) = 0;
  *((_DWORD *)v1 + 65) = 0;
  v24 = (char *)*((_DWORD *)v1 + 62);
  if ( v24 && (char *)v1 + 272 != v24 )
    operator delete(v24);
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 236));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 224));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 212));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 200));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 188));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 176));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 164));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 152));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 140));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 128));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 116));
  mce::MaterialPtr::~MaterialPtr((LevelRendererCamera *)((char *)v1 + 104));
  v25 = (void *)*((_DWORD *)v1 + 23);
  if ( v25 )
    operator delete(v25);
  v26 = (void *)*((_DWORD *)v1 + 20);
  if ( v26 )
    operator delete(v26);
  v27 = (void *)*((_DWORD *)v1 + 17);
  if ( v27 )
    operator delete(v27);
  std::_Rb_tree<EntityRendererId,std::pair<EntityRendererId const,Entity *>,std::_Select1st<std::pair<EntityRendererId const,Entity *>>,std::less<EntityRendererId>,std::allocator<std::pair<EntityRendererId const,Entity *>>>::_M_erase(
    (int)v1 + 44,
    *((_DWORD *)v1 + 13));
  *(_QWORD *)&v28 = *((_QWORD *)v1 + 4);
  if ( v28 != v29 )
      if ( *v28 )
        operator delete(*v28);
      v28 += 3;
    while ( v29 != v28 );
    v28 = (void **)*((_DWORD *)v1 + 8);
  if ( v28 )
    operator delete(v28);
  *(_QWORD *)&v30 = *(_QWORD *)((char *)v1 + 20);
  if ( v30 != v31 )
      if ( *v30 )
        operator delete(*v30);
      v30 += 3;
    while ( v31 != v30 );
    v30 = (void **)*((_DWORD *)v1 + 5);
  if ( v30 )
    operator delete(v30);
  *(_QWORD *)&v32 = *((_QWORD *)v1 + 1);
  if ( v32 != v33 )
      if ( *v32 )
        operator delete(*v32);
      v32 += 3;
    while ( v33 != v32 );
    v32 = (void **)*((_DWORD *)v1 + 2);
  if ( v32 )
    operator delete(v32);
  return v1;
}


int __fastcall LevelRendererCamera::renderShadows(int a1, int a2)
{
  int v2; // r10@1
  int i; // r6@1
  BlockEntity **v10; // r4@4
  BlockEntity **v11; // r11@4
  BlockEntity *v12; // r7@6
  char *v14; // r0@7
  int v16; // [sp+0h] [bp-50h]@1
  float v17; // [sp+8h] [bp-48h]@7
  int v18; // [sp+Ch] [bp-44h]@7
  float v20; // [sp+14h] [bp-3Ch]@7
  int v21; // [sp+18h] [bp-38h]@7

  v2 = a2;
  _R5 = a1;
  MatrixStack::push((MatrixStack *)&v16, *(_DWORD *)(a2 + 16) + 16);
  _R0 = MatrixStack::MatrixStackRef::operator->((int)&v16);
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R5,#0x230]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R5,#0x234]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R5,#0x238]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VNMUL.F32       S5, S12, S7
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VNMUL.F32       S8, S12, S8
    VNMUL.F32       S1, S12, S7
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VNMUL.F32       S12, S12, S14
    VSUB.F32        S0, S5, S0
    VSUB.F32        S2, S8, S2
    VLDR            S8, [R0,#0x30]
    VSUB.F32        S4, S1, S4
    VSUB.F32        S6, S12, S6
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S8, S0
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S6, S8, S6
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
  for ( i = *(_DWORD *)(_R5 + 56); i != _R5 + 48; i = sub_119CAC8(i) )
    LevelRendererCamera::renderEntityShadow(_R5, v2, *(Entity **)(i + 20));
  v11 = (BlockEntity **)(*(_QWORD *)(_R5 + 92) >> 32);
  v10 = (BlockEntity **)*(_QWORD *)(_R5 + 92);
  if ( v10 != v11 )
    __asm { VMOV.F32        S16, #0.5 }
    do
    {
      v12 = *v10;
      _R6 = (*(int (__fastcall **)(BlockEntity *, _DWORD))(*(_DWORD *)*v10 + 84))(*v10, *(_DWORD *)(_R5 + 1244));
      __asm
      {
        VMOV            S0, R6
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v14 = BlockEntity::getPosition(v12);
        Vec3::Vec3((int)&v17, (int)v14);
        __asm
        {
          VLDR            S0, [SP,#0x50+var_48]
          VLDR            S2, [SP,#0x50+var_40]
          VADD.F32        S0, S0, S16
          VADD.F32        S2, S2, S16
          VSTR            S0, [SP,#0x50+var_3C]
        }
        v21 = v18;
        __asm { VSTR            S2, [SP,#0x50+var_34] }
        LevelRendererCamera::renderShadow(_R5, v2, _R6, (int)&v20);
      ++v10;
    }
    while ( v11 != v10 );
  MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v16);
  return LevelRendererCamera::renderStencilShadowOverlayCube(_R5, v2);
}


int *__fastcall LevelRendererCamera::getChunkAt(LevelRendererCamera *this, const SubChunkPos *a2)
{
  signed int v2; // r2@1
  int v3; // r12@2
  int *result; // r0@3
  int v6; // r6@5
  int v7; // lr@7
  int v9; // r7@9
  int v10; // r8@11
  int v12; // r5@13

  v2 = *((_DWORD *)this + 117);
  if ( v2 < 1 )
  {
    result = &dword_27D1654;
  }
  else
    v3 = *((_DWORD *)this + 108);
    _R3 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 >= v3 )
    {
      v6 = *((_DWORD *)this + 111);
      if ( _R3 <= v6 )
      {
        v7 = *((_DWORD *)this + 109);
        _R4 = *((_DWORD *)a2 + 1);
        if ( _R4 >= v7 )
        {
          v9 = *((_DWORD *)this + 112);
          if ( _R4 <= v9 )
          {
            v10 = *((_DWORD *)this + 110);
            _R1 = *((_DWORD *)a2 + 2);
            if ( _R1 >= v10 )
            {
              v12 = *((_DWORD *)this + 113);
              if ( _R1 <= v12 )
              {
                _R6 = v6 + v3;
                __asm { VMOV.F32        S0, #0.5 }
                _R5 = v12 + v10;
                __asm
                {
                  VMOV            S8, R3
                  VMOV            S2, R6
                }
                _R6 = v9 + v7;
                  VMOV            S6, R5
                  VMOV            S4, R6
                  VCVT.F32.S32    S2, S2
                  VCVT.F32.S32    S4, S4
                  VMOV            S10, R4
                  VCVT.F32.S32    S6, S6
                  VCVT.F32.S32    S8, S8
                  VCVT.F32.S32    S10, S10
                _R6 = *((_DWORD *)this + 114);
                  VMOV            S14, R1
                  VMUL.F32        S2, S2, S0
                  VMUL.F32        S4, S4, S0
                  VMOV            S12, R6
                  VMUL.F32        S6, S6, S0
                  VCVT.F32.S32    S12, S12
                  VCVT.F32.S32    S14, S14
                  VSUB.F32        S2, S8, S2
                  VLDR            S8, =1.7321
                  VSUB.F32        S4, S10, S4
                  VMUL.F32        S0, S12, S0
                  VSUB.F32        S6, S14, S6
                  VMUL.F32        S2, S2, S2
                  VMUL.F32        S4, S4, S4
                  VADD.F32        S0, S0, S8
                  VMUL.F32        S6, S6, S6
                  VADD.F32        S2, S4, S2
                  VMUL.F32        S0, S0, S0
                  VADD.F32        S2, S2, S6
                  VCMPE.F32       S2, S0
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  result = (int *)(*((_DWORD *)this + 120) + 4 * (_R3 - v3 + _R6 * (_R1 - v10) + v2 * (_R4 - v7)));
                else
                  result = &dword_27D1654;
              }
              else
                result = &dword_27D1654;
            }
            else
              result = &dword_27D1654;
          }
          else
            result = &dword_27D1654;
        }
        else
          result = &dword_27D1654;
      }
      else
        result = &dword_27D1654;
    }
    else
      result = &dword_27D1654;
  return result;
}


int __fastcall LevelRendererCamera::getFogClearColor(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)(a2 + 276);
  v3 = *(_DWORD *)(a2 + 284);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 12) = 1065353216;
  return result;
}


char *__fastcall LevelRendererCamera::getWorldSpaceCamera(LevelRendererCamera *this)
{
  return (char *)this + 672;
}


void __fastcall LevelRendererCamera::~LevelRendererCamera(LevelRendererCamera *this)
{
  LevelRendererCamera::~LevelRendererCamera(this);
}


void __fastcall LevelRendererCamera::onAppSuspended(LevelRendererCamera *this)
{
  LevelRendererCamera::onAppSuspended(this);
}


signed int __fastcall LevelRendererCamera::isAABBVisible(LevelRendererCamera *this, const AABB *a2, bool a3)
{
  LevelRendererCamera *v4; // r4@1
  signed int v7; // r5@2
  LevelBuilder *v9; // r4@4
  int v10; // r11@4
  __int64 v11; // r8@4
  int v12; // r10@4
  int v13; // r1@4
  int v14; // r6@4
  int v17; // r0@5
  int v18; // r7@10
  int v20; // [sp+0h] [bp-60h]@4
  int v21; // [sp+4h] [bp-5Ch]@4
  int v22; // [sp+8h] [bp-58h]@4
  int v23; // [sp+Ch] [bp-54h]@10
  __int64 v24; // [sp+10h] [bp-50h]@12
  char v25; // [sp+18h] [bp-48h]@12
  int v26; // [sp+24h] [bp-3Ch]@4
  signed int v27; // [sp+28h] [bp-38h]@4
  int v28; // [sp+2Ch] [bp-34h]@4
  char v29; // [sp+30h] [bp-30h]@4
  signed int v30; // [sp+34h] [bp-2Ch]@4
  int v31; // [sp+38h] [bp-28h]@4

  _R6 = a2;
  v4 = this;
  __asm
  {
    VLDR            S0, [R6,#4]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
LABEL_15:
    v7 = 1;
  else
    _R0 = *(_WORD *)(*((_DWORD *)this + 312) + 120);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R6,#0x10]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      BlockPos::BlockPos((int)&v29, (int)a2);
      BlockPos::BlockPos((int)&v26, (int)_R6 + 12);
      v9 = (LevelRendererCamera *)((char *)v4 + 1260);
      v10 = 0;
      HIDWORD(v11) = v31 >> 4;
      LODWORD(v11) = *(_DWORD *)&v29 >> 4;
      v12 = v26 >> 4;
      v13 = v30 >> 4;
      v22 = v28 >> 4;
      v21 = v31 >> 4;
      v20 = *(_DWORD *)&v29 >> 4;
      v14 = ((v27 >> 4) + 1 - (v30 >> 4)) * ((v26 >> 4) + 1 - (*(_DWORD *)&v29 >> 4)) * ((v28 >> 4) + 1 - (v31 >> 4));
LABEL_10:
      v18 = 16 * v13;
      v23 = v13;
      while ( v14 != v10 )
      {
        v24 = v11;
        BlockPos::BlockPos((int)&v25, &v24, v18);
        if ( LevelBuilder::isPositionVisible(v9, (const BlockPos *)&v25) )
          goto LABEL_15;
        ++v10;
        _VF = __OFSUB__((_DWORD)v11, v12);
        _NF = (signed int)v11 - v12 < 0;
        LODWORD(v11) = v11 + 1;
        if ( !(_NF ^ _VF) )
        {
          _VF = __OFSUB__(HIDWORD(v11), v22);
          _NF = HIDWORD(v11) - v22 < 0;
          v17 = v21;
          if ( SHIDWORD(v11) < v22 )
            v17 = HIDWORD(v11) + 1;
          v13 = v23;
          HIDWORD(v11) = v17;
          if ( !(_NF ^ _VF) )
            v13 = v23 + 1;
          LODWORD(v11) = v20;
          goto LABEL_10;
        }
      }
      v7 = 0;
  return v7;
}


char *__fastcall LevelRendererCamera::getCameraTargetPos(LevelRendererCamera *this)
{
  return (char *)this + 560;
}


int __fastcall LevelRendererCamera::setupViewArea(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r7@1
  _DWORD *v2; // r0@1
  int v3; // r0@1
  int v4; // r10@1
  int v5; // r3@1
  int v6; // r0@1
  signed int v7; // r6@1
  int v8; // r1@1
  signed int v9; // r1@3
  signed int v10; // r2@7
  int v11; // r4@7
  int v12; // r4@7
  signed int v13; // r7@7
  int v14; // r3@7
  int v15; // r4@7
  signed int v16; // r7@7
  int v17; // r2@7
  int v18; // r0@11
  int result; // r0@11
  char v20; // [sp+4h] [bp-12Ch]@1
  int v21; // [sp+8h] [bp-128h]@3
  int v22; // [sp+Ch] [bp-124h]@7
  char v23; // [sp+10h] [bp-120h]@1
  int v24; // [sp+90h] [bp-A0h]@1
  __int16 v25; // [sp+94h] [bp-9Ch]@1
  __int16 v26; // [sp+96h] [bp-9Ah]@1
  char v27; // [sp+98h] [bp-98h]@1
  int (*v28)(void); // [sp+A4h] [bp-8Ch]@1
  _DWORD *v29; // [sp+ACh] [bp-84h]@1
  int v30; // [sp+B0h] [bp-80h]@1
  int (*v31)(void); // [sp+B4h] [bp-7Ch]@1
  unsigned int *(__fastcall *v32)(unsigned int **, RenderChunk **); // [sp+B8h] [bp-78h]@1
  int (*v33)(void); // [sp+C4h] [bp-6Ch]@1
  _DWORD *v34; // [sp+D0h] [bp-60h]@1
  int v35; // [sp+D4h] [bp-5Ch]@1
  int v36; // [sp+E0h] [bp-50h]@1
  int v37; // [sp+E4h] [bp-4Ch]@1
  int v38; // [sp+E8h] [bp-48h]@1
  int v39; // [sp+ECh] [bp-44h]@1
  int v40; // [sp+F0h] [bp-40h]@1
  signed int v41; // [sp+F4h] [bp-3Ch]@1
  int v42; // [sp+F8h] [bp-38h]@1
  int v43; // [sp+FCh] [bp-34h]@11
  int v44; // [sp+100h] [bp-30h]@11
  int v45; // [sp+104h] [bp-2Ch]@11
  int v46; // [sp+108h] [bp-28h]@11
  int v47; // [sp+10Ch] [bp-24h]@1

  v1 = this;
  _aeabi_memclr8(&v24, 60);
  v24 = 16;
  v25 = -32768;
  v26 = 0x7FFF;
  v28 = 0;
  v31 = 0;
  v33 = 0;
  v27 = 1;
  v2 = operator new(4u);
  v34 = v2;
  *v2 = v1;
  v29 = v2;
  v30 = v35;
  v31 = (int (*)(void))sub_F1D3E0;
  v32 = sub_F1D32C;
  v3 = *((_DWORD *)v1 + 312);
  v25 = 0;
  v26 = *(_WORD *)(v3 + 120) - 1;
  GridArea<Boxed<RenderChunk>>::GridArea((int)&v23, (int)&v24);
  v4 = (int)v1 + 384;
  GridArea<Boxed<RenderChunk>>::clear((int)v1 + 384);
  GridArea<Boxed<RenderChunk>>::_move((int)v1 + 384, (int)&v23);
  GridArea<Boxed<RenderChunk>>::~GridArea((int)&v23);
  BlockPos::BlockPos((int)&v20, (int)v1 + 548);
  v5 = *((_DWORD *)v1 + 92);
  v6 = *((_WORD *)v1 + 254);
  v7 = *((_WORD *)v1 + 253);
  v8 = *((_DWORD *)v1 + 119);
  v42 = 0;
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v47 = v8;
  if ( v5 < 0 )
    v5 = 0;
  v36 = (*(_DWORD *)&v20 - v5) >> 4;
  v9 = v7;
  if ( v21 - v5 > v7 )
    v9 = v21 - v5;
  if ( v21 - v5 > v6 )
    v9 = v6;
  v37 = v9 >> 4;
  v10 = v22 - v5;
  v38 = (v22 - v5) >> 4;
  v11 = (v5 + *(_DWORD *)&v20) >> 4;
  v39 = v11;
  v12 = v11 - ((*(_DWORD *)&v20 - v5) >> 4);
  v13 = v22 + v5;
  v14 = v5 + v21;
  v15 = v12 + 1;
  v16 = v13 >> 4;
  v17 = v16 - (v10 >> 4) + 1;
  if ( v14 > v7 )
    v7 = v14;
  if ( v14 > v6 )
    v7 = v6;
  v40 = v7 >> 4;
  v18 = (v7 >> 4) - (v9 >> 4) + 1;
  v41 = v16;
  v42 = v15;
  v43 = v18;
  v44 = v17;
  v45 = v17 * v15;
  v46 = v18 * v17 * v15;
  result = GridArea<Boxed<RenderChunk>>::move(v4, (int)&v36);
  if ( v33 )
    result = v33();
  if ( v31 )
    result = v31();
  if ( v28 )
    result = v28();
  return result;
}


char *__fastcall LevelRendererCamera::getSunMatrix(LevelRendererCamera *this)
{
  return (char *)this + 1040;
}


char *__fastcall LevelRendererCamera::getCameraPos(LevelRendererCamera *this)
{
  return (char *)this + 548;
}


void __fastcall LevelRendererCamera::onAppSuspended(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r4@1
  RenderChunk **v2; // r5@1 OVERLAPPED
  RenderChunk **v3; // r6@1 OVERLAPPED

  v1 = this;
  for ( *(_QWORD *)&v2 = *((_QWORD *)this + 60); v3 != v2; ++v2 )
  {
    if ( *v2 )
      RenderChunk::reset(*v2);
  }
  mce::Mesh::reset((LevelRendererCamera *)((char *)v1 + 572));
  j_j_j__ZN12LevelBuilder14onAppSuspendedEv((LevelRendererCamera *)((char *)v1 + 1260));
}


int __fastcall LevelRendererCamera::render(int a1, BaseEntityRenderContext *a2, int a3)
{
  BaseEntityRenderContext *v3; // r4@1
  int v6; // r0@1
  unsigned int v7; // r7@1
  __int64 v8; // kr00_8@1
  int v9; // r6@1
  int v10; // r6@1
  char *v11; // r0@1
  __int64 v12; // r1@1
  int v16; // r3@1
  int v17; // r0@1
  int v18; // r0@1
  int v19; // r0@1
  int v20; // r0@1
  int v21; // r0@1
  int v22; // t1@1
  int v23; // r5@1
  const TerrainLayer *v24; // r1@1
  const TerrainLayer *v25; // r1@1
  int v26; // r0@1
  int v27; // r3@1
  int v28; // r0@1
  char v29; // r0@5
  int v30; // r5@8
  const TerrainLayer *v31; // r1@8
  int v32; // r0@8
  int v33; // r3@8
  int v34; // r0@8
  char v35; // r0@12
  int v36; // r5@15
  const TerrainLayer *v37; // r1@15
  BaseEntityRenderContext *v38; // r6@15
  int v39; // r0@15
  int v41; // r3@15
  int v42; // r0@15
  char v43; // r0@19
  int v44; // r5@24
  int v45; // r1@24
  int v46; // r0@24
  int v47; // r3@24
  int v48; // r0@24
  char v49; // r0@28
  const TerrainLayer *v50; // r1@31
  int v51; // r5@33
  const TerrainLayer *v52; // r1@33
  int v53; // r0@33
  int v54; // r3@33
  int v55; // r0@33
  char v56; // r0@37
  int v57; // r5@40
  const TerrainLayer *v58; // r1@40
  int v59; // r0@40
  int v60; // r3@40
  int v61; // r0@40
  char v62; // r0@44
  int v63; // r5@47
  const TerrainLayer *v64; // r1@47
  int v65; // r0@47
  int v66; // r3@47
  int v67; // r0@47
  char v68; // r0@51
  int v69; // r5@55
  int v70; // r0@55
  int v71; // r3@55
  int v72; // r0@55
  char v73; // r0@59
  int v74; // r5@65
  const TerrainLayer *v75; // r1@65
  int v76; // r0@65
  int v77; // r3@65
  int v78; // r0@65
  char v79; // r0@69
  int v80; // r5@72
  const TerrainLayer *v81; // r1@72
  int v82; // r0@72
  int v83; // r3@72
  int v84; // r0@72
  char v85; // r0@76
  int v86; // r5@79
  int v87; // r1@79
  int v88; // r0@79
  int v89; // r3@79
  int v90; // r0@79
  char v91; // r0@83
  unsigned int v92; // r0@88
  unsigned int v93; // r0@89
  const TerrainLayer *v94; // r1@93
  int v95; // r11@100
  int *v96; // r7@100
  signed int v97; // r2@100
  int v98; // r1@102
  int v99; // r0@102
  int v100; // r3@102
  int v101; // r0@102
  char v102; // r0@106
  int v103; // r7@109
  const TerrainLayer *v104; // r1@109
  const TerrainLayer **v105; // r5@109
  signed int v106; // r2@109
  const TerrainLayer *v107; // r1@111
  int v108; // r0@111
  int v109; // r3@111
  int v110; // r0@111
  char v111; // r0@115
  int v112; // r11@118
  const TerrainLayer **v113; // r7@118
  signed int v114; // r2@118
  const TerrainLayer *v115; // r1@120
  int v116; // r0@120
  int v117; // r3@120
  int v118; // r0@120
  char v120; // r0@126
  bool v121; // zf@132
  int v122; // r11@138
  const TerrainLayer **v123; // r7@138
  signed int v124; // r2@138
  const TerrainLayer *v125; // r1@140
  int v126; // r0@140
  int v127; // r3@140
  int v128; // r0@140
  char v129; // r0@144
  int v130; // r7@147
  const TerrainLayer **v131; // r5@147
  signed int v132; // r2@147
  const TerrainLayer *v133; // r1@149
  int v134; // r0@149
  int v135; // r3@149
  int v136; // r0@149
  char v137; // r0@153
  int v138; // r11@156
  int *v139; // r7@156
  signed int v140; // r2@156
  int v141; // r1@158
  int v142; // r0@158
  int v143; // r3@158
  int v144; // r0@158
  bool v145; // zf@159
  char v146; // r0@164
  int result; // r0@172
  int v148; // [sp+0h] [bp-48h]@0
  int v149; // [sp+4h] [bp-44h]@0
  int v150; // [sp+Ch] [bp-3Ch]@105
  void *v151; // [sp+10h] [bp-38h]@105
  char v152; // [sp+14h] [bp-34h]@108
  char v153; // [sp+15h] [bp-33h]@108
  int v154; // [sp+18h] [bp-30h]@4
  _DWORD *v155; // [sp+1Ch] [bp-2Ch]@4
  char v156; // [sp+20h] [bp-28h]@7
  char v157; // [sp+21h] [bp-27h]@7

  v3 = a2;
  _R9 = a1;
  _R8 = a3;
  v6 = BaseEntityRenderContext::getScreenContext(a2);
  v7 = v6;
  v8 = *(_QWORD *)(v6 + 28);
  v9 = *(_DWORD *)(HIDWORD(v8) + 524);
  **(_DWORD **)(v9 + 20) = mce::Clock::accumulatedTime((mce::Clock *)v8);
  *(_BYTE *)(v9 + 17) = 1;
  v10 = *(_DWORD *)(HIDWORD(v8) + 528);
  v11 = BaseEntityRenderContext::getCameraPosition(v3);
  v12 = *(_QWORD *)v11;
  __asm { VMOV.F32        S0, #-7.0 }
  v16 = *(_DWORD *)(v10 + 20);
  v17 = *((_DWORD *)v11 + 2);
  *(_QWORD *)v16 = v12;
  *(_DWORD *)(v16 + 8) = v17;
  *(_BYTE *)(v10 + 17) = 1;
  v18 = *(_DWORD *)(HIDWORD(v8) + 532);
  LODWORD(v12) = *(_DWORD *)(v18 + 20);
  *(_DWORD *)v12 = *(_DWORD *)(_R9 + 276);
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(_R9 + 280);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(_R9 + 284);
  *(_DWORD *)(v12 + 12) = *(_DWORD *)(_R9 + 288);
  *(_BYTE *)(v18 + 17) = 1;
  v19 = *(_DWORD *)(HIDWORD(v8) + 536);
  LODWORD(v12) = *(_DWORD *)(v19 + 20);
  *(_DWORD *)v12 = *(_DWORD *)(_R9 + 292);
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(_R9 + 296);
  *(_BYTE *)(v19 + 17) = 1;
  v20 = *(_DWORD *)(HIDWORD(v8) + 540);
  **(_DWORD **)(v20 + 20) = *(_DWORD *)(_R9 + 376);
  *(_BYTE *)(v20 + 17) = 1;
  __asm { VLDR            S2, [R9,#0x174] }
  v21 = *(_DWORD *)(HIDWORD(v8) + 544);
  __asm { VADD.F32        S0, S2, S0 }
  v22 = *(_DWORD *)(v21 + 20);
  __asm { VSTR            S0, [R1] }
  *(_BYTE *)(v21 + 17) = 1;
  mce::ConstantBufferConstantsBase::sync(
    (mce::ConstantBufferConstantsBase *)(HIDWORD(v8) + 516),
    *(mce::RenderContext **)(v7 + 12));
  v23 = *(_BYTE *)(_R8 + 9);
  v25 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::OpaqueSeasons,
                                  v24);
  v26 = *(_DWORD *)(_R9 + 8);
  v27 = *(_DWORD *)(v26 + 12 * (_DWORD)v25);
  v28 = v26 + 12 * (_DWORD)v25;
  if ( v27 != *(_DWORD *)(v28 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v25
    || (const TerrainLayer *)TerrainLayer::Blend == v25 )
  {
    v154 = v28;
    v155 = &TerrainLayer::OpaqueSeasons;
    if ( v23 )
      v29 = 1;
    else
      v29 = *(_BYTE *)(_R9 + 316);
    v156 = v29;
    v157 = 0;
    LevelRendererCamera::renderChunkQueue(_R9, v7, (int **)&v154);
  }
  v30 = *(_BYTE *)(_R8 + 9);
  v31 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::Opaque,
                                  v25);
  v32 = *(_DWORD *)(_R9 + 8);
  v33 = *(_DWORD *)(v32 + 12 * (_DWORD)v31);
  v34 = v32 + 12 * (_DWORD)v31;
  if ( v33 != *(_DWORD *)(v34 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v31
    || (const TerrainLayer *)TerrainLayer::Blend == v31 )
    v154 = v34;
    v155 = &TerrainLayer::Opaque;
    if ( v30 )
      v35 = 1;
      v35 = *(_BYTE *)(_R9 + 316);
    v156 = v35;
  v36 = *(_BYTE *)(_R8 + 9);
  v37 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::EndPortal,
                                  v31);
  v38 = v3;
  v39 = *(_DWORD *)(_R9 + 8);
  _R4 = v7;
  v41 = *(_DWORD *)(v39 + 12 * (_DWORD)v37);
  v42 = v39 + 12 * (_DWORD)v37;
  if ( v41 != *(_DWORD *)(v42 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v37
    || (const TerrainLayer *)TerrainLayer::Blend == v37 )
    v154 = v42;
    v155 = &TerrainLayer::EndPortal;
    if ( v36 )
      v43 = 1;
      v43 = *(_BYTE *)(_R9 + 316);
    v156 = v43;
  if ( *(_BYTE *)(_R8 + 17) )
    GameRenderer::renderInsideCubes(*(_DWORD *)(*(_DWORD *)(_R9 + 1256) + 1576), v7);
  v44 = *(_BYTE *)(_R8 + 9);
  v45 = *(_DWORD *)LevelRenderer::terrainRenderLayerToGeometryLayer((LevelRenderer *)&TerrainLayer::DoubleSide, v37);
  v46 = *(_DWORD *)(_R9 + 8);
  v47 = *(_DWORD *)(v46 + 12 * v45);
  v48 = v46 + 12 * v45;
  if ( v47 != *(_DWORD *)(v48 + 4) || TerrainLayer::Water == v45 || TerrainLayer::Blend == v45 )
    v154 = v48;
    v155 = &TerrainLayer::DoubleSide;
    if ( v44 )
      v49 = 1;
      v49 = *(_BYTE *)(_R9 + 316);
    v156 = v49;
  (*(void (__fastcall **)(int, BaseEntityRenderContext *))(*(_DWORD *)_R9 + 52))(_R9, v38);
  v50 = *(const TerrainLayer **)(_R9 + 1220);
  if ( *(const TerrainLayer **)(_R9 + 1216) != v50 )
    LevelRendererCamera::renderWaterHoles((LevelRendererCamera *)_R9, v38);
  v51 = *(_BYTE *)(_R8 + 9);
  v52 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::FarSeasons,
                                  v50);
  v53 = *(_DWORD *)(_R9 + 8);
  v54 = *(_DWORD *)(v53 + 12 * (_DWORD)v52);
  v55 = v53 + 12 * (_DWORD)v52;
  if ( v54 != *(_DWORD *)(v55 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v52
    || (const TerrainLayer *)TerrainLayer::Blend == v52 )
    v154 = v55;
    v155 = &TerrainLayer::FarSeasons;
    if ( v51 )
      v56 = 1;
      v56 = *(_BYTE *)(_R9 + 316);
    v156 = v56;
  v57 = *(_BYTE *)(_R8 + 9);
  v58 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::FarSeasonsAlpha,
                                  v52);
  v59 = *(_DWORD *)(_R9 + 8);
  v60 = *(_DWORD *)(v59 + 12 * (_DWORD)v58);
  v61 = v59 + 12 * (_DWORD)v58;
  if ( v60 != *(_DWORD *)(v61 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v58
    || (const TerrainLayer *)TerrainLayer::Blend == v58 )
    v154 = v61;
    v155 = &TerrainLayer::FarSeasonsAlpha;
    if ( v57 )
      v62 = 1;
      v62 = *(_BYTE *)(_R9 + 316);
    v156 = v62;
  v63 = *(_BYTE *)(_R8 + 9);
  v64 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::Far,
                                  v58);
  v65 = *(_DWORD *)(_R9 + 8);
  v66 = *(_DWORD *)(v65 + 12 * (_DWORD)v64);
  v67 = v65 + 12 * (_DWORD)v64;
  if ( v66 != *(_DWORD *)(v67 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v64
    || (const TerrainLayer *)TerrainLayer::Blend == v64 )
    v154 = v67;
    v155 = &TerrainLayer::Far;
    if ( v63 )
      v68 = 1;
      v68 = *(_BYTE *)(_R9 + 316);
    v156 = v68;
  if ( *(_BYTE *)(_R9 + 1233) )
    v69 = *(_BYTE *)(_R8 + 9);
    v64 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                    (LevelRenderer *)&TerrainLayer::WaterStencil,
                                    v64);
    v70 = *(_DWORD *)(_R9 + 8);
    v71 = *(_DWORD *)(v70 + 12 * (_DWORD)v64);
    v72 = v70 + 12 * (_DWORD)v64;
    if ( v71 != *(_DWORD *)(v72 + 4)
      || (const TerrainLayer *)TerrainLayer::Water == v64
      || (const TerrainLayer *)TerrainLayer::Blend == v64 )
    {
      v154 = v72;
      v155 = &TerrainLayer::WaterStencil;
      if ( v69 )
        v73 = 1;
      else
        v73 = *(_BYTE *)(_R9 + 316);
      v156 = v73;
      v157 = 0;
      LevelRendererCamera::renderChunkQueue(_R9, v7, (int **)&v154);
    }
  if ( *(_BYTE *)(_R8 + 19) && (*(int (**)(void))(**(_DWORD **)(_R9 + 1248) + 192))() == 1 )
    LevelRendererCamera::renderSky(_R9, v7, *(_DWORD *)(_R8 + 4));
  v74 = *(_BYTE *)(_R8 + 9);
  v75 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::Alpha,
                                  v64);
  v76 = *(_DWORD *)(_R9 + 8);
  v77 = *(_DWORD *)(v76 + 12 * (_DWORD)v75);
  v78 = v76 + 12 * (_DWORD)v75;
  if ( v77 != *(_DWORD *)(v78 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v75
    || (const TerrainLayer *)TerrainLayer::Blend == v75 )
    v154 = v78;
    v155 = &TerrainLayer::Alpha;
    if ( v74 )
      v79 = 1;
      v79 = *(_BYTE *)(_R9 + 316);
    v156 = v79;
  v80 = *(_BYTE *)(_R8 + 9);
  v81 = *(const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::AlphaSingleSide,
                                  v75);
  v82 = *(_DWORD *)(_R9 + 8);
  v83 = *(_DWORD *)(v82 + 12 * (_DWORD)v81);
  v84 = v82 + 12 * (_DWORD)v81;
  if ( v83 != *(_DWORD *)(v84 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v81
    || (const TerrainLayer *)TerrainLayer::Blend == v81 )
    v154 = v84;
    v155 = &TerrainLayer::AlphaSingleSide;
    if ( v80 )
      v85 = 1;
      v85 = *(_BYTE *)(_R9 + 316);
    v156 = v85;
  v86 = *(_BYTE *)(_R8 + 9);
  v87 = *(_DWORD *)LevelRenderer::terrainRenderLayerToGeometryLayer((LevelRenderer *)&TerrainLayer::AlphaSeasons, v81);
  v88 = *(_DWORD *)(_R9 + 8);
  v89 = *(_DWORD *)(v88 + 12 * v87);
  v90 = v88 + 12 * v87;
  if ( v89 != *(_DWORD *)(v90 + 4) || TerrainLayer::Water == v87 || TerrainLayer::Blend == v87 )
    v154 = v90;
    v155 = &TerrainLayer::AlphaSeasons;
    if ( v86 )
      v91 = 1;
      v91 = *(_BYTE *)(_R9 + 316);
    v156 = v91;
  if ( *(_BYTE *)(_R8 + 12) )
    (*(void (__fastcall **)(int, BaseEntityRenderContext *))(*(_DWORD *)_R9 + 40))(_R9, v38);
  v92 = *(_WORD *)(_R8 + 10);
  if ( (_BYTE)v92 )
    __asm
      VLDR            S0, [R4,#8]
      VLDR            S2, [R8]
      VSTR            S0, [SP,#0x48+var_48]
      VSTR            S2, [SP,#0x48+var_44]
    ParticleEngine::render(*(_DWORD *)(*(_DWORD *)(_R9 + 1256) + 1568), *(float *)&v7, _R9 + 548, _R9 + 560, v148, v149);
    v93 = *(_BYTE *)(_R8 + 11);
  else
    v93 = v92 >> 8;
  if ( v93 )
    LevelRendererCamera::renderShadows(_R9, v7);
  (*(void (__fastcall **)(int, BaseEntityRenderContext *, _DWORD))(*(_DWORD *)_R9 + 44))(_R9, v38, 0);
  if ( *(_DWORD *)(_R9 + 1244) )
    (*(void (__fastcall **)(int, BaseEntityRenderContext *))(*(_DWORD *)_R9 + 56))(_R9, v38);
  if ( *(_BYTE *)(_R8 + 13) )
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)_R9 + 60))(_R9, v7);
  if ( *(_BYTE *)(_R8 + 15) && *(_BYTE *)(_R9 + 1232) )
    WeatherRenderer::render(*(float *)(_R9 + 1228), v7);
  v95 = *(_BYTE *)(_R8 + 9);
  v96 = (int *)LevelRenderer::terrainRenderLayerToGeometryLayer((LevelRenderer *)&TerrainLayer::Water, v94);
  BlockPos::BlockPos((int)&v154, _R9 + 548);
  v97 = 2;
  if ( (signed int)v155 >= *(_WORD *)(_R9 + 1252) )
    v97 = 1;
  v98 = *v96;
  v99 = *(_DWORD *)(_R9 + 12 * v97 + 8);
  v100 = *(_DWORD *)(v99 + 12 * *v96);
  v101 = v99 + 12 * *v96;
  if ( v100 != *(_DWORD *)(v101 + 4) || TerrainLayer::Water == v98 || TerrainLayer::Blend == v98 )
    v150 = v101;
    v151 = &TerrainLayer::Water;
    if ( v95 )
      v102 = 1;
      v102 = *(_BYTE *)(_R9 + 316);
    v152 = v102;
    v153 = 0;
    LevelRendererCamera::renderChunkQueue(_R9, _R4, (int **)&v150);
  (*(void (__fastcall **)(int, BaseEntityRenderContext *, signed int))(*(_DWORD *)_R9 + 44))(_R9, v38, 1);
  v103 = *(_BYTE *)(_R8 + 9);
  v105 = (const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::BlendFar,
                                  v104);
  v106 = 2;
    v106 = 1;
  v107 = *v105;
  v108 = *(_DWORD *)(_R9 + 12 * v106 + 8);
  v109 = *(_DWORD *)(v108 + 12 * (_DWORD)*v105);
  v110 = v108 + 12 * (_DWORD)*v105;
  if ( v109 != *(_DWORD *)(v110 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v107
    || (const TerrainLayer *)TerrainLayer::Blend == v107 )
    v150 = v110;
    v151 = &TerrainLayer::BlendFar;
    if ( v103 )
      v111 = 1;
      v111 = *(_BYTE *)(_R9 + 316);
    v152 = v111;
  v112 = *(_BYTE *)(_R8 + 9);
  v113 = (const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::Blend,
                                  v107);
  v114 = 2;
    v114 = 1;
  v115 = *v113;
  v116 = *(_DWORD *)(_R9 + 12 * v114 + 8);
  v117 = *(_DWORD *)(v116 + 12 * (_DWORD)*v113);
  v118 = v116 + 12 * (_DWORD)*v113;
  if ( v117 != *(_DWORD *)(v118 + 4) )
    goto LABEL_176;
  _ZF = TerrainLayer::Water == (_DWORD)v115;
  if ( (const TerrainLayer *)TerrainLayer::Water != v115 )
    _ZF = TerrainLayer::Blend == (_DWORD)v115;
  if ( _ZF )
LABEL_176:
    v150 = v118;
    v151 = &TerrainLayer::Blend;
    if ( v112 )
      v120 = 1;
      v120 = *(_BYTE *)(_R9 + 316);
    v152 = v120;
  if ( *(_BYTE *)(_R8 + 10) )
    ParticleEngine::renderBlended(
      *(_DWORD *)(*(_DWORD *)(_R9 + 1256) + 1568),
      v38,
      _R9 + 548,
      _R9 + 560,
      v148,
      *(float *)&v149);
  if ( *(_BYTE *)(_R8 + 19) )
    v121 = *(_BYTE *)(_R8 + 18) == 0;
    if ( *(_BYTE *)(_R8 + 18) )
      v121 = *(_BYTE *)(_R9 + 1236) == 0;
    if ( !v121 && !*(_BYTE *)(_R9 + 1232) && (*(int (**)(void))(**(_DWORD **)(_R9 + 1248) + 132))() == 1 )
      LevelRendererCamera::renderClouds(_R9, _R4);
  v122 = *(_BYTE *)(_R8 + 9);
  v123 = (const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  (LevelRenderer *)&TerrainLayer::Water,
                                  v115);
  v124 = 1;
    v124 = 2;
  v125 = *v123;
  v126 = *(_DWORD *)(_R9 + 12 * v124 + 8);
  v127 = *(_DWORD *)(v126 + 12 * (_DWORD)*v123);
  v128 = v126 + 12 * (_DWORD)*v123;
  if ( v127 != *(_DWORD *)(v128 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v125
    || (const TerrainLayer *)TerrainLayer::Blend == v125 )
    v150 = v128;
    if ( v122 )
      v129 = 1;
      v129 = *(_BYTE *)(_R9 + 316);
    v152 = v129;
  v130 = *(_BYTE *)(_R8 + 9);
  v131 = (const TerrainLayer **)LevelRenderer::terrainRenderLayerToGeometryLayer(
                                  v125);
  v132 = 1;
    v132 = 2;
  v133 = *v131;
  v134 = *(_DWORD *)(_R9 + 12 * v132 + 8);
  v135 = *(_DWORD *)(v134 + 12 * (_DWORD)*v131);
  v136 = v134 + 12 * (_DWORD)*v131;
  if ( v135 != *(_DWORD *)(v136 + 4)
    || (const TerrainLayer *)TerrainLayer::Water == v133
    || (const TerrainLayer *)TerrainLayer::Blend == v133 )
    v150 = v136;
    if ( v130 )
      v137 = 1;
      v137 = *(_BYTE *)(_R9 + 316);
    v152 = v137;
  v138 = *(_BYTE *)(_R8 + 9);
  v139 = (int *)LevelRenderer::terrainRenderLayerToGeometryLayer((LevelRenderer *)&TerrainLayer::Blend, v133);
  v140 = 1;
    v140 = 2;
  v141 = *v139;
  v142 = *(_DWORD *)(_R9 + 12 * v140 + 8);
  v143 = *(_DWORD *)(v142 + 12 * *v139);
  v144 = v142 + 12 * *v139;
  if ( v143 != *(_DWORD *)(v144 + 4) )
    goto LABEL_177;
  v145 = TerrainLayer::Water == v141;
  if ( TerrainLayer::Water != v141 )
    v145 = TerrainLayer::Blend == v141;
  if ( v145 )
LABEL_177:
    v150 = v144;
    if ( v138 )
      v146 = 1;
      v146 = *(_BYTE *)(_R9 + 316);
    v152 = v146;
  if ( *(_BYTE *)(_R8 + 16) )
    (*(void (__fastcall **)(int, BaseEntityRenderContext *))(*(_DWORD *)_R9 + 48))(_R9, v38);
  if ( *(_BYTE *)(_R8 + 15) && !*(_BYTE *)(_R9 + 1232) )
    WeatherRenderer::render(*(float *)(_R9 + 1228), _R4);
  result = *(_BYTE *)(_R8 + 14);
  if ( *(_BYTE *)(_R8 + 14) )
    result = (*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)_R9 + 64))(_R9, _R4);
  return result;
}


int __fastcall LevelRendererCamera::getAmbientBrightness(LevelRendererCamera *this)
{
  int result; // r0@7

  if ( *(_BYTE *)(*((_DWORD *)this + 312) + 108) )
  {
    __asm
    {
      VLDR            S2, =55.0
      VLDR            S4, [R0,#0x234]
      VLDR            S0, [R0,#0x168]
      VCMPE.F32       S4, S2
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S4, #10.0
    }
    if ( _NF ^ _VF )
      __asm { VLDRLT          S2, =0.35 }
    else
      __asm { VMOVGE.F32      S2, #3.5 }
      VADD.F32        S0, S0, S2
      VCMPE.F32       S0, S4
      __asm { VMOVLT.F32      S4, S0 }
      VLDR            S0, =0.1
      VMUL.F32        S0, S4, S0
      VMOV            R0, S0
  }
  else
      VLDR            S0, =0.0
  return result;
}


signed int __fastcall LevelRendererCamera::_updateCloudHeight(LevelRendererCamera *this)
{
  LevelRendererCamera *v1; // r4@1
  signed int result; // r0@2

  v1 = this;
  if ( (*(int (**)(void))(**((_DWORD **)this + 312) + 132))() == 1 )
  {
    _R0 = (*(int (**)(void))(**((_DWORD **)v1 + 312) + 156))();
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
    *((_WORD *)v1 + 626) = result;
  }
  else
    result = 0x7FFF;
    *((_WORD *)v1 + 626) = 0x7FFF;
  return result;
}


int __fastcall LevelRendererCamera::updateViewArea(int a1, int a2)
{
  int v3; // r5@1
  char *v4; // r0@1
  int v10; // r6@6
  _DWORD *v11; // r0@6
  int v12; // r3@11
  int v13; // r1@11
  int v14; // r2@11
  int v15; // r3@11
  int result; // r0@11
  int v17; // r1@11
  int v18; // r2@11
  char v19; // [sp+4h] [bp-54h]@6
  void (*v20)(void); // [sp+Ch] [bp-4Ch]@6
  _DWORD *v21; // [sp+14h] [bp-44h]@6
  void (*v22)(void); // [sp+1Ch] [bp-3Ch]@6
  signed int (__fastcall *v23)(int **); // [sp+20h] [bp-38h]@6
  int v24; // [sp+24h] [bp-34h]@1
  int v25; // [sp+28h] [bp-30h]@1
  int v26; // [sp+2Ch] [bp-2Ch]@1

  _R4 = a1;
  v3 = a2;
  v4 = mce::Camera::getPosition((mce::Camera *)(a1 + 672));
  v24 = *(_DWORD *)v4;
  v25 = *((_DWORD *)v4 + 1);
  v26 = *((_DWORD *)v4 + 2);
  LevelRendererCamera::updatePerChunkFaceSortState((LevelRendererCamera *)_R4, (const Vec3 *)&v24);
  __asm
  {
    VLDR            S0, [R4,#0x20C]
    VLDR            S16, [SP,#0x58+var_34]
    VLDR            S2, [R4,#0x210]
    VLDR            S18, [SP,#0x58+var_30]
    VSUB.F32        S0, S16, S0
    VLDR            S20, [SP,#0x58+var_2C]
    VSUB.F32        S2, S18, S2
    VLDR            S4, [R4,#0x214]
  }
  _R0 = *(_DWORD *)(_R4 + 368);
    VSUB.F32        S4, S20, S4
    VLDR            S6, =0.0625
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
    VADD.F32        S0, S0, S4
    VMOV.F32        S4, #8.0
    VMUL.F32        S2, S2, S6
    VMOV.F32        S6, #16.0
    VSQRT.F32       S0, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S6 }
  if ( _R0 > 64 )
    __asm { VMOVGT.F32      S2, S4 }
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
    v10 = *(_DWORD *)(*(_DWORD *)(_R4 + 1240) + 5872);
    v11 = operator new(0x10u);
    *v11 = _R4;
    __asm
    {
      VSTR            S16, [R0,#4]
      VSTR            S18, [R0,#8]
      VSTR            S20, [R0,#0xC]
    }
    v21 = v11;
    v22 = (void (*)(void))sub_F1CB24;
    v23 = sub_F1CA6C;
    v20 = 0;
    TaskGroup::queue(v10, (int)&v21, (int)&v19, 1u, 0xFFFFFFFF);
    if ( v20 )
      v20();
    if ( v22 )
      v22();
    *(_DWORD *)(_R4 + 524) = v24;
    *(_DWORD *)(_R4 + 528) = v25;
    *(_DWORD *)(_R4 + 532) = v26;
  v12 = _R4 + 548;
  v13 = *(_DWORD *)(v3 + 12);
  v14 = *(_DWORD *)(v3 + 16);
  *(_DWORD *)v12 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  v15 = _R4 + 560;
  result = *(_DWORD *)(v3 + 20);
  v17 = *(_DWORD *)(v3 + 24);
  v18 = *(_DWORD *)(v3 + 28);
  *(_DWORD *)v15 = result;
  *(_DWORD *)(v15 + 4) = v17;
  *(_DWORD *)(v15 + 8) = v18;
  return result;
}


int __fastcall LevelRendererCamera::onViewRadiusChanged(LevelRendererCamera *this, int a2)
{
  LevelRendererCamera *v2; // r5@1
  char *v3; // r8@1
  int result; // r0@2
  int v5; // r3@3
  signed int v6; // r1@3
  int v7; // r0@3
  int v8; // r5@3
  signed int v9; // r2@3
  signed int v10; // r5@7
  signed int v11; // r7@7
  int v12; // r4@7
  int v13; // r3@7
  signed int v14; // r7@7
  int v15; // r6@7
  char v16; // [sp+4h] [bp-54h]@3
  int v17; // [sp+8h] [bp-50h]@3
  int v18; // [sp+Ch] [bp-4Ch]@7
  int v19; // [sp+10h] [bp-48h]@3
  int v20; // [sp+14h] [bp-44h]@3
  int v21; // [sp+18h] [bp-40h]@3
  int v22; // [sp+1Ch] [bp-3Ch]@3
  signed int v23; // [sp+20h] [bp-38h]@3
  signed int v24; // [sp+24h] [bp-34h]@3
  int v25; // [sp+28h] [bp-30h]@3
  int v26; // [sp+2Ch] [bp-2Ch]@11
  int v27; // [sp+30h] [bp-28h]@11
  int v28; // [sp+34h] [bp-24h]@11
  int v29; // [sp+38h] [bp-20h]@11
  int v30; // [sp+3Ch] [bp-1Ch]@3

  v2 = this;
  v3 = (char *)this + 384;
  if ( a2 == 1 )
  {
    GridArea<Boxed<RenderChunk>>::clear((int)this + 384);
    *((_DWORD *)v2 + 91) = 0;
    LevelRendererCamera::setupViewArea(v2);
    *((_DWORD *)v2 + 131) = *((_DWORD *)v2 + 137);
    *((_DWORD *)v2 + 132) = *((_DWORD *)v2 + 138);
    result = *((_DWORD *)v2 + 139);
    *((_DWORD *)v2 + 133) = result;
  }
  else
    BlockPos::BlockPos((int)&v16, (int)this + 524);
    v5 = *((_DWORD *)v2 + 92);
    v6 = *((_WORD *)v2 + 253);
    v7 = *((_WORD *)v2 + 254);
    v8 = *((_DWORD *)v2 + 119);
    v25 = 0;
    v9 = v6;
    v23 = 0;
    v24 = 0;
    v21 = 0;
    v22 = 0;
    v20 = 0;
    v30 = v8;
    v19 = (*(_DWORD *)&v16 - v5) >> 4;
    if ( v17 - v5 > v6 )
      v9 = v17 - v5;
    if ( v17 - v5 > v7 )
      v9 = v7;
    v20 = v9 >> 4;
    v10 = v18 - v5;
    v21 = (v18 - v5) >> 4;
    v22 = (*(_DWORD *)&v16 + v5) >> 4;
    v11 = v18 + v5;
    v12 = v22 - ((*(_DWORD *)&v16 - v5) >> 4) + 1;
    v13 = v5 + v17;
    v14 = v11 >> 4;
    v15 = v14 - (v10 >> 4) + 1;
    if ( v13 > v6 )
      v6 = v13;
    if ( v13 > v7 )
      v6 = v7;
    v23 = v6 >> 4;
    v24 = v14;
    v25 = v12;
    v26 = (v6 >> 4) - (v9 >> 4) + 1;
    v27 = v14 - (v10 >> 4) + 1;
    v28 = v15 * v12;
    v29 = v26 * v15 * v12;
    result = GridArea<Boxed<RenderChunk>>::move((int)v3, (int)&v19);
  return result;
}


int __fastcall LevelRendererCamera::renderEntityShadow(int a1, int a2, Entity *a3)
{
  int v4; // r5@1
  int result; // r0@1
  char *v12; // r0@6
  float v14; // [sp+0h] [bp-20h]@6

  _R7 = a3;
  v4 = a1;
  _R4 = a2;
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 240))(a3);
  _R6 = result;
  __asm
  {
    VMOV            S0, R6
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 320))(_R7);
    if ( !result )
    {
      result = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)_R7 + 220))(_R7, 37);
      if ( !result )
      {
        if ( Entity::hasCategory((int)_R7, 2) != 1
          || (result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R7 + 172))(_R7)) == 0 )
        {
          v12 = Entity::getEntityData(_R7);
          _R0 = SynchedEntityData::getFloat((SynchedEntityData *)v12, 39);
          __asm
          {
            VLDR            S0, [R7,#0x4C]
            VLDR            S8, [R7,#0x64]
            VLDR            S10, [R7,#0x13C]
            VSUB.F32        S0, S0, S8
            VLDR            S12, [R4,#8]
            VSUB.F32        S8, S8, S10
            VLDR            S2, [R7,#0x50]
            VLDR            S10, [R7,#0x68]
            VLDR            S4, [R7,#0x48]
            VLDR            S6, [R7,#0x60]
            VSUB.F32        S2, S2, S10
            VLDR            S14, [R7,#0x144]
            VSUB.F32        S4, S4, S6
            VLDR            S1, [R7,#0x138]
            VMUL.F32        S0, S0, S12
            VMUL.F32        S2, S2, S12
            VMUL.F32        S4, S4, S12
            VADD.F32        S0, S8, S0
            VMOV            S8, R0
            VMUL.F32        S8, S14, S8
            VADD.F32        S2, S2, S10
            VADD.F32        S4, S4, S6
            VADD.F32        S0, S0, S1
            VSTR            S4, [SP,#0x20+var_20]
            VADD.F32        S0, S0, S8
            VSTR            S0, [SP,#0x20+var_1C]
            VSTR            S2, [SP,#0x20+var_18]
          }
          result = LevelRendererCamera::renderShadow(v4, _R4, _R6, (int)&v14);
        }
      }
    }
  return result;
}


int __fastcall LevelRendererCamera::getFogBrightness(LevelRendererCamera *this, float a2)
{
  int result; // r0@5

  _R0 = Dimension::getTimeOfDay(*((Dimension **)this + 312), a2);
  __asm { VMOV            S0, R0 }
  _R1 = &mce::Math::TAU;
  __asm
  {
    VLDR            S2, [R1]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = cosf(_R0);
    VMOV            S0, R0
    VMOV.F32        S2, #0.5
    VADD.F32        S0, S0, S0
    VMOV.F32        S4, #1.0
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S4 }
  __asm { VMOV            R0, S2 }
  return result;
}


int __fastcall LevelRendererCamera::getRenderChunkMeshCount(LevelRendererCamera *this)
{
  RenderChunk **v1; // r5@1 OVERLAPPED
  RenderChunk **v2; // r6@1 OVERLAPPED
  int i; // r4@1

  *(_QWORD *)&v1 = *((_QWORD *)this + 60);
  for ( i = 0; v2 != v1; ++v1 )
  {
    if ( *v1 && RenderChunk::isMeshValid(*v1) )
      ++i;
  }
  return i;
}


int __fastcall LevelRendererCamera::renderStars(int a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  ShaderColor *v11; // r0@2
  int v14; // r7@2
  int v16; // r2@2
  char v17; // [sp+8h] [bp-88h]@2
  float v18; // [sp+10h] [bp-80h]@2
  int v19; // [sp+1Ch] [bp-74h]@2
  int v20; // [sp+20h] [bp-70h]@2
  int v21; // [sp+24h] [bp-6Ch]@2
  int v22; // [sp+28h] [bp-68h]@2
  int v23; // [sp+2Ch] [bp-64h]@2
  int v24; // [sp+30h] [bp-60h]@2
  int v25; // [sp+34h] [bp-5Ch]@2
  int v26; // [sp+38h] [bp-58h]@2
  int v27; // [sp+3Ch] [bp-54h]@2
  int v28; // [sp+40h] [bp-50h]@2
  int v29; // [sp+44h] [bp-4Ch]@2
  int v30; // [sp+48h] [bp-48h]@2
  int v31; // [sp+4Ch] [bp-44h]@2
  int v32; // [sp+50h] [bp-40h]@2
  int v33; // [sp+54h] [bp-3Ch]@2
  int v34; // [sp+58h] [bp-38h]@2
  int v35; // [sp+5Ch] [bp-34h]@2
  int v36; // [sp+60h] [bp-30h]@2
  int v37; // [sp+64h] [bp-2Ch]@2
  int v38; // [sp+68h] [bp-28h]@2
  float v39; // [sp+6Ch] [bp-24h]@2

  v3 = a2;
  _R5 = a1;
  _R6 = a3;
  result = Dimension::getStarBrightness(*(Dimension **)(a1 + 1248), *(float *)(a2 + 8));
  __asm
  {
    VMOV            S0, R0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOV            S2, R6 }
    v11 = *(ShaderColor **)(v3 + 48);
    __asm
    {
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0x90+var_80]
      VSTR            S0, [SP,#0x90+var_7C]
      VSTR            S0, [SP,#0x90+var_78]
    }
    v19 = 1065353216;
    ShaderColor::setColor(v11, (const Color *)&v18);
    _R6 = Dimension::getSunAngle(*(Dimension **)(_R5 + 1248), 1.0);
    MatrixStack::push((MatrixStack *)&v17, *(_DWORD *)(v3 + 16) + 16);
    __asm { VLDR            S16, [R5,#0x178] }
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v17);
      VLDR            S0, =0.011
      VLDR            S2, [R0]
      VMUL.F32        S0, S16, S0
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
    v14 = MatrixStack::MatrixStackRef::operator->((int)&v17);
    v20 = 0;
    v21 = 0;
    _R0 = &mce::Math::TAU;
    __asm { VLDR            S0, [R0] }
    v22 = 1065353216;
      VDIV.F32        S0, S2, S0
      VLDR            S2, =360.0
      VSTR            S0, [SP,#0x90+var_24]
    glm::rotate<float>((int)&v23, v14, (int)&v39, (int)&v20);
    *(_DWORD *)v14 = v23;
    *(_DWORD *)(v14 + 4) = v24;
    *(_DWORD *)(v14 + 8) = v25;
    *(_DWORD *)(v14 + 12) = v26;
    *(_DWORD *)(v14 + 16) = v27;
    *(_DWORD *)(v14 + 20) = v28;
    *(_DWORD *)(v14 + 24) = v29;
    *(_DWORD *)(v14 + 28) = v30;
    *(_DWORD *)(v14 + 32) = v31;
    *(_DWORD *)(v14 + 36) = v32;
    *(_DWORD *)(v14 + 40) = v33;
    *(_DWORD *)(v14 + 44) = v34;
    *(_DWORD *)(v14 + 48) = v35;
    *(_DWORD *)(v14 + 52) = v36;
    *(_DWORD *)(v14 + 56) = v37;
    *(_DWORD *)(v14 + 60) = v38;
    v16 = _R5 + 140;
    if ( *(_BYTE *)(_R5 + 1233) )
      v16 = _R5 + 152;
    mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(_R5 + 1256) + 316), v3, v16, 0, 0);
    result = MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v17);
  return result;
}


int __fastcall LevelRendererCamera::_notifyCameraMoved(LevelRendererCamera *this, const SubChunkPos *a2, const Vec3 *a3, int a4)
{
  LevelRendererCamera *v4; // r6@1
  int v5; // r4@1
  const Vec3 *v6; // r5@1
  const SubChunkPos *v7; // r7@1
  int result; // r0@1
  int v9; // r6@8
  unsigned int *v10; // r7@9
  unsigned int v11; // r0@10
  bool v12; // zf@12
  int v13; // [sp+0h] [bp-30h]@8
  signed int v14; // [sp+4h] [bp-2Ch]@8
  int v15; // [sp+8h] [bp-28h]@8
  int v16; // [sp+Ch] [bp-24h]@1
  int v17; // [sp+10h] [bp-20h]@4
  int v18; // [sp+14h] [bp-1Ch]@6

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  SubChunkPos::operator BlockPos((int)&v16, (int)a2);
  result = *((_DWORD *)v4 + 117);
  if ( result >= 1 )
  {
    result = v16 >> 4;
    if ( v16 >> 4 >= *((_DWORD *)v4 + 108) && result <= *((_DWORD *)v4 + 111) )
    {
      result = v17 >> 4;
      if ( v17 >> 4 >= *((_DWORD *)v4 + 109) && result <= *((_DWORD *)v4 + 112) )
      {
        result = v18 >> 4;
        if ( v18 >> 4 >= *((_DWORD *)v4 + 110) && result <= *((_DWORD *)v4 + 113) )
        {
          SubChunkPos::operator BlockPos((int)&v13, (int)v7);
          result = (v13 >> 4)
                 - *((_DWORD *)v4 + 108)
                 + *((_DWORD *)v4 + 114) * ((v15 >> 4) - *((_DWORD *)v4 + 110))
                 + *((_DWORD *)v4 + 117) * ((v14 >> 4) - *((_DWORD *)v4 + 109));
          v9 = *(_DWORD *)(*((_DWORD *)v4 + 120) + 4 * result);
          if ( v9 )
          {
            v10 = (unsigned int *)(v9 + 840);
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 + 1, v10) );
            if ( !RenderChunk::isEmpty((RenderChunk *)v9) )
            {
              v12 = v5 == 1;
              if ( v5 == 1 )
                v12 = *(_BYTE *)(v9 + 356) == 0;
              if ( !v12 )
                RenderChunk::onCameraMoved((RenderChunk *)v9, v6, v5);
            }
              result = __ldrex(v10);
            while ( __strex(result - 1, v10) );
            if ( result == 1 )
              RenderChunk::~RenderChunk((RenderChunk *)v9);
              result = (int)PoolAllocator::release((PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator, (void *)v9);
          }
        }
      }
    }
  }
  return result;
}


int __fastcall LevelRendererCamera::setViewArea(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@2

  v2 = *(_DWORD *)(result + 368);
  if ( v2 != a2 )
  {
    *(_DWORD *)(result + 368) = a2;
    v3 = 0;
    if ( v2 == -1 )
      v3 = 1;
    result = j_j_j__ZN19LevelRendererCamera19onViewRadiusChangedEb((LevelRendererCamera *)result, v3);
  }
  return result;
}


char *__fastcall LevelRendererCamera::getLevelRendererArea(LevelRendererCamera *this)
{
  return (char *)this + 384;
}


int __fastcall LevelRendererCamera::fetchRenderChunkTotalCount(LevelRendererCamera *this)
{
  int *v1; // r1@1 OVERLAPPED
  int *v2; // r2@1 OVERLAPPED
  int result; // r0@1
  int v4; // t1@2

  *(_QWORD *)&v1 = *((_QWORD *)this + 60);
  result = 0;
  while ( v2 != v1 )
  {
    v4 = *v1;
    ++v1;
    if ( v4 )
      ++result;
  }
  return result;
}


int __fastcall LevelRendererCamera::preRenderUpdate(int a1, int a2, int a3)
{
  int v3; // r6@1
  __int64 i; // r0@1
  __int64 j; // r0@4
  __int64 k; // r0@7
  float v14; // r8@12
  Dimension *v15; // r7@12
  char *v16; // r0@12
  int v18; // r0@13
  int v19; // r1@13
  int v20; // r1@14
  float *v22; // r0@22
  int *v24; // r1@26
  int v26; // [sp+8h] [bp-38h]@30
  int v27; // [sp+Ch] [bp-34h]@30
  int v28; // [sp+10h] [bp-30h]@30
  int v29; // [sp+14h] [bp-2Ch]@12
  int v30; // [sp+18h] [bp-28h]@12
  int v31; // [sp+1Ch] [bp-24h]@12
  float v32; // [sp+20h] [bp-20h]@22
  int v33; // [sp+24h] [bp-1Ch]@17

  v3 = a2;
  _R5 = a1;
  _R4 = a3;
  mce::Camera::updateViewMatrixDependencies(*(mce::Camera **)(a2 + 16));
  mce::Camera::operator=(_R5 + 672, *(unsigned __int64 **)(v3 + 16));
  _R0 = MatrixStack::getTop((MatrixStack *)(_R5 + 672));
  __asm
  {
    VLDR            S0, [R0]
    VLDR            S8, [R5,#0x230]
    VLDR            S2, [R0,#4]
    VLDR            S10, [R5,#0x234]
    VMUL.F32        S0, S0, S8
    VLDR            S14, [R0,#0x14]
    VMUL.F32        S2, S2, S8
    VLDR            S1, [R0,#0x10]
    VLDR            S4, [R0,#8]
    VMUL.F32        S14, S14, S10
    VLDR            S6, [R0,#0xC]
    VMUL.F32        S1, S1, S10
    VLDR            S3, [R0,#0x18]
    VMUL.F32        S4, S4, S8
    VLDR            S5, [R0,#0x1C]
    VMUL.F32        S6, S6, S8
    VMUL.F32        S3, S3, S10
    VLDR            S12, [R5,#0x238]
    VMUL.F32        S10, S5, S10
    VLDR            S7, [R0,#0x20]
    VLDR            S8, [R0,#0x24]
    VNMUL.F32       S5, S12, S7
    VLDR            S7, [R0,#0x28]
    VADD.F32        S0, S1, S0
    VADD.F32        S2, S14, S2
    VLDR            S14, [R0,#0x2C]
    VNMUL.F32       S8, S12, S8
    VNMUL.F32       S1, S12, S7
    VADD.F32        S4, S3, S4
    VADD.F32        S6, S10, S6
    VLDR            S10, [R0,#0x34]
    VNMUL.F32       S12, S12, S14
    VSUB.F32        S0, S5, S0
    VSUB.F32        S2, S8, S2
    VLDR            S8, [R0,#0x30]
    VSUB.F32        S4, S1, S4
    VSUB.F32        S6, S12, S6
    VLDR            S12, [R0,#0x38]
    VADD.F32        S0, S8, S0
    VLDR            S8, [R0,#0x3C]
    VADD.F32        S2, S10, S2
    VADD.F32        S4, S12, S4
    VADD.F32        S6, S8, S6
    VSTR            S0, [R0,#0x30]
    VSTR            S2, [R0,#0x34]
    VSTR            S4, [R0,#0x38]
    VSTR            S6, [R0,#0x3C]
  }
  mce::Camera::updateViewMatrixDependencies((mce::Camera *)(_R5 + 672));
  for ( i = *(_QWORD *)(_R5 + 8); (_DWORD)i != HIDWORD(i); LODWORD(i) = i + 12 )
    *(_DWORD *)(i + 4) = *(_DWORD *)i;
  for ( j = *(_QWORD *)(_R5 + 20); (_DWORD)j != HIDWORD(j); LODWORD(j) = j + 12 )
    *(_DWORD *)(j + 4) = *(_DWORD *)j;
  for ( k = *(_QWORD *)(_R5 + 32); (_DWORD)k != HIDWORD(k); LODWORD(k) = k + 12 )
    *(_DWORD *)(k + 4) = *(_DWORD *)k;
  ++*(_DWORD *)(_R5 + 364);
  if ( *(_DWORD *)(_R4 + 60) )
    __asm { VLDR            S0, =0.0 }
  else
    v14 = *(float *)(v3 + 8);
    v15 = *(Dimension **)(_R5 + 1248);
    v16 = mce::Camera::getForwardVector(*(mce::Camera **)(v3 + 16));
    v29 = *(_DWORD *)v16;
    v30 = *((_DWORD *)v16 + 1);
    v31 = *((_DWORD *)v16 + 2);
    _R0 = Dimension::getSunIntensity(v15, v14, (const Vec3 *)&v29, 0.9);
    __asm { VMOV            S0, R0 }
  __asm { VSTR            S0, [R5,#0x164] }
  v18 = *(_DWORD *)(_R5 + 368);
  v19 = *(_DWORD *)(_R4 + 44);
  if ( v18 != v19 )
    *(_DWORD *)(_R5 + 368) = v19;
    v20 = 0;
    if ( v18 == -1 )
      v20 = 1;
    LevelRendererCamera::onViewRadiusChanged((LevelRendererCamera *)_R5, v20);
  LevelRendererCamera::updateViewArea(_R5, _R4);
  LevelRendererCamera::determineUnderwaterStatus((LevelRendererCamera *)_R5, *(BlockSource **)(_R5 + 1244));
  (*(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)_R5 + 68))(_R5, v3, *(_DWORD *)(_R4 + 64));
  LevelRendererCamera::tickClouds(_R5, _R4, *(_DWORD *)(v3 + 8));
    VLDR            S0, [R4,#0x44]
    VMOV.F32        S8, #16.0
  v33 = 1109393408;
  __asm { VMOV.F32        S4, #8.0 }
  _R0 = *(_DWORD *)(_R5 + 368);
    VLDR            S6, =0.0625
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S4, S8 }
  __asm { VMUL.F32        S6, S2, S6 }
    __asm { VMOVGT.F32      S6, S4 }
    VSUB.F32        S2, S2, S6
    VSTR            S2, [SP,#0x40+var_20]
  if ( *(_BYTE *)(_R5 + 1233) )
    __asm { VLDR            S0, [R5,#0x144] }
    v22 = &v32;
    __asm
    {
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      v22 = (float *)(_R5 + 324);
    _R0 = *(_DWORD *)v22;
    *(_DWORD *)(_R5 + 376) = _R0;
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R5,#0x178]
  __asm { VLDR            S2, =40.0 }
  v24 = &v33;
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    v24 = (int *)(_R5 + 376);
  *(_DWORD *)(_R5 + 376) = *v24;
  LevelRendererCamera::updateFarChunksDistance((LevelRendererCamera *)_R5);
  if ( *(_DWORD *)(_R4 + 84) )
    (*(void (__fastcall **)(int, int))(_R4 + 88))(_R4 + 76, _R4);
  v26 = *(_DWORD *)(_R4 + 32);
  v27 = *(_DWORD *)(_R4 + 36);
  v28 = *(_DWORD *)(_R4 + 40);
  LevelBuilder::startLevelBuildForThisFrame(
    _R5 + 1260,
    _R4,
    (const Vec3 *)(_R5 + 548),
    (const Vec3 *)&v26,
    0,
    *(_BYTE *)(_R5 + 1232));
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)_R5 + 92))(_R5, _R4);
}


int __fastcall LevelRendererCamera::renderBlockEntityShadow(int a1, int a2, BlockEntity *a3)
{
  BlockEntity *v3; // r7@1
  int v4; // r5@1
  int v5; // r4@1
  int result; // r0@1
  char *v12; // r0@2
  float v13; // [sp+4h] [bp-2Ch]@2
  int v14; // [sp+8h] [bp-28h]@2
  float v16; // [sp+10h] [bp-20h]@2
  int v17; // [sp+14h] [bp-1Ch]@2

  v3 = a3;
  v4 = a1;
  v5 = a2;
  result = (*(int (__fastcall **)(BlockEntity *, _DWORD))(*(_DWORD *)a3 + 84))(a3, *(_DWORD *)(a1 + 1244));
  _R6 = result;
  __asm
  {
    VMOV            S0, R6
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v12 = BlockEntity::getPosition(v3);
    Vec3::Vec3((int)&v13, (int)v12);
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S2, [SP,#0x30+var_2C]
      VLDR            S4, [SP,#0x30+var_24]
      VADD.F32        S2, S2, S0
      VADD.F32        S0, S4, S0
      VSTR            S2, [SP,#0x30+var_20]
    }
    v17 = v14;
    __asm { VSTR            S0, [SP,#0x30+var_18] }
    result = LevelRendererCamera::renderShadow(v4, v5, _R6, (int)&v16);
  return result;
}


signed int __fastcall LevelRendererCamera::getCurrentCloudRenderSide(int a1, int a2)
{
  int v2; // r4@1
  signed int result; // r0@3
  int v4; // [sp+0h] [bp-20h]@7
  int v5; // [sp+4h] [bp-1Ch]@7
  char v6; // [sp+Ch] [bp-14h]@4
  int v7; // [sp+10h] [bp-10h]@4

  v2 = a1;
  if ( a2 == 2 )
  {
    BlockPos::BlockPos((int)&v4, a1 + 548);
    result = 2;
    if ( v5 >= *(_WORD *)(v2 + 1252) )
      result = 1;
  }
  else if ( a2 == 1 )
    BlockPos::BlockPos((int)&v6, a1 + 548);
    result = 1;
    if ( v7 >= *(_WORD *)(v2 + 1252) )
      result = 2;
  else
    result = 0;
  return result;
}


signed int __fastcall LevelRendererCamera::onDimensionChanged(LevelRendererCamera *this, Player *a2)
{
  Entity *v2; // r5@1
  LevelRendererCamera *v3; // r4@1
  void *v4; // r5@1
  Tessellator *v5; // r0@1
  Tessellator *v6; // r0@2
  TextureTessellator *v7; // r6@3
  int v8; // r5@3
  void *v9; // r0@4
  signed int result; // r0@8

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 312) = Entity::getDimension(a2);
  *((_DWORD *)v3 + 311) = Entity::getRegion(v2);
  GridArea<Boxed<RenderChunk>>::clear((int)v3 + 384);
  *((_DWORD *)v3 + 91) = 0;
  LevelRendererCamera::setupViewArea(v3);
  *((_DWORD *)v3 + 131) = *((_DWORD *)v3 + 137);
  *((_DWORD *)v3 + 132) = *((_DWORD *)v3 + 138);
  *((_DWORD *)v3 + 133) = *((_DWORD *)v3 + 139);
  LevelBuilder::onDimensionChanged((LevelRendererCamera *)((char *)v3 + 1260));
  v4 = operator new(0x10Cu);
  Tessellator::Tessellator((int)v4);
  v5 = (Tessellator *)*((_DWORD *)v3 + 298);
  *((_DWORD *)v3 + 298) = v4;
  if ( v5 )
  {
    v6 = Tessellator::~Tessellator(v5);
    operator delete((void *)v6);
  }
  v7 = (TextureTessellator *)operator new(0x18u);
  TextureTessellator::TextureTessellator(v7);
  v8 = *((_DWORD *)v3 + 299);
  *((_DWORD *)v3 + 299) = v7;
  if ( v8 )
    v9 = *(void **)(v8 + 4);
    if ( v9 )
      operator delete(v9);
    operator delete((void *)v8);
  if ( (*(int (**)(void))(**((_DWORD **)v3 + 312) + 132))() == 1 )
    _R0 = (*(int (**)(void))(**((_DWORD **)v3 + 312) + 156))();
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
    *((_WORD *)v3 + 626) = result;
  else
    result = 0x7FFF;
    *((_WORD *)v3 + 626) = 0x7FFF;
  return result;
}


signed int __fastcall LevelRendererCamera::affectsTessellation(_BYTE *a1)
{
  int v1; // r0@1
  BlockGraphics *v2; // r5@1
  signed int result; // r0@4
  signed int v9; // r4@6

  v1 = *a1;
  v2 = (BlockGraphics *)BlockGraphics::mBlocks[v1];
  if ( v2 )
  {
    __asm { VMOV.F32        S0, #1.0 }
    _R0 = &Block::mTranslucency[v1];
    __asm
    {
      VLDR            S2, [R0]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      result = 1;
    else
      v9 = 0;
      if ( BlockGraphics::getBlockShape(v2) != -1 && BlockGraphics::getBlockShape(v2) != 22 )
        v9 = 1;
      result = v9;
  }
  else
    result = 0;
  return result;
}


int __fastcall LevelRendererCamera::determineUnderwaterStatus(LevelRendererCamera *this, BlockSource *a2)
{
  BlockSource *v3; // r5@1
  float v4; // r1@1
  int v5; // r2@1
  float *v6; // r0@1
  char v11; // r0@3
  int result; // r0@6
  int v13; // [sp+0h] [bp-Ch]@3
  int v14; // [sp+Ch] [bp+0h]@3
  int v15; // [sp+18h] [bp+Ch]@1
  float v16; // [sp+1Ch] [bp+10h]@1
  int v17; // [sp+20h] [bp+14h]@1

  _R4 = this;
  v3 = a2;
  v4 = *((float *)this + 138);
  v5 = *((_DWORD *)this + 139);
  v15 = *((_DWORD *)this + 137);
  v16 = v4;
  v17 = v5;
  v6 = (float *)((unsigned int)&v15 | 4);
  __asm
  {
    VLDR            S0, [R4,#0x234]
    VLDR            S2, [SP,#0x24+var_8]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v6 = (float *)((char *)_R4 + 564);
  v16 = *v6;
  BlockPos::BlockPos((int)&v14, (int)&v15);
  *((_BYTE *)_R4 + 1232) = BlockSource::isPositionUnderLiquid(v3, (int)&v14, 5);
  BlockPos::BlockPos((int)&v13, (int)&v15);
  v11 = BlockSource::isPositionUnderLiquid(v3, (int)&v13, 6);
  *((_BYTE *)_R4 + 1234) = v11;
  if ( *((_BYTE *)_R4 + 1232) )
    v11 = 1;
  *((_BYTE *)_R4 + 1233) = v11;
  if ( (*(int (**)(void))(**((_DWORD **)_R4 + 312) + 192))() == 1 )
    result = *((_BYTE *)_R4 + 1234) ^ 1;
  else
    result = 0;
  *((_BYTE *)_R4 + 1236) = result;
  return result;
}


RenderChunk **__fastcall LevelRendererCamera::getOrCreateChunkAt(LevelRendererCamera *this, const SubChunkPos *a2)
{
  const SubChunkPos *v3; // r5@1
  int v4; // r3@2
  RenderChunk **v6; // r4@3
  int v7; // r4@5
  int v8; // r1@7
  int v10; // lr@9
  int v11; // r7@11
  int v13; // r8@13
  LevelChunk *v21; // r0@18
  RenderChunk *v23; // r5@23
  unsigned int *v24; // r0@24
  unsigned int v25; // r1@25
  RenderChunk *v26; // r6@27
  int v27; // [sp+0h] [bp-38h]@23
  int v28; // [sp+Ch] [bp-2Ch]@17
  signed int v29; // [sp+10h] [bp-28h]@17
  int v30; // [sp+14h] [bp-24h]@17
  int v31; // [sp+18h] [bp-20h]@17
  int v32; // [sp+1Ch] [bp-1Ch]@17

  _R6 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 117) < 1 )
  {
    v6 = (RenderChunk **)&dword_27D1654;
  }
  else
    v4 = *((_DWORD *)this + 108);
    _R0 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 >= v4 )
    {
      v7 = *((_DWORD *)_R6 + 111);
      if ( _R0 <= v7 )
      {
        v8 = *((_DWORD *)_R6 + 109);
        _R2 = *((_DWORD *)v3 + 1);
        if ( _R2 >= v8 )
        {
          v10 = *((_DWORD *)_R6 + 112);
          if ( _R2 <= v10 )
          {
            v11 = *((_DWORD *)_R6 + 110);
            _R12 = *((_DWORD *)v3 + 2);
            if ( _R12 >= v11 )
            {
              v13 = *((_DWORD *)_R6 + 113);
              if ( _R12 <= v13 )
              {
                _R3 = v4 + v7;
                _R1 = v8 + v10;
                __asm
                {
                  VMOV.F32        S0, #0.5
                  VMOV            S2, R3
                  VMOV            S4, R1
                }
                _R1 = v13 + v11;
                  VCVT.F32.S32    S2, S2
                  VCVT.F32.S32    S4, S4
                  VMOV            S6, R1
                  VMOV            S8, R0
                  VMOV            S10, R2
                  VCVT.F32.S32    S6, S6
                  VCVT.F32.S32    S8, S8
                  VMUL.F32        S2, S2, S0
                  VCVT.F32.S32    S10, S10
                  VLDR            S12, [R6,#0x1C8]
                  VMUL.F32        S4, S4, S0
                  VMOV            S14, R12
                  VCVT.F32.S32    S12, S12
                  VMUL.F32        S6, S6, S0
                  VCVT.F32.S32    S14, S14
                  VSUB.F32        S2, S8, S2
                  VLDR            S8, =1.7321
                  VSUB.F32        S4, S10, S4
                  VMUL.F32        S0, S12, S0
                  VSUB.F32        S6, S14, S6
                  VMUL.F32        S2, S2, S2
                  VMUL.F32        S4, S4, S4
                  VADD.F32        S0, S0, S8
                  VMUL.F32        S6, S6, S6
                  VADD.F32        S2, S4, S2
                  VMUL.F32        S0, S0, S0
                  VADD.F32        S2, S2, S6
                  VCMPE.F32       S2, S0
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  v31 = *(_DWORD *)v3;
                  v32 = _R12;
                  SubChunkPos::operator BlockPos((int)&v28, (int)v3);
                  v6 = (RenderChunk **)(*((_DWORD *)_R6 + 120)
                                      + 4
                                      * ((v28 >> 4)
                                       - *((_DWORD *)_R6 + 108)
                                       + *((_DWORD *)_R6 + 114) * ((v30 >> 4) - *((_DWORD *)_R6 + 110))
                                       + *((_DWORD *)_R6 + 117) * ((v29 >> 4) - *((_DWORD *)_R6 + 109))));
                  if ( !*v6 )
                  {
                    v21 = (LevelChunk *)BlockSource::getChunk(*((BlockSource **)_R6 + 311), (const ChunkPos *)&v31);
                    if ( v21 )
                    {
                      if ( LevelChunk::isReadOnly(v21) )
                      {
                        v6 = (RenderChunk **)&dword_27D1654;
                      }
                      else
                        SubChunkPos::operator BlockPos((int)&v27, (int)v3);
                        v23 = (RenderChunk *)PoolAllocator::get((PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator);
                        RenderChunk::RenderChunk((int)v23, (const BlockPos *)&v27);
                        *((_DWORD *)v23 + 210) = 1;
                        if ( *v6 )
                        {
                          v24 = (unsigned int *)((char *)*v6 + 840);
                          __dmb();
                          do
                            v25 = __ldrex(v24);
                          while ( __strex(v25 - 1, v24) );
                          if ( v25 == 1 )
                          {
                            v26 = *v6;
                            if ( *v6 )
                            {
                              RenderChunk::~RenderChunk(*v6);
                              PoolAllocator::release(
                                (PoolAllocator *)&Boxed<RenderChunk>::Base::mAllocator,
                                (void *)v26);
                            }
                          }
                        }
                        *v6 = v23;
                    }
                    else
                      v6 = (RenderChunk **)&dword_27D1654;
                  }
                else
                  v6 = (RenderChunk **)&dword_27D1654;
              }
              else
                v6 = (RenderChunk **)&dword_27D1654;
            }
            else
              v6 = (RenderChunk **)&dword_27D1654;
          }
          else
            v6 = (RenderChunk **)&dword_27D1654;
        }
        else
          v6 = (RenderChunk **)&dword_27D1654;
      }
      else
        v6 = (RenderChunk **)&dword_27D1654;
    }
    else
      v6 = (RenderChunk **)&dword_27D1654;
  return v6;
}


int __fastcall LevelRendererCamera::renderSky(int a1, int a2, int a3)
{
  int v5; // r10@1
  BlockSource *v6; // r5@1
  const BlockPos *v7; // r7@1
  unsigned int v12; // r0@2
  unsigned int v13; // r11@2
  int v14; // r4@2
  int v15; // r0@2
  _DWORD *v16; // r8@3
  int v17; // r7@3
  _DWORD *v18; // r6@5
  unsigned int v26; // r0@10
  unsigned int v27; // r11@10
  int v28; // r8@10
  int v29; // r0@10
  _DWORD *v30; // r4@11
  int v31; // r7@11
  _DWORD *v32; // r6@13
  _DWORD *v34; // r0@20
  char *v35; // r0@21
  bool v36; // zf@22
  _DWORD *v37; // r0@26
  int v39; // [sp+0h] [bp-D0h]@0
  int v40; // [sp+Ch] [bp-C4h]@2
  int v41; // [sp+Ch] [bp-C4h]@10
  float v42; // [sp+10h] [bp-C0h]@10
  int v43; // [sp+1Ch] [bp-B4h]@10
  char v44; // [sp+20h] [bp-B0h]@10
  float v45; // [sp+28h] [bp-A8h]@8
  float v46; // [sp+2Ch] [bp-A4h]@8
  float v47; // [sp+30h] [bp-A0h]@8
  int v48; // [sp+34h] [bp-9Ch]@8
  char v49; // [sp+38h] [bp-98h]@8
  int v50; // [sp+40h] [bp-90h]@2
  int v51; // [sp+44h] [bp-8Ch]@2
  int v52; // [sp+48h] [bp-88h]@2
  int v53; // [sp+4Ch] [bp-84h]@2
  int v54; // [sp+50h] [bp-80h]@2
  int v55; // [sp+54h] [bp-7Ch]@2
  float v56; // [sp+5Ch] [bp-74h]@2
  char v57; // [sp+6Ch] [bp-64h]@2
  char v58; // [sp+74h] [bp-5Ch]@1
  Dimension v59; // [sp+80h] [bp-50h]@1
  float v60; // [sp+84h] [bp-4Ch]@8
  float v61; // [sp+88h] [bp-48h]@8
  int v62; // [sp+8Ch] [bp-44h]@8
  char v63; // [sp+90h] [bp-40h]@1

  _R9 = a1;
  _R8 = a2;
  v5 = a3;
  ChunkPos::ChunkPos((int)&v63, a1 + 560);
  v6 = (BlockSource *)BlockSource::getDimension(*(BlockSource **)(_R9 + 1244));
  v7 = *(const BlockPos **)(_R9 + 1244);
  BlockPos::BlockPos((int)&v58, (__int64 *)&v63, 0);
  __asm
  {
    VLDR            S0, [R8,#8]
    VSTR            S0, [SP,#0xD0+var_D0]
  }
  Dimension::getSkyColor(&v59, v6, v7, COERCE_FLOAT(&v58), v39);
  if ( Dimension::getId(*(Dimension **)(_R9 + 1248)) == 2 )
    MatrixStack::push((MatrixStack *)&v57, *(_DWORD *)(_R8 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v57);
    __asm
    {
      VLDR            S0, =-2000.0
      VLDR            S2, [R0]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
      VLDR            S2, [R0,#4]
      VSTR            S2, [R0,#4]
      VLDR            S2, [R0,#8]
      VSTR            S2, [R0,#8]
      VLDR            S2, [R0,#0xC]
      VSTR            S2, [R0,#0xC]
      VLDR            S2, [R0,#0x10]
      VSTR            S2, [R0,#0x10]
      VLDR            S2, [R0,#0x14]
      VSTR            S2, [R0,#0x14]
      VLDR            S2, [R0,#0x18]
      VSTR            S2, [R0,#0x18]
      VLDR            S2, [R0,#0x1C]
      VSTR            S2, [R0,#0x1C]
      VLDR            S2, [R0,#0x20]
      VSTR            S2, [R0,#0x20]
      VLDR            S2, [R0,#0x24]
      VSTR            S2, [R0,#0x24]
      VLDR            S2, [R0,#0x28]
      VSTR            S2, [R0,#0x28]
      VLDR            S2, [R0,#0x2C]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [R0,#0x2C]
      VLDR            S0, [R9,#0x114]
      VLDR            S2, [R9,#0x118]
      VLDR            S4, [R9,#0x11C]
      VADD.F32        S0, S0, S0
      VLDR            S6, [R9,#0x120]
      VADD.F32        S2, S2, S2
      VADD.F32        S4, S4, S4
      VADD.F32        S6, S6, S6
      VSTR            S0, [SP,#0xD0+var_74]
      VSTR            S2, [SP,#0xD0+var_70]
      VSTR            S4, [SP,#0xD0+var_6C]
      VSTR            S6, [SP,#0xD0+var_68]
    }
    ShaderColor::setColor(*(ShaderColor **)(_R8 + 48), (const Color *)&v56);
    *(_DWORD *)(_R9 + 356) = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v55 = 0;
    v54 = 1098907648;
    v50 = 1098907648;
    mce::ShaderConstants::setUVTransform(*(_DWORD *)(_R8 + 32) + 588, *(mce::RenderContext **)(_R8 + 12), (int)&v50);
    mce::Mesh::render(
      (mce::Buffer *)(*(_DWORD *)(_R9 + 1256) + 416),
      _R8,
      _R9 + 200,
      *(_DWORD *)(_R9 + 1256) + 1512,
      0,
      0);
    v12 = Dimension::getId(*(Dimension **)(_R9 + 1248));
    v13 = v12;
    v40 = _R8;
    v14 = v12 % *(_DWORD *)(_R9 + 252);
    v15 = *(_DWORD *)(*(_DWORD *)(_R9 + 248) + 4 * v14);
    if ( !v15 )
      goto LABEL_20;
    v16 = *(_DWORD **)v15;
    v17 = *(_DWORD *)(*(_DWORD *)v15 + 4);
    while ( v13 != v17 )
      v18 = (_DWORD *)*v16;
      if ( *v16 )
      {
        v17 = v18[1];
        v15 = (int)v16;
        v16 = (_DWORD *)*v16;
        if ( v18[1] % *(_DWORD *)(_R9 + 252) == v14 )
          continue;
      }
    _ZF = v15 == 0;
    if ( v15 )
      v15 = *(_DWORD *)v15;
      _ZF = v15 == 0;
    if ( _ZF )
LABEL_20:
      v34 = operator new(0x14u);
      *v34 = 0;
      v34[1] = v13;
      v34[2] = 0;
      v34[3] = 0;
      v34[4] = 0;
      v15 = std::_Hashtable<int,std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>,std::allocator<std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              _R9 + 248,
              v14,
              v13,
              (int)v34);
    Cubemap::renderCubemap(v40, (__int64 *)(v15 + 8), _R9 + 236, 0.5);
    v35 = &v57;
  else
    MatrixStack::push((MatrixStack *)&v49, *(_DWORD *)(_R8 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v49);
      VLDR            S18, =256.0
      VLDR            S0, [R0,#0x14]
      VLDR            S4, [R0,#0x1C]
      VMUL.F32        S0, S0, S18
      VLDR            S6, [R0,#0x10]
      VMUL.F32        S2, S2, S18
      VMUL.F32        S4, S4, S18
      VLDR            S10, [R0,#0x34]
      VMUL.F32        S6, S6, S18
      VLDR            S8, [R0,#0x30]
      VLDR            S12, [R0,#0x38]
      VLDR            S14, [R0,#0x3C]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S12, S2
      VADD.F32        S4, S14, S4
      VADD.F32        S6, S8, S6
      VSTR            S6, [R0,#0x30]
      VSTR            S0, [R0,#0x34]
      VSTR            S2, [R0,#0x38]
      VSTR            S4, [R0,#0x3C]
      VLDR            S16, =2000.0
      VLDR            S0, [R0]
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R0]
      VLDR            S0, [R0,#4]
      VSTR            S0, [R0,#4]
      VLDR            S0, [R0,#8]
      VSTR            S0, [R0,#8]
      VLDR            S0, [R0,#0xC]
      VSTR            S0, [R0,#0xC]
      VLDR            S0, [R0,#0x10]
      VSTR            S0, [R0,#0x10]
      VSTR            S0, [R0,#0x14]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [R0,#0x18]
      VLDR            S0, [R0,#0x1C]
      VSTR            S0, [R0,#0x1C]
      VLDR            S0, [R0,#0x20]
      VSTR            S0, [R0,#0x20]
      VLDR            S0, [R0,#0x24]
      VSTR            S0, [R0,#0x24]
      VLDR            S0, [R0,#0x28]
      VSTR            S0, [R0,#0x28]
      VLDR            S0, [R0,#0x2C]
    v45 = *(float *)&v59;
    v46 = v60;
    v47 = v61;
    v48 = v62;
    _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R9 + 72))(_R9);
      VMOV            S0, R0
      VLDR            S2, [SP,#0xD0+var_A8]
      VLDR            S4, [SP,#0xD0+var_A4]
      VLDR            S6, [SP,#0xD0+var_A0]
      VLDR            S8, =0.2
      VMUL.F32        S4, S4, S0
      VLDR            S10, [R9,#0x164]
      VMUL.F32        S0, S6, S0
      VMUL.F32        S8, S10, S8
      VSUB.F32        S2, S2, S8
      VSUB.F32        S4, S4, S8
      VSUB.F32        S0, S0, S8
      VSTR            S2, [SP,#0xD0+var_A8]
      VSTR            S4, [SP,#0xD0+var_A4]
      VSTR            S0, [SP,#0xD0+var_A0]
    v48 = 1065353216;
    ShaderColor::setColor(*(ShaderColor **)(_R8 + 48), (const Color *)&v45);
    mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(_R9 + 1256) + 216), _R8, _R9 + 164, 0, 0);
    if ( *(_BYTE *)(_R9 + 1233) )
      ShaderColor::setColor(*(ShaderColor **)(_R8 + 48), (const Color *)(_R9 + 276));
      mce::Mesh::render((mce::Buffer *)(*(_DWORD *)(_R9 + 1256) + 216), _R8, _R9 + 176, 0, 0);
    MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v49);
    LevelRendererCamera::renderSunOrMoon(_R9, _R8, 1);
    LevelRendererCamera::renderSunOrMoon(_R9, _R8, 0);
    LevelRendererCamera::renderStars(_R9, _R8, v5);
    v41 = _R8;
    MatrixStack::push((MatrixStack *)&v44, *(_DWORD *)(_R8 + 16) + 16);
    _R0 = MatrixStack::MatrixStackRef::operator->((int)&v44);
    _R0 = Dimension::getSkyDarken(*(Dimension **)(_R9 + 1248), 1.0);
    __asm { VMOV            S0, R0 }
    _R0 = &Color::WHITE;
      VLDR            S4, [R0,#4]
      VLDR            S6, [R0,#8]
      VSTR            S2, [SP,#0xD0+var_C0]
      VSTR            S4, [SP,#0xD0+var_BC]
      VSTR            S0, [SP,#0xD0+var_B8]
    v43 = 1065353216;
    ShaderColor::setColor(*(ShaderColor **)(_R8 + 48), (const Color *)&v42);
    v26 = Dimension::getId(*(Dimension **)(_R9 + 1248));
    v27 = v26;
    v28 = v26 % *(_DWORD *)(_R9 + 252);
    v29 = *(_DWORD *)(*(_DWORD *)(_R9 + 248) + 4 * v28);
    if ( !v29 )
      goto LABEL_26;
    v30 = *(_DWORD **)v29;
    v31 = *(_DWORD *)(*(_DWORD *)v29 + 4);
    while ( v27 != v31 )
      v32 = (_DWORD *)*v30;
      if ( *v30 )
        v31 = v32[1];
        v29 = (int)v30;
        v30 = (_DWORD *)*v30;
        if ( v32[1] % *(_DWORD *)(_R9 + 252) == v28 )
    v36 = v29 == 0;
    if ( v29 )
      v29 = *(_DWORD *)v29;
      v36 = v29 == 0;
    if ( v36 )
LABEL_26:
      v37 = operator new(0x14u);
      *v37 = 0;
      v37[1] = v27;
      v37[2] = 0;
      v37[3] = 0;
      v37[4] = 0;
      v29 = std::_Hashtable<int,std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>,std::allocator<std::pair<int const,std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v28,
              v27,
              (int)v37);
    Cubemap::renderCubemap(v41, (__int64 *)(v29 + 8), _R9 + 236, 0.5);
    v35 = &v44;
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)v35);
}


int *__fastcall LevelRendererCamera::updateFarChunksDistance(LevelRendererCamera *this)
{
  char v8; // r0@15
  int *v10; // r0@17
  int *v12; // r0@19
  int *result; // r0@21
  int *v14; // r1@22
  int v15; // [sp+4h] [bp-1Ch]@22
  int v16; // [sp+8h] [bp-18h]@19
  int v17; // [sp+Ch] [bp-14h]@17

  _R4 = this;
  _R0 = (*(int (**)(void))(*(_DWORD *)this + 72))();
  __asm
  {
    VMOV.F32        S0, #0.5
    VLDR            S2, [R4,#0x178]
    VLDR            S8, =48.0
    VMOV            S4, R0
    VLDR            S10, =160.0
    VLDR            S12, =0.0
    VLDR            S16, =36.0
    VMUL.F32        S6, S2, S0
    VMUL.F32        S4, S4, S0
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S6, S10
    VADD.F32        S4, S4, S0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S6 }
    VMOV.F32        S6, #4.0
    __asm { VMOVGT.F32      S8, S10 }
  if ( *((_BYTE *)_R4 + 1232) )
    __asm { VMOVNE.F32      S4, S12 }
    VMUL.F32        S4, S8, S4
    VCMPE.F32       S4, S16
    __asm { VMOVGT.F32      S16, S4 }
    VSUB.F32        S4, S16, S8
    VADD.F32        S2, S2, S4
    VLDR            S4, =-40.0
    VADD.F32        S4, S2, S4
    VMUL.F32        S0, S4, S0
    VLDR            S4, =96.0
    VCMPE.F32       S0, S6
    VCMPE.F32       S0, S4
    __asm { VMOVGT.F32      S6, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S6, S4 }
    VLDR            S4, =-13.856
    VSUB.F32        S0, S2, S6
    VADD.F32        S4, S0, S4
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S4 }
    VSTR            S16, [R4,#0x174]
    VSTR            S2, [R4,#0x134]
    VSTR            S0, [R4,#0x138]
  _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 312) + 148))();
  __asm { VMOV            S0, R0 }
  v8 = 0;
    VCMPE.F32       S16, S0
    v8 = 1;
  *((_BYTE *)_R4 + 316) = v8;
  v17 = _R0;
    VMOV            S0, R0
    VLDR            S2, [R4,#0x138]
  v10 = &v17;
    VCMPE.F32       S2, S0
    v10 = (int *)((char *)_R4 + 312);
  *((_DWORD *)_R4 + 78) = *v10;
  _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 312) + 144))();
  v16 = _R0;
    VLDR            S2, [R4,#0x134]
  v12 = &v16;
    v12 = (int *)((char *)_R4 + 308);
  *((_DWORD *)_R4 + 77) = *v12;
  result = (int *)*((_BYTE *)_R4 + 1232);
    result = (int *)((char *)_R4 + 372);
    __asm { VLDR            S0, =40.0 }
    v15 = 1109393408;
    v14 = &v15;
    __asm
    {
      VLDR            S2, [R0]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v14 = (int *)((char *)_R4 + 372);
    *result = *v14;
  return result;
}
