

RakNet *__fastcall RakNetInstance::RakNetNetworkPeer::getNetworkStatus(RakNetInstance::RakNetNetworkPeer *this, int a2)
{
  RakNetInstance::RakNetNetworkPeer *v2; // r10@1
  int v4; // r6@1
  void (__fastcall *v5)(char *); // r7@1
  int v6; // r0@1
  int *v7; // r6@1
  int *v8; // r4@1
  int (__cdecl *v9)(int, int); // r12@1
  int v10; // r1@1
  signed int v11; // r7@1
  int v12; // t1@2
  int v13; // r0@3
  int v14; // r6@3
  signed int v22; // r0@5
  __int64 v23; // kr00_8@8
  __int64 v24; // r0@8
  __int64 v27; // kr08_8@8
  __int64 v28; // r0@8
  RakNet *result; // r0@9
  int v32; // [sp+0h] [bp-210h]@1
  int v33; // [sp+4h] [bp-20Ch]@1
  char *v34; // [sp+78h] [bp-198h]@1
  char v35; // [sp+80h] [bp-190h]@1
  char v36; // [sp+160h] [bp-B0h]@1
  int v37; // [sp+16Ch] [bp-A4h]@1
  RakNet *v38; // [sp+1E4h] [bp-2Ch]@1

  v2 = this;
  _R8 = a2;
  v38 = _stack_chk_guard;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 1) = *(_DWORD *)(a2 + 180);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 184);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 176);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  v4 = *(_DWORD *)(a2 + 20);
  v5 = *(void (__fastcall **)(char *))(**(_DWORD **)(a2 + 4) + 224);
  v32 = *(_DWORD *)(a2 + 16);
  v33 = v4;
  v5(&v36);
  v6 = *(_DWORD *)(_R8 + 4);
  v7 = &v37;
  v8 = &v32;
  v9 = *(int (__cdecl **)(int, int))(*(_DWORD *)v6 + 344);
  v10 = *(_DWORD *)&v36;
  v34 = &v35;
  v11 = 120;
  do
  {
    v12 = *v7;
    ++v7;
    v11 -= 4;
    *v8 = v12;
    ++v8;
  }
  while ( v11 );
  v13 = v9(v6, v10);
  v14 = v13;
  if ( v13 )
    _R0 = v13 + 168;
    __asm
    {
      VLDMIA          R0, {D0-D3}
      VADD.F64        D0, D1, D0
      VADD.F64        D0, D0, D2
      VADD.F64        D0, D0, D3
      VCVTR.S32.F64   S0, D0
      VMOV            R0, S0
    }
    if ( _R0 >= 1 )
      __asm
      {
        VLDR            S2, [R8,#0xB0]
        VMOV.F32        S4, #0.125
      }
      v22 = 2;
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S0, S0
        VMUL.F32        S2, S2, S4
        VDIV.F32        S0, S0, S2
        VLDR            S2, =0.05
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v22 = 3;
      *(_DWORD *)v2 = v22;
    v23 = *(_QWORD *)(v14 + 64);
    v24 = *(_QWORD *)(v14 + 72) + *(_QWORD *)(v14 + 64);
    _R8 = _aeabi_ul2d(v24, HIDWORD(v24));
    _R0 = _aeabi_ul2d(v23, HIDWORD(v23));
      VMOV            D0, R0, R1
      VMOV            D1, R8, R9
      VMOV.F32        S16, #1.0
      VDIV.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VSUB.F32        S0, S16, S0
      VSTR            S0, [R10,#0x14]
    v27 = *(_QWORD *)(v14 + 8);
    v28 = *(_QWORD *)(v14 + 16) + *(_QWORD *)(v14 + 8);
    _R8 = _aeabi_ul2d(v28, HIDWORD(v28));
    _R0 = _aeabi_ul2d(v27, HIDWORD(v27));
      VMOV            D1, R8, R6
      VSTR            S0, [R10,#0x10]
  result = (RakNet *)(_stack_chk_guard - v38);
  if ( _stack_chk_guard != v38 )
    _stack_chk_fail(result);
  return result;
}


RakNetInstance *__fastcall RakNetInstance::~RakNetInstance(RakNetInstance *this)
{
  RakNetInstance *v1; // r11@1
  __int64 v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // r5@11
  int v6; // r4@11
  int v7; // r9@11
  void (__fastcall *v8)(int, int, int *, _DWORD); // r8@11
  void *v9; // r0@11
  int v10; // r5@13
  int v11; // r4@14
  int v12; // r7@14
  int v13; // r0@15
  int v14; // r0@19
  RakNet::RakPeerInterface *v15; // r1@20
  int v16; // r1@21
  void *v17; // r0@21
  void *v18; // r0@22
  char *v19; // r4@24
  char *v20; // r5@24
  void *v21; // r0@31
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  int v25; // [sp+8h] [bp-38h]@3

  v1 = this;
  *(_DWORD *)this = &off_26E9D80;
  v2 = *((_QWORD *)this + 80);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v5 = *((_DWORD *)v1 + 1);
      v6 = v2;
      v7 = *(_DWORD *)v2;
      v8 = *(void (__fastcall **)(int, int, int *, _DWORD))(*(_DWORD *)v5 + 16);
      sub_21E94B4((void **)&v25, "Shutdown");
      v8(v5, v7 + 8, &v25, 0);
      v9 = (void *)(v25 - 12);
      if ( (int *)(v25 - 12) != &dword_28898C0 )
      {
        v3 = (unsigned int *)(v25 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v4 = __ldrex(v3);
          while ( __strex(v4 - 1, v3) );
        }
        else
          v4 = (*v3)--;
        if ( v4 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      LODWORD(v2) = v6 + 4;
    }
    while ( v6 + 4 != *((_DWORD *)v1 + 161) );
    v10 = *((_DWORD *)v1 + 160);
    if ( (_DWORD)v2 != v10 )
      v11 = v6 - v10 + 4;
      v12 = 0;
      do
        v13 = *(_DWORD *)(v10 + v12);
        if ( v13 )
          (*(void (**)(void))(*(_DWORD *)v13 + 4))();
        *(_DWORD *)(v10 + v12) = 0;
        v12 += 4;
      while ( v11 != v12 );
    LODWORD(v2) = v10;
  }
  *((_DWORD *)v1 + 161) = v2;
  v14 = *((_DWORD *)v1 + 56);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 60))();
    RakNet::RakPeerInterface::DestroyInstance(*((RakNet::RakPeerInterface **)v1 + 56), v15);
    *((_DWORD *)v1 + 56) = 0;
  v16 = *((_DWORD *)v1 + 169);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)*((_DWORD *)v1 + 163);
  if ( v18 )
    operator delete(v18);
  v19 = (char *)(*((_QWORD *)v1 + 80) >> 32);
  v20 = (char *)*((_QWORD *)v1 + 80);
  if ( v20 != v19 )
      if ( *(_DWORD *)v20 )
        (*(void (**)(void))(**(_DWORD **)v20 + 4))();
      *(_DWORD *)v20 = 0;
      v20 += 4;
    while ( v19 != v20 );
    v20 = (char *)*((_DWORD *)v1 + 160);
  if ( v20 )
    operator delete(v20);
  Social::GameConnectionInfo::~GameConnectionInfo((RakNetInstance *)((char *)v1 + 580));
  v21 = (void *)*((_DWORD *)v1 + 135);
  if ( v21 )
    operator delete(v21);
  Social::GameConnectionInfo::~GameConnectionInfo((RakNetInstance *)((char *)v1 + 160));
  return v1;
}


int __fastcall RakNetInstance::RakNetInstance(__int64 a1, unsigned int a2)
{
  int v2; // r4@1
  __int64 v3; // r6@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r3@1
  int v7; // r2@1
  int v8; // r12@1
  int v9; // r2@1
  int v10; // r3@1
  int v11; // r0@1
  RakNet::RakPeer *v12; // r0@1
  void (*v13)(void); // r12@1
  int *v14; // r1@1
  signed int v15; // r6@1
  int *v16; // r5@1
  int v17; // t1@2
  int v19; // [sp+0h] [bp-A8h]@1

  v2 = a1;
  v3 = a2;
  LODWORD(a1) = &off_26E9D80;
  *(_QWORD *)v2 = a1;
  v4 = unk_27EB260;
  v5 = unk_27EB264;
  v6 = *(_DWORD *)&word_27EB268;
  *(_DWORD *)(v2 + 20) = dword_27EB26C;
  v7 = v2 + 8;
  *(_DWORD *)v7 = v4;
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  _aeabi_memclr8(v2 + 24, 128);
  *(_DWORD *)(v2 + 152) = 3;
  Social::GameConnectionInfo::GameConnectionInfo(
    (Social::GameConnectionInfo *)(v2 + 160),
    (const Social::GameConnectionInfo *)&word_27EB328);
  *(_BYTE *)(v2 + 220) = 0;
  v8 = v2 + 232;
  *(_DWORD *)(v2 + 224) = 0;
  v9 = unk_27EB264;
  v10 = *(_DWORD *)&word_27EB268;
  v11 = dword_27EB26C;
  *(_DWORD *)v8 = unk_27EB260;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *(_DWORD *)(v2 + 244) = v11;
  _aeabi_memclr8(v2 + 248, 128);
  *(_DWORD *)(v2 + 376) = 3;
  *(_BYTE *)(v2 + 384) = 0;
  *(_WORD *)(v2 + 385) = 0;
  _aeabi_memcpy4(v2 + 388, &unk_27EB270, 132);
  *(_DWORD *)(v2 + 520) = 0;
  *(_DWORD *)(v2 + 524) = 0;
  *(_DWORD *)(v2 + 528) = 0;
  *(_DWORD *)(v2 + 532) = 0;
  *(_DWORD *)(v2 + 536) = 0;
  *(_DWORD *)(v2 + 540) = 0;
  *(_DWORD *)(v2 + 544) = 0;
  *(_DWORD *)(v2 + 548) = 0;
  RakPeerHelper::RakPeerHelper(v2 + 552, v3);
  *(_QWORD *)(v2 + 572) = v3;
  Social::GameConnectionInfo::GameConnectionInfo((Social::GameConnectionInfo *)(v2 + 580));
  *(_WORD *)(v2 + 666) = 0;
  *(_WORD *)(v2 + 668) = 0;
  *(_DWORD *)(v2 + 672) = 0;
  *(_BYTE *)(v2 + 664) = 0;
  *(_DWORD *)(v2 + 656) = 0;
  *(_DWORD *)(v2 + 660) = 0;
  *(_DWORD *)(v2 + 648) = 0;
  *(_DWORD *)(v2 + 652) = 0;
  *(_DWORD *)(v2 + 640) = 0;
  *(_DWORD *)(v2 + 644) = 0;
  *(_DWORD *)(v2 + 676) = &unk_28898CC;
  v12 = RakNet::RakPeerInterface::GetInstance((RakNet::RakPeerInterface *)&unk_28898CC);
  *(_DWORD *)(v2 + 224) = v12;
  v13 = *(void (**)(void))(*(_DWORD *)v12 + 232);
  v14 = (int *)&unk_27EB278;
  v15 = 124;
  v16 = &v19;
  do
  {
    v17 = *v14;
    ++v14;
    v15 -= 4;
    *v16 = v17;
    ++v16;
  }
  while ( v15 );
  v13();
  (*(void (**)(void))(**(_DWORD **)(v2 + 224) + 180))();
  RakNetInstance::_storeLocalIP((RakNetInstance *)v2);
  return v2;
}


int __fastcall RakNetInstance::_createPeer(RakNetInstance *this, const NetworkIdentifier *a2)
{
  RakNetInstance *v2; // r4@1
  const NetworkIdentifier *v3; // r6@1
  int v4; // r7@1
  __int64 v5; // r0@1
  int v6; // r5@1
  __int64 v7; // r0@1
  int v9; // [sp+0h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 56);
  LODWORD(v5) = operator new(0xC0u);
  v6 = v5;
  RakNetInstance::RakNetNetworkPeer::RakNetNetworkPeer(v5, v3);
  v9 = v6;
  v7 = *(_QWORD *)((char *)v2 + 644);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    std::vector<std::unique_ptr<RakNetInstance::RakNetNetworkPeer,std::default_delete<RakNetInstance::RakNetNetworkPeer>>,std::allocator<std::unique_ptr<RakNetInstance::RakNetNetworkPeer,std::default_delete<RakNetInstance::RakNetNetworkPeer>>>>::_M_emplace_back_aux<std::unique_ptr<RakNetInstance::RakNetNetworkPeer,std::default_delete<RakNetInstance::RakNetNetworkPeer>>>(
      (_QWORD *)v2 + 80,
      &v9);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  else
    v9 = 0;
    *(_DWORD *)v7 = v6;
    *((_DWORD *)v2 + 161) = v7 + 4;
  return *(_DWORD *)(*((_DWORD *)v2 + 161) - 4);
}


void __fastcall RakNetInstance::tick(RakNetInstance *this)
{
  RakNetInstance *v1; // r8@1
  __int64 v2; // r4@1
  RakNetInstance::RakNetNetworkPeer *v3; // t1@2
  int v4; // r11@8
  int v5; // r1@10
  int v6; // r0@10
  signed int v7; // r2@11
  int v8; // r6@12
  int v9; // r4@12
  __int64 v10; // r1@13
  int v11; // r0@15
  RakNet *v12; // r0@16
  int v13; // r1@17
  int v14; // r0@17
  signed int v15; // r2@18
  int v16; // r6@19
  int v17; // r4@19
  __int64 v18; // r1@20
  int *v19; // r6@27
  signed int v20; // r4@27
  int *v21; // r7@27
  int (*v22)(void); // r12@27
  int v23; // r1@27
  int v24; // t1@28
  RakNet *v25; // r0@29
  int v26; // r0@32
  RakNet *v27; // r0@37
  void *v28; // r0@38
  RakNet *v29; // r0@43
  void *v30; // r0@45
  RakNet *v31; // r0@47
  void *v32; // r0@48
  unsigned int *v33; // r2@49
  signed int v34; // r1@51
  unsigned int *v35; // r2@56
  signed int v36; // r1@58
  unsigned int *v37; // r2@67
  signed int v38; // r1@69
  int v39; // [sp+0h] [bp-130h]@27
  int v40; // [sp+7Ch] [bp-B4h]@48
  int v41; // [sp+84h] [bp-ACh]@45
  int v42; // [sp+8Ch] [bp-A4h]@38
  char v43; // [sp+90h] [bp-A0h]@7
  char v44; // [sp+CCh] [bp-64h]@7

  v1 = this;
  v2 = *((_QWORD *)this + 80);
  while ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = *(RakNetInstance::RakNetNetworkPeer **)v2;
    LODWORD(v2) = v2 + 4;
    RakNetInstance::RakNetNetworkPeer::update(v3);
  }
  if ( *((_BYTE *)v1 + 578) )
    *((_BYTE *)v1 + 220) = 0;
    *((_WORD *)v1 + 80) = word_27EB328;
    EntityInteraction::setInteractText((int *)v1 + 41, (int *)&unk_27EB32C);
    EntityInteraction::setInteractText((int *)v1 + 42, (int *)&unk_27EB330);
    *((_DWORD *)v1 + 43) = dword_27EB334;
    EntityInteraction::setInteractText((int *)v1 + 44, (int *)&unk_27EB338);
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
      (unsigned __int64 *)((char *)v1 + 180),
      (int)&unk_27EB33C);
    EntityInteraction::setInteractText((int *)v1 + 52, (int *)&unk_27EB358);
    EntityInteraction::setInteractText((int *)v1 + 53, (int *)&unk_27EB35C);
    *((_BYTE *)v1 + 216) = byte_27EB360;
    *((_WORD *)v1 + 290) = word_27EB328;
    EntityInteraction::setInteractText((int *)v1 + 146, (int *)&unk_27EB32C);
    EntityInteraction::setInteractText((int *)v1 + 147, (int *)&unk_27EB330);
    *((_DWORD *)v1 + 148) = dword_27EB334;
    EntityInteraction::setInteractText((int *)v1 + 149, (int *)&unk_27EB338);
      (unsigned __int64 *)v1 + 75,
    EntityInteraction::setInteractText((int *)v1 + 157, (int *)&unk_27EB358);
    EntityInteraction::setInteractText((int *)v1 + 158, (int *)&unk_27EB35C);
    *((_BYTE *)v1 + 636) = byte_27EB360;
    *((_DWORD *)v1 + 136) = *((_DWORD *)v1 + 135);
  if ( *((_BYTE *)v1 + 220) )
    if ( *((_WORD *)v1 + 80) != 0xFFFF )
    {
      Social::GameConnectionInfo::GameConnectionInfo(
        (Social::GameConnectionInfo *)&v44,
        (RakNetInstance *)((char *)v1 + 160));
        (Social::GameConnectionInfo *)&v43,
        (const Social::GameConnectionInfo *)&word_27EB328);
      RakNetInstance::connect((int)v1, &v44, (int)&v43);
      Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v43);
      Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v44);
    }
  v4 = *(_QWORD *)((char *)v1 + 540);
  if ( v4 != *(_QWORD *)((char *)v1 + 540) >> 32 )
    do
      if ( *(_BYTE *)(v4 + 140) )
      {
        RakNet::SystemAddress::ToString((RakNet::SystemAddress *)v4, 1, 124);
        v5 = *((_DWORD *)v1 + 136);
        v6 = v4 + 144;
        if ( v4 + 144 != v5 )
        {
          v7 = v5 - v6;
          v6 = *((_DWORD *)v1 + 136);
          if ( v7 >= 1 )
          {
            v8 = v4;
            v9 = 954437177 * (v7 >> 4) + 1;
            do
            {
              RakNet::SystemAddress::operator=(v8, v8 + 144);
              --v9;
              v10 = *(_QWORD *)(v8 + 276);
              *(_BYTE *)(v8 + 140) = *(_BYTE *)(v8 + 284);
              *(_QWORD *)(v8 + 132) = v10;
              v8 += 144;
            }
            while ( v9 > 1 );
            v6 = *((_DWORD *)v1 + 136);
          }
        }
        v11 = v6 - 144;
        *((_DWORD *)v1 + 136) = v11;
      }
      else
        v12 = *(RakNet **)(v4 + 136);
        if ( (unsigned int)v12 < 0xA )
          if ( (unsigned int)RakNet::GetTimeMS(v12) > *(_DWORD *)(v4 + 132) + 1000 )
            RakNet::SystemAddress::ToString((RakNet::SystemAddress *)v4, 1, 124);
            v19 = (int *)(v4 + 12);
            v20 = 120;
            v21 = &v39;
            v22 = *(int (**)(void))(**((_DWORD **)v1 + 56) + 164);
            v23 = *(_DWORD *)v4;
              v24 = *v19;
              ++v19;
              v20 -= 4;
              *v21 = v24;
              ++v21;
            while ( v20 );
            v25 = (RakNet *)v22();
            *(_DWORD *)(v4 + 132) = RakNet::GetTimeMS(v25);
            ++*(_DWORD *)(v4 + 136);
          v11 = *((_DWORD *)v1 + 136);
          v4 += 144;
        else
          RakNet::SystemAddress::ToString((RakNet::SystemAddress *)v4, 1, 124);
          v13 = *((_DWORD *)v1 + 136);
          v14 = v4 + 144;
          if ( v4 + 144 != v13 )
            v15 = v13 - v14;
            v14 = *((_DWORD *)v1 + 136);
            if ( v15 >= 1 )
              v16 = v4;
              v17 = 954437177 * (v15 >> 4) + 1;
              do
              {
                RakNet::SystemAddress::operator=(v16, v16 + 144);
                --v17;
                v18 = *(_QWORD *)(v16 + 276);
                *(_BYTE *)(v16 + 140) = *(_BYTE *)(v16 + 284);
                *(_QWORD *)(v16 + 132) = v18;
                v16 += 144;
              }
              while ( v17 > 1 );
              v14 = *((_DWORD *)v1 + 136);
          v11 = v14 - 144;
          *((_DWORD *)v1 + 136) = v11;
          if ( !*((_BYTE *)v1 + 577) && *((_WORD *)v1 + 80) != 0xFFFF )
            *((_BYTE *)v1 + 220) = 1;
    while ( v4 != v11 );
  v26 = *((_DWORD *)v1 + 134);
  if ( v26 == 1 )
    if ( (*(int (**)(void))(**((_DWORD **)v1 + 56) + 64))() == 1 )
      RakNetInstance::_pingNatService(v1, 1);
    v26 = *((_DWORD *)v1 + 134);
  if ( v26 == 2 )
    v27 = (RakNet *)RakNet::GetTimeMS((RakNet *)2);
    if ( (unsigned int)v27 <= *((_DWORD *)v1 + 130) + 5000 )
      if ( (unsigned int)RakNet::GetTimeMS(v27) > *((_DWORD *)v1 + 131) + 1000 )
        RakNetInstance::_pingNatService(v1, 0);
    else
      sub_21E94B4((void **)&v42, "Nat Punch timed out");
      RakNetInstance::_changeNatState((int)v1, (void *)6);
      v28 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v42 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      *((_BYTE *)v1 + 384) = 1;
      *((_BYTE *)v1 + 386) = 0;
  if ( *((_DWORD *)v1 + 134) == 3 )
    v29 = (RakNet *)*((_BYTE *)v1 + 576);
    if ( *((_BYTE *)v1 + 576) )
      goto LABEL_77;
    if ( (unsigned int)*(_QWORD *)((char *)v1 + 540) == *(_QWORD *)((char *)v1 + 540) >> 32 )
      sub_21E94B4((void **)&v41, (const char *)&unk_257BC67);
      RakNetInstance::_changeNatState((int)v1, (void *)5);
      v30 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v41 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v29 = (RakNet *)*((_BYTE *)v1 + 576);
      if ( *((_BYTE *)v1 + 576) )
LABEL_77:
        v31 = (RakNet *)RakNet::GetTimeMS(v29);
        if ( (unsigned int)v31 <= *((_DWORD *)v1 + 132) + 5000 )
          if ( (unsigned int)RakNet::GetTimeMS(v31) > *((_DWORD *)v1 + 133) + 2000 )
            RakNetInstance::_pingNatService(v1, 0);
          *((_BYTE *)v1 + 576) = 0;
          sub_21E94B4((void **)&v40, "Timed out awaiting client NAT connection info.");
          RakNetInstance::_changeNatState((int)v1, (void *)5);
          v32 = (void *)(v40 - 12);
          if ( (int *)(v40 - 12) != &dword_28898C0 )
            v33 = (unsigned int *)(v40 - 4);
            if ( &pthread_create )
              __dmb();
                v34 = __ldrex(v33);
              while ( __strex(v34 - 1, v33) );
            else
              v34 = (*v33)--;
            if ( v34 <= 0 )
              j_j_j_j__ZdlPv_9(v32);
}


RakNetInstance::RakNetNetworkPeer *__fastcall RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer(RakNetInstance::RakNetNetworkPeer *this)
{
  RakNetInstance::RakNetNetworkPeer *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  unsigned int *v10; // r2@18
  signed int v11; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26E9DD4;
  v3 = (void *)(*(_QWORD *)((char *)this + 164) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 164);
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
    v2 = (void *)*((_DWORD *)v1 + 41);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 40);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


char *__fastcall RakNetInstance::addConnectionStateListener(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 656);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = *(void **)(v2 + 652);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)(v2 + 652) >> 32;
      v6 = (void *)*(_QWORD *)(v2 + 652);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)(v2 + 652) = *(_QWORD *)&v10;
    *(_DWORD *)(v2 + 660) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*(_DWORD *)(v2 + 656) + 4);
    *(_DWORD *)(v2 + 656) = result;
  return result;
}


unsigned int __fastcall RakNetInstance::host(RakNetInstance *this, int a2, int a3, int a4)
{
  RakNetInstance *v4; // r4@1
  unsigned __int16 v5; // r7@1
  int v6; // r6@1
  unsigned __int16 v7; // r8@1
  unsigned int v8; // r5@1
  int v9; // r2@2

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v8 = 1;
  if ( !(*(int (**)(void))(**((_DWORD **)this + 56) + 64))() )
  {
    v9 = v6;
    if ( v6 < 1 )
      v9 = 1;
    v8 = RakPeerHelper::peerStartup(
           (RakNetInstance *)((char *)v4 + 552),
           *((RakNet::RakPeerInterface **)v4 + 56),
           v9,
           v5,
           v7) | 1;
    if ( v8 != 1 )
      v8 = 0;
  }
  *((_WORD *)v4 + 333) = v5;
  *((_WORD *)v4 + 334) = v7;
  *((_DWORD *)v4 + 168) = v6;
  (*(void (**)(void))(**((_DWORD **)v4 + 56) + 32))();
  *(_WORD *)((char *)v4 + 577) = 1;
  *((_WORD *)v4 + 290) = word_27EB328;
  EntityInteraction::setInteractText((int *)v4 + 146, (int *)&unk_27EB32C);
  EntityInteraction::setInteractText((int *)v4 + 147, (int *)&unk_27EB330);
  *((_DWORD *)v4 + 148) = dword_27EB334;
  EntityInteraction::setInteractText((int *)v4 + 149, (int *)&unk_27EB338);
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
    (unsigned __int64 *)v4 + 75,
    (int)&unk_27EB33C);
  EntityInteraction::setInteractText((int *)v4 + 157, (int *)&unk_27EB358);
  EntityInteraction::setInteractText((int *)v4 + 158, (int *)&unk_27EB35C);
  *((_BYTE *)v4 + 636) = byte_27EB360;
  return v8;
}


signed int __fastcall RakNetInstance::connect(int a1, _WORD *a2, int a3)
{
  int v3; // r4@1
  int v4; // r10@1
  _WORD *v5; // r11@1
  signed int v6; // r6@2
  int *v7; // r9@4
  int *v8; // r6@5
  int v9; // r1@5
  int v10; // r2@5
  int v11; // r3@5
  int *v12; // r0@5
  signed int v13; // r7@5
  int v14; // t1@6
  int *v15; // r5@7
  int *v16; // r8@7
  __int64 v17; // r6@7
  int v18; // r0@9
  unsigned __int16 v19; // r6@12
  unsigned __int16 v20; // r7@12
  RakPeerHelper *v21; // r7@13
  unsigned __int16 v22; // r0@15
  unsigned int v23; // r0@15
  int v24; // r4@16
  int v25; // r8@16
  int v26; // r9@16
  int (__fastcall *v27)(int, int, int, _DWORD); // r5@16
  signed int v28; // r0@16
  int v30[30]; // [sp+0h] [bp-178h]@5
  _WORD *v31; // [sp+78h] [bp-100h]@5
  _WORD *v32; // [sp+80h] [bp-F8h]@7
  unsigned __int64 *v33; // [sp+84h] [bp-F4h]@5
  int *v34; // [sp+88h] [bp-F0h]@7
  __int16 v35; // [sp+8Ch] [bp-ECh]@7
  int v36; // [sp+90h] [bp-E8h]@7
  int v37; // [sp+94h] [bp-E4h]@7
  int v38; // [sp+98h] [bp-E0h]@7
  int v39; // [sp+9Ch] [bp-DCh]@7
  int v40; // [sp+A0h] [bp-D8h]@7
  int v41; // [sp+BCh] [bp-BCh]@7
  int v42; // [sp+C0h] [bp-B8h]@7
  char v43; // [sp+C4h] [bp-B4h]@7
  char v44; // [sp+C8h] [bp-B0h]@4
  int v45; // [sp+CCh] [bp-ACh]@5
  int v46; // [sp+D0h] [bp-A8h]@5
  int v47; // [sp+D4h] [bp-A4h]@5
  RakNet *v48; // [sp+150h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v48 = _stack_chk_guard;
  if ( *(_BYTE *)(a1 + 577) )
  {
    v6 = 0;
    goto LABEL_20;
  }
  if ( *a2 == 5 )
    _aeabi_memcpy8(&v44, &unk_27EB270, 132);
    v7 = (int *)(v5 + 2);
    if ( RakNet::SystemAddress::FromStringExplicitPort(
           (RakNet::SystemAddress *)&v44,
           *((const char **)v5 + 1),
           v5[6],
           0) != 1 )
    {
      v6 = 0;
      goto LABEL_20;
    }
    v33 = (unsigned __int64 *)(v5 + 10);
    v8 = v30;
    v9 = *(_DWORD *)&v44;
    v10 = v45;
    v11 = v46;
    v31 = v5 + 10;
    v12 = &v47;
    v13 = 120;
    do
      v14 = *v12;
      ++v12;
      v13 -= 4;
      *v8 = v14;
      ++v8;
    while ( v13 );
    Social::GameConnectionInfo::GameConnectionInfo(
      (int)&v35,
      v9,
      v10,
      v11,
      v30[0],
      v30[1],
      v30[2],
      v30[3],
      v30[4],
      v30[5],
      v30[6],
      v30[7],
      v30[8],
      v30[9],
      v30[10],
      v30[11],
      v30[12],
      v30[13],
      v30[14],
      v30[15],
      v30[16],
      v30[17],
      v30[18],
      v30[19],
      v30[20],
      v30[21],
      v30[22],
      v30[23],
      v30[24],
      v30[25],
      v30[26],
      v30[27],
      v30[28],
      v30[29],
      (int)v31);
    EntityInteraction::setInteractText(&v37, (int *)v5 + 1);
    *v5 = v35;
    EntityInteraction::setInteractText((int *)v5 + 1, &v36);
    v32 = v5 + 4;
    EntityInteraction::setInteractText((int *)v5 + 2, &v37);
    v15 = (int *)(v5 + 8);
    *((_DWORD *)v5 + 3) = v38;
    EntityInteraction::setInteractText((int *)v5 + 4, &v39);
    std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
      v33,
      (int)&v40);
    v16 = (int *)(v5 + 24);
    EntityInteraction::setInteractText((int *)v5 + 12, &v41);
    v34 = (int *)(v5 + 26);
    EntityInteraction::setInteractText((int *)v5 + 13, &v42);
    *((_BYTE *)v5 + 56) = v43;
    Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v35);
    v17 = *(_QWORD *)&v32;
  else
    v34 = (int *)(a2 + 26);
    v16 = (int *)(a2 + 24);
    HIDWORD(v17) = a2 + 10;
    v15 = (int *)(a2 + 8);
    LODWORD(v17) = a2 + 4;
    v7 = (int *)(a2 + 2);
  *(_WORD *)(v3 + 160) = *(_WORD *)v4;
  EntityInteraction::setInteractText((int *)(v3 + 164), (int *)(v4 + 4));
  EntityInteraction::setInteractText((int *)(v3 + 168), (int *)(v4 + 8));
  *(_DWORD *)(v3 + 172) = *(_DWORD *)(v4 + 12);
  EntityInteraction::setInteractText((int *)(v3 + 176), (int *)(v4 + 16));
  std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
    (unsigned __int64 *)(v3 + 180),
    v4 + 20);
  EntityInteraction::setInteractText((int *)(v3 + 208), (int *)(v4 + 48));
  EntityInteraction::setInteractText((int *)(v3 + 212), (int *)(v4 + 52));
  *(_BYTE *)(v3 + 216) = *(_BYTE *)(v4 + 56);
  *(_WORD *)(v3 + 580) = *v5;
  EntityInteraction::setInteractText((int *)(v3 + 584), v7);
  EntityInteraction::setInteractText((int *)(v3 + 588), (int *)v17);
  *(_DWORD *)(v3 + 592) = *((_DWORD *)v5 + 3);
  EntityInteraction::setInteractText((int *)(v3 + 596), v15);
    (unsigned __int64 *)(v3 + 600),
    SHIDWORD(v17));
  EntityInteraction::setInteractText((int *)(v3 + 628), v16);
  EntityInteraction::setInteractText((int *)(v3 + 632), v34);
  v6 = 0;
  *(_BYTE *)(v3 + 636) = *((_BYTE *)v5 + 56);
  *(_BYTE *)(v3 + 578) = 0;
  Social::GameConnectionInfo::typeAsString((Social::GameConnectionInfo *)v5);
  v18 = *v5;
  if ( (unsigned int)(v18 - 1) >= 2 )
    if ( v18 == 3 )
      RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v44, *((const char **)v5 + 1), v5[6]);
      RakNetInstance::_openNatConnection((RakNetInstance *)v3, (const RakNet::SystemAddress *)&v44);
      v6 = 1;
    if ( v18 != 4 )
  v19 = (*(int (**)(void))(**(_DWORD **)(v3 + 572) + 16))();
  v20 = (*(int (**)(void))(**(_DWORD **)(v3 + 572) + 20))();
  if ( (*(int (**)(void))(**(_DWORD **)(v3 + 224) + 64))() == 1 )
    v21 = (RakPeerHelper *)(v3 + 552);
    *(_WORD *)(v3 + 577) = 0;
    v22 = v20;
    v23 = RakPeerHelper::peerStartup((RakPeerHelper *)(v3 + 552), *(RakNet::RakPeerInterface **)(v3 + 224), 1, v19, v22);
    if ( (v23 | 1) != 1 )
  v24 = *(_DWORD *)(v3 + 224);
  v25 = v5[6];
  v26 = *((_DWORD *)v5 + 1);
  v27 = *(int (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v24 + 52);
  v28 = RakPeerHelper::getConnectionIndex(v21, (const Social::GameConnectionInfo *)v5);
  v30[0] = 0;
  v30[1] = 0;
  v30[2] = v28;
  v30[3] = 12;
  v30[4] = 500;
  v30[5] = 0;
  if ( !v27(v24, v26, v25, 0) )
    v6 = 1;
LABEL_20:
  if ( _stack_chk_guard != v48 )
    _stack_chk_fail(_stack_chk_guard - v48);
  return v6;
}


int __fastcall RakNetInstance::getRefinedLocalIps(RakNetInstance *this, int a2)
{
  int result; // r0@1
  int v3; // r6@2
  int v4; // r5@2
  RakNet::NetworkAdapter *v5; // r4@3
  unsigned int v6; // r10@4
  int v7; // r11@5
  signed int v8; // r7@5
  signed int v9; // r9@5
  void *v10; // r9@17
  int v11; // r0@17
  unsigned int v12; // r1@17
  unsigned int v13; // r0@19
  unsigned int v14; // r5@19
  void *v15; // r5@25
  void *v16; // r5@26
  int v17; // r0@26
  unsigned int v18; // r1@26
  unsigned int v19; // r0@28
  unsigned int v20; // r7@28
  void *v21; // r7@34
  char *v22; // r8@36
  char *v23; // r8@43
  RakNetInstance *v24; // r1@46
  unsigned int v25; // [sp+8h] [bp-38h]@25
  unsigned int v26; // [sp+8h] [bp-38h]@34
  unsigned int v27; // [sp+Ch] [bp-34h]@1
  int v28; // [sp+10h] [bp-30h]@1
  RakNetInstance *v29; // [sp+14h] [bp-2Ch]@1
  int v30; // [sp+18h] [bp-28h]@4

  v28 = a2;
  v29 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  result = (*(int (**)(void))(**(_DWORD **)(a2 + 224) + 244))();
  v27 = result;
  if ( result )
  {
    v3 = 0;
    v4 = 0;
    do
    {
      v5 = (RakNet::NetworkAdapter *)(*(int (**)(void))(**(_DWORD **)(v28 + 224) + 248))();
      if ( *(_BYTE *)v5 & 2 )
      {
        v30 = v4;
      }
      else
        v6 = RakNet::NetworkAdapter::GetNumberOfAddresses(v5);
        if ( v6 )
        {
          v7 = 0;
          v8 = 0;
          v9 = 0;
          while ( 1 )
          {
            if ( RakNet::SystemAddress::operator!=((int)v5 + 132 * v7 + 12, (int)&unk_27EB270) != 1
              || RakNet::SystemAddress::IsLinkLocalAddress((RakNet::NetworkAdapter *)((char *)v5 + 132 * v7 + 12)) )
            {
              goto LABEL_50;
            }
            if ( !(v9 & 1)
              && RakNet::SystemAddress::GetIPVersion((RakNet::NetworkAdapter *)((char *)v5 + 132 * v7 + 12)) == 6 )
              if ( v3 == *((_DWORD *)v29 + 2) )
              {
                v10 = *(void **)v29;
                v11 = (v3 - *(_DWORD *)v29) >> 2;
                v12 = 1041204193 * v11;
                if ( v3 == *(_DWORD *)v29 )
                  v12 = 1;
                v13 = v12 + 1041204193 * v11;
                v14 = v13;
                if ( v13 > 0x1F07C1F )
                  v14 = 32537631;
                if ( v13 < v12 )
                if ( v14 )
                {
                  if ( v14 >= 0x1F07C20 )
                    sub_21E57F4();
                  v25 = v14;
                  v15 = operator new(132 * v14);
                }
                else
                  v25 = 0;
                  v15 = 0;
                _aeabi_memcpy4((char *)v15 + v3 - (_DWORD)v10, (char *)v5 + 132 * v7 + 12, 132);
                v22 = (char *)v15;
                if ( v10 != (void *)v3 )
                  do
                  {
                    _aeabi_memcpy4(v15, v10, 132);
                    v10 = (char *)v10 + 132;
                    v15 = (char *)v15 + 132;
                  }
                  while ( (void *)v3 != v10 );
                  v10 = *(void **)v29;
                v3 = (int)v15 + 132;
                if ( v10 )
                  operator delete(v10);
                v9 = 1;
                *(_DWORD *)v29 = v22;
                *((_DWORD *)v29 + 1) = v3;
                *((_DWORD *)v29 + 2) = &v22[132 * v25];
              }
              else
                _aeabi_memcpy4(v3, (char *)v5 + 132 * v7 + 12, 132);
                v3 = *((_DWORD *)v29 + 1) + 132;
            if ( !(v8 & 1) )
              if ( RakNet::SystemAddress::GetIPVersion((RakNet::NetworkAdapter *)((char *)v5 + 132 * v7 + 12)) != 4 )
                v8 = 0;
                goto LABEL_50;
                v16 = *(void **)v29;
                v17 = (v3 - *(_DWORD *)v29) >> 2;
                v18 = 1041204193 * v17;
                  v18 = 1;
                v19 = v18 + 1041204193 * v17;
                v20 = v19;
                if ( v19 > 0x1F07C1F )
                  v20 = 32537631;
                if ( v19 < v18 )
                if ( v20 )
                  if ( v20 >= 0x1F07C20 )
                  v26 = v20;
                  v21 = operator new(132 * v20);
                  v26 = 0;
                  v21 = 0;
                _aeabi_memcpy4((char *)v21 + v3 - (_DWORD)v16, (char *)v5 + 132 * v7 + 12, 132);
                v23 = (char *)v21;
                if ( v16 != (void *)v3 )
                    _aeabi_memcpy4(v21, v16, 132);
                    v16 = (char *)v16 + 132;
                    v21 = (char *)v21 + 132;
                  while ( (void *)v3 != v16 );
                  v16 = *(void **)v29;
                v24 = v29;
                v3 = (int)v21 + 132;
                if ( v16 )
                  operator delete(v16);
                  v24 = v29;
                *(_DWORD *)v24 = v23;
                *((_DWORD *)v24 + 1) = v3;
                *((_DWORD *)v24 + 2) = &v23[132 * v26];
            v8 = 1;
LABEL_50:
            if ( !(v9 & v8 & 1) && ++v7 < v6 )
              continue;
            break;
          }
        }
      result = v27;
      v4 = v30 + 1;
    }
    while ( v30 + 1 < v27 );
  }
  return result;
}


unsigned int __fastcall RakNetInstance::_startupIfNeeded(RakNetInstance *this, unsigned __int16 a2, unsigned __int16 a3, int a4)
{
  RakNetInstance *v4; // r6@1
  unsigned __int16 v5; // r5@1
  signed int v6; // r4@1
  unsigned __int16 v7; // r7@1
  unsigned int result; // r0@2

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  if ( (*(int (**)(void))(**((_DWORD **)this + 56) + 64))() )
  {
    result = 0;
  }
  else
    if ( v6 < 1 )
      v6 = 1;
    result = RakPeerHelper::peerStartup(
               (RakNetInstance *)((char *)v4 + 552),
               *((RakNet::RakPeerInterface **)v4 + 56),
               v6,
               v5,
               v7);
  return result;
}


int __fastcall RakNetInstance::setupNatPunch(RakNetInstance *this, bool a2)
{
  RakNetInstance *v2; // r5@1
  bool v3; // r4@1
  int result; // r0@1
  unsigned __int16 v5; // r6@2
  unsigned __int16 v6; // r7@2
  void *v7; // r0@4
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+8h] [bp-20h]@4

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 134);
  if ( result != 2 )
  {
    v5 = (*(int (**)(void))(**((_DWORD **)v2 + 143) + 16))();
    v6 = (*(int (**)(void))(**((_DWORD **)v2 + 143) + 20))();
    if ( !(*(int (**)(void))(**((_DWORD **)v2 + 56) + 64))() )
      RakPeerHelper::peerStartup(
        (RakNetInstance *)((char *)v2 + 552),
        *((RakNet::RakPeerInterface **)v2 + 56),
        29,
        v5,
        v6);
    sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
    RakNetInstance::_changeNatState((int)v2, (void *)1);
    v7 = (void *)(v10 - 12);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    result = 0;
    *((_BYTE *)v2 + 384) = 0;
    *((_BYTE *)v2 + 386) = 0;
    *((_BYTE *)v2 + 579) = v3;
  }
  return result;
}


void __fastcall RakNetInstance::_storeLocalIP(RakNetInstance *this)
{
  RakNetInstance::_storeLocalIP(this);
}


void __fastcall RakNetInstance::tick(RakNetInstance *this)
{
  RakNetInstance::tick(this);
}


void __fastcall RakNetInstance::~RakNetInstance(RakNetInstance *this)
{
  RakNetInstance *v1; // r0@1

  v1 = RakNetInstance::~RakNetInstance(this);
  j_j_j__ZdlPv_5((void *)v1);
}


signed int __fastcall RakNetInstance::getPort(RakNetInstance *this)
{
  RakPeerHelper *v1; // r4@1
  signed int result; // r0@2

  v1 = (RakNetInstance *)((char *)this + 552);
  if ( RakPeerHelper::isIPv4Supported((RakNetInstance *)((char *)this + 552)) == 1 )
  {
    result = RakPeerHelper::getIPv4BoundPort(v1);
  }
  else if ( RakPeerHelper::isIPv6Supported(v1) == 1 )
    result = RakPeerHelper::getIPv6BoundPort(v1);
  else
    result = 0;
  return result;
}


int __fastcall RakNetInstance::getGUID(int result, int a2)
{
  int v2; // r1@1
  int v3; // r3@3
  int v4; // r12@3
  int v5; // r1@3

  v2 = *(_DWORD *)(a2 + 224);
  if ( v2 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 208))(result);
  }
  else
    v3 = unk_27EB264;
    v4 = *(_DWORD *)&word_27EB268;
    v5 = dword_27EB26C;
    *(_DWORD *)result = unk_27EB260;
    *(_DWORD *)(result + 4) = v3;
    *(_DWORD *)(result + 8) = v4;
    *(_DWORD *)(result + 12) = v5;
  return result;
}


void __fastcall RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer(RakNetInstance::RakNetNetworkPeer *this)
{
  RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer(this);
}


int __fastcall RakNetInstance::removeConnectionStateListener(int result, int a2)
{
  int v2; // r2@1
  _DWORD *v3; // r12@1
  int v4; // r3@1
  int v5; // lr@2
  bool v6; // zf@3
  _DWORD *v7; // r3@3
  int v8; // r4@6
  bool v9; // zf@6
  int v10; // r3@11

  v3 = (_DWORD *)(*(_QWORD *)(result + 652) >> 32);
  v2 = *(_QWORD *)(result + 652);
  v4 = ((signed int)v3 - v2) >> 4;
  if ( v4 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v2) >> 2 )
    {
      v7 = (_DWORD *)v2;
    }
    else
      v10 = ((signed int)v3 - v2) >> 2;
      if ( v10 == 2 )
      {
        v7 = (_DWORD *)v2;
      }
      else
        if ( v10 != 3 )
        {
          v7 = (_DWORD *)(*(_QWORD *)(result + 652) >> 32);
          goto LABEL_23;
        }
        if ( *(_DWORD *)v2 == a2 )
        v7 = (_DWORD *)(v2 + 4);
      if ( *v7 == a2 )
        goto LABEL_23;
      ++v7;
    if ( *v7 != a2 )
      v7 = (_DWORD *)(*(_QWORD *)(result + 652) >> 32);
  }
  else
    v5 = v4 + 1;
    while ( 1 )
      v6 = *(_DWORD *)v2 == a2;
      if ( *(_DWORD *)v2 != a2 )
        v6 = *(_DWORD *)(v2 + 4) == a2;
      if ( v6 )
        break;
      v7 = (_DWORD *)(v2 + 8);
      v8 = *(_DWORD *)(v2 + 8);
      v9 = v8 == a2;
      if ( v8 != a2 )
        v7 = (_DWORD *)(v2 + 12);
        v9 = *(_DWORD *)(v2 + 12) == a2;
      if ( v9 )
      --v5;
      v2 += 16;
      if ( v5 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( v7 != v3 )
    *(_DWORD *)(result + 656) = v7;
  return result;
}


signed int __fastcall RakNetInstance::isMyLocalId(RakNetInstance *this, const NetworkIdentifier *a2)
{
  RakNetInstance *v2; // r5@1
  const NetworkIdentifier *v3; // r4@1
  signed int result; // r0@2
  int v5; // [sp+0h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(**((_DWORD **)this + 56) + 64))() == 1 )
  {
    (*(void (__fastcall **)(int *))(**((_DWORD **)v2 + 56) + 208))(&v5);
    result = RakNet::RakNetGUID::operator==(&v5, v3);
  }
  else
    result = 0;
  return result;
}


char *__fastcall RakNetInstance::getConnectedGameInfo(RakNetInstance *this)
{
  return (char *)this + 580;
}


RakNet *__fastcall RakNetInstance::startNatPunchingClient(RakNetInstance *a1, int a2)
{
  RakNetInstance *v2; // r4@1
  RakNet *result; // r0@3
  int v4; // [sp+0h] [bp-98h]@2
  RakNet *v5; // [sp+84h] [bp-14h]@1

  v2 = a1;
  v5 = _stack_chk_guard;
  if ( *(_WORD *)a2 == 3 )
  {
    RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v4, *(const char **)(a2 + 4), *(_WORD *)(a2 + 12));
    RakNetInstance::_openNatConnection(v2, (const RakNet::SystemAddress *)&v4);
  }
  result = (RakNet *)(_stack_chk_guard - v5);
  if ( _stack_chk_guard != v5 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall RakNetInstance::_pingNatService(RakNetInstance *this, int a2)
{
  RakNetInstance *v2; // r8@1
  RakPeerHelper *v3; // r6@1
  int v4; // r9@1
  int v5; // r7@2
  int v6; // r4@2
  int v7; // r5@2
  int (__fastcall *v8)(int, int, int, _DWORD); // r10@2
  int result; // r0@3
  void *v10; // r0@4
  void *v11; // r0@6
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  int v16; // [sp+8h] [bp-38h]@11
  int v17; // [sp+10h] [bp-30h]@4
  int v18; // [sp+18h] [bp-28h]@6

  v2 = this;
  v3 = (RakNetInstance *)((char *)this + 552);
  v4 = a2;
  if ( !RakPeerHelper::isIPv4Supported((RakNetInstance *)((char *)this + 552)) )
  {
    sub_21E94B4((void **)&v18, "IPv4 not supported, therefore Nat service can't be pinged");
    RakNetInstance::_changeNatState((int)v2, (void *)6);
    v11 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) == &dword_28898C0 )
    {
LABEL_12:
      *((_BYTE *)v2 + 384) = 1;
      result = 0;
      *((_BYTE *)v2 + 386) = 0;
      return result;
    }
    v12 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
LABEL_19:
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
      goto LABEL_12;
LABEL_18:
    v13 = (*v12)--;
    goto LABEL_19;
  }
  v5 = *((_DWORD *)v2 + 56);
  v6 = dword_27EB324;
  v7 = NATPort;
  v8 = *(int (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v5 + 160);
  RakPeerHelper::getIPv4ConnectionIndex(v3);
  if ( v8(v5, v6, v7, 0) != 1 )
    sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
    v11 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) == &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
      goto LABEL_19;
    goto LABEL_18;
  result = RakNet::GetTimeMS((RakNet *)1);
  *((_DWORD *)v2 + 131) = result;
  if ( v4 == 1 )
    *((_DWORD *)v2 + 130) = result;
    sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
    RakNetInstance::_changeNatState((int)v2, (void *)2);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    result = 0;
    *((_BYTE *)v2 + 384) = 0;
  return result;
}


void __fastcall RakNetInstance::~RakNetInstance(RakNetInstance *this)
{
  RakNetInstance::~RakNetInstance(this);
}


RakNet *__fastcall RakNetInstance::_openNatConnection(RakNetInstance *this, const RakNet::SystemAddress *a2)
{
  RakNetInstance *v2; // r4@1
  const RakNet::SystemAddress *v3; // r5@1
  int v4; // r0@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  _BYTE *v7; // r6@7 OVERLAPPED
  _BYTE *v8; // r5@9 OVERLAPPED
  int v9; // r0@9
  unsigned int v10; // r2@9
  unsigned int v11; // r0@11
  unsigned int v12; // r9@11
  char *v13; // r0@17
  char *v14; // r8@17
  char *v15; // r7@19
  RakNet *result; // r0@26
  int v17; // [sp+0h] [bp-B0h]@7
  int v18; // [sp+84h] [bp-2Ch]@7
  int v19; // [sp+88h] [bp-28h]@7
  char v20; // [sp+8Ch] [bp-24h]@7
  RakNet *v21; // [sp+90h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  v21 = _stack_chk_guard;
  v6 = *(_QWORD *)((char *)this + 540);
  v4 = *(_QWORD *)((char *)this + 540) >> 32;
  v5 = v6;
  if ( v4 != (_DWORD)v6 )
  {
    while ( v5 != v4 )
    {
      if ( RakNet::SystemAddress::operator==(v5, (int)v3) )
        goto LABEL_26;
      v4 = *((_DWORD *)v2 + 136);
      v5 += 144;
    }
  }
  _aeabi_memcpy8(&v17, &unk_27EB270, 132);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  RakNet::SystemAddress::operator=((int)&v17, (int)v3);
  v7 = (_BYTE *)*((_QWORD *)v2 + 68);
  if ( v7 == (_BYTE *)(*((_QWORD *)v2 + 68) >> 32) )
    v8 = (_BYTE *)*((_DWORD *)v2 + 135);
    v9 = (v7 - v8) >> 4;
    v10 = 954437177 * v9;
    if ( v7 == v8 )
      v10 = 1;
    v11 = v10 + 954437177 * v9;
    v12 = v11;
    if ( v11 > 0x1C71C71 )
      v12 = 29826161;
    if ( v11 < v10 )
    if ( v12 )
      if ( v12 >= 0x1C71C72 )
        sub_21E57F4();
      v13 = (char *)operator new(144 * v12);
      *(_QWORD *)(&v7 - 1) = *(_QWORD *)((char *)v2 + 540);
      v14 = v13;
    else
      v14 = 0;
    _aeabi_memcpy4(&v14[v7 - v8], &v17, 144);
    v15 = v14;
    if ( v8 != v7 )
      do
      {
        _aeabi_memcpy4(v15, v8, 144);
        v8 += 144;
        v15 += 144;
      }
      while ( v7 != v8 );
      v8 = (_BYTE *)*((_DWORD *)v2 + 135);
    if ( v8 )
      operator delete(v8);
    *((_DWORD *)v2 + 135) = v14;
    *((_DWORD *)v2 + 136) = v15 + 144;
    *((_DWORD *)v2 + 137) = &v14[144 * v12];
  else
    _aeabi_memcpy4(v7, &v17, 144);
    *((_DWORD *)v2 + 136) += 144;
  *((_BYTE *)v2 + 576) = 0;
LABEL_26:
  result = (RakNet *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall RakNetInstance::runEvents(RakNetInstance *this)
{
  RakNetInstance *v1; // r10@1
  int v2; // r9@1
  const NetworkIdentifier *v3; // r5@2
  int v4; // r11@2
  RakNet::BitStream *v5; // r6@2
  signed int v6; // r1@3
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@23
  signed int v12; // r1@25
  unsigned int v13; // r7@31
  int *v14; // r4@33
  int v15; // r7@36
  int *v16; // r4@37
  int v17; // r0@37
  int v18; // r1@37
  __int64 v19; // r2@37
  const NetworkIdentifier *v20; // r4@41
  int v21; // r5@41
  int v22; // r7@41
  __int64 v23; // r0@44
  void *v24; // r0@46
  int *v25; // r0@47
  unsigned int *v26; // r2@48
  signed int v27; // r1@50
  int v28; // r7@56
  void (__fastcall *v29)(int, char *, int *, _DWORD); // r5@56
  void *v30; // r0@56
  int v31; // r7@58
  const NetworkIdentifier *v32; // r8@58
  int v33; // r5@58
  void (__fastcall *v34)(int, const NetworkIdentifier *, int *, _DWORD); // r11@58
  void *v35; // r0@59
  int v36; // r0@77
  void *v37; // r0@78
  unsigned int *v38; // r2@87
  int v39; // r1@96
  int v40; // r2@96
  int v41; // r3@96
  signed int v42; // r7@96
  int *v43; // r0@96
  int *v44; // r6@96
  int v45; // t1@97
  RakNet *result; // r0@99
  int v47; // [sp+0h] [bp-478h]@96
  int v48; // [sp+4h] [bp-474h]@98
  int v49; // [sp+8h] [bp-470h]@98
  int v50; // [sp+Ch] [bp-46Ch]@98
  int v51; // [sp+10h] [bp-468h]@98
  int v52; // [sp+14h] [bp-464h]@98
  int v53; // [sp+18h] [bp-460h]@98
  int v54; // [sp+1Ch] [bp-45Ch]@98
  int v55; // [sp+20h] [bp-458h]@98
  int v56; // [sp+24h] [bp-454h]@98
  int v57; // [sp+28h] [bp-450h]@98
  int v58; // [sp+2Ch] [bp-44Ch]@98
  int v59; // [sp+30h] [bp-448h]@98
  int v60; // [sp+34h] [bp-444h]@98
  int v61; // [sp+38h] [bp-440h]@98
  int v62; // [sp+3Ch] [bp-43Ch]@98
  int v63; // [sp+40h] [bp-438h]@98
  int v64; // [sp+44h] [bp-434h]@98
  int v65; // [sp+48h] [bp-430h]@98
  int v66; // [sp+4Ch] [bp-42Ch]@98
  int v67; // [sp+50h] [bp-428h]@98
  int v68; // [sp+54h] [bp-424h]@98
  int v69; // [sp+58h] [bp-420h]@98
  int v70; // [sp+5Ch] [bp-41Ch]@98
  int v71; // [sp+60h] [bp-418h]@98
  int v72; // [sp+64h] [bp-414h]@98
  int v73; // [sp+68h] [bp-410h]@98
  int v74; // [sp+6Ch] [bp-40Ch]@98
  int v75; // [sp+70h] [bp-408h]@98
  int v76; // [sp+74h] [bp-404h]@98
  void *v77; // [sp+78h] [bp-400h]@96
  RakNetInstance *v78; // [sp+A4h] [bp-3D4h]@2
  unsigned __int8 *v79; // [sp+A8h] [bp-3D0h]@2
  int (**v80)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+ACh] [bp-3CCh]@2
  int *v81; // [sp+B0h] [bp-3C8h]@2
  int *v82; // [sp+B4h] [bp-3C4h]@2
  unsigned __int64 *v83; // [sp+B8h] [bp-3C0h]@2
  int *v84; // [sp+BCh] [bp-3BCh]@2
  int *v85; // [sp+C0h] [bp-3B8h]@2
  RakNetInstance *v86; // [sp+C4h] [bp-3B4h]@2
  RakNetInstance *v87; // [sp+C8h] [bp-3B0h]@2
  int *v88; // [sp+CCh] [bp-3ACh]@2
  int *v89; // [sp+D0h] [bp-3A8h]@2
  int *v90; // [sp+D4h] [bp-3A4h]@2
  char v91; // [sp+D8h] [bp-3A0h]@98
  char v92; // [sp+114h] [bp-364h]@98
  int *v93; // [sp+150h] [bp-328h]@37
  int *v94; // [sp+158h] [bp-320h]@37
  int v95; // [sp+160h] [bp-318h]@23
  int v96; // [sp+168h] [bp-310h]@33
  int v97; // [sp+170h] [bp-308h]@11
  int v98; // [sp+178h] [bp-300h]@59
  char v99; // [sp+17Fh] [bp-2F9h]@58
  int v100; // [sp+184h] [bp-2F4h]@7
  unsigned __int8 v101[4]; // [sp+188h] [bp-2F0h]@65
  unsigned __int8 v102; // [sp+18Fh] [bp-2E9h]@64
  unsigned __int8 v103[2]; // [sp+194h] [bp-2E4h]@2
  unsigned __int16 v104; // [sp+196h] [bp-2E2h]@75
  int v105; // [sp+198h] [bp-2E0h]@65
  __int16 v106; // [sp+214h] [bp-264h]@75
  char v107; // [sp+218h] [bp-260h]@2
  __int16 v108; // [sp+220h] [bp-258h]@52
  int v109; // [sp+228h] [bp-250h]@2
  char v110; // [sp+2B4h] [bp-1C4h]@2
  int v111; // [sp+2BCh] [bp-1BCh]@31
  char v112; // [sp+3C8h] [bp-B0h]@1
  int v113; // [sp+3CCh] [bp-ACh]@96
  int v114; // [sp+3D0h] [bp-A8h]@96
  int v115; // [sp+3D4h] [bp-A4h]@96
  RakNet *v116; // [sp+450h] [bp-28h]@1

  v1 = this;
  v116 = _stack_chk_guard;
  _aeabi_memcpy8(&v112, &unk_27EB270, 132);
  v2 = (*(int (**)(void))(**((_DWORD **)v1 + 56) + 96))();
  if ( v2 )
  {
    v3 = (const NetworkIdentifier *)&v107;
    v79 = (unsigned __int8 *)((unsigned int)v103 | 2);
    v81 = (int *)((char *)v1 + 632);
    v82 = (int *)((char *)v1 + 628);
    v83 = (unsigned __int64 *)((char *)v1 + 600);
    v84 = (int *)((char *)v1 + 596);
    v89 = &v109;
    v85 = (int *)((char *)v1 + 588);
    v88 = (int *)((char *)v1 + 584);
    v87 = (RakNetInstance *)((char *)v1 + 248);
    v86 = (RakNetInstance *)((char *)v1 + 232);
    v4 = (int)v1 + 388;
    v5 = (RakNet::BitStream *)&v110;
    v78 = (RakNetInstance *)((char *)v1 + 388);
    v90 = &dword_28898C0;
    v80 = &pthread_create;
    while ( 1 )
    {
      RakNet::BitStream::BitStream(v5, *(unsigned __int8 **)(v2 + 160), *(_DWORD *)(v2 + 152), 0);
      v13 = **(_BYTE **)(v2 + 160);
      v111 = 8;
      NetworkIdentifier::NetworkIdentifier((int)v3, v2 + 136);
      if ( v13 > 0x8D )
      {
        if ( v13 == 254 )
        {
          v15 = RakNetInstance::_getPeer(v1, v3);
          if ( v15 )
          {
            sub_21E91E0(
              (void **)&v94,
              (*(_QWORD *)(v2 + 156) >> 32) + 1,
              (((unsigned int)*(_QWORD *)(v2 + 156) + 7) >> 3) - 1);
            v16 = v90;
            v17 = (int)v94;
            v18 = (int)(v90 + 3);
            v93 = v94;
            v94 = v90 + 3;
            v19 = *(_QWORD *)(v15 + 168);
            if ( (_DWORD)v19 == HIDWORD(v19) )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)(v15 + 164),
                &v93);
              v18 = (int)v93;
            }
            else
              *(_DWORD *)v19 = v17;
              v93 = (int *)v18;
              *(_DWORD *)(v15 + 168) = v19 + 4;
            v24 = (void *)(v18 - 12);
            if ( (int *)(v18 - 12) != v16 )
              v38 = (unsigned int *)(v18 - 4);
              if ( v80 )
              {
                __dmb();
                do
                  v6 = __ldrex(v38);
                while ( __strex(v6 - 1, v38) );
              }
              else
                v6 = (*v38)--;
              if ( v6 <= 0 )
                j_j_j_j__ZdlPv_9(v24);
            v25 = v94 - 3;
            if ( v94 - 3 != v16 )
              v26 = (unsigned int *)(v94 - 1);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
LABEL_91:
                v27 = (*v26)--;
LABEL_92:
              if ( v27 <= 0 )
                j_j_j_j__ZdlPv_9(v25);
          }
        }
        goto LABEL_94;
      }
      switch ( v13 )
        case 0x15u:
        case 0x16u:
          sub_21E94B4((void **)&v96, (const char *)&unk_257BC67);
          v14 = v90;
          if ( *((_BYTE *)v1 + 578) )
            *((_BYTE *)v1 + 578) = 0;
          else
            sub_21E8190((void **)&v96, "disconnectionScreen.disconnected", (_BYTE *)0x20);
          (*(void (**)(void))(**((_DWORD **)v1 + 1) + 16))();
          RakNetInstance::_removePeer(v1, v3);
          v25 = (int *)(v96 - 12);
          if ( (int *)(v96 - 12) != v14 )
            v26 = (unsigned int *)(v96 - 4);
            if ( !v80 )
              goto LABEL_91;
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            goto LABEL_92;
          goto LABEL_94;
        case 0x10u:
          *(_QWORD *)v86 = *(_QWORD *)&v107;
          *((_WORD *)v1 + 120) = v108;
          _aeabi_memcpy8(v87, v89, 132);
          RakNetInstance::_createPeer(v1, v3);
          (*(void (**)(void))(**((_DWORD **)v1 + 1) + 12))();
        case 0x11u:
          *((_WORD *)v1 + 290) = word_27EB328;
          EntityInteraction::setInteractText(v88, (int *)&unk_27EB32C);
          EntityInteraction::setInteractText(v85, (int *)&unk_27EB330);
          *((_DWORD *)v1 + 148) = dword_27EB334;
          EntityInteraction::setInteractText(v84, (int *)&unk_27EB338);
          std::_Hashtable<std::string,std::string,std::allocator<std::string>,std::__detail::_Identity,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,true,true>>::operator=(
            v83,
            (int)&unk_27EB33C);
          EntityInteraction::setInteractText(v82, (int *)&unk_27EB358);
          EntityInteraction::setInteractText(v81, (int *)&unk_27EB35C);
          *((_BYTE *)v1 + 636) = byte_27EB360;
          if ( *((_WORD *)v1 + 80) == 0xFFFF )
            (*(void (**)(void))(**((_DWORD **)v1 + 1) + 20))();
            *((_BYTE *)v1 + 220) = 1;
        case 0x13u:
          (*(void (**)(void))(**((_DWORD **)v1 + 1) + 8))();
        case 0x14u:
          v28 = *((_DWORD *)v1 + 1);
          v29 = *(void (__fastcall **)(int, char *, int *, _DWORD))(*(_DWORD *)v28 + 16);
          sub_21E94B4((void **)&v100, "disconnectionScreen.serverFull");
          v29(v28, &v107, &v100, 0);
          v30 = (void *)(v100 - 12);
          if ( (int *)(v100 - 12) != v90 )
            v7 = (unsigned int *)(v100 - 4);
            if ( v80 )
              __dmb();
              do
                v8 = __ldrex(v7);
              while ( __strex(v8 - 1, v7) );
              v8 = (*v7)--;
            if ( v8 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
          v3 = (const NetworkIdentifier *)&v107;
          RakNetInstance::_removePeer(v1, (const NetworkIdentifier *)&v107);
          v5 = (RakNet::BitStream *)&v110;
        case 0x19u:
          v99 = 0;
          RakNet::BitStream::Read(v5, &v99, 1u);
          v31 = *((_DWORD *)v1 + 1);
          v32 = v3;
          v33 = v4;
          v34 = *(void (__fastcall **)(int, const NetworkIdentifier *, int *, _DWORD))(*(_DWORD *)v31 + 16);
          if ( (unsigned __int8)v99 < 9u )
            sub_21E94B4((void **)&v97, "disconnectionScreen.outdatedServer");
            v34(v31, v32, &v97, 0);
            v4 = v33;
            v35 = (void *)(v97 - 12);
            if ( (int *)(v97 - 12) != v90 )
              v9 = (unsigned int *)(v97 - 4);
                  v10 = __ldrex(v9);
                while ( __strex(v10 - 1, v9) );
LABEL_20:
                if ( v10 <= 0 )
                  j_j_j_j__ZdlPv_9(v35);
                goto LABEL_73;
LABEL_19:
              v10 = (*v9)--;
              goto LABEL_20;
            sub_21E94B4((void **)&v98, "disconnectionScreen.outdatedClient");
            v34(v31, v32, &v98, 0);
            v35 = (void *)(v98 - 12);
            if ( (int *)(v98 - 12) != v90 )
              v9 = (unsigned int *)(v98 - 4);
                goto LABEL_20;
              goto LABEL_19;
LABEL_73:
          v3 = v32;
          RakNetInstance::_removePeer(v1, v32);
LABEL_94:
          (*(void (**)(void))(**((_DWORD **)v1 + 56) + 100))();
          RakNet::BitStream::~BitStream(v5);
          v2 = (*(int (**)(void))(**((_DWORD **)v1 + 56) + 96))();
          if ( !v2 )
            goto LABEL_95;
          break;
        case 0x12u:
        case 0x17u:
        case 0x18u:
        default:
          if ( v13 == 134 )
            RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)v103);
            RakNet::BitStream::ReadBits(v5, &v102, 8u, 1);
            if ( v102 == 4 )
              *(_WORD *)v103 = 2;
              RakNet::BitStream::ReadBits(v5, v101, 0x20u, 1);
              v105 = ~*(_DWORD *)v101;
              RakNet::BitStream::ReadBits(v5, v79, 0x10u, 1);
              RakNet::BitStream::ReadBits(v5, v103, 0xE0u, 1);
            v106 = __rev(v104) >> 16;
            if ( RakNet::SystemAddress::operator!=((int)v103, v4) == 1 )
              RakNet::SystemAddress::operator=(v4, (int)v103);
              *((_BYTE *)v1 + 385) = 1;
              RakNet::SystemAddress::ToString((RakNet::SystemAddress *)v103, 1, 124);
            *((_BYTE *)v1 + 384) = 1;
            *((_BYTE *)v1 + 386) = 1;
            v36 = RakNet::GetTimeMS((RakNet *)1);
            *((_DWORD *)v1 + 133) = v36;
            if ( *((_DWORD *)v1 + 134) == 2 )
              *((_BYTE *)v1 + 576) = *((_BYTE *)v1 + 579);
              *((_DWORD *)v1 + 132) = v36;
              RakNet::SystemAddress::GetPort((RakNet::SystemAddress *)v103);
              sub_21E94B4((void **)&v95, (const char *)&unk_257BC67);
              RakNetInstance::_changeNatState((int)v1, (void *)3);
              v37 = (void *)(v95 - 12);
              if ( (int *)(v95 - 12) != v90 )
                v11 = (unsigned int *)(v95 - 4);
                if ( v80 )
                {
                  __dmb();
                  do
                    v12 = __ldrex(v11);
                  while ( __strex(v12 - 1, v11) );
                }
                else
                  v12 = (*v11)--;
                if ( v12 <= 0 )
                  j_j_j_j__ZdlPv_9(v37);
              v4 = (int)v78;
              v3 = (const NetworkIdentifier *)&v107;
          else if ( v13 == 136 )
            v20 = v3;
            v21 = *(_QWORD *)((char *)v1 + 540) >> 32;
            v22 = *(_QWORD *)((char *)v1 + 540);
            if ( v22 == v21 )
LABEL_44:
              LODWORD(v23) = 1;
              while ( RakNet::SystemAddress::operator==(v22, v2) != 1 )
                v22 += 144;
                if ( v21 == v22 )
                  goto LABEL_44;
              *(_BYTE *)(v22 + 140) = 1;
              LODWORD(v23) = 0;
            v3 = v20;
            if ( !*((_BYTE *)v1 + 577) )
              HIDWORD(v23) = *((_BYTE *)v1 + 578);
              if ( *((_BYTE *)v1 + 578) )
                HIDWORD(v23) = 1;
              if ( !v23 )
                RakNet::SystemAddress::operator=((int)&v112, v2);
    }
  }
LABEL_95:
  if ( RakNet::SystemAddress::operator!=((int)&v112, (int)&unk_27EB270) == 1 )
    v39 = *(_DWORD *)&v112;
    v40 = v113;
    v41 = v114;
    v42 = 120;
    v77 = &unk_27EB2F4;
    v43 = &v115;
    v44 = &v47;
    do
      v45 = *v43;
      ++v43;
      v42 -= 4;
      *v44 = v45;
      ++v44;
    while ( v42 );
    Social::GameConnectionInfo::GameConnectionInfo(
      (int)&v92,
      v39,
      v40,
      v41,
      v47,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74,
      v75,
      v76,
      (int)v77);
      (Social::GameConnectionInfo *)&v91,
      (const Social::GameConnectionInfo *)&word_27EB328);
    RakNetInstance::connect((int)v1, &v92, (int)&v91);
    Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v91);
    Social::GameConnectionInfo::~GameConnectionInfo((Social::GameConnectionInfo *)&v92);
    RakNet::SystemAddress::operator=((int)&v112, (int)&unk_27EB270);
  result = (RakNet *)(_stack_chk_guard - v116);
  if ( _stack_chk_guard != v116 )
    _stack_chk_fail(result);
  return result;
}


void *__fastcall RakNetInstance::_changeNatState(int a1, void *a2)
{
  int v2; // r5@1
  void *result; // r0@1
  void *v4; // r4@1
  int v5; // r9@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // r10@20
  void (__fastcall *v11)(int, int *, int *, _DWORD); // r6@20
  void *v12; // r0@20
  void *v13; // r0@21
  int i; // [sp+10h] [bp-50h]@2
  int v15; // [sp+20h] [bp-40h]@4
  int v16; // [sp+28h] [bp-38h]@8

  v2 = a1;
  result = *(void **)(a1 + 536);
  v4 = a2;
  if ( result != a2 )
  {
    v5 = *(_QWORD *)(v2 + 652);
    for ( i = *(_QWORD *)(v2 + 652) >> 32; v5 != i; v5 += 4 )
    {
      v10 = *(_DWORD *)v5;
      v11 = *(void (__fastcall **)(int, int *, int *, _DWORD))(**(_DWORD **)v5 + 8);
      sub_21E94B4((void **)&v16, "NAT");
      sub_21E94B4((void **)&v15, "NAT");
      v11(v10, &v16, &v15, *(_DWORD *)(v2 + 536));
      v12 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v6 = (unsigned int *)(v15 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v13 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v16 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
    }
    *(_DWORD *)(v2 + 536) = v4;
    result = &Social::Events::eventSequenceNumber;
    ++Social::Events::eventSequenceNumber;
  }
  return result;
}


int __fastcall RakNetInstance::RakNetNetworkPeer::RakNetNetworkPeer(__int64 this, const NetworkIdentifier *a2)
{
  int v2; // r7@1
  _DWORD *v3; // r4@1
  int v4; // r6@1
  int v5; // r0@1
  int v6; // r5@1
  _BYTE *v7; // r1@3
  _BYTE *v8; // r0@5

  v2 = this;
  LODWORD(this) = &off_26E9DD4;
  *(_QWORD *)v2 = this;
  _aeabi_memcpy8(v2 + 8, a2, 152);
  *(_DWORD *)(v2 + 160) = &unk_28898CC;
  v3 = (_DWORD *)(v2 + 160);
  *(_DWORD *)(v2 + 164) = 0;
  v4 = v2 + 164;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  v5 = dword_28898C0;
  v6 = dword_28898C0 + 1;
  if ( (unsigned int)(dword_28898C0 + 1) <= unk_28898C4 && (signed int)dword_28898C8 < 1 )
  {
    v7 = &unk_28898CC;
  }
  else
    sub_21E6FCC((const void **)(v2 + 160), dword_28898C0 + 1);
    v7 = (_BYTE *)*v3;
    v5 = *(_DWORD *)(*v3 - 12);
  v7[v5] = -2;
  v8 = (_BYTE *)*v3;
  if ( (int *)(*v3 - 12) != &dword_28898C0 )
    *((_DWORD *)v8 - 1) = 0;
    *((_DWORD *)v8 - 3) = v6;
    v8[v6] = byte_26C67B8[0];
  return v2;
}


int __fastcall RakNetInstance::_getPeer(RakNetInstance *this, const NetworkIdentifier *a2)
{
  RakNetInstance *v2; // r9@1
  const NetworkIdentifier *v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r0@3
  int v9; // r7@4
  int v10; // r1@6
  int v11; // r1@9
  int v12; // r1@12
  int v13; // r0@16
  const NetworkIdentifier *v14; // r4@18
  int result; // r0@32

  v2 = this;
  v3 = a2;
  v5 = *((_QWORD *)this + 80) >> 32;
  v4 = *((_QWORD *)this + 80);
  v6 = (v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_15:
    if ( 1 == (v5 - v4) >> 2 )
    {
      v14 = (const NetworkIdentifier *)((char *)v3 + 144);
      v9 = v4;
    }
    else
      v13 = (v5 - v4) >> 2;
      if ( v13 == 3 )
      {
        v14 = (const NetworkIdentifier *)((char *)v3 + 144);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 152) == *((_DWORD *)v3 + 36) )
        {
          v9 = v4;
          if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v4 + 8), v3) )
            goto LABEL_31;
        }
        v9 = v4 + 4;
      }
      else
        if ( v13 != 2 )
          goto LABEL_30;
        v9 = v4;
      if ( *(_DWORD *)(*(_DWORD *)v9 + 152) == *(_DWORD *)v14
        && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v9 + 8), v3) )
        goto LABEL_31;
      v9 += 4;
    if ( *(_DWORD *)(*(_DWORD *)v9 + 152) == *(_DWORD *)v14 )
      if ( !NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v9 + 8), v3) )
        v9 = v5;
      goto LABEL_31;
LABEL_30:
    v9 = v5;
    goto LABEL_31;
  }
  v7 = v6 + 1;
  while ( 1 )
    v8 = *((_DWORD *)v3 + 36);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v4 + 8), v3) )
        break;
      v8 = *((_DWORD *)v3 + 36);
    v9 = v4 + 4;
    v10 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v10 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v10 + 8), v3) )
    v9 = v4 + 8;
    v11 = *(_DWORD *)(v4 + 8);
    if ( *(_DWORD *)(v11 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v11 + 8), v3) )
    v9 = v4 + 12;
    v12 = *(_DWORD *)(v4 + 12);
    if ( *(_DWORD *)(v12 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v12 + 8), v3) )
    --v7;
    v4 += 16;
    if ( v7 <= 1 )
      goto LABEL_15;
LABEL_31:
  if ( v9 == *((_DWORD *)v2 + 161) )
    result = 0;
  else
    result = *(_DWORD *)v9;
  return result;
}


int __fastcall RakNetInstance::getLocalIps(RakNetInstance *this, int a2)
{
  RakNetInstance *v2; // r10@1
  int v3; // r5@1
  int result; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  int v9; // r9@19
  const char *v10; // r0@19
  int v11; // r11@20
  void *v12; // r0@20
  __int64 v13; // r0@22
  void *v14; // r0@25
  int v15; // [sp+4h] [bp-44h]@7
  int v16; // [sp+Ch] [bp-3Ch]@3

  v2 = this;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  v3 = a2;
  *((_DWORD *)this + 2) = 0;
  result = (*(int (**)(void))(**(_DWORD **)(a2 + 224) + 252))();
  if ( result >= 0 )
  {
    do
    {
      v9 = result;
      v10 = (const char *)(*(int (**)(void))(**(_DWORD **)(v3 + 224) + 256))();
      sub_21E94B4((void **)&v16, v10);
      if ( sub_21E7D6C((const void **)&v16, "UNASSIGNED_SYSTEM_ADDRESS") )
      {
        sub_21E9040((void **)&v15, &v16, 0, 3u);
        v11 = sub_21E7D6C((const void **)&v15, "169");
        v12 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v15 - 4);
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
            j_j_j_j__ZdlPv_9(v12);
        }
        if ( v11 )
          v13 = *(_QWORD *)((char *)v2 + 4);
          if ( (_DWORD)v13 == HIDWORD(v13) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)v2,
              &v16);
            *((_DWORD *)v2 + 1) = sub_21E8AF4((int *)v13, &v16) + 1;
      }
      v14 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
      result = v9 - 1;
    }
    while ( v9 > 0 );
  }
  return result;
}


RakNet *__fastcall RakNetInstance::RakNetNetworkPeer::update(RakNetInstance::RakNetNetworkPeer *this)
{
  RakNetInstance::RakNetNetworkPeer *v1; // r10@1
  int v2; // r7@1
  void (__fastcall *v3)(char *); // r6@1
  int v4; // r6@1
  int (__fastcall *v5)(int, char *); // r9@1
  RakNet::SystemAddress *v6; // r0@1
  int v7; // r6@1
  int (__fastcall *v8)(int, char *); // r9@1
  RakNet::SystemAddress *v9; // r0@1
  int v10; // r0@1
  int *v11; // r6@1
  signed int v12; // r5@1
  int (__cdecl *v13)(int, int); // r12@1
  int v14; // r1@1
  int *v15; // r7@1
  int v16; // t1@2
  int v17; // r0@3
  int v24; // r1@4
  int v25; // r0@4
  int v26; // r1@4
  RakNet *result; // r0@8
  int v31; // [sp+0h] [bp-338h]@1
  int v32; // [sp+4h] [bp-334h]@1
  char *v33; // [sp+78h] [bp-2C0h]@1
  char v34; // [sp+80h] [bp-2B8h]@1
  char v35; // [sp+160h] [bp-1D8h]@1
  __int16 v36; // [sp+168h] [bp-1D0h]@1
  int v37; // [sp+170h] [bp-1C8h]@1
  char v38; // [sp+1F8h] [bp-140h]@1
  __int16 v39; // [sp+200h] [bp-138h]@1
  int v40; // [sp+208h] [bp-130h]@1
  char v41; // [sp+290h] [bp-A8h]@1
  int v42; // [sp+29Ch] [bp-9Ch]@1
  RakNet *v43; // [sp+314h] [bp-24h]@1

  v1 = this;
  v43 = _stack_chk_guard;
  v2 = *((_QWORD *)this + 2) >> 32;
  v3 = *(void (__fastcall **)(char *))(**((_DWORD **)this + 1) + 224);
  v31 = *((_QWORD *)this + 2);
  v32 = v2;
  v3(&v41);
  v4 = *((_DWORD *)v1 + 1);
  v5 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v4 + 172);
  RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v38);
  v6 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v40);
  *(_QWORD *)&v38 = unk_27EB260;
  v39 = word_27EB268;
  RakNet::SystemAddress::operator=((int)v6, (int)&v41);
  *((_DWORD *)v1 + 45) = v5(v4, &v38);
  v7 = *((_DWORD *)v1 + 1);
  v8 = *(int (__fastcall **)(int, char *))(*(_DWORD *)v7 + 168);
  RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v35);
  v9 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v37);
  *(_QWORD *)&v35 = unk_27EB260;
  v36 = word_27EB268;
  RakNet::SystemAddress::operator=((int)v9, (int)&v41);
  *((_DWORD *)v1 + 46) = v8(v7, &v35);
  v10 = *((_DWORD *)v1 + 1);
  v11 = &v42;
  v12 = 120;
  v13 = *(int (__cdecl **)(int, int))(*(_DWORD *)v10 + 344);
  v14 = *(_DWORD *)&v41;
  v33 = &v34;
  v15 = &v31;
  do
  {
    v16 = *v11;
    ++v11;
    v12 -= 4;
    *v15 = v16;
    ++v15;
  }
  while ( v12 );
  v17 = v13(v10, v14);
  if ( v17 )
    _R1 = v17 + 168;
    __asm
    {
      VLDMIA          R1, {D0-D3}
      VADD.F64        D0, D1, D0
      VADD.F64        D0, D0, D2
      VADD.F64        D0, D0, D3
      VCVTR.S32.F64   S0, D0
    }
    v24 = *(_DWORD *)(v17 + 40);
    v25 = *((_DWORD *)v1 + 44);
    v26 = 8 * v24;
    if ( v26 >= v25 )
      v25 = v26;
    *((_DWORD *)v1 + 44) = v25;
    __asm { VMOV            R2, S0 }
    if ( _R2 >= 1 )
      _R1 = v26 - v25;
      __asm
      {
        VLDR            S2, =0.01
        VMOV            S0, R1
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R1, S0
      }
      *((_DWORD *)v1 + 44) = v25 + _R1;
  result = (RakNet *)(_stack_chk_guard - v43);
  if ( _stack_chk_guard != v43 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall RakNetInstance::_removePeer(RakNetInstance *this, const NetworkIdentifier *a2)
{
  RakNetInstance *v2; // r9@1
  const NetworkIdentifier *v3; // r5@1
  int v4; // r6@1
  int v5; // r8@1
  int v6; // r0@1
  int v7; // r4@2
  int v8; // r0@3
  int v9; // r7@4
  int v10; // r1@6
  int v11; // r1@9
  int v12; // r1@12
  int v13; // r0@16
  const NetworkIdentifier *v14; // r4@18
  int result; // r0@31
  signed int v16; // r1@33
  int v17; // r4@34
  int v18; // r1@35
  int v19; // r0@35
  _DWORD *v20; // r4@39
  int v21; // r0@39

  v2 = this;
  v3 = a2;
  v5 = *((_QWORD *)this + 80) >> 32;
  v4 = *((_QWORD *)this + 80);
  v6 = (v5 - v4) >> 4;
  if ( v6 < 1 )
  {
LABEL_15:
    if ( 1 == (v5 - v4) >> 2 )
    {
      v14 = (const NetworkIdentifier *)((char *)v3 + 144);
      v9 = v4;
    }
    else
      v13 = (v5 - v4) >> 2;
      if ( v13 == 3 )
      {
        v14 = (const NetworkIdentifier *)((char *)v3 + 144);
        if ( *(_DWORD *)(*(_DWORD *)v4 + 152) == *((_DWORD *)v3 + 36) )
        {
          v9 = v4;
          if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v4 + 8), v3) )
            goto LABEL_31;
        }
        v9 = v4 + 4;
      }
      else
        if ( v13 != 2 )
          goto LABEL_30;
        v9 = v4;
      if ( *(_DWORD *)(*(_DWORD *)v9 + 152) == *(_DWORD *)v14
        && NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v9 + 8), v3) )
        goto LABEL_31;
      v9 += 4;
    if ( *(_DWORD *)(*(_DWORD *)v9 + 152) == *(_DWORD *)v14 )
      if ( !NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v9 + 8), v3) )
        v9 = v5;
      goto LABEL_31;
LABEL_30:
    v9 = v5;
    goto LABEL_31;
  }
  v7 = v6 + 1;
  while ( 1 )
    v8 = *((_DWORD *)v3 + 36);
    if ( *(_DWORD *)(*(_DWORD *)v4 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(*(_DWORD *)v4 + 8), v3) )
        break;
      v8 = *((_DWORD *)v3 + 36);
    v9 = v4 + 4;
    v10 = *(_DWORD *)(v4 + 4);
    if ( *(_DWORD *)(v10 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v10 + 8), v3) )
    v9 = v4 + 8;
    v11 = *(_DWORD *)(v4 + 8);
    if ( *(_DWORD *)(v11 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v11 + 8), v3) )
    v9 = v4 + 12;
    v12 = *(_DWORD *)(v4 + 12);
    if ( *(_DWORD *)(v12 + 152) == v8 )
      if ( NetworkIdentifier::equalsTypeData((NetworkIdentifier *)(v12 + 8), v3) )
    --v7;
    v4 += 16;
    if ( v7 <= 1 )
      goto LABEL_15;
LABEL_31:
  result = *((_DWORD *)v2 + 161);
  if ( v9 != result )
    if ( v9 + 4 != result )
      v16 = result - (v9 + 4);
      if ( v16 >= 1 )
        v17 = (v16 >> 2) + 1;
        do
          v18 = *(_DWORD *)(v9 + 4);
          *(_DWORD *)(v9 + 4) = 0;
          v19 = *(_DWORD *)v9;
          *(_DWORD *)v9 = v18;
          if ( v19 )
            (*(void (**)(void))(*(_DWORD *)v19 + 4))();
          --v17;
          v9 += 4;
        while ( v17 > 1 );
        result = *((_DWORD *)v2 + 161);
    v20 = (_DWORD *)(result - 4);
    *((_DWORD *)v2 + 161) = result - 4;
    v21 = *(_DWORD *)(result - 4);
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
    result = 0;
    *v20 = 0;
  return result;
}


int __fastcall RakNetInstance::onAppSuspended(int result)
{
  *(_BYTE *)(result + 664) = *(_BYTE *)(result + 577);
  return result;
}


const char *__fastcall RakNetInstance::_stateToString(int a1, unsigned int a2)
{
  const char *result; // r0@2

  if ( a2 > 6 )
    result = "UNKNOWN";
  else
    result = off_26E9DF0[a2];
  return result;
}


void __fastcall RakNetInstance::RakNetNetworkPeer::~RakNetNetworkPeer(RakNetInstance::RakNetNetworkPeer *this)
{
  RakNetInstance::RakNetNetworkPeer *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11
  int v7; // r1@16
  void *v8; // r0@16
  unsigned int *v9; // r2@18
  signed int v10; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26E9DD4;
  v3 = (void *)(*(_QWORD *)((char *)this + 164) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 164);
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
    v2 = (void *)*((_DWORD *)v1 + 41);
  }
  if ( v2 )
    operator delete(v2);
  v7 = *((_DWORD *)v1 + 40);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  operator delete((void *)v1);
}


RakNet *__fastcall RakNetInstance::RakNetNetworkPeer::sendPacket(int a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r5@1
  const char **v4; // r7@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  char *v7; // r4@1
  size_t v8; // r1@1
  int v9; // r4@5
  int v10; // r9@5
  void (__fastcall *v11)(int, int, int, signed int); // r10@5
  int v12; // r11@5
  int v13; // r7@6
  RakNet::SystemAddress *v14; // r0@7
  RakNet *result; // r0@7
  char v16; // [sp+18h] [bp-C0h]@7
  __int16 v17; // [sp+20h] [bp-B8h]@7
  int v18; // [sp+28h] [bp-B0h]@7
  RakNet *v19; // [sp+B0h] [bp-28h]@1

  v3 = a1;
  v4 = (const char **)a2;
  v5 = a3;
  v19 = _stack_chk_guard;
  v7 = (char *)(a1 + 160);
  v6 = *(_DWORD *)(a1 + 160);
  v8 = *(_DWORD *)(*a2 - 12) + 1;
  if ( *(_DWORD *)(v6 - 12) < v8 )
  {
    sub_21E849C(v7, v8, 0);
    v6 = *(_DWORD *)v7;
  }
  if ( *(_DWORD *)(v6 - 4) >= 0 )
    sub_21E8010((const void **)v7);
  _aeabi_memcpy(v6 + 1, *v4, *((_DWORD *)*v4 - 3));
  v9 = *(_DWORD *)(v3 + 4);
  v10 = *(_DWORD *)(v3 + 160);
  v11 = *(void (__fastcall **)(int, int, int, signed int))(*(_DWORD *)v9 + 80);
  v12 = *((_DWORD *)*v4 - 3) + 1;
  if ( v5 <= 3 )
    v13 = dword_26109BC[v5];
  RakNet::RakNetGUID::RakNetGUID((RakNet::RakNetGUID *)&v16);
  v14 = RakNet::SystemAddress::SystemAddress((RakNet::SystemAddress *)&v18);
  *(_QWORD *)&v16 = *(_QWORD *)(v3 + 8);
  v17 = *(_WORD *)(v3 + 16);
  RakNet::SystemAddress::operator=((int)v14, (int)&unk_27EB270);
  v11(v9, v10, v12, 2);
  result = (RakNet *)(_stack_chk_guard - v19);
  if ( _stack_chk_guard != v19 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall RakNetInstance::RakNetNetworkPeer::receivePacket(int a1, int *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  int v4; // r0@2
  int v5; // r2@2
  int v6; // r1@2
  signed int v7; // r3@3
  int v8; // r6@4
  int v9; // r5@5
  int v10; // r1@7
  void *v11; // r0@7
  signed int result; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 164);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = 1;
  }
  else
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a2, (int *)v3);
    v5 = *(_QWORD *)(v2 + 164) >> 32;
    v4 = *(_QWORD *)(v2 + 164);
    v6 = v4 + 4;
    if ( v4 + 4 != v5 )
    {
      v7 = v5 - v6;
      v6 = *(_QWORD *)(v2 + 164) >> 32;
      if ( v7 >= 1 )
      {
        v8 = (v7 >> 2) + 1;
        do
        {
          v9 = v4 + 4;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v4,
            (int *)(v4 + 4));
          --v8;
          v4 = v9;
        }
        while ( v8 > 1 );
        v6 = *(_DWORD *)(v2 + 168);
      }
    }
    *(_DWORD *)(v2 + 168) = v6 - 4;
    v10 = *(_DWORD *)(v6 - 4);
    v11 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
        __dmb();
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    result = 0;
  return result;
}


signed int __fastcall RakNetInstance::disconnect(RakNetInstance *this)
{
  RakNetInstance *v1; // r4@1
  __int64 v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // r5@11
  int v6; // r6@11
  int v7; // r9@11
  void (__fastcall *v8)(int, int, int *, signed int); // r8@11
  void *v9; // r0@11
  int v10; // r5@13
  int v11; // r6@14
  int v12; // r7@14
  int v13; // r0@15
  signed int result; // r0@19
  int v15; // [sp+8h] [bp-30h]@3

  v1 = this;
  v2 = *((_QWORD *)this + 80);
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v5 = *((_DWORD *)v1 + 1);
      v6 = v2;
      v7 = *(_DWORD *)v2;
      v8 = *(void (__fastcall **)(int, int, int *, signed int))(*(_DWORD *)v5 + 16);
      sub_21E94B4((void **)&v15, "Disconnected");
      v8(v5, v7 + 8, &v15, 1);
      v9 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v3 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v4 = __ldrex(v3);
          while ( __strex(v4 - 1, v3) );
        }
        else
          v4 = (*v3)--;
        if ( v4 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
      LODWORD(v2) = v6 + 4;
    }
    while ( v6 + 4 != *((_DWORD *)v1 + 161) );
    v10 = *((_DWORD *)v1 + 160);
    if ( (_DWORD)v2 != v10 )
      v11 = v6 - v10 + 4;
      v12 = 0;
      do
        v13 = *(_DWORD *)(v10 + v12);
        if ( v13 )
          (*(void (**)(void))(*(_DWORD *)v13 + 4))();
        *(_DWORD *)(v10 + v12) = 0;
        v12 += 4;
      while ( v11 != v12 );
    LODWORD(v2) = v10;
  }
  *((_DWORD *)v1 + 161) = v2;
  (*(void (**)(void))(**((_DWORD **)v1 + 56) + 32))();
  (*(void (**)(void))(**((_DWORD **)v1 + 56) + 60))();
  result = 256;
  *(_WORD *)((char *)v1 + 577) = 256;
  return result;
}


void __fastcall RakNetInstance::_storeLocalIP(RakNetInstance *this)
{
  RakNetInstance *v1; // r5@1
  int *v2; // r4@1
  char *v3; // r0@4
  char *v4; // r2@4
  int v5; // r6@5
  int v6; // r5@5
  char *v7; // r0@11
  char *v8; // r5@11
  _BYTE *v9; // r0@11
  int *v10; // r4@14
  int *v11; // r6@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  int *v14; // r0@24
  void *ptr; // [sp+4h] [bp-3Ch]@4
  char *v16; // [sp+8h] [bp-38h]@4
  int *v17; // [sp+10h] [bp-30h]@1
  int *v18; // [sp+14h] [bp-2Ch]@1

  v1 = this;
  v2 = (int *)((char *)this + 676);
  EntityInteraction::setInteractText((int *)this + 169, (int *)&Util::EMPTY_STRING);
  (*(void (__fastcall **)(int **, RakNetInstance *))(*(_DWORD *)v1 + 16))(&v17, v1);
  if ( v17 != v18 )
    EntityInteraction::setInteractText(v2, v17);
  if ( !*(_DWORD *)(*v2 - 12) )
  {
    (*(void (__fastcall **)(void **, RakNetInstance *))(*(_DWORD *)v1 + 28))(&ptr, v1);
    v3 = v16;
    v4 = (char *)ptr;
    if ( v16 == ptr )
    {
LABEL_8:
      v6 = 0;
    }
    else
      v5 = 0;
      while ( RakNet::SystemAddress::GetIPVersion((RakNet::SystemAddress *)&v4[v5]) != 4 )
      {
        v3 = v16;
        v4 = (char *)ptr;
        v5 += 132;
        if ( ++v6 >= (unsigned int)(1041204193 * ((v16 - (_BYTE *)ptr) >> 2)) )
          goto LABEL_8;
      }
      v3 = v16;
      v4 = (char *)ptr;
    if ( v4 != v3 )
      v7 = RakNet::SystemAddress::ToString((RakNet::SystemAddress *)&v4[132 * v6], 0, 124);
      v8 = v7;
      v9 = (_BYTE *)strlen(v7);
      sub_21E8190((void **)v2, v8, v9);
      v3 = (char *)ptr;
    if ( v3 )
      operator delete(v3);
  }
  v11 = v18;
  v10 = v17;
    do
      v14 = (int *)(*v10 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*v10 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      ++v10;
    while ( v10 != v11 );
    v10 = v17;
  if ( v10 )
    operator delete(v10);
}


int __fastcall RakNetInstance::onAppResumed(int result)
{
  unsigned int v1; // r1@1

  v1 = *(_DWORD *)(result + 664);
  if ( (_BYTE)v1 )
  {
    if ( !*(_BYTE *)(result + 577) )
      result = j_j_j__ZN14RakNetInstance4hostEiii(
                 (RakNetInstance *)result,
                 v1 >> 16,
                 *(_WORD *)(result + 668),
                 *(_DWORD *)(result + 672));
  }
  return result;
}


signed int __fastcall RakNetInstance::natPongReceived(RakNetInstance *this, const RakNet::SystemAddress *a2)
{
  int v2; // r4@1
  int v3; // r6@1
  const RakNet::SystemAddress *v4; // r5@1
  signed int result; // r0@4

  v3 = *(_QWORD *)((char *)this + 540) >> 32;
  v2 = *(_QWORD *)((char *)this + 540);
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( RakNet::SystemAddress::operator==(v2, (int)v4) != 1 )
    {
      v2 += 144;
      if ( v3 == v2 )
        goto LABEL_4;
    }
    result = 1;
    *(_BYTE *)(v2 + 140) = 1;
  return result;
}
