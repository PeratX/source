

void __fastcall MusicDownloader::~MusicDownloader(MusicDownloader *this)
{
  MusicDownloader::~MusicDownloader(this);
}


int __fastcall MusicDownloader::MusicDownloader(int a1, int a2, int a3, int a4, int a5, int a6, unsigned int a7, int a8, unsigned int a9)
{
  int v9; // r9@1
  void *v10; // r0@1
  int v11; // r5@2
  int v12; // r7@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  int v19; // r1@28
  void *v20; // r0@28
  int v21; // r1@29
  void *v22; // r0@29
  int v23; // r1@30
  void *v24; // r0@30
  unsigned int *v26; // r2@36
  signed int v27; // r1@38
  int v28; // [sp+1Ch] [bp-34h]@1
  int v29; // [sp+20h] [bp-30h]@1
  int v30; // [sp+24h] [bp-2Ch]@1
  int v31; // [sp+28h] [bp-28h]@1

  v9 = a1;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  PackDownloader::PackDownloader(
    a1,
    a2,
    a3,
    a4,
    __PAIR__(a6, a5),
    __PAIR__(a9, a7),
    &v29,
    (unsigned __int64 *)&v28,
    0,
    (unsigned int)&unk_28898CC);
  v10 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  }
  v12 = v30;
  v11 = v29;
  if ( v29 != v30 )
    do
      v19 = *(_DWORD *)(v11 + 32);
      v20 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v19 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v20);
      }
      v21 = *(_DWORD *)(v11 + 28);
      v22 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v21 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v22);
      v23 = *(_DWORD *)(v11 + 24);
      v24 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v23 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v24);
      v11 += 48;
    while ( v11 != v12 );
    v11 = v29;
  if ( v11 )
    operator delete((void *)v11);
  *(_DWORD *)v9 = &off_26DD0AC;
  *(_DWORD *)(v9 + 180) = a8;
  return v9;
}


void __fastcall MusicDownloader::~MusicDownloader(MusicDownloader *this)
{
  PackDownloader *v1; // r0@1

  v1 = PackDownloader::~PackDownloader(this);
  j_j_j__ZdlPv_4((void *)v1);
}


RakNet *__fastcall MusicDownloader::_onDownloadComplete(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  int v5; // r1@2
  void *v6; // r0@2
  int v7; // r8@3
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  int (__fastcall *v10)(int, signed int); // r2@9
  RakNet *result; // r0@9
  void *v12; // r6@12
  int v13; // r0@12
  unsigned int *v14; // r0@13
  unsigned int v15; // r1@15
  _DWORD *v16; // r0@18
  int v17; // r1@18
  int v18; // r4@20
  unsigned int *v19; // r1@21
  unsigned int v20; // r0@23
  unsigned int *v21; // r5@27
  unsigned int v22; // r0@29
  char *v23; // r0@34
  int v24; // r4@37
  unsigned int *v25; // r1@38
  unsigned int v26; // r0@40
  unsigned int *v27; // r5@44
  unsigned int v28; // r0@46
  char *v29; // r0@51
  void *v30; // r0@52
  int v31; // r4@53
  unsigned int *v32; // r1@54
  unsigned int v33; // r0@56
  unsigned int *v34; // r5@60
  unsigned int v35; // r0@62
  void *v36; // r0@67
  unsigned int *v37; // r2@70
  signed int v38; // r1@72
  unsigned int *v39; // r2@74
  signed int v40; // r1@76
  unsigned int *v41; // r2@78
  signed int v42; // r1@80
  unsigned int *v43; // r2@82
  signed int v44; // r1@84
  unsigned int *v45; // r2@86
  signed int v46; // r1@88
  char *v47; // [sp+Ch] [bp-494h]@12
  int v48; // [sp+10h] [bp-490h]@12
  int v49; // [sp+14h] [bp-48Ch]@12
  _DWORD *v50; // [sp+18h] [bp-488h]@18
  void (*v51)(void); // [sp+20h] [bp-480h]@18
  int (*v52)(); // [sp+24h] [bp-47Ch]@18
  int v53; // [sp+28h] [bp-478h]@3
  int v54; // [sp+2Ch] [bp-474h]@3
  char *v55; // [sp+30h] [bp-470h]@3
  int v56; // [sp+34h] [bp-46Ch]@3
  int v57; // [sp+38h] [bp-468h]@3
  void *v58; // [sp+3Ch] [bp-464h]@12
  void (*v59)(void); // [sp+44h] [bp-45Ch]@12
  signed int (__fastcall *v60)(_DWORD *); // [sp+48h] [bp-458h]@12
  int v61; // [sp+4Ch] [bp-454h]@3
  int v62; // [sp+50h] [bp-450h]@3
  int v63; // [sp+54h] [bp-44Ch]@3
  int v64; // [sp+58h] [bp-448h]@2
  int v65; // [sp+5Ch] [bp-444h]@2
  int v66; // [sp+60h] [bp-440h]@2
  int v67; // [sp+64h] [bp-43Ch]@2
  const char *v68; // [sp+68h] [bp-438h]@2
  int v69; // [sp+6Ch] [bp-434h]@2
  char v70; // [sp+74h] [bp-42Ch]@3
  char v71; // [sp+7Ch] [bp-424h]@2
  int v72; // [sp+80h] [bp-420h]@2
  RakNet *v73; // [sp+484h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  v73 = _stack_chk_guard;
  if ( a2 )
  {
    *(_DWORD *)(a1 + 40) = 3;
    ResourcePackRepository::getResourcePacksPath((ResourcePackRepository *)&v64, *(int **)(a1 + 108));
    v5 = *(_DWORD *)(v64 - 12);
    v66 = v64;
    v67 = v5;
    v68 = "vanilla_music";
    v69 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v71, (int)&v66, 2);
    sub_119C884((void **)&v65, (const char *)&v72);
    v6 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
    {
      v37 = (unsigned int *)(v64 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v6);
    }
    SoundEngine::unloadMusic(*(SoundEngine **)(v3 + 180));
    v61 = 0;
    std::__shared_ptr<int,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<int>,int>((int)&v62, (int)&v70, &v61);
    v53 = v3;
    v7 = TaskGroup::DISK;
    sub_119C854(&v54, v4);
    sub_119C854((int *)&v55, &v65);
    v56 = v62;
    v57 = v63;
    if ( v63 )
      v8 = (unsigned int *)(v63 + 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        ++*v8;
    v59 = 0;
    v12 = operator new(0x14u);
    *(_DWORD *)v12 = v53;
    sub_119C854((int *)v12 + 1, &v54);
    *((_DWORD *)v12 + 2) = v55;
    v55 = (char *)&unk_28898CC;
    *((_DWORD *)v12 + 3) = v56;
    v13 = v57;
    v57 = 0;
    *((_DWORD *)v12 + 4) = v13;
    v56 = 0;
    v58 = v12;
    v59 = (void (*)(void))sub_F66B8C;
    v60 = sub_F66AF8;
    sub_119C854((int *)&v47, &v65);
    v48 = v62;
    v49 = v63;
      v14 = (unsigned int *)(v63 + 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
        ++*v14;
    v51 = 0;
    v16 = operator new(0x10u);
    *v16 = v3;
    v16[1] = v47;
    v47 = (char *)&unk_28898CC;
    v16[2] = v48;
    v17 = v49;
    v49 = 0;
    v16[3] = v17;
    v48 = 0;
    v50 = v16;
    v51 = (void (*)(void))sub_F67024;
    v52 = sub_F66D88;
    TaskGroup::queue(v7, (int)&v58, (int)&v50, 1u, 0xFFFFFFFF);
    if ( v51 )
      v51();
    v18 = v49;
    if ( v49 )
      v19 = (unsigned int *)(v49 + 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        v21 = (unsigned int *)(v18 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 8))(v18);
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
          (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 12))(v18);
    v23 = v47 - 12;
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v47 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    if ( v59 )
      v59();
    v24 = v57;
    if ( v57 )
      v25 = (unsigned int *)(v57 + 4);
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
    v29 = v55 - 12;
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v55 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v54 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    v31 = v63;
      v32 = (unsigned int *)(v63 + 4);
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
    v36 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v65 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v36);
    result = (RakNet *)(_stack_chk_guard - v73);
    if ( _stack_chk_guard != v73 )
      goto LABEL_69;
  }
  else
    *(_DWORD *)(a1 + 40) = 5;
    if ( !*(_DWORD *)(a1 + 156) )
      sub_119C8E4();
    v10 = *(int (__fastcall **)(int, signed int))(a1 + 160);
LABEL_69:
      _stack_chk_fail(result);
    result = (RakNet *)v10(v3 + 148, 5);
  return result;
}
