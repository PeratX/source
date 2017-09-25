

signed int __fastcall RegionalOffer::_checkRegion(RegionalOffer *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  signed int result; // r0@1

  result = 0;
  if ( !((a2 ^ a4) & a3) )
    result = 1;
  return result;
}


void __fastcall RegionalOffer::_getRegion(RegionalOffer *this)
{
  JUMPOUT(RegionalOffer::_getRegion);
}


signed int __fastcall RegionalOffer::shouldCheckRegion(RegionalOffer *this)
{
  void *v1; // r0@2
  const void **v2; // r0@4
  int v3; // r0@4
  void *v4; // r0@4
  time_t v5; // r4@6
  time_t v6; // r0@6
  signed int v12; // r5@7
  char *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  struct tm tp; // [sp+4h] [bp-4Ch]@6
  time_t timer; // [sp+30h] [bp-20h]@6
  int v21; // [sp+34h] [bp-1Ch]@4
  char *v22; // [sp+38h] [bp-18h]@1

  v22 = (char *)&unk_28898CC;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v1 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v1 = &ServiceLocator<AppPlatform>::mDefaultService;
  v2 = (const void **)(*(int (**)(void))(**(_DWORD **)v1 + 136))();
  v3 = I18n::getLocaleFor(v2);
  Localization::getLanguageCode((Localization *)&v21, v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v22,
    &v21);
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  if ( sub_21E7D6C((const void **)&v22, "zh") )
    goto LABEL_29;
  time(&timer);
  tp.tm_year = 117;
  tp.tm_mon = 6;
  tp.tm_mday = 31;
  tp.tm_hour = 0;
  tp.tm_sec = 0;
  tp.tm_min = 0;
  tp.tm_wday = 0;
  tp.tm_yday = 0;
  tp.tm_isdst = 0;
  v5 = timer;
  v6 = mktime(&tp);
  _R0 = COERCE_UNSIGNED_INT64(difftime(v5, v6));
  __asm
    VMOV            D0, R0, R1
    VCMPE.F64       D0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_29:
    v12 = 0;
    v12 = 1;
  v13 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  return v12;
}


signed int __fastcall RegionalOffer::isInRegion(int a1, int *a2)
{
  int *v2; // r4@1
  unsigned int v3; // r0@1
  unsigned int v4; // r6@1
  unsigned int v5; // r5@1
  unsigned int v6; // r0@1
  unsigned int v7; // r10@1
  unsigned int v8; // r9@1
  unsigned int v9; // r8@1
  unsigned int *v10; // r0@1
  void *v11; // r0@1
  unsigned int v12; // r3@2
  unsigned int *v13; // r0@3
  void *v14; // r0@3
  unsigned int v15; // r3@4
  unsigned int *v16; // r0@5
  void *v17; // r0@5
  int v18; // r2@6
  unsigned int v19; // r3@6
  unsigned int *v20; // r0@7
  void *v21; // r0@7
  int v22; // r4@9
  int v23; // r7@9
  int *v24; // r2@9
  int v25; // r6@9
  int *v26; // r5@10
  unsigned int v27; // r0@11
  int *v28; // r3@15
  int v29; // r0@16
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  int *v38; // r2@58
  signed int v39; // r5@68
  int v41; // [sp+0h] [bp-58h]@8
  int v42; // [sp+4h] [bp-54h]@9
  int v43; // [sp+8h] [bp-50h]@9
  int v44; // [sp+14h] [bp-44h]@8
  int v45; // [sp+18h] [bp-40h]@7
  int v46; // [sp+1Ch] [bp-3Ch]@5
  int v47; // [sp+20h] [bp-38h]@3
  int v48; // [sp+24h] [bp-34h]@1
  int v49; // [sp+28h] [bp-30h]@7
  char v50; // [sp+2Ch] [bp-2Ch]@5
  int v51; // [sp+30h] [bp-28h]@3
  char v52; // [sp+34h] [bp-24h]@1

  v2 = a2;
  v3 = sub_21E7904(a2, ".", 0, 1u);
  v4 = v3;
  v5 = v3 + 1;
  v6 = sub_21E7904(v2, ".", v3 + 1, 1u);
  v7 = v6;
  v8 = v6 + 1;
  v9 = sub_21E7904(v2, ".", v6 + 1, 1u);
  v10 = (unsigned int *)sub_21E9040((void **)&v48, v2, 0, v4);
  Util::toInt<unsigned int,(void *)0>(v10, &v52);
  v11 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v48 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  }
  v12 = *(_DWORD *)(*v2 - 12);
  if ( v12 < v5 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v5, v12);
  v13 = (unsigned int *)sub_21E9040((void **)&v47, v2, v5, v7 + ~v4);
  Util::toInt<unsigned int,(void *)0>(v13, &v51);
  v14 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v47 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)(*v2 - 12);
  if ( v15 < v8 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v15);
  v16 = (unsigned int *)sub_21E9040((void **)&v46, v2, v8, v9 + ~v7);
  Util::toInt<unsigned int,(void *)0>(v16, &v50);
  v17 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v46 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = v9 + 1;
  v19 = *(_DWORD *)(*v2 - 12);
  if ( v19 < v9 + 1 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v18, v19);
  v20 = (unsigned int *)sub_21E9040((void **)&v45, v2, v18, v19 + ~v9);
  Util::toInt<unsigned int,(void *)0>(v20, &v49);
  v21 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v45 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  RegionalOffer::_getRegion((RegionalOffer *)&v41);
  if ( v44 )
    v22 = v43;
    v23 = v43;
    v24 = &v42;
    v25 = (v51 << 16) + (*(_DWORD *)&v52 << 24) + (*(_DWORD *)&v50 << 8) + v49;
    do
      v26 = v24;
      v24 = (int *)v23;
      if ( !v23 )
      {
LABEL_22:
        v29 = (int)v26;
        goto LABEL_66;
      }
      while ( 1 )
        v27 = v24[4];
        if ( v27 >= *(_DWORD *)&v52 )
          break;
        v24 = (int *)v24[3];
        if ( !v24 )
          goto LABEL_22;
      v23 = v24[2];
    while ( *(_DWORD *)&v52 < v27 );
    v28 = (int *)v24[3];
    if ( v23 )
        v29 = v23;
        while ( *(_DWORD *)(v29 + 16) < *(_DWORD *)&v52 )
        {
          v29 = *(_DWORD *)(v29 + 12);
          if ( !v29 )
            goto LABEL_56;
        }
        v23 = *(_DWORD *)(v29 + 8);
        v24 = (int *)v29;
      while ( v23 );
LABEL_56:
      v29 = (int)v24;
    if ( !v28 )
      goto LABEL_66;
    v38 = v26;
      v26 = v28;
      while ( *(_DWORD *)&v52 >= (unsigned int)v26[4] )
        v26 = (int *)v26[3];
        if ( !v26 )
          v26 = v38;
          goto LABEL_66;
      v28 = (int *)v26[2];
      v38 = v26;
    while ( v28 );
LABEL_66:
    while ( (int *)v29 != v26 )
      if ( !(((unsigned int)*(_QWORD *)(v29 + 20) ^ v25) & -(signed int)(*(_QWORD *)(v29 + 20) >> 32)) )
        v39 = 1;
        goto LABEL_70;
      v29 = sub_21D47E8(v29);
  else
  v39 = 0;
LABEL_70:
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,RegionIP>,std::_Select1st<std::pair<unsigned int const,RegionIP>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,RegionIP>>>::_M_erase(
    (int)&v41,
    v22);
  return v39;
}
