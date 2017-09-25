

RakNet *__fastcall RakNetServerLocator::announceServer(int a1, int *a2, int *a3, int a4, int a5, int a6)
{
  int *v6; // r6@1
  int v7; // r9@1
  int *v8; // r10@1
  int v9; // r5@1
  char *v10; // r0@2
  char *v11; // r0@2
  char *v12; // r0@2
  char *v13; // r0@2
  void *v14; // r0@2
  char *v15; // r0@3
  char *v16; // r0@3
  char *v17; // r0@3
  int v18; // r6@3
  int v19; // r0@4
  char *v20; // r0@6
  char *v21; // r0@6
  void *v22; // r0@6
  RakNet::BitStream *v23; // r0@7
  unsigned int v24; // r3@7
  void *v25; // r0@10
  const char *v26; // r6@11
  void *v27; // r0@11
  char *v28; // r0@12
  void **v29; // r0@13
  void *v30; // r0@13
  RakNet *result; // r0@15
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
  int v44; // [sp+4h] [bp-224h]@11
  const char *v45; // [sp+8h] [bp-220h]@11
  int v46; // [sp+Ch] [bp-21Ch]@7
  unsigned __int8 v47[2]; // [sp+12h] [bp-216h]@7
  int v48; // [sp+14h] [bp-214h]@6
  char v49; // [sp+18h] [bp-210h]@3
  int v50; // [sp+28h] [bp-200h]@2
  void **v51; // [sp+2Ch] [bp-1FCh]@2
  int v52; // [sp+30h] [bp-1F8h]@14
  void **v53; // [sp+34h] [bp-1F4h]@2
  void **v54; // [sp+38h] [bp-1F0h]@7
  int v55; // [sp+54h] [bp-1D4h]@14
  int v56; // [sp+5Ch] [bp-1CCh]@13
  int v57; // [sp+60h] [bp-1C8h]@14
  unsigned __int8 v58; // [sp+EAh] [bp-13Eh]@9
  int v59; // [sp+F0h] [bp-138h]@7
  int v60; // [sp+FCh] [bp-12Ch]@13
  RakNet *v61; // [sp+204h] [bp-24h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v61 = _stack_chk_guard;
  v9 = RakNetInstance::getPeer(*(RakNetInstance **)(a1 + 76));
  if ( (*(int (**)(void))(*(_DWORD *)v9 + 64))() == 1 )
  {
    sub_21D103C((int)&v51, 24);
    v10 = sub_21CBF38((char *)&v53, dword_27EB434, *(_DWORD *)(dword_27EB434 - 12));
    sub_21CBF38(v10, (int)";", 1);
    v11 = sub_21CBF38((char *)&v53, *v6, *(_DWORD *)(*v6 - 12));
    sub_21CBF38(v11, (int)";", 1);
    v12 = (char *)sub_21CC43C(&v53, 137);
    sub_21CBF38(v12, (int)";", 1);
    Common::getGameVersionStringNet((Common *)&v50);
    v13 = sub_21CBF38((char *)&v53, v50, *(_DWORD *)(v50 - 12));
    sub_21CBF38(v13, (int)";", 1);
    v14 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
    {
      v32 = (unsigned int *)(v50 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = (char *)sub_21CC43C(&v53, a5);
    sub_21CBF38(v15, (int)";", 1);
    v16 = (char *)sub_21CC43C(&v53, a6);
    sub_21CBF38(v16, (int)";", 1);
    (*(void (__fastcall **)(char *, int))(*(_DWORD *)v9 + 208))(&v49, v9);
    v17 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&v49);
    v18 = (int)v17;
    if ( v17 )
      v19 = strlen(v17);
      sub_21CBF38((char *)&v53, v18, v19);
    else
      sub_21B583C((int)*(v53 - 3) + (_DWORD)&v53, *(_DWORD *)((char *)*(v53 - 3) + (_DWORD)&v53 + 20) | 1);
    sub_21CBF38((char *)&v53, (int)";", 1);
    v20 = sub_21CBF38((char *)&v53, *v8, *(_DWORD *)(*v8 - 12));
    sub_21CBF38(v20, (int)";", 1);
    GameTypeConv::gameTypeToNonLocString((void **)&v48, v7);
    v21 = sub_21CBF38((char *)&v53, v48, *(_DWORD *)(v48 - 12));
    sub_21CBF38(v21, (int)";", 1);
    v22 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v48 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    RakNet::BitStream::BitStream((RakNet::BitStream *)&v59);
    sub_21CFED8(&v46, (int)&v54);
    v23 = *(RakNet::BitStream **)(v46 - 12);
    *(_WORD *)v47 = *(_DWORD *)(v46 - 12);
    if ( RakNet::BitStream::IsNetworkOrderInternal(v23) )
      RakNet::BitStream::WriteBits((RakNet::BitStream *)&v59, v47, 0x10u, 1);
      RakNet::BitStream::ReverseBytes((RakNet::BitStream *)v47, &v58, (unsigned __int8 *)2, v24);
      RakNet::BitStream::WriteBits((RakNet::BitStream *)&v59, &v58, 0x10u, 1);
    v25 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v46 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21CFED8((int *)&v45, (int)&v54);
    v26 = v45;
    sub_21CFED8(&v44, (int)&v54);
    RakNet::BitStream::Write((RakNet::BitStream *)&v59, v26, *(_DWORD *)(v44 - 12));
    v27 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v44 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (char *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v45 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    (*(void (__fastcall **)(int, int, unsigned int))(*(_DWORD *)v9 + 188))(v9, v60, (unsigned int)(v59 + 7) >> 3);
    RakNet::BitStream::~BitStream((RakNet::BitStream *)&v59);
    v29 = off_26D3F84;
    v51 = off_26D3F60;
    *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v51) = off_26D3F80[0];
    v53 = v29;
    v54 = &off_27734E8;
    v30 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v56 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v54 = &off_26D40A8;
    sub_21C802C((unsigned int **)&v55);
    v51 = (void **)off_26D3F68;
    *(void ***)((char *)&v51 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
    v52 = 0;
    sub_21B6560(&v57);
  }
  result = (RakNet *)(_stack_chk_guard - v61);
  if ( _stack_chk_guard != v61 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall RakNetServerLocator::getPingTimeForGUID(int a1, int **a2)
{
  int result; // r0@4

  _R0 = std::_Hashtable<std::string,std::pair<std::string const,RakNetServerLocator::PingRateRecorder>,std::allocator<std::pair<std::string const,RakNetServerLocator::PingRateRecorder>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)(a1 + 4),
          a2);
  if ( _R0 )
    __asm { VLDRNE          S0, [R0,#0x18] }
  else
    __asm { VMOVEQ.F32      S0, #-1.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


void __fastcall RakNetServerLocator::~RakNetServerLocator(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r0@1

  v1 = RakNetServerLocator::~RakNetServerLocator(this);
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall RakNetServerLocator::clearServerList(RakNetServerLocator *this)
{
  char *v1; // r4@1

  v1 = (char *)this + 104;
  std::vector<PingedCompatibleServer,std::allocator<PingedCompatibleServer>>::_M_erase_at_end(
    (int)this + 104,
    *((_DWORD *)this + 26));
  return j_j_j__ZNSt10_HashtableISsSt4pairIKSsSsESaIS2_ENSt8__detail10_Select1stESt8equal_toISsESt4hashISsENS4_18_Mod_range_hashingENS4_20_Default_ranged_hashENS4_20_Prime_rehash_policyENS4_17_Hashtable_traitsILb1ELb0ELb1EEEE5clearEv_2((int)(v1 - 72));
}


signed int __fastcall RakNetServerLocator::PingRateRecorder::pingEnd(RakNetServerLocator::PingRateRecorder *this, const unsigned int *a2, int a3)
{
  RakNetServerLocator::PingRateRecorder *v3; // r4@1
  signed int result; // r0@6

  v3 = this;
  if ( (unsigned __int8)*((_WORD *)this + 18) && *((_DWORD *)this + 8) == a3 )
  {
    _R1 = *a2 - *((_DWORD *)this + 6);
    __asm
    {
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VSTR            S0, [R4,#0x14]
    }
    if ( _CF )
      __asm { VMOV            R1, S0 }
      RakNetServerLocator::PingRateRecorder::_updateAverage(this, _R1);
    *((_BYTE *)v3 + 36) = 0;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall RakNetServerLocator::addCustomServer(int a1, RakNet **a2, unsigned __int16 a3)
{
  int **v3; // r5@1
  int v4; // r6@1
  unsigned __int16 v5; // r4@1
  int result; // r0@2

  v3 = (int **)a2;
  v4 = a1;
  v5 = a3;
  if ( RakNet::NonNumericHostString(*a2, (const char *)a2) != 1 )
  {
    if ( Util::isValidIP(*(*v3 - 3), (int)*v3, 1, 0) == 1 )
      return j_j_j__ZN19RakNetServerLocator18_addCustomServerV4ERKSsi((RakNetServerLocator *)v4, v3, v5);
    return j_j_j__ZN19RakNetServerLocator18_addCustomServerV6ERKSsi(v4, v3, v5);
  }
  result = RakNetServerLocator::_addCustomServerV4((RakNetServerLocator *)v4, v3, v5);
  if ( !result )
    result = RakPeerHelper::isIPv6Supported((RakPeerHelper *)(v4 + 84));
    if ( result == 1 )
      return j_j_j__ZN19RakNetServerLocator18_addCustomServerV6ERKSsi(v4, v3, v5);
  return result;
}


signed int __fastcall RakNetServerLocator::PingRateRecorder::pingStart(RakNetServerLocator::PingRateRecorder *this, const unsigned int *a2, int a3)
{
  RakNetServerLocator::PingRateRecorder *v3; // r3@1
  signed int result; // r0@2

  v3 = this;
  if ( *((_BYTE *)this + 36) )
  {
    result = 0;
  }
  else
    *((_DWORD *)this + 8) = a3;
    *((_DWORD *)this + 6) = *a2;
    result = 1;
    *((_BYTE *)v3 + 36) = 1;
  return result;
}


RakNet *__fastcall RakNetServerLocator::handleUnconnectedPong(RakNetServerLocator *a1, int *a2, RakNet::SystemAddress *a3, int a4, unsigned int a5)
{
  RakNetServerLocator *v5; // r8@1
  int v6; // r10@1
  RakNet::SystemAddress *v7; // r9@1
  int *v8; // r7@1
  char *v9; // r6@1
  size_t v10; // r2@1
  char *v11; // r4@1
  signed int v12; // r5@2
  int v13; // r0@6
  int v14; // r1@6
  int v15; // r9@7
  char v16; // r5@7
  int v17; // r10@7
  int v18; // r8@9
  bool v19; // zf@9
  int v20; // r0@12
  int v21; // r1@12 OVERLAPPED
  int v22; // r5@12
  unsigned int v23; // r2@12
  int v24; // r0@15
  int v25; // r5@29
  unsigned int v26; // r6@29
  int v27; // r0@34
  int v28; // r8@35
  __int64 v29; // r0@35
  int *v30; // r11@35
  unsigned int v31; // r4@36
  RakNet *v32; // r0@41
  int v33; // r1@41
  char v34; // r2@42
  int v35; // t1@42
  _BYTE *v36; // r0@47
  int v37; // r1@47
  char v38; // r2@48
  int v39; // t1@48
  int v40; // r0@51
  RakNet *v41; // r0@51
  int v42; // r0@53
  unsigned int *v43; // r1@54
  signed int v44; // r0@56
  int v45; // r0@61
  int v46; // r2@61
  int v47; // r0@61
  int v48; // r0@62
  int v49; // r7@62
  int v50; // r0@63
  int v51; // r2@67
  int *v52; // r1@67
  signed int v53; // r0@70
  int v54; // r4@72
  int v55; // r0@72
  char *v56; // r0@72
  void **v57; // r4@72
  char *v58; // r0@72
  char *v59; // r5@72
  _BYTE *v60; // r0@72
  void *v61; // r0@72
  unsigned int *v62; // r2@73
  signed int v63; // r1@75
  int *v64; // r1@78
  signed int v65; // r0@81
  int v66; // r0@83
  char *v67; // r0@85
  void **v68; // r4@85
  char *v69; // r0@85
  char *v70; // r5@85
  _BYTE *v71; // r0@85
  void *v72; // r0@85
  __int64 v73; // r0@88
  void *v74; // r0@91
  void *v75; // r0@92
  void *v76; // r0@94
  int *v77; // r4@95
  int *v78; // r6@95
  unsigned int *v79; // r2@97
  signed int v80; // r1@99
  int *v81; // r0@105
  RakNet *result; // r0@110
  unsigned int *v83; // r2@112
  signed int v84; // r1@114
  unsigned int *v85; // r2@120
  signed int v86; // r1@122
  unsigned int *v87; // r2@124
  signed int v88; // r1@126
  unsigned int *v89; // r2@128
  signed int v90; // r1@130
  int v91; // [sp+Ch] [bp-154h]@6
  RakNet::SystemAddress *v92; // [sp+10h] [bp-150h]@6
  RakNetServerLocator *v93; // [sp+14h] [bp-14Ch]@6
  int v94; // [sp+1Ch] [bp-144h]@85
  unsigned int v95; // [sp+20h] [bp-140h]@83
  int v96; // [sp+28h] [bp-138h]@72
  unsigned int v97; // [sp+2Ch] [bp-134h]@72
  char v98; // [sp+30h] [bp-130h]@34
  char v99; // [sp+40h] [bp-120h]@33
  __int64 v100; // [sp+50h] [bp-110h]@31
  int v101; // [sp+58h] [bp-108h]@31
  int v102; // [sp+5Ch] [bp-104h]@31
  int v103; // [sp+68h] [bp-F8h]@6
  int v104; // [sp+6Ch] [bp-F4h]@6
  int *v105; // [sp+70h] [bp-F0h]@6
  int *v106; // [sp+74h] [bp-ECh]@6
  void *s1; // [sp+78h] [bp-E8h]@1
  int v108; // [sp+80h] [bp-E0h]@51
  int v109; // [sp+84h] [bp-DCh]@92
  int v110; // [sp+88h] [bp-D8h]@83
  int v111; // [sp+8Ch] [bp-D4h]@51
  int v112; // [sp+90h] [bp-D0h]@51
  int v113; // [sp+94h] [bp-CCh]@52
  int v114; // [sp+98h] [bp-C8h]@78
  int v115; // [sp+120h] [bp-40h]@51
  int v116; // [sp+124h] [bp-3Ch]@83
  __int64 v117; // [sp+128h] [bp-38h]@78
  __int16 v118; // [sp+130h] [bp-30h]@78
  RakNet *v119; // [sp+138h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v119 = _stack_chk_guard;
  sub_21E9040(&s1, a2, 0, *(_DWORD *)(dword_27EB434 - 12));
  v9 = (char *)s1;
  v11 = (char *)s1 - 12;
  v10 = *((_DWORD *)s1 - 3);
  if ( v10 == *(_DWORD *)(dword_27EB434 - 12) )
    v12 = memcmp(s1, (const void *)dword_27EB434, v10) != 0;
  else
    v12 = 1;
  if ( (int *)v11 != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  if ( !v12 )
    v91 = v6;
    v92 = v7;
    v93 = v5;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    sub_21E94B4((void **)&v103, (const char *)&unk_257BC67);
    v13 = *v8;
    v14 = *(_DWORD *)(*v8 - 12);
    if ( v14 )
      v15 = v14 - 1;
      v16 = 0;
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_BYTE *)(v13 + v17);
        v19 = (v16 & 1) == 0;
        if ( !(v16 & 1) )
          v19 = v18 == 59;
        if ( v19 )
        {
          if ( v105 == v106 )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
              (unsigned __int64 *)&v104,
              &v103);
          else
            v105 = sub_21E8AF4(v105, &v103) + 1;
          v16 = 0;
          sub_21E8190((void **)&v103, (char *)&unk_257BC67, 0);
        }
        else
          v20 = v103;
          *(_QWORD *)&v21 = *(_QWORD *)(v103 - 12);
          v22 = v21 + 1;
          if ( v21 + 1 > v23 || *(_DWORD *)(v103 - 4) >= 1 )
          {
            sub_21E6FCC((const void **)&v103, v21 + 1);
            v20 = v103;
            v21 = *(_DWORD *)(v103 - 12);
          }
          *(_BYTE *)(v20 + v21) = v18;
          v24 = v103;
          if ( (int *)(v103 - 12) != &dword_28898C0 )
            *(_DWORD *)(v103 - 4) = 0;
            *(_DWORD *)(v24 - 12) = v22;
            *(_BYTE *)(v24 + v22) = byte_26C67B8[0];
          if ( *(_BYTE *)(*v8 + v17) == 92 )
            v16 = 1;
        if ( v15 == v17 )
          break;
        ++v17;
        v13 = *v8;
      }
    if ( *(_DWORD *)(v103 - 12) )
      if ( v105 == v106 )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
          (unsigned __int64 *)&v104,
          &v103);
      else
        v105 = sub_21E8AF4(v105, &v103) + 1;
    v25 = v104;
    v26 = ((signed int)v105 - v104) >> 2;
    if ( v26 < 4 || !*(_DWORD *)(*(_DWORD *)(v104 + 4) - 12) )
      goto LABEL_94;
    v102 = dword_27EB37C;
    v100 = qword_27EB370;
    v101 = *(_DWORD *)&word_27EB378;
    if ( v26 >= 7 )
      RakNet::RakNetGUID::FromString((RakNet::RakNetGUID *)&v100, *(const char **)(v104 + 24));
      if ( !*((_DWORD *)v93 + 17) )
        sub_21E5F48();
      (*((void (__fastcall **)(_DWORD, _DWORD))v93 + 18))(&v99, (char *)v93 + 60);
      if ( RakNet::RakNetGUID::operator==(&v100, &v99) )
        goto LABEL_94;
      v27 = RakNetInstance::getPeer(*((RakNetInstance **)v93 + 19));
      (*(void (__fastcall **)(char *))(*(_DWORD *)v27 + 208))(&v98);
      if ( RakNet::RakNetGUID::operator==(&v100, &v98) )
    v28 = atoi(*(const char **)(v25 + 8));
    v30 = (int *)((char *)v93 + 104);
    LODWORD(v29) = *((_DWORD *)v93 + 26);
    if ( *((_DWORD *)v93 + 27) != (_DWORD)v29 )
      v31 = 0;
        if ( v26 <= 6 && RakNet::SystemAddress::operator==(v29 + 184 * v31 + 28, (int)v92)
          || v26 >= 7 && RakNet::RakNetGUID::operator==(&v100, (_QWORD *)(*v30 + 184 * v31 + 168)) == 1 )
          v32 = *(RakNet **)(v25 + 12);
          v33 = *((_DWORD *)v32 - 3);
          if ( !v33 )
LABEL_61:
            v45 = RakNet::GetTimeMS(v32);
            v46 = *v30 + 184 * v31;
            *(_DWORD *)(v46 + 160) = v45;
            EntityInteraction::setInteractText((int *)v46, (int *)(v25 + 4));
            v47 = *v30 + 184 * v31;
            *(_DWORD *)(v47 + 12) = v28;
            EntityInteraction::setInteractText((int *)(v47 + 16), (int *)(v25 + 12));
            if ( v26 <= 4 )
            {
              v49 = *v30;
              v50 = -1;
              *(_DWORD *)(*v30 + 184 * v31 + 20) = -1;
            }
            else
              v48 = atoi(*(const char **)(v25 + 16));
              *(_DWORD *)(*v30 + 184 * v31 + 20) = v48;
              if ( v26 < 6 )
                v50 = -1;
              else
                v50 = atoi(*(const char **)(v25 + 20));
            v51 = v49 + 184 * v31;
            v52 = (int *)&Util::EMPTY_STRING;
            *(_DWORD *)(v51 + 24) = v50;
            if ( v26 > 7 )
              v52 = (int *)(v25 + 28);
            EntityInteraction::setInteractText((int *)(v51 + 4), v52);
            if ( v26 < 9 )
              v53 = -1;
              v53 = GameTypeConv::stringToGameType((unsigned int *)(v25 + 32));
            v54 = *v30 + 184 * v31;
            *(_DWORD *)(v54 + 8) = v53;
            v97 = a5;
            v55 = RakNet::SystemAddress::GetIPVersion(v92);
            RakNetServerLocator::_onPongReceive(v93, (float *)(v54 + 164), (const RakNet::RakNetGUID *)&v100, &v97, v55);
            v56 = RakNet::SystemAddress::ToString(v92, 0, 124);
            sub_21E94B4((void **)&v96, v56);
            v57 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                             (int)v93 + 32,
                             (int **)&v96);
            v58 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&v100);
            v59 = v58;
            v60 = (_BYTE *)strlen(v58);
            sub_21E8190(v57, v59, v60);
            v61 = (void *)(v96 - 12);
            if ( (int *)(v96 - 12) != &dword_28898C0 )
              v62 = (unsigned int *)(v96 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v63 = __ldrex(v62);
                while ( __strex(v63 - 1, v62) );
                goto LABEL_137;
              }
LABEL_136:
              v63 = (*v62)--;
LABEL_137:
              if ( v63 <= 0 )
                j_j_j_j__ZdlPv_9(v61);
            goto LABEL_94;
          while ( 1 )
            v35 = *(_BYTE *)v32;
            v32 = (RakNet *)((char *)v32 + 1);
            v34 = v35;
            if ( v35 != 46 && (unsigned __int8)(v34 - 48) >= 0xAu )
              break;
            if ( !--v33 )
              goto LABEL_61;
        ++v31;
        v29 = *((_QWORD *)v93 + 13);
      while ( v31 < -373475417 * ((HIDWORD(v29) - (signed int)v29) >> 3) );
    v36 = *(_BYTE **)(v25 + 12);
    v37 = *((_DWORD *)v36 - 3);
    if ( v37 )
        v39 = *v36++;
        v38 = v39;
        if ( v39 != 46 && (unsigned __int8)(v38 - 48) >= 0xAu )
        if ( !--v37 )
          goto LABEL_51;
LABEL_51:
      v40 = PingedCompatibleServer::PingedCompatibleServer((PingedCompatibleServer *)&v108);
      v41 = (RakNet *)RakNet::SystemAddress::operator=(v40 + 28, (int)v92);
      v115 = RakNet::GetTimeMS(v41);
      EntityInteraction::setInteractText(&v108, (int *)(v25 + 4));
      v111 = v28;
      EntityInteraction::setInteractText(&v112, (int *)(v25 + 12));
      if ( v26 <= 4 )
        v42 = -1;
        v113 = -1;
        v113 = atoi(*(const char **)(v25 + 16));
        if ( v26 < 6 )
          v42 = -1;
          v42 = atoi(*(const char **)(v25 + 20));
      v114 = v42;
      v117 = v100;
      v64 = (int *)&Util::EMPTY_STRING;
      v118 = v101;
      if ( v26 > 7 )
        v64 = (int *)(v25 + 28);
      EntityInteraction::setInteractText((int *)((unsigned int)&v108 | 4), v64);
      if ( v26 < 9 )
        v65 = -1;
        v65 = GameTypeConv::stringToGameType((unsigned int *)(v25 + 32));
      v110 = v65;
      v95 = a5;
      v66 = RakNet::SystemAddress::GetIPVersion(v92);
      if ( !RakNetServerLocator::_onPongReceive(v93, (float *)&v116, (const RakNet::RakNetGUID *)&v100, &v95, v66) )
        v116 = 2139095039;
      v67 = RakNet::SystemAddress::ToString(v92, 0, 124);
      sub_21E94B4((void **)&v94, v67);
      v68 = (void **)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       (int)v93 + 32,
                       (int **)&v94);
      v69 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&v100);
      v70 = v69;
      v71 = (_BYTE *)strlen(v69);
      sub_21E8190(v68, v70, v71);
      v72 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v94 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j__ZdlPv_9(v72);
      if ( v91 == 1 )
        std::vector<PingedCompatibleServer,std::allocator<PingedCompatibleServer>>::insert((int)v30, *v30, &v108);
        v73 = *(_QWORD *)((char *)v93 + 108);
        if ( (_DWORD)v73 == HIDWORD(v73) )
          std::vector<PingedCompatibleServer,std::allocator<PingedCompatibleServer>>::_M_emplace_back_aux<PingedCompatibleServer const&>(
            (unsigned __int64 *)v30,
            &v108);
          PingedCompatibleServer::PingedCompatibleServer((int *)v73, &v108);
          *((_DWORD *)v93 + 27) += 184;
      v74 = (void *)(v112 - 12);
      if ( (int *)(v112 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v112 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j__ZdlPv_9(v74);
      v75 = (void *)(v109 - 12);
      if ( (int *)(v109 - 12) != &dword_28898C0 )
        v89 = (unsigned int *)(v109 - 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 <= 0 )
          j_j_j_j__ZdlPv_9(v75);
      v61 = (void *)(v108 - 12);
      if ( (int *)(v108 - 12) != &dword_28898C0 )
        v62 = (unsigned int *)(v108 - 4);
            v63 = __ldrex(v62);
          while ( __strex(v63 - 1, v62) );
          goto LABEL_137;
        goto LABEL_136;
LABEL_94:
    v76 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v83 = (unsigned int *)(v103 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v84 = __ldrex(v83);
        while ( __strex(v84 - 1, v83) );
        v84 = (*v83)--;
      if ( v84 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    v78 = v105;
    v77 = (int *)v104;
    if ( (int *)v104 != v105 )
        v81 = (int *)(*v77 - 12);
        if ( v81 != &dword_28898C0 )
          v79 = (unsigned int *)(*v77 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v80 = __ldrex(v79);
            while ( __strex(v80 - 1, v79) );
            v80 = (*v79)--;
          if ( v80 <= 0 )
            j_j_j_j__ZdlPv_9(v81);
        ++v77;
      while ( v77 != v78 );
      v77 = (int *)v104;
    if ( v77 )
      operator delete(v77);
  result = (RakNet *)(_stack_chk_guard - v119);
  if ( _stack_chk_guard != v119 )
    _stack_chk_fail(result);
  return result;
}


RakNetServerLocator *__fastcall RakNetServerLocator::~RakNetServerLocator(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  void *v7; // r5@16
  void *v8; // r7@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20
  int *v11; // r0@26
  int v12; // r5@31
  int v13; // r7@31
  unsigned int *v14; // r2@33
  signed int v15; // r1@35
  unsigned int *v16; // r2@37
  signed int v17; // r1@39
  unsigned int *v18; // r2@41
  signed int v19; // r1@43
  int v20; // r1@57
  void *v21; // r0@57
  int v22; // r1@58
  void *v23; // r0@58
  int *v24; // r0@59
  void (*v25)(void); // r3@64
  char *v26; // r0@66
  int v27; // r7@69
  unsigned int *v28; // r2@71
  signed int v29; // r1@73
  int v30; // r6@79
  void *v31; // r0@79
  int v32; // r1@81
  void *v33; // r0@81
  char *v34; // r0@83

  v1 = this;
  *(_DWORD *)this = &off_26E9E14;
  v3 = (void *)(*((_QWORD *)this + 18) >> 32);
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 36);
  }
  if ( v2 )
    operator delete(v2);
  v8 = (void *)(*(_QWORD *)((char *)v1 + 132) >> 32);
  v7 = (void *)*(_QWORD *)((char *)v1 + 132);
  if ( v7 != v8 )
      v11 = (int *)(*(_DWORD *)v7 - 12);
      if ( v11 != &dword_28898C0 )
        v9 = (unsigned int *)(*(_DWORD *)v7 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v7 = (char *)v7 + 4;
    while ( v7 != v8 );
    v7 = (void *)*((_DWORD *)v1 + 33);
  if ( v7 )
    operator delete(v7);
  v13 = *((_QWORD *)v1 + 13) >> 32;
  v12 = *((_QWORD *)v1 + 13);
  if ( v12 != v13 )
      v20 = *(_DWORD *)(v12 + 16);
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v20 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = *(_DWORD *)(v12 + 4);
      v23 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v22 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v24 = (int *)(*(_DWORD *)v12 - 12);
      if ( v24 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v12 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v12 += 184;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 26);
  if ( v12 )
    operator delete((void *)v12);
  v25 = (void (*)(void))*((_DWORD *)v1 + 17);
  if ( v25 )
    v25();
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 32);
  v26 = (char *)*((_DWORD *)v1 + 8);
  if ( v26 && (char *)v1 + 56 != v26 )
    operator delete(v26);
  v27 = *((_DWORD *)v1 + 3);
  while ( v27 )
    v30 = v27;
    v31 = *(void **)(v27 + 8);
    v27 = *(_DWORD *)v27;
    if ( v31 )
      operator delete(v31);
    v32 = *(_DWORD *)(v30 + 4);
    v33 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    operator delete((void *)v30);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v34 = (char *)*((_DWORD *)v1 + 1);
  if ( v34 && (char *)v1 + 28 != v34 )
    operator delete(v34);
  return v1;
}


int __fastcall RakNetServerLocator::deactivate(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r4@1
  int result; // r0@1
  RakNet::RakPeerInterface *v3; // r1@2

  v1 = this;
  result = *((_DWORD *)this + 20);
  if ( result )
  {
    (*(void (**)(void))(*(_DWORD *)result + 60))();
    result = RakNet::RakPeerInterface::DestroyInstance(*((RakNet::RakPeerInterface **)v1 + 20), v3);
    *((_DWORD *)v1 + 20) = 0;
  }
  return result;
}


void *__fastcall RakNetServerLocator::_getHostGuid(int *a1, int a2, int **a3)
{
  int *v3; // r4@1
  int v4; // r0@1
  void *result; // r0@2
  char *v6; // r0@3

  v3 = a1;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a2 + 32),
         a3);
  if ( v4 )
  {
    result = sub_21E8AF4(v3, (int *)(v4 + 8));
  }
  else
    v6 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
    result = sub_21E94B4((void **)v3, v6);
  return result;
}


int __fastcall RakNetServerLocator::PingRateRecorder::PingRateRecorder(int result, unsigned int a2, bool a3)
{
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = 2139095039;
  *(_WORD *)(result + 36) = 0;
  return result;
}


void __fastcall RakNetServerLocator::~RakNetServerLocator(RakNetServerLocator *this)
{
  RakNetServerLocator::~RakNetServerLocator(this);
}


int __fastcall RakNetServerLocator::setHostGUID(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 60;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 60);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 68);
  v10 = v13;
  *(_DWORD *)(v4 + 68) = v8;
  v14 = *(_DWORD *)(v4 + 72);
  *(_DWORD *)(v4 + 72) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall RakNetServerLocator::stopFindingServers(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r4@1
  int result; // r0@1
  RakNet::RakPeerInterface *v3; // r1@2

  v1 = this;
  *((_BYTE *)this + 116) = 0;
  result = *((_DWORD *)this + 20);
  if ( result )
  {
    (*(void (**)(void))(*(_DWORD *)result + 60))();
    result = RakNet::RakPeerInterface::DestroyInstance(*((RakNet::RakPeerInterface **)v1 + 20), v3);
    *((_DWORD *)v1 + 20) = 0;
  }
  return result;
}


int __fastcall RakNetServerLocator::stopAnnouncingServer(RakNetServerLocator *this)
{
  int v1; // r0@1

  v1 = RakNetInstance::getPeer(*((RakNetInstance **)this + 19));
  return (*(int (**)(void))(*(_DWORD *)v1 + 188))();
}


RakNet *__fastcall RakNetServerLocator::update(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r8@1
  int v2; // r0@1
  int i; // r7@2
  unsigned int *v4; // r2@4
  signed int v5; // r1@6
  int v6; // r0@12
  RakNet::BitStream *v7; // r0@14
  RakNet::BitStream *v8; // r0@15
  unsigned int v9; // r3@16
  unsigned int v10; // r3@20
  unsigned int v11; // r9@22
  int v12; // r0@22
  void *v13; // r0@22
  RakNet *v14; // r0@26
  int v15; // r6@27
  int v16; // r7@27
  int v17; // r0@27
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  RakNet *v20; // r0@37
  char *v21; // r0@38
  void *v22; // r0@38
  int v23; // r7@41
  const char **v24; // r6@42
  const char **j; // r7@42
  unsigned int *v26; // r2@44
  signed int v27; // r1@46
  void *v28; // r0@52
  const char **v29; // r6@54
  const char **k; // r7@54
  unsigned int *v31; // r2@56
  signed int v32; // r1@58
  void *v33; // r0@64
  RakNet *result; // r0@66
  int v35; // [sp+14h] [bp-16Ch]@56
  int v36; // [sp+1Ch] [bp-164h]@44
  int v37; // [sp+24h] [bp-15Ch]@29
  int v38; // [sp+2Ch] [bp-154h]@4
  int v39; // [sp+30h] [bp-150h]@14
  unsigned __int8 v40[4]; // [sp+34h] [bp-14Ch]@19
  unsigned __int8 v41; // [sp+38h] [bp-148h]@15
  unsigned __int8 v42; // [sp+3Ch] [bp-144h]@16
  char v43; // [sp+44h] [bp-13Ch]@12
  int v44; // [sp+4Ch] [bp-134h]@12
  RakNet *v45; // [sp+158h] [bp-28h]@1

  v1 = this;
  v45 = _stack_chk_guard;
  v2 = *((_DWORD *)this + 20);
  if ( v2 )
  {
    for ( i = (*(int (**)(void))(*(_DWORD *)v2 + 96))(); i; i = (*(int (**)(void))(**((_DWORD **)v1 + 20) + 96))() )
    {
      RakNet::BitStream::BitStream((RakNet::BitStream *)&v43, *(unsigned __int8 **)(i + 160), *(_DWORD *)(i + 152), 0);
      v6 = **(_BYTE **)(i + 160);
      v44 = 8;
      if ( v6 == 28 && *((_BYTE *)v1 + 116) )
      {
        v7 = (RakNet::BitStream *)RakNet::RakString::RakString((RakNet::RakString *)&v39);
        if ( RakNet::BitStream::IsNetworkOrderInternal(v7) )
        {
          v8 = (RakNet::BitStream *)RakNet::BitStream::ReadBits((RakNet::BitStream *)&v43, &v41, 0x20u, 1);
        }
        else
          v8 = (RakNet::BitStream *)RakNet::BitStream::ReadBits((RakNet::BitStream *)&v43, &v42, 0x20u, 1);
          if ( v8 == (RakNet::BitStream *)1 )
            v8 = (RakNet::BitStream *)RakNet::BitStream::ReverseBytes(
                                        (RakNet::BitStream *)&v42,
                                        &v41,
                                        (unsigned __int8 *)4,
                                        v9);
        if ( RakNet::BitStream::IsNetworkOrderInternal(v8) )
          RakNet::BitStream::ReadBits((RakNet::BitStream *)&v43, v40, 0x20u, 1);
        else if ( RakNet::BitStream::ReadBits((RakNet::BitStream *)&v43, &v42, 0x20u, 1) == 1 )
          RakNet::BitStream::ReverseBytes((RakNet::BitStream *)&v42, v40, (unsigned __int8 *)4, v10);
        RakNet::RakString::Deserialize((RakNet::RakString *)&v39, (RakNet::BitStream *)&v43);
        v11 = *(_DWORD *)(v39 + 16);
        v12 = RakNet::RakString::GetLength((RakNet::RakString *)&v39);
        sub_21E91E0((void **)&v38, v11, v12);
        RakNetServerLocator::handleUnconnectedPong(v1, &v38, (RakNet::SystemAddress *)i, 0, *(unsigned int *)v40);
        v13 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v4 = (unsigned int *)(v38 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        RakNet::RakString::~RakString((RakNet::RakString *)&v39);
      }
      (*(void (**)(void))(**((_DWORD **)v1 + 20) + 100))();
      RakNet::BitStream::~BitStream((RakNet::BitStream *)&v43);
    }
  }
  if ( *((_BYTE *)v1 + 116) )
    v14 = (RakNet *)(RakNet::GetTimeMS((RakNet *)*((_BYTE *)v1 + 116)) - *((_DWORD *)v1 + 32));
    if ( (unsigned int)v14 > 0x3E8 )
      v15 = *((_DWORD *)v1 + 26);
      v16 = *((_DWORD *)v1 + 27);
      v17 = RakNet::GetTimeMS(v14);
      if ( v15 != v16 )
        do
          v20 = (RakNet *)(v17 - *(_DWORD *)(v15 + 160));
          if ( (unsigned int)v20 < 0x2711 )
            v15 += 184;
            v21 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)(v15 + 28), 1, 124);
            sub_21E94B4((void **)&v37, v21);
            std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
              (unsigned __int64 *)v1 + 4,
              (int **)&v37);
            v22 = (void *)(v37 - 12);
            if ( (int *)(v37 - 12) != &dword_28898C0 )
            {
              v18 = (unsigned int *)(v37 - 4);
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
                j_j_j_j__ZdlPv_9(v22);
            }
            v20 = (RakNet *)std::vector<PingedCompatibleServer,std::allocator<PingedCompatibleServer>>::_M_erase(
                              (int)v1 + 104,
                              v15);
            v15 = (int)v20;
          v23 = *((_DWORD *)v1 + 27);
          v17 = RakNet::GetTimeMS(v20);
        while ( v15 != v23 );
      *((_DWORD *)v1 + 32) = v17;
      v24 = (const char **)(*(_QWORD *)((char *)v1 + 132) >> 32);
      for ( j = (const char **)*(_QWORD *)((char *)v1 + 132); j != v24; ++j )
        sub_21E94B4((void **)&v36, *j);
        RakNetServerLocator::_addCustomServerV4(v1, (int **)&v36, *((_DWORD *)v1 + 30));
        v28 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v36 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
      v29 = (const char **)(*((_QWORD *)v1 + 18) >> 32);
      for ( k = (const char **)*((_QWORD *)v1 + 18); k != v29; ++k )
        sub_21E94B4((void **)&v35, *k);
        RakNetServerLocator::_addCustomServerV6((int)v1, (int **)&v35, *((_DWORD *)v1 + 31));
        v33 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v35 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
  result = (RakNet *)(_stack_chk_guard - v45);
  if ( _stack_chk_guard != v45 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall RakNetServerLocator::validateVersion(int a1, _DWORD *a2)
{
  _BYTE *v2; // r0@1
  int v3; // r1@1
  signed int result; // r0@2
  char v5; // r2@6
  int v6; // t1@6

  v2 = (_BYTE *)*a2;
  v3 = *(_DWORD *)(*a2 - 12);
  if ( v3 )
  {
    while ( 1 )
    {
      v6 = *v2++;
      v5 = v6;
      if ( v6 != 46 && (unsigned __int8)(v5 - 48) >= 0xAu )
        break;
      if ( !--v3 )
        return 1;
    }
    result = 0;
  }
  else
    result = 1;
  return result;
}


int __fastcall RakNetServerLocator::RakNetServerLocator(double a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  int v4; // r9@1
  double v5; // r0@1
  int v6; // r7@3
  void *v7; // r5@3
  unsigned int v8; // r0@4
  int v9; // r6@6
  void *v10; // r5@6
  int result; // r0@7

  v2 = LODWORD(a1);
  v3 = a2;
  v4 = HIDWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26E9E14;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v2 + 8) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v7 = (void *)(v2 + 28);
  }
  else
    if ( LODWORD(v5) >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * LODWORD(v5);
    v7 = operator new(4 * LODWORD(v5));
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v2 + 4) = v7;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 1065353216;
  *(_DWORD *)(v2 + 52) = 0;
  LODWORD(v5) = v2 + 48;
  v8 = sub_21E6254(v5);
  *(_DWORD *)(v2 + 36) = v8;
  if ( v8 == 1 )
    *(_DWORD *)(v2 + 56) = 0;
    v10 = (void *)(v2 + 56);
    if ( v8 >= 0x40000000 )
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)(v2 + 32) = v10;
  *(_DWORD *)(v2 + 68) = 0;
  *(_DWORD *)(v2 + 76) = v4;
  *(_DWORD *)(v2 + 80) = 0;
  RakPeerHelper::RakPeerHelper(v2 + 84, v3);
  *(_DWORD *)(v2 + 120) = 0;
  *(_DWORD *)(v2 + 124) = 0;
  result = v2;
  *(_BYTE *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 108) = 0;
  *(_DWORD *)(v2 + 132) = 0;
  *(_DWORD *)(v2 + 136) = 0;
  *(_DWORD *)(v2 + 140) = 0;
  *(_DWORD *)(v2 + 144) = 0;
  *(_DWORD *)(v2 + 148) = 0;
  *(_DWORD *)(v2 + 152) = 0;
  return result;
}


RakNet *__fastcall RakNetServerLocator::findServers(RakNetServerLocator *this, int a2, int a3)
{
  RakNetServerLocator *v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  void *v6; // r0@2
  unsigned int i; // r10@5
  const char *v8; // r8@8
  __int64 v9; // r2@8
  int v10; // r0@10
  int *v11; // r2@11
  char *v12; // r1@11
  char *v13; // r0@13
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  __int64 v16; // r0@22
  int v17; // r1@23
  void *v18; // r0@25
  char **v19; // r4@26
  char **v20; // r6@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  int *v23; // r0@36
  RakNet *result; // r0@41
  unsigned int *v25; // r2@43
  signed int v26; // r1@45
  RakNetServerLocator *v27; // [sp+30h] [bp-D8h]@1
  void *v28; // [sp+38h] [bp-D0h]@22
  char *v29; // [sp+40h] [bp-C8h]@10
  char v30; // [sp+44h] [bp-C4h]@10
  char v31; // [sp+48h] [bp-C0h]@10
  char v32; // [sp+4Ch] [bp-BCh]@10
  char v33; // [sp+50h] [bp-B8h]@10
  unsigned __int8 v34; // [sp+54h] [bp-B4h]@10
  int v35; // [sp+58h] [bp-B0h]@10
  unsigned __int8 v36; // [sp+5Ch] [bp-ACh]@10
  int v37; // [sp+60h] [bp-A8h]@10
  char v38; // [sp+64h] [bp-A4h]@8
  int v39; // [sp+68h] [bp-A0h]@6
  char **v40; // [sp+6Ch] [bp-9Ch]@4
  char **v41; // [sp+70h] [bp-98h]@4
  char **v42; // [sp+74h] [bp-94h]@10
  char s; // [sp+7Ch] [bp-8Ch]@10
  RakNet *v44; // [sp+E0h] [bp-28h]@1

  v3 = this;
  v27 = this;
  v4 = a3;
  v5 = a2;
  v44 = _stack_chk_guard;
  RakNetServerLocator::activate(this);
  *((_BYTE *)v3 + 116) = 1;
  *((_DWORD *)v3 + 30) = v5;
  *((_DWORD *)v3 + 31) = v4;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(char ***))(**(_DWORD **)v6 + 476))(&v40);
  if ( v40 == v41 )
  {
    for ( i = 0; i < (*(int (**)(void))(**((_DWORD **)v3 + 20) + 252))(); ++i )
    {
      v8 = (const char *)(*(int (**)(void))(**((_DWORD **)v3 + 20) + 256))();
      RakNet::RakString::RakString((RakNet::RakString *)&v38, v8, v9);
      RakNet::SocketLayer::GetSubNetForSocketAndIp((RakNet::RakString *)&v39, (int)&v38);
      RakNet::RakString::~RakString((RakNet::RakString *)&v38);
      if ( RakNet::RakString::IsEmpty((RakNet::RakString *)&v39) == 1 )
        RakNet::RakString::operator=((RakNet::RakString *)&v39, "255.255.254.0");
      sscanf(v8, "%u.%u.%u.%u", &v34, &v35, &v36, &v37);
      sscanf(*(const char **)(v39 + 16), "%u.%u.%u.%u", &v30, &v31, &v32, &v33);
      sprintf(
        &s,
        "%d.%d.%d.%d",
        v34 | (unsigned __int8)~v30,
        (unsigned __int8)v35 | (unsigned __int8)~v31,
        v36 | (unsigned __int8)~v32,
        (unsigned __int8)v37 | (unsigned __int8)~v33);
      sub_21E94B4((void **)&v29, &s);
      v10 = (int)v41;
      if ( v41 == v42 )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)&v40,
          &v29);
        v11 = &dword_28898C0;
        v12 = v29;
      }
      else
        *v41 = v29;
        v12 = (char *)&unk_28898CC;
        v29 = (char *)&unk_28898CC;
        v41 = (char **)(v10 + 4);
      v3 = v27;
      v13 = v12 - 12;
      if ( (int *)(v12 - 12) != v11 )
        v14 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      RakNet::RakString::~RakString((RakNet::RakString *)&v39);
    }
  }
  sub_21E94B4(&v28, "FF02:0:0:0:0:0:0:1");
  v16 = *(_QWORD *)((char *)v3 + 148);
  if ( (_DWORD)v16 == HIDWORD(v16) )
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)v3 + 18,
      &v28);
    v17 = (int)v28;
    *(_DWORD *)v16 = v28;
    HIDWORD(v16) = &unk_28898CC;
    v28 = &unk_28898CC;
    *((_DWORD *)v3 + 37) = v16 + 4;
  v18 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  std::vector<std::string,std::allocator<std::string>>::operator=((int)v3 + 132, (unsigned __int64 *)&v40);
  v20 = v41;
  v19 = v40;
  if ( v40 != v41 )
    do
      v23 = (int *)(*v19 - 12);
      if ( v23 != &dword_28898C0 )
        v21 = (unsigned int *)(*v19 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      ++v19;
    while ( v19 != v20 );
    v19 = v40;
  if ( v19 )
    operator delete(v19);
  result = (RakNet *)(_stack_chk_guard - v44);
  if ( _stack_chk_guard != v44 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall RakNetServerLocator::_onPingSend(int a1, const void **a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  const void **v6; // r5@1
  char *v7; // r0@1
  signed int result; // r0@1
  int v9; // r5@2

  v4 = a1;
  v5 = a4;
  v6 = a2;
  v7 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
  result = sub_21E7D6C(v6, v7);
  if ( result )
  {
    v9 = std::__detail::_Map_base<std::string,std::pair<std::string const,RakNetServerLocator::PingRateRecorder>,std::allocator<std::pair<std::string const,RakNetServerLocator::PingRateRecorder>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           (unsigned __int64 *)(v4 + 4),
           (int **)v6);
    result = RakNet::GetTimeMS((RakNet *)v9);
    if ( !*(_BYTE *)(v9 + 36) )
    {
      *(_DWORD *)(v9 + 32) = v5;
      *(_DWORD *)(v9 + 24) = result;
      result = 1;
      *(_BYTE *)(v9 + 36) = 1;
    }
  }
  return result;
}


int __fastcall RakNetServerLocator::PingRateRecorder::_updateAverage(int result, float a2)
{
  unsigned int v4; // r7@1
  char *v5; // r9@2
  int v6; // r11@2
  int v12; // r5@4
  int v13; // r8@4
  int v15; // r1@4
  int v16; // r0@3
  int v17; // r1@3
  int v18; // r10@5
  int v19; // r8@5
  unsigned int v20; // r0@7
  char *v21; // r6@9
  unsigned int v22; // r7@9
  char *v23; // r0@15
  int v24; // r5@16
  int v25; // r5@18

  _R4 = result;
  _R6 = a2;
  v4 = *(_DWORD *)(result + 12);
  if ( v4 )
  {
    v6 = *(_QWORD *)result >> 32;
    v5 = (char *)*(_QWORD *)result;
    __asm { VMOV            S16, R6 }
    _R5 = (v6 - (signed int)v5) >> 3;
    __asm
    {
      VMOV            S0, R5
      VCVT.F32.U32    S18, S0
    }
    if ( _ZF )
      v12 = *(_DWORD *)(result + 28);
      v13 = (int)&v5[8 * v12];
      _R0 = _aeabi_ul2f(*(_DWORD *)&v5[8 * v12], *(_DWORD *)(v13 + 4));
      __asm
      {
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VSUB.F32        S2, S16, S2
        VDIV.F32        S0, S0, S18
        VMUL.F32        S0, S2, S0
        VLDR            S2, [R4,#0x10]
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#0x10]
      }
      *(_DWORD *)&v5[8 * v12] = _aeabi_f2ulz(LODWORD(_R6));
      *(_DWORD *)(v13 + 4) = v15;
      result = (v12 + 1) / v4;
      *(_DWORD *)(_R4 + 28) = (v12 + 1) % v4;
    else
        VLDR            S4, [R4,#0x10]
        VADD.F32        S2, S18, S0
        VDIV.F32        S2, S0, S2
        VSUB.F32        S0, S0, S2
        VMUL.F32        S2, S2, S16
        VMUL.F32        S0, S4, S0
      v16 = _aeabi_f2ulz(LODWORD(a2));
      v18 = v16;
      v19 = v17;
      if ( v6 == *(_DWORD *)(_R4 + 8) )
        v20 = (v6 - (signed int)v5) >> 3;
        if ( !_R5 )
          v20 = 1;
        v21 = 0;
        v22 = v20 + _R5;
        if ( (v20 + _R5) >> 29 )
          v22 = 0x1FFFFFFF;
        if ( v20 + _R5 < v20 )
        if ( v22 )
        {
          if ( v22 >= 0x20000000 )
            sub_21E57F4();
          v23 = (char *)operator new(8 * v22);
          v6 = *(_QWORD *)_R4 >> 32;
          v5 = (char *)*(_QWORD *)_R4;
          v21 = v23;
        }
        v24 = (int)&v21[v6 - (_DWORD)v5];
        *(_DWORD *)&v21[v6 - (_DWORD)v5] = v18;
        *(_DWORD *)(v24 + 4) = v19;
        if ( 0 != (v6 - (signed int)v5) >> 3 )
          _aeabi_memmove8(v21, v5);
        v25 = v24 + 8;
        if ( v5 )
          operator delete(v5);
        result = (int)&v21[8 * v22];
        *(_DWORD *)_R4 = v21;
        *(_DWORD *)(_R4 + 4) = v25;
        *(_DWORD *)(_R4 + 8) = result;
      else
        *(_DWORD *)v6 = v16;
        *(_DWORD *)(v6 + 4) = v17;
        result = v6 + 8;
        *(_DWORD *)(_R4 + 4) = v6 + 8;
  }
  return result;
}


unsigned int __fastcall RakNetServerLocator::activate(RakNetServerLocator *this)
{
  RakNetServerLocator *v1; // r4@1
  RakNet::RakPeerInterface *v2; // r0@1
  RakNet::RakPeerInterface *v3; // r1@2
  RakNet::RakPeerInterface *v4; // r0@3
  unsigned int result; // r0@3
  bool v6; // zf@3
  RakNet::RakPeerInterface *v7; // r1@6

  v1 = this;
  v2 = (RakNet::RakPeerInterface *)*((_DWORD *)this + 20);
  if ( v2 )
  {
    (*(void (**)(void))(*(_DWORD *)v2 + 60))();
    v2 = (RakNet::RakPeerInterface *)RakNet::RakPeerInterface::DestroyInstance(
                                       *((RakNet::RakPeerInterface **)v1 + 20),
                                       v3);
    *((_DWORD *)v1 + 20) = 0;
  }
  v4 = RakNet::RakPeerInterface::GetInstance(v2);
  *((_DWORD *)v1 + 20) = v4;
  result = RakPeerHelper::peerStartup((RakNetServerLocator *)((char *)v1 + 84), v4, 1, 0, 0);
  v6 = result == 0;
  if ( result )
    result = *((_DWORD *)v1 + 20);
    v6 = result == 0;
  if ( !v6 )
    (*(void (**)(void))(*(_DWORD *)result + 60))();
    result = RakNet::RakPeerInterface::DestroyInstance(*((RakNet::RakPeerInterface **)v1 + 20), v7);
  return result;
}


char *__fastcall RakNetServerLocator::getServerList(RakNetServerLocator *this)
{
  return (char *)this + 104;
}


signed int __fastcall RakNetServerLocator::_onPongReceive(RakNetServerLocator *this, float *a2, const RakNet::RakNetGUID *a3, const unsigned int *a4, int a5)
{
  RakNetServerLocator *v5; // r4@1
  const unsigned int *v6; // r6@1
  float *v7; // r5@1
  char *v8; // r0@1
  unsigned int v9; // r11@1
  __int64 v10; // kr00_8@1
  int v11; // r8@1
  int v12; // r9@2
  _DWORD *v13; // r10@2
  int v14; // r6@2
  _DWORD *v15; // r1@4
  size_t v16; // r2@4
  int v17; // r7@6
  int v18; // r4@8
  signed int result; // r0@21
  unsigned int *v27; // r2@24
  signed int v28; // r1@26
  const unsigned int *v29; // [sp+0h] [bp-38h]@1
  void *s1; // [sp+Ch] [bp-2Ch]@1

  v5 = this;
  v6 = a4;
  v7 = a2;
  v8 = RakNet::RakNetGUID::ToString(a3);
  sub_21E94B4(&s1, v8);
  v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v29 = v6;
  v10 = *(_QWORD *)((char *)v5 + 4);
  v11 = *(_DWORD *)(v10 + 4 * (v9 % HIDWORD(v10)));
  if ( v11 )
  {
    v12 = *(_DWORD *)v11;
    v13 = s1;
    v14 = *(_DWORD *)(*(_DWORD *)v11 + 48);
    while ( 1 )
    {
      if ( v14 == v9 )
      {
        v15 = *(_DWORD **)(v12 + 4);
        v16 = *(v13 - 3);
        if ( v16 == *(v15 - 3) && !memcmp(v13, v15, v16) )
          break;
      }
      v17 = *(_DWORD *)v12;
      if ( !*(_DWORD *)v12 )
        v18 = 0;
        goto LABEL_14;
      v14 = *(_DWORD *)(v17 + 48);
      v11 = v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v17 + 48) % HIDWORD(v10) != v9 % HIDWORD(v10) )
    }
    if ( v11 )
      v18 = *(_DWORD *)v11;
    else
      v18 = 0;
  }
  else
    v18 = 0;
LABEL_14:
  if ( v13 - 3 != &dword_28898C0 )
    v27 = v13 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v13 - 3);
  _ZF = v18 == 0;
  if ( v18 )
    _ZF = (unsigned __int8)*(_WORD *)(v18 + 44) == 0;
  if ( _ZF || *(_DWORD *)(v18 + 40) != a5 )
    result = 0;
    _R1 = *v29 - *(_DWORD *)(v18 + 32);
    __asm
      VMOV            S0, R1
      VCVT.F32.U32    S0, S0
      VSTR            S0, [R4,#0x1C]
    if ( !_ZF & _CF )
      __asm { VMOV            R1, S0 }
      RakNetServerLocator::PingRateRecorder::_updateAverage((RakNetServerLocator::PingRateRecorder *)(v18 + 8), _R1);
      _R0 = *(_DWORD *)(v18 + 28);
      __asm { VMOV            R0, S0 }
    *(_BYTE *)(v18 + 44) = 0;
    *(_DWORD *)v7 = _R0;
    result = 1;
  return result;
}


signed int __fastcall RakNetServerLocator::_addCustomServerV6(int a1, int **a2, unsigned __int16 a3)
{
  int v3; // r4@1
  unsigned __int16 v4; // r6@1
  int **v5; // r8@1
  void *v6; // r0@2
  signed int v7; // r6@5
  int v8; // r5@9
  int *v9; // r9@9
  int (__fastcall *v10)(int, int *, int, _DWORD); // r10@9
  int v11; // r2@9
  int v12; // r0@10
  char *v13; // r0@13
  char *v14; // r0@14
  int v15; // r4@15
  int v16; // r0@15
  void *v17; // r0@17
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  int v21; // [sp+8h] [bp-30h]@11

  v3 = a1;
  v4 = a3;
  v5 = a2;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v6 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v6 = &ServiceLocator<AppPlatform>::mDefaultService;
  if ( (*(int (**)(void))(**(_DWORD **)v6 + 560))() )
  {
    v7 = 0;
  }
    if ( !*(_DWORD *)(v3 + 80) )
      RakNetServerLocator::activate((RakNetServerLocator *)v3);
    if ( RakPeerHelper::isIPv6Supported((RakPeerHelper *)(v3 + 84)) == 1 )
    {
      v8 = *(_DWORD *)(v3 + 80);
      v9 = *v5;
      v10 = *(int (__fastcall **)(int, int *, int, _DWORD))(*(_DWORD *)v8 + 160);
      RakPeerHelper::getIPv6ConnectionIndex((RakPeerHelper *)(v3 + 84));
      v11 = v4;
      v7 = 0;
      if ( v10(v8, v9, v11, 0) == 1 )
      {
        v12 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
                (unsigned __int64 *)(v3 + 32),
                v5);
        if ( v12 )
        {
          sub_21E8AF4(&v21, (int *)(v12 + 8));
        }
        else
          v13 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
          sub_21E94B4((void **)&v21, v13);
        v14 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
        if ( sub_21E7D6C((const void **)&v21, v14) )
          v15 = std::__detail::_Map_base<std::string,std::pair<std::string const,RakNetServerLocator::PingRateRecorder>,std::allocator<std::pair<std::string const,RakNetServerLocator::PingRateRecorder>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                  (unsigned __int64 *)(v3 + 4),
                  (int **)&v21);
          v16 = RakNet::GetTimeMS((RakNet *)v15);
          if ( !*(_BYTE *)(v15 + 36) )
          {
            *(_DWORD *)(v15 + 32) = 6;
            *(_DWORD *)(v15 + 24) = v16;
            *(_BYTE *)(v15 + 36) = 1;
          }
        v17 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v21 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        v7 = 1;
      }
    }
    else
  return v7;
}


int __fastcall RakNetServerLocator::_addCustomServerV4(RakNetServerLocator *this, int **a2, unsigned __int16 a3)
{
  RakNetServerLocator *v3; // r4@1
  unsigned __int16 v4; // r6@1
  int **v5; // r8@1
  int v6; // r5@4
  int *v7; // r9@4
  int (__fastcall *v8)(int, int *, int, _DWORD); // r10@4
  int v9; // r2@4
  signed int v10; // r6@4
  int v11; // r0@5
  char *v12; // r0@8
  char *v13; // r0@9
  int v14; // r4@10
  int v15; // r0@10
  void *v16; // r0@12
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  int v20; // [sp+8h] [bp-30h]@6

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_DWORD *)this + 20) )
    RakNetServerLocator::activate(this);
  if ( RakPeerHelper::isIPv4Supported((RakNetServerLocator *)((char *)v3 + 84)) == 1 )
  {
    v6 = *((_DWORD *)v3 + 20);
    v7 = *v5;
    v8 = *(int (__fastcall **)(int, int *, int, _DWORD))(*(_DWORD *)v6 + 160);
    RakPeerHelper::getIPv4ConnectionIndex((RakNetServerLocator *)((char *)v3 + 84));
    v9 = v4;
    v10 = 0;
    if ( v8(v6, v7, v9, 0) == 1 )
    {
      v11 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
              (unsigned __int64 *)v3 + 4,
              v5);
      if ( v11 )
      {
        sub_21E8AF4(&v20, (int *)(v11 + 8));
      }
      else
        v12 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
        sub_21E94B4((void **)&v20, v12);
      v13 = RakNet::RakNetGUID::ToString((RakNet::RakNetGUID *)&qword_27EB370);
      if ( sub_21E7D6C((const void **)&v20, v13) )
        v14 = std::__detail::_Map_base<std::string,std::pair<std::string const,RakNetServerLocator::PingRateRecorder>,std::allocator<std::pair<std::string const,RakNetServerLocator::PingRateRecorder>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                (unsigned __int64 *)((char *)v3 + 4),
                (int **)&v20);
        v15 = RakNet::GetTimeMS((RakNet *)v14);
        if ( !*(_BYTE *)(v14 + 36) )
        {
          *(_DWORD *)(v14 + 32) = 4;
          *(_DWORD *)(v14 + 24) = v15;
          *(_BYTE *)(v14 + 36) = 1;
        }
      v16 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
        else
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v10 = 1;
    }
  }
  else
  return v10;
}
