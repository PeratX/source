

void __fastcall EntitlementManager::_markLegacyEntitlementOwnership(int a1, int *a2)
{
  int v2; // r6@0
  int v3; // r5@1
  int *v4; // r4@1
  _BYTE *v5; // r0@1
  _BYTE *v6; // r0@1
  int v7; // r2@2
  unsigned int v8; // r3@2
  void *v9; // r0@3
  unsigned int v10; // r11@4
  unsigned int v11; // r7@4
  int v12; // r5@4
  int v13; // r8@4
  int v14; // r10@5
  _DWORD *v15; // r9@5
  int v16; // r4@5
  _DWORD *v17; // r1@7
  size_t v18; // r2@7
  char *v19; // r0@11
  bool v20; // zf@14
  int v21; // r4@18
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  int v26; // [sp+0h] [bp-88h]@4
  int *v27; // [sp+4h] [bp-84h]@4
  __int64 v28; // [sp+8h] [bp-80h]@17
  __int64 v29; // [sp+10h] [bp-78h]@17
  int v30; // [sp+1Ch] [bp-6Ch]@3
  void *s1; // [sp+20h] [bp-68h]@1
  char v32; // [sp+28h] [bp-60h]@18
  int v33; // [sp+5Ch] [bp-2Ch]@18

  v3 = a1;
  v4 = a2;
  sub_119C854((int *)&s1, a2);
  v5 = sub_119E224(v4, 46, 0xFFFFFFFF);
  v6 = sub_119E224(v4, 46, (unsigned int)(v5 - 1));
  if ( v6 != (_BYTE *)-1 )
  {
    v7 = (int)(v6 + 1);
    v8 = *(_DWORD *)(*v4 - 12);
    if ( v8 < (unsigned int)(v6 + 1) )
      sub_119CA78("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v8);
    sub_119C8C4((void **)&v30, v4, v7, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&s1,
      &v30);
    v9 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v30 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v9);
    }
  }
  v26 = v3;
  v27 = v4;
  v10 = sub_119C9A4((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v11 = unk_27D68A0;
  v12 = v10 % unk_27D68A0;
  v13 = *(_DWORD *)(EntitlementManager::mLegacyOfferLookup + 4 * (v10 % unk_27D68A0));
  if ( v13 )
    v14 = *(_DWORD *)v13;
    v15 = s1;
    v16 = *(_DWORD *)(*(_DWORD *)v13 + 20);
    while ( 1 )
      if ( v16 == v10 )
        v17 = *(_DWORD **)(v14 + 4);
        v18 = *(v15 - 3);
        if ( v18 == *(v17 - 3) && !memcmp(v15, v17, v18) )
          break;
      v2 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
        v16 = *(_DWORD *)(v2 + 20);
        v13 = v14;
        v14 = *(_DWORD *)v14;
        if ( *(_DWORD *)(v2 + 20) % v11 == v12 )
          continue;
      goto LABEL_11;
    if ( v13 )
      v20 = *(_DWORD *)v13 == 0;
      if ( *(_DWORD *)v13 )
        v12 = *(_QWORD *)(*(_DWORD *)v13 + 8) >> 32;
        v2 = *(_QWORD *)(*(_DWORD *)v13 + 8);
        v20 = v2 == v12;
      if ( !v20 )
        {
          mce::UUID::fromString((int)&v28, (int *)v2);
          if ( v28 | v29 )
          {
            Entitlement::Entitlement((int)&v32, (int)&v28);
            std::_Hashtable<mce::UUID,std::pair<mce::UUID const,Entitlement>,std::allocator<std::pair<mce::UUID const,Entitlement>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<mce::UUID const&,Entitlement>(
              &v33,
              (_QWORD *)(v26 + 76),
              (int)&v28,
              (int)&v32);
            Entitlement::~Entitlement((Entitlement *)&v32);
            v21 = v33 + 24;
            if ( !Entitlement::isOwned((Entitlement *)(v33 + 24)) )
              Entitlement::markDeviceOwnership(v21, v27);
          }
          v2 += 4;
        }
        while ( v12 != v2 );
LABEL_11:
  v19 = (char *)s1 - 12;
  if ( (int *)((char *)s1 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)((char *)s1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
}


RakNet *__fastcall EntitlementManager::_readInEntitlementsOwned(int a1, _BYTE **a2)
{
  int v2; // r9@1
  _BYTE **v3; // r10@1
  int v4; // r5@1
  int v5; // r7@1
  void *v6; // r0@1
  int v7; // r1@2
  unsigned __int64 v8; // r2@2
  void *v9; // r0@3
  int v10; // r3@4
  void *v11; // r0@6
  void *v12; // r0@7
  unsigned __int64 v13; // r2@8
  RakNet *result; // r0@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  int v21; // [sp+0h] [bp-11D0h]@0
  int v22; // [sp+4h] [bp-11CCh]@0
  RakNet *v23; // [sp+8h] [bp-11C8h]@1
  int v24; // [sp+Ch] [bp-11C4h]@4
  int v25; // [sp+10h] [bp-11C0h]@3
  int v26; // [sp+14h] [bp-11BCh]@3
  void **v27; // [sp+18h] [bp-11B8h]@2
  void **v28; // [sp+1Ch] [bp-11B4h]@3
  int v29; // [sp+20h] [bp-11B0h]@4
  int v30; // [sp+24h] [bp-11ACh]@4
  int v31; // [sp+28h] [bp-11A8h]@4
  int v32; // [sp+2Ch] [bp-11A4h]@4
  int v33; // [sp+30h] [bp-11A0h]@4
  int v34; // [sp+34h] [bp-119Ch]@4
  int v35; // [sp+38h] [bp-1198h]@4
  void *v36; // [sp+3Ch] [bp-1194h]@4
  int v37; // [sp+40h] [bp-1190h]@4
  int v38; // [sp+44h] [bp-118Ch]@4
  int v39; // [sp+48h] [bp-1188h]@4
  int v40; // [sp+4Ch] [bp-1184h]@4
  int v41; // [sp+50h] [bp-1180h]@4
  int v42; // [sp+54h] [bp-117Ch]@4
  int v43; // [sp+58h] [bp-1178h]@4
  int v44; // [sp+5Ch] [bp-1174h]@4
  int v45; // [sp+60h] [bp-1170h]@4
  int v46; // [sp+64h] [bp-116Ch]@4
  int v47; // [sp+68h] [bp-1168h]@4
  int v48; // [sp+6Ch] [bp-1164h]@4
  int v49; // [sp+70h] [bp-1160h]@4
  char v50; // [sp+74h] [bp-115Ch]@4
  int v51; // [sp+CCh] [bp-1104h]@1
  int v52[3]; // [sp+D0h] [bp-1100h]@1
  void **v53; // [sp+E0h] [bp-10F0h]@1
  int v54; // [sp+E4h] [bp-10ECh]@8
  void **v55; // [sp+E8h] [bp-10E8h]@1
  int v56; // [sp+ECh] [bp-10E4h]@7
  void **v57; // [sp+111Ch] [bp-B4h]@1
  char v58; // [sp+1130h] [bp-A0h]@2
  int v59; // [sp+118Ch] [bp-44h]@1
  __int16 v60; // [sp+1190h] [bp-40h]@1
  int v61; // [sp+1194h] [bp-3Ch]@1
  int v62; // [sp+1198h] [bp-38h]@1
  int v63; // [sp+119Ch] [bp-34h]@1
  int v64; // [sp+11A0h] [bp-30h]@1

  v2 = a1;
  v3 = a2;
  v23 = _stack_chk_guard;
  EntitlementManager::_getUsersEntFileName((void **)&v51, (int)a2, a2);
  v4 = v51;
  v5 = *(_DWORD *)(v51 - 12);
  sub_119D70C((int)&v57);
  v57 = &off_26D3AF0;
  v59 = 0;
  v60 = 0;
  v64 = 0;
  v63 = 0;
  v62 = 0;
  v61 = 0;
  v52[0] = v4;
  v52[1] = v5;
  Core::FileStream::FileStream((int)&v53, (int)off_26D7EA4, (__int64 *)v52, 8);
  v53 = &off_26D7E64;
  v57 = &off_26D7E8C;
  v55 = &off_26D7E78;
  v6 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v51 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  sub_119C8F4((int)&v27, 16);
  if ( !(v58 & 5) )
    sub_119DA6C((char *)&v27, v61);
    sub_119D48C(&v25, (int)&v28);
    utility::conversions::to_string_t(&v26, &v25);
    v9 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    web::json::value::parse();
    EntitlementManager::_parseInventoryResponse(
      v2,
      (int)&v24,
      (int)v3,
      v10,
      v21,
      v22,
      (int)v23,
      v24,
      v25,
      v26,
      (int)v27,
      (int)v28,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 96))();
    v7 = v26;
    LODWORD(v8) = &dword_28898C0;
    v11 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      LODWORD(v8) = v26 - 4;
        {
          v7 = __ldrex((unsigned int *)v8);
          HIDWORD(v8) = v7 - 1;
        }
        while ( __strex(v7 - 1, (unsigned int *)v8) );
        v7 = *(_DWORD *)v8;
        HIDWORD(v8) = *(_DWORD *)v8 - 1;
        *(_DWORD *)v8 = HIDWORD(v8);
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
  Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v56, v7, v8);
  v27 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v27) = off_26D3F34;
  v28 = &off_27734E8;
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v37 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v28 = &off_26D40A8;
  sub_119C954((unsigned int **)&v35);
  sub_119C964(&v38);
  v53 = &off_26D7EEC;
  v57 = &off_26D7F14;
  v55 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v56, (int)&off_26D7F14, v13);
  v53 = &off_26D7F6C;
  v57 = &off_26D7F80;
  v54 = 0;
  sub_119C964(&v57);
  result = (RakNet *)(_stack_chk_guard - v23);
  if ( _stack_chk_guard != v23 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall EntitlementManager::_writeOutEntitlementsOwned(EntitlementManager *this, const web::json::value *a2)
{
  const web::json::value *v2; // r9@1
  int v3; // r1@1
  void *v4; // r0@1
  int v5; // r7@2
  unsigned int v6; // r4@2
  __int64 v7; // r0@4
  int v8; // r1@8
  unsigned __int64 v9; // r2@8
  unsigned __int64 v10; // r2@8
  void *v11; // r0@8
  char *result; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  RakNet *v17; // [sp+4h] [bp-110Ch]@1
  int v18; // [sp+8h] [bp-1108h]@1
  int v19; // [sp+Ch] [bp-1104h]@1
  __int64 v20; // [sp+10h] [bp-1100h]@2
  __int64 v21; // [sp+18h] [bp-10F8h]@4
  void **v22; // [sp+28h] [bp-10E8h]@2
  int v23; // [sp+2Ch] [bp-10E4h]@8
  void **v24; // [sp+30h] [bp-10E0h]@2
  int v25; // [sp+34h] [bp-10DCh]@3
  void **v26; // [sp+1064h] [bp-ACh]@2
  char v27; // [sp+1078h] [bp-98h]@2
  int v28; // [sp+10D4h] [bp-3Ch]@2
  __int16 v29; // [sp+10D8h] [bp-38h]@2
  int v30; // [sp+10DCh] [bp-34h]@2
  int v31; // [sp+10E0h] [bp-30h]@2
  int v32; // [sp+10E4h] [bp-2Ch]@2
  int v33; // [sp+10E8h] [bp-28h]@2

  v2 = a2;
  v17 = _stack_chk_guard;
  CommerceIdentity::getUserId((CommerceIdentity *)&v18, (int)this + 60);
  EntitlementManager::_getUsersEntFileName((void **)&v19, v3, (_BYTE **)&v18);
  v4 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v5 = v19;
  v6 = *(_DWORD *)(v19 - 12);
  sub_119D70C((int)&v26);
  v26 = &off_26D3AF0;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v32 = 0;
  v31 = 0;
  v30 = 0;
  v20 = __PAIR__(v6, v5);
  Core::FileStream::FileStream((int)&v22, (int)off_26D81A4, &v20, 16);
  v22 = &off_26D8170;
  v26 = &off_26D8198;
  v24 = &off_26D8184;
  if ( v27 & 1 || !Core::FileStdStreamBuf::isOpen((Core::FileStdStreamBuf *)&v25) )
    LODWORD(v7) = v19;
    HIDWORD(v7) = *(_DWORD *)(v19 - 12);
    v21 = v7;
    Core::FileStream::open((int)&v22, &v21, 48);
  if ( !(v27 & 1) && Core::FileStdStreamBuf::isOpen((Core::FileStdStreamBuf *)&v25) == 1 )
    web::json::value::serialize((int)v2, (char *)&v24);
  sub_119C944((char *)&v24);
  Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v25, v8, v9);
  v22 = &off_26D679C;
  v26 = &off_26D67C4;
  v24 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v25, (int)&off_26D67C4, v10);
  v22 = &off_26D67DC;
  v26 = &off_26D67F0;
  v23 = 0;
  sub_119C964(&v26);
  v11 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  result = (char *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


unsigned int __fastcall EntitlementManager::_processLegacyOfferPurchaseInfoRedeem(int a1, int a2, int a3, int a4)
{
  int *v4; // r5@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r10@1
  int v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  int v13; // r7@7
  unsigned int *v14; // r6@7
  unsigned int v15; // r1@9
  unsigned int v16; // r1@14
  unsigned int v17; // r0@20
  unsigned int v18; // r0@27
  unsigned int v19; // r0@32
  int v20; // r0@35
  unsigned int *v21; // r2@36
  unsigned int v22; // r1@38
  int v23; // r5@43
  unsigned int *v24; // r1@44
  unsigned int v25; // r0@46
  unsigned int *v26; // r7@50
  unsigned int v27; // r0@52
  int v28; // r0@57
  unsigned int *v29; // r2@58
  unsigned int v30; // r1@60
  int v31; // r5@65
  unsigned int *v32; // r1@66
  unsigned int v33; // r0@68
  unsigned int *v34; // r7@72
  unsigned int v35; // r0@74
  unsigned int result; // r0@81
  int v37; // [sp+0h] [bp-48h]@30
  int v38; // [sp+4h] [bp-44h]@30
  int v39; // [sp+8h] [bp-40h]@25
  int v40; // [sp+Ch] [bp-3Ch]@25
  int v41; // [sp+10h] [bp-38h]@30
  int v42; // [sp+14h] [bp-34h]@30
  char v43; // [sp+18h] [bp-30h]@25
  int v44; // [sp+1Ch] [bp-2Ch]@65
  char v45; // [sp+20h] [bp-28h]@30
  int v46; // [sp+24h] [bp-24h]@43

  v4 = (int *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v8 = a1;
  if ( !v6 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v6 + 4);
  v10 = (unsigned int *)(v6 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    }
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  }
  while ( v12 );
  __dmb();
  v13 = *v4;
  v14 = (unsigned int *)(v6 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  else
    ++*v14;
      v16 = __ldrex(v10);
    while ( __strex(v16 - 1, v10) );
    v16 = (*v10)--;
  if ( v16 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
    if ( &pthread_create )
      do
        v17 = __ldrex(v14);
      while ( __strex(v17 - 1, v14) );
    else
      v17 = (*v14)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v43, (int)(v4 + 15), 1);
  v39 = v13;
  v40 = v6;
      v18 = __ldrex(v14);
    while ( __strex(v18 + 1, v14) );
  v41 = v7;
  v42 = v5;
  sub_1098674((int)&v45, (int)&v43, (int)&v39);
  v37 = v13;
  v38 = v6;
      v19 = __ldrex(v14);
    while ( __strex(v19 + 1, v14) );
  sub_1098FE4(v8, (int)&v45, (int)&v37);
  v20 = v38;
  if ( v38 )
    v21 = (unsigned int *)(v38 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 12))(v20);
  v23 = v46;
  if ( v46 )
    v24 = (unsigned int *)(v46 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v26 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  v28 = v40;
  if ( v40 )
    v29 = (unsigned int *)(v40 + 8);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v28 + 12))(v28);
  v31 = v44;
  if ( v44 )
    v32 = (unsigned int *)(v44 + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
      result = __ldrex(v14);
    while ( __strex(result - 1, v14) );
    result = (*v14)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


void __fastcall EntitlementManager::_getAccessTokenFromJson(EntitlementManager *this, const web::json::value *a2, web::json::value *a3)
{
  EntitlementManager::_getAccessTokenFromJson(this, a2, a3);
}


unsigned int __fastcall EntitlementManager::processExternalStorePurchases(int a1, int *a2)
{
  unsigned int result; // r0@1
  int v3; // r4@1
  unsigned int *v4; // r1@2
  unsigned int *v5; // r5@8
  int v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@1

  result = EntitlementManager::_processExternalStorePurchases((int)&v6, a1, 7, a2);
  v3 = v7;
  if ( v7 )
  {
    v4 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v4);
      while ( __strex(result - 1, v4) );
    }
    else
      result = (*v4)--;
    if ( result == 1 )
      v5 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v5);
        while ( __strex(result - 1, v5) );
      }
      else
        result = (*v5)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  return result;
}


unsigned int __fastcall EntitlementManager::removeEntitlementChangeListener(int a1, unsigned int a2)
{
  int v2; // r9@1
  unsigned int v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  unsigned int result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = a2;
  v6 = *(_DWORD *)(v2 + 104);
  v20 = *(_DWORD *)(v2 + 104);
  v8 = a2 % v4;
  result = v5 / v4;
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (unsigned int)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = v13 / v4;
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = *(_DWORD *)(v2 + 116) - 1;
          *(_DWORD *)(v2 + 116) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *(_DWORD *)(v2 + 104);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)(v2 + 112) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}


_DWORD *__fastcall EntitlementManager::_buildCommercePurchaseURL(int *a1, int a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r8@1
  int *v5; // r6@1
  char *v6; // r5@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r5@1
  char *v9; // r5@1
  char *v10; // r5@1
  char *v11; // r0@1
  void *v12; // r0@1
  void *v13; // r0@2
  int v14; // r6@3
  unsigned int *v15; // r1@4
  unsigned int v16; // r0@6
  unsigned int *v17; // r5@10
  unsigned int v18; // r0@12
  void **v19; // r0@17
  void *v20; // r0@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  int v28; // [sp+4h] [bp-ECh]@1
  int v29; // [sp+8h] [bp-E8h]@1
  Social::User *v30; // [sp+Ch] [bp-E4h]@1
  int v31; // [sp+10h] [bp-E0h]@3
  void **v32; // [sp+14h] [bp-DCh]@1
  int v33; // [sp+18h] [bp-D8h]@18
  void **v34; // [sp+1Ch] [bp-D4h]@1
  void **v35; // [sp+20h] [bp-D0h]@17
  int v36; // [sp+3Ch] [bp-B4h]@18
  int v37; // [sp+44h] [bp-ACh]@17
  int v38; // [sp+48h] [bp-A8h]@18

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v32, 24);
  sub_119C904((char *)&v34, (int)"/tenants/", 9);
  v6 = sub_119C904((char *)&v34, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v30, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v30);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/user/", 6);
  CommerceIdentity::getUserId((CommerceIdentity *)&v29, v3 + 60);
  v9 = sub_119C904(v8, v29, *(_DWORD *)(v29 - 12));
  sub_119C904(v9, (int)"/wallet/", 8);
  sub_119C884((void **)&v28, "0");
  v10 = sub_119C904(v9, v28, *(_DWORD *)(v28 - 12));
  sub_119C904(v10, (int)"/device/", 8);
  v11 = sub_119C904(v10, *v5, *(_DWORD *)(*v5 - 12));
  sub_119C904(v11, (int)"/purchase", 9);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
  v13 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v31;
  if ( v31 )
    v15 = (unsigned int *)(v31 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  sub_119D48C(v4, (int)&v35);
  v19 = off_26D3F84;
  v32 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v32) = off_26D3F80[0];
  v34 = v19;
  v35 = &off_27734E8;
  v20 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v35 = &off_26D40A8;
  sub_119C954((unsigned int **)&v36);
  v32 = (void **)off_26D3F68;
  *(void ***)((char *)&v32 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v33 = 0;
  return sub_119C964(&v38);
}


_DWORD *__fastcall EntitlementManager::_buildCommerceURL(int *a1, int a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r8@1
  int *v5; // r6@1
  char *v6; // r4@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r4@1
  char *v9; // r4@1
  void *v10; // r0@1
  void *v11; // r0@2
  int v12; // r5@3
  unsigned int *v13; // r1@4
  unsigned int v14; // r0@6
  unsigned int *v15; // r4@10
  unsigned int v16; // r0@12
  void **v17; // r0@19
  void *v18; // r0@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  int v26; // [sp+0h] [bp-F0h]@1
  int v27; // [sp+4h] [bp-ECh]@1
  Social::User *v28; // [sp+8h] [bp-E8h]@1
  int v29; // [sp+Ch] [bp-E4h]@3
  void **v30; // [sp+10h] [bp-E0h]@1
  int v31; // [sp+14h] [bp-DCh]@20
  void **v32; // [sp+18h] [bp-D8h]@1
  void **v33; // [sp+1Ch] [bp-D4h]@19
  int v34; // [sp+38h] [bp-B8h]@20
  int v35; // [sp+40h] [bp-B0h]@19
  int v36; // [sp+44h] [bp-ACh]@20

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v30, 24);
  sub_119C904((char *)&v32, (int)"/tenants/", 9);
  v6 = sub_119C904((char *)&v32, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v28, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v28);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/user/", 6);
  CommerceIdentity::getUserId((CommerceIdentity *)&v27, v3 + 60);
  v9 = sub_119C904(v8, v27, *(_DWORD *)(v27 - 12));
  sub_119C904(v9, (int)"/wallet/", 8);
  sub_119C884((void **)&v26, "0");
  sub_119C904(v9, v26, *(_DWORD *)(v26 - 12));
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = v29;
  if ( v29 )
    v13 = (unsigned int *)(v29 + 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 == 1 )
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  if ( *(_DWORD *)(*v5 - 12) )
    sub_119C904((char *)&v32, (int)"/", 1);
    sub_119C904((char *)&v32, *v5, *(_DWORD *)(*v5 - 12));
  sub_119D48C(v4, (int)&v33);
  v17 = off_26D3F84;
  v30 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v30) = off_26D3F80[0];
  v32 = v17;
  v33 = &off_27734E8;
  v18 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v33 = &off_26D40A8;
  sub_119C954((unsigned int **)&v34);
  v30 = (void **)off_26D3F68;
  *(void ***)((char *)&v30 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v31 = 0;
  return sub_119C964(&v36);
}


_DWORD *__fastcall EntitlementManager::_buildCommerceWalletRedeemURL(int *a1, int a2, int a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  int v5; // r7@1
  char *v6; // r5@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r5@1
  char *v9; // r5@1
  char *v10; // r5@1
  char *v11; // r0@1
  void *v12; // r0@1
  void *v13; // r0@2
  int v14; // r6@3
  unsigned int *v15; // r1@4
  unsigned int v16; // r0@6
  unsigned int *v17; // r5@10
  unsigned int v18; // r0@12
  void **v19; // r0@17
  void *v20; // r0@17
  unsigned int *v22; // r2@19
  signed int v23; // r1@21
  unsigned int *v24; // r2@23
  signed int v25; // r1@25
  unsigned int *v26; // r2@27
  signed int v27; // r1@29
  int v28; // [sp+4h] [bp-ECh]@1
  int v29; // [sp+8h] [bp-E8h]@1
  Social::User *v30; // [sp+Ch] [bp-E4h]@1
  int v31; // [sp+10h] [bp-E0h]@3
  void **v32; // [sp+14h] [bp-DCh]@1
  int v33; // [sp+18h] [bp-D8h]@18
  void **v34; // [sp+1Ch] [bp-D4h]@1
  void **v35; // [sp+20h] [bp-D0h]@17
  int v36; // [sp+3Ch] [bp-B4h]@18
  int v37; // [sp+44h] [bp-ACh]@17
  int v38; // [sp+48h] [bp-A8h]@18

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v32, 24);
  sub_119C904((char *)&v34, (int)"/tenants/", 9);
  v6 = sub_119C904((char *)&v34, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v30, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v30);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/market/", 8);
  v9 = sub_119C904(
         v8,
         *(&EntitlementManager::mStorePlatformNames + v5),
         *(_DWORD *)(*(&EntitlementManager::mStorePlatformNames + v5) - 12));
  sub_119C904(v9, (int)"/user/", 6);
  CommerceIdentity::getUserId((CommerceIdentity *)&v29, v3 + 60);
  v10 = sub_119C904(v9, v29, *(_DWORD *)(v29 - 12));
  sub_119C904(v10, (int)"/wallet/", 8);
  sub_119C884((void **)&v28, "0");
  v11 = sub_119C904(v10, v28, *(_DWORD *)(v28 - 12));
  sub_119C904(v11, (int)"/redeem", 7);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v28 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
  v13 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v29 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = v31;
  if ( v31 )
    v15 = (unsigned int *)(v31 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  sub_119D48C(v4, (int)&v35);
  v19 = off_26D3F84;
  v32 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v32) = off_26D3F80[0];
  v34 = v19;
  v35 = &off_27734E8;
  v20 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v35 = &off_26D40A8;
  sub_119C954((unsigned int **)&v36);
  v32 = (void **)off_26D3F68;
  *(void ***)((char *)&v32 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v33 = 0;
  return sub_119C964(&v38);
}


unsigned int __fastcall EntitlementManager::processAccountTransfer(EntitlementManager *this, int a2)
{
  int *v2; // r6@1
  EntitlementManager *v3; // r8@1
  int v4; // r4@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  int v9; // r5@7
  unsigned int *v10; // r7@7
  unsigned int v11; // r1@9
  unsigned int v12; // r1@14
  unsigned int v13; // r0@20
  unsigned int v14; // r0@27
  unsigned int v15; // r0@32
  int v16; // r0@35
  unsigned int *v17; // r2@36
  unsigned int v18; // r1@38
  int v19; // r5@43
  unsigned int *v20; // r1@44
  unsigned int v21; // r0@46
  unsigned int *v22; // r6@50
  unsigned int v23; // r0@52
  int v24; // r0@57
  unsigned int *v25; // r2@58
  unsigned int v26; // r1@60
  int v27; // r5@65
  unsigned int *v28; // r1@66
  unsigned int v29; // r0@68
  unsigned int *v30; // r6@72
  unsigned int v31; // r0@74
  unsigned int result; // r0@81
  int v33; // [sp+0h] [bp-38h]@30
  int v34; // [sp+4h] [bp-34h]@30
  int v35; // [sp+8h] [bp-30h]@25
  int v36; // [sp+Ch] [bp-2Ch]@25
  char v37; // [sp+10h] [bp-28h]@25
  int v38; // [sp+14h] [bp-24h]@65
  char v39; // [sp+18h] [bp-20h]@30
  int v40; // [sp+1Ch] [bp-1Ch]@43

  v2 = (int *)a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v9 = *v2;
  v10 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v11 = __ldrex(v10);
    while ( __strex(v11 + 1, v10) );
  else
    ++*v10;
      v12 = __ldrex(v6);
    while ( __strex(v12 - 1, v6) );
    v12 = (*v6)--;
  if ( v12 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v10);
      while ( __strex(v13 - 1, v10) );
    else
      v13 = (*v10)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v37, (int)(v2 + 15), 0);
  v35 = v9;
  v36 = v4;
      v14 = __ldrex(v10);
    while ( __strex(v14 + 1, v10) );
  sub_109C3BC((int)&v39, (int)&v37, (int)&v35);
  v33 = v9;
  v34 = v4;
      v15 = __ldrex(v10);
    while ( __strex(v15 + 1, v10) );
  sub_109CD24((int)v3, (int)&v39, (int)&v33);
  v16 = v34;
  if ( v34 )
    v17 = (unsigned int *)(v34 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v40;
  if ( v40 )
    v20 = (unsigned int *)(v40 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = v36;
  if ( v36 )
    v25 = (unsigned int *)(v36 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v24 + 12))(v24);
  v27 = v38;
  if ( v38 )
    v28 = (unsigned int *)(v38 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
      result = __ldrex(v10);
    while ( __strex(result - 1, v10) );
    result = (*v10)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


void __fastcall EntitlementManager::_setCurrencyBalanceFromJson(EntitlementManager *this, const web::json::value *a2)
{
  web::json::value *v2; // r4@1
  EntitlementManager *v3; // r5@1
  void *v4; // r0@1
  web::json::value *v5; // r5@2
  web::json::value *v6; // r9@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@28
  signed int v14; // r1@30
  char *v15; // r0@36
  void *v16; // r0@37
  char *v17; // r8@38
  size_t v18; // r2@38
  void *v19; // r0@40
  __int64 v20; // r4@46
  unsigned int *v21; // r2@54
  signed int v22; // r1@56
  EntitlementManager *v23; // [sp+0h] [bp-60h]@1
  int v24; // [sp+8h] [bp-58h]@3
  int v25; // [sp+10h] [bp-50h]@28
  char *v26; // [sp+14h] [bp-4Ch]@4
  int v27; // [sp+1Ch] [bp-44h]@8
  void *s1; // [sp+20h] [bp-40h]@36
  int v29; // [sp+28h] [bp-38h]@1
  web::json::value *v30; // [sp+2Ch] [bp-34h]@1
  web::json::value *v31; // [sp+30h] [bp-30h]@2

  v2 = a2;
  v3 = this;
  sub_119C884((void **)&v29, "currencies");
  webjson::getFieldAsObjectArray((int)&v30, v2, &v29);
  v23 = v3;
  v4 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  v6 = v31;
  v5 = v30;
  if ( v30 != v31 )
    v24 = -1;
    do
      sub_119C884((void **)&v27, "currencyType");
      v26 = (char *)&unk_28898CC;
      webjson::getFieldAsString((int *)&s1, v5, &v27, (int *)&v26);
      v15 = v26 - 12;
      if ( (int *)(v26 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v26 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      }
      v16 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v27 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      v17 = (char *)s1;
      v18 = *((_DWORD *)s1 - 3);
      if ( v18 == *(_DWORD *)(dword_27D686C - 12) && !memcmp(s1, (const void *)dword_27D686C, v18) )
        sub_119C884((void **)&v25, "amount");
        v24 = webjson::getFieldAsInt(v5, &v25, -1);
        v19 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v25 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v19);
        v17 = (char *)s1;
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v17 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17 - 12);
      v5 = (web::json::value *)((char *)v5 + 4);
    while ( v5 != v6 );
    if ( v24 != -1 )
      *((_DWORD *)v23 + 18) = v24;
  v20 = *(_QWORD *)&v30;
      if ( *(_DWORD *)v20 )
        (*(void (**)(void))(**(_DWORD **)v20 + 96))();
      *(_DWORD *)v20 = 0;
      LODWORD(v20) = v20 + 4;
    while ( HIDWORD(v20) != (_DWORD)v20 );
    LODWORD(v20) = v30;
  if ( (_DWORD)v20 )
    operator delete((void *)v20);
}


void __fastcall EntitlementManager::_getAccessTokenFromJson(EntitlementManager *this, const web::json::value *a2, web::json::value *a3)
{
  web::json::value *v3; // r4@1
  int *v4; // r5@1
  char *v5; // r0@1
  void *v6; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  char *v11; // [sp+4h] [bp-2Ch]@1
  int v12; // [sp+Ch] [bp-24h]@1

  v3 = a3;
  v4 = (int *)this;
  sub_119C884((void **)&v12, "accessToken");
  v11 = (char *)&unk_28898CC;
  webjson::getFieldAsString(v4, v3, &v12, (int *)&v11);
  v5 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
}


void __fastcall EntitlementManager::getEntitlementsByCreator(int a1, const void **a2, int a3)
{
  EntitlementManager::getEntitlementsByCreator(a1, a2, a3);
}


void __fastcall EntitlementManager::_onLiveSignOut(EntitlementManager *this)
{
  EntitlementManager *v1; // r4@1
  int i; // r5@1

  v1 = this;
  __dmb();
  *((_DWORD *)this + 18) = 0;
  for ( i = *((_DWORD *)this + 21); i; i = *(_DWORD *)i )
    Entitlement::clear((Entitlement *)(i + 24), 0);
  if ( CommerceIdentity::hasAnActiveDeviceAccount((EntitlementManager *)((char *)v1 + 60)) == 1 )
    j_j_j__ZN18EntitlementManager19refreshEntitlementsEv(v1);
}


void __fastcall EntitlementManager::refreshEntitlements(EntitlementManager *this)
{
  EntitlementManager::refreshEntitlements(this);
}


_DWORD *__fastcall EntitlementManager::_buildCommerceAccessTokenURL(EntitlementManager *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  char *v4; // r7@1
  Social::XboxLiveUserManager *v5; // r0@1
  char *v6; // r7@1
  char *v7; // r7@1
  char *v8; // r0@1
  void *v9; // r0@1
  int v10; // r6@2
  unsigned int *v11; // r1@3
  unsigned int v12; // r0@5
  unsigned int *v13; // r7@9
  unsigned int v14; // r0@11
  void **v15; // r0@16
  void *v16; // r0@16
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  int v22; // [sp+0h] [bp-E0h]@1
  Social::User *v23; // [sp+4h] [bp-DCh]@1
  int v24; // [sp+8h] [bp-D8h]@2
  void **v25; // [sp+Ch] [bp-D4h]@1
  int v26; // [sp+10h] [bp-D0h]@17
  void **v27; // [sp+14h] [bp-CCh]@1
  void **v28; // [sp+18h] [bp-C8h]@16
  int v29; // [sp+34h] [bp-ACh]@17
  int v30; // [sp+3Ch] [bp-A4h]@16
  int v31; // [sp+40h] [bp-A0h]@17

  v2 = a2;
  v3 = (int *)this;
  sub_119CB58((int)&v25, 24);
  sub_119C904((char *)&v27, (int)"/tenants/", 9);
  v4 = sub_119C904((char *)&v27, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v4, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v23, *(_DWORD *)(v2 + 56));
  v5 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v23);
  Social::XboxLiveUserManager::getTitleId(v5);
  v6 = sub_119EA8C(v4);
  sub_119C904(v6, (int)"/market/", 8);
  v7 = sub_119C904(v6, dword_27D6894, *(_DWORD *)(dword_27D6894 - 12));
  sub_119C904(v7, (int)"/user/", 6);
  CommerceIdentity::getUserId((CommerceIdentity *)&v22, v2 + 60);
  v8 = sub_119C904(v7, v22, *(_DWORD *)(v22 - 12));
  sub_119C904(v8, (int)"/accesstoken", 12);
  v9 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v10 = v24;
  if ( v24 )
    v11 = (unsigned int *)(v24 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  sub_119D48C(v3, (int)&v28);
  v15 = off_26D3F84;
  v25 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v25) = off_26D3F80[0];
  v27 = v15;
  v28 = &off_27734E8;
  v16 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v30 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v28 = &off_26D40A8;
  sub_119C954((unsigned int **)&v29);
  v25 = (void **)off_26D3F68;
  *(void ***)((char *)&v25 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v26 = 0;
  return sub_119C964(&v31);
}


int __fastcall EntitlementManager::getEntitlement(EntitlementManager *this, const mce::UUID *a2)
{
  EntitlementManager *v2; // r5@1
  const mce::UUID *v3; // r4@1
  int v5; // [sp+0h] [bp-48h]@1
  int v6; // [sp+30h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  Entitlement::Entitlement((int)&v5, (int)a2);
  std::_Hashtable<mce::UUID,std::pair<mce::UUID const,Entitlement>,std::allocator<std::pair<mce::UUID const,Entitlement>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<mce::UUID const&,Entitlement>(
    &v6,
    (EntitlementManager *)((char *)v2 + 76),
    (int)v3,
    (int)&v5);
  Entitlement::~Entitlement((Entitlement *)&v5);
  return v6 + 24;
}


unsigned int __fastcall EntitlementManager::_processExternalStorePurchases(int a1, int a2, int a3, int *a4)
{
  int *v4; // r5@1
  int *v5; // r10@1
  int v6; // r9@1
  int v7; // r7@1
  int v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  int v13; // r6@7
  unsigned int *v14; // r4@7
  unsigned int v15; // r1@9
  unsigned int v16; // r1@14
  unsigned int v17; // r0@20
  unsigned int v18; // r0@27
  int v19; // r3@30
  unsigned int v20; // r0@32
  int v21; // r0@35
  unsigned int *v22; // r2@36
  unsigned int v23; // r1@38
  int v24; // r5@43
  unsigned int *v25; // r1@44
  unsigned int v26; // r0@46
  unsigned int *v27; // r6@50
  unsigned int v28; // r0@52
  void *v29; // r0@57
  int v30; // r0@58
  unsigned int *v31; // r2@59
  unsigned int v32; // r1@61
  void *v33; // r5@66
  unsigned int *v34; // r1@67
  unsigned int v35; // r0@69
  unsigned int *v36; // r6@73
  unsigned int v37; // r0@75
  unsigned int result; // r0@82
  unsigned int *v39; // r2@88
  signed int v40; // r1@90
  void *v41; // [sp+0h] [bp-50h]@0
  int v42; // [sp+4h] [bp-4Ch]@30
  int v43; // [sp+8h] [bp-48h]@30
  int v44; // [sp+Ch] [bp-44h]@25
  int v45; // [sp+10h] [bp-40h]@25
  int v46; // [sp+18h] [bp-38h]@30
  int v47; // [sp+1Ch] [bp-34h]@25
  void *v48; // [sp+20h] [bp-30h]@30
  char v49; // [sp+24h] [bp-2Ch]@30
  int v50; // [sp+28h] [bp-28h]@43

  v4 = (int *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v8 = a1;
  if ( !v6 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v6 + 4);
  v10 = (unsigned int *)(v6 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    }
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  }
  while ( v12 );
  __dmb();
  v13 = *v4;
  v14 = (unsigned int *)(v6 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  else
    ++*v14;
      v16 = __ldrex(v10);
    while ( __strex(v16 - 1, v10) );
    v16 = (*v10)--;
  if ( v16 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
    if ( &pthread_create )
      do
        v17 = __ldrex(v14);
      while ( __strex(v17 - 1, v14) );
    else
      v17 = (*v14)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v47, (int)(v4 + 15), 1);
  v44 = v13;
  v45 = v6;
      v18 = __ldrex(v14);
    while ( __strex(v18 + 1, v14) );
  sub_119C854(&v46, v5);
  sub_1097238((int)&v49, (int)&v47, (int)&v44, v19, v41, v42, v43, v44, v45, v7, v46, v47, v48);
  v42 = v13;
  v43 = v6;
      v20 = __ldrex(v14);
    while ( __strex(v20 + 1, v14) );
  sub_1097D0C(v8, (int)&v49, (int)&v42);
  v21 = v43;
  if ( v43 )
    v22 = (unsigned int *)(v43 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      (*(void (**)(void))(*(_DWORD *)v21 + 12))();
  v24 = v50;
  if ( v50 )
    v25 = (unsigned int *)(v50 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  v29 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v46 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = v45;
  if ( v45 )
    v31 = (unsigned int *)(v45 + 8);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      (*(void (**)(void))(*(_DWORD *)v30 + 12))();
  v33 = v48;
  if ( v48 )
    v34 = (unsigned int *)((char *)v48 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 == 1 )
      v36 = (unsigned int *)((char *)v33 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v33 + 8))(v33);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v33 + 12))(v33);
      result = __ldrex(v14);
    while ( __strex(result - 1, v14) );
    result = (*v14)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


int __fastcall EntitlementManager::_onEntitlementChange(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 112); i; i = *(_DWORD *)i )
  {
    result = *(_DWORD *)(i + 4);
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  }
  return result;
}


int __fastcall EntitlementManager::_verifycontentReceiptAndGetKeys(double a1, int a2, _BYTE **a3)
{
  int v3; // r7@1
  int v4; // r5@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  void *v7; // r4@3
  Crypto::Pkcs7::Pkcs7Verifier *v8; // r4@4
  _WORD *v9; // r5@4
  signed int v10; // r6@5
  int v11; // r8@5
  char *i; // r2@5
  __int64 v13; // r0@7
  __int16 v14; // r9@7
  unsigned int v15; // r4@7
  char *v16; // r0@10
  Crypto::Pkcs7::Pkcs7Verifier *v17; // r9@13
  void *v18; // r0@13
  int v19; // r1@14
  void *v20; // r0@15
  char *v21; // r0@16
  void *v22; // r0@17
  char *v23; // r0@18
  void *v24; // r0@19
  void *v25; // r0@22
  void *v26; // r0@25
  web::json::value *v27; // r6@26
  void **v28; // r8@27
  int *v29; // r5@27
  void **v30; // r10@27
  int *v31; // r4@27
  unsigned int *v32; // r2@29
  signed int v33; // r1@31
  unsigned int *v34; // r2@33
  signed int v35; // r1@35
  unsigned int *v36; // r2@37
  signed int v37; // r1@39
  unsigned int *v38; // r2@41
  signed int v39; // r1@43
  unsigned int *v40; // r2@45
  signed int v41; // r1@47
  unsigned int *v42; // r2@49
  signed int v43; // r1@51
  unsigned int *v44; // r2@57
  signed int v45; // r1@59
  signed int v46; // r1@61
  signed int v47; // r1@65
  signed int v48; // r1@69
  signed int v49; // r1@73
  signed int v50; // r1@77
  void *v51; // r0@85
  char *v52; // r0@86
  void *v53; // r0@87
  char *v54; // r0@88
  void *v55; // r0@89
  bool v56; // zf@90
  unsigned int v57; // r9@93
  int v58; // r10@93
  int v59; // r0@93
  int v60; // r7@94
  int v61; // r4@94
  bool v62; // zf@95
  int v63; // r6@100
  unsigned int *v64; // r2@103
  unsigned int *v65; // r2@107
  unsigned int *v66; // r2@111
  unsigned int *v67; // r2@115
  unsigned int *v68; // r2@119
  bool v69; // zf@123
  char *v70; // r0@127
  int v71; // r12@127
  int v72; // r1@127
  __int64 v73; // kr10_8@127
  void *v74; // r0@129
  int v75; // r4@131
  _BYTE *v76; // r0@138
  _BYTE *v77; // r0@139
  _BYTE *v78; // r0@140
  void *v79; // r0@144
  char *v80; // r0@145
  unsigned int *v82; // r2@149
  signed int v83; // r1@151
  unsigned int *v84; // r2@153
  signed int v85; // r1@155
  unsigned int *v86; // r2@157
  signed int v87; // r1@159
  unsigned int *v88; // r2@161
  signed int v89; // r1@163
  unsigned int *v90; // r2@201
  signed int v91; // r1@203
  unsigned int *v92; // r2@205
  signed int v93; // r1@207
  web::json::value *v94; // [sp+Ch] [bp-D4h]@93
  web::json::value *v95; // [sp+14h] [bp-CCh]@26
  _BYTE **v96; // [sp+24h] [bp-BCh]@1
  unsigned __int64 *v97; // [sp+28h] [bp-B8h]@4
  Crypto::Pkcs7::Pkcs7Verifier *v98; // [sp+2Ch] [bp-B4h]@4
  Crypto::Pkcs7::Pkcs7Verifier *v99; // [sp+2Ch] [bp-B4h]@88
  char *v100; // [sp+30h] [bp-B0h]@88
  int v101; // [sp+38h] [bp-A8h]@27
  int v102; // [sp+3Ch] [bp-A4h]@57
  char *v103; // [sp+40h] [bp-A0h]@85
  int v104; // [sp+48h] [bp-98h]@27
  int v105; // [sp+4Ch] [bp-94h]@27
  __int64 v106; // [sp+50h] [bp-90h]@85
  __int64 v107; // [sp+58h] [bp-88h]@91
  int v108; // [sp+64h] [bp-7Ch]@25
  web::json::value *v109; // [sp+68h] [bp-78h]@25
  web::json::value *v110; // [sp+6Ch] [bp-74h]@26
  _BYTE *v111; // [sp+74h] [bp-6Ch]@24
  char *v112; // [sp+78h] [bp-68h]@18
  int v113; // [sp+80h] [bp-60h]@18
  _BYTE *v114; // [sp+84h] [bp-5Ch]@18
  char *v115; // [sp+88h] [bp-58h]@16
  int v116; // [sp+90h] [bp-50h]@16
  _BYTE *v117; // [sp+94h] [bp-4Ch]@16
  int v118; // [sp+98h] [bp-48h]@15
  int v119; // [sp+9Ch] [bp-44h]@16
  int v120; // [sp+A0h] [bp-40h]@13
  int v121; // [sp+A4h] [bp-3Ch]@13
  char *v122; // [sp+A8h] [bp-38h]@4
  void *ptr; // [sp+ACh] [bp-34h]@4
  int v124; // [sp+B0h] [bp-30h]@4

  v3 = a2;
  v4 = LODWORD(a1);
  v96 = a3;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = sub_119C844(a1);
  *(_DWORD *)(v4 + 4) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v4 + 24) = 0;
    v7 = (void *)(v4 + 24);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)v4 = v7;
  v8 = (Crypto::Pkcs7::Pkcs7Verifier *)operator new(8u);
  Crypto::Pkcs7::Pkcs7Verifier::Pkcs7Verifier(v8);
  v97 = (unsigned __int64 *)v4;
  v98 = v8;
  (*(void (__fastcall **)(void **, Crypto::Pkcs7::Pkcs7Verifier *, int))(*(_DWORD *)v8 + 8))(&ptr, v8, v3);
  v122 = (char *)&unk_28898CC;
  v9 = ptr;
  if ( (unsigned int)(v124 - (_DWORD)ptr) >> 1 )
    v10 = (unsigned int)(v124 - (_DWORD)ptr) >> 1;
    v11 = 0;
    for ( i = (char *)&unk_28898CC; ; i = v122 )
    {
      v13 = *(_QWORD *)(i - 12);
      v14 = v9[v11];
      v15 = v13 + 1;
      if ( (unsigned int)(v13 + 1) > HIDWORD(v13) || *((_DWORD *)i - 1) >= 1 )
      {
        sub_119CAF8((const void **)&v122, v15);
        i = v122;
        LODWORD(v13) = *((_DWORD *)v122 - 3);
      }
      i[v13] = v14;
      v16 = v122;
      if ( (int *)(v122 - 12) != &dword_28898C0 )
        *((_DWORD *)v122 - 1) = 0;
        *((_DWORD *)v16 - 3) = v15;
        v16[v15] = byte_26C67B8[0];
      if ( ++v11 >= v10 )
        break;
    }
  sub_119C854(&v120, (int *)&v122);
  utility::conversions::to_utf8string(&v121, &v120);
  v17 = v98;
  v18 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v120 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v121;
  if ( *(_DWORD *)(v121 - 12) )
    utility::conversions::to_string_t(&v118, &v121);
    web::json::value::parse();
    v20 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v118 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      else
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    sub_119C884((void **)&v116, "OwnerId");
    v115 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v117, (web::json::value *)&v119, &v116, (int *)&v115);
    v21 = v115 - 12;
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v115 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v116 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
    sub_119C884((void **)&v113, "DeviceId");
    v112 = (char *)&unk_28898CC;
    webjson::getFieldAsString((int *)&v114, (web::json::value *)&v119, &v113, (int *)&v112);
    v23 = v112 - 12;
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v112 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v113 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    if ( Util::compareNoCase(*((_DWORD *)v117 - 3), v117, *((_DWORD *)*v96 - 3), *v96) )
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v25 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
        v25 = &ServiceLocator<AppPlatform>::mDefaultService;
      (*(void (__fastcall **)(_BYTE **))(**(_DWORD **)v25 + 488))(&v111);
      if ( Util::compareNoCase(*((_DWORD *)v114 - 3), v114, *((_DWORD *)v111 - 3), v111) )
        sub_119C884((void **)&v108, "Entitlements");
        webjson::getFieldAsObjectArray((int)&v109, (web::json::value *)&v119, &v108);
        v26 = (void *)(v108 - 12);
        if ( (int *)(v108 - 12) != &dword_28898C0 )
        {
          v92 = (unsigned int *)(v108 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
          }
          else
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v26);
        }
        v27 = v109;
        v95 = v110;
        if ( v109 != v110 )
          v28 = (void **)&v104;
          v29 = &v105;
          v30 = (void **)&v101;
          v31 = &dword_28898C0;
          do
            sub_119C884(v28, "ItemType");
            v103 = (char *)&unk_28898CC;
            webjson::getFieldAsString(v29, v27, (int *)v28, (int *)&v103);
            mce::UUID::fromString((int)&v106, v29);
            v51 = (void *)(v105 - 12);
            if ( (int *)(v105 - 12) != v31 )
            {
              v64 = (unsigned int *)(v105 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v46 = __ldrex(v64);
                while ( __strex(v46 - 1, v64) );
              }
              else
                v46 = (*v64)--;
              if ( v46 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v51);
            }
            v52 = v103 - 12;
            if ( (int *)(v103 - 12) != v31 )
              v65 = (unsigned int *)(v103 - 4);
                  v47 = __ldrex(v65);
                while ( __strex(v47 - 1, v65) );
                v47 = (*v65)--;
              if ( v47 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v52);
            v53 = (void *)(v104 - 12);
            if ( (int *)(v104 - 12) != v31 )
              v66 = (unsigned int *)(v104 - 4);
                  v48 = __ldrex(v66);
                while ( __strex(v48 - 1, v66) );
                v48 = (*v66)--;
              if ( v48 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v53);
            sub_119C884(v30, "Password");
            v100 = (char *)&unk_28898CC;
            webjson::getFieldAsString(&v102, v27, (int *)v30, (int *)&v100);
            v99 = v17;
            v54 = v100 - 12;
            if ( (int *)(v100 - 12) != v31 )
              v67 = (unsigned int *)(v100 - 4);
                  v49 = __ldrex(v67);
                while ( __strex(v49 - 1, v67) );
                v49 = (*v67)--;
              if ( v49 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v54);
            v55 = (void *)(v101 - 12);
            if ( (int *)(v101 - 12) != v31 )
              v68 = (unsigned int *)(v101 - 4);
                  v50 = __ldrex(v68);
                while ( __strex(v50 - 1, v68) );
                v50 = (*v68)--;
              if ( v50 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v55);
            v56 = *(_QWORD *)&mce::UUID::EMPTY == v106;
            if ( !(*(_QWORD *)&mce::UUID::EMPTY ^ v106) )
              v56 = qword_287E930 == v107;
            if ( !v56 )
              v94 = v27;
              v57 = 522133279 * v106 ^ HIDWORD(v106) ^ v107 ^ ((522133279 * (unsigned __int64)(unsigned int)v107 >> 32)
                                                             + 522133279 * HIDWORD(v107));
              v58 = v57 % (*v97 >> 32);
              v59 = *(_DWORD *)(*v97 + 4 * v58);
              if ( !v59 )
                goto LABEL_127;
              v60 = *(_DWORD *)v59;
              v61 = *(_DWORD *)(*(_DWORD *)v59 + 32);
              while ( 1 )
                v62 = v61 == v57;
                if ( v61 == v57 )
                  v62 = *(_QWORD *)(v60 + 8) == v106;
                if ( v62 && *(_QWORD *)(v60 + 16) == v107 )
                  break;
                v63 = *(_DWORD *)v60;
                if ( *(_DWORD *)v60 )
                {
                  v61 = *(_DWORD *)(v63 + 32);
                  v59 = v60;
                  v60 = *(_DWORD *)v60;
                  if ( *(_DWORD *)(v63 + 32) % (*v97 >> 32) == v58 )
                    continue;
                }
              v69 = v59 == 0;
              if ( v59 )
                v59 = *(_DWORD *)v59;
                v69 = v59 == 0;
              if ( v69 )
LABEL_127:
                v70 = (char *)operator new(0x28u);
                *(_DWORD *)v70 = 0;
                v71 = (int)(v70 + 8);
                v72 = HIDWORD(v106);
                v73 = v107;
                *(_DWORD *)v71 = v106;
                *(_DWORD *)(v71 + 4) = v72;
                *(_QWORD *)(v71 + 8) = v73;
                *((_DWORD *)v70 + 6) = &unk_28898CC;
                v59 = std::_Hashtable<mce::UUID,std::pair<mce::UUID const,std::string>,std::allocator<std::pair<mce::UUID const,std::string>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        (int)v97,
                        v58,
                        v57,
                        (int)v70);
              EntityInteraction::setInteractText((int *)(v59 + 24), &v102);
              v27 = v94;
              v28 = (void **)&v104;
              v31 = &dword_28898C0;
            v29 = &v105;
            v17 = v99;
            v30 = (void **)&v101;
            v74 = (void *)(v102 - 12);
            if ( (int *)(v102 - 12) != v31 )
              v44 = (unsigned int *)(v102 - 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v74);
            v27 = (web::json::value *)((char *)v27 + 4);
          while ( v27 != v95 );
          v27 = v110;
          v75 = (int)v109;
          if ( v109 != v110 )
              if ( *(_DWORD *)v75 )
                (*(void (**)(void))(**(_DWORD **)v75 + 96))();
              *(_DWORD *)v75 = 0;
              v75 += 4;
            while ( v27 != (web::json::value *)v75 );
            v27 = v109;
        if ( v27 )
          operator delete((void *)v27);
      v76 = v111 - 12;
      if ( (int *)(v111 - 12) != &dword_28898C0 )
        v90 = (unsigned int *)(v111 - 4);
        if ( &pthread_create )
          __dmb();
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
        else
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v76);
    v77 = v114 - 12;
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v114 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v77);
    v78 = v117 - 12;
    if ( (int *)(v117 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v117 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v78);
    if ( v119 )
      (*(void (**)(void))(*(_DWORD *)v119 + 96))();
    v19 = v121;
  v79 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v19 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v79);
  v80 = v122 - 12;
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v122 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v80);
  if ( ptr )
    operator delete(ptr);
  return (*(int (__fastcall **)(Crypto::Pkcs7::Pkcs7Verifier *))(*(_DWORD *)v17 + 4))(v17);
}


unsigned int __fastcall EntitlementManager::refreshBalance(EntitlementManager *this)
{
  EntitlementManager *v1; // r5@1
  int v2; // r4@1
  unsigned int v3; // r1@2
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@5
  unsigned int v6; // r3@6
  int v7; // r6@7
  unsigned int *v8; // r7@7
  unsigned int v9; // r1@9
  unsigned int v10; // r1@14
  unsigned int v11; // r0@20
  unsigned int v12; // r0@27
  unsigned int v13; // r0@32
  int v14; // r5@35
  unsigned int *v15; // r1@36
  unsigned int v16; // r0@38
  unsigned int *v17; // r6@42
  unsigned int v18; // r0@44
  int v19; // r0@49
  unsigned int *v20; // r2@50
  unsigned int v21; // r1@52
  int v22; // r5@57
  unsigned int *v23; // r1@58
  unsigned int v24; // r0@60
  unsigned int *v25; // r6@64
  unsigned int v26; // r0@66
  int v27; // r0@71
  unsigned int *v28; // r2@72
  unsigned int v29; // r1@74
  int v30; // r5@79
  unsigned int *v31; // r1@80
  unsigned int v32; // r0@82
  unsigned int *v33; // r6@86
  unsigned int v34; // r0@88
  unsigned int result; // r0@95
  int v36; // [sp+0h] [bp-40h]@30
  int v37; // [sp+4h] [bp-3Ch]@30
  int v38; // [sp+8h] [bp-38h]@25
  int v39; // [sp+Ch] [bp-34h]@25
  char v40; // [sp+10h] [bp-30h]@25
  int v41; // [sp+14h] [bp-2Ch]@79
  char v42; // [sp+18h] [bp-28h]@30
  int v43; // [sp+1Ch] [bp-24h]@57
  char v44; // [sp+20h] [bp-20h]@35
  int v45; // [sp+24h] [bp-1Ch]@35

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( !v2 )
    std::__throw_bad_weak_ptr();
  v3 = *(_DWORD *)(v2 + 4);
  v4 = (unsigned int *)(v2 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v3 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v5 = __ldrex(v4);
      if ( v5 == v3 )
        break;
      __clrex();
      v3 = v5;
    }
    v6 = __strex(v3 + 1, v4);
    v3 = v5;
  }
  while ( v6 );
  __dmb();
  v7 = *(_DWORD *)v1;
  v8 = (unsigned int *)(v2 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v9 = __ldrex(v8);
    while ( __strex(v9 + 1, v8) );
  else
    ++*v8;
      v10 = __ldrex(v4);
    while ( __strex(v10 - 1, v4) );
    v10 = (*v4)--;
  if ( v10 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
    if ( &pthread_create )
      do
        v11 = __ldrex(v8);
      while ( __strex(v11 - 1, v8) );
    else
      v11 = (*v8)--;
    if ( v11 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v40, (int)v1 + 60, 1);
  v38 = v7;
  v39 = v2;
      v12 = __ldrex(v8);
    while ( __strex(v12 + 1, v8) );
  sub_10901A8((int)&v42, (int)&v40, (int)&v38);
  v36 = v7;
  v37 = v2;
      v13 = __ldrex(v8);
    while ( __strex(v13 + 1, v8) );
  sub_1090B10((int)&v44, (int)&v42, (int)&v36);
  v14 = v45;
  if ( v45 )
    v15 = (unsigned int *)(v45 + 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 == 1 )
      v17 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
  v19 = v37;
  if ( v37 )
    v20 = (unsigned int *)(v37 + 8);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v19 + 12))(v19);
  v22 = v43;
  if ( v43 )
    v23 = (unsigned int *)(v43 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  v27 = v39;
  if ( v39 )
    v28 = (unsigned int *)(v39 + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v27 + 12))(v27);
  v30 = v41;
  if ( v41 )
    v31 = (unsigned int *)(v41 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
      result = __ldrex(v8);
    while ( __strex(result - 1, v8) );
    result = (*v8)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  return result;
}


signed int __fastcall EntitlementManager::getCommerceStoreNameFromPlatformStoreName(const void **a1)
{
  const void **v1; // r4@1
  signed int v2; // r5@8
  signed int result; // r0@11

  v1 = a1;
  if ( sub_119C9E8(a1, "android.amazonappstore") )
  {
    if ( sub_119C9E8(v1, "android.googleplay") )
    {
      if ( sub_119C9E8(v1, "appletv.store") && sub_119C9E8(v1, "ios.store") )
      {
        if ( sub_119C9E8(v1, "oculus.store.rift")
          && sub_119C9E8(v1, "oculus.store")
          && sub_119C9E8(v1, "oculus.store.gearvr") )
        {
          v2 = 1;
          if ( sub_119C9E8(v1, "uwp.store") )
          {
            if ( !sub_119C9E8(v1, "xboxone.store") )
              v2 = 7;
          }
          result = v2;
        }
        else
          result = 6;
      }
      else
        result = 3;
    }
    else
      result = 4;
  }
  else
    result = 5;
  return result;
}


int __fastcall EntitlementManager::tick(EntitlementManager *this)
{
  EntitlementManager *v1; // r4@1
  unsigned __int8 *v2; // r7@1
  unsigned int v3; // r0@2
  int v4; // r0@4
  __int64 v5; // r1@5
  int (*v6)(void); // r5@5
  void (__fastcall *v7)(_DWORD); // r0@5
  int (*v8)(void); // r3@5
  int v9; // r0@7
  void (*v10)(void); // r3@7
  int v11; // r0@10
  int v12; // r0@13
  int result; // r0@17
  __int64 v14; // [sp+0h] [bp-48h]@5
  int (*v15)(void); // [sp+8h] [bp-40h]@1
  void (__fastcall *v16)(_DWORD); // [sp+Ch] [bp-3Ch]@5
  __int64 v17; // [sp+10h] [bp-38h]@5
  int (*v18)(void); // [sp+18h] [bp-30h]@5
  void (__fastcall *v19)(_DWORD); // [sp+1Ch] [bp-2Ch]@5

  v1 = this;
  v2 = (unsigned __int8 *)this + 48;
  v15 = 0;
  while ( 1 )
  {
    do
    {
      do
        v3 = __ldrex(v2);
      while ( __strex(1u, v2) );
      __dmb();
    }
    while ( v3 );
    v4 = *((_DWORD *)v1 + 4);
    if ( *((_DWORD *)v1 + 8) == v4 )
      break;
    LODWORD(v5) = *(_DWORD *)v4;
    HIDWORD(v5) = *(_DWORD *)(v4 + 4);
    v6 = *(int (**)(void))(v4 + 8);
    *(_DWORD *)(v4 + 8) = 0;
    v7 = *(void (__fastcall **)(_DWORD))(v4 + 12);
    v17 = v14;
    v14 = v5;
    v8 = v15;
    v15 = v6;
    v18 = v8;
    v19 = v16;
    v16 = v7;
    if ( v8 )
      ((void (__fastcall *)(__int64 *, __int64 *, signed int))v8)(&v17, &v17, 3);
    v9 = *((_DWORD *)v1 + 4);
    v10 = *(void (**)(void))(v9 + 8);
    if ( v9 == *((_DWORD *)v1 + 6) - 16 )
      if ( v10 )
        v10();
      operator delete(*((void **)v1 + 5));
      v12 = *((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 7) = v12 + 4;
      v11 = *(_DWORD *)(v12 + 4);
      *((_DWORD *)v1 + 5) = v11;
      *((_DWORD *)v1 + 6) = v11 + 512;
    else
      {
        v9 = *((_DWORD *)v1 + 4);
      }
      v11 = v9 + 16;
    *((_DWORD *)v1 + 4) = v11;
    __dmb();
    *v2 = 0;
    if ( !v15 )
      sub_119C8E4();
    v16(&v14);
  }
  result = 0;
  __dmb();
  *v2 = 0;
  if ( v15 )
    result = v15();
  return result;
}


void __fastcall EntitlementManager::_setBIHeaders(EntitlementManager *this, web::http::http_request *a2)
{
  EntitlementManager *v2; // r5@1
  web::http::http_request *v3; // r6@1
  void *v4; // r0@2
  int v5; // r4@4
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@7
  int v9; // r7@9
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  int v13; // r7@12
  void *v14; // r0@13
  int *v15; // r0@15
  void *v16; // r0@15
  void *v17; // r0@16
  void *v18; // r0@17
  int v19; // r6@18
  void *v20; // r0@18
  void *v21; // r0@19
  void *v22; // r0@20
  void *v23; // r0@21
  void **v24; // r0@22
  void *v25; // r0@22
  void *v26; // r0@23
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  unsigned int *v45; // r2@61
  signed int v46; // r1@63
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  unsigned int *v51; // r2@73
  signed int v52; // r1@75
  unsigned int *v53; // r2@77
  signed int v54; // r1@79
  int v55; // [sp+0h] [bp-128h]@18
  int v56; // [sp+4h] [bp-124h]@18
  int v57; // [sp+Ch] [bp-11Ch]@18
  char v58; // [sp+10h] [bp-118h]@17
  int v59; // [sp+20h] [bp-108h]@17
  int v60; // [sp+24h] [bp-104h]@17
  int v61; // [sp+28h] [bp-100h]@15
  int v62; // [sp+30h] [bp-F8h]@12
  int v63; // [sp+34h] [bp-F4h]@9
  int v64; // [sp+38h] [bp-F0h]@9
  int v65; // [sp+40h] [bp-E8h]@9
  void **v66; // [sp+44h] [bp-E4h]@9
  int v67; // [sp+48h] [bp-E0h]@23
  void **v68; // [sp+4Ch] [bp-DCh]@9
  void **v69; // [sp+50h] [bp-D8h]@9
  int v70; // [sp+6Ch] [bp-BCh]@23
  int v71; // [sp+74h] [bp-B4h]@22
  int v72; // [sp+78h] [bp-B0h]@23
  int v73; // [sp+100h] [bp-28h]@4
  int v74; // [sp+108h] [bp-20h]@4
  int v75; // [sp+10Ch] [bp-1Ch]@4

  v2 = this;
  v3 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v4 + 488))(&v75);
  v5 = *(_DWORD *)v3;
  sub_119C884((void **)&v74, "x-bi-machineid");
  utility::conversions::to_string_t(&v73, &v75);
  web::http::http_headers::add<std::string>(v5 + 20, &v74, &v73);
  v6 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v73 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v74 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
    v8 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v8 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (**)(void))(**(_DWORD **)v8 + 440))();
  sub_119CB58((int)&v66, 24);
  sub_119EA8C((char *)&v68);
  v9 = *(_DWORD *)v3;
  sub_119C884((void **)&v65, "x-bi-platform");
  sub_119D48C(&v63, (int)&v69);
  utility::conversions::to_string_t(&v64, &v63);
  web::http::http_headers::add<std::string>(v9 + 20, &v65, &v64);
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v64 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v63 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v65 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = *(_DWORD *)v3;
  sub_119C884((void **)&v62, "x-bi-geography");
    v14 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v14 = &ServiceLocator<AppPlatform>::mDefaultService;
  v15 = (int *)(*(int (**)(void))(**(_DWORD **)v14 + 136))();
  utility::conversions::to_string_t(&v61, v15);
  web::http::http_headers::add<std::string>(v13 + 20, &v62, &v61);
  v16 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v61 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v62 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  Crypto::Random::generateUUID((int)&v58);
  mce::UUID::asString((mce::UUID *)&v59);
  utility::conversions::to_string_t(&v60, &v59);
  v18 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v59 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = *(_DWORD *)v3;
  sub_119C884((void **)&v57, "x-bi-clientcorrelationid");
  MinecraftEventing::getSessionId((MinecraftEventing *)&v55, *((_DWORD *)v2 + 13));
  utility::conversions::to_string_t(&v56, &v55);
  web::http::http_headers::add<std::string>(v19 + 20, &v57, &v56);
  v20 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v56 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v20);
  v21 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v55 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v57 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v60 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = off_26D3F84;
  v66 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v66) = off_26D3F80[0];
  v68 = v24;
  v69 = &off_27734E8;
  v25 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v71 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v69 = &off_26D40A8;
  sub_119C954((unsigned int **)&v70);
  v66 = (void **)off_26D3F68;
  *(void ***)((char *)&v66 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v67 = 0;
  sub_119C964(&v72);
  v26 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v75 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
}


unsigned int __fastcall EntitlementManager::acquireAccessToken(EntitlementManager *this, int a2)
{
  int *v2; // r6@1
  EntitlementManager *v3; // r8@1
  int v4; // r4@1
  unsigned int v5; // r1@2
  unsigned int *v6; // r0@2
  unsigned int v7; // r2@5
  unsigned int v8; // r3@6
  int v9; // r5@7
  unsigned int *v10; // r7@7
  unsigned int v11; // r1@9
  unsigned int v12; // r1@14
  unsigned int v13; // r0@20
  unsigned int v14; // r0@27
  unsigned int v15; // r0@32
  int v16; // r0@35
  unsigned int *v17; // r2@36
  unsigned int v18; // r1@38
  int v19; // r5@43
  unsigned int *v20; // r1@44
  unsigned int v21; // r0@46
  unsigned int *v22; // r6@50
  unsigned int v23; // r0@52
  int v24; // r0@57
  unsigned int *v25; // r2@58
  unsigned int v26; // r1@60
  int v27; // r5@65
  unsigned int *v28; // r1@66
  unsigned int v29; // r0@68
  unsigned int *v30; // r6@72
  unsigned int v31; // r0@74
  unsigned int result; // r0@81
  int v33; // [sp+0h] [bp-38h]@30
  int v34; // [sp+4h] [bp-34h]@30
  int v35; // [sp+8h] [bp-30h]@25
  int v36; // [sp+Ch] [bp-2Ch]@25
  char v37; // [sp+10h] [bp-28h]@25
  int v38; // [sp+14h] [bp-24h]@65
  char v39; // [sp+18h] [bp-20h]@30
  int v40; // [sp+1Ch] [bp-1Ch]@43

  v2 = (int *)a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 4);
  if ( !v4 )
    std::__throw_bad_weak_ptr();
  v5 = *(_DWORD *)(v4 + 4);
  v6 = (unsigned int *)(v4 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v5 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v7 = __ldrex(v6);
      if ( v7 == v5 )
        break;
      __clrex();
      v5 = v7;
    }
    v8 = __strex(v5 + 1, v6);
    v5 = v7;
  }
  while ( v8 );
  __dmb();
  v9 = *v2;
  v10 = (unsigned int *)(v4 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v11 = __ldrex(v10);
    while ( __strex(v11 + 1, v10) );
  else
    ++*v10;
      v12 = __ldrex(v6);
    while ( __strex(v12 - 1, v6) );
    v12 = (*v6)--;
  if ( v12 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    if ( &pthread_create )
      do
        v13 = __ldrex(v10);
      while ( __strex(v13 - 1, v10) );
    else
      v13 = (*v10)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v37, (int)(v2 + 15), 1);
  v35 = v9;
  v36 = v4;
      v14 = __ldrex(v10);
    while ( __strex(v14 + 1, v10) );
  sub_10A1BD8((int)&v39, (int)&v37, (int)&v35);
  v33 = v9;
  v34 = v4;
      v15 = __ldrex(v10);
    while ( __strex(v15 + 1, v10) );
  sub_10A2540((int)v3, (int)&v39, (int)&v33);
  v16 = v34;
  if ( v34 )
    v17 = (unsigned int *)(v34 + 8);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v16 + 12))(v16);
  v19 = v40;
  if ( v40 )
    v20 = (unsigned int *)(v40 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
      {
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      }
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = v36;
  if ( v36 )
    v25 = (unsigned int *)(v36 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v24 + 12))(v24);
  v27 = v38;
  if ( v38 )
    v28 = (unsigned int *)(v38 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
      result = __ldrex(v10);
    while ( __strex(result - 1, v10) );
    result = (*v10)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
  return result;
}


void __fastcall EntitlementManager::_setPurchaseReceiptBodyForPlatform(int a1, int *a2, int a3, int *a4, int a5)
{
  int *v5; // r6@1
  int *v6; // r4@1
  void *v7; // r0@2
  void *v8; // r0@3
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  void *v11; // r0@8
  int *v12; // r6@9
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  int *v18; // r5@16
  void *v19; // r0@18
  void *v20; // r0@19
  void *v21; // r0@20
  void *v22; // r0@21
  void *v23; // r0@22
  int *v24; // r5@23
  void *v25; // r0@25
  void *v26; // r0@26
  void *v27; // r0@27
  void *v28; // r0@28
  void *v29; // r0@29
  void *v30; // r0@30
  void *v31; // r0@31
  void *v32; // r0@32
  void *v33; // r0@35
  int v34; // r0@38
  void *v35; // r0@39
  int *v36; // r5@40
  void *v37; // r0@42
  void *v38; // r0@43
  void *v39; // r0@44
  void *v40; // r0@45
  void *v41; // r0@46
  int *v42; // r5@47
  void *v43; // r0@49
  void *v44; // r0@50
  void *v45; // r0@51
  void *v46; // r0@52
  void *v47; // r0@53
  void *v48; // r0@54
  void *v49; // r0@55
  void *v50; // r0@56
  int *v51; // r5@60
  void *v52; // r0@62
  void *v53; // r0@63
  void *v54; // r0@64
  void *v55; // r0@65
  void *v56; // r0@66
  void *v57; // r0@68
  int *v58; // r5@69
  void *v59; // r0@71
  void *v60; // r0@72
  void *v61; // r0@73
  void *v62; // r0@74
  void *v63; // r0@75
  int *v64; // r5@76
  void *v65; // r0@78
  void *v66; // r0@79
  void *v67; // r0@80
  void *v68; // r0@81
  void *v69; // r0@82
  void *v70; // r0@83
  void *v71; // r0@84
  void *v72; // r0@85
  void *v73; // r0@89
  int *v74; // r6@90
  void *v75; // r0@92
  void *v76; // r0@93
  int *v77; // r5@94
  void *v78; // r0@96
  void *v79; // r0@97
  void *v80; // r0@98
  void *v81; // r0@99
  void *v82; // r0@100
  void *v83; // r0@101
  void *v84; // r0@102
  void *v85; // r0@103
  unsigned int *v86; // r2@109
  signed int v87; // r1@111
  unsigned int *v88; // r2@113
  signed int v89; // r1@115
  unsigned int *v90; // r2@117
  signed int v91; // r1@119
  unsigned int *v92; // r2@121
  signed int v93; // r1@123
  unsigned int *v94; // r2@125
  signed int v95; // r1@127
  unsigned int *v96; // r2@129
  signed int v97; // r1@131
  unsigned int *v98; // r2@133
  signed int v99; // r1@135
  unsigned int *v100; // r2@137
  signed int v101; // r1@139
  unsigned int *v102; // r2@141
  signed int v103; // r1@143
  unsigned int *v104; // r2@145
  signed int v105; // r1@147
  unsigned int *v106; // r2@149
  signed int v107; // r1@151
  unsigned int *v108; // r2@153
  signed int v109; // r1@155
  unsigned int *v110; // r2@157
  signed int v111; // r1@159
  unsigned int *v112; // r2@161
  signed int v113; // r1@163
  unsigned int *v114; // r2@165
  signed int v115; // r1@167
  unsigned int *v116; // r2@169
  signed int v117; // r1@171
  unsigned int *v118; // r2@173
  signed int v119; // r1@175
  unsigned int *v120; // r2@177
  signed int v121; // r1@179
  unsigned int *v122; // r2@181
  signed int v123; // r1@183
  unsigned int *v124; // r2@185
  signed int v125; // r1@187
  unsigned int *v126; // r2@189
  signed int v127; // r1@191
  unsigned int *v128; // r2@193
  signed int v129; // r1@195
  unsigned int *v130; // r2@197
  signed int v131; // r1@199
  unsigned int *v132; // r2@201
  signed int v133; // r1@203
  unsigned int *v134; // r2@205
  signed int v135; // r1@207
  unsigned int *v136; // r2@209
  signed int v137; // r1@211
  unsigned int *v138; // r2@213
  signed int v139; // r1@215
  unsigned int *v140; // r2@217
  signed int v141; // r1@219
  unsigned int *v142; // r2@221
  signed int v143; // r1@223
  unsigned int *v144; // r2@225
  signed int v145; // r1@227
  unsigned int *v146; // r2@229
  signed int v147; // r1@231
  unsigned int *v148; // r2@233
  signed int v149; // r1@235
  unsigned int *v150; // r2@237
  signed int v151; // r1@239
  unsigned int *v152; // r2@241
  signed int v153; // r1@243
  unsigned int *v154; // r2@245
  signed int v155; // r1@247
  unsigned int *v156; // r2@249
  signed int v157; // r1@251
  unsigned int *v158; // r2@253
  signed int v159; // r1@255
  unsigned int *v160; // r2@257
  signed int v161; // r1@259
  unsigned int *v162; // r2@261
  signed int v163; // r1@263
  unsigned int *v164; // r2@265
  signed int v165; // r1@267
  unsigned int *v166; // r2@269
  signed int v167; // r1@271
  unsigned int *v168; // r2@273
  signed int v169; // r1@275
  unsigned int *v170; // r2@277
  signed int v171; // r1@279
  unsigned int *v172; // r2@281
  signed int v173; // r1@283
  unsigned int *v174; // r2@285
  signed int v175; // r1@287
  unsigned int *v176; // r2@289
  signed int v177; // r1@291
  unsigned int *v178; // r2@293
  signed int v179; // r1@295
  unsigned int *v180; // r2@297
  signed int v181; // r1@299
  unsigned int *v182; // r2@301
  signed int v183; // r1@303
  unsigned int *v184; // r2@305
  signed int v185; // r1@307
  unsigned int *v186; // r2@309
  signed int v187; // r1@311
  unsigned int *v188; // r2@313
  signed int v189; // r1@315
  unsigned int *v190; // r2@317
  signed int v191; // r1@319
  unsigned int *v192; // r2@321
  signed int v193; // r1@323
  unsigned int *v194; // r2@325
  signed int v195; // r1@327
  unsigned int *v196; // r2@329
  signed int v197; // r1@331
  unsigned int *v198; // r2@333
  signed int v199; // r1@335
  unsigned int *v200; // r2@337
  signed int v201; // r1@339
  unsigned int *v202; // r2@341
  signed int v203; // r1@343
  unsigned int *v204; // r2@345
  signed int v205; // r1@347
  unsigned int *v206; // r2@349
  signed int v207; // r1@351
  unsigned int *v208; // r2@353
  signed int v209; // r1@355
  unsigned int *v210; // r2@357
  signed int v211; // r1@359
  unsigned int *v212; // r2@361
  signed int v213; // r1@363
  unsigned int *v214; // r2@365
  signed int v215; // r1@367
  int v216; // [sp+8h] [bp-1E8h]@101
  int v217; // [sp+Ch] [bp-1E4h]@101
  int v218; // [sp+10h] [bp-1E0h]@101
  int v219; // [sp+18h] [bp-1D8h]@94
  int v220; // [sp+20h] [bp-1D0h]@94
  int v221; // [sp+24h] [bp-1CCh]@94
  int v222; // [sp+28h] [bp-1C8h]@94
  int v223; // [sp+2Ch] [bp-1C4h]@94
  int v224; // [sp+34h] [bp-1BCh]@94
  int v225; // [sp+38h] [bp-1B8h]@90
  int v226; // [sp+3Ch] [bp-1B4h]@90
  int v227; // [sp+44h] [bp-1ACh]@90
  int v228; // [sp+48h] [bp-1A8h]@89
  int v229; // [sp+4Ch] [bp-1A4h]@94
  int v230; // [sp+50h] [bp-1A0h]@89
  int v231; // [sp+58h] [bp-198h]@83
  int v232; // [sp+5Ch] [bp-194h]@83
  int v233; // [sp+60h] [bp-190h]@83
  int v234; // [sp+68h] [bp-188h]@76
  int v235; // [sp+70h] [bp-180h]@76
  int v236; // [sp+74h] [bp-17Ch]@76
  int v237; // [sp+78h] [bp-178h]@76
  int v238; // [sp+7Ch] [bp-174h]@76
  int v239; // [sp+84h] [bp-16Ch]@76
  int v240; // [sp+8Ch] [bp-164h]@69
  int v241; // [sp+94h] [bp-15Ch]@69
  int v242; // [sp+98h] [bp-158h]@69
  int v243; // [sp+9Ch] [bp-154h]@69
  int v244; // [sp+A0h] [bp-150h]@69
  int v245; // [sp+A8h] [bp-148h]@69
  int v246; // [sp+ACh] [bp-144h]@68
  int v247; // [sp+B0h] [bp-140h]@69
  int v248; // [sp+B4h] [bp-13Ch]@68
  int v249; // [sp+BCh] [bp-134h]@30
  int v250; // [sp+C0h] [bp-130h]@30
  int v251; // [sp+C4h] [bp-12Ch]@30
  int v252; // [sp+CCh] [bp-124h]@23
  int v253; // [sp+D4h] [bp-11Ch]@23
  int v254; // [sp+D8h] [bp-118h]@23
  int v255; // [sp+DCh] [bp-114h]@23
  int v256; // [sp+E0h] [bp-110h]@23
  int v257; // [sp+E8h] [bp-108h]@23
  int v258; // [sp+F0h] [bp-100h]@16
  int v259; // [sp+F8h] [bp-F8h]@16
  int v260; // [sp+FCh] [bp-F4h]@16
  int v261; // [sp+100h] [bp-F0h]@16
  int v262; // [sp+104h] [bp-ECh]@16
  int v263; // [sp+10Ch] [bp-E4h]@16
  int v264; // [sp+110h] [bp-E0h]@15
  int v265; // [sp+114h] [bp-DCh]@16
  int v266; // [sp+11Ch] [bp-D4h]@13
  int v267; // [sp+124h] [bp-CCh]@13
  int v268; // [sp+128h] [bp-C8h]@13
  int v269; // [sp+12Ch] [bp-C4h]@9
  int v270; // [sp+130h] [bp-C0h]@9
  int v271; // [sp+138h] [bp-B8h]@9
  int v272; // [sp+13Ch] [bp-B4h]@8
  int v273; // [sp+140h] [bp-B0h]@13
  int v274; // [sp+144h] [bp-ACh]@8
  int v275; // [sp+14Ch] [bp-A4h]@64
  int v276; // [sp+150h] [bp-A0h]@64
  int v277; // [sp+154h] [bp-9Ch]@64
  int v278; // [sp+158h] [bp-98h]@60
  int v279; // [sp+15Ch] [bp-94h]@60
  int v280; // [sp+164h] [bp-8Ch]@60
  int v281; // [sp+168h] [bp-88h]@60
  int v282; // [sp+170h] [bp-80h]@54
  int v283; // [sp+174h] [bp-7Ch]@54
  int v284; // [sp+178h] [bp-78h]@54
  int v285; // [sp+180h] [bp-70h]@47
  int v286; // [sp+188h] [bp-68h]@47
  int v287; // [sp+18Ch] [bp-64h]@47
  int v288; // [sp+190h] [bp-60h]@47
  int v289; // [sp+194h] [bp-5Ch]@47
  int v290; // [sp+19Ch] [bp-54h]@47
  int v291; // [sp+1A4h] [bp-4Ch]@40
  int v292; // [sp+1ACh] [bp-44h]@40
  int v293; // [sp+1B0h] [bp-40h]@40
  int v294; // [sp+1B4h] [bp-3Ch]@40
  int v295; // [sp+1B8h] [bp-38h]@40
  int v296; // [sp+1C0h] [bp-30h]@40
  int v297; // [sp+1C4h] [bp-2Ch]@39
  int v298; // [sp+1C8h] [bp-28h]@40
  int v299; // [sp+1CCh] [bp-24h]@39
  int v300; // [sp+1D4h] [bp-1Ch]@2
  int v301; // [sp+1D8h] [bp-18h]@2

  v5 = a4;
  v6 = a2;
  switch ( a3 )
  {
    case 1:
      utility::conversions::to_string_t(&v301, a4);
      sub_119C884((void **)&v300, "text/plain; charset=utf-8");
      web::http::http_request::set_body(v6, &v301, &v300);
      v7 = (void *)(v300 - 12);
      if ( (int *)(v300 - 12) != &dword_28898C0 )
      {
        v90 = (unsigned int *)(v300 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v91 = __ldrex(v90);
          while ( __strex(v91 - 1, v90) );
        }
        else
          v91 = (*v90)--;
        if ( v91 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v8 = (void *)(v301 - 12);
      if ( (int *)(v301 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v301 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v8);
      return;
    case 4:
      web::json::value::value((web::json::value *)&v274);
      utility::conversions::to_string_t(&v272, (int *)(a5 + 8));
      web::json::value::parse();
      v11 = (void *)(v272 - 12);
      if ( (int *)(v272 - 12) != &dword_28898C0 )
        v86 = (unsigned int *)(v272 - 4);
            v87 = __ldrex(v86);
          while ( __strex(v87 - 1, v86) );
          v87 = (*v86)--;
        if ( v87 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v11);
      sub_119C884((void **)&v271, "productId");
      v12 = (int *)web::json::value::operator[]((int)&v274);
      utility::conversions::to_string_t(&v269, (int *)a5);
      web::json::value::string(&v270, &v269);
      web::json::value::operator=(v12, &v270);
      if ( v270 )
        (*(void (**)(void))(*(_DWORD *)v270 + 96))();
      v270 = 0;
      v13 = (void *)(v269 - 12);
      if ( (int *)(v269 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v269 - 4);
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v14 = (void *)(v271 - 12);
      if ( (int *)(v271 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v271 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v14);
      sub_119C884((void **)&v267, "originaljson");
      sub_119C884((void **)&v266, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v268, (web::json::value *)&v273, &v267, &v266);
      v15 = (void *)(v266 - 12);
      if ( (int *)(v266 - 12) != &dword_28898C0 )
        v114 = (unsigned int *)(v266 - 4);
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v15);
      v16 = (void *)(v267 - 12);
      if ( (int *)(v267 - 12) != &dword_28898C0 )
        v116 = (unsigned int *)(v267 - 4);
            v117 = __ldrex(v116);
          while ( __strex(v117 - 1, v116) );
          v117 = (*v116)--;
        if ( v117 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v16);
      utility::conversions::to_string_t(&v264, &v268);
      v17 = (void *)(v264 - 12);
      if ( (int *)(v264 - 12) != &dword_28898C0 )
        v138 = (unsigned int *)(v264 - 4);
            v139 = __ldrex(v138);
          while ( __strex(v139 - 1, v138) );
          v139 = (*v138)--;
        if ( v139 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v17);
      sub_119C884((void **)&v263, "token");
      v18 = (int *)web::json::value::operator[]((int)&v274);
      sub_119C884((void **)&v259, "purchaseToken");
      sub_119C884((void **)&v258, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v260, (web::json::value *)&v265, &v259, &v258);
      utility::conversions::to_string_t(&v261, &v260);
      web::json::value::string(&v262, &v261);
      web::json::value::operator=(v18, &v262);
      if ( v262 )
        (*(void (**)(void))(*(_DWORD *)v262 + 96))();
      v262 = 0;
      v19 = (void *)(v261 - 12);
      if ( (int *)(v261 - 12) != &dword_28898C0 )
        v176 = (unsigned int *)(v261 - 4);
            v177 = __ldrex(v176);
          while ( __strex(v177 - 1, v176) );
          v177 = (*v176)--;
        if ( v177 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v20 = (void *)(v260 - 12);
      if ( (int *)(v260 - 12) != &dword_28898C0 )
        v178 = (unsigned int *)(v260 - 4);
            v179 = __ldrex(v178);
          while ( __strex(v179 - 1, v178) );
          v179 = (*v178)--;
        if ( v179 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v21 = (void *)(v258 - 12);
      if ( (int *)(v258 - 12) != &dword_28898C0 )
        v180 = (unsigned int *)(v258 - 4);
            v181 = __ldrex(v180);
          while ( __strex(v181 - 1, v180) );
          v181 = (*v180)--;
        if ( v181 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v21);
      v22 = (void *)(v259 - 12);
      if ( (int *)(v259 - 12) != &dword_28898C0 )
        v182 = (unsigned int *)(v259 - 4);
            v183 = __ldrex(v182);
          while ( __strex(v183 - 1, v182) );
          v183 = (*v182)--;
        if ( v183 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = (void *)(v263 - 12);
      if ( (int *)(v263 - 12) != &dword_28898C0 )
        v184 = (unsigned int *)(v263 - 4);
            v185 = __ldrex(v184);
          while ( __strex(v185 - 1, v184) );
          v185 = (*v184)--;
        if ( v185 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v23);
      sub_119C884((void **)&v257, "packageName");
      v24 = (int *)web::json::value::operator[]((int)&v274);
      sub_119C884((void **)&v253, "packageName");
      sub_119C884((void **)&v252, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v254, (web::json::value *)&v265, &v253, &v252);
      utility::conversions::to_string_t(&v255, &v254);
      web::json::value::string(&v256, &v255);
      web::json::value::operator=(v24, &v256);
      if ( v256 )
        (*(void (**)(void))(*(_DWORD *)v256 + 96))();
      v256 = 0;
      v25 = (void *)(v255 - 12);
      if ( (int *)(v255 - 12) != &dword_28898C0 )
        v198 = (unsigned int *)(v255 - 4);
            v199 = __ldrex(v198);
          while ( __strex(v199 - 1, v198) );
          v199 = (*v198)--;
        if ( v199 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v25);
      v26 = (void *)(v254 - 12);
      if ( (int *)(v254 - 12) != &dword_28898C0 )
        v200 = (unsigned int *)(v254 - 4);
            v201 = __ldrex(v200);
          while ( __strex(v201 - 1, v200) );
          v201 = (*v200)--;
        if ( v201 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v26);
      v27 = (void *)(v252 - 12);
      if ( (int *)(v252 - 12) != &dword_28898C0 )
        v202 = (unsigned int *)(v252 - 4);
            v203 = __ldrex(v202);
          while ( __strex(v203 - 1, v202) );
          v203 = (*v202)--;
        if ( v203 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      v28 = (void *)(v253 - 12);
      if ( (int *)(v253 - 12) != &dword_28898C0 )
        v204 = (unsigned int *)(v253 - 4);
            v205 = __ldrex(v204);
          while ( __strex(v205 - 1, v204) );
          v205 = (*v204)--;
        if ( v205 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v29 = (void *)(v257 - 12);
      if ( (int *)(v257 - 12) != &dword_28898C0 )
        v206 = (unsigned int *)(v257 - 4);
            v207 = __ldrex(v206);
          while ( __strex(v207 - 1, v206) );
          v207 = (*v206)--;
        if ( v207 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      web::json::value::serialize((web::json::value *)&v250, (int)&v274);
      utility::conversions::to_string_t(&v251, &v250);
      sub_119C884((void **)&v249, "application/json");
      web::http::http_request::set_body(v6, &v251, &v249);
      v30 = (void *)(v249 - 12);
      if ( (int *)(v249 - 12) != &dword_28898C0 )
        v208 = (unsigned int *)(v249 - 4);
            v209 = __ldrex(v208);
          while ( __strex(v209 - 1, v208) );
          v209 = (*v208)--;
        if ( v209 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v31 = (void *)(v251 - 12);
      if ( (int *)(v251 - 12) != &dword_28898C0 )
        v210 = (unsigned int *)(v251 - 4);
            v211 = __ldrex(v210);
          while ( __strex(v211 - 1, v210) );
          v211 = (*v210)--;
        if ( v211 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v31);
      v32 = (void *)(v250 - 12);
      if ( (int *)(v250 - 12) != &dword_28898C0 )
        v212 = (unsigned int *)(v250 - 4);
            v213 = __ldrex(v212);
          while ( __strex(v213 - 1, v212) );
          v213 = (*v212)--;
        if ( v213 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v32);
      if ( v265 )
        (*(void (**)(void))(*(_DWORD *)v265 + 96))();
      v33 = (void *)(v268 - 12);
      if ( (int *)(v268 - 12) != &dword_28898C0 )
        v214 = (unsigned int *)(v268 - 4);
            v215 = __ldrex(v214);
          while ( __strex(v215 - 1, v214) );
          v215 = (*v214)--;
        if ( v215 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v33);
      if ( v273 )
        (*(void (**)(void))(*(_DWORD *)v273 + 96))();
      v34 = v274;
      goto LABEL_107;
    case 7:
      web::json::value::value((web::json::value *)&v299);
      utility::conversions::to_string_t(&v297, (int *)(a5 + 8));
      v35 = (void *)(v297 - 12);
      if ( (int *)(v297 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v297 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v35);
      sub_119C884((void **)&v296, "accessToken");
      v36 = (int *)web::json::value::operator[]((int)&v299);
      sub_119C884((void **)&v292, "access_token");
      sub_119C884((void **)&v291, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v293, (web::json::value *)&v298, &v292, &v291);
      utility::conversions::to_string_t(&v294, &v293);
      web::json::value::string(&v295, &v294);
      web::json::value::operator=(v36, &v295);
      if ( v295 )
        (*(void (**)(void))(*(_DWORD *)v295 + 96))();
      v295 = 0;
      v37 = (void *)(v294 - 12);
      if ( (int *)(v294 - 12) != &dword_28898C0 )
        v118 = (unsigned int *)(v294 - 4);
            v119 = __ldrex(v118);
          while ( __strex(v119 - 1, v118) );
          v119 = (*v118)--;
        if ( v119 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v37);
      v38 = (void *)(v293 - 12);
      if ( (int *)(v293 - 12) != &dword_28898C0 )
        v120 = (unsigned int *)(v293 - 4);
            v121 = __ldrex(v120);
          while ( __strex(v121 - 1, v120) );
          v121 = (*v120)--;
        if ( v121 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v38);
      v39 = (void *)(v291 - 12);
      if ( (int *)(v291 - 12) != &dword_28898C0 )
        v122 = (unsigned int *)(v291 - 4);
            v123 = __ldrex(v122);
          while ( __strex(v123 - 1, v122) );
          v123 = (*v122)--;
        if ( v123 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v39);
      v40 = (void *)(v292 - 12);
      if ( (int *)(v292 - 12) != &dword_28898C0 )
        v124 = (unsigned int *)(v292 - 4);
            v125 = __ldrex(v124);
          while ( __strex(v125 - 1, v124) );
          v125 = (*v124)--;
        if ( v125 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v40);
      v41 = (void *)(v296 - 12);
      if ( (int *)(v296 - 12) != &dword_28898C0 )
        v126 = (unsigned int *)(v296 - 4);
            v127 = __ldrex(v126);
          while ( __strex(v127 - 1, v126) );
          v127 = (*v126)--;
        if ( v127 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v41);
      sub_119C884((void **)&v290, "wsidKey");
      v42 = (int *)web::json::value::operator[]((int)&v299);
      sub_119C884((void **)&v286, "wsid_Key");
      sub_119C884((void **)&v285, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v287, (web::json::value *)&v298, &v286, &v285);
      utility::conversions::to_string_t(&v288, &v287);
      web::json::value::string(&v289, &v288);
      web::json::value::operator=(v42, &v289);
      if ( v289 )
        (*(void (**)(void))(*(_DWORD *)v289 + 96))();
      v289 = 0;
      v43 = (void *)(v288 - 12);
      if ( (int *)(v288 - 12) != &dword_28898C0 )
        v150 = (unsigned int *)(v288 - 4);
            v151 = __ldrex(v150);
          while ( __strex(v151 - 1, v150) );
          v151 = (*v150)--;
        if ( v151 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v43);
      v44 = (void *)(v287 - 12);
      if ( (int *)(v287 - 12) != &dword_28898C0 )
        v152 = (unsigned int *)(v287 - 4);
            v153 = __ldrex(v152);
          while ( __strex(v153 - 1, v152) );
          v153 = (*v152)--;
        if ( v153 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v44);
      v45 = (void *)(v285 - 12);
      if ( (int *)(v285 - 12) != &dword_28898C0 )
        v154 = (unsigned int *)(v285 - 4);
            v155 = __ldrex(v154);
          while ( __strex(v155 - 1, v154) );
          v155 = (*v154)--;
        if ( v155 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v45);
      v46 = (void *)(v286 - 12);
      if ( (int *)(v286 - 12) != &dword_28898C0 )
        v156 = (unsigned int *)(v286 - 4);
            v157 = __ldrex(v156);
          while ( __strex(v157 - 1, v156) );
          v157 = (*v156)--;
        if ( v157 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v46);
      v47 = (void *)(v290 - 12);
      if ( (int *)(v290 - 12) != &dword_28898C0 )
        v158 = (unsigned int *)(v290 - 4);
            v159 = __ldrex(v158);
          while ( __strex(v159 - 1, v158) );
          v159 = (*v158)--;
        if ( v159 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v47);
      web::json::value::serialize((web::json::value *)&v283, (int)&v299);
      utility::conversions::to_string_t(&v284, &v283);
      sub_119C884((void **)&v282, "application/json");
      web::http::http_request::set_body(v6, &v284, &v282);
      v48 = (void *)(v282 - 12);
      if ( (int *)(v282 - 12) != &dword_28898C0 )
        v186 = (unsigned int *)(v282 - 4);
            v187 = __ldrex(v186);
          while ( __strex(v187 - 1, v186) );
          v187 = (*v186)--;
        if ( v187 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v48);
      v49 = (void *)(v284 - 12);
      if ( (int *)(v284 - 12) != &dword_28898C0 )
        v188 = (unsigned int *)(v284 - 4);
            v189 = __ldrex(v188);
          while ( __strex(v189 - 1, v188) );
          v189 = (*v188)--;
        if ( v189 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v49);
      v50 = (void *)(v283 - 12);
      if ( (int *)(v283 - 12) != &dword_28898C0 )
        v190 = (unsigned int *)(v283 - 4);
            v191 = __ldrex(v190);
          while ( __strex(v191 - 1, v190) );
          v191 = (*v190)--;
        if ( v191 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v50);
      if ( v298 )
        (*(void (**)(void))(*(_DWORD *)v298 + 96))();
      v34 = v299;
    case 3:
      web::json::value::value((web::json::value *)&v281);
      sub_119C884((void **)&v280, "ReceiptV7");
      v51 = (int *)web::json::value::operator[]((int)&v281);
      utility::conversions::to_string_t(&v278, v5);
      web::json::value::string(&v279, &v278);
      web::json::value::operator=(v51, &v279);
      if ( v279 )
        (*(void (**)(void))(*(_DWORD *)v279 + 96))();
      v279 = 0;
      v52 = (void *)(v278 - 12);
      if ( (int *)(v278 - 12) != &dword_28898C0 )
        v96 = (unsigned int *)(v278 - 4);
            v97 = __ldrex(v96);
          while ( __strex(v97 - 1, v96) );
          v97 = (*v96)--;
        if ( v97 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v52);
      v53 = (void *)(v280 - 12);
      if ( (int *)(v280 - 12) != &dword_28898C0 )
        v98 = (unsigned int *)(v280 - 4);
            v99 = __ldrex(v98);
          while ( __strex(v99 - 1, v98) );
          v99 = (*v98)--;
        if ( v99 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v53);
      web::json::value::serialize((web::json::value *)&v276, (int)&v281);
      utility::conversions::to_string_t(&v277, &v276);
      sub_119C884((void **)&v275, "application/json");
      web::http::http_request::set_body(v6, &v277, &v275);
      v54 = (void *)(v275 - 12);
      if ( (int *)(v275 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v275 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v54);
      v55 = (void *)(v277 - 12);
      if ( (int *)(v277 - 12) != &dword_28898C0 )
        v110 = (unsigned int *)(v277 - 4);
            v111 = __ldrex(v110);
          while ( __strex(v111 - 1, v110) );
          v111 = (*v110)--;
        if ( v111 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      v56 = (void *)(v276 - 12);
      if ( (int *)(v276 - 12) != &dword_28898C0 )
        v112 = (unsigned int *)(v276 - 4);
            v113 = __ldrex(v112);
          while ( __strex(v113 - 1, v112) );
          v113 = (*v112)--;
        if ( v113 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v56);
      v34 = v281;
    case 5:
      web::json::value::value((web::json::value *)&v248);
      utility::conversions::to_string_t(&v246, (int *)(a5 + 8));
      v57 = (void *)(v246 - 12);
      if ( (int *)(v246 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v246 - 4);
            v93 = __ldrex(v92);
          while ( __strex(v93 - 1, v92) );
          v93 = (*v92)--;
        if ( v93 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v57);
      sub_119C884((void **)&v245, "amazonUserId");
      v58 = (int *)web::json::value::operator[]((int)&v248);
      sub_119C884((void **)&v241, "userId");
      sub_119C884((void **)&v240, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v242, (web::json::value *)&v247, &v241, &v240);
      utility::conversions::to_string_t(&v243, &v242);
      web::json::value::string(&v244, &v243);
      web::json::value::operator=(v58, &v244);
      if ( v244 )
        (*(void (**)(void))(*(_DWORD *)v244 + 96))();
      v244 = 0;
      v59 = (void *)(v243 - 12);
      if ( (int *)(v243 - 12) != &dword_28898C0 )
        v128 = (unsigned int *)(v243 - 4);
            v129 = __ldrex(v128);
          while ( __strex(v129 - 1, v128) );
          v129 = (*v128)--;
        if ( v129 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v59);
      v60 = (void *)(v242 - 12);
      if ( (int *)(v242 - 12) != &dword_28898C0 )
        v130 = (unsigned int *)(v242 - 4);
            v131 = __ldrex(v130);
          while ( __strex(v131 - 1, v130) );
          v131 = (*v130)--;
        if ( v131 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v60);
      v61 = (void *)(v240 - 12);
      if ( (int *)(v240 - 12) != &dword_28898C0 )
        v132 = (unsigned int *)(v240 - 4);
            v133 = __ldrex(v132);
          while ( __strex(v133 - 1, v132) );
          v133 = (*v132)--;
        if ( v133 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v61);
      v62 = (void *)(v241 - 12);
      if ( (int *)(v241 - 12) != &dword_28898C0 )
        v134 = (unsigned int *)(v241 - 4);
            v135 = __ldrex(v134);
          while ( __strex(v135 - 1, v134) );
          v135 = (*v134)--;
        if ( v135 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v62);
      v63 = (void *)(v245 - 12);
      if ( (int *)(v245 - 12) != &dword_28898C0 )
        v136 = (unsigned int *)(v245 - 4);
            v137 = __ldrex(v136);
          while ( __strex(v137 - 1, v136) );
          v137 = (*v136)--;
        if ( v137 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v63);
      sub_119C884((void **)&v239, "receiptId");
      v64 = (int *)web::json::value::operator[]((int)&v248);
      sub_119C884((void **)&v235, "receiptId");
      sub_119C884((void **)&v234, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v236, (web::json::value *)&v247, &v235, &v234);
      utility::conversions::to_string_t(&v237, &v236);
      web::json::value::string(&v238, &v237);
      web::json::value::operator=(v64, &v238);
      if ( v238 )
        (*(void (**)(void))(*(_DWORD *)v238 + 96))();
      v238 = 0;
      v65 = (void *)(v237 - 12);
      if ( (int *)(v237 - 12) != &dword_28898C0 )
        v160 = (unsigned int *)(v237 - 4);
            v161 = __ldrex(v160);
          while ( __strex(v161 - 1, v160) );
          v161 = (*v160)--;
        if ( v161 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v65);
      v66 = (void *)(v236 - 12);
      if ( (int *)(v236 - 12) != &dword_28898C0 )
        v162 = (unsigned int *)(v236 - 4);
            v163 = __ldrex(v162);
          while ( __strex(v163 - 1, v162) );
          v163 = (*v162)--;
        if ( v163 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v66);
      v67 = (void *)(v234 - 12);
      if ( (int *)(v234 - 12) != &dword_28898C0 )
        v164 = (unsigned int *)(v234 - 4);
            v165 = __ldrex(v164);
          while ( __strex(v165 - 1, v164) );
          v165 = (*v164)--;
        if ( v165 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v67);
      v68 = (void *)(v235 - 12);
      if ( (int *)(v235 - 12) != &dword_28898C0 )
        v166 = (unsigned int *)(v235 - 4);
            v167 = __ldrex(v166);
          while ( __strex(v167 - 1, v166) );
          v167 = (*v166)--;
        if ( v167 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v68);
      v69 = (void *)(v239 - 12);
      if ( (int *)(v239 - 12) != &dword_28898C0 )
        v168 = (unsigned int *)(v239 - 4);
            v169 = __ldrex(v168);
          while ( __strex(v169 - 1, v168) );
          v169 = (*v168)--;
        if ( v169 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v69);
      web::json::value::serialize((web::json::value *)&v232, (int)&v248);
      utility::conversions::to_string_t(&v233, &v232);
      sub_119C884((void **)&v231, "application/json");
      web::http::http_request::set_body(v6, &v233, &v231);
      v70 = (void *)(v231 - 12);
      if ( (int *)(v231 - 12) != &dword_28898C0 )
        v192 = (unsigned int *)(v231 - 4);
            v193 = __ldrex(v192);
          while ( __strex(v193 - 1, v192) );
          v193 = (*v192)--;
        if ( v193 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v70);
      v71 = (void *)(v233 - 12);
      if ( (int *)(v233 - 12) != &dword_28898C0 )
        v194 = (unsigned int *)(v233 - 4);
            v195 = __ldrex(v194);
          while ( __strex(v195 - 1, v194) );
          v195 = (*v194)--;
        if ( v195 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v71);
      v72 = (void *)(v232 - 12);
      if ( (int *)(v232 - 12) != &dword_28898C0 )
        v196 = (unsigned int *)(v232 - 4);
            v197 = __ldrex(v196);
          while ( __strex(v197 - 1, v196) );
          v197 = (*v196)--;
        if ( v197 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v72);
      if ( v247 )
        (*(void (**)(void))(*(_DWORD *)v247 + 96))();
      v34 = v248;
    case 6:
      web::json::value::value((web::json::value *)&v230);
      utility::conversions::to_string_t(&v228, (int *)(a5 + 8));
      v73 = (void *)(v228 - 12);
      if ( (int *)(v228 - 12) != &dword_28898C0 )
        v94 = (unsigned int *)(v228 - 4);
            v95 = __ldrex(v94);
          while ( __strex(v95 - 1, v94) );
          v95 = (*v94)--;
        if ( v95 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v73);
      sub_119C884((void **)&v227, "productId");
      v74 = (int *)web::json::value::operator[]((int)&v230);
      utility::conversions::to_string_t(&v225, (int *)a5);
      web::json::value::string(&v226, &v225);
      web::json::value::operator=(v74, &v226);
      if ( v226 )
        (*(void (**)(void))(*(_DWORD *)v226 + 96))();
      v226 = 0;
      v75 = (void *)(v225 - 12);
      if ( (int *)(v225 - 12) != &dword_28898C0 )
        v104 = (unsigned int *)(v225 - 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v75);
      v76 = (void *)(v227 - 12);
      if ( (int *)(v227 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v227 - 4);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v76);
      sub_119C884((void **)&v224, "userToken");
      v77 = (int *)web::json::value::operator[]((int)&v230);
      sub_119C884((void **)&v220, "user_token");
      sub_119C884((void **)&v219, (const char *)&unk_257BC67);
      webjson::getFieldAsString(&v221, (web::json::value *)&v229, &v220, &v219);
      utility::conversions::to_string_t(&v222, &v221);
      web::json::value::string(&v223, &v222);
      web::json::value::operator=(v77, &v223);
      if ( v223 )
        (*(void (**)(void))(*(_DWORD *)v223 + 96))();
      v223 = 0;
      v78 = (void *)(v222 - 12);
      if ( (int *)(v222 - 12) != &dword_28898C0 )
        v140 = (unsigned int *)(v222 - 4);
            v141 = __ldrex(v140);
          while ( __strex(v141 - 1, v140) );
          v141 = (*v140)--;
        if ( v141 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v78);
      v79 = (void *)(v221 - 12);
      if ( (int *)(v221 - 12) != &dword_28898C0 )
        v142 = (unsigned int *)(v221 - 4);
            v143 = __ldrex(v142);
          while ( __strex(v143 - 1, v142) );
          v143 = (*v142)--;
        if ( v143 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v79);
      v80 = (void *)(v219 - 12);
      if ( (int *)(v219 - 12) != &dword_28898C0 )
        v144 = (unsigned int *)(v219 - 4);
            v145 = __ldrex(v144);
          while ( __strex(v145 - 1, v144) );
          v145 = (*v144)--;
        if ( v145 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v80);
      v81 = (void *)(v220 - 12);
      if ( (int *)(v220 - 12) != &dword_28898C0 )
        v146 = (unsigned int *)(v220 - 4);
            v147 = __ldrex(v146);
          while ( __strex(v147 - 1, v146) );
          v147 = (*v146)--;
        if ( v147 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v81);
      v82 = (void *)(v224 - 12);
      if ( (int *)(v224 - 12) != &dword_28898C0 )
        v148 = (unsigned int *)(v224 - 4);
            v149 = __ldrex(v148);
          while ( __strex(v149 - 1, v148) );
          v149 = (*v148)--;
        if ( v149 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v82);
      web::json::value::serialize((web::json::value *)&v217, (int)&v230);
      utility::conversions::to_string_t(&v218, &v217);
      sub_119C884((void **)&v216, "application/json");
      web::http::http_request::set_body(v6, &v218, &v216);
      v83 = (void *)(v216 - 12);
      if ( (int *)(v216 - 12) != &dword_28898C0 )
        v170 = (unsigned int *)(v216 - 4);
            v171 = __ldrex(v170);
          while ( __strex(v171 - 1, v170) );
          v171 = (*v170)--;
        if ( v171 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v83);
      v84 = (void *)(v218 - 12);
      if ( (int *)(v218 - 12) != &dword_28898C0 )
        v172 = (unsigned int *)(v218 - 4);
            v173 = __ldrex(v172);
          while ( __strex(v173 - 1, v172) );
          v173 = (*v172)--;
        if ( v173 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v84);
      v85 = (void *)(v217 - 12);
      if ( (int *)(v217 - 12) != &dword_28898C0 )
        v174 = (unsigned int *)(v217 - 4);
            v175 = __ldrex(v174);
          while ( __strex(v175 - 1, v174) );
          v175 = (*v174)--;
        if ( v175 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v85);
      if ( v229 )
        (*(void (**)(void))(*(_DWORD *)v229 + 96))();
      v34 = v230;
LABEL_107:
      if ( v34 )
        (*(void (**)(void))(*(_DWORD *)v34 + 96))();
      break;
    default:
  }
}


int __fastcall EntitlementManager::_parseInventoryResponse(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, void *a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34)
{
  web::json::value *v34; // r4@1
  EntitlementManager *v35; // r5@1
  const void **v36; // r0@1
  void *v37; // r0@1
  char *v38; // r0@2
  double v39; // r0@3
  const void **v40; // r0@4
  void *v41; // r0@4
  void *v42; // r0@5
  web::json::value *v43; // r6@6
  void **v44; // r4@7
  int *v45; // r5@7
  int *v46; // r8@7
  bool v47; // zf@8
  int v48; // r1@9
  unsigned int *v49; // r2@12
  signed int v50; // r1@14
  unsigned int *v51; // r2@16
  signed int v52; // r1@18
  unsigned int *v53; // r2@20
  signed int v54; // r1@22
  void *v55; // r0@36
  char *v56; // r0@37
  void *v57; // r0@38
  unsigned int v58; // r10@39
  int v59; // r0@39
  int v60; // r5@40
  int v61; // r6@40
  bool v62; // zf@41
  int v63; // r4@46
  int v64; // r4@49
  int v65; // r6@58
  unsigned int *v66; // r2@60
  signed int v67; // r1@62
  void *v68; // r5@68
  int v69; // r1@68
  void *v70; // r0@68
  void *v71; // r0@73
  int result; // r0@74
  unsigned int *v73; // r2@77
  signed int v74; // r1@79
  unsigned int *v75; // r2@81
  signed int v76; // r1@83
  unsigned int *v77; // r2@85
  unsigned int *v78; // r2@89
  signed int v79; // r1@91
  unsigned int *v80; // r2@93
  signed int v81; // r1@95
  unsigned int *v82; // r2@117
  signed int v83; // r1@119
  unsigned __int64 *v84; // [sp+10h] [bp-C0h]@7
  web::json::value *v85; // [sp+14h] [bp-BCh]@6
  int *v86; // [sp+1Ch] [bp-B4h]@1
  int v87; // [sp+20h] [bp-B0h]@39
  web::json::value *v88; // [sp+24h] [bp-ACh]@37
  char *v89; // [sp+30h] [bp-A0h]@16
  int v90; // [sp+38h] [bp-98h]@7
  int v91; // [sp+3Ch] [bp-94h]@7
  __int64 v92; // [sp+40h] [bp-90h]@36
  __int64 v93; // [sp+48h] [bp-88h]@39
  int v94; // [sp+54h] [bp-7Ch]@5
  web::json::value *v95; // [sp+58h] [bp-78h]@5
  web::json::value *v96; // [sp+5Ch] [bp-74h]@6
  int v97; // [sp+68h] [bp-68h]@4
  int v98; // [sp+6Ch] [bp-64h]@4
  void *ptr; // [sp+70h] [bp-60h]@4
  unsigned int v100; // [sp+74h] [bp-5Ch]@39
  int v101; // [sp+78h] [bp-58h]@58
  int v102; // [sp+7Ch] [bp-54h]@70
  int v103; // [sp+88h] [bp-48h]@71
  char *v104; // [sp+8Ch] [bp-44h]@2
  int v105; // [sp+94h] [bp-3Ch]@2
  int v106; // [sp+98h] [bp-38h]@2
  int v107; // [sp+A0h] [bp-30h]@1
  int v108; // [sp+A4h] [bp-2Ch]@1

  v34 = (web::json::value *)a2;
  v35 = (EntitlementManager *)a1;
  v86 = (int *)a3;
  sub_119C884((void **)&v107, "Balance");
  v36 = webjson::getFieldAsObject(v34, &v107);
  web::json::value::value((web::json::value *)&v108, (const web::json::value *)v36);
  v37 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
  {
    v73 = (unsigned int *)(v107 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
    }
    else
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  }
  EntitlementManager::_setCurrencyBalanceFromJson(v35, (const web::json::value *)&v108);
  sub_119C884((void **)&v105, "EntitlementReceipt");
  v104 = (char *)&unk_28898CC;
  webjson::getFieldAsString(&v106, v34, &v105, (int *)&v104);
  v38 = v104 - 12;
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v104 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  HIDWORD(v39) = v105;
  LODWORD(v39) = v105 - 12;
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v105 - 4);
        HIDWORD(v39) = __ldrex(v77);
      while ( __strex(HIDWORD(v39) - 1, v77) );
      HIDWORD(v39) = (*v77)--;
    if ( SHIDWORD(v39) <= 0 )
      j_j_j_j_j__ZdlPv_9_1((void *)LODWORD(v39));
  LODWORD(v39) = &ptr;
  EntitlementManager::_verifycontentReceiptAndGetKeys(v39, (int)&v106, (_BYTE **)v86);
  sub_119C884((void **)&v97, "Inventory");
  v40 = webjson::getFieldAsObject(v34, &v97);
  web::json::value::value((web::json::value *)&v98, (const web::json::value *)v40);
  v41 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v97 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v41);
  sub_119C884((void **)&v94, "items");
  webjson::getFieldAsObjectArray((int)&v95, (web::json::value *)&v98, &v94);
  v42 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v94 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v42);
  v43 = v95;
  v85 = v96;
  if ( v95 != v96 )
    v44 = (void **)&v90;
    v84 = (unsigned __int64 *)((char *)v35 + 76);
    v45 = &v91;
    v46 = &dword_28898C0;
    do
      sub_119C884(v44, "type");
      v89 = (char *)&unk_28898CC;
      webjson::getFieldAsString(v45, v43, (int *)v44, (int *)&v89);
      mce::UUID::fromString((int)&v92, v45);
      v55 = (void *)(v91 - 12);
      if ( (int *)(v91 - 12) != v46 )
      {
        v49 = (unsigned int *)(v91 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
        }
        else
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v55);
      }
      v88 = v43;
      v56 = v89 - 12;
      if ( (int *)(v89 - 12) != v46 )
        v51 = (unsigned int *)(v89 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v56);
      v57 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != v46 )
        v53 = (unsigned int *)(v90 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v57);
      v87 = std::__detail::_Map_base<mce::UUID,std::pair<mce::UUID const,Entitlement>,std::allocator<std::pair<mce::UUID const,Entitlement>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v84,
              (int)&v92);
      v58 = 522133279 * v92 ^ HIDWORD(v92) ^ v93 ^ ((522133279 * (unsigned __int64)(unsigned int)v93 >> 32)
                                                  + 522133279 * HIDWORD(v93));
      v59 = *((_DWORD *)ptr + v58 % v100);
      if ( v59 )
        v60 = *(_DWORD *)v59;
        v61 = *(_DWORD *)(*(_DWORD *)v59 + 32);
        while ( 1 )
          v62 = v61 == v58;
          if ( v61 == v58 )
            v62 = *(_QWORD *)(v60 + 8) == v92;
          if ( v62 )
          {
            v48 = *(_QWORD *)(v60 + 16) ^ v93 | (*(_QWORD *)(v60 + 16) >> 32) ^ HIDWORD(v93);
            if ( *(_QWORD *)(v60 + 16) == v93 )
              break;
          }
          v63 = *(_DWORD *)v60;
          if ( *(_DWORD *)v60 )
            v61 = *(_DWORD *)(v63 + 32);
            v59 = v60;
            v60 = *(_DWORD *)v60;
            if ( *(_DWORD *)(v63 + 32) % v100 == v58 % v100 )
              continue;
          goto LABEL_48;
        v47 = v59 == 0;
        if ( v59 )
          v48 = *(_DWORD *)v59;
          v47 = *(_DWORD *)v59 == 0;
        if ( !v47 )
          EntityInteraction::setInteractText((int *)(v87 + 40), (int *)(v48 + 24));
LABEL_48:
      Entitlement::fillInFromJSON(v87, v86, v88);
      v44 = (void **)&v90;
      v46 = &dword_28898C0;
      v45 = &v91;
      v43 = (web::json::value *)((char *)v88 + 4);
    while ( (web::json::value *)((char *)v88 + 4) != v85 );
    v43 = v96;
    v64 = (int)v95;
    if ( v95 != v96 )
        if ( *(_DWORD *)v64 )
          (*(void (**)(void))(**(_DWORD **)v64 + 96))();
        *(_DWORD *)v64 = 0;
        v64 += 4;
      while ( v43 != (web::json::value *)v64 );
      v43 = v95;
  if ( v43 )
    operator delete((void *)v43);
  if ( v98 )
    (*(void (**)(void))(*(_DWORD *)v98 + 96))();
  v65 = v101;
  while ( v65 )
    v68 = (void *)v65;
    v69 = *(_DWORD *)(v65 + 24);
    v65 = *(_DWORD *)v65;
    v70 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v69 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
      else
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v70);
    operator delete(v68);
  _aeabi_memclr4(ptr, 4 * v100);
  v101 = 0;
  v102 = 0;
  if ( ptr && &v103 != ptr )
    operator delete(ptr);
  v71 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v106 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v71);
  result = v108;
  if ( v108 )
    result = (*(int (**)(void))(*(_DWORD *)v108 + 96))();
  return result;
}


void __fastcall EntitlementManager::refreshInventory(EntitlementManager *this)
{
  EntitlementManager::refreshInventory(this);
}


int __fastcall EntitlementManager::_parseInventoryResponse(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, void *a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34)
{
  return EntitlementManager::_parseInventoryResponse(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34);
}


void __fastcall EntitlementManager::_setPurchaseReceiptBodyForExternalStorePurchases(int a1, int *a2, int a3, int *a4)
{
  int *v4; // r5@1
  int *v5; // r4@1
  void *v6; // r0@2
  int *v7; // r5@3
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  int *v13; // r5@10
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  void *v19; // r0@17
  void *v20; // r0@18
  void *v21; // r0@19
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int *v30; // r2@41
  signed int v31; // r1@43
  unsigned int *v32; // r2@45
  signed int v33; // r1@47
  unsigned int *v34; // r2@49
  signed int v35; // r1@51
  unsigned int *v36; // r2@53
  signed int v37; // r1@55
  unsigned int *v38; // r2@57
  signed int v39; // r1@59
  unsigned int *v40; // r2@61
  signed int v41; // r1@63
  unsigned int *v42; // r2@65
  signed int v43; // r1@67
  unsigned int *v44; // r2@69
  signed int v45; // r1@71
  unsigned int *v46; // r2@73
  signed int v47; // r1@75
  unsigned int *v48; // r2@77
  signed int v49; // r1@79
  int v50; // [sp+4h] [bp-74h]@17
  int v51; // [sp+8h] [bp-70h]@17
  int v52; // [sp+Ch] [bp-6Ch]@17
  int v53; // [sp+14h] [bp-64h]@10
  int v54; // [sp+1Ch] [bp-5Ch]@10
  int v55; // [sp+20h] [bp-58h]@10
  int v56; // [sp+24h] [bp-54h]@10
  int v57; // [sp+28h] [bp-50h]@10
  int v58; // [sp+30h] [bp-48h]@10
  int v59; // [sp+38h] [bp-40h]@3
  int v60; // [sp+40h] [bp-38h]@3
  int v61; // [sp+44h] [bp-34h]@3
  int v62; // [sp+48h] [bp-30h]@3
  int v63; // [sp+4Ch] [bp-2Ch]@3
  int v64; // [sp+54h] [bp-24h]@3
  int v65; // [sp+58h] [bp-20h]@2
  int v66; // [sp+5Ch] [bp-1Ch]@3
  int v67; // [sp+60h] [bp-18h]@2

  v4 = a4;
  v5 = a2;
  if ( a3 == 7 )
  {
    web::json::value::value((web::json::value *)&v67);
    utility::conversions::to_string_t(&v65, v4);
    web::json::value::parse();
    v6 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v65 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    sub_119C884((void **)&v64, "accessToken");
    v7 = (int *)web::json::value::operator[]((int)&v67);
    sub_119C884((void **)&v60, "access_token");
    sub_119C884((void **)&v59, (const char *)&unk_257BC67);
    webjson::getFieldAsString(&v61, (web::json::value *)&v66, &v60, &v59);
    utility::conversions::to_string_t(&v62, &v61);
    web::json::value::string(&v63, &v62);
    web::json::value::operator=(v7, &v63);
    if ( v63 )
      (*(void (**)(void))(*(_DWORD *)v63 + 96))();
    v63 = 0;
    v8 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v62 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v61 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    v10 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v59 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    v11 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v60 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v11);
    v12 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v64 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v12);
    sub_119C884((void **)&v58, "wsidKey");
    v13 = (int *)web::json::value::operator[]((int)&v67);
    sub_119C884((void **)&v54, "wsid_Key");
    sub_119C884((void **)&v53, (const char *)&unk_257BC67);
    webjson::getFieldAsString(&v55, (web::json::value *)&v66, &v54, &v53);
    utility::conversions::to_string_t(&v56, &v55);
    web::json::value::string(&v57, &v56);
    web::json::value::operator=(v13, &v57);
    if ( v57 )
      (*(void (**)(void))(*(_DWORD *)v57 + 96))();
    v57 = 0;
    v14 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v56 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v55 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v53 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
    v17 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v54 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v17);
    v18 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v58 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    web::json::value::serialize((web::json::value *)&v51, (int)&v67);
    utility::conversions::to_string_t(&v52, &v51);
    sub_119C884((void **)&v50, "application/json");
    web::http::http_request::set_body(v5, &v52, &v50);
    v19 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v50 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v19);
    v20 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v52 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v20);
    v21 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v51 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    if ( v66 )
      (*(void (**)(void))(*(_DWORD *)v66 + 96))();
    if ( v67 )
      (*(void (**)(void))(*(_DWORD *)v67 + 96))();
  }
}


unsigned int __fastcall EntitlementManager::purchaseLegacyOffer(int a1, const void **a2, unsigned __int64 *a3)
{
  int v3; // r6@0
  int v4; // r11@0
  int v5; // r9@1
  unsigned __int64 *v6; // r7@1
  signed int v7; // r0@1
  int v8; // r5@1
  unsigned int result; // r0@1
  bool v10; // zf@1
  int v11; // r4@4
  unsigned int *v12; // r1@5
  unsigned int *v13; // r7@11
  char v14; // [sp+4h] [bp-2Ch]@4
  int v15; // [sp+8h] [bp-28h]@4

  v5 = a1;
  v6 = a3;
  v7 = EntitlementManager::getCommerceStoreNameFromPlatformStoreName(a2);
  v8 = v7;
  result = v7 | 2;
  v10 = result == 3;
  if ( result != 3 )
  {
    v4 = *v6 >> 32;
    v3 = *v6;
    v10 = v3 == v4;
  }
  if ( !v10 )
    do
    {
      result = EntitlementManager::_processLegacyOfferPurchaseInfoRedeem((int)&v14, v5, v8, v3);
      v11 = v15;
      if ( v15 )
      {
        v12 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v12);
          while ( __strex(result - 1, v12) );
        }
        else
          result = (*v12)--;
        if ( result == 1 )
          v13 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v13);
            while ( __strex(result - 1, v13) );
          }
          else
            result = (*v13)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      }
      v3 += 16;
    }
    while ( v3 != v4 );
  return result;
}


unsigned int __fastcall EntitlementManager::processStoreCoinPurchase(int a1, int a2, int a3, int *a4, int *a5)
{
  int *v5; // r5@1
  int *v6; // r10@1
  int v7; // r4@1
  int v8; // r11@1
  int v9; // r9@1
  unsigned int *v10; // r0@2
  unsigned int v11; // r1@2
  unsigned int v12; // r2@5
  unsigned int v13; // r3@6
  int v14; // r6@7
  unsigned int *v15; // r7@7
  unsigned int v16; // r1@9
  unsigned int v17; // r1@14
  unsigned int v18; // r0@20
  unsigned int v19; // r0@27
  int v20; // r3@30
  unsigned int v21; // r0@32
  int v22; // r0@35
  unsigned int *v23; // r2@36
  unsigned int v24; // r1@38
  int v25; // r5@43
  unsigned int *v26; // r1@44
  unsigned int v27; // r0@46
  unsigned int *v28; // r6@50
  unsigned int v29; // r0@52
  int v30; // r5@57
  unsigned int *v31; // r1@58
  unsigned int v32; // r0@60
  unsigned int *v33; // r6@64
  unsigned int v34; // r0@66
  unsigned int result; // r0@73
  void *v36; // [sp+0h] [bp-60h]@30
  int v37; // [sp+4h] [bp-5Ch]@30
  int v38; // [sp+8h] [bp-58h]@25
  int v39; // [sp+Ch] [bp-54h]@25
  int v40; // [sp+14h] [bp-4Ch]@30
  int v41; // [sp+18h] [bp-48h]@30
  int v42; // [sp+1Ch] [bp-44h]@30
  void *v43; // [sp+20h] [bp-40h]@30
  char v44; // [sp+28h] [bp-38h]@25
  int v45; // [sp+2Ch] [bp-34h]@57
  char v46; // [sp+30h] [bp-30h]@30
  int v47; // [sp+34h] [bp-2Ch]@43

  v5 = (int *)a2;
  v6 = a4;
  v7 = *(_DWORD *)(a2 + 4);
  v8 = a3;
  v9 = a1;
  if ( !v7 )
    std::__throw_bad_weak_ptr();
  v10 = (unsigned int *)(v7 + 4);
  v11 = *(_DWORD *)(v7 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v11 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v12 = __ldrex(v10);
      if ( v12 == v11 )
        break;
      __clrex();
      v11 = v12;
    }
    v13 = __strex(v11 + 1, v10);
    v11 = v12;
  }
  while ( v13 );
  __dmb();
  v14 = *v5;
  v15 = (unsigned int *)(v7 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v16 = __ldrex(v15);
    while ( __strex(v16 + 1, v15) );
  else
    ++*v15;
      v17 = __ldrex(v10);
    while ( __strex(v17 - 1, v10) );
    v17 = (*v10)--;
  if ( v17 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
    if ( &pthread_create )
      do
        v18 = __ldrex(v15);
      while ( __strex(v18 - 1, v15) );
    else
      v18 = (*v15)--;
    if ( v18 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v44, (int)(v5 + 15), 1);
  v38 = v14;
  v39 = v7;
      v19 = __ldrex(v15);
    while ( __strex(v19 + 1, v15) );
  sub_119C854(&v40, v6);
  PurchaseInfo::PurchaseInfo(&v41, a5);
  sub_109ADC4((int)&v46, (int)&v44, (int)&v38, v20, v36, v37, v38, v39, v8, v40, v41, v42, v43);
  v36 = (void *)v14;
  v37 = v7;
      v21 = __ldrex(v15);
    while ( __strex(v21 + 1, v15) );
  sub_109B8D4(v9, (int)&v46, (int)&v36);
  v22 = v37;
  if ( v37 )
    v23 = (unsigned int *)(v37 + 8);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v22 + 12))(v22);
  v25 = v47;
  if ( v47 )
    v26 = (unsigned int *)(v47 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  sub_109C23C((int)&v38);
  v30 = v45;
  if ( v45 )
    v31 = (unsigned int *)(v45 + 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 == 1 )
      v33 = (unsigned int *)(v30 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 8))(v30);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v30 + 12))(v30);
      result = __ldrex(v15);
    while ( __strex(result - 1, v15) );
    result = (*v15)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


void __fastcall EntitlementManager::processLegacyOfferOwnership(int a1, int a2, int a3, unsigned __int64 *a4)
{
  EntitlementManager::processLegacyOfferOwnership(a1, a2, a3, a4);
}


void __fastcall EntitlementManager::_markLegacyEntitlementOwnership(int a1, int *a2)
{
  EntitlementManager::_markLegacyEntitlementOwnership(a1, a2);
}


void __fastcall EntitlementManager::_setPurchaseReceiptBodyForExternalStorePurchases(int a1, int *a2, int a3, int *a4)
{
  EntitlementManager::_setPurchaseReceiptBodyForExternalStorePurchases(a1, a2, a3, a4);
}


void __fastcall EntitlementManager::_onLiveSignIn(EntitlementManager *this)
{
  __dmb();
  *((_DWORD *)this + 18) = 0;
  j_j_j__ZN18EntitlementManager19refreshEntitlementsEv(this);
}


void __fastcall EntitlementManager::_fireEventEntitlementListInfo(EntitlementManager *this)
{
  EntitlementManager *v1; // r9@1
  int i; // r6@1
  unsigned __int64 *v3; // r7@4
  char *v4; // lr@5
  int v5; // r0@6
  int v6; // r2@6
  int v7; // r3@6
  int v8; // r7@6
  char *v9; // lr@7
  int v10; // r0@8
  int v11; // r2@8
  int v12; // r3@8
  int v13; // r7@8
  char *v14; // r0@9
  char *v15; // r11@9
  unsigned int v16; // r3@9
  unsigned int v17; // r2@11
  unsigned int v18; // r10@11
  int v19; // r2@18
  int v20; // r12@18
  int v21; // r4@18
  int v22; // r7@18
  int v23; // r2@18
  char *v24; // r3@18
  char *v25; // r2@18
  unsigned int v26; // r7@18
  __int64 v27; // kr18_8@19
  __int64 v28; // kr20_8@19
  char *v29; // r7@21
  char *v30; // r0@24
  char *v31; // r11@24
  unsigned int v32; // r3@24
  unsigned int v33; // r2@26
  unsigned int v34; // r10@26
  int v35; // r2@33
  int v36; // r12@33
  int v37; // r4@33
  int v38; // r7@33
  int v39; // r2@33
  char *v40; // r3@33
  char *v41; // r2@33
  unsigned int v42; // r7@33
  __int64 v43; // kr40_8@34
  __int64 v44; // kr48_8@34
  char *v45; // r7@36
  void *ptr; // [sp+4h] [bp-3Ch]@1
  char *v47; // [sp+8h] [bp-38h]@1
  char *v48; // [sp+Ch] [bp-34h]@1
  void *v49; // [sp+10h] [bp-30h]@1
  char *v50; // [sp+14h] [bp-2Ch]@1
  char *v51; // [sp+18h] [bp-28h]@1

  v1 = this;
  v50 = 0;
  v51 = 0;
  ptr = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  for ( i = *((_DWORD *)this + 21); i; i = *(_DWORD *)i )
  {
    if ( Entitlement::isOwned((Entitlement *)(i + 24)) == 1 && Entitlement::isValid((Entitlement *)(i + 24)) == 1 )
    {
      v3 = (unsigned __int64 *)(i + 8);
      if ( Entitlement::isLegacy((Entitlement *)(i + 24)) == 1 )
      {
        v4 = v47;
        if ( v47 == v48 )
        {
          v14 = (char *)ptr;
          v15 = 0;
          v16 = (v47 - (_BYTE *)ptr) >> 4;
          if ( !v16 )
            v16 = 1;
          v17 = v16 + ((v47 - (_BYTE *)ptr) >> 4);
          v18 = v16 + ((v47 - (_BYTE *)ptr) >> 4);
          if ( 0 != v17 >> 28 )
            v18 = 0xFFFFFFF;
          if ( v17 < v16 )
          if ( v18 )
          {
            if ( v18 >= 0x10000000 )
              sub_119C874();
            v15 = (char *)operator new(16 * v18);
            v4 = v47;
            v14 = (char *)ptr;
          }
          v20 = *v3 >> 32;
          v19 = *v3;
          v22 = *(_QWORD *)(i + 16) >> 32;
          v21 = *(_QWORD *)(i + 16);
          *(_DWORD *)&v15[v4 - v14] = v19;
          v23 = (int)&v15[v4 - v14];
          v24 = v15;
          *(_DWORD *)(v23 + 4) = v20;
          *(_DWORD *)(v23 + 8) = v21;
          *(_DWORD *)(v23 + 12) = v22;
          v25 = v14;
          v26 = (unsigned int)v15;
          if ( v4 != v14 )
            do
            {
              v27 = *(_QWORD *)v25;
              v28 = *((_QWORD *)v25 + 1);
              v25 += 16;
              *(_QWORD *)v24 = v27;
              *((_QWORD *)v24 + 1) = v28;
              v24 += 16;
            }
            while ( v4 != v25 );
            v26 = (unsigned int)&v15[((v4 - 16 - v14) & 0xFFFFFFF0) + 16];
          v29 = (char *)(v26 + 16);
          if ( v14 )
            operator delete(v14);
          ptr = v15;
          v47 = v29;
          v48 = &v15[16 * v18];
        }
        else
          v5 = *(_DWORD *)v3;
          v6 = *(_DWORD *)(i + 12);
          v7 = *(_DWORD *)(i + 16);
          v8 = *(_DWORD *)(i + 20);
          *(_DWORD *)v47 = v5;
          *((_DWORD *)v4 + 1) = v6;
          *((_DWORD *)v4 + 2) = v7;
          *((_DWORD *)v4 + 3) = v8;
          v47 = v4 + 16;
      }
      else
        v9 = v50;
        if ( v50 == v51 )
          v30 = (char *)v49;
          v31 = 0;
          v32 = (v50 - (_BYTE *)v49) >> 4;
          if ( !v32 )
            v32 = 1;
          v33 = v32 + ((v50 - (_BYTE *)v49) >> 4);
          v34 = v32 + ((v50 - (_BYTE *)v49) >> 4);
          if ( 0 != v33 >> 28 )
            v34 = 0xFFFFFFF;
          if ( v33 < v32 )
          if ( v34 )
            if ( v34 >= 0x10000000 )
            v31 = (char *)operator new(16 * v34);
            v9 = v50;
            v30 = (char *)v49;
          v36 = *v3 >> 32;
          v35 = *v3;
          v38 = *(_QWORD *)(i + 16) >> 32;
          v37 = *(_QWORD *)(i + 16);
          *(_DWORD *)&v31[v9 - v30] = v35;
          v39 = (int)&v31[v9 - v30];
          v40 = v31;
          *(_DWORD *)(v39 + 4) = v36;
          *(_DWORD *)(v39 + 8) = v37;
          *(_DWORD *)(v39 + 12) = v38;
          v41 = v30;
          v42 = (unsigned int)v31;
          if ( v9 != v30 )
              v43 = *(_QWORD *)v41;
              v44 = *((_QWORD *)v41 + 1);
              v41 += 16;
              *(_QWORD *)v40 = v43;
              *((_QWORD *)v40 + 1) = v44;
              v40 += 16;
            while ( v9 != v41 );
            v42 = (unsigned int)&v31[((v9 - 16 - v30) & 0xFFFFFFF0) + 16];
          v45 = (char *)(v42 + 16);
          if ( v30 )
            operator delete(v30);
          v49 = v31;
          v50 = v45;
          v51 = &v31[16 * v34];
          v10 = *(_DWORD *)v3;
          v11 = *(_DWORD *)(i + 12);
          v12 = *(_DWORD *)(i + 16);
          v13 = *(_DWORD *)(i + 20);
          *(_DWORD *)v50 = v10;
          *((_DWORD *)v9 + 1) = v11;
          *((_DWORD *)v9 + 2) = v12;
          *((_DWORD *)v9 + 3) = v13;
          v50 = v9 + 16;
    }
  }
  MinecraftEventing::fireEventEntitlementListInfo(*((_DWORD *)v1 + 13), (unsigned __int64 *)&v49, 0);
  MinecraftEventing::fireEventEntitlementListInfo(*((_DWORD *)v1 + 13), (unsigned __int64 *)&ptr, 1);
  if ( ptr )
    operator delete(ptr);
  if ( v49 )
    operator delete(v49);
}


void __fastcall EntitlementManager::purchaseCatalogOffer(int a1, const char **a2, const char **a3, int a4)
{
  EntitlementManager::purchaseCatalogOffer(a1, a2, a3, a4);
}


signed int __fastcall EntitlementManager::_checkRedeemResponseForSuccess(EntitlementManager *this, const web::json::value *a2)
{
  web::json::value *v2; // r4@1
  void *v3; // r0@1
  __int64 v4; // r4@2
  void *v5; // r0@2
  char *v6; // r7@3
  signed int result; // r0@10
  unsigned int *v8; // r2@13
  signed int v9; // r1@15
  int v10; // [sp+8h] [bp-28h]@1
  void *ptr; // [sp+Ch] [bp-24h]@1
  void *v12; // [sp+10h] [bp-20h]@2

  v2 = a2;
  sub_119C884((void **)&v10, "succeeded");
  webjson::getFieldAsObjectArray((int)&ptr, v2, &v10);
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *(_QWORD *)&ptr;
  v5 = ptr;
  if ( ptr != v12 )
    v6 = (char *)ptr;
    do
      if ( *(_DWORD *)v6 )
        (*(void (**)(void))(**(_DWORD **)v6 + 96))();
      *(_DWORD *)v6 = 0;
      v6 += 4;
    while ( (char *)HIDWORD(v4) != v6 );
    v5 = ptr;
  if ( v5 )
    operator delete(v5);
  result = 0;
  if ( HIDWORD(v4) != (_DWORD)v4 )
    result = 1;
  return result;
}


unsigned int __fastcall EntitlementManager::processCatalogOfferPurchase(int a1, int a2, int *a3, int *a4)
{
  int *v4; // r5@1
  int *v5; // r10@1
  int v6; // r9@1
  int *v7; // r7@1
  int v8; // r8@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  int v13; // r6@7
  unsigned int *v14; // r4@7
  unsigned int v15; // r1@9
  unsigned int v16; // r1@14
  unsigned int v17; // r0@20
  unsigned int v18; // r0@27
  int v19; // r3@30
  unsigned int v20; // r0@32
  int v21; // r0@35
  unsigned int *v22; // r2@36
  unsigned int v23; // r1@38
  int v24; // r5@43
  unsigned int *v25; // r1@44
  unsigned int v26; // r0@46
  unsigned int *v27; // r6@50
  unsigned int v28; // r0@52
  void *v29; // r0@57
  void *v30; // r0@58
  int v31; // r0@59
  unsigned int *v32; // r2@60
  unsigned int v33; // r1@62
  void *v34; // r5@67
  unsigned int *v35; // r1@68
  unsigned int v36; // r0@70
  unsigned int *v37; // r6@74
  unsigned int v38; // r0@76
  unsigned int result; // r0@83
  unsigned int *v40; // r2@89
  signed int v41; // r1@91
  unsigned int *v42; // r2@93
  signed int v43; // r1@95
  void *v44; // [sp+0h] [bp-50h]@0
  int v45; // [sp+4h] [bp-4Ch]@30
  int v46; // [sp+8h] [bp-48h]@30
  int v47; // [sp+Ch] [bp-44h]@25
  int v48; // [sp+10h] [bp-40h]@25
  int v49; // [sp+14h] [bp-3Ch]@30
  int v50; // [sp+18h] [bp-38h]@30
  int v51; // [sp+1Ch] [bp-34h]@25
  void *v52; // [sp+20h] [bp-30h]@30
  char v53; // [sp+24h] [bp-2Ch]@30
  int v54; // [sp+28h] [bp-28h]@43

  v4 = (int *)a2;
  v5 = a4;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a3;
  v8 = a1;
  if ( !v6 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v6 + 4);
  v10 = (unsigned int *)(v6 + 4);
  do
  {
    while ( 1 )
    {
      if ( !v9 )
        std::__throw_bad_weak_ptr();
      __dmb();
      v11 = __ldrex(v10);
      if ( v11 == v9 )
        break;
      __clrex();
      v9 = v11;
    }
    v12 = __strex(v9 + 1, v10);
    v9 = v11;
  }
  while ( v12 );
  __dmb();
  v13 = *v4;
  v14 = (unsigned int *)(v6 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v15 = __ldrex(v14);
    while ( __strex(v15 + 1, v14) );
  else
    ++*v14;
      v16 = __ldrex(v10);
    while ( __strex(v16 - 1, v10) );
    v16 = (*v10)--;
  if ( v16 == 1 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
    if ( &pthread_create )
      do
        v17 = __ldrex(v14);
      while ( __strex(v17 - 1, v14) );
    else
      v17 = (*v14)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v51, (int)(v4 + 15), 1);
  v47 = v13;
  v48 = v6;
      v18 = __ldrex(v14);
    while ( __strex(v18 + 1, v14) );
  sub_119C854(&v49, v7);
  sub_119C854(&v50, v5);
  sub_109994C((int)&v53, (int)&v51, (int)&v47, v19, v44, v45, v46, v47, v48, v49, v50, v51, v52);
  v45 = v13;
  v46 = v6;
      v20 = __ldrex(v14);
    while ( __strex(v20 + 1, v14) );
  sub_109A45C(v8, (int)&v53, (int)&v45);
  v21 = v46;
  if ( v46 )
    v22 = (unsigned int *)(v46 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      (*(void (**)(void))(*(_DWORD *)v21 + 12))();
  v24 = v54;
  if ( v54 )
    v25 = (unsigned int *)(v54 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  v29 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v50 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  v30 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v49 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v48;
  if ( v48 )
    v32 = (unsigned int *)(v48 + 8);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 == 1 )
      (*(void (**)(void))(*(_DWORD *)v31 + 12))();
  v34 = v52;
  if ( v52 )
    v35 = (unsigned int *)((char *)v52 + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)((char *)v34 + 8);
      (*(void (__fastcall **)(void *))(*(_DWORD *)v34 + 8))(v34);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (__fastcall **)(void *))(*(_DWORD *)v34 + 12))(v34);
      result = __ldrex(v14);
    while ( __strex(result - 1, v14) );
    result = (*v14)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  return result;
}


EntitlementManager *__fastcall EntitlementManager::~EntitlementManager(EntitlementManager *this)
{
  EntitlementManager *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  int v5; // r5@6
  int v6; // r6@7
  char *v7; // r0@8
  int v8; // r0@11
  int v9; // r1@13
  int v10; // r2@13
  int v11; // r3@13
  int v12; // r7@13
  __int64 v13; // kr00_8@13
  int v14; // r12@13
  void *v15; // r0@13
  unsigned int v16; // r6@14
  unsigned int v17; // r1@14
  unsigned int v18; // r7@15
  void *v19; // t1@16
  int v20; // r0@19
  unsigned int *v21; // r2@20
  unsigned int v22; // r1@22
  int v24; // [sp+4h] [bp-34h]@13
  __int64 v25; // [sp+8h] [bp-30h]@13
  int v26; // [sp+10h] [bp-28h]@13
  int v27; // [sp+14h] [bp-24h]@13
  int v28; // [sp+18h] [bp-20h]@13
  int v29; // [sp+1Ch] [bp-1Ch]@13
  int v30; // [sp+20h] [bp-18h]@13

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 28);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 13), 4 * (*((_QWORD *)v1 + 13) >> 32));
  *((_DWORD *)v1 + 28) = 0;
  *((_DWORD *)v1 + 29) = 0;
  v4 = (char *)*((_DWORD *)v1 + 26);
  if ( v4 && (char *)v1 + 128 != v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 21);
  if ( v5 )
      v6 = *(_DWORD *)v5;
      Entitlement::~Entitlement((Entitlement *)(v5 + 24));
      operator delete((void *)v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 76), 4 * (*(_QWORD *)((char *)v1 + 76) >> 32));
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  v7 = (char *)*((_DWORD *)v1 + 19);
  if ( v7 && (char *)v1 + 100 != v7 )
    operator delete(v7);
  v8 = *((_DWORD *)v1 + 17);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 17) = 0;
  v9 = *((_DWORD *)v1 + 5);
  v10 = *((_DWORD *)v1 + 6);
  v11 = *((_DWORD *)v1 + 7);
  v12 = *((_DWORD *)v1 + 8);
  v13 = *(_QWORD *)((char *)v1 + 36);
  v14 = *((_DWORD *)v1 + 11);
  v27 = *((_DWORD *)v1 + 4);
  v28 = v9;
  v29 = v10;
  v30 = v11;
  v24 = v12;
  v25 = v13;
  v26 = v14;
  std::deque<std::function<void ()(void)>,std::allocator<std::function<void ()(void)>>>::_M_destroy_data_aux(
    (int)v1 + 8,
    (int)&v27,
    (int)&v24);
  v15 = (void *)*((_DWORD *)v1 + 2);
  if ( v15 )
    v16 = *((_DWORD *)v1 + 11);
    v17 = *((_DWORD *)v1 + 7);
    if ( v17 < v16 + 4 )
      v18 = v17 - 4;
      do
      {
        v19 = *(void **)(v18 + 4);
        v18 += 4;
        operator delete(v19);
      }
      while ( v18 < v16 );
      v15 = (void *)*((_DWORD *)v1 + 2);
    operator delete(v15);
  v20 = *((_DWORD *)v1 + 1);
  if ( v20 )
    v21 = (unsigned int *)(v20 + 8);
    if ( &pthread_create )
      __dmb();
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  return v1;
}


void __fastcall EntitlementManager::_buildPurchaseTransactionBody(web::json::value *a1, int a2, int *a3)
{
  EntitlementManager::_buildPurchaseTransactionBody(a1, a2, a3);
}


void __fastcall EntitlementManager::_setCurrencyBalanceFromJson(EntitlementManager *this, const web::json::value *a2)
{
  EntitlementManager::_setCurrencyBalanceFromJson(this, a2);
}


void __fastcall EntitlementManager::purchaseCatalogOffer(int a1, const char **a2, const char **a3, int a4)
{
  int v4; // r9@1
  CommerceIdentity *v5; // r6@1
  const char **v6; // r10@1
  int v7; // r5@1
  const char **v8; // r8@1
  void *v9; // r0@1
  int v10; // r4@1
  void (__fastcall *v11)(char *, int, signed int); // r3@3
  int v12; // r3@5
  int v13; // r4@5
  unsigned int *v14; // r1@6
  unsigned int v15; // r0@8
  char v16; // r6@11
  int v17; // r7@11
  void (__fastcall *v18)(char *, int, signed int); // r3@11
  _DWORD *v19; // r0@13
  int v20; // r1@13
  unsigned int *v21; // r5@19
  unsigned int v22; // r0@21
  char *v23; // r0@26
  void *v24; // r0@27
  void *v25; // r0@28
  int v26; // r4@31
  unsigned int *v27; // r1@32
  unsigned int v28; // r0@34
  unsigned int *v29; // r5@38
  unsigned int v30; // r0@40
  void *v31; // r0@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  unsigned int *v38; // r2@59
  signed int v39; // r1@61
  unsigned int *v40; // r2@63
  signed int v41; // r1@65
  void *v42; // [sp+0h] [bp-A0h]@3
  int v43; // [sp+4h] [bp-9Ch]@0
  char v44; // [sp+8h] [bp-98h]@4
  int v45; // [sp+Ch] [bp-94h]@5
  int v46; // [sp+10h] [bp-90h]@3
  int v47; // [sp+14h] [bp-8Ch]@4
  int v48; // [sp+18h] [bp-88h]@5
  int v49; // [sp+1Ch] [bp-84h]@5
  void *v50; // [sp+20h] [bp-80h]@5
  int v51; // [sp+24h] [bp-7Ch]@5
  char v52; // [sp+28h] [bp-78h]@3
  int v53; // [sp+2Ch] [bp-74h]@31
  char v54; // [sp+30h] [bp-70h]@5
  int v55; // [sp+34h] [bp-6Ch]@5
  char v56; // [sp+38h] [bp-68h]@3
  int v57; // [sp+4Ch] [bp-54h]@3
  char v58; // [sp+50h] [bp-50h]@12
  void (*v59)(void); // [sp+58h] [bp-48h]@11
  int v60; // [sp+5Ch] [bp-44h]@12
  char v61; // [sp+60h] [bp-40h]@13
  _DWORD *v62; // [sp+68h] [bp-38h]@13
  void (*v63)(void); // [sp+70h] [bp-30h]@13
  int (__fastcall *v64)(int *); // [sp+74h] [bp-2Ch]@13
  int v65; // [sp+78h] [bp-28h]@1

  v4 = a1;
  v5 = (CommerceIdentity *)(a1 + 60);
  v6 = a2;
  v7 = a4;
  v8 = a3;
  CommerceIdentity::getUserId((CommerceIdentity *)&v65, a1 + 60);
  v9 = (void *)(v65 - 12);
  v10 = *(_DWORD *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v65 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  if ( v10 )
    Crypto::Random::generateUUID((int)&v56);
    mce::UUID::asString((mce::UUID *)&v57);
    MinecraftEventing::fireEventPurchaseAttempt(
      *(_DWORD *)(v4 + 52),
      (const char **)&unk_27D6870,
      v6,
      v8,
      (const char **)&v57);
    EntitlementManager::processCatalogOfferPurchase((int)&v52, v4, (int *)v6, &v57);
    v46 = 0;
    v11 = *(void (__fastcall **)(char *, int, signed int))(v7 + 8);
    if ( v11 )
      v11(&v44, v7, 2);
      v47 = *(_DWORD *)(v7 + 12);
      v46 = *(_DWORD *)(v7 + 8);
    sub_119C854(&v48, (int *)v6);
    sub_119C854(&v49, (int *)v8);
    sub_119C854((int *)&v50, &v57);
    v51 = v4;
    sub_1094D9C((int)&v54, (int)&v52, (int)&v44, v12, v42, v43, *(int *)&v44, v45, v46, v47, v48, v49, v50);
    v13 = v55;
    if ( v55 )
      v14 = (unsigned int *)(v55 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        v21 = (unsigned int *)(v13 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
        if ( &pthread_create )
        {
          __dmb();
          do
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
        }
        else
          v22 = (*v21)--;
        if ( v22 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
    v23 = (char *)v50 - 12;
    if ( (int *)((char *)v50 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)((char *)v50 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v49 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
    v25 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v48 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    if ( v46 )
      ((void (*)(void))v46)();
    v26 = v53;
    if ( v53 )
      v27 = (unsigned int *)(v53 + 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        v29 = (unsigned int *)(v26 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    v31 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v57 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
  else if ( *(_DWORD *)(v7 + 8) )
    v16 = CommerceIdentity::supportsDeviceAccounts(v5);
    v59 = 0;
    v17 = 0;
    v18 = *(void (__fastcall **)(char *, int, signed int))(v7 + 8);
    if ( v18 )
      v18(&v58, v7, 2);
      v60 = *(_DWORD *)(v7 + 12);
      v17 = *(_DWORD *)(v7 + 8);
      v59 = *(void (**)(void))(v7 + 8);
    v61 = v16;
    v63 = 0;
    v19 = operator new(0x14u);
    *(_QWORD *)v19 = *(_QWORD *)&v58;
    v20 = v60;
    v19[2] = v17;
    v19[3] = v20;
    *((_BYTE *)v19 + 16) = v16;
    v62 = v19;
    v63 = (void (*)(void))sub_10B30BC;
    v64 = sub_10B3096;
    MPMCQueue<std::function<void ()(void)>>::push(v4 + 8, (int)&v62);
    if ( v63 )
      v63();
    if ( v59 )
      v59();
}


void __fastcall EntitlementManager::setDeviceEntitlements(int a1, _QWORD *a2)
{
  int *v2; // r5@1 OVERLAPPED
  int *v3; // r6@1 OVERLAPPED
  int i; // r4@1

  *(_QWORD *)&v2 = *a2;
  for ( i = a1; v3 != v2; v2 += 4 )
    EntitlementManager::_markLegacyEntitlementOwnership(i, v2);
}


int __fastcall EntitlementManager::transferDeviceAccountToXboxLive(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  Social::XboxLiveUserManager *v4; // r0@4
  int v5; // r8@4
  int v6; // r6@4
  unsigned int *v7; // r1@5
  unsigned int v8; // r0@7
  unsigned int *v9; // r7@11
  unsigned int v10; // r0@13
  void (__fastcall *v11)(char *, int, signed int); // r3@21
  int result; // r0@23
  int v13; // r4@23
  unsigned int *v14; // r1@24
  unsigned int *v15; // r5@30
  int v16; // r4@39
  unsigned int *v17; // r1@40
  unsigned int *v18; // r5@46
  void *v19; // [sp+0h] [bp-48h]@0
  char v20; // [sp+4h] [bp-44h]@22
  int v21; // [sp+8h] [bp-40h]@23
  int v22; // [sp+Ch] [bp-3Ch]@21
  int v23; // [sp+10h] [bp-38h]@22
  int v24; // [sp+18h] [bp-30h]@21
  int v25; // [sp+1Ch] [bp-2Ch]@23
  char v26; // [sp+20h] [bp-28h]@23
  int v27; // [sp+24h] [bp-24h]@23
  Social::User *v28; // [sp+28h] [bp-20h]@4
  int v29; // [sp+2Ch] [bp-1Ch]@4

  v2 = a1;
  v3 = a2;
  if ( !CommerceIdentity::hasAnActiveDeviceAccount((CommerceIdentity *)(a1 + 60)) )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      goto LABEL_54;
    (*(void (__fastcall **)(int, _DWORD))(v3 + 12))(v3, 0);
  }
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v28, *(_DWORD *)(v2 + 56));
  v4 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v28);
  v5 = Social::XboxLiveUserManager::isSignedIn(v4);
  v6 = v29;
  if ( v29 )
    v7 = (unsigned int *)(v29 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  if ( !v5 )
    if ( *(_DWORD *)(v3 + 8) )
      (*(void (__fastcall **)(int, _DWORD))(v3 + 12))(v3, 0);
      goto LABEL_21;
LABEL_54:
    sub_119C8E4();
LABEL_21:
  EntitlementManager::processAccountTransfer((EntitlementManager *)&v24, v2);
  v22 = 0;
  v11 = *(void (__fastcall **)(char *, int, signed int))(v3 + 8);
  if ( v11 )
    v11(&v20, v3, 2);
    v23 = *(_DWORD *)(v3 + 12);
    v22 = *(_DWORD *)(v3 + 8);
  result = sub_1096518(
             (int)&v26,
             (int)&v24,
             (int)&v20,
             (int)v11,
             v19,
             *(int *)&v20,
             v21,
             v22,
             v23,
             v2,
             v24,
             v25,
             *(void **)&v26);
  v13 = v27;
  if ( v27 )
    v14 = (unsigned int *)(v27 + 4);
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  if ( v22 )
    result = ((int (*)(void))v22)();
  v16 = v25;
  if ( v25 )
    v17 = (unsigned int *)(v25 + 4);
        result = __ldrex(v17);
      while ( __strex(result - 1, v17) );
      result = (*v17)--;
      v18 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
          result = __ldrex(v18);
        while ( __strex(result - 1, v18) );
        result = (*v18)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  return result;
}


int __fastcall EntitlementManager::EntitlementManager(int a1, MinecraftEventing *a2, Social::UserManager *a3)
{
  int v3; // r4@1
  Social::UserManager *v4; // r6@1
  MinecraftEventing *v5; // r7@1
  double v6; // r0@1
  double v7; // r0@1
  int v8; // r7@3
  void *v9; // r6@3
  unsigned int v10; // r0@4
  int v11; // r7@6
  void *v12; // r6@6
  int v13; // r6@7
  _DWORD *v14; // r0@7
  __int64 v15; // r1@7
  int v16; // r6@9
  unsigned int *v17; // r1@10
  unsigned int v18; // r0@12
  unsigned int *v19; // r7@16
  unsigned int v20; // r0@18
  int v21; // r6@23
  _DWORD *v22; // r0@23
  __int64 v23; // r1@23
  int v24; // r5@25
  unsigned int *v25; // r1@26
  unsigned int v26; // r0@28
  unsigned int *v27; // r6@32
  unsigned int v28; // r0@34
  _DWORD *v30; // [sp+0h] [bp-68h]@23
  __int64 v31; // [sp+8h] [bp-60h]@23
  Social::User *v32; // [sp+10h] [bp-58h]@23
  int v33; // [sp+14h] [bp-54h]@25
  _DWORD *v34; // [sp+18h] [bp-50h]@7
  __int64 v35; // [sp+20h] [bp-48h]@7
  Social::User *v36; // [sp+28h] [bp-40h]@7
  int v37; // [sp+2Ch] [bp-3Ch]@9

  v3 = a1;
  v4 = a3;
  v5 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  MPMCQueue<std::function<void ()(void)>>::MPMCQueue(a1 + 8);
  *(_DWORD *)(v3 + 52) = v5;
  *(_DWORD *)(v3 + 56) = v4;
  CommerceIdentity::CommerceIdentity((CommerceIdentity *)(v3 + 60), v5, v4);
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 84) = 0;
  *(_DWORD *)(v3 + 88) = 0;
  *(_DWORD *)(v3 + 92) = 1065353216;
  LODWORD(v6) = v3 + 92;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  v7 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v6)));
  *(_DWORD *)(v3 + 80) = LODWORD(v7);
  if ( LODWORD(v7) == 1 )
  {
    *(_DWORD *)(v3 + 100) = 0;
    v9 = (void *)(v3 + 100);
  }
  else
    if ( LODWORD(v7) >= 0x40000000 )
      sub_119C874();
    v8 = 4 * LODWORD(v7);
    v9 = operator new(4 * LODWORD(v7));
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)(v3 + 76) = v9;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 120) = 1065353216;
  LODWORD(v7) = v3 + 120;
  *(_DWORD *)(LODWORD(v7) + 4) = 0;
  v10 = sub_119C844(v7);
  *(_DWORD *)(v3 + 108) = v10;
  if ( v10 == 1 )
    *(_DWORD *)(v3 + 128) = 0;
    v12 = (void *)(v3 + 128);
    if ( v10 >= 0x40000000 )
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)(v3 + 104) = v12;
  ServiceLocator<EntitlementManager>::mDefaultService = v3;
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v36, *(_DWORD *)(v3 + 56));
  v13 = Social::User::getLiveUser(v36);
  v14 = operator new(4u);
  LODWORD(v15) = sub_10A9994;
  *v14 = v3;
  HIDWORD(v15) = sub_10A9980;
  v34 = v14;
  v35 = v15;
  Social::XboxLiveUserManager::registerSignInHandler(v13, (int)&v34);
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  v16 = v37;
  if ( v37 )
    v17 = (unsigned int *)(v37 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v32, *(_DWORD *)(v3 + 56));
  v21 = Social::User::getLiveUser(v32);
  v22 = operator new(4u);
  LODWORD(v23) = sub_10A9A08;
  *v22 = v3;
  HIDWORD(v23) = sub_10A99CA;
  v30 = v22;
  v31 = v23;
  Social::XboxLiveUserManager::registerSignOutHandler(v21, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  v24 = v33;
  if ( v33 )
    v25 = (unsigned int *)(v33 + 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 == 1 )
      v27 = (unsigned int *)(v24 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
  return v3;
}


void __fastcall EntitlementManager::refreshEntitlements(EntitlementManager *this)
{
  EntitlementManager *v1; // r4@1
  int i; // r5@1
  void *v3; // r0@4
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  int v6; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  for ( i = *((_DWORD *)this + 21); i; i = *(_DWORD *)i )
    Entitlement::clear((Entitlement *)(i + 24), 0);
  CommerceIdentity::getUserId((CommerceIdentity *)&v6, (int)v1 + 60);
  EntitlementManager::_readInEntitlementsOwned((int)v1, (_BYTE **)&v6);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  EntitlementManager::refreshInventory(v1);
}


_DWORD *__fastcall EntitlementManager::_buildCommerceInventoryURL(int *a1, int a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r8@1
  int *v5; // r6@1
  char *v6; // r5@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r5@1
  char *v9; // r5@1
  char *v10; // r5@1
  char *v11; // r5@1
  void *v12; // r0@1
  void *v13; // r0@2
  void *v14; // r0@3
  int v15; // r6@4
  unsigned int *v16; // r1@5
  unsigned int v17; // r0@7
  unsigned int *v18; // r5@11
  unsigned int v19; // r0@13
  void **v20; // r0@18
  void *v21; // r0@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  unsigned int *v25; // r2@24
  signed int v26; // r1@26
  unsigned int *v27; // r2@28
  signed int v28; // r1@30
  unsigned int *v29; // r2@32
  signed int v30; // r1@34
  int v31; // [sp+0h] [bp-F0h]@1
  int v32; // [sp+4h] [bp-ECh]@1
  int v33; // [sp+8h] [bp-E8h]@1
  Social::User *v34; // [sp+Ch] [bp-E4h]@1
  int v35; // [sp+10h] [bp-E0h]@4
  void **v36; // [sp+14h] [bp-DCh]@1
  int v37; // [sp+18h] [bp-D8h]@19
  void **v38; // [sp+1Ch] [bp-D4h]@1
  void **v39; // [sp+20h] [bp-D0h]@18
  int v40; // [sp+3Ch] [bp-B4h]@19
  int v41; // [sp+44h] [bp-ACh]@18
  int v42; // [sp+48h] [bp-A8h]@19

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v36, 24);
  sub_119C904((char *)&v38, (int)"/tenants/", 9);
  v6 = sub_119C904((char *)&v38, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v34, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v34);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/user/", 6);
  CommerceIdentity::getUserId((CommerceIdentity *)&v33, v3 + 60);
  v9 = sub_119C904(v8, v33, *(_DWORD *)(v33 - 12));
  sub_119C904(v9, (int)"/wallet/", 8);
  sub_119C884((void **)&v32, "0");
  v10 = sub_119C904(v9, v32, *(_DWORD *)(v32 - 12));
  sub_119C904(v10, (int)"/inventory/", 11);
  sub_119C854(&v31, (int *)&unk_27D6868);
  v11 = sub_119C904(v10, v31, *(_DWORD *)(v31 - 12));
  sub_119C904(v11, (int)"/device/", 8);
  sub_119C904(v11, *v5, *(_DWORD *)(*v5 - 12));
  v12 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  }
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v32 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = v35;
  if ( v35 )
    v16 = (unsigned int *)(v35 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
      if ( &pthread_create )
      {
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      }
      else
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  sub_119D48C(v4, (int)&v39);
  v20 = off_26D3F84;
  v36 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v36) = off_26D3F80[0];
  v38 = v20;
  v39 = &off_27734E8;
  v21 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v41 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v39 = &off_26D40A8;
  sub_119C954((unsigned int **)&v40);
  v36 = (void **)off_26D3F68;
  *(void ***)((char *)&v36 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v37 = 0;
  return sub_119C964(&v42);
}


_DWORD *__fastcall EntitlementManager::_buildCommerceAccountTransferURL(int *a1, int a2, int *a3)
{
  int v3; // r7@1
  int *v4; // r8@1
  int *v5; // r6@1
  char *v6; // r5@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r5@1
  char *v9; // r5@1
  char *v10; // r5@1
  char *v11; // r5@1
  char *v12; // r5@1
  void *v13; // r0@1
  void *v14; // r0@2
  void *v15; // r0@3
  void *v16; // r0@4
  int v17; // r6@5
  unsigned int *v18; // r1@6
  unsigned int v19; // r0@8
  unsigned int *v20; // r5@12
  unsigned int v21; // r0@14
  void **v22; // r0@19
  void *v23; // r0@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  int v35; // [sp+4h] [bp-F4h]@1
  int v36; // [sp+8h] [bp-F0h]@1
  int v37; // [sp+Ch] [bp-ECh]@1
  int v38; // [sp+10h] [bp-E8h]@1
  Social::User *v39; // [sp+14h] [bp-E4h]@1
  int v40; // [sp+18h] [bp-E0h]@5
  void **v41; // [sp+1Ch] [bp-DCh]@1
  int v42; // [sp+20h] [bp-D8h]@20
  void **v43; // [sp+24h] [bp-D4h]@1
  void **v44; // [sp+28h] [bp-D0h]@19
  int v45; // [sp+44h] [bp-B4h]@20
  int v46; // [sp+4Ch] [bp-ACh]@19
  int v47; // [sp+50h] [bp-A8h]@20

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v41, 24);
  sub_119C904((char *)&v43, (int)"/admin/tenants/", 15);
  v6 = sub_119C904((char *)&v43, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v39, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v39);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/transferuser/", 14);
  CommerceIdentity::getDeviceAccountUserId((CommerceIdentity *)&v38);
  v9 = sub_119C904(v8, v38, *(_DWORD *)(v38 - 12));
  sub_119C904(v9, (int)"/inventory/", 11);
  sub_119C854(&v37, (int *)&unk_27D6868);
  v10 = sub_119C904(v9, v37, *(_DWORD *)(v37 - 12));
  sub_119C904(v10, (int)"/wallet/", 8);
  sub_119C884((void **)&v36, "0");
  v11 = sub_119C904(v10, v36, *(_DWORD *)(v36 - 12));
  sub_119C904(v11, (int)"/device/", 8);
  v12 = sub_119C904(v11, *v5, *(_DWORD *)(*v5 - 12));
  sub_119C904(v12, (int)"/targetuser/", 12);
  CommerceIdentity::getLiveAccountUserId((CommerceIdentity *)&v35, v3 + 60);
  sub_119C904(v12, v35, *(_DWORD *)(v35 - 12));
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v35 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  }
  v14 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v36 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v38 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = v40;
  if ( v40 )
    v18 = (unsigned int *)(v40 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 == 1 )
      v20 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  sub_119D48C(v4, (int)&v44);
  v22 = off_26D3F84;
  v41 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v41) = off_26D3F80[0];
  v43 = v22;
  v44 = &off_27734E8;
  v23 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v46 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v44 = &off_26D40A8;
  sub_119C954((unsigned int **)&v45);
  v41 = (void **)off_26D3F68;
  *(void ***)((char *)&v41 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v42 = 0;
  return sub_119C964(&v47);
}


void __fastcall EntitlementManager::_buildPurchaseTransactionBody(web::json::value *a1, int a2, int *a3)
{
  int *v3; // r5@1
  web::json::value *v4; // r4@1
  int *v5; // r6@1
  void *v6; // r0@3
  void *v7; // r0@4
  int *v8; // r5@5
  void *v9; // r0@7
  void *v10; // r0@8
  int *v11; // r5@9
  void *v12; // r0@11
  void *v13; // r0@12
  int *v14; // r5@13
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  int v36; // [sp+4h] [bp-5Ch]@13
  int v37; // [sp+8h] [bp-58h]@13
  int v38; // [sp+Ch] [bp-54h]@13
  int v39; // [sp+14h] [bp-4Ch]@13
  int v40; // [sp+1Ch] [bp-44h]@9
  int v41; // [sp+20h] [bp-40h]@9
  int v42; // [sp+28h] [bp-38h]@9
  int v43; // [sp+2Ch] [bp-34h]@5
  int v44; // [sp+30h] [bp-30h]@5
  int v45; // [sp+38h] [bp-28h]@5
  int v46; // [sp+3Ch] [bp-24h]@1
  int v47; // [sp+40h] [bp-20h]@1
  int v48; // [sp+48h] [bp-18h]@1

  v3 = a3;
  v4 = a1;
  web::json::value::value(a1);
  sub_119C884((void **)&v48, "transactionid");
  v5 = (int *)web::json::value::operator[]((int)v4);
  utility::conversions::to_string_t(&v46, v3);
  web::json::value::string(&v47, &v46);
  web::json::value::operator=(v5, &v47);
  if ( v47 )
    (*(void (**)(void))(*(_DWORD *)v47 + 96))();
  v47 = 0;
  v6 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  v7 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v48 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  sub_119C884((void **)&v45, "currencytype");
  v8 = (int *)web::json::value::operator[]((int)v4);
  utility::conversions::to_string_t(&v43, &dword_27D686C);
  web::json::value::string(&v44, &v43);
  web::json::value::operator=(v8, &v44);
  if ( v44 )
    (*(void (**)(void))(*(_DWORD *)v44 + 96))();
  v44 = 0;
  v9 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v43 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v45 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  sub_119C884((void **)&v42, "description");
  v11 = (int *)web::json::value::operator[]((int)v4);
  sub_119C884((void **)&v40, "Purchase item with Coins");
  web::json::value::string(&v41, &v40);
  web::json::value::operator=(v11, &v41);
  if ( v41 )
    (*(void (**)(void))(*(_DWORD *)v41 + 96))();
  v41 = 0;
  v12 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v40 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v42 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  sub_119C884((void **)&v39, "targetinventoryid");
  v14 = (int *)web::json::value::operator[]((int)v4);
  sub_119C854(&v36, (int *)&unk_27D6868);
  utility::conversions::to_string_t(&v37, &v36);
  web::json::value::string(&v38, &v37);
  web::json::value::operator=(v14, &v38);
  if ( v38 )
    (*(void (**)(void))(*(_DWORD *)v38 + 96))();
  v38 = 0;
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v36 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
}


void __fastcall EntitlementManager::_setBIHeaders(EntitlementManager *this, web::http::http_request *a2)
{
  EntitlementManager::_setBIHeaders(this, a2);
}


int __fastcall EntitlementManager::_clearEntitlements(int result, int a2)
{
  int v2; // r4@1
  int i; // r5@1

  v2 = a2;
  for ( i = *(_DWORD *)(result + 84); i; i = *(_DWORD *)i )
    result = (int)Entitlement::clear((Entitlement *)(i + 24), v2);
  return result;
}


void __fastcall EntitlementManager::_fireEventEntitlementListInfo(EntitlementManager *this)
{
  EntitlementManager::_fireEventEntitlementListInfo(this);
}


int __fastcall EntitlementManager::purchaseCoinOffer(int a1, const void **a2, int *a3, int *a4, int a5)
{
  int v5; // r4@1
  int *v6; // r6@1
  const void **v7; // r7@1
  int *v8; // r8@1
  int v9; // r0@4
  void (__fastcall *v10)(char *, int, signed int); // r3@4
  int result; // r0@6
  int v12; // r4@6
  unsigned int *v13; // r1@7
  unsigned int *v14; // r5@13
  int v15; // r4@22
  unsigned int *v16; // r1@23
  unsigned int *v17; // r5@29
  void *v18; // [sp+0h] [bp-40h]@4
  char v19; // [sp+4h] [bp-3Ch]@5
  int v20; // [sp+8h] [bp-38h]@6
  int v21; // [sp+Ch] [bp-34h]@4
  int v22; // [sp+10h] [bp-30h]@5
  char v23; // [sp+18h] [bp-28h]@4
  int v24; // [sp+1Ch] [bp-24h]@6
  char v25; // [sp+20h] [bp-20h]@6
  int v26; // [sp+24h] [bp-1Ch]@6

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = a3;
  if ( !CommerceIdentity::ensureUserIdExists(a1 + 60) )
  {
    if ( !*(_DWORD *)(a5 + 8) )
      sub_119C8E4();
    (*(void (__fastcall **)(int, _DWORD))(a5 + 12))(a5, 0);
  }
  v9 = EntitlementManager::getCommerceStoreNameFromPlatformStoreName(v7);
  EntitlementManager::processStoreCoinPurchase((int)&v23, v5, v9, v6, v8);
  v21 = 0;
  v10 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v10 )
    v10(&v19, a5, 2);
    v22 = *(_DWORD *)(a5 + 12);
    v21 = *(_DWORD *)(a5 + 8);
  result = sub_10935A8(
             (int)&v25,
             (int)&v23,
             (int)&v19,
             (int)v10,
             v18,
             *(int *)&v19,
             v20,
             v21,
             v22,
             v5,
             *(int *)&v23,
             v24,
             *(void **)&v25);
  v12 = v26;
  if ( v26 )
    v13 = (unsigned int *)(v26 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
    }
    else
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      }
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  if ( v21 )
    result = ((int (*)(void))v21)();
  v15 = v24;
  if ( v24 )
    v16 = (unsigned int *)(v24 + 4);
        result = __ldrex(v16);
      while ( __strex(result - 1, v16) );
      result = (*v16)--;
      v17 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          result = __ldrex(v17);
        while ( __strex(result - 1, v17) );
        result = (*v17)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  return result;
}


_DWORD *__fastcall EntitlementManager::addEntitlementChangeListener(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r8@1
  unsigned int v4; // r7@1
  int v5; // r9@1
  _DWORD *result; // r0@1
  _DWORD *v7; // r6@2
  int v8; // r5@4
  bool v9; // zf@7
  _DWORD *v10; // r0@11

  v2 = a2;
  v3 = a1 + 104;
  v4 = *(_DWORD *)(a1 + 108);
  v5 = a2 % *(_DWORD *)(a1 + 108);
  result = *(_DWORD **)(*(_DWORD *)(a1 + 104) + 4 * v5);
  if ( !result )
    goto LABEL_11;
  v7 = (_DWORD *)*result;
  while ( v7[1] != a2 )
  {
    v8 = *v7;
    if ( *v7 )
    {
      result = v7;
      v7 = (_DWORD *)*v7;
      if ( *(_DWORD *)(v8 + 4) % v4 == v5 )
        continue;
    }
  }
  v9 = result == 0;
  if ( result )
    result = (_DWORD *)*result;
    v9 = result == 0;
  if ( v9 )
LABEL_11:
    v10 = operator new(8u);
    *v10 = 0;
    v10[1] = v2;
    result = (_DWORD *)j_j_j__ZNSt10_HashtableIP25EntitlementChangeListenerS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
                         v3,
                         v5,
                         v2,
                         (int)v10);
  return result;
}


void __fastcall EntitlementManager::refreshInventory(EntitlementManager *this)
{
  EntitlementManager *v1; // r6@1
  char *v2; // r5@1
  void *v3; // r0@1
  int v4; // r4@1
  int v5; // r4@3
  unsigned int v6; // r1@4
  unsigned int *v7; // r0@4
  unsigned int v8; // r2@7
  unsigned int v9; // r3@8
  int v10; // r6@9
  unsigned int *v11; // r7@9
  unsigned int v12; // r1@11
  unsigned int v13; // r1@16
  unsigned int v14; // r0@22
  unsigned int v15; // r0@29
  unsigned int v16; // r0@34
  int v17; // r5@37
  unsigned int *v18; // r1@38
  unsigned int v19; // r0@40
  unsigned int *v20; // r6@44
  unsigned int v21; // r0@46
  int v22; // r0@51
  unsigned int *v23; // r2@52
  unsigned int v24; // r1@54
  int v25; // r5@59
  unsigned int *v26; // r1@60
  unsigned int v27; // r0@62
  unsigned int *v28; // r6@66
  unsigned int v29; // r0@68
  int v30; // r0@73
  unsigned int *v31; // r2@74
  unsigned int v32; // r1@76
  int v33; // r5@81
  unsigned int *v34; // r1@82
  unsigned int v35; // r0@84
  unsigned int *v36; // r6@88
  unsigned int v37; // r0@90
  unsigned int v38; // r0@97
  unsigned int *v39; // r2@103
  signed int v40; // r1@105
  int v41; // [sp+0h] [bp-48h]@32
  int v42; // [sp+4h] [bp-44h]@32
  int v43; // [sp+8h] [bp-40h]@27
  int v44; // [sp+Ch] [bp-3Ch]@27
  char v45; // [sp+10h] [bp-38h]@27
  int v46; // [sp+14h] [bp-34h]@81
  char v47; // [sp+18h] [bp-30h]@32
  int v48; // [sp+1Ch] [bp-2Ch]@59
  char v49; // [sp+20h] [bp-28h]@37
  int v50; // [sp+24h] [bp-24h]@37
  int v51; // [sp+28h] [bp-20h]@1

  v1 = this;
  v2 = (char *)this + 60;
  CommerceIdentity::getUserId((CommerceIdentity *)&v51, (int)this + 60);
  v3 = (void *)(v51 - 12);
  v4 = *(_DWORD *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v51 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  if ( v4 )
    v5 = *((_DWORD *)v1 + 1);
    if ( !v5 )
      std::__throw_bad_weak_ptr();
    v6 = *(_DWORD *)(v5 + 4);
    v7 = (unsigned int *)(v5 + 4);
    do
      while ( 1 )
      {
        if ( !v6 )
          std::__throw_bad_weak_ptr();
        __dmb();
        v8 = __ldrex(v7);
        if ( v8 == v6 )
          break;
        __clrex();
        v6 = v8;
      }
      v9 = __strex(v6 + 1, v7);
      v6 = v8;
    while ( v9 );
    __dmb();
    v10 = *(_DWORD *)v1;
    v11 = (unsigned int *)(v5 + 8);
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
      ++*v11;
        v13 = __ldrex(v7);
      while ( __strex(v13 - 1, v7) );
      v13 = (*v7)--;
    if ( v13 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
        do
          v14 = __ldrex(v11);
        while ( __strex(v14 - 1, v11) );
      else
        v14 = (*v11)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
    CommerceIdentity::getAuthorizationHeader((CommerceIdentity *)&v45, (int)v2, 1);
    v43 = v10;
    v44 = v5;
        v15 = __ldrex(v11);
      while ( __strex(v15 + 1, v11) );
    sub_1091478((int)&v47, (int)&v45, (int)&v43);
    v41 = v10;
    v42 = v5;
        v16 = __ldrex(v11);
      while ( __strex(v16 + 1, v11) );
    sub_1091DE0((int)&v49, (int)&v47, (int)&v41);
    v17 = v50;
    if ( v50 )
      v18 = (unsigned int *)(v50 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
    v22 = v42;
    if ( v42 )
      v23 = (unsigned int *)(v42 + 8);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v22 + 12))(v22);
    v25 = v48;
    if ( v48 )
      v26 = (unsigned int *)(v48 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 == 1 )
        v28 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
    v30 = v44;
    if ( v44 )
      v31 = (unsigned int *)(v44 + 8);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 == 1 )
        (*(void (__cdecl **)(int))(*(_DWORD *)v30 + 12))(v30);
    v33 = v46;
    if ( v46 )
      v34 = (unsigned int *)(v46 + 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        v36 = (unsigned int *)(v33 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 8))(v33);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v33 + 12))(v33);
        v38 = __ldrex(v11);
      while ( __strex(v38 - 1, v11) );
      v38 = (*v11)--;
    if ( v38 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
}


void __fastcall EntitlementManager::_setPurchaseReceiptBodyForPlatform(int a1, int *a2, int a3, int *a4, int a5)
{
  EntitlementManager::_setPurchaseReceiptBodyForPlatform(a1, a2, a3, a4, a5);
}


void __fastcall EntitlementManager::processLegacyOfferOwnership(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r4@1
  unsigned __int64 *v5; // r5@1
  int i; // r6@1
  int *v7; // r5@4
  int *j; // r6@4
  unsigned __int64 v9; // kr00_8@4

  v4 = a1;
  v5 = a4;
  for ( i = *(_DWORD *)(a1 + 84); i; i = *(_DWORD *)i )
    Entitlement::clear((Entitlement *)(i + 24), 1);
  v9 = *v5;
  v7 = (int *)(*v5 >> 32);
  for ( j = (int *)v9; v7 != j; j += 4 )
    EntitlementManager::_markLegacyEntitlementOwnership(v4, j);
}


RakNet *__fastcall EntitlementManager::_getUsersEntFileName(void **a1, int a2, _BYTE **a3)
{
  void **v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@2
  _DWORD *v6; // r0@4
  __int64 v7; // r5@4
  __int64 v8; // r0@4
  void *v9; // r0@4
  void *v10; // r0@5
  RakNet *result; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  int v16; // [sp+0h] [bp-440h]@4
  int v17; // [sp+4h] [bp-43Ch]@1
  __int64 v18; // [sp+8h] [bp-438h]@4
  __int64 v19; // [sp+10h] [bp-430h]@4
  char v20; // [sp+24h] [bp-41Ch]@4
  int v21; // [sp+28h] [bp-418h]@4
  RakNet *v22; // [sp+42Ch] [bp-14h]@1

  v3 = a1;
  v22 = _stack_chk_guard;
  v4 = Util::hashCode(a3);
  Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v17, v4);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v5 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v5 = &ServiceLocator<AppPlatform>::mDefaultService;
  v6 = (_DWORD *)(*(int (**)(void))(**(_DWORD **)v5 + 272))();
  LODWORD(v7) = *v6;
  HIDWORD(v7) = *(_DWORD *)(*v6 - 12);
  sub_119C854(&v16, &v17);
  sub_119C894((const void **)&v16, ".ent", 4u);
  LODWORD(v8) = v16;
  HIDWORD(v8) = *(_DWORD *)(v16 - 12);
  v18 = v7;
  v19 = v8;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v20, (int)&v18, 2);
  sub_119C884(v3, (const char *)&v21);
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v16 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v10 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  result = (RakNet *)(_stack_chk_guard - v22);
  if ( _stack_chk_guard != v22 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall EntitlementManager::getEntitlementsByCreator(int a1, const void **a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  const void **i; // r10@1
  unsigned int *v6; // r1@3
  signed int v7; // r0@5
  char *v8; // r6@10
  char *v9; // r7@10
  size_t v10; // r2@10
  signed int v11; // r8@11
  __int64 v12; // kr00_8@17
  int v13; // r1@17
  void *s2; // [sp+4h] [bp-2Ch]@10

  v3 = *(_DWORD *)(a1 + 84);
  v4 = a3;
  for ( i = a2; v3; v3 = *(_DWORD *)v3 )
  {
    sub_119C854((int *)&s2, (int *)(v3 + 48));
    v8 = (char *)s2;
    v9 = (char *)s2 - 12;
    v10 = *((_DWORD *)*i - 3);
    if ( v10 == *((_DWORD *)s2 - 3) )
    {
      v11 = 0;
      if ( !memcmp(*i, s2, v10) )
        v11 = 1;
    }
    else
    if ( (int *)v9 != &dword_28898C0 )
      v6 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v9);
    if ( v11 == 1 )
      v12 = *(_QWORD *)(v4 + 4);
      v13 = v3 + 24;
      if ( (_DWORD)v12 == HIDWORD(v12) )
        std::vector<Entitlement,std::allocator<Entitlement>>::_M_emplace_back_aux<Entitlement const&>(
          (unsigned __int64 *)v4,
          v13);
        Entitlement::Entitlement(v12, v13);
        *(_DWORD *)(v4 + 4) += 48;
  }
}


_DWORD *__fastcall EntitlementManager::_buildCommerceCatalogRedeemURL(int *a1, int a2, int a3)
{
  int v3; // r6@1
  int *v4; // r8@1
  int v5; // r7@1
  char *v6; // r5@1
  Social::XboxLiveUserManager *v7; // r0@1
  char *v8; // r5@1
  char *v9; // r7@1
  int v10; // r5@1
  char *v11; // r6@1
  char *v12; // r5@1
  void *v13; // r0@1
  void *v14; // r0@2
  void *v15; // r0@3
  int v16; // r6@4
  unsigned int *v17; // r1@5
  unsigned int v18; // r0@7
  unsigned int *v19; // r5@11
  unsigned int v20; // r0@13
  void **v21; // r0@18
  void *v22; // r0@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  int v32; // [sp+4h] [bp-ECh]@1
  int v33; // [sp+8h] [bp-E8h]@1
  int v34; // [sp+Ch] [bp-E4h]@1
  Social::User *v35; // [sp+10h] [bp-E0h]@1
  int v36; // [sp+14h] [bp-DCh]@4
  void **v37; // [sp+18h] [bp-D8h]@1
  int v38; // [sp+1Ch] [bp-D4h]@19
  void **v39; // [sp+20h] [bp-D0h]@1
  void **v40; // [sp+24h] [bp-CCh]@18
  int v41; // [sp+40h] [bp-B0h]@19
  int v42; // [sp+48h] [bp-A8h]@18
  int v43; // [sp+4Ch] [bp-A4h]@19

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v37, 24);
  sub_119C904((char *)&v39, (int)"/tenants/", 9);
  v6 = sub_119C904((char *)&v39, dword_27D6864, *(_DWORD *)(dword_27D6864 - 12));
  sub_119C904(v6, (int)"/title/", 7);
  Social::UserManager::getPrimaryUser((Social::UserManager *)&v35, *(_DWORD *)(v3 + 56));
  v7 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v35);
  Social::XboxLiveUserManager::getTitleId(v7);
  v8 = sub_119EA8C(v6);
  sub_119C904(v8, (int)"/market/", 8);
  v9 = sub_119C904(
         v8,
         *(&EntitlementManager::mStorePlatformNames + v5),
         *(_DWORD *)(*(&EntitlementManager::mStorePlatformNames + v5) - 12));
  sub_119C904(v9, (int)"/user/", 6);
  v10 = v3 + 60;
  CommerceIdentity::getUserId((CommerceIdentity *)&v34, v3 + 60);
  v11 = sub_119C904(v9, v34, *(_DWORD *)(v34 - 12));
  sub_119C904(v11, (int)"/actor/", 7);
  CommerceIdentity::getUserId((CommerceIdentity *)&v33, v10);
  v12 = sub_119C904(v11, v33, *(_DWORD *)(v33 - 12));
  sub_119C904(v12, (int)"/inventory/", 11);
  sub_119C854(&v32, (int *)&unk_27D6868);
  sub_119C904(v12, v32, *(_DWORD *)(v32 - 12));
  v13 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v32 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v13);
  }
  v14 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v33 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v15 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v34 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v36;
  if ( v36 )
    v17 = (unsigned int *)(v36 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  sub_119D48C(v4, (int)&v40);
  v21 = off_26D3F84;
  v37 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v37) = off_26D3F80[0];
  v39 = v21;
  v40 = &off_27734E8;
  v22 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v42 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v40 = &off_26D40A8;
  sub_119C954((unsigned int **)&v41);
  v37 = (void **)off_26D3F68;
  *(void ***)((char *)&v37 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v38 = 0;
  return sub_119C964(&v43);
}


int __fastcall EntitlementManager::getEntitlement(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v5; // [sp+0h] [bp-48h]@1
  int v6; // [sp+30h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  Entitlement::Entitlement((int)&v5, a2);
  std::_Hashtable<mce::UUID,std::pair<mce::UUID const,Entitlement>,std::allocator<std::pair<mce::UUID const,Entitlement>>,std::__detail::_Select1st,std::equal_to<mce::UUID>,std::hash<mce::UUID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<mce::UUID const&,Entitlement>(
    &v6,
    (_QWORD *)(v2 + 76),
    v3,
    (int)&v5);
  Entitlement::~Entitlement((Entitlement *)&v5);
  return v6 + 24;
}


void __fastcall EntitlementManager::_buildTransactionBody(EntitlementManager *this, int a2, int a3)
{
  EntitlementManager *v3; // r4@1
  int v4; // r5@1
  void *v5; // r0@1
  int *v6; // r6@2
  void *v7; // r0@4
  void *v8; // r0@5
  int *v9; // r6@6
  void *v10; // r0@8
  void *v11; // r0@9
  int *v12; // r6@10
  void *v13; // r0@12
  void *v14; // r0@13
  int *v15; // r6@14
  void *v16; // r0@16
  void *v17; // r0@17
  int *v18; // r6@18
  void *v19; // r0@20
  int *v20; // r0@21
  void *v21; // r0@21
  void *v22; // r0@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  unsigned int *v31; // r2@42
  signed int v32; // r1@44
  unsigned int *v33; // r2@46
  signed int v34; // r1@48
  unsigned int *v35; // r2@50
  signed int v36; // r1@52
  unsigned int *v37; // r2@54
  signed int v38; // r1@56
  unsigned int *v39; // r2@58
  signed int v40; // r1@60
  unsigned int *v41; // r2@62
  signed int v42; // r1@64
  unsigned int *v43; // r2@66
  signed int v44; // r1@68
  unsigned int *v45; // r2@70
  signed int v46; // r1@72
  int v47; // [sp+4h] [bp-8Ch]@21
  int v48; // [sp+8h] [bp-88h]@18
  int v49; // [sp+10h] [bp-80h]@18
  int v50; // [sp+14h] [bp-7Ch]@14
  int v51; // [sp+18h] [bp-78h]@14
  int v52; // [sp+20h] [bp-70h]@14
  int v53; // [sp+24h] [bp-6Ch]@14
  int v54; // [sp+2Ch] [bp-64h]@10
  int v55; // [sp+30h] [bp-60h]@10
  int v56; // [sp+38h] [bp-58h]@10
  int v57; // [sp+40h] [bp-50h]@6
  int v58; // [sp+44h] [bp-4Ch]@6
  int v59; // [sp+4Ch] [bp-44h]@6
  int v60; // [sp+50h] [bp-40h]@2
  int v61; // [sp+54h] [bp-3Ch]@2
  int v62; // [sp+5Ch] [bp-34h]@2
  char v63; // [sp+60h] [bp-30h]@1
  int v64; // [sp+70h] [bp-20h]@1
  int v65; // [sp+74h] [bp-1Ch]@1

  v3 = this;
  v4 = a3;
  Crypto::Random::generateUUID((int)&v63);
  mce::UUID::asString((mce::UUID *)&v64);
  utility::conversions::to_string_t(&v65, &v64);
  v5 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v64 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  web::json::value::value(v3);
  sub_119C884((void **)&v62, "transactionid");
  v6 = (int *)web::json::value::operator[]((int)v3);
  sub_119C854(&v60, &v65);
  web::json::value::string(&v61, &v60);
  web::json::value::operator=(v6, &v61);
  if ( v61 )
    (*(void (**)(void))(*(_DWORD *)v61 + 96))();
  v61 = 0;
  v7 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v60 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v62 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  sub_119C884((void **)&v59, "description");
  v9 = (int *)web::json::value::operator[]((int)v3);
  sub_119C884((void **)&v57, "Credit user with Coins");
  web::json::value::string(&v58, &v57);
  web::json::value::operator=(v9, &v58);
  if ( v58 )
    (*(void (**)(void))(*(_DWORD *)v58 + 96))();
  v58 = 0;
  v10 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v57 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v59 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v56, "WalletFriendlyName");
  v12 = (int *)web::json::value::operator[]((int)v3);
  sub_119C884((void **)&v54, "Demo wallet");
  web::json::value::string(&v55, &v54);
  web::json::value::operator=(v12, &v55);
  if ( v55 )
    (*(void (**)(void))(*(_DWORD *)v55 + 96))();
  v55 = 0;
  v13 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v54 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  v14 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v56 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  web::json::value::value((web::json::value *)&v53);
  sub_119C884((void **)&v52, "currencytype");
  v15 = (int *)web::json::value::operator[]((int)&v53);
  utility::conversions::to_string_t(&v50, &dword_27D686C);
  web::json::value::string(&v51, &v50);
  web::json::value::operator=(v15, &v51);
  if ( v51 )
    (*(void (**)(void))(*(_DWORD *)v51 + 96))();
  v51 = 0;
  v16 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v50 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v52 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  sub_119C884((void **)&v49, "amount");
  v18 = (int *)web::json::value::operator[]((int)&v53);
  web::json::value::value((web::json::value *)&v48, v4);
  web::json::value::operator=(v18, &v48);
  if ( v48 )
    (*(void (**)(void))(*(_DWORD *)v48 + 96))();
  v48 = 0;
  v19 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v49 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v19);
  sub_119C884((void **)&v47, "transactionamount");
  v20 = (int *)web::json::value::operator[]((int)v3);
  web::json::value::operator=(v20, &v53);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v47 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 96))();
  v22 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v65 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
}


        if ( EntitlementManager::_checkRedeemResponseForSuccess(v12, (const web::json::value *)&v35) == 1 )
{
          v13 = *(_QWORD *)v3;
          if ( *(_QWORD *)v3 >> 32 )
          {
            v14 = (unsigned int *)(HIDWORD(v13) + 8);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 + 1, v14) );
            }
            else
              ++*v14;
          }
          v34 = 0;
          v16 = operator new(8u);
          *v16 = v13;
          if ( HIDWORD(v13) )
            v17 = (unsigned int *)(HIDWORD(v13) + 8);
                v18 = __ldrex(v17);
              while ( __strex(v18 + 1, v17) );
              ++*v17;
          LODWORD(v19) = sub_10B7F20;
          v33 = v16;
          HIDWORD(v19) = sub_10B7DD8;
          *(_QWORD *)&v34 = v19;
          MPMCQueue<std::function<void ()(void)>>::push(v2 + 8, (int)&v33);
          if ( v34 )
            v34();
            v20 = (unsigned int *)(HIDWORD(v13) + 8);
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
              v21 = (*v20)--;
            if ( v21 == 1 )
              (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v13) + 12))(HIDWORD(v13));
        }
        v10 = 1;
      }
    }
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v7);
      while ( __strex(v22 - 1, v7) );
    else
      v22 = (*v7)--;
    if ( v22 == 1 )
      v23 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  else
  {
    v10 = 0;
LABEL_51:
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 96))();
  v35 = 0;
  v25 = v32;
  if ( v32 )
    v26 = (unsigned int *)(v32 + 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 == 1 )
      v28 = (unsigned int *)(v25 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  return v10;
}
