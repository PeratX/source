

unsigned int __fastcall LevelArchiver::_importVanillaLevel(int a1, int a2, int *a3, int a4)
{
  int v4; // r8@1
  int v5; // r4@1
  int v6; // r11@1
  int *v7; // r6@1
  int v8; // r5@1
  unsigned int v9; // r1@2
  unsigned int *v10; // r0@2
  unsigned int v11; // r2@5
  unsigned int v12; // r3@6
  int v13; // r9@9
  unsigned int *v14; // r7@9
  unsigned int v15; // r1@13
  unsigned int v16; // r1@17
  unsigned int v17; // r0@23
  int v18; // r10@28
  unsigned int v19; // r0@30
  unsigned int *v20; // r0@34
  unsigned int v21; // r1@36
  _DWORD *v22; // r0@39
  int v23; // r6@39
  int v24; // r0@39
  unsigned int *v25; // r0@40
  unsigned int v26; // r1@42
  int v27; // r0@45
  __int64 v28; // r1@45
  unsigned int v29; // r0@47
  unsigned int *v30; // r0@51
  unsigned int v31; // r1@53
  void (__fastcall *v32)(int *, int, signed int); // r3@56
  unsigned int *v33; // r0@59
  unsigned int v34; // r1@61
  void *v35; // r0@64
  unsigned int *v36; // r1@64
  unsigned int v37; // r2@67
  __int64 v38; // kr00_8@70
  void (__fastcall *v39)(_DWORD, _DWORD, _DWORD); // r2@70
  int v40; // r2@70
  int v41; // r1@70
  int v42; // r5@72
  unsigned int *v43; // r1@73
  unsigned int v44; // r0@75
  unsigned int *v45; // r4@79
  unsigned int v46; // r0@81
  unsigned int *v53; // r2@103
  unsigned int v54; // r1@105
  void *v55; // r0@112
  int v56; // r5@113
  unsigned int *v57; // r1@114
  unsigned int v58; // r0@116
  unsigned int *v59; // r4@120
  unsigned int v60; // r0@122
  int v61; // r0@127
  unsigned int *v62; // r2@128
  unsigned int v63; // r1@130
  unsigned int result; // r0@137
  int v65; // r4@142
  unsigned int *v66; // r1@143
  unsigned int *v67; // r5@149
  int v68; // r4@156
  unsigned int *v69; // r1@157
  unsigned int *v70; // r5@163
  unsigned int *v71; // r2@171
  signed int v72; // r1@173
  int v73; // [sp+4h] [bp-9Ch]@48
  int v74; // [sp+Ch] [bp-94h]@45
  int v75; // [sp+10h] [bp-90h]@50
  int v76; // [sp+14h] [bp-8Ch]@50
  int v77; // [sp+18h] [bp-88h]@57
  void (__fastcall *v78)(_DWORD, _DWORD, _DWORD); // [sp+20h] [bp-80h]@56
  unsigned int *v79; // [sp+24h] [bp-7Ch]@57
  int v80; // [sp+28h] [bp-78h]@58
  int v81; // [sp+2Ch] [bp-74h]@58
  void *v82; // [sp+30h] [bp-70h]@70
  void (*v83)(void); // [sp+38h] [bp-68h]@64
  int (__fastcall *v84)(int); // [sp+3Ch] [bp-64h]@70
  int v85; // [sp+40h] [bp-60h]@28
  int v86; // [sp+44h] [bp-5Ch]@28
  int v87; // [sp+48h] [bp-58h]@33
  int v88; // [sp+4Ch] [bp-54h]@33
  int v89; // [sp+50h] [bp-50h]@39
  int v90; // [sp+54h] [bp-4Ch]@45
  void (*v91)(void); // [sp+5Ch] [bp-44h]@39
  int v92; // [sp+64h] [bp-3Ch]@1
  int v93; // [sp+68h] [bp-38h]@58
  int v94; // [sp+6Ch] [bp-34h]@1
  int v95; // [sp+70h] [bp-30h]@33

  v4 = a1;
  v5 = a2;
  __dmb();
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 28) = 1;
  v6 = a4;
  v7 = a3;
  LevelArchiver::_printStartMessage((LevelArchiver *)a2);
  j__ZNSt12__shared_ptrIN13LevelArchiver6ResultELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v94);
  j__ZNSt12__shared_ptrISt7promiseIN13LevelArchiver6ResultEELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS3_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v92);
  v8 = *(_DWORD *)(v5 + 4);
  if ( !v8 )
    std::__throw_bad_weak_ptr();
  v9 = *(_DWORD *)(v8 + 4);
  v10 = (unsigned int *)(v8 + 4);
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
  v13 = *(_DWORD *)v5;
  v14 = (unsigned int *)(v8 + 8);
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
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
    if ( &pthread_create )
      do
        v17 = __ldrex(v14);
      while ( __strex(v17 - 1, v14) );
    else
      v17 = (*v14)--;
    if ( v17 == 1 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  v18 = TaskGroup::DISK;
  v85 = v13;
  v86 = v8;
      v19 = __ldrex(v14);
    while ( __strex(v19 + 1, v14) );
  v87 = v94;
  v88 = v95;
  if ( v95 )
    v20 = (unsigned int *)(v95 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 + 1, v20) );
      ++*v20;
  sub_21E8AF4(&v89, v7);
  v91 = 0;
  v22 = operator new(0x14u);
  v23 = (int)v22;
  *v22 = v85;
  v24 = v86;
  *(_DWORD *)(v23 + 4) = v86;
  if ( v24 )
    v25 = (unsigned int *)(v24 + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  *(_DWORD *)(v23 + 8) = v87;
  v27 = v88;
  v88 = 0;
  *(_DWORD *)(v23 + 12) = v27;
  v87 = 0;
  sub_21E8AF4((int *)(v23 + 16), &v89);
  HIDWORD(v28) = sub_191BF90;
  v90 = v23;
  LODWORD(v28) = sub_191C3F8;
  *(_QWORD *)&v91 = v28;
  v74 = v8;
      v29 = __ldrex(v14);
    while ( __strex(v29 + 1, v14) );
    v73 = v8;
  v75 = v94;
  v76 = v95;
    v30 = (unsigned int *)(v95 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 + 1, v30) );
      ++*v30;
  v78 = 0;
  v32 = *(void (__fastcall **)(int *, int, signed int))(v6 + 8);
  if ( v32 )
    v32(&v77, v6, 2);
    v79 = *(unsigned int **)(v6 + 12);
    v78 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(v6 + 8);
  v80 = v92;
  v81 = v93;
  if ( v93 )
    v33 = (unsigned int *)(v93 + 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  v83 = 0;
  v35 = operator new(0x28u);
  v36 = (unsigned int *)v13;
  *(_DWORD *)v35 = v13;
  *((_DWORD *)v35 + 1) = v8;
  if ( v8 )
    v36 = (unsigned int *)(v8 + 8);
        v37 = __ldrex(v36);
      while ( __strex(v37 + 1, v36) );
      v36 = (unsigned int *)*((_DWORD *)v35 + 7);
      ++*v36;
  *((_DWORD *)v35 + 2) = v75;
  *((_DWORD *)v35 + 3) = v76;
  v38 = *(_QWORD *)&v77;
  *(_QWORD *)&v77 = *((_QWORD *)v35 + 2);
  *((_QWORD *)v35 + 2) = v38;
  v39 = v78;
  *((_DWORD *)v35 + 6) = v39;
  v40 = (int)v79;
  v79 = v36;
  *((_DWORD *)v35 + 7) = v40;
  *((_DWORD *)v35 + 8) = v80;
  v41 = v81;
  v81 = 0;
  *((_DWORD *)v35 + 9) = v41;
  v80 = 0;
  v82 = v35;
  v83 = (void (*)(void))sub_191C7C4;
  v84 = sub_191C66C;
  TaskGroup::queue(v18, (int)&v90, (int)&v82, 1u, 0xFFFFFFFF);
  if ( v83 )
    v83();
  v42 = v81;
  if ( v81 )
    v43 = (unsigned int *)(v81 + 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      v45 = (unsigned int *)(v42 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
      if ( &pthread_create )
      {
        __dmb();
        do
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
      }
      else
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  if ( v78 )
    v78(&v77, &v77, 3);
  if ( v74 )
    v53 = (unsigned int *)(v74 + 8);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 == 1 )
      (*(void (**)(void))(*(_DWORD *)v74 + 12))();
  if ( v91 )
    v91();
  v55 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v89 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = v88;
  if ( v88 )
    v57 = (unsigned int *)(v88 + 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 == 1 )
      v59 = (unsigned int *)(v56 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 8))(v56);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v56 + 12))(v56);
  v61 = v86;
  if ( v86 )
    v62 = (unsigned int *)(v86 + 8);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      (*(void (**)(void))(*(_DWORD *)v61 + 12))();
  std::__basic_future<LevelArchiver::Result>::__basic_future(v4, v92);
      result = __ldrex(v14);
    while ( __strex(result - 1, v14) );
    result = (*v14)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v73 + 12))(v73);
  v65 = v93;
    v66 = (unsigned int *)(v93 + 4);
        result = __ldrex(v66);
      while ( __strex(result - 1, v66) );
      result = (*v66)--;
    if ( result == 1 )
      v67 = (unsigned int *)(v65 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 8))(v65);
          result = __ldrex(v67);
        while ( __strex(result - 1, v67) );
        result = (*v67)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v65 + 12))(v65);
  v68 = v95;
    v69 = (unsigned int *)(v95 + 4);
        result = __ldrex(v69);
      while ( __strex(result - 1, v69) );
      result = (*v69)--;
      v70 = (unsigned int *)(v68 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 8))(v68);
          result = __ldrex(v70);
        while ( __strex(result - 1, v70) );
        result = (*v70)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v68 + 12))(v68);
  return result;
}


void __fastcall LevelArchiver::generateFilePickerSettings(int a1, int a2, int a3)
{
  LevelArchiver::generateFilePickerSettings(a1, a2, a3);
}


unsigned int *__fastcall LevelArchiver::setEntitlementManager(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 56) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 60);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 60);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 60) = v5;
  }
  return result;
}


signed int __fastcall LevelArchiver::_hasResourcePacks(int a1, const char **a2)
{
  int v2; // r10@1
  const char **v3; // r4@1
  const char *v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  int *v7; // r0@1
  __int64 v8; // r5@2
  int v9; // r8@2
  unsigned __int64 v10; // r2@2 OVERLAPPED
  signed int v11; // r10@3
  int v12; // r1@4
  unsigned __int64 v13; // r2@8
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  int v17; // [sp+Ch] [bp-2E04h]@2
  int v18; // [sp+10h] [bp-2E00h]@2
  int *v19; // [sp+14h] [bp-2DFCh]@1
  int *v20; // [sp+18h] [bp-2DF8h]@1
  int v21; // [sp+1Ch] [bp-2DF4h]@1
  const char *v22; // [sp+20h] [bp-2DF0h]@1
  int v23; // [sp+24h] [bp-2DECh]@1
  __int64 v24; // [sp+28h] [bp-2DE8h]@2
  __int64 v25; // [sp+38h] [bp-2DD8h]@2
  int v26[3]; // [sp+3Ch] [bp-2DD4h]@2
  void **v27; // [sp+44h] [bp-2DCCh]@2
  int v28; // [sp+48h] [bp-2DC8h]@8
  void **v29; // [sp+4Ch] [bp-2DC4h]@2
  int v30; // [sp+50h] [bp-2DC0h]@8
  void **v31; // [sp+1080h] [bp-1D90h]@2
  int v32; // [sp+10F0h] [bp-1D20h]@2
  __int16 v33; // [sp+10F4h] [bp-1D1Ch]@2
  int v34; // [sp+10F8h] [bp-1D18h]@2
  int v35; // [sp+10FCh] [bp-1D14h]@2
  int v36; // [sp+1100h] [bp-1D10h]@2
  int v37; // [sp+1104h] [bp-1D0Ch]@2
  int v38; // [sp+1108h] [bp-1D08h]@2
  int v39; // [sp+110Ch] [bp-1D04h]@2
  int v40; // [sp+150Ch] [bp-1904h]@2
  void **v41; // [sp+1510h] [bp-1900h]@2
  int v42; // [sp+1514h] [bp-18FCh]@10
  void **v43; // [sp+1518h] [bp-18F8h]@2
  int v44; // [sp+151Ch] [bp-18F4h]@10
  void **v45; // [sp+254Ch] [bp-8C4h]@2
  int v46; // [sp+25BCh] [bp-854h]@2
  __int16 v47; // [sp+25C0h] [bp-850h]@2
  int v48; // [sp+25C4h] [bp-84Ch]@2
  int v49; // [sp+25C8h] [bp-848h]@2
  int v50; // [sp+25CCh] [bp-844h]@2
  int v51; // [sp+25D0h] [bp-840h]@2
  int v52; // [sp+25D4h] [bp-83Ch]@2
  int v53; // [sp+25D8h] [bp-838h]@2
  int v54; // [sp+29D8h] [bp-438h]@2
  int v55; // [sp+29DCh] [bp-434h]@1
  int v56; // [sp+29E0h] [bp-430h]@2
  int v57; // [sp+2DE0h] [bp-30h]@2
  RakNet *v58; // [sp+2DE4h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v58 = _stack_chk_guard;
  FilePathManager::getWorldsPath((FilePathManager *)&v19, *(_DWORD *)(a1 + 32));
  v4 = *v3;
  v5 = *((_DWORD *)*v3 - 3);
  v6 = *(v19 - 3);
  v20 = v19;
  v21 = v6;
  v22 = v4;
  v23 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v55, (int)&v20, 2);
  v7 = v19 - 3;
  if ( v19 - 3 != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v19 - 1);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v20 = &v56;
  v21 = v57;
  v22 = "world_behavior_packs.json";
  v23 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v52, (int)&v20, 2);
  HIDWORD(v8) = v54;
  sub_21B6308((int)&v45);
  v45 = &off_26D3AF0;
  v46 = 0;
  LODWORD(v8) = &v53;
  v47 = 0;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v24 = v8;
  Core::FileStream::FileStream((int)&v41, (int)off_26D7EA4, &v24, 8);
  v41 = &off_26D7E64;
  v45 = &off_26D7E8C;
  v43 = &off_26D7E78;
  ResourcePackStack::deserialize(&v18, (char *)&v41, *(ResourcePackRepository **)(v2 + 52));
  v22 = "world_resource_packs.json";
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v38, (int)&v20, 2);
  v9 = v40;
  _aeabi_memcpy4(&v53, &v39, v40 + 1);
  v54 = v9;
  LOBYTE(v39) = 0;
  v40 = 0;
  sub_21B6308((int)&v31);
  v31 = &off_26D3AF0;
  v32 = 0;
  v33 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  LODWORD(v25) = &v53;
  v26[0] = v9;
  Core::FileStream::FileStream((int)&v27, (int)off_26D7EA4, &v25, 8);
  v27 = &off_26D7E64;
  v31 = &off_26D7E8C;
  v29 = &off_26D7E78;
  ResourcePackStack::deserialize(&v17, (char *)&v27, *(ResourcePackRepository **)(v2 + 52));
  LODWORD(v10) = *(_QWORD *)(v18 + 4);
  if ( (_DWORD)v10 == *(_QWORD *)(v18 + 4) >> 32 )
    *(unsigned __int64 *)((char *)&v10 - 4) = *(_QWORD *)(v17 + 4);
    v11 = 0;
    if ( v12 != (_DWORD)v10 )
      v11 = 1;
  else
    v11 = 1;
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v17 = 0;
  v27 = &off_26D7EEC;
  v31 = &off_26D7F14;
  v29 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v30, (int)&off_26D7F14, v10);
  v27 = &off_26D7F6C;
  v31 = &off_26D7F80;
  v28 = 0;
  sub_21B6560(&v31);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  LODWORD(v13) = &v40;
  v41 = &off_26D7EEC;
  v45 = &off_26D7F14;
  v43 = &off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v44, (int)&off_26D7F14, v13);
  v41 = &off_26D7F6C;
  v45 = &off_26D7F80;
  v42 = 0;
  sub_21B6560(&v45);
  if ( _stack_chk_guard != v58 )
    _stack_chk_fail(_stack_chk_guard - v58);
  return v11;
}


LevelArchiver *__fastcall LevelArchiver::~LevelArchiver(LevelArchiver *this)
{
  LevelArchiver *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10
  void (*v7)(void); // r3@15
  int v8; // r0@17
  unsigned int *v9; // r2@18
  unsigned int v10; // r1@20

  v1 = this;
  v2 = *((_DWORD *)this + 15);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  v7 = (void (*)(void))*((_DWORD *)v1 + 11);
  if ( v7 )
    v7();
  std::promise<LevelArchiver::Result>::~promise((int *)v1 + 4);
  ZipUtils::ZipProgress::~ZipProgress((LevelArchiver *)((char *)v1 + 8));
  v8 = *((_DWORD *)v1 + 1);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 8);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  return v1;
}


int __fastcall LevelArchiver::getOperationPercentage(LevelArchiver *this)
{
  int v1; // r1@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 3);
  __dmb();
  if ( v1 )
  {
    _R1 = *((_DWORD *)this + 2);
    __dmb();
    _R0 = *((_DWORD *)this + 3);
    __asm
    {
      VMOV            S0, R1
      VMOV            S2, R0
      VCVT.F32.U32    S0, S0
      VCVT.F32.U32    S2, S2
    }
      VDIV.F32        S0, S0, S2
      VLDR            S2, =100.0
      VMUL.F32        S0, S0, S2
      VMOV            R0, S0
  }
  else
      VLDREQ          S0, =0.0
      VMOVEQ          R0, S0
  return result;
}


int __fastcall LevelArchiver::_validatePremiumUpgradePacks(int a1, int *a2)
{
  void ***v2; // r11@1
  __int64 v3; // r5@1
  int *v4; // r5@1
  char *v5; // r4@1
  int v6; // r1@1
  unsigned __int64 v7; // r2@1
  const Json::Value *v8; // r7@5
  ResourcePack *v9; // r0@6
  PackManifest *v10; // r10@7
  char *v11; // r0@8
  Json::Value *v12; // r2@12
  int v13; // r8@15
  Core::FileStdStreamBuf *v14; // r9@18
  int v15; // r6@28
  int v16; // r4@28
  void *v17; // r0@28
  int v18; // r1@29
  unsigned __int64 v19; // r2@29
  unsigned __int64 v20; // r2@29
  void *v21; // r0@29
  unsigned __int64 v22; // r2@31
  unsigned int *v24; // r2@34
  signed int v25; // r1@36
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  char v28; // [sp+8h] [bp-23A8h]@3
  int *v29; // [sp+10h] [bp-23A0h]@1
  int v30; // [sp+14h] [bp-239Ch]@1
  RakNet *v31; // [sp+18h] [bp-2398h]@1
  int v32; // [sp+20h] [bp-2390h]@28
  char v33; // [sp+24h] [bp-238Ch]@28
  int v34; // [sp+44h] [bp-236Ch]@26
  int v35; // [sp+48h] [bp-2368h]@26
  char v36; // [sp+4Ch] [bp-2364h]@26
  void (*v37)(void); // [sp+54h] [bp-235Ch]@26
  int v38; // [sp+60h] [bp-2350h]@24
  int v39; // [sp+64h] [bp-234Ch]@24
  char v40; // [sp+68h] [bp-2348h]@24
  void (*v41)(void); // [sp+70h] [bp-2340h]@24
  int v42; // [sp+7Ch] [bp-2334h]@22
  int v43; // [sp+80h] [bp-2330h]@22
  int v44; // [sp+84h] [bp-232Ch]@22
  int v45; // [sp+88h] [bp-2328h]@22
  char v46; // [sp+8Ch] [bp-2324h]@22
  void (*v47)(void); // [sp+94h] [bp-231Ch]@22
  int v48; // [sp+A0h] [bp-2310h]@20
  int v49; // [sp+A4h] [bp-230Ch]@20
  char v50; // [sp+A8h] [bp-2308h]@20
  void (*v51)(void); // [sp+B0h] [bp-2300h]@20
  int v52; // [sp+BCh] [bp-22F4h]@19
  int v53; // [sp+C0h] [bp-22F0h]@19
  int v54; // [sp+C4h] [bp-22ECh]@19
  char v55; // [sp+C8h] [bp-22E8h]@12
  char v56; // [sp+D8h] [bp-22D8h]@8
  char v57; // [sp+110h] [bp-22A0h]@5
  void *v58; // [sp+140h] [bp-2270h]@5
  char v59; // [sp+148h] [bp-2268h]@3
  char v60; // [sp+150h] [bp-2260h]@3
  char v61; // [sp+158h] [bp-2258h]@1
  char v62; // [sp+1C8h] [bp-21E8h]@1
  char v63; // [sp+1D8h] [bp-21D8h]@1
  __int64 v64; // [sp+1E8h] [bp-21C8h]@1
  __int64 v65; // [sp+1F0h] [bp-21C0h]@28
  int v66; // [sp+1F4h] [bp-21BCh]@28
  void **v67; // [sp+1FCh] [bp-21B4h]@28
  int v68; // [sp+200h] [bp-21B0h]@29
  void **v69; // [sp+204h] [bp-21ACh]@28
  int v70; // [sp+208h] [bp-21A8h]@29
  void **v71; // [sp+1238h] [bp-1178h]@28
  int v72; // [sp+12A8h] [bp-1108h]@28
  __int16 v73; // [sp+12ACh] [bp-1104h]@28
  int v74; // [sp+12B0h] [bp-1100h]@28
  int v75; // [sp+12B4h] [bp-10FCh]@28
  int v76; // [sp+12B8h] [bp-10F8h]@28
  int v77; // [sp+12BCh] [bp-10F4h]@28
  char v78; // [sp+12C0h] [bp-10F0h]@1
  int v79; // [sp+12C4h] [bp-10ECh]@1
  void **v80; // [sp+12C8h] [bp-10E8h]@1
  void **v81; // [sp+22FCh] [bp-B4h]@1
  int v82; // [sp+236Ch] [bp-44h]@1
  __int16 v83; // [sp+2370h] [bp-40h]@1
  int v84; // [sp+2374h] [bp-3Ch]@1
  int v85; // [sp+2378h] [bp-38h]@1
  int v86; // [sp+237Ch] [bp-34h]@1
  int v87; // [sp+2380h] [bp-30h]@1

  v29 = a2;
  v30 = a1;
  v2 = &v81;
  v31 = _stack_chk_guard;
  LODWORD(v3) = *a2;
  HIDWORD(v3) = *(_DWORD *)(*a2 - 12);
  sub_21B6308((int)&v81);
  v81 = &off_26D3AF0;
  v82 = 0;
  v83 = 0;
  v87 = 0;
  v86 = 0;
  v85 = 0;
  v84 = 0;
  v64 = v3;
  Core::FileStream::FileStream((int)&v78, (int)off_26D7EA4, &v64, 8);
  v4 = &v79;
  *(_DWORD *)&v78 = &off_26D7E64;
  v81 = &off_26D7E8C;
  v80 = &off_26D7E78;
  Json::Value::Value(&v63, 0);
  Json::Value::Value(&v62, 0);
  Json::Reader::Reader((Json::Reader *)&v61);
  v5 = &v78;
  if ( Json::Reader::parse((int)&v61, &v78, (int)&v63, 1) == 1 )
  {
    if ( Json::Value::isArray((Json::Value *)&v63) == 1 )
    {
      Json::Value::begin((Json::Value *)&v60, (int)&v63);
      Json::Value::end((Json::Value *)&v59, (int)&v63);
      v28 = 0;
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v60, (const Json::ValueIteratorBase *)&v59) != 1 )
      {
        v8 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v60);
        PackIdVersion::PackIdVersion((PackIdVersion *)&v57);
        v58 = &unk_28898CC;
        if ( ResourceHelper::deserializePackStackEntry(
               v8,
               (int)&v57,
               (int *)&PackManifestFactory::MANIFEST_PACK_UUID_UPGRADE_SALT) == 1 )
        {
          v9 = ResourcePackRepository::getResourcePackSatisfiesPackId(
                 *(ResourcePackRepository **)(v30 + 52),
                 (const PackIdVersion *)&v57,
                 0);
          if ( v9 )
          {
            v10 = (PackManifest *)ResourcePack::getManifest(v9);
            if ( PackManifest::getPackCategory(v10) == 2 )
            {
              v11 = PackManifest::getIdentity(v10);
              PackInstanceId::PackInstanceId((int)&v56, (int)v11, (int *)&v58);
              if ( PackInstanceId::operator==((int)&v57, &v56) == 1 )
              {
                Json::Value::append((Json::Value *)&v62, v8);
              }
              else
                Json::Value::Value(&v55, 0);
                ResourceHelper::serializePackStackEntry((ResourceHelper *)&v56, (const PackInstanceId *)&v55, v12);
                Json::Value::append((Json::Value *)&v62, (const Json::Value *)&v55);
                Json::Value::~Value((Json::Value *)&v55);
                v28 = 1;
              PackInstanceId::~PackInstanceId((PackInstanceId *)&v56);
            }
            else
              Json::Value::append((Json::Value *)&v62, v8);
          }
          else
            Json::Value::append((Json::Value *)&v62, v8);
        }
        PackInstanceId::~PackInstanceId((PackInstanceId *)&v57);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v60);
      }
      v2 = &v81;
      v4 = &v79;
      v13 = v28 & 1;
      v5 = &v78;
    }
    else
      v13 = 0;
  }
  else
    v13 = 0;
  v14 = (Core::FileStdStreamBuf *)(v5 + 12);
  Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)(v5 + 12), v6, v7);
  if ( v13 == 1 )
    sub_21E8AF4(&v54, v29);
    sub_21E7408((const void **)&v54, ".backup", 7u);
    v52 = v54;
    v53 = *(_DWORD *)(v54 - 12);
    if ( Core::FileSystem::fileExists((__int64 *)&v52) == 1 )
      v48 = v54;
      v49 = *(_DWORD *)(v54 - 12);
      Core::FileSystem::deleteFile((int)&v50, (__int64 *)&v48);
      if ( v51 )
        v51();
    v44 = *v29;
    v45 = *(_DWORD *)(v44 - 12);
    v42 = v54;
    v43 = *(_DWORD *)(v54 - 12);
    Core::FileSystem::copyFile((int)&v46, (__int64 *)&v44, (__int64 *)&v42);
    if ( v47 )
      v47();
    v38 = *v29;
    v39 = *(_DWORD *)(v38 - 12);
    Core::FileSystem::deleteFile((int)&v40, (__int64 *)&v38);
    if ( v41 )
      v41();
    v34 = *v29;
    v35 = *(_DWORD *)(v34 - 12);
    Core::FileSystem::createEmptyFile((int)&v36, (__int64 *)&v34);
    if ( v37 )
      v37();
    v15 = *v29;
    v16 = *(_DWORD *)(*v29 - 12);
    sub_21B6308((int)&v71);
    v71 = &off_26D3AF0;
    v72 = 0;
    v73 = 0;
    v77 = 0;
    v76 = 0;
    v75 = 0;
    v74 = 0;
    LODWORD(v65) = v15;
    v66 = v16;
    Core::FileStream::FileStream((int)&v67, (int)off_26D81A4, &v65, 16);
    v67 = &off_26D8170;
    v71 = &off_26D8198;
    v69 = &off_26D8184;
    sub_21E94B4((void **)&v32, "\t");
    v5 = &v78;
    Json::StyledStreamWriter::StyledStreamWriter((int)&v33, &v32);
    v17 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    Json::StyledStreamWriter::write((int)&v33, (int)&v69, (const Json::Value *)&v62);
    Core::FileStdStreamBuf::close((Core::FileStdStreamBuf *)&v70, v18, v19);
    Json::StyledStreamWriter::~StyledStreamWriter((Json::StyledStreamWriter *)&v33);
    v67 = &off_26D679C;
    v71 = &off_26D67C4;
    v69 = &off_26D67B0;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v70, (int)&off_26D67C4, v20);
    v67 = &off_26D67DC;
    v71 = &off_26D67F0;
    v68 = 0;
    sub_21B6560(&v71);
    v21 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v54 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v4 = &v79;
  Json::Reader::~Reader((Json::Reader *)&v61);
  Json::Value::~Value((Json::Value *)&v62);
  Json::Value::~Value((Json::Value *)&v63);
  *(v4 - 1) = (int)&off_26D7EEC;
  *v2 = &off_26D7F14;
  v4[1] = (int)&off_26D7F00;
  Core::FileStdStreamBuf::~FileStdStreamBuf(v14, (int)&off_26D7F14, v22);
  *(v4 - 1) = (int)&off_26D7F6C;
  *v2 = &off_26D7F80;
  *v4 = 0;
  sub_21B6560((_DWORD *)v5 + 1039);
  if ( _stack_chk_guard != v31 )
    _stack_chk_fail(_stack_chk_guard - v31);
  return v13;
}


void __fastcall LevelArchiver::archiveLevel(int a1, int a2, int a3, char a4, int *a5, int a6)
{
  int v6; // r8@1
  char v7; // r9@1
  int v8; // r4@1
  int v9; // r7@1
  __int64 v10; // r0@1
  int v11; // r3@1
  int v12; // r5@1
  int v13; // r0@4
  __int64 v14; // kr00_8@4
  unsigned int v15; // r1@4
  const void **v16; // r0@6
  const void **v17; // r0@8
  char *v18; // r0@8
  char *v19; // r0@9
  void *v20; // r0@10
  void *v21; // r0@11
  char v22; // r6@12
  void *v23; // r0@14
  LevelStorage *v24; // r1@17
  int v25; // r6@17
  void (__fastcall *v26)(int *, int, signed int); // r3@17
  unsigned int *v27; // r0@20
  unsigned int v28; // r1@22
  _DWORD *v29; // r0@25
  void (__fastcall *v30)(_DWORD, _DWORD, _DWORD); // r1@25
  int v31; // r1@25
  int v32; // r4@29
  unsigned int *v33; // r1@30
  unsigned int v34; // r0@32
  unsigned int *v35; // r6@36
  unsigned int v36; // r0@38
  char *v37; // r0@45
  int v38; // r4@46
  unsigned int *v39; // r1@47
  unsigned int v40; // r0@49
  unsigned int *v41; // r5@53
  unsigned int v42; // r0@55
  char *v43; // r0@60
  void *v44; // r0@61
  unsigned int *v45; // r2@63
  signed int v46; // r1@65
  unsigned int *v47; // r2@67
  signed int v48; // r1@69
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  unsigned int *v51; // r2@87
  signed int v52; // r1@89
  unsigned int *v53; // r2@91
  signed int v54; // r1@93
  unsigned int *v55; // r2@95
  signed int v56; // r1@97
  unsigned int *v57; // r2@99
  signed int v58; // r1@101
  unsigned int *v59; // r2@103
  signed int v60; // r1@105
  char v61; // [sp+8h] [bp-C8h]@25
  void (*v62)(void); // [sp+10h] [bp-C0h]@25
  int v63; // [sp+18h] [bp-B8h]@17
  int v64; // [sp+1Ch] [bp-B4h]@17
  char *v65; // [sp+20h] [bp-B0h]@17
  char v66; // [sp+24h] [bp-ACh]@17
  int v67; // [sp+28h] [bp-A8h]@18
  void (__fastcall *v68)(_DWORD, _DWORD, _DWORD); // [sp+30h] [bp-A0h]@17
  int v69; // [sp+34h] [bp-9Ch]@18
  int v70; // [sp+38h] [bp-98h]@19
  int v71; // [sp+3Ch] [bp-94h]@19
  _DWORD *v72; // [sp+44h] [bp-8Ch]@25
  void (*v73)(void); // [sp+4Ch] [bp-84h]@25
  signed int (__fastcall *v74)(_QWORD **); // [sp+50h] [bp-80h]@25
  int v75; // [sp+54h] [bp-7Ch]@17
  int v76; // [sp+58h] [bp-78h]@19
  int v77; // [sp+5Ch] [bp-74h]@12
  int v78; // [sp+60h] [bp-70h]@12
  int v79; // [sp+64h] [bp-6Ch]@12
  char v80; // [sp+68h] [bp-68h]@12
  void (*v81)(void); // [sp+70h] [bp-60h]@12
  char v82; // [sp+78h] [bp-58h]@12
  int v83; // [sp+7Ch] [bp-54h]@4
  unsigned int v84; // [sp+80h] [bp-50h]@4
  char *v85; // [sp+84h] [bp-4Ch]@8
  char *v86; // [sp+88h] [bp-48h]@8
  int v87; // [sp+8Ch] [bp-44h]@1
  int v88[2]; // [sp+90h] [bp-40h]@1
  int v89; // [sp+98h] [bp-38h]@1
  int v90; // [sp+9Ch] [bp-34h]@1
  char *v91; // [sp+A0h] [bp-30h]@1
  int v92; // [sp+A4h] [bp-2Ch]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  std::promise<LevelArchiver::Result>::promise((int)v88);
  v10 = *(_QWORD *)v88;
  v88[0] = 0;
  v88[1] = 0;
  v11 = v89;
  v89 = 0;
  v12 = v9 + 16;
  v90 = *(_DWORD *)(v9 + 16);
  *(_DWORD *)v12 = v10;
  LODWORD(v10) = *(_DWORD *)(v9 + 20);
  *(_DWORD *)(v12 + 4) = HIDWORD(v10);
  v91 = (char *)v10;
  v92 = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(v12 + 8) = v11;
  std::promise<LevelArchiver::Result>::~promise(&v90);
  std::promise<LevelArchiver::Result>::~promise(v88);
  sub_21E8AF4(&v87, a5);
  v90 = 1;
  v91 = (char *)&unk_28898CC;
  ZipUtils::ZipProgress::clear((ZipUtils::ZipProgress *)(v9 + 8));
  *(_DWORD *)(v9 + 28) = 2;
  if ( Level::isExporting((Level *)v8) == 1 )
  {
    std::promise<LevelArchiver::Result>::set_value((unsigned __int64 *)(v9 + 16), (int)&v90);
    std::__basic_future<LevelArchiver::Result>::__basic_future(v6, v9 + 16);
  }
  else
    LevelArchiver::_printStartMessage((LevelArchiver *)v9);
    if ( *(_DWORD *)(v87 - 12) )
      goto LABEL_129;
    FilePathManager::getLevelArchivePath((FilePathManager *)&v84, *(int **)(v9 + 32));
    v13 = Level::getLevelStorage((Level *)v8);
    (*(void (__fastcall **)(int *))(*(_DWORD *)v13 + 84))(&v83);
    v14 = *(_QWORD *)(v84 - 12);
    v15 = *(_DWORD *)(v83 - 12) + v14;
    if ( v15 > HIDWORD(v14) && v15 <= *(_DWORD *)(v83 - 8) )
      v16 = sub_21E82D8((const void **)&v83, 0, v84, (_BYTE *)v14);
    else
      v16 = sub_21E72F0((const void **)&v84, (const void **)&v83);
    v85 = (char *)*v16;
    *v16 = &unk_28898CC;
    v17 = sub_21E72F0((const void **)&v85, (const void **)&LevelArchiver::EXTENSION_VANILLA);
    v86 = (char *)*v17;
    *v17 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      &v87,
      (int *)&v86);
    v18 = v86 - 12;
    if ( (int *)(v86 - 12) != &dword_28898C0 )
    {
      v51 = (unsigned int *)(v86 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
      }
      else
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    }
    v19 = v85 - 12;
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v85 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v83 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v84 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    FilePathManager::getLevelArchivePath((FilePathManager *)&v77, *(int **)(v9 + 32));
    v78 = v77;
    v79 = *(_DWORD *)(v77 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v80, (__int64 *)&v78);
    v22 = v82;
    v82 |= 2u;
    if ( v81 )
      v81();
    v23 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v77 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    if ( v22 & 1 )
LABEL_129:
      Level::saveDirtyChunks((Level *)v8);
      Level::saveGameData((Level *)v8);
      Level::saveBiomeData((Level *)v8, v24);
      TaskGroup::sync_DEPRECATED_ASK_TOMMO(TaskGroup::DISK);
      j__ZNSt12__shared_ptrIN13LevelArchiver6ResultELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v75);
      v25 = *(_DWORD *)(v8 + 5872);
      v63 = v8;
      v64 = v9;
      sub_21E8AF4((int *)&v65, &v87);
      v66 = v7;
      v68 = 0;
      v26 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
      if ( v26 )
        v26(&v67, a6, 2);
        v69 = *(_DWORD *)(a6 + 12);
        v68 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a6 + 8);
      v70 = v75;
      v71 = v76;
      if ( v76 )
        v27 = (unsigned int *)(v76 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 + 1, v27) );
        }
        else
          ++*v27;
      v73 = 0;
      v29 = operator new(0x28u);
      *(_QWORD *)v29 = *(_QWORD *)&v63;
      v29[2] = v65;
      v65 = (char *)&unk_28898CC;
      *((_BYTE *)v29 + 12) = v66;
      *((_QWORD *)v29 + 2) = *(_QWORD *)&v67;
      v30 = v68;
      v29[6] = v30;
      v29[7] = v69;
      v29[8] = v70;
      v31 = v71;
      v71 = 0;
      v29[9] = v31;
      v70 = 0;
      v72 = v29;
      v73 = (void (*)(void))sub_191B68C;
      v74 = sub_191AF54;
      v62 = 0;
      TaskGroup::queue(v25, (int)&v72, (int)&v61, 1u, 0xFFFFFFFF);
      if ( v62 )
        v62();
      if ( v73 )
        v73();
      v32 = v71;
      if ( v71 )
        v33 = (unsigned int *)(v71 + 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 == 1 )
          v35 = (unsigned int *)(v32 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 8))(v32);
          if ( &pthread_create )
          {
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
          }
          else
            v36 = (*v35)--;
          if ( v36 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 12))(v32);
      if ( v68 )
        v68(&v67, &v67, 3);
      v37 = v65 - 12;
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v65 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v37);
      std::__basic_future<LevelArchiver::Result>::__basic_future(v6, v12);
      v38 = v76;
        v39 = (unsigned int *)(v76 + 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 == 1 )
          v41 = (unsigned int *)(v38 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
      v90 = 1;
      LevelArchiver::_printResultMessage(v9, &v90);
      *(_DWORD *)(v9 + 28) = 0;
      std::promise<LevelArchiver::Result>::set_value((unsigned __int64 *)(v9 + 16), (int)&v90);
      std::__basic_future<LevelArchiver::Result>::__basic_future(v6, v9 + 16);
  v43 = v91 - 12;
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v91 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
  v44 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v87 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
}


unsigned int __fastcall LevelArchiver::importLevel(int a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r7@1
  void (__fastcall *v6)(char *, int, signed int); // r3@1
  int *v7; // r4@1
  int v8; // r5@1
  unsigned int result; // r0@3
  char v10; // [sp+4h] [bp-24h]@2
  int (*v11)(void); // [sp+Ch] [bp-1Ch]@1
  int v12; // [sp+10h] [bp-18h]@2

  v4 = a1;
  v5 = a4;
  v11 = 0;
  v6 = *(void (__fastcall **)(char *, int, signed int))(a4 + 8);
  v7 = a3;
  v8 = a2;
  if ( v6 )
  {
    v6(&v10, v5, 2);
    v12 = *(_DWORD *)(v5 + 12);
    v11 = *(int (**)(void))(v5 + 8);
  }
  result = LevelArchiver::_importVanillaLevel(v4, v8, v7, (int)&v10);
  if ( v11 )
    result = v11();
  return result;
}


int __fastcall LevelArchiver::_copyPackToTemp(int a1, PackInstance *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r5@1
  PackInstance *v5; // r6@1
  _DWORD *v6; // r4@1
  _DWORD *v7; // r7@1
  PackManifest *v8; // r0@1
  void **v9; // r0@2
  int v10; // r0@3
  unsigned __int64 *v11; // r0@6
  int v12; // r0@6
  int *v13; // r0@6
  signed int v14; // r5@6
  void *v15; // r0@6
  void *v16; // r0@10
  int result; // r0@12
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  char v22; // [sp+10h] [bp-1520h]@6
  char v23[4]; // [sp+4Ch] [bp-14E4h]@6
  int v24; // [sp+50h] [bp-14E0h]@6
  __int64 v25; // [sp+54h] [bp-14DCh]@6
  int v26; // [sp+58h] [bp-14D8h]@6
  int v27; // [sp+5Ch] [bp-14D4h]@6
  char v28; // [sp+60h] [bp-14D0h]@6
  char v29; // [sp+90h] [bp-14A0h]@6
  __int64 v30; // [sp+9Ch] [bp-1494h]@4
  int v31; // [sp+A0h] [bp-1490h]@4
  int v32; // [sp+A4h] [bp-148Ch]@4
  int v33; // [sp+A8h] [bp-1488h]@4
  char v34; // [sp+ACh] [bp-1484h]@4
  void (*v35)(void); // [sp+B4h] [bp-147Ch]@4
  int v36; // [sp+C0h] [bp-1470h]@4
  int v37; // [sp+C4h] [bp-146Ch]@4
  char s[4]; // [sp+C8h] [bp-1468h]@4
  int v39; // [sp+CCh] [bp-1464h]@4
  __int64 v40; // [sp+D0h] [bp-1460h]@4
  int v41; // [sp+D4h] [bp-145Ch]@4
  int v42; // [sp+D8h] [bp-1458h]@3
  char v43; // [sp+E4h] [bp-144Ch]@6
  int v44; // [sp+E8h] [bp-1448h]@6
  char v45; // [sp+4ECh] [bp-1044h]@6
  int v46; // [sp+4F0h] [bp-1040h]@6
  int v47; // [sp+8F0h] [bp-C40h]@6
  char v48; // [sp+8F4h] [bp-C3Ch]@4
  int v49; // [sp+8F8h] [bp-C38h]@4
  int v50; // [sp+CF8h] [bp-838h]@4
  char v51; // [sp+CFCh] [bp-834h]@4
  int v52; // [sp+D00h] [bp-830h]@4
  int v53; // [sp+1100h] [bp-430h]@4
  int v54; // [sp+1104h] [bp-42Ch]@4
  int v55; // [sp+1108h] [bp-428h]@4
  int v56; // [sp+1508h] [bp-28h]@4
  RakNet *v57; // [sp+150Ch] [bp-24h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v57 = _stack_chk_guard;
  v8 = (PackManifest *)PackInstance::getManifest(a2);
  if ( PackManifest::getPackCategory(v8) == 2 )
  {
    v9 = &_stack_chk_guard_ptr;
  }
  else
    v10 = PackInstance::getResourceLocation(v5);
    ResourceLocation::getFullPath((ResourceLocation *)&v42, v10);
    if ( PackInstance::isZipped(v5) == 1 )
    {
      *(_DWORD *)s = *v7;
      v39 = *(_DWORD *)(*(_DWORD *)s - 12);
      v36 = v42;
      v37 = *(_DWORD *)(v42 - 12);
      Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v48, (__int64 *)&v36);
      Core::PathBuffer<Core::StackString<char,1024u>>::joinParts((int)&v51, s, 1, (int)&v49, v50, ".zip");
      LODWORD(v40) = &v52;
      v41 = v53;
      Core::FileSystem::getUniqueFilePathForFile((int)&v54, &v40);
      v32 = v42;
      v33 = *(_DWORD *)(v42 - 12);
      LODWORD(v30) = &v55;
      v31 = v56;
      Core::FileSystem::copyFile((int)&v34, (__int64 *)&v32, &v30);
      if ( v35 )
        v35();
    }
    else
      ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v28);
      v29 = 1;
      v11 = (unsigned __int64 *)ResourcePackRepository::getExpectedFileExtensions((ResourcePackRepository *)1);
      ZipUtils::ZipFileRestrictions::addRestrictedExtensions((signed int)&v28, v11);
      v12 = *v7;
      *(_DWORD *)v23 = v12;
      v24 = *(_DWORD *)(v12 - 12);
      v13 = (int *)PackInstance::getFolderName(v5);
      Core::PathBuffer<Core::StackString<char,1024u>>::joinParts(
        (int)&v45,
        v23,
        1,
        *v13,
        *(_DWORD *)(*v13 - 12),
        ".zip");
      LODWORD(v25) = &v46;
      v26 = v47;
      Core::FileSystem::getUniqueFilePathForFile((int)&v43, &v25);
      sub_21E94B4((void **)&v27, (const char *)&v44);
      ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v22, (const ZipUtils::ZipSettings *)&v28);
      v14 = ZipUtils::zip(&v42, &v27, v4 + 8, (int)&v22);
      ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v22);
      v15 = (void *)(v27 - 12);
      if ( (int *)(v27 - 12) != &dword_28898C0 )
      {
        v20 = (unsigned int *)(v27 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      if ( v14 )
        *v6 = 2;
      ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v28);
    v16 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  result = *(_DWORD *)*v9 - (_DWORD)v57;
  if ( result )
    _stack_chk_fail(result);
  return result;
}


void __fastcall LevelArchiver::archiveLevel(int a1, int a2, int a3, char a4, int *a5, int a6)
{
  LevelArchiver::archiveLevel(a1, a2, a3, a4, a5, a6);
}


void __fastcall LevelArchiver::_revertPremiumUpgradePacks(int a1, int *a2)
{
  LevelArchiver::_revertPremiumUpgradePacks(a1, a2);
}


int __fastcall LevelArchiver::LevelArchiver(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r9@1
  int v7; // r5@1
  void (__fastcall *v8)(int, int, signed int); // r3@1
  int result; // r0@3

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  ZipUtils::ZipProgress::ZipProgress((ZipUtils::ZipProgress *)(a1 + 8));
  std::promise<LevelArchiver::Result>::promise(v4 + 16);
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 32) = v7;
  v8 = *(void (__fastcall **)(int, int, signed int))(v5 + 8);
  if ( v8 )
  {
    v8(v4 + 36, v5, 2);
    *(_DWORD *)(v4 + 48) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)(v5 + 8);
  }
  result = v4;
  *(_DWORD *)(v4 + 52) = v6;
  *(_DWORD *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 60) = 0;
  return result;
}


char *__fastcall LevelArchiver::_archiveFiles(_QWORD *a1, int a2, int *a3, const void **a4, int a5, __int64 *a6)
{
  _QWORD *v6; // r5@1
  const void **v7; // r8@1
  int v8; // r7@1
  __int64 v9; // r0@1
  int v10; // r3@1
  __int64 v11; // kr00_8@1
  __int64 v12; // r0@1
  const void *v13; // r1@2
  int v14; // r2@2
  int v15; // r3@2
  void *v16; // r0@2
  const char *v17; // r1@5
  int v18; // r2@5
  int v19; // r3@5
  int v20; // r6@5
  __int64 v21; // r0@5
  signed int v22; // r10@5
  void *v23; // r0@5
  char *v24; // r0@6
  void *v25; // r0@7
  int *v26; // r0@8
  signed int v27; // r4@10
  char v28; // r5@10
  const char *v29; // r1@11
  int v30; // r2@11
  int v31; // r3@11
  int *v32; // r0@11
  int v33; // r11@12
  void *v34; // r0@12
  int v35; // r9@13
  void *v36; // r0@13
  const void **v37; // r0@14
  char *v38; // r0@14
  void *v39; // r0@15
  void **v40; // r0@17
  void *v41; // r0@17
  void **v42; // r0@19
  void *v43; // r0@19
  const char *v44; // r1@21
  int v45; // r2@21
  int v46; // r3@21
  int *v47; // r0@21
  __int64 v48; // r4@22
  PackInstance *v49; // r6@22
  PackInstance *v50; // r11@22
  unsigned int *v51; // r2@26
  signed int v52; // r1@28
  unsigned __int64 v53; // r2@28
  void *v54; // r0@34
  char v55; // r1@35
  void ***v56; // r8@38
  int v57; // r8@40
  PackInstance *v58; // r4@40
  PackInstance *v59; // r11@40
  unsigned __int64 v60; // r2@44
  signed int v61; // r1@46
  void *v62; // r0@52
  char v63; // r1@53
  int *v64; // r11@56
  void ***v65; // r6@56
  void *v66; // r0@57
  int v67; // r1@69
  void *v68; // r0@69
  unsigned int *v69; // r2@70
  signed int v70; // r1@72
  char *result; // r0@77
  unsigned int *v72; // r2@79
  signed int v73; // r1@81
  unsigned int *v74; // r2@83
  signed int v75; // r1@85
  unsigned int *v76; // r2@87
  signed int v77; // r1@89
  unsigned int *v78; // r2@91
  signed int v79; // r1@93
  unsigned int *v80; // r2@95
  signed int v81; // r1@97
  unsigned int *v82; // r2@99
  signed int v83; // r1@101
  unsigned int *v84; // r2@103
  signed int v85; // r1@105
  unsigned int *v86; // r2@107
  signed int v87; // r1@109
  unsigned int *v88; // r2@111
  signed int v89; // r1@113
  unsigned int *v90; // r2@115
  signed int v91; // r1@117
  unsigned int *v92; // r2@159
  signed int v93; // r1@161
  unsigned int *v94; // r2@163
  signed int v95; // r1@165
  unsigned int *v96; // r2@167
  signed int v97; // r1@169
  unsigned int *v98; // r2@186
  signed int v99; // r1@188
  void ***v100; // [sp+10h] [bp-4878h]@23
  int *v101; // [sp+14h] [bp-4874h]@1
  int v102; // [sp+18h] [bp-4870h]@1
  _QWORD *v103; // [sp+20h] [bp-4868h]@1
  int v104; // [sp+28h] [bp-4860h]@19
  int v105; // [sp+2Ch] [bp-485Ch]@17
  char v106; // [sp+30h] [bp-4858h]@14
  int v107; // [sp+6Ch] [bp-481Ch]@14
  char *v108; // [sp+70h] [bp-4818h]@14
  char v109; // [sp+74h] [bp-4814h]@14
  char v110; // [sp+A4h] [bp-47E4h]@14
  int v111; // [sp+B0h] [bp-47D8h]@13
  int v112; // [sp+B4h] [bp-47D4h]@12
  int *v113; // [sp+B8h] [bp-47D0h]@11
  __int64 v114; // [sp+BCh] [bp-47CCh]@58
  int v115; // [sp+C0h] [bp-47C8h]@58
  char v116; // [sp+C4h] [bp-47C4h]@58
  void (*v117)(void); // [sp+CCh] [bp-47BCh]@58
  char v118; // [sp+D8h] [bp-47B0h]@57
  int v119; // [sp+114h] [bp-4774h]@57
  char v120; // [sp+118h] [bp-4770h]@57
  int v121; // [sp+154h] [bp-4734h]@44
  int v122; // [sp+158h] [bp-4730h]@40
  int v123; // [sp+15Ch] [bp-472Ch]@26
  int v124; // [sp+160h] [bp-4728h]@22
  int *v125; // [sp+164h] [bp-4724h]@21
  char v126; // [sp+168h] [bp-4720h]@5
  _DWORD *v127; // [sp+1A4h] [bp-46E4h]@5
  int v128; // [sp+1A8h] [bp-46E0h]@5
  int *v129; // [sp+1ACh] [bp-46DCh]@5
  int v130; // [sp+1B0h] [bp-46D8h]@5
  char v131; // [sp+1B4h] [bp-46D4h]@5
  char v132; // [sp+1E4h] [bp-46A4h]@5
  __int64 v133; // [sp+1F0h] [bp-4698h]@3
  int v134; // [sp+1F4h] [bp-4694h]@3
  char v135; // [sp+1F8h] [bp-4690h]@3
  void (*v136)(void); // [sp+200h] [bp-4688h]@3
  int v137; // [sp+20Ch] [bp-467Ch]@2
  int v138[2]; // [sp+210h] [bp-4678h]@1
  int v139; // [sp+214h] [bp-4674h]@1
  int v140; // [sp+218h] [bp-4670h]@1
  int v141; // [sp+21Ch] [bp-466Ch]@1
  int v142; // [sp+220h] [bp-4668h]@1
  int v143; // [sp+224h] [bp-4664h]@1
  int v144; // [sp+228h] [bp-4660h]@2
  int v145; // [sp+22Ch] [bp-465Ch]@2
  const void *v146; // [sp+230h] [bp-4658h]@2
  int v147; // [sp+234h] [bp-4654h]@2
  const char *v148; // [sp+238h] [bp-4650h]@2
  int v149; // [sp+23Ch] [bp-464Ch]@2
  int *v150; // [sp+248h] [bp-4640h]@5
  int v151; // [sp+24Ch] [bp-463Ch]@5
  const char *v152; // [sp+250h] [bp-4638h]@5
  int v153; // [sp+254h] [bp-4634h]@5
  __int64 v154; // [sp+260h] [bp-4628h]@22
  __int64 v155; // [sp+270h] [bp-4618h]@40
  int v156[3]; // [sp+274h] [bp-4614h]@40
  char v157; // [sp+28Ch] [bp-45FCh]@12
  int v158; // [sp+290h] [bp-45F8h]@13
  char v159; // [sp+694h] [bp-41F4h]@12
  int v160; // [sp+698h] [bp-41F0h]@12
  char v161; // [sp+A9Ch] [bp-3DECh]@11
  int v162; // [sp+AA0h] [bp-3DE8h]@12
  int v163; // [sp+EA0h] [bp-39E8h]@12
  void **v164; // [sp+EA4h] [bp-39E4h]@40
  int v165; // [sp+EA8h] [bp-39E0h]@63
  void **v166; // [sp+EACh] [bp-39DCh]@40
  void **v167; // [sp+1EE0h] [bp-29A8h]@40
  int v168; // [sp+1F50h] [bp-2938h]@40
  __int16 v169; // [sp+1F54h] [bp-2934h]@40
  int v170; // [sp+1F58h] [bp-2930h]@40
  int v171; // [sp+1F5Ch] [bp-292Ch]@40
  int v172; // [sp+1F60h] [bp-2928h]@40
  int v173; // [sp+1F64h] [bp-2924h]@40
  int v174; // [sp+1F68h] [bp-2920h]@40
  int v175; // [sp+1F6Ch] [bp-291Ch]@40
  int v176; // [sp+236Ch] [bp-251Ch]@40
  void **v177; // [sp+2370h] [bp-2518h]@22
  int v178; // [sp+2374h] [bp-2514h]@66
  void **v179; // [sp+2378h] [bp-2510h]@22
  int v180; // [sp+237Ch] [bp-250Ch]@66
  void **v181; // [sp+33ACh] [bp-14DCh]@22
  int v182; // [sp+341Ch] [bp-146Ch]@22
  __int16 v183; // [sp+3420h] [bp-1468h]@22
  int v184; // [sp+3424h] [bp-1464h]@22
  int v185; // [sp+3428h] [bp-1460h]@22
  int v186; // [sp+342Ch] [bp-145Ch]@22
  int v187; // [sp+3430h] [bp-1458h]@22
  int v188; // [sp+3434h] [bp-1454h]@22
  int v189; // [sp+3438h] [bp-1450h]@22
  int v190; // [sp+3838h] [bp-1050h]@22
  int v191; // [sp+383Ch] [bp-104Ch]@21
  int v192; // [sp+3840h] [bp-1048h]@22
  int v193; // [sp+3C40h] [bp-C48h]@22
  int v194; // [sp+3C44h] [bp-C44h]@5
  int v195; // [sp+3C48h] [bp-C40h]@5
  int v196; // [sp+404Ch] [bp-83Ch]@5
  int v197; // [sp+4050h] [bp-838h]@5
  int v198; // [sp+4454h] [bp-434h]@2
  int v199; // [sp+4458h] [bp-430h]@3
  int v200; // [sp+4858h] [bp-30h]@3
  RakNet *v201; // [sp+485Ch] [bp-2Ch]@1

  v6 = a1;
  v101 = a3;
  v7 = a4;
  v8 = a2;
  v103 = a1;
  v201 = _stack_chk_guard;
  std::promise<LevelArchiver::Result>::promise((int)v138);
  v9 = *(_QWORD *)v138;
  v138[0] = 0;
  v139 = 0;
  v10 = v140;
  v140 = 0;
  v141 = *(_DWORD *)(v8 + 16);
  *(_DWORD *)(v8 + 16) = v9;
  LODWORD(v9) = *(_DWORD *)(v8 + 20);
  *(_DWORD *)(v8 + 20) = HIDWORD(v9);
  v142 = v9;
  v143 = *(_DWORD *)(v8 + 24);
  *(_DWORD *)(v8 + 24) = v10;
  std::promise<LevelArchiver::Result>::~promise(&v141);
  std::promise<LevelArchiver::Result>::~promise(v138);
  v11 = *a6;
  __dmb();
  HIDWORD(v12) = &unk_28898CC;
  *(_DWORD *)(v8 + 12) = (HIDWORD(v11) - (signed int)v11) >> 2;
  LODWORD(v12) = 1;
  *v6 = v12;
  v102 = v8 + 8;
  if ( a5 != 1 )
  {
    FilePathManager::getWorldsPath((FilePathManager *)&v113, *(_DWORD *)(v8 + 32));
    v29 = (const char *)*v7;
    v30 = *(v113 - 3);
    v31 = *((_DWORD *)*v7 - 3);
    v150 = v113;
    v151 = v30;
    v152 = v29;
    v153 = v31;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v161, (int)&v150, 2);
    v32 = v113 - 3;
    if ( v113 - 3 != &dword_28898C0 )
    {
      v74 = (unsigned int *)(v113 - 1);
      if ( &pthread_create )
      {
        __dmb();
        do
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
      }
      else
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    }
    v150 = &v162;
    v151 = v163;
    v152 = "world_behavior_packs.json";
    v153 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v159, (int)&v150, 2);
    v152 = "world_resource_packs.json";
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v157, (int)&v150, 2);
    sub_21E94B4((void **)&v112, (const char *)&v160);
    v33 = LevelArchiver::_validatePremiumUpgradePacks(v8, &v112);
    v34 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v112 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    sub_21E94B4((void **)&v111, (const char *)&v158);
    v35 = LevelArchiver::_validatePremiumUpgradePacks(v8, &v111);
    v36 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v111 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v109);
    v110 = 1;
    FilePathManager::getWorldsPath((FilePathManager *)&v107, *(_DWORD *)(v8 + 32));
    v37 = sub_21E72F0((const void **)&v107, v7);
    v108 = (char *)*v37;
    *v37 = &unk_28898CC;
    ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v106, (const ZipUtils::ZipSettings *)&v109);
    v22 = ZipUtils::zip((int *)&v108, v101, v102, (int)&v106);
    ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v106);
    v38 = v108 - 12;
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v108 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v39 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v107 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
    if ( v33 == 1 )
      v40 = sub_21E94B4((void **)&v105, (const char *)&v160);
      LevelArchiver::_revertPremiumUpgradePacks((int)v40, &v105);
      v41 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v92 = (unsigned int *)(v105 - 4);
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
          j_j_j_j__ZdlPv_9(v41);
    if ( v35 == 1 )
      v42 = sub_21E94B4((void **)&v104, (const char *)&v158);
      LevelArchiver::_revertPremiumUpgradePacks((int)v42, &v104);
      v43 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v94 = (unsigned int *)(v104 - 4);
            v95 = __ldrex(v94);
          while ( __strex(v95 - 1, v94) );
          v95 = (*v94)--;
        if ( v95 <= 0 )
          j_j_j_j__ZdlPv_9(v43);
    ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v109);
LABEL_74:
    if ( v22 )
      *(_DWORD *)v103 = 2;
    else
      *(_DWORD *)v103 = 0;
      EntityInteraction::setInteractText((int *)v103 + 1, v101);
    goto LABEL_77;
  }
  FilePathManager::getWorldsPath((FilePathManager *)&v137, *(_DWORD *)(v8 + 32));
  v13 = *v7;
  v14 = *(_DWORD *)(v137 - 12);
  v15 = *((_DWORD *)*v7 - 3);
  v144 = v137;
  v145 = v14;
  v146 = v13;
  v147 = v15;
  v148 = "mcbundle";
  v149 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v198, (int)&v144, 3);
  v16 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v137 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  LODWORD(v133) = &v199;
  v134 = v200;
  Core::FileSystem::createDirectoryRecursively((int)&v135, &v133);
  if ( v136 )
    v136();
  ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v131);
  v132 = 1;
  FilePathManager::getWorldsPath((FilePathManager *)&v129, *(_DWORD *)(v8 + 32));
  v17 = (const char *)*v7;
  v18 = *(v129 - 3);
  v19 = *((_DWORD *)*v7 - 3);
  v150 = v129;
  v151 = v18;
  v152 = v17;
  v153 = v19;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v196, (int)&v150, 2);
  sub_21E94B4((void **)&v130, (const char *)&v197);
  v20 = v200;
  v127 = &unk_28898CC;
  sub_21E6FCC((const void **)&v127, *(_DWORD *)(LevelArchiver::EXTENSION_VANILLA - 12) + 6);
  sub_21E7408((const void **)&v127, "world.", 6u);
  sub_21E72F0((const void **)&v127, (const void **)&LevelArchiver::EXTENSION_VANILLA);
  LODWORD(v21) = v127;
  HIDWORD(v21) = *(v127 - 3);
  v150 = &v199;
  v151 = v20;
  *(_QWORD *)&v152 = v21;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v194, (int)&v150, 2);
  sub_21E94B4((void **)&v128, (const char *)&v195);
  ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v126, (const ZipUtils::ZipSettings *)&v131);
  v22 = ZipUtils::zip(&v130, &v128, v102, (int)&v126);
  ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v126);
  v23 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v128 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (char *)(v127 - 3);
  if ( v127 - 3 != &dword_28898C0 )
    v86 = v127 - 1;
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v130 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = v129 - 3;
  if ( v129 - 3 != &dword_28898C0 )
    v90 = (unsigned int *)(v129 - 1);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  if ( v22 )
    v27 = 1;
    v28 = 1;
    *(_DWORD *)v103 = 2;
  else
    FilePathManager::getWorldsPath((FilePathManager *)&v125, *(_DWORD *)(v8 + 32));
    v44 = (const char *)*v7;
    v45 = *(v125 - 3);
    v46 = *((_DWORD *)*v7 - 3);
    v150 = v125;
    v151 = v45;
    v152 = v44;
    v153 = v46;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v191, (int)&v150, 2);
    v47 = v125 - 3;
    if ( v125 - 3 != &dword_28898C0 )
      v96 = (unsigned int *)(v125 - 1);
          v97 = __ldrex(v96);
        while ( __strex(v97 - 1, v96) );
        v97 = (*v96)--;
      if ( v97 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    v150 = &v192;
    v151 = v193;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v188, (int)&v150, 2);
    HIDWORD(v48) = v190;
    sub_21B6308((int)&v181);
    v181 = &off_26D3AF0;
    v182 = 0;
    LODWORD(v48) = &v189;
    v183 = 0;
    v187 = 0;
    v186 = 0;
    v185 = 0;
    v184 = 0;
    v154 = v48;
    Core::FileStream::FileStream((int)&v177, (int)off_26D7EA4, &v154, 8);
    v177 = &off_26D7E64;
    v181 = &off_26D7E8C;
    v179 = &off_26D7E78;
    ResourcePackStack::deserialize(&v124, (char *)&v177, *(ResourcePackRepository **)(v8 + 52));
    v50 = (PackInstance *)(*(_QWORD *)(v124 + 4) >> 32);
    v49 = (PackInstance *)*(_QWORD *)(v124 + 4);
    if ( v49 == v50 )
      v100 = &v181;
      v28 = 0;
LABEL_40:
      v150 = &v192;
      v151 = v193;
      v152 = "world_resource_packs.json";
      v153 = -1;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v174, (int)&v150, 2);
      v57 = v176;
      _aeabi_memcpy4(&v189, &v175, v176 + 1);
      v190 = v57;
      LOBYTE(v175) = 0;
      v176 = 0;
      sub_21B6308((int)&v167);
      v167 = &off_26D3AF0;
      v168 = 0;
      v169 = 0;
      v173 = 0;
      v172 = 0;
      v171 = 0;
      v170 = 0;
      LODWORD(v155) = &v189;
      v156 = v57;
      Core::FileStream::FileStream((int)&v164, (int)off_26D7EA4, &v155, 8);
      v164 = &off_26D7E64;
      v167 = &off_26D7E8C;
      v166 = &off_26D7E78;
      ResourcePackStack::deserialize(&v122, (char *)&v164, *(ResourcePackRepository **)(v8 + 52));
      v59 = (PackInstance *)(*(_QWORD *)(v122 + 4) >> 32);
      v58 = (PackInstance *)*(_QWORD *)(v122 + 4);
      if ( v58 == v59 )
LABEL_57:
        v64 = (int *)&v164;
        v56 = v100;
        v65 = &v167;
        ZipUtils::ZipSettings::ZipSettings((int)&v120, 0);
        sub_21E94B4((void **)&v119, (const char *)&v199);
        ZipUtils::ZipSettings::ZipSettings((ZipUtils::ZipSettings *)&v118, (const ZipUtils::ZipSettings *)&v120);
        v22 = ZipUtils::zip(&v119, v101, v102, (int)&v118);
        ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v118);
        v66 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != &dword_28898C0 )
          v98 = (unsigned int *)(v119 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v99 = __ldrex(v98);
            while ( __strex(v99 - 1, v98) );
          }
          else
            v99 = (*v98)--;
          if ( v99 <= 0 )
            j_j_j_j__ZdlPv_9(v66);
        LODWORD(v114) = &v199;
        v115 = v200;
        Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v116, &v114);
        if ( v117 )
          v117();
        ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v120);
        v27 = 0;
        v22 = 0;
        while ( 1 )
          sub_21E94B4((void **)&v121, (const char *)&v199);
          LevelArchiver::_copyPackToTemp(v8, v58, &v121, v103);
          v62 = (void *)(v121 - 12);
          if ( (int *)(v121 - 12) != &dword_28898C0 )
            LODWORD(v60) = v121 - 4;
            if ( &pthread_create )
            {
              __dmb();
              do
              {
                v61 = __ldrex((unsigned int *)v60);
                HIDWORD(v60) = v61 - 1;
              }
              while ( __strex(v61 - 1, (unsigned int *)v60) );
            }
            else
              v61 = *(_DWORD *)v60;
              HIDWORD(v60) = *(_DWORD *)v60 - 1;
              *(_DWORD *)v60 = HIDWORD(v60);
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v62);
          v63 = 0;
          if ( *(_DWORD *)v103 == 2 )
            v63 = 1;
          v28 |= v63;
            break;
          v58 = (PackInstance *)((char *)v58 + 120);
          if ( v58 == v59 )
            goto LABEL_57;
        v27 = 1;
      if ( v122 )
        (*(void (**)(void))(*(_DWORD *)v122 + 4))();
      v164 = &off_26D7EEC;
      *v65 = &off_26D7F14;
      v166 = &off_26D7F00;
      Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)(v64 + 3), (int)&off_26D7F14, v60);
      v164 = &off_26D7F6C;
      *v65 = &off_26D7F80;
      v165 = 0;
      sub_21B6560(v64 + 1039);
      v22 = 0;
      while ( 1 )
        sub_21E94B4((void **)&v123, (const char *)&v199);
        LevelArchiver::_copyPackToTemp(v8, v49, &v123, v103);
        v54 = (void *)(v123 - 12);
        if ( (int *)(v123 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v123 - 4);
              v52 = __ldrex(v51);
              HIDWORD(v53) = v52 - 1;
            while ( __strex(v52 - 1, v51) );
            v52 = *v51;
            HIDWORD(v53) = *v51 - 1;
            *v51 = HIDWORD(v53);
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        v55 = 0;
        if ( *(_DWORD *)v103 == 2 )
          v55 = 1;
        v28 |= v55;
          break;
        v49 = (PackInstance *)((char *)v49 + 120);
        if ( v49 == v50 )
          goto LABEL_40;
      v27 = 1;
      v56 = &v181;
    if ( v124 )
      (*(void (**)(void))(*(_DWORD *)v124 + 4))();
    LODWORD(v53) = &v176;
    v177 = &off_26D7EEC;
    *v56 = &off_26D7F14;
    v179 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v180, (int)&off_26D7F14, v53);
    v177 = &off_26D7F6C;
    *v56 = &off_26D7F80;
    v178 = 0;
    sub_21B6560(&v181);
  ZipUtils::ZipSettings::~ZipSettings((ZipUtils::ZipSettings *)&v131);
  if ( !v27 )
    goto LABEL_74;
  if ( !(v28 & 1) )
    v67 = *((_DWORD *)v103 + 1);
    v68 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v67 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v68);
LABEL_77:
  result = (char *)(_stack_chk_guard - v201);
  if ( _stack_chk_guard != v201 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall LevelArchiver::archiveLevel(int a1, int a2, const void **a3, char a4, int *a5, int a6)
{
  int v6; // r8@1
  char v7; // r9@1
  const void **v8; // r10@1
  int v9; // r7@1
  __int64 v10; // r0@1
  int v11; // r3@1
  int v12; // r11@1
  const void **v13; // r0@1
  int v14; // r6@1
  void *v15; // r0@1
  int *v16; // r4@2
  int v17; // r5@4
  char v18; // ST08_1@4
  int v19; // r9@4
  const void **v20; // r0@4
  char *v21; // r4@4
  _DWORD *v22; // r8@4
  int *v23; // r8@4
  int v24; // t1@4
  void *v25; // r0@4
  void *v26; // r0@6
  void *v27; // r0@7
  char v28; // r5@8
  int v29; // r5@10
  void *v30; // r0@10
  _DWORD *v31; // r0@14
  __int64 v32; // r1@14
  char v33; // r4@14
  int v34; // r9@16
  int v35; // r8@18
  void (__fastcall *v36)(int *, int, signed int); // r3@18
  void *v37; // r2@20
  __int64 v38; // r0@20
  unsigned int v39; // r4@20
  void *v40; // r4@23
  void (__fastcall *v41)(_DWORD, _DWORD, _DWORD); // r0@23
  void *v42; // r1@23
  void *v43; // r4@27
  void *v44; // r7@27
  unsigned int *v45; // r2@29
  signed int v46; // r1@31
  int *v47; // r0@37
  void *v48; // r0@42
  char *v49; // r0@43
  void *v50; // r4@46
  void *v51; // r6@46
  unsigned int *v52; // r2@48
  signed int v53; // r1@50
  int *v54; // r0@56
  void *v55; // r0@62
  char *v56; // r0@64
  char *result; // r0@65
  unsigned int *v58; // r2@67
  signed int v59; // r1@69
  unsigned int *v60; // r1@71
  signed int v61; // r0@73
  unsigned int *v62; // r2@75
  signed int v63; // r1@77
  unsigned int *v64; // r2@90
  signed int v65; // r1@92
  unsigned int *v66; // r2@94
  signed int v67; // r1@96
  unsigned int *v68; // r2@98
  signed int v69; // r1@100
  unsigned int *v70; // r2@113
  signed int v71; // r1@115
  unsigned int *v72; // r1@117
  signed int v73; // r0@119
  unsigned int *v74; // r2@121
  signed int v75; // r1@123
  unsigned int *v76; // r2@125
  signed int v77; // r1@127
  unsigned int *v78; // r2@129
  signed int v79; // r1@131
  int v80; // [sp+4h] [bp-52Ch]@4
  int v81; // [sp+8h] [bp-528h]@14
  int *v82; // [sp+Ch] [bp-524h]@14
  char v83; // [sp+10h] [bp-520h]@23
  void (*v84)(void); // [sp+18h] [bp-518h]@23
  int v85; // [sp+20h] [bp-510h]@18
  int v86; // [sp+24h] [bp-50Ch]@19
  void (__fastcall *v87)(_DWORD, _DWORD, _DWORD); // [sp+2Ch] [bp-504h]@18
  int v88; // [sp+30h] [bp-500h]@19
  char *v89; // [sp+34h] [bp-4FCh]@20
  int v90; // [sp+38h] [bp-4F8h]@20
  char v91; // [sp+3Ch] [bp-4F4h]@20
  void *ptr; // [sp+40h] [bp-4F0h]@20
  void *v93; // [sp+44h] [bp-4ECh]@20
  char *v94; // [sp+48h] [bp-4E8h]@20
  void *v95; // [sp+4Ch] [bp-4E4h]@23
  void (*v96)(void); // [sp+54h] [bp-4DCh]@23
  signed int (__fastcall *v97)(int **); // [sp+58h] [bp-4D8h]@23
  _DWORD *v98; // [sp+5Ch] [bp-4D4h]@14
  __int64 v99; // [sp+64h] [bp-4CCh]@14
  int v100; // [sp+6Ch] [bp-4C4h]@14
  int v101; // [sp+70h] [bp-4C0h]@14
  char v102; // [sp+74h] [bp-4BCh]@14
  void (*v103)(void); // [sp+7Ch] [bp-4B4h]@14
  _BYTE *v104; // [sp+88h] [bp-4A8h]@14
  _BYTE *v105; // [sp+8Ch] [bp-4A4h]@14
  int v106; // [sp+90h] [bp-4A0h]@14
  int v107; // [sp+94h] [bp-49Ch]@8
  int v108; // [sp+98h] [bp-498h]@8
  int v109; // [sp+9Ch] [bp-494h]@8
  char v110; // [sp+A0h] [bp-490h]@8
  void (*v111)(void); // [sp+A8h] [bp-488h]@8
  char v112; // [sp+B0h] [bp-480h]@8
  int v113; // [sp+B4h] [bp-47Ch]@4
  int v114; // [sp+B8h] [bp-478h]@4
  int v115; // [sp+BCh] [bp-474h]@4
  int v116; // [sp+C0h] [bp-470h]@3
  int v117; // [sp+C4h] [bp-46Ch]@2
  int v118; // [sp+C8h] [bp-468h]@2
  int v119; // [sp+CCh] [bp-464h]@1
  int v120[2]; // [sp+D0h] [bp-460h]@1
  int v121; // [sp+D8h] [bp-458h]@1
  int v122; // [sp+DCh] [bp-454h]@1
  char *v123; // [sp+E0h] [bp-450h]@1
  int v124; // [sp+E4h] [bp-44Ch]@1
  int v125; // [sp+E8h] [bp-448h]@4
  int v126; // [sp+ECh] [bp-444h]@4
  char *v127; // [sp+F0h] [bp-440h]@4
  int v128; // [sp+F4h] [bp-43Ch]@4
  char v129; // [sp+100h] [bp-430h]@4
  int v130; // [sp+104h] [bp-42Ch]@4
  RakNet *v131; // [sp+508h] [bp-28h]@1

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v131 = _stack_chk_guard;
  std::promise<LevelArchiver::Result>::promise((int)v120);
  v10 = *(_QWORD *)v120;
  v120[0] = 0;
  v120[1] = 0;
  v11 = v121;
  v121 = 0;
  v12 = v9 + 16;
  v122 = *(_DWORD *)(v9 + 16);
  *(_DWORD *)v12 = v10;
  LODWORD(v10) = *(_DWORD *)(v9 + 20);
  *(_DWORD *)(v12 + 4) = HIDWORD(v10);
  v123 = (char *)v10;
  v124 = *(_DWORD *)(v9 + 24);
  *(_DWORD *)(v12 + 8) = v11;
  std::promise<LevelArchiver::Result>::~promise(&v122);
  std::promise<LevelArchiver::Result>::~promise(v120);
  v122 = 1;
  v123 = (char *)&unk_28898CC;
  FilePathManager::getWorldsPath((FilePathManager *)&v119, *(_DWORD *)(v9 + 32));
  v13 = sub_21E72F0((const void **)&v119, v8);
  v14 = (int)*v13;
  *v13 = &unk_28898CC;
  v15 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
  {
    v58 = (unsigned int *)(v119 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
    }
    else
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  }
  ZipUtils::ZipProgress::clear((ZipUtils::ZipProgress *)(v9 + 8));
  *(_DWORD *)(v9 + 28) = 2;
  LevelArchiver::_printStartMessage((LevelArchiver *)v9);
  v117 = v14;
  v16 = (int *)(v14 - 12);
  v118 = *(_DWORD *)(v14 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v117) )
    sub_21E8AF4(&v116, a5);
    if ( *(_DWORD *)(v116 - 12) )
      goto LABEL_155;
    FilePathManager::getLevelArchivePath((FilePathManager *)&v114, *(int **)(v9 + 32));
    v17 = v114;
    v18 = v7;
    v19 = *(_DWORD *)(v114 - 12);
    sub_21E8AF4(&v113, (int *)v8);
    sub_21E7408((const void **)&v113, ".", 1u);
    v80 = v6;
    v20 = sub_21E72F0((const void **)&v113, (const void **)&LevelArchiver::EXTENSION_VANILLA);
    v21 = (char *)*v20;
    v22 = *v20;
    *v20 = &unk_28898CC;
    v24 = *(v22 - 3);
    v23 = v22 - 3;
    v125 = v17;
    v126 = v19;
    v127 = v21;
    v128 = v24;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v129, (int)&v125, 2);
    sub_21E94B4((void **)&v115, (const char *)&v130);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v116, &v115);
    v7 = v18;
    v25 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v115 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
      }
      else
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    if ( v23 != &dword_28898C0 )
      v72 = (unsigned int *)(v21 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v16 = (int *)(v14 - 12);
    v6 = v80;
    v26 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v113 - 4);
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v114 - 12);
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v114 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    FilePathManager::getLevelArchivePath((FilePathManager *)&v107, *(int **)(v9 + 32));
    v108 = v107;
    v109 = *(_DWORD *)(v107 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v110, (__int64 *)&v108);
    v28 = v112;
    v112 |= 2u;
    if ( v111 )
      v111();
    v29 = v28 & 1;
    v30 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v107 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    if ( v29 )
LABEL_155:
      v82 = v16;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      v100 = v14;
      v81 = v14;
      v101 = *(_DWORD *)(v14 - 12);
      v31 = operator new(8u);
      LODWORD(v32) = sub_191A8B8;
      *v31 = &v104;
      v31[1] = v9;
      HIDWORD(v32) = sub_191A640;
      v98 = v31;
      v99 = v32;
      Core::FileSystem::iterateOverDirectory((int)&v102, (__int64 *)&v100, 642LL, (int)&v98);
      v33 = v7;
      if ( v103 )
        v103();
      v34 = v6;
      if ( (_DWORD)v99 )
        ((void (*)(void))v99)();
      v85 = v9;
      v35 = TaskGroup::DISK;
      v87 = 0;
      v36 = *(void (__fastcall **)(int *, int, signed int))(a6 + 8);
      if ( v36 )
        v36(&v86, a6, 2);
        v88 = *(_DWORD *)(a6 + 12);
        v87 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a6 + 8);
      sub_21E8AF4((int *)&v89, &v116);
      sub_21E8AF4(&v90, (int *)v8);
      v91 = v33;
      v37 = 0;
      v38 = *(_QWORD *)&v104;
      ptr = 0;
      v93 = 0;
      v94 = 0;
      v39 = (v105 - v104) >> 2;
      if ( v39 )
        if ( v39 >= 0x40000000 )
          sub_21E57F4();
        v37 = operator new(v105 - v104);
        v38 = *(_QWORD *)&v104;
      ptr = v37;
      v93 = v37;
      v94 = (char *)v37 + 4 * v39;
      v93 = (void *)std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                      v38,
                      SHIDWORD(v38),
                      (int)v37);
      v96 = 0;
      v40 = operator new(0x2Cu);
      *(_DWORD *)v40 = v85;
      *(_QWORD *)((char *)v40 + 4) = *(_QWORD *)&v86;
      v41 = v87;
      *((_DWORD *)v40 + 3) = v41;
      *((_DWORD *)v40 + 4) = v88;
      *((_DWORD *)v40 + 5) = v89;
      v89 = (char *)&unk_28898CC;
      sub_21E8AF4((int *)v40 + 6, &v90);
      *((_BYTE *)v40 + 28) = v91;
      *((_DWORD *)v40 + 8) = ptr;
      v42 = v93;
      *((_DWORD *)v40 + 9) = v42;
      *((_DWORD *)v40 + 10) = v94;
      v95 = v40;
      v96 = (void (*)(void))sub_191AA7C;
      v97 = sub_191A8F4;
      v84 = 0;
      TaskGroup::queue(v35, (int)&v95, (int)&v83, 1u, 0xFFFFFFFF);
      if ( v84 )
        v84();
      if ( v96 )
        v96();
      v44 = v93;
      v43 = ptr;
      if ( ptr != v93 )
        {
          v47 = (int *)(*(_DWORD *)v43 - 12);
          if ( v47 != &dword_28898C0 )
          {
            v45 = (unsigned int *)(*(_DWORD *)v43 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v46 = __ldrex(v45);
              while ( __strex(v46 - 1, v45) );
            }
            else
              v46 = (*v45)--;
            if ( v46 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
          }
          v43 = (char *)v43 + 4;
        }
        while ( v43 != v44 );
        v43 = ptr;
      if ( v43 )
        operator delete(v43);
      v48 = (void *)(v90 - 12);
      if ( (int *)(v90 - 12) != &dword_28898C0 )
        v66 = (unsigned int *)(v90 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v67 = __ldrex(v66);
          while ( __strex(v67 - 1, v66) );
        else
          v67 = (*v66)--;
        if ( v67 <= 0 )
          j_j_j_j__ZdlPv_9(v48);
      v49 = v89 - 12;
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v68 = (unsigned int *)(v89 - 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 <= 0 )
          j_j_j_j__ZdlPv_9(v49);
      if ( v87 )
        v87(&v86, &v86, 3);
      std::__basic_future<LevelArchiver::Result>::__basic_future(v34, v12);
      v51 = v105;
      v50 = v104;
      if ( v104 != v105 )
          v54 = (int *)(*(_DWORD *)v50 - 12);
          if ( v54 != &dword_28898C0 )
            v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
          v50 = (char *)v50 + 4;
        while ( v50 != v51 );
        v50 = v104;
      v14 = v81;
      if ( v50 )
        operator delete(v50);
      v16 = v82;
      v122 = 1;
      LevelArchiver::_printResultMessage(v9, &v122);
      *(_DWORD *)(v9 + 28) = 0;
      std::promise<LevelArchiver::Result>::set_value((unsigned __int64 *)(v9 + 16), (int)&v122);
      std::__basic_future<LevelArchiver::Result>::__basic_future(v80, v9 + 16);
    v55 = (void *)(v116 - 12);
    if ( (int *)(v116 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v116 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v55);
  else
    v122 = 2;
    LevelArchiver::_printResultMessage(v9, &v122);
    *(_DWORD *)(v9 + 28) = 0;
    std::promise<LevelArchiver::Result>::set_value((unsigned __int64 *)(v9 + 16), (int)&v122);
    std::__basic_future<LevelArchiver::Result>::__basic_future(v6, v9 + 16);
  if ( v16 != &dword_28898C0 )
    v60 = (unsigned int *)(v14 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v56 = v123 - 12;
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v123 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  result = (char *)(_stack_chk_guard - v131);
  if ( _stack_chk_guard != v131 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall LevelArchiver::_printResultMessage(int a1, _DWORD *a2)
{
  LevelArchiver::_printResultMessage(a1, a2);
}


signed int __fastcall LevelArchiver::_importLegacyWorld(int a1, int *a2, _DWORD **a3)
{
  int v3; // r6@1
  _DWORD **v4; // r11@1
  int *v5; // r8@1
  void *v6; // r0@2
  __int64 v7; // r1@2
  void *v8; // r0@4
  unsigned __int64 v9; // r1@5
  int v10; // r3@5
  char v11; // r5@5
  signed int v12; // r4@8
  int v13; // r0@10
  int v14; // r1@10
  unsigned int v15; // r2@10
  void (*v16)(void); // r3@10
  int v17; // r9@10
  int v18; // r0@15
  unsigned int *v19; // r7@18
  unsigned int *v20; // r8@18
  unsigned int v21; // r5@18
  int v22; // r2@19
  int v23; // r0@20
  bool v24; // zf@20
  bool v25; // nf@23
  int v26; // r2@26
  int v27; // r1@28
  int v28; // r2@28
  void (__fastcall *v29)(_DWORD, int); // r3@28
  signed int v30; // r10@28
  signed int v31; // r6@30
  unsigned int v32; // r7@31
  __int64 v33; // r6@32
  unsigned __int64 v34; // r2@32
  int v35; // r1@32
  int v36; // r2@32
  int v37; // r5@32
  void (__fastcall *v38)(_DWORD, int); // r3@32
  int v39; // r1@36
  int v40; // r2@36
  void (__fastcall *v41)(_DWORD, int); // r3@36
  signed __int64 v42; // r2@43
  signed int v43; // r0@43
  signed int v44; // r1@45
  int *v45; // r0@56
  signed int v46; // r0@59
  unsigned int *v47; // r2@67
  unsigned int v48; // r0@76
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  signed int v51; // r1@90
  _DWORD *v52; // r0@90
  void *v53; // r0@97
  void *v54; // r0@98
  void *v55; // r0@99
  RakNet *v56; // r1@100
  unsigned int *v58; // r2@103
  signed int v59; // r1@105
  unsigned int *v60; // r2@111
  signed int v61; // r1@113
  unsigned int *v62; // r2@115
  signed int v63; // r1@117
  int (**v64)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+40h] [bp-21370h]@18
  int (**v65)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+44h] [bp-2136Ch]@18
  unsigned __int64 v66; // [sp+50h] [bp-21360h]@75
  int v67; // [sp+5Ch] [bp-21354h]@93
  int v68; // [sp+60h] [bp-21350h]@93
  char v69; // [sp+64h] [bp-2134Ch]@93
  void (*v70)(void); // [sp+6Ch] [bp-21344h]@93
  unsigned int v71; // [sp+78h] [bp-21338h]@91
  int v72; // [sp+7Ch] [bp-21334h]@91
  char v73; // [sp+80h] [bp-21330h]@91
  void (*v74)(void); // [sp+88h] [bp-21328h]@91
  unsigned int v75; // [sp+94h] [bp-2131Ch]@88
  int v76; // [sp+98h] [bp-21318h]@88
  char v77; // [sp+9Ch] [bp-21314h]@88
  void (*v78)(void); // [sp+A4h] [bp-2130Ch]@88
  char v79; // [sp+B0h] [bp-21300h]@41
  void (*v80)(void); // [sp+B8h] [bp-212F8h]@41
  unsigned int v81; // [sp+C4h] [bp-212ECh]@37
  int v82; // [sp+C8h] [bp-212E8h]@37
  char v83; // [sp+CCh] [bp-212E4h]@37
  void (*v84)(void); // [sp+D4h] [bp-212DCh]@37
  char v85; // [sp+E0h] [bp-212D0h]@32
  void (__fastcall *v86)(_DWORD, int); // [sp+E8h] [bp-212C8h]@32
  unsigned __int8 v87; // [sp+F0h] [bp-212C0h]@32
  __int64 v88; // [sp+F4h] [bp-212BCh]@31
  char v89; // [sp+FCh] [bp-212B4h]@31
  void (*v90)(void); // [sp+104h] [bp-212ACh]@53
  char v91; // [sp+10Ch] [bp-212A4h]@31
  void *v92; // [sp+110h] [bp-212A0h]@31
  int v93; // [sp+114h] [bp-2129Ch]@31
  unsigned int v94; // [sp+118h] [bp-21298h]@29
  int v95; // [sp+11Ch] [bp-21294h]@29
  char v96; // [sp+120h] [bp-21290h]@29
  void (*v97)(void); // [sp+128h] [bp-21288h]@29
  __int64 v98; // [sp+134h] [bp-2127Ch]@26
  char v99; // [sp+13Ch] [bp-21274h]@26
  void (*v100)(void); // [sp+144h] [bp-2126Ch]@26
  int *v101; // [sp+154h] [bp-2125Ch]@26
  char v102; // [sp+158h] [bp-21258h]@77
  unsigned int v103; // [sp+1B0h] [bp-21200h]@15
  int v104; // [sp+1B4h] [bp-211FCh]@15
  char v105; // [sp+1B8h] [bp-211F8h]@15
  void (*v106)(void); // [sp+1C0h] [bp-211F0h]@15
  unsigned int v107; // [sp+1CCh] [bp-211E4h]@12
  int v108; // [sp+1D0h] [bp-211E0h]@12
  char v109; // [sp+1D4h] [bp-211DCh]@12
  void (*v110)(void); // [sp+1DCh] [bp-211D4h]@12
  __int64 v111; // [sp+1E8h] [bp-211C8h]@11
  int v112; // [sp+1F8h] [bp-211B8h]@5
  int v113; // [sp+1FCh] [bp-211B4h]@5
  char v114; // [sp+200h] [bp-211B0h]@5
  void (*v115)(void); // [sp+208h] [bp-211A8h]@5
  char v116; // [sp+210h] [bp-211A0h]@5
  int v117; // [sp+214h] [bp-2119Ch]@5
  void *v118; // [sp+218h] [bp-21198h]@2
  __int64 v119; // [sp+220h] [bp-21190h]@2
  int v120; // [sp+228h] [bp-21188h]@2
  int v121; // [sp+22Ch] [bp-21184h]@2
  int v122; // [sp+230h] [bp-21180h]@2
  unsigned int v123; // [sp+234h] [bp-2117Ch]@2
  int v124; // [sp+238h] [bp-21178h]@1
  int v125; // [sp+23Ch] [bp-21174h]@1
  int v126; // [sp+240h] [bp-21170h]@1
  unsigned __int64 v127; // [sp+248h] [bp-21168h]@5
  int *v128; // [sp+250h] [bp-21160h]@5
  int v129; // [sp+254h] [bp-2115Ch]@5
  char v130; // [sp+264h] [bp-2114Ch]@32
  int v131; // [sp+20264h] [bp-114Ch]@26
  int v132; // [sp+20268h] [bp-1148h]@26
  int v133; // [sp+20668h] [bp-D48h]@1
  int v134; // [sp+2066Ch] [bp-D44h]@18
  int v135; // [sp+20670h] [bp-D40h]@31
  int v136; // [sp+20A70h] [bp-940h]@31
  int v137; // [sp+20A74h] [bp-93Ch]@19
  int v138; // [sp+20B74h] [bp-83Ch]@5
  int v139; // [sp+20B78h] [bp-838h]@5
  int v140; // [sp+20F7Ch] [bp-434h]@2
  int v141; // [sp+20F80h] [bp-430h]@2
  RakNet *v142; // [sp+21384h] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v5 = &v133;
  v142 = _stack_chk_guard;
  sub_21E8AF4(&v126, a2);
  v124 = v126;
  v125 = *(_DWORD *)(v126 - 12);
  if ( !Core::FileSystem::fileOrDirectoryExists((__int64 *)&v124) )
  {
    v12 = 0;
    **v4 = 2;
    goto LABEL_99;
  }
  FilePathManager::getWorldsPath((FilePathManager *)&v120, *(_DWORD *)(v3 + 32));
  v121 = v120;
  v122 = *(_DWORD *)(v120 - 12);
  v6 = operator new(1u);
  LODWORD(v7) = sub_191CB12;
  v118 = v6;
  HIDWORD(v7) = sub_191CB08;
  v119 = v7;
  Core::FileSystem::createUniquePathFromSeed((int)&v140, (__int64 *)&v121, (int)&v118);
  sub_21E94B4((void **)&v123, (const char *)&v141);
  if ( (_DWORD)v119 )
    ((void (*)(void))v119)();
  v8 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v120 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  LODWORD(v9) = v123;
  HIDWORD(v9) = *(_DWORD *)(v123 - 12);
  v10 = *(_DWORD *)(LevelArchiver::IMPORT_LOCK_FILE - 12);
  v127 = v9;
  v128 = (int *)LevelArchiver::IMPORT_LOCK_FILE;
  v129 = v10;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v138, (int)&v127, 2);
  sub_21E94B4((void **)&v117, (const char *)&v139);
  v112 = v117;
  v113 = *(_DWORD *)(v117 - 12);
  Core::FileSystem::createEmptyFile((int)&v114, (__int64 *)&v112);
  v11 = v116;
  v116 |= 2u;
  if ( v115 )
    v115();
  if ( !(v11 & 1) )
    **v4 = 1;
    goto LABEL_97;
  v13 = j_unzOpen64(v126, 0);
  v17 = v13;
  if ( !v13 )
    goto LABEL_90;
  if ( j_unzGetGlobalInfo64(v13, (int)&v111) )
    **v4 = 3;
    v107 = v123;
    v108 = *(_DWORD *)(v123 - 12);
    Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v109, (__int64 *)&v107);
    if ( v110 )
      v110();
LABEL_14:
    v5 = &v133;
  v18 = v111;
  __dmb();
  *(_DWORD *)(v3 + 12) = v18;
  v103 = v123;
  v104 = *(_DWORD *)(v123 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v105, (__int64 *)&v103);
  v16 = v106;
  if ( v106 )
    v106();
  v14 = HIDWORD(v111);
  if ( !v111 )
LABEL_90:
    v51 = j_unzClose(v17, v14, v15, (void (__fastcall *)(_DWORD, int))v16);
    v52 = *v4;
    if ( v51 )
      *v52 = 3;
      v71 = v123;
      v72 = *(_DWORD *)(v123 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v73, (__int64 *)&v71);
      if ( v74 )
      {
        v74();
        v12 = 0;
      }
      else
      *v52 = 0;
      EntityInteraction::setInteractText(v52 + 1, (int *)&v123);
      v67 = v117;
      v68 = *(_DWORD *)(v117 - 12);
      Core::FileSystem::deleteFile((int)&v69, (__int64 *)&v67);
      if ( v70 )
        v70();
      v12 = 1;
  v19 = (unsigned int *)&v134;
  v20 = (unsigned int *)(v3 + 8);
  v21 = 0;
  v15 = 0;
  v65 = &pthread_create;
  v64 = &pthread_create;
  do
    v66 = __PAIR__(v15, v21);
    __dmb();
    do
      v48 = __ldrex(v20);
    while ( __strex(v48 + 1, v20) );
    if ( j_unzGetCurrentFileInfo64(v17, (int)&v102, (int)&v137, 0x100u, 0, 0, 0, 0) )
      v5 = &v133;
      goto LABEL_88;
    v22 = strlen((const char *)&v137);
    if ( v22 < 0 )
LABEL_25:
      v22 = 0;
      while ( 1 )
        v23 = *((_BYTE *)&v137 + v22);
        v24 = v23 == 47;
        if ( v23 != 47 )
          v24 = v23 == 92;
        if ( v24 )
          break;
        v24 = v22 == 0;
        v25 = v22-- < 0;
        if ( v25 || v24 )
          goto LABEL_25;
    sub_21E91E0((void **)&v101, (unsigned int)&v137, v22);
    v127 = __PAIR__(*(_DWORD *)(v123 - 12), v123);
    v128 = &v137;
    v129 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>(v19, (int)&v127, 2);
    v26 = *(v101 - 3);
    v128 = v101;
    v129 = v26;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v131, (int)&v127, 2);
    LODWORD(v98) = &v132;
    HIDWORD(v98) = v133;
    Core::FileSystem::createOneDirectory((int)&v99, &v98);
    if ( v100 )
      v100();
    v30 = j_unzOpenCurrentFile(v17);
    if ( v30 )
      j_unzClose(v17, v27, v28, v29);
      **v4 = 3;
      v94 = v123;
      v95 = *(_DWORD *)(v123 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v96, (__int64 *)&v94);
      v16 = v97;
      if ( v97 )
        v97();
        v31 = 1;
      goto LABEL_56;
    v92 = 0;
    v93 = 0;
    LODWORD(v88) = &v135;
    HIDWORD(v88) = v136;
    v32 = (unsigned int)v64 & 0xFFFFFFC0 | 0x2E;
    Core::File::open((int)&v89, (int)&v92, &v88, v32 & 0xEE);
    v64 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v64 & 0xFFFFFFC0 | 0x2E);
    v65 = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))((unsigned int)v65 & 0xFFFFFF00 | v32 & 0xEE);
    v91 |= 2u;
      v33 = j_unzReadCurrentFile(v17, (int)&v130, 0x20000u);
      LODWORD(v34) = &v130;
      Core::FileImpl::write((Core::FileImpl *)&v85, v92, v34, v33);
      v37 = v87;
      v87 |= 2u;
      v38 = v86;
      if ( v86 )
        ((void (__fastcall *)(char *, char *, signed int))v86)(&v85, &v85, 3);
      if ( !(_DWORD)v33 )
        break;
      v35 = v33 & (v37 << 31 >> 31) ^ v33;
    while ( v33 == __PAIR__((signed int)(v33 & (v37 << 31)) >> 31, (unsigned int)v33 & (v37 << 31 >> 31)) );
    v30 = j_unzCloseCurrentFile(v17, v35, v36, v38);
      j_unzClose(v17, v39, v40, v41);
      v81 = v123;
      v82 = *(_DWORD *)(v123 - 12);
      Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v83, (__int64 *)&v81);
      if ( v84 )
        v84();
        v19 = (unsigned int *)&v134;
      if ( v92 )
        Core::File::close((Core::File *)&v79, (int *)&v92);
        if ( v80 )
          v80();
      v21 = v66;
      v19 = (unsigned int *)&v134;
      v31 = 0;
      v30 = 0;
      v42 = v66 + 1;
      v43 = 0;
      if ( (signed int)v66 + 1 >= (unsigned int)v111 )
        v43 = 1;
      v44 = 0;
      if ( HIDWORD(v42) >= HIDWORD(v111) )
        v44 = 1;
      if ( HIDWORD(v42) == HIDWORD(v111) )
        v44 = v43;
      if ( v44 )
        goto LABEL_53;
      v30 = j_unzGoToNextFile(v17);
    v21 = v66;
LABEL_53:
    if ( v90 )
      v90();
    Core::File::~File((Core::File *)&v92);
LABEL_56:
    v14 = (int)v101;
    v45 = v101 - 3;
    if ( v101 - 3 != &dword_28898C0 )
      v47 = (unsigned int *)(v101 - 1);
      if ( &pthread_create )
        __dmb();
        do
        {
          v14 = __ldrex(v47);
          v16 = (void (*)(void))(v14 - 1);
        }
        while ( __strex(v14 - 1, v47) );
        v14 = *v47;
        v16 = (void (*)(void))(*v47 - 1);
        *v47 = (unsigned int)v16;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v15 = (__PAIR__(HIDWORD(v66), v21++) + 1) >> 32;
    if ( v31 )
      goto LABEL_14;
      break;
    v46 = 0;
    if ( v21 >= (unsigned int)v111 )
      v46 = 1;
    v14 = 0;
    if ( v15 >= HIDWORD(v111) )
      v14 = 1;
    if ( v15 == HIDWORD(v111) )
      v14 = v46;
  while ( !v14 );
  if ( !v30 )
LABEL_88:
  j_unzClose(v17, v14, v15, (void (__fastcall *)(_DWORD, int))v16);
  **v4 = 3;
  v75 = v123;
  v76 = *(_DWORD *)(v123 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v77, (__int64 *)&v75);
  if ( v78 )
    v78();
  else
LABEL_97:
  v53 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v117 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v123 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
LABEL_99:
  v55 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v126 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (RakNet *)v5[839];
  if ( _stack_chk_guard != v56 )
    _stack_chk_fail(_stack_chk_guard - v56);
  return v12;
}


int __fastcall LevelArchiver::_printMessage(int result)
{
  if ( *(_DWORD *)(result + 44) )
    result = (*(int (__fastcall **)(_DWORD))(result + 48))(result + 36);
  return result;
}


void __fastcall LevelArchiver::_printResultMessage(int a1, _DWORD *a2)
{
  int v2; // r4@1
  int v3; // r0@1
  void *v4; // r0@6
  unsigned int *v5; // r2@7
  signed int v6; // r1@9
  int v7; // [sp+8h] [bp-30h]@20
  int v8; // [sp+10h] [bp-28h]@4
  int v9; // [sp+18h] [bp-20h]@27
  int v10; // [sp+20h] [bp-18h]@13

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 28);
  if ( *a2 )
  {
    if ( v3 == 1 )
    {
      sub_21E94B4((void **)&v7, "level.import.failed");
      if ( *(_DWORD *)(v2 + 44) )
        (*(void (__fastcall **)(int, int *))(v2 + 48))(v2 + 36, &v7);
      v4 = (void *)(v7 - 12);
      if ( (int *)(v7 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
          goto LABEL_35;
        }
        goto LABEL_34;
      }
    }
    else if ( v3 == 2 )
      sub_21E94B4((void **)&v8, "level.export.failed");
        (*(void (__fastcall **)(int, int *))(v2 + 48))(v2 + 36, &v8);
      v4 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v8 - 4);
LABEL_34:
        v6 = (*v5)--;
LABEL_35:
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v4);
        return;
  }
  else if ( v3 == 1 )
    sub_21E94B4((void **)&v9, "level.import.success");
    if ( *(_DWORD *)(v2 + 44) )
      (*(void (__fastcall **)(_DWORD, int *))(v2 + 48))(v2 + 36, &v9);
    v4 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
        goto LABEL_35;
      goto LABEL_34;
  else if ( v3 == 2 )
    sub_21E94B4((void **)&v10, "level.export.success");
      (*(void (__fastcall **)(_DWORD, int *))(v2 + 48))(v2 + 36, &v10);
    v4 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v5 = (unsigned int *)(v10 - 4);
}


void __fastcall LevelArchiver::generateFilePickerSettings(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  unsigned int *v18; // r2@24
  signed int v19; // r1@26
  unsigned int *v20; // r2@28
  signed int v21; // r1@30
  unsigned int *v22; // r2@32
  signed int v23; // r1@34
  unsigned int *v24; // r2@36
  signed int v25; // r1@38
  int v26; // [sp+8h] [bp-40h]@13
  int v27; // [sp+Ch] [bp-3Ch]@13
  int v28; // [sp+14h] [bp-34h]@11
  int v29; // [sp+18h] [bp-30h]@11
  int v30; // [sp+20h] [bp-28h]@5
  int v31; // [sp+24h] [bp-24h]@5
  int v32; // [sp+2Ch] [bp-1Ch]@3
  int v33; // [sp+30h] [bp-18h]@3

  v3 = a3;
  v4 = a1;
  FilePickerSettings::FilePickerSettings(a1);
  if ( v3 == 1 )
  {
    sub_21E94B4((void **)&v28, "gui.worldTemplate");
    I18n::get(&v29, (int **)&v28);
    FilePickerSettings::addFileDescription(v4, (int *)&LevelArchiver::EXTENSION_TEMPLATE, &v29, 1);
    v11 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v11);
    }
    v12 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v28 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v26, "gui.pickWorld");
    I18n::get(&v27, (int **)&v26);
    FilePickerSettings::setPickerTitle(v4, &v27);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v27 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v8 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v26 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_45;
      goto LABEL_44;
  }
  else if ( !v3 )
    sub_21E94B4((void **)&v32, "gui.minecraftWorld");
    I18n::get(&v33, (int **)&v32);
    FilePickerSettings::addFileDescription(v4, &LevelArchiver::EXTENSION_VANILLA, &v33, 1);
    v5 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v33 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v32 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v30, "gui.pickWorld");
    I18n::get(&v31, (int **)&v30);
    FilePickerSettings::setPickerTitle(v4, &v31);
    v7 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v31 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v30 - 4);
LABEL_44:
      v10 = (*v9)--;
LABEL_45:
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
      return;
}


void __fastcall LevelArchiver::_printStartMessage(LevelArchiver *this)
{
  LevelArchiver::_printStartMessage(this);
}


void __fastcall LevelArchiver::_revertPremiumUpgradePacks(int a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r0@1
  void *v4; // r0@8
  unsigned int *v5; // r2@10
  signed int v6; // r1@12
  int v7; // [sp+4h] [bp-7Ch]@6
  int v8; // [sp+8h] [bp-78h]@6
  char v9; // [sp+Ch] [bp-74h]@6
  void (*v10)(void); // [sp+14h] [bp-6Ch]@6
  int v11; // [sp+20h] [bp-60h]@4
  int v12; // [sp+24h] [bp-5Ch]@4
  int v13; // [sp+28h] [bp-58h]@4
  int v14; // [sp+2Ch] [bp-54h]@4
  char v15; // [sp+30h] [bp-50h]@4
  void (*v16)(void); // [sp+38h] [bp-48h]@4
  int v17; // [sp+44h] [bp-3Ch]@2
  int v18; // [sp+48h] [bp-38h]@2
  char v19; // [sp+4Ch] [bp-34h]@2
  void (*v20)(void); // [sp+54h] [bp-2Ch]@2
  int v21; // [sp+60h] [bp-20h]@1
  int v22; // [sp+64h] [bp-1Ch]@1
  int v23; // [sp+68h] [bp-18h]@1

  v2 = a2;
  v3 = sub_21E8AF4(&v23, a2);
  sub_21E7408((const void **)v3, ".backup", 7u);
  v21 = v23;
  v22 = *(_DWORD *)(v23 - 12);
  if ( Core::FileSystem::fileExists((__int64 *)&v21) )
  {
    v17 = *v2;
    v18 = *(_DWORD *)(v17 - 12);
    Core::FileSystem::deleteFile((int)&v19, (__int64 *)&v17);
    if ( v20 )
      v20();
    v13 = v23;
    v14 = *(_DWORD *)(v23 - 12);
    v11 = *v2;
    v12 = *(_DWORD *)(v11 - 12);
    Core::FileSystem::copyFile((int)&v15, (__int64 *)&v13, (__int64 *)&v11);
    if ( v16 )
      v16();
    v7 = v23;
    v8 = *(_DWORD *)(v23 - 12);
    Core::FileSystem::deleteFile((int)&v9, (__int64 *)&v7);
    if ( v10 )
      v10();
  }
  v4 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v5 = (unsigned int *)(v23 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


void __fastcall LevelArchiver::_printStartMessage(LevelArchiver *this)
{
  LevelArchiver *v1; // r4@1
  int v2; // r0@1
  void *v3; // r0@5
  unsigned int *v4; // r2@6
  signed int v5; // r1@8
  unsigned int *v6; // r2@14
  signed int v7; // r1@16
  int v8; // [sp+4h] [bp-2Ch]@10
  int v9; // [sp+Ch] [bp-24h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 7);
  if ( v2 == 1 )
  {
    sub_21E94B4((void **)&v8, "level.import.started");
    if ( *((_DWORD *)v1 + 11) )
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 12))((char *)v1 + 36, &v8);
    v3 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
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
        goto LABEL_23;
    }
  }
  else if ( v2 == 2 )
    sub_21E94B4((void **)&v9, "level.export.started");
      (*((void (__fastcall **)(_DWORD, _DWORD))v1 + 12))((char *)v1 + 36, &v9);
    v3 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v4 = (unsigned int *)(v9 - 4);
          v5 = __ldrex(v4);
        while ( __strex(v5 - 1, v4) );
        v5 = (*v4)--;
      if ( v5 <= 0 )
LABEL_23:
        j_j_j_j__ZdlPv_9(v3);
        return;
}


signed int __fastcall LevelArchiver::_importWorld(int a1, int *a2, _DWORD *a3)
{
  int v3; // r6@1
  _DWORD *v4; // r4@1
  int *v5; // r5@1
  void *v6; // r0@2
  __int64 v7; // r1@2
  void *v8; // r0@4
  char v9; // r7@7
  _DWORD *v10; // r0@10
  signed int v11; // r4@10
  _DWORD *v12; // r0@11
  signed int v13; // r5@12
  _DWORD *v14; // r0@12
  void *v15; // r0@19
  void *v16; // r0@20
  void *v17; // r0@21
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  unsigned int *v21; // r2@29
  signed int v22; // r1@31
  unsigned int *v23; // r2@37
  signed int v24; // r1@39
  unsigned int *v25; // r2@41
  signed int v26; // r1@43
  int v27; // [sp+4h] [bp-504h]@15
  int v28; // [sp+8h] [bp-500h]@15
  char v29; // [sp+Ch] [bp-4FCh]@15
  void (*v30)(void); // [sp+14h] [bp-4F4h]@15
  unsigned int v31; // [sp+20h] [bp-4E8h]@13
  int v32; // [sp+24h] [bp-4E4h]@13
  char v33; // [sp+28h] [bp-4E0h]@13
  void (*v34)(void); // [sp+30h] [bp-4D8h]@13
  char v35; // [sp+3Ch] [bp-4CCh]@12
  int v36; // [sp+78h] [bp-490h]@7
  int v37; // [sp+7Ch] [bp-48Ch]@7
  char v38; // [sp+80h] [bp-488h]@7
  void (*v39)(void); // [sp+88h] [bp-480h]@7
  char v40; // [sp+90h] [bp-478h]@7
  int v41; // [sp+94h] [bp-474h]@7
  unsigned int v42; // [sp+98h] [bp-470h]@5
  int v43; // [sp+9Ch] [bp-46Ch]@5
  char v44; // [sp+A0h] [bp-468h]@5
  void (*v45)(void); // [sp+A8h] [bp-460h]@5
  void *v46; // [sp+B4h] [bp-454h]@2
  __int64 v47; // [sp+BCh] [bp-44Ch]@2
  int v48; // [sp+C4h] [bp-444h]@2
  int v49; // [sp+C8h] [bp-440h]@2
  int v50; // [sp+CCh] [bp-43Ch]@2
  unsigned int v51; // [sp+D0h] [bp-438h]@2
  int v52; // [sp+D4h] [bp-434h]@1
  int v53; // [sp+D8h] [bp-430h]@1
  int v54; // [sp+DCh] [bp-42Ch]@1
  char v55; // [sp+E8h] [bp-420h]@2
  int v56; // [sp+ECh] [bp-41Ch]@2
  RakNet *v57; // [sp+4F0h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v57 = _stack_chk_guard;
  sub_21E8AF4(&v54, a2);
  v52 = v54;
  v53 = *(_DWORD *)(v54 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v52) )
  {
    FilePathManager::getWorldsPath((FilePathManager *)&v48, *(_DWORD *)(v3 + 32));
    v49 = v48;
    v50 = *(_DWORD *)(v48 - 12);
    v6 = operator new(1u);
    LODWORD(v7) = sub_191CADA;
    v46 = v6;
    HIDWORD(v7) = sub_191CAD0;
    v47 = v7;
    Core::FileSystem::createUniquePathFromSeed((int)&v55, (__int64 *)&v49, (int)&v46);
    sub_21E94B4((void **)&v51, (const char *)&v56);
    if ( (_DWORD)v47 )
      ((void (*)(void))v47)();
    v8 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
    {
      v21 = (unsigned int *)(v48 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    v42 = v51;
    v43 = *(_DWORD *)(v51 - 12);
    Core::FileSystem::createDirectoryRecursively((int)&v44, (__int64 *)&v42);
    if ( v45 )
      v45();
    Util::format((Util *)&v41, "%s/%s", __PAIR__(LevelArchiver::IMPORT_LOCK_FILE, v51));
    v36 = v41;
    v37 = *(_DWORD *)(v41 - 12);
    Core::FileSystem::createEmptyFile((int)&v38, (__int64 *)&v36);
    v9 = v40;
    v40 |= 2u;
    if ( v39 )
      v39();
    if ( v9 & 1 )
      ZipUtils::UnzipSettings::UnzipSettings((ZipUtils::UnzipSettings *)&v35);
      v13 = ZipUtils::unzip(v5, (int *)&v51, v3 + 8, (int)&v35);
      ZipUtils::UnzipSettings::~UnzipSettings((ZipUtils::UnzipSettings *)&v35);
      v14 = (_DWORD *)*v4;
      if ( v13 )
        *v14 = 3;
        v31 = v51;
        v32 = *(_DWORD *)(v51 - 12);
        Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v33, (__int64 *)&v31);
        if ( v34 )
        {
          v34();
          v11 = 0;
        }
        else
        *v14 = 0;
        EntityInteraction::setInteractText(v14 + 1, (int *)&v51);
        v27 = v41;
        v28 = *(_DWORD *)(v41 - 12);
        Core::FileSystem::deleteFile((int)&v29, (__int64 *)&v27);
        if ( v30 )
          v30();
        v11 = 1;
    else
      v10 = (_DWORD *)*v4;
      v11 = 0;
      *v10 = 1;
    v15 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v41 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v51 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  }
  else
    v12 = (_DWORD *)*v4;
    v11 = 0;
    *v12 = 2;
  v17 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( _stack_chk_guard != v57 )
    _stack_chk_fail(_stack_chk_guard - v57);
  return v11;
}
