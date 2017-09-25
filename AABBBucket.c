

unsigned int __fastcall AABBBucket::mergeAABBs(AABBBucket *this)
{
  int v1; // r1@1
  int v2; // r4@1
  unsigned int result; // r0@2
  unsigned int v8; // r5@4
  int v9; // r6@5
  int v10; // r7@5
  _BYTE *v11; // r7@5
  int v12; // t1@5
  unsigned int v14; // r9@7
  int v15; // r8@8
  _BYTE *v16; // r11@10
  int v19; // r1@15
  int v20; // r2@15
  int v21; // r3@15
  char v22; // r12@15
  __int64 v23; // kr18_8@15
  int v24; // r2@15
  int v25; // r1@15
  int v26; // t1@15
  signed int v27; // [sp+4h] [bp-64h]@4
  int v28; // [sp+Ch] [bp-5Ch]@8
  AABBBucket *v29; // [sp+10h] [bp-58h]@1
  char v30; // [sp+14h] [bp-54h]@10
  int v31; // [sp+18h] [bp-50h]@15
  int v32; // [sp+1Ch] [bp-4Ch]@15
  int v33; // [sp+20h] [bp-48h]@15
  __int64 v34; // [sp+24h] [bp-44h]@15
  char v35; // [sp+2Ch] [bp-3Ch]@15

  v29 = this;
  v1 = *((_QWORD *)this + 4) >> 32;
  v2 = *((_QWORD *)this + 4);
  __asm { VLDR            S16, =1.1921e-7 }
  do
  {
    result = (v1 - v2) >> 5;
    if ( result < 2 || v1 == v2 )
      break;
    v8 = 0;
    v27 = 0;
    do
    {
      v9 = v2 + 32 * v8;
      v10 = v2 + 32 * v8;
      v12 = *(_BYTE *)(v10 + 28);
      v11 = (_BYTE *)(v10 + 28);
      if ( v12 )
      {
        ++v8;
        continue;
      }
      _R0 = j_AABB::getVolume((AABB *)(v2 + 32 * v8));
      v14 = v8 + 1;
      v1 = *((_QWORD *)v29 + 4) >> 32;
      v2 = *((_QWORD *)v29 + 4);
      if ( v8 + 1 >= (v1 - v2) >> 5 )
      __asm { VMOV            S0, R0 }
      v15 = 32 * v8 + 60;
      __asm { VADD.F32        S18, S0, S16 }
      v28 = v8 + 1;
      while ( *(_BYTE *)(v2 + v15) )
LABEL_12:
        ++v14;
        v15 += 32;
        if ( v14 >= (v1 - v2) >> 5 )
          goto LABEL_16;
      v16 = (_BYTE *)(v2 + v15);
      j_AABB::merge((AABB *)&v30, (const AABB *)v9, v2 + v15 - 28);
      _R5 = j_AABB::getVolume((AABB *)&v30);
      _R0 = j_AABB::getVolume((AABB *)(v2 + v15 - 28));
      __asm
        VMOV            S0, R0
        VMOV            S2, R5
        VADD.F32        S0, S18, S0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v1 = *((_QWORD *)v29 + 4) >> 32;
        v2 = *((_QWORD *)v29 + 4);
        goto LABEL_12;
      v19 = v31;
      v20 = v32;
      v21 = v33;
      v22 = v35;
      v23 = v34;
      *(_DWORD *)v9 = *(_DWORD *)&v30;
      *(_DWORD *)(v9 + 4) = v19;
      *(_DWORD *)(v9 + 8) = v20;
      *(_DWORD *)(v9 + 12) = v21;
      *(_DWORD *)(v9 + 16) = v23;
      v24 = v2 + 32 * v14;
      *(_DWORD *)(v9 + 20) = HIDWORD(v23);
      *(_BYTE *)(v9 + 24) = v22;
      *v11 = 0;
      v25 = *((_DWORD *)v29 + 9);
      v26 = *(_DWORD *)(v25 - 32);
      v1 = v25 - 32;
      *((_DWORD *)v16 - 7) = v26;
      *(_DWORD *)(v24 + 4) = *(_DWORD *)(v1 + 4);
      *(_DWORD *)(v24 + 8) = *(_DWORD *)(v1 + 8);
      *(_DWORD *)(v24 + 12) = *(_DWORD *)(v1 + 12);
      *(_DWORD *)(v24 + 16) = *(_DWORD *)(v1 + 16);
      *(_DWORD *)(v24 + 20) = *(_DWORD *)(v1 + 20);
      *(_BYTE *)(v24 + 24) = *(_BYTE *)(v1 + 24);
      *v16 = *(_BYTE *)(v1 + 28);
      *((_DWORD *)v29 + 9) = v1;
      v2 = *((_DWORD *)v29 + 8);
      v27 = 1;
LABEL_16:
      v8 = v28;
    }
    while ( v8 < (v1 - v2) >> 5 );
    result = v27;
  }
  while ( v27 & 1 );
  return result;
}


int __fastcall AABBBucket::AABBBucket(AABB *a1)
{
  int result; // r0@1

  result = j_AABB::AABB(a1);
  *(_WORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  return result;
}


int __fastcall AABBBucket::markDirty(int result)
{
  *(_BYTE *)(result + 44) = 1;
  return result;
}


int __fastcall AABBBucket::clearNeedsFinalize(int result)
{
  *(_BYTE *)(result + 45) = 0;
  return result;
}


int __fastcall AABBBucket::clearDirty(int result)
{
  *(_BYTE *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


signed int __fastcall AABBBucket::isDirty(AABBBucket *this)
{
  AABBBucket *v1; // r1@1
  signed int v2; // r0@1
  signed int result; // r0@2

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  *((_DWORD *)v1 + 7) = v2 + 1;
  if ( v2 <= 4 )
  {
    result = *((_BYTE *)v1 + 44);
    if ( *((_BYTE *)v1 + 44) )
      result = 1;
  }
  else
    *((_DWORD *)v1 + 7) = 0;
    result = 1;
    *((_BYTE *)v1 + 44) = 1;
  return result;
}
