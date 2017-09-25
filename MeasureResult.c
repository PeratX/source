

float __fastcall MeasureResult::MeasureResult(float a1, int *a2, int a3, int a4, int a5)
{
  int *v5; // r4@1
  int v6; // r6@1
  float v7; // r5@1
  __int64 v8; // r0@1
  float result; // r0@1

  v5 = a2;
  v6 = a3;
  v7 = a1;
  sub_119C884((void **)LODWORD(a1), (const char *)&unk_257BC67);
  *(_DWORD *)(LODWORD(v7) + 16) = 0;
  *(_DWORD *)(LODWORD(v7) + 20) = 0;
  *(_DWORD *)(LODWORD(v7) + 24) = 0;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  *(_DWORD *)(LODWORD(v7) + 8) = 0;
  *(_DWORD *)(LODWORD(v7) + 12) = 0;
  EntityInteraction::setInteractText((int *)LODWORD(v7), v5);
  *(_DWORD *)(LODWORD(v7) + 4) = *(_DWORD *)v6;
  *(_DWORD *)(LODWORD(v7) + 8) = *(_DWORD *)(v6 + 4);
  LODWORD(v8) = LODWORD(v7) + 12;
  std::vector<int,std::allocator<int>>::operator=(v8);
  __asm { VLDR            S0, [SP,#0x20+arg_0] }
  result = v7;
  __asm { VSTR            S0, [R5,#0x18] }
  return result;
}
