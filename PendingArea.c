

int __fastcall PendingArea::PendingArea(int result, int a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)result = a3;
  *(_QWORD *)(result + 8) = a5;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_QWORD *)(result + 24) = a6;
  *(_DWORD *)(result + 32) = *(_DWORD *)a7;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a7 + 8);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a7 + 12);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a7 + 16);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a7 + 20);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a7 + 24);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a7 + 28);
  *(_DWORD *)(result + 64) = *(_DWORD *)(a7 + 32);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a7 + 36);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a7 + 40);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a7 + 44);
  *(_DWORD *)(result + 80) = 0;
  *(_WORD *)(result + 84) = 257;
  *(_BYTE *)(result + 86) = 0;
  return result;
}


void __fastcall PendingArea::serialize(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r8@1
  void *v6; // r0@1
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int v12; // r4@8
  int v13; // r6@8
  int v14; // r7@8
  void *v15; // r0@8
  void *v16; // r0@9
  int v17; // r4@10
  int v18; // r6@10
  int v19; // r5@10
  void *v20; // r0@10
  void *v21; // r0@11
  unsigned int *v22; // r2@13
  signed int v23; // r1@15
  unsigned int *v24; // r2@17
  signed int v25; // r1@19
  unsigned int *v26; // r2@21
  signed int v27; // r1@23
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  unsigned int *v30; // r2@29
  signed int v31; // r1@31
  unsigned int *v32; // r2@33
  signed int v33; // r1@35
  unsigned int *v34; // r2@37
  signed int v35; // r1@39
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  unsigned int *v38; // r2@45
  signed int v39; // r1@47
  unsigned int *v40; // r2@49
  signed int v41; // r1@51
  int v42; // [sp+8h] [bp-68h]@11
  int v43; // [sp+10h] [bp-60h]@10
  int v44; // [sp+18h] [bp-58h]@9
  int v45; // [sp+20h] [bp-50h]@8
  int v46; // [sp+28h] [bp-48h]@7
  int v47; // [sp+30h] [bp-40h]@6
  int v48; // [sp+38h] [bp-38h]@5
  int v49; // [sp+40h] [bp-30h]@4
  int v50; // [sp+48h] [bp-28h]@3
  int v51; // [sp+50h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_CompoundTag::CompoundTag(a1);
  sub_21E94B4((void **)&v51, "Dimension");
  j_CompoundTag::putInt(v5, (const void **)&v51, v3);
  v6 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v51 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( (*(_DWORD *)(v4 + 24) & *(_DWORD *)(v4 + 28)) != -1 )
    sub_21E94B4((void **)&v50, "EntityId");
    j_CompoundTag::putInt64(v5, (const void **)&v50, *(_QWORD *)(v4 + 24), *(_QWORD *)(v4 + 24) >> 32);
    v7 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      }
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v49, "IsAlwaysActive");
    j_CompoundTag::putBoolean(v5, (const void **)&v49, *(_BYTE *)(v4 + 85));
    v8 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v49 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v48, "MaxDistToPlayers");
    j_CompoundTag::putFloat(v5, (const void **)&v48, *(_DWORD *)(v4 + 80));
    v9 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v48 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v47, "Name");
  j_CompoundTag::putString(v5, (const void **)&v47, (int *)(v4 + 16));
  v10 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v47 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v46, "IsCircle");
  j_CompoundTag::putBoolean(v5, (const void **)&v46, *(_BYTE *)(v4 + 84));
  v11 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v46 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *(_DWORD *)(v4 + 32);
  v13 = *(_DWORD *)(v4 + 40);
  v14 = *(_DWORD *)(v4 + 76);
  sub_21E94B4((void **)&v45, "MinX");
  j_CompoundTag::putInt(v5, (const void **)&v45, v12 * v14);
  v15 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v45 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v44, "MinZ");
  j_CompoundTag::putInt(v5, (const void **)&v44, v13 * v14);
  v16 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v44 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *(_DWORD *)(v4 + 44);
  v18 = *(_DWORD *)(v4 + 52);
  v19 = *(_DWORD *)(v4 + 76);
  sub_21E94B4((void **)&v43, "MaxX");
  j_CompoundTag::putInt(v5, (const void **)&v43, v17 * v19);
  v20 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v42, "MaxZ");
  j_CompoundTag::putInt(v5, (const void **)&v42, v18 * v19);
  v21 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


int __fastcall PendingArea::PendingArea(int result, int a2, int a3, int a4, int a5, float a6, __int64 a7, int a8, int a9)
{
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)result = a3;
  *(_QWORD *)(result + 8) = __PAIR__(LODWORD(a6), a5);
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_QWORD *)(result + 24) = a7;
  *(_DWORD *)(result + 32) = *(_DWORD *)a8;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a8 + 4);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a8 + 8);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a8 + 12);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a8 + 16);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a8 + 20);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a8 + 24);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a8 + 28);
  *(_DWORD *)(result + 64) = *(_DWORD *)(a8 + 32);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a8 + 36);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a8 + 40);
  __asm { VLDR            S0, [SP,#0x10+arg_14] }
  *(_DWORD *)(result + 76) = *(_DWORD *)(a8 + 44);
  __asm { VSTR            S0, [R0,#0x50] }
  *(_WORD *)(result + 84) = 1;
  *(_BYTE *)(result + 86) = 0;
  return result;
}


int __fastcall PendingArea::PendingArea(int a1, int a2, int a3, int a4, __int64 a5, int *a6, int a7, char a8)
{
  int v8; // r4@1

  v8 = a1;
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a4;
  *(_QWORD *)(a1 + 8) = a5;
  sub_21E8AF4((int *)(a1 + 16), a6);
  *(_DWORD *)(v8 + 24) = -1;
  *(_DWORD *)(v8 + 28) = -1;
  *(_DWORD *)(v8 + 32) = *(_DWORD *)a7;
  *(_DWORD *)(v8 + 36) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(a7 + 8);
  *(_DWORD *)(v8 + 44) = *(_DWORD *)(a7 + 12);
  *(_DWORD *)(v8 + 48) = *(_DWORD *)(a7 + 16);
  *(_DWORD *)(v8 + 52) = *(_DWORD *)(a7 + 20);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(a7 + 24);
  *(_DWORD *)(v8 + 60) = *(_DWORD *)(a7 + 28);
  *(_DWORD *)(v8 + 64) = *(_DWORD *)(a7 + 32);
  *(_DWORD *)(v8 + 68) = *(_DWORD *)(a7 + 36);
  *(_DWORD *)(v8 + 72) = *(_DWORD *)(a7 + 40);
  *(_DWORD *)(v8 + 76) = *(_DWORD *)(a7 + 44);
  *(_DWORD *)(v8 + 80) = 0;
  *(_BYTE *)(v8 + 84) = a8;
  *(_BYTE *)(v8 + 85) = 1;
  *(_BYTE *)(v8 + 86) = 0;
  return v8;
}


void __fastcall PendingArea::load(int a1, int *a2, int a3)
{
  PendingArea::load(a1, a2, a3);
}


int __fastcall PendingArea::createEntityTickingArea(int result, int a2, int a3, int a4, int a5, int a6, __int64 a7, int a8, char a9, int a10)
{
  *(_DWORD *)(result + 4) = a4;
  *(_DWORD *)result = a3;
  *(_QWORD *)(result + 8) = __PAIR__(a6, a5);
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_QWORD *)(result + 24) = a7;
  *(_DWORD *)(result + 32) = *(_DWORD *)a8;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a8 + 4);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a8 + 8);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a8 + 12);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a8 + 16);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a8 + 20);
  *(_DWORD *)(result + 56) = *(_DWORD *)(a8 + 24);
  *(_DWORD *)(result + 60) = *(_DWORD *)(a8 + 28);
  __asm
  {
    VLDR            S2, =0.0
    VLDR            S0, [SP,#0x10+arg_18]
  }
  if ( !_ZF )
    __asm { VMOVNE.F32      S0, S2 }
  *(_DWORD *)(result + 64) = *(_DWORD *)(a8 + 32);
  *(_DWORD *)(result + 68) = *(_DWORD *)(a8 + 36);
  *(_DWORD *)(result + 72) = *(_DWORD *)(a8 + 40);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a8 + 44);
  __asm { VSTR            S0, [R0,#0x50] }
  *(_BYTE *)(result + 84) = 1;
  *(_BYTE *)(result + 85) = a9;
  *(_BYTE *)(result + 86) = 0;
  return result;
}


void __fastcall PendingArea::load(int a1, int *a2, int a3)
{
  int *v3; // r10@1
  int v4; // r5@1
  int v5; // r4@1
  int *v6; // r0@1
  void *v7; // r0@1
  char v8; // r8@2
  void *v9; // r0@2
  int v10; // r11@3
  void *v11; // r0@3
  int v12; // r9@4
  void *v13; // r0@4
  int v14; // r6@5
  void *v15; // r0@5
  void *v16; // r0@6
  signed int v17; // r7@7
  signed int v18; // r9@7
  void *v19; // r0@7
  signed int v20; // r8@9
  int *v21; // r11@9
  _BOOL4 v22; // r10@9
  void *v23; // r0@9
  void *v25; // r0@10
  __int64 v26; // r0@11
  int v31; // r6@11
  __int64 v32; // kr00_8@11
  int v33; // r1@13
  int v34; // r7@13
  int v35; // r1@13
  void *v36; // r0@13
  unsigned int *v37; // r2@14
  signed int v38; // r1@16
  int v39; // r1@18
  int v40; // r2@18
  int v41; // r3@18
  int v42; // r1@18
  int v43; // r3@18
  void *v44; // r0@19
  unsigned int *v45; // r2@21
  signed int v46; // r1@23
  unsigned int *v47; // r2@25
  signed int v48; // r1@27
  unsigned int *v49; // r2@29
  signed int v50; // r1@31
  unsigned int *v51; // r2@33
  signed int v52; // r1@35
  unsigned int *v53; // r2@37
  signed int v54; // r1@39
  unsigned int *v55; // r2@41
  signed int v56; // r1@43
  unsigned int *v57; // r2@45
  signed int v58; // r1@47
  unsigned int *v59; // r2@49
  signed int v60; // r1@51
  unsigned int *v61; // r2@81
  signed int v62; // r1@83
  unsigned int *v63; // r2@85
  signed int v64; // r1@87
  signed int v65; // [sp+0h] [bp-A8h]@7
  int v66; // [sp+4h] [bp-A4h]@6
  char v67; // [sp+8h] [bp-A0h]@18
  int v68; // [sp+Ch] [bp-9Ch]@18
  int v69; // [sp+10h] [bp-98h]@18
  int v70; // [sp+14h] [bp-94h]@18
  int v71; // [sp+1Ch] [bp-8Ch]@11
  int v72; // [sp+20h] [bp-88h]@11
  int v73; // [sp+24h] [bp-84h]@11
  __int64 v74; // [sp+28h] [bp-80h]@11
  int v75; // [sp+38h] [bp-70h]@10
  int v76; // [sp+40h] [bp-68h]@9
  int v77; // [sp+48h] [bp-60h]@7
  int v78; // [sp+50h] [bp-58h]@6
  int v79; // [sp+58h] [bp-50h]@5
  int v80; // [sp+60h] [bp-48h]@4
  int v81; // [sp+68h] [bp-40h]@3
  int v82; // [sp+70h] [bp-38h]@2
  int v83; // [sp+78h] [bp-30h]@1
  int v84; // [sp+7Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v83, "Name");
  v6 = (int *)j_CompoundTag::getString(v4, (const void **)&v83);
  sub_21E8AF4(&v84, v6);
  v7 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
  {
    v45 = (unsigned int *)(v83 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
    }
    else
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v82, "IsCircle");
  v8 = j_CompoundTag::getBoolean(v4, (const void **)&v82);
  v9 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v82 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v81, "MinX");
  v10 = j_CompoundTag::getInt(v4, (const void **)&v81);
  v11 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v81 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v80, "MinZ");
  v12 = j_CompoundTag::getInt(v4, (const void **)&v80);
  v13 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v80 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v79, "MaxX");
  v14 = j_CompoundTag::getInt(v4, (const void **)&v79);
  v15 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v79 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v78, "MaxZ");
  v66 = j_CompoundTag::getInt(v4, (const void **)&v78);
  v16 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v78 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v77, "EntityId");
  v65 = v12;
  v17 = j_CompoundTag::contains(v4, (const void **)&v77, 4);
  v18 = v14;
  v19 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v77 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v17 == 1 )
    v20 = v10;
    v21 = v3;
    sub_21E94B4((void **)&v76, "IsAlwaysActive");
    v22 = j_CompoundTag::getBoolean(v4, (const void **)&v76);
    v23 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v76 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
      }
      else
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v75, "MaxDistToPlayers");
    _R6 = j_CompoundTag::getFloat(v4, (const void **)&v75);
    v25 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v75 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    j_mce::UUID::fromString((int)&v72, v21);
    sub_21E94B4((void **)&v71, "EntityId");
    v26 = j_CompoundTag::getInt64(v4, (const void **)&v71);
    __asm
      VMOV            S0, R6
      VLDR            S2, =0.0
    v31 = v73;
    v32 = v74;
    if ( v22 )
      __asm { VMOVNE.F32      S0, S2 }
    *(_DWORD *)v5 = v72;
    *(_DWORD *)(v5 + 4) = v31;
    *(_QWORD *)(v5 + 8) = v32;
    *(_DWORD *)(v5 + 16) = &unk_28898CC;
    *(_QWORD *)(v5 + 24) = v26;
    *(_DWORD *)(v5 + 32) = v20 >> 4;
    *(_DWORD *)(v5 + 36) = 0;
    *(_DWORD *)(v5 + 40) = v65 >> 4;
    v33 = (v18 >> 4) - (v20 >> 4) + 1;
    v34 = (v66 >> 4) - (v65 >> 4) + 1;
    *(_DWORD *)(v5 + 44) = v18 >> 4;
    *(_DWORD *)(v5 + 48) = 0;
    *(_DWORD *)(v5 + 52) = v66 >> 4;
    __asm { VSTR            S0, [R4,#0x50] }
    *(_DWORD *)(v5 + 56) = v33;
    *(_DWORD *)(v5 + 60) = 1;
    *(_DWORD *)(v5 + 64) = v34;
    *(_DWORD *)(v5 + 68) = v34 * v33;
    *(_DWORD *)(v5 + 72) = v34 * v33;
    *(_DWORD *)(v5 + 76) = 16;
    v35 = v71;
    *(_BYTE *)(v5 + 84) = 1;
    v36 = (void *)(v35 - 12);
    *(_BYTE *)(v5 + 85) = v22;
    *(_BYTE *)(v5 + 86) = 0;
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v35 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
  else
    j_mce::UUID::fromString((int)&v67, v3);
    v39 = v68;
    v40 = v69;
    v41 = v70;
    *(_DWORD *)v5 = *(_DWORD *)&v67;
    *(_DWORD *)(v5 + 4) = v39;
    *(_DWORD *)(v5 + 8) = v40;
    *(_DWORD *)(v5 + 12) = v41;
    sub_21E8AF4((int *)(v5 + 16), &v84);
    v42 = (v14 >> 4) - (v10 >> 4) + 1;
    v43 = (v66 >> 4) - (v65 >> 4) + 1;
    *(_DWORD *)(v5 + 24) = -1;
    *(_DWORD *)(v5 + 28) = -1;
    *(_DWORD *)(v5 + 32) = v10 >> 4;
    *(_DWORD *)(v5 + 44) = v14 >> 4;
    *(_DWORD *)(v5 + 56) = v42;
    *(_DWORD *)(v5 + 64) = v43;
    *(_DWORD *)(v5 + 68) = v43 * v42;
    *(_DWORD *)(v5 + 72) = v43 * v42;
    *(_DWORD *)(v5 + 80) = 0;
    *(_BYTE *)(v5 + 84) = v8;
    *(_BYTE *)(v5 + 85) = 1;
  v44 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v84 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
}


int __fastcall PendingArea::validTag(PendingArea *this, const CompoundTag *a2)
{
  PendingArea *v2; // r4@1
  int v3; // r6@7
  void *v4; // r0@7
  unsigned int *v5; // r12@8
  signed int v6; // r1@10
  void *v7; // r0@18
  void *v8; // r0@19
  void *v9; // r0@20
  void *v10; // r0@21
  void *v11; // r0@22
  void *v12; // r0@23
  int result; // r0@25
  int v14; // r4@28
  void *v15; // r0@28
  unsigned int *v16; // r2@29
  signed int v17; // r1@31
  void *v18; // r0@35
  void *v19; // r0@36
  unsigned int *v20; // r2@38
  signed int v21; // r1@40
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  unsigned int *v24; // r2@50
  signed int v25; // r1@52
  unsigned int *v26; // r2@62
  signed int v27; // r1@64
  unsigned int *v28; // r2@66
  signed int v29; // r1@68
  unsigned int *v30; // r2@78
  signed int v31; // r1@80
  unsigned int *v32; // r12@90
  signed int v33; // r1@92
  unsigned int *v34; // r12@98
  signed int v35; // r1@100
  int v36; // [sp+8h] [bp-60h]@28
  int v37; // [sp+10h] [bp-58h]@27
  int v38; // [sp+18h] [bp-50h]@26
  int v39; // [sp+20h] [bp-48h]@7
  int v40; // [sp+28h] [bp-40h]@6
  int v41; // [sp+30h] [bp-38h]@5
  int v42; // [sp+38h] [bp-30h]@4
  int v43; // [sp+40h] [bp-28h]@3
  int v44; // [sp+48h] [bp-20h]@2
  int v45; // [sp+50h] [bp-18h]@1

  v2 = this;
  sub_21E94B4((void **)&v45, "Dimension");
  if ( j_CompoundTag::contains((int)v2, (const void **)&v45, 3) == 1 )
  {
    sub_21E94B4((void **)&v44, "Name");
    if ( j_CompoundTag::contains((int)v2, (const void **)&v44, 8) == 1 )
    {
      sub_21E94B4((void **)&v43, "IsCircle");
      if ( j_CompoundTag::contains((int)v2, (const void **)&v43, 1) == 1 )
      {
        sub_21E94B4((void **)&v42, "MinX");
        if ( j_CompoundTag::contains((int)v2, (const void **)&v42, 3) == 1 )
        {
          sub_21E94B4((void **)&v41, "MinZ");
          if ( j_CompoundTag::contains((int)v2, (const void **)&v41, 3) == 1 )
          {
            sub_21E94B4((void **)&v40, "MaxX");
            if ( j_CompoundTag::contains((int)v2, (const void **)&v40, 3) == 1 )
            {
              sub_21E94B4((void **)&v39, "MaxZ");
              v3 = j_CompoundTag::contains((int)v2, (const void **)&v39, 3) ^ 1;
              v4 = (void *)(v39 - 12);
              if ( (int *)(v39 - 12) != &dword_28898C0 )
              {
                v5 = (unsigned int *)(v39 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v6 = __ldrex(v5);
                  while ( __strex(v6 - 1, v5) );
                }
                else
                  v6 = (*v5)--;
                if ( v6 <= 0 )
                  j_j_j_j__ZdlPv_9(v4);
              }
            }
            else
              v3 = 1;
            v7 = (void *)(v40 - 12);
            if ( (int *)(v40 - 12) != &dword_28898C0 )
              v34 = (unsigned int *)(v40 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v35 = __ldrex(v34);
                while ( __strex(v35 - 1, v34) );
              else
                v35 = (*v34)--;
              if ( v35 <= 0 )
                j_j_j_j__ZdlPv_9(v7);
          }
          else
            v3 = 1;
          v8 = (void *)(v41 - 12);
          if ( (int *)(v41 - 12) != &dword_28898C0 )
            v32 = (unsigned int *)(v41 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v33 = __ldrex(v32);
              while ( __strex(v33 - 1, v32) );
              v33 = (*v32)--;
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v8);
        }
        else
          v3 = 1;
        v9 = (void *)(v42 - 12);
        if ( (int *)(v42 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v42 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
      }
      else
        v3 = 1;
      v10 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v43 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
    }
    else
      v3 = 1;
    v11 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v44 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  }
  else
    v3 = 1;
  v12 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( v3 )
    result = 0;
    sub_21E94B4((void **)&v38, "EntityId");
    if ( j_CompoundTag::contains((int)v2, (const void **)&v38, 4) == 1 )
      sub_21E94B4((void **)&v37, "IsAlwaysActive");
      if ( j_CompoundTag::contains((int)v2, (const void **)&v37, 1) == 1 )
        sub_21E94B4((void **)&v36, "MaxDistToPlayers");
        v14 = j_CompoundTag::contains((int)v2, (const void **)&v36, 5) ^ 1;
        v15 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v36 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v14 = 1;
      v18 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v37 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v14 = 0;
    v19 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v38 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    result = v14 ^ 1;
  return result;
}


void __fastcall PendingArea::serialize(int a1, int a2, int a3)
{
  PendingArea::serialize(a1, a2, a3);
}


int __fastcall PendingArea::createTickingArea(int a1, int a2, int a3, int a4, __int64 a5, int *a6, int a7, char a8)
{
  int v8; // r4@1
  int result; // r0@1

  v8 = a1;
  *(_DWORD *)a1 = a3;
  *(_DWORD *)(a1 + 4) = a4;
  *(_QWORD *)(a1 + 8) = a5;
  sub_21E8AF4((int *)(a1 + 16), a6);
  *(_DWORD *)(v8 + 24) = -1;
  *(_DWORD *)(v8 + 28) = -1;
  *(_DWORD *)(v8 + 32) = *(_DWORD *)a7;
  *(_DWORD *)(v8 + 36) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(a7 + 8);
  *(_DWORD *)(v8 + 44) = *(_DWORD *)(a7 + 12);
  *(_DWORD *)(v8 + 48) = *(_DWORD *)(a7 + 16);
  *(_DWORD *)(v8 + 52) = *(_DWORD *)(a7 + 20);
  *(_DWORD *)(v8 + 56) = *(_DWORD *)(a7 + 24);
  *(_DWORD *)(v8 + 60) = *(_DWORD *)(a7 + 28);
  *(_DWORD *)(v8 + 64) = *(_DWORD *)(a7 + 32);
  *(_DWORD *)(v8 + 68) = *(_DWORD *)(a7 + 36);
  *(_DWORD *)(v8 + 72) = *(_DWORD *)(a7 + 40);
  *(_DWORD *)(v8 + 76) = *(_DWORD *)(a7 + 44);
  result = 0;
  *(_DWORD *)(v8 + 80) = 0;
  *(_BYTE *)(v8 + 84) = a8;
  *(_BYTE *)(v8 + 85) = 1;
  *(_BYTE *)(v8 + 86) = 0;
  return result;
}
