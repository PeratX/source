

_DWORD *__fastcall utility::conversions::to_base64(utility::conversions *this, int a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = a3;
  return j__to_base64((const unsigned __int8 *)this, (unsigned int)&v4, 8u);
}


void *__fastcall utility::conversions::to_utf8string(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0@1

  *a1 = *a2;
  result = &unk_28898CC;
  *a2 = &unk_28898CC;
  return result;
}


void __fastcall utility::datetime::from_string(int a1, int *a2, int a3)
{
  int v3; // r8@1
  int v4; // r6@1
  int *v5; // r5@1
  char *v6; // r0@7
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  char v9; // r0@13
  char *v10; // r0@16
  char *v11; // r6@16
  _BYTE *v12; // r0@17
  time_t v13; // r5@18
  char *v14; // r0@21
  signed __int64 v15; // r0@23
  void *v16; // r0@24
  unsigned int *v17; // r2@26
  signed int v18; // r1@28
  unsigned int *v19; // r2@30
  signed int v20; // r1@32
  char *v21; // r0@43
  unsigned int *v22; // r2@44
  signed int v23; // r1@46
  char *value; // [sp+0h] [bp-60h]@16
  char *v25; // [sp+4h] [bp-5Ch]@2
  struct tm tp; // [sp+8h] [bp-58h]@1
  int v27; // [sp+34h] [bp-2Ch]@1
  signed __int64 v28; // [sp+38h] [bp-28h]@1

  v3 = a1;
  v28 = 0LL;
  v4 = a3;
  v5 = a2;
  sub_21E8AF4(&v27, a2);
  j___aeabi_memclr8_1((int)&tp, 44);
  if ( !v4 )
  {
    j_strptime();
LABEL_13:
    v9 = byte_2880D68;
    __dmb();
    if ( !(v9 & 1) && j_j___cxa_guard_acquire_1((unsigned int *)&byte_2880D68) )
    {
      sub_1FDBD04((pthread_mutex_t *)algn_2880D64);
      j___cxa_atexit_1((int)boost::mutex::~mutex);
      j_j___cxa_guard_release_1((unsigned int *)&byte_2880D68);
    }
    sub_1FDD0BC((pthread_mutex_t *)algn_2880D64);
    value = (char *)&unk_28898CC;
    v10 = j_getenv("TZ");
    v11 = v10;
    if ( v10 )
      v12 = (_BYTE *)j_strlen_1(v10);
      sub_21E8190((void **)&value, v11, v12);
    j_setenv("TZ", "UTC", 1);
    v13 = j_mktime(&tp);
    if ( v11 )
      j_setenv("TZ", value, 1);
    else
      j_unsetenv("TZ");
    j_tzset();
    v14 = value - 12;
    if ( (int *)(value - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(value - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    while ( j_pthread_mutex_unlock_1((pthread_mutex_t *)algn_2880D64) == 4 )
      ;
    v15 = 10000000LL * (signed int)v13 + v28 - 717324288;
    HIDWORD(v15) += 27111902;
    *(_QWORD *)v3 = v15;
    goto LABEL_24;
  }
  v25 = (char *)&unk_28898CC;
  j_utility::extract_fractional_second(v5, (int *)&v25, &v28);
  if ( j_strptime()
    || j_strptime()
    || (j___aeabi_memclr8_1((int)&tp, 44), tp.tm_year = 70, tp.tm_mday = 1, tp.tm_mon = 1, j_strptime())
    || j_strptime() )
    v6 = v25 - 12;
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v25 - 4);
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    goto LABEL_13;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  v21 = v25 - 12;
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v25 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
LABEL_24:
  v16 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v27 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


char *__fastcall utility::nonce_generator::generate(utility::nonce_generator *this, int a2)
{
  const void **v2; // r4@1
  int v3; // r11@1
  int v4; // r1@1
  char *result; // r0@1
  char *v6; // r5@2
  int v7; // r0@3
  _DWORD *v8; // r1@3
  int v9; // r2@3
  char v10; // r9@3
  int v11; // r7@3
  int v12; // [sp+8h] [bp-30h]@1
  int v13; // [sp+Ch] [bp-2Ch]@1

  v2 = (const void **)this;
  v3 = a2;
  v4 = *(_DWORD *)(utility::nonce_generator::c_allowed_chars - 12);
  v12 = 0;
  v13 = v4 - 1;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E6FCC((const void **)this, *(_DWORD *)(v3 + 2500));
  result = *(char **)(v3 + 2500);
  if ( (signed int)result >= 1 )
  {
    v6 = result + 1;
    do
    {
      v7 = j_std::uniform_int_distribution<int>::operator()<std::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(
             (int)&v12,
             v3,
             (unsigned __int64 *)&v12);
      v8 = *v2;
      v9 = *(_QWORD *)((char *)*v2 - 12);
      v10 = *(_BYTE *)(utility::nonce_generator::c_allowed_chars + v7);
      v11 = v9 + 1;
      if ( v9 + 1 > (unsigned int)(*(_QWORD *)((char *)*v2 - 12) >> 32) || *(v8 - 1) >= 1 )
      {
        sub_21E6FCC(v2, v9 + 1);
        v8 = *v2;
        v9 = *((_DWORD *)*v2 - 3);
      }
      *((_BYTE *)v8 + v9) = v10;
      result = (char *)*v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *((_DWORD *)result - 1) = 0;
        *((_DWORD *)result - 3) = v11;
        result[v11] = byte_26C67B8[0];
      --v6;
    }
    while ( (signed int)v6 > 1 );
  }
  return result;
}


_DWORD *__fastcall utility::timespan::seconds_to_xml_duration(int *a1, int a2, unsigned int a3, int a4)
{
  int v4; // r7@1
  unsigned int v5; // r4@1
  signed __int64 v6; // r0@1
  signed __int64 v7; // kr00_8@1
  int v8; // r8@1
  signed __int64 v9; // r0@1
  signed int v10; // r9@1
  int v11; // r11@5
  signed __int64 v12; // r0@9
  signed __int64 v13; // kr08_8@9
  int v14; // r10@9
  signed __int64 v15; // r0@9
  signed __int64 v16; // r2@13
  bool v17; // zf@13
  signed __int64 v18; // r0@17
  signed int v19; // r2@17
  int v20; // r9@21
  unsigned int v21; // r5@21
  int v22; // r6@23
  unsigned int **v23; // r0@23
  signed int v24; // r1@23
  signed int v25; // r0@25
  char *v26; // r0@30
  signed int v27; // r0@31
  signed int v28; // r1@33
  signed int v29; // r5@33
  char *v30; // r0@38
  signed int v31; // r0@39
  char *v32; // r0@46
  signed int v33; // r0@47
  signed int v34; // r1@47
  char *v35; // r0@54
  void *v36; // r0@55
  unsigned int *v38; // r2@57
  signed int v39; // r1@59
  int *v40; // [sp+Ch] [bp-ECh]@1
  int v41; // [sp+10h] [bp-E8h]@23
  int v42; // [sp+14h] [bp-E4h]@15
  char v43; // [sp+18h] [bp-E0h]@23
  void **v44; // [sp+1Ch] [bp-DCh]@1
  void **v45; // [sp+20h] [bp-D8h]@55
  int v46; // [sp+3Ch] [bp-BCh]@56
  int v47; // [sp+44h] [bp-B4h]@55
  void **v48; // [sp+48h] [bp-B0h]@55

  v40 = a1;
  v4 = a4;
  v5 = a3;
  sub_21D0A10((int)&v44, 16);
  v6 = j_j___aeabi_ldivmod_1(__PAIR__(v4, v5), 3600LL);
  v7 = v6;
  v9 = j_j___moddi3(v6, 24LL);
  v8 = v9;
  LODWORD(v9) = 0;
  v10 = 0;
  if ( v5 > 0x1517F )
    LODWORD(v9) = 1;
  if ( v4 > 0 )
    v10 = 1;
  v11 = HIDWORD(v9);
  if ( v4 )
    LODWORD(v9) = v10;
  if ( !(_DWORD)v9 )
  {
    v11 = HIDWORD(v7);
    v8 = v7;
  }
  v12 = j_j___aeabi_ldivmod_1(__PAIR__(v4, v5), 60LL);
  v13 = v12;
  v15 = j_j___moddi3(v12, 60LL);
  v14 = v15;
  LODWORD(v15) = 0;
  if ( v5 >> 4 > 0xE0 )
    LODWORD(v15) = 1;
    LODWORD(v15) = v10;
  LODWORD(v16) = 60;
  v17 = (_DWORD)v15 == 0;
  LODWORD(v15) = v5;
  if ( v17 )
    HIDWORD(v15) = HIDWORD(v13);
  HIDWORD(v16) = 0;
  v42 = HIDWORD(v15);
  HIDWORD(v15) = v4;
    v14 = v13;
  v18 = j_j___moddi3(v15, v16);
  v19 = 0;
  if ( v5 > 0x3B )
    v19 = 1;
    v19 = v10;
  v20 = HIDWORD(v18);
  LOWORD(v21) = 20864;
  if ( !v19 )
    v20 = v4;
    LODWORD(v18) = v5;
  HIWORD(v21) = 1;
  v41 = v18;
  j_j___aeabi_ldivmod_1(__PAIR__(v4, v5), v21);
  v22 = (int)*(v44 - 3);
  v23 = (unsigned int **)sub_21C94B8();
  sub_21B5BAC((unsigned int **)&v43, (int)&v44 + v22, v23);
  sub_21C802C((unsigned int **)&v43);
  sub_21CBF38((char *)&v44, (int)&aCdefghjklmnopq[12], 1);
  v24 = 0;
  if ( v5 < v21 )
    v24 = 1;
  v25 = 0;
  if ( v4 < 0 )
    v25 = 1;
  if ( !v4 )
    v25 = v24;
  if ( !v25 )
    v26 = sub_21CC720((char *)&v44);
    sub_21CBF38(v26, (int)&aCdefghjklmnopq[1], 1);
  sub_21CBF38((char *)&v44, (int)"T", 1);
  v27 = 0;
  if ( !v8 )
    v27 = 1;
  v28 = 0;
  v29 = 0;
  if ( v11 < 0 )
    v28 = 1;
  if ( !v11 )
    v28 = v27;
  if ( !v28 )
    v30 = sub_21CC720((char *)&v44);
    sub_21CBF38(v30, (int)&aCdefghjklmnopq[5], 1);
  v31 = 0;
  if ( !v14 )
    v31 = 1;
  if ( v42 < 0 )
    v29 = 1;
  if ( !v42 )
    v29 = v31;
  if ( !v29 )
    v32 = sub_21CC720((char *)&v44);
    sub_21CBF38(v32, (int)&aCdefghjklmnopq[9], 1);
  v33 = 0;
  v34 = 0;
  if ( !v41 )
    v34 = 1;
  if ( v20 < 0 )
    v33 = 1;
  if ( !v20 )
    v33 = v34;
  if ( !v33 )
    v35 = sub_21CC720((char *)&v44);
    sub_21CBF38(v35, (int)&aCdefghjklmnopq[15], 1);
  sub_21CFED8(v40, (int)&v45);
  v44 = &off_26D3F44;
  v48 = &off_26D3F58;
  v45 = &off_27734E8;
  v36 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v47 - 4);
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
      j_j_j_j__ZdlPv_9(v36);
  v45 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v46);
  return sub_21B6560(&v48);
}


int __fastcall utility::conversions::latin1_to_utf16(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  int v4; // r1@1
  int result; // r0@1
  unsigned int v6; // r7@2
  __int16 v7; // r6@3
  signed int v8; // r1@3

  v2 = a1;
  v3 = a2;
  *a1 = (int)&unk_27D67A0;
  j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE6resizeEjDs(a1, *(_DWORD *)(*a2 - 12), 0);
  v4 = *v3;
  result = *(_DWORD *)(*v3 - 12);
  if ( result )
  {
    v6 = 0;
    result = *v2;
    do
    {
      v7 = *(_BYTE *)(v4 + v6);
      v8 = *(_DWORD *)(result - 4);
      if ( v8 >= 0 && (_UNKNOWN *)(result - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
      {
        if ( v8 >= 1 )
        {
          j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE9_M_mutateEjjj(v2, 0, 0, 0);
          result = *v2;
        }
        *(_DWORD *)(result - 4) = -1;
        result = *v2;
      }
      *(_WORD *)(result + 2 * v6++) = v7;
      v4 = *v3;
    }
    while ( v6 < *(_DWORD *)(*v3 - 12) );
  }
  return result;
}


int __fastcall utility::conversions::scan_string<int>(unsigned int *a1, unsigned int **a2)
{
  unsigned int **v2; // r5@1
  int v3; // r4@2
  void *v4; // r0@2
  char *v6; // r0@4
  int v7; // r3@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  int v10; // [sp+0h] [bp-D8h]@1
  void **v11; // [sp+4h] [bp-D4h]@1
  int v12; // [sp+8h] [bp-D0h]@3
  void **v13; // [sp+Ch] [bp-CCh]@2
  int v14; // [sp+28h] [bp-B0h]@3
  int v15; // [sp+30h] [bp-A8h]@2
  void **v16; // [sp+34h] [bp-A4h]@2
  int v17; // [sp+BCh] [bp-1Ch]@1

  v2 = a2;
  sub_21D0618((int)&v11, a1, 8);
  sub_21B5BAC((unsigned int **)&v10, (int)*(v11 - 3) + (_DWORD)&v11, v2);
  sub_21C802C((unsigned int **)&v10);
  sub_21B79F4((char *)&v11, &v17);
  if ( *((_BYTE *)*(v11 - 3) + (_DWORD)&v11 + 20) & 1 )
  {
    v6 = j_j___cxa_allocate_exception_0(4);
    *(_DWORD *)v6 = &off_27727A8;
    j_j___cxa_throw_0((int)v6, (int)&`typeinfo for'std::bad_cast, (int)std::bad_cast::~bad_cast, v7);
  }
  v11 = &off_26D3F0C;
  v16 = &off_26D3F20;
  v13 = &off_27734E8;
  v3 = v17;
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  v13 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v14);
  v11 = &off_276BFCC;
  v16 = &off_276BFE0;
  v12 = 0;
  sub_21B6560(&v16);
  return v3;
}


_DWORD *__fastcall utility::conversions::print_string<std::string>(int *a1, int *a2, unsigned int **a3)
{
  int *v3; // r5@1
  int *v4; // r6@1
  unsigned int **v5; // r7@1
  void *v6; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  char *v10; // r0@12
  int v11; // [sp+0h] [bp-D0h]@1
  void **v12; // [sp+4h] [bp-CCh]@1
  void **v13; // [sp+8h] [bp-C8h]@2
  int v14; // [sp+24h] [bp-ACh]@3
  int v15; // [sp+2Ch] [bp-A4h]@2
  int v16; // [sp+30h] [bp-A0h]@3

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_21D0A10((int)&v12, 16);
  sub_21B5BAC((unsigned int **)&v11, (int)*(v12 - 3) + (_DWORD)&v12, v5);
  sub_21C802C((unsigned int **)&v11);
  sub_21CBF38((char *)&v12, *v3, *(_DWORD *)(*v3 - 12));
  if ( *((_BYTE *)*(v12 - 3) + (_DWORD)&v12 + 20) & 1 )
  {
    v10 = j_j___cxa_allocate_exception(4);
    *(_DWORD *)v10 = &off_27727A8;
    j_j___cxa_throw((int)v10, (int)&`typeinfo for'std::bad_cast, (int)std::bad_cast::~bad_cast, (int)&off_27727A8);
  }
  sub_21CFED8(v4, (int)&v13);
  v12 = off_26D3F28;
  *(_DWORD *)((char *)*(off_26D3F28 - 3) + (_DWORD)&v12) = off_26D3F34;
  v13 = &off_27734E8;
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  v13 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v14);
  return sub_21B6560(&v16);
}


signed int __fastcall utility::cmp::icmp(const void **a1, const void **a2)
{
  const void **v2; // r5@1
  const void **v3; // r6@1
  _DWORD *v4; // r0@1
  signed int v5; // r8@1
  _DWORD *v6; // r1@1
  unsigned int v7; // r7@1
  unsigned int v8; // r2@1
  unsigned __int8 v9; // r4@5
  unsigned __int8 v10; // r1@9
  signed int result; // r0@13

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  v5 = 0;
  v6 = *v3;
  v7 = 0;
  v8 = *(v4 - 3);
  if ( *((_DWORD *)*v3 - 3) )
  {
    while ( v7 != v8 )
    {
      if ( *(v6 - 1) >= 0 )
      {
        sub_119CB68(v3);
        v4 = *v2;
        v6 = *v3;
      }
      v9 = *((_BYTE *)v6 + v7);
      if ( (unsigned __int8)(v9 - 65) < 0x1Au )
        v9 += 32;
      if ( *(v4 - 1) >= 0 )
        sub_119CB68(v2);
      v10 = *((_BYTE *)v4 + v7);
      if ( (unsigned __int8)(v10 - 65) < 0x1Au )
        v10 += 32;
      if ( v9 > (unsigned int)v10 )
        break;
      if ( v9 < (unsigned int)v10 )
        return -1;
      v6 = *v3;
      ++v7;
      v8 = *(v4 - 3);
      if ( v7 >= *((_DWORD *)*v3 - 3) )
        goto LABEL_15;
    }
    result = 1;
  }
  else
LABEL_15:
    if ( v7 < v8 )
      v5 = -1;
    result = v5;
  return result;
}


int __fastcall utility::datetime::timeval_to_datetime(int result, const timeval *a2)
{
  timeval v2; // kr00_8@1
  __int64 v9; // r1@1
  unsigned __int64 v10; // kr10_8@1

  v2 = *a2;
  _R1 = 5 * (*(unsigned __int64 *)a2 >> 32);
  __asm { SBFX.W          R3, R1, #0x1E, #1 }
  v10 = 10000000LL * (signed int)v2.tv_sec + __PAIR__(_R3, 2 * _R1) - 116444733139681280LL;
  HIDWORD(v9) = v10 >> 32;
  LODWORD(v9) = v10;
  *(_QWORD *)result = v9;
  return result;
}


int __fastcall utility::details::str_icmp(_DWORD *a1, _BYTE **a2)
{
  _DWORD *v2; // r5@1
  _BYTE **v3; // r4@1
  _BYTE *v4; // r7@1
  _BYTE *v5; // r10@1
  _BYTE *v6; // r11@1
  int v7; // r9@3
  int v8; // r8@3
  int v9; // r5@4
  int v10; // r0@4
  int v11; // r5@4
  int v12; // r6@4
  int v13; // r0@4
  bool v14; // zf@6
  signed int v15; // r2@8
  signed int v16; // r1@8
  int v17; // r4@12
  int v19; // [sp+0h] [bp-38h]@1
  int v20; // [sp+4h] [bp-34h]@1
  _BYTE *v21; // [sp+8h] [bp-30h]@1
  char v22; // [sp+Ch] [bp-2Ch]@1
  char v23; // [sp+10h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  sub_21C9520((unsigned int **)&v22);
  sub_21C7A30((unsigned int **)&v23, (unsigned int **)&v22);
  v4 = *v3;
  v5 = (_BYTE *)*v2;
  v21 = *v3;
  v20 = *((_DWORD *)*v3 - 3);
  v6 = (_BYTE *)*v2;
  v19 = *(_DWORD *)(*v2 - 12);
  if ( v19 && (v4 = *v3, v6 = (_BYTE *)*v2, v20) )
  {
    v4 = *v3;
    v6 = (_BYTE *)*v2;
    v7 = v19 - 1;
    v8 = v20 - 1;
    while ( 1 )
    {
      v9 = *v6;
      v10 = sub_21BE0C0((int)&v23);
      v11 = (*(int (**)(void))(*(_DWORD *)v10 + 8))();
      v12 = *v4;
      v13 = sub_21BE0C0((int)&v23);
      if ( v11 != (*(int (**)(void))(*(_DWORD *)v13 + 8))() )
        break;
      ++v4;
      ++v6;
      if ( v8 )
      {
        --v8;
        v14 = v7-- == 0;
        if ( !v14 )
          continue;
      }
      goto LABEL_8;
    }
    v17 = 0;
  }
  else
LABEL_8:
    v15 = 0;
    v16 = 0;
    if ( v6 == &v5[v19] )
      v16 = 1;
    if ( v4 == &v21[v20] )
      v15 = 1;
    v17 = v15 & v16;
  sub_21C802C((unsigned int **)&v23);
  sub_21C802C((unsigned int **)&v22);
  return v17;
}


const unsigned __int8 *__fastcall utility::conversions::to_base64(const unsigned __int8 *result, _QWORD *a2)
{
  unsigned int v2; // r1@1 OVERLAPPED
  int v3; // r2@1 OVERLAPPED

  *(_QWORD *)&v2 = *a2;
  if ( v3 == v2 )
    *(_DWORD *)result = &unk_28898CC;
  else
    result = (const unsigned __int8 *)j__to_base64(result, v2, v3 - v2);
  return result;
}


void *__fastcall utility::conversions::to_string_t(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0@1

  *a1 = *a2;
  result = &unk_28898CC;
  *a2 = &unk_28898CC;
  return result;
}


_DWORD *__fastcall utility::timespan::xml_duration_to_seconds(int a1, unsigned int *a2)
{
  int v2; // r8@1
  int v3; // r4@1
  unsigned int **v4; // r0@1
  int v5; // r7@1
  unsigned int v6; // r6@1
  unsigned int v7; // r4@1
  int v8; // r10@4
  int v9; // r0@5
  int v10; // r1@7
  int v11; // r0@11
  int v12; // r1@18
  int *v13; // r0@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  char v17; // [sp+4h] [bp-E4h]@1
  void **v18; // [sp+8h] [bp-E0h]@1
  int v19; // [sp+Ch] [bp-DCh]@19
  void **v20; // [sp+10h] [bp-D8h]@18
  int v21; // [sp+2Ch] [bp-BCh]@19
  int v22; // [sp+34h] [bp-B4h]@18
  void **v23; // [sp+38h] [bp-B0h]@18

  v2 = a1;
  sub_21D0618((int)&v18, a2, 8);
  v3 = (int)*(v18 - 3);
  v4 = (unsigned int **)sub_21C94B8();
  sub_21B5BAC((unsigned int **)&v17, (int)&v18 + v3, v4);
  sub_21C802C((unsigned int **)&v17);
  v5 = sub_21B7BA0((int)&v18);
  v6 = 0;
  v7 = 0;
  while ( v5 != -1 )
  {
    v5 = sub_21B7BA0((int)&v18);
    v8 = 0;
    if ( (unsigned __int8)(v5 - 48) <= 9u )
    {
      do
      {
        v9 = sub_21B7BA0((int)&v18);
        if ( v9 == 46 )
        {
          do
            v9 = sub_21B7BA0((int)&v18);
          while ( (unsigned __int8)(v9 - 48) < 0xAu );
        }
        v10 = v5 + 10 * v8;
        v5 = v9;
        v8 = v10 - 48;
      }
      while ( (unsigned __int8)(v9 - 48) < 0xAu );
    }
    if ( v5 <= 71 )
      if ( v5 == -1 )
        goto LABEL_17;
      if ( v5 == 68 )
        v5 = 68;
        v11 = 86400 * v8;
        goto LABEL_2;
    else if ( v5 == 72 )
      v11 = 3600 * v8;
      v5 = 72;
LABEL_2:
      v7 = (__PAIR__(v7, v6) + v11) >> 32;
      v6 += v11;
    else
      if ( v5 == 77 )
        v5 = 77;
        v11 = 60 * v8;
      if ( v5 == 83 )
LABEL_17:
        v7 = (__PAIR__(v7, v6) + v8) >> 32;
        v6 += v8;
        break;
  }
  v18 = &off_26D3F0C;
  v23 = &off_26D3F20;
  v20 = &off_27734E8;
  v12 = v22;
  v13 = (int *)(v22 - 12);
  *(_DWORD *)v2 = v6;
  *(_DWORD *)(v2 + 4) = v7;
  if ( v13 != &dword_28898C0 )
    v15 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v20 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v21);
  v18 = &off_276C1BC;
  v23 = &off_276C1D0;
  v19 = 0;
  return sub_21B6560(&v23);
}


int __fastcall utility::conversions::utf16_to_utf8(const void **a1, _DWORD *a2)
{
  const void **v2; // r4@1
  _DWORD *v3; // r8@1
  _WORD *v4; // r7@1
  int result; // r0@1
  unsigned int v6; // r9@3
  int v7; // r5@6
  _DWORD *v8; // r0@7
  int v9; // r1@7 OVERLAPPED
  int v10; // r6@7
  unsigned int v11; // r2@7
  unsigned int v12; // r5@10
  _DWORD *v13; // r0@10
  int v14; // r1@12 OVERLAPPED
  int v15; // r6@12
  unsigned int v16; // r2@12
  _DWORD *v17; // r0@15
  int v18; // r1@17 OVERLAPPED
  int v19; // r6@17
  unsigned int v20; // r2@17
  _DWORD *v21; // r0@20
  int v22; // r1@22 OVERLAPPED
  int v23; // r6@22
  unsigned int v24; // r2@22
  _DWORD *v25; // r0@26
  int v26; // r1@26 OVERLAPPED
  unsigned int v27; // r2@26
  _DWORD *v28; // r0@31
  int v29; // r1@31 OVERLAPPED
  int v30; // r6@31
  unsigned int v31; // r2@31
  unsigned int v32; // r2@36
  _DWORD *v33; // r0@39
  int v34; // r1@39 OVERLAPPED
  int v35; // r6@39
  unsigned int v36; // r2@39
  _DWORD *v37; // r0@42
  unsigned int v38; // r5@44
  int v39; // r1@44 OVERLAPPED
  int v40; // r6@44
  unsigned int v41; // r2@44
  unsigned int v42; // r2@49
  _DWORD *v43; // r0@54
  char *v44; // r8@58
  int v45; // r3@58
  char *v46; // r8@60
  int v47; // r3@60
  int v48; // [sp+Ch] [bp-3Ch]@60
  int v49; // [sp+14h] [bp-34h]@58

  v2 = a1;
  v3 = a2;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, *(_DWORD *)(*a2 - 12));
  v4 = (_WORD *)*v3;
  result = *(_DWORD *)(*v3 - 12);
  if ( result )
  {
    result = (int)&v4[result];
    do
    {
      v6 = *v4;
      if ( v6 < 0xD800 )
      {
        if ( v6 <= 0x7F )
        {
          v25 = *v2;
          *(_QWORD *)&v26 = *(_QWORD *)((char *)*v2 - 12);
          v23 = v26 + 1;
          if ( v26 + 1 > v27 || *(v25 - 1) >= 1 )
          {
            sub_21E6FCC(v2, v26 + 1);
            v25 = *v2;
            v26 = *((_DWORD *)*v2 - 3);
          }
          *((_BYTE *)v25 + v26) = v6;
          goto LABEL_54;
        }
        if ( v6 >> 11 )
LABEL_39:
          v33 = *v2;
          *(_QWORD *)&v34 = *(_QWORD *)((char *)*v2 - 12);
          v35 = v34 + 1;
          if ( v34 + 1 > v36 || *(v33 - 1) >= 1 )
            sub_21E6FCC(v2, v34 + 1);
            v33 = *v2;
            v34 = *((_DWORD *)*v2 - 3);
          *((_BYTE *)v33 + v34) = (v6 >> 12) | 0xE0;
          v37 = *v2;
          if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
            *(v37 - 1) = 0;
            *(v37 - 3) = v35;
            *((_BYTE *)v37 + v35) = byte_26C67B8[0];
            v37 = *v2;
          v38 = *v4;
          *(_QWORD *)&v39 = *(_QWORD *)(v37 - 3);
          v40 = v39 + 1;
          if ( v39 + 1 > v41 || *(v37 - 1) >= 1 )
            sub_21E6FCC(v2, v39 + 1);
            v39 = *((_DWORD *)*v2 - 3);
          *((_BYTE *)v37 + v39) = (v38 >> 6) & 0x3F | 0x80;
          v21 = *v2;
            *(v21 - 1) = 0;
            *(v21 - 3) = v40;
            *((_BYTE *)v21 + v40) = byte_26C67B8[0];
            v21 = *v2;
          *(_QWORD *)&v22 = *(_QWORD *)(v21 - 3);
          LOWORD(v12) = *v4;
          v23 = v22 + 1;
          if ( v22 + 1 <= v42 && *(v21 - 1) < 1 )
            goto LABEL_53;
          sub_21E6FCC(v2, v22 + 1);
          goto LABEL_52;
        v28 = *v2;
        *(_QWORD *)&v29 = *(_QWORD *)((char *)*v2 - 12);
        v30 = v29 + 1;
        if ( v29 + 1 > v31 || *(v28 - 1) >= 1 )
          sub_21E6FCC(v2, v29 + 1);
          v28 = *v2;
          v29 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v28 + v29) = (v6 >> 6) | 0xC0;
        v21 = *v2;
        if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
          *(v21 - 1) = 0;
          *(v21 - 3) = v30;
          *((_BYTE *)v21 + v30) = byte_26C67B8[0];
        *(_QWORD *)&v22 = *(_QWORD *)(v21 - 3);
        LOWORD(v12) = *v4;
        v23 = v22 + 1;
        if ( v22 + 1 <= v32 && *(v21 - 1) < 1 )
          goto LABEL_53;
        sub_21E6FCC(v2, v22 + 1);
      }
      else
        if ( v6 >= 0xDC00 )
          goto LABEL_39;
        ++v4;
        if ( v4 == (_WORD *)result )
          v44 = j_j___cxa_allocate_exception_0(8);
          sub_21E94B4((void **)&v49, "UTF-16 string is missing low surrogate");
          sub_21D3710((int)v44, &v49);
          j_j___cxa_throw_0((int)v44, (int)&off_2773838, (int)sub_21D2F8C, v45);
        v7 = *v4;
        if ( (v7 & 0xFC00) != 56320 )
          v46 = j_j___cxa_allocate_exception_0(8);
          sub_21E94B4((void **)&v48, "UTF-16 string has invalid low surrogate");
          sub_21D3710((int)v46, &v48);
          j_j___cxa_throw_0((int)v46, (int)&off_2773838, (int)sub_21D2F8C, v47);
        v8 = *v2;
        *(_QWORD *)&v9 = *(_QWORD *)((char *)*v2 - 12);
        v10 = v9 + 1;
        if ( v9 + 1 > v11 || *(v8 - 1) >= 1 )
          sub_21E6FCC(v2, v9 + 1);
          v8 = *v2;
          v9 = *((_DWORD *)*v2 - 3);
        v12 = (((v6 << 10) - 56623104) | (v7 - 56320)) + 0x10000;
        *((_BYTE *)v8 + v9) = (v12 >> 18) | 0xF0;
        v13 = *v2;
          *(v13 - 1) = 0;
          *(v13 - 3) = v10;
          *((_BYTE *)v13 + v10) = byte_26C67B8[0];
          v13 = *v2;
        *(_QWORD *)&v14 = *(_QWORD *)(v13 - 3);
        v15 = v14 + 1;
        if ( v14 + 1 > v16 || *(v13 - 1) >= 1 )
          sub_21E6FCC(v2, v14 + 1);
          v14 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v13 + v14) = (v12 >> 12) & 0x3F | 0x80;
        v17 = *v2;
          *(v17 - 1) = 0;
          *(v17 - 3) = v15;
          *((_BYTE *)v17 + v15) = byte_26C67B8[0];
          v17 = *v2;
        *(_QWORD *)&v18 = *(_QWORD *)(v17 - 3);
        v19 = v18 + 1;
        if ( v18 + 1 > v20 || *(v17 - 1) >= 1 )
          sub_21E6FCC(v2, v18 + 1);
          v18 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v17 + v18) = (v12 >> 6) & 0x3F | 0x80;
          *(v21 - 3) = v19;
          *((_BYTE *)v21 + v19) = byte_26C67B8[0];
        if ( v22 + 1 <= v24 && *(v21 - 1) < 1 )
LABEL_52:
      v21 = *v2;
      v22 = *((_DWORD *)*v2 - 3);
LABEL_53:
      *((_BYTE *)v21 + v22) = v12 & 0x3F | 0x80;
LABEL_54:
      v43 = *v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *(v43 - 1) = 0;
        *(v43 - 3) = v23;
        *((_BYTE *)v43 + v23) = byte_26C67B8[0];
      ++v4;
      result = *v3 + 2 * *(_DWORD *)(*v3 - 12);
    }
    while ( v4 != (_WORD *)result );
  }
  return result;
}


void __fastcall utility::conversions::latin1_to_utf8(const void **a1, int *a2)
{
  const void **v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-14h]@1

  v2 = a1;
  j_utility::conversions::latin1_to_utf16(&v6, a2);
  j_utility::conversions::utf16_to_utf8(v2, &v6);
  v3 = (void *)(v6 - 12);
  if ( (_UNKNOWN *)(v6 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
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
      j_operator delete(v3);
  }
}


_DWORD *__fastcall utility::conversions::print_string<int>(int *a1, _DWORD *a2, unsigned int **a3)
{
  _DWORD *v3; // r5@1
  int *v4; // r6@1
  unsigned int **v5; // r7@1
  void *v6; // r0@2
  char *v8; // r0@4
  int v9; // r3@4
  unsigned int *v10; // r1@6
  signed int v11; // r2@7
  int v12; // [sp+0h] [bp-D0h]@1
  void **v13; // [sp+4h] [bp-CCh]@1
  void **v14; // [sp+8h] [bp-C8h]@2
  int v15; // [sp+24h] [bp-ACh]@3
  int v16; // [sp+2Ch] [bp-A4h]@2
  void **v17; // [sp+30h] [bp-A0h]@2

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_21D0A10((int)&v13, 16);
  sub_21B5BAC((unsigned int **)&v12, (int)*(v13 - 3) + (_DWORD)&v13, v5);
  sub_21C802C((unsigned int **)&v12);
  sub_21CC43C(&v13, *v3);
  if ( *((_BYTE *)*(v13 - 3) + (_DWORD)&v13 + 20) & 1 )
  {
    v8 = j_j___cxa_allocate_exception_0(4);
    *(_DWORD *)v8 = &off_27727A8;
    j_j___cxa_throw_0((int)v8, (int)&`typeinfo for'std::bad_cast, (int)std::bad_cast::~bad_cast, v9);
  }
  sub_21CFED8(v4, (int)&v14);
  v13 = &off_26D3F44;
  v17 = &off_26D3F58;
  v14 = &off_27734E8;
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v16 - 4);
    __dmb();
    do
      v11 = __ldrex(v10);
    while ( __strex(v11 - 1, v10) );
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v14 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v15);
  return sub_21B6560(&v17);
}


void ***__fastcall utility::details::platform_category(utility::details *this)
{
  return off_27BE4A0;
}


_BYTE *__fastcall utility::conversions::utf8_to_utf16(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  _DWORD *v3; // r5@1
  _BYTE *result; // r0@1
  int v11; // r1@1
  _BYTE *v12; // r11@2
  unsigned int v13; // r10@5
  unsigned int v14; // r2@5
  _BYTE *v15; // r0@10
  _BYTE *v16; // r3@10
  int v17; // r1@10
  char v18; // r3@12
  _WORD *v19; // r0@15
  int v20; // r1@15 OVERLAPPED
  int v21; // r9@15
  unsigned int v22; // r2@15
  int v23; // r1@20 OVERLAPPED
  int v24; // r9@20
  unsigned int v25; // r2@20
  _WORD *v26; // r0@23
  _WORD *v27; // r0@25
  int v28; // r1@25 OVERLAPPED
  int v29; // r6@25
  unsigned int v30; // r2@25
  unsigned __int8 v31; // r2@29
  unsigned __int8 v32; // r7@29
  int v33; // r1@30 OVERLAPPED
  unsigned int v34; // r2@30
  char *v35; // r6@38
  int v36; // r3@38
  char *v37; // r6@40
  int v38; // r3@40
  char *v39; // r8@42
  int v40; // r3@42
  char *v41; // r8@44
  int v42; // r3@44
  int v43; // [sp+Ch] [bp-44h]@40
  int v44; // [sp+14h] [bp-3Ch]@38
  int v45; // [sp+1Ch] [bp-34h]@44
  int v46; // [sp+24h] [bp-2Ch]@42

  v2 = a1;
  v3 = a2;
  __asm { VLDR            D1, =0.7 }
  *a1 = &unk_27D67A0;
  _R0 = *a2;
  __asm
  {
    VLDR            S0, [R0,#-0xC]
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVTR.U32.F64   S0, D0
    VMOV            R1, S0
  }
  j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)v2, _R1);
  result = (_BYTE *)*v3;
  v11 = *(_DWORD *)(*v3 - 12);
  if ( v11 )
    v12 = (_BYTE *)*v3;
    do
    {
      v31 = *v12;
      v32 = *v12;
      if ( (signed int)*v12 < 0 )
      {
        if ( !(*v12 & 0x40) )
        {
          v39 = j_j___cxa_allocate_exception_0(8);
          sub_21E94B4((void **)&v46, "UTF-8 string character can never start with 10xxxxxx");
          sub_21D3710((int)v39, &v46);
          j_j___cxa_throw_0((int)v39, (int)&off_2773838, (int)sub_21D2F8C, v40);
        }
        if ( *v12 & 0x20 )
          if ( *v12 & 0x10 )
          {
            if ( *v12 & 8 )
            {
              v41 = j_j___cxa_allocate_exception_0(8);
              sub_21E94B4((void **)&v45, "UTF-8 string has invalid Unicode code point");
              sub_21D3710((int)v41, &v45);
              j_j___cxa_throw_0((int)v41, (int)&off_2773838, (int)sub_21D2F8C, v42);
            }
            v13 = v31 & 7;
            v14 = 3;
          }
          else
            v13 = v31 & 0xF;
            v14 = 2;
        else
          v13 = v31 & 0x1F;
          v14 = 1;
        v15 = &result[v11];
        v16 = v12 + 1;
        v17 = 0;
        do
          v12 = v16;
          if ( v15 == v16 )
            v35 = j_j___cxa_allocate_exception_0(8);
            sub_21E94B4((void **)&v44, "UTF-8 string is missing bytes in character");
            sub_21D3710((int)v35, &v44);
            j_j___cxa_throw_0((int)v35, (int)&off_2773838, (int)sub_21D2F8C, v36);
          v18 = *v16;
          if ( (v18 & 0xC0) != 128 )
            v37 = j_j___cxa_allocate_exception_0(8);
            sub_21E94B4((void **)&v43, "UTF-8 continuation byte is missing leading byte");
            sub_21D3710((int)v37, &v43);
            j_j___cxa_throw_0((int)v37, (int)&off_2773838, (int)sub_21D2F8C, v38);
          ++v17;
          v13 = v18 & 0x3F | (v13 << 6);
          v16 = v12 + 1;
        while ( (unsigned __int8)v17 < v14 );
        if ( v13 >> 16 )
          v19 = (_WORD *)*v2;
          *(_QWORD *)&v20 = *(_QWORD *)(*v2 - 12);
          v21 = v20 + 1;
          if ( v20 + 1 > v22 || *((_DWORD *)v19 - 1) >= 1 )
            j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)v2, v20 + 1);
            v19 = (_WORD *)*v2;
            v20 = *(_DWORD *)(*v2 - 12);
          v19[v20] = ((v13 - 0x10000) >> 10) | 0xD800;
          if ( (_UNKNOWN *)(v19 - 6) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
            *((_DWORD *)v19 - 1) = 0;
            *((_DWORD *)v19 - 3) = v21;
            v19[v21] = 0;
          *(_QWORD *)&v23 = *(_QWORD *)(v19 - 6);
          v24 = v23 + 1;
          if ( v23 + 1 > v25 || *((_DWORD *)v19 - 1) >= 1 )
            j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)v2, v23 + 1);
            v23 = *(_DWORD *)(*v2 - 12);
          v19[v23] = v13 & 0x3FF | 0xDC00;
          v26 = (_WORD *)*v2;
          if ( (_UNKNOWN *)(*v2 - 12) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
            *((_DWORD *)v26 - 1) = 0;
            *((_DWORD *)v26 - 3) = v24;
            v26[v24] = 0;
          goto LABEL_36;
        v27 = (_WORD *)*v2;
        *(_QWORD *)&v28 = *(_QWORD *)(*v2 - 12);
        v29 = v28 + 1;
        if ( v28 + 1 > v30 || *((_DWORD *)v27 - 1) >= 1 )
          j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)v2, v28 + 1);
          v27 = (_WORD *)*v2;
          v28 = *(_DWORD *)(*v2 - 12);
        v27[v28] = v13;
      }
      else
        *(_QWORD *)&v33 = *(_QWORD *)(*v2 - 12);
        v29 = v33 + 1;
        if ( v33 + 1 > v34 || *((_DWORD *)v27 - 1) >= 1 )
          j_j__ZNSbIDsSt11char_traitsIDsESaIDsEE7reserveEj((_WORD **)v2, v33 + 1);
          v33 = *(_DWORD *)(*v2 - 12);
        v27[v33] = v32;
      if ( (_UNKNOWN *)(v27 - 6) != &ZNSbIDsSt11char_traitsIDsESaIDsEE4_Rep20_S_empty_rep_storageE )
        *((_DWORD *)v27 - 1) = 0;
        *((_DWORD *)v27 - 3) = v29;
        v27[v29] = 0;
LABEL_36:
      result = (_BYTE *)*v3;
      ++v12;
      v11 = *(_DWORD *)(*v3 - 12);
    }
    while ( v12 != (_BYTE *)(*v3 + v11) );
  return result;
}


void *__fastcall utility::conversions::to_utf16string(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0@1

  *a1 = *a2;
  result = &unk_27D67A0;
  *a2 = &unk_27D67A0;
  return result;
}


void __fastcall utility::datetime::from_string(int a1, int *a2, int a3)
{
  utility::datetime::from_string(a1, a2, a3);
}


RakNet *__fastcall utility::datetime::to_string(void **a1, unsigned __int64 *a2, int a3)
{
  void **v3; // r8@1
  int v4; // r5@1
  unsigned __int64 v5; // kr00_8@1
  unsigned __int64 v6; // r0@1
  bool v7; // zf@1
  _BYTE *v8; // r0@5
  int v9; // t1@6
  RakNet *result; // r0@8
  const char *v11; // r2@10
  struct tm tp; // [sp+8h] [bp-F0h]@1
  time_t timer; // [sp+34h] [bp-C4h]@1
  char v14; // [sp+38h] [bp-C0h]@7
  int s; // [sp+80h] [bp-78h]@4
  int v16; // [sp+84h] [bp-74h]@4
  char v17; // [sp+88h] [bp-70h]@4
  char v18; // [sp+90h] [bp-68h]@1
  RakNet *v19; // [sp+D8h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v19 = _stack_chk_guard;
  v5 = *a2;
  timer = *a2 / 0x989680 + 1240428288;
  j_gmtime_r(&timer, &tp);
  j___aeabi_memclr8_1((int)&v18, 65);
  v6 = j_j___umoddi3(v5, 0x989680uLL);
  v7 = v4 == 0;
  if ( v4 )
    v7 = v6 == 0;
  if ( v7 )
  {
    v11 = "%Y-%m-%dT%H:%M:%SZ";
    if ( !v4 )
      v11 = "%a, %d %b %Y %H:%M:%S GMT";
    j_strftime_0(&v18, 0x41u, v11, &tp);
  }
  else
    v17 = 0;
    s = 0;
    v16 = 0;
    j_snprintf_0((char *)&s, 9u, ".%07ld", (_DWORD)v6);
    if ( BYTE3(v16) == 48 )
    {
      v8 = (_BYTE *)((unsigned int)&s | 7);
      do
      {
        *v8 = 0;
        v9 = *(v8-- - 1);
      }
      while ( v9 == 48 );
    }
    j___aeabi_memclr8_1((int)&v14, 65);
    j_strftime_0(&v14, 0x41u, "%Y-%m-%dT%H:%M:%S", &tp);
    j_snprintf_0(&v18, 0x41u, "%s%sZ", &v14, &s);
  sub_21E94B4(v3, &v18);
  result = (RakNet *)(_stack_chk_guard - v19);
  if ( _stack_chk_guard != v19 )
    j___stack_chk_fail_1((int)result);
  return result;
}


void __fastcall utility::conversions::latin1_to_utf8(const void **a1, int *a2)
{
  utility::conversions::latin1_to_utf8(a1, a2);
}


char *__fastcall utility::extract_fractional_second(int *a1, int *a2, signed __int64 *a3)
{
  const void **v3; // r4@1
  signed __int64 *v4; // r5@1
  char *result; // r0@1
  unsigned int v6; // r1@1
  int v7; // r6@2
  char *v8; // r7@6
  int v9; // r1@9
  int v10; // r1@10
  char *v11; // r6@11
  char v12; // t1@14
  int v13; // r1@18
  char v14; // t1@23
  int v15; // r6@34
  int v16; // t1@34
  char *v17; // r7@37

  v3 = (const void **)a2;
  v4 = a3;
  EntityInteraction::setInteractText(a2, a1);
  result = (char *)*v3;
  v6 = *((_DWORD *)*v3 - 3);
  if ( v6 >= 3 )
  {
    v7 = v6 - 1;
    if ( *((_DWORD *)result - 1) >= 0 )
    {
      sub_21E8010(v3);
      result = (char *)*v3;
    }
    if ( result[v7] == 90 )
      if ( *((_DWORD *)result - 1) <= -1 )
      {
        v8 = &result[*((_DWORD *)result - 3) - 1];
      }
      else
        sub_21E8010(v3);
        result = (char *)*v3;
        v8 = (char *)*v3 + *((_DWORD *)*v3 - 3) - 1;
        if ( *((_DWORD *)*v3 - 1) > -1 )
        {
          sub_21E8010(v3);
          result = (char *)*v3;
        }
      v9 = (v8 - result) >> 2;
      if ( v9 >= 1 )
        v10 = v9 + 1;
        while ( 1 )
          v11 = v8 - 1;
          if ( (unsigned __int8)(*(v8 - 1) - 48) > 9u )
          {
            v11 = v8;
            goto LABEL_31;
          }
          if ( (unsigned __int8)(*(v8 - 2) - 48) >= 0xAu )
          v11 = v8 - 3;
          if ( (unsigned __int8)(*(v8 - 3) - 48) >= 0xAu )
            break;
          v12 = *(v8 - 4);
          v8 -= 4;
          if ( (unsigned __int8)(v12 - 48) >= 0xAu )
          --v10;
          v11 = v8;
          if ( v10 <= 1 )
            goto LABEL_18;
        v11 = v8 - 2;
        goto LABEL_31;
      v11 = v8;
LABEL_18:
      v13 = v11 - result;
      if ( v11 - result == 1 )
        goto LABEL_25;
      if ( v13 != 2 )
        if ( v13 != 3 )
          v11 = result;
          goto LABEL_31;
        if ( (unsigned __int8)(*(v11 - 1) - 48) > 9u )
LABEL_31:
          if ( *((_DWORD *)result - 1) > -1 )
            sub_21E8010(v3);
            result = (char *)*v3;
          if ( result + 1 < v11 )
            v16 = (unsigned __int8)*(v11 - 1);
            v15 = (int)(v11 - 1);
            if ( v16 == 46 )
            {
              if ( *((_DWORD *)result - 1) >= 0 )
              {
                sub_21E8010(v3);
                result = (char *)*v3;
              }
              v17 = &result[*((_DWORD *)result - 3) - 1];
              *v4 = j_utility::timeticks_from_second<__gnu_cxx::__normal_iterator<char *,std::string>>(v15, (int)v17);
              result = sub_21E80E4(v3, v15, (int)v17);
            }
          return result;
        v11 = --v8;
      v14 = *(v8-- - 1);
      if ( (unsigned __int8)(v14 - 48) <= 9u )
        v11 = v8;
LABEL_25:
        if ( (unsigned __int8)(*(v8 - 1) - 48) <= 9u )
      goto LABEL_31;
  }
  return result;
}


int __fastcall utility::datetime::utc_now(utility::datetime *this)
{
  utility::datetime *v1; // r4@1
  unsigned __int64 v8; // r0@1
  int v10; // [sp+0h] [bp-10h]@1
  int v11; // [sp+4h] [bp-Ch]@1

  v1 = this;
  j_gettimeofday_0((struct timeval *)&v10, 0);
  _R1 = 5 * v11;
  __asm { SBFX.W          R2, R1, #0x1E, #1 }
  v8 = 10000000LL * v10 + __PAIR__(_R2, 10 * v11) - 116444733139681280LL;
  *(_QWORD *)v1 = v8;
  return v8;
}
