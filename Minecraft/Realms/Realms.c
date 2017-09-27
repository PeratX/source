

Realms::Invite *__fastcall Realms::Invite::Invite(Realms::Invite *this, const Realms::Invite *a2)
{
  const Realms::Invite *v2; // r5@1
  Realms::Invite *v3; // r4@1

  v2 = a2;
  v3 = this;
  sub_21E8AF4((int *)this, (int *)a2);
  *((_DWORD *)v3 + 1) = *((_DWORD *)v2 + 1);
  sub_21E8AF4((int *)v3 + 2, (int *)v2 + 2);
  sub_21E8AF4((int *)v3 + 3, (int *)v2 + 3);
  sub_21E8AF4((int *)v3 + 4, (int *)v2 + 4);
  sub_21E8AF4((int *)v3 + 5, (int *)v2 + 5);
  *((_DWORD *)v3 + 6) = *((_DWORD *)v2 + 6);
  return v3;
}


Realms::InviteLink *__fastcall Realms::InviteLink::~InviteLink(Realms::InviteLink *this)
{
  Realms::InviteLink *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


Realms::Invite *__fastcall Realms::Invite::~Invite(Realms::Invite *this)
{
  Realms::Invite *v1; // r5@1
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 3);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 2);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v8 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


Realms::World *__fastcall Realms::World::World(Realms::World *this, const Realms::World *a2)
{
  const Realms::World *v2; // r8@1
  Realms::World *v3; // r9@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r1@1
  __int16 v11; // r2@1

  v2 = a2;
  v3 = this;
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  sub_DA73B4((int *)this + 3, (int *)a2 + 3);
  sub_DA73B4((int *)v3 + 4, (int *)v2 + 4);
  sub_DA73B4((int *)v3 + 5, (int *)v2 + 5);
  sub_DA73B4((int *)v3 + 6, (int *)v2 + 6);
  v4 = (int)v3 + 28;
  v5 = *((_DWORD *)v2 + 8);
  v6 = *((_DWORD *)v2 + 9);
  v7 = *((_DWORD *)v2 + 10);
  v8 = *((_DWORD *)v2 + 11);
  v9 = *((_DWORD *)v2 + 12);
  *(_DWORD *)v4 = *((_DWORD *)v2 + 7);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  *(_DWORD *)(v4 + 20) = v9;
  v10 = (int)v3 + 52;
  v11 = *((_WORD *)v2 + 26);
  *(_BYTE *)(v10 + 2) = *((_BYTE *)v2 + 54);
  *(_WORD *)v10 = v11;
  std::vector<Realms::InvitedPlayer,std::allocator<Realms::InvitedPlayer>>::vector(
    (int)v3 + 56,
    (unsigned __int64 *)v2 + 7);
  return v3;
}


Realms::World *__fastcall Realms::World::~World(Realms::World *this)
{
  Realms::World *v1; // r4@1
  Realms::InvitedPlayer *v2; // r0@1
  Realms::InvitedPlayer *v3; // r5@1
  int v4; // r1@6
  void *v5; // r0@6
  int v6; // r1@7
  void *v7; // r0@7
  int v8; // r1@8
  void *v9; // r0@8
  int v10; // r1@9
  void *v11; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25

  v1 = this;
  v3 = (Realms::InvitedPlayer *)(*((_QWORD *)this + 7) >> 32);
  v2 = (Realms::InvitedPlayer *)*((_QWORD *)this + 7);
  if ( v2 != v3 )
  {
    do
      v2 = (Realms::InvitedPlayer *)((char *)Realms::InvitedPlayer::~InvitedPlayer(v2) + 24);
    while ( v3 != v2 );
    v2 = (Realms::InvitedPlayer *)*((_DWORD *)v1 + 14);
  }
  if ( v2 )
    operator delete((void *)v2);
  v4 = *((_DWORD *)v1 + 6);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 4);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 3);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v10 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9(v11);
  return v1;
}


Realms::InviteLink *__fastcall Realms::InviteLink::InviteLink(Realms::InviteLink *this, const Realms::InviteLink *a2)
{
  const Realms::InviteLink *v2; // r5@1
  Realms::InviteLink *v3; // r4@1

  v2 = a2;
  v3 = this;
  sub_21E8AF4((int *)this, (int *)a2);
  sub_21E8AF4((int *)v3 + 1, (int *)v2 + 1);
  sub_21E8AF4((int *)v3 + 2, (int *)v2 + 2);
  *((_QWORD *)v3 + 2) = *((_QWORD *)v2 + 2);
  sub_21E8AF4((int *)v3 + 6, (int *)v2 + 6);
  return v3;
}


signed int __fastcall Realms::parseWorld(Realms *this, web::json::value *a2, Realms::World *a3)
{
  web::json::value *v3; // r8@1
  Realms *v4; // r9@1
  web::json::value *v5; // r0@1
  int v6; // r0@1
  __int64 v7; // r6@1
  int v8; // r4@1
  void *v9; // r0@1
  __int64 v10; // r0@2
  web::json::value *v11; // r0@4
  int *v12; // r0@4
  void *v13; // r0@4
  void *v14; // r0@5
  int v15; // r0@7
  signed int v16; // r2@7
  web::json::value *v17; // r0@11
  int *v18; // r0@11
  void *v19; // r0@11
  void *v20; // r0@12
  void *v21; // r0@13
  web::json::value *v22; // r0@14
  int *v23; // r0@14
  void *v24; // r0@14
  void *v25; // r0@15
  void *v26; // r0@16
  web::json::value *v27; // r0@17
  int *v28; // r0@17
  void *v29; // r0@17
  void *v30; // r0@18
  void *v31; // r0@19
  web::json::value *v32; // r0@20
  void *v33; // r0@20
  web::json::value *v34; // r0@21
  void *v35; // r0@21
  web::json::value *v36; // r0@22
  void *v37; // r0@22
  int v38; // r6@23
  void *v39; // r0@23
  web::json::value *v40; // r0@25
  void *v41; // r0@25
  void *v42; // r0@26
  unsigned int *v44; // r2@28
  signed int v45; // r1@30
  unsigned int *v46; // r2@32
  signed int v47; // r1@34
  unsigned int *v48; // r2@36
  signed int v49; // r1@38
  unsigned int *v50; // r2@40
  signed int v51; // r1@42
  unsigned int *v52; // r2@44
  signed int v53; // r1@46
  unsigned int *v54; // r2@48
  signed int v55; // r1@50
  unsigned int *v56; // r2@52
  signed int v57; // r1@54
  unsigned int *v58; // r2@56
  signed int v59; // r1@58
  unsigned int *v60; // r2@60
  signed int v61; // r1@62
  unsigned int *v62; // r2@64
  signed int v63; // r1@66
  unsigned int *v64; // r2@68
  signed int v65; // r1@70
  unsigned int *v66; // r2@72
  signed int v67; // r1@74
  unsigned int *v68; // r2@76
  signed int v69; // r1@78
  unsigned int *v70; // r2@80
  signed int v71; // r1@82
  unsigned int *v72; // r2@84
  signed int v73; // r1@86
  unsigned int *v74; // r2@88
  signed int v75; // r1@90
  unsigned int *v76; // r2@92
  signed int v77; // r1@94
  unsigned int *v78; // r2@164
  signed int v79; // r1@166
  int v80; // [sp+4h] [bp-8Ch]@25
  int v81; // [sp+Ch] [bp-84h]@23
  int v82; // [sp+14h] [bp-7Ch]@22
  int v83; // [sp+1Ch] [bp-74h]@21
  int v84; // [sp+24h] [bp-6Ch]@20
  int v85; // [sp+2Ch] [bp-64h]@17
  int v86; // [sp+30h] [bp-60h]@17
  int v87; // [sp+34h] [bp-5Ch]@17
  int v88; // [sp+3Ch] [bp-54h]@14
  int v89; // [sp+40h] [bp-50h]@14
  int v90; // [sp+44h] [bp-4Ch]@14
  int v91; // [sp+4Ch] [bp-44h]@11
  int v92; // [sp+50h] [bp-40h]@11
  int v93; // [sp+54h] [bp-3Ch]@11
  int v94; // [sp+5Ch] [bp-34h]@4
  int v95; // [sp+60h] [bp-30h]@4
  int v96; // [sp+64h] [bp-2Ch]@4
  int v97; // [sp+6Ch] [bp-24h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v97, "id");
  v5 = (web::json::value *)web::json::value::operator[]((int)v4);
  v6 = web::json::value::as_number(v5);
  v7 = *(_QWORD *)v6;
  v8 = *(_DWORD *)(v6 + 8);
  v9 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
  {
    v44 = (unsigned int *)(v97 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  LODWORD(v10) = _aeabi_d2lz(v7);
  if ( v8 != 2 )
    v10 = v7;
  *(_QWORD *)v3 = v10;
  sub_21E94B4((void **)&v94, "state");
  v11 = (web::json::value *)web::json::value::operator[]((int)v4);
  v12 = (int *)web::json::value::as_string(v11);
  sub_21E8AF4(&v95, v12);
  utility::conversions::to_utf8string(&v96, &v95);
  v13 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v95 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v94 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  if ( sub_21E7D6C((const void **)&v96, "OPEN") )
    v15 = sub_21E7D6C((const void **)&v96, "CLOSED");
    v16 = 0;
    if ( !v15 )
      v16 = 1;
  else
    v16 = 2;
  *((_DWORD *)v3 + 2) = v16;
  sub_21E94B4((void **)&v91, "name");
  v17 = (web::json::value *)web::json::value::operator[]((int)v4);
  v18 = (int *)web::json::value::as_string(v17);
  sub_21E8AF4(&v92, v18);
  utility::conversions::to_utf8string(&v93, &v92);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 3,
    &v93);
  v19 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v93 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v92 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v91 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v88, "motd");
  v22 = (web::json::value *)web::json::value::operator[]((int)v4);
  v23 = (int *)web::json::value::as_string(v22);
  sub_21E8AF4(&v89, v23);
  utility::conversions::to_utf8string(&v90, &v89);
    (int *)v3 + 4,
    &v90);
  v24 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v90 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v89 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v88 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v85, "ownerUUID");
  v27 = (web::json::value *)web::json::value::operator[]((int)v4);
  v28 = (int *)web::json::value::as_string(v27);
  sub_21E8AF4(&v86, v28);
  utility::conversions::to_utf8string(&v87, &v86);
    (int *)v3 + 5,
    &v87);
  v29 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v87 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v86 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v85 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v84, "expired");
  v32 = (web::json::value *)web::json::value::operator[]((int)v4);
  *((_BYTE *)v3 + 32) = web::json::value::as_bool(v32);
  v33 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v84 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v83, "daysLeft");
  v34 = (web::json::value *)web::json::value::operator[]((int)v4);
  *((_DWORD *)v3 + 7) = web::json::value::as_integer(v34);
  v35 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v83 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v82, "maxPlayers");
  v36 = (web::json::value *)web::json::value::operator[]((int)v4);
  *((_DWORD *)v3 + 9) = web::json::value::as_integer(v36);
  v37 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v82 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v81, "member");
  v38 = (*(int (**)(void))(**(_DWORD **)v4 + 4))();
  v39 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v81 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  if ( v38 == 1 )
    sub_21E94B4((void **)&v80, "member");
    v40 = (web::json::value *)web::json::value::operator[]((int)v4);
    *((_BYTE *)v3 + 54) = web::json::value::as_bool(v40);
    v41 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
      }
      else
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v96 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  return 1;
}


signed int __fastcall Realms::parseInviteLink(Realms *this, web::json::value *a2, Realms::InviteLink *a3)
{
  web::json::value *v3; // r6@1
  Realms *v4; // r5@1
  web::json::value *v5; // r0@1
  int *v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  void *v9; // r0@3
  web::json::value *v10; // r0@4
  int *v11; // r0@4
  void *v12; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  web::json::value *v15; // r0@7
  int *v16; // r0@7
  void *v17; // r0@7
  void *v18; // r0@8
  void *v19; // r0@9
  web::json::value *v20; // r0@10
  __int64 v28; // r0@11
  void *v29; // r0@13
  web::json::value *v30; // r0@14
  int *v31; // r0@14
  void *v32; // r0@14
  void *v33; // r0@15
  void *v34; // r0@16
  unsigned int *v36; // r2@18
  signed int v37; // r1@20
  unsigned int *v38; // r2@22
  signed int v39; // r1@24
  unsigned int *v40; // r2@26
  signed int v41; // r1@28
  unsigned int *v42; // r2@30
  signed int v43; // r1@32
  unsigned int *v44; // r2@34
  signed int v45; // r1@36
  unsigned int *v46; // r2@38
  signed int v47; // r1@40
  unsigned int *v48; // r2@42
  signed int v49; // r1@44
  unsigned int *v50; // r2@46
  signed int v51; // r1@48
  unsigned int *v52; // r2@50
  signed int v53; // r1@52
  unsigned int *v54; // r2@54
  signed int v55; // r1@56
  unsigned int *v56; // r2@58
  signed int v57; // r1@60
  unsigned int *v58; // r2@62
  signed int v59; // r1@64
  unsigned int *v60; // r2@66
  signed int v61; // r1@68
  int v62; // [sp+8h] [bp-58h]@14
  int v63; // [sp+Ch] [bp-54h]@14
  int v64; // [sp+10h] [bp-50h]@14
  int v65; // [sp+18h] [bp-48h]@10
  int v66; // [sp+20h] [bp-40h]@7
  int v67; // [sp+24h] [bp-3Ch]@7
  int v68; // [sp+28h] [bp-38h]@7
  int v69; // [sp+30h] [bp-30h]@4
  int v70; // [sp+34h] [bp-2Ch]@4
  int v71; // [sp+38h] [bp-28h]@4
  int v72; // [sp+40h] [bp-20h]@1
  int v73; // [sp+44h] [bp-1Ch]@1
  int v74; // [sp+48h] [bp-18h]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v72, "linkId");
  v5 = (web::json::value *)web::json::value::operator[]((int)v4);
  v6 = (int *)web::json::value::as_string(v5);
  sub_21E8AF4(&v73, v6);
  utility::conversions::to_utf8string(&v74, &v73);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id((int *)v3, &v74);
  v7 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
  {
    v36 = (unsigned int *)(v74 - 4);
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
  }
  v8 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v73 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v72 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v69, "profileUuid");
  v10 = (web::json::value *)web::json::value::operator[]((int)v4);
  v11 = (int *)web::json::value::as_string(v10);
  sub_21E8AF4(&v70, v11);
  utility::conversions::to_utf8string(&v71, &v70);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 1,
    &v71);
  v12 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v71 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v70 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v69 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v66, "type");
  v15 = (web::json::value *)web::json::value::operator[]((int)v4);
  v16 = (int *)web::json::value::as_string(v15);
  sub_21E8AF4(&v67, v16);
  utility::conversions::to_utf8string(&v68, &v67);
    (int *)v3 + 2,
    &v68);
  v17 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v68 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v67 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v66 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v65, "ts");
  v20 = (web::json::value *)web::json::value::operator[]((int)v4);
  _R0 = web::json::value::as_number(v20);
  _R1 = *(_DWORD *)(_R0 + 8);
  if ( _R1 == 2 )
    __asm
      VLDR            D0, [R0]
      VMOV            R0, R1, D0
    LODWORD(v28) = _aeabi_d2lz(_R0);
  else
    v28 = *(_QWORD *)_R0;
  *((_QWORD *)v3 + 2) = v28;
  v29 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v65 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v62, "url");
  v30 = (web::json::value *)web::json::value::operator[]((int)v4);
  v31 = (int *)web::json::value::as_string(v30);
  sub_21E8AF4(&v63, v31);
  utility::conversions::to_utf8string(&v64, &v63);
    (int *)v3 + 6,
    &v64);
  v32 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v64 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v63 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v62 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  return 1;
}


signed int __fastcall Realms::parseState(const void **a1)
{
  const void **v1; // r4@1
  signed int result; // r0@2
  int v3; // r1@3

  v1 = a1;
  if ( sub_21E7D6C(a1, "OPEN") )
  {
    v3 = sub_21E7D6C(v1, "CLOSED");
    result = 0;
    if ( !v3 )
      result = 1;
  }
  else
    result = 2;
  return result;
}


Realms::InvitedPlayer *__fastcall Realms::InvitedPlayer::~InvitedPlayer(Realms::InvitedPlayer *this)
{
  Realms::InvitedPlayer *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int *v8; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 2);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v4 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 1);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v6 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = (int *)(*(_DWORD *)v1 - 12);
  if ( v8 != &dword_28898C0 )
    v16 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v8);
  return v1;
}


Realms::InvitedPlayer *__fastcall Realms::InvitedPlayer::InvitedPlayer(Realms::InvitedPlayer *this, const Realms::InvitedPlayer *a2)
{
  const Realms::InvitedPlayer *v2; // r5@1
  Realms::InvitedPlayer *v3; // r4@1
  __int16 v4; // r1@1
  Realms::InvitedPlayer *result; // r0@1

  v2 = a2;
  v3 = this;
  sub_DA73B4((int *)this, (int *)a2);
  sub_DA73B4((int *)v3 + 1, (int *)v2 + 1);
  sub_DA73B4((int *)v3 + 2, (int *)v2 + 2);
  sub_DA73B4((int *)v3 + 3, (int *)v2 + 3);
  *((_DWORD *)v3 + 4) = *((_DWORD *)v2 + 4);
  v4 = *((_WORD *)v2 + 10);
  *((_BYTE *)v3 + 22) = *((_BYTE *)v2 + 22);
  result = v3;
  *((_WORD *)v3 + 10) = v4;
  return result;
}


Realms::RealmsConfigInfo *__fastcall Realms::RealmsConfigInfo::~RealmsConfigInfo(Realms::RealmsConfigInfo *this)
{
  Realms::RealmsConfigInfo *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int *v10; // r0@20
  int *v11; // r0@25
  unsigned int *v13; // r2@27
  signed int v14; // r1@29

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 4);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (int *)(*(_DWORD *)v2 - 12);
      if ( v10 != &dword_28898C0 )
        v6 = (unsigned int *)(*(_DWORD *)v2 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  v11 = (int *)(*(_DWORD *)v1 - 12);
  if ( v11 != &dword_28898C0 )
    v13 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  return v1;
}
