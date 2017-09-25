

void __fastcall PlayerSkinPacket::~PlayerSkinPacket(PlayerSkinPacket *this)
{
  PlayerSkinPacket::~PlayerSkinPacket(this);
}


signed int __fastcall PlayerSkinPacket::getId(PlayerSkinPacket *this)
{
  return 93;
}


void __fastcall PlayerSkinPacket::~PlayerSkinPacket(PlayerSkinPacket *this)
{
  PlayerSkinPacket *v1; // r0@1

  v1 = PlayerSkinPacket::~PlayerSkinPacket(this);
  j_j_j__ZdlPv_3((void *)v1);
}


int __fastcall PlayerSkinPacket::PlayerSkinPacket(int a1, int a2, __int64 a3, int a4, int a5, int *a6, __int64 *a7, __int64 *a8, int *a9, int *a10, int *a11, int *a12)
{
  int v12; // r5@1
  char *v13; // r6@1
  __int64 v14; // r0@1
  int v15; // r4@1
  __int64 v16; // kr00_8@3
  __int64 v17; // r0@5
  char *v18; // r6@5
  int v19; // r7@5
  __int64 v20; // kr08_8@7

  v12 = a1;
  v13 = 0;
  *(_DWORD *)(a1 + 4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)a1 = &off_26D8128;
  *(_QWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 28) = a5;
  *(_DWORD *)(a1 + 24) = a4;
  sub_DA73B4((int *)(a1 + 32), a6);
  v14 = *a7;
  *(_DWORD *)(v12 + 36) = 0;
  *(_DWORD *)(v12 + 40) = 0;
  v15 = HIDWORD(v14) - v14;
  *(_DWORD *)(v12 + 44) = 0;
  if ( HIDWORD(v14) != (_DWORD)v14 )
    v13 = (char *)operator new(HIDWORD(v14) - v14);
  *(_DWORD *)(v12 + 36) = v13;
  *(_DWORD *)(v12 + 40) = v13;
  *(_DWORD *)(v12 + 44) = &v13[v15];
  v16 = *a7;
  if ( HIDWORD(v16) != (_DWORD)v16 )
    _aeabi_memmove(v13, v16);
  *(_DWORD *)(v12 + 40) = &v13[HIDWORD(v16) - v16];
  v17 = *a8;
  v18 = 0;
  *(_DWORD *)(v12 + 48) = 0;
  *(_DWORD *)(v12 + 52) = 0;
  v19 = HIDWORD(v17) - v17;
  *(_DWORD *)(v12 + 56) = 0;
  if ( HIDWORD(v17) != (_DWORD)v17 )
    v18 = (char *)operator new(HIDWORD(v17) - v17);
  *(_DWORD *)(v12 + 48) = v18;
  *(_DWORD *)(v12 + 52) = v18;
  *(_DWORD *)(v12 + 56) = &v18[v19];
  v20 = *a8;
  if ( HIDWORD(v20) != (_DWORD)v20 )
    _aeabi_memmove(v18, v20);
  *(_DWORD *)(v12 + 52) = &v18[HIDWORD(v20) - v20];
  sub_DA73B4((int *)(v12 + 60), a9);
  sub_DA73B4((int *)(v12 + 64), a10);
  sub_DA73B4((int *)(v12 + 68), a11);
  sub_DA73B4((int *)(v12 + 72), a12);
  return v12;
}


int __fastcall PlayerSkinPacket::handle(PlayerSkinPacket *this, const NetworkIdentifier *a2, NetEventCallback *a3)
{
  return (*(int (__fastcall **)(NetEventCallback *, const NetworkIdentifier *, PlayerSkinPacket *))(*(_DWORD *)a3 + 444))(
           a3,
           a2,
           this);
}


PlayerSkinPacket *__fastcall PlayerSkinPacket::~PlayerSkinPacket(PlayerSkinPacket *this)
{
  PlayerSkinPacket *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@7
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
  *(_DWORD *)this = &off_26D8128;
  v2 = *((_DWORD *)this + 18);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 17);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v4 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 16);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 15);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)*((_DWORD *)v1 + 12);
  if ( v10 )
    operator delete(v10);
  v11 = (void *)*((_DWORD *)v1 + 9);
  if ( v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 8);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v12 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9(v13);
  return v1;
}


const void **__fastcall PlayerSkinPacket::write(PlayerSkinPacket *this, BinaryStream *a2)
{
  BinaryStream *v2; // r8@1
  PlayerSkinPacket *v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r6@2
  int *v6; // r0@2
  char *v7; // r1@2
  int v8; // r2@2
  char v9; // r3@3
  int v10; // r4@3
  char *v11; // r0@7
  __int64 v12; // kr08_8@8
  int v13; // r6@9
  int *v14; // r0@9
  char *v15; // r1@9
  int v16; // r2@9
  char v17; // r3@10
  int v18; // r4@10
  char *v19; // r0@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  char *v25; // [sp+4h] [bp-34h]@14
  char *v26; // [sp+Ch] [bp-2Ch]@7

  v2 = a2;
  v3 = this;
  BinaryStream::writeType<mce::UUID>((int)a2, (_QWORD *)this + 2);
  BinaryStream::writeString((int)v2, (char **)v3 + 8);
  BinaryStream::writeString((int)v2, (char **)v3 + 17);
  BinaryStream::writeString((int)v2, (char **)v3 + 18);
  v4 = *(_QWORD *)((char *)v3 + 36);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v7 = (char *)&unk_28898CC;
  }
  else
    v5 = HIDWORD(v4) - v4;
    v6 = sub_DA8BD4(HIDWORD(v4) - v4, 0);
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
      j_j_j_j_j__ZdlPv_9(v11);
  v12 = *((_QWORD *)v3 + 6);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    v15 = (char *)&unk_28898CC;
    v13 = HIDWORD(v12) - v12;
    v14 = sub_DA8BD4(HIDWORD(v12) - v12, 0);
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
      j_j_j_j_j__ZdlPv_9(v19);
  BinaryStream::writeString((int)v2, (char **)v3 + 15);
  return BinaryStream::writeString((int)v2, (char **)v3 + 16);
}


int __fastcall PlayerSkinPacket::read(PlayerSkinPacket *this, BinaryStream *a2)
{
  PlayerSkinPacket *v2; // r4@1
  BinaryStream *v3; // r8@1
  int v4; // r1@1
  int v5; // r2@1
  int v6; // r3@1
  int v7; // r12@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  char *v11; // r7@4
  int v12; // r0@6
  int v13; // r1@9
  int v14; // r5@9
  int v15; // r6@9
  _BYTE *v16; // r0@10
  _BYTE *v17; // r2@10
  int v18; // r3@12
  char v19; // t1@13
  void *v20; // r1@16
  int v21; // r3@16
  char *v22; // r7@18
  int v23; // r0@20
  int v24; // r1@23
  int v25; // r5@23
  int v26; // r6@23
  _BYTE *v27; // r0@24
  _BYTE *v28; // r2@24
  int v29; // r3@26
  char v30; // t1@27
  void *v31; // r1@30
  int v32; // r3@30
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
  char *v54; // [sp+Ch] [bp-3Ch]@18
  char *v55; // [sp+10h] [bp-38h]@4
  int v56; // [sp+14h] [bp-34h]@3
  int v57; // [sp+18h] [bp-30h]@2
  int v58; // [sp+1Ch] [bp-2Ch]@1
  char v59; // [sp+20h] [bp-28h]@1
  int v60; // [sp+24h] [bp-24h]@1
  int v61; // [sp+28h] [bp-20h]@1
  int v62; // [sp+2Ch] [bp-1Ch]@1

  v2 = this;
  v3 = a2;
  ReadOnlyBinaryStream::getType<mce::UUID>((int)&v59, (int)a2);
  v4 = v60;
  v5 = v61;
  v6 = v62;
  v7 = (int)v2 + 16;
  *(_DWORD *)v7 = *(_DWORD *)&v59;
  *(_DWORD *)(v7 + 4) = v4;
  *(_DWORD *)(v7 + 8) = v5;
  *(_DWORD *)(v7 + 12) = v6;
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v58, (int)v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 8,
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
      j_j_j_j_j__ZdlPv_9(v8);
  }
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v57, (int)v3);
    (int *)v2 + 17,
    &v57);
  v9 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v57 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v56, (int)v3);
    (int *)v2 + 18,
    &v56);
  v10 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v56 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v55, (int)v3);
  v11 = v55;
  if ( *((_DWORD *)v55 - 1) <= -1 )
    v12 = (int)v55;
  else
    sub_DA73C4((const void **)&v55);
    v11 = v55;
    if ( *((_DWORD *)v55 - 1) < 0 )
      v12 = (int)v55;
      sub_DA73C4((const void **)&v55);
  v13 = *(_DWORD *)(v12 - 12);
  v14 = v12 + v13;
  v15 = v12 + v13 - (_DWORD)v11;
  if ( (char *)(v12 + v13) == v11 )
    v16 = 0;
    v17 = 0;
    v16 = operator new(v12 + v13 - (_DWORD)v11);
    if ( v15 < 1 )
      v15 += (int)v16;
      v17 = v16;
      v18 = v14 + 1 - (_DWORD)v11;
      {
        v19 = *v11++;
        --v18;
        *v17++ = v19;
      }
      while ( v18 > 1 );
  v20 = (void *)*((_DWORD *)v2 + 9);
  v21 = (int)v2 + 36;
  *(_DWORD *)v21 = v16;
  *(_DWORD *)(v21 + 4) = v17;
  *(_DWORD *)(v21 + 8) = v15;
  if ( v20 )
    operator delete(v20);
  ReadOnlyBinaryStream::getString((ReadOnlyBinaryStream *)&v54, (int)v3);
  v22 = v54;
  if ( *((_DWORD *)v54 - 1) <= -1 )
    v23 = (int)v54;
    sub_DA73C4((const void **)&v54);
    v22 = v54;
    if ( *((_DWORD *)v54 - 1) < 0 )
      v23 = (int)v54;
      sub_DA73C4((const void **)&v54);
  v24 = *(_DWORD *)(v23 - 12);
  v25 = v23 + v24;
  v26 = v23 + v24 - (_DWORD)v22;
  if ( (char *)(v23 + v24) == v22 )
    v27 = 0;
    v28 = 0;
    v27 = operator new(v23 + v24 - (_DWORD)v22);
    if ( v26 < 1 )
      v26 += (int)v27;
      v28 = v27;
      v29 = v25 + 1 - (_DWORD)v22;
        v30 = *v22++;
        --v29;
        *v28++ = v30;
      while ( v29 > 1 );
  v31 = (void *)*((_DWORD *)v2 + 12);
  v32 = (int)v2 + 48;
  *(_DWORD *)v32 = v27;
  *(_DWORD *)(v32 + 4) = v28;
  *(_DWORD *)(v32 + 8) = v26;
  if ( v31 )
    operator delete(v31);
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
      j_j_j_j_j__ZdlPv_9(v33);
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
      j_j_j_j_j__ZdlPv_9(v34);
  v35 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v54 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9(v35);
  v36 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v55 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9(v36);
  return 0;
}
