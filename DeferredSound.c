

int *__fastcall DeferredSound::DeferredSound(float a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r5@1
  int *result; // r0@1
  int *v12; // r12@1
  int v13; // r2@1
  int v14; // r3@1

  v5 = a4;
  v6 = a3;
  result = sub_21E8AF4((int *)LODWORD(a1), a2);
  __asm { VLDR            S0, [SP,#0x10+arg_0] }
  v12 = result + 1;
  v13 = *(_DWORD *)(v6 + 4);
  v14 = *(_DWORD *)(v6 + 8);
  *v12 = *(_DWORD *)v6;
  v12[1] = v13;
  v12[2] = v14;
  v12[3] = v5;
  __asm { VSTR            S0, [R0,#0x14] }
  return result;
}


int __fastcall DeferredSound::DeferredSound(int result)
{
  *(_QWORD *)result = (unsigned int)&unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  return result;
}
