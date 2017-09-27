

int __fastcall MinecraftUIRenderContext::disableScissorTest(MinecraftUIRenderContext *this)
{
  mce::EnableScissorTest *v1; // r0@1
  char v3; // [sp+4h] [bp-Ch]@1

  v1 = (mce::EnableScissorTest *)mce::EnableScissorTest::EnableScissorTest((mce::EnableScissorTest *)&v3, 1, 1);
  return mce::EnableScissorTest::~EnableScissorTest(v1);
}


int __fastcall MinecraftUIRenderContext::_getTextAlignmentPosition(int a1, Font **a2)
{
  GuiData *v7; // r4@1
  Font *v9; // r0@1

  _R5 = a2;
  __asm { VLDR            S16, [R5,#0x30] }
  v7 = *(GuiData **)(*(_DWORD *)(a1 + 8) + 24);
  _R0 = Font::getScaleFactor(*a2);
  __asm { VMOV            S0, R0 }
  v9 = _R5[14];
  __asm { VMUL.F32        S0, S0, S16 }
  if ( v9 == (Font *)1 )
  {
    __asm
    {
      VLDR            S2, [R5,#4]
      VLDR            S4, [R5,#8]
    }
    goto LABEL_5;
  }
  if ( v9 == (Font *)2 )
      VADD.F32        S0, S0, S0
LABEL_5:
      VSUB.F32        S2, S4, S2
      VDIV.F32        S0, S2, S0
      VMOV            R1, S0
    return j_j_j__ZNK7GuiData23floorAlignToScreenPixelEf(v7, _R1);
  return 0;
}


int __fastcall MinecraftUIRenderContext::fillRectangle(MinecraftUIRenderContext *this, const RectangleArea *a2, const Color *a3, float a4)
{
  float v4; // r4@1
  const Color *v5; // r5@1
  MinecraftUIRenderContext *v7; // r7@1
  void *v8; // r0@1
  float v9; // r1@1
  float v10; // r3@1
  int v11; // r2@1
  float v17; // [sp+0h] [bp-30h]@0
  float v18; // [sp+4h] [bp-2Ch]@0
  int v19; // [sp+Ch] [bp-24h]@1
  int v20; // [sp+10h] [bp-20h]@1
  int v21; // [sp+14h] [bp-1Ch]@1
  float v22; // [sp+18h] [bp-18h]@1

  v4 = a4;
  v5 = a3;
  _R6 = a2;
  v7 = this;
  v8 = ScreenRenderer::singleton(this);
  v9 = *((float *)v7 + 2);
  v10 = *((float *)_R6 + 2);
  v11 = *(_DWORD *)_R6;
  __asm
  {
    VLDR            S0, [R6,#4]
    VLDR            S2, [R6,#0xC]
  }
  v19 = *(_DWORD *)v5;
  v20 = *((_DWORD *)v5 + 1);
  v21 = *((_DWORD *)v5 + 2);
  v22 = v4;
    VSTR            S2, [SP,#0x30+var_2C]
    VSTR            S0, [SP,#0x30+var_30]
  return ScreenRenderer::fill(*(float *)&v8, v9, v11, v10, v17, v18, (const Color *)&v19);
}


int __fastcall MinecraftUIRenderContext::endSharedMeshBatch(MinecraftUIRenderContext *this, ComponentRenderBatch *a2)
{
  MinecraftUIRenderContext *v2; // r4@1
  ComponentRenderBatch *v3; // r5@1
  int result; // r0@1
  int v5; // r1@2 OVERLAPPED
  int v6; // r2@2
  int v7; // r7@3
  int v8; // r0@4
  unsigned int v9; // r1@4
  const char *v10; // r6@5
  unsigned int v11; // r0@5
  __int64 v12; // r0@9
  int v13; // r3@11
  char v14; // [sp+Ch] [bp-7Ch]@5

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 19);
  if ( result < 0 || (*(_QWORD *)&v5 = *(_QWORD *)((char *)v2 + 60), result >= (v6 - v5) >> 2) )
  {
    result = -1;
    *((_DWORD *)v2 + 19) = -1;
  }
  else
    v7 = *(_DWORD *)(v5 + 4 * result);
    if ( v7 )
    {
      v8 = ComponentRenderBatch::getNumInstances(v3);
      v9 = *((_WORD *)v3 + 36);
      if ( (_BYTE)v9 )
      {
        *(_DWORD *)(v7 + 88) = v8;
        v10 = *(const char **)(*((_DWORD *)v2 + 2) + 40);
        Tessellator::voidBeginAndEndCalls(*(Tessellator **)(*((_DWORD *)v2 + 2) + 40), 0);
        Tessellator::end((Tessellator *)&v14, v10, 0, 0);
        mce::Mesh::operator=(v7 + 108, (int)&v14);
        mce::Mesh::~Mesh((mce::Mesh *)&v14);
        v11 = *((_BYTE *)v3 + 73);
      }
      else
        v11 = v9 >> 8;
      *(_DWORD *)(v7 + 92) = 10;
      if ( v11 )
        v12 = *((_QWORD *)v3 + 10);
        if ( (_DWORD)v12 != HIDWORD(v12) )
          CustomRenderComponent::preRenderSetup(*(_DWORD *)v12);
      result = *(_QWORD *)(v7 + 72) >> 32;
      v13 = *(_QWORD *)(v7 + 72);
      if ( (unsigned int)(-1431655765 * ((result - v13) >> 3)) < 2 )
        if ( result != v13 )
          result = mce::Mesh::render((mce::Buffer *)(v7 + 108), *((_DWORD *)v2 + 2), v7 + 96, v13, 0, 0);
        result = mce::Mesh::render((mce::Buffer *)(v7 + 108), *((_DWORD *)v2 + 2), v7 + 96, v13, v13 + 24, 0, 0);
    }
  return result;
}


void __fastcall MinecraftUIRenderContext::_renderTextAligned(int a1, float *a2, int a3, int a4)
{
  MinecraftUIRenderContext::_renderTextAligned(a1, a2, a3, a4);
}


void __fastcall MinecraftUIRenderContext::getTexture(MinecraftUIRenderContext *this, const ResourceLocation *a2, int a3, int a4)
{
  MinecraftUIRenderContext::getTexture(this, a2, a3, a4);
}


MinecraftUIRenderContext::PersistentMeshItem *__fastcall MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(MinecraftUIRenderContext::PersistentMeshItem *this)
{
  MinecraftUIRenderContext::PersistentMeshItem *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  char *v4; // r0@2
  char *v5; // r5@2
  int v6; // r6@3
  int v7; // r1@7
  void *v8; // r0@7
  int v9; // r1@8
  void *v10; // r0@8
  int v11; // r1@9
  void *v12; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25

  v1 = this;
  mce::Mesh::~Mesh((MinecraftUIRenderContext::PersistentMeshItem *)((char *)this + 108));
  mce::MaterialPtr::~MaterialPtr((MinecraftUIRenderContext::PersistentMeshItem *)((char *)v1 + 96));
  v2 = *((_DWORD *)v1 + 21);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v5 = (char *)(*((_QWORD *)v1 + 9) >> 32);
  v4 = (char *)*((_QWORD *)v1 + 9);
  if ( v4 != v5 )
    do
      v6 = (int)(v4 + 24);
      (**(void (***)(void))v4)();
      v4 = (char *)v6;
    while ( v5 != (char *)v6 );
    v4 = (char *)*((_DWORD *)v1 + 18);
  if ( v4 )
    operator delete(v4);
  v7 = *((_DWORD *)v1 + 16);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = *((_DWORD *)v1 + 14);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = *((_DWORD *)v1 + 13);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v11 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  return v1;
}


void __fastcall MinecraftUIRenderContext::~MinecraftUIRenderContext(MinecraftUIRenderContext *this)
{
  MinecraftUIRenderContext *v1; // r0@1

  v1 = MinecraftUIRenderContext::~MinecraftUIRenderContext(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void **__fastcall MinecraftUIRenderContext::getUITextureInfo(MinecraftUIRenderContext *this, const ResourceLocation *a2, int a3, int a4)
{
  const ResourceLocation *v4; // r7@1
  int v5; // r6@1
  MinecraftUIRenderContext *v6; // r4@1
  int v7; // r5@1
  void **result; // r0@2

  v4 = a2;
  v5 = a3;
  v6 = this;
  v7 = a4;
  if ( sub_119C9E8((const void **)a3, (const char *)&unk_257BC67) )
  {
    result = (void **)UIRepository::getUITextureInfo(v6, *((const ResourceLocation **)v4 + 6), v5, v7);
  }
  else
    *(_DWORD *)v6 = 0;
    *((_DWORD *)v6 + 1) = 0;
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 3) = 0;
    result = &off_26D90B8;
    *(_DWORD *)v6 = &off_26D90B8;
    *((_DWORD *)v6 + 3) = &unk_28898CC;
    *((_DWORD *)v6 + 4) = 0;
  return result;
}


int __fastcall MinecraftUIRenderContext::MinecraftUIRenderContext(int a1, ClientInstance *a2, int a3)
{
  int v3; // r6@1
  ClientInstance *v4; // r5@1
  const UIProfanityContext *v5; // r0@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = &off_26DCD84;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  v5 = (const UIProfanityContext *)ClientInstance::getUIProfanityContext(a2);
  MinecraftUIMeasureStrategy::MinecraftUIMeasureStrategy((MinecraftUIMeasureStrategy *)(v3 + 12), v5);
  *(_DWORD *)(v3 + 20) = 1065353216;
  *(_DWORD *)(v3 + 24) = ClientInstance::getUIRepository(v4);
  *(_DWORD *)(v3 + 28) = ClientInstance::getTextures(v4);
  *(_DWORD *)(v3 + 32) = ClientInstance::getStoreCacheTextures(v4);
  _aeabi_memclr4(v3 + 36, 37);
  *(_DWORD *)(v3 + 76) = -1;
  *(_DWORD *)(v3 + 80) = ClientInstance::getFont(v4);
  return v3;
}


int __fastcall MinecraftUIRenderContext::removePersistentMeshes(MinecraftUIRenderContext *this)
{
  MinecraftUIRenderContext *v1; // r10@1
  int result; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r6@2
  int v5; // r1@3
  int v6; // r5@5
  int v7; // r4@5
  int v8; // r1@6
  MinecraftUIRenderContext::PersistentMeshItem *v9; // r0@6
  MinecraftUIRenderContext::PersistentMeshItem *v10; // r0@7
  _DWORD *v11; // r4@10
  MinecraftUIRenderContext::PersistentMeshItem *v12; // r0@10
  MinecraftUIRenderContext::PersistentMeshItem *v13; // r0@11

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 60);
  result = *(_QWORD *)((char *)this + 60) >> 32;
  if ( (_DWORD)v3 != result )
  {
    v4 = v3 + 4;
    do
    {
      v5 = v3 + 4;
      if ( v4 != result )
      {
        v5 = result;
        if ( result - v4 >= 1 )
        {
          v6 = ((result - v4) >> 2) + 1;
          v7 = v3;
          do
          {
            v8 = *(_DWORD *)(v7 + 4);
            *(_DWORD *)(v7 + 4) = 0;
            v9 = *(MinecraftUIRenderContext::PersistentMeshItem **)v7;
            *(_DWORD *)v7 = v8;
            if ( v9 )
            {
              v10 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(v9);
              operator delete((void *)v10);
            }
            --v6;
            v7 += 4;
          }
          while ( v6 > 1 );
          v5 = *((_DWORD *)v1 + 16);
        }
      }
      v11 = (_DWORD *)(v5 - 4);
      *((_DWORD *)v1 + 16) = v5 - 4;
      v12 = *(MinecraftUIRenderContext::PersistentMeshItem **)(v5 - 4);
      if ( v12 )
        v13 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(v12);
        operator delete((void *)v13);
      *v11 = 0;
      result = *((_DWORD *)v1 + 16);
    }
    while ( (_DWORD)v3 != result );
  }
  return result;
}


int __fastcall MinecraftUIRenderContext::cleanup(MinecraftUIRenderContext *this)
{
  MinecraftUIRenderContext *v1; // r9@1
  int result; // r0@1
  int v3; // r4@1
  __int64 v4; // kr00_8@1
  bool v5; // zf@1
  int v6; // r2@4
  unsigned __int8 v7; // vf@4
  int v8; // r1@6
  signed int v9; // r2@7
  int v10; // r7@8
  int v11; // r5@8
  int v12; // r1@9
  MinecraftUIRenderContext::PersistentMeshItem *v13; // r0@9
  MinecraftUIRenderContext::PersistentMeshItem *v14; // r0@10
  _DWORD *v15; // r5@13
  MinecraftUIRenderContext::PersistentMeshItem *v16; // r0@13
  MinecraftUIRenderContext::PersistentMeshItem *v17; // r0@14

  v1 = this;
  v4 = *(_QWORD *)((char *)this + 60);
  result = *(_QWORD *)((char *)this + 60) >> 32;
  v3 = v4;
  v5 = result == (_DWORD)v4;
  if ( result != (_DWORD)v4 )
    v5 = (_DWORD)v4 == result;
  if ( !v5 )
  {
    do
    {
      v6 = *(_DWORD *)(*(_DWORD *)v3 + 92);
      v7 = __OFSUB__(v6--, 1);
      *(_DWORD *)(*(_DWORD *)v3 + 92) = v6;
      if ( (unsigned __int8)((v6 < 0) ^ v7) | (v6 == 0) )
      {
        v8 = v3 + 4;
        if ( v3 + 4 != result )
        {
          v9 = result - v8;
          v8 = result;
          if ( v9 >= 1 )
          {
            v10 = (v9 >> 2) + 1;
            v11 = v3;
            do
            {
              v12 = *(_DWORD *)(v11 + 4);
              *(_DWORD *)(v11 + 4) = 0;
              v13 = *(MinecraftUIRenderContext::PersistentMeshItem **)v11;
              *(_DWORD *)v11 = v12;
              if ( v13 )
              {
                v14 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(v13);
                operator delete((void *)v14);
              }
              --v10;
              v11 += 4;
            }
            while ( v10 > 1 );
            v8 = *((_DWORD *)v1 + 16);
          }
        }
        v15 = (_DWORD *)(v8 - 4);
        *((_DWORD *)v1 + 16) = v8 - 4;
        v16 = *(MinecraftUIRenderContext::PersistentMeshItem **)(v8 - 4);
        if ( v16 )
          v17 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(v16);
          operator delete((void *)v17);
        *v15 = 0;
      }
      else
        v3 += 4;
      result = *((_DWORD *)v1 + 16);
    }
    while ( v3 != result );
  }
  return result;
}


void __fastcall MinecraftUIRenderContext::~MinecraftUIRenderContext(MinecraftUIRenderContext *this)
{
  MinecraftUIRenderContext::~MinecraftUIRenderContext(this);
}


int __fastcall MinecraftUIRenderContext::resetStencilRef(MinecraftUIRenderContext *this)
{
  int v1; // r1@1
  int result; // r0@1

  v1 = *(_DWORD *)(*((_DWORD *)this + 2) + 12);
  *((_BYTE *)this + 72) = 0;
  result = *(_BYTE *)(v1 + 228) & 0xF0;
  *(_BYTE *)(v1 + 228) = result;
  *(_BYTE *)(v1 + 229) = 0;
  return result;
}


char *__fastcall MinecraftUIRenderContext::drawNineslice(int a1, int a2, float *a3)
{
  float *v3; // r4@1
  float *i; // r5@1
  float *v5; // r7@1
  float *j; // r5@3
  float *v7; // r7@3
  float *k; // r5@5
  float *v9; // r7@5
  float *l; // r5@7
  float *v11; // r7@7
  float *m; // r5@9
  float *v13; // r7@9
  int v15; // [sp+0h] [bp-20h]@1
  int v16; // [sp+4h] [bp-1Ch]@1
  int v17; // [sp+8h] [bp-18h]@1

  v3 = a3;
  v15 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
  v16 = a1;
  v17 = a2;
  sub_F3E24E(&v15, a3);
  v5 = (float *)(*(_QWORD *)(v3 + 35) >> 32);
  for ( i = (float *)*(_QWORD *)(v3 + 35); v5 != i; i += 8 )
    sub_F3E24E(&v15, i);
  v7 = (float *)(*((_QWORD *)v3 + 16) >> 32);
  for ( j = (float *)*((_QWORD *)v3 + 16); v7 != j; j += 8 )
    sub_F3E24E(&v15, j);
  v9 = (float *)(*((_QWORD *)v3 + 22) >> 32);
  for ( k = (float *)*((_QWORD *)v3 + 22); v9 != k; k += 8 )
    sub_F3E24E(&v15, k);
  sub_F3E24E(&v15, v3 + 8);
  sub_F3E24E(&v15, v3 + 16);
  v11 = (float *)(*((_QWORD *)v3 + 19) >> 32);
  for ( l = (float *)*((_QWORD *)v3 + 19); v11 != l; l += 8 )
    sub_F3E24E(&v15, l);
  v13 = (float *)(*(_QWORD *)(v3 + 41) >> 32);
  for ( m = (float *)*(_QWORD *)(v3 + 41); v13 != m; m += 8 )
    sub_F3E24E(&v15, m);
  return sub_F3E24E(&v15, v3 + 24);
}


int __fastcall MinecraftUIRenderContext::enableScissorTest(MinecraftUIRenderContext *this, const RectangleArea *_R1)
{
  GuiData *v6; // r4@1
  mce::EnableScissorTest *v15; // r0@1
  float v17; // [sp+0h] [bp-58h]@0
  char v18; // [sp+Ch] [bp-4Ch]@1

  __asm
  {
    VLDR            S16, [R1]
    VLDR            S18, [R1,#4]
  }
  v6 = *(GuiData **)(*((_DWORD *)this + 2) + 24);
    VLDR            S20, [R1,#8]
    VLDR            S22, [R1,#0xC]
  _R0 = GuiData::getScreenSizeData(*(GuiData **)(*((_DWORD *)this + 2) + 24));
    VLDR            S24, [R0,#8]
    VLDR            S26, [R0,#0xC]
  _R5 = GuiData::getGuiScale(v6);
  _R0 = GuiData::getGuiScale(v6);
    VMOV            S0, R0
    VMOV            S2, R5
    VSUB.F32        S18, S18, S16
    VSUB.F32        S20, S22, S20
    VMUL.F32        S22, S0, S22
    VMUL.F32        S16, S2, S16
  __asm { VMOV            S28, R0 }
    VMUL.F32        S2, S28, S18
    VSUB.F32        S4, S26, S22
    VDIV.F32        S6, S16, S24
    VDIV.F32        S2, S2, S24
    VDIV.F32        S4, S4, S26
    VMOV            R1, S6
    VMUL.F32        S0, S0, S20
    VMOV            R3, S2
    VMOV            R2, S4
    VDIV.F32        S0, S0, S26
    VSTR            S0, [SP,#0x58+var_58]
  v15 = (mce::EnableScissorTest *)mce::EnableScissorTest::EnableScissorTest(
                                    (mce::EnableScissorTest *)&v18,
                                    _R1,
                                    _R2,
                                    _R3,
                                    v17,
                                    0);
  return mce::EnableScissorTest::~EnableScissorTest(v15);
}


char *__fastcall MinecraftUIRenderContext::drawImage(int a1, int a2, float *a3, int a4, __int64 *a5, __int64 *a6)
{
  int v6; // r4@1
  float *v7; // r7@1
  int v8; // r8@1
  int v9; // r5@1
  GuiData *v10; // r6@1
  __int64 v12; // kr00_8@1
  __int64 v13; // kr08_8@2
  __int64 v18; // kr10_8@2
  int v19; // r7@2
  __int64 v20; // kr18_8@2
  float v21; // r5@2
  char *result; // r0@2

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  v10 = *(GuiData **)(*(_DWORD *)(a1 + 8) + 24);
  *(_DWORD *)a3 = GuiData::floorAlignToScreenPixel(*(GuiData **)(*(_DWORD *)(a1 + 8) + 24), *a3);
  *((_DWORD *)v7 + 1) = GuiData::floorAlignToScreenPixel(v10, v7[1]);
  *(_DWORD *)v9 = GuiData::ceilAlignToScreenPixel(v10, *(float *)v9);
  _R0 = GuiData::ceilAlignToScreenPixel(v10, *(float *)(v9 + 4));
  *(_DWORD *)(v9 + 4) = _R0;
  v12 = *(_QWORD *)(v6 + 52);
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    result = j_j_j__ZNSt6vectorIN24MinecraftUIRenderContext9ImageItemESaIS1_EE19_M_emplace_back_auxIJRKN3mce10TexturePtrERN3glm6detail5tvec2IfEESD_SD_SD_EEEvDpOT_(
               (unsigned __int64 *)(v6 + 48),
               v8,
               (__int64 *)v7,
               (__int64 *)v9,
               a5,
               (int)a6);
  }
  else
    v13 = *a6;
    __asm { VMOV            S0, R0 }
    v18 = *a5;
    v20 = *(_QWORD *)v7;
    v19 = *(_QWORD *)v7 >> 32;
    v21 = *(float *)v9;
    *(_DWORD *)v12 = v8;
    *(_DWORD *)(v12 + 4) = v20;
    *(_DWORD *)(v12 + 8) = v19;
    *(float *)(v12 + 12) = v21;
    __asm { VSTR            S0, [R1,#0x10] }
    *(_QWORD *)(v12 + 20) = v18;
    *(_QWORD *)(v12 + 28) = v13;
    result = (char *)(*(_DWORD *)(v6 + 52) + 36);
    *(_DWORD *)(v6 + 52) = result;
  return result;
}


int __fastcall MinecraftUIRenderContext::_getTextAlignmentOffset(int a1, Font **a2, int a3)
{
  GuiData *v9; // r4@1
  Font *v11; // r0@1

  _R6 = a2;
  _R5 = a3;
  __asm { VLDR            S16, [R6,#0x30] }
  v9 = *(GuiData **)(*(_DWORD *)(a1 + 8) + 24);
  _R0 = Font::getScaleFactor(*a2);
  __asm { VMOV            S0, R0 }
  v11 = _R6[14];
  __asm
  {
    VMOV            S2, R5
    VMUL.F32        S0, S0, S16
  }
  if ( v11 == (Font *)1 )
    goto LABEL_4;
  if ( v11 == (Font *)2 )
    __asm { VADD.F32        S0, S0, S0 }
LABEL_4:
    __asm
    {
      VDIV.F32        S0, S2, S0
      VMOV            R1, S0
    }
    return j_j_j__ZNK7GuiData23floorAlignToScreenPixelEf(v9, _R1);
  return 0;
}


char *__fastcall MinecraftUIRenderContext::drawText(int a1, float a2, int a3, int a4, int a5, int a6, int a7, int a8, int *a9)
{
  int v13; // r4@1
  __int64 v14; // kr00_8@1
  __int64 v15; // r9@2
  int v16; // ST24_4@2
  char v17; // r5@2
  char v18; // r8@2
  int v19; // r0@2
  int v20; // r1@2
  int v21; // r6@2
  int v22; // r2@2
  char *result; // r0@2
  int v24; // [sp+28h] [bp-38h]@1
  float v25; // [sp+2Ch] [bp-34h]@3

  __asm { VLDR            S16, [SP,#0x60+arg_4] }
  v13 = a1;
  __asm { VSTR            S16, [SP,#0x60+var_34] }
  v24 = a7;
  v14 = *(_QWORD *)(a1 + 40);
  if ( (_DWORD)v14 == HIDWORD(v14) )
  {
    result = std::vector<MinecraftUIRenderContext::TextItem,std::allocator<MinecraftUIRenderContext::TextItem>>::_M_emplace_back_aux<Font &,RectangleArea const&,std::string const&,Color const&,float &,bool const&,float const&,float const&,bool const&,int const&,ui::TextAlignment &>(
               (unsigned __int64 *)(a1 + 36),
               SLODWORD(a2),
               a3,
               (int *)a4,
               a5,
               (int *)&v25,
               (char *)(a8 + 8),
               (int *)a8,
               (int *)(a8 + 4),
               (char *)(a8 + 9),
               a9,
               &v24);
  }
  else
    HIDWORD(v15) = *(_QWORD *)a8;
    LODWORD(v15) = *a9;
    v16 = *(_QWORD *)a8 >> 32;
    v17 = *(_BYTE *)(a8 + 9);
    v18 = *(_BYTE *)(a8 + 8);
    *(float *)v14 = a2;
    v19 = *(_DWORD *)a3;
    v20 = *(_DWORD *)(a3 + 4);
    v21 = *(_DWORD *)(a3 + 8);
    *(_DWORD *)(v14 + 16) = *(_DWORD *)(a3 + 12);
    v22 = v14 + 4;
    *(_DWORD *)v22 = v19;
    *(_DWORD *)(v22 + 4) = v20;
    *(_DWORD *)(v22 + 8) = v21;
    sub_119C854((int *)(v14 + 20), (int *)a4);
    *(_DWORD *)(v14 + 24) = *(_DWORD *)a5;
    *(_DWORD *)(v14 + 28) = *(_DWORD *)(a5 + 4);
    *(_DWORD *)(v14 + 32) = *(_DWORD *)(a5 + 8);
    __asm { VSTR            S16, [R7,#0x24] }
    *(_BYTE *)(v14 + 40) = v18;
    *(_BYTE *)(v14 + 41) = v17;
    *(_QWORD *)(v14 + 44) = v15;
    *(_DWORD *)(v14 + 52) = v16;
    *(_DWORD *)(v14 + 56) = a7;
    result = (char *)(*(_DWORD *)(v13 + 40) + 60);
    *(_DWORD *)(v13 + 40) = result;
  return result;
}


void __fastcall MinecraftUIRenderContext::flushText(MinecraftUIRenderContext *this, float a2)
{
  MinecraftUIRenderContext *v2; // r11@1
  float v3; // r5@1
  int v4; // r0@1
  int v5; // r10@1
  __int64 v6; // kr00_8@1
  int v12; // r8@2
  __int64 v13; // r0@4
  __int64 v14; // r0@4
  int v25; // r7@17
  int v26; // r6@18
  unsigned int *v27; // r2@19
  signed int v28; // r1@21
  int v29; // r1@27
  void *v30; // r0@27
  GuiData *v31; // [sp+4h] [bp-64h]@2
  char v32; // [sp+8h] [bp-60h]@10
  Font v33; // [sp+10h] [bp-58h]@4
  char v35; // [sp+18h] [bp-50h]@4

  v2 = this;
  v3 = a2;
  v6 = *(_QWORD *)((char *)this + 36);
  v4 = *(_QWORD *)((char *)this + 36) >> 32;
  v5 = v6;
  if ( (_DWORD)v6 != v4 )
  {
    __asm { VMOV.F32        S16, #1.0 }
    _R7 = v6 + 36;
    v12 = -v4;
    v31 = *(GuiData **)(*((_DWORD *)v2 + 2) + 24);
    do
    {
      Font::tickObfuscatedTextIndex(*(Font **)(_R7 - 36), v3);
      __asm
      {
        VLDR            S0, [R7]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        MatrixStack::push((MatrixStack *)&v35, *(_DWORD *)(*((_DWORD *)v2 + 2) + 16) + 16);
        HIDWORD(v13) = *(_DWORD *)(_R7 - 36);
        LODWORD(v13) = &v33;
        Font::getTranslationFactor(v13);
        __asm { VLDR            S2, [SP,#0x68+var_54] }
        v14 = 0LL;
        __asm
        {
          VLDR            S0, [SP,#0x68+var_58]
          VCMPE.F32       S2, #0.0
          VMRS            APSR_nzcv, FPSCR
          VCMPE.F32       S0, #0.0
        }
        if ( !_ZF )
          LODWORD(v14) = 1;
        __asm { VMRS            APSR_nzcv, FPSCR }
          HIDWORD(v14) = 1;
        if ( v14 )
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v35);
          __asm
          {
            VLDR            S0, [SP,#0x68+var_58]
            VLDR            S4, [R7,#0xC]
            VLDR            S2, [SP,#0x68+var_54]
            VMUL.F32        S0, S0, S4
            VLDR            S6, [R0,#8]
            VMUL.F32        S2, S2, S4
            VLDR            S10, [R0,#0x10]
            VLDR            S12, [R0,#0x14]
            VLDR            S14, [R0,#0x18]
            VLDR            S8, [R0,#0xC]
            VLDR            S1, [R0,#0x1C]
            VLDMIA          R0, {S3-S4}
            VMUL.F32        S6, S6, S0
            VMUL.F32        S14, S14, S2
            VMUL.F32        S4, S4, S0
            VMUL.F32        S12, S12, S2
            VMUL.F32        S3, S3, S0
            VMUL.F32        S10, S10, S2
            VMUL.F32        S0, S8, S0
            VMUL.F32        S2, S1, S2
            VADD.F32        S6, S14, S6
            VLDR            S14, [R0,#0x3C]
            VADD.F32        S4, S12, S4
            VLDR            S12, [R0,#0x38]
            VADD.F32        S8, S10, S3
            VLDR            S10, [R0,#0x34]
            VADD.F32        S0, S2, S0
            VLDR            S2, [R0,#0x30]
            VADD.F32        S6, S6, S12
            VADD.F32        S4, S4, S10
            VADD.F32        S2, S8, S2
            VADD.F32        S0, S0, S14
            VSTR            S2, [R0,#0x30]
            VSTR            S4, [R0,#0x34]
            VSTR            S6, [R0,#0x38]
            VSTR            S0, [R0,#0x3C]
          }
        MatrixStack::push((MatrixStack *)&v32, *(_DWORD *)(*((_DWORD *)v2 + 2) + 16) + 16);
        __asm { VLDR            S18, [R7,#0xC] }
        _R0 = Font::getScaleFactor(*(Font **)(_R7 - 36));
          VMOV            S0, R0
          VMUL.F32        S18, S0, S18
          VCMPE.F32       S18, S16
          _R0 = MatrixStack::MatrixStackRef::operator->((int)&v32);
            VLDR            S0, [R0]
            VMUL.F32        S0, S0, S18
            VSTR            S0, [R0]
            VLDR            S0, [R0,#4]
            VSTR            S0, [R0,#4]
            VLDR            S0, [R0,#8]
            VSTR            S0, [R0,#8]
            VLDR            S0, [R0,#0xC]
            VSTR            S0, [R0,#0xC]
            VLDR            S0, [R0,#0x10]
            VSTR            S0, [R0,#0x10]
            VLDR            S0, [R0,#0x14]
            VSTR            S0, [R0,#0x14]
            VLDR            S0, [R0,#0x18]
            VSTR            S0, [R0,#0x18]
            VLDR            S0, [R0,#0x1C]
            VSTR            S0, [R0,#0x1C]
          VLDR            S20, [R7,#-0x18]
          VLDR            S22, [R7,#-0x20]
        Font::isScreenPixelAligned(*(Font **)(_R7 - 36));
          VADD.F32        S2, S20, S16
          VDIV.F32        S0, S22, S18
          VDIV.F32        S18, S2, S18
        if ( _ZF )
          __asm { VMOV            R1, S0 }
          _R6 = GuiData::floorAlignToScreenPixel(v31, _R1);
          __asm { VMOV            R1, S18 }
          _R0 = GuiData::floorAlignToScreenPixel(v31, _R1);
            VMOV            S0, R6
            VMOV            S18, R0
          VMOV            R2, S0
          VMOV            R3, S18
        MinecraftUIRenderContext::_renderTextAligned((int)v2, (float *)(_R7 - 36), _R2, _R3);
        MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v32);
        MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v35);
      _R7 += 60;
    }
    while ( _R7 + v12 != 36 );
    v25 = *(_QWORD *)((char *)v2 + 36) >> 32;
    v5 = *(_QWORD *)((char *)v2 + 36);
    if ( v25 != v5 )
      v26 = *(_QWORD *)((char *)v2 + 36);
      do
        v29 = *(_DWORD *)(v26 + 20);
        v30 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v29 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          else
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v30);
        v26 += 60;
      while ( v26 != v25 );
  }
  *((_DWORD *)v2 + 10) = v5;
}


signed int __fastcall MinecraftUIRenderContext::decreaseStencilRef(MinecraftUIRenderContext *this)
{
  int v1; // r1@1
  char v2; // r2@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(*((_DWORD *)this + 2) + 12);
  v2 = *((_BYTE *)this + 72) - 1;
  *((_BYTE *)this + 72) = v2;
  *(_BYTE *)(v1 + 228) = *(_BYTE *)(v1 + 228) & 0xF0 | v2 & 0xF;
  result = 1;
  *(_BYTE *)(v1 + 229) = 1;
  return result;
}


int __fastcall MinecraftUIRenderContext::drawRectangle(MinecraftUIRenderContext *this, const RectangleArea *a2, const Color *a3, float a4, int a5)
{
  float v5; // r4@1
  const Color *v6; // r5@1
  MinecraftUIRenderContext *v8; // r7@1
  void *v9; // r0@1
  int v14; // r1@1
  int v18; // [sp+0h] [bp-38h]@0
  int v19; // [sp+4h] [bp-34h]@0
  int v20; // [sp+14h] [bp-24h]@1
  int v21; // [sp+18h] [bp-20h]@1
  int v22; // [sp+1Ch] [bp-1Ch]@1
  float v23; // [sp+20h] [bp-18h]@1

  v5 = a4;
  v6 = a3;
  _R6 = a2;
  v8 = this;
  v9 = ScreenRenderer::singleton(this);
  __asm
  {
    VLDR            S0, [R6]
    VLDR            S2, [R6,#4]
    VLDR            S4, [R6,#8]
    VLDR            S6, [R6,#0xC]
  }
  v14 = *((_DWORD *)v8 + 2);
  v20 = *(_DWORD *)v6;
  v21 = *((_DWORD *)v6 + 1);
  v22 = *((_DWORD *)v6 + 2);
  v23 = v5;
    VCVTR.S32.F32   S6, S6
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S0, S0
    VCVTR.S32.F32   S4, S4
    VSTR            S6, [SP,#0x38+var_34]
    VSTR            S2, [SP,#0x38+var_38]
    VMOV            R2, S0
    VMOV            R3, S4
  return ScreenRenderer::drawRect((int)v9, v14, _R2, _R3, v18, v19, (const Color *)&v20, a5);
}


int __fastcall MinecraftUIRenderContext::beginSharedMeshBatch(__int64 this)
{
  int v1; // r10@1
  int v2; // r8@1
  int v3; // r9@1
  int v4; // r6@2
  MinecraftUIRenderContext::PersistentMeshItem *v5; // r7@3
  _BYTE *v6; // r6@7
  mce::TextureGroup *v7; // r6@9
  void *v8; // r0@9
  mce::TextureGroup *v9; // r6@11
  void *v10; // r0@14
  int v11; // r6@15
  int v12; // r1@15
  __int64 v13; // kr00_8@15
  void (***v14)(void); // r0@16
  int v15; // r4@17
  __int64 v16; // kr08_8@20
  MinecraftUIRenderContext::PersistentMeshItem *v17; // r0@21
  int v18; // r1@21
  MinecraftUIRenderContext::PersistentMeshItem *v19; // r0@24
  int result; // r0@26
  Tessellator *v21; // r4@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  MinecraftUIRenderContext::PersistentMeshItem *v26; // [sp+8h] [bp-60h]@15
  int v27; // [sp+Ch] [bp-5Ch]@9
  int v28; // [sp+10h] [bp-58h]@9
  char v29; // [sp+14h] [bp-54h]@9
  void (***v30)(void); // [sp+2Ch] [bp-3Ch]@8
  int v31; // [sp+30h] [bp-38h]@8
  int v32; // [sp+34h] [bp-34h]@8
  void (***v33)(void); // [sp+3Ch] [bp-2Ch]@15
  void (***v34)(void); // [sp+40h] [bp-28h]@15
  int v35; // [sp+44h] [bp-24h]@15

  v1 = this;
  *(_DWORD *)(this + 76) = -1;
  v2 = this + 60;
  LODWORD(this) = *(_DWORD *)(this + 60);
  v3 = HIDWORD(this);
  if ( *(_DWORD *)(v2 + 4) - (signed int)this < 1 )
    goto LABEL_8;
  v4 = 0;
  while ( 1 )
  {
    v5 = *(MinecraftUIRenderContext::PersistentMeshItem **)(this + 4 * v4);
    if ( BatchKey::operator==(*(_DWORD *)(this + 4 * v4), v3) )
      break;
    this = *(_QWORD *)(v1 + 60);
    if ( ++v4 >= (HIDWORD(this) - (signed int)this) >> 2 )
      goto LABEL_8;
  }
  *(_DWORD *)(v1 + 76) = v4;
  if ( v5 )
    v6 = (_BYTE *)(v3 + 72);
  else
LABEL_8:
    v30 = 0;
    v31 = 0;
    v32 = 0;
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 56) - 12) )
    {
      v7 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(v1 + 4));
      sub_119C854(&v27, (int *)(v3 + 56));
      v28 = *(_DWORD *)(v3 + 60);
      mce::TextureGroup::getTexture((mce::TexturePtr *)&v29, v7, (int)&v27, 0);
      std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TexturePtr>(
        (unsigned __int64 *)&v30,
        (int)&v29);
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v29);
      v8 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v27 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      }
      if ( *(_DWORD *)(*(_DWORD *)(v3 + 64) - 12) )
        v9 = (mce::TextureGroup *)ClientInstance::getTextures(*(ClientInstance **)(v1 + 4));
        sub_119C854(&v27, (int *)(v3 + 64));
        v28 = *(_DWORD *)(v3 + 68);
        mce::TextureGroup::getTexture((mce::TexturePtr *)&v29, v9, (int)&v27, 0);
        if ( v31 == v32 )
          std::vector<mce::TexturePtr,std::allocator<mce::TexturePtr>>::_M_emplace_back_aux<mce::TexturePtr>(
            (unsigned __int64 *)&v30,
            (int)&v29);
          v31 = mce::TexturePtr::TexturePtr(v31, (int)&v29) + 24;
        mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v29);
        v10 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v27 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
          }
          else
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v11 = ComponentRenderBatch::getNumInstances((ComponentRenderBatch *)v3);
    v5 = (MinecraftUIRenderContext::PersistentMeshItem *)operator new(0xD0u);
    v33 = v30;
    v12 = v31;
    v34 = (void (***)(void))v12;
    v35 = v32;
    MinecraftUIRenderContext::PersistentMeshItem::PersistentMeshItem((int)v5, v3, (int)&v33, (int *)(v3 + 52), v11);
    v26 = v5;
    v13 = *(_QWORD *)&v33;
    if ( v33 != v34 )
      v14 = v33;
      do
        v15 = (int)(v14 + 6);
        (**v14)();
        v14 = (void (***)(void))v15;
      while ( HIDWORD(v13) != v15 );
    if ( (_DWORD)v13 )
      operator delete((void *)v13);
    v16 = *(_QWORD *)(v1 + 64);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<std::unique_ptr<MinecraftUIRenderContext::PersistentMeshItem,std::default_delete<MinecraftUIRenderContext::PersistentMeshItem>>,std::allocator<std::unique_ptr<MinecraftUIRenderContext::PersistentMeshItem,std::default_delete<MinecraftUIRenderContext::PersistentMeshItem>>>>::_M_emplace_back_aux<std::unique_ptr<MinecraftUIRenderContext::PersistentMeshItem,std::default_delete<MinecraftUIRenderContext::PersistentMeshItem>>>(
        (_QWORD *)v2,
        (int *)&v26);
      v17 = v26;
      v18 = *(_DWORD *)(v1 + 64);
    else
      v17 = 0;
      v26 = 0;
      *(_DWORD *)v16 = v5;
      v18 = v16 + 4;
      *(_DWORD *)(v1 + 64) = v16 + 4;
    *(_DWORD *)(v1 + 76) = ((v18 - *(_DWORD *)(v1 + 60)) >> 2) - 1;
    *(_BYTE *)(v3 + 72) = 1;
    if ( v17 )
      v19 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(v17);
      operator delete((void *)v19);
  if ( ComponentRenderBatch::getNumInstances((ComponentRenderBatch *)v3) != *((_DWORD *)v5 + 22) )
    *v6 = 1;
    goto LABEL_29;
  result = *v6;
  if ( *v6 )
LABEL_29:
    v21 = *(Tessellator **)(*(_DWORD *)(v1 + 8) + 40);
    Tessellator::begin(*(Tessellator **)(*(_DWORD *)(v1 + 8) + 40), 0, 0);
    result = Tessellator::voidBeginAndEndCalls(v21, 1);
  return result;
}


int __fastcall MinecraftUIRenderContext::flushImages(int a1, int a2, int _R2, int *a4)
{
  int v4; // r10@1
  int v5; // r9@1
  __int64 v6; // r0@1
  Tessellator *v11; // r5@2
  __int64 v12; // r0@2
  int v13; // r11@3
  mce::Texture *v15; // r0@4
  mce::Texture *v17; // r0@4
  float v22; // ST00_4@4
  float v23; // ST04_4@4
  float v25; // ST00_4@4
  float v26; // ST04_4@4
  float v27; // ST00_4@4
  float v28; // ST04_4@4
  ShaderColor *v29; // r0@5
  void *v30; // r0@8
  unsigned int *v31; // r2@11
  signed int v32; // r1@13
  float v34; // [sp+0h] [bp-A0h]@0
  float v35; // [sp+4h] [bp-9Ch]@0
  int *v36; // [sp+Ch] [bp-94h]@2
  int v37; // [sp+14h] [bp-8Ch]@6
  char v38; // [sp+18h] [bp-88h]@8
  int v39; // [sp+24h] [bp-7Ch]@5
  int v40; // [sp+28h] [bp-78h]@5
  int v41; // [sp+2Ch] [bp-74h]@5

  v4 = a1;
  v5 = a2;
  v6 = *(_QWORD *)(a1 + 48);
  if ( (_DWORD)v6 != HIDWORD(v6) )
  {
    __asm { VMOV            S16, R2 }
    v36 = a4;
    v11 = *(Tessellator **)(*(_DWORD *)(v4 + 8) + 40);
    Tessellator::begin(v11, 0, 0);
    v12 = *(_QWORD *)(v4 + 48);
    if ( (_DWORD)v12 != HIDWORD(v12) )
    {
      __asm { VMOV.F32        S18, #1.0 }
      v13 = -HIDWORD(v12);
      _R8 = v12 + 32;
      do
      {
        __asm
        {
          VLDR            S22, [R8,#-0x1C]
          VLDR            S20, [R8,#-0x18]
          VLDR            S24, [R8,#-0x14]
          VLDR            S26, [R8,#-0x10]
          VLDR            S28, [R8,#-0xC]
          VLDR            S30, [R8,#-8]
          VLDR            S17, [R8,#-4]
          VLDR            S19, [R8]
        }
        v15 = (mce::Texture *)mce::TexturePtr::operator->(*(_DWORD *)(_R8 - 32));
        _R0 = mce::Texture::getDescription(v15);
          VLDR            S0, [R0]
          VCVT.F32.U32    S21, S0
        v17 = (mce::Texture *)mce::TexturePtr::operator->(*(_DWORD *)(_R8 - 32));
        _R0 = *(_DWORD *)(mce::Texture::getDescription(v17) + 4);
          VDIV.F32        S21, S18, S21
          VMOV            S0, R0
          VMOV            R6, S22
          VCVT.F32.U32    S0, S0
          VDIV.F32        S23, S18, S0
          VADD.F32        S0, S26, S20
          VMUL.F32        S26, S21, S28
          VMOV            R7, S0
          VADD.F32        S0, S19, S30
          VSTR            S26, [SP,#0xA0+var_A0]
          VMUL.F32        S19, S23, S0
          VSTR            S19, [SP,#0xA0+var_9C]
        Tessellator::vertexUV(v11, _R6, _R7, 0.0, v34, v35);
          VADD.F32        S0, S24, S22
          VMOV            R4, S0
          VADD.F32        S0, S17, S28
          VMUL.F32        S22, S21, S0
          VSTR            S22, [SP,#0xA0+var_A0]
        Tessellator::vertexUV(v11, _R4, _R7, 0.0, v22, v23);
          VMOV            R7, S20
          VMUL.F32        S20, S23, S30
          VSTR            S20, [SP,#0xA0+var_9C]
        Tessellator::vertexUV(v11, _R4, _R7, 0.0, v25, v26);
        Tessellator::vertexUV(v11, _R6, _R7, 0.0, v27, v28);
        _R8 += 36;
      }
      while ( _R8 + v13 != 32 );
    }
    v29 = *(ShaderColor **)(*(_DWORD *)(v4 + 8) + 48);
    v39 = *(_DWORD *)v5;
    v40 = *(_DWORD *)(v5 + 4);
    v41 = *(_DWORD *)(v5 + 8);
    __asm { VSTR            S16, [SP,#0xA0+var_70] }
    ShaderColor::setColor(v29, (const Color *)&v39);
    if ( *(_DWORD *)(*v36 - 12) )
      sub_119C854(&v37, v36);
    else
      sub_119C884((void **)&v37, "ui_textured_and_glcolor");
    mce::MaterialPtr::MaterialPtr(
      (mce::MaterialPtr *)&v38,
      (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
      &v37);
    v30 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    Tessellator::draw((char *)v11, *(_DWORD *)(v4 + 8), (int)&v38, *(_DWORD *)(*(_DWORD *)(v4 + 52) - 36));
    *(_DWORD *)(v4 + 52) = *(_DWORD *)(v4 + 48);
    LODWORD(v6) = mce::MaterialPtr::~MaterialPtr((mce::MaterialPtr *)&v38);
  }
  return v6;
}


int __fastcall MinecraftUIRenderContext::fillRectangleStencil(MinecraftUIRenderContext *this, const RectangleArea *a2)
{
  MinecraftUIRenderContext *v3; // r5@1
  void *v4; // r0@1
  float v10; // [sp+0h] [bp-18h]@0
  float v11; // [sp+4h] [bp-14h]@0

  _R4 = a2;
  v3 = this;
  v4 = ScreenRenderer::singleton(this);
  __asm
  {
    VLDR            S0, [R4,#4]
    VLDR            S2, [R4,#0xC]
    VSTR            S0, [SP,#0x18+var_18]
    VSTR            S2, [SP,#0x18+var_14]
  }
  return ScreenRenderer::fillStencil(*(float *)&v4, *((float *)v3 + 2), *(float *)_R4, *((float *)_R4 + 2), v10, v11);
}


void __fastcall MinecraftUIRenderContext::getTexture(MinecraftUIRenderContext *this, const ResourceLocation *a2, int a3, int a4)
{
  const ResourceLocation *v4; // r7@1
  int v5; // r6@1
  mce::TexturePtr *v6; // r5@1
  int v7; // r4@1
  mce::TextureGroup *v8; // r7@3
  void *v9; // r0@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  mce::TextureGroup *v12; // r7@9
  int v13; // [sp+4h] [bp-2Ch]@9
  int v14; // [sp+8h] [bp-28h]@9
  int v15; // [sp+Ch] [bp-24h]@3
  int v16; // [sp+10h] [bp-20h]@3

  v4 = a2;
  v5 = a3;
  v6 = this;
  v7 = a4;
  if ( !sub_119C9E8((const void **)a3, (const char *)&unk_257BC67) )
  {
    mce::TexturePtr::TexturePtr(v6);
    return;
  }
  if ( *(_DWORD *)(v5 + 4) == 10 )
    v8 = (mce::TextureGroup *)*((_DWORD *)v4 + 8);
    sub_119C854(&v15, (int *)v5);
    v16 = *(_DWORD *)(v5 + 4);
    mce::TextureGroup::getTexture(v6, v8, (int)&v15, v7);
    v9 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) == &dword_28898C0 )
      return;
    v10 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      goto LABEL_16;
    }
  else
    v12 = (mce::TextureGroup *)*((_DWORD *)v4 + 7);
    sub_119C854(&v13, (int *)v5);
    v14 = *(_DWORD *)(v5 + 4);
    mce::TextureGroup::getTexture(v6, v12, (int)&v13, v7);
    v9 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
  v11 = (*v10)--;
LABEL_16:
  if ( v11 <= 0 )
    j_j_j_j_j__ZdlPv_9_1(v9);
}


char *__fastcall MinecraftUIRenderContext::getMeasureStrategy(MinecraftUIRenderContext *this)
{
  return (char *)this + 12;
}


MinecraftUIRenderContext *__fastcall MinecraftUIRenderContext::~MinecraftUIRenderContext(MinecraftUIRenderContext *this)
{
  MinecraftUIRenderContext *v1; // r10@1
  MinecraftUIRenderContext::PersistentMeshItem **v2; // r5@1 OVERLAPPED
  MinecraftUIRenderContext::PersistentMeshItem **v3; // r6@1 OVERLAPPED
  MinecraftUIRenderContext::PersistentMeshItem *v4; // r0@3
  void *v5; // r0@8
  int v6; // r5@10
  int v7; // r7@10
  unsigned int *v8; // r2@12
  signed int v9; // r1@14
  int v10; // r1@20
  void *v11; // r0@20

  v1 = this;
  *(_DWORD *)this = &off_26DCD84;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 60);
  if ( v2 != v3 )
  {
    do
    {
      if ( *v2 )
      {
        v4 = MinecraftUIRenderContext::PersistentMeshItem::~PersistentMeshItem(*v2);
        operator delete((void *)v4);
      }
      *v2 = 0;
      ++v2;
    }
    while ( v3 != v2 );
    v2 = (MinecraftUIRenderContext::PersistentMeshItem **)*((_DWORD *)v1 + 15);
  }
  if ( v2 )
    operator delete(v2);
  v5 = (void *)*((_DWORD *)v1 + 12);
  if ( v5 )
    operator delete(v5);
  v7 = *(_QWORD *)((char *)v1 + 36) >> 32;
  v6 = *(_QWORD *)((char *)v1 + 36);
  if ( v6 != v7 )
      v10 = *(_DWORD *)(v6 + 20);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v10 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
        else
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      v6 += 60;
    while ( v6 != v7 );
    v6 = *((_DWORD *)v1 + 9);
  if ( v6 )
    operator delete((void *)v6);
  MinecraftUIMeasureStrategy::~MinecraftUIMeasureStrategy((MinecraftUIRenderContext *)((char *)v1 + 12));
  return v1;
}


int __fastcall MinecraftUIRenderContext::_splitTextItemText(int a1, int a2, int a3)
{
  int v3; // r4@1
  int result; // r0@1
  int *v5; // r5@1
  unsigned int v6; // r3@1
  unsigned int v7; // r6@2
  int v8; // r9@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  __int64 v13; // r0@21
  int v14; // r1@22
  void *v15; // r0@24
  __int64 v16; // r0@28
  int v17; // r1@29
  void *v18; // r0@31
  void *v19; // [sp+4h] [bp-3Ch]@28
  void *v20; // [sp+8h] [bp-38h]@21

  v3 = a3;
  v5 = (int *)(a2 + 20);
  result = *(_DWORD *)(a2 + 20);
  v6 = *(_DWORD *)(result - 12);
  if ( v6 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( *(_BYTE *)(result + v8) == 10 )
      {
        if ( v6 < v7 )
          sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v6);
        sub_119C8C4(&v20, v5, v7, v8 - v7);
        v13 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v13 == HIDWORD(v13) )
        {
          std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
            (unsigned __int64 *)v3,
            &v20);
          v14 = (int)v20;
        }
        else
          *(_DWORD *)v13 = v20;
          HIDWORD(v13) = &unk_28898CC;
          v20 = &unk_28898CC;
          *(_DWORD *)(v3 + 4) = v13 + 4;
        v15 = (void *)(v14 - 12);
        if ( (int *)(v14 - 12) != &dword_28898C0 )
          v9 = (unsigned int *)(v14 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v15);
        result = *v5;
        v7 = v8 + 1;
      }
      v6 = *(_DWORD *)(result - 12);
      if ( v8 == v6 - 1 )
        sub_119C8C4(&v19, v5, v7, ++v8 - v7);
        v16 = *(_QWORD *)(v3 + 4);
        if ( (_DWORD)v16 == HIDWORD(v16) )
            &v19);
          v17 = (int)v19;
          *(_DWORD *)v16 = v19;
          HIDWORD(v16) = &unk_28898CC;
          v19 = &unk_28898CC;
          *(_DWORD *)(v3 + 4) = v16 + 4;
        v18 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v17 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
        v6 = *(_DWORD *)(*v5 - 12);
      ++v8;
    }
    while ( v8 < v6 );
  }
  return result;
}


int __fastcall MinecraftUIRenderContext::setTextAlpha(int result, float a2)
{
  *(float *)(result + 20) = a2;
  return result;
}


void __fastcall MinecraftUIRenderContext::flushText(MinecraftUIRenderContext *this, float a2)
{
  MinecraftUIRenderContext::flushText(this, a2);
}


int __fastcall MinecraftUIRenderContext::PersistentMeshItem::PersistentMeshItem(int a1, int a2, int a3, int *a4, unsigned int a5)
{
  int *v5; // r8@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r9@1
  int v14; // r0@1
  int v15; // r3@1
  int v16; // r4@1
  int v17; // r5@1
  int v18; // r0@1
  int v19; // r0@1
  void *v20; // r0@1
  unsigned int *v22; // r2@3
  signed int v23; // r1@5
  int v24; // [sp+0h] [bp-38h]@1

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v9 = *(_DWORD *)a2;
  v10 = *(_DWORD *)(a2 + 4);
  v11 = *(_DWORD *)(a2 + 8);
  v12 = *(_DWORD *)(a2 + 12);
  v8 = a2 + 16;
  v13 = a1;
  *(_DWORD *)a1 = v9;
  *(_DWORD *)(a1 + 4) = v10;
  *(_DWORD *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 12) = v12;
  v14 = a1 + 16;
  v15 = *(_DWORD *)(v8 + 4);
  v16 = *(_DWORD *)(v8 + 8);
  v17 = *(_DWORD *)(v8 + 12);
  *(_DWORD *)v14 = *(_DWORD *)v8;
  *(_DWORD *)(v14 + 4) = v15;
  *(_DWORD *)(v14 + 8) = v16;
  *(_DWORD *)(v14 + 12) = v17;
  *(_DWORD *)(v13 + 32) = *(_DWORD *)(v7 + 32);
  *(_DWORD *)(v13 + 36) = *(_DWORD *)(v7 + 36);
  *(_DWORD *)(v13 + 40) = *(_DWORD *)(v7 + 40);
  *(_DWORD *)(v13 + 44) = *(_DWORD *)(v7 + 44);
  *(_WORD *)(v13 + 48) = *(_WORD *)(v7 + 48);
  sub_119C854((int *)(v13 + 52), (int *)(v7 + 52));
  sub_119C854((int *)(v13 + 56), (int *)(v7 + 56));
  *(_DWORD *)(v13 + 60) = *(_DWORD *)(v7 + 60);
  sub_119C854((int *)(v13 + 64), (int *)(v7 + 64));
  *(_QWORD *)(v13 + 68) = *(_DWORD *)(v7 + 68);
  *(_DWORD *)(v13 + 76) = 0;
  *(_DWORD *)(v13 + 80) = 0;
  *(_DWORD *)(v13 + 72) = *(_DWORD *)v6;
  *(_DWORD *)v6 = 0;
  v18 = *(_DWORD *)(v13 + 76);
  *(_DWORD *)(v13 + 76) = *(_DWORD *)(v6 + 4);
  *(_DWORD *)(v6 + 4) = v18;
  v19 = *(_DWORD *)(v13 + 80);
  *(_DWORD *)(v13 + 80) = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v19;
  sub_119C854((int *)(v13 + 84), v5);
  *(_QWORD *)(v13 + 88) = __PAIR__(10, a5);
  sub_119C854(&v24, v5);
  mce::MaterialPtr::MaterialPtr(
    (mce::MaterialPtr *)(v13 + 96),
    (mce::RenderMaterialGroup *)&mce::RenderMaterialGroup::common,
    &v24);
  v20 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    }
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  }
  mce::Mesh::Mesh((mce::Mesh *)(v13 + 108));
  return v13;
}


char *__fastcall MinecraftUIRenderContext::drawDebugText(float a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8)
{
  float v12; // r4@1
  int v13; // r5@1
  int *v14; // r3@1
  int v15; // r2@1
  __int64 v16; // kr00_8@1
  int v17; // r1@1
  __int64 v18; // kr08_8@2
  int v19; // r11@2
  char v20; // r9@2
  char v21; // r8@2
  int v22; // r0@2
  int v23; // r1@2
  int v24; // r6@2
  int v25; // r2@2
  char *result; // r0@2
  int v27; // [sp+28h] [bp-38h]@1
  float v28; // [sp+2Ch] [bp-34h]@3

  __asm { VLDR            S16, [SP,#0x60+arg_0] }
  v12 = a1;
  v13 = a4;
  v14 = (int *)a3;
  v15 = a2;
  __asm { VSTR            S16, [SP,#0x60+var_34] }
  v27 = a6;
  v16 = *(_QWORD *)(LODWORD(a1) + 40);
  v17 = *(_DWORD *)(LODWORD(a1) + 80);
  if ( (_DWORD)v16 == HIDWORD(v16) )
  {
    result = std::vector<MinecraftUIRenderContext::TextItem,std::allocator<MinecraftUIRenderContext::TextItem>>::_M_emplace_back_aux<Font &,RectangleArea const&,std::string const&,Color const&,float &,bool const&,float const&,float const&,bool const&,int const&,ui::TextAlignment &>(
               (unsigned __int64 *)(LODWORD(a1) + 36),
               v17,
               v15,
               v14,
               v13,
               (int *)&v28,
               (char *)(a7 + 8),
               (int *)a7,
               (int *)(a7 + 4),
               (char *)(a7 + 9),
               a8,
               &v27);
  }
  else
    v18 = *(_QWORD *)a7;
    v19 = *a8;
    v20 = *(_BYTE *)(a7 + 9);
    v21 = *(_BYTE *)(a7 + 8);
    *(_DWORD *)v16 = v17;
    v22 = *(_DWORD *)v15;
    v23 = *(_DWORD *)(v15 + 4);
    v24 = *(_DWORD *)(v15 + 8);
    *(_DWORD *)(v16 + 16) = *(_DWORD *)(v15 + 12);
    v25 = v16 + 4;
    *(_DWORD *)v25 = v22;
    *(_DWORD *)(v25 + 4) = v23;
    *(_DWORD *)(v25 + 8) = v24;
    sub_119C854((int *)(v16 + 20), v14);
    *(_DWORD *)(v16 + 24) = *(_DWORD *)v13;
    *(_DWORD *)(v16 + 28) = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v16 + 32) = *(_DWORD *)(v13 + 8);
    __asm { VSTR            S16, [R7,#0x24] }
    *(_BYTE *)(v16 + 40) = v21;
    *(_BYTE *)(v16 + 41) = v20;
    *(_DWORD *)(v16 + 44) = v19;
    *(_QWORD *)(v16 + 48) = v18;
    *(_DWORD *)(v16 + 56) = a6;
    result = (char *)(*(_DWORD *)(LODWORD(v12) + 40) + 60);
    *(_DWORD *)(LODWORD(v12) + 40) = result;
  return result;
}


RakNet *__fastcall MinecraftUIRenderContext::getZippedTexture(mce::TexturePtr *a1, int a2, const void **a3, int a4, int a5)
{
  mce::TexturePtr *v5; // r8@1
  int v6; // r6@1
  int v7; // r5@1
  void **v8; // r0@3
  const void **v9; // r0@3
  unsigned int v10; // r0@3
  const void **v11; // r0@3
  char *v12; // r0@3
  void *v13; // r0@4
  int v14; // r2@5
  int v15; // r0@5
  void *v16; // r0@8
  RakNet *result; // r0@9
  int *v18; // r0@13
  int v19; // r7@15
  void *v20; // r0@15
  void **v21; // r4@16
  void **v22; // r7@16
  void *v23; // r0@23
  void **v24; // r4@24
  void **v25; // r7@24
  void *v26; // r0@31
  mce::TextureGroup *v27; // r6@32
  void *v28; // r0@32
  char *v29; // r0@33
  char *v30; // r0@34
  unsigned int *v31; // r2@37
  signed int v32; // r1@39
  unsigned int *v33; // r2@41
  signed int v34; // r1@43
  unsigned int *v35; // r2@45
  signed int v36; // r1@47
  unsigned int *v37; // r2@49
  signed int v38; // r1@51
  unsigned int *v39; // r2@53
  signed int v40; // r1@55
  unsigned int *v41; // r2@77
  signed int v42; // r1@79
  unsigned int *v43; // r2@81
  signed int v44; // r1@83
  unsigned int *v45; // r2@85
  signed int v46; // r1@87
  int v47; // [sp+4h] [bp-914h]@32
  int v48; // [sp+8h] [bp-910h]@32
  char v49; // [sp+Ch] [bp-90Ch]@15
  __int64 v50; // [sp+4Ch] [bp-8CCh]@16
  int v51; // [sp+58h] [bp-8C0h]@15
  void **v52; // [sp+84h] [bp-894h]@15
  void **v53; // [sp+88h] [bp-890h]@24
  int v54; // [sp+90h] [bp-888h]@23
  int v55; // [sp+BCh] [bp-85Ch]@12
  char *v56; // [sp+C0h] [bp-858h]@5
  char *v57; // [sp+C4h] [bp-854h]@5
  int v58; // [sp+C8h] [bp-850h]@5
  int v59; // [sp+CCh] [bp-84Ch]@3
  int v60; // [sp+D0h] [bp-848h]@3
  int v61; // [sp+D4h] [bp-844h]@3
  int v62; // [sp+D8h] [bp-840h]@3
  int v63; // [sp+DCh] [bp-83Ch]@3
  char *v64; // [sp+E0h] [bp-838h]@3
  char *v65; // [sp+E4h] [bp-834h]@3
  char v66; // [sp+ECh] [bp-82Ch]@3
  int v67; // [sp+F0h] [bp-828h]@3
  char v68; // [sp+4F4h] [bp-424h]@3
  int v69; // [sp+4F8h] [bp-420h]@3
  int v70; // [sp+8F8h] [bp-20h]@3
  RakNet *v71; // [sp+8FCh] [bp-1Ch]@1

  v5 = a1;
  v6 = a2;
  v7 = a4;
  v71 = _stack_chk_guard;
  if ( sub_119C9E8(a3, (const char *)&unk_257BC67) && sub_119C9E8((const void **)v7, (const char *)&unk_257BC67) )
  {
    v61 = *(_DWORD *)v7;
    v62 = *(_DWORD *)(v61 - 12);
    Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v68, (__int64 *)&v61);
    v8 = sub_119CCEC((void **)&v63, (unsigned int)&v69, v70);
    v9 = sub_119C894((const void **)v8, ".", 1u);
    v64 = (char *)*v9;
    *v9 = &unk_28898CC;
    v59 = *(_DWORD *)v7;
    v60 = *(_DWORD *)(v59 - 12);
    Core::PathBuffer<Core::StackString<char,1024u>>::getEntryExtensionWithoutDot((int)&v66, (__int64 *)&v59);
    v10 = strlen((const char *)&v67);
    v11 = sub_119C894((const void **)&v64, (char *)&v67, v10);
    v65 = (char *)*v11;
    *v11 = &unk_28898CC;
    v12 = v64 - 12;
    if ( (int *)(v64 - 12) != &dword_28898C0 )
    {
      v31 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      }
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    }
    v13 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v63 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    sub_119C854((int *)&v56, (int *)&v65);
    v14 = *(_DWORD *)(v7 + 4);
    v57 = v56;
    v58 = v14;
    v56 = (char *)&unk_28898CC;
    v15 = mce::TextureGroup::isLoaded(*(mce::TextureGroup **)(v6 + 28), (const ResourceLocation *)v7, 0);
    if ( a5 || (v15 ^ 1) == 1 )
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v16 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        v16 = &ServiceLocator<AppPlatform>::mDefaultService;
      (*(void (__fastcall **)(int *))(**(_DWORD **)v16 + 380))(&v55);
        v18 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        v18 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
      AppPlatform::loadTextureFromStream((int)&v52, *v18, (mce::ImageBuffer **)&v55);
      v19 = *(_DWORD *)(v6 + 28);
      TexturePair::TexturePair((mce::Texture *)&v49, (int)&v52);
      mce::TextureGroup::uploadTexture(v19, (const ResourceLocation *)v7, (int)&v49, 1);
      v20 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v51 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
        }
        else
          v42 = (*v41)--;
        if ( v42 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = (void **)HIDWORD(v50);
      v22 = (void **)v50;
      if ( (_DWORD)v50 != HIDWORD(v50) )
          if ( *v22 )
            operator delete(*v22);
          v22 += 10;
        while ( v21 != v22 );
        v22 = (void **)v50;
      if ( v22 )
        operator delete(v22);
      mce::Texture::~Texture((mce::Texture *)&v49);
      v23 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v54 - 4);
            v44 = __ldrex(v43);
          while ( __strex(v44 - 1, v43) );
          v44 = (*v43)--;
        if ( v44 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      v24 = v53;
      v25 = v52;
      if ( v52 != v53 )
          if ( *v25 )
            operator delete(*v25);
          v25 += 10;
        while ( v24 != v25 );
        v25 = v52;
      if ( v25 )
        operator delete(v25);
      v26 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v55 - 4);
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
    v27 = *(mce::TextureGroup **)(v6 + 28);
    sub_119C854(&v47, (int *)v7);
    v48 = *(_DWORD *)(v7 + 4);
    mce::TextureGroup::getTexture(v5, v27, (int)&v47, 0);
    v28 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v47 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    v29 = v57 - 12;
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v57 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = v65 - 12;
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v65 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    result = (RakNet *)(_stack_chk_guard - v71);
    if ( _stack_chk_guard != v71 )
LABEL_36:
      _stack_chk_fail(result);
  }
  else
    mce::TexturePtr::TexturePtr(v5);
      goto LABEL_36;
  return result;
}


signed int __fastcall MinecraftUIRenderContext::increaseStencilRef(MinecraftUIRenderContext *this)
{
  int v1; // r1@1
  char v2; // r2@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(*((_DWORD *)this + 2) + 12);
  v2 = *((_BYTE *)this + 72) + 1;
  *((_BYTE *)this + 72) = v2;
  *(_BYTE *)(v1 + 228) = *(_BYTE *)(v1 + 228) & 0xF0 | v2 & 0xF;
  result = 1;
  *(_BYTE *)(v1 + 229) = 1;
  return result;
}


void __fastcall MinecraftUIRenderContext::_renderTextAligned(int a1, float *a2, int a3, int a4)
{
  float v5; // r8@1
  GuiData *v9; // r4@1
  int v11; // r0@1
  int v15; // r0@5
  int v16; // r9@7
  int v17; // r7@8
  int v18; // r7@10
  int v19; // r0@10
  int v20; // r2@10
  int v21; // r1@10
  signed int v23; // r7@11
  int v24; // r10@9
  int v25; // r4@9
  signed int v26; // r0@14
  int *v29; // r8@18
  int v30; // r4@18
  int v31; // r10@21
  GuiData *v37; // r4@24
  int v39; // r0@24
  int v44; // r10@35
  GuiData *v46; // r4@35
  int v48; // r0@35
  float v54; // r7@44
  void *v55; // r4@47
  void *v56; // r6@47
  unsigned int *v57; // r2@49
  signed int v58; // r1@51
  int *v59; // r0@57
  int v60; // [sp+0h] [bp-B0h]@0
  __int64 v61; // [sp+10h] [bp-A0h]@0
  int v62; // [sp+18h] [bp-98h]@0
  int v63; // [sp+18h] [bp-98h]@18
  float v64; // [sp+1Ch] [bp-94h]@0
  int v65; // [sp+1Ch] [bp-94h]@35
  Color *v66; // [sp+20h] [bp-90h]@9
  float v67; // [sp+24h] [bp-8Ch]@9
  int v68; // [sp+28h] [bp-88h]@18
  unsigned int v69; // [sp+2Ch] [bp-84h]@9
  int v70; // [sp+30h] [bp-80h]@21
  int v71; // [sp+30h] [bp-80h]@33
  int v72; // [sp+34h] [bp-7Ch]@1
  Font *v73; // [sp+38h] [bp-78h]@18
  _BYTE *v74; // [sp+3Ch] [bp-74h]@1
  _BYTE *v75; // [sp+40h] [bp-70h]@1
  int v76; // [sp+44h] [bp-6Ch]@1

  _R6 = a2;
  v72 = a1;
  v5 = *a2;
  _R7 = a4;
  _R5 = a3;
  v74 = 0;
  v75 = 0;
  v76 = 0;
  MinecraftUIRenderContext::_splitTextItemText(0, (int)a2, (int)&v74);
  __asm { VLDR            S16, [R6,#0x30] }
  v9 = *(GuiData **)(*(_DWORD *)(v72 + 8) + 24);
  _R0 = Font::getScaleFactor(*(Font **)_R6);
  __asm { VMOV            S0, R0 }
  v11 = *((_DWORD *)_R6 + 14);
  __asm { VMUL.F32        S0, S0, S16 }
  if ( v11 == 1 )
  {
    __asm
    {
      VLDR            S2, [R6,#4]
      VLDR            S4, [R6,#8]
      VSUB.F32        S2, S4, S2
      VDIV.F32        S0, S2, S0
      VMOV            R1, S0
    }
    _R0 = GuiData::floorAlignToScreenPixel(v9, _R1);
  }
  else
    if ( v11 != 2 )
      __asm { VLDR            S18, =0.0 }
      goto LABEL_7;
      VADD.F32        S0, S0, S0
  __asm { VMOV            S18, R0 }
  v15 = *((_DWORD *)_R6 + 14);
LABEL_7:
  v16 = *((_DWORD *)_R6 + 11);
  __asm
    VMOV            S16, R7
    VMOV            S20, R5
  if ( !_ZF )
    v17 = (int)v74;
    if ( v75 != v74 )
      __asm { VLDR            S22, =0.0 }
      v24 = 0;
      v25 = 0;
      v69 = (v75 - v74) >> 2;
      LODWORD(v67) = LODWORD(v5) + 16;
      v66 = (Color *)(_R6 + 6);
      while ( 1 )
      {
        v26 = v25;
        if ( v25 )
          v26 = 1;
        if ( *((_BYTE *)_R6 + 40) || v26 == 1 )
          break;
LABEL_42:
        if ( ++v25 >= 2 )
          goto LABEL_47;
      }
      Font::resetFormat((Font *)LODWORD(v5), v66);
      v68 = v16;
      _R9 = 0;
      *(_BYTE *)(LODWORD(v5) + 12) = 0;
      _ZF = v25 == 0;
      v73 = (Font *)LODWORD(v5);
      _R11 = 0;
      v63 = v25;
      v29 = (int *)v17;
      v30 = v24;
      if ( !_ZF )
        while ( 1 )
        {
          if ( Font::hasFormattingCodes((int)v73, v29) == 1 )
            *((_BYTE *)v73 + 13) = 0;
          v31 = *(_DWORD *)(*v29 - 12);
          v70 = v31 + v30;
          _VF = __OFSUB__(v31 + v30, v68);
          _ZF = v31 + v30 == v68;
          _NF = v31 + v30 - v68 < 0;
          if ( v31 + v30 != v68 )
          {
            v31 = -1;
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v31 = v68 - v30;
          }
          _R11 = Font::getWrapHeight(v73);
          __asm
            VMOV            S0, R9
            VCVT.F32.U32    S24, S0
          _R0 = Font::getLineLength((int)v73, v29, *((_DWORD *)_R6 + 12), 0);
            VMOV            S0, R0
            VCVT.F32.S32    S26, S0
            VLDR            S28, [R6,#0x30]
          v37 = *(GuiData **)(*(_DWORD *)(v72 + 8) + 24);
          _R0 = Font::getScaleFactor(*(Font **)_R6);
          __asm { VMOV            S0, R0 }
          v39 = *((_DWORD *)_R6 + 14);
          __asm { VMUL.F32        S0, S0, S28 }
          if ( v39 == 1 )
            break;
          __asm { VMOV.F32        S2, S22 }
          if ( v39 == 2 )
            __asm
            {
              VADD.F32        S0, S0, S0
              VDIV.F32        S0, S26, S0
              VMOV            R1, S0
            }
            _R0 = GuiData::floorAlignToScreenPixel(v37, _R1);
LABEL_28:
            __asm { VMOV            S2, R0 }
            VSUB.F32        S2, S18, S2
            VMOV            S0, R11
            VMUL.F32        S0, S0, S24
            VADD.F32        S2, S2, S20
            VADD.F32        S0, S0, S16
            VMOV            R3, S2
            VLDR            S2, [R6,#0x34]
            VSTR            S2, [SP,#0xB0+var_9C]
          if ( _NF ^ _VF )
          __asm { VSTR            S0, [SP,#0xB0+var_B0] }
          Font::draw(
            *(float *)&v73,
            *(_DWORD *)(v72 + 8),
            (int)v29,
            _R3,
            v60,
            v67,
            COERCE_FLOAT(*((_BYTE *)_R6 + 41)),
            0,
            v31,
            SHIDWORD(v61));
          ++v29;
          ++_R9;
          v30 = v70 + 1;
          if ( _R9 >= v69 )
            goto LABEL_41;
        }
        __asm
          VDIV.F32        S0, S26, S0
          VMOV            R1, S0
        _R0 = GuiData::floorAlignToScreenPixel(v37, _R1);
        goto LABEL_28;
        v71 = v30;
        if ( Font::hasFormattingCodes((int)v73, (int *)(v17 + _R9)) == 1 )
          *((_BYTE *)v73 + 13) = 0;
        v44 = *(_DWORD *)(*(_DWORD *)(v17 + 4 * _R11) - 12);
        v65 = Font::getWrapHeight(v73);
          VMOV            S0, R11
          VCVT.F32.U32    S24, S0
        _R0 = Font::getLineLength((int)v73, (int *)(v17 + _R9), *((_DWORD *)_R6 + 12), 0);
          VMOV            S0, R0
          VCVT.F32.S32    S26, S0
          VLDR            S28, [R6,#0x30]
        v46 = *(GuiData **)(*(_DWORD *)(v72 + 8) + 24);
        _R0 = Font::getScaleFactor(*(Font **)_R6);
        __asm { VMOV            S0, R0 }
        v48 = *((_DWORD *)_R6 + 14);
        __asm { VMUL.F32        S0, S0, S28 }
        if ( v48 == 1 )
        __asm { VMOV.F32        S2, S22 }
        if ( v48 == 2 )
            VADD.F32        S0, S0, S0
            VDIV.F32        S0, S26, S0
            VMOV            R1, S0
          _R0 = GuiData::floorAlignToScreenPixel(v46, _R1);
LABEL_39:
          __asm { VMOV            S2, R0 }
        __asm { VSUB.F32        S2, S18, S2 }
        _R0 = v65;
          VMUL.F32        S0, S0, S24
          VADD.F32        S2, S2, S20
          VADD.F32        S0, S0, S16
          VMOV            R3, S2
          VLDR            S2, [R6,#0x34]
          VSTR            S2, [SP,#0xB0+var_A0]
          VSTR            S0, [SP,#0xB0+var_B0]
        Font::drawShadow(
          *(float *)&v73,
          *(_DWORD *)(v72 + 8),
          v17 + _R9,
          _R3,
          *(float *)&v60,
          (int)v66,
          *((_BYTE *)_R6 + 41),
          v61,
          v63,
          *(float *)&v65);
        _R9 += 4;
        ++_R11;
        v30 = v71 + v44 + 1;
        if ( _R11 >= v69 )
LABEL_41:
          v24 = v30;
          v5 = *(float *)&v73;
          v16 = v68;
          v25 = v63;
          *((_WORD *)v73 + 6) = 257;
          goto LABEL_42;
      __asm
        VDIV.F32        S0, S26, S0
        VMOV            R1, S0
      _R0 = GuiData::floorAlignToScreenPixel(v46, _R1);
      goto LABEL_39;
  __asm { VADD.F32        S2, S18, S20 }
  v18 = *((_WORD *)_R6 + 20);
  v19 = (int)(_R6 + 6);
  __asm { VLDR            S0, [R6,#0x34] }
  v20 = (int)(_R6 + 5);
  v21 = *(_DWORD *)(v72 + 8);
  __asm { VMOV            R3, S2 }
  if ( _ZF )
    v54 = 0.0;
    __asm { VSTR            S0, [SP,#0xB0+var_9C] }
    if ( !_ZF & _CF )
      LODWORD(v54) = 1;
    __asm { VSTR            S16, [SP,#0xB0+var_B0] }
    Font::draw(v5, v21, v20, _R3, v60, *(float *)&v19, v54, 0, v16, SHIDWORD(v61));
    v23 = 0;
    __asm { VSTR            S0, [SP,#0xB0+var_A0] }
      v23 = 1;
    Font::drawShadow(v5, v21, v20, _R3, *(float *)&v60, v19, (unsigned int)v23, v61, v62, v64);
LABEL_47:
  v56 = v75;
  v55 = v74;
  if ( v74 != v75 )
    do
      v59 = (int *)(*(_DWORD *)v55 - 12);
      if ( v59 != &dword_28898C0 )
        v57 = (unsigned int *)(*(_DWORD *)v55 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
        else
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      v55 = (char *)v55 + 4;
    while ( v55 != v56 );
    v55 = v74;
  if ( v55 )
    operator delete(v55);
}
