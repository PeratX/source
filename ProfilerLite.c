

char *__fastcall ProfilerLite::logToFile(int a1, const char **a2, int a3)
{
  char *result; // r0@1
  const char *v4; // r5@2
  char *v5; // r4@2
  int v6; // r0@3

  result = (char *)*(_BYTE *)(a3 + 4176);
  if ( !((unsigned __int8)result & 5) )
  {
    v4 = *a2;
    v5 = (char *)(a3 + 8);
    if ( *a2 )
    {
      v6 = strlen(*a2);
      sub_21CBF38(v5, (int)v4, v6);
    }
    else
      sub_21B583C((int)&v5[*(_DWORD *)(*(_DWORD *)v5 - 12)], *(_DWORD *)&v5[*(_DWORD *)(*(_DWORD *)v5 - 12) + 20] | 1);
    result = sub_21CB78C(v5);
  }
  return result;
}


signed int __fastcall ProfilerLite::tick(ProfilerLite *this, int a2, bool a3, int a4, __int64 a5, __int64 a6)
{
  RakNet **v7; // r6@1
  int v9; // r8@1
  signed int v18; // r0@3
  signed int result; // r0@7
  int v27; // r0@21
  const char *v29; // r3@23
  signed __int64 v38; // r0@25
  char *v39; // r6@26
  int v40; // r0@27
  char *v41; // r0@30
  _BYTE *v42; // r0@31
  int v43; // r1@32
  unsigned int *v45; // r2@44
  signed int v46; // r1@46
  int v48; // [sp+88h] [bp-18C0h]@25
  int v49; // [sp+8Ch] [bp-18BCh]@25
  ProfilerLite *v50; // [sp+98h] [bp-18B0h]@17
  ProfilerLite *v51; // [sp+9Ch] [bp-18ACh]@15
  double v52; // [sp+A0h] [bp-18A8h]@19
  ProfilerLite *v53; // [sp+A8h] [bp-18A0h]@13
  ProfilerLite *v54; // [sp+ACh] [bp-189Ch]@11
  double v55; // [sp+B0h] [bp-1898h]@9
  double v56; // [sp+B8h] [bp-1890h]@19
  ProfilerLite *v57; // [sp+C0h] [bp-1888h]@6
  int v58; // [sp+C4h] [bp-1884h]@19
  char v59; // [sp+C8h] [bp-1880h]@1
  char *s; // [sp+D0h] [bp-1878h]@25
  char v61; // [sp+D8h] [bp-1870h]@25
  char v62; // [sp+CD8h] [bp-C70h]@23

  _R4 = this;
  v7 = (RakNet **)&v59;
  _R7 = a4;
  v9 = a2;
  *(_DWORD *)&v59 = _stack_chk_guard;
  _R11 = (char *)this + 9696;
  _R0 = getTimeS();
  __asm
  {
    VLDR            D0, [R11]
    VMOV            D8, R0, R1
    VCMPE.F64       D8, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF || (_R5 = *(_DWORD *)_R4, *(_DWORD *)_R4 < 1) )
    result = 0;
  else
    _R1 = (int)_R4 + 9704;
    v18 = *((_DWORD *)_R4 + 16);
    __asm { VLDR            D0, [R1] }
    _R6 = *((_DWORD *)_R4 + 96);
    __asm
    {
      VSUB.F64        D12, D8, D0
      VLDR            D0, =0.0001
      VCMPE.F64       D12, D0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F64      D12, D0 }
    if ( v18 < 1 )
      v57 = (ProfilerLite *)((char *)_R4 + 9704);
      _R1 = 0;
    else
      _R1 = *((_DWORD *)_R4 + 72) / (v18 / _R5);
      VMOV            S0, R6
      VLDR            D10, =0.1
      VCVT.F32.S32    S0, S0
    LODWORD(v55) = (char *)_R4 + 9728;
      VCVT.F64.F32    D0, S0
      VMUL.F64        D0, D0, D10
      VCVT.F32.F64    S18, D0
      VLDR            S0, =0.0
      VSTR            S18, [R0]
      VMOV.F32        S22, S0
    if ( *((_DWORD *)_R4 + 48) )
      __asm
      {
        VLDR            D1, =1000.0
        VLDR            D2, [R4,#0xD0]
        VMUL.F64        D1, D2, D1
        VMOV            S4, R1
        VCVT.F64.S32    D2, S4
        VDIV.F64        D1, D1, D2
        VCVT.F32.F64    S22, D1
      }
    __asm { VMOV.F32        S26, S0 }
    v54 = (ProfilerLite *)((char *)_R4 + 9732);
    __asm { VSTR            S22, [R0] }
    if ( *((_DWORD *)_R4 + 72) )
        VLDR            D2, [R4,#0x130]
        VCVT.F32.F64    S26, D1
    __asm { VMOV.F32        S2, S0 }
    v53 = (ProfilerLite *)((char *)_R4 + 9736);
    __asm { VSTR            S26, [R0] }
    if ( *((_DWORD *)_R4 + 8) )
        VLDR            D2, [R4,#0x30]
        VMOV            S4, R5
        VCVT.F32.F64    S2, D1
    v51 = (ProfilerLite *)((char *)_R4 + 9740);
      VSTR            S2, [R0]
      VMOV.F32        S2, S0
    if ( *((_DWORD *)_R4 + 264) )
      _R0 = (int)_R4 + 1072;
        VLDR            D2, [R0]
    __asm { VMOV.F32        S28, S0 }
    v50 = (ProfilerLite *)((char *)_R4 + 9744);
    __asm { VSTR            S2, [R0] }
    if ( !_ZF )
        VLDR            D2, [R4,#0x190]
        VMOV            S4, R6
        VCVT.F32.F64    S28, D1
    v58 = _R7;
    _R7 = (int)_R4 + 9748;
    LODWORD(v52) = _R1;
    LODWORD(v56) = v9;
      VSTR            S28, [R7]
      VLDR            D1, [R4,#0x3D0]
    if ( *((_DWORD *)_R4 + 240) )
        VLDR            D0, =1000.0
        VMUL.F64        D0, D1, D0
        VDIV.F64        D0, D0, D2
        VCVT.F32.F64    S0, D0
    _R6 = (int)_R4 + 9752;
    _R8 = (int)_R4 + 9756;
      VSTR            S0, [R6]
      VLDR            D0, [R4,#0x10]
    _R5 = (int)_R4 + 9760;
      VLDR            D2, [R4,#0x50]
      VLDR            D3, [R4,#0x70]
    v27 = 0;
      VSUB.F64        D2, D0, D2
      VSUB.F64        D2, D2, D3
      VLDR            D4, [R4,#0x190]
      VDIV.F64        D0, D0, D12
      VSUB.F64        D2, D2, D4
      VSUB.F64        D1, D2, D1
      VLDR            D2, =100.0
      VMOV.F64        D3, #1.0
      VMUL.F64        D1, D1, D2
      VDIV.F64        D1, D1, D12
      VSUB.F64        D0, D3, D0
      VMUL.F64        D0, D0, D2
      VCVT.F32.F64    S30, D1
      VCVT.F32.F64    S19, D0
      VSTR            S30, [R8]
      VSTR            S19, [R5]
    if ( _ZF )
      _aeabi_memclr8(&v62, 3072);
      _R0 = LODWORD(v52);
      __asm { VCVT.F64.F32    D4, S19 }
      v29 = "unlocked";
        VMOV            S0, R0
        VLDR            D12, =1000.0
        VCVT.F64.F32    D5, S30
        VCVT.F32.S32    S0, S0
        VLDR            D1, [R4,#0xD8]
        VLDR            D2, [R4,#0x138]
        VLDR            D3, [R4,#0x198]
        VMUL.F64        D2, D2, D12
        VCVT.F64.F32    D0, S0
        VMUL.F64        D10, D0, D10
        VMUL.F64        D3, D3, D12
        VMUL.F64        D1, D1, D12
        VCVT.F64.F32    D6, S28
        VCVT.F64.F32    D7, S26
        VCVT.F64.F32    D0, S22
        VCVT.F64.F32    D9, S18
        VSTR            D5, [SP,#0x1948+var_1908]
        VSTR            D4, [SP,#0x1948+var_1900]
        VSTR            D6, [SP,#0x1948+var_1918]
        VSTR            D7, [SP,#0x1948+var_1928]
        VSTR            D0, [SP,#0x1948+var_1938]
        VSTR            D3, [SP,#0x1948+var_1910]
        VSTR            D2, [SP,#0x1948+var_1920]
        VSTR            D10, [SP,#0x1948+var_18A8]
        VSTR            D1, [SP,#0x1948+var_1930]
        VSTMEA          SP, {D9-D10}
      if ( LODWORD(v56) )
        v29 = "vsynced";
      snprintf(
        &v62,
        0xC00u,
        "FPS(%s): %.1f, Simticks/Sec: %.1f, ServerSim:%.1fms/%.1fms, ClientSim:%.1fms/%.1fms, Render:%.1fms/%.1fms\n"
        "  Outside ServerTick/ClientTick/Render/Endframe: %.1f%%, Unaccounted %.1f%%\n",
        v29);
      _aeabi_memclr8(&v61, 3072);
      __asm { VLDR            D3, [R4,#0x198] }
      _R0 = (int)_R4 + 9688;
        VLDR            D11, [R4,#0x3D8]
        VLDR            D4, [R0]
      _R0 = (int)v54;
        VMUL.F64        D10, D11, D12
        VLDR            S10, [R0]
      _R0 = (int)v53;
        VSUB.F64        D4, D8, D4
        VLDR            S12, [R0]
      _R0 = (int)_R4 + 1080;
        VLDR            D0, [R4,#0x38]
        VLDR            D7, [R0]
      _R0 = (int)v51;
        VMUL.F64        D0, D0, D12
        VLDR            S11, [R0]
      _R0 = (int)v50;
        VMUL.F64        D7, D7, D12
        VLDR            S13, [R0]
      _R0 = LODWORD(v55);
        VLDR            S18, [R0]
      LODWORD(v38) = a6 + ((unsigned int)(SHIDWORD(a6) >> 31) >> 12);
      __asm { VLDR            S30, [R8] }
      HIDWORD(v38) = _CF + HIDWORD(a6);
        VLDR            S26, [R7]
        VLDR            S28, [R6]
        VCVT.F64.F32    D12, S30
        VLDR            S30, [R5]
        VSTR            D10, [SP,#0x1948+var_1890]
        VSTR            D3, [SP,#0x1948+var_1898]
        VCVT.F64.F32    D10, S13
      v48 = a5 / 0x100000;
      v49 = v38 >> 20;
        VCVT.F64.F32    D3, S11
        VCVT.F64.F32    D14, S28
        VCVT.F64.F32    D13, S26
        VCVT.F64.F32    D15, S30
        VCVT.F64.F32    D6, S12
        VCVT.F64.F32    D5, S10
        VLDR            D11, [SP,#0x1948+var_18A8]
        VSTR            D11, [SP,#0x1948+var_1938]
        VSTR            D15, [SP,#0x1948+var_18C8]
        VSTR            D12, [SP,#0x1948+var_18D0]
        VSTR            D14, [SP,#0x1948+var_18E0]
        VSTR            D13, [SP,#0x1948+var_18F0]
        VSTR            D10, [SP,#0x1948+var_1900]
        VLDR            D3, [SP,#0x1948+var_1890]
        VSTR            D6, [SP,#0x1948+var_1920]
        VSTR            D5, [SP,#0x1948+var_1930]
        VSTR            D9, [SP,#0x1948+var_1940]
        VSTR            D4, [SP,#0x1948+var_1948]
        VSTR            D3, [SP,#0x1948+var_18D8]
        VLDR            D3, [SP,#0x1948+var_1898]
        VSTR            D3, [SP,#0x1948+var_18E8]
        VSTR            D7, [SP,#0x1948+var_18F8]
        VSTR            D0, [SP,#0x1948+var_1908]
        VSTR            D2, [SP,#0x1948+var_1918]
        VSTR            D1, [SP,#0x1948+var_1928]
        &v61,
        "%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f,%.2f%%,%.2f%%,%3d,%3d\n");
      sub_21E94B4((void **)&s, &v61);
      if ( !(*((_BYTE *)_R4 + 5268) & 5) )
        v39 = s;
        if ( s )
        {
          v40 = strlen(s);
          sub_21CBF38((char *)_R4 + 1100, (int)v39, v40);
        }
        else
          sub_21B583C(
            (int)_R4 + *(_DWORD *)(*((_DWORD *)_R4 + 275) - 12) + 1100,
            *(_DWORD *)((char *)_R4 + *(_DWORD *)(*((_DWORD *)_R4 + 275) - 12) + 1120) | 1);
        sub_21CB78C((char *)_R4 + 1100);
      v41 = s - 12;
      if ( (int *)(s - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(s - 4);
        if ( &pthread_create )
          __dmb();
          do
            v46 = __ldrex(v45);
          while ( __strex(v46 - 1, v45) );
          v46 = (*v45)--;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v41);
      ProfilerLite::getProfileString(_R4, &v62, 3072);
      v42 = (_BYTE *)strlen(&v62);
      sub_21E8190((void **)_R4 + 2441, &v62, v42);
      _android_log_print(
        2,
        "Minecraft",
        "\n"
        "Times and hitcounts are per rendertick / simtick / realtick. the two numbers are avg/spike - avg is counting all"
        " hits per tick. spikes measure a single hit\n"
        "%s",
        &v62);
      v27 = 0;
    do
      *(_DWORD *)((char *)_R4 + v27) = 0;
      v43 = (int)_R4 + v27;
      v27 += 32;
      *(_DWORD *)(v43 + 8) = 0;
      *(_DWORD *)(v43 + 12) = 0;
      *(_DWORD *)(v43 + 16) = 0;
      *(_DWORD *)(v43 + 20) = 0;
      *(_DWORD *)(v43 + 24) = 0;
      *(_DWORD *)(v43 + 28) = 0;
    while ( v27 != 1088 );
      VMOV.F64        D0, #10.0
      VLDR            D1, [R11]
      VADD.F64        D1, D1, D0
      VCMPE.F64       D8, D1
      VSTR            D1, [R11]
      VSTR            D8, [R0]
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VADD.F64        D0, D8, D0
        VSTR            D0, [R11]
    result = 1;
    v7 = (RakNet **)&v59;
    _R7 = v58;
  if ( !*((_BYTE *)_R4 + 9721) )
      VMOV            S0, R7
      VCVT.F64.S32    D0, S0
      VADD.F64        D0, D8, D0
      VSTR            D0, [R2]
    *((_BYTE *)_R4 + 9721) = 1;
  if ( _R7 )
    if ( !*((_BYTE *)_R4 + 9720) )
      _R2 = (int)_R4 + 9712;
        VLDR            D0, [R2]
        VCMPE.F64       D8, D0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        *((_BYTE *)_R4 + 9720) = 1;
  if ( _stack_chk_guard != *v7 )
    _stack_chk_fail(result);
  return result;
}


ProfilerLite *__fastcall ProfilerLite::~ProfilerLite(ProfilerLite *this, int a2, unsigned __int64 a3)
{
  ProfilerLite *v3; // r4@1
  int v4; // r1@1
  void *v5; // r0@1
  int v6; // r1@2
  unsigned __int64 v7; // r2@2
  void *v8; // r0@2
  int v9; // r1@3
  void *v10; // r0@3
  signed int v12; // r1@7
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15

  v3 = this;
  v4 = *((_DWORD *)this + 2441);
  LODWORD(a3) = &dword_28898C0;
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    LODWORD(a3) = v4 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v12 = __ldrex((unsigned int *)a3);
        HIDWORD(a3) = v12 - 1;
      }
      while ( __strex(v12 - 1, (unsigned int *)a3) );
    }
    else
      v12 = *(_DWORD *)a3;
      HIDWORD(a3) = *(_DWORD *)a3 - 1;
      *(_DWORD *)a3 = HIDWORD(a3);
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  *((_DWORD *)v3 + 1347) = &off_26D679C;
  *((_DWORD *)v3 + 2386) = &off_26D67C4;
  *((_DWORD *)v3 + 1349) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((ProfilerLite *)((char *)v3 + 5400), 5396, a3);
  *((_DWORD *)v3 + 1347) = &off_26D67DC;
  *((_DWORD *)v3 + 2386) = &off_26D67F0;
  *((_DWORD *)v3 + 1348) = 0;
  sub_21B6560((_DWORD *)v3 + 2386);
  v6 = *((_DWORD *)v3 + 1346);
  LODWORD(v7) = &dword_28898C0;
  v8 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    LODWORD(v7) = v6 - 4;
        v13 = __ldrex((unsigned int *)v7);
        HIDWORD(v7) = v13 - 1;
      while ( __strex(v13 - 1, (unsigned int *)v7) );
      v13 = *(_DWORD *)v7;
      HIDWORD(v7) = *(_DWORD *)v7 - 1;
      *(_DWORD *)v7 = HIDWORD(v7);
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  *((_DWORD *)v3 + 273) = &off_26D679C;
  *((_DWORD *)v3 + 1312) = &off_26D67C4;
  *((_DWORD *)v3 + 275) = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((ProfilerLite *)((char *)v3 + 1104), (int)&off_26D67C4, v7);
  *((_DWORD *)v3 + 273) = &off_26D67DC;
  *((_DWORD *)v3 + 1312) = &off_26D67F0;
  *((_DWORD *)v3 + 274) = 0;
  sub_21B6560((_DWORD *)v3 + 1312);
  v9 = *((_DWORD *)v3 + 272);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v9 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v3;
}


char *__fastcall ProfilerLite::init(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  int v9; // r1@1
  int v10; // r2@2
  int v11; // r1@3
  void *v12; // r0@3
  char *v13; // r5@5
  char *v14; // r4@5
  int v15; // r0@6
  char *v16; // r0@9
  char *result; // r0@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  char *s; // [sp+8h] [bp-438h]@4
  int v23; // [sp+Ch] [bp-434h]@3
  int v24; // [sp+10h] [bp-430h]@3
  int v25; // [sp+14h] [bp-42Ch]@3
  const char *v26; // [sp+18h] [bp-428h]@3
  int v27; // [sp+1Ch] [bp-424h]@3
  char v28; // [sp+24h] [bp-41Ch]@3
  int v29; // [sp+28h] [bp-418h]@3
  RakNet *v30; // [sp+42Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v30 = _stack_chk_guard;
  _R0 = getTimeS();
  __asm
  {
    VMOV.F64        D0, #10.0
    VMOV            D1, R0, R1
  }
  v9 = 0;
    VADD.F64        D0, D1, D0
    VSTR            D1, [R0]
    VSTR            D0, [R0]
  do
    *(_DWORD *)(v2 + v9) = 0;
    v10 = v2 + v9;
    v9 += 32;
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    *(_DWORD *)(v10 + 16) = 0;
    *(_DWORD *)(v10 + 20) = 0;
    *(_DWORD *)(v10 + 24) = 0;
    *(_DWORD *)(v10 + 28) = 0;
  while ( v9 != 1088 );
  v11 = *(_DWORD *)(*v3 - 12);
  v24 = *v3;
  v25 = v11;
  v26 = "Perf_Log.csv";
  v27 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v28, (int)&v24, 2);
  sub_21E94B4((void **)&v23, (const char *)&v29);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v2 + 1088),
    &v23);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v23 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  ProfilerLite::createLog((int)v12, (int *)(v2 + 1088), v2 + 1092);
  sub_21E94B4(
    (void **)&s,
    "Time,FPS(ms),SIMTICKS,ServerSimTick Avg(ms),ServerSimTick Max(ms),ClientSimTick Avg(ms),ClientSimTick Max(ms),BeginF"
    "rame Avg(ms),BeginFrame Max(ms),Input Avg(ms),Input Max(ms),Render Avg(ms),Render Max(ms),EndFrame Avg(ms),EndFrame "
    "Max(ms),Outside ServerTick/ClientTick/Render/Endframe,Unaccounted,Memory Usage(MB),Max Memory Usage(MB)\n");
  if ( !(*(_BYTE *)(v2 + 5268) & 5) )
    v13 = s;
    v14 = (char *)(v2 + 1100);
    if ( s )
      v15 = strlen(s);
      sub_21CBF38(v14, (int)v13, v15);
      sub_21B583C(
        (int)&v14[*(_DWORD *)(*(_DWORD *)v14 - 12)],
        *(_DWORD *)&v14[*(_DWORD *)(*(_DWORD *)v14 - 12) + 20] | 1);
    sub_21CB78C(v14);
  v16 = s - 12;
  if ( (int *)(s - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(s - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  result = (char *)(_stack_chk_guard - v30);
  if ( _stack_chk_guard != v30 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ProfilerLite::_endScope(double a1, int _R2, int a3, __int64 a4)
{
  int result; // r0@1

  __asm { VMOV            D0, R2, R3 }
  ++*(_DWORD *)(LODWORD(a1) + 32 * HIDWORD(a1));
  result = LODWORD(a1) + 32 * HIDWORD(a1);
  __asm
  {
    VLDR            D1, [R0,#8]
    VADD.F64        D1, D1, D0
    VSTR            D1, [R0,#8]
    VLDR            D0, [SP,#8+arg_0]
    VLDR            D1, [R0,#0x10]
    VSTR            D1, [R0,#0x10]
    VLDR            D1, [R0,#0x18]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result += 24;
    __asm { VSTRLT          D0, [R0] }
  return result;
}


int __fastcall ProfilerLite::closeLog(ProfilerLite *this, Core::OutputFileStream *a2)
{
  Core::OutputFileStream *v2; // r4@1
  int result; // r0@1
  int v4; // r1@3
  unsigned __int64 v5; // r2@3

  v2 = a2;
  result = *((_BYTE *)a2 + 4176);
  if ( !(result & 1) )
  {
    result = Core::FileStdStreamBuf::isOpen((Core::OutputFileStream *)((char *)a2 + 12));
    if ( result == 1 )
    {
      sub_21CB78C((char *)v2 + 8);
      result = j_j_j__ZN4Core16FileStdStreamBuf5closeEv_1((Core::OutputFileStream *)((char *)v2 + 12), v4, v5);
    }
  }
  return result;
}


const char *__fastcall ProfilerLite::getProfileString(ProfilerLite *this, char *a2, int a3)
{
  ProfilerLite *v3; // r7@1
  char *v4; // r10@1
  signed int v5; // r1@1
  int v6; // r8@1
  signed int v7; // r5@1
  int v10; // r11@6
  const char *result; // r0@9
  const char *v12; // r10@9
  size_t v13; // r6@9
  int v17; // r4@9
  int v19; // r3@9
  const char *v21; // r11@14
  char *v22; // r7@25
  size_t v24; // r0@26
  const char *v25; // r5@26
  size_t v26; // r7@26
  size_t v27; // r0@27
  size_t v29; // r1@32
  char *v30; // r0@32
  const char *v31; // r2@32
  size_t v32; // r0@36
  double v33; // [sp+0h] [bp-58h]@26
  const char *v34; // [sp+8h] [bp-50h]@33
  int v35; // [sp+10h] [bp-48h]@9
  int v36; // [sp+14h] [bp-44h]@1
  int v37; // [sp+18h] [bp-40h]@5
  int v38; // [sp+1Ch] [bp-3Ch]@1

  v3 = this;
  v4 = a2;
  v5 = *(_DWORD *)this;
  v6 = a3;
  v7 = *((_DWORD *)this + 16);
  _VF = __OFSUB__(*(_DWORD *)this, 1);
  _NF = *(_DWORD *)this - 1 < 0;
  v36 = *((_DWORD *)this + 96);
  v38 = 0;
  if ( v5 >= 1 )
  {
    _VF = __OFSUB__(v7, 1);
    _NF = v7 - 1 < 0;
  }
  if ( !(_NF ^ _VF) )
    v38 = *((_DWORD *)this + 72) / (v7 / v5);
  v37 = 0;
  if ( v7 < 1 )
    v10 = v5;
  else
    if ( v5 >= 1 )
      v37 = *((_DWORD *)this + 40) / (v7 / v5);
  v35 = v10;
  result = (const char *)strlen(v4);
  v12 = &result[(_DWORD)v4];
  v13 = v6 - (_DWORD)result;
  _R9 = (int)v3 + 16;
  __asm { VLDR            D8, =1000.0 }
  v17 = 0;
  _R5 = v10;
  v19 = v10;
  while ( 1 )
    if ( _R5 >= 1 )
    {
      _R8 = v19;
      if ( (unsigned int)(v17 - 6) < 6 )
        _R8 = v38;
      v21 = "MainLoopTick";
      if ( (v17 & 0xFFFFFFFE) == 4 )
        _R8 = v37;
      if ( (unsigned int)(v17 - 12) < 0x11 )
        _R8 = v36;
        v21 = "SimTick";
        v21 = "RealTick";
      result = "RenderTick";
        v21 = "RenderTick";
      if ( _R8 )
      {
        __asm
        {
          VLDR            D0, [R9]
          VCMPE.F64       D0, #0.0
        }
        v22 = off_26EBC40[v17];
        __asm { VMRS            APSR_nzcv, FPSCR }
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( _R5 == _R5 / _R8 * _R8 )
          {
            v29 = v13;
            LODWORD(v33) = _R5 / _R8;
            HIDWORD(v33) = v21;
            v30 = (char *)v12;
            v31 = "%s:  %d hits per %s\n";
          }
          else
            __asm
            {
              VMOV            S0, R8
              VMOV            S2, R5
            }
            __asm { VCVT.F32.S32    S0, S0 }
            v31 = "%s:  %.2f hits per %s\n";
            __asm { VCVT.F32.S32    S2, S2 }
            v34 = v21;
              VDIV.F32        S0, S2, S0
              VCVT.F64.F32    D0, S0
              VSTR            D0, [SP,#0x58+var_58]
          snprintf(v30, v29, v31, v22, v33, v34);
          result = (const char *)strlen(v12);
          v12 = &result[(_DWORD)v12];
          v13 -= (unsigned int)result;
        else
          __asm
            VMUL.F64        D0, D0, D8
            VMOV            S2, R8
            VCVT.F64.S32    D9, S2
            VDIV.F64        D0, D0, D9
            VLDR            D1, [R9,#8]
            VMUL.F64        D1, D1, D8
            VSTMEA          SP, {D0-D1}
          snprintf((char *)v12, v13, "%s: %2.3f/%2.3fms", off_26EBC40[v17], LODWORD(v33));
          v24 = strlen(v12);
          __asm { VLDR            D0, [R9,#-8] }
          v25 = &v12[v24];
          __asm { VLDR            D1, [R9] }
          v26 = v13 - v24;
            VCMPE.F64       D1, D0
            VMRS            APSR_nzcv, FPSCR
          if ( !_ZF )
              VMUL.F64        D0, D0, D8
              VDIV.F64        D0, D0, D9
            snprintf((char *)&v12[v24], v26, " (excluding subtimers: %.3fms)");
            v27 = strlen(v25);
            v25 += v27;
            v26 -= v27;
          _R6 = *(_DWORD *)(_R9 - 16);
          if ( _R6 != _R8 )
            if ( _R6 == _R6 / _R8 * _R8 )
              LODWORD(v33) = v21;
              snprintf((char *)v25, v26, " (%d hits per %s)");
            else
              __asm
              {
                VMOV            S0, R8
                VMOV            S2, R6
                VCVT.F32.S32    S0, S0
                VCVT.F32.S32    S2, S2
              }
              v34 = v21;
                VDIV.F32        S0, S2, S0
                VCVT.F64.F32    D0, S0
                VSTR            D0, [SP,#0x58+var_58]
              snprintf((char *)v25, v26, " (%.2f hits per %s)");
            v32 = strlen(v25);
            v25 += v32;
            v26 -= v32;
          snprintf((char *)v25, v26, "\n");
          result = (const char *)strlen(v25);
          v12 = &result[(_DWORD)v25];
          v13 = v26 - (_DWORD)result;
        v19 = v35;
      }
    }
    if ( v17 == 33 )
      break;
    _R5 = *(_DWORD *)(_R9 + 16);
    ++v17;
    _R9 += 32;
  return result;
}


int __fastcall ProfilerLite::ProfilerLite(int a1)
{
  int v1; // r4@1
  _DWORD *v2; // r9@1

  v1 = a1;
  v2 = (_DWORD *)(a1 + 5248);
  *(_DWORD *)(a1 + 1088) = &unk_28898CC;
  sub_21B6308(a1 + 5248);
  *(_DWORD *)(v1 + 5248) = &off_26D3AF0;
  *(_DWORD *)(v1 + 5360) = 0;
  *(_WORD *)(v1 + 5364) = 0;
  *(_DWORD *)(v1 + 5380) = 0;
  *(_DWORD *)(v1 + 5376) = 0;
  *(_DWORD *)(v1 + 5372) = 0;
  *(_DWORD *)(v1 + 5368) = 0;
  Core::FileStream::FileStream((Core::FileStream *)(v1 + 1092), (int)off_26D81A4);
  *(_DWORD *)(v1 + 1092) = &off_26D8170;
  *v2 = &off_26D8198;
  *(_DWORD *)(v1 + 1100) = &off_26D8184;
  *(_DWORD *)(v1 + 5384) = &unk_28898CC;
  sub_21B6308(v1 + 9544);
  *(_DWORD *)(v1 + 9544) = &off_26D3AF0;
  *(_DWORD *)(v1 + 9656) = 0;
  *(_WORD *)(v1 + 9660) = 0;
  *(_DWORD *)(v1 + 9676) = 0;
  *(_DWORD *)(v1 + 9672) = 0;
  *(_DWORD *)(v1 + 9668) = 0;
  *(_DWORD *)(v1 + 9664) = 0;
  *(_DWORD *)Core::FileStream::FileStream((Core::FileStream *)(v1 + 5388), (int)off_26D81A4) = &off_26D8170;
  *(_DWORD *)(v1 + 9544) = &off_26D8198;
  *(_DWORD *)(v1 + 5396) = &off_26D8184;
  *(_DWORD *)(v1 + 9716) = 2146435071;
  *(_DWORD *)(v1 + 9712) = -1;
  *(_BYTE *)(v1 + 9720) = 0;
  *(_BYTE *)(v1 + 9721) = 0;
  *(_DWORD *)(v1 + 9724) = 0;
  *(_DWORD *)(v1 + 9764) = &unk_28898CC;
  return v1;
}


int __fastcall ProfilerLite::createLog(int a1, int *a2, int a3)
{
  int *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1
  __int64 v6; // r0@7
  int v7; // [sp+4h] [bp-34h]@5
  int v8; // [sp+8h] [bp-30h]@5
  char v9; // [sp+Ch] [bp-2Ch]@5
  void (*v10)(void); // [sp+14h] [bp-24h]@5
  __int64 v11; // [sp+20h] [bp-18h]@7

  v3 = a2;
  v4 = a3;
  result = *a2;
  if ( *(_DWORD *)(*a2 - 12) )
  {
    if ( !(*(_BYTE *)(a3 + 4176) & 1) )
    {
      result = Core::FileStdStreamBuf::isOpen((Core::FileStdStreamBuf *)(a3 + 12));
      if ( result )
        return result;
      result = *v3;
    }
    v7 = result;
    v8 = *(_DWORD *)(result - 12);
    Core::FileSystem::createDirectoryForFile((int)&v9, (__int64 *)&v7);
    if ( v10 )
      v10();
    LODWORD(v6) = *v3;
    HIDWORD(v6) = *(_DWORD *)(*v3 - 12);
    v11 = v6;
    result = Core::FileStream::open(v4, &v11, 48);
  }
  return result;
}


__int64 __fastcall ProfilerLite::reset(__int64 result)
{
  int v1; // r2@1
  int v2; // r3@2

  HIDWORD(result) = 0;
  v1 = 0;
  do
  {
    *(_DWORD *)(result + v1) = 0;
    v2 = result + v1;
    v1 += 32;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 20) = 0;
    *(_DWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
  }
  while ( v1 != 1088 );
  return result;
}


char *__fastcall ProfilerLite::moveToEndOfString(ProfilerLite *this, char **a2, unsigned int *a3)
{
  char **v3; // r5@1
  unsigned int *v4; // r4@1
  char *v5; // r6@1
  size_t v6; // r0@1
  char *result; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = *a2;
  v6 = strlen(*a2);
  *v4 -= v6;
  result = &v5[v6];
  *v3 = result;
  return result;
}


int __fastcall ProfilerLite::shutdown(ProfilerLite *this)
{
  ProfilerLite *v1; // r4@1
  int v2; // r1@3
  unsigned __int64 v3; // r2@3
  int result; // r0@4
  int v5; // r1@6
  unsigned __int64 v6; // r2@6

  v1 = this;
  if ( !(*((_BYTE *)this + 5268) & 1) && Core::FileStdStreamBuf::isOpen((ProfilerLite *)((char *)this + 1104)) == 1 )
  {
    sub_21CB78C((char *)v1 + 1100);
    Core::FileStdStreamBuf::close((ProfilerLite *)((char *)v1 + 1104), v2, v3);
  }
  result = *((_BYTE *)v1 + 9564);
  if ( !(result & 1) )
    result = Core::FileStdStreamBuf::isOpen((ProfilerLite *)((char *)v1 + 5400));
    if ( result == 1 )
    {
      sub_21CB78C((char *)v1 + 5396);
      result = j_j_j__ZN4Core16FileStdStreamBuf5closeEv_1((ProfilerLite *)((char *)v1 + 5400), v5, v6);
    }
  return result;
}
