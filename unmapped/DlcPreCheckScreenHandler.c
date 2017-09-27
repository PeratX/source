

int __fastcall DlcPreCheckScreenHandler::_tryAcquireDlc(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r11@1
  unsigned int v6; // r2@2
  unsigned int *v7; // r0@2
  unsigned int v8; // r3@5
  unsigned int v9; // r6@6
  int v10; // r4@7
  unsigned int *v11; // r6@7
  unsigned int v12; // r1@9
  unsigned int v13; // r1@14
  unsigned int v14; // r0@20
  unsigned int v15; // r0@27
  int v16; // r0@30
  unsigned int *v17; // r0@31
  unsigned int v18; // r1@33
  int v19; // r1@36
  int v20; // r2@36
  int v21; // r3@36
  __int64 v22; // kr00_8@37
  unsigned int *v23; // r0@38
  unsigned int v24; // r1@40
  __int64 v25; // kr08_8@44
  unsigned int *v26; // r0@45
  unsigned int v27; // r1@47
  unsigned int v28; // r0@52
  unsigned int *v29; // r0@56
  unsigned int v30; // r1@58
  unsigned int *v31; // r0@62
  unsigned int v32; // r1@64
  unsigned int v33; // r0@69
  _QWORD *v34; // r0@72
  unsigned int *v35; // r1@73
  unsigned int v36; // r2@75
  unsigned int v37; // r1@80
  __int64 v38; // r1@83
  unsigned int v39; // r0@89
  unsigned int *v40; // r1@95
  unsigned int v41; // r0@97
  void *v42; // r0@102
  int v43; // r7@103
  void **v44; // r0@103
  void *v45; // r0@103
  void *v46; // r0@106
  unsigned int v47; // r0@109
  unsigned int *v48; // r1@115
  unsigned int v49; // r0@117
  unsigned int *v50; // r4@121
  unsigned int v51; // r0@123
  unsigned int *v52; // r1@129
  unsigned int v53; // r0@131
  int v54; // r5@136
  unsigned int *v55; // r1@137
  unsigned int v56; // r0@139
  unsigned int *v57; // r4@143
  unsigned int v58; // r0@145
  int v59; // r0@150
  unsigned int *v60; // r2@151
  unsigned int v61; // r1@153
  int result; // r0@160
  unsigned int *v63; // r2@166
  signed int v64; // r1@168
  unsigned int *v65; // r2@170
  signed int v66; // r1@172
  unsigned int *v67; // r2@174
  signed int v68; // r1@176
  int v69; // [sp+0h] [bp-88h]@0
  int v70; // [sp+4h] [bp-84h]@0
  void *ptr; // [sp+8h] [bp-80h]@0
  void *ptra; // [sp+8h] [bp-80h]@55
  int v73; // [sp+Ch] [bp-7Ch]@0
  int v74; // [sp+Ch] [bp-7Ch]@44
  int v75; // [sp+10h] [bp-78h]@0
  int v76; // [sp+14h] [bp-74h]@42
  void *v77; // [sp+18h] [bp-70h]@42
  int v78; // [sp+1Ch] [bp-6Ch]@42
  int v79; // [sp+20h] [bp-68h]@42
  char v80[4]; // [sp+24h] [bp-64h]@25
  int v81; // [sp+28h] [bp-60h]@25
  int v82; // [sp+2Ch] [bp-5Ch]@30
  int v83; // [sp+30h] [bp-58h]@30
  int v84; // [sp+34h] [bp-54h]@30
  char v85; // [sp+38h] [bp-50h]@83
  void (*v86)(void); // [sp+40h] [bp-48h]@83
  _QWORD *v87; // [sp+48h] [bp-40h]@83
  void (*v88)(void); // [sp+50h] [bp-38h]@72
  int v89; // [sp+5Ch] [bp-2Ch]@55

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(_DWORD *)(v4 + 376);
  if ( !v5 )
    std::__throw_bad_weak_ptr();
  v6 = *(_DWORD *)(v5 + 4);
  v7 = (unsigned int *)(v5 + 4);
  do
  {
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
  }
  while ( v9 );
  __dmb();
  v10 = *(_DWORD *)(v4 + 372);
  v11 = (unsigned int *)(v5 + 8);
  if ( &pthread_create )
    __dmb();
    do
      v12 = __ldrex(v11);
    while ( __strex(v12 + 1, v11) );
  else
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
  *(_DWORD *)v80 = v10;
  v81 = v5;
      v15 = __ldrex(v11);
    while ( __strex(v15 + 1, v11) );
  v82 = v2;
  v83 = *(_DWORD *)v3;
  v16 = *(_DWORD *)(v3 + 4);
  v84 = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  if ( MinecraftScreenModel::signinInProgress(*(MinecraftScreenModel **)(v2 + 8)) == 1 )
    v22 = *(_QWORD *)v80;
    if ( v81 )
      v23 = (unsigned int *)(v81 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 + 1, v23) );
      }
      else
        ++*v23;
    v25 = *(_QWORD *)&v82;
    v74 = v84;
    if ( v84 )
      v26 = (unsigned int *)(v84 + 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 + 1, v26) );
        ++*v26;
        v28 = __ldrex(v11);
      while ( __strex(v28 + 1, v11) );
      ++*v11;
    ptra = operator new(0x30u);
    sub_119C884((void **)&v89, "xbox.signingin");
    if ( HIDWORD(v22) )
      v29 = (unsigned int *)(HIDWORD(v22) + 8);
          v30 = __ldrex(v29);
        while ( __strex(v30 + 1, v29) );
        ++*v29;
    if ( v74 )
      v31 = (unsigned int *)(v74 + 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 + 1, v31) );
        ++*v31;
        v33 = __ldrex(v11);
      while ( __strex(v33 + 1, v11) );
    v88 = 0;
    v34 = operator new(0x20u);
    *v34 = v22;
      v35 = (unsigned int *)(HIDWORD(v22) + 8);
          v36 = __ldrex(v35);
        while ( __strex(v36 + 1, v35) );
        ++*v35;
    v34[1] = v25;
    *((_DWORD *)v34 + 4) = v74;
    *((_DWORD *)v34 + 5) = v10;
    *((_DWORD *)v34 + 6) = v5;
        v37 = __ldrex(v11);
      while ( __strex(v37 + 1, v11) );
    LODWORD(v38) = sub_118CE5C;
    *((_DWORD *)v34 + 7) = v2;
    HIDWORD(v38) = sub_118CD10;
    v87 = v34;
    *(_QWORD *)&v88 = v38;
    v86 = 0;
    StoreProgressHandler::StoreProgressHandler((int)ptra, &v89, (int)&v87, (int)&v85);
    if ( v86 )
      v86();
    if ( v88 )
      v88();
        v39 = __ldrex(v11);
      while ( __strex(v39 - 1, v11) );
      v39 = (*v11)--;
    if ( v39 == 1 )
      v40 = (unsigned int *)(HIDWORD(v22) + 8);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v22) + 12))(HIDWORD(v22));
    v42 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v89 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v42);
    v43 = *(_DWORD *)(v2 + 8);
    sub_119C884((void **)&v79, "xbox_signin");
    v77 = ptra;
    v44 = sub_119C884((void **)&v76, (const char *)&unk_257BC67);
    MainMenuScreenModel::navigateToModalProgressScreen(v43, (int)&v79, (int)&v77, 1, (int)v44);
    v45 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v76 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v45);
    if ( v77 )
      (*(void (**)(void))(*(_DWORD *)v77 + 4))();
    v77 = 0;
    v46 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v79 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v46);
        v47 = __ldrex(v11);
      while ( __strex(v47 - 1, v11) );
      v47 = (*v11)--;
    if ( v47 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 12))(v5);
      v48 = (unsigned int *)(v74 + 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 == 1 )
        v50 = (unsigned int *)(v74 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 8))(v74);
        if ( &pthread_create )
        {
          __dmb();
          do
            v51 = __ldrex(v50);
          while ( __strex(v51 - 1, v50) );
        }
        else
          v51 = (*v50)--;
        if ( v51 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v74 + 12))(v74);
      v52 = (unsigned int *)(HIDWORD(v22) + 8);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 == 1 )
    sub_1185E24((int)v80, v19, v20, v21, v69, v70, (int)ptr, v73, v75, v76, v77, v78, v79, v80[0]);
  v54 = v84;
  if ( v84 )
    v55 = (unsigned int *)(v84 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
  v59 = v81;
  if ( v81 )
    v60 = (unsigned int *)(v81 + 8);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 == 1 )
      (*(void (**)(void))(*(_DWORD *)v59 + 12))();
      result = __ldrex(v11);
    while ( __strex(result - 1, v11) );
    result = (*v11)--;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return result;
}


ModalScreenData *__fastcall DlcPreCheckScreenHandler::_promptUnownedPacks(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  signed int v4; // r1@1
  _BYTE *v5; // r2@4
  int v6; // r7@4
  char *v7; // r1@4
  _BYTE *v8; // r2@7
  char *v9; // r1@7
  int v10; // r8@11
  int v11; // r0@11
  unsigned int *v12; // r0@12
  unsigned int v13; // r1@14
  char *v14; // r7@17
  int v15; // r12@17
  int v16; // r0@17
  int v17; // r4@19
  unsigned int *v18; // r1@20
  unsigned int v19; // r0@22
  unsigned int *v20; // r5@26
  unsigned int v21; // r0@28
  void *v22; // r0@33
  void *v23; // r0@34
  void *v24; // r0@35
  void *v25; // r0@36
  void *v26; // r0@37
  void *v27; // r0@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  unsigned int *v33; // r2@48
  signed int v34; // r1@50
  unsigned int *v35; // r2@52
  signed int v36; // r1@54
  unsigned int *v37; // r2@56
  signed int v38; // r1@58
  unsigned int *v39; // r2@60
  signed int v40; // r1@62
  int v41; // [sp+8h] [bp-E0h]@11
  int v42; // [sp+Ch] [bp-DCh]@11
  int v43; // [sp+10h] [bp-D8h]@11
  int v44; // [sp+14h] [bp-D4h]@11
  int v45; // [sp+18h] [bp-D0h]@11
  int v46; // [sp+20h] [bp-C8h]@35
  int v47; // [sp+24h] [bp-C4h]@34
  int v48; // [sp+28h] [bp-C0h]@33
  char v49; // [sp+30h] [bp-B8h]@11
  int v50; // [sp+38h] [bp-B0h]@11
  int v51; // [sp+40h] [bp-A8h]@11
  int v52; // [sp+44h] [bp-A4h]@11
  char *v53; // [sp+48h] [bp-A0h]@17
  void (*v54)(void); // [sp+50h] [bp-98h]@17
  int (__fastcall *v55)(int **, int); // [sp+54h] [bp-94h]@17
  char v56; // [sp+58h] [bp-90h]@3
  int v57; // [sp+5Ch] [bp-8Ch]@11
  int v58; // [sp+60h] [bp-88h]@11
  int v59; // [sp+64h] [bp-84h]@11
  int v60; // [sp+68h] [bp-80h]@11
  int v61; // [sp+70h] [bp-78h]@38
  int v62; // [sp+74h] [bp-74h]@37
  int v63; // [sp+78h] [bp-70h]@36
  char v64; // [sp+80h] [bp-68h]@11
  int v65; // [sp+88h] [bp-60h]@4
  void *v66; // [sp+90h] [bp-58h]@1
  int v67; // [sp+94h] [bp-54h]@1
  int v68; // [sp+98h] [bp-50h]@1
  int v69; // [sp+9Ch] [bp-4Ch]@1
  void *v70; // [sp+A0h] [bp-48h]@1
  int v71; // [sp+A4h] [bp-44h]@1
  int v72; // [sp+A8h] [bp-40h]@1
  int v73; // [sp+ACh] [bp-3Ch]@1
  void *v74; // [sp+B0h] [bp-38h]@1
  void *v75; // [sp+B4h] [bp-34h]@1
  void *v76; // [sp+B8h] [bp-30h]@1
  void *v77; // [sp+BCh] [bp-2Ch]@1
  int v78; // [sp+C0h] [bp-28h]@1
  char v79; // [sp+C4h] [bp-24h]@1

  v2 = a1;
  v3 = a2;
  v66 = &unk_28898CC;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = &unk_28898CC;
  v71 = 0;
  v72 = 0;
  v73 = 0;
  v74 = &unk_28898CC;
  v75 = &unk_28898CC;
  v76 = &unk_28898CC;
  v77 = &unk_28898CC;
  v78 = 1;
  v79 = 0;
  sub_119CAD8(&v75, "gui.yes", (_BYTE *)7);
  sub_119CAD8(&v76, "gui.no", (_BYTE *)6);
  sub_119CAD8(&v77, "gui.no", (_BYTE *)6);
  v4 = 2;
  if ( *(_BYTE *)(*(_DWORD *)v3 + 68) )
    v4 = 1;
  v78 = v4;
  PackIdVersion::PackIdVersion((PackIdVersion *)&v56);
  if ( MainMenuScreenModel::getFirstUnownedDlcDependencyFromList(
         *(_DWORD *)(v2 + 8),
         (unsigned __int64 *)(*(_DWORD *)v3 + 44),
         (int)&v56) == 1 )
  {
    v5 = (_BYTE *)42;
    v6 = v65;
    v7 = "store.popup.download.unOwned.title";
    if ( v65 )
      v7 = "store.popup.download.unOwnedTemplate.title";
    else
      v5 = (_BYTE *)34;
    sub_119CAD8(&v66, v7, v5);
    v8 = (_BYTE *)40;
    v9 = "store.popup.download.unOwned.msg";
    if ( v6 )
      v9 = "store.popup.download.unOwnedTemplate.msg";
      v8 = (_BYTE *)32;
    sub_119CAD8(&v70, v9, v8);
  }
  v10 = *(_DWORD *)(v2 + 4);
  v41 = *(_DWORD *)&v56;
  v42 = v57;
  v43 = v58;
  v44 = v59;
  SemVersion::SemVersion((int)&v45, (int)&v60);
  v49 = v64;
  v50 = v65;
  v51 = *(_DWORD *)v3;
  v11 = *(_DWORD *)(v3 + 4);
  v52 = v11;
  if ( v11 )
    v12 = (unsigned int *)(v11 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
      ++*v12;
  v54 = 0;
  v14 = (char *)operator new(0x48u);
  *(_DWORD *)v14 = v2;
  v15 = (int)(v14 + 8);
  *(_DWORD *)v15 = v41;
  *(_DWORD *)(v15 + 4) = v42;
  *(_DWORD *)(v15 + 8) = v43;
  *((_DWORD *)v14 + 5) = v44;
  SemVersion::SemVersion((int)(v14 + 24), (int)&v45);
  v14[48] = v49;
  *((_DWORD *)v14 + 14) = v50;
  *((_DWORD *)v14 + 16) = v51;
  v16 = v52;
  v52 = 0;
  *((_DWORD *)v14 + 17) = v16;
  v51 = 0;
  v53 = v14;
  v54 = (void (*)(void))sub_118D31C;
  v55 = sub_118D030;
  MinecraftScreenController::_displayCustomModalPopup(v10, (int)&v66, (unsigned int)&v53);
  if ( v54 )
    v54();
  v17 = v52;
  if ( v52 )
    v18 = (unsigned int *)(v52 + 4);
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
  v22 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v48 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v22);
  v23 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v47 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v23);
  v24 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v46 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v25 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v63 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v62 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v61 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v66);
}


void __fastcall DlcPreCheckScreenHandler::_findMissingOwnedContent(int a1, int a2)
{
  DlcPreCheckScreenHandler::_findMissingOwnedContent(a1, a2);
}


const void **__fastcall DlcPreCheckScreenHandler::_getContentTitle(const void **a1, int a2, int a3)
{
  const void **v3; // r11@1
  _DWORD *v4; // r0@1
  const void **v5; // r4@1
  const void **v6; // r5@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  const void **v11; // r0@19
  char *v12; // r0@19
  void *v13; // r0@20
  const void **result; // r0@23
  int v15; // [sp+4h] [bp-44h]@7
  char *v16; // [sp+8h] [bp-40h]@3

  v3 = a1;
  v4 = &unk_28898CC;
  *v3 = &unk_28898CC;
  v5 = (const void **)(*(_QWORD *)(*(_DWORD *)a3 + 16) >> 32);
  v6 = (const void **)*(_QWORD *)(*(_DWORD *)a3 + 16);
  if ( v6 != v5 )
  {
    do
    {
      sub_119C854(&v15, (int *)&unk_27DB130);
      sub_119C8A4((const void **)&v15, v6);
      v11 = sub_119C8A4((const void **)&v15, (const void **)&unk_27DB144);
      v16 = (char *)*v11;
      *v11 = &unk_28898CC;
      sub_119C8A4(v3, (const void **)&v16);
      v12 = v16 - 12;
      if ( (int *)(v16 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v16 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v12);
      }
      v13 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v15 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      ++v6;
    }
    while ( v6 != v5 );
    v4 = *v3;
  }
  result = (const void **)*(v4 - 3);
  if ( !result )
    result = sub_119CAD8((void **)v3, "item", (_BYTE *)4);
  return result;
}


signed int __fastcall DlcPreCheckScreenHandler::_continueAllowed(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 i; // r6@2
  signed int v5; // r0@3
  bool v6; // zf@3

  v2 = a2;
  v3 = a1;
  if ( MainMenuScreenModel::hasUnownedDlcDependencies(*(_DWORD *)(a1 + 8), (unsigned __int64 *)(*(_DWORD *)a2 + 44)) != 1 )
    return 1;
  for ( i = *(_QWORD *)(*(_DWORD *)v2 + 44); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 56 )
  {
    v5 = MainMenuScreenModel::hasEntitlementFor(*(MainMenuScreenModel **)(v3 + 8), (const PackIdVersion *)i);
    v6 = v5 == 0;
    if ( !v5 )
      v6 = *(_DWORD *)(i + 48) == 2;
    if ( v6 )
      return 0;
  }
  if ( *(_BYTE *)(*(_DWORD *)v2 + 68) )
  return 0;
}


unsigned __int64 *__fastcall DlcPreCheckScreenHandler::tryValidateDlcForWorldLoad(int a1, const char **a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // r10@1
  int *v7; // r7@1
  int v8; // r0@2
  _DWORD *v9; // r7@2
  int v10; // r2@3
  int v11; // r3@3
  int v12; // r6@3
  void *v13; // r0@5
  void *v14; // r0@6
  void *v15; // r0@7
  void *v16; // r0@8
  int v17; // r5@9
  unsigned int *v18; // r0@10
  unsigned int v19; // r1@12
  int v20; // r0@15
  unsigned int *v21; // r2@16
  unsigned int v22; // r1@18
  unsigned int *v23; // r0@24
  unsigned int v24; // r1@26
  int v25; // r4@29
  unsigned int *v26; // r1@30
  unsigned int v27; // r0@32
  unsigned int *v28; // r5@36
  unsigned int v29; // r0@38
  int v30; // r4@43
  unsigned int *v31; // r1@44
  unsigned int v32; // r0@46
  unsigned int *v33; // r5@50
  unsigned int v34; // r0@52
  unsigned int *v36; // r2@58
  signed int v37; // r1@60
  unsigned int *v38; // r2@62
  signed int v39; // r1@64
  unsigned int *v40; // r2@66
  signed int v41; // r1@68
  unsigned int *v42; // r2@70
  signed int v43; // r1@72
  int v44; // [sp+Ch] [bp-8Ch]@23
  int v45; // [sp+10h] [bp-88h]@23
  char v46; // [sp+16h] [bp-82h]@9
  char v47; // [sp+17h] [bp-81h]@9
  int v48; // [sp+18h] [bp-80h]@9
  int v49; // [sp+1Ch] [bp-7Ch]@9
  int v50; // [sp+24h] [bp-74h]@2
  char v51; // [sp+28h] [bp-70h]@2
  int v52; // [sp+2Ch] [bp-6Ch]@3
  int v53; // [sp+30h] [bp-68h]@3
  int v54; // [sp+34h] [bp-64h]@3
  int v55; // [sp+40h] [bp-58h]@7
  int v56; // [sp+44h] [bp-54h]@6
  int v57; // [sp+48h] [bp-50h]@5
  char v58; // [sp+50h] [bp-48h]@3
  int v59; // [sp+58h] [bp-40h]@2
  char v60; // [sp+64h] [bp-34h]@1
  _DWORD *v61; // [sp+68h] [bp-30h]@2
  _DWORD *v62; // [sp+6Ch] [bp-2Ch]@2
  char v63; // [sp+74h] [bp-24h]@9

  v4 = a1;
  v5 = (int *)a2;
  v6 = a4;
  v7 = a3;
  MainMenuScreenModel::collectDlcDependenciesForWorld((int)&v60, *(_DWORD *)(a1 + 8), a2, 1);
  if ( *(_DWORD *)(*v7 - 12) )
  {
    sub_119C884((void **)&v50, (const char *)&unk_257BC67);
    v8 = PackIdVersion::PackIdVersion((int)&v51, v7, (const void **)&v50, 0);
    v59 = 2;
    v9 = v61;
    if ( v61 == v62 )
    {
      std::vector<DlcDependency,std::allocator<DlcDependency>>::_M_emplace_back_aux<DlcDependency>(
        (unsigned __int64 *)&v60,
        (int)&v51);
    }
    else
      v10 = v52;
      v11 = v53;
      v12 = v54;
      *v61 = *(_DWORD *)&v51;
      v9[1] = v10;
      v9[2] = v11;
      v9[3] = v12;
      SemVersion::SemVersion((int)(v9 + 4), v8 + 16);
      *((_BYTE *)v9 + 40) = v58;
      v9[12] = v59;
      v61 += 14;
    v13 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v57 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v56 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v55 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v50 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
  }
  v47 = 1;
  v46 = 0;
  j__ZNSt12__shared_ptrIN24DlcPreCheckScreenHandler18DlcValidationStateELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJRKSsbbRSt8functionIFvvEERSt6vectorI13DlcDependencySaISE_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v48,
    (int)&v63,
    v5,
    &v47,
    &v46,
    v6,
    (unsigned __int64 *)&v60);
  *(_DWORD *)(v4 + 20) = v48;
  v17 = v49;
  if ( v49 )
    v18 = (unsigned int *)(v49 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v20 = *(_DWORD *)(v4 + 24);
  if ( v20 )
    v21 = (unsigned int *)(v20 + 8);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 == 1 )
      (*(void (**)(void))(*(_DWORD *)v20 + 12))();
  *(_DWORD *)(v4 + 24) = v17;
  v44 = v48;
  v45 = v49;
    v23 = (unsigned int *)(v49 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 + 1, v23) );
      ++*v23;
  DlcPreCheckScreenHandler::_tryAcquireDlc(v4, (int)&v44);
  v25 = v45;
  if ( v45 )
    v26 = (unsigned int *)(v45 + 4);
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
  v30 = v49;
    v31 = (unsigned int *)(v49 + 4);
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
  return std::vector<DlcDependency,std::allocator<DlcDependency>>::~vector((unsigned __int64 *)&v60);
}


void __fastcall DlcPreCheckScreenHandler::~DlcPreCheckScreenHandler(DlcPreCheckScreenHandler *this)
{
  DlcPreCheckScreenHandler *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r5@9
  unsigned int *v6; // r1@10
  unsigned int v7; // r0@12
  unsigned int *v8; // r6@16
  unsigned int v9; // r0@18

  v1 = this;
  *(_DWORD *)this = &off_26E1B64;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
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
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall DlcPreCheckScreenHandler::DlcPreCheckScreenHandler(int a1, int a2, int a3)
{
  int v3; // r4@1
  char v5; // [sp+3h] [bp-15h]@1
  char v6; // [sp+4h] [bp-14h]@1

  v3 = a1;
  *(_DWORD *)a1 = &off_26E1B64;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = a3;
  v5 = 0;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(a1 + 12, (int)&v6, &v5);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  return v3;
}


ModalScreenData *__fastcall DlcPreCheckScreenHandler::_promptNoInternet(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r11@1
  int *v4; // r5@1
  int v5; // r1@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  char *v9; // r0@7
  void *v10; // r0@7
  int v11; // r6@8
  char *v12; // r7@8
  char *v13; // r1@9
  unsigned int *v14; // r2@10
  signed int v15; // r5@12
  char *v16; // r4@16
  int *v17; // r0@17
  void *v18; // r0@22
  int v19; // r7@23
  unsigned int *v20; // r1@24
  unsigned int v21; // r0@26
  unsigned int *v22; // r4@30
  unsigned int v23; // r0@32
  void *v24; // r0@37
  const void **v25; // r0@38
  const void **v26; // r0@38
  char *v27; // r0@38
  char *v28; // r0@39
  char *v29; // r0@40
  int v30; // r4@41
  signed int v31; // r1@41
  int v32; // r5@43
  int v33; // r6@43
  unsigned int *v34; // r0@44
  unsigned int v35; // r1@46
  _DWORD *v36; // r0@49
  __int64 v37; // r1@49 OVERLAPPED
  unsigned int *v39; // r2@52
  signed int v40; // r1@54
  unsigned int *v41; // r2@56
  signed int v42; // r1@58
  unsigned int *v43; // r2@60
  signed int v44; // r1@62
  unsigned int *v45; // r2@64
  signed int v46; // r1@66
  unsigned int *v47; // r2@68
  signed int v48; // r1@70
  unsigned int *v49; // r2@72
  signed int v50; // r1@74
  _DWORD *v51; // [sp+0h] [bp-A0h]@49
  __int64 v52; // [sp+8h] [bp-98h]@49
  char *v53; // [sp+10h] [bp-90h]@38
  char *v54; // [sp+14h] [bp-8Ch]@38
  char *v55; // [sp+18h] [bp-88h]@38
  int v56; // [sp+1Ch] [bp-84h]@1
  int v57; // [sp+20h] [bp-80h]@1
  int v58; // [sp+24h] [bp-7Ch]@7
  char *v59; // [sp+28h] [bp-78h]@7
  char *v60; // [sp+2Ch] [bp-74h]@7
  char *v61; // [sp+30h] [bp-70h]@7
  int v62; // [sp+38h] [bp-68h]@1
  int v63; // [sp+3Ch] [bp-64h]@7
  _DWORD *v64; // [sp+40h] [bp-60h]@1
  int v65; // [sp+44h] [bp-5Ch]@1
  int v66; // [sp+48h] [bp-58h]@1
  int v67; // [sp+4Ch] [bp-54h]@1
  void *v68; // [sp+50h] [bp-50h]@1
  int v69; // [sp+54h] [bp-4Ch]@1
  int v70; // [sp+58h] [bp-48h]@1
  int v71; // [sp+5Ch] [bp-44h]@1
  void *v72; // [sp+60h] [bp-40h]@1
  void *v73; // [sp+64h] [bp-3Ch]@1
  void *v74; // [sp+68h] [bp-38h]@1
  void *v75; // [sp+6Ch] [bp-34h]@1
  int v76; // [sp+70h] [bp-30h]@1
  char v77; // [sp+74h] [bp-2Ch]@1
  char v78; // [sp+78h] [bp-28h]@9

  v2 = a1;
  v3 = a2;
  v64 = &unk_28898CC;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = &unk_28898CC;
  v69 = 0;
  v70 = 0;
  v71 = 0;
  v72 = &unk_28898CC;
  v73 = &unk_28898CC;
  v74 = &unk_28898CC;
  v75 = &unk_28898CC;
  v76 = 1;
  v77 = 0;
  v4 = (int *)&v64;
  sub_119CAD8((void **)&v64, "store.popup.download.noInternet.title", (_BYTE *)0x25);
  sub_119C884((void **)&v62, "store.popup.download.noInternet.msg");
  v56 = *(_DWORD *)v3;
  v6 = *(_DWORD *)(v3 + 4);
  v57 = v6;
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v8 = __ldrex(v7);
        v5 = v8 + 1;
      }
      while ( __strex(v5, v7) );
    }
    else
      v5 = *v7 + 1;
      *v7 = v5;
  }
  DlcPreCheckScreenHandler::_getContentTitle((const void **)&v58, v5, (int)&v56);
  v59 = 0;
  v60 = 0;
  v61 = 0;
  v9 = (char *)operator new(4u);
  v59 = v9;
  v61 = v9 + 4;
  v60 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v58,
                  (int)&v59,
                  (int)v9);
  I18n::get(&v63, &v62, (unsigned __int64 *)&v59);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v68,
    &v63);
  v10 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v63 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = (int)v60;
  v12 = v59;
  if ( v59 != v60 )
    v13 = &v78;
    do
      v17 = (int *)(*(_DWORD *)v12 - 12);
      if ( v17 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
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
          v16 = v13;
          j_j_j_j_j__ZdlPv_9_1(v17);
          v13 = v16;
      v12 += 4;
    while ( v12 != (char *)v11 );
    v12 = v59;
    v4 = (int *)&v64;
  if ( v12 )
    operator delete(v12);
  v18 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v58 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = v57;
  if ( v57 )
    v20 = (unsigned int *)(v57 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
      if ( &pthread_create )
        __dmb();
        do
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
      else
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v62 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v24);
  v53 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v53, *(v64 - 3) + 3);
  sub_119C894((const void **)&v53, " - ", 3u);
  sub_119C8A4((const void **)&v53, (const void **)&v64);
  v25 = sub_119C894((const void **)&v53, " - ", 3u);
  v54 = (char *)*v25;
  *v25 = &unk_28898CC;
  v26 = sub_119C894((const void **)&v54, "store.popup.download.noInternet.msg", 0x23u);
  v55 = (char *)*v26;
  *v26 = &unk_28898CC;
    v4 + 8,
    (int *)&v55);
  v27 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v55 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  v28 = v54 - 12;
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v54 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v28);
  v29 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v53 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v29);
  sub_119CAD8(&v73, "gui.ok", (_BYTE *)6);
  sub_119CAD8(&v74, "gui.no", (_BYTE *)6);
  sub_119CAD8(&v75, "gui.no", (_BYTE *)6);
  v30 = *(_DWORD *)v3;
  v31 = 2;
  if ( *(_BYTE *)(*(_DWORD *)v3 + 68) )
    v31 = 1;
  v76 = v31;
  v32 = *(_DWORD *)(v3 + 4);
  v33 = *(_DWORD *)(v2 + 4);
  if ( v32 )
    v34 = (unsigned int *)(v32 + 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 + 1, v34) );
      ++*v34;
  v36 = operator new(0xCu);
  LODWORD(v37) = sub_118D66C;
  *v36 = v2;
  v36[1] = v30;
  HIDWORD(v37) = sub_118D52C;
  v36[2] = v32;
  v51 = v36;
  v52 = v37;
  HIDWORD(v37) = &v51;
  MinecraftScreenController::_displayCustomModalPopup(v33, (int)&v64, *(__int64 *)((char *)&v37 + 4));
  if ( (_DWORD)v52 )
    ((void (*)(void))v52)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v64);
}


ModalScreenData *__fastcall DlcPreCheckScreenHandler::_promptDownloadFailed(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r11@1
  int v4; // r1@1
  int v5; // r0@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  char *v8; // r0@7
  void *v9; // r0@7
  int v10; // r6@8
  char *v11; // r7@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  int *v14; // r0@18
  void *v15; // r0@23
  int v16; // r7@24
  unsigned int *v17; // r1@25
  unsigned int v18; // r0@27
  unsigned int *v19; // r4@31
  unsigned int v20; // r0@33
  void *v21; // r0@38
  const void **v22; // r4@39
  const void **v23; // r0@39
  const void **v24; // r0@39
  char *v25; // r0@39
  char *v26; // r0@40
  char *v27; // r0@41
  int v28; // r4@42
  signed int v29; // r1@42
  int v30; // r5@44
  int v31; // r6@44
  unsigned int *v32; // r0@45
  unsigned int v33; // r1@47
  _DWORD *v34; // r0@50
  __int64 v35; // r1@50 OVERLAPPED
  unsigned int *v37; // r2@53
  signed int v38; // r1@55
  unsigned int *v39; // r2@57
  signed int v40; // r1@59
  unsigned int *v41; // r2@61
  signed int v42; // r1@63
  unsigned int *v43; // r2@65
  signed int v44; // r1@67
  unsigned int *v45; // r2@69
  signed int v46; // r1@71
  unsigned int *v47; // r2@73
  signed int v48; // r1@75
  _DWORD *v49; // [sp+0h] [bp-A0h]@50
  __int64 v50; // [sp+8h] [bp-98h]@50
  char *v51; // [sp+10h] [bp-90h]@39
  char *v52; // [sp+14h] [bp-8Ch]@39
  char *v53; // [sp+18h] [bp-88h]@39
  int v54; // [sp+1Ch] [bp-84h]@1
  int v55; // [sp+20h] [bp-80h]@1
  int v56; // [sp+24h] [bp-7Ch]@7
  char *v57; // [sp+28h] [bp-78h]@7
  char *v58; // [sp+2Ch] [bp-74h]@7
  char *v59; // [sp+30h] [bp-70h]@7
  int v60; // [sp+38h] [bp-68h]@1
  int v61; // [sp+3Ch] [bp-64h]@7
  void *v62; // [sp+40h] [bp-60h]@1
  int v63; // [sp+44h] [bp-5Ch]@1
  int v64; // [sp+48h] [bp-58h]@1
  int v65; // [sp+4Ch] [bp-54h]@1
  void *v66; // [sp+50h] [bp-50h]@1
  int v67; // [sp+54h] [bp-4Ch]@1
  int v68; // [sp+58h] [bp-48h]@1
  int v69; // [sp+5Ch] [bp-44h]@1
  void *v70; // [sp+60h] [bp-40h]@1
  void *v71; // [sp+64h] [bp-3Ch]@1
  void *v72; // [sp+68h] [bp-38h]@1
  void *v73; // [sp+6Ch] [bp-34h]@1
  int v74; // [sp+70h] [bp-30h]@1
  char v75; // [sp+74h] [bp-2Ch]@1

  v2 = a1;
  v3 = a2;
  v62 = &unk_28898CC;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  v66 = &unk_28898CC;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = &unk_28898CC;
  v71 = &unk_28898CC;
  v72 = &unk_28898CC;
  v73 = &unk_28898CC;
  v74 = 1;
  v75 = 0;
  sub_119CAD8(&v62, "store.popup.download.noInternet.title", (_BYTE *)0x25);
  sub_119C884((void **)&v60, "store.popup.download.noInternet.msg");
  v54 = *(_DWORD *)v3;
  v5 = *(_DWORD *)(v3 + 4);
  v55 = v5;
  if ( v5 )
  {
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v7 = __ldrex(v6);
        v4 = v7 + 1;
      }
      while ( __strex(v4, v6) );
    }
    else
      v4 = *v6 + 1;
      *v6 = v4;
  }
  DlcPreCheckScreenHandler::_getContentTitle((const void **)&v56, v4, (int)&v54);
  v57 = 0;
  v58 = 0;
  v59 = 0;
  v8 = (char *)operator new(4u);
  v57 = v8;
  v59 = v8 + 4;
  v58 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v56,
                  (int)&v57,
                  (int)v8);
  I18n::get(&v61, &v60, (unsigned __int64 *)&v57);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v66,
    &v61);
  v9 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v61 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (int)v58;
  v11 = v57;
  if ( v57 != v58 )
    do
      v14 = (int *)(*(_DWORD *)v11 - 12);
      if ( v14 != &dword_28898C0 )
        v12 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v14);
      v11 += 4;
    while ( v11 != (char *)v10 );
    v11 = v57;
  if ( v11 )
    operator delete(v11);
  v15 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v56 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = v55;
  if ( v55 )
    v17 = (unsigned int *)(v55 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  v21 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v60 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v21);
  v22 = *(const void ***)(*(_DWORD *)v3 + 4);
  v51 = (char *)&unk_28898CC;
  sub_119CAF8((const void **)&v51, *((_DWORD *)*v22 - 3) + 3);
  sub_119C894((const void **)&v51, " - ", 3u);
  sub_119C8A4((const void **)&v51, v22);
  v23 = sub_119C894((const void **)&v51, " - ", 3u);
  v52 = (char *)*v23;
  *v23 = &unk_28898CC;
  v24 = sub_119C894((const void **)&v52, "store.popup.download.noInternet.msg", 0x23u);
  v53 = (char *)*v24;
  *v24 = &unk_28898CC;
    (int *)&v70,
    (int *)&v53);
  v25 = v53 - 12;
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v53 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v25);
  v26 = v52 - 12;
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v52 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v51 - 12;
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v51 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
  sub_119CAD8(&v71, "gui.cancel", (_BYTE *)0xA);
  sub_119CAD8(&v72, "gui.continue", (_BYTE *)0xC);
  sub_119CAD8(&v73, "gui.continue", (_BYTE *)0xC);
  v28 = *(_DWORD *)v3;
  v29 = 2;
  if ( *(_BYTE *)(*(_DWORD *)v3 + 68) )
    v29 = 1;
  v74 = v29;
  v30 = *(_DWORD *)(v3 + 4);
  v31 = *(_DWORD *)(v2 + 4);
  if ( v30 )
    v32 = (unsigned int *)(v30 + 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 + 1, v32) );
      ++*v32;
  v34 = operator new(0xCu);
  LODWORD(v35) = sub_118DDF8;
  *v34 = v2;
  v34[1] = v28;
  HIDWORD(v35) = sub_118DCB8;
  v34[2] = v30;
  v49 = v34;
  v50 = v35;
  HIDWORD(v35) = &v49;
  MinecraftScreenController::_displayCustomModalPopup(v31, (int)&v62, *(__int64 *)((char *)&v35 + 4));
  if ( (_DWORD)v50 )
    ((void (*)(void))v50)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v62);
}


void __fastcall DlcPreCheckScreenHandler::~DlcPreCheckScreenHandler(DlcPreCheckScreenHandler *this)
{
  DlcPreCheckScreenHandler::~DlcPreCheckScreenHandler(this);
}


ModalScreenData *__fastcall DlcPreCheckScreenHandler::_promptNotEnoughSpace(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r8@1
  int v5; // r10@1
  unsigned int v6; // r4@1
  unsigned int v7; // r7@1
  int v8; // r1@1
  int v9; // r3@1
  void *v10; // r0@1
  void *v11; // r0@2
  int v12; // r1@3
  int v13; // r0@3
  unsigned int *v14; // r0@4
  unsigned int v15; // r1@6
  char *v16; // r0@9
  void *v17; // r0@9
  int v18; // r4@10
  char *v19; // r6@10
  char *v20; // r1@11
  unsigned int v21; // r5@11
  unsigned int *v22; // r2@12
  signed int v23; // r7@14
  char *v24; // r7@18
  int *v25; // r0@19
  void *v26; // r0@24
  int v27; // r6@25
  unsigned int *v28; // r1@26
  unsigned int v29; // r0@28
  unsigned int *v30; // r4@32
  unsigned int v31; // r0@34
  void *v32; // r0@39
  const void **v33; // r0@40
  const void **v34; // r0@40
  const void **v35; // r0@40
  char *v36; // r0@40
  char *v37; // r0@41
  char *v38; // r0@42
  void *v39; // r0@43
  int v40; // r6@44
  signed int v41; // r1@44
  int v42; // r5@46
  int v43; // r4@46
  unsigned int *v44; // r0@47
  unsigned int v45; // r1@49
  _DWORD *v46; // r0@52
  __int64 v47; // r1@52 OVERLAPPED
  unsigned int *v49; // r2@55
  signed int v50; // r1@57
  unsigned int *v51; // r2@59
  signed int v52; // r1@61
  unsigned int *v53; // r2@63
  signed int v54; // r1@65
  unsigned int *v55; // r2@67
  signed int v56; // r1@69
  unsigned int *v57; // r2@71
  signed int v58; // r1@73
  unsigned int *v59; // r2@75
  signed int v60; // r1@77
  unsigned int *v61; // r2@79
  signed int v62; // r1@81
  unsigned int *v63; // r2@83
  signed int v64; // r1@85
  unsigned int *v65; // r2@87
  signed int v66; // r1@89
  unsigned int v67; // [sp+8h] [bp-B8h]@10
  _DWORD *v68; // [sp+10h] [bp-B0h]@52
  __int64 v69; // [sp+18h] [bp-A8h]@52
  int v70; // [sp+20h] [bp-A0h]@40
  char *v71; // [sp+24h] [bp-9Ch]@40
  char *v72; // [sp+28h] [bp-98h]@40
  char *v73; // [sp+2Ch] [bp-94h]@40
  int v74; // [sp+30h] [bp-90h]@3
  int v75; // [sp+34h] [bp-8Ch]@3
  int v76; // [sp+38h] [bp-88h]@9
  char *v77; // [sp+3Ch] [bp-84h]@9
  char *v78; // [sp+40h] [bp-80h]@9
  char *v79; // [sp+44h] [bp-7Ch]@9
  int v80; // [sp+4Ch] [bp-74h]@3
  int v81; // [sp+50h] [bp-70h]@9
  int v82; // [sp+58h] [bp-68h]@1
  int v83; // [sp+5Ch] [bp-64h]@1
  void *v84; // [sp+60h] [bp-60h]@1
  int v85; // [sp+64h] [bp-5Ch]@1
  int v86; // [sp+68h] [bp-58h]@1
  int v87; // [sp+6Ch] [bp-54h]@1
  void *v88; // [sp+70h] [bp-50h]@1
  int v89; // [sp+74h] [bp-4Ch]@1
  int v90; // [sp+78h] [bp-48h]@1
  int v91; // [sp+7Ch] [bp-44h]@1
  void *v92; // [sp+80h] [bp-40h]@1
  void *v93; // [sp+84h] [bp-3Ch]@1
  void *v94; // [sp+88h] [bp-38h]@1
  void *v95; // [sp+8Ch] [bp-34h]@1
  int v96; // [sp+90h] [bp-30h]@1
  char v97; // [sp+94h] [bp-2Ch]@1
  char v98; // [sp+98h] [bp-28h]@11

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  v84 = &unk_28898CC;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  v88 = &unk_28898CC;
  v89 = 0;
  v90 = 0;
  v91 = 0;
  v92 = &unk_28898CC;
  v93 = &unk_28898CC;
  v94 = &unk_28898CC;
  v95 = &unk_28898CC;
  v96 = 1;
  v97 = 0;
  sub_119C884((void **)&v82, "store.popup.download.noSpace.title");
  DlcPreCheckScreenHandler::_getFileSizeDialogTitle(&v83, v8, &v82, v9, __PAIR__(v7, v6));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v84,
    &v83);
  v10 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
  {
    v49 = (unsigned int *)(v83 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v11 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v82 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v80, "store.popup.download.noSpace.msg");
  v74 = *(_DWORD *)v5;
  v13 = *(_DWORD *)(v5 + 4);
  v75 = v13;
  if ( v13 )
    v14 = (unsigned int *)(v13 + 4);
      {
        v15 = __ldrex(v14);
        v12 = v15 + 1;
      }
      while ( __strex(v12, v14) );
      v12 = *v14 + 1;
      *v14 = v12;
  DlcPreCheckScreenHandler::_getContentTitle((const void **)&v76, v12, (int)&v74);
  v77 = 0;
  v78 = 0;
  v79 = 0;
  v16 = (char *)operator new(4u);
  v77 = v16;
  v79 = v16 + 4;
  v78 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v76,
                  (int)&v77,
                  (int)v16);
  I18n::get(&v81, &v80, (unsigned __int64 *)&v77);
    (int *)&v88,
    &v81);
  v17 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v81 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v67 = v6;
  v18 = (int)v78;
  v19 = v77;
  if ( v77 != v78 )
    v20 = &v98;
    v21 = v7;
    do
      v25 = (int *)(*(_DWORD *)v19 - 12);
      if ( v25 != &dword_28898C0 )
        v22 = (unsigned int *)(*(_DWORD *)v19 - 4);
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
          v24 = v20;
          j_j_j_j_j__ZdlPv_9_1(v25);
          v20 = v24;
      v19 += 4;
    while ( v19 != (char *)v18 );
    v19 = v77;
    v7 = v21;
  if ( v19 )
    operator delete(v19);
  v26 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v76 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
  v27 = v75;
  if ( v75 )
    v28 = (unsigned int *)(v75 + 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      v30 = (unsigned int *)(v27 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
      if ( &pthread_create )
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      else
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  v32 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v80 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  Util::format((Util *)&v70, "%d", __PAIR__(v7, v67));
  v33 = sub_119C984((const void **)&v70, 0, (unsigned int)" - ", (_BYTE *)3);
  v71 = (char *)*v33;
  *v33 = &unk_28898CC;
  v34 = sub_119C894((const void **)&v71, " - ", 3u);
  v72 = (char *)*v34;
  *v34 = &unk_28898CC;
  v35 = sub_119C894((const void **)&v72, "store.popup.download.noSpace.msg", 0x20u);
  v73 = (char *)*v35;
  *v35 = &unk_28898CC;
    (int *)&v92,
    (int *)&v73);
  v36 = v73 - 12;
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v73 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
  v37 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v72 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v37);
  v38 = v71 - 12;
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v71 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v38);
  v39 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v70 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v39);
  sub_119CAD8(&v93, "gui.cancel", (_BYTE *)0xA);
  sub_119CAD8(&v94, "gui.continue", (_BYTE *)0xC);
  sub_119CAD8(&v95, "gui.continue", (_BYTE *)0xC);
  v40 = *(_DWORD *)v5;
  v41 = 2;
  if ( *(_BYTE *)(*(_DWORD *)v5 + 68) )
    v41 = 1;
  v96 = v41;
  v42 = *(_DWORD *)(v5 + 4);
  v43 = *(_DWORD *)(v4 + 4);
  if ( v42 )
    v44 = (unsigned int *)(v42 + 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 + 1, v44) );
      ++*v44;
  v46 = operator new(0xCu);
  LODWORD(v47) = sub_118DBD0;
  *v46 = v4;
  v46[1] = v40;
  HIDWORD(v47) = sub_118DA90;
  v46[2] = v42;
  v68 = v46;
  v69 = v47;
  HIDWORD(v47) = &v68;
  MinecraftScreenController::_displayCustomModalPopup(v43, (int)&v84, *(__int64 *)((char *)&v47 + 4));
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v84);
}


unsigned __int64 *__fastcall DlcPreCheckScreenHandler::tryValidateDlcForRealmsUpload(int a1, const char **a2, int *a3, int a4)
{
  int v4; // r4@1
  int *v5; // r5@1
  int v6; // r10@1
  int *v7; // r7@1
  int v8; // r0@2
  _DWORD *v9; // r7@2
  int v10; // r2@3
  int v11; // r3@3
  int v12; // r6@3
  void *v13; // r0@5
  void *v14; // r0@6
  void *v15; // r0@7
  void *v16; // r0@8
  int v17; // r0@9
  int v18; // r5@9
  unsigned int *v19; // r0@10
  unsigned int v20; // r1@12
  int v21; // r0@15
  unsigned int *v22; // r2@16
  unsigned int v23; // r1@18
  unsigned int *v24; // r0@24
  unsigned int v25; // r1@26
  int v26; // r4@29
  unsigned int *v27; // r1@30
  unsigned int v28; // r0@32
  unsigned int *v29; // r5@36
  unsigned int v30; // r0@38
  int v31; // r4@43
  unsigned int *v32; // r1@44
  unsigned int v33; // r0@46
  unsigned int *v34; // r5@50
  unsigned int v35; // r0@52
  unsigned int *v37; // r2@58
  signed int v38; // r1@60
  unsigned int *v39; // r2@62
  signed int v40; // r1@64
  unsigned int *v41; // r2@66
  signed int v42; // r1@68
  unsigned int *v43; // r2@70
  signed int v44; // r1@72
  int v45; // [sp+Ch] [bp-8Ch]@23
  int v46; // [sp+10h] [bp-88h]@23
  char v47; // [sp+16h] [bp-82h]@9
  char v48; // [sp+17h] [bp-81h]@9
  int v49; // [sp+18h] [bp-80h]@9
  int v50; // [sp+1Ch] [bp-7Ch]@9
  int v51; // [sp+24h] [bp-74h]@2
  char v52; // [sp+28h] [bp-70h]@2
  int v53; // [sp+2Ch] [bp-6Ch]@3
  int v54; // [sp+30h] [bp-68h]@3
  int v55; // [sp+34h] [bp-64h]@3
  int v56; // [sp+40h] [bp-58h]@7
  int v57; // [sp+44h] [bp-54h]@6
  int v58; // [sp+48h] [bp-50h]@5
  char v59; // [sp+50h] [bp-48h]@3
  int v60; // [sp+58h] [bp-40h]@2
  char v61; // [sp+64h] [bp-34h]@1
  _DWORD *v62; // [sp+68h] [bp-30h]@2
  _DWORD *v63; // [sp+6Ch] [bp-2Ch]@2
  char v64; // [sp+74h] [bp-24h]@9

  v4 = a1;
  v5 = (int *)a2;
  v6 = a4;
  v7 = a3;
  MainMenuScreenModel::collectDlcDependenciesForWorld((int)&v61, *(_DWORD *)(a1 + 8), a2, 1);
  if ( *(_DWORD *)(*v7 - 12) )
  {
    sub_119C884((void **)&v51, (const char *)&unk_257BC67);
    v8 = PackIdVersion::PackIdVersion((int)&v52, v7, (const void **)&v51, 0);
    v60 = 2;
    v9 = v62;
    if ( v62 == v63 )
    {
      std::vector<DlcDependency,std::allocator<DlcDependency>>::_M_emplace_back_aux<DlcDependency>(
        (unsigned __int64 *)&v61,
        (int)&v52);
    }
    else
      v10 = v53;
      v11 = v54;
      v12 = v55;
      *v62 = *(_DWORD *)&v52;
      v9[1] = v10;
      v9[2] = v11;
      v9[3] = v12;
      SemVersion::SemVersion((int)(v9 + 4), v8 + 16);
      *((_BYTE *)v9 + 40) = v59;
      v9[12] = v60;
      v62 += 14;
    v13 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      }
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v13);
    v14 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v57 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    v15 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v56 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v15);
    v16 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v51 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v16);
  }
  v47 = 1;
  v48 = 0;
  j__ZNSt12__shared_ptrIN24DlcPreCheckScreenHandler18DlcValidationStateELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJRKSsbbRSt8functionIFvvEERSt6vectorI13DlcDependencySaISE_EEEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v49,
    (int)&v64,
    v5,
    &v48,
    &v47,
    v6,
    (unsigned __int64 *)&v61);
  v17 = v49;
  *(_BYTE *)(v49 + 74) = 0;
  *(_DWORD *)(v4 + 20) = v17;
  v18 = v50;
  if ( v50 )
    v19 = (unsigned int *)(v50 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  v21 = *(_DWORD *)(v4 + 24);
  if ( v21 )
    v22 = (unsigned int *)(v21 + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 == 1 )
      (*(void (**)(void))(*(_DWORD *)v21 + 12))();
  *(_DWORD *)(v4 + 24) = v18;
  v45 = v49;
  v46 = v50;
    v24 = (unsigned int *)(v50 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  DlcPreCheckScreenHandler::_tryAcquireDlc(v4, (int)&v45);
  v26 = v46;
  if ( v46 )
    v27 = (unsigned int *)(v46 + 4);
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
  v31 = v50;
    v32 = (unsigned int *)(v50 + 4);
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
  return std::vector<DlcDependency,std::allocator<DlcDependency>>::~vector((unsigned __int64 *)&v61);
}


void __fastcall DlcPreCheckScreenHandler::_getFileSizeDialogTitle(int *a1, int a2, int *a3, int a4, signed __int64 a5)
{
  int *v5; // r4@1
  int *v6; // r0@1
  signed int v7; // r6@1
  char *v8; // r1@1
  __int64 v9; // r2@3
  char *v10; // r4@5
  int v11; // r6@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  int *v14; // r0@15
  void *v15; // r0@20
  void *v16; // r0@21
  unsigned int *v17; // r2@23
  signed int v18; // r1@25
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  int v21; // [sp+0h] [bp-38h]@5
  char *v22; // [sp+4h] [bp-34h]@5
  char *v23; // [sp+8h] [bp-30h]@5
  char *v24; // [sp+Ch] [bp-2Ch]@5
  int v25; // [sp+10h] [bp-28h]@1

  v5 = a1;
  v6 = sub_119C854(&v25, a3);
  v7 = a5 >> 20;
  v8 = ".KB";
  if ( v7 >= 1 )
    v8 = ".MB";
  sub_119C894((const void **)v6, v8, 3u);
  if ( v7 < 1 )
    v7 = a5 >> 10;
  LODWORD(v9) = v7;
  Util::format((Util *)&v21, "%d", v9);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v22 = (char *)operator new(4u);
  v24 = v22 + 4;
  v23 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                  (int)&v21,
                  (int)&v22,
                  (int)v22);
  I18n::get(v5, &v25, (unsigned __int64 *)&v22);
  v11 = (int)v23;
  v10 = v22;
  if ( v22 != v23 )
  {
    do
    {
      v14 = (int *)(*(_DWORD *)v10 - 12);
      if ( v14 != &dword_28898C0 )
      {
        v12 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v14);
      }
      v10 += 4;
    }
    while ( v10 != (char *)v11 );
    v10 = v22;
  }
  if ( v10 )
    operator delete(v10);
  v15 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v25 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
}


DlcPreCheckScreenHandler *__fastcall DlcPreCheckScreenHandler::~DlcPreCheckScreenHandler(DlcPreCheckScreenHandler *this)
{
  DlcPreCheckScreenHandler *v1; // r4@1
  int v2; // r0@1
  unsigned int *v3; // r2@2
  unsigned int v4; // r1@4
  int v5; // r5@9
  unsigned int *v6; // r1@10
  unsigned int v7; // r0@12
  unsigned int *v8; // r6@16
  unsigned int v9; // r0@18

  v1 = this;
  *(_DWORD *)this = &off_26E1B64;
  v2 = *((_DWORD *)this + 6);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 8);
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
      (*(void (**)(void))(*(_DWORD *)v2 + 12))();
  }
  v5 = *((_DWORD *)v1 + 4);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 4);
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  return v1;
}


DlcPreCheckScreenHandler::DlcValidationState *__fastcall DlcPreCheckScreenHandler::DlcValidationState::~DlcValidationState(DlcPreCheckScreenHandler::DlcValidationState *this)
{
  DlcPreCheckScreenHandler::DlcValidationState *v1; // r10@1
  void (*v2)(void); // r3@1
  void *v3; // r5@3
  void *v4; // r7@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int *v7; // r0@13
  void *v8; // r5@18
  void *v9; // r7@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  int *v12; // r0@28
  int *v13; // r0@33
  unsigned int *v15; // r2@35
  signed int v16; // r1@37

  v1 = this;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)this + 7);
  std::vector<DlcDependency,std::allocator<DlcDependency>>::~vector((unsigned __int64 *)((char *)v1 + 44));
  v2 = (void (*)(void))*((_DWORD *)v1 + 9);
  if ( v2 )
    v2();
  v4 = (void *)(*((_QWORD *)v1 + 2) >> 32);
  v3 = (void *)*((_QWORD *)v1 + 2);
  if ( v3 != v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v3 = (char *)v3 + 4;
    }
    while ( v3 != v4 );
    v3 = (void *)*((_DWORD *)v1 + 4);
  }
  if ( v3 )
    operator delete(v3);
  v9 = (void *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v8 = (void *)*(_QWORD *)((char *)v1 + 4);
  if ( v8 != v9 )
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v12);
      v8 = (char *)v8 + 4;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 1);
  if ( v8 )
    operator delete(v8);
  v13 = (int *)(*(_DWORD *)v1 - 12);
  if ( v13 != &dword_28898C0 )
    v15 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v1;
}


void __fastcall DlcPreCheckScreenHandler::_startDownload(int a1, int a2)
{
  DlcPreCheckScreenHandler::_startDownload(a1, a2);
}


void __fastcall DlcPreCheckScreenHandler::_checkStorage(int a1, int a2)
{
  DlcPreCheckScreenHandler::_checkStorage(a1, a2);
}


void __fastcall DlcPreCheckScreenHandler::_findMissingOwnedContent(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r6@1
  __int64 v4; // kr00_8@1
  unsigned int *v5; // r0@2
  unsigned int v6; // r1@4
  int v7; // r5@7
  int v8; // r0@7
  int v9; // r0@7
  int v10; // r0@7
  int v11; // r0@7
  int v12; // r0@7
  unsigned int *v13; // r0@8
  unsigned int v14; // r1@10
  __int64 v15; // kr08_8@13
  unsigned int *v16; // r0@14
  unsigned int v17; // r1@16
  unsigned int *v18; // r0@20
  unsigned int v19; // r1@22
  int v20; // r0@25
  void *v21; // r6@27
  unsigned int *v22; // r0@28
  unsigned int v23; // r1@30
  unsigned int *v24; // r0@34
  unsigned int v25; // r1@36
  _DWORD *v26; // r0@39
  unsigned int *v27; // r1@40
  unsigned int v28; // r2@42
  __int64 v29; // r1@45
  unsigned int *v30; // r0@46
  unsigned int v31; // r1@48
  _DWORD *v32; // r0@51
  unsigned int *v33; // r1@52
  unsigned int v34; // r2@54
  __int64 v35; // r1@57
  unsigned int *v36; // r1@60
  unsigned int v37; // r0@62
  unsigned int *v38; // r1@70
  unsigned int v39; // r0@72
  void *v40; // r0@77
  int v41; // r7@78
  void **v42; // r0@78
  void *v43; // r0@78
  void *v44; // r0@81
  unsigned int *v45; // r1@83
  unsigned int v46; // r0@85
  unsigned int *v47; // r1@91
  unsigned int v48; // r0@93
  unsigned int *v49; // r5@97
  unsigned int v50; // r0@99
  unsigned int *v51; // r5@105
  unsigned int v52; // r0@107
  unsigned int v53; // r0@114
  unsigned int *v54; // r2@120
  signed int v55; // r1@122
  unsigned int *v56; // r2@124
  signed int v57; // r1@126
  unsigned int *v58; // r2@128
  signed int v59; // r1@130
  int v60; // [sp+Ch] [bp-7Ch]@78
  void *v61; // [sp+10h] [bp-78h]@78
  int v62; // [sp+18h] [bp-70h]@78
  char v63; // [sp+1Ch] [bp-6Ch]@25
  void (*v64)(void); // [sp+24h] [bp-64h]@25
  int v65; // [sp+2Ch] [bp-5Ch]@7
  int v66; // [sp+30h] [bp-58h]@7
  int v67; // [sp+34h] [bp-54h]@7
  int v68; // [sp+38h] [bp-50h]@7
  int v69; // [sp+3Ch] [bp-4Ch]@7
  int v70; // [sp+40h] [bp-48h]@7
  _DWORD *v71; // [sp+44h] [bp-44h]@57
  void (*v72)(void); // [sp+4Ch] [bp-3Ch]@51
  _DWORD *v73; // [sp+54h] [bp-34h]@45
  void (*v74)(void); // [sp+5Ch] [bp-2Ch]@39
  int v75; // [sp+68h] [bp-20h]@27

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 12);
  if ( HIDWORD(v4) )
  {
    v5 = (unsigned int *)(HIDWORD(v4) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 + 1, v5) );
    }
    else
      ++*v5;
  }
  v7 = *(_DWORD *)v3;
  MainMenuScreenModel::getMissingOwnedPackIdsFromDlcDependencies(
    (int)&v65,
    *(_DWORD *)(v2 + 8),
    (unsigned __int64 *)(*(_DWORD *)v3 + 44));
  v8 = *(_DWORD *)(v7 + 56);
  *(_DWORD *)(v7 + 56) = 0;
  v68 = v8;
  v9 = *(_DWORD *)(v7 + 60);
  *(_DWORD *)(v7 + 60) = 0;
  v69 = v9;
  v10 = *(_DWORD *)(v7 + 64);
  *(_DWORD *)(v7 + 64) = 0;
  v70 = v10;
  *(_DWORD *)(v7 + 56) = v65;
  v65 = 0;
  v11 = *(_DWORD *)(v7 + 60);
  *(_DWORD *)(v7 + 60) = v66;
  v66 = v11;
  v12 = *(_DWORD *)(v7 + 64);
  *(_DWORD *)(v7 + 64) = v67;
  v67 = v12;
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v68);
  std::vector<PackIdVersion,std::allocator<PackIdVersion>>::~vector((unsigned __int64 *)&v65);
    v13 = (unsigned int *)(HIDWORD(v4) + 8);
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      ++*v13;
  v15 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 >> 32 )
    v16 = (unsigned int *)(HIDWORD(v15) + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
    v18 = (unsigned int *)(HIDWORD(v4) + 8);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v20 = MainMenuScreenModel::getDlcBatchModel(*(_DWORD *)(v2 + 8), (unsigned __int64 *)(*(_DWORD *)v3 + 56));
  v64 = 0;
  DlcBatchModel::searchForContentIds(v20, (int)&v63);
  if ( v64 )
    v64();
  v21 = operator new(0x30u);
  sub_119C884((void **)&v75, "store.progress.checkingDownload");
    v22 = (unsigned int *)(HIDWORD(v4) + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  if ( HIDWORD(v15) )
    v24 = (unsigned int *)(HIDWORD(v15) + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 + 1, v24) );
      ++*v24;
  v74 = 0;
  v26 = operator new(0x14u);
  *(_QWORD *)v26 = v4;
    v27 = (unsigned int *)(HIDWORD(v4) + 8);
        v28 = __ldrex(v27);
      while ( __strex(v28 + 1, v27) );
      ++*v27;
  HIDWORD(v29) = sub_118E1C8;
  v26[2] = v2;
  v26[3] = v15;
  LODWORD(v29) = sub_118E344;
  v26[4] = HIDWORD(v15);
  v73 = v26;
  *(_QWORD *)&v74 = v29;
    v30 = (unsigned int *)(HIDWORD(v4) + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 + 1, v30) );
      ++*v30;
  v72 = 0;
  v32 = operator new(0xCu);
  *(_QWORD *)v32 = v4;
    v33 = (unsigned int *)(HIDWORD(v4) + 8);
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  LODWORD(v35) = sub_118E4BC;
  v32[2] = v2;
  HIDWORD(v35) = sub_118E4A4;
  v71 = v32;
  *(_QWORD *)&v72 = v35;
  StoreProgressHandler::StoreProgressHandler((int)v21, &v75, (int)&v73, (int)&v71);
  if ( v72 )
    v72();
    v36 = (unsigned int *)(HIDWORD(v4) + 8);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v4) + 12))(HIDWORD(v4));
  if ( v74 )
    v74();
    v38 = (unsigned int *)(HIDWORD(v4) + 8);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 == 1 )
  v40 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v75 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v40);
  v41 = *(_DWORD *)(v2 + 8);
  sub_119C884((void **)&v62, "store_checking_download");
  v61 = v21;
  v42 = sub_119C884((void **)&v60, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v41, (int)&v62, (int)&v61, 1, (int)v42);
  v43 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v60 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  if ( v61 )
    (*(void (**)(void))(*(_DWORD *)v61 + 4))();
  v61 = 0;
  v44 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v62 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
    v45 = (unsigned int *)(HIDWORD(v4) + 8);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 == 1 )
    v47 = (unsigned int *)(HIDWORD(v15) + 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 == 1 )
      v49 = (unsigned int *)(HIDWORD(v15) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 8))(HIDWORD(v15));
      if ( &pthread_create )
      {
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      }
      else
        v50 = (*v49)--;
      if ( v50 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v15) + 12))(HIDWORD(v15));
    v51 = (unsigned int *)(HIDWORD(v4) + 8);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 == 1 )
        v53 = __ldrex(v51);
      while ( __strex(v53 - 1, v51) );
      v53 = (*v51)--;
    if ( v53 == 1 )
}


int __fastcall DlcPreCheckScreenHandler::isActive(DlcPreCheckScreenHandler *this)
{
  int v1; // r4@1
  unsigned int v2; // r2@2
  unsigned int *v3; // r1@2
  unsigned int v4; // r3@5
  unsigned int v5; // r6@6
  unsigned int v6; // r2@7
  int v7; // r0@7
  unsigned int v8; // r6@7
  int v9; // r5@9
  unsigned int *v11; // r6@16
  unsigned int v12; // r0@18

  v1 = *((_DWORD *)this + 6);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 4);
    v3 = (unsigned int *)(v1 + 4);
    while ( v2 )
    {
      __dmb();
      v4 = __ldrex(v3);
      if ( v4 == v2 )
      {
        v5 = __strex(v2 + 1, v3);
        v2 = v4;
        if ( !v5 )
        {
          __dmb();
          v6 = *v3;
          v7 = *((_DWORD *)this + 5);
          v8 = *v3;
          if ( *v3 )
            LOBYTE(v8) = 1;
          v9 = (unsigned __int8)v8 & (v7 != 0);
          if ( &pthread_create )
          {
            __dmb();
            do
              v6 = __ldrex(v3);
            while ( __strex(v6 - 1, v3) );
          }
          else
            *v3 = v6 - 1;
          if ( v6 == 1 )
            v11 = (unsigned int *)(v1 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 8))(v1);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v1 + 12))(v1);
          return v9;
        }
      }
      else
        __clrex();
    }
  }
  return 0;
}


int __fastcall DlcPreCheckScreenHandler::tryDownload(int a1, unsigned __int64 *a2, int a3, char a4, char a5, char a6, char a7)
{
  int v7; // r4@1
  int v8; // r5@1
  unsigned int *v9; // r0@2
  unsigned int v10; // r1@4
  int v11; // r0@7
  unsigned int *v12; // r2@8
  unsigned int v13; // r1@10
  unsigned int *v14; // r0@16
  unsigned int v15; // r1@18
  int result; // r0@21
  int v17; // r4@21
  unsigned int *v18; // r1@22
  unsigned int *v19; // r5@28
  int v20; // r4@35
  unsigned int *v21; // r1@36
  unsigned int *v22; // r5@42
  int v23; // [sp+10h] [bp-28h]@15
  int v24; // [sp+14h] [bp-24h]@15
  int v25; // [sp+18h] [bp-20h]@1
  int v26; // [sp+1Ch] [bp-1Ch]@1
  char v27; // [sp+20h] [bp-18h]@1
  char v28; // [sp+21h] [bp-17h]@1
  char v29; // [sp+22h] [bp-16h]@1
  char v30; // [sp+23h] [bp-15h]@1
  char v31; // [sp+24h] [bp-14h]@1

  v7 = a1;
  v30 = a4;
  v28 = a6;
  v27 = a7;
  v29 = a5;
  j__ZNSt12__shared_ptrIN24DlcPreCheckScreenHandler18DlcValidationStateELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJRKSt6vectorISsSaISsEERSt8functionIFvvEERbSG_SG_SG_EEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v25,
    (int)&v31,
    a2,
    a3,
    &v30,
    &v29,
    &v28,
    &v27);
  *(_DWORD *)(v7 + 20) = v25;
  v8 = v26;
  if ( v26 )
  {
    v9 = (unsigned int *)(v26 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 + 1, v9) );
    }
    else
      ++*v9;
  }
  v11 = *(_DWORD *)(v7 + 24);
  if ( v11 )
    v12 = (unsigned int *)(v11 + 8);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      (*(void (**)(void))(*(_DWORD *)v11 + 12))();
  *(_DWORD *)(v7 + 24) = v8;
  v23 = v25;
  v24 = v26;
    v14 = (unsigned int *)(v26 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  result = DlcPreCheckScreenHandler::_tryAcquireDlc(v7, (int)&v23);
  v17 = v24;
  if ( v24 )
    v18 = (unsigned int *)(v24 + 4);
        result = __ldrex(v18);
      while ( __strex(result - 1, v18) );
      result = (*v18)--;
    if ( result == 1 )
      v19 = (unsigned int *)(v17 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v19);
        while ( __strex(result - 1, v19) );
      }
      else
        result = (*v19)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
  v20 = v26;
    v21 = (unsigned int *)(v26 + 4);
        result = __ldrex(v21);
      while ( __strex(result - 1, v21) );
      result = (*v21)--;
      v22 = (unsigned int *)(v20 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
          result = __ldrex(v22);
        while ( __strex(result - 1, v22) );
        result = (*v22)--;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
  return result;
}


void __fastcall DlcPreCheckScreenHandler::_getFileSizeDialogTitle(int *a1, int a2, int *a3, int a4, signed __int64 a5)
{
  DlcPreCheckScreenHandler::_getFileSizeDialogTitle(a1, a2, a3, a4, a5);
}


ModalScreenData *__fastcall DlcPreCheckScreenHandler::_promptWifiWarning(int a1, unsigned __int64 *a2)
{
  int v2; // r5@1
  unsigned __int64 *v3; // r4@1
  unsigned __int64 v4; // kr00_8@1
  int v5; // r6@1
  unsigned int *v6; // r0@2
  unsigned int v7; // r1@4
  _DWORD *v8; // r0@7
  __int64 v9; // r1@7 OVERLAPPED
  _DWORD *v11; // [sp+4h] [bp-5Ch]@7
  __int64 v12; // [sp+Ch] [bp-54h]@7
  void *v13; // [sp+14h] [bp-4Ch]@1
  int v14; // [sp+18h] [bp-48h]@1
  int v15; // [sp+1Ch] [bp-44h]@1
  int v16; // [sp+20h] [bp-40h]@1
  void *v17; // [sp+24h] [bp-3Ch]@1
  int v18; // [sp+28h] [bp-38h]@1
  int v19; // [sp+2Ch] [bp-34h]@1
  int v20; // [sp+30h] [bp-30h]@1
  void *v21; // [sp+34h] [bp-2Ch]@1
  void *v22; // [sp+38h] [bp-28h]@1
  void *v23; // [sp+3Ch] [bp-24h]@1
  void *v24; // [sp+40h] [bp-20h]@1
  int v25; // [sp+44h] [bp-1Ch]@1
  char v26; // [sp+48h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v13 = &unk_28898CC;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = &unk_28898CC;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = &unk_28898CC;
  v22 = &unk_28898CC;
  v23 = &unk_28898CC;
  v24 = &unk_28898CC;
  v25 = 1;
  v26 = 0;
  sub_119CAD8(&v13, "store.popup.wifiWarn.title", (_BYTE *)0x1A);
  sub_119CAD8(&v17, "store.popup.wifiWarn.msg", (_BYTE *)0x18);
  sub_119CAD8(&v22, "gui.yes", (_BYTE *)7);
  sub_119CAD8(&v23, "gui.no", (_BYTE *)6);
  v4 = *v3;
  v5 = *(_DWORD *)(v2 + 4);
  if ( *v3 >> 32 )
  {
    v6 = (unsigned int *)(HIDWORD(v4) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v8 = operator new(0xCu);
  LODWORD(v9) = sub_118D9A8;
  *(_QWORD *)v8 = v4;
  HIDWORD(v9) = sub_118D754;
  v8[2] = v2;
  v11 = v8;
  v12 = v9;
  HIDWORD(v9) = &v11;
  MinecraftScreenController::_displayCustomModalPopup(v5, (int)&v13, *(__int64 *)((char *)&v9 + 4));
  if ( (_DWORD)v12 )
    ((void (*)(void))v12)();
  return ModalScreenData::~ModalScreenData((ModalScreenData *)&v13);
}


void __fastcall DlcPreCheckScreenHandler::_checkStorage(int a1, int a2)
{
  int v2; // r7@1
  __int64 v3; // kr00_8@1
  unsigned int *v4; // r0@2
  unsigned int v5; // r2@4
  unsigned int v6; // r2@9
  __int64 v7; // kr08_8@12
  unsigned int *v8; // r0@13
  unsigned int v9; // r2@15
  unsigned int *v10; // r0@19
  unsigned int v11; // r2@21
  int v12; // r0@24
  void *v13; // r8@26
  unsigned int *v14; // r0@27
  unsigned int v15; // r1@29
  unsigned int *v16; // r0@33
  unsigned int v17; // r1@35
  _DWORD *v18; // r0@38
  unsigned int *v19; // r1@39
  unsigned int v20; // r2@41
  __int64 v21; // r1@44
  unsigned int *v22; // r0@45
  unsigned int v23; // r1@47
  _DWORD *v24; // r0@50
  unsigned int *v25; // r1@51
  unsigned int v26; // r2@53
  __int64 v27; // r1@56
  unsigned int *v28; // r1@59
  unsigned int v29; // r0@61
  unsigned int *v30; // r1@69
  unsigned int v31; // r0@71
  void *v32; // r0@76
  int v33; // r7@77
  void **v34; // r0@77
  void *v35; // r0@77
  void *v36; // r0@80
  unsigned int *v37; // r1@82
  unsigned int v38; // r0@84
  unsigned int *v39; // r1@90
  unsigned int v40; // r0@92
  unsigned int *v41; // r5@96
  unsigned int v42; // r0@98
  unsigned int *v43; // r5@104
  unsigned int v44; // r0@106
  unsigned int v45; // r0@113
  unsigned int *v46; // r2@119
  signed int v47; // r1@121
  unsigned int *v48; // r2@123
  signed int v49; // r1@125
  unsigned int *v50; // r2@127
  signed int v51; // r1@129
  int v52; // [sp+8h] [bp-68h]@77
  void *v53; // [sp+Ch] [bp-64h]@77
  int v54; // [sp+14h] [bp-5Ch]@77
  char v55; // [sp+18h] [bp-58h]@24
  void (*v56)(void); // [sp+20h] [bp-50h]@24
  _DWORD *v57; // [sp+28h] [bp-48h]@56
  void (*v58)(void); // [sp+30h] [bp-40h]@50
  _DWORD *v59; // [sp+38h] [bp-38h]@44
  void (*v60)(void); // [sp+40h] [bp-30h]@38
  int v61; // [sp+4Ch] [bp-24h]@26

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 12);
  if ( HIDWORD(v3) )
  {
    v4 = (unsigned int *)(HIDWORD(v3) + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 + 1, v4) );
    }
    else
      ++*v4;
        v6 = __ldrex(v4);
      while ( __strex(v6 + 1, v4) );
  }
  v7 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 >> 32 )
    v8 = (unsigned int *)(HIDWORD(v7) + 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 + 1, v8) );
      ++*v8;
    v10 = (unsigned int *)(HIDWORD(v3) + 8);
        v11 = __ldrex(v10);
      while ( __strex(v11 + 1, v10) );
      ++*v10;
  v12 = MainMenuScreenModel::getDlcBatchModel(*(_DWORD *)(v2 + 8), (unsigned __int64 *)(*(_DWORD *)a2 + 4));
  v56 = 0;
  DlcBatchModel::checkStorageSpace(v12, (int)&v55);
  if ( v56 )
    v56();
  v13 = operator new(0x30u);
  sub_119C884((void **)&v61, "store.progress.checkingDownload");
    v14 = (unsigned int *)(HIDWORD(v3) + 8);
        v15 = __ldrex(v14);
      while ( __strex(v15 + 1, v14) );
      ++*v14;
  if ( HIDWORD(v7) )
    v16 = (unsigned int *)(HIDWORD(v7) + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 + 1, v16) );
      ++*v16;
  v60 = 0;
  v18 = operator new(0x14u);
  *(_QWORD *)v18 = v3;
    v19 = (unsigned int *)(HIDWORD(v3) + 8);
        v20 = __ldrex(v19);
      while ( __strex(v20 + 1, v19) );
      ++*v19;
  HIDWORD(v21) = sub_118E568;
  v18[2] = v2;
  v18[3] = v7;
  LODWORD(v21) = sub_118E820;
  v18[4] = HIDWORD(v7);
  v59 = v18;
  *(_QWORD *)&v60 = v21;
    v22 = (unsigned int *)(HIDWORD(v3) + 8);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v58 = 0;
  v24 = operator new(0xCu);
  *(_QWORD *)v24 = v3;
    v25 = (unsigned int *)(HIDWORD(v3) + 8);
        v26 = __ldrex(v25);
      while ( __strex(v26 + 1, v25) );
      ++*v25;
  LODWORD(v27) = sub_118E998;
  v24[2] = v2;
  HIDWORD(v27) = sub_118E980;
  v57 = v24;
  *(_QWORD *)&v58 = v27;
  StoreProgressHandler::StoreProgressHandler((int)v13, &v61, (int)&v59, (int)&v57);
  if ( v58 )
    v58();
    v28 = (unsigned int *)(HIDWORD(v3) + 8);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 == 1 )
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v3) + 12))(HIDWORD(v3));
  if ( v60 )
    v60();
    v30 = (unsigned int *)(HIDWORD(v3) + 8);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
  v32 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v61 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v32);
  v33 = *(_DWORD *)(v2 + 8);
  sub_119C884((void **)&v54, "store_checking_download");
  v53 = v13;
  v34 = sub_119C884((void **)&v52, (const char *)&unk_257BC67);
  MainMenuScreenModel::navigateToModalProgressScreen(v33, (int)&v54, (int)&v53, 1, (int)v34);
  v35 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v52 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v35);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  v53 = 0;
  v36 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v54 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v36);
    v37 = (unsigned int *)(HIDWORD(v3) + 8);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
    v39 = (unsigned int *)(HIDWORD(v7) + 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 == 1 )
      v41 = (unsigned int *)(HIDWORD(v7) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 8))(HIDWORD(v7));
      if ( &pthread_create )
      {
        __dmb();
        do
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
      }
      else
        v42 = (*v41)--;
      if ( v42 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v7) + 12))(HIDWORD(v7));
    v43 = (unsigned int *)(HIDWORD(v3) + 8);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
        v45 = __ldrex(v43);
      while ( __strex(v45 - 1, v43) );
      v45 = (*v43)--;
    if ( v45 == 1 )
}


_DWORD *__fastcall DlcPreCheckScreenHandler::DlcValidationState::DlcValidationState(_DWORD *a1, unsigned __int64 *a2, int a3, char a4, char a5, char a6, char a7)
{
  _DWORD *v7; // r11@1
  int v8; // r5@1
  char v9; // r8@1
  int v10; // r10@1
  _DWORD *v11; // r6@1
  int v12; // r0@1
  void (__fastcall *v13)(_DWORD *, int, signed int); // r3@1
  int v14; // r5@3
  unsigned int v15; // r2@3
  unsigned int v16; // r1@3
  int v17; // r10@6
  _DWORD *v18; // r4@7
  unsigned int *v19; // r2@8
  signed int v20; // r1@10
  int *v21; // r0@16

  v7 = a1;
  v8 = a3;
  v9 = a4;
  *a1 = &unk_28898CC;
  std::vector<std::string,std::allocator<std::string>>::vector((int)(a1 + 1), a2);
  v7[4] = 0;
  v10 = (int)(v7 + 4);
  v11 = 0;
  *(_DWORD *)(v10 + 20) = 0;
  v12 = 0;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  v13 = *(void (__fastcall **)(_DWORD *, int, signed int))(v8 + 8);
  if ( v13 )
  {
    v13(v7 + 7, v8, 2);
    v7[10] = *(_DWORD *)(v8 + 12);
    v7[9] = *(_DWORD *)(v8 + 8);
    v11 = (_DWORD *)(*((_QWORD *)v7 + 2) >> 32);
    v12 = *((_QWORD *)v7 + 2);
  }
  v7[11] = 0;
  v14 = (int)(v7 + 11);
  *(_WORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 16) = 0;
  *(_DWORD *)(v14 + 20) = 0;
  *(_DWORD *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 8) = 0;
  *(_DWORD *)(v14 + 12) = 0;
  *(_BYTE *)(v14 + 26) = v9;
  *(_BYTE *)(v14 + 27) = a5;
  *(_DWORD *)(v14 + 28) = 0;
  *(_BYTE *)(v14 + 32) = a6;
  v15 = ((signed int)v11 - v12) >> 2;
  *(_BYTE *)(v14 + 33) = a7;
  v16 = (signed int)((*(_QWORD *)(v7 + 1) >> 32) - *(_QWORD *)(v7 + 1)) >> 2;
  if ( v16 <= v15 )
    if ( v16 < v15 )
    {
      v17 = v12 + 4 * v16;
      if ( v11 != (_DWORD *)v17 )
      {
        v18 = (_DWORD *)(v12 + 4 * v16);
        do
        {
          v21 = (int *)(*v18 - 12);
          if ( v21 != &dword_28898C0 )
          {
            v19 = (unsigned int *)(*v18 - 4);
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
              j_j_j_j_j__ZdlPv_9_1(v21);
          }
          ++v18;
        }
        while ( v18 != v11 );
      }
      v7[5] = v17;
    }
  else
    std::vector<std::string,std::allocator<std::string>>::_M_default_append((int)(v7 + 4), v16 - v15);
  return v7;
}


int *__fastcall DlcPreCheckScreenHandler::DlcValidationState::DlcValidationState(int *a1, int *a2, char a3, char a4, int a5, unsigned __int64 *a6)
{
  char v6; // r9@1
  char v7; // r6@1
  int *v8; // r4@1
  int v9; // r5@1
  void (__fastcall *v10)(int *, int, signed int); // r3@1

  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_119C854(a1, a2);
  v8[9] = 0;
  v8[1] = 0;
  v9 = (int)(v8 + 1);
  *(_DWORD *)(v9 + 4) = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(v9 + 12) = 0;
  *(_DWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  v10 = *(void (__fastcall **)(int *, int, signed int))(a5 + 8);
  if ( v10 )
  {
    v10(v8 + 7, a5, 2);
    v8[10] = *(_DWORD *)(a5 + 12);
    v8[9] = *(_DWORD *)(a5 + 8);
  }
  std::vector<DlcDependency,std::allocator<DlcDependency>>::vector((int)(v8 + 11), a6);
  v8[14] = 0;
  v8[15] = 0;
  v8[16] = 0;
  *((_BYTE *)v8 + 68) = v7;
  *((_BYTE *)v8 + 69) = v6;
  *((_BYTE *)v8 + 70) = 1;
  *((_BYTE *)v8 + 71) = 0;
  *((_BYTE *)v8 + 72) = 0;
  *((_BYTE *)v8 + 73) = 0;
  *((_BYTE *)v8 + 74) = 1;
  *((_BYTE *)v8 + 75) = 0;
  *((_BYTE *)v8 + 76) = 1;
  *((_BYTE *)v8 + 77) = 0;
  return v8;
}


void __fastcall DlcPreCheckScreenHandler::_startDownload(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r8@1
  DlcBatchModel *v4; // r0@1
  int v5; // r1@1
  signed __int64 v6; // r6@1
  int v7; // r0@1
  unsigned int *v8; // r0@2
  unsigned int v9; // r1@4
  int v10; // r4@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r0@10
  unsigned int *v13; // r5@14
  unsigned int v14; // r0@16
  int v15; // r0@21
  int v16; // r1@21
  unsigned int *v17; // r1@22
  unsigned int v18; // r0@24
  int v19; // r4@28
  const char *v20; // r1@28
  __int64 v21; // r2@30
  __int64 v22; // r2@31
  int v23; // r3@31
  __int64 v24; // r2@33
  void *v25; // r0@34
  const void **v26; // r0@35
  char *v27; // r0@35
  void *v28; // r0@35
  char *v29; // r4@36
  int v30; // r6@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  int *v33; // r0@46
  char *v34; // r0@51
  void *v35; // r0@52
  __int64 v36; // r2@53
  __int64 v37; // r2@53
  void *v38; // r0@53
  __int64 v39; // r2@54
  void *v40; // r0@54
  void *v41; // r0@58
  int v42; // r4@59
  int v43; // r6@59
  int v44; // r9@59
  int v45; // r10@59
  unsigned int *v46; // r0@60
  unsigned int v47; // r1@62
  __int64 v48; // kr08_8@65
  unsigned int *v49; // r0@66
  unsigned int v50; // r1@68
  _DWORD *v51; // r0@71
  __int64 v52; // r1@71 OVERLAPPED
  void *v53; // r0@73
  void *v54; // r0@74
  void *v55; // r0@75
  int v56; // r4@76
  unsigned int *v57; // r1@77
  unsigned int v58; // r0@79
  unsigned int *v59; // r5@83
  unsigned int v60; // r0@85
  void *v61; // r0@90
  unsigned int *v62; // r2@92
  signed int v63; // r1@94
  unsigned int *v64; // r2@96
  signed int v65; // r1@98
  unsigned int *v66; // r2@100
  signed int v67; // r1@102
  unsigned int *v68; // r2@104
  signed int v69; // r1@106
  unsigned int *v70; // r2@108
  signed int v71; // r1@110
  int v72; // r2@112
  signed int v73; // r1@114
  signed int v74; // r1@118
  unsigned int *v75; // r2@120
  signed int v76; // r1@122
  unsigned int *v77; // r2@124
  signed int v78; // r1@126
  unsigned int *v79; // r2@128
  signed int v80; // r1@130
  unsigned int *v81; // r2@132
  signed int v82; // r1@134
  _DWORD *v83; // [sp+8h] [bp-C0h]@71
  __int64 v84; // [sp+10h] [bp-B8h]@71
  int v85; // [sp+18h] [bp-B0h]@56
  int v86; // [sp+1Ch] [bp-ACh]@54
  int v87; // [sp+20h] [bp-A8h]@53
  int v88; // [sp+24h] [bp-A4h]@35
  char *v89; // [sp+28h] [bp-A0h]@35
  char *v90; // [sp+2Ch] [bp-9Ch]@35
  char *v91; // [sp+30h] [bp-98h]@35
  char *v92; // [sp+34h] [bp-94h]@35
  int v93; // [sp+38h] [bp-90h]@35
  int v94; // [sp+3Ch] [bp-8Ch]@34
  void *v95; // [sp+40h] [bp-88h]@34
  int v96; // [sp+44h] [bp-84h]@34
  int v97; // [sp+48h] [bp-80h]@34
  int v98; // [sp+4Ch] [bp-7Ch]@34
  void *v99; // [sp+50h] [bp-78h]@34
  int v100; // [sp+54h] [bp-74h]@34
  int v101; // [sp+58h] [bp-70h]@34
  int v102; // [sp+5Ch] [bp-6Ch]@34
  void *v103; // [sp+60h] [bp-68h]@34
  void *v104; // [sp+64h] [bp-64h]@34
  void *v105; // [sp+68h] [bp-60h]@34
  void *v106; // [sp+6Ch] [bp-5Ch]@34
  int v107; // [sp+70h] [bp-58h]@34
  char v108; // [sp+74h] [bp-54h]@34
  int v109; // [sp+78h] [bp-50h]@31
  int v110; // [sp+7Ch] [bp-4Ch]@31
  int v111; // [sp+84h] [bp-44h]@30
  int v112; // [sp+88h] [bp-40h]@21
  int v113; // [sp+8Ch] [bp-3Ch]@21
  int v114; // [sp+90h] [bp-38h]@21
  int v115; // [sp+94h] [bp-34h]@1
  int v116; // [sp+98h] [bp-30h]@1
  int v117; // [sp+9Ch] [bp-2Ch]@7

  v2 = a2;
  v3 = a1;
  v4 = (DlcBatchModel *)MainMenuScreenModel::getDlcBatchModel(
                          *(_DWORD *)(a1 + 8),
                          (unsigned __int64 *)(*(_DWORD *)a2 + 4));
  LODWORD(v6) = DlcBatchModel::getDownloadSize(v4);
  v115 = *(_DWORD *)v2;
  HIDWORD(v6) = v5;
  v7 = *(_DWORD *)(v2 + 4);
  v116 = v7;
  if ( v7 )
  {
    v8 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v9 = __ldrex(v8);
        v5 = v9 + 1;
      }
      while ( __strex(v5, v8) );
    }
    else
      v5 = *v8 + 1;
      *v8 = v5;
  }
  DlcPreCheckScreenHandler::_getContentTitle((const void **)&v117, v5, (int)&v115);
  v10 = v116;
  if ( v116 )
    v11 = (unsigned int *)(v116 + 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 == 1 )
      v13 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      else
        v14 = (*v13)--;
      if ( v14 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v112 = v3;
  v15 = *(_DWORD *)v2;
  v113 = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  v114 = v16;
  if ( v16 )
    v17 = (unsigned int *)(v16 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      v15 = *(_DWORD *)v2;
      ++*v17;
  if ( *(_BYTE *)(v15 + 76) )
    v19 = MinecraftScreenModel::isNetworkEnabled(*(MinecraftScreenModel **)(v3 + 8), 1);
    v20 = "update";
    if ( !*(_BYTE *)(*(_DWORD *)v2 + 77) )
      v20 = "download";
    sub_119C884((void **)&v111, v20);
    LODWORD(v21) = v111;
    if ( v19 == 1 )
      Util::format((Util *)&v110, "store.popup.%s.title", v21);
      LODWORD(v22) = v111;
      Util::format((Util *)&v109, "store.popup.%s.msg", v22);
      Util::format((Util *)&v110, "store.popup.%sCell.title", v21);
      LODWORD(v24) = v111;
      Util::format((Util *)&v109, "store.popup.%sCell.msg", v24);
    v95 = &unk_28898CC;
    v96 = 0;
    v97 = 0;
    v98 = 0;
    v99 = &unk_28898CC;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = &unk_28898CC;
    v104 = &unk_28898CC;
    v105 = &unk_28898CC;
    v106 = &unk_28898CC;
    v107 = 1;
    v108 = 0;
    DlcPreCheckScreenHandler::_getFileSizeDialogTitle(&v94, 0, &v110, v23, v6);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v95,
      &v94);
    v25 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v94 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v25);
    sub_119C854(&v88, (int *)&unk_27DB130);
    sub_119C8A4((const void **)&v88, (const void **)&v117);
    v26 = sub_119C8A4((const void **)&v88, (const void **)&unk_27DB144);
    v89 = (char *)*v26;
    *v26 = &unk_28898CC;
    v90 = 0;
    v91 = 0;
    v92 = 0;
    v27 = (char *)operator new(4u);
    v90 = v27;
    v92 = v27 + 4;
    v91 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v89,
                    (int)&v90,
                    (int)v27);
    I18n::get(&v93, &v109, (unsigned __int64 *)&v90);
      (int *)&v99,
      &v93);
    v28 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v93 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v28);
    v30 = (int)v91;
    v29 = v90;
    if ( v90 != v91 )
        v33 = (int *)(*(_DWORD *)v29 - 12);
        if ( v33 != &dword_28898C0 )
        {
          v31 = (unsigned int *)(*(_DWORD *)v29 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          }
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v33);
        }
        v29 += 4;
      while ( v29 != (char *)v30 );
      v29 = v90;
    if ( v29 )
      operator delete(v29);
    v34 = v89 - 12;
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v89 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v34);
    v35 = (void *)(v88 - 12);
    if ( (int *)(v88 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v88 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v35);
    HIDWORD(v36) = v111;
    LODWORD(v36) = **(_DWORD **)(*(_DWORD *)v2 + 4);
    Util::format((Util *)&v87, " - %s - store.popup.%s.msg", v36);
      (int *)&v103,
      &v87);
    v38 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v72 = v87 - 4;
          v73 = __ldrex((unsigned int *)v37);
          HIDWORD(v37) = v73 - 1;
        while ( __strex(v73 - 1, (unsigned int *)v37) );
        v73 = *(_DWORD *)v37;
        HIDWORD(v37) = *(_DWORD *)v37 - 1;
        *(_DWORD *)v37 = HIDWORD(v37);
      if ( v73 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v38);
    LODWORD(v37) = v111;
    Util::format((Util *)&v86, "store.popup.%s.button1", v37);
      (int *)&v104,
      &v86);
    v40 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      LODWORD(v39) = v86 - 4;
          v74 = __ldrex((unsigned int *)v39);
          HIDWORD(v39) = v74 - 1;
        while ( __strex(v74 - 1, (unsigned int *)v39) );
        v74 = *(_DWORD *)v39;
        HIDWORD(v39) = *(_DWORD *)v39 - 1;
        *(_DWORD *)v39 = HIDWORD(v39);
      if ( v74 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    LODWORD(v39) = v111;
    if ( *(_BYTE *)(*(_DWORD *)v2 + 68) )
      Util::format((Util *)&v85, "store.popup.%s.button2", v39);
      Util::format((Util *)&v85, "store.popup.%s.back", v39);
      (int *)&v106,
      &v85);
    v41 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v85 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v41);
    v42 = v112;
    v43 = v113;
    v44 = v114;
    v45 = *(_DWORD *)(v3 + 4);
    if ( v114 )
      v46 = (unsigned int *)(v114 + 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 + 1, v46) );
        ++*v46;
    v48 = *(_QWORD *)v2;
    if ( *(_QWORD *)v2 >> 32 )
      v49 = (unsigned int *)(HIDWORD(v48) + 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 + 1, v49) );
        ++*v49;
    v51 = operator new(0x18u);
    LODWORD(v52) = sub_118E02C;
    *v51 = v42;
    v51[1] = v43;
    v51[2] = v44;
    HIDWORD(v52) = sub_118DEE0;
    v51[3] = v3;
    *((_QWORD *)v51 + 2) = v48;
    v83 = v51;
    v84 = v52;
    HIDWORD(v52) = &v83;
    MinecraftScreenController::_displayCustomModalPopup(v45, (int)&v95, *(__int64 *)((char *)&v52 + 4));
    if ( (_DWORD)v84 )
      ((void (*)(void))v84)();
    ModalScreenData::~ModalScreenData((ModalScreenData *)&v95);
    v53 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v109 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v53);
    v54 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v79 = (unsigned int *)(v110 - 4);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v54);
    v55 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v81 = (unsigned int *)(v111 - 4);
          v82 = __ldrex(v81);
        while ( __strex(v82 - 1, v81) );
        v82 = (*v81)--;
      if ( v82 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v55);
  else
    sub_118A778((int)&v112);
  v56 = v114;
  if ( v114 )
    v57 = (unsigned int *)(v114 + 4);
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
  v61 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v117 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v61);
}


signed int __fastcall DlcPreCheckScreenHandler::_tryContinue(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r6@1
  int v4; // r4@1
  signed int result; // r0@1
  int v6; // r8@2
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  int v9; // r5@9
  int v10; // r7@9
  bool v11; // zf@10
  signed int v12; // r6@15
  unsigned int *v13; // r1@17
  unsigned int *v14; // r4@23

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)a2;
  result = *(_DWORD *)(*(_DWORD *)a2 + 36);
  if ( !result )
    return result;
  v6 = *(_DWORD *)(a2 + 4);
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    }
    else
      ++*v7;
  }
  result = MainMenuScreenModel::hasUnownedDlcDependencies(*(_DWORD *)(v3 + 8), (unsigned __int64 *)(v4 + 44));
  if ( result != 1 )
    goto LABEL_39;
  v9 = *(_QWORD *)(v4 + 44) >> 32;
  v10 = *(_QWORD *)(v4 + 44);
  if ( v10 != v9 )
    while ( 1 )
      result = MainMenuScreenModel::hasEntitlementFor(*(MainMenuScreenModel **)(v3 + 8), (const PackIdVersion *)v10);
      v11 = result == 0;
      if ( !result )
      {
        result = *(_DWORD *)(v10 + 48);
        v11 = result == 2;
      }
      if ( v11 )
        break;
      v10 += 56;
      if ( v9 == v10 )
        goto LABEL_14;
    v12 = 0;
    goto LABEL_16;
LABEL_14:
  result = *(_BYTE *)(v4 + 68);
  if ( *(_BYTE *)(v4 + 68) )
LABEL_39:
    v12 = 1;
  else
LABEL_16:
    v13 = (unsigned int *)(v6 + 4);
        result = __ldrex(v13);
      while ( __strex(result - 1, v13) );
      result = (*v13)--;
    if ( result == 1 )
      v14 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
        __dmb();
        do
          result = __ldrex(v14);
        while ( __strex(result - 1, v14) );
      else
        result = (*v14)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  if ( v12 == 1 )
    if ( !*(_DWORD *)(*(_DWORD *)v2 + 36) )
      sub_119C8E4();
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(*(_DWORD *)v2 + 28);
  return result;
}
