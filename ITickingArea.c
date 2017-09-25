

void __fastcall ITickingArea::serialize(int a1, int a2, int a3)
{
  ITickingArea::serialize(a1, a2, a3);
}


void __fastcall ITickingArea::serialize(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  int v5; // r8@1
  void *v6; // r0@1
  unsigned __int64 *v7; // r0@3
  void *v8; // r0@3
  char v9; // r0@4
  void *v10; // r0@4
  int v11; // r0@5
  void *v12; // r0@5
  int v13; // r6@6
  int *v14; // r0@6
  void *v15; // r0@6
  char v16; // r0@7
  void *v17; // r0@7
  int v18; // r0@8
  int v19; // r5@8
  int v20; // r4@8
  int v21; // r6@8
  int v22; // r7@8
  void *v23; // r0@8
  void *v24; // r0@9
  int v25; // r4@10
  int v26; // r6@10
  int v27; // r5@10
  void *v28; // r0@10
  void *v29; // r0@11
  unsigned int *v30; // r2@13
  signed int v31; // r1@15
  unsigned int *v32; // r2@17
  signed int v33; // r1@19
  unsigned int *v34; // r2@21
  signed int v35; // r1@23
  unsigned int *v36; // r2@25
  signed int v37; // r1@27
  unsigned int *v38; // r2@29
  signed int v39; // r1@31
  unsigned int *v40; // r2@33
  signed int v41; // r1@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@45
  signed int v45; // r1@47
  unsigned int *v46; // r2@49
  signed int v47; // r1@51
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  int v50; // [sp+8h] [bp-68h]@11
  int v51; // [sp+10h] [bp-60h]@10
  int v52; // [sp+18h] [bp-58h]@9
  int v53; // [sp+20h] [bp-50h]@8
  int v54; // [sp+28h] [bp-48h]@7
  int v55; // [sp+30h] [bp-40h]@6
  int v56; // [sp+38h] [bp-38h]@5
  int v57; // [sp+40h] [bp-30h]@4
  int v58; // [sp+48h] [bp-28h]@3
  int v59; // [sp+50h] [bp-20h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  j_CompoundTag::CompoundTag(a1);
  sub_21E94B4((void **)&v59, "Dimension");
  j_CompoundTag::putInt(v5, (const void **)&v59, v3);
  v6 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4) == 1 )
    sub_21E94B4((void **)&v58, "EntityId");
    v7 = (unsigned __int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
    j_CompoundTag::putInt64(v5, (const void **)&v58, *v7, *v7 >> 32);
    v8 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v57, "IsAlwaysActive");
    v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 24))(v4);
    j_CompoundTag::putBoolean(v5, (const void **)&v57, v9);
    v10 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v57 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v56, "MaxDistToPlayers");
    v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 28))(v4);
    j_CompoundTag::putFloat(v5, (const void **)&v56, v11);
    v12 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v56 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
  v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 32))(v4);
  sub_21E94B4((void **)&v55, "Name");
  v14 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  j_CompoundTag::putString(v5, (const void **)&v55, v14);
  v15 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v55 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v54, "IsCircle");
  v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 28))(v13);
  j_CompoundTag::putBoolean(v5, (const void **)&v54, v16);
  v17 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v54 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13);
  v19 = v18;
  v20 = *(_DWORD *)v18;
  v21 = *(_DWORD *)(v18 + 8);
  v22 = *(_DWORD *)(v18 + 44);
  sub_21E94B4((void **)&v53, "MinX");
  j_CompoundTag::putInt(v5, (const void **)&v53, v20 * v22);
  v23 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v53 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v52, "MinZ");
  j_CompoundTag::putInt(v5, (const void **)&v52, v21 * v22);
  v24 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v52 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = *(_DWORD *)(v19 + 12);
  v26 = *(_DWORD *)(v19 + 20);
  v27 = *(_DWORD *)(v19 + 44);
  sub_21E94B4((void **)&v51, "MaxX");
  j_CompoundTag::putInt(v5, (const void **)&v51, v25 * v27);
  v28 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v51 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v50, "MaxZ");
  j_CompoundTag::putInt(v5, (const void **)&v50, v26 * v27);
  v29 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v50 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}
