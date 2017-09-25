

int __fastcall GradientRenderer::setGradientColors(int result, const Color *a2, const Color *a3)
{
  __int64 v3; // kr00_8@1
  __int64 v4; // kr10_8@1

  v3 = *(_QWORD *)a2;
  *(_QWORD *)(result + 20) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(result + 12) = v3;
  v4 = *(_QWORD *)a3;
  *(_QWORD *)(result + 36) = *((_QWORD *)a3 + 1);
  *(_QWORD *)(result + 28) = v4;
  return result;
}


void __fastcall GradientRenderer::~GradientRenderer(GradientRenderer *this)
{
  GradientRenderer::~GradientRenderer(this);
}


int __fastcall GradientRenderer::setGradientDirection(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


char *__fastcall GradientRenderer::render(GradientRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  GradientRenderer *v6; // r5@1
  UIControl *v7; // r4@1
  MinecraftUIRenderContext *v8; // r6@1
  int v9; // r7@1
  void *v10; // r8@1
  int v11; // r10@1
  UIControl *v12; // r6@1
  char *v13; // r3@1
  UIControl *v14; // r5@4
  char *result; // r0@4

  v6 = this;
  v7 = a4;
  v8 = a2;
  v9 = *((_DWORD *)this + 2);
  v10 = ScreenRenderer::singleton(this);
  v11 = MinecraftUIRenderContext::getScreenContext(v8);
  v12 = UIControl::getPosition(v7);
  v13 = UIControl::getSize(v7);
  if ( v9 )
    ScreenRenderer::fillHorizontalGradient(
      (int)v10,
      v11,
      (int)v12,
      (int)v13,
      (GradientRenderer *)((char *)v6 + 12),
      (GradientRenderer *)((char *)v6 + 28));
  else
    ScreenRenderer::fillGradient(
  v14 = UIControl::getPosition(v7);
  result = UIControl::getSize(v7);
  _R1 = *(_DWORD *)v14;
  *(_DWORD *)a6 = *(_DWORD *)v14;
  _R2 = *((_DWORD *)v14 + 1);
  *((_DWORD *)a6 + 2) = _R2;
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0]
    VADD.F32        S0, S2, S0
    VMOV            S2, R2
    VSTR            S0, [R9,#4]
    VLDR            S0, [R0,#4]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R9,#0xC]
  }
  return result;
}


void __fastcall GradientRenderer::~GradientRenderer(GradientRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


unsigned int *__fastcall GradientRenderer::clone(GradientRenderer *this, int a2)
{
  int v2; // r4@1
  GradientRenderer *v3; // r6@1
  unsigned int *result; // r0@1
  int v5; // r12@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r5@1
  unsigned int *v9; // r12@1
  unsigned int v10; // r2@1
  unsigned int v11; // r3@1
  unsigned int v12; // r5@1
  int v13; // r4@1
  unsigned int v14; // r1@4
  unsigned int *v15; // r1@8
  unsigned int *v16; // r5@14
  int v17; // [sp+4h] [bp-1Ch]@1
  int v18; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  j__ZNSt12__shared_ptrI16GradientRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v17);
  result = (unsigned int *)v17;
  v5 = v17 + 12;
  *(_DWORD *)(v17 + 8) = *(_DWORD *)(v2 + 8);
  v6 = *(_DWORD *)(v2 + 16);
  v7 = *(_DWORD *)(v2 + 20);
  v8 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)v5 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  *(_DWORD *)(v5 + 12) = v8;
  v9 = result + 7;
  v10 = *(_DWORD *)(v2 + 32);
  v11 = *(_DWORD *)(v2 + 36);
  v12 = *(_DWORD *)(v2 + 40);
  *v9 = *(_DWORD *)(v2 + 28);
  v9[1] = v10;
  v9[2] = v11;
  v9[3] = v12;
  v13 = v18;
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 1) = v13;
  if ( v13 )
  {
    result = (unsigned int *)(v13 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(result);
      while ( __strex(v14 + 1, result) );
      v13 = v18;
      if ( !v18 )
        return result;
    }
    else
      ++*result;
    v15 = (unsigned int *)(v13 + 4);
        result = (unsigned int *)__ldrex(v15);
      while ( __strex((unsigned int)result - 1, v15) );
      result = (unsigned int *)(*v15)--;
    if ( result == (unsigned int *)1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (unsigned int *)__ldrex(v16);
        while ( __strex((unsigned int)result - 1, v16) );
      }
      else
        result = (unsigned int *)(*v16)--;
      if ( result == (unsigned int *)1 )
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  }
  return result;
}
