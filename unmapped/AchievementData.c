

signed int __fastcall AchievementData::achievementComparisonForSorting(AchievementData *this, const AchievementData *a2, const AchievementData *a3)
{
  __int64 v8; // kr00_8@5
  signed int v9; // r5@5
  __int64 v10; // kr08_8@5
  signed int v11; // r2@5
  signed int result; // r0@14
  int v13; // [sp+0h] [bp-18h]@13
  char v14; // [sp+4h] [bp-14h]@13

  _R4 = (unsigned int *)a2;
  __asm
  {
    VLDR            S2, [R0,#0x20]
    VLDR            S0, [R4,#0x20]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    goto LABEL_18;
  if ( !_ZF )
    goto LABEL_19;
  v8 = *((_QWORD *)a2 + 5);
  v9 = 0;
  v10 = *((_QWORD *)this + 5);
  v11 = 0;
  if ( (unsigned int)v10 > (unsigned int)v8 )
    v9 = 1;
  if ( SHIDWORD(v10) > SHIDWORD(v8) )
    v11 = 1;
  if ( HIDWORD(v10) == HIDWORD(v8) )
    v11 = v9;
  if ( v11
    || v10 == v8
    && (Util::toInt<int,(void *)0>((unsigned int *)this, &v14),
        Util::toInt<int,(void *)0>(_R4, &v13),
        *(_DWORD *)&v14 > v13) )
LABEL_18:
    result = 1;
  else
LABEL_19:
    result = 0;
  return result;
}


int *__fastcall AchievementData::AchievementData(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r9@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r4@1
  int v9; // r5@1
  int v10; // r6@1
  int v11; // r7@1
  int *result; // r0@1

  v2 = a2;
  v3 = a1;
  sub_119C854(a1, a2);
  sub_119C854(v3 + 1, v2 + 1);
  sub_119C854(v3 + 2, v2 + 2);
  sub_119C854(v3 + 3, v2 + 3);
  v3[4] = v2[4];
  sub_119C854(v3 + 5, v2 + 5);
  v4 = (int)(v2 + 6);
  v5 = (int)(v3 + 6);
  v6 = v2[6];
  v7 = v2[7];
  v8 = v2[8];
  v9 = v2[9];
  v10 = *(_DWORD *)(v4 + 16);
  v11 = *(_DWORD *)(v4 + 20);
  result = v3;
  *(_DWORD *)v5 = v6;
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  *(_DWORD *)(v5 + 16) = v10;
  *(_DWORD *)(v5 + 20) = v11;
  return result;
}


AchievementData *__fastcall AchievementData::~AchievementData(AchievementData *this)
{
  AchievementData *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int *v10; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 5);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 2);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 1);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v8 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return v1;
}
