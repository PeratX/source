

PlayerListEntry *__fastcall PlayerListEntry::~PlayerListEntry(PlayerListEntry *this)
{
  PlayerListEntry *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@6
  int v10; // r1@8
  void *v11; // r0@8
  int v12; // r1@9
  void *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29

  v1 = this;
  v2 = *((_DWORD *)this + 16);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 15);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = *((_DWORD *)v1 + 14);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)*((_DWORD *)v1 + 11);
  if ( v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 8);
  if ( v9 )
    operator delete(v9);
  v10 = *((_DWORD *)v1 + 7);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = *((_DWORD *)v1 + 6);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v12 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v1;
}


const void **__fastcall PlayerListEntry::write(PlayerListEntry *this, BinaryStream *a2)
{
  BinaryStream *v2; // r4@1
  PlayerListEntry *v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r6@2
  int *v6; // r0@2
  char *v7; // r12@2
  int v8; // r2@2
  char v9; // r3@3
  int v10; // r1@3
  char *v11; // r0@7
  __int64 v12; // kr08_8@8
  int v13; // r6@9
  int *v14; // r0@9
  char *v15; // r12@9
  int v16; // r2@9
  char v17; // r3@10
  int v18; // r1@10
  char *v19; // r0@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  char *v25; // [sp+8h] [bp-30h]@14
  char *v26; // [sp+10h] [bp-28h]@7

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<mce::UUID>((int)a2, (_QWORD *)this + 1);
  BinaryStream::writeType<EntityUniqueID>((int)v2, (__int64 *)v3);
  BinaryStream::writeString((int)v2, (char **)v3 + 6);
  BinaryStream::writeString((int)v2, (char **)v3 + 7);
  v4 = *((_QWORD *)v3 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v7 = (char *)&unk_28898CC;
  }
  else
    v5 = HIDWORD(v4) - v4;
    v6 = sub_21E7E80(HIDWORD(v4) - v4, 0);
    v7 = (char *)(v6 + 3);
    v8 = 0;
    do
    {
      v9 = *(_BYTE *)(v4 + v8);
      v10 = HIDWORD(v4) + v8++;
      *(_BYTE *)(v10 + 12) = v9;
    }
    while ( v5 != v8 );
    if ( v6 != &dword_28898C0 )
      v6[2] = 0;
      *v6 = v5;
      v7[v5] = byte_26C67B8[0];
  v26 = v7;
  BinaryStream::writeString((int)v2, &v26);
  v11 = v26 - 12;
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *(_QWORD *)((char *)v3 + 44);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    v15 = (char *)&unk_28898CC;
    v13 = HIDWORD(v12) - v12;
    v14 = sub_21E7E80(HIDWORD(v12) - v12, 0);
    v15 = (char *)(v14 + 3);
    v16 = 0;
      v17 = *(_BYTE *)(v12 + v16);
      v18 = HIDWORD(v12) + v16++;
      *(_BYTE *)(v18 + 12) = v17;
    while ( v13 != v16 );
    if ( v14 != &dword_28898C0 )
      v14[2] = 0;
      *v14 = v13;
      v15[v13] = byte_26C67B8[0];
  v25 = v15;
  BinaryStream::writeString((int)v2, &v25);
  v19 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v25 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  BinaryStream::writeString((int)v2, (char **)v3 + 14);
  BinaryStream::writeString((int)v2, (char **)v3 + 15);
  return BinaryStream::writeString((int)v2, (char **)v3 + 16);
}


int __fastcall PlayerListEntry::PlayerListEntry(int a1, int a2)
{
  int v2; // r10@1
  int v3; // r3@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r11@1
  __int64 v9; // r0@1
  char *v10; // r4@1
  int v11; // r5@1
  __int64 v12; // kr00_8@3
  __int64 v13; // r0@5
  char *v14; // r4@5
  int v15; // r5@5
  __int64 v16; // kr08_8@7

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(a2 + 12);
  v6 = *(_DWORD *)(a2 + 16);
  v7 = *(_DWORD *)(a2 + 20);
  v8 = a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v5;
  *(_DWORD *)(a1 + 16) = v6;
  *(_DWORD *)(a1 + 20) = v7;
  sub_21E8AF4((int *)(a1 + 24), (int *)(a2 + 24));
  sub_21E8AF4((int *)(v2 + 28), (int *)(v8 + 28));
  v9 = *(_QWORD *)(v8 + 32);
  v10 = 0;
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  v11 = HIDWORD(v9) - v9;
  *(_DWORD *)(v2 + 40) = 0;
  if ( HIDWORD(v9) != (_DWORD)v9 )
    v10 = (char *)operator new(HIDWORD(v9) - v9);
  *(_DWORD *)(v2 + 32) = v10;
  *(_DWORD *)(v2 + 36) = v10;
  *(_DWORD *)(v2 + 40) = &v10[v11];
  v12 = *(_QWORD *)(v8 + 32);
  if ( HIDWORD(v12) != (_DWORD)v12 )
    _aeabi_memmove(v10, v12);
  *(_DWORD *)(v2 + 36) = &v10[HIDWORD(v12) - v12];
  v13 = *(_QWORD *)(v8 + 44);
  v14 = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  v15 = HIDWORD(v13) - v13;
  *(_DWORD *)(v2 + 52) = 0;
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = (char *)operator new(HIDWORD(v13) - v13);
  *(_DWORD *)(v2 + 44) = v14;
  *(_DWORD *)(v2 + 48) = v14;
  *(_DWORD *)(v2 + 52) = &v14[v15];
  v16 = *(_QWORD *)(v8 + 44);
  if ( HIDWORD(v16) != (_DWORD)v16 )
    _aeabi_memmove(v14, v16);
  *(_DWORD *)(v2 + 48) = &v14[HIDWORD(v16) - v16];
  sub_21E8AF4((int *)(v2 + 56), (int *)(v8 + 56));
  sub_21E8AF4((int *)(v2 + 60), (int *)(v8 + 60));
  sub_21E8AF4((int *)(v2 + 64), (int *)(v8 + 64));
  return v2;
}


int __fastcall PlayerListEntry::read(PlayerListEntry *this, BinaryStream *a2)
{
  PlayerListEntry *v2; // r4@1
  BinaryStream *v3; // r8@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  void *v8; // r0@1
  void *v9; // r0@2
  char *v10; // r7@3
  int v11; // r0@5
  int v12; // r1@8
  int v13; // r5@8
  int v14; // r6@8
  _BYTE *v15; // r0@9
  _BYTE *v16; // r2@9
  int v17; // r3@11
  char v18; // t1@12
  void *v19; // r1@15
  int v20; // r3@15
  char *v21; // r7@17
  int v22; // r0@19
  int v23; // r1@22
  int v24; // r5@22
  int v25; // r6@22
  _BYTE *v26; // r0@23
  _BYTE *v27; // r2@23
  int v28; // r3@25
  char v29; // t1@26
  void *v30; // r1@29
  int v31; // r3@29
  void *v32; // r0@31
  void *v33; // r0@32
  void *v34; // r0@33
  char *v35; // r0@34
  char *v36; // r0@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  unsigned int *v50; // r2@61
  signed int v51; // r1@63
  int v52; // [sp+4h] [bp-44h]@33
  int v53; // [sp+8h] [bp-40h]@32
  int v54; // [sp+Ch] [bp-3Ch]@31
  char *v55; // [sp+10h] [bp-38h]@17
  char *v56; // [sp+14h] [bp-34h]@3
  int v57; // [sp+18h] [bp-30h]@2
  int v58; // [sp+1Ch] [bp-2Ch]@1
  char v59; // [sp+20h] [bp-28h]@1
  int v60; // [sp+24h] [bp-24h]@1
  int v61; // [sp+28h] [bp-20h]@1
  int v62; // [sp+2Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<mce::UUID>((int)&v59, (int)a2);
  v4 = (int)v2 + 8;
  v5 = v60;
  v6 = v61;
  v7 = v62;
  *(_DWORD *)v4 = *(_DWORD *)&v59;
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  ReadOnlyBinaryStream::getType<EntityUniqueID>((int)&v59, (int)v3);
  *(_QWORD *)v2 = *(_QWORD *)&v59;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v58, (int)v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 6,
    &v58);
  v8 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
  {
    v38 = (unsigned int *)(v58 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
    }
    else
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v57, (int)v3);
    (int *)v2 + 7,
    &v57);
  v9 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v57 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v56, (int)v3);
  v10 = v56;
  if ( *((_DWORD *)v56 - 1) <= -1 )
    v11 = (int)v56;
  else
    sub_21E8010((const void **)&v56);
    v10 = v56;
    if ( *((_DWORD *)v56 - 1) < 0 )
      v11 = (int)v56;
      sub_21E8010((const void **)&v56);
  v12 = *(_DWORD *)(v11 - 12);
  v13 = v11 + v12;
  v14 = v11 + v12 - (_DWORD)v10;
  if ( (char *)(v11 + v12) == v10 )
    v15 = 0;
    v16 = 0;
    v15 = operator new(v11 + v12 - (_DWORD)v10);
    if ( v14 < 1 )
      v14 += (int)v15;
      v16 = v15;
      v17 = v13 + 1 - (_DWORD)v10;
      {
        v18 = *v10++;
        --v17;
        *v16++ = v18;
      }
      while ( v17 > 1 );
  v19 = (void *)*((_DWORD *)v2 + 8);
  v20 = (int)v2 + 32;
  *(_DWORD *)v20 = v15;
  *(_DWORD *)(v20 + 4) = v16;
  *(_DWORD *)(v20 + 8) = v14;
  if ( v19 )
    operator delete(v19);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v55, (int)v3);
  v21 = v55;
  if ( *((_DWORD *)v55 - 1) <= -1 )
    v22 = (int)v55;
    sub_21E8010((const void **)&v55);
    v21 = v55;
    if ( *((_DWORD *)v55 - 1) < 0 )
      v22 = (int)v55;
      sub_21E8010((const void **)&v55);
  v23 = *(_DWORD *)(v22 - 12);
  v24 = v22 + v23;
  v25 = v22 + v23 - (_DWORD)v21;
  if ( (char *)(v22 + v23) == v21 )
    v26 = 0;
    v27 = 0;
    v26 = operator new(v22 + v23 - (_DWORD)v21);
    if ( v25 < 1 )
      v25 += (int)v26;
      v27 = v26;
      v28 = v24 + 1 - (_DWORD)v21;
        v29 = *v21++;
        --v28;
        *v27++ = v29;
      while ( v28 > 1 );
  v30 = (void *)*((_DWORD *)v2 + 11);
  v31 = (int)v2 + 44;
  *(_DWORD *)v31 = v26;
  *(_DWORD *)(v31 + 4) = v27;
  *(_DWORD *)(v31 + 8) = v25;
  if ( v30 )
    operator delete(v30);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v54, (int)v3);
    (int *)v2 + 14,
    &v54);
  v32 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v54 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v53, (int)v3);
    (int *)v2 + 15,
    &v53);
  v33 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v53 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v52, (int)v3);
    (int *)v2 + 16,
    &v52);
  v34 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v52 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v55 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = v56 - 12;
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v56 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  return 0;
}


_QWORD *__fastcall PlayerListEntry::PlayerListEntry(_QWORD *a1, Entity *a2)
{
  Entity *v2; // r6@1
  _QWORD *v3; // r5@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  SkinInfoData *v7; // r0@1
  int *v8; // r0@1
  const Certificate *v9; // r0@1
  SkinInfoData *v10; // r6@1
  int v11; // r7@1
  int v12; // r4@1
  int v13; // r4@1
  char *v14; // r10@1
  unsigned int v15; // r8@1
  char *v16; // r11@3
  int v17; // r11@4
  int v18; // r8@5
  int v19; // r0@9
  int *v20; // r0@18
  int *v21; // r0@18

  v2 = a2;
  v3 = a1;
  *a1 = *(_QWORD *)j_Entity::getUniqueID(a2);
  v4 = *((_DWORD *)v2 + 1141);
  v5 = *((_DWORD *)v2 + 1143);
  v6 = *((_DWORD *)v2 + 1140);
  *((_DWORD *)v3 + 4) = *((_DWORD *)v2 + 1142);
  *((_DWORD *)v3 + 5) = v5;
  *((_DWORD *)v3 + 2) = v6;
  *((_DWORD *)v3 + 3) = v4;
  sub_21E8AF4((int *)v3 + 6, (int *)v2 + 1079);
  v7 = (SkinInfoData *)j_Player::getSkin(v2);
  v8 = (int *)j_SkinInfoData::getSkinId(v7);
  sub_21E8AF4((int *)v3 + 7, v8);
  *((_DWORD *)v3 + 9) = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 14) = &unk_28898CC;
  *((_DWORD *)v3 + 15) = &unk_28898CC;
  v9 = (const Certificate *)j_Player::getCertificate(v2);
  j_ExtendedCertificate::getXuid((ExtendedCertificate *)(v3 + 8), v9);
  v10 = (SkinInfoData *)j_Player::getSkin(v2);
  v11 = (*(int (**)(void))(*(_DWORD *)v10 + 16))();
  v12 = (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v10 + 16))(v10);
  v13 = v12 + (*(int (__fastcall **)(SkinInfoData *))(*(_DWORD *)v10 + 20))(v10);
  v14 = (char *)*((_DWORD *)v3 + 8);
  v15 = v13 - v11;
  if ( v13 - v11 <= (unsigned int)(*((_DWORD *)v3 + 10) - (_DWORD)v14) )
  {
    v17 = *((_DWORD *)v3 + 9);
    if ( v17 - (signed int)v14 >= v15 )
    {
      if ( v13 != v11 )
        j___aeabi_memmove_0(*((_DWORD *)v3 + 8), v11);
      v19 = (int)&v14[v15];
    }
    else
      v18 = v11 + v17 - (_DWORD)v14;
      if ( (char *)v17 != v14 )
      {
        v17 = *((_DWORD *)v3 + 9);
      }
      if ( v13 != v18 )
        j___aeabi_memmove_0(v17, v18);
      v19 = v17 + v13 - v18;
    *((_DWORD *)v3 + 9) = v19;
  }
  else
    if ( v13 == v11 )
      v16 = 0;
      v16 = (char *)j_operator new(v13 - v11);
      j___aeabi_memcpy_0((int)v16, v11, v13 - v11);
      v14 = (char *)*((_DWORD *)v3 + 8);
    if ( v14 )
      j_operator delete(v14);
    *((_DWORD *)v3 + 8) = v16;
    *((_DWORD *)v3 + 9) = &v16[v15];
    *((_DWORD *)v3 + 10) = &v16[v15];
  v20 = (int *)j_SkinInfoData::getGeometryData(v10);
  EntityInteraction::setInteractText((int *)v3 + 15, v20);
  v21 = (int *)j_SkinInfoData::getGeometryName(v10);
  EntityInteraction::setInteractText((int *)v3 + 14, v21);
  return v3;
}
