

void __fastcall ResourcePackCopyProgressHandler::getTitleText(ResourcePackCopyProgressHandler *this)
{
  ResourcePackCopyProgressHandler::getTitleText(this);
}


void __fastcall ResourcePackCopyProgressHandler::~ResourcePackCopyProgressHandler(ResourcePackCopyProgressHandler *this)
{
  ResourcePackCopyProgressHandler::~ResourcePackCopyProgressHandler(this);
}


int __fastcall ResourcePackCopyProgressHandler::ResourcePackCopyProgressHandler(int a1, int *a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  void (__fastcall *v5)(int, int, signed int); // r3@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = &off_26D76A0;
  *(_DWORD *)(a1 + 4) = 4;
  *(_DWORD *)(a1 + 8) = 0;
  sub_DA73B4((int *)(a1 + 12), a2);
  *(_DWORD *)(v3 + 32) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  v5 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
  if ( v5 )
  {
    v5(v3 + 24, v4, 2);
    *(_DWORD *)(v3 + 36) = *(_DWORD *)(v4 + 12);
    *(_DWORD *)(v3 + 32) = *(_DWORD *)(v4 + 8);
  }
  *(_DWORD *)(v3 + 8) = 0;
  return v3;
}


ResourcePackCopyProgressHandler *__fastcall ResourcePackCopyProgressHandler::~ResourcePackCopyProgressHandler(ResourcePackCopyProgressHandler *this)
{
  ResourcePackCopyProgressHandler *v1; // r4@1
  void (*v2)(void); // r3@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r1@17
  void *v9; // r0@17
  unsigned int *v11; // r2@19
  signed int v12; // r1@21

  v1 = this;
  *(_DWORD *)this = &off_26D76A0;
  v2 = (void (*)(void))*((_DWORD *)this + 8);
  if ( v2 )
    v2();
  v3 = *((_DWORD *)v1 + 5);
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v8 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  return v1;
}


void __fastcall ResourcePackCopyProgressHandler::~ResourcePackCopyProgressHandler(ResourcePackCopyProgressHandler *this)
{
  ResourcePackCopyProgressHandler *v1; // r0@1

  v1 = ResourcePackCopyProgressHandler::~ResourcePackCopyProgressHandler(this);
  j_j_j__ZdlPv_3((void *)v1);
}


RakNet *__fastcall ResourcePackCopyProgressHandler::onStart(ResourcePackCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  ResourcePackCopyProgressHandler *v2; // r9@1
  MinecraftScreenModel *v3; // r11@1
  int v4; // r0@1
  int v5; // r2@1
  int v6; // r3@1
  int *v7; // r0@1
  int v8; // r4@2
  int v9; // r2@2
  int v10; // r3@2
  int v11; // r7@2
  int *v12; // r0@2
  char *v13; // r5@3
  ResourcePackRepository *v14; // r0@3
  char *v15; // r5@5
  ResourcePackRepository *v16; // r0@5
  int v17; // r5@7
  unsigned int *v18; // r1@8
  unsigned int v19; // r0@10
  unsigned int *v20; // r6@14
  unsigned int v21; // r0@16
  int v22; // r5@21
  unsigned int *v23; // r1@22
  unsigned int v24; // r0@24
  unsigned int *v25; // r4@28
  unsigned int v26; // r0@30
  int v27; // r0@35
  ResourcePack **v28; // r4@35
  ResourcePack **v29; // r6@35
  char *v30; // r7@36
  char *v31; // r2@36
  char *v32; // r0@36
  int v33; // r1@37
  int v34; // r3@37
  int v35; // r5@37
  int v36; // r7@37
  unsigned __int64 v37; // kr08_8@40
  unsigned int *v38; // r1@41
  unsigned int v39; // r2@43
  unsigned __int8 *v40; // r1@47
  unsigned int v41; // r2@48
  int v42; // r7@50
  unsigned int *v43; // r1@51
  unsigned int v44; // r0@53
  unsigned int *v45; // r4@57
  unsigned int v46; // r0@59
  int v47; // r10@64
  int v48; // r1@64
  void *v49; // r2@64
  unsigned int v50; // r6@64
  int v51; // r3@64
  unsigned int *v52; // r0@68
  unsigned int v53; // r1@70
  _DWORD *v54; // r6@73
  void *v55; // r0@73
  int v56; // r0@73
  int v57; // r0@73
  int v58; // r5@73
  unsigned __int64 *v59; // r0@73
  int v60; // r0@73
  int v61; // r4@77
  unsigned int *v62; // r1@78
  unsigned int v63; // r0@80
  unsigned int *v64; // r5@84
  unsigned int v65; // r0@86
  PackReport *v66; // r0@91
  PackReport *v67; // r4@91
  PackReport *v68; // r0@96
  PackReport *v69; // r4@96
  int v70; // r4@101
  unsigned int *v71; // r1@102
  unsigned int v72; // r0@104
  unsigned int *v73; // r5@108
  unsigned int v74; // r0@110
  PackReport *v75; // r0@117
  PackReport *v76; // r4@117
  PackReport *v77; // r0@122
  PackReport *v78; // r4@122
  int v79; // r4@127
  unsigned int *v80; // r1@128
  unsigned int v81; // r0@130
  unsigned int *v82; // r5@134
  unsigned int v83; // r0@136
  int v84; // r4@141
  unsigned int *v85; // r1@142
  unsigned int v86; // r0@144
  unsigned int *v87; // r5@148
  unsigned int v88; // r0@150
  RakNet *result; // r0@155
  unsigned int *v90; // r2@157
  signed int v91; // r1@159
  unsigned int *v92; // r2@161
  signed int v93; // r1@163
  char v94; // [sp+10h] [bp-1518h]@73
  void (*v95)(void); // [sp+18h] [bp-1510h]@73
  _DWORD *v96; // [sp+20h] [bp-1508h]@73
  void (*v97)(void); // [sp+28h] [bp-1500h]@73
  signed int (__fastcall *v98)(int); // [sp+2Ch] [bp-14FCh]@73
  unsigned __int64 *v99; // [sp+30h] [bp-14F8h]@40
  int v100; // [sp+34h] [bp-14F4h]@67
  char *v101; // [sp+38h] [bp-14F0h]@35
  char *v102; // [sp+3Ch] [bp-14ECh]@35
  char *v103; // [sp+40h] [bp-14E8h]@35
  void *ptr; // [sp+44h] [bp-14E4h]@35
  ResourcePack **v105; // [sp+48h] [bp-14E0h]@35
  int v106; // [sp+50h] [bp-14D8h]@5
  void *v107; // [sp+54h] [bp-14D4h]@5
  PackReport *v108; // [sp+58h] [bp-14D0h]@117
  int v109; // [sp+60h] [bp-14C8h]@3
  void *v110; // [sp+64h] [bp-14C4h]@3
  PackReport *v111; // [sp+68h] [bp-14C0h]@122
  int *v112; // [sp+70h] [bp-14B8h]@2
  char *v113; // [sp+74h] [bp-14B4h]@2
  int v114; // [sp+78h] [bp-14B0h]@21
  char *v115; // [sp+7Ch] [bp-14ACh]@2
  int v116; // [sp+80h] [bp-14A8h]@7
  int *v117; // [sp+84h] [bp-14A4h]@1
  int *v118; // [sp+88h] [bp-14A0h]@1
  int v119; // [sp+8Ch] [bp-149Ch]@1
  const char *v120; // [sp+90h] [bp-1498h]@1
  int v121; // [sp+94h] [bp-1494h]@1
  char v122; // [sp+98h] [bp-1490h]@2
  char v123; // [sp+A0h] [bp-1488h]@2
  MinecraftScreenModel *v124; // [sp+A4h] [bp-1484h]@64
  void *v125; // [sp+A8h] [bp-1480h]@64
  PackReport *v126; // [sp+ACh] [bp-147Ch]@96
  void *v127; // [sp+B4h] [bp-1474h]@64
  PackReport *v128; // [sp+B8h] [bp-1470h]@91
  void *v129; // [sp+C0h] [bp-1468h]@64
  int v130; // [sp+C4h] [bp-1464h]@64
  char *v131; // [sp+C8h] [bp-1460h]@64
  int v132; // [sp+CCh] [bp-145Ch]@67
  char v133; // [sp+D0h] [bp-1458h]@67
  int v134; // [sp+4D0h] [bp-1058h]@67
  unsigned __int64 *v135; // [sp+4D4h] [bp-1054h]@67
  int v136; // [sp+4D8h] [bp-1050h]@67
  char v137; // [sp+4DCh] [bp-104Ch]@2
  int v138; // [sp+4E0h] [bp-1048h]@67
  int v139; // [sp+8E0h] [bp-C48h]@67
  char v140; // [sp+8E4h] [bp-C44h]@2
  char v141; // [sp+8E8h] [bp-C40h]@2
  int v142; // [sp+CE8h] [bp-840h]@2
  char v143; // [sp+CECh] [bp-83Ch]@2
  int v144; // [sp+CF0h] [bp-838h]@2
  int v145; // [sp+10F0h] [bp-438h]@2
  int v146; // [sp+10F4h] [bp-434h]@1
  int v147; // [sp+10F8h] [bp-430h]@2
  int v148; // [sp+14F8h] [bp-30h]@2
  RakNet *v149; // [sp+14FCh] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v149 = _stack_chk_guard;
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v117, (int)a2);
  v4 = *((_DWORD *)v2 + 3);
  v5 = *(_DWORD *)(v4 - 12);
  v6 = *(v117 - 3);
  v118 = v117;
  v119 = v6;
  v120 = (const char *)v4;
  v121 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v146, (int)&v118, 2);
  v7 = v117 - 3;
  if ( v117 - 3 != &dword_28898C0 )
  {
    v90 = (unsigned int *)(v117 - 1);
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
      j_j_j_j_j__ZdlPv_9(v7);
  }
  v118 = &v147;
  v119 = v148;
  v120 = "world_resource_packs.json";
  v121 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v143, (int)&v118, 2);
  std::__shared_ptr<Core::FileStream,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Core::FileStream>,Core::PathBuffer<Core::StackString<char,1024u>> &>(
    (int)&v115,
    (int)&v123,
    (int)&v143);
  v120 = "world_behavior_packs.json";
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v140, (int)&v118, 2);
  v8 = v142;
  _aeabi_memcpy4(&v144, &v141, v142 + 1);
  v145 = v8;
  v141 = 0;
  v142 = 0;
    (int)&v113,
    (int)&v122,
  MinecraftScreenModel::getLevelBasePath((MinecraftScreenModel *)&v112, (int)v3);
  v9 = *((_DWORD *)v2 + 3);
  v10 = *(v112 - 3);
  v11 = *(_DWORD *)(v9 - 12);
  v118 = v112;
  v119 = v10;
  v120 = (const char *)v9;
  v121 = v11;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v137, (int)&v118, 2);
  v12 = v112 - 3;
  if ( v112 - 3 != &dword_28898C0 )
    v92 = (unsigned int *)(v112 - 1);
        v93 = __ldrex(v92);
      while ( __strex(v93 - 1, v92) );
      v93 = (*v92)--;
    if ( v93 <= 0 )
      j_j_j_j_j__ZdlPv_9(v12);
  v13 = v115;
  v14 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(v3);
  ResourcePackStack::deserialize(&v109, v13, v14);
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v110, (unsigned __int64 *)(v109 + 4));
  if ( v109 )
    (*(void (**)(void))(*(_DWORD *)v109 + 4))();
  v15 = v113;
  v109 = 0;
  v16 = (ResourcePackRepository *)MinecraftScreenModel::getResourcePackRepository(v3);
  ResourcePackStack::deserialize(&v106, v15, v16);
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v107, (unsigned __int64 *)(v106 + 4));
  if ( v106 )
    (*(void (**)(void))(*(_DWORD *)v106 + 4))();
  v115 = 0;
  v17 = v116;
  v106 = 0;
  v116 = 0;
  if ( v17 )
    v18 = (unsigned int *)(v17 + 4);
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
  v113 = 0;
  v22 = v114;
  v114 = 0;
  if ( v22 )
    v23 = (unsigned int *)(v22 + 4);
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
  v27 = MinecraftScreenModel::getResourcePackRepository(v3);
  ResourcePackRepository::getPacksByResourceLocation((int)&ptr, v27, 3);
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v29 = v105;
  v28 = (ResourcePack **)ptr;
  if ( ptr != v105 )
    do
      v30 = ResourcePack::getPackId(*v28);
      v31 = ResourcePack::getVersion(*v28);
      v32 = v102;
      if ( v102 == v103 )
        std::vector<std::pair<mce::UUID,SemVersion>,std::allocator<std::pair<mce::UUID,SemVersion>>>::_M_emplace_back_aux<mce::UUID const&,SemVersion const&>(
          (unsigned __int64 *)&v101,
          (int)v30,
          (int)v31);
        v33 = *(_DWORD *)v30;
        v34 = *((_DWORD *)v30 + 1);
        v35 = *((_DWORD *)v30 + 2);
        v36 = *((_DWORD *)v30 + 3);
        *(_DWORD *)v102 = v33;
        *((_DWORD *)v32 + 1) = v34;
        *((_DWORD *)v32 + 2) = v35;
        *((_DWORD *)v32 + 3) = v36;
        SemVersion::SemVersion((int)(v32 + 16), (int)v31);
        v102 += 40;
      ++v28;
    while ( v29 != v28 );
  j__ZNSt12__shared_ptrISt7promiseIvELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS1_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v99);
  v37 = *v99;
  if ( *v99 >> 32 )
    v38 = (unsigned int *)(HIDWORD(v37) + 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 + 1, v38) );
      ++*v38;
  if ( !(_DWORD)v37 )
    sub_DA8A94(3);
  v40 = (unsigned __int8 *)(v37 + 16);
  __dmb();
  do
    v41 = __ldrex(v40);
  while ( __strex(1u, v40) );
  if ( v41 )
    sub_DA8A94(1);
  *((_DWORD *)v2 + 4) = v37;
  v42 = *((_DWORD *)v2 + 5);
  *((_DWORD *)v2 + 5) = HIDWORD(v37);
  if ( v42 )
    v43 = (unsigned int *)(v42 + 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 == 1 )
      v45 = (unsigned int *)(v42 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 8))(v42);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v42 + 12))(v42);
  v124 = v3;
  v47 = TaskGroup::DISK;
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v125, (unsigned __int64 *)&v110);
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)&v127, (unsigned __int64 *)&v107);
  v48 = (int)v102;
  v49 = 0;
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v50 = -858993459 * ((v102 - v101) >> 3);
  v51 = (int)v102;
  if ( v102 != v101 )
    if ( v50 >= 0x6666667 )
      sub_DA7414();
    v49 = operator new(v102 - v101);
    v48 = (int)v102;
    v51 = (int)v101;
  v129 = v49;
  v130 = (int)v49;
  v131 = (char *)v49 + 40 * v50;
  v130 = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::pair<mce::UUID,SemVersion> const*,std::vector<std::pair<mce::UUID,SemVersion>,std::allocator<std::pair<mce::UUID,SemVersion>>>>,std::pair<mce::UUID,SemVersion>*>(
           v51,
           v48,
           (int)v49);
  v132 = 1023;
  v134 = v139;
  _aeabi_memcpy4(&v133, &v138, v139 + 1);
  v135 = v99;
  v136 = v100;
  if ( v100 )
    v52 = (unsigned int *)(v100 + 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 + 1, v52) );
      ++*v52;
  v54 = operator new(0x438u);
  *v54 = v124;
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)(v54 + 1), (unsigned __int64 *)&v125);
  std::vector<PackInstance,std::allocator<PackInstance>>::vector((int)(v54 + 4), (unsigned __int64 *)&v127);
  v55 = v129;
  v54[7] = v55;
  v56 = v130;
  v54[8] = v56;
  v57 = (int)v131;
  v58 = v134;
  v54[9] = v57;
  v54[10] = 1023;
  _aeabi_memcpy(v54 + 11, &v133, v58 + 1);
  v133 = 0;
  v134 = 0;
  v59 = v135;
  v54[267] = v58;
  v54[268] = v59;
  v60 = v136;
  v136 = 0;
  v54[269] = v60;
  v135 = 0;
  v96 = v54;
  v97 = (void (*)(void))sub_C99DB0;
  v98 = sub_C99C70;
  v95 = 0;
  TaskGroup::queue(v47, (int)&v96, (int)&v94, 1u, 0xFFFFFFFF);
  if ( v95 )
    v95();
  if ( v97 )
    v97();
  v61 = v136;
  if ( v136 )
    v62 = (unsigned int *)(v136 + 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 == 1 )
      v64 = (unsigned int *)(v61 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
  std::vector<std::pair<mce::UUID,SemVersion>,std::allocator<std::pair<mce::UUID,SemVersion>>>::~vector((unsigned __int64 *)&v129);
  v67 = v128;
  v66 = (PackReport *)v127;
  if ( v127 != (void *)v128 )
      v66 = (PackReport *)((char *)PackReport::~PackReport(v66) + 120);
    while ( v67 != v66 );
    v66 = (PackReport *)v127;
  if ( v66 )
    operator delete((void *)v66);
  v69 = v126;
  v68 = (PackReport *)v125;
  if ( v125 != (void *)v126 )
      v68 = (PackReport *)((char *)PackReport::~PackReport(v68) + 120);
    while ( v69 != v68 );
    v68 = (PackReport *)v125;
  if ( v68 )
    operator delete((void *)v68);
  v70 = v100;
    v71 = (unsigned int *)(v100 + 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 == 1 )
      v73 = (unsigned int *)(v70 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 8))(v70);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v70 + 12))(v70);
  std::vector<std::pair<mce::UUID,SemVersion>,std::allocator<std::pair<mce::UUID,SemVersion>>>::~vector((unsigned __int64 *)&v101);
  if ( ptr )
    operator delete(ptr);
  v76 = v108;
  v75 = (PackReport *)v107;
  if ( v107 != (void *)v108 )
      v75 = (PackReport *)((char *)PackReport::~PackReport(v75) + 120);
    while ( v76 != v75 );
    v75 = (PackReport *)v107;
  if ( v75 )
    operator delete((void *)v75);
  v78 = v111;
  v77 = (PackReport *)v110;
  if ( v110 != (void *)v111 )
      v77 = (PackReport *)((char *)PackReport::~PackReport(v77) + 120);
    while ( v78 != v77 );
    v77 = (PackReport *)v110;
  if ( v77 )
    operator delete((void *)v77);
  v79 = v114;
  if ( v114 )
    v80 = (unsigned int *)(v114 + 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 == 1 )
      v82 = (unsigned int *)(v79 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 8))(v79);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v79 + 12))(v79);
  v84 = v116;
  if ( v116 )
    v85 = (unsigned int *)(v116 + 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 == 1 )
      v87 = (unsigned int *)(v84 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 8))(v84);
          v88 = __ldrex(v87);
        while ( __strex(v88 - 1, v87) );
        v88 = (*v87)--;
      if ( v88 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v84 + 12))(v84);
  result = (RakNet *)(_stack_chk_guard - v149);
  if ( _stack_chk_guard != v149 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall ResourcePackCopyProgressHandler::tick(ResourcePackCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  ResourcePackCopyProgressHandler *v2; // r4@1
  MinecraftScreenModel *v3; // r5@1
  int v4; // r0@1
  signed int result; // r0@2
  int v6; // [sp+0h] [bp-18h]@1
  int v7; // [sp+4h] [bp-14h]@1

  v2 = this;
  v6 = 0;
  v7 = 0;
  v3 = a2;
  v4 = *((_DWORD *)this + 4);
  if ( !v4 )
    sub_DA8A94(3);
  result = std::__future_base::_State_baseV2::wait_for<long long,std::ratio<1ll,1ll>>(v4, &v6);
  if ( !result )
  {
    MinecraftScreenModel::leaveScreen(v3);
    if ( *((_DWORD *)v2 + 8) )
      result = (*((int (__fastcall **)(_DWORD))v2 + 9))((char *)v2 + 24);
    else
      result = j_j_j__ZN20MinecraftScreenModel11leaveScreenEv(v3);
  }
  return result;
}


signed int __fastcall ResourcePackCopyProgressHandler::getLoadingState(ResourcePackCopyProgressHandler *this, MinecraftScreenModel *a2)
{
  return 256;
}


void __fastcall ResourcePackCopyProgressHandler::getTitleText(ResourcePackCopyProgressHandler *this)
{
  int *v1; // r4@1
  void *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // [sp+4h] [bp-1Ch]@1

  v1 = (int *)this;
  sub_DA7364((void **)&v5, "progressScreen.message.copyingPacks");
  I18n::get(v1, (int **)&v5);
  v2 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v5 - 4);
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
      j_j_j_j_j__ZdlPv_9(v2);
  }
}
