

void __fastcall Common::getGameSemVerString(Common *this)
{
  Common::getGameSemVerString(this);
}


void __fastcall Common::getGameVersionString(Common *this)
{
  Common *v1; // r4@1
  const void **v2; // r0@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  Common::getGameVersionStringNet((Common *)&v6);
  v2 = sub_21E82D8((const void **)&v6, 0, (unsigned int)"v", (_BYTE *)1);
  *(_DWORD *)v1 = *v2;
  *v2 = &unk_28898CC;
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall Common::getGameVersionStringNet(Common *this)
{
  Common *v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r5@1
  unsigned int v5; // r2@1
  _DWORD *v6; // r0@4
  __int64 v7; // kr00_8@6
  unsigned int v8; // r1@6
  const void **v9; // r0@8
  _BYTE *v10; // r0@10
  int v11; // r1@10 OVERLAPPED
  int v12; // r5@10
  unsigned int v13; // r2@10
  _DWORD *v14; // r0@13
  __int64 v15; // kr08_8@15
  unsigned int v16; // r1@15
  const void **v17; // r0@17
  void *v18; // r0@19
  void *v19; // r0@20
  char *v20; // r0@21
  char *v21; // r0@22
  void *v22; // r0@23
  char *v23; // r0@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  int v36; // [sp+8h] [bp-38h]@15
  char *v37; // [sp+Ch] [bp-34h]@6
  _BYTE *v38; // [sp+10h] [bp-30h]@1
  unsigned int v39; // [sp+14h] [bp-2Ch]@6
  _BYTE *v40; // [sp+18h] [bp-28h]@10
  unsigned int v41; // [sp+1Ch] [bp-24h]@15
  _BYTE *v42; // [sp+20h] [bp-20h]@1
  char *v43; // [sp+24h] [bp-1Ch]@6

  v1 = this;
  v42 = &unk_28898CC;
  sub_21E810C((const void **)&v42, 0, 0, (_BYTE *)1, 0x31u);
  v2 = v42;
  v38 = v42;
  *(_QWORD *)&v3 = *(_QWORD *)(v42 - 12);
  v4 = v3 + 1;
  if ( v3 + 1 > v5 || *((_DWORD *)v42 - 1) >= 1 )
  {
    sub_21E6FCC((const void **)&v38, v3 + 1);
    v2 = v38;
    v3 = *((_DWORD *)v38 - 3);
  }
  v2[v3] = 46;
  v6 = v38;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    *((_DWORD *)v38 - 1) = 0;
    *(v6 - 3) = v4;
    *((_BYTE *)v6 + v4) = byte_26C67B8[0];
    v6 = v38;
  v39 = (unsigned int)v6;
  v38 = &unk_28898CC;
  v43 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v43, 0, 0, (_BYTE *)1, 0x32u);
  v37 = v43;
  v7 = *(_QWORD *)(v39 - 12);
  v8 = *((_DWORD *)v43 - 3) + v7;
  if ( v8 > HIDWORD(v7) && v8 <= *((_DWORD *)v43 - 2) )
    v9 = sub_21E82D8((const void **)&v37, 0, v39, (_BYTE *)v7);
  else
    v9 = sub_21E72F0((const void **)&v39, (const void **)&v37);
  v40 = *v9;
  *v9 = &unk_28898CC;
  v10 = v40;
  *(_QWORD *)&v11 = *(_QWORD *)(v40 - 12);
  v12 = v11 + 1;
  if ( v11 + 1 > v13 || *((_DWORD *)v40 - 1) >= 1 )
    sub_21E6FCC((const void **)&v40, v11 + 1);
    v10 = v40;
    v11 = *((_DWORD *)v40 - 3);
  v10[v11] = 46;
  v14 = v40;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    *((_DWORD *)v40 - 1) = 0;
    *(v14 - 3) = v12;
    *((_BYTE *)v14 + v12) = byte_26C67B8[0];
    v14 = v40;
  v41 = (unsigned int)v14;
  v40 = &unk_28898CC;
  sub_21E94B4((void **)&v36, "0");
  v15 = *(_QWORD *)(v41 - 12);
  v16 = *(_DWORD *)(v36 - 12) + v15;
  if ( v16 > HIDWORD(v15) && v16 <= *(_DWORD *)(v36 - 8) )
    v17 = sub_21E82D8((const void **)&v36, 0, v41, (_BYTE *)v15);
    v17 = sub_21E72F0((const void **)&v41, (const void **)&v36);
  *(_DWORD *)v1 = *v17;
  *v17 = &unk_28898CC;
  v18 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v41 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v40 - 12;
    v28 = (unsigned int *)(v40 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v39 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v38 - 12;
    v34 = (unsigned int *)(v38 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


void __fastcall Common::getGameSemVerString(Common *this)
{
  Common *v1; // r4@1
  _BYTE *v2; // r0@1
  int v3; // r1@1 OVERLAPPED
  int v4; // r5@1
  unsigned int v5; // r2@1
  _DWORD *v6; // r0@4
  __int64 v7; // kr00_8@6
  unsigned int v8; // r1@6
  const void **v9; // r0@8
  _BYTE *v10; // r0@10
  int v11; // r1@10 OVERLAPPED
  int v12; // r5@10
  unsigned int v13; // r2@10
  _DWORD *v14; // r0@13
  __int64 v15; // kr08_8@15
  unsigned int v16; // r1@15
  const void **v17; // r0@17
  void *v18; // r0@19
  void *v19; // r0@20
  char *v20; // r0@21
  char *v21; // r0@22
  void *v22; // r0@23
  char *v23; // r0@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  unsigned int *v34; // r2@46
  signed int v35; // r1@48
  int v36; // [sp+8h] [bp-38h]@15
  char *v37; // [sp+Ch] [bp-34h]@6
  _BYTE *v38; // [sp+10h] [bp-30h]@1
  unsigned int v39; // [sp+14h] [bp-2Ch]@6
  _BYTE *v40; // [sp+18h] [bp-28h]@10
  unsigned int v41; // [sp+1Ch] [bp-24h]@15
  _BYTE *v42; // [sp+20h] [bp-20h]@1
  char *v43; // [sp+24h] [bp-1Ch]@6

  v1 = this;
  v42 = &unk_28898CC;
  sub_21E810C((const void **)&v42, 0, 0, (_BYTE *)1, 0x31u);
  v2 = v42;
  v38 = v42;
  *(_QWORD *)&v3 = *(_QWORD *)(v42 - 12);
  v4 = v3 + 1;
  if ( v3 + 1 > v5 || *((_DWORD *)v42 - 1) >= 1 )
  {
    sub_21E6FCC((const void **)&v38, v3 + 1);
    v2 = v38;
    v3 = *((_DWORD *)v38 - 3);
  }
  v2[v3] = 46;
  v6 = v38;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    *((_DWORD *)v38 - 1) = 0;
    *(v6 - 3) = v4;
    *((_BYTE *)v6 + v4) = byte_26C67B8[0];
    v6 = v38;
  v39 = (unsigned int)v6;
  v38 = &unk_28898CC;
  v43 = (char *)&unk_28898CC;
  sub_21E810C((const void **)&v43, 0, 0, (_BYTE *)1, 0x32u);
  v37 = v43;
  v7 = *(_QWORD *)(v39 - 12);
  v8 = *((_DWORD *)v43 - 3) + v7;
  if ( v8 > HIDWORD(v7) && v8 <= *((_DWORD *)v43 - 2) )
    v9 = sub_21E82D8((const void **)&v37, 0, v39, (_BYTE *)v7);
  else
    v9 = sub_21E72F0((const void **)&v39, (const void **)&v37);
  v40 = *v9;
  *v9 = &unk_28898CC;
  v10 = v40;
  *(_QWORD *)&v11 = *(_QWORD *)(v40 - 12);
  v12 = v11 + 1;
  if ( v11 + 1 > v13 || *((_DWORD *)v40 - 1) >= 1 )
    sub_21E6FCC((const void **)&v40, v11 + 1);
    v10 = v40;
    v11 = *((_DWORD *)v40 - 3);
  v10[v11] = 46;
  v14 = v40;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    *((_DWORD *)v40 - 1) = 0;
    *(v14 - 3) = v12;
    *((_BYTE *)v14 + v12) = byte_26C67B8[0];
    v14 = v40;
  v41 = (unsigned int)v14;
  v40 = &unk_28898CC;
  sub_21E94B4((void **)&v36, "0");
  v15 = *(_QWORD *)(v41 - 12);
  v16 = *(_DWORD *)(v36 - 12) + v15;
  if ( v16 > HIDWORD(v15) && v16 <= *(_DWORD *)(v36 - 8) )
    v17 = sub_21E82D8((const void **)&v36, 0, v41, (_BYTE *)v15);
    v17 = sub_21E72F0((const void **)&v41, (const void **)&v36);
  *(_DWORD *)v1 = *v17;
  *v17 = &unk_28898CC;
  v18 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v41 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v40 - 12;
    v28 = (unsigned int *)(v40 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v39 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = v38 - 12;
    v34 = (unsigned int *)(v38 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


void __fastcall Common::getGameVersionStringNet(Common *this)
{
  Common::getGameVersionStringNet(this);
}


void __fastcall Common::getGameVersionString(Common *this)
{
  Common::getGameVersionString(this);
}
