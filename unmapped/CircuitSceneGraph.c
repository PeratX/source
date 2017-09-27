

int *__fastcall CircuitSceneGraph::remove(CircuitSceneGraph *this, const BlockPos *a2, BaseCircuitComponent *a3)
{
  const BlockPos *v3; // r11@1
  __int64 v4; // kr00_8@1
  unsigned int v5; // r5@1
  unsigned int v6; // r4@1
  int v7; // r7@1
  int *result; // r0@1
  int v9; // r9@2
  int v10; // r6@2
  bool v11; // zf@3
  int v12; // r10@9
  int v13; // r1@12
  int v14; // r2@12
  int v15; // r3@12
  __int64 v16; // kr08_8@12
  int v17; // r12@13
  int v18; // r0@13
  int *v19; // r4@13
  unsigned __int64 *v20; // [sp+4h] [bp-4Ch]@1
  CircuitSceneGraph *v21; // [sp+8h] [bp-48h]@1
  BaseCircuitComponent *v22; // [sp+Ch] [bp-44h]@1
  int v23; // [sp+10h] [bp-40h]@1
  BaseCircuitComponent *v24; // [sp+18h] [bp-38h]@12
  int v25; // [sp+1Ch] [bp-34h]@12
  int v26; // [sp+20h] [bp-30h]@12
  int v27; // [sp+24h] [bp-2Ch]@12
  int v28; // [sp+28h] [bp-28h]@12

  v3 = a2;
  v22 = a3;
  v21 = this;
  v4 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 2);
  v20 = (unsigned __int64 *)((char *)this + 96);
  v5 = *((_DWORD *)this + 25);
  v6 = 8976890 * v4 + 981131 * HIDWORD(v4) + v23;
  v7 = v6 % *((_DWORD *)this + 25);
  result = *(int **)(*((_DWORD *)this + 24) + 4 * v7);
  if ( result )
  {
    v9 = *result;
    v10 = *(_DWORD *)(*result + 36);
    while ( 1 )
    {
      v11 = v10 == v6;
      if ( v10 == v6 )
        v11 = (_DWORD)v4 == *(_DWORD *)(v9 + 4);
      if ( v11 && *(_QWORD *)a2 >> 32 == *(_DWORD *)(v9 + 8) && v23 == *(_DWORD *)(v9 + 12) )
        break;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v12 + 36);
        result = (int *)v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v12 + 36) % v5 == v7 )
          continue;
      }
      goto LABEL_11;
    }
    if ( result && *result )
      result = (int *)j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
                        v20,
                        *result);
  }
LABEL_11:
  if ( v22 )
    v27 = 0;
    v26 = 0;
    v24 = v22;
    v25 = 0;
    v13 = *(_DWORD *)v3;
    v14 = *((_DWORD *)v3 + 1);
    v15 = *((_DWORD *)v3 + 2);
    v26 = *(_DWORD *)v3;
    v27 = v14;
    v28 = v15;
    v16 = *(_QWORD *)((char *)v21 + 156);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      j_std::vector<CircuitSceneGraph::PendingEntry,std::allocator<CircuitSceneGraph::PendingEntry>>::_M_emplace_back_aux<CircuitSceneGraph::PendingEntry>(
        (unsigned __int64 *)v21 + 19,
        (int)&v24);
      v19 = &v25;
      if ( v25 )
        (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    else
      *(_DWORD *)(v16 + 4) = 0;
      *(_DWORD *)(v16 + 8) = 0;
      v17 = v16 + 8;
      *(_DWORD *)(v16 + 12) = 0;
      v25 = 0;
      v18 = *((_DWORD *)v21 + 39);
      *(_DWORD *)v16 = v22;
      *(_DWORD *)v17 = v13;
      *(_DWORD *)(v17 + 4) = v14;
      *(_DWORD *)(v17 + 8) = v15;
      *((_DWORD *)v21 + 39) = v18 + 20;
    result = 0;
    *v19 = 0;
  return result;
}


void __fastcall CircuitSceneGraph::findRelationships(CircuitSceneGraph *this, const BlockPos *a2, BaseCircuitComponent *a3, BlockSource *a4)
{
  CircuitSceneGraph::findRelationships(this, a2, a3, a4);
}


int __fastcall CircuitSceneGraph::setPendingAddAsNewlyLoaded(CircuitSceneGraph *this)
{
  int result; // r0@1

  for ( result = *((_DWORD *)this + 26); result; result = *(_DWORD *)result )
    *(_BYTE *)(*(_DWORD *)(result + 20) + 17) = 1;
  return result;
}


int __fastcall CircuitSceneGraph::getFromPendingAdd(CircuitSceneGraph *this, const BlockPos *a2)
{
  __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r7@2
  int v9; // r1@4
  bool v10; // zf@4
  int result; // r0@11
  bool v12; // zf@12
  int v13; // [sp+0h] [bp-28h]@1

  v2 = *(_QWORD *)a2;
  v13 = *((_DWORD *)a2 + 2);
  v3 = *((_QWORD *)this + 12);
  v4 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v13;
  v5 = v4 % (unsigned int)(*((_QWORD *)this + 12) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 36);
  while ( 1 )
  {
    if ( v8 == v4 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = (_DWORD)v2 == v9;
      if ( (_DWORD)v2 == v9 )
        v10 = HIDWORD(v2) == *(_DWORD *)(v7 + 8);
      if ( v10 && v13 == *(_DWORD *)(v7 + 12) )
        break;
    }
    if ( *(_DWORD *)v7 )
      v8 = *(_DWORD *)(v3 + 36);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 36) % HIDWORD(v3) == v5 )
        continue;
  }
  v12 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v12 = v6 == 0;
  if ( v12 )
LABEL_11:
    result = 0;
  else
    result = *(_DWORD *)(v6 + 20);
  return result;
}


int __fastcall CircuitSceneGraph::processPendingAdds(int result)
{
  int v1; // r2@1
  int v2; // r1@3
  int v3; // r4@4
  int v4; // r0@5
  int v5; // r5@5
  __int64 v6; // r0@6
  __int64 v7; // r0@7
  bool v8; // zf@9
  int v9; // r8@13
  int v10; // r7@13
  __int64 v11; // kr00_8@13
  unsigned int v12; // r7@13
  unsigned int v13; // r1@13
  unsigned int v14; // r6@13
  BaseCircuitComponent *v15; // r11@13
  int *v16; // r0@13
  int v17; // r10@14
  int v18; // r4@14
  bool v19; // zf@15
  int v20; // r5@21
  __int64 v21; // r0@25 OVERLAPPED
  int v22; // r2@25 OVERLAPPED
  __int64 v23; // r0@26
  int v24; // r2@26
  __int64 v25; // kr08_8@26
  int v26; // r12@27
  int v27; // r8@29
  __int64 v28; // kr10_8@29
  unsigned int v29; // r9@29
  unsigned int v30; // r4@29
  int v31; // r0@29
  int v32; // r10@30
  int v33; // r6@30
  bool v34; // zf@31
  int v35; // r0@41
  int v36; // r1@41
  __int64 v37; // r2@41
  __int64 v38; // kr18_8@41
  int v39; // r5@42
  int v40; // r12@42
  int v41; // r0@48
  int v42; // r0@50
  bool v43; // zf@50
  unsigned int v44; // r4@51
  __int64 v45; // r0@53
  int v46; // r0@56
  bool v47; // zf@56
  unsigned int v48; // r4@57
  __int64 v49; // r0@59
  int v50; // r8@61
  int v51; // r10@61
  int v52; // r0@61
  unsigned int v53; // r5@61
  unsigned __int64 v54; // r6@61
  int v55; // r0@61
  int v56; // r11@62
  int v57; // r6@62
  int v58; // r1@64
  bool v59; // zf@64
  int v60; // r9@69
  int v61; // r8@71
  int v62; // r10@71
  int v63; // r0@71
  unsigned int v64; // r9@71
  unsigned __int64 v65; // kr30_8@71
  int v66; // r0@71
  int v67; // r11@72
  int v68; // r5@72
  int v69; // r1@74
  bool v70; // zf@74
  int v71; // r6@79
  int v72; // r0@82
  int v73; // r0@84
  bool v74; // zf@84
  int v75; // r11@85
  __int64 v76; // r0@87
  bool v77; // zf@87
  int v78; // r0@90
  int i; // r9@90
  int v80; // r8@94
  CircuitSceneGraph *v81; // r6@94
  unsigned __int64 v82; // kr40_8@94
  unsigned int v83; // r4@94
  unsigned int v84; // r7@94
  int v85; // r0@94
  int v86; // r11@95
  int v87; // r5@95
  bool v88; // zf@96
  int v89; // r6@102
  BaseCircuitComponent *v90; // r2@104
  __int64 v91; // r0@104
  int v92; // r0@111
  int v93; // r1@111
  _DWORD *v94; // r0@111
  unsigned int v95; // r2@111
  int v96; // r0@111
  int v97; // r9@111
  __int64 v98; // kr50_8@111
  unsigned int v99; // r7@111
  unsigned int v100; // r6@111 OVERLAPPED
  unsigned int v101; // r4@111
  int v102; // r0@111
  int v103; // r8@112
  int v104; // r5@112
  int v105; // r1@114
  bool v106; // zf@114
  int v107; // r10@119
  unsigned __int64 *v108; // [sp+0h] [bp-B0h]@2
  unsigned __int64 *v109; // [sp+Ch] [bp-A4h]@2
  unsigned __int64 *v110; // [sp+10h] [bp-A0h]@2
  int v111; // [sp+14h] [bp-9Ch]@0
  __int64 v112; // [sp+18h] [bp-98h]@26
  int v113; // [sp+1Ch] [bp-94h]@94
  int v114; // [sp+24h] [bp-8Ch]@13
  int v115; // [sp+28h] [bp-88h]@13
  signed int v116; // [sp+28h] [bp-88h]@47
  CircuitSceneGraph *v117; // [sp+2Ch] [bp-84h]@1
  int v118; // [sp+30h] [bp-80h]@13
  int v119; // [sp+30h] [bp-80h]@29
  int v120; // [sp+30h] [bp-80h]@61
  int v121; // [sp+30h] [bp-80h]@71
  int v122; // [sp+30h] [bp-80h]@111
  int v123; // [sp+34h] [bp-7Ch]@13
  int v124; // [sp+34h] [bp-7Ch]@29
  int v125; // [sp+34h] [bp-7Ch]@61
  int v126; // [sp+34h] [bp-7Ch]@94
  int v127; // [sp+34h] [bp-7Ch]@111
  char v128; // [sp+38h] [bp-78h]@39
  int v129; // [sp+40h] [bp-70h]@39
  int v130; // [sp+44h] [bp-6Ch]@39
  int v131; // [sp+48h] [bp-68h]@39
  void *ptr; // [sp+4Ch] [bp-64h]@39
  int v133; // [sp+50h] [bp-60h]@39
  int v134; // [sp+54h] [bp-5Ch]@39
  char v135; // [sp+58h] [bp-58h]@23
  int v136; // [sp+60h] [bp-50h]@23
  int v137; // [sp+64h] [bp-4Ch]@23
  int v138; // [sp+68h] [bp-48h]@23
  int v139; // [sp+6Ch] [bp-44h]@23
  unsigned __int64 v140; // [sp+70h] [bp-40h]@26
  __int64 v141; // [sp+78h] [bp-38h]@26
  int v142; // [sp+80h] [bp-30h]@26
  char v143; // [sp+84h] [bp-2Ch]@26
  char v144; // [sp+85h] [bp-2Bh]@26
  int v145; // [sp+88h] [bp-28h]@26

  v1 = *(_DWORD *)(result + 104);
  v117 = (CircuitSceneGraph *)result;
  if ( v1 )
  {
    v110 = (unsigned __int64 *)(result + 96);
    v109 = (unsigned __int64 *)(result + 40);
    v108 = (unsigned __int64 *)(result + 28);
    while ( 1 )
    {
      v114 = v1;
      v9 = *(_DWORD *)(v1 + 24);
      v10 = *(_DWORD *)(v1 + 32);
      v118 = v10;
      v115 = v1 + 24;
      v123 = *(_DWORD *)(v1 + 28);
      v11 = *(_QWORD *)result;
      v12 = v10 + 8976890 * v9 + 981131 * v123;
      v13 = v12 % (unsigned int)(*(_QWORD *)result >> 32);
      v14 = v13;
      v15 = *(BaseCircuitComponent **)(v1 + 20);
      v16 = *(int **)(*(_QWORD *)result + 4 * v13);
      v2 = *(_DWORD *)(v1 + 20);
      if ( !v16 )
        goto LABEL_23;
      v17 = *v16;
      v18 = *(_DWORD *)(*v16 + 20);
      while ( 1 )
      {
        v19 = v18 == v12;
        if ( v18 == v12 )
          v19 = v9 == *(_DWORD *)(v17 + 4);
        if ( v19 && v123 == *(_DWORD *)(v17 + 8) && v118 == *(_DWORD *)(v17 + 12) )
          break;
        v20 = *(_DWORD *)v17;
        v2 = *(_DWORD *)(v1 + 20);
        if ( *(_DWORD *)v17 )
        {
          v18 = *(_DWORD *)(v20 + 20);
          v16 = (int *)v17;
          v17 = *(_DWORD *)v17;
          v2 = *(_DWORD *)(v1 + 20);
          if ( *(_DWORD *)(v20 + 20) % HIDWORD(v11) == v14 )
            continue;
        }
      }
      v3 = *v16;
      if ( !*v16 )
      v4 = *(_DWORD *)(v3 + 16);
      v5 = v1;
      if ( v4 )
        LODWORD(v6) = (*(int (__cdecl **)(int))(*(_DWORD *)v4 + 40))(v4);
        if ( v6 == 1129533506 )
          LODWORD(v7) = (*(int (__fastcall **)(BaseCircuitComponent *))(*(_DWORD *)v15 + 40))(v15);
          if ( v7 != 1129533506 )
            break;
LABEL_123:
      v1 = j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
             v110,
             v5);
      result = (int)v117;
      if ( !v1 )
        return result;
    }
    j_std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
      (unsigned __int64 *)v117,
      v3);
    v2 = *(_DWORD *)(v114 + 20);
LABEL_23:
    v136 = v9;
    v137 = v123;
    v5 = v114;
    v138 = v118;
    *(_DWORD *)(v114 + 20) = 0;
    v139 = v2;
    j_std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>(
      (int *)&v135,
      v117,
      (int)&v136);
    if ( v139 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v139 + 4))(v139);
    v139 = 0;
    LODWORD(v21) = (*(int (__fastcall **)(BaseCircuitComponent *))(*(_DWORD *)v15 + 40))(v15);
    v22 = v21;
    if ( v21 != 1129533506 )
      v112 = *(__int64 *)((char *)&v21 + 4);
      v23 = *(_QWORD *)(v114 + 24);
      v24 = *(_DWORD *)(v114 + 32);
      v140 = (unsigned int)v15;
      v141 = v23;
      v142 = v24;
      v143 = 6;
      v144 = 0;
      v145 = 0;
      v25 = *((_QWORD *)v117 + 4);
      if ( (_DWORD)v25 == HIDWORD(v25) )
        j_std::vector<CircuitComponentList::Item,std::allocator<CircuitComponentList::Item>>::_M_emplace_back_aux<CircuitComponentList::Item>(
          v108,
          (int)&v140);
      else
        v26 = v25 + 8;
        *(_QWORD *)v25 = v140;
        *(_QWORD *)v26 = v23;
        *(_DWORD *)(v26 + 8) = v24;
        *(_QWORD *)(v25 + 20) = *(_QWORD *)&v143;
        *((_DWORD *)v117 + 8) += 28;
      v27 = *((_DWORD *)v15 + 5);
      v111 = (int)v15 + 20;
      v124 = *((_DWORD *)v15 + 6);
      v119 = *((_DWORD *)v15 + 7);
      v28 = *((_QWORD *)v117 + 5);
      v29 = 8976890 * v27 + 981131 * v124 + v119;
      v30 = v29 % (unsigned int)(*((_QWORD *)v117 + 5) >> 32);
      v31 = *(_DWORD *)(v28 + 4 * v30);
      if ( !v31 )
        goto LABEL_39;
      v32 = *(_DWORD *)v31;
      v33 = *(_DWORD *)(*(_DWORD *)v31 + 28);
        v34 = v33 == v29;
        if ( v33 == v29 )
          v34 = v27 == *(_DWORD *)(v32 + 4);
        if ( v34 && v124 == *(_DWORD *)(v32 + 8) && v119 == *(_DWORD *)(v32 + 12) )
        if ( *(_DWORD *)v32 )
          v33 = *(_DWORD *)(v28 + 28);
          v31 = v32;
          v32 = *(_DWORD *)v32;
          if ( *(_DWORD *)(v28 + 28) % HIDWORD(v28) == v30 )
      v8 = v31 == 0;
      if ( v31 )
        v8 = *(_DWORD *)v31 == 0;
      if ( v8 )
LABEL_39:
        v129 = *((_DWORD *)v15 + 5);
        v130 = v124;
        v131 = v119;
        ptr = 0;
        v133 = 0;
        v134 = 0;
        j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitComponentList>,std::allocator<std::pair<BlockPos const,CircuitComponentList>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,CircuitComponentList>>(
          (int *)&v128,
          v109,
          (int)&v129);
        if ( ptr )
          j_operator delete(ptr);
      v35 = j_std::__detail::_Map_base<BlockPos,std::pair<BlockPos const,CircuitComponentList>,std::allocator<std::pair<BlockPos const,CircuitComponentList>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
              v109,
              v111);
      v36 = *(_DWORD *)(v114 + 24);
      v37 = *(_QWORD *)(v114 + 28);
      LODWORD(v141) = v36;
      *(__int64 *)((char *)&v141 + 4) = v37;
      v38 = *(_QWORD *)(v35 + 4);
      if ( (_DWORD)v38 == HIDWORD(v38) )
          (unsigned __int64 *)v35,
        v39 = HIDWORD(v140);
        v40 = v38 + 8;
        *(_DWORD *)v38 = v140;
        *(_DWORD *)(v38 + 4) = v39;
        *(_DWORD *)v40 = v36;
        *(_QWORD *)(v40 + 4) = v37;
        *(_QWORD *)(v38 + 20) = *(_QWORD *)&v143;
        *(_DWORD *)(v35 + 4) += 28;
      v5 = v114;
      if ( !(HIDWORD(v112) ^ 0x43534341 | (unsigned int)v112) )
        j_CircuitSceneGraph::scheduleRelationshipUpdate(__PAIR__(v115, (unsigned int)v117), v15);
        v41 = -1;
        do
          v140 = (unsigned int)v41;
          LODWORD(v141) = -1;
          v125 = v41;
          v50 = *(_DWORD *)(v5 + 24) + v41;
          LODWORD(v140) = v50;
          v51 = *(_DWORD *)(v5 + 28);
          HIDWORD(v140) = v51;
          v52 = *(_DWORD *)(v5 + 32);
          v120 = v52 - 1;
          LODWORD(v141) = v52 - 1;
          v53 = v52 - 1 + 8976890 * v50 + 981131 * v51;
          v54 = *(_QWORD *)v117;
          v44 = v53 % (unsigned int)(*(_QWORD *)v117 >> 32);
          v55 = *(_DWORD *)(*(_QWORD *)v117 + 4 * v44);
          if ( v55 )
          {
            v56 = *(_DWORD *)v55;
            v57 = *(_DWORD *)(*(_DWORD *)v55 + 20);
            while ( 1 )
            {
              if ( v57 == v53 )
              {
                v58 = *(_DWORD *)(v56 + 4);
                v59 = v50 == v58;
                if ( v50 == v58 )
                  v59 = v51 == *(_DWORD *)(v56 + 8);
                if ( v59 && v120 == *(_DWORD *)(v56 + 12) )
                  break;
              }
              v60 = *(_DWORD *)v56;
              if ( *(_DWORD *)v56 )
                LODWORD(v54) = *(_DWORD *)(v60 + 20);
                v55 = v56;
                v56 = *(_DWORD *)v56;
                if ( *(_DWORD *)(v60 + 20) % HIDWORD(v54) == v44 )
                  continue;
              goto LABEL_71;
            }
            if ( v55 )
              v42 = *(_DWORD *)v55;
              v43 = v42 == 0;
              if ( v42 )
                v44 = *(_DWORD *)(v42 + 16);
                v43 = v44 == 0;
              if ( !v43 )
                LODWORD(v45) = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)v44 + 40))(v44);
                if ( v45 == 1129530177 )
                  j_CircuitSceneGraph::scheduleRelationshipUpdate(
                    __PAIR__(&v140, (unsigned int)v117),
                    (BaseCircuitComponent *)v44);
          }
LABEL_71:
          v140 = (unsigned int)v125;
          LODWORD(v141) = 1;
          v61 = *(_DWORD *)(v114 + 24) + v125;
          LODWORD(v140) = v61;
          v62 = *(_DWORD *)(v114 + 28);
          HIDWORD(v140) = v62;
          v63 = *(_DWORD *)(v114 + 32);
          v121 = v63 + 1;
          LODWORD(v141) = v63 + 1;
          v64 = v63 + 1 + 8976890 * v61 + 981131 * v62;
          v65 = *(_QWORD *)v117;
          v48 = v64 % (unsigned int)(*(_QWORD *)v117 >> 32);
          v66 = *(_DWORD *)(*(_QWORD *)v117 + 4 * v48);
          if ( v66 )
            v67 = *(_DWORD *)v66;
            v68 = *(_DWORD *)(*(_DWORD *)v66 + 20);
              if ( v68 == v64 )
                v69 = *(_DWORD *)(v67 + 4);
                v70 = v61 == v69;
                if ( v61 == v69 )
                  v70 = v62 == *(_DWORD *)(v67 + 8);
                if ( v70 && v121 == *(_DWORD *)(v67 + 12) )
              v71 = *(_DWORD *)v67;
              if ( *(_DWORD *)v67 )
                v68 = *(_DWORD *)(v71 + 20);
                v66 = v67;
                v67 = *(_DWORD *)v67;
                if ( *(_DWORD *)(v71 + 20) % HIDWORD(v65) == v48 )
              goto LABEL_81;
            if ( v66 )
              v46 = *(_DWORD *)v66;
              v47 = v46 == 0;
              if ( v46 )
                v48 = *(_DWORD *)(v46 + 16);
                v47 = v48 == 0;
              if ( !v47 )
                LODWORD(v49) = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)v48 + 40))(v48);
                if ( v49 == 1129530177 )
                    (BaseCircuitComponent *)v48);
LABEL_81:
          v5 = v114;
          v41 = v125 + 2;
          v116 = -1;
        while ( v125 < 0 );
        goto LABEL_82;
      if ( !(HIDWORD(v112) ^ 0x43535043 | (unsigned int)v112) )
    v116 = -1;
    do
LABEL_82:
      v72 = 0;
      do
        v122 = v72;
        v92 = 3 * v72;
        v93 = Facing::DIRECTION[v92];
        v94 = &Facing::DIRECTION[v92];
        LODWORD(v140) = v93;
        v95 = v94[1];
        v96 = v94[2];
        LODWORD(v141) = v96;
        v97 = v93 + *(_DWORD *)(v5 + 24);
        v140 = __PAIR__(v95, v97);
        v98 = *(_QWORD *)(v5 + 28);
        v75 = v98 + v95 + v116;
        v127 = v96 + HIDWORD(v98);
        HIDWORD(v140) = v75;
        LODWORD(v141) = v96 + HIDWORD(v98);
        v99 = 981131 * v75 + 8976890 * v97 + v96 + HIDWORD(v98);
        *(_QWORD *)(&v100 - 1) = *(_QWORD *)v117;
        v101 = v99 % (unsigned int)(*(_QWORD *)v117 >> 32);
        v102 = *(_DWORD *)(*(_QWORD *)v117 + 4 * v101);
        if ( v102 )
          v103 = *(_DWORD *)v102;
          v104 = *(_DWORD *)(*(_DWORD *)v102 + 20);
          while ( 1 )
            if ( v104 == v99 )
              v105 = *(_DWORD *)(v103 + 4);
              v106 = v97 == v105;
              if ( v97 == v105 )
                v106 = v75 == *(_DWORD *)(v103 + 8);
              if ( v106 && v127 == *(_DWORD *)(v103 + 12) )
                break;
            v107 = *(_DWORD *)v103;
            if ( *(_DWORD *)v103 )
              v104 = *(_DWORD *)(v107 + 20);
              v102 = v103;
              v103 = *(_DWORD *)v103;
              if ( *(_DWORD *)(v107 + 20) % v100 == v101 )
                continue;
            goto LABEL_121;
          if ( v102 )
            v73 = *(_DWORD *)v102;
            v74 = v73 == 0;
            if ( v73 )
              v75 = *(_DWORD *)(v73 + 16);
              v111 = v75;
              v74 = v75 == 0;
            if ( !v74 )
              LODWORD(v76) = (*(int (__fastcall **)(int))(*(_DWORD *)v75 + 40))(v75);
              v77 = v76 == 1129533507;
              if ( v76 != 1129533507 )
                v77 = v76 == 1129530177;
              if ( v77 )
                j_CircuitSceneGraph::scheduleRelationshipUpdate(
                  __PAIR__(&v140, (unsigned int)v117),
                  (BaseCircuitComponent *)v75);
              else
                v78 = *(_QWORD *)(v75 + 4) >> 32;
                for ( i = *(_QWORD *)(v75 + 4); i != v78; i += 28 )
                {
                  v80 = *(_DWORD *)(i + 8);
                  v81 = v117;
                  v126 = *(_DWORD *)(i + 12);
                  v113 = *(_DWORD *)(i + 16);
                  v82 = *(_QWORD *)v117;
                  v83 = 8976890 * v80 + 981131 * v126 + v113;
                  v84 = v83 % (unsigned int)(*(_QWORD *)v117 >> 32);
                  v85 = *(_DWORD *)(*(_QWORD *)v117 + 4 * v84);
                  if ( !v85 )
                    goto LABEL_126;
                  v86 = *(_DWORD *)v85;
                  v87 = *(_DWORD *)(*(_DWORD *)v85 + 20);
                  while ( 1 )
                  {
                    v88 = v87 == v83;
                    if ( v87 == v83 )
                      v88 = v80 == *(_DWORD *)(v86 + 4);
                    if ( v88 && v126 == *(_DWORD *)(v86 + 8) && v113 == *(_DWORD *)(v86 + 12) )
                      break;
                    v89 = *(_DWORD *)v86;
                    if ( *(_DWORD *)v86 )
                    {
                      v87 = *(_DWORD *)(v89 + 20);
                      v85 = v86;
                      v86 = *(_DWORD *)v86;
                      if ( *(_DWORD *)(v89 + 20) % HIDWORD(v82) == v84 )
                        continue;
                    }
                    v81 = v117;
                    v90 = 0;
                    HIDWORD(v91) = i + 8;
                    v75 = v111;
                    goto LABEL_92;
                  }
                  v75 = v111;
                  if ( v85 )
                    LODWORD(v91) = *(_DWORD *)v85;
                    if ( (_DWORD)v91 )
                      v90 = *(BaseCircuitComponent **)(v91 + 16);
                    else
                      v90 = 0;
                  else
LABEL_126:
LABEL_92:
                  LODWORD(v91) = v81;
                  j_CircuitSceneGraph::scheduleRelationshipUpdate(v91, v90);
                  v78 = *(_DWORD *)(v75 + 8);
                }
LABEL_121:
        v5 = v114;
        v72 = v122 + 1;
      while ( v122 != 5 );
      ++v116;
    while ( v116 != 2 );
    goto LABEL_123;
  }
  return result;
}


int __fastcall CircuitSceneGraph::removeComponent(__int64 this)
{
  __int64 v1; // kr00_8@1
  __int64 v2; // kr08_8@1
  unsigned int v3; // r7@1
  unsigned int v4; // r4@1
  int result; // r0@1
  int v6; // r8@2
  int v7; // r6@2
  int v8; // r1@4
  bool v9; // zf@4
  int v10; // r10@9
  bool v11; // zf@12
  int v12; // r4@15
  __int64 v13; // r0@15
  int i; // r0@16
  int v15; // r2@16
  __int64 v16; // kr18_8@17
  int v17; // r5@19
  bool v18; // zf@19
  signed int v19; // r3@25
  signed int v20; // r2@26
  int v21; // r3@26
  int v22; // r2@26
  int v23; // r5@27
  __int64 v24; // kr28_8@30
  int v25; // r6@30
  unsigned int v26; // r7@30
  unsigned int v27; // r5@30
  int v28; // r1@30
  int v29; // r10@30
  void ***v30; // r0@30
  void **v31; // r11@31
  void **v32; // r8@31
  void *v33; // r4@31
  bool v34; // zf@32
  _DWORD *v35; // r6@38
  int j; // r0@40
  __int64 k; // r2@41
  __int64 v38; // kr30_8@44
  int v39; // r4@46
  bool v40; // zf@46
  signed int v41; // r7@52
  int v42; // r7@53
  int v43; // r3@53
  int v44; // r4@54
  BaseCircuitComponent **v45; // r0@57
  BaseCircuitComponent **l; // r4@57
  int v47; // r4@59
  BaseCircuitComponent *v48; // t1@59
  int v49; // r8@60
  int m; // r4@60
  int v51; // r7@61
  int v52; // r0@61
  int v53; // r6@61
  __int64 v54; // r0@67
  int v55; // r1@67
  int v56; // r0@67
  signed int v57; // r2@68
  int v58; // r5@69
  int v59; // r1@69
  int v60; // r0@69
  __int64 v61; // r3@70
  int v62; // r1@75
  int v63; // r1@76
  __int64 v64; // kr48_8@76
  int v65; // r9@76
  int v66; // r8@76
  int v67; // r2@76
  unsigned int v68; // r10@76
  __int64 v69; // kr50_8@76
  unsigned int v70; // r4@76
  int v71; // r0@76
  int v72; // r11@77
  int v73; // r6@77
  int v74; // r1@79
  bool v75; // zf@79
  int v76; // r0@89
  bool v77; // zf@89
  int v78; // r0@92
  int n; // r7@92
  int v80; // r8@94
  __int64 v81; // kr68_8@94
  __int64 v82; // kr70_8@94
  unsigned int v83; // r5@94
  int v84; // r4@94
  __int64 v85; // r0@94
  int v86; // r11@95
  int v87; // r6@95
  bool v88; // zf@97
  int v89; // r7@102
  BaseCircuitComponent *v90; // r2@104
  __int64 v91; // kr58_8@87
  int v92; // r1@87
  int v93; // r5@87
  unsigned int v94; // r11@87
  unsigned int v95; // r6@87
  int v96; // r1@87
  int v97; // r4@112
  int *v98; // r0@112
  int v99; // r10@113
  int v100; // r7@113
  int v101; // r1@115
  bool v102; // zf@115
  int v103; // r5@120
  void **v104; // r4@129
  int v105; // r1@131
  _DWORD *v106; // r5@134
  int v107; // r1@135
  void *v108; // r0@140
  int v109; // [sp+4h] [bp-54h]@15
  int v110; // [sp+8h] [bp-50h]@0
  int v111; // [sp+Ch] [bp-4Ch]@95
  BlockPos *v112; // [sp+10h] [bp-48h]@31
  int v113; // [sp+14h] [bp-44h]@30
  char *v114; // [sp+18h] [bp-40h]@30
  int v115; // [sp+18h] [bp-40h]@76
  __int64 v116; // [sp+1Ch] [bp-3Ch]@1
  unsigned __int64 *v117; // [sp+1Ch] [bp-3Ch]@87
  int v118; // [sp+24h] [bp-34h]@1
  int v119; // [sp+24h] [bp-34h]@94
  int v120; // [sp+24h] [bp-34h]@87
  int v121; // [sp+28h] [bp-30h]@76
  int v122; // [sp+2Ch] [bp-2Ch]@76
  int v123; // [sp+30h] [bp-28h]@76

  v116 = this;
  v1 = *(_QWORD *)HIDWORD(this);
  v118 = *(_DWORD *)(HIDWORD(this) + 8);
  v2 = *(_QWORD *)this;
  v3 = 8976890 * v1 + 981131 * HIDWORD(v1) + v118;
  v4 = v3 % (unsigned int)(*(_QWORD *)this >> 32);
  result = *(_DWORD *)(*(_QWORD *)this + 4 * v4);
  if ( result )
  {
    v6 = *(_DWORD *)result;
    v7 = *(_DWORD *)(*(_DWORD *)result + 20);
    while ( 1 )
    {
      if ( v7 == v3 )
      {
        v8 = *(_DWORD *)(v6 + 4);
        v9 = (_DWORD)v1 == v8;
        if ( (_DWORD)v1 == v8 )
          v9 = HIDWORD(v1) == *(_DWORD *)(v6 + 8);
        if ( v9 && v118 == *(_DWORD *)(v6 + 12) )
          break;
      }
      v10 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
        v7 = *(_DWORD *)(v10 + 20);
        result = v6;
        v6 = *(_DWORD *)v6;
        if ( *(_DWORD *)(v10 + 20) % HIDWORD(v2) == v4 )
          continue;
      return result;
    }
    v11 = result == 0;
    if ( result )
      result = *(_DWORD *)result;
      v11 = result == 0;
    if ( !v11 )
      v12 = *(_DWORD *)(result + 16);
      v109 = *(_DWORD *)(result + 16);
      *(_DWORD *)(result + 16) = 0;
      j_std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
        (unsigned __int64 *)v116,
        SHIDWORD(v116));
      LODWORD(v13) = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 40))(v12);
      if ( v13 == 1129533506 )
        goto LABEL_40;
      v15 = *(_QWORD *)(v116 + 28) >> 32;
      for ( i = *(_QWORD *)(v116 + 28); i != v15; *(_DWORD *)(v116 + 32) = v15 )
        v16 = *(_QWORD *)HIDWORD(v116);
        while ( 1 )
        {
          if ( *(_DWORD *)(i + 8) == (_DWORD)v16 )
          {
            v17 = *(_DWORD *)(i + 12);
            v18 = v17 == HIDWORD(v16);
            if ( v17 == HIDWORD(v16) )
              v18 = *(_DWORD *)(i + 16) == *(_DWORD *)(HIDWORD(v116) + 8);
            if ( v18 )
              break;
          }
          i += 28;
          if ( v15 == i )
            goto LABEL_30;
        }
        if ( i + 28 != v15 )
          v19 = v15 - (i + 28);
          if ( v19 >= 1 )
            v20 = v19 >> 2;
            v21 = i;
            v22 = -1227133513 * v20 + 1;
            do
            {
              --v22;
              v23 = *(_DWORD *)(v21 + 32);
              *(_DWORD *)v21 = *(_DWORD *)(v21 + 28);
              *(_DWORD *)(v21 + 4) = v23;
              *(_DWORD *)(v21 + 8) = *(_DWORD *)(v21 + 36);
              *(_DWORD *)(v21 + 12) = *(_DWORD *)(v21 + 40);
              *(_DWORD *)(v21 + 16) = *(_DWORD *)(v21 + 44);
              *(_QWORD *)(v21 + 20) = *(_QWORD *)(v21 + 48);
              v21 += 28;
            }
            while ( v22 > 1 );
            v15 = *(_DWORD *)(v116 + 32);
        v15 -= 28;
LABEL_30:
      v24 = *(_QWORD *)HIDWORD(v116);
      v114 = *(char **)(HIDWORD(v116) + 8);
      v25 = *(_DWORD *)(v116 + 68);
      v113 = *(_DWORD *)(v116 + 68);
      v26 = *(_DWORD *)(v116 + 72);
      v27 = (unsigned int)(&v114[8976890 * v24] + 981131 * HIDWORD(v24));
      v28 = v27 % *(_DWORD *)(v116 + 72);
      v29 = v28;
      v30 = *(void ****)(v25 + 4 * v28);
      if ( !v30 )
      v31 = *(void ***)(v25 + 4 * v28);
      v112 = *(BlockPos **)(v25 + 4 * v28);
      v32 = *v30;
      v33 = (*v30)[7];
      while ( 1 )
        v34 = v33 == (void *)v27;
        if ( v33 == (void *)v27 )
          v34 = (_DWORD)v24 == (_DWORD)v32[1];
        if ( v34 && (void *)(*(_QWORD *)HIDWORD(v116) >> 32) == v32[2] && v114 == v32[3] )
        v35 = *v32;
        if ( *v32 )
          v33 = (void *)v35[7];
          v31 = v32;
          v32 = (void **)*v32;
          if ( v35[7] % v26 == v28 )
            continue;
      if ( !v31 )
      v104 = (void **)*v31;
      if ( (void **)v112 != v31 )
        if ( *v104 )
          v105 = *((_DWORD *)*v104 + 7) % v26;
          if ( v105 != v29 )
            *(_DWORD *)(v113 + 4 * v105) = v31;
        goto LABEL_140;
      v106 = *v104;
      if ( *v104 )
        v107 = v106[7] % v26;
        if ( v107 == v29 )
LABEL_140:
          *v31 = *v104;
          v108 = v104[4];
          if ( v108 )
            j_operator delete(v108);
          j_operator delete(v104);
          --*(_DWORD *)(v116 + 80);
LABEL_40:
          for ( j = *(_DWORD *)(v116 + 48); j; j = *(_DWORD *)j )
            for ( k = *(_QWORD *)(j + 16); (_DWORD)k != HIDWORD(k); *(_DWORD *)(j + 20) = HIDWORD(k) )
              v38 = *(_QWORD *)HIDWORD(v116);
              while ( 1 )
              {
                if ( *(_DWORD *)(k + 8) == (_DWORD)v38 )
                {
                  v39 = *(_DWORD *)(k + 12);
                  v40 = v39 == HIDWORD(v38);
                  if ( v39 == HIDWORD(v38) )
                    v40 = *(_DWORD *)(k + 16) == *(_DWORD *)(HIDWORD(v116) + 8);
                  if ( v40 )
                    break;
                }
                LODWORD(k) = k + 28;
                if ( HIDWORD(k) == (_DWORD)k )
                  goto LABEL_56;
              }
              if ( (_DWORD)k + 28 != HIDWORD(k) )
                v41 = HIDWORD(k) - (k + 28);
                if ( v41 >= 1 )
                  HIDWORD(k) = v41 >> 2;
                  v42 = k;
                  v43 = -1227133513 * HIDWORD(k) + 1;
                  do
                  {
                    --v43;
                    v44 = *(_DWORD *)(v42 + 32);
                    *(_DWORD *)v42 = *(_DWORD *)(v42 + 28);
                    *(_DWORD *)(v42 + 4) = v44;
                    *(_DWORD *)(v42 + 8) = *(_DWORD *)(v42 + 36);
                    *(_DWORD *)(v42 + 12) = *(_DWORD *)(v42 + 40);
                    *(_DWORD *)(v42 + 16) = *(_DWORD *)(v42 + 44);
                    *(_QWORD *)(v42 + 20) = *(_QWORD *)(v42 + 48);
                    v42 += 28;
                  }
                  while ( v43 > 1 );
                  HIDWORD(k) = *(_DWORD *)(j + 20);
              HIDWORD(k) -= 28;
LABEL_56:
            ;
          v45 = (BaseCircuitComponent **)(*(_QWORD *)(v109 + 4) >> 32);
          for ( l = (BaseCircuitComponent **)*(_QWORD *)(v109 + 4); l != v45; l = (BaseCircuitComponent **)(v47 + 20) )
            v48 = *l;
            v47 = (int)(l + 2);
            j_CircuitSceneGraph::scheduleRelationshipUpdate(__PAIR__(v47, (unsigned int)v116), v48);
            v45 = *(BaseCircuitComponent ***)(v109 + 8);
          v49 = *(_DWORD *)(v116 + 8);
          for ( m = HIDWORD(v116); v49; v49 = *(_DWORD *)v49 )
            v51 = *(_DWORD *)(v49 + 16);
            (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v51 + 48))(*(_DWORD *)(v49 + 16), m, v109);
            v52 = *(_QWORD *)(v51 + 4) >> 32;
            v53 = *(_QWORD *)(v51 + 4);
            while ( v53 != v52 )
              if ( *(_DWORD *)m == *(_DWORD *)(v53 + 8)
                && *(_DWORD *)(m + 4) == *(_DWORD *)(v53 + 12)
                && *(_DWORD *)(m + 8) == *(_DWORD *)(v53 + 16)
                || v109 == *(_DWORD *)v53 )
                LODWORD(v54) = v116;
                HIDWORD(v54) = v49 + 4;
                j_CircuitSceneGraph::scheduleRelationshipUpdate(v54, (BaseCircuitComponent *)v51);
                v55 = *(_DWORD *)(v51 + 8);
                v56 = v53 + 28;
                if ( v53 + 28 != v55 )
                  v57 = v55 - v56;
                  v56 = *(_DWORD *)(v51 + 8);
                  if ( v57 >= 1 )
                    v58 = m;
                    v59 = v53;
                    v60 = -1227133513 * (v57 >> 2) + 1;
                    do
                    {
                      --v60;
                      LODWORD(v61) = *(_DWORD *)(v59 + 28);
                      HIDWORD(v61) = *(_DWORD *)(v59 + 32);
                      *(_QWORD *)v59 = v61;
                      *(_DWORD *)(v59 + 8) = *(_DWORD *)(v59 + 36);
                      *(_DWORD *)(v59 + 12) = *(_DWORD *)(v59 + 40);
                      *(_DWORD *)(v59 + 16) = *(_DWORD *)(v59 + 44);
                      *(_QWORD *)(v59 + 20) = *(_QWORD *)(v59 + 48);
                      v59 += 28;
                    }
                    while ( v60 > 1 );
                    v56 = *(_DWORD *)(v51 + 8);
                    m = v58;
                v52 = v56 - 28;
                *(_DWORD *)(v51 + 8) = v52;
              else
                v53 += 28;
          v62 = 0;
          do
            v115 = v62;
            v63 = 3 * v62;
            v64 = *(_QWORD *)&Facing::DIRECTION[v63 + 1];
            v65 = Facing::DIRECTION[v63] + *(_DWORD *)m;
            v121 = v65;
            v66 = v64 + *(_DWORD *)(m + 4);
            v122 = v66;
            v67 = HIDWORD(v64) + *(_DWORD *)(m + 8);
            v123 = v67;
            v68 = v67 + 8976890 * v65 + 981131 * v66;
            v69 = *(_QWORD *)v116;
            v70 = v68 % (unsigned int)(*(_QWORD *)v116 >> 32);
            v71 = *(_DWORD *)(*(_QWORD *)v116 + 4 * v70);
            if ( v71 )
              v72 = *(_DWORD *)v71;
              v73 = *(_DWORD *)(*(_DWORD *)v71 + 20);
                if ( v73 == v68 )
                  v74 = *(_DWORD *)(v72 + 4);
                  v75 = v65 == v74;
                  if ( v65 == v74 )
                    v75 = v66 == *(_DWORD *)(v72 + 8);
                  if ( v75 && v67 == *(_DWORD *)(v72 + 12) )
                if ( *(_DWORD *)v72 )
                  v73 = *(_DWORD *)(v69 + 20);
                  v71 = v72;
                  v72 = *(_DWORD *)v72;
                  if ( *(_DWORD *)(v69 + 20) % HIDWORD(v69) == v70 )
                    continue;
                goto LABEL_86;
              if ( v71 )
                v76 = *(_DWORD *)v71;
                v77 = v76 == 0;
                if ( v76 )
                  v72 = *(_DWORD *)(v76 + 16);
                  v110 = v72;
                  v77 = v72 == 0;
                if ( !v77 )
                  j_CircuitSceneGraph::scheduleRelationshipUpdate(
                    __PAIR__(&v121, (unsigned int)v116),
                    (BaseCircuitComponent *)v72);
                  v78 = *(_QWORD *)(v72 + 4) >> 32;
                  for ( n = *(_QWORD *)(v72 + 4); n != v78; n += 28 )
                    v80 = *(_DWORD *)(n + 8);
                    v81 = *(_QWORD *)(n + 12);
                    v119 = *(_QWORD *)(n + 12) >> 32;
                    v82 = *(_QWORD *)v116;
                    v83 = 8976890 * v80 + 981131 * v81 + HIDWORD(v81);
                    HIDWORD(v85) = v83 % (unsigned int)(*(_QWORD *)v116 >> 32);
                    v84 = HIDWORD(v85);
                    LODWORD(v85) = *(_DWORD *)(*(_QWORD *)v116 + 4 * HIDWORD(v85));
                    if ( !(_DWORD)v85 )
                      goto LABEL_145;
                    v111 = n;
                    v86 = *(_DWORD *)v85;
                    v87 = *(_DWORD *)(*(_DWORD *)v85 + 20);
                    while ( 1 )
                      if ( v87 == v83 )
                      {
                        HIDWORD(v85) = *(_DWORD *)(v86 + 4);
                        v88 = v80 == HIDWORD(v85);
                        if ( v80 == HIDWORD(v85) )
                        {
                          HIDWORD(v85) = *(_DWORD *)(v86 + 8);
                          v88 = (_DWORD)v81 == HIDWORD(v85);
                        }
                        if ( v88 )
                          HIDWORD(v85) = *(_DWORD *)(v86 + 12);
                          if ( v119 == HIDWORD(v85) )
                            break;
                      }
                      v89 = *(_DWORD *)v86;
                      if ( *(_DWORD *)v86 )
                        v87 = *(_DWORD *)(v89 + 20);
                        HIDWORD(v85) = *(_DWORD *)(v89 + 20) % HIDWORD(v82);
                        LODWORD(v85) = v86;
                        v86 = *(_DWORD *)v86;
                        if ( HIDWORD(v85) == v84 )
                          continue;
                      LODWORD(v85) = v116;
                      v90 = 0;
                      n = v111;
                      v72 = v110;
                      goto LABEL_111;
                    n = v111;
                    v72 = v110;
                    if ( (_DWORD)v85 )
                      HIDWORD(v85) = *(_DWORD *)v85;
                      if ( HIDWORD(v85) )
                        v90 = *(BaseCircuitComponent **)(HIDWORD(v85) + 16);
                      else
                        v90 = 0;
                    else
LABEL_145:
LABEL_111:
                    j_CircuitSceneGraph::scheduleRelationshipUpdate(v85, v90);
                    v78 = *(_DWORD *)(v72 + 8);
LABEL_86:
            m = HIDWORD(v116);
            v62 = v115 + 1;
          while ( v115 + 1 < 6 );
          v91 = *(_QWORD *)HIDWORD(v116);
          v120 = *(_DWORD *)(HIDWORD(v116) + 8);
          v92 = v116 + 124;
          v93 = *(_DWORD *)(v116 + 124);
          v117 = (unsigned __int64 *)v92;
          v94 = *(_DWORD *)(v92 + 4);
          v95 = 8976890 * v91 + 981131 * HIDWORD(v91) + v120;
          v96 = v95 % *(_DWORD *)(v92 + 4);
          v97 = v96;
          v98 = *(int **)(v93 + 4 * v96);
          if ( v98 )
            v99 = *v98;
            v100 = *(_DWORD *)(*v98 + 36);
            while ( 1 )
              if ( v100 == v95 )
                v101 = *(_DWORD *)(v99 + 4);
                v102 = (_DWORD)v91 == v101;
                if ( (_DWORD)v91 == v101 )
                  v102 = HIDWORD(v91) == *(_DWORD *)(v99 + 8);
                if ( v102 && v120 == *(_DWORD *)(v99 + 12) )
                  break;
              v103 = *(_DWORD *)v99;
              if ( *(_DWORD *)v99 )
                v100 = *(_DWORD *)(v103 + 36);
                v98 = (int *)v99;
                v99 = *(_DWORD *)v99;
                if ( *(_DWORD *)(v103 + 36) % v94 == v97 )
                  continue;
              goto LABEL_122;
            if ( v98 && *v98 )
              j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
                v117,
                *v98);
LABEL_122:
          result = v109;
          if ( v109 )
            result = (*(int (**)(void))(*(_DWORD *)v109 + 4))();
          return result;
        *(_DWORD *)(v113 + 4 * v107) = v112;
        v113 = *(_DWORD *)(v116 + 68);
        v112 = *(BlockPos **)(v113 + 4 * v29);
      if ( (BlockPos *)(v116 + 76) == v112 )
        *(_DWORD *)v112 = v106;
      *(_DWORD *)(v113 + 4 * v29) = 0;
      goto LABEL_140;
  }
  return result;
}


int __fastcall CircuitSceneGraph::getBaseComponent(CircuitSceneGraph *this, const BlockPos *a2)
{
  __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r7@2
  int v9; // r1@4
  bool v10; // zf@4
  int result; // r0@11
  bool v12; // zf@12
  int v13; // [sp+0h] [bp-28h]@1

  v2 = *(_QWORD *)a2;
  v13 = *((_DWORD *)a2 + 2);
  v3 = *(_QWORD *)this;
  v4 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v13;
  v5 = v4 % (unsigned int)(*(_QWORD *)this >> 32);
  v6 = *(_DWORD *)(*(_QWORD *)this + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 20);
  while ( 1 )
  {
    if ( v8 == v4 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = (_DWORD)v2 == v9;
      if ( (_DWORD)v2 == v9 )
        v10 = HIDWORD(v2) == *(_DWORD *)(v7 + 8);
      if ( v10 && v13 == *(_DWORD *)(v7 + 12) )
        break;
    }
    if ( *(_DWORD *)v7 )
      v8 = *(_DWORD *)(v3 + 20);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 20) % HIDWORD(v3) == v5 )
        continue;
  }
  v12 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v12 = v6 == 0;
  if ( v12 )
LABEL_11:
    result = 0;
  else
    result = *(_DWORD *)(v6 + 16);
  return result;
}


unsigned int __fastcall CircuitSceneGraph::getFromPendingAdd(CircuitSceneGraph *this, const BlockPos *a2, unsigned __int64 a3)
{
  __int64 v3; // r10@1
  unsigned int v4; // r6@1 OVERLAPPED
  unsigned int v5; // r7@1
  unsigned int v6; // r4@1
  int v7; // r5@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r5@2
  int v11; // r1@4
  bool v12; // zf@4
  int v13; // r9@9
  unsigned int result; // r0@11
  int v15; // r0@13
  bool v16; // zf@13
  int v17; // r5@16
  unsigned int v18; // r1@16
  unsigned int v19; // r6@16
  __int64 v20; // r0@16
  unsigned __int64 v21; // [sp+0h] [bp-30h]@1
  int v22; // [sp+8h] [bp-28h]@1

  v21 = __PAIR__(a3, HIDWORD(a3));
  v3 = *(_QWORD *)a2;
  v22 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(&v4 - 1) = *((_QWORD *)this + 12);
  v5 = 8976890 * v3 + 981131 * HIDWORD(v3) + v22;
  v6 = v5 % (unsigned int)(*((_QWORD *)this + 12) >> 32);
  v8 = *(_DWORD *)(v7 + 4 * v6);
  if ( !v8 )
    goto LABEL_11;
  v9 = *(_DWORD *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)v8 + 36);
  while ( 1 )
  {
    if ( v10 == v5 )
    {
      v11 = *(_DWORD *)(v9 + 4);
      v12 = (_DWORD)v3 == v11;
      if ( (_DWORD)v3 == v11 )
        v12 = HIDWORD(v3) == *(_DWORD *)(v9 + 8);
      if ( v12 && v22 == *(_DWORD *)(v9 + 12) )
        break;
    }
    v13 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
      v10 = *(_DWORD *)(v13 + 36);
      v8 = v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v13 + 36) % v4 == v6 )
        continue;
  }
  v15 = *(_DWORD *)v8;
  v16 = v15 == 0;
  if ( v15 )
    v6 = *(_DWORD *)(v15 + 20);
    v16 = v6 == 0;
  if ( !v16 )
    v17 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)v6 + 40))(v6);
    v19 = v18;
    LODWORD(v20) = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)v6 + 44))(v6);
    v12 = v20 == __PAIR__(v21, HIDWORD(v21));
    result = v6;
    if ( !v12 )
      result = 0;
    if ( v21 == __PAIR__(v17, v19) )
      result = v6;
  else
LABEL_11:
    result = 0;
  return result;
}


int __fastcall CircuitSceneGraph::processPendingUpdates(CircuitSceneGraph *this, BlockSource *a2)
{
  CircuitSceneGraph *v2; // r4@1
  BlockSource *v3; // r5@1
  int result; // r0@1
  int v5; // r6@2
  BaseCircuitComponent *v6; // r2@3
  int i; // r5@6

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 34);
  if ( result )
  {
    result = j_CircuitSceneGraph::removeStaleRelationships(v2);
    v5 = *((_DWORD *)v2 + 33);
    if ( v5 )
    {
      do
      {
        v6 = *(BaseCircuitComponent **)(v5 + 16);
        if ( v6 )
          j_CircuitSceneGraph::findRelationships(v2, (const BlockPos *)(v5 + 24), v6, v3);
        result = j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
                   (unsigned __int64 *)((char *)v2 + 124),
                   v5);
        v5 = result;
      }
      while ( result );
    }
    for ( i = *((_DWORD *)v2 + 2); i; i = *(_DWORD *)i )
      result = (*(int (**)(void))(**(_DWORD **)(i + 16) + 72))();
  }
  return result;
}


int __fastcall CircuitSceneGraph::scheduleRelationshipUpdate(__int64 this, BaseCircuitComponent *a2)
{
  BaseCircuitComponent *v2; // r9@1
  int v3; // r4@1
  int v4; // r5@1
  bool v5; // zf@2
  __int64 v6; // kr00_8@6
  unsigned int v7; // r6@6
  unsigned int v8; // r7@6
  int v9; // r4@6
  int v10; // r11@7
  int v11; // r5@7
  bool v12; // zf@8
  int v13; // r8@14
  bool v14; // zf@20
  _QWORD *v16; // [sp+4h] [bp-5Ch]@6
  int v17; // [sp+8h] [bp-58h]@6
  int v18; // [sp+Ch] [bp-54h]@6
  char v19; // [sp+10h] [bp-50h]@16
  int v20; // [sp+18h] [bp-48h]@16
  int v21; // [sp+1Ch] [bp-44h]@16
  int v22; // [sp+20h] [bp-40h]@16
  BaseCircuitComponent *v23; // [sp+24h] [bp-3Ch]@16
  int v24; // [sp+28h] [bp-38h]@16
  int v25; // [sp+2Ch] [bp-34h]@16
  int v26; // [sp+30h] [bp-30h]@16
  int v27; // [sp+34h] [bp-2Ch]@16

  v2 = a2;
  v3 = HIDWORD(this);
  v4 = this;
  if ( a2 )
  {
    LODWORD(this) = (*(int (__fastcall **)(BaseCircuitComponent *))(*(_DWORD *)a2 + 40))(a2);
    v5 = this == 1129533507;
    if ( this != 1129533507 )
    {
      LODWORD(this) = this ^ 0x43534341 | HIDWORD(this);
      v5 = (_DWORD)this == 0;
    }
    if ( v5 )
      v6 = *(_QWORD *)v3;
      v18 = *(_QWORD *)v3 >> 32;
      v17 = *(_DWORD *)(v3 + 8);
      v16 = (_QWORD *)(v4 + 124);
      v7 = *(_DWORD *)(v4 + 128);
      v8 = 8976890 * *(_QWORD *)v3 + 981131 * v18 + v17;
      v9 = v8 % *(_DWORD *)(v4 + 128);
      LODWORD(this) = *(_DWORD *)(*(_DWORD *)(v4 + 124) + 4 * v9);
      if ( !(_DWORD)this )
        goto LABEL_16;
      v10 = *(_DWORD *)this;
      v11 = *(_DWORD *)(*(_DWORD *)this + 36);
      while ( 1 )
      {
        v12 = v11 == v8;
        if ( v11 == v8 )
          v12 = (_DWORD)v6 == *(_DWORD *)(v10 + 4);
        if ( v12 && v18 == *(_DWORD *)(v10 + 8) && v17 == *(_DWORD *)(v10 + 12) )
          break;
        v13 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
        {
          v11 = *(_DWORD *)(v13 + 36);
          LODWORD(this) = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v13 + 36) % v7 == v9 )
            continue;
        }
      }
      v14 = (_DWORD)this == 0;
      if ( (_DWORD)this )
        LODWORD(this) = *(_DWORD *)this;
        v14 = (_DWORD)this == 0;
      if ( v14 )
LABEL_16:
        v20 = v6;
        v21 = v18;
        v22 = v17;
        v23 = v2;
        v24 = 0;
        v25 = v6;
        v26 = v18;
        v27 = v17;
        j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,CircuitSceneGraph::PendingEntry>>(
          (int *)&v19,
          v16,
          (int)&v20);
        if ( v24 )
          (*(void (**)(void))(*(_DWORD *)v24 + 4))();
        LODWORD(this) = 0;
  }
  return this;
}


PoweredBlockComponent *__fastcall CircuitSceneGraph::addIfPoweredBlockAt(CircuitSceneGraph *this, BlockSource *a2, const BlockPos *a3)
{
  CircuitSceneGraph *v3; // r9@1
  const BlockPos *v4; // r7@1
  BlockSource *v5; // r4@1
  PoweredBlockComponent *v6; // r4@2
  Block *v7; // r5@3
  int v8; // r0@3
  int v9; // r8@3
  int v10; // r6@3
  int v11; // r0@3
  int v13; // [sp+0h] [bp-38h]@6
  int v14; // [sp+8h] [bp-30h]@6
  int v15; // [sp+Ch] [bp-2Ch]@6
  int v16; // [sp+10h] [bp-28h]@6
  PoweredBlockComponent *v17; // [sp+14h] [bp-24h]@6
  unsigned __int8 v18; // [sp+18h] [bp-20h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  j_BlockSource::getBlockID((BlockSource *)&v18, a2, (int)a3);
  if ( v18 == *(_BYTE *)(Block::mAir + 4) )
  {
    v6 = 0;
  }
  else
    v7 = (Block *)Block::mBlocks[v18];
    v8 = (*(int (__fastcall **)(_DWORD, BlockSource *, const BlockPos *))(*(_DWORD *)v7 + 192))(
           Block::mBlocks[v18],
           v5,
           v4);
    v9 = v8;
    v10 = v8 & 0x800000;
    v11 = j_Block::isSolid(v7);
    if ( v10 || !(v11 ^ 1) )
    {
      v6 = (PoweredBlockComponent *)j_operator new(0x30u);
      j_PoweredBlockComponent::PoweredBlockComponent(v6, 0xFFu);
      v14 = *(_DWORD *)v4;
      v15 = *((_DWORD *)v4 + 1);
      v16 = *((_DWORD *)v4 + 2);
      v17 = v6;
      j_std::_Hashtable<BlockPos,std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>,std::allocator<std::pair<BlockPos const,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,std::unique_ptr<BaseCircuitComponent,std::default_delete<BaseCircuitComponent>>>>(
        &v13,
        v3,
        (int)&v14);
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      v17 = 0;
      if ( v10 )
        *((_BYTE *)v6 + 41) = 1;
      if ( v9 & 0x400000 )
        *((_BYTE *)v6 + 44) = 0;
    }
    else
      v6 = 0;
  return v6;
}


int __fastcall CircuitSceneGraph::invalidatePos(CircuitSceneGraph *this, const BlockPos *a2)
{
  int v2; // r8@1
  int v3; // r10@1
  unsigned int v4; // r4@1
  unsigned int v5; // r11@1
  int v6; // r0@1
  int v7; // r7@2
  int v8; // r5@2
  int v9; // r1@4
  bool v10; // zf@4
  int v11; // r6@9
  int v12; // r1@11
  int v13; // r3@11
  int i; // r5@11
  unsigned int v15; // r6@13
  int v16; // r0@13
  int v17; // r11@13
  int v18; // r8@13
  unsigned int v19; // r7@13
  int v20; // r4@13
  int result; // r0@13
  int v22; // r10@14
  int v23; // r5@14
  int v24; // r1@16
  bool v25; // zf@16
  BaseCircuitComponent *v26; // r2@20
  int v27; // r9@21
  bool v28; // zf@26
  BaseCircuitComponent *v29; // r4@29
  int v30; // r11@29
  int v31; // r7@32
  int v32; // r9@32
  __int64 v33; // kr30_8@32
  unsigned int v34; // r4@32
  unsigned int v35; // r5@32
  int v36; // r0@32
  int v37; // r10@33
  int v38; // r8@33
  bool v39; // zf@34
  int v40; // r7@40
  BaseCircuitComponent *v41; // r2@42
  bool v42; // zf@45
  bool v43; // zf@49
  int v44; // r9@52
  int v45; // r6@53 OVERLAPPED
  int v46; // r11@54
  unsigned int v47; // r10@54
  int v48; // r5@56 OVERLAPPED
  int v49; // r8@56
  unsigned int v50; // r7@56
  int v51; // r0@56
  int v52; // r11@57
  int v53; // r9@57
  int v54; // r5@57
  bool v55; // zf@58
  int v56; // r6@64
  BaseCircuitComponent *v57; // r2@66
  int v58; // r0@71
  BaseCircuitComponent *v59; // [sp+0h] [bp-50h]@29
  int v60; // [sp+8h] [bp-48h]@32
  const BlockPos *v61; // [sp+Ch] [bp-44h]@1
  __int64 v62; // [sp+Ch] [bp-44h]@57
  CircuitSceneGraph *v63; // [sp+14h] [bp-3Ch]@1
  int v64; // [sp+18h] [bp-38h]@1
  int v65; // [sp+18h] [bp-38h]@13
  int v66; // [sp+18h] [bp-38h]@56
  int v67; // [sp+1Ch] [bp-34h]@1
  int v68; // [sp+1Ch] [bp-34h]@13
  int v69; // [sp+1Ch] [bp-34h]@32
  int v70; // [sp+1Ch] [bp-34h]@56
  int v71; // [sp+20h] [bp-30h]@13
  int v72; // [sp+24h] [bp-2Ch]@13
  int v73; // [sp+28h] [bp-28h]@13

  v61 = a2;
  v63 = this;
  v2 = *(_QWORD *)a2 >> 32;
  v3 = *(_QWORD *)a2;
  v4 = *((_DWORD *)this + 1);
  v67 = *((_DWORD *)a2 + 2);
  v64 = *(_DWORD *)this;
  v5 = 8976890 * v3 + 981131 * v2 + v67;
  v6 = *(_DWORD *)(*(_DWORD *)this + 4 * (v5 % v4));
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 20);
  while ( 1 )
  {
    if ( v8 == v5 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = v3 == v9;
      if ( v3 == v9 )
        v10 = v2 == *(_DWORD *)(v7 + 8);
      if ( v10 && v67 == *(_DWORD *)(v7 + 12) )
        break;
    }
    v11 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
      v8 = *(_DWORD *)(v11 + 20);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v11 + 20) % v4 == v5 % v4 )
        continue;
  }
  v43 = v6 == 0;
  if ( v6 )
    v6 = *(_DWORD *)v6;
    v43 = v6 == 0;
  if ( !v43 && (v44 = *(_DWORD *)(v6 + 16)) != 0 )
    result = *(_QWORD *)(v44 + 4) >> 32;
    v45 = *(_QWORD *)(v44 + 4);
    if ( v45 != result )
      v46 = v64;
      v47 = v4;
      while ( 1 )
      {
        v48 = v45 + 8;
        v49 = *(_DWORD *)(v45 + 8);
        v66 = *(_DWORD *)(v45 + 16);
        v70 = *(_DWORD *)(v45 + 12);
        v50 = v66 + 8976890 * v49 + 981131 * v70;
        v51 = *(_DWORD *)(v46 + 4 * (v50 % v47));
        if ( v51 )
        {
          v62 = *(_QWORD *)(&v45 - 1);
          v52 = v44;
          v53 = *(_DWORD *)v51;
          v54 = *(_DWORD *)(*(_DWORD *)v51 + 20);
          while ( 1 )
          {
            v55 = v54 == v50;
            if ( v54 == v50 )
              v55 = v49 == *(_DWORD *)(v53 + 4);
            if ( v55 && v70 == *(_DWORD *)(v53 + 8) && v66 == *(_DWORD *)(v53 + 12) )
              break;
            v56 = *(_DWORD *)v53;
            if ( *(_DWORD *)v53 )
            {
              v54 = *(_DWORD *)(v56 + 20);
              v51 = v53;
              v53 = *(_DWORD *)v53;
              if ( *(_DWORD *)(v56 + 20) % v47 == v50 % v47 )
                continue;
            }
            v57 = 0;
            v44 = v52;
            *(_QWORD *)(&v45 - 1) = v62;
            goto LABEL_68;
          }
          *(_QWORD *)(&v45 - 1) = v62;
          v44 = v52;
          if ( v51 )
            v58 = *(_DWORD *)v51;
            v57 = (BaseCircuitComponent *)(v58 ? *(_DWORD *)(v58 + 16) : 0);
          else
        }
        else
          v57 = 0;
LABEL_68:
        j_CircuitSceneGraph::scheduleRelationshipUpdate(__PAIR__(v48, (unsigned int)v63), v57);
        v45 += 28;
        result = *(_DWORD *)(v44 + 8);
        if ( v45 == result )
          break;
        v47 = *(_QWORD *)v63 >> 32;
        v46 = *(_QWORD *)v63;
      }
  else
LABEL_11:
    v12 = 0;
    v13 = v67;
    for ( i = v64; ; i = *(_QWORD *)v63 )
      v65 = v12;
      v15 = v4;
      v16 = *(_QWORD *)&Facing::DIRECTION[3 * v12 + 1] >> 32;
      v17 = Facing::DIRECTION[3 * v12] + v3;
      v18 = v2 + *(_QWORD *)&Facing::DIRECTION[3 * v12 + 1];
      v71 = v17;
      v72 = v18;
      v68 = v16 + v13;
      v73 = v16 + v13;
      v19 = 8976890 * v17 + 981131 * v18 + v16 + v13;
      v20 = v19 % v4;
      result = *(_DWORD *)(i + 4 * v20);
      if ( result )
        v22 = *(_DWORD *)result;
        v23 = *(_DWORD *)(*(_DWORD *)result + 20);
        while ( 1 )
          if ( v23 == v19 )
            v24 = *(_DWORD *)(v22 + 4);
            v25 = v17 == v24;
            if ( v17 == v24 )
              v25 = v18 == *(_DWORD *)(v22 + 8);
            if ( v25 )
              v26 = (BaseCircuitComponent *)v68;
              if ( v68 == *(_DWORD *)(v22 + 12) )
                break;
          v27 = *(_DWORD *)v22;
          if ( *(_DWORD *)v22 )
            v23 = *(_DWORD *)(v27 + 20);
            result = v22;
            v22 = *(_DWORD *)v22;
            if ( *(_DWORD *)(v27 + 20) % v15 == v20 )
              continue;
          goto LABEL_23;
        if ( result )
          result = *(_DWORD *)result;
          v28 = result == 0;
          if ( result )
            v26 = *(BaseCircuitComponent **)(result + 16);
            v28 = v26 == 0;
          if ( !v28 )
            v29 = v26;
            v59 = v26;
            j_CircuitSceneGraph::scheduleRelationshipUpdate(__PAIR__(&v71, (unsigned int)v63), v26);
            result = *(_QWORD *)((char *)v29 + 4) >> 32;
            v30 = *(_QWORD *)((char *)v29 + 4);
            while ( v30 != result )
              v31 = v30 + 8;
              v32 = *(_DWORD *)(v30 + 8);
              v69 = *(_DWORD *)(v30 + 12);
              v60 = *(_DWORD *)(v30 + 16);
              v33 = *(_QWORD *)v63;
              v34 = 8976890 * v32 + 981131 * v69 + v60;
              v35 = v34 % (unsigned int)(*(_QWORD *)v63 >> 32);
              v36 = *(_DWORD *)(*(_QWORD *)v63 + 4 * v35);
              if ( v36 )
              {
                v37 = *(_DWORD *)v36;
                v38 = *(_DWORD *)(*(_DWORD *)v36 + 20);
                while ( 1 )
                {
                  v39 = v38 == v34;
                  if ( v38 == v34 )
                    v39 = v32 == *(_DWORD *)(v37 + 4);
                  if ( v39 && v69 == *(_DWORD *)(v37 + 8) && v60 == *(_DWORD *)(v37 + 12) )
                    break;
                  v40 = *(_DWORD *)v37;
                  if ( *(_DWORD *)v37 )
                  {
                    v38 = *(_DWORD *)(v40 + 20);
                    v36 = v37;
                    v37 = *(_DWORD *)v37;
                    if ( *(_DWORD *)(v40 + 20) % HIDWORD(v33) == v35 )
                      continue;
                  }
                  goto LABEL_42;
                }
                v42 = v36 == 0;
                if ( v36 )
                  v36 = *(_DWORD *)v36;
                  v42 = v36 == 0;
                if ( v42 )
LABEL_42:
                  v41 = 0;
                  goto LABEL_43;
                v41 = *(BaseCircuitComponent **)(v36 + 16);
LABEL_43:
                v31 = v30 + 8;
              }
              else
                v41 = 0;
              j_CircuitSceneGraph::scheduleRelationshipUpdate(__PAIR__(v31, (unsigned int)v63), v41);
              v30 += 28;
              result = *((_DWORD *)v59 + 2);
LABEL_23:
      v12 = v65 + 1;
      if ( v65 == 5 )
      v2 = *(_QWORD *)v61 >> 32;
      v3 = *(_QWORD *)v61;
      v13 = *((_DWORD *)v61 + 2);
      v4 = *(_QWORD *)v63 >> 32;
  return result;
}


int __fastcall CircuitSceneGraph::PendingEntry::PendingEntry(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r1@1
  int v6; // r0@1

  v3 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v4 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v5 = *a3;
  *a3 = 0;
  v6 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v3 + 4) = v5;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 8) = *(_DWORD *)v4;
  *(_DWORD *)(v3 + 12) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(v3 + 16) = *(_DWORD *)(v4 + 8);
  return v3;
}


int __fastcall CircuitSceneGraph::getComponent(CircuitSceneGraph *this, const BlockPos *a2, unsigned __int64 a3)
{
  __int64 v3; // r10@1
  unsigned int v4; // r6@1 OVERLAPPED
  unsigned int v5; // r7@1
  unsigned int v6; // r4@1
  int v7; // r0@1
  int v8; // r8@2
  int v9; // r5@2
  int v10; // r1@4
  bool v11; // zf@4
  int v12; // r9@9
  int v13; // r6@11
  int v15; // r0@16
  int v16; // r4@17
  int v17; // r5@17
  unsigned int v18; // r1@17
  unsigned int v19; // r7@17
  __int64 v20; // r0@17
  unsigned __int64 v21; // [sp+0h] [bp-30h]@2
  int v22; // [sp+8h] [bp-28h]@1

  v3 = *(_QWORD *)a2;
  v22 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(&v4 - 1) = *(_QWORD *)this;
  v5 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v22;
  v6 = v5 % (unsigned int)(*(_QWORD *)this >> 32);
  v7 = *(_DWORD *)(*(_QWORD *)this + 4 * v6);
  if ( v7 )
  {
    v21 = __PAIR__(a3, HIDWORD(a3));
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 20);
    while ( 1 )
    {
      if ( v9 == v5 )
      {
        v10 = *(_DWORD *)(v8 + 4);
        v11 = (_DWORD)v3 == v10;
        if ( (_DWORD)v3 == v10 )
          v11 = HIDWORD(v3) == *(_DWORD *)(v8 + 8);
        if ( v11 && v22 == *(_DWORD *)(v8 + 12) )
          break;
      }
      v12 = *(_DWORD *)v8;
      if ( !*(_DWORD *)v8 )
        return 0;
      v9 = *(_DWORD *)(v12 + 20);
      v7 = v8;
      v8 = *(_DWORD *)v8;
      if ( *(_DWORD *)(v12 + 20) % v4 != v6 )
    }
    if ( v7 )
      v15 = *(_DWORD *)v7;
      v13 = 0;
      if ( v15 )
        v16 = *(_DWORD *)(v15 + 16);
        v17 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 40))(*(_DWORD *)(v15 + 16));
        v19 = v18;
        LODWORD(v20) = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 44))(v16);
        if ( v20 == __PAIR__(v21, HIDWORD(v21)) )
          v13 = v16;
        if ( v21 == __PAIR__(v17, v19) )
    else
  }
  else
    v13 = 0;
  return v13;
}


int __fastcall CircuitSceneGraph::update(CircuitSceneGraph *this, BlockSource *a2)
{
  CircuitSceneGraph *v2; // r4@1
  BlockSource *v3; // r8@1
  __int64 v4; // kr00_8@1
  int v5; // r5@2
  __int64 v6; // r0@3
  int v7; // r0@3
  int v8; // r7@3
  int v9; // r10@5
  int v10; // r7@5
  int v11; // r1@6
  int v12; // r0@6
  int v13; // r0@10
  int result; // r0@13
  int v15; // r6@14
  BaseCircuitComponent *v16; // r2@15
  int i; // r5@18

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 19);
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = v4 + 20;
    do
    {
      LODWORD(v6) = v2;
      HIDWORD(v6) = v4 + 8;
      j_CircuitSceneGraph::removeComponent(v6);
      v7 = *((_DWORD *)v2 + 39);
      v8 = v4 + 20;
      if ( v5 != v7 )
      {
        v8 = *((_DWORD *)v2 + 39);
        if ( v7 - v5 >= 1 )
        {
          v9 = v4;
          v10 = -858993459 * ((HIDWORD(v4) - v5) >> 2) + 1;
          do
          {
            v11 = *(_DWORD *)(v9 + 24);
            *(_DWORD *)(v9 + 24) = 0;
            v12 = *(_DWORD *)(v9 + 4);
            *(_DWORD *)(v9 + 4) = v11;
            if ( v12 )
              (*(void (**)(void))(*(_DWORD *)v12 + 4))();
            --v10;
            *(_DWORD *)v9 = *(_DWORD *)(v9 + 20);
            *(_DWORD *)(v9 + 8) = *(_DWORD *)(v9 + 28);
            *(_DWORD *)(v9 + 12) = *(_DWORD *)(v9 + 32);
            *(_DWORD *)(v9 + 16) = *(_DWORD *)(v9 + 36);
            v9 += 20;
          }
          while ( v10 > 1 );
          v8 = *((_DWORD *)v2 + 39);
        }
      }
      *((_DWORD *)v2 + 39) = v8 - 20;
      v13 = *(_DWORD *)(v8 - 16);
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      *(_DWORD *)(v8 - 16) = 0;
    }
    while ( (_DWORD)v4 != *((_DWORD *)v2 + 39) );
  }
  j_CircuitSceneGraph::processPendingAdds(v2);
  result = *((_DWORD *)v2 + 34);
  if ( result )
    result = j_CircuitSceneGraph::removeStaleRelationships(v2);
    v15 = *((_DWORD *)v2 + 33);
    if ( v15 )
      do
        v16 = *(BaseCircuitComponent **)(v15 + 16);
        if ( v16 )
          j_CircuitSceneGraph::findRelationships(v2, (const BlockPos *)(v15 + 24), v16, v3);
        result = j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::erase(
                   (unsigned __int64 *)((char *)v2 + 124),
                   v15);
        v15 = result;
      while ( result );
    for ( i = *((_DWORD *)v2 + 2); i; i = *(_DWORD *)i )
      result = (*(int (**)(void))(**(_DWORD **)(i + 16) + 72))();
  return result;
}


int __fastcall CircuitSceneGraph::CircuitSceneGraph(double a1)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  double v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6
  double v8; // r0@7
  int v9; // r6@9
  void *v10; // r5@9
  double v11; // r0@10
  int v12; // r6@12
  void *v13; // r5@12
  unsigned int v14; // r0@13
  int v15; // r6@15
  void *v16; // r5@15

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
    v4 = j_operator new(4 * LODWORD(v2));
    j___aeabi_memclr4_0((int)v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 28) = 0;
  *(_DWORD *)(v1 + 32) = 0;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 48) = 0;
  *(_DWORD *)(v1 + 52) = 0;
  *(_DWORD *)(v1 + 56) = 1065353216;
  LODWORD(v2) = v1 + 56;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v2)));
  *(_DWORD *)(v1 + 44) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
    *(_DWORD *)(v1 + 64) = 0;
    v7 = (void *)(v1 + 64);
    if ( LODWORD(v5) >= 0x40000000 )
    v6 = 4 * LODWORD(v5);
    v7 = j_operator new(4 * LODWORD(v5));
    j___aeabi_memclr4_0((int)v7, v6);
  *(_DWORD *)(v1 + 40) = v7;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 84) = 1065353216;
  LODWORD(v5) = v1 + 84;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v8 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v5)));
  *(_DWORD *)(v1 + 72) = LODWORD(v8);
  if ( LODWORD(v8) == 1 )
    *(_DWORD *)(v1 + 92) = 0;
    v10 = (void *)(v1 + 92);
    if ( LODWORD(v8) >= 0x40000000 )
    v9 = 4 * LODWORD(v8);
    v10 = j_operator new(4 * LODWORD(v8));
    j___aeabi_memclr4_0((int)v10, v9);
  *(_DWORD *)(v1 + 68) = v10;
  *(_DWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_DWORD *)(v1 + 112) = 1065353216;
  LODWORD(v8) = v1 + 112;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v11 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v8)));
  *(_DWORD *)(v1 + 100) = LODWORD(v11);
  if ( LODWORD(v11) == 1 )
    *(_DWORD *)(v1 + 120) = 0;
    v13 = (void *)(v1 + 120);
    if ( LODWORD(v11) >= 0x40000000 )
    v12 = 4 * LODWORD(v11);
    v13 = j_operator new(4 * LODWORD(v11));
    j___aeabi_memclr4_0((int)v13, v12);
  *(_DWORD *)(v1 + 96) = v13;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 136) = 0;
  *(_DWORD *)(v1 + 140) = 1065353216;
  LODWORD(v11) = v1 + 140;
  *(_DWORD *)(LODWORD(v11) + 4) = 0;
  v14 = sub_21E6254(v11);
  *(_DWORD *)(v1 + 128) = v14;
  if ( v14 == 1 )
    *(_DWORD *)(v1 + 148) = 0;
    v16 = (void *)(v1 + 148);
    if ( v14 >= 0x40000000 )
    v15 = 4 * v14;
    v16 = j_operator new(4 * v14);
    j___aeabi_memclr4_0((int)v16, v15);
  *(_DWORD *)(v1 + 124) = v16;
  *(_DWORD *)(v1 + 152) = 0;
  *(_DWORD *)(v1 + 156) = 0;
  *(_DWORD *)(v1 + 160) = 0;
  return v1;
}


int __fastcall CircuitSceneGraph::PendingEntry::PendingEntry(int result, const BlockPos *a2, BaseCircuitComponent *a3)
{
  __int64 v3; // r2@1
  int v4; // r1@1

  *(_QWORD *)result = (unsigned int)a3;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  v3 = *(_QWORD *)a2;
  v4 = *((_DWORD *)a2 + 2);
  *(_QWORD *)(result + 8) = v3;
  *(_DWORD *)(result + 16) = v4;
  return result;
}


int __fastcall CircuitSceneGraph::isPendingAdd(CircuitSceneGraph *this, const BlockPos *a2)
{
  __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r7@2
  int v9; // r1@4
  bool v10; // zf@4
  int result; // r0@11
  int v12; // [sp+0h] [bp-28h]@1

  v2 = *(_QWORD *)a2;
  v12 = *((_DWORD *)a2 + 2);
  v3 = *((_QWORD *)this + 12);
  v4 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v12;
  v5 = v4 % (unsigned int)(*((_QWORD *)this + 12) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_11;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 36);
  while ( 1 )
  {
    if ( v8 == v4 )
    {
      v9 = *(_DWORD *)(v7 + 4);
      v10 = (_DWORD)v2 == v9;
      if ( (_DWORD)v2 == v9 )
        v10 = HIDWORD(v2) == *(_DWORD *)(v7 + 8);
      if ( v10 && v12 == *(_DWORD *)(v7 + 12) )
        break;
    }
    if ( *(_DWORD *)v7 )
      v8 = *(_DWORD *)(v3 + 36);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 36) % HIDWORD(v3) == v5 )
        continue;
  }
  if ( v6 )
    result = *(_DWORD *)v6 != 0;
  else
LABEL_11:
    result = 0;
  return result;
}


CircuitSceneGraph *__fastcall CircuitSceneGraph::~CircuitSceneGraph(CircuitSceneGraph *this)
{
  CircuitSceneGraph *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int v4; // r0@2
  int v5; // r5@8
  int v6; // r0@9
  int v7; // r6@9
  char *v8; // r0@12
  int v9; // r5@15
  int v10; // r0@16
  int v11; // r6@16
  char *v12; // r0@19
  int v13; // r5@22
  void *v14; // r0@23
  int v15; // r6@23
  char *v16; // r0@26
  int v17; // r5@29
  void *v18; // r0@30
  int v19; // r6@30
  char *v20; // r0@33
  void *v21; // r0@36
  int v22; // r5@38
  int v23; // r0@39
  int v24; // r6@39
  char *v25; // r0@42

  v1 = this;
  *(_QWORD *)&v2 = *((_QWORD *)this + 19);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 )
        (*(void (**)(void))(*(_DWORD *)v4 + 4))();
      *(_DWORD *)(v2 + 4) = 0;
      v2 += 20;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 38);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  v5 = *((_DWORD *)v1 + 33);
  if ( v5 )
      v6 = *(_DWORD *)(v5 + 20);
      v7 = *(_DWORD *)v5;
      if ( v6 )
        (*(void (**)(void))(*(_DWORD *)v6 + 4))();
      j_operator delete((void *)v5);
      v5 = v7;
    while ( v7 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 124), 4 * (*(_QWORD *)((char *)v1 + 124) >> 32));
  *((_DWORD *)v1 + 33) = 0;
  *((_DWORD *)v1 + 34) = 0;
  v8 = (char *)*((_DWORD *)v1 + 31);
  if ( v8 && (char *)v1 + 148 != v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 26);
  if ( v9 )
      v10 = *(_DWORD *)(v9 + 20);
      v11 = *(_DWORD *)v9;
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      j_operator delete((void *)v9);
      v9 = v11;
    while ( v11 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 12), 4 * (*((_QWORD *)v1 + 12) >> 32));
  *((_DWORD *)v1 + 26) = 0;
  *((_DWORD *)v1 + 27) = 0;
  v12 = (char *)*((_DWORD *)v1 + 24);
  if ( v12 && (char *)v1 + 120 != v12 )
    j_operator delete(v12);
  v13 = *((_DWORD *)v1 + 19);
  if ( v13 )
      v14 = *(void **)(v13 + 16);
      v15 = *(_DWORD *)v13;
      if ( v14 )
        j_operator delete(v14);
      j_operator delete((void *)v13);
      v13 = v15;
    while ( v15 );
  j___aeabi_memclr4_0(*(_QWORD *)((char *)v1 + 68), 4 * (*(_QWORD *)((char *)v1 + 68) >> 32));
  *((_DWORD *)v1 + 19) = 0;
  *((_DWORD *)v1 + 20) = 0;
  v16 = (char *)*((_DWORD *)v1 + 17);
  if ( v16 && (char *)v1 + 92 != v16 )
    j_operator delete(v16);
  v17 = *((_DWORD *)v1 + 12);
  if ( v17 )
      v18 = *(void **)(v17 + 16);
      v19 = *(_DWORD *)v17;
      if ( v18 )
        j_operator delete(v18);
      j_operator delete((void *)v17);
      v17 = v19;
    while ( v19 );
  j___aeabi_memclr4_0(*((_QWORD *)v1 + 5), 4 * (*((_QWORD *)v1 + 5) >> 32));
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  v20 = (char *)*((_DWORD *)v1 + 10);
  if ( v20 && (char *)v1 + 64 != v20 )
    j_operator delete(v20);
  v21 = (void *)*((_DWORD *)v1 + 7);
  if ( v21 )
    j_operator delete(v21);
  v22 = *((_DWORD *)v1 + 2);
  if ( v22 )
      v23 = *(_DWORD *)(v22 + 16);
      v24 = *(_DWORD *)v22;
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      j_operator delete((void *)v22);
      v22 = v24;
    while ( v24 );
  j___aeabi_memclr4_0(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v25 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v25 )
    j_operator delete(v25);
  return v1;
}


int __fastcall CircuitSceneGraph::removeStaleRelationships(CircuitSceneGraph *this)
{
  int result; // r0@1
  int v2; // r8@4
  int v3; // r11@4
  unsigned int v4; // r6@4
  __int64 v5; // kr00_8@4
  int v6; // r0@4
  int v7; // r9@5
  int v8; // r4@5
  int v9; // r1@7
  bool v10; // zf@7
  int v11; // r10@12
  bool v12; // zf@15
  int v13; // r0@18
  int v14; // r6@18
  __int64 v15; // kr08_8@18
  __int64 v16; // kr10_8@21
  __int64 v17; // kr18_8@21
  unsigned int v18; // r7@21
  unsigned int v19; // r5@21
  int v20; // r0@21
  int v21; // r9@22
  int v22; // r4@22
  int v23; // r1@24
  bool v24; // zf@24
  int v25; // r6@29
  bool v26; // zf@32
  int v27; // r2@35
  int v28; // r1@35
  int v29; // r0@35
  signed int v30; // r2@36
  int v31; // r1@37
  int v32; // r0@37
  int v33; // r7@38
  int v34; // [sp+0h] [bp-48h]@18
  int v35; // [sp+4h] [bp-44h]@18
  int v36; // [sp+8h] [bp-40h]@21
  CircuitSceneGraph *v37; // [sp+Ch] [bp-3Ch]@1
  int v38; // [sp+10h] [bp-38h]@4
  int v39; // [sp+14h] [bp-34h]@4
  int v40; // [sp+14h] [bp-34h]@21
  int v41; // [sp+18h] [bp-30h]@4
  int v42; // [sp+1Ch] [bp-2Ch]@4
  int v43; // [sp+20h] [bp-28h]@4

  v37 = this;
  for ( result = *((_DWORD *)this + 33); result; result = *(_DWORD *)v38 )
  {
    v2 = *(_DWORD *)(result + 24);
    v41 = v2;
    v3 = *(_DWORD *)(result + 28);
    v42 = v3;
    v38 = result;
    v39 = *(_DWORD *)(result + 32);
    v43 = v39;
    v4 = v39 + 8976890 * v2 + 981131 * v3;
    v5 = *(_QWORD *)((char *)v37 + 68);
    v6 = *(_DWORD *)(v5 + 4 * (v4 % HIDWORD(v5)));
    if ( v6 )
    {
      v7 = *(_DWORD *)v6;
      v8 = *(_DWORD *)(*(_DWORD *)v6 + 28);
      while ( 1 )
      {
        if ( v8 == v4 )
        {
          v9 = *(_DWORD *)(v7 + 4);
          v10 = v2 == v9;
          if ( v2 == v9 )
            v10 = v3 == *(_DWORD *)(v7 + 8);
          if ( v10 && v39 == *(_DWORD *)(v7 + 12) )
            break;
        }
        v11 = *(_DWORD *)v7;
        if ( *(_DWORD *)v7 )
          v8 = *(_DWORD *)(v11 + 28);
          v6 = v7;
          v7 = *(_DWORD *)v7;
          if ( *(_DWORD *)(v11 + 28) % HIDWORD(v5) == v4 % HIDWORD(v5) )
            continue;
        goto LABEL_2;
      }
      v12 = v6 == 0;
      if ( v6 )
        v6 = *(_DWORD *)v6;
        v12 = v6 == 0;
      if ( !v12 )
        v34 = v6;
        v15 = *(_QWORD *)(v6 + 16);
        v13 = *(_QWORD *)(v6 + 16) >> 32;
        v14 = v15;
        v35 = v13;
        while ( v14 != v13 )
          v36 = v14;
          v16 = *(_QWORD *)(v14 + 8);
          v40 = *(_DWORD *)(v14 + 16);
          v17 = *(_QWORD *)v37;
          v18 = 8976890 * v16 + 981131 * HIDWORD(v16) + v40;
          v19 = v18 % (unsigned int)(*(_QWORD *)v37 >> 32);
          v20 = *(_DWORD *)(*(_QWORD *)v37 + 4 * v19);
          if ( !v20 )
            goto LABEL_19;
          v21 = *(_DWORD *)v20;
          v22 = *(_DWORD *)(*(_DWORD *)v20 + 20);
          while ( 1 )
          {
            if ( v22 == v18 )
            {
              v23 = *(_DWORD *)(v21 + 4);
              v24 = (_DWORD)v16 == v23;
              if ( (_DWORD)v16 == v23 )
                v24 = HIDWORD(v16) == *(_DWORD *)(v21 + 8);
              if ( v24 && v40 == *(_DWORD *)(v21 + 12) )
                break;
            }
            v25 = *(_DWORD *)v21;
            if ( *(_DWORD *)v21 )
              v22 = *(_DWORD *)(v25 + 20);
              v20 = v21;
              v21 = *(_DWORD *)v21;
              if ( *(_DWORD *)(v25 + 20) % HIDWORD(v17) == v19 )
                continue;
          }
          v26 = v20 == 0;
          if ( v20 )
            v20 = *(_DWORD *)v20;
            v26 = v20 == 0;
          if ( v26 )
LABEL_19:
            v13 = v35;
            v14 = v36 + 28;
          else
            v27 = *(_DWORD *)(v38 + 16);
            (*(void (**)(void))(**(_DWORD **)(v20 + 16) + 48))();
            v14 = v36;
            v28 = *(_DWORD *)(v34 + 20);
            v29 = v36 + 28;
            if ( v36 + 28 != v28 )
              v30 = v28 - v29;
              v29 = *(_DWORD *)(v34 + 20);
              if ( v30 >= 1 )
              {
                v31 = v36;
                v32 = -1227133513 * (v30 >> 2) + 1;
                do
                {
                  --v32;
                  v33 = *(_DWORD *)(v31 + 32);
                  *(_DWORD *)v31 = *(_DWORD *)(v31 + 28);
                  *(_DWORD *)(v31 + 4) = v33;
                  *(_DWORD *)(v31 + 8) = *(_DWORD *)(v31 + 36);
                  *(_DWORD *)(v31 + 12) = *(_DWORD *)(v31 + 40);
                  *(_DWORD *)(v31 + 16) = *(_DWORD *)(v31 + 44);
                  *(_QWORD *)(v31 + 20) = *(_QWORD *)(v31 + 48);
                  v31 += 28;
                }
                while ( v32 > 1 );
                v29 = *(_DWORD *)(v34 + 20);
              }
            v35 = v29 - 28;
            *(_DWORD *)(v34 + 20) = v29 - 28;
            v13 = v29 - 28;
    }
LABEL_2:
    ;
  }
  return result;
}


int __fastcall CircuitSceneGraph::add(int a1, int a2, int *a3)
{
  int v3; // r8@1
  int v4; // r11@1
  int *v5; // r9@1
  int v6; // r2@1
  _QWORD *v7; // r10@1
  unsigned int v8; // r7@1
  unsigned int v9; // r4@1
  int v10; // r5@1
  unsigned int *v11; // r0@1
  unsigned int v12; // r9@2
  int v13; // r6@2
  int v14; // r1@4
  bool v15; // zf@4
  unsigned int v16; // r10@9
  int v17; // r0@12
  int result; // r0@14
  bool v19; // zf@16
  __int64 v20; // r0@19
  __int64 v21; // r0@22
  int v22; // r1@27
  int v23; // [sp+0h] [bp-60h]@1
  unsigned __int64 v24; // [sp+4h] [bp-5Ch]@2
  int v25; // [sp+Ch] [bp-54h]@1
  char v26; // [sp+10h] [bp-50h]@12
  int v27; // [sp+18h] [bp-48h]@12
  int v28; // [sp+1Ch] [bp-44h]@12
  int v29; // [sp+20h] [bp-40h]@12
  int v30; // [sp+24h] [bp-3Ch]@12
  int v31; // [sp+28h] [bp-38h]@12
  int v32; // [sp+2Ch] [bp-34h]@12
  int v33; // [sp+30h] [bp-30h]@12
  int v34; // [sp+34h] [bp-2Ch]@12

  v23 = a2;
  v3 = *(_QWORD *)a2 >> 32;
  v4 = *(_QWORD *)a2;
  v5 = a3;
  v6 = *(_DWORD *)(a2 + 8);
  v25 = v6;
  v7 = (_QWORD *)(a1 + 96);
  v8 = *(_DWORD *)(a1 + 100);
  v9 = 8976890 * v4 + 981131 * v3 + v6;
  v10 = v9 % *(_DWORD *)(a1 + 100);
  v11 = *(unsigned int **)(*(_DWORD *)(a1 + 96) + 4 * v10);
  if ( !v11 )
    goto LABEL_12;
  v24 = __PAIR__((unsigned int)v5, (unsigned int)v7);
  v12 = *v11;
  v13 = *(_DWORD *)(*v11 + 36);
  while ( 1 )
  {
    if ( v13 == v9 )
    {
      v14 = *(_DWORD *)(v12 + 4);
      v15 = v4 == v14;
      if ( v4 == v14 )
        v15 = v3 == *(_DWORD *)(v12 + 8);
      if ( v15 && v6 == *(_DWORD *)(v12 + 12) )
        break;
    }
    v16 = *(_DWORD *)v12;
    if ( *(_DWORD *)v12 )
      v13 = *(_DWORD *)(v16 + 36);
      v11 = (unsigned int *)v12;
      v12 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v16 + 36) % v8 == v10 )
        continue;
    v5 = (int *)HIDWORD(v24);
    v7 = (_QWORD *)v24;
  }
  v19 = v11 == 0;
  v5 = (int *)HIDWORD(v24);
  v7 = (_QWORD *)v24;
  if ( v11 )
    v9 = *v11;
    v19 = *v11 == 0;
  if ( v19 )
  LODWORD(v20) = (*(int (**)(void))(**(_DWORD **)(v9 + 20) + 40))();
  if ( v20 != 1129533506 )
    LODWORD(v21) = (*(int (**)(void))(**(_DWORD **)HIDWORD(v24) + 40))();
    if ( v21 == 1129533506 )
      result = *(_BYTE *)(*(_DWORD *)HIDWORD(v24) + 41);
      if ( !*(_BYTE *)(*(_DWORD *)HIDWORD(v24) + 41) )
        return result;
      result = *(_DWORD *)(v9 + 20);
      goto LABEL_25;
    v3 = *(_QWORD *)v23 >> 32;
    v4 = *(_QWORD *)v23;
    v25 = *(_DWORD *)(v23 + 8);
LABEL_12:
    v17 = *v5;
    *v5 = 0;
    v27 = v4;
    v28 = v3;
    v29 = v25;
    v30 = 0;
    v31 = v17;
    v32 = v4;
    v33 = v3;
    v34 = v25;
    j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>,std::allocator<std::pair<BlockPos const,CircuitSceneGraph::PendingEntry>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,CircuitSceneGraph::PendingEntry>>(
      (int *)&v26,
      v7,
      (int)&v27);
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    result = 0;
    v31 = 0;
    return result;
  result = *(_DWORD *)(v9 + 20);
  if ( *(_BYTE *)(result + 41) )
LABEL_25:
  *(_DWORD *)(v9 + 20) = 0;
  if ( result )
    (*(void (**)(void))(*(_DWORD *)result + 4))();
  v22 = *(_DWORD *)HIDWORD(v24);
  *(_DWORD *)HIDWORD(v24) = 0;
  *(_DWORD *)(v9 + 20) = v22;
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CircuitSceneGraph::processPendingRemoves(CircuitSceneGraph *this)
{
  CircuitSceneGraph *v1; // r4@1
  int result; // r0@1
  __int64 v3; // kr00_8@1
  int v4; // r11@2
  __int64 v5; // r0@3
  int v6; // r0@3
  int v7; // r6@3
  int v8; // r7@5
  int v9; // r6@5
  int v10; // r1@6
  int v11; // r0@6
  int v12; // r0@10

  v1 = this;
  v3 = *((_QWORD *)this + 19);
  result = *((_QWORD *)this + 19) >> 32;
  if ( (_DWORD)v3 != result )
  {
    v4 = v3 + 20;
    do
    {
      LODWORD(v5) = v1;
      HIDWORD(v5) = v3 + 8;
      j_CircuitSceneGraph::removeComponent(v5);
      v6 = *((_DWORD *)v1 + 39);
      v7 = v3 + 20;
      if ( v4 != v6 )
      {
        v7 = *((_DWORD *)v1 + 39);
        if ( v6 - v4 >= 1 )
        {
          v8 = v3;
          v9 = -858993459 * ((v6 - v4) >> 2) + 1;
          do
          {
            v10 = *(_DWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 24) = 0;
            v11 = *(_DWORD *)(v8 + 4);
            *(_DWORD *)(v8 + 4) = v10;
            if ( v11 )
              (*(void (**)(void))(*(_DWORD *)v11 + 4))();
            --v9;
            *(_DWORD *)v8 = *(_DWORD *)(v8 + 20);
            *(_DWORD *)(v8 + 8) = *(_DWORD *)(v8 + 28);
            *(_DWORD *)(v8 + 12) = *(_DWORD *)(v8 + 32);
            *(_DWORD *)(v8 + 16) = *(_DWORD *)(v8 + 36);
            v8 += 20;
          }
          while ( v9 > 1 );
          v7 = *((_DWORD *)v1 + 39);
        }
      }
      *((_DWORD *)v1 + 39) = v7 - 20;
      v12 = *(_DWORD *)(v7 - 16);
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
      *(_DWORD *)(v7 - 16) = 0;
      result = *((_DWORD *)v1 + 39);
    }
    while ( (_DWORD)v3 != result );
  }
  return result;
}


int __fastcall CircuitSceneGraph::PendingEntry::PendingEntry(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r0@1

  v2 = a1;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v3 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  v4 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(v3 + 4) = 0;
  v5 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(v2 + 4) = v4;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *(_DWORD *)v2 = *(_DWORD *)v3;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 16);
  return v2;
}


void __fastcall CircuitSceneGraph::findRelationships(CircuitSceneGraph *this, const BlockPos *a2, BaseCircuitComponent *a3, BlockSource *a4)
{
  const BlockPos *v4; // r7@1
  BaseCircuitComponent *v5; // r8@1
  void *v6; // r2@2
  void *v7; // r3@2
  __int64 v8; // kr00_8@2
  __int64 v9; // kr08_8@2
  unsigned int v10; // r4@2 OVERLAPPED
  void *v11; // r6@2
  int v12; // r0@2
  unsigned int v13; // r5@4
  void *v14; // t1@5
  __int64 v15; // r9@7
  int v16; // r6@7
  int v17; // r4@7
  unsigned int v18; // r1@7
  unsigned int v19; // r5@7
  __int64 v20; // kr10_8@7
  unsigned int v21; // r9@7
  int v22; // r7@7
  int v23; // r0@7
  int v24; // r5@8
  int v25; // r6@8
  int v26; // r1@10
  bool v27; // zf@10
  int v28; // r8@15
  __int64 v29; // r8@19
  __int64 v30; // kr18_8@19
  unsigned int v31; // r7@19
  unsigned int v32; // r6@19
  int v33; // r0@19
  int v34; // r10@20
  int v35; // r5@20
  int v36; // r1@22
  bool v37; // zf@22
  BaseCircuitComponent *v38; // r5@29
  int v39; // r8@29
  int v40; // r9@29 OVERLAPPED
  int v41; // r10@29 OVERLAPPED
  int v42; // r4@29
  int v43; // r6@29
  int v44; // r7@29
  char v45; // r11@29
  int v46; // r0@30
  __int16 v47; // r2@31
  int v48; // r3@31
  __int16 v49; // r2@31
  int v50; // r3@31
  int v51; // r0@31
  int v52; // r0@34
  __int16 v53; // r2@34
  int v54; // r3@34
  __int16 v55; // r2@34
  int v56; // r3@34
  int v57; // r0@35
  bool v58; // zf@36
  bool v59; // zf@44
  int v60; // r0@45
  int v61; // r4@47
  int v62; // r5@47
  int v63; // r1@47
  int v64; // r6@47
  __int64 v65; // r0@47
  bool v66; // zf@47
  bool v67; // zf@53
  int v68; // r0@54
  int v69; // r4@56
  int v70; // r5@56
  int v71; // r1@56
  int v72; // r6@56
  __int64 v73; // r0@56
  bool v74; // zf@56
  int v75; // r5@62
  int v76; // r0@63
  int v77; // r6@64
  int v78; // r7@64
  int v79; // r1@64
  int v80; // r8@64
  __int64 v81; // r0@64
  int v82; // r4@64
  unsigned int v83; // r9@64
  int v84; // r0@70
  int v85; // r5@71
  int v86; // r1@71
  __int64 v87; // r6@71
  __int64 v88; // r0@71
  int v89; // r0@71
  int v90; // r2@80
  int v91; // r3@80
  int v92; // r7@80
  int v93; // r2@80
  int v94; // r3@80
  int v95; // r7@80
  int v96; // r5@80
  int v97; // r2@80
  int v98; // r3@80
  int v99; // r7@80
  int v100; // r2@80
  int v101; // r3@80
  int v102; // r7@80
  int v103; // r2@80
  int v104; // r3@80
  signed int v105; // r4@84
  __int64 v106; // r0@85
  signed int v107; // r9@86
  int v108; // r2@88
  bool v109; // zf@89
  int v110; // r0@90
  int v111; // r1@94
  int v112; // r0@94
  int v113; // r2@94
  int v114; // r5@94
  unsigned int v115; // r6@94
  __int64 v116; // kr60_8@94
  unsigned int v117; // r7@94
  int v118; // r8@95
  int v119; // r9@95
  int v120; // r1@97
  bool v121; // zf@97
  int v122; // r11@102
  int v123; // r10@107
  unsigned int v124; // r4@107
  __int64 v125; // kr68_8@108
  unsigned int v126; // r6@108
  int v127; // r0@108
  int v128; // r8@109
  int v129; // r5@109
  int v130; // r0@111
  bool v131; // zf@111
  __int64 v132; // r10@120
  int v133; // r0@121
  int v134; // r1@121
  int v135; // r2@122
  int v136; // r0@124
  _DWORD *v137; // r3@126
  int v138; // r8@126
  __int64 v139; // r6@126
  unsigned int v140; // r4@126
  unsigned int v141; // r6@126 OVERLAPPED
  unsigned int v142; // r7@126
  int v143; // r0@126
  int v144; // r11@127
  int v145; // r5@127
  bool v146; // zf@128
  int v147; // r10@134
  bool v148; // zf@140
  __int64 v149; // r0@147
  unsigned int v150; // r6@149
  __int64 v151; // kr78_8@149
  unsigned int v152; // r7@149
  int v153; // r10@150
  int v154; // r4@150
  int v155; // r1@152
  bool v156; // zf@152
  int v157; // r5@157
  __int64 v158; // ST00_8@159
  __int64 v159; // ST00_8@159
  __int64 v160; // ST00_8@159
  __int64 v161; // ST00_8@159
  unsigned int v162; // r6@160
  __int64 v163; // kr80_8@160
  unsigned int v164; // r7@160
  int v165; // r10@161
  int v166; // r4@161
  int v167; // r1@163
  bool v168; // zf@163
  int v169; // r5@168
  __int64 v170; // ST00_8@170
  __int64 v171; // ST00_8@170
  __int64 v172; // ST00_8@170
  __int64 v173; // ST00_8@170
  __int64 v174; // r0@172
  __int64 v175; // ST00_8@173
  __int64 v176; // ST00_8@173
  __int64 v177; // ST00_8@173
  __int64 v178; // ST00_8@173
  __int64 v179; // ST00_8@173
  __int64 v180; // ST00_8@173
  __int64 v181; // ST00_8@173
  __int64 v182; // ST00_8@173
  unsigned int v183; // r6@174
  int v184; // r7@174
  int v185; // r0@174
  int v186; // r11@175
  int v187; // r5@175
  int v188; // r1@177
  bool v189; // zf@177
  int v190; // r10@182
  unsigned int v191; // r6@186
  int v192; // r0@186
  int v193; // r10@187
  int v194; // r5@187
  int v195; // r1@189
  bool v196; // zf@189
  int v197; // r4@194
  bool v198; // zf@203
  __int64 v199; // ST00_8@206
  __int64 v200; // ST00_8@206
  __int64 v201; // ST00_8@206
  __int64 v202; // ST00_8@206
  void *v203; // r0@208
  unsigned int v204; // r4@209
  unsigned int v205; // r5@210
  void *v206; // t1@211
  int v207; // [sp+14h] [bp-1D4h]@85
  BlockSource *v208; // [sp+30h] [bp-1B8h]@1
  int v209; // [sp+34h] [bp-1B4h]@35
  int v210; // [sp+38h] [bp-1B0h]@80
  char v211; // [sp+3Ch] [bp-1ACh]@7
  int v212; // [sp+3Ch] [bp-1ACh]@80
  unsigned __int64 v213; // [sp+40h] [bp-1A8h]@7
  int v214; // [sp+40h] [bp-1A8h]@80
  __int64 v215; // [sp+44h] [bp-1A4h]@127
  int v216; // [sp+48h] [bp-1A0h]@7
  unsigned __int64 v217; // [sp+4Ch] [bp-19Ch]@7
  __int64 v218; // [sp+50h] [bp-198h]@126
  BaseCircuitComponent *v219; // [sp+54h] [bp-194h]@7
  CircuitSceneGraph *v220; // [sp+58h] [bp-190h]@1
  const BlockPos *v221; // [sp+5Ch] [bp-18Ch]@7
  int v222; // [sp+5Ch] [bp-18Ch]@94
  int v223; // [sp+5Ch] [bp-18Ch]@107
  int v224; // [sp+5Ch] [bp-18Ch]@126
  int v225; // [sp+5Ch] [bp-18Ch]@187
  int v226; // [sp+60h] [bp-188h]@7
  int v227; // [sp+60h] [bp-188h]@19
  int v228; // [sp+60h] [bp-188h]@94
  int v229; // [sp+60h] [bp-188h]@126
  int v230; // [sp+64h] [bp-184h]@94
  int v231; // [sp+68h] [bp-180h]@94
  int v232; // [sp+6Ch] [bp-17Ch]@94
  int v233; // [sp+70h] [bp-178h]@80
  int v234; // [sp+74h] [bp-174h]@80
  int v235; // [sp+78h] [bp-170h]@80
  int v236; // [sp+7Ch] [bp-16Ch]@80
  int v237; // [sp+80h] [bp-168h]@80
  int v238; // [sp+84h] [bp-164h]@80
  int v239; // [sp+88h] [bp-160h]@80
  int v240; // [sp+8Ch] [bp-15Ch]@80
  int v241; // [sp+90h] [bp-158h]@80
  int v242; // [sp+94h] [bp-154h]@80
  int v243; // [sp+98h] [bp-150h]@80
  int v244; // [sp+9Ch] [bp-14Ch]@80
  int v245; // [sp+A0h] [bp-148h]@80
  int v246; // [sp+A4h] [bp-144h]@80
  int v247; // [sp+A8h] [bp-140h]@80
  int v248; // [sp+ACh] [bp-13Ch]@80
  int v249; // [sp+B0h] [bp-138h]@80
  int v250; // [sp+B4h] [bp-134h]@80
  int v251; // [sp+B8h] [bp-130h]@80
  int v252; // [sp+BCh] [bp-12Ch]@80
  int v253; // [sp+C0h] [bp-128h]@80
  int v254; // [sp+C4h] [bp-124h]@80
  int v255; // [sp+C8h] [bp-120h]@80
  int v256; // [sp+CCh] [bp-11Ch]@80
  int v257; // [sp+D0h] [bp-118h]@80
  int v258; // [sp+D4h] [bp-114h]@80
  int v259; // [sp+D8h] [bp-110h]@80
  int v260; // [sp+DCh] [bp-10Ch]@80
  int v261; // [sp+E0h] [bp-108h]@80
  int v262; // [sp+E4h] [bp-104h]@80
  int v263; // [sp+E8h] [bp-100h]@80
  int v264; // [sp+ECh] [bp-FCh]@80
  int v265; // [sp+F0h] [bp-F8h]@80
  int v266; // [sp+F4h] [bp-F4h]@80
  int v267; // [sp+F8h] [bp-F0h]@80
  char v268; // [sp+100h] [bp-E8h]@17
  __int64 v269; // [sp+108h] [bp-E0h]@17
  int v270; // [sp+110h] [bp-D8h]@17
  void *v271; // [sp+114h] [bp-D4h]@17
  int v272; // [sp+118h] [bp-D0h]@17
  int v273; // [sp+11Ch] [bp-CCh]@17
  __int16 v274; // [sp+121h] [bp-C7h]@31
  char v275; // [sp+123h] [bp-C5h]@31
  int v276; // [sp+124h] [bp-C4h]@31
  __int16 v277; // [sp+128h] [bp-C0h]@31
  char v278; // [sp+12Ah] [bp-BEh]@31
  int v279; // [sp+12Bh] [bp-BDh]@31
  __int16 v280; // [sp+12Fh] [bp-B9h]@31
  char v281; // [sp+131h] [bp-B7h]@31
  int v282; // [sp+132h] [bp-B6h]@31
  __int16 v283; // [sp+136h] [bp-B2h]@31
  char v284; // [sp+138h] [bp-B0h]@31
  int v285; // [sp+139h] [bp-AFh]@31
  __int16 v286; // [sp+13Dh] [bp-ABh]@31
  char v287; // [sp+13Fh] [bp-A9h]@31
  void *v288; // [sp+140h] [bp-A8h]@1
  int v289; // [sp+144h] [bp-A4h]@2
  void *v290; // [sp+148h] [bp-A0h]@2
  void *v291; // [sp+14Ch] [bp-9Ch]@2
  __int64 v292; // [sp+150h] [bp-98h]@2
  __int64 v293; // [sp+158h] [bp-90h]@2
  __int64 v294; // [sp+160h] [bp-88h]@2
  void *ptr; // [sp+168h] [bp-80h]@1
  int v296; // [sp+16Ch] [bp-7Ch]@2
  void *v297; // [sp+170h] [bp-78h]@2
  void *v298; // [sp+174h] [bp-74h]@2
  __int64 v299; // [sp+178h] [bp-70h]@2
  __int64 v300; // [sp+180h] [bp-68h]@2
  __int64 v301; // [sp+188h] [bp-60h]@2
  int v302; // [sp+194h] [bp-54h]@126
  int v303; // [sp+198h] [bp-50h]@126
  int v304; // [sp+19Ch] [bp-4Ch]@126
  int v305; // [sp+1A0h] [bp-48h]@173
  int v306; // [sp+1A4h] [bp-44h]@173
  int v307; // [sp+1A8h] [bp-40h]@173
  int v308; // [sp+1ACh] [bp-3Ch]@174
  int v309; // [sp+1B0h] [bp-38h]@174
  int v310; // [sp+1B4h] [bp-34h]@174
  int v311; // [sp+1B8h] [bp-30h]@149
  int v312; // [sp+1BCh] [bp-2Ch]@149
  int v313; // [sp+1C0h] [bp-28h]@149

  v4 = a2;
  v220 = this;
  v208 = a4;
  v5 = a3;
  j___aeabi_memclr8_0((int)&v288, 40);
  j_std::_Deque_base<CircuitTrackingInfo,std::allocator<CircuitTrackingInfo>>::_M_initialize_map((int)&v288, 0);
  j___aeabi_memclr8_0((int)&ptr, 40);
  j_std::_Deque_base<CircuitTrackingInfo,std::allocator<CircuitTrackingInfo>>::_M_initialize_map((int)&ptr, 0);
  if ( v288 )
  {
    v6 = v297;
    v7 = v298;
    v8 = v299;
    v299 = v292;
    v297 = v290;
    v298 = v291;
    v290 = v6;
    v291 = v7;
    v292 = v8;
    v9 = v300;
    *(_QWORD *)(&v10 - 1) = v301;
    v301 = v294;
    v300 = v293;
    v293 = v9;
    v294 = *(_QWORD *)(&v10 - 1);
    v11 = ptr;
    ptr = v288;
    v288 = v11;
    v12 = v296;
    v296 = v289;
    v289 = v12;
    if ( v11 )
    {
      if ( HIDWORD(v8) < v10 + 4 )
      {
        v13 = HIDWORD(v8) - 4;
        do
        {
          v14 = *(void **)(v13 + 4);
          v13 += 4;
          j_operator delete(v14);
        }
        while ( v13 < v10 );
      }
      j_operator delete(v11);
    }
  }
  v15 = *(_QWORD *)v4;
  v16 = *((_DWORD *)v4 + 2);
  v17 = (*(int (__fastcall **)(BaseCircuitComponent *))(*(_DWORD *)v5 + 40))(v5);
  v19 = v18;
  v211 = (*(int (__fastcall **)(BaseCircuitComponent *))(*(_DWORD *)v5 + 12))(v5);
  v213 = __PAIR__(HIDWORD(v15), (unsigned int)v15);
  v216 = v16;
  v217 = __PAIR__(v17, v19);
  v219 = v5;
  v20 = *(_QWORD *)v4;
  v221 = v4;
  v226 = *((_DWORD *)v4 + 2);
  v21 = 8976890 * *(_QWORD *)v4 + 981131 * (*(_QWORD *)v4 >> 32) + v226;
  v22 = v21 % *((_DWORD *)v220 + 18);
  v23 = *(_DWORD *)(*((_DWORD *)v220 + 17) + 4 * v22);
  if ( !v23 )
    goto LABEL_17;
  v24 = *(_DWORD *)v23;
  v25 = *(_DWORD *)(*(_DWORD *)v23 + 28);
  while ( 1 )
    if ( v25 == v21 )
      v26 = *(_DWORD *)(v24 + 4);
      v27 = (_DWORD)v20 == v26;
      if ( (_DWORD)v20 == v26 )
        v27 = HIDWORD(v20) == *(_DWORD *)(v24 + 8);
      if ( v27 && v226 == *(_DWORD *)(v24 + 12) )
        break;
    v28 = *(_DWORD *)v24;
    if ( *(_DWORD *)v24 )
      v25 = *(_DWORD *)(v28 + 28);
      v23 = v24;
      v24 = *(_DWORD *)v24;
      if ( *(_DWORD *)(v28 + 28) % *((_DWORD *)v220 + 18) == v22 )
        continue;
  v58 = v23 == 0;
  if ( v23 )
    v58 = *(_DWORD *)v23 == 0;
  if ( v58 )
LABEL_17:
    v269 = v20;
    v270 = v226;
    v273 = 0;
    v271 = 0;
    v272 = 0;
    j_std::_Hashtable<BlockPos,std::pair<BlockPos const,CircuitComponentList>,std::allocator<std::pair<BlockPos const,CircuitComponentList>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::pair<BlockPos,CircuitComponentList>>(
      (int *)&v268,
      (CircuitSceneGraph *)((char *)v220 + 68),
      (int)&v269);
    if ( v271 )
      j_operator delete(v271);
  v29 = *(_QWORD *)v221;
  v227 = *((_DWORD *)v221 + 2);
  v30 = *(_QWORD *)((char *)v220 + 68);
  v31 = 8976890 * v29 + 981131 * HIDWORD(v29) + v227;
  v32 = v31 % (unsigned int)(*(_QWORD *)((char *)v220 + 68) >> 32);
  v33 = *(_DWORD *)(v30 + 4 * v32);
  if ( v33 )
    v34 = *(_DWORD *)v33;
    v35 = *(_DWORD *)(*(_DWORD *)v33 + 28);
    while ( 1 )
      if ( v35 == v31 )
        v36 = *(_DWORD *)(v34 + 4);
        v37 = (_DWORD)v29 == v36;
        if ( (_DWORD)v29 == v36 )
          v37 = HIDWORD(v29) == *(_DWORD *)(v34 + 8);
        if ( v37 && v227 == *(_DWORD *)(v34 + 12) )
          break;
      if ( *(_DWORD *)v34 )
        v35 = *(_DWORD *)(v30 + 28);
        v33 = v34;
        v34 = *(_DWORD *)v34;
        if ( *(_DWORD *)(v30 + 28) % HIDWORD(v30) == v32 )
          continue;
      goto LABEL_29;
    v38 = v219;
    v40 = HIDWORD(v217);
    v41 = v217;
    v42 = v216;
    v43 = HIDWORD(v213);
    v44 = v213;
    v45 = v211;
    if ( v33 )
      v39 = *(_DWORD *)v33;
    else
      v39 = 0;
  else
LABEL_29:
    v39 = 0;
  v46 = v300;
  if ( (_DWORD)v300 == (_DWORD)v301 - 144 )
    if ( (unsigned int)(v296 - ((HIDWORD(v301) - (signed int)ptr) >> 2)) <= 1 )
      j_std::deque<CircuitTrackingInfo,std::allocator<CircuitTrackingInfo>>::_M_reallocate_map((int)&ptr, 1u, 0);
    *(_DWORD *)(HIDWORD(v301) + 4) = j_operator new(0x1B0u);
    v52 = v300;
    *(_DWORD *)v300 = v38;
    *(_DWORD *)(v52 + 4) = v44;
    *(_DWORD *)(v52 + 8) = v43;
    *(_DWORD *)(v52 + 12) = v42;
    *(_BYTE *)(v52 + 16) = v45;
    v53 = v286;
    v54 = v285;
    *(_BYTE *)(v52 + 23) = v287;
    *(_WORD *)(v52 + 21) = v53;
    *(_DWORD *)(v52 + 17) = v54;
    *(_QWORD *)(v52 + 24) = *(_QWORD *)&v40;
    *(_DWORD *)(v52 + 32) = v38;
    *(_DWORD *)(v52 + 36) = v44;
    *(_DWORD *)(v52 + 40) = v43;
    *(_DWORD *)(v52 + 44) = v42;
    *(_BYTE *)(v52 + 48) = v45;
    *(_BYTE *)(v52 + 55) = v284;
    *(_WORD *)(v52 + 53) = v283;
    *(_DWORD *)(v52 + 49) = v282;
    *(_QWORD *)(v52 + 56) = *(_QWORD *)&v40;
    *(_DWORD *)(v52 + 64) = v38;
    *(_DWORD *)(v52 + 68) = v44;
    *(_DWORD *)(v52 + 72) = v43;
    *(_DWORD *)(v52 + 76) = v42;
    *(_BYTE *)(v52 + 80) = v45;
    *(_BYTE *)(v52 + 87) = v281;
    *(_WORD *)(v52 + 85) = v280;
    *(_DWORD *)(v52 + 81) = v279;
    *(_QWORD *)(v52 + 88) = *(_QWORD *)&v40;
    *(_DWORD *)(v52 + 96) = v38;
    *(_DWORD *)(v52 + 100) = v44;
    *(_DWORD *)(v52 + 104) = v43;
    *(_DWORD *)(v52 + 108) = v42;
    *(_BYTE *)(v52 + 112) = v45;
    v55 = v277;
    v56 = v276;
    *(_BYTE *)(v52 + 119) = v278;
    *(_WORD *)(v52 + 117) = v55;
    *(_DWORD *)(v52 + 113) = v56;
    *(_QWORD *)(v52 + 120) = *(_QWORD *)&v40;
    *(_DWORD *)(v52 + 128) = 0;
    *(_BYTE *)(v52 + 132) = 1;
    LOWORD(v56) = v274;
    *(_BYTE *)(v52 + 135) = v275;
    *(_WORD *)(v52 + 133) = v56;
    *(_DWORD *)(v52 + 136) = 0;
    HIDWORD(v301) += 4;
    v51 = *(_DWORD *)HIDWORD(v301);
    HIDWORD(v300) = v51;
    LODWORD(v301) = v51 + 432;
    *(_DWORD *)(v46 + 4) = v44;
    *(_DWORD *)(v46 + 8) = v43;
    *(_DWORD *)(v46 + 12) = v42;
    *(_BYTE *)(v46 + 16) = v45;
    v47 = v286;
    v48 = v285;
    *(_BYTE *)(v46 + 23) = v287;
    *(_WORD *)(v46 + 21) = v47;
    *(_DWORD *)(v46 + 17) = v48;
    *(_QWORD *)(v46 + 24) = *(_QWORD *)&v40;
    *(_DWORD *)(v46 + 32) = v38;
    *(_DWORD *)(v46 + 36) = v44;
    *(_DWORD *)(v46 + 40) = v43;
    *(_DWORD *)(v46 + 44) = v42;
    *(_BYTE *)(v46 + 48) = v45;
    *(_BYTE *)(v46 + 55) = v284;
    *(_WORD *)(v46 + 53) = v283;
    *(_DWORD *)(v46 + 49) = v282;
    *(_QWORD *)(v46 + 56) = *(_QWORD *)&v40;
    *(_DWORD *)(v46 + 64) = v38;
    *(_DWORD *)(v46 + 68) = v44;
    *(_DWORD *)(v46 + 72) = v43;
    *(_DWORD *)(v46 + 76) = v42;
    *(_BYTE *)(v46 + 80) = v45;
    *(_BYTE *)(v46 + 87) = v281;
    *(_WORD *)(v46 + 85) = v280;
    *(_DWORD *)(v46 + 81) = v279;
    *(_QWORD *)(v46 + 88) = *(_QWORD *)&v40;
    *(_DWORD *)(v46 + 96) = v38;
    *(_DWORD *)(v46 + 100) = v44;
    *(_DWORD *)(v46 + 104) = v43;
    *(_DWORD *)(v46 + 108) = v42;
    *(_BYTE *)(v46 + 112) = v45;
    v49 = v277;
    v50 = v276;
    *(_BYTE *)(v46 + 119) = v278;
    *(_WORD *)(v46 + 117) = v49;
    *(_DWORD *)(v46 + 113) = v50;
    *(_QWORD *)(v46 + 120) = *(_QWORD *)&v40;
    *(_DWORD *)(v46 + 128) = 0;
    *(_BYTE *)(v46 + 132) = 1;
    LOWORD(v50) = v274;
    *(_BYTE *)(v46 + 135) = v275;
    *(_WORD *)(v46 + 133) = v50;
    *(_DWORD *)(v46 + 136) = 0;
    v51 = v300 + 144;
  LODWORD(v300) = v51;
  v209 = v39 + 16;
  v57 = (int)v297;
  do
    v233 = *(_DWORD *)v57;
    v234 = *(_DWORD *)(v57 + 4);
    v235 = *(_DWORD *)(v57 + 8);
    v236 = *(_DWORD *)(v57 + 12);
    v90 = *(_DWORD *)(v57 + 20);
    v91 = *(_DWORD *)(v57 + 24);
    v92 = *(_DWORD *)(v57 + 28);
    v237 = *(_DWORD *)(v57 + 16);
    v238 = v90;
    v239 = v91;
    v240 = v92;
    v241 = *(_DWORD *)(v57 + 32);
    v242 = *(_DWORD *)(v57 + 36);
    v243 = *(_DWORD *)(v57 + 40);
    v244 = *(_DWORD *)(v57 + 44);
    v93 = *(_DWORD *)(v57 + 52);
    v94 = *(_DWORD *)(v57 + 56);
    v95 = *(_DWORD *)(v57 + 60);
    v245 = *(_DWORD *)(v57 + 48);
    v246 = v93;
    v247 = v94;
    v248 = v95;
    v96 = *(_DWORD *)(v57 + 64);
    v249 = *(_DWORD *)(v57 + 64);
    v250 = *(_DWORD *)(v57 + 68);
    v210 = v250;
    v251 = *(_DWORD *)(v57 + 72);
    v212 = v251;
    v214 = *(_DWORD *)(v57 + 76);
    v252 = *(_DWORD *)(v57 + 76);
    v97 = *(_DWORD *)(v57 + 84);
    v98 = *(_DWORD *)(v57 + 88);
    v99 = *(_DWORD *)(v57 + 92);
    v253 = *(_DWORD *)(v57 + 80);
    v254 = v97;
    v255 = v98;
    v256 = v99;
    v257 = *(_DWORD *)(v57 + 96);
    v258 = *(_DWORD *)(v57 + 100);
    v259 = *(_DWORD *)(v57 + 104);
    v260 = *(_DWORD *)(v57 + 108);
    v100 = *(_DWORD *)(v57 + 116);
    v101 = *(_DWORD *)(v57 + 120);
    v102 = *(_DWORD *)(v57 + 124);
    v261 = *(_DWORD *)(v57 + 112);
    v262 = v100;
    v263 = v101;
    v264 = v102;
    v103 = *(_DWORD *)(v57 + 132);
    v104 = *(_DWORD *)(v57 + 136);
    v265 = *(_DWORD *)(v57 + 128);
    v266 = v103;
    v267 = v104;
    if ( v57 == (_DWORD)v299 - 144 )
      j_operator delete(v298);
      HIDWORD(v299) += 4;
      v298 = (void *)*(_DWORD *)HIDWORD(v299);
      LODWORD(v299) = (char *)v298 + 432;
      v297 = v298;
      v96 = v249;
      v210 = v250;
      v212 = v251;
      v214 = v252;
      v297 = (void *)(v57 + 144);
    if ( !v96 )
      goto LABEL_207;
    v105 = v265;
    (*(void (__fastcall **)(int))(*(_DWORD *)v96 + 12))(v96);
    if ( v105 > 15 )
    LODWORD(v106) = (*(int (__fastcall **)(int))(*(_DWORD *)v96 + 40))(v96);
    v207 = v96;
    if ( v106 == 1129533506 )
      v107 = 0;
    else if ( v208 )
      v108 = 0;
      do
        v222 = v108;
        v111 = Facing::DIRECTION[3 * v108];
        v112 = *(_QWORD *)&Facing::DIRECTION[3 * v108 + 1] >> 32;
        v113 = *(_QWORD *)&Facing::DIRECTION[3 * v108 + 1];
        v114 = v111 + v210;
        v230 = v111 + v210;
        v231 = v113 + v212;
        v228 = v214 + v112;
        v232 = v214 + v112;
        v115 = 8976890 * (v111 + v210) + 981131 * (v113 + v212) + v214 + v112;
        v116 = *(_QWORD *)v220;
        v117 = v115 % (unsigned int)(*(_QWORD *)v220 >> 32);
        v110 = *(_DWORD *)(*(_QWORD *)v220 + 4 * v117);
        if ( !v110 )
          goto LABEL_104;
        v118 = *(_DWORD *)v110;
        v119 = *(_DWORD *)(*(_DWORD *)v110 + 20);
        while ( 1 )
          if ( v119 == v115 )
          {
            v120 = *(_DWORD *)(v118 + 4);
            v121 = v114 == v120;
            if ( v114 == v120 )
              v121 = v113 + v212 == *(_DWORD *)(v118 + 8);
            if ( v121 && v228 == *(_DWORD *)(v118 + 12) )
              break;
          }
          v122 = *(_DWORD *)v118;
          if ( *(_DWORD *)v118 )
            v119 = *(_DWORD *)(v122 + 20);
            v110 = v116;
            v118 = *(_DWORD *)v116;
            if ( *(_DWORD *)(v122 + 20) % HIDWORD(v116) == v117 )
              continue;
        v109 = v110 == 0;
        if ( v110 )
          v110 = *(_DWORD *)v110;
          v109 = v110 == 0;
        if ( v109 || !*(_DWORD *)(v110 + 16) )
LABEL_104:
          j_CircuitSceneGraph::addIfPoweredBlockAt(v220, v208, (const BlockPos *)&v230);
        v107 = 0;
        v108 = v222 + 1;
      while ( v222 + 1 < 6 );
      v123 = 0;
      v124 = *((_DWORD *)v220 + 1);
      v223 = *(_DWORD *)v220;
        v125 = *(_QWORD *)&Facing::DIRECTION[3 * v123 + 1];
        v230 = Facing::DIRECTION[3 * v123] + v210;
        v231 = v125 + v212;
        v232 = HIDWORD(v125) + v214;
        v126 = 8976890 * v230 + 981131 * (v125 + v212) + HIDWORD(v125) + v214;
        v127 = *(_DWORD *)(v223 + 4 * (v126 % v124));
        if ( v127 )
          v128 = *(_DWORD *)v127;
          v129 = *(_DWORD *)(*(_DWORD *)v127 + 20);
          do
            if ( v129 == v126 )
            {
              v130 = *(_DWORD *)(v128 + 4);
              v131 = v230 == v130;
              if ( v230 == v130 )
                v131 = (_DWORD)v125 + v212 == *(_DWORD *)(v128 + 8);
              if ( v131 && HIDWORD(v125) + v214 == *(_DWORD *)(v128 + 12) )
                break;
            }
            v128 = *(_DWORD *)v128;
            if ( !v128 )
            v129 = *(_DWORD *)(v128 + 20);
          while ( *(_DWORD *)(v128 + 20) % v124 == v126 % v124 );
        ++v123;
      while ( v123 != 6 );
    do
      LODWORD(v132) = v107;
      HIDWORD(v132) = Facing::DIRECTION[3 * v107];
      v137 = &Facing::DIRECTION[3 * v107];
      v138 = v250 + HIDWORD(v132);
      HIDWORD(v139) = v137[1];
      LODWORD(v139) = v137[2];
      v218 = v139;
      v229 = v251 + HIDWORD(v139);
      v302 = v250 + HIDWORD(v132);
      v303 = v251 + HIDWORD(v139);
      v224 = v252 + v139;
      v304 = v252 + v139;
      v140 = 8976890 * (v250 + HIDWORD(v132)) + 981131 * (v251 + HIDWORD(v139)) + v252 + v139;
      *(_QWORD *)(&v141 - 1) = *(_QWORD *)v220;
      v142 = v140 % (unsigned int)(*(_QWORD *)v220 >> 32);
      v143 = *(_DWORD *)(*(_QWORD *)v220 + 4 * v142);
      if ( v143 )
        v215 = v132;
        v144 = *(_DWORD *)v143;
        v145 = *(_DWORD *)(*(_DWORD *)v143 + 20);
          v146 = v145 == v140;
          if ( v145 == v140 )
            v146 = v138 == *(_DWORD *)(v144 + 4);
          if ( v146 && v229 == *(_DWORD *)(v144 + 8) && v224 == *(_DWORD *)(v144 + 12) )
            break;
          v147 = *(_DWORD *)v144;
          if ( *(_DWORD *)v144 )
            v145 = *(_DWORD *)(v147 + 20);
            v143 = v144;
            v144 = *(_DWORD *)v144;
            if ( *(_DWORD *)(v147 + 20) % v141 == v142 )
          v135 = 0;
          v132 = v215;
          goto LABEL_138;
        HIDWORD(v132) = HIDWORD(v215);
        if ( !v143 )
          LOBYTE(v132) = v215;
        v133 = *(_DWORD *)v143;
        LOBYTE(v132) = v215;
        v134 = v218;
        if ( v133 )
          v135 = *(_DWORD *)(v133 + 16);
        else
        v136 = HIDWORD(v218);
      else
        v135 = 0;
LABEL_138:
      if ( v136 | HIDWORD(v132) | v134 )
        v148 = v138 == v258;
        if ( v138 == v258 )
          v148 = v229 == v259;
        if ( !v148 || v224 != v260 )
          sub_19909D0((int)v220, v209, v135, (int)&v233, (int)&v302, v132, (int)&ptr);
      ++v107;
    while ( v107 < 6 );
    LODWORD(v149) = (*(int (__fastcall **)(int))(*(_DWORD *)v207 + 40))(v207);
    if ( v149 == 1129533507 )
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v207 + 12))(v207) )
LABEL_172:
        LODWORD(v174) = (*(int (__fastcall **)(int))(*(_DWORD *)v207 + 44))(v207);
        if ( v174 == 1296257106 )
          v305 = Facing::DIRECTION[3] + v210;
          v306 = v212 + Facing::DIRECTION[4];
          v307 = v214 + Facing::DIRECTION[5];
          LODWORD(v175) = &v233;
          HIDWORD(v175) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 2, (int)&v305, v175);
          LODWORD(v176) = &v233;
          HIDWORD(v176) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 3, (int)&v305, v176);
          LODWORD(v177) = &v233;
          HIDWORD(v177) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 4, (int)&v305, v177);
          LODWORD(v178) = &v233;
          HIDWORD(v178) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 5, (int)&v305, v178);
          v305 = Facing::DIRECTION[0] + v210;
          v306 = v212 + Facing::DIRECTION[1];
          v307 = v214 + Facing::DIRECTION[2];
          LODWORD(v179) = &v233;
          HIDWORD(v179) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 2, (int)&v305, v179);
          LODWORD(v180) = &v233;
          HIDWORD(v180) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 3, (int)&v305, v180);
          LODWORD(v181) = &v233;
          HIDWORD(v181) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 4, (int)&v305, v181);
          LODWORD(v182) = &v233;
          HIDWORD(v182) = &ptr;
          j_checkComponent<BaseRailTransporter>((unsigned __int64 *)v220, v209, 5, (int)&v305, v182);
        goto LABEL_207;
      v308 = Facing::DIRECTION[3] + v210;
      v309 = Facing::DIRECTION[4] + v212;
      v310 = Facing::DIRECTION[5] + v214;
      v183 = 8976890 * (Facing::DIRECTION[3] + v210)
           + 981131 * (Facing::DIRECTION[4] + v212)
           + Facing::DIRECTION[5]
           + v214;
      v83 = *(_QWORD *)v220 >> 32;
      v75 = *(_QWORD *)v220;
      v184 = v183 % v83;
      v185 = *(_DWORD *)(v75 + 4 * v184);
      if ( v185 )
        v186 = *(_DWORD *)v185;
        v187 = *(_DWORD *)(*(_DWORD *)v185 + 20);
          if ( v187 == v183 )
            v188 = *(_DWORD *)(v186 + 4);
            v189 = v308 == v188;
            if ( v308 == v188 )
              v189 = Facing::DIRECTION[4] + v212 == *(_DWORD *)(v186 + 8);
            if ( v189 && Facing::DIRECTION[5] + v214 == *(_DWORD *)(v186 + 12) )
          v190 = *(_DWORD *)v186;
          if ( *(_DWORD *)v186 )
            v187 = *(_DWORD *)(v190 + 20);
            v185 = v186;
            v186 = *(_DWORD *)v186;
            if ( *(_DWORD *)(v190 + 20) % v83 == v184 )
          v82 = 0;
          v75 = *(_QWORD *)v220;
          goto LABEL_186;
        v75 = *(_QWORD *)v220;
        if ( v185 )
          v76 = *(_DWORD *)v185;
          if ( v76 )
            v77 = *(_DWORD *)(v76 + 16);
            v78 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v77 + 40))(*(_DWORD *)(v76 + 16));
            v80 = v79;
            LODWORD(v81) = (*(int (__fastcall **)(int))(*(_DWORD *)v77 + 44))(v77);
            v82 = 0;
            v83 = *(_QWORD *)v220 >> 32;
            v75 = *(_QWORD *)v220;
            if ( v81 == 1129533506 )
              v82 = v77;
            if ( !(v78 ^ 0x43535042 | v80) )
          else
        v82 = 0;
LABEL_186:
      v308 = Facing::DIRECTION[0] + v210;
      v309 = Facing::DIRECTION[1] + v212;
      v310 = v214 + Facing::DIRECTION[2];
      v191 = 8976890 * (Facing::DIRECTION[0] + v210)
           + 981131 * (Facing::DIRECTION[1] + v212)
           + v214
           + Facing::DIRECTION[2];
      v192 = *(_DWORD *)(v75 + 4 * (v191 % v83));
      if ( v192 )
        v193 = *(_DWORD *)v192;
        v225 = v82;
        v194 = *(_DWORD *)(*(_DWORD *)v192 + 20);
          if ( v194 == v191 )
            v195 = *(_DWORD *)(v193 + 4);
            v196 = v308 == v195;
            if ( v308 == v195 )
              v196 = Facing::DIRECTION[1] + v212 == *(_DWORD *)(v193 + 8);
            if ( v196 && v214 + Facing::DIRECTION[2] == *(_DWORD *)(v193 + 12) )
          v197 = *(_DWORD *)v193;
          if ( *(_DWORD *)v193 )
            v194 = *(_DWORD *)(v197 + 20);
            v192 = v193;
            v193 = *(_DWORD *)v193;
            if ( *(_DWORD *)(v197 + 20) % v83 == v191 % v83 )
          v89 = 0;
          v82 = v225;
          goto LABEL_198;
        v82 = v225;
        if ( v192 )
          v84 = *(_DWORD *)v192;
          if ( v84 )
            v85 = *(_DWORD *)(v84 + 16);
            LODWORD(v87) = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v85 + 40))(*(_DWORD *)(v84 + 16));
            HIDWORD(v87) = v86;
            LODWORD(v88) = (*(int (__fastcall **)(int))(*(_DWORD *)v85 + 44))(v85);
            v27 = v88 == 1129533506;
            v89 = 0;
            if ( v27 )
              v89 = v85;
            if ( v87 == 1129533506 )
        v89 = 0;
LABEL_198:
      if ( v82 | v89 && (!v89 || *(_BYTE *)(v89 + 44) && !*(_BYTE *)(v89 + 41)) )
        if ( !v82 )
          goto LABEL_216;
        v198 = *(_BYTE *)(v82 + 41) == 0;
        if ( !*(_BYTE *)(v82 + 41) )
          v198 = *(_BYTE *)(v82 + 43) == 0;
        if ( !v198 )
LABEL_216:
          LODWORD(v199) = &v233;
          HIDWORD(v199) = &ptr;
          j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 2, (int)&v308, v199);
          LODWORD(v200) = &v233;
          HIDWORD(v200) = &ptr;
          j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 3, (int)&v308, v200);
          LODWORD(v201) = &v233;
          HIDWORD(v201) = &ptr;
          j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 4, (int)&v308, v201);
          LODWORD(v202) = &v233;
          HIDWORD(v202) = &ptr;
          j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 5, (int)&v308, v202);
      if ( v149 != 1129534546 )
        goto LABEL_172;
      v311 = Facing::DIRECTION[3] + v210;
      v312 = Facing::DIRECTION[4] + v212;
      v313 = Facing::DIRECTION[5] + v214;
      v150 = 8976890 * (Facing::DIRECTION[3] + v210)
      v151 = *(_QWORD *)v220;
      v152 = v150 % (unsigned int)(*(_QWORD *)v220 >> 32);
      v60 = *(_DWORD *)(*(_QWORD *)v220 + 4 * v152);
      if ( !v60 )
        goto LABEL_159;
      v153 = *(_DWORD *)v60;
      v154 = *(_DWORD *)(*(_DWORD *)v60 + 20);
      while ( 1 )
        if ( v154 == v150 )
          v155 = *(_DWORD *)(v153 + 4);
          v156 = v311 == v155;
          if ( v311 == v155 )
            v156 = Facing::DIRECTION[4] + v212 == *(_DWORD *)(v153 + 8);
          if ( v156 && Facing::DIRECTION[5] + v214 == *(_DWORD *)(v153 + 12) )
        v157 = *(_DWORD *)v153;
        if ( *(_DWORD *)v153 )
          v154 = *(_DWORD *)(v157 + 20);
          v60 = v153;
          v153 = *(_DWORD *)v153;
          if ( *(_DWORD *)(v157 + 20) % HIDWORD(v151) == v152 )
            continue;
      v59 = v60 == 0;
      if ( v60 )
        v60 = *(_DWORD *)v60;
        v59 = v60 == 0;
      if ( v59 )
      v61 = *(_DWORD *)(v60 + 16);
      v62 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v61 + 40))(*(_DWORD *)(v60 + 16));
      v64 = v63;
      LODWORD(v65) = (*(int (__fastcall **)(int))(*(_DWORD *)v61 + 44))(v61);
      v66 = (v62 ^ 0x43535042 | v64) == 0;
      if ( v62 ^ 0x43535042 | v64 )
        v66 = v65 == 1129533506;
      if ( !v66 || *(_BYTE *)(v61 + 41) )
LABEL_159:
        LODWORD(v158) = &v233;
        HIDWORD(v158) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 2, (int)&v311, v158);
        LODWORD(v159) = &v233;
        HIDWORD(v159) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 3, (int)&v311, v159);
        LODWORD(v160) = &v233;
        HIDWORD(v160) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 4, (int)&v311, v160);
        LODWORD(v161) = &v233;
        HIDWORD(v161) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 5, (int)&v311, v161);
      v311 = Facing::DIRECTION[0] + v210;
      v312 = Facing::DIRECTION[1] + v212;
      v313 = Facing::DIRECTION[2] + v214;
      v162 = 8976890 * (Facing::DIRECTION[0] + v210)
           + Facing::DIRECTION[2]
      v163 = *(_QWORD *)v220;
      v164 = v162 % (unsigned int)(*(_QWORD *)v220 >> 32);
      v68 = *(_DWORD *)(*(_QWORD *)v220 + 4 * v164);
      if ( !v68 )
        goto LABEL_170;
      v165 = *(_DWORD *)v68;
      v166 = *(_DWORD *)(*(_DWORD *)v68 + 20);
        if ( v166 == v162 )
          v167 = *(_DWORD *)(v165 + 4);
          v168 = v311 == v167;
          if ( v311 == v167 )
            v168 = Facing::DIRECTION[1] + v212 == *(_DWORD *)(v165 + 8);
          if ( v168 && Facing::DIRECTION[2] + v214 == *(_DWORD *)(v165 + 12) )
        v169 = *(_DWORD *)v165;
        if ( *(_DWORD *)v165 )
          v166 = *(_DWORD *)(v169 + 20);
          v68 = v165;
          v165 = *(_DWORD *)v165;
          if ( *(_DWORD *)(v169 + 20) % HIDWORD(v163) == v164 )
      v67 = v68 == 0;
      if ( v68 )
        v68 = *(_DWORD *)v68;
        v67 = v68 == 0;
      if ( v67 )
      v69 = *(_DWORD *)(v68 + 16);
      v70 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v69 + 40))(*(_DWORD *)(v68 + 16));
      v72 = v71;
      LODWORD(v73) = (*(int (__fastcall **)(int))(*(_DWORD *)v69 + 44))(v69);
      v74 = (v70 ^ 0x43535042 | v72) == 0;
      if ( v70 ^ 0x43535042 | v72 )
        v74 = v73 == 1129533506;
      if ( !v74 || !*(_BYTE *)(v69 + 41) )
LABEL_170:
        LODWORD(v170) = &v233;
        HIDWORD(v170) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 2, (int)&v311, v170);
        LODWORD(v171) = &v233;
        HIDWORD(v171) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 3, (int)&v311, v171);
        LODWORD(v172) = &v233;
        HIDWORD(v172) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 4, (int)&v311, v172);
        LODWORD(v173) = &v233;
        HIDWORD(v173) = &ptr;
        j_checkComponent<TransporterComponent>((unsigned __int64 *)v220, v209, 5, (int)&v311, v173);
LABEL_207:
    v57 = (int)v297;
  while ( (void *)v300 != v297 );
  v203 = ptr;
  if ( ptr )
    v204 = HIDWORD(v301);
    if ( HIDWORD(v299) < HIDWORD(v301) + 4 )
      v205 = HIDWORD(v299) - 4;
        v206 = *(void **)(v205 + 4);
        v205 += 4;
        j_operator delete(v206);
      while ( v205 < v204 );
      v203 = ptr;
    j_operator delete(v203);
}


CircuitSceneGraph::PendingEntry *__fastcall CircuitSceneGraph::PendingEntry::~PendingEntry(CircuitSceneGraph::PendingEntry *this)
{
  CircuitSceneGraph::PendingEntry *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}
