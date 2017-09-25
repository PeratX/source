

int __fastcall ResourcePackTransmissionManager::getResourcePackUploadManager(unsigned int a1, int a2, NetworkIdentifier *a3, unsigned int a4)
{
  NetworkIdentifier *v4; // r10@1
  unsigned int v5; // r4@1
  int v6; // r3@1
  unsigned int v7; // r11@1
  unsigned int v8; // r9@1
  int v9; // r8@1
  _DWORD *v10; // r4@1
  _DWORD *v11; // r5@2
  _DWORD *v12; // r0@2
  int v13; // r6@2
  int v14; // r7@4
  bool v15; // zf@7
  int **v16; // r10@11
  int v17; // r11@11
  int v18; // r4@11
  unsigned int *v19; // r1@12
  unsigned int v20; // r0@14
  unsigned int *v21; // r5@18
  unsigned int v22; // r0@20
  int v23; // r4@25
  unsigned int *v24; // r1@26
  unsigned int v25; // r0@28
  unsigned int *v26; // r5@32
  unsigned int v27; // r0@34
  __int64 v28; // kr08_8@39
  unsigned int v29; // r8@39
  int v30; // r9@39
  int v31; // r0@39
  _DWORD *v32; // r5@40
  int v33; // r7@40
  bool v34; // zf@45
  int v35; // r0@49
  int v36; // r6@50
  int v37; // r7@50
  int v38; // r4@50
  unsigned int *v39; // r0@52
  unsigned int v40; // r1@54
  unsigned int *v41; // r1@58
  unsigned int v42; // r0@60
  unsigned int *v43; // r5@64
  unsigned int v44; // r0@66
  unsigned int *v45; // r1@73
  unsigned int v46; // r0@75
  unsigned int *v47; // r5@79
  unsigned int v48; // r0@81
  _DWORD *v49; // r7@87
  int v50; // r6@87
  _DWORD *v51; // r5@89
  bool v52; // zf@92
  unsigned int v53; // r4@95
  unsigned int v54; // r7@95
  int v55; // r5@95
  int v56; // r8@95
  int v57; // r9@96
  int v58; // r6@96
  _DWORD *v59; // r1@98
  size_t v60; // r2@98
  int v61; // r11@100
  int v62; // r4@102
  unsigned int *v63; // r1@103
  unsigned int v64; // r0@105
  unsigned int *v65; // r5@109
  unsigned int v66; // r0@111
  int v67; // r4@116
  unsigned int *v68; // r1@117
  unsigned int v69; // r0@119
  unsigned int *v70; // r5@123
  unsigned int v71; // r0@125
  __int64 v72; // r4@130
  unsigned int v73; // r8@130
  int v74; // r9@130
  int v75; // r0@130
  _DWORD *v76; // r6@131
  int v77; // r7@131
  bool v78; // zf@136
  int v79; // r0@140
  int v80; // r6@141
  int v81; // r7@141
  int v82; // r4@141
  unsigned int *v83; // r0@143
  unsigned int v84; // r1@145
  unsigned int *v85; // r1@149
  unsigned int v86; // r0@151
  unsigned int *v87; // r5@155
  unsigned int v88; // r0@157
  unsigned int *v89; // r1@164
  unsigned int v90; // r0@166
  unsigned int *v91; // r5@170
  unsigned int v92; // r0@172
  __int64 v93; // kr18_8@181
  unsigned int v94; // r6@181
  unsigned __int64 *v95; // r0@181
  unsigned __int64 *v96; // r5@182
  int v97; // r7@182
  bool v98; // zf@187
  bool v100; // zf@191
  _DWORD *s1; // [sp+0h] [bp-B0h]@96
  int v102; // [sp+4h] [bp-ACh]@1
  int v103; // [sp+8h] [bp-A8h]@1
  unsigned __int64 v104; // [sp+Ch] [bp-A4h]@1
  char v105; // [sp+14h] [bp-9Ch]@102
  int v106; // [sp+18h] [bp-98h]@102
  char v107; // [sp+1Ch] [bp-94h]@102
  int v108; // [sp+20h] [bp-90h]@116
  int v109; // [sp+24h] [bp-8Ch]@102
  int v110; // [sp+28h] [bp-88h]@141
  void *ptr; // [sp+2Ch] [bp-84h]@95
  unsigned int v112; // [sp+30h] [bp-80h]@95
  int v113; // [sp+34h] [bp-7Ch]@95
  int v114; // [sp+38h] [bp-78h]@95
  __int64 v115; // [sp+3Ch] [bp-74h]@95
  int v116; // [sp+44h] [bp-6Ch]@178
  char v117; // [sp+48h] [bp-68h]@11
  int v118; // [sp+4Ch] [bp-64h]@11
  char v119; // [sp+50h] [bp-60h]@11
  int v120; // [sp+54h] [bp-5Ch]@25
  int v121; // [sp+58h] [bp-58h]@11
  int v122; // [sp+5Ch] [bp-54h]@50
  unsigned int v123; // [sp+60h] [bp-50h]@1
  char v124; // [sp+64h] [bp-4Ch]@11
  char v125; // [sp+68h] [bp-48h]@11
  int *v126; // [sp+70h] [bp-40h]@49
  void **v127; // [sp+74h] [bp-3Ch]@95
  char v128; // [sp+7Ch] [bp-34h]@102
  char v129; // [sp+80h] [bp-30h]@102
  int *v130; // [sp+88h] [bp-28h]@140

  v4 = a3;
  v5 = a1;
  v103 = a2;
  v104 = __PAIR__(a4, a1);
  v7 = NetworkIdentifier::getHash(a3);
  v123 = v7;
  v102 = v5 + 28;
  v8 = *(_DWORD *)(v5 + 32);
  v9 = v7 % v8;
  v10 = *(_DWORD **)(*(_DWORD *)(v5 + 28) + 4 * (v7 % v8));
  if ( !v10 )
    goto LABEL_11;
  v11 = (_DWORD *)*v10;
  v12 = v10;
  v13 = *(_DWORD *)(*v10 + 4);
  while ( v7 != v13 )
  {
    v14 = *v11;
    if ( *v11 )
    {
      v13 = *(_DWORD *)(v14 + 4);
      v12 = v11;
      v11 = (_DWORD *)*v11;
      if ( *(_DWORD *)(v14 + 4) % v8 == v9 )
        continue;
    }
  }
  v15 = v12 == 0;
  if ( v12 )
    v15 = *v12 == 0;
  if ( v15 )
LABEL_11:
    j__ZNSt12__shared_ptrI16SystemFilePickerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v119);
    std::__shared_ptr<ServerFileChunkUploader,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ServerFileChunkUploader>,PacketSender &,NetworkIdentifier const&>(
      (int)&v117,
      (int)&v124,
      v103,
      (int)v4);
    std::__shared_ptr<ResourcePackFileUploadManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ResourcePackFileUploadManager>,std::shared_ptr<SystemFilePicker>,SystemFilePicker<ServerFileChunkUploader>>(
      (int)&v121,
      (int)&v125,
      (int)&v119,
      (int)&v117);
    v16 = (int **)HIDWORD(v104);
    v17 = v104;
    v18 = v118;
    if ( v118 )
      v19 = (unsigned int *)(v118 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
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
    v23 = v120;
    if ( v120 )
      v24 = (unsigned int *)(v120 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    v28 = *(_QWORD *)(v104 + 28);
    v29 = v123;
    v30 = v123 % (unsigned int)(*(_QWORD *)(v104 + 28) >> 32);
    v31 = *(_DWORD *)(v28 + 4 * v30);
    if ( !v31 )
      goto LABEL_49;
    v32 = *(_DWORD **)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 4);
    while ( v123 != v33 )
      if ( *v32 )
        v33 = *(_DWORD *)(v28 + 4);
        v31 = (int)v32;
        v32 = (_DWORD *)*v32;
        if ( *(_DWORD *)(v28 + 4) % HIDWORD(v28) == v30 )
          continue;
    v34 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v34 = v31 == 0;
    if ( v34 )
LABEL_49:
      v126 = (int *)&v123;
      v35 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI29ResourcePackFileUploadManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
              v102,
              (int)&unk_262DF48,
              &v126);
      v31 = std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v30,
              v29,
              v35);
    v36 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)(v31 + 8),
            (int **)HIDWORD(v104));
    *(_DWORD *)v36 = v121;
    v37 = *(_DWORD *)(v36 + 4);
    v38 = v122;
    if ( v122 != v37 )
      if ( v122 )
        v39 = (unsigned int *)(v122 + 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 + 1, v39) );
          v37 = *(_DWORD *)(v36 + 4);
          ++*v39;
      if ( v37 )
        v41 = (unsigned int *)(v37 + 4);
            v42 = __ldrex(v41);
          while ( __strex(v42 - 1, v41) );
          v42 = (*v41)--;
        if ( v42 == 1 )
          v43 = (unsigned int *)(v37 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 8))(v37);
          if ( &pthread_create )
          {
            __dmb();
            do
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
          }
          else
            v44 = (*v43)--;
          if ( v44 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v37 + 12))(v37);
      *(_DWORD *)(v36 + 4) = v38;
      v38 = v122;
    if ( v38 )
      v45 = (unsigned int *)(v38 + 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 == 1 )
        v47 = (unsigned int *)(v38 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 8))(v38);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v38 + 12))(v38);
  else
    if ( !v10 )
      goto LABEL_91;
    v49 = (_DWORD *)*v10;
    v50 = *(_DWORD *)(*v10 + 4);
    while ( v7 != v50 )
      v51 = (_DWORD *)*v49;
      if ( *v49 )
        v50 = v51[1];
        v10 = v49;
        v49 = (_DWORD *)*v49;
        if ( v51[1] % v8 == v9 )
    v52 = v10 == 0;
    if ( v10 )
      v6 = *v10;
      v52 = *v10 == 0;
    if ( v52 )
LABEL_91:
      sub_21E5A84("_Map_base::at");
    ptr = 0;
    v112 = *(_DWORD *)(v6 + 12);
    v113 = 0;
    v114 = *(_DWORD *)(v6 + 20);
    v115 = *(_QWORD *)(v6 + 24);
    v127 = &ptr;
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,true> const*)#1}>(
      (unsigned int *)&ptr,
      v6 + 8,
      (int *)&v127);
    v53 = sub_21B417C(*(int **)HIDWORD(v104), *(_DWORD *)(*(_DWORD *)HIDWORD(v104) - 12), -955291385);
    v54 = v112;
    v55 = v53 % v112;
    v56 = *((_DWORD *)ptr + v53 % v112);
    if ( !v56 )
      goto LABEL_102;
    v57 = *(_DWORD *)v56;
    v58 = *(_DWORD *)(*(_DWORD *)v56 + 16);
    s1 = (_DWORD *)*(_DWORD *)HIDWORD(v104);
    while ( 1 )
      if ( v58 == v53 )
        v59 = *(_DWORD **)(v57 + 4);
        v60 = *(s1 - 3);
        if ( v60 == *(v59 - 3) && !memcmp(s1, v59, v60) )
          break;
      v61 = *(_DWORD *)v57;
      if ( *(_DWORD *)v57 )
        v58 = *(_DWORD *)(v61 + 16);
        v56 = v57;
        v57 = *(_DWORD *)v57;
        if ( *(_DWORD *)(v61 + 16) % v54 == v55 )
    v100 = v56 == 0;
    if ( v56 )
      v100 = *(_DWORD *)v56 == 0;
    if ( v100 )
LABEL_102:
      j__ZNSt12__shared_ptrI16SystemFilePickerLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v107);
      std::__shared_ptr<ServerFileChunkUploader,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ServerFileChunkUploader>,PacketSender &,NetworkIdentifier const&>(
        (int)&v105,
        (int)&v128,
        v103,
        (int)v4);
      std::__shared_ptr<ResourcePackFileUploadManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ResourcePackFileUploadManager>,std::shared_ptr<SystemFilePicker>,SystemFilePicker<ServerFileChunkUploader>>(
        (int)&v109,
        (int)&v129,
        (int)&v107,
        (int)&v105);
      v62 = v106;
      if ( v106 )
        v63 = (unsigned int *)(v106 + 4);
            v64 = __ldrex(v63);
          while ( __strex(v64 - 1, v63) );
          v64 = (*v63)--;
        if ( v64 == 1 )
          v65 = (unsigned int *)(v62 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
      v67 = v108;
      if ( v108 )
        v68 = (unsigned int *)(v108 + 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 == 1 )
          v70 = (unsigned int *)(v67 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 8))(v67);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v67 + 12))(v67);
      v72 = *(_QWORD *)(v104 + 28);
      v73 = v123;
      v74 = v123 % (unsigned int)(*(_QWORD *)(v104 + 28) >> 32);
      v75 = *(_DWORD *)(v72 + 4 * v74);
      if ( !v75 )
        goto LABEL_140;
      v76 = *(_DWORD **)v75;
      v77 = *(_DWORD *)(*(_DWORD *)v75 + 4);
      while ( v123 != v77 )
        LODWORD(v72) = *v76;
        if ( *v76 )
          v77 = *(_DWORD *)(v72 + 4);
          v75 = (int)v76;
          v76 = (_DWORD *)*v76;
          if ( *(_DWORD *)(v72 + 4) % HIDWORD(v72) == v74 )
            continue;
      v78 = v75 == 0;
      if ( v75 )
        v75 = *(_DWORD *)v75;
        v78 = v75 == 0;
      if ( v78 )
LABEL_140:
        v130 = (int *)&v123;
        v79 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI29ResourcePackFileUploadManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
                v102,
                (int)&unk_262DF48,
                &v130);
        v75 = std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                v74,
                v73,
                v79);
      v80 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)(v75 + 8),
              (int **)HIDWORD(v104));
      *(_DWORD *)v80 = v109;
      v81 = *(_DWORD *)(v80 + 4);
      v82 = v110;
      if ( v110 != v81 )
        if ( v110 )
          v83 = (unsigned int *)(v110 + 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 + 1, v83) );
            v81 = *(_DWORD *)(v80 + 4);
            ++*v83;
        if ( v81 )
          v85 = (unsigned int *)(v81 + 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 == 1 )
            v87 = (unsigned int *)(v81 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 8))(v81);
            if ( &pthread_create )
            {
              __dmb();
              do
                v88 = __ldrex(v87);
              while ( __strex(v88 - 1, v87) );
            }
            else
              v88 = (*v87)--;
            if ( v88 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v81 + 12))(v81);
        *(_DWORD *)(v80 + 4) = v82;
        v82 = v110;
      if ( v82 )
        v89 = (unsigned int *)(v82 + 4);
            v90 = __ldrex(v89);
          while ( __strex(v90 - 1, v89) );
          v90 = (*v89)--;
        if ( v90 == 1 )
          v91 = (unsigned int *)(v82 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 8))(v82);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v82 + 12))(v82);
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v116 != ptr )
      operator delete(ptr);
  v93 = *(_QWORD *)(v17 + 28);
  v94 = v123 % (unsigned int)(*(_QWORD *)(v17 + 28) >> 32);
  v95 = *(unsigned __int64 **)(v93 + 4 * v94);
  if ( !v95 )
    goto LABEL_186;
  v96 = *(unsigned __int64 **)v95;
  v97 = *(_DWORD *)(*(_DWORD *)v95 + 4);
  while ( v123 != v97 )
    if ( *(_DWORD *)v96 )
      v97 = *(_DWORD *)(v93 + 4);
      v95 = v96;
      v96 = *(unsigned __int64 **)v96;
      if ( *(_DWORD *)(v93 + 4) % HIDWORD(v93) == v94 )
  v98 = v95 == 0;
  if ( v95 )
    v95 = *(unsigned __int64 **)v95;
    v98 = v95 == 0;
  if ( v98 )
LABEL_186:
    sub_21E5A84("_Map_base::at");
  return *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                      v95 + 1,
                      v16);
}


unsigned int *__fastcall ResourcePackTransmissionManager::getResourcePackDownloadManager(int a1, int a2, const void **a3)
{
  int v3; // r7@1
  int v4; // r8@1
  _DWORD *v5; // r5@2
  int v6; // r4@3
  size_t v7; // r6@4
  _DWORD *v8; // r0@5
  unsigned int *result; // r0@9
  unsigned int v10; // r1@13

  v3 = *(_DWORD *)(a2 + 8);
  v4 = a1;
  if ( v3 )
  {
    v5 = *a3;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v3 + 16);
      if ( v6 )
        break;
LABEL_8:
      v3 = *(_DWORD *)v3;
      if ( !v3 )
        goto LABEL_9;
    }
    v7 = *(v5 - 3);
      v8 = *(_DWORD **)(v6 + 4);
      if ( *(v8 - 3) == v7 && !memcmp(v8, v5, v7) )
      v6 = *(_DWORD *)v6;
      if ( !v6 )
        goto LABEL_8;
    *(_DWORD *)v4 = *(_DWORD *)(v6 + 8);
    result = *(unsigned int **)(v6 + 12);
    *(_DWORD *)(v4 + 4) = result;
    if ( result )
      result += 2;
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(result);
        while ( __strex(v10 + 1, result) );
      }
      else
        ++*result;
  }
  else
LABEL_9:
    result = 0;
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
  return result;
}


ResourcePackTransmissionManager *__fastcall ResourcePackTransmissionManager::~ResourcePackTransmissionManager(ResourcePackTransmissionManager *this)
{
  ResourcePackTransmissionManager *v1; // r4@1
  _DWORD *v2; // r7@1
  char *v3; // r5@4
  char **v4; // r6@4
  char *v5; // r0@4
  char *v6; // r0@8
  _DWORD *v7; // r7@11
  char *v8; // r5@14
  char **v9; // r6@14
  char *v10; // r0@14
  char *v11; // r0@18

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 9);
  while ( v2 )
  {
    v3 = (char *)v2;
    v4 = (char **)(v2 + 2);
    v2 = (_DWORD *)*v2;
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v4);
    v5 = *v4;
    if ( *v4 )
    {
      if ( v3 + 32 != v5 )
        operator delete(v5);
    }
    operator delete(v3);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v6 = (char *)*((_DWORD *)v1 + 7);
  if ( v6 && (char *)v1 + 52 != v6 )
    operator delete(v6);
  v7 = (_DWORD *)*((_DWORD *)v1 + 2);
  while ( v7 )
    v8 = (char *)v7;
    v9 = (char **)(v7 + 2);
    v7 = (_DWORD *)*v7;
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v9);
    v10 = *v9;
    if ( *v9 && v8 + 32 != v10 )
      operator delete(v10);
    operator delete(v8);
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v11 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v11 )
    operator delete(v11);
  return v1;
}


int __fastcall ResourcePackTransmissionManager::getResourcePackDownloadManager(unsigned __int64 *a1, int a2, NetworkIdentifier *a3, int **a4)
{
  unsigned __int64 *v4; // r5@1
  int *v5; // r3@1
  unsigned int v6; // r9@1
  unsigned __int64 v7; // kr00_8@1
  unsigned int v8; // r1@1
  int **v9; // r6@1
  int *v10; // r11@2
  int *v11; // r0@2
  int v12; // r7@2
  int v13; // r5@4
  bool v14; // zf@7
  unsigned __int64 *v15; // r10@11
  unsigned __int64 v16; // kr08_8@11
  unsigned int v17; // r8@11
  int v18; // r9@11
  int **v19; // r11@11
  int v20; // r0@11
  _DWORD *v21; // r5@12
  int v22; // r7@12
  bool v23; // zf@17
  int v24; // r0@21
  int v25; // r7@22
  int v26; // r4@22
  int v27; // r6@22
  unsigned int *v28; // r0@24
  unsigned int v29; // r1@26
  unsigned int *v30; // r1@30
  unsigned int v31; // r0@32
  unsigned int *v32; // r5@36
  unsigned int v33; // r0@38
  unsigned int *v34; // r1@45
  unsigned int v35; // r0@47
  unsigned int *v36; // r4@51
  unsigned int v37; // r0@53
  int *v38; // r4@59
  int v39; // r7@59
  int v40; // r5@61
  bool v41; // zf@64
  unsigned int v42; // r9@67
  unsigned int v43; // r5@67
  int v44; // r6@67
  int v45; // r8@67
  int v46; // r10@68
  int v47; // r7@68
  _DWORD *v48; // r1@70
  size_t v49; // r2@70
  int v50; // r4@72
  unsigned __int64 v51; // kr10_8@74
  unsigned int v52; // r8@74
  int v53; // r9@74
  int v54; // r0@74
  _DWORD *v55; // r5@75
  int v56; // r7@75
  bool v57; // zf@80
  int v58; // r0@84
  int v59; // r7@85
  int v60; // r4@85
  int v61; // r6@85
  unsigned int *v62; // r0@87
  unsigned int v63; // r1@89
  unsigned int *v64; // r1@93
  unsigned int v65; // r0@95
  unsigned int *v66; // r5@99
  unsigned int v67; // r0@101
  unsigned int *v68; // r1@108
  unsigned int v69; // r0@110
  unsigned int *v70; // r4@114
  unsigned int v71; // r0@116
  unsigned __int64 v72; // kr18_8@125
  unsigned int v73; // r6@125
  unsigned __int64 *v74; // r0@125
  unsigned __int64 *v75; // r5@126
  int v76; // r7@126
  bool v77; // zf@131
  bool v79; // zf@135
  int *s1; // [sp+0h] [bp-80h]@68
  int v81; // [sp+4h] [bp-7Ch]@1
  NetworkIdentifier *v82; // [sp+8h] [bp-78h]@1
  int **v83; // [sp+Ch] [bp-74h]@1
  unsigned __int64 *v84; // [sp+10h] [bp-70h]@1
  int v85; // [sp+14h] [bp-6Ch]@74
  int v86; // [sp+18h] [bp-68h]@85
  void *ptr; // [sp+1Ch] [bp-64h]@67
  unsigned int v88; // [sp+20h] [bp-60h]@67
  int v89; // [sp+24h] [bp-5Ch]@67
  int v90; // [sp+28h] [bp-58h]@67
  __int64 v91; // [sp+2Ch] [bp-54h]@67
  int v92; // [sp+34h] [bp-4Ch]@122
  int v93; // [sp+38h] [bp-48h]@11
  int v94; // [sp+3Ch] [bp-44h]@22
  unsigned int v95; // [sp+40h] [bp-40h]@1
  int *v96; // [sp+48h] [bp-38h]@21
  void **v97; // [sp+4Ch] [bp-34h]@11
  char v98; // [sp+50h] [bp-30h]@74
  int *v99; // [sp+58h] [bp-28h]@84

  v4 = a1;
  v81 = a2;
  v82 = a3;
  v83 = a4;
  v84 = a1;
  v6 = NetworkIdentifier::getHash(a3);
  v95 = v6;
  v7 = *v4;
  v8 = v6 % (*v4 >> 32);
  v9 = *(int ***)(*v4 + 4 * v8);
  if ( !v9 )
    goto LABEL_11;
  v10 = *v9;
  v11 = *(int **)(v7 + 4 * v8);
  v12 = (*v9)[1];
  while ( v6 != v12 )
  {
    v13 = *v10;
    if ( *v10 )
    {
      v12 = *(_DWORD *)(v13 + 4);
      v11 = v10;
      v10 = (int *)*v10;
      if ( *(_DWORD *)(v13 + 4) % HIDWORD(v7) == v8 )
        continue;
    }
  }
  v14 = v11 == 0;
  if ( v11 )
    v14 = *v11 == 0;
  if ( v14 )
LABEL_11:
    std::__shared_ptr<ResourcePackFileDownloaderManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ResourcePackFileDownloaderManager>,PacketSender &,NetworkIdentifier const&>(
      (int)&v93,
      (int)&v97,
      v81,
      (int)v82);
    v15 = v84;
    v16 = *v84;
    v17 = v95;
    v18 = v95 % (*v84 >> 32);
    v19 = v83;
    v20 = *(_DWORD *)(*v84 + 4 * v18);
    if ( !v20 )
      goto LABEL_21;
    v21 = *(_DWORD **)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 4);
    while ( v95 != v22 )
      if ( *v21 )
      {
        v22 = *(_DWORD *)(v16 + 4);
        v20 = (int)v21;
        v21 = (_DWORD *)*v21;
        if ( *(_DWORD *)(v16 + 4) % HIDWORD(v16) == v18 )
          continue;
      }
    v23 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v23 = v20 == 0;
    if ( v23 )
LABEL_21:
      v96 = (int *)&v95;
      v24 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI33ResourcePackFileDownloaderManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
              (int)v84,
              (int)&unk_262DF48,
              &v96);
      v20 = std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v18,
              v17,
              v24);
    v25 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (unsigned __int64 *)(v20 + 8),
            v83);
    *(_DWORD *)v25 = v93;
    v26 = *(_DWORD *)(v25 + 4);
    v27 = v94;
    if ( v94 != v26 )
      if ( v94 )
        v28 = (unsigned int *)(v94 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 + 1, v28) );
          v26 = *(_DWORD *)(v25 + 4);
        }
        else
          ++*v28;
      if ( v26 )
        v30 = (unsigned int *)(v26 + 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 == 1 )
          v32 = (unsigned int *)(v26 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
          if ( &pthread_create )
          {
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          }
          else
            v33 = (*v32)--;
          if ( v33 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      *(_DWORD *)(v25 + 4) = v27;
      v27 = v94;
    if ( v27 )
      v34 = (unsigned int *)(v27 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      else
        v35 = (*v34)--;
      if ( v35 == 1 )
        v36 = (unsigned int *)(v27 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 8))(v27);
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 12))(v27);
  else
    if ( !v9 )
      goto LABEL_63;
    v38 = *v9;
    v39 = (*v9)[1];
    while ( v6 != v39 )
      v40 = *v38;
      if ( *v38 )
        v39 = *(_DWORD *)(v40 + 4);
        v9 = (int **)v7;
        v38 = *(int **)v7;
        if ( *(_DWORD *)(v40 + 4) % HIDWORD(v7) == v8 )
    v41 = v9 == 0;
    if ( v9 )
      v5 = *v9;
      v41 = *v9 == 0;
    if ( v41 )
LABEL_63:
      sub_21E5A84("_Map_base::at");
    ptr = 0;
    v88 = v5[3];
    v89 = 0;
    v90 = v5[5];
    v91 = *((_QWORD *)v5 + 3);
    v97 = &ptr;
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,true> const*)#1}>(
      (unsigned int *)&ptr,
      (int)(v5 + 2),
      (int *)&v97);
    v42 = sub_21B417C(*v83, *(*v83 - 3), -955291385);
    v43 = v88;
    v44 = v42 % v88;
    v45 = *((_DWORD *)ptr + v42 % v88);
    if ( !v45 )
      goto LABEL_74;
    v46 = *(_DWORD *)v45;
    s1 = *v83;
    v47 = *(_DWORD *)(*(_DWORD *)v45 + 16);
    while ( 1 )
      if ( v47 == v42 )
        v48 = *(_DWORD **)(v46 + 4);
        v49 = *(s1 - 3);
        if ( v49 == *(v48 - 3) && !memcmp(s1, v48, v49) )
          break;
      v50 = *(_DWORD *)v46;
      if ( *(_DWORD *)v46 )
        v47 = *(_DWORD *)(v50 + 16);
        v45 = v46;
        v46 = *(_DWORD *)v46;
        if ( *(_DWORD *)(v50 + 16) % v43 == v44 )
    v79 = v45 == 0;
    if ( v45 )
      v79 = *(_DWORD *)v45 == 0;
    if ( v79 )
LABEL_74:
      std::__shared_ptr<ResourcePackFileDownloaderManager,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<ResourcePackFileDownloaderManager>,PacketSender &,NetworkIdentifier const&>(
        (int)&v85,
        (int)&v98,
        v81,
        (int)v82);
      v51 = *v84;
      v52 = v95;
      v53 = v95 % (*v84 >> 32);
      v54 = *(_DWORD *)(*v84 + 4 * v53);
      if ( !v54 )
        goto LABEL_84;
      v55 = *(_DWORD **)v54;
      v56 = *(_DWORD *)(*(_DWORD *)v54 + 4);
      while ( v95 != v56 )
        if ( *v55 )
          v56 = *(_DWORD *)(v51 + 4);
          v54 = (int)v55;
          v55 = (_DWORD *)*v55;
          if ( *(_DWORD *)(v51 + 4) % HIDWORD(v51) == v53 )
            continue;
      v57 = v54 == 0;
      if ( v54 )
        v54 = *(_DWORD *)v54;
        v57 = v54 == 0;
      if ( v57 )
LABEL_84:
        v99 = (int *)&v95;
        v58 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI33ResourcePackFileDownloaderManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
                (int)v84,
                (int)&unk_262DF48,
                &v99);
        v54 = std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                v53,
                v52,
                v58);
      v59 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              (unsigned __int64 *)(v54 + 8),
              v83);
      *(_DWORD *)v59 = v85;
      v60 = *(_DWORD *)(v59 + 4);
      v61 = v86;
      if ( v86 != v60 )
        if ( v86 )
          v62 = (unsigned int *)(v86 + 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 + 1, v62) );
            v60 = *(_DWORD *)(v59 + 4);
            ++*v62;
        if ( v60 )
          v64 = (unsigned int *)(v60 + 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 == 1 )
            v66 = (unsigned int *)(v60 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 8))(v60);
            if ( &pthread_create )
            {
              __dmb();
              do
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
            }
            else
              v67 = (*v66)--;
            if ( v67 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v60 + 12))(v60);
        *(_DWORD *)(v59 + 4) = v61;
        v61 = v86;
      if ( v61 )
        v68 = (unsigned int *)(v61 + 4);
            v69 = __ldrex(v68);
          while ( __strex(v69 - 1, v68) );
          v69 = (*v68)--;
        if ( v69 == 1 )
          v70 = (unsigned int *)(v61 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 8))(v61);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v61 + 12))(v61);
    std::_Hashtable<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v92 != ptr )
      operator delete(ptr);
  v72 = *v15;
  v73 = v95 % (*v15 >> 32);
  v74 = *(unsigned __int64 **)(*v15 + 4 * v73);
  if ( !v74 )
    goto LABEL_130;
  v75 = *(unsigned __int64 **)v74;
  v76 = *(_DWORD *)(*(_DWORD *)v74 + 4);
  while ( v95 != v76 )
    if ( *(_DWORD *)v75 )
      v76 = *(_DWORD *)(v72 + 4);
      v74 = v75;
      v75 = *(unsigned __int64 **)v75;
      if ( *(_DWORD *)(v72 + 4) % HIDWORD(v72) == v73 )
  v77 = v74 == 0;
  if ( v74 )
    v74 = *(unsigned __int64 **)v74;
    v77 = v74 == 0;
  if ( v77 )
LABEL_130:
    sub_21E5A84("_Map_base::at");
  return *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::at(
                      v74 + 1,
                      v19);
}


NetworkIdentifier *__fastcall ResourcePackTransmissionManager::cleanupResourcePackManager(ResourcePackTransmissionManager *this, const NetworkIdentifier *a2)
{
  ResourcePackTransmissionManager *v2; // r8@1
  unsigned int v3; // r0@2
  __int64 v4; // r4@2
  unsigned int v5; // r7@2
  int v6; // r10@2
  int *v7; // r11@2
  int *v8; // r9@3
  int *v9; // r0@3
  int v10; // r4@3
  int v11; // r6@5
  int v12; // r0@9
  bool v13; // zf@9
  int *v14; // r9@12
  int v15; // r4@12
  int v16; // r6@14
  NetworkIdentifier *result; // r0@19
  unsigned int v18; // r0@20
  unsigned int v19; // r5@20
  unsigned int v20; // r7@20
  int v21; // r1@20
  int v22; // r6@20
  NetworkIdentifier *v23; // r9@21
  int v24; // r8@21
  NetworkIdentifier *v25; // r11@21
  int v26; // r4@21
  NetworkIdentifier *v27; // r10@23
  bool v28; // zf@26
  NetworkIdentifier *v29; // r0@29
  NetworkIdentifier *v30; // r4@31
  bool v31; // zf@34
  unsigned __int64 *v32; // r11@37
  int v33; // r0@38
  int i; // r8@39
  unsigned __int64 v35; // kr00_8@41
  unsigned int v36; // r10@41
  int v37; // r5@41
  _DWORD *v38; // r0@41
  _DWORD *v39; // r9@42
  int v40; // r7@42
  bool v41; // zf@47
  int v42; // r0@51
  unsigned __int64 v43; // kr08_8@53
  unsigned int v44; // r1@53
  int v45; // r9@53
  int *v46; // r2@53
  int *v47; // r4@54
  int v48; // r7@54
  int v49; // r5@56
  unsigned int v50; // r0@57
  int v51; // r1@57
  int v52; // [sp+8h] [bp-40h]@20
  const NetworkIdentifier *v53; // [sp+Ch] [bp-3Ch]@1
  NetworkIdentifier *v54; // [sp+Ch] [bp-3Ch]@21
  unsigned int v55; // [sp+10h] [bp-38h]@20
  int *v56; // [sp+18h] [bp-30h]@51
  int *v57; // [sp+20h] [bp-28h]@38

  v2 = this;
  v53 = a2;
  if ( *((_DWORD *)this + 10) )
  {
    v3 = NetworkIdentifier::getHash(a2);
    v4 = *(_QWORD *)((char *)v2 + 28);
    v5 = v3;
    v6 = v3 % (unsigned int)(*(_QWORD *)((char *)v2 + 28) >> 32);
    v7 = *(int **)(v4 + 4 * v6);
    if ( v7 )
    {
      v8 = (int *)*v7;
      v9 = *(int **)(v4 + 4 * v6);
      v10 = *(_DWORD *)(*v7 + 4);
      while ( v5 != v10 )
      {
        v11 = *v8;
        if ( *v8 )
        {
          LODWORD(v4) = *(_DWORD *)(v11 + 4);
          v9 = v8;
          v8 = (int *)*v8;
          if ( *(_DWORD *)(v11 + 4) % HIDWORD(v4) == v6 )
            continue;
        }
        goto LABEL_19;
      }
      if ( v9 )
        v12 = *v9;
        v13 = v12 == 0;
        if ( v12 )
          v13 = v7 == 0;
        if ( !v13 )
          v14 = (int *)*v7;
          v15 = *(_DWORD *)(*v7 + 4);
          while ( v5 != v15 )
          {
            v16 = *v14;
            if ( *v14 )
            {
              LODWORD(v4) = *(_DWORD *)(v16 + 4);
              v7 = v14;
              v14 = (int *)*v14;
              if ( *(_DWORD *)(v16 + 4) % HIDWORD(v4) == v6 )
                continue;
            }
            goto LABEL_19;
          }
          if ( v7 )
            std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileUploadManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileUploadManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
              (int)v2 + 28,
              v6,
              v7,
              *v7);
    }
  }
LABEL_19:
  result = (NetworkIdentifier *)*((_DWORD *)v2 + 3);
  if ( result )
    v18 = NetworkIdentifier::getHash(v53);
    v19 = v18;
    v52 = (int)v2;
    v55 = v18;
    v20 = *((_DWORD *)v2 + 1);
    v21 = v18 % *((_DWORD *)v2 + 1);
    v22 = v21;
    result = *(NetworkIdentifier **)(*(_DWORD *)v2 + 4 * v21);
    if ( result )
      v23 = *(NetworkIdentifier **)result;
      v54 = *(NetworkIdentifier **)(*(_DWORD *)v2 + 4 * v21);
      v24 = *(_DWORD *)(*(_DWORD *)result + 4);
      v25 = *(NetworkIdentifier **)result;
      v26 = *(_DWORD *)(*(_DWORD *)result + 4);
      while ( v19 != v26 )
        v27 = *(NetworkIdentifier **)v25;
        if ( *(_DWORD *)v25 )
          v26 = *((_DWORD *)v27 + 1);
          result = v25;
          v25 = *(NetworkIdentifier **)v25;
          if ( *((_DWORD *)v27 + 1) % v20 == v21 )
        return result;
      v28 = result == 0;
      if ( result )
        result = *(NetworkIdentifier **)result;
        v28 = result == 0;
      if ( !v28 )
        v29 = v54;
        while ( v19 != v24 )
          v30 = *(NetworkIdentifier **)v23;
          if ( *(_DWORD *)v23 )
            v24 = *((_DWORD *)v30 + 1);
            v29 = v23;
            v23 = *(NetworkIdentifier **)v23;
            if ( *((_DWORD *)v30 + 1) % v20 == v21 )
              continue;
          goto LABEL_38;
        v31 = v29 == 0;
        if ( v29 )
          v29 = *(NetworkIdentifier **)v29;
          v31 = v29 == 0;
        if ( !v31 )
          v32 = (unsigned __int64 *)v52;
          goto LABEL_39;
LABEL_38:
        v32 = (unsigned __int64 *)v52;
        v57 = (int *)&v55;
        v33 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI33ResourcePackFileDownloaderManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
                v52,
                (int)&unk_262DF48,
                &v57);
        v29 = (NetworkIdentifier *)std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                                     v52,
                                     v22,
                                     v19,
                                     v33);
LABEL_39:
        for ( i = (int)v29 + 16; ; ResourcePackFileDownloaderManager::cancel(*(ResourcePackFileDownloaderManager **)(i + 8)) )
          i = *(_DWORD *)i;
          v35 = *v32;
          v36 = v55;
          v37 = v55 % (*v32 >> 32);
          v38 = *(_DWORD **)(*v32 + 4 * v37);
          if ( !v38 )
            goto LABEL_51;
          v39 = (_DWORD *)*v38;
          v40 = *(_DWORD *)(*v38 + 4);
          while ( v55 != v40 )
            if ( *v39 )
              v40 = *(_DWORD *)(v35 + 4);
              v38 = v39;
              v39 = (_DWORD *)*v39;
              if ( *(_DWORD *)(v35 + 4) % HIDWORD(v35) == v37 )
          v41 = v38 == 0;
          if ( v38 )
            v41 = *v38 == 0;
          if ( v41 )
LABEL_51:
            v56 = (int *)&v55;
            v42 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIKjSt13unordered_mapISsSt10shared_ptrI33ResourcePackFileDownloaderManagerESt4hashISsESt8equal_toISsESaIS2_IKSsS7_EEEELb0EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESO_IJEEEEEPSH_DpOT_(
                    (int)v32,
                    (int)&unk_262DF48,
                    &v56);
            std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              (int)v32,
              v37,
              v36,
              v42);
          if ( !i )
            break;
        v43 = *v32;
        v44 = *v32 >> 32;
        result = (NetworkIdentifier *)(v55 / v44);
        v45 = v55 % v44;
        v46 = *(int **)(*v32 + 4 * (v55 % v44));
        if ( v46 )
          v47 = (int *)*v46;
          v48 = *(_DWORD *)(*v46 + 4);
          while ( v55 != v48 )
            v49 = *v47;
            if ( *v47 )
              v48 = *(_DWORD *)(v49 + 4);
              v50 = *(_DWORD *)(v49 + 4);
              v51 = v50 % HIDWORD(v43);
              result = (NetworkIdentifier *)(v50 / HIDWORD(v43));
              v46 = (int *)v43;
              v47 = *(int **)v43;
              if ( v51 == v45 )
            return result;
          if ( v46 )
            result = (NetworkIdentifier *)std::_Hashtable<unsigned int,std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>,std::allocator<std::pair<unsigned int const,std::unordered_map<std::string,std::shared_ptr<ResourcePackFileDownloaderManager>,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::shared_ptr<ResourcePackFileDownloaderManager>>>>>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
                                            (int)v32,
                                            v45,
                                            v46,
                                            *v46);
  return result;
}


int __fastcall ResourcePackTransmissionManager::ResourcePackTransmissionManager(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6
  int result; // r0@7

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(a1)));
  *(_DWORD *)(v1 + 4) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  LODWORD(v2) = v1 + 44;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 32) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 52) = 0;
    v7 = (void *)(v1 + 52);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  result = v1;
  *(_DWORD *)(v1 + 28) = v7;
  return result;
}


int __fastcall ResourcePackTransmissionManager::update(int result)
{
  int v1; // r4@1
  int i; // r5@1
  int j; // r6@3
  int k; // r4@7
  int l; // r5@9

  v1 = result;
  for ( i = *(_DWORD *)(result + 36); i; i = *(_DWORD *)i )
  {
    for ( j = *(_DWORD *)(i + 16); j; j = *(_DWORD *)j )
      result = FileUploadManager::update(*(FileUploadManager **)(j + 8));
  }
  for ( k = *(_DWORD *)(v1 + 8); k; k = *(_DWORD *)k )
    for ( l = *(_DWORD *)(k + 16); l; l = *(_DWORD *)l )
      result = ResourcePackFileDownloaderManager::update(*(ResourcePackFileDownloaderManager **)(l + 8));
  return result;
}
