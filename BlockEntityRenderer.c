

void __fastcall BlockEntityRenderer::~BlockEntityRenderer(BlockEntityRenderer *this)
{
  BlockEntityRenderer::~BlockEntityRenderer(this);
}


void __fastcall BlockEntityRenderer::~BlockEntityRenderer(BlockEntityRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = BaseEntityRenderer::~BaseEntityRenderer(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall BlockEntityRenderer::_renderModel(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1

  v4 = a3;
  v5 = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a3 + 32) = a4;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a3 + 56))(a3, a2);
  *(_DWORD *)(v4 + 32) = v5;
  return result;
}


int __fastcall BlockEntityRenderer::_renderModel(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r5@1
  int v7; // r4@1
  int v8; // r6@1
  int v9; // r8@1
  _BOOL4 v10; // r0@1
  int v11; // r1@1
  int v12; // r4@3
  int result; // r0@5

  v6 = a3;
  v7 = a4;
  v8 = a2;
  v9 = *(_DWORD *)(a3 + 32);
  v10 = mce::TexturePtr::operator bool(a6);
  v11 = a5;
  if ( v10 )
    v7 = a6;
  *(_DWORD *)(v6 + 32) = v7;
  v12 = *(_DWORD *)(v6 + 28);
  if ( !*(_DWORD *)(a5 + 4) )
    v11 = *(_DWORD *)(v6 + 28);
  *(_DWORD *)(v6 + 28) = v11;
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 56))(v6, v8);
  *(_DWORD *)(v6 + 28) = v12;
  *(_DWORD *)(v6 + 32) = v9;
  return result;
}


int __fastcall BlockEntityRenderer::renderText(int a1, int a2, BlockEntity *this, int a4, float a5, float a6)
{
  int v6; // r4@1
  int v7; // r8@1
  BlockEntity *v8; // r6@1
  BaseEntityRenderContext *v9; // r5@1
  int result; // r0@1
  char *v12; // r0@2
  char *v17; // r0@4
  int v18; // [sp+4h] [bp-44h]@4
  signed int v19; // [sp+8h] [bp-40h]@4
  int v20; // [sp+Ch] [bp-3Ch]@4
  float v21; // [sp+14h] [bp-34h]@4

  v6 = a4;
  v7 = a1;
  v8 = this;
  v9 = (BaseEntityRenderContext *)a2;
  result = *(_DWORD *)(*(_DWORD *)a4 - 12);
  if ( result )
  {
    _R7 = BlockEntity::getAABB(this);
    v12 = BaseEntityRenderContext::getCameraTargetPosition(v9);
    result = BlockEntity::distanceToSqr(v8, (const Vec3 *)v12);
    __asm
    {
      VLDR            S0, =1024.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S16, [SP,#0x48+arg_4]
        VLDR            S18, [SP,#0x48+arg_0]
      }
      v17 = BlockEntity::getPosition(v8);
      Vec3::Vec3((int)&v21, (int)v17);
        VLDR            S0, =0.7
        VMOV.F32        S2, #0.5
        VLDR            S6, [R7,#0x10]
        VADD.F32        S0, S18, S0
        VLDR            S4, [R7,#4]
        VADD.F32        S0, S0, S6
        VLDR            S6, [SP,#0x48+var_34]
        VADD.F32        S6, S6, S2
        VSUB.F32        S0, S0, S4
        VSTR            S6, [SP,#0x48+var_34]
        VLDR            S4, [SP,#0x48+var_30]
        VADD.F32        S0, S0, S4
        VSTR            S0, [SP,#0x48+var_30]
        VLDR            S0, [SP,#0x48+var_2C]
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0x48+var_2C]
      v18 = 1065353216;
      v19 = 1065353216;
      v20 = 1065353216;
      __asm { VSTR            S16, [SP,#0x48+var_38] }
      result = BaseEntityRenderer::renderText(v7, v9, v6, (int)&v21, (int)&v18);
  }
  return result;
}
