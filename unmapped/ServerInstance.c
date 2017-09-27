

int __fastcall ServerInstance::stop(ServerInstance *this)
{
  ServerInstance *v1; // r4@1
  int v2; // r5@1
  void (__fastcall *v3)(int, _DWORD, int *); // r6@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *(void (__fastcall **)(int, _DWORD, int *))(**(_DWORD **)this + 12);
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  v3(v2, 0, &v8);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  (*(void (**)(void))(**(_DWORD **)v1 + 28))();
  (*(void (**)(void))(**(_DWORD **)v1 + 32))();
  return (*(int (**)(void))(**(_DWORD **)v1 + 36))();
}


signed int __fastcall ServerInstance::update(ServerInstance *this)
{
  ServerInstance *v1; // r4@1
  signed int result; // r0@1
  int v3; // r5@1
  int v4; // [sp+0h] [bp-20h]@2
  __int64 v5; // [sp+8h] [bp-18h]@1

  v1 = this;
  __dmb();
  *((_BYTE *)this + 32) = 1;
  sub_21E034C(&v5);
  Timer::advanceTime(*((Timer **)v1 + 4), 0.0);
  Timer::advanceTime(*((Timer **)v1 + 5), 0.0);
  result = Minecraft::update(*((Minecraft **)v1 + 2));
  v3 = *((_DWORD *)v1 + 6);
  if ( v3 )
  {
    sub_21E034C(&v4);
    result = Scheduler::processCoroutines(v3, SHIDWORD(v5), v4 - v5, (unsigned __int64)(*(_QWORD *)&v4 - v5) >> 32);
  }
  *((_BYTE *)v1 + 32) = 0;
  return result;
}


_DWORD *__fastcall ServerInstance::ServerInstance(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6, __int64 a7, int *a8, int a9, int a10, int a11, int *a12, LevelSettings *a13, int a14, int a15, int a16, int a17, int a18, int a19, char a20, unsigned __int64 *a21, int *a22, int a23, unsigned int a24, int a25, int a26, int a27, ResourcePackManager *a28, int a29, int a30)
{
  void *v30; // r4@1
  int v31; // r0@1
  void *v32; // r6@3
  int v33; // r4@5
  void (*v34)(void); // r3@6
  void *v35; // r6@9
  int v36; // r4@11
  void (*v37)(void); // r3@12
  unsigned int v38; // r10@15
  __int64 v39; // kr00_8@15
  __int64 v40; // r0@15
  int v41; // r8@15
  void *v42; // r7@15
  Minecraft *v43; // r0@17
  Minecraft *v44; // r0@18
  int v45; // r0@19
  int v46; // r0@20
  void *v47; // r4@20
  void *v48; // r7@21
  int v49; // r4@26
  _DWORD *v50; // r7@26
  int v51; // r0@26
  ResourcePackManager *v52; // r0@26
  int v53; // r4@28
  _DWORD *v54; // r7@28
  int v55; // r0@28
  ResourcePackManager *v56; // r0@28
  int v57; // r4@30
  _DWORD *v58; // r7@30
  int v59; // r0@30
  ResourcePackManager *v60; // r0@30
  int v61; // r4@32
  _DWORD *v62; // r7@32
  int v63; // r0@32
  ResourcePackManager *v64; // r0@32
  ResourcePackManager *v65; // r0@34
  int v66; // r0@36
  int v67; // r2@36
  const char *v68; // r1@36
  int v69; // r3@36
  int *v70; // r0@36
  int v71; // r5@37
  int v72; // r7@39
  int v73; // r0@39
  int v74; // r1@39
  bool v75; // zf@39
  ResourcePackManager *v76; // r0@42
  int v77; // r1@42
  _DWORD *v78; // r6@44
  ResourcePackManager *v79; // r0@44
  unsigned __int64 v80; // r2@46
  unsigned __int64 v81; // r2@46
  Biome *v82; // r0@50
  unsigned int v83; // r1@50
  int v84; // r0@50
  int v85; // r1@50
  void (__fastcall *v86)(char *, int, signed int); // r3@53
  int v87; // r4@54
  void (__fastcall *v88)(int, char *); // r5@54
  int v89; // r7@56
  void (__fastcall *v90)(int, void **); // r4@56
  void (__fastcall *v91)(int *, int, signed int); // r3@56
  void *v92; // r0@58
  void (__fastcall *v93)(_DWORD, _DWORD, _DWORD); // r1@58
  char *v94; // r0@60
  int v95; // r6@63
  unsigned int v96; // r5@63
  Level *v97; // r9@63
  int v98; // r1@63
  char *v99; // r4@65
  char v100; // r0@65
  double v101; // r0@67
  unsigned int v102; // r0@67
  int v103; // r6@69
  int *v104; // r4@69
  int v105; // r0@70
  int v106; // r0@70
  int v107; // r0@70
  ResourcePackStack *v108; // r0@70
  int v109; // r1@71
  ResourcePackStack *v110; // r0@72
  int v111; // r0@73
  ResourcePackStack *v112; // r0@73
  int v113; // r1@74
  ResourcePackStack *v114; // r0@75
  Minecraft *v115; // r6@76
  int *v116; // r0@76
  int v117; // r3@76
  void *v118; // r0@78
  _DWORD *v119; // r1@83
  _DWORD *v120; // r5@84
  void *v121; // r0@88
  unsigned int *v123; // r2@95
  signed int v124; // r1@97
  unsigned int *v125; // r2@99
  signed int v126; // r1@101
  unsigned int *v127; // r2@103
  signed int v128; // r1@105
  unsigned int *v129; // r2@107
  signed int v130; // r1@109
  int v131; // [sp+14h] [bp-2F94h]@0
  unsigned int v132; // [sp+44h] [bp-2F64h]@1
  unsigned int v133; // [sp+48h] [bp-2F60h]@1
  int v134; // [sp+4Ch] [bp-2F5Ch]@1
  _DWORD *v135; // [sp+50h] [bp-2F58h]@1
  int v136; // [sp+54h] [bp-2F54h]@1
  int v137; // [sp+5Ch] [bp-2F4Ch]@76
  int v138; // [sp+60h] [bp-2F48h]@76
  Level *v139; // [sp+64h] [bp-2F44h]@76
  void **v140; // [sp+68h] [bp-2F40h]@70
  int v141; // [sp+6Ch] [bp-2F3Ch]@70
  void *v142; // [sp+70h] [bp-2F38h]@70
  unsigned int v143; // [sp+74h] [bp-2F34h]@67
  _DWORD *v144; // [sp+78h] [bp-2F30h]@67
  int v145; // [sp+7Ch] [bp-2F2Ch]@67
  signed int v146; // [sp+80h] [bp-2F28h]@67
  int v147; // [sp+84h] [bp-2F24h]@67
  int v148; // [sp+88h] [bp-2F20h]@86
  _DWORD *v149; // [sp+8Ch] [bp-2F1Ch]@56
  int v150; // [sp+90h] [bp-2F18h]@57
  void (__fastcall *v151)(_DWORD, _DWORD, _DWORD); // [sp+98h] [bp-2F10h]@56
  int v152; // [sp+9Ch] [bp-2F0Ch]@57
  char *v153; // [sp+A0h] [bp-2F08h]@58
  void *v154; // [sp+A4h] [bp-2F04h]@58
  void (__cdecl *v155)(void **); // [sp+ACh] [bp-2EFCh]@58
  void *v156; // [sp+B0h] [bp-2EF8h]@58
  char v157; // [sp+B4h] [bp-2EF4h]@54
  void (__cdecl *v158)(char *); // [sp+BCh] [bp-2EECh]@54
  int v159; // [sp+C0h] [bp-2EE8h]@54
  int v160; // [sp+C8h] [bp-2EE0h]@51
  int v161; // [sp+CCh] [bp-2EDCh]@52
  int v162; // [sp+D0h] [bp-2ED8h]@50
  _DWORD *v163; // [sp+D4h] [bp-2ED4h]@44
  char v164; // [sp+D8h] [bp-2ED0h]@44
  int v165; // [sp+154h] [bp-2E54h]@42
  int v166; // [sp+158h] [bp-2E50h]@39
  int v167; // [sp+15Ch] [bp-2E4Ch]@37
  int v168; // [sp+160h] [bp-2E48h]@37
  int *v169; // [sp+164h] [bp-2E44h]@36
  _DWORD *v170; // [sp+168h] [bp-2E40h]@26
  void *ptr; // [sp+16Ch] [bp-2E3Ch]@20
  int v172; // [sp+170h] [bp-2E38h]@20
  void *v173; // [sp+174h] [bp-2E34h]@20
  int v174; // [sp+178h] [bp-2E30h]@20
  __int64 v175; // [sp+17Ch] [bp-2E2Ch]@20
  int v176; // [sp+184h] [bp-2E24h]@23
  int (*v177)(void); // [sp+188h] [bp-2E20h]@3
  void (*v178)(void); // [sp+190h] [bp-2E18h]@3
  int (__fastcall *v179)(int (**)(void)); // [sp+194h] [bp-2E14h]@3
  int (*v180)(void); // [sp+198h] [bp-2E10h]@9
  void (*v181)(void); // [sp+1A0h] [bp-2E08h]@9
  int (__fastcall *v182)(int (**)(void)); // [sp+1A4h] [bp-2E04h]@9
  int v183; // [sp+1A8h] [bp-2E00h]@15
  void **v184; // [sp+1ACh] [bp-2DFCh]@20
  int *v185; // [sp+1B0h] [bp-2DF8h]@36
  int v186; // [sp+1B4h] [bp-2DF4h]@36
  const char *v187; // [sp+1B8h] [bp-2DF0h]@36
  int v188; // [sp+1BCh] [bp-2DECh]@36
  __int64 v189; // [sp+1C0h] [bp-2DE8h]@37
  int v190[3]; // [sp+1C8h] [bp-2DE0h]@39
  int v191; // [sp+1D4h] [bp-2DD4h]@63
  char v192; // [sp+1D8h] [bp-2DD0h]@21
  void **v193; // [sp+1DCh] [bp-2DCCh]@39
  int v194; // [sp+1E0h] [bp-2DC8h]@46
  void **v195; // [sp+1E4h] [bp-2DC4h]@39
  int v196; // [sp+1E8h] [bp-2DC0h]@46
  void **v197; // [sp+1218h] [bp-1D90h]@39
  int v198; // [sp+1288h] [bp-1D20h]@39
  __int16 v199; // [sp+128Ch] [bp-1D1Ch]@39
  int v200; // [sp+1290h] [bp-1D18h]@39
  int v201; // [sp+1294h] [bp-1D14h]@39
  int v202; // [sp+1298h] [bp-1D10h]@39
  int v203; // [sp+129Ch] [bp-1D0Ch]@39
  char v204; // [sp+12A0h] [bp-1D08h]@39
  int v205; // [sp+12A4h] [bp-1D04h]@39
  int v206; // [sp+16A4h] [bp-1904h]@39
  void **v207; // [sp+16A8h] [bp-1900h]@37
  int v208; // [sp+16ACh] [bp-18FCh]@48
  void **v209; // [sp+16B0h] [bp-18F8h]@37
  int v210; // [sp+16B4h] [bp-18F4h]@48
  void **v211; // [sp+26E4h] [bp-8C4h]@37
  int v212; // [sp+2754h] [bp-854h]@37
  __int16 v213; // [sp+2758h] [bp-850h]@37
  int v214; // [sp+275Ch] [bp-84Ch]@37
  int v215; // [sp+2760h] [bp-848h]@37
  int v216; // [sp+2764h] [bp-844h]@37
  int v217; // [sp+2768h] [bp-840h]@37
  int v218; // [sp+276Ch] [bp-83Ch]@37
  int v219; // [sp+2770h] [bp-838h]@37
  int v220; // [sp+2B70h] [bp-438h]@37
  int v221; // [sp+2B74h] [bp-434h]@36
  int v222; // [sp+2B78h] [bp-430h]@37
  int v223; // [sp+2F78h] [bp-30h]@37
  RakNet *v224; // [sp+2F7Ch] [bp-2Ch]@1

  v132 = a4;
  v133 = a3;
  v134 = a2;
  v135 = (_DWORD *)a1;
  v224 = _stack_chk_guard;
  *(_DWORD *)a1 = a14;
  *(_DWORD *)(a1 + 4) = a2;
  *(_BYTE *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v136 = a1 + 8;
  *(_DWORD *)(v136 + 4) = 0;
  *(_DWORD *)(v136 + 8) = 0;
  *(_DWORD *)(v136 + 12) = 0;
  *(_DWORD *)(v136 + 16) = 0;
  *(_BYTE *)(v136 + 32) = 1;
  v30 = operator new(0x1Cu);
  LoopbackPacketSender::LoopbackPacketSender((int)v30, 0, a25);
  v31 = v135[3];
  v135[3] = v30;
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  v32 = operator new(0x40u);
  v177 = getTimeMs;
  v178 = (void (*)(void))std::_Function_base::_Base_manager<int (*)(void)>::_M_manager;
  v179 = std::_Function_handler<int ()(void),int (*)(void)>::_M_invoke;
  Timer::Timer((int)v32, 1101004800, (int)&v177);
  if ( v178 )
    v178();
  v33 = v135[4];
  v135[4] = v32;
  if ( v33 )
  {
    v34 = *(void (**)(void))(v33 + 56);
    if ( v34 )
      v34();
    operator delete((void *)v33);
  }
  v35 = operator new(0x40u);
  v180 = getTimeMs;
  v181 = (void (*)(void))std::_Function_base::_Base_manager<int (*)(void)>::_M_manager;
  v182 = std::_Function_handler<int ()(void),int (*)(void)>::_M_invoke;
  Timer::Timer((int)v35, 1101004800, (int)&v180);
  if ( v181 )
    v181();
  v36 = v135[5];
  v135[5] = v35;
  if ( v36 )
    v37 = *(void (**)(void))(v36 + 56);
    if ( v37 )
      v37();
    operator delete((void *)v36);
    v35 = (void *)v135[5];
  v38 = *v135;
  v39 = *(_QWORD *)(v135 + 3);
  LODWORD(v40) = operator new(0x18u);
  v41 = v40;
  ExternalFileLevelStorageSource::ExternalFileLevelStorageSource(v40);
  v42 = operator new(0x90u);
  v183 = v41;
  Minecraft::Minecraft(
    (int)v42,
    v134,
    (int)off_27B55CC,
    (int)&off_27B55D4,
    (int)off_27B55D0,
    v38,
    __PAIR__(v132, v133),
    a5,
    v131,
    a7,
    a24,
    a25,
    v39,
    0,
    SHIDWORD(v39),
    (int)v35,
    a27,
    &v183);
  if ( v183 )
    (*(void (**)(void))(*(_DWORD *)v183 + 4))();
  v43 = *(Minecraft **)v136;
  *(_DWORD *)v136 = v42;
  if ( v43 )
    v44 = Minecraft::~Minecraft(v43);
    operator delete((void *)v44);
  v45 = ResourcePackRepository::getPackLoadingReport((ResourcePackRepository *)a26);
  if ( v45 )
    ptr = 0;
    v172 = *(_DWORD *)(v45 + 4);
    v173 = 0;
    v174 = *(_DWORD *)(v45 + 12);
    v175 = *(_QWORD *)(v45 + 16);
    v184 = &ptr;
    std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<PackIdVersion const,PackReport>,true> const*)#1}>(
      (unsigned int *)&ptr,
      v45,
      (int *)&v184);
    v46 = Minecraft::getResourceLoader(*(Minecraft **)v136);
    ResourcePackManager::setPackSourceReport(v46, (int)&ptr);
    v47 = v173;
    if ( v173 )
    {
      do
      {
        v48 = *(void **)v47;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v192,
          (int)v47 + 8);
        operator delete(v47);
        v47 = v48;
      }
      while ( v48 );
    }
    _aeabi_memclr4(ptr, 4 * v172);
    v174 = 0;
    if ( ptr && &v176 != ptr )
      operator delete(ptr);
  if ( a29 )
    v49 = ResourcePackManager::getStack(a29, 0);
    v50 = operator new(0x14u);
    *v50 = &off_26EAC8C;
    v50[1] = 0;
    v51 = (int)(v50 + 1);
    *(_DWORD *)(v51 + 4) = 0;
    *(_DWORD *)(v51 + 8) = 0;
    *(_DWORD *)(v51 + 12) = 0;
    std::vector<PackInstance,std::allocator<PackInstance>>::operator=((int)(v50 + 1), (_QWORD *)(v49 + 4));
    v52 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v170 = v50;
    ResourcePackManager::setStack(v52, (int *)&v170, 0, 0);
    if ( v170 )
      (*(void (**)(void))(*v170 + 4))();
    v170 = 0;
    v53 = ResourcePackManager::getStack(a29, 1);
    v54 = operator new(0x14u);
    *v54 = &off_26EAC8C;
    v54[1] = 0;
    v55 = (int)(v54 + 1);
    *(_DWORD *)(v55 + 4) = 0;
    *(_DWORD *)(v55 + 8) = 0;
    *(_DWORD *)(v55 + 12) = 0;
    std::vector<PackInstance,std::allocator<PackInstance>>::operator=((int)(v54 + 1), (_QWORD *)(v53 + 4));
    v56 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v170 = v54;
    ResourcePackManager::setStack(v56, (int *)&v170, 1, 0);
    v57 = ResourcePackManager::getStack(a29, 2);
    v58 = operator new(0x14u);
    *v58 = &off_26EAC8C;
    v58[1] = 0;
    v59 = (int)(v58 + 1);
    *(_DWORD *)(v59 + 4) = 0;
    *(_DWORD *)(v59 + 8) = 0;
    *(_DWORD *)(v59 + 12) = 0;
    std::vector<PackInstance,std::allocator<PackInstance>>::operator=((int)(v58 + 1), (_QWORD *)(v57 + 4));
    v60 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v170 = v58;
    ResourcePackManager::setStack(v60, (int *)&v170, 2, 0);
    v61 = ResourcePackManager::getStack(a29, 3);
    v62 = operator new(0x14u);
    *v62 = &off_26EAC8C;
    v62[1] = 0;
    v63 = (int)(v62 + 1);
    *(_DWORD *)(v63 + 4) = 0;
    *(_DWORD *)(v63 + 8) = 0;
    *(_DWORD *)(v63 + 12) = 0;
    std::vector<PackInstance,std::allocator<PackInstance>>::operator=((int)(v62 + 1), (_QWORD *)(v61 + 4));
    v64 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v170 = v62;
    ResourcePackManager::setStack(v64, (int *)&v170, 3, 0);
    v65 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    ResourcePackManager::handlePendingStackChanges(v65);
  if ( (*(int (**)(void))(*(_DWORD *)v135[1] + 20))() == 1 )
    v66 = Minecraft::getLevelSource(*(Minecraft **)v136);
    (*(void (__fastcall **)(int **))(*(_DWORD *)v66 + 64))(&v169);
    v67 = *(v169 - 3);
    v68 = (const char *)*a8;
    v69 = *(_DWORD *)(*a8 - 12);
    v185 = v169;
    v186 = v67;
    v187 = v68;
    v188 = v69;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v221, (int)&v185, 2);
    v70 = v169 - 3;
    if ( v169 - 3 != &dword_28898C0 )
      v129 = (unsigned int *)(v169 - 1);
      if ( &pthread_create )
        __dmb();
        do
          v130 = __ldrex(v129);
        while ( __strex(v130 - 1, v129) );
      else
        v130 = (*v129)--;
      if ( v130 <= 0 )
        j_j_j_j__ZdlPv_9(v70);
    v185 = &v222;
    v186 = v223;
    v187 = "world_resource_packs.json";
    v188 = -1;
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v218, (int)&v185, 2);
    v71 = v220;
    sub_21B6308((int)&v211);
    v211 = &off_26D3AF0;
    v212 = 0;
    v213 = 0;
    v217 = 0;
    v216 = 0;
    v215 = 0;
    v214 = 0;
    LODWORD(v189) = &v219;
    HIDWORD(v189) = v71;
    Core::FileStream::FileStream((int)&v207, (int)off_26D7EA4, &v189, 8);
    v207 = &off_26D7E64;
    v211 = &off_26D7E8C;
    v209 = &off_26D7E78;
    ResourcePackStack::deserialize(&v168, (char *)&v207, (ResourcePackRepository *)a26);
    v167 = v168;
    v168 = 0;
    ResourcePackManager::setStack(a28, &v167, 0, 1);
    if ( v167 )
      (*(void (**)(void))(*(_DWORD *)v167 + 4))();
    v167 = 0;
    v187 = "world_behavior_packs.json";
    Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v204, (int)&v185, 2);
    v72 = v206;
    _aeabi_memcpy4(&v219, &v205, v206 + 1);
    v220 = v72;
    LOBYTE(v205) = 0;
    v206 = 0;
    sub_21B6308((int)&v197);
    v197 = &off_26D3AF0;
    v198 = 0;
    v199 = 0;
    v203 = 0;
    v202 = 0;
    v201 = 0;
    v200 = 0;
    v190[0] = (int)&v219;
    v190[1] = v72;
    Core::FileStream::FileStream((int)&v193, (int)off_26D7EA4, (__int64 *)v190, 8);
    v193 = &off_26D7E64;
    v197 = &off_26D7E8C;
    v195 = &off_26D7E78;
    ResourcePackStack::deserialize(&v166, (char *)&v193, (ResourcePackRepository *)a26);
    v73 = v168;
    v74 = v166;
    v166 = 0;
    v75 = v168 == 0;
    v168 = v74;
    if ( !v75 )
      (*(void (**)(void))(*(_DWORD *)v73 + 4))();
      if ( v166 )
        (*(void (**)(void))(*(_DWORD *)v166 + 4))();
    v76 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v77 = v168;
    v165 = v77;
    ResourcePackManager::setStack(v76, &v165, 1, 1);
    if ( v165 )
      (*(void (**)(void))(*(_DWORD *)v165 + 4))();
    v165 = 0;
    v78 = operator new(0x14u);
    *v78 = &off_26EAC8C;
    v78[1] = 0;
    v78[2] = 0;
    v78[3] = 0;
    v78[4] = 0;
    PackInstance::PackInstance((int)&v164, *(_DWORD *)(a26 + 44), -1, 0);
    ResourcePackStack::add((int)v78, (int)&v164, a26, 0);
    PackReport::~PackReport((PackReport *)&v164);
    v79 = (ResourcePackManager *)Minecraft::getResourceLoader(*(Minecraft **)v136);
    v163 = v78;
    ResourcePackManager::setStack(v79, (int *)&v163, 3, 1);
    if ( v163 )
      (*(void (**)(void))(*v163 + 4))();
    v163 = 0;
    Minecraft::initAsDedicatedServer(*(Minecraft **)v136);
    v193 = &off_26D7EEC;
    v197 = &off_26D7F14;
    v195 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v196, (int)&off_26D7F14, v80);
    v193 = &off_26D7F6C;
    v197 = &off_26D7F80;
    v194 = 0;
    sub_21B6560(&v197);
    if ( v168 )
      (*(void (**)(void))(*(_DWORD *)v168 + 4))();
    v207 = &off_26D7EEC;
    v211 = &off_26D7F14;
    v209 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v210, (int)&off_26D7F14, v81);
    v207 = &off_26D7F6C;
    v211 = &off_26D7F80;
    v208 = 0;
    sub_21B6560(&v211);
  else
    Minecraft::init(*(Minecraft **)v136, 1);
  v82 = (Biome *)LevelSettings::getSeed(a13);
  Biome::refreshBiomes(v82, v83);
  v84 = Minecraft::getLevelSource(*(Minecraft **)v136);
  (*(void (__fastcall **)(int *))(*(_DWORD *)v84 + 28))(&v162);
  v85 = v162;
  v75 = v162 == 0;
  v135[7] = v162;
  if ( v75 )
    v160 = 6;
    sub_21E94B4((void **)&v161, (const char *)&unk_257BC67);
    (*(void (__fastcall **)(int *))(*(_DWORD *)v85 + 60))(&v160);
  v86 = *(void (__fastcall **)(char *, int, signed int))(a30 + 8);
  if ( v86 )
    v87 = v135[7];
    v88 = *(void (__fastcall **)(int, char *))(*(_DWORD *)v87 + 112);
    v158 = 0;
    v86(&v157, a30, 2);
    v159 = *(_DWORD *)(a30 + 12);
    v158 = *(void (__cdecl **)(char *))(a30 + 8);
    v88(v87, &v157);
    if ( v158 )
      v158(&v157);
    v89 = v135[7];
    v90 = *(void (__fastcall **)(int, void **))(*(_DWORD *)v89 + 108);
    v149 = v135;
    v151 = 0;
    v91 = *(void (__fastcall **)(int *, int, signed int))(a30 + 8);
    if ( v91 )
      v91(&v150, a30, 2);
      v152 = *(_DWORD *)(a30 + 12);
      v151 = *(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(a30 + 8);
    sub_21E8AF4((int *)&v153, a8);
    v155 = 0;
    v92 = operator new(0x18u);
    *(_DWORD *)v92 = v149;
    *(_QWORD *)((char *)v92 + 4) = *(_QWORD *)&v150;
    v93 = v151;
    *((_DWORD *)v92 + 3) = v93;
    *((_DWORD *)v92 + 4) = v152;
    *((_DWORD *)v92 + 5) = v153;
    v153 = (char *)&unk_28898CC;
    v154 = v92;
    v155 = (void (__cdecl *)(void **))sub_15D43DC;
    v156 = &loc_15D437A;
    v90(v89, &v154);
    if ( v155 )
      v155(&v154);
    v94 = v153 - 12;
    if ( (int *)(v153 - 12) != &dword_28898C0 )
      v127 = (unsigned int *)(v153 - 4);
          v128 = __ldrex(v127);
        while ( __strex(v128 - 1, v127) );
        v128 = (*v127)--;
      if ( v128 <= 0 )
        j_j_j_j__ZdlPv_9(v94);
    if ( v151 )
      v151(&v150, &v150, 3);
  MinecraftEventing::fireEventStorage(a24, v160, (const char **)&v161);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v135 + 12))(*v135);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v135 + 28))(*v135);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v135 + 32))(*v135);
  (*(void (__cdecl **)(_DWORD))(*(_DWORD *)*v135 + 36))(*v135);
  v95 = Minecraft::getResourceLoader(*(Minecraft **)v136);
  Minecraft::getStructureManager(*(Minecraft **)v136);
  Minecraft::getCommands(*(Minecraft **)v136);
  v96 = *v135;
  v97 = (Level *)operator new(0x17C8u);
  v98 = v162;
  v162 = 0;
  v191 = v98;
  ServerLevel::ServerLevel((int)v97, (int)off_27B55D0, (int)&v191, a9, (int)a13, a24, v95);
  if ( v191 )
    (*(void (**)(void))(*(_DWORD *)v191 + 4))();
  v99 = Level::getLevelData(v97);
  v100 = (*(int (**)(void))(*(_DWORD *)v135[1] + 16))();
  LevelData::setIsEduLevel((LevelData *)v99, v100);
    Level::setMultiplayerGame(v97, 1);
  v144 = 0;
  v145 = 0;
  v146 = 1065353216;
  v147 = 0;
  HIDWORD(v101) = 10;
  LODWORD(v101) = &v146;
  v102 = sub_21E6254(v101);
  v143 = v102;
  if ( v102 == 1 )
    v104 = &v148;
    v148 = 0;
    if ( v102 >= 0x40000000 )
      sub_21E57F4();
    v103 = 4 * v102;
    v104 = (int *)operator new(4 * v102);
    _aeabi_memclr4(v104, v103);
  v142 = v104;
  v140 = &v142;
  v141 = a26;
  v105 = ResourcePackManager::getStack((int)a28, 0);
  sub_15D3A14((int)&v140, v105);
  v106 = ResourcePackManager::getStack((int)a28, 1);
  sub_15D3A14((int)&v140, v106);
  v107 = Minecraft::getResourceLoader(*(Minecraft **)v136);
  v108 = (ResourcePackStack *)ResourcePackManager::getStack(v107, 1);
  if ( ResourcePackStack::hasPlatformLockedContent(v108) )
    v109 = 1;
    v110 = (ResourcePackStack *)ResourcePackManager::getStack((int)a28, 1);
    v109 = ResourcePackStack::hasPlatformLockedContent(v110);
  Level::setHasLockedBehaviorPack(v97, v109);
  v111 = Minecraft::getResourceLoader(*(Minecraft **)v136);
  v112 = (ResourcePackStack *)ResourcePackManager::getStack(v111, 0);
  if ( ResourcePackStack::hasPlatformLockedContent(v112) )
    v113 = 1;
    v114 = (ResourcePackStack *)ResourcePackManager::getStack((int)a28, 0);
    v113 = ResourcePackStack::hasPlatformLockedContent(v114);
  Level::setHasLockedResourcePack(v97, v113);
  v115 = *(Minecraft **)v136;
  v139 = v97;
  v138 = 0;
  v116 = sub_21E8AF4(&v137, a22);
  v117 = 30 - a19;
  if ( 30 - a19 < 1 )
    v117 = 1;
  Minecraft::hostMultiplayer(
    (int)v115,
    a12,
    &v139,
    a23,
    &v138,
    a15,
    a16,
    a20,
    a21,
    v116,
    a17,
    a18,
    a19,
    v117,
    (int)&v142);
  v118 = (void *)(v137 - 12);
  if ( (int *)(v137 - 12) != &dword_28898C0 )
    v123 = (unsigned int *)(v137 - 4);
    if ( &pthread_create )
      __dmb();
        v124 = __ldrex(v123);
      while ( __strex(v124 - 1, v123) );
    else
      v124 = (*v123)--;
    if ( v124 <= 0 )
      j_j_j_j__ZdlPv_9(v118);
  if ( v138 )
    (*(void (**)(void))(*(_DWORD *)v138 + 8))();
  if ( v139 )
    (*(void (**)(void))(*(_DWORD *)v139 + 4))();
  v119 = v144;
  v139 = 0;
  if ( v144 )
    do
      v120 = (_DWORD *)*v119;
      std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<PackIdVersion const,std::string>,true>>>::_M_deallocate_node(
        (int)&v142,
        (int)v119);
      v119 = v120;
    while ( v120 );
  _aeabi_memclr4(v142, 4 * v143);
  if ( v142 && &v148 != v142 )
    operator delete(v142);
  v121 = (void *)(v161 - 12);
  if ( (int *)(v161 - 12) != &dword_28898C0 )
    v125 = (unsigned int *)(v161 - 4);
        v126 = __ldrex(v125);
      while ( __strex(v126 - 1, v125) );
      v126 = (*v125)--;
    if ( v126 <= 0 )
      j_j_j_j__ZdlPv_9(v121);
  if ( v162 )
    (*(void (**)(void))(*(_DWORD *)v162 + 4))();
  if ( _stack_chk_guard != v224 )
    _stack_chk_fail(_stack_chk_guard - v224);
  return v135;
}


signed int __fastcall ServerInstance::onStandaloneThreadEnabled(ServerInstance *this, int a2)
{
  ServerInstance *v2; // r4@1
  void *v3; // r5@2
  Scheduler *v4; // r0@2
  Scheduler *v5; // r0@3
  Level *v6; // r0@4
  int v7; // r5@4
  int v8; // r8@4
  signed int result; // r0@4
  signed int v10; // r6@5
  BackgroundWorker **v11; // r4@6
  BackgroundWorker **i; // r7@6
  BackgroundWorker *v13; // t1@7
  Scheduler *v14; // r0@10
  Scheduler *v15; // r0@11
  Scheduler *v16; // r4@12
  Scheduler *v17; // r1@12

  v2 = this;
  if ( a2 == 1 )
  {
    v3 = operator new(0x50u);
    Scheduler::Scheduler((int)v3);
    v4 = (Scheduler *)*((_DWORD *)v2 + 6);
    *((_DWORD *)v2 + 6) = v3;
    if ( v4 )
    {
      v5 = Scheduler::~Scheduler(v4);
      operator delete((void *)v5);
    }
    v6 = (Level *)Minecraft::getLevel(*((Minecraft **)v2 + 2));
    Level::_notifySchedulerChanged(v6, *((Scheduler **)v2 + 6));
    v7 = 0;
    v8 = *(_QWORD *)(*((_DWORD *)v2 + 6) + 64);
    result = (*(_QWORD *)(*((_DWORD *)v2 + 6) + 64) >> 32) - v8;
    if ( result >> 2 )
      v10 = result >> 2;
      do
      {
        result = *(_DWORD *)(v8 + 4 * v7);
        v11 = (BackgroundWorker **)(*(_QWORD *)(result + 8) >> 32);
        for ( i = (BackgroundWorker **)*(_QWORD *)(result + 8);
              v11 != i;
              result = BackgroundWorker::_setOwnerThreadToThisThread(v13) )
        {
          v13 = *i;
          ++i;
        }
        ++v7;
      }
      while ( v7 != v10 );
  }
  else
    v14 = (Scheduler *)*((_DWORD *)this + 6);
    *((_DWORD *)v2 + 6) = 0;
    if ( v14 )
      v15 = Scheduler::~Scheduler(v14);
      operator delete((void *)v15);
    v16 = (Scheduler *)Minecraft::getLevel(*((Minecraft **)v2 + 2));
    v17 = (Scheduler *)Scheduler::singleton(v16);
    result = (signed int)j_j_j__ZN5Level23_notifySchedulerChangedER9Scheduler(v16, v17);
  return result;
}


_DWORD *__fastcall ServerInstance::ServerInstance(int a1, int a2, unsigned int a3, unsigned int a4, int a5, int a6, __int64 a7, int *a8, int a9, int a10, int a11, int *a12, LevelSettings *a13, int a14, int a15, int a16, int a17, int a18, int a19, char a20, unsigned __int64 *a21, int *a22, int a23, unsigned int a24, int a25, int a26, int a27, ResourcePackManager *a28, int a29, int a30)
{
  return ServerInstance::ServerInstance(
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
           a30);
}


ServerInstance *__fastcall ServerInstance::~ServerInstance(ServerInstance *this)
{
  ServerInstance *v1; // r4@1
  Minecraft *v2; // r0@1
  Minecraft *v3; // r0@2
  Scheduler *v4; // r0@3
  Scheduler *v5; // r0@4
  int v6; // r5@5
  void (*v7)(void); // r3@6
  int v8; // r5@9
  void (*v9)(void); // r3@10
  int v10; // r0@13
  Minecraft *v11; // r0@15
  Minecraft *v12; // r0@16

  v1 = this;
  v2 = (Minecraft *)*((_DWORD *)this + 2);
  *((_DWORD *)v1 + 2) = 0;
  if ( v2 )
  {
    v3 = Minecraft::~Minecraft(v2);
    operator delete((void *)v3);
  }
  v4 = (Scheduler *)*((_DWORD *)v1 + 6);
  if ( v4 )
    v5 = Scheduler::~Scheduler(v4);
    operator delete((void *)v5);
  *((_DWORD *)v1 + 6) = 0;
  v6 = *((_DWORD *)v1 + 5);
  if ( v6 )
    v7 = *(void (**)(void))(v6 + 56);
    if ( v7 )
      v7();
    operator delete((void *)v6);
  *((_DWORD *)v1 + 5) = 0;
  v8 = *((_DWORD *)v1 + 4);
  if ( v8 )
    v9 = *(void (**)(void))(v8 + 56);
    if ( v9 )
      v9();
    operator delete((void *)v8);
  *((_DWORD *)v1 + 4) = 0;
  v10 = *((_DWORD *)v1 + 3);
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v11 = (Minecraft *)*((_DWORD *)v1 + 2);
  if ( v11 )
    v12 = Minecraft::~Minecraft(v11);
    operator delete((void *)v12);
  return v1;
}


int __fastcall ServerInstance::startLeaveGame(ServerInstance *this)
{
  ServerInstance *v1; // r4@1

  v1 = this;
  *((_BYTE *)this + 40) = 0;
  Minecraft::startLeaveGame(*((Minecraft **)this + 2), 1);
  return j_j_j__ZN14ServerInstance4stopEv(v1);
}
