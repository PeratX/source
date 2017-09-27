

void __fastcall LegacyPackIdVersion::getUpgradedPackId(LegacyPackIdVersion *this, int *a2)
{
  LegacyPackIdVersion *v2; // r4@1
  int *v3; // r6@1
  bool v4; // zf@1
  int *v5; // r0@7
  int *v6; // r7@7
  int *v7; // r9@7
  int *v8; // r8@7
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  __int16 *v13; // r6@11
  void *v14; // r0@11
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int v17; // r1@17
  __int64 v18; // r2@17
  __int16 v19; // r1@17
  int v20; // r1@17
  void *v21; // r0@17
  void *v22; // r0@18
  void *v23; // r0@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@37
  signed int v33; // r1@39
  unsigned int *v34; // r2@41
  signed int v35; // r1@43
  unsigned int *v36; // r2@45
  signed int v37; // r1@47
  int v38; // [sp+14h] [bp-7Ch]@7
  int v39; // [sp+1Ch] [bp-74h]@7
  int v40; // [sp+20h] [bp-70h]@7
  __int16 v41; // [sp+24h] [bp-6Ch]@7
  int v42; // [sp+28h] [bp-68h]@7
  int v43; // [sp+2Ch] [bp-64h]@7
  int v44; // [sp+30h] [bp-60h]@7
  __int16 v45; // [sp+34h] [bp-5Ch]@7
  char v46; // [sp+36h] [bp-5Ah]@7
  int v47; // [sp+38h] [bp-58h]@6
  __int16 v48; // [sp+3Ch] [bp-54h]@7
  int v49; // [sp+40h] [bp-50h]@7
  int v50; // [sp+44h] [bp-4Ch]@7
  int v51; // [sp+48h] [bp-48h]@7
  __int16 v52; // [sp+4Ch] [bp-44h]@7
  char v53; // [sp+4Eh] [bp-42h]@7
  __int64 v54; // [sp+50h] [bp-40h]@5
  __int64 v55; // [sp+58h] [bp-38h]@5
  __int64 v56; // [sp+60h] [bp-30h]@1
  __int64 v57; // [sp+68h] [bp-28h]@2

  v2 = this;
  v3 = a2;
  j_mce::UUID::fromString((int)&v56, a2);
  v4 = v56 == 0;
  if ( !v56 )
    v4 = v57 == 0;
  if ( v4 )
  {
    j_mce::UUID::seedFromString((Crypto::Hash::Hash *)&v54, (const void **)v3);
    v56 = v54;
    v57 = v55;
  }
  j_SemVersion::SemVersion((SemVersion *)&v47);
  if ( j_SemVersion::fromString((const void **)v3 + 1, (int)&v47) == 2 )
    sub_21E94B4((void **)&v39, (const char *)&unk_257BC67);
    v5 = (int *)sub_21E94B4((void **)&v38, (const char *)&unk_257BC67);
    j_SemVersion::SemVersion((int)&v40, 1, 0, 0, &v39, v5, 0);
    v6 = &v49;
    v48 = v41;
    v47 = v40;
    EntityInteraction::setInteractText(&v49, &v42);
    v7 = &v50;
    EntityInteraction::setInteractText(&v50, &v43);
    v8 = &v51;
    EntityInteraction::setInteractText(&v51, &v44);
    v53 = v46;
    v52 = v45;
    v9 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
    {
      v30 = (unsigned int *)(v44 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v43 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v42 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v38 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = &v52;
    v14 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v39 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  else
  v17 = HIDWORD(v56);
  v18 = v57;
  *(_DWORD *)v2 = v56;
  *((_DWORD *)v2 + 1) = v17;
  *((_QWORD *)v2 + 1) = v18;
  *((_WORD *)v2 + 10) = v48;
  *((_DWORD *)v2 + 4) = v47;
  sub_21E8AF4((int *)v2 + 6, v6);
  sub_21E8AF4((int *)v2 + 7, v7);
  sub_21E8AF4((int *)v2 + 8, v8);
  v19 = *v13;
  *((_BYTE *)v2 + 38) = *((_BYTE *)v13 + 2);
  *((_WORD *)v2 + 18) = v19;
  v20 = v51;
  *((_BYTE *)v2 + 40) = 0;
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v50 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v49 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


int *__fastcall LegacyPackIdVersion::LegacyPackIdVersion(int *a1, int *a2, int *a3)
{
  int *v3; // r4@1
  int *v4; // r5@1

  v3 = a3;
  v4 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v4 + 1, v3);
  return v4;
}


void __fastcall LegacyPackIdVersion::getUpgradedPackId(LegacyPackIdVersion *this, int *a2)
{
  LegacyPackIdVersion::getUpgradedPackId(this, a2);
}
