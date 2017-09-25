

int __fastcall BeaconScreenController::_isButtonInactive(int a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *(_DWORD *)(a1 + 628);
  if ( v2 )
  {
    result = BeaconContainerManagerController::getButtonStatus(v2, a2);
    if ( result != 1 )
      result = 0;
  }
  else
    result = 0;
  return result;
}


void __fastcall BeaconScreenController::_registerAutoPlaceOrder(BeaconScreenController *this)
{
  BeaconScreenController::_registerAutoPlaceOrder(this);
}


void __fastcall BeaconScreenController::_registerCoalesceOrder(BeaconScreenController *this)
{
  BeaconScreenController *v1; // r8@1
  int v2; // r9@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r7@2
  bool v6; // zf@3
  int v7; // r4@6
  bool v8; // zf@9
  int *v9; // r1@12
  _DWORD *v10; // r0@13
  int v11; // r9@16
  int v12; // r0@16
  int v13; // r5@17
  int v14; // r7@17
  bool v15; // zf@18
  int v16; // r4@21
  bool v17; // zf@24
  _DWORD *v18; // r0@28
  int *v19; // r1@29
  int v20; // r9@32
  int v21; // r0@32
  int v22; // r5@33
  int v23; // r7@33
  bool v24; // zf@34
  int v25; // r4@37
  bool v26; // zf@40
  _DWORD *v27; // r0@44
  int *v28; // r1@45
  int v29; // r9@48
  int v30; // r0@48
  int v31; // r5@49
  int v32; // r7@49
  bool v33; // zf@50
  int v34; // r4@53
  bool v35; // zf@56
  _DWORD *v36; // r0@60
  unsigned __int64 *v37; // r8@61
  int v38; // r0@61
  int v39; // r9@61
  int v40; // r0@61
  int v41; // r5@62
  int v42; // r7@62
  bool v43; // zf@63
  int v44; // r4@66
  bool v45; // zf@69
  int *v46; // r1@72
  _DWORD *v47; // r0@73
  int v48; // r9@76
  int v49; // r0@76
  int v50; // r5@77
  int v51; // r7@77
  bool v52; // zf@78
  int v53; // r4@81
  bool v54; // zf@84
  _DWORD *v55; // r0@88
  int *v56; // r1@89
  int v57; // r9@92
  int v58; // r0@92
  int v59; // r5@93
  int v60; // r7@93
  bool v61; // zf@94
  int v62; // r4@97
  bool v63; // zf@100
  _DWORD *v64; // r0@104
  int *v65; // r1@105
  int v66; // r9@108
  int v67; // r0@108
  int v68; // r5@109
  int v69; // r7@109
  bool v70; // zf@110
  int v71; // r4@113
  bool v72; // zf@116
  _DWORD *v73; // r0@120
  int v74; // r0@121
  int v75; // r9@121
  int v76; // r0@121
  int v77; // r5@122
  int v78; // r7@122
  bool v79; // zf@123
  int v80; // r4@126
  bool v81; // zf@129
  int *v82; // r1@132
  _DWORD *v83; // r0@133
  int v84; // r9@136
  int v85; // r0@136
  int v86; // r5@137
  int v87; // r7@137
  bool v88; // zf@138
  int v89; // r4@141
  bool v90; // zf@144
  _DWORD *v91; // r0@148
  int *v92; // r1@149
  int v93; // r9@152
  int v94; // r0@152
  int v95; // r5@153
  int v96; // r7@153
  bool v97; // zf@154
  int v98; // r4@157
  bool v99; // zf@160
  _DWORD *v100; // r0@164
  int *v101; // r1@165
  int v102; // r9@168
  int v103; // r0@168
  int v104; // r5@169
  int v105; // r7@169
  bool v106; // zf@170
  int v107; // r4@173
  bool v108; // zf@176
  _DWORD *v109; // r0@180
  int v110; // r0@181
  int *v111; // r4@181
  int *v112; // r6@181
  unsigned int *v113; // r2@183
  signed int v114; // r1@185
  int *v115; // r0@191
  int *v116; // r4@196
  int *v117; // r6@196
  unsigned int *v118; // r2@198
  signed int v119; // r1@200
  int *v120; // r0@206
  int *v121; // r4@211
  int *v122; // r6@211
  unsigned int *v123; // r2@213
  signed int v124; // r1@215
  int *v125; // r0@221
  int *v126; // [sp+0h] [bp-48h]@121
  int *v127; // [sp+4h] [bp-44h]@121
  int *v128; // [sp+8h] [bp-40h]@121
  int *v129; // [sp+Ch] [bp-3Ch]@61
  int *v130; // [sp+10h] [bp-38h]@61
  int *v131; // [sp+14h] [bp-34h]@61
  int *v132; // [sp+18h] [bp-30h]@1
  int *v133; // [sp+1Ch] [bp-2Ch]@1
  int *v134; // [sp+20h] [bp-28h]@1

  v1 = this;
  v132 = 0;
  v133 = 0;
  v134 = 0;
  v2 = 0x18u % dword_27DA228;
  v3 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
  if ( v3 )
  {
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 24;
      if ( v5 == 24 )
        v6 = *(_DWORD *)(v4 + 4) == 24;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA228 == v2 )
          continue;
      }
      goto LABEL_13;
    }
    v8 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v8 = v3 == 0;
    if ( !v8 )
      v9 = (int *)(v3 + 8);
LABEL_15:
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)&v132,
        v9);
      goto LABEL_16;
  }
LABEL_13:
  v10 = operator new(0x10u);
  *v10 = 0;
  v10[1] = 24;
  v10[2] = &unk_28898CC;
  v9 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                 (int)&dword_27DA224,
                 v2,
                 0x18u,
                 (int)v10)
             + 8);
  if ( v133 == v134 )
    goto LABEL_15;
  sub_119C854(v133, v9);
  ++v133;
LABEL_16:
  v11 = 5u % dword_27DA228;
  v12 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_DWORD *)v12;
  v14 = *(_DWORD *)(*(_DWORD *)v12 + 12);
  while ( 1 )
    v15 = v14 == 5;
    if ( v14 == 5 )
      v15 = *(_DWORD *)(v13 + 4) == 5;
    if ( v15 )
      break;
    v16 = *(_DWORD *)v13;
    if ( *(_DWORD *)v13 )
      v14 = *(_DWORD *)(v16 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v16 + 12) % (unsigned int)dword_27DA228 == v11 )
        continue;
  v17 = v12 == 0;
  if ( v12 )
    v12 = *(_DWORD *)v12;
    v17 = v12 == 0;
  if ( v17 )
LABEL_28:
    v18 = operator new(0x10u);
    *v18 = 0;
    v18[1] = 5;
    v18[2] = &unk_28898CC;
    v12 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            (int)&dword_27DA224,
            v11,
            5u,
            (int)v18);
  v19 = (int *)(v12 + 8);
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v132,
      v19);
  else
    sub_119C854(v133, v19);
    ++v133;
  v20 = 0x1Au % dword_27DA228;
  v21 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
  if ( !v21 )
    goto LABEL_44;
  v22 = *(_DWORD *)v21;
  v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
    v24 = v23 == 26;
    if ( v23 == 26 )
      v24 = *(_DWORD *)(v22 + 4) == 26;
    if ( v24 )
    v25 = *(_DWORD *)v22;
    if ( *(_DWORD *)v22 )
      v23 = *(_DWORD *)(v25 + 12);
      v21 = v22;
      v22 = *(_DWORD *)v22;
      if ( *(_DWORD *)(v25 + 12) % (unsigned int)dword_27DA228 == v20 )
  v26 = v21 == 0;
  if ( v21 )
    v21 = *(_DWORD *)v21;
    v26 = v21 == 0;
  if ( v26 )
LABEL_44:
    v27 = operator new(0x10u);
    *v27 = 0;
    v27[1] = 26;
    v27[2] = &unk_28898CC;
    v21 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v20,
            0x1Au,
            (int)v27);
  v28 = (int *)(v21 + 8);
      v28);
    sub_119C854(v133, v28);
  v29 = 0x18u % dword_27DA228;
  v30 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
  if ( !v30 )
    goto LABEL_60;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 24;
    if ( v32 == 24 )
      v33 = *(_DWORD *)(v31 + 4) == 24;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % (unsigned int)dword_27DA228 == v29 )
  v35 = v30 == 0;
  if ( v30 )
    v30 = *(_DWORD *)v30;
    v35 = v30 == 0;
  if ( v35 )
LABEL_60:
    v36 = operator new(0x10u);
    *v36 = 0;
    v36[1] = 24;
    v36[2] = &unk_28898CC;
    v30 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v29,
            0x18u,
            (int)v36);
  v37 = (unsigned __int64 *)((char *)v1 + 572);
  v38 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          v37,
          (int **)(v30 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v38, (unsigned __int64 *)&v132);
  v129 = 0;
  v130 = 0;
  v131 = 0;
  v39 = 0x1Au % dword_27DA228;
  v40 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
  if ( v40 )
    v41 = *(_DWORD *)v40;
    v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
      v43 = v42 == 26;
      if ( v42 == 26 )
        v43 = *(_DWORD *)(v41 + 4) == 26;
      if ( v43 )
      v44 = *(_DWORD *)v41;
      if ( *(_DWORD *)v41 )
        v42 = *(_DWORD *)(v44 + 12);
        v40 = v41;
        v41 = *(_DWORD *)v41;
        if ( *(_DWORD *)(v44 + 12) % (unsigned int)dword_27DA228 == v39 )
      goto LABEL_73;
    v45 = v40 == 0;
    if ( v40 )
      v40 = *(_DWORD *)v40;
      v45 = v40 == 0;
    if ( !v45 )
      v46 = (int *)(v40 + 8);
LABEL_75:
        (unsigned __int64 *)&v129,
        v46);
      goto LABEL_76;
LABEL_73:
  v47 = operator new(0x10u);
  *v47 = 0;
  v47[1] = 26;
  v47[2] = &unk_28898CC;
  v46 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)&dword_27DA224,
                  v39,
                  0x1Au,
                  (int)v47)
              + 8);
  if ( v130 == v131 )
    goto LABEL_75;
  sub_119C854(v130, v46);
  ++v130;
LABEL_76:
  v48 = 5u % dword_27DA228;
  v49 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
  if ( !v49 )
    goto LABEL_88;
  v50 = *(_DWORD *)v49;
  v51 = *(_DWORD *)(*(_DWORD *)v49 + 12);
    v52 = v51 == 5;
    if ( v51 == 5 )
      v52 = *(_DWORD *)(v50 + 4) == 5;
    if ( v52 )
    v53 = *(_DWORD *)v50;
    if ( *(_DWORD *)v50 )
      v51 = *(_DWORD *)(v53 + 12);
      v49 = v50;
      v50 = *(_DWORD *)v50;
      if ( *(_DWORD *)(v53 + 12) % (unsigned int)dword_27DA228 == v48 )
  v54 = v49 == 0;
  if ( v49 )
    v49 = *(_DWORD *)v49;
    v54 = v49 == 0;
  if ( v54 )
LABEL_88:
    v55 = operator new(0x10u);
    *v55 = 0;
    v55[1] = 5;
    v55[2] = &unk_28898CC;
    v49 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v48,
            (int)v55);
  v56 = (int *)(v49 + 8);
      (unsigned __int64 *)&v129,
      v56);
    sub_119C854(v130, v56);
    ++v130;
  v57 = 0x18u % dword_27DA228;
  v58 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
  if ( !v58 )
    goto LABEL_104;
  v59 = *(_DWORD *)v58;
  v60 = *(_DWORD *)(*(_DWORD *)v58 + 12);
    v61 = v60 == 24;
    if ( v60 == 24 )
      v61 = *(_DWORD *)(v59 + 4) == 24;
    if ( v61 )
    v62 = *(_DWORD *)v59;
    if ( *(_DWORD *)v59 )
      v60 = *(_DWORD *)(v62 + 12);
      v58 = v59;
      v59 = *(_DWORD *)v59;
      if ( *(_DWORD *)(v62 + 12) % (unsigned int)dword_27DA228 == v57 )
  v63 = v58 == 0;
  if ( v58 )
    v58 = *(_DWORD *)v58;
    v63 = v58 == 0;
  if ( v63 )
LABEL_104:
    v64 = operator new(0x10u);
    *v64 = 0;
    v64[1] = 24;
    v64[2] = &unk_28898CC;
    v58 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v57,
            (int)v64);
  v65 = (int *)(v58 + 8);
      v65);
    sub_119C854(v130, v65);
  v66 = 0x1Au % dword_27DA228;
  v67 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
  if ( !v67 )
    goto LABEL_120;
  v68 = *(_DWORD *)v67;
  v69 = *(_DWORD *)(*(_DWORD *)v67 + 12);
    v70 = v69 == 26;
    if ( v69 == 26 )
      v70 = *(_DWORD *)(v68 + 4) == 26;
    if ( v70 )
    v71 = *(_DWORD *)v68;
    if ( *(_DWORD *)v68 )
      v69 = *(_DWORD *)(v71 + 12);
      v67 = v68;
      v68 = *(_DWORD *)v68;
      if ( *(_DWORD *)(v71 + 12) % (unsigned int)dword_27DA228 == v66 )
  v72 = v67 == 0;
  if ( v67 )
    v67 = *(_DWORD *)v67;
    v72 = v67 == 0;
  if ( v72 )
LABEL_120:
    v73 = operator new(0x10u);
    *v73 = 0;
    v73[1] = 26;
    v73[2] = &unk_28898CC;
    v67 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v66,
            (int)v73);
  v74 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
          (int **)(v67 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v74, (unsigned __int64 *)&v129);
  v126 = 0;
  v127 = 0;
  v128 = 0;
  v75 = 5u % dword_27DA228;
  v76 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
  if ( v76 )
    v77 = *(_DWORD *)v76;
    v78 = *(_DWORD *)(*(_DWORD *)v76 + 12);
      v79 = v78 == 5;
      if ( v78 == 5 )
        v79 = *(_DWORD *)(v77 + 4) == 5;
      if ( v79 )
      v80 = *(_DWORD *)v77;
      if ( *(_DWORD *)v77 )
        v78 = *(_DWORD *)(v80 + 12);
        v76 = v77;
        v77 = *(_DWORD *)v77;
        if ( *(_DWORD *)(v80 + 12) % (unsigned int)dword_27DA228 == v75 )
      goto LABEL_133;
    v81 = v76 == 0;
    if ( v76 )
      v76 = *(_DWORD *)v76;
      v81 = v76 == 0;
    if ( !v81 )
      v82 = (int *)(v76 + 8);
LABEL_135:
        (unsigned __int64 *)&v126,
        v82);
      goto LABEL_136;
LABEL_133:
  v83 = operator new(0x10u);
  *v83 = 0;
  v83[1] = 5;
  v83[2] = &unk_28898CC;
  v82 = (int *)(std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v75,
                  5u,
                  (int)v83)
  if ( v127 == v128 )
    goto LABEL_135;
  sub_119C854(v127, v82);
  ++v127;
LABEL_136:
  v84 = 0x1Au % dword_27DA228;
  v85 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
  if ( !v85 )
    goto LABEL_148;
  v86 = *(_DWORD *)v85;
  v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
    v88 = v87 == 26;
    if ( v87 == 26 )
      v88 = *(_DWORD *)(v86 + 4) == 26;
    if ( v88 )
    v89 = *(_DWORD *)v86;
    if ( *(_DWORD *)v86 )
      v87 = *(_DWORD *)(v89 + 12);
      v85 = v86;
      v86 = *(_DWORD *)v86;
      if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DA228 == v84 )
  v90 = v85 == 0;
  if ( v85 )
    v85 = *(_DWORD *)v85;
    v90 = v85 == 0;
  if ( v90 )
LABEL_148:
    v91 = operator new(0x10u);
    *v91 = 0;
    v91[1] = 26;
    v91[2] = &unk_28898CC;
    v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v84,
            (int)v91);
  v92 = (int *)(v85 + 8);
      (unsigned __int64 *)&v126,
      v92);
    sub_119C854(v127, v92);
    ++v127;
  v93 = 0x18u % dword_27DA228;
  v94 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
  if ( !v94 )
    goto LABEL_164;
  v95 = *(_DWORD *)v94;
  v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
    v97 = v96 == 24;
    if ( v96 == 24 )
      v97 = *(_DWORD *)(v95 + 4) == 24;
    if ( v97 )
    v98 = *(_DWORD *)v95;
    if ( *(_DWORD *)v95 )
      v96 = *(_DWORD *)(v98 + 12);
      v94 = v95;
      v95 = *(_DWORD *)v95;
      if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DA228 == v93 )
  v99 = v94 == 0;
  if ( v94 )
    v94 = *(_DWORD *)v94;
    v99 = v94 == 0;
  if ( v99 )
LABEL_164:
    v100 = operator new(0x10u);
    *v100 = 0;
    v100[1] = 24;
    v100[2] = &unk_28898CC;
    v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v93,
            (int)v100);
  v101 = (int *)(v94 + 8);
      v101);
    sub_119C854(v127, v101);
  v102 = 5u % dword_27DA228;
  v103 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
  if ( !v103 )
    goto LABEL_180;
  v104 = *(_DWORD *)v103;
  v105 = *(_DWORD *)(*(_DWORD *)v103 + 12);
    v106 = v105 == 5;
    if ( v105 == 5 )
      v106 = *(_DWORD *)(v104 + 4) == 5;
    if ( v106 )
    v107 = *(_DWORD *)v104;
    if ( *(_DWORD *)v104 )
      v105 = *(_DWORD *)(v107 + 12);
      v103 = v104;
      v104 = *(_DWORD *)v104;
      if ( *(_DWORD *)(v107 + 12) % (unsigned int)dword_27DA228 == v102 )
  v108 = v103 == 0;
  if ( v103 )
    v103 = *(_DWORD *)v103;
    v108 = v103 == 0;
  if ( v108 )
LABEL_180:
    v109 = operator new(0x10u);
    *v109 = 0;
    v109[1] = 5;
    v109[2] = &unk_28898CC;
    v103 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA224,
             v102,
             5u,
             (int)v109);
  v110 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>,std::allocator<std::pair<std::string const,std::vector<std::string,std::allocator<std::string>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
           v37,
           (int **)(v103 + 8));
  std::vector<std::string,std::allocator<std::string>>::operator=(v110, (unsigned __int64 *)&v126);
  v112 = v127;
  v111 = v126;
  if ( v126 != v127 )
    do
      v115 = (int *)(*v111 - 12);
      if ( v115 != &dword_28898C0 )
        v113 = (unsigned int *)(*v111 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v114 = __ldrex(v113);
          while ( __strex(v114 - 1, v113) );
        }
        else
          v114 = (*v113)--;
        if ( v114 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v115);
      ++v111;
    while ( v111 != v112 );
    v111 = v126;
  if ( v111 )
    operator delete(v111);
  v117 = v130;
  v116 = v129;
  if ( v129 != v130 )
      v120 = (int *)(*v116 - 12);
      if ( v120 != &dword_28898C0 )
        v118 = (unsigned int *)(*v116 - 4);
            v119 = __ldrex(v118);
          while ( __strex(v119 - 1, v118) );
          v119 = (*v118)--;
        if ( v119 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v120);
      ++v116;
    while ( v116 != v117 );
    v116 = v129;
  if ( v116 )
    operator delete(v116);
  v122 = v133;
  v121 = v132;
  if ( v132 != v133 )
      v125 = (int *)(*v121 - 12);
      if ( v125 != &dword_28898C0 )
        v123 = (unsigned int *)(*v121 - 4);
            v124 = __ldrex(v123);
          while ( __strex(v124 - 1, v123) );
          v124 = (*v123)--;
        if ( v124 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v125);
      ++v121;
    while ( v121 != v122 );
    v121 = v132;
  if ( v121 )
    operator delete(v121);
}


ContainerScreenController *__fastcall BeaconScreenController::~BeaconScreenController(BeaconScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E0E9C;
  v2 = *((_DWORD *)this + 158);
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
  return j_j_j__ZN25ContainerScreenControllerD2Ev(v1);
}


void __fastcall BeaconScreenController::_registerAutoPlaceOrder(BeaconScreenController *this)
{
  BeaconScreenController *v1; // r8@1
  int v2; // r9@2
  int v3; // r0@2
  int v4; // r5@3
  int v5; // r7@3
  bool v6; // zf@4
  int v7; // r4@7
  int v8; // r9@10
  int v9; // r0@10
  int v10; // r5@11
  int v11; // r7@11
  bool v12; // zf@12
  int v13; // r4@15
  bool v14; // zf@18
  _DWORD *v15; // r0@22
  char **v16; // r0@23
  char *v17; // r1@24
  char *v18; // r0@26
  int v19; // r9@27
  int v20; // r0@27
  int v21; // r5@28
  int v22; // r7@28
  bool v23; // zf@29
  int v24; // r4@32
  bool v25; // zf@35
  _DWORD *v26; // r0@39
  char **v27; // r0@40
  char *v28; // r1@41
  char *v29; // r0@43
  int v30; // r9@44
  int v31; // r0@44
  int v32; // r5@45
  int v33; // r7@45
  bool v34; // zf@46
  int v35; // r4@49
  bool v36; // zf@52
  _DWORD *v37; // r0@56
  char **v38; // r0@57
  char *v39; // r1@58
  char *v40; // r0@60
  int v41; // r9@61
  int v42; // r0@61
  int v43; // r5@62
  int v44; // r7@62
  bool v45; // zf@63
  int v46; // r4@66
  bool v47; // zf@69
  _DWORD *v48; // r0@73
  unsigned __int64 *v49; // r8@74
  int v50; // r0@74
  int v51; // r9@74
  int v52; // r0@74
  int v53; // r5@75
  int v54; // r7@75
  bool v55; // zf@76
  int v56; // r4@79
  bool v57; // zf@82
  _DWORD *v58; // r0@86
  char **v59; // r0@87
  char *v60; // r1@88
  char *v61; // r0@90
  int v62; // r9@91
  int v63; // r0@91
  int v64; // r5@92
  int v65; // r7@92
  bool v66; // zf@93
  int v67; // r4@96
  bool v68; // zf@99
  _DWORD *v69; // r0@103
  char **v70; // r0@104
  char *v71; // r1@105
  char *v72; // r0@107
  int v73; // r9@108
  int v74; // r0@108
  int v75; // r5@109
  int v76; // r7@109
  bool v77; // zf@110
  int v78; // r4@113
  bool v79; // zf@116
  _DWORD *v80; // r0@120
  char **v81; // r0@121
  char *v82; // r1@122
  char *v83; // r0@124
  int v84; // r9@125
  int v85; // r0@125
  int v86; // r5@126
  int v87; // r7@126
  bool v88; // zf@127
  int v89; // r4@130
  bool v90; // zf@133
  _DWORD *v91; // r0@137
  int v92; // r0@138
  int v93; // r9@138
  int v94; // r0@138
  int v95; // r5@139
  int v96; // r7@139
  bool v97; // zf@140
  int v98; // r4@143
  bool v99; // zf@146
  _DWORD *v100; // r0@150
  char **v101; // r0@151
  char *v102; // r1@152
  char *v103; // r0@154
  int v104; // r9@155
  int v105; // r0@155
  int v106; // r5@156
  int v107; // r7@156
  bool v108; // zf@157
  int v109; // r4@160
  bool v110; // zf@163
  _DWORD *v111; // r0@167
  char **v112; // r0@168
  char *v113; // r1@169
  char *v114; // r0@171
  int v115; // r9@172
  int v116; // r0@172
  int v117; // r5@173
  int v118; // r7@173
  bool v119; // zf@174
  int v120; // r4@177
  bool v121; // zf@180
  _DWORD *v122; // r0@184
  char **v123; // r0@185
  char *v124; // r1@186
  char *v125; // r0@188
  int v126; // r9@189
  int v127; // r0@189
  int v128; // r5@190
  int v129; // r7@190
  bool v130; // zf@191
  int v131; // r4@194
  bool v132; // zf@197
  _DWORD *v133; // r0@201
  int v134; // r0@202
  char **v135; // r4@202
  char **v136; // r6@202
  unsigned int *v137; // r2@204
  signed int v138; // r1@206
  int *v139; // r0@212
  char **v140; // r4@217
  char **v141; // r6@217
  unsigned int *v142; // r2@219
  signed int v143; // r1@221
  int *v144; // r0@227
  char **v145; // r4@232
  char **v146; // r6@232
  unsigned int *v147; // r2@234
  signed int v148; // r1@236
  int *v149; // r0@242
  bool v150; // zf@245
  _DWORD *v151; // r0@249
  char **v152; // r0@250
  char *v153; // r1@251
  char *v154; // r0@253
  int v155; // r9@254
  int v156; // r0@254
  int v157; // r5@255
  int v158; // r7@255
  bool v159; // zf@256
  int v160; // r4@259
  bool v161; // zf@262
  _DWORD *v162; // r0@266
  unsigned __int64 *v163; // r8@267
  int v164; // r0@267
  int v165; // r9@267
  int v166; // r0@267
  int v167; // r5@268
  int v168; // r7@268
  bool v169; // zf@269
  int v170; // r4@272
  bool v171; // zf@275
  _DWORD *v172; // r0@279
  char **v173; // r0@280
  char *v174; // r1@281
  char *v175; // r0@283
  int v176; // r9@284
  int v177; // r0@284
  int v178; // r5@285
  int v179; // r7@285
  bool v180; // zf@286
  int v181; // r4@289
  bool v182; // zf@292
  _DWORD *v183; // r0@296
  int v184; // r0@297
  char **v185; // r4@297
  char **v186; // r6@297
  unsigned int *v187; // r2@299
  signed int v188; // r1@301
  int *v189; // r0@307
  char **v190; // r6@312
  unsigned int *v191; // r2@314
  signed int v192; // r1@316
  int *v193; // r0@322
  unsigned int *v194; // r2@328
  signed int v195; // r1@330
  unsigned int *v196; // r2@332
  signed int v197; // r1@334
  unsigned int *v198; // r2@336
  signed int v199; // r1@338
  unsigned int *v200; // r2@340
  signed int v201; // r1@342
  unsigned int *v202; // r2@344
  signed int v203; // r1@346
  unsigned int *v204; // r2@348
  signed int v205; // r1@350
  unsigned int *v206; // r2@352
  signed int v207; // r1@354
  unsigned int *v208; // r2@356
  signed int v209; // r1@358
  unsigned int *v210; // r2@360
  signed int v211; // r1@362
  unsigned int *v212; // r2@364
  signed int v213; // r1@366
  unsigned int *v214; // r2@368
  signed int v215; // r1@370
  char *v216; // [sp+0h] [bp-B8h]@185
  char v217; // [sp+4h] [bp-B4h]@186
  char *v218; // [sp+8h] [bp-B0h]@168
  char v219; // [sp+Ch] [bp-ACh]@169
  char *v220; // [sp+10h] [bp-A8h]@151
  char v221; // [sp+14h] [bp-A4h]@152
  char **v222; // [sp+18h] [bp-A0h]@138
  char **v223; // [sp+1Ch] [bp-9Ch]@138
  char **v224; // [sp+20h] [bp-98h]@138
  char *v225; // [sp+24h] [bp-94h]@121
  char v226; // [sp+28h] [bp-90h]@122
  char *v227; // [sp+2Ch] [bp-8Ch]@104
  char v228; // [sp+30h] [bp-88h]@105
  char *v229; // [sp+34h] [bp-84h]@87
  char v230; // [sp+38h] [bp-80h]@88
  char **v231; // [sp+3Ch] [bp-7Ch]@74
  char **v232; // [sp+40h] [bp-78h]@74
  char **v233; // [sp+44h] [bp-74h]@74
  char *v234; // [sp+48h] [bp-70h]@57
  char v235; // [sp+4Ch] [bp-6Ch]@58
  char *v236; // [sp+50h] [bp-68h]@40
  char v237; // [sp+54h] [bp-64h]@41
  char *v238; // [sp+58h] [bp-60h]@23
  char v239; // [sp+5Ch] [bp-5Ch]@24
  char **v240; // [sp+60h] [bp-58h]@2
  char **v241; // [sp+64h] [bp-54h]@2
  char **v242; // [sp+68h] [bp-50h]@2
  char *v243; // [sp+6Ch] [bp-4Ch]@280
  char v244; // [sp+70h] [bp-48h]@281
  char **v245; // [sp+74h] [bp-44h]@267
  char **v246; // [sp+78h] [bp-40h]@267
  char **v247; // [sp+7Ch] [bp-3Ch]@267
  char *v248; // [sp+80h] [bp-38h]@250
  char v249; // [sp+84h] [bp-34h]@251
  char **v250; // [sp+88h] [bp-30h]@10
  char **v251; // [sp+8Ch] [bp-2Ch]@10
  char **v252; // [sp+90h] [bp-28h]@10

  v1 = this;
  if ( ContainerScreenController::_getInteractionModel(this) )
  {
    v240 = 0;
    v241 = 0;
    v242 = 0;
    v2 = 5u % dword_27DA228;
    v3 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v3 )
      goto LABEL_22;
    v4 = *(_DWORD *)v3;
    v5 = *(_DWORD *)(*(_DWORD *)v3 + 12);
    while ( 1 )
    {
      v6 = v5 == 5;
      if ( v5 == 5 )
        v6 = *(_DWORD *)(v4 + 4) == 5;
      if ( v6 )
        break;
      v7 = *(_DWORD *)v4;
      if ( *(_DWORD *)v4 )
      {
        v5 = *(_DWORD *)(v7 + 12);
        v3 = v4;
        v4 = *(_DWORD *)v4;
        if ( *(_DWORD *)(v7 + 12) % (unsigned int)dword_27DA228 == v2 )
          continue;
      }
    }
    v14 = v3 == 0;
    if ( v3 )
      v3 = *(_DWORD *)v3;
      v14 = v3 == 0;
    if ( v14 )
LABEL_22:
      v15 = operator new(0x10u);
      *v15 = 0;
      v15[1] = 5;
      v15[2] = &unk_28898CC;
      v3 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             (int)&dword_27DA224,
             v2,
             5u,
             (int)v15);
    AutoPlaceItem::AutoPlaceItem((int *)&v238, (int *)(v3 + 8), 1);
    v16 = v241;
    if ( v241 == v242 )
      std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::_M_emplace_back_aux<AutoPlaceItem>(
        (unsigned __int64 *)&v240,
        (int)&v238);
      v17 = v238;
    else
      *v241 = v238;
      v17 = (char *)&unk_28898CC;
      v238 = (char *)&unk_28898CC;
      *((_BYTE *)v16 + 4) = v239;
      v241 = v16 + 2;
    v18 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v194 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v195 = __ldrex(v194);
        while ( __strex(v195 - 1, v194) );
      else
        v195 = (*v194)--;
      if ( v195 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v18);
    v19 = 0x1Au % dword_27DA228;
    v20 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
    if ( !v20 )
      goto LABEL_39;
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 26;
      if ( v22 == 26 )
        v23 = *(_DWORD *)(v21 + 4) == 26;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % (unsigned int)dword_27DA228 == v19 )
    v25 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v25 = v20 == 0;
    if ( v25 )
LABEL_39:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 26;
      v26[2] = &unk_28898CC;
      v20 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)&dword_27DA224,
              v19,
              0x1Au,
              (int)v26);
    AutoPlaceItem::AutoPlaceItem((int *)&v236, (int *)(v20 + 8), 1);
    v27 = v241;
        (int)&v236);
      v28 = v236;
      *v241 = v236;
      v28 = (char *)&unk_28898CC;
      v236 = (char *)&unk_28898CC;
      *((_BYTE *)v27 + 4) = v237;
      v241 = v27 + 2;
    v29 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v196 = (unsigned int *)(v28 - 4);
          v197 = __ldrex(v196);
        while ( __strex(v197 - 1, v196) );
        v197 = (*v196)--;
      if ( v197 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = 0x18u % dword_27DA228;
    v31 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
    if ( !v31 )
      goto LABEL_56;
    v32 = *(_DWORD *)v31;
    v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
      v34 = v33 == 24;
      if ( v33 == 24 )
        v34 = *(_DWORD *)(v32 + 4) == 24;
      if ( v34 )
      v35 = *(_DWORD *)v32;
      if ( *(_DWORD *)v32 )
        v33 = *(_DWORD *)(v35 + 12);
        v31 = v32;
        v32 = *(_DWORD *)v32;
        if ( *(_DWORD *)(v35 + 12) % (unsigned int)dword_27DA228 == v30 )
    v36 = v31 == 0;
    if ( v31 )
      v31 = *(_DWORD *)v31;
      v36 = v31 == 0;
    if ( v36 )
LABEL_56:
      v37 = operator new(0x10u);
      *v37 = 0;
      v37[1] = 24;
      v37[2] = &unk_28898CC;
      v31 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v30,
              0x18u,
              (int)v37);
    AutoPlaceItem::AutoPlaceItem((int *)&v234, (int *)(v31 + 8), 0);
    v38 = v241;
        (int)&v234);
      v39 = v234;
      *v241 = v234;
      v39 = (char *)&unk_28898CC;
      v234 = (char *)&unk_28898CC;
      *((_BYTE *)v38 + 4) = v235;
      v241 = v38 + 2;
    v40 = v39 - 12;
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v198 = (unsigned int *)(v39 - 4);
          v199 = __ldrex(v198);
        while ( __strex(v199 - 1, v198) );
        v199 = (*v198)--;
      if ( v199 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v40);
    v41 = 0x18u % dword_27DA228;
    v42 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
    if ( !v42 )
      goto LABEL_73;
    v43 = *(_DWORD *)v42;
    v44 = *(_DWORD *)(*(_DWORD *)v42 + 12);
      v45 = v44 == 24;
      if ( v44 == 24 )
        v45 = *(_DWORD *)(v43 + 4) == 24;
      if ( v45 )
      v46 = *(_DWORD *)v43;
      if ( *(_DWORD *)v43 )
        v44 = *(_DWORD *)(v46 + 12);
        v42 = v43;
        v43 = *(_DWORD *)v43;
        if ( *(_DWORD *)(v46 + 12) % (unsigned int)dword_27DA228 == v41 )
    v47 = v42 == 0;
    if ( v42 )
      v42 = *(_DWORD *)v42;
      v47 = v42 == 0;
    if ( v47 )
LABEL_73:
      v48 = operator new(0x10u);
      *v48 = 0;
      v48[1] = 24;
      v48[2] = &unk_28898CC;
      v42 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v41,
              (int)v48);
    v49 = (unsigned __int64 *)((char *)v1 + 600);
    v50 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            v49,
            (int **)(v42 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v50, (unsigned __int64 *)&v240);
    v231 = 0;
    v232 = 0;
    v233 = 0;
    v51 = 5u % dword_27DA228;
    v52 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v52 )
      goto LABEL_86;
    v53 = *(_DWORD *)v52;
    v54 = *(_DWORD *)(*(_DWORD *)v52 + 12);
      v55 = v54 == 5;
      if ( v54 == 5 )
        v55 = *(_DWORD *)(v53 + 4) == 5;
      if ( v55 )
      v56 = *(_DWORD *)v53;
      if ( *(_DWORD *)v53 )
        v54 = *(_DWORD *)(v56 + 12);
        v52 = v53;
        v53 = *(_DWORD *)v53;
        if ( *(_DWORD *)(v56 + 12) % (unsigned int)dword_27DA228 == v51 )
    v57 = v52 == 0;
    if ( v52 )
      v52 = *(_DWORD *)v52;
      v57 = v52 == 0;
    if ( v57 )
LABEL_86:
      v58 = operator new(0x10u);
      *v58 = 0;
      v58[1] = 5;
      v58[2] = &unk_28898CC;
      v52 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v51,
              5u,
              (int)v58);
    AutoPlaceItem::AutoPlaceItem((int *)&v229, (int *)(v52 + 8), 1);
    v59 = v232;
    if ( v232 == v233 )
        (unsigned __int64 *)&v231,
        (int)&v229);
      v60 = v229;
      *v232 = v229;
      v60 = (char *)&unk_28898CC;
      v229 = (char *)&unk_28898CC;
      *((_BYTE *)v59 + 4) = v230;
      v232 = v59 + 2;
    v61 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v200 = (unsigned int *)(v60 - 4);
          v201 = __ldrex(v200);
        while ( __strex(v201 - 1, v200) );
        v201 = (*v200)--;
      if ( v201 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v61);
    v62 = 0x18u % dword_27DA228;
    v63 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
    if ( !v63 )
      goto LABEL_103;
    v64 = *(_DWORD *)v63;
    v65 = *(_DWORD *)(*(_DWORD *)v63 + 12);
      v66 = v65 == 24;
      if ( v65 == 24 )
        v66 = *(_DWORD *)(v64 + 4) == 24;
      if ( v66 )
      v67 = *(_DWORD *)v64;
      if ( *(_DWORD *)v64 )
        v65 = *(_DWORD *)(v67 + 12);
        v63 = v64;
        v64 = *(_DWORD *)v64;
        if ( *(_DWORD *)(v67 + 12) % (unsigned int)dword_27DA228 == v62 )
    v68 = v63 == 0;
    if ( v63 )
      v63 = *(_DWORD *)v63;
      v68 = v63 == 0;
    if ( v68 )
LABEL_103:
      v69 = operator new(0x10u);
      *v69 = 0;
      v69[1] = 24;
      v69[2] = &unk_28898CC;
      v63 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v62,
              (int)v69);
    AutoPlaceItem::AutoPlaceItem((int *)&v227, (int *)(v63 + 8), 1);
    v70 = v232;
        (int)&v227);
      v71 = v227;
      *v232 = v227;
      v71 = (char *)&unk_28898CC;
      v227 = (char *)&unk_28898CC;
      *((_BYTE *)v70 + 4) = v228;
      v232 = v70 + 2;
    v72 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v202 = (unsigned int *)(v71 - 4);
          v203 = __ldrex(v202);
        while ( __strex(v203 - 1, v202) );
        v203 = (*v202)--;
      if ( v203 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v72);
    v73 = 0x1Au % dword_27DA228;
    v74 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
    if ( !v74 )
      goto LABEL_120;
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)(*(_DWORD *)v74 + 12);
      v77 = v76 == 26;
      if ( v76 == 26 )
        v77 = *(_DWORD *)(v75 + 4) == 26;
      if ( v77 )
      v78 = *(_DWORD *)v75;
      if ( *(_DWORD *)v75 )
        v76 = *(_DWORD *)(v78 + 12);
        v74 = v75;
        v75 = *(_DWORD *)v75;
        if ( *(_DWORD *)(v78 + 12) % (unsigned int)dword_27DA228 == v73 )
    v79 = v74 == 0;
    if ( v74 )
      v74 = *(_DWORD *)v74;
      v79 = v74 == 0;
    if ( v79 )
LABEL_120:
      v80 = operator new(0x10u);
      *v80 = 0;
      v80[1] = 26;
      v80[2] = &unk_28898CC;
      v74 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v73,
              (int)v80);
    AutoPlaceItem::AutoPlaceItem((int *)&v225, (int *)(v74 + 8), 0);
    v81 = v232;
        (int)&v225);
      v82 = v225;
      *v232 = v225;
      v82 = (char *)&unk_28898CC;
      v225 = (char *)&unk_28898CC;
      *((_BYTE *)v81 + 4) = v226;
      v232 = v81 + 2;
    v83 = v82 - 12;
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v204 = (unsigned int *)(v82 - 4);
          v205 = __ldrex(v204);
        while ( __strex(v205 - 1, v204) );
        v205 = (*v204)--;
      if ( v205 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v83);
    v84 = 0x1Au % dword_27DA228;
    v85 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
    if ( !v85 )
      goto LABEL_137;
    v86 = *(_DWORD *)v85;
    v87 = *(_DWORD *)(*(_DWORD *)v85 + 12);
      v88 = v87 == 26;
      if ( v87 == 26 )
        v88 = *(_DWORD *)(v86 + 4) == 26;
      if ( v88 )
      v89 = *(_DWORD *)v86;
      if ( *(_DWORD *)v86 )
        v87 = *(_DWORD *)(v89 + 12);
        v85 = v86;
        v86 = *(_DWORD *)v86;
        if ( *(_DWORD *)(v89 + 12) % (unsigned int)dword_27DA228 == v84 )
    v90 = v85 == 0;
    if ( v85 )
      v85 = *(_DWORD *)v85;
      v90 = v85 == 0;
    if ( v90 )
LABEL_137:
      v91 = operator new(0x10u);
      *v91 = 0;
      v91[1] = 26;
      v91[2] = &unk_28898CC;
      v85 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v84,
              (int)v91);
    v92 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
            (int **)(v85 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v92, (unsigned __int64 *)&v231);
    v222 = 0;
    v223 = 0;
    v224 = 0;
    v93 = 0x18u % dword_27DA228;
    v94 = *(_DWORD *)(dword_27DA224 + 4 * (0x18u % dword_27DA228));
    if ( !v94 )
      goto LABEL_150;
    v95 = *(_DWORD *)v94;
    v96 = *(_DWORD *)(*(_DWORD *)v94 + 12);
      v97 = v96 == 24;
      if ( v96 == 24 )
        v97 = *(_DWORD *)(v95 + 4) == 24;
      if ( v97 )
      v98 = *(_DWORD *)v95;
      if ( *(_DWORD *)v95 )
        v96 = *(_DWORD *)(v98 + 12);
        v94 = v95;
        v95 = *(_DWORD *)v95;
        if ( *(_DWORD *)(v98 + 12) % (unsigned int)dword_27DA228 == v93 )
    v99 = v94 == 0;
    if ( v94 )
      v94 = *(_DWORD *)v94;
      v99 = v94 == 0;
    if ( v99 )
LABEL_150:
      v100 = operator new(0x10u);
      *v100 = 0;
      v100[1] = 24;
      v100[2] = &unk_28898CC;
      v94 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v93,
              (int)v100);
    AutoPlaceItem::AutoPlaceItem((int *)&v220, (int *)(v94 + 8), 1);
    v101 = v223;
    if ( v223 == v224 )
        (unsigned __int64 *)&v222,
        (int)&v220);
      v102 = v220;
      *v223 = v220;
      v102 = (char *)&unk_28898CC;
      v220 = (char *)&unk_28898CC;
      *((_BYTE *)v101 + 4) = v221;
      v223 = v101 + 2;
    v103 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v206 = (unsigned int *)(v102 - 4);
          v207 = __ldrex(v206);
        while ( __strex(v207 - 1, v206) );
        v207 = (*v206)--;
      if ( v207 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v103);
    v104 = 0x1Au % dword_27DA228;
    v105 = *(_DWORD *)(dword_27DA224 + 4 * (0x1Au % dword_27DA228));
    if ( !v105 )
      goto LABEL_167;
    v106 = *(_DWORD *)v105;
    v107 = *(_DWORD *)(*(_DWORD *)v105 + 12);
      v108 = v107 == 26;
      if ( v107 == 26 )
        v108 = *(_DWORD *)(v106 + 4) == 26;
      if ( v108 )
      v109 = *(_DWORD *)v106;
      if ( *(_DWORD *)v106 )
        v107 = *(_DWORD *)(v109 + 12);
        v105 = v106;
        v106 = *(_DWORD *)v106;
        if ( *(_DWORD *)(v109 + 12) % (unsigned int)dword_27DA228 == v104 )
    v110 = v105 == 0;
    if ( v105 )
      v105 = *(_DWORD *)v105;
      v110 = v105 == 0;
    if ( v110 )
LABEL_167:
      v111 = operator new(0x10u);
      *v111 = 0;
      v111[1] = 26;
      v111[2] = &unk_28898CC;
      v105 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               (int)&dword_27DA224,
               v104,
               0x1Au,
               (int)v111);
    AutoPlaceItem::AutoPlaceItem((int *)&v218, (int *)(v105 + 8), 1);
    v112 = v223;
        (int)&v218);
      v113 = v218;
      *v223 = v218;
      v113 = (char *)&unk_28898CC;
      v218 = (char *)&unk_28898CC;
      *((_BYTE *)v112 + 4) = v219;
      v223 = v112 + 2;
    v114 = v113 - 12;
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v208 = (unsigned int *)(v113 - 4);
          v209 = __ldrex(v208);
        while ( __strex(v209 - 1, v208) );
        v209 = (*v208)--;
      if ( v209 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v114);
    v115 = 5u % dword_27DA228;
    v116 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v116 )
      goto LABEL_184;
    v117 = *(_DWORD *)v116;
    v118 = *(_DWORD *)(*(_DWORD *)v116 + 12);
      v119 = v118 == 5;
      if ( v118 == 5 )
        v119 = *(_DWORD *)(v117 + 4) == 5;
      if ( v119 )
      v120 = *(_DWORD *)v117;
      if ( *(_DWORD *)v117 )
        v118 = *(_DWORD *)(v120 + 12);
        v116 = v117;
        v117 = *(_DWORD *)v117;
        if ( *(_DWORD *)(v120 + 12) % (unsigned int)dword_27DA228 == v115 )
    v121 = v116 == 0;
    if ( v116 )
      v116 = *(_DWORD *)v116;
      v121 = v116 == 0;
    if ( v121 )
LABEL_184:
      v122 = operator new(0x10u);
      *v122 = 0;
      v122[1] = 5;
      v122[2] = &unk_28898CC;
      v116 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v115,
               5u,
               (int)v122);
    AutoPlaceItem::AutoPlaceItem((int *)&v216, (int *)(v116 + 8), 0);
    v123 = v223;
        (int)&v216);
      v124 = v216;
      *v223 = v216;
      v124 = (char *)&unk_28898CC;
      v216 = (char *)&unk_28898CC;
      *((_BYTE *)v123 + 4) = v217;
      v223 = v123 + 2;
    v125 = v124 - 12;
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v210 = (unsigned int *)(v124 - 4);
          v211 = __ldrex(v210);
        while ( __strex(v211 - 1, v210) );
        v211 = (*v210)--;
      if ( v211 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v125);
    v126 = 5u % dword_27DA228;
    v127 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v127 )
      goto LABEL_201;
    v128 = *(_DWORD *)v127;
    v129 = *(_DWORD *)(*(_DWORD *)v127 + 12);
      v130 = v129 == 5;
      if ( v129 == 5 )
        v130 = *(_DWORD *)(v128 + 4) == 5;
      if ( v130 )
      v131 = *(_DWORD *)v128;
      if ( *(_DWORD *)v128 )
        v129 = *(_DWORD *)(v131 + 12);
        v127 = v128;
        v128 = *(_DWORD *)v128;
        if ( *(_DWORD *)(v131 + 12) % (unsigned int)dword_27DA228 == v126 )
    v132 = v127 == 0;
    if ( v127 )
      v127 = *(_DWORD *)v127;
      v132 = v127 == 0;
    if ( v132 )
LABEL_201:
      v133 = operator new(0x10u);
      *v133 = 0;
      v133[1] = 5;
      v133[2] = &unk_28898CC;
      v127 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v126,
               (int)v133);
    v134 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v49,
             (int **)(v127 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v134, (unsigned __int64 *)&v222);
    v136 = v223;
    v135 = v222;
    if ( v222 != v223 )
      do
        v139 = (int *)(*v135 - 12);
        if ( v139 != &dword_28898C0 )
        {
          v137 = (unsigned int *)(*v135 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v138 = __ldrex(v137);
            while ( __strex(v138 - 1, v137) );
          }
          else
            v138 = (*v137)--;
          if ( v138 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v139);
        }
        v135 += 2;
      while ( v135 != v136 );
      v135 = v222;
    if ( v135 )
      operator delete(v135);
    v141 = v232;
    v140 = v231;
    if ( v231 != v232 )
        v144 = (int *)(*v140 - 12);
        if ( v144 != &dword_28898C0 )
          v142 = (unsigned int *)(*v140 - 4);
              v143 = __ldrex(v142);
            while ( __strex(v143 - 1, v142) );
            v143 = (*v142)--;
          if ( v143 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v144);
        v140 += 2;
      while ( v140 != v141 );
      v140 = v231;
    if ( v140 )
      operator delete(v140);
    v146 = v241;
    v145 = v240;
    if ( v240 != v241 )
        v149 = (int *)(*v145 - 12);
        if ( v149 != &dword_28898C0 )
          v147 = (unsigned int *)(*v145 - 4);
              v148 = __ldrex(v147);
            while ( __strex(v148 - 1, v147) );
            v148 = (*v147)--;
          if ( v148 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v149);
        v145 += 2;
      while ( v145 != v146 );
      v145 = v240;
  }
  else
    v250 = 0;
    v251 = 0;
    v252 = 0;
    v8 = 5u % dword_27DA228;
    v9 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v9 )
      goto LABEL_249;
    v10 = *(_DWORD *)v9;
    v11 = *(_DWORD *)(*(_DWORD *)v9 + 12);
      v12 = v11 == 5;
      if ( v11 == 5 )
        v12 = *(_DWORD *)(v10 + 4) == 5;
      if ( v12 )
      v13 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
        v11 = *(_DWORD *)(v13 + 12);
        v9 = v10;
        v10 = *(_DWORD *)v10;
        if ( *(_DWORD *)(v13 + 12) % (unsigned int)dword_27DA228 == v8 )
    v150 = v9 == 0;
    if ( v9 )
      v9 = *(_DWORD *)v9;
      v150 = v9 == 0;
    if ( v150 )
LABEL_249:
      v151 = operator new(0x10u);
      *v151 = 0;
      v151[1] = 5;
      v151[2] = &unk_28898CC;
      v9 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v8,
             (int)v151);
    AutoPlaceItem::AutoPlaceItem((int *)&v248, (int *)(v9 + 8), 1);
    v152 = v251;
    if ( v251 == v252 )
        (unsigned __int64 *)&v250,
        (int)&v248);
      v153 = v248;
      *v251 = v248;
      v153 = (char *)&unk_28898CC;
      v248 = (char *)&unk_28898CC;
      *((_BYTE *)v152 + 4) = v249;
      v251 = v152 + 2;
    v154 = v153 - 12;
    if ( (int *)(v153 - 12) != &dword_28898C0 )
      v212 = (unsigned int *)(v153 - 4);
          v213 = __ldrex(v212);
        while ( __strex(v213 - 1, v212) );
        v213 = (*v212)--;
      if ( v213 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v154);
    v155 = 9u % dword_27DA228;
    v156 = *(_DWORD *)(dword_27DA224 + 4 * (9u % dword_27DA228));
    if ( !v156 )
      goto LABEL_266;
    v157 = *(_DWORD *)v156;
    v158 = *(_DWORD *)(*(_DWORD *)v156 + 12);
      v159 = v158 == 9;
      if ( v158 == 9 )
        v159 = *(_DWORD *)(v157 + 4) == 9;
      if ( v159 )
      v160 = *(_DWORD *)v157;
      if ( *(_DWORD *)v157 )
        v158 = *(_DWORD *)(v160 + 12);
        v156 = v157;
        v157 = *(_DWORD *)v157;
        if ( *(_DWORD *)(v160 + 12) % (unsigned int)dword_27DA228 == v155 )
    v161 = v156 == 0;
    if ( v156 )
      v156 = *(_DWORD *)v156;
      v161 = v156 == 0;
    if ( v161 )
LABEL_266:
      v162 = operator new(0x10u);
      *v162 = 0;
      v162[1] = 9;
      v162[2] = &unk_28898CC;
      v156 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v155,
               9u,
               (int)v162);
    v163 = (unsigned __int64 *)((char *)v1 + 600);
    v164 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             v163,
             (int **)(v156 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v164, (unsigned __int64 *)&v250);
    v245 = 0;
    v246 = 0;
    v247 = 0;
    v165 = 9u % dword_27DA228;
    v166 = *(_DWORD *)(dword_27DA224 + 4 * (9u % dword_27DA228));
    if ( !v166 )
      goto LABEL_279;
    v167 = *(_DWORD *)v166;
    v168 = *(_DWORD *)(*(_DWORD *)v166 + 12);
      v169 = v168 == 9;
      if ( v168 == 9 )
        v169 = *(_DWORD *)(v167 + 4) == 9;
      if ( v169 )
      v170 = *(_DWORD *)v167;
      if ( *(_DWORD *)v167 )
        v168 = *(_DWORD *)(v170 + 12);
        v166 = v167;
        v167 = *(_DWORD *)v167;
        if ( *(_DWORD *)(v170 + 12) % (unsigned int)dword_27DA228 == v165 )
    v171 = v166 == 0;
    if ( v166 )
      v166 = *(_DWORD *)v166;
      v171 = v166 == 0;
    if ( v171 )
LABEL_279:
      v172 = operator new(0x10u);
      *v172 = 0;
      v172[1] = 9;
      v172[2] = &unk_28898CC;
      v166 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v165,
               (int)v172);
    AutoPlaceItem::AutoPlaceItem((int *)&v243, (int *)(v166 + 8), 1);
    v173 = v246;
    if ( v246 == v247 )
        (unsigned __int64 *)&v245,
        (int)&v243);
      v174 = v243;
      *v246 = v243;
      v174 = (char *)&unk_28898CC;
      v243 = (char *)&unk_28898CC;
      *((_BYTE *)v173 + 4) = v244;
      v246 = v173 + 2;
    v175 = v174 - 12;
    if ( (int *)(v174 - 12) != &dword_28898C0 )
      v214 = (unsigned int *)(v174 - 4);
          v215 = __ldrex(v214);
        while ( __strex(v215 - 1, v214) );
        v215 = (*v214)--;
      if ( v215 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v175);
    v176 = 5u % dword_27DA228;
    v177 = *(_DWORD *)(dword_27DA224 + 4 * (5u % dword_27DA228));
    if ( !v177 )
      goto LABEL_296;
    v178 = *(_DWORD *)v177;
    v179 = *(_DWORD *)(*(_DWORD *)v177 + 12);
      v180 = v179 == 5;
      if ( v179 == 5 )
        v180 = *(_DWORD *)(v178 + 4) == 5;
      if ( v180 )
      v181 = *(_DWORD *)v178;
      if ( *(_DWORD *)v178 )
        v179 = *(_DWORD *)(v181 + 12);
        v177 = v178;
        v178 = *(_DWORD *)v178;
        if ( *(_DWORD *)(v181 + 12) % (unsigned int)dword_27DA228 == v176 )
    v182 = v177 == 0;
    if ( v177 )
      v177 = *(_DWORD *)v177;
      v182 = v177 == 0;
    if ( v182 )
LABEL_296:
      v183 = operator new(0x10u);
      *v183 = 0;
      v183[1] = 5;
      v183[2] = &unk_28898CC;
      v177 = std::_Hashtable<ContainerEnumName,std::pair<ContainerEnumName const,std::string>,std::allocator<std::pair<ContainerEnumName const,std::string>>,std::__detail::_Select1st,std::equal_to<ContainerEnumName>,ContainerEnumNameHasher,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
               v176,
               (int)v183);
    v184 = std::__detail::_Map_base<std::string,std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>,std::allocator<std::pair<std::string const,std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
             (int **)(v177 + 8));
    std::vector<AutoPlaceItem,std::allocator<AutoPlaceItem>>::operator=(v184, (unsigned __int64 *)&v245);
    v186 = v246;
    v185 = v245;
    if ( v245 != v246 )
        v189 = (int *)(*v185 - 12);
        if ( v189 != &dword_28898C0 )
          v187 = (unsigned int *)(*v185 - 4);
              v188 = __ldrex(v187);
            while ( __strex(v188 - 1, v187) );
            v188 = (*v187)--;
          if ( v188 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v189);
        v185 += 2;
      while ( v185 != v186 );
      v185 = v245;
    if ( v185 )
      operator delete(v185);
    v190 = v251;
    v145 = v250;
    if ( v250 != v251 )
        v193 = (int *)(*v145 - 12);
        if ( v193 != &dword_28898C0 )
          v191 = (unsigned int *)(*v145 - 4);
              v192 = __ldrex(v191);
            while ( __strex(v192 - 1, v191) );
            v192 = (*v191)--;
          if ( v192 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v193);
      while ( v145 != v190 );
      v145 = v250;
  if ( v145 )
    operator delete(v145);
}


signed int __fastcall BeaconScreenController::_isSecondaryEffect(int a1, int **a2)
{
  int v2; // r0@1
  signed int result; // r0@2

  v2 = *(_DWORD *)(a1 + 628);
  if ( v2 )
    result = BeaconContainerManagerController::isSecondaryEffect(v2, a2);
  else
    result = 0;
  return result;
}


int __fastcall BeaconScreenController::BeaconScreenController(int a1, int a2, const BlockPos *a3, int a4)
{
  int v4; // r4@1
  const BlockPos *v5; // r5@1
  int v6; // r0@1
  unsigned int *v7; // r0@2
  unsigned int v8; // r1@4
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  int v14; // r6@21
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  void *v17; // r0@23
  __int64 v18; // r0@24
  int v19; // r5@24
  unsigned int *v20; // r1@25
  unsigned int v21; // r0@27
  unsigned int *v22; // r6@31
  unsigned int v23; // r0@33
  int v24; // r5@38
  unsigned int *v25; // r1@39
  unsigned int v26; // r0@41
  unsigned int *v27; // r6@45
  unsigned int v28; // r0@47
  unsigned int *v30; // r2@53
  signed int v31; // r1@55
  int v32; // [sp+0h] [bp-40h]@24
  int v33; // [sp+4h] [bp-3Ch]@24
  _DWORD *v34; // [sp+8h] [bp-38h]@21
  __int64 v35; // [sp+10h] [bp-30h]@21
  int v36; // [sp+1Ch] [bp-24h]@21
  int v37; // [sp+20h] [bp-20h]@1
  int v38; // [sp+24h] [bp-1Ch]@1

  v4 = a1;
  v37 = *(_DWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 4);
  v38 = v6;
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
  ContainerScreenController::ContainerScreenController(v4, (int)&v37, a4);
  v9 = v38;
  if ( v38 )
    v10 = (unsigned int *)(v38 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  *(_DWORD *)v4 = &off_26E0E9C;
  *(_DWORD *)(v4 + 628) = 0;
  *(_DWORD *)(v4 + 632) = 0;
  ContainerScreenController::setAssociatedBlockPos((ContainerScreenController *)v4, v5);
  sub_119C884((void **)&v36, "button.menu_ok");
  v14 = MinecraftScreenController::_getNameId((ScreenController *)v4, (int **)&v36);
  v15 = operator new(4u);
  LODWORD(v16) = sub_11321E6;
  *v15 = v4;
  HIDWORD(v16) = sub_11321D8;
  v34 = v15;
  v35 = v16;
  ScreenController::registerButtonClickHandler(v4, v14, (int)&v34);
  if ( (_DWORD)v35 )
    ((void (*)(void))v35)();
  v17 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v36 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  (*(void (__fastcall **)(int, const BlockPos *))(*(_DWORD *)v4 + 56))(v4, v5);
  ContainerScreenController::createContainerManagerController<BeaconContainerManagerModel,BeaconContainerManagerController,BlockPos const&>(
    (int)&v32,
    v4,
    (int)v5);
  v18 = *(_QWORD *)&v32;
  v32 = 0;
  v33 = 0;
  *(_DWORD *)(v4 + 628) = v18;
  v19 = *(_DWORD *)(v4 + 632);
  *(_DWORD *)(v4 + 632) = HIDWORD(v18);
  if ( v19 )
    v20 = (unsigned int *)(v19 + 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 == 1 )
      v22 = (unsigned int *)(v19 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
  v24 = v33;
  if ( v33 )
    v25 = (unsigned int *)(v33 + 4);
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
  BeaconScreenController::_registerBindings((BeaconScreenController *)v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 152))(v4);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 156))(v4);
  return v4;
}


signed int __fastcall BeaconScreenController::_isButtonHidden(int a1, int **a2)
{
  int v2; // r0@1
  signed int v3; // r4@1

  v2 = *(_DWORD *)(a1 + 628);
  v3 = 0;
  if ( v2 && BeaconContainerManagerController::getButtonStatus(v2, a2) == 2 )
    v3 = 1;
  return v3;
}


signed int __fastcall BeaconScreenController::_isButtonSelected(int a1, int **a2)
{
  int v2; // r0@1
  signed int v3; // r4@1

  v2 = *(_DWORD *)(a1 + 628);
  v3 = 0;
  if ( v2 && BeaconContainerManagerController::getButtonStatus(v2, a2) == 3 )
    v3 = 1;
  return v3;
}


signed int __fastcall BeaconScreenController::_isStillValid(BeaconScreenController *this)
{
  BeaconScreenController *v1; // r4@1
  BeaconContainerManagerController *v2; // r5@2
  int v3; // r0@2
  signed int result; // r0@3

  v1 = this;
  if ( MinecraftScreenModel::isPlayerValid(*((MinecraftScreenModel **)this + 106)) != 1
    || (v2 = (BeaconContainerManagerController *)*((_DWORD *)v1 + 157),
        v3 = ClientInstanceScreenModel::getPickRange(*((ClientInstanceScreenModel **)v1 + 106)),
        BeaconContainerManagerController::isBeaconValid(v2, *(float *)&v3) != 1) )
  {
    result = 0;
  }
  else
    result = ContainerScreenController::_isStillValid(v1);
  return result;
}


void __fastcall BeaconScreenController::_getButtonHoverText(BeaconContainerManagerModel *a1, int a2, int **a3)
{
  BeaconContainerManagerController::getButtonHoverText(a1, *(_DWORD *)(a2 + 628), a3);
}


void __fastcall BeaconScreenController::~BeaconScreenController(BeaconScreenController *this)
{
  ContainerScreenController *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26E0E9C;
  v2 = *((_DWORD *)this + 158);
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
  ContainerScreenController::~ContainerScreenController(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall BeaconScreenController::_registerCoalesceOrder(BeaconScreenController *this)
{
  BeaconScreenController::_registerCoalesceOrder(this);
}


void __fastcall BeaconScreenController::_registerBindings(BeaconScreenController *this)
{
  BeaconScreenController::_registerBindings(this);
}


signed int __fastcall BeaconScreenController::_isButtonActive(int a1, int **a2)
{
  int v2; // r0@1
  signed int v3; // r4@1

  v2 = *(_DWORD *)(a1 + 628);
  v3 = 0;
  if ( v2 && !BeaconContainerManagerController::getButtonStatus(v2, a2) )
    v3 = 1;
  return v3;
}


signed int __fastcall BeaconScreenController::_onButtonClicked(BeaconScreenController *this, PropertyBag *a2)
{
  Json::Value *v2; // r5@1
  BeaconScreenController *v3; // r4@1
  bool v4; // zf@1
  signed int result; // r0@1
  Json::Value *v6; // r5@6
  char *v7; // r1@7
  char *v8; // r0@9
  int v9; // r1@10
  int v10; // r0@11
  void *v11; // r0@14
  int v12; // r5@17
  signed int v13; // r0@17
  char *v14; // r0@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  unsigned int *v19; // r2@33
  signed int v20; // r1@35
  _DWORD *v21; // [sp+8h] [bp-30h]@4
  _DWORD *v22; // [sp+Ch] [bp-2Ch]@7
  char v23; // [sp+1Ch] [bp-1Ch]@7

  v2 = a2;
  v3 = this;
  v4 = a2 == 0;
  result = 1;
  if ( a2 )
    v4 = *((_DWORD *)v3 + 157) == 0;
  if ( !v4 )
  {
    sub_119C884((void **)&v21, (const char *)&unk_257BC67);
    if ( Json::Value::isNull(v2)
      || Json::Value::isObject(v2) != 1
      || (v6 = (Json::Value *)Json::Value::operator[]((int)v2, "#collection_name"), Json::Value::isString(v6) != 1) )
    {
      v22 = v21;
      v7 = (char *)&unk_28898CC;
      v21 = &unk_28898CC;
    }
    else
      jsonValConversion<std::string>::as((int *)&v22, (int)&v23, (int)v6);
      v7 = (char *)v21;
    v8 = v7 - 12;
    if ( (int *)(v7 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v7 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v8);
    v9 = (int)v22;
    if ( *(v22 - 3) )
      v10 = *((_DWORD *)v3 + 157);
      if ( !v10 )
LABEL_14:
        v11 = (void *)(v9 - 12);
        if ( (int *)(v9 - 12) != &dword_28898C0 )
        {
          v19 = (unsigned int *)(v9 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v11);
        }
        return 0;
      if ( BeaconContainerManagerController::getButtonStatus(v10, &v22) )
        v9 = (int)v22;
        goto LABEL_14;
      v12 = *((_DWORD *)v3 + 157);
      v13 = BeaconContainerManagerController::buttonNameToButtonId(&v22);
      if ( BeaconContainerManagerController::buttonClicked(v12, v13) == 1 )
        MinecraftScreenModel::leaveScreen(*((MinecraftScreenModel **)v3 + 106));
    v14 = (char *)(v22 - 3);
    if ( v22 - 3 != &dword_28898C0 )
      v17 = v22 - 1;
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v14);
    result = 1;
  }
  return result;
}


void __fastcall BeaconScreenController::_registerBindings(BeaconScreenController *this)
{
  BeaconScreenController *v1; // r4@1
  _DWORD *v2; // r0@1
  __int64 v3; // r1@1
  __int64 v4; // r1@1
  _DWORD *v5; // r0@5
  __int64 v6; // r1@5
  __int64 v7; // r1@5
  _DWORD *v8; // r0@9
  __int64 v9; // r1@9
  __int64 v10; // r1@9
  _DWORD *v11; // r0@13
  __int64 v12; // r1@13
  __int64 v13; // r1@13
  _DWORD *v14; // r0@17
  __int64 v15; // r1@17
  __int64 v16; // r1@17
  _DWORD *v17; // r0@21
  __int64 v18; // r1@21
  __int64 v19; // r1@21
  void *v20; // [sp+0h] [bp-E0h]@21
  __int64 v21; // [sp+8h] [bp-D8h]@21
  _DWORD *v22; // [sp+10h] [bp-D0h]@21
  __int64 v23; // [sp+18h] [bp-C8h]@21
  int v24; // [sp+20h] [bp-C0h]@21
  void *v25; // [sp+24h] [bp-BCh]@17
  __int64 v26; // [sp+2Ch] [bp-B4h]@17
  _DWORD *v27; // [sp+34h] [bp-ACh]@17
  __int64 v28; // [sp+3Ch] [bp-A4h]@17
  int v29; // [sp+44h] [bp-9Ch]@17
  void *v30; // [sp+48h] [bp-98h]@13
  __int64 v31; // [sp+50h] [bp-90h]@13
  _DWORD *v32; // [sp+58h] [bp-88h]@13
  __int64 v33; // [sp+60h] [bp-80h]@13
  int v34; // [sp+68h] [bp-78h]@13
  void *v35; // [sp+6Ch] [bp-74h]@9
  __int64 v36; // [sp+74h] [bp-6Ch]@9
  _DWORD *v37; // [sp+7Ch] [bp-64h]@9
  __int64 v38; // [sp+84h] [bp-5Ch]@9
  int v39; // [sp+8Ch] [bp-54h]@9
  void *v40; // [sp+90h] [bp-50h]@5
  __int64 v41; // [sp+98h] [bp-48h]@5
  _DWORD *v42; // [sp+A0h] [bp-40h]@5
  __int64 v43; // [sp+A8h] [bp-38h]@5
  int v44; // [sp+B0h] [bp-30h]@5
  void *v45; // [sp+B4h] [bp-2Ch]@1
  __int64 v46; // [sp+BCh] [bp-24h]@1
  _DWORD *v47; // [sp+C4h] [bp-1Ch]@1
  __int64 v48; // [sp+CCh] [bp-14h]@1
  int v49; // [sp+D4h] [bp-Ch]@1

  v1 = this;
  v49 = -220407884;
  v2 = operator new(4u);
  LODWORD(v3) = sub_1132AA6;
  *v2 = v1;
  HIDWORD(v3) = sub_1132A6C;
  v47 = v2;
  v48 = v3;
  v45 = operator new(1u);
  LODWORD(v4) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v4) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v46 = v4;
  ScreenController::bindBoolForAnyCollection((int)v1, &v49, (int)&v47, (int)&v45);
  if ( (_DWORD)v46 )
    ((void (*)(void))v46)();
  if ( (_DWORD)v48 )
    ((void (*)(void))v48)();
  v44 = 336083383;
  v5 = operator new(4u);
  LODWORD(v6) = sub_1132AFA;
  *v5 = v1;
  HIDWORD(v6) = sub_1132ADC;
  v42 = v5;
  v43 = v6;
  v40 = operator new(1u);
  LODWORD(v7) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v7) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v41 = v7;
  ScreenController::bindBoolForAnyCollection((int)v1, &v44, (int)&v42, (int)&v40);
  if ( (_DWORD)v41 )
    ((void (*)(void))v41)();
  if ( (_DWORD)v43 )
    ((void (*)(void))v43)();
  v39 = 119757339;
  v8 = operator new(4u);
  LODWORD(v9) = sub_1132B4C;
  *v8 = v1;
  HIDWORD(v9) = sub_1132B30;
  v37 = v8;
  v38 = v9;
  v35 = operator new(1u);
  LODWORD(v10) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v10) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v36 = v10;
  ScreenController::bindBoolForAnyCollection((int)v1, &v39, (int)&v37, (int)&v35);
  if ( (_DWORD)v36 )
    ((void (*)(void))v36)();
  if ( (_DWORD)v38 )
    ((void (*)(void))v38)();
  v34 = -1776486525;
  v11 = operator new(4u);
  LODWORD(v12) = sub_1132BA4;
  *v11 = v1;
  HIDWORD(v12) = sub_1132B82;
  v32 = v11;
  v33 = v12;
  v30 = operator new(1u);
  LODWORD(v13) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v13) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v31 = v13;
  ScreenController::bindBoolForAnyCollection((int)v1, &v34, (int)&v32, (int)&v30);
  if ( (_DWORD)v31 )
    ((void (*)(void))v31)();
  if ( (_DWORD)v33 )
    ((void (*)(void))v33)();
  v29 = -544179905;
  v14 = operator new(4u);
  LODWORD(v15) = sub_1132BEA;
  *v14 = v1;
  HIDWORD(v15) = sub_1132BDA;
  v27 = v14;
  v28 = v15;
  v25 = operator new(1u);
  LODWORD(v16) = ZNSt14_Function_base13_Base_managerIZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsRKSsiEERKS5_IFbS7_iEEEd_UlS7_iE_E10_M_managerERSt9_Any_dataRKSI_St18_Manager_operation;
  HIDWORD(v16) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController26bindStringForAnyCollectionERK10StringHashRKSt8functionIFSsS1_iEERKS7_IS2_EEd_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v26 = v16;
  ScreenController::bindStringForAnyCollection((int)v1, &v29, (int)&v27, (int)&v25);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  if ( (_DWORD)v28 )
    ((void (*)(void))v28)();
  StringHash::StringHash<char [23]>(&v24, (int)"#extra_image_selection");
  v17 = operator new(4u);
  LODWORD(v18) = sub_1132C38;
  *v17 = v1;
  HIDWORD(v18) = sub_1132C20;
  v22 = v17;
  v23 = v18;
  v20 = operator new(1u);
  LODWORD(v19) = ZNSt14_Function_base13_Base_managerIZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIFbRKSsiEESB_Ed_UlS7_iE_E10_M_managerERSt9_Any_dataRKSE_St18_Manager_operation;
  HIDWORD(v19) = ZNSt17_Function_handlerIFbRKSsiEZN16ScreenController24bindBoolForAnyCollectionERK10StringHashRKSt8functionIS2_ESA_Ed_UlS1_iE_E9_M_invokeERKSt9_Any_dataS1_i;
  v21 = v19;
  ScreenController::bindBoolForAnyCollection((int)v1, &v24, (int)&v22, (int)&v20);
  if ( (_DWORD)v21 )
    ((void (*)(void))v21)();
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
}


void __fastcall BeaconScreenController::~BeaconScreenController(BeaconScreenController *this)
{
  BeaconScreenController::~BeaconScreenController(this);
}
