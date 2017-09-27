

int __fastcall ParticleRenderContext::ParticleRenderContext(int result, int a2, int a3, int a4, int a5)
{
  *(_DWORD *)result = a2;
  __asm { VLDR            S0, [SP,#arg_0] }
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = a4;
  __asm { VSTR            S0, [R0,#0x10] }
  *(_DWORD *)(result + 20) = *(_DWORD *)(a2 + 8);
  return result;
}
