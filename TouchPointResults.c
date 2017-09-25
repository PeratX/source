

char *__fastcall TouchPointResults::addPointer(float a1, int a2, int a3, int _R3, int a5, int a6, char a7)
{
  int v7; // r7@1
  float v8; // r10@1
  int v9; // r9@1
  signed int v10; // r6@1
  __int64 v11; // kr00_8@1
  char *result; // r0@4
  int v17; // r0@5
  unsigned int v18; // r2@5
  unsigned int v19; // r1@7
  unsigned int v20; // r0@7
  int v21; // r8@12
  char *v22; // r11@12
  _BYTE *v23; // r0@12
  _BYTE *v24; // r12@12
  int v25; // r2@12
  char *v26; // r9@12
  _DWORD *v27; // lr@13
  char *v28; // r2@13
  int v29; // r3@13
  int v30; // r4@13
  int v31; // r5@13
  int v32; // r6@13
  int v33; // r7@13
  __int16 v34; // [sp+5h] [bp-3Bh]@0
  char v35; // [sp+7h] [bp-39h]@0

  v7 = a2;
  v8 = a1;
  v9 = a3;
  v10 = 2;
  v11 = *(_QWORD *)(LODWORD(a1) + 4);
  __asm
  {
    VLDR            S16, [SP,#0x40+arg_0]
    VMOV            S18, R3
  }
  if ( !_ZF )
    v10 = 1;
  if ( (_DWORD)v11 == HIDWORD(v11) )
    v17 = ((signed int)v11 - *(_DWORD *)LODWORD(a1)) >> 3;
    v18 = -1431655765 * v17;
    if ( (_DWORD)v11 == *(_DWORD *)LODWORD(v8) )
      v18 = 1;
    v20 = v18 + -1431655765 * v17;
    v19 = v20;
    if ( v20 > 0xAAAAAAA )
      v20 = 178956970;
    _CF = v19 >= v18;
    LOWORD(v19) = -21845;
    if ( !_CF )
    HIWORD(v19) = 2730;
    if ( v20 >= v19 )
      sub_21E57F4();
    v21 = 3 * v20;
    v22 = (char *)operator new(24 * v20);
    v24 = (_BYTE *)(*(_QWORD *)LODWORD(v8) >> 32);
    v23 = (_BYTE *)*(_QWORD *)LODWORD(v8);
    *(_DWORD *)&v22[v24 - v23] = v7;
    v25 = (int)&v22[v24 - v23];
    *(_DWORD *)(v25 + 4) = v9;
    v26 = v22;
    __asm
    {
      VSTR            S18, [R2,#8]
      VSTR            S16, [R2,#0xC]
    }
    *(_BYTE *)(v25 + 16) = a7;
    *(_BYTE *)(v25 + 19) = v35;
    *(_WORD *)(v25 + 17) = v34;
    *(_DWORD *)(v25 + 20) = v10;
    if ( !_ZF )
      do
      {
        v27 = v23;
        v28 = v26;
        v23 += 24;
        v26 += 24;
        v29 = v27[1];
        v30 = v27[2];
        v31 = v27[3];
        v32 = v27[4];
        v33 = v27[5];
        *(_DWORD *)v28 = *v27;
        *((_DWORD *)v28 + 1) = v29;
        *((_DWORD *)v28 + 2) = v30;
        *((_DWORD *)v28 + 3) = v31;
        *((_DWORD *)v28 + 4) = v32;
        *((_DWORD *)v28 + 5) = v33;
      }
      while ( v24 != v23 );
      v23 = *(_BYTE **)LODWORD(v8);
    if ( v23 )
      operator delete(v23);
    result = &v22[8 * v21];
    *(_DWORD *)LODWORD(v8) = v22;
    *(_DWORD *)(LODWORD(v8) + 4) = v26 + 24;
    *(_DWORD *)(LODWORD(v8) + 8) = result;
  else
    *(_DWORD *)v11 = a2;
    *(_DWORD *)(v11 + 4) = a3;
      VSTR            S18, [R0,#8]
      VSTR            S16, [R0,#0xC]
    *(_BYTE *)(v11 + 16) = a7;
    *(_BYTE *)(v11 + 19) = v35;
    *(_WORD *)(v11 + 17) = v34;
    *(_DWORD *)(v11 + 20) = v10;
    result = (char *)(*(_DWORD *)(LODWORD(a1) + 4) + 24);
    *(_DWORD *)(LODWORD(v8) + 4) = result;
  return result;
}


int __fastcall TouchPointResults::clearPointers(int result)
{
  *(_DWORD *)(result + 4) = *(_DWORD *)result;
  return result;
}
