

BackgroundTask *__fastcall MapItem::_scheduleMapChunkRendering(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int64 *a7)
{
  int v7; // r4@1
  int v8; // r8@1
  int v9; // r11@1
  char v10; // r7@1
  __int64 v11; // kr00_8@1
  unsigned int *v12; // r0@2
  unsigned int v13; // r1@4
  __int64 v14; // kr08_8@7
  int v15; // r4@7
  void *v16; // r0@7
  __int64 v17; // kr10_8@7
  unsigned int *v18; // r0@8
  unsigned int v19; // r2@10
  int v20; // kr1C_4@13
  unsigned __int64 v21; // kr20_8@13
  unsigned int *v22; // r0@14
  unsigned int v23; // r1@16
  char *v24; // r0@19
  int v25; // r3@19
  __int64 v26; // r1@19
  BackgroundTask *result; // r0@19
  int v28; // r4@23
  unsigned int *v29; // r1@24
  unsigned int *v30; // r5@30
  int v31; // [sp+8h] [bp-68h]@1
  int v32; // [sp+Ch] [bp-64h]@1
  char *v33; // [sp+10h] [bp-60h]@19
  __int64 v34; // [sp+18h] [bp-58h]@19
  void *v35; // [sp+20h] [bp-50h]@7
  int (*v36)(void); // [sp+28h] [bp-48h]@7
  signed int (__fastcall *v37)(Dimension ***); // [sp+2Ch] [bp-44h]@7
  char v38; // [sp+30h] [bp-40h]@1
  int v39; // [sp+34h] [bp-3Ch]@13
  int v40; // [sp+3Ch] [bp-34h]@1
  int v41; // [sp+40h] [bp-30h]@1
  char v42; // [sp+44h] [bp-2Ch]@1
  int v43; // [sp+48h] [bp-28h]@1

  v32 = a4;
  v7 = a2;
  v8 = a1;
  v9 = a3;
  v41 = (a6 - a4) * (a5 - a3);
  v40 = 0;
  std::__shared_ptr<std::vector<unsigned int,std::allocator<unsigned int>>,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<std::vector<unsigned int,std::allocator<unsigned int>>>,unsigned int,int>(
    (int)&v42,
    (int)&v38,
    (unsigned int *)&v41,
    &v40);
  v10 = *(_BYTE *)(v7 + 36);
  MapItemSavedData::getMapId((MapItemSavedData *)&v38, (_QWORD *)v7);
  v11 = *(_QWORD *)&v42;
  v31 = *(_DWORD *)(v8 + 188);
  if ( v43 )
  {
    v12 = (unsigned int *)(v43 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
    }
    else
      ++*v12;
  }
  v14 = *(_QWORD *)(v7 + 20);
  v15 = *(_DWORD *)(v7 + 28);
  v16 = operator new(0x2Cu);
  *(_DWORD *)v16 = v8;
  *(_QWORD *)((char *)v16 + 4) = v11;
  *(_QWORD *)((char *)v16 + 12) = v14;
  *((_DWORD *)v16 + 5) = v15;
  *((_DWORD *)v16 + 6) = 1 << v10;
  *((_DWORD *)v16 + 7) = v9;
  *((_DWORD *)v16 + 8) = v32;
  *((_DWORD *)v16 + 9) = a5;
  *((_DWORD *)v16 + 10) = a6;
  v35 = v16;
  v36 = (int (*)(void))sub_182A880;
  v37 = sub_182A84A;
  v17 = *(_QWORD *)&v42;
    v18 = (unsigned int *)(v43 + 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
      ++*v18;
  v20 = v39;
  v21 = *a7;
  if ( *a7 >> 32 )
    v22 = (unsigned int *)(HIDWORD(v21) + 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 + 1, v22) );
      ++*v22;
  v24 = (char *)operator new(0x30u);
  v25 = (int)(v24 + 16);
  *(_DWORD *)v24 = v8;
  *((_DWORD *)v24 + 1) = v17;
  LODWORD(v26) = sub_182AB5C;
  *((_DWORD *)v24 + 2) = HIDWORD(v17);
  HIDWORD(v26) = sub_182AB28;
  *(_DWORD *)v25 = v14;
  *(_DWORD *)(v25 + 4) = v20;
  *(_DWORD *)(v25 + 8) = v9;
  *((_DWORD *)v24 + 7) = v32;
  *((_DWORD *)v24 + 8) = a5;
  *((_DWORD *)v24 + 9) = a6;
  *((_QWORD *)v24 + 5) = v21;
  v33 = v24;
  v34 = v26;
  result = TaskGroup::queue(v31, (int)&v35, (int)&v33, 0x7D0u, 0xFFFFFFFF);
  if ( (_DWORD)v34 )
    result = (BackgroundTask *)((int (*)(void))v34)();
  if ( v36 )
    result = (BackgroundTask *)v36();
  v28 = v43;
    v29 = (unsigned int *)(v43 + 4);
        result = (BackgroundTask *)__ldrex(v29);
      while ( __strex((unsigned int)result - 1, v29) );
      result = (BackgroundTask *)(*v29)--;
    if ( result == (BackgroundTask *)1 )
      v30 = (unsigned int *)(v28 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 8))(v28);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BackgroundTask *)__ldrex(v30);
        while ( __strex((unsigned int)result - 1, v30) );
      }
      else
        result = (BackgroundTask *)(*v30)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v28 + 12))(v28);
  return result;
}


void __fastcall MapItem::buildDescriptionId(MapItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ItemInstance *v3; // r5@1
  void **v4; // r4@1
  const ItemInstance *v5; // r6@1
  int v6; // r0@1
  const void **v7; // r0@6
  const void **v8; // r0@6
  int *v9; // r0@6
  int v10; // r0@6
  __int64 v11; // kr00_8@6
  unsigned int v12; // r1@6
  const void **v13; // r0@8
  void *v14; // r0@11
  void *v15; // r0@12
  char *v16; // r0@13
  void *v17; // r0@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  unsigned int *v20; // r2@20
  signed int v21; // r1@22
  unsigned int *v22; // r2@24
  signed int v23; // r1@26
  unsigned int *v24; // r2@28
  signed int v25; // r1@30
  int v26; // [sp+0h] [bp-30h]@6
  int v27; // [sp+4h] [bp-2Ch]@6
  char *v28; // [sp+8h] [bp-28h]@6
  unsigned int v29; // [sp+Ch] [bp-24h]@6

  v3 = a3;
  v4 = (void **)this;
  v5 = a2;
  v6 = (unsigned __int16)ItemInstance::getAuxValue(a3);
  if ( (unsigned __int16)v6 == 4 )
  {
    sub_21E94B4(v4, "item.map.exploration.mansion.name");
  }
  else if ( v6 == 3 )
    sub_21E94B4(v4, "item.map.exploration.monument.name");
  else if ( ItemInstance::hasUserData(v3) == 1 )
    Item::buildDescriptionId((Item *)&v27, v5);
    v7 = sub_21E82D8((const void **)&v27, 0, (unsigned int)"%", (_BYTE *)1);
    v28 = (char *)*v7;
    *v7 = &unk_28898CC;
    v8 = sub_21E7408((const void **)&v28, " ", 1u);
    v29 = (unsigned int)*v8;
    *v8 = &unk_28898CC;
    v9 = (int *)ItemInstance::getUserData(v3);
    v10 = CompoundTag::getInt(*v9, (const void **)&MapItem::TAG_MAP_NAME_INDEX);
    Util::toString<int,(void *)0,(void *)0>((void **)&v26, v10);
    v11 = *(_QWORD *)(v29 - 12);
    v12 = *(_DWORD *)(v26 - 12) + v11;
    if ( v12 > HIDWORD(v11) && v12 <= *(_DWORD *)(v26 - 8) )
      v13 = sub_21E82D8((const void **)&v26, 0, v29, (_BYTE *)v11);
    else
      v13 = sub_21E72F0((const void **)&v29, (const void **)&v26);
    *v4 = (void *)*v13;
    *v13 = &unk_28898CC;
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v18 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v29 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v28 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v27 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  else
    Item::buildDescriptionId((Item *)v4, v5);
}


int __fastcall MapItem::getUpdatePacket(MapItem *this, const ItemInstance *a2, Level *a3, Entity *a4, Entity *a5)
{
  Level *v5; // r5@1
  MapItem *v6; // r6@1
  Entity *v7; // r4@1
  int v8; // r1@1
  MapItemSavedData *v9; // r1@1
  int result; // r0@2
  __int64 v11[3]; // [sp+8h] [bp-18h]@1

  v5 = a3;
  v6 = this;
  v7 = a4;
  MapItem::getMapId((MapItem *)v11, a3);
  v9 = Level::getMapSavedData((int)v7, v8, v11[0]);
  if ( v9 )
  {
    result = MapItemSavedData::getUpdatePacket(v6, v9, v5, v7, a5);
  }
  else
    result = 0;
    *(_DWORD *)v6 = 0;
  return result;
}


int __fastcall MapItem::setMapNameIndex(MapItem *this, ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r4@1
  ItemInstance *v4; // r5@1
  void *v5; // r6@2
  int *v6; // r0@5
  void *v8; // [sp+4h] [bp-14h]@2

  v3 = a2;
  v4 = this;
  if ( !ItemInstance::hasUserData(this) )
  {
    v5 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v5);
    v8 = v5;
    ItemInstance::setUserData((int)v4, (int *)&v8);
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v8 = 0;
  }
  v6 = (int *)ItemInstance::getUserData(v4);
  return CompoundTag::putInt(*v6, (const void **)&MapItem::TAG_MAP_NAME_INDEX, (int)v3);
}


MapItemSavedData *__fastcall MapItem::blockTick(MapItem *this, ItemInstance *a2, BlockSource *a3, const BlockPos *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r4@1
  Level *v6; // r6@1
  int v7; // r1@1
  MapItemSavedData *result; // r0@2
  const BlockPos *v9; // r6@3
  int v10; // r4@6
  unsigned int *v11; // r1@7
  unsigned int *v12; // r5@13
  __int64 v13; // [sp+0h] [bp-20h]@1
  int v14; // [sp+8h] [bp-18h]@4
  int v15; // [sp+Ch] [bp-14h]@6

  v4 = a4;
  v5 = a3;
  MapItem::getMapId((MapItem *)&v13, a2);
  v6 = (Level *)BlockSource::getLevel(v5);
  if ( Level::isClientSide(v6) == 1 )
  {
    result = (MapItemSavedData *)Level::requestMapInfo((signed int)v6, v7, v13, HIDWORD(v13));
  }
  else
    result = Level::getMapSavedData((int)v6, v7, v13);
    v9 = result;
    if ( result )
    {
      MapItemSavedData::tickByBlock(result, v4, v5);
      MapItemSavedData::getTrackedMapEntity((MapItemSavedData *)&v14, v9, v4);
      result = (MapItemSavedData *)v14;
      if ( v14 )
        ++*(_DWORD *)(v14 + 32);
      v10 = v15;
      if ( v15 )
      {
        v11 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (MapItemSavedData *)__ldrex(v11);
          while ( __strex((unsigned int)result - 1, v11) );
        }
        else
          result = (MapItemSavedData *)(*v11)--;
        if ( result == (MapItemSavedData *)1 )
          v12 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (MapItemSavedData *)__ldrex(v12);
            while ( __strex((unsigned int)result - 1, v12) );
          }
          else
            result = (MapItemSavedData *)(*v12)--;
          if ( result == (MapItemSavedData *)1 )
            result = (MapItemSavedData *)(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      }
    }
  return result;
}


void __fastcall MapItem::serializeMapData(__int64 *a1, const void **a2)
{
  const void **v2; // r8@1
  __int64 *v3; // r6@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  int *v7; // r4@3
  void **v15; // r5@4
  _DWORD *v16; // r0@4
  int v17; // r1@4 OVERLAPPED
  int v18; // r4@4
  unsigned int v19; // r2@4
  _DWORD *v20; // r0@7
  __int64 v21; // r0@9
  unsigned int v22; // r6@10
  int *v23; // r7@10
  int v24; // r2@11
  int v25; // r0@11
  __int64 v26; // kr00_8@11
  int v27; // r0@11
  int v28; // r9@11
  unsigned int v29; // r1@11
  int v30; // r11@11
  int *v31; // r6@11
  const void **v32; // r7@12
  int *v33; // r8@12
  int *v34; // r0@12
  int v35; // r4@12
  int v36; // r5@14
  int *v37; // r7@18
  int v38; // r4@18
  _DWORD *v39; // r5@20
  unsigned int v40; // r6@22
  _DWORD *v41; // r3@24
  int v42; // r0@24
  int v43; // r0@24
  signed int v44; // r10@25
  int v45; // r0@27
  _DWORD *v46; // r0@29
  int v47; // r1@29 OVERLAPPED
  int v48; // r4@29
  unsigned int v49; // r2@29
  _DWORD *v50; // r0@32
  void *v51; // r0@34
  _DWORD *v52; // r0@36
  int v53; // r1@36 OVERLAPPED
  int v54; // r4@36
  unsigned int v55; // r2@36
  _DWORD *v56; // r0@39
  void *v57; // r0@42
  int v58; // r0@43
  int v59; // r0@44
  void *v60; // r0@46
  unsigned int *v61; // r2@58
  signed int v62; // r1@60
  unsigned int *v63; // r2@62
  signed int v64; // r1@64
  unsigned int *v65; // r2@66
  signed int v66; // r1@68
  _DWORD *v67; // r0@84
  int v68; // r1@84 OVERLAPPED
  int v69; // r4@84
  unsigned int v70; // r2@84
  _DWORD *v71; // r0@87
  void *v72; // r0@89
  _DWORD *v73; // r0@90
  int v74; // r1@90 OVERLAPPED
  int v75; // r4@90
  unsigned int v76; // r2@90
  _DWORD *v77; // r0@93
  void *v78; // r0@95
  void *v79; // r4@96
  unsigned int *v80; // r2@102
  signed int v81; // r1@104
  int v82; // [sp+10h] [bp-80h]@16
  __int64 *v83; // [sp+14h] [bp-7Ch]@9
  int v84; // [sp+18h] [bp-78h]@10
  unsigned int v85; // [sp+1Ch] [bp-74h]@11
  signed int v86; // [sp+20h] [bp-70h]@10
  int v87; // [sp+24h] [bp-6Ch]@89
  int v88; // [sp+28h] [bp-68h]@46
  int v89; // [sp+2Ch] [bp-64h]@42
  int v90; // [sp+30h] [bp-60h]@34
  unsigned __int8 v91[4]; // [sp+34h] [bp-5Ch]@11
  int v92; // [sp+38h] [bp-58h]@11
  int v93; // [sp+3Ch] [bp-54h]@11
  int v94; // [sp+40h] [bp-50h]@11
  int v95; // [sp+44h] [bp-4Ch]@11
  char v96; // [sp+48h] [bp-48h]@11
  char v97; // [sp+49h] [bp-47h]@11
  unsigned __int16 v98; // [sp+4Ah] [bp-46h]@11
  void *v99; // [sp+4Ch] [bp-44h]@4
  unsigned int v100; // [sp+50h] [bp-40h]@1
  void *ptr; // [sp+54h] [bp-3Ch]@1
  int v102; // [sp+58h] [bp-38h]@1
  float v103; // [sp+5Ch] [bp-34h]@1
  int v104; // [sp+60h] [bp-30h]@1
  int v105; // [sp+64h] [bp-2Ch]@101

  v2 = a2;
  v3 = a1;
  sub_21E6FCC(a2, 0x701u);
  ptr = 0;
  v102 = 0;
  v103 = 1.0;
  v104 = 0;
  HIDWORD(v4) = 10;
  LODWORD(v4) = &v103;
  v5 = sub_21E6254(v4);
  v100 = v5;
  if ( v5 == 1 )
  {
    v7 = &v105;
    v105 = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  v99 = v7;
  __asm
    VLDR            S0, =256.0
    VLDR            S2, [SP,#0x90+var_34]
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = ceilf(_R0);
    VMOV            S0, R0
    VCVTR.U32.F32   S0, S0
    VMOV            R1, S0
  v15 = &v99;
  LODWORD(_R0) = &v99;
  std::_Hashtable<int,std::pair<int const,int>,std::allocator<std::pair<int const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::rehash(_R0);
  v16 = *v2;
  *(_QWORD *)&v17 = *(_QWORD *)((char *)*v2 - 12);
  v18 = v17 + 1;
  if ( v17 + 1 > v19 || *(v16 - 1) >= 1 )
    sub_21E6FCC(v2, v17 + 1);
    v16 = *v2;
    v17 = *((_DWORD *)*v2 - 3);
  *((_BYTE *)v16 + v17) = 34;
  v20 = *v2;
  if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
    *(v20 - 1) = 0;
    *(v20 - 3) = v18;
    *((_BYTE *)v20 + v18) = byte_26C67B8[0];
  v83 = v3;
  v21 = *v3;
  if ( HIDWORD(v21) != (_DWORD)v21 )
    v22 = 0;
    v23 = &dword_28898C0;
    v86 = 0;
    v84 = 0;
    while ( 1 )
    {
      v24 = *(_DWORD *)(v21 + 20 * v22);
      v25 = v21 + 20 * v22;
      v26 = *(_QWORD *)(v25 + 4);
      v94 = *(_QWORD *)(v25 + 4) >> 32;
      v92 = v24;
      v93 = v26;
      v96 = *(_BYTE *)(v25 + 16);
      v97 = *(_BYTE *)(v25 + 17);
      v98 = *(_WORD *)(v25 + 18);
      v95 = 0;
      v27 = Color::toARGB((Color *)&v92);
      v85 = v22;
      v28 = v27 | (v98 << 24);
      *(_DWORD *)v91 = v27 | (v98 << 24);
      v29 = (v27 | ((unsigned int)v98 << 24)) % v100;
      v30 = v29;
      v31 = (int *)*((_DWORD *)v99 + v29);
      if ( !v31 )
        break;
      v32 = v2;
      v33 = (int *)*v31;
      v34 = (int *)*((_DWORD *)v99 + v29);
      v35 = *(_DWORD *)(*v31 + 4);
      while ( v28 != v35 )
      {
        v36 = *v33;
        if ( *v33 )
        {
          v35 = *(_DWORD *)(v36 + 4);
          v34 = v33;
          v33 = (int *)*v33;
          if ( *(_DWORD *)(v36 + 4) % v100 == v29 )
            continue;
        }
        v2 = v32;
        v82 = 0;
        goto LABEL_17;
      }
      v2 = v32;
      if ( v34 )
        v82 = *v34;
        if ( *v34 )
          v44 = 0;
          v23 = &dword_28898C0;
          v40 = v85;
          goto LABEL_26;
      else
LABEL_17:
LABEL_22:
        v23 = &dword_28898C0;
        v40 = v85;
        goto LABEL_24;
      v37 = (int *)*v31;
      v38 = *(_DWORD *)(*v31 + 4);
      while ( v28 != v38 )
        v39 = (_DWORD *)*v37;
        if ( *v37 )
          v38 = v39[1];
          v31 = v37;
          v37 = (int *)*v37;
          if ( v39[1] % v100 == v29 )
        goto LABEL_22;
      v23 = &dword_28898C0;
      v43 = *v31;
      v40 = v85;
      if ( !v43 )
LABEL_25:
      *(_DWORD *)(v43 + 8) = v40;
      v44 = 1;
      v28 = *(_DWORD *)v91;
LABEL_26:
      if ( v28 == v84 )
        v45 = v86 + 1;
        if ( v86 )
          v46 = *v2;
          *(_QWORD *)&v47 = *(_QWORD *)((char *)*v2 - 12);
          v48 = v47 + 1;
          if ( v47 + 1 > v49 || *(v46 - 1) >= 1 )
          {
            sub_21E6FCC(v2, v47 + 1);
            v46 = *v2;
            v47 = *((_DWORD *)*v2 - 3);
          }
          *((_BYTE *)v46 + v47) = 42;
          v50 = *v2;
          if ( (int *)((char *)*v2 - 12) != v23 )
            *(v50 - 1) = 0;
            *(v50 - 3) = v48;
            *((_BYTE *)v50 + v48) = byte_26C67B8[0];
          Util::toString<int,(void *)0,(void *)0>((void **)&v90, v86);
          sub_21E72F0(v2, (const void **)&v90);
          v51 = (void *)(v90 - 12);
          if ( (int *)(v90 - 12) != v23 )
            v61 = (unsigned int *)(v90 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v62 = __ldrex(v61);
              while ( __strex(v62 - 1, v61) );
            }
            else
              v62 = (*v61)--;
            if ( v62 <= 0 )
              j_j_j_j__ZdlPv_9(v51);
        if ( v40 )
          v52 = *v2;
          *(_QWORD *)&v53 = *(_QWORD *)((char *)*v2 - 12);
          v54 = v53 + 1;
          if ( v53 + 1 > v55 || *(v52 - 1) >= 1 )
            sub_21E6FCC(v2, v53 + 1);
            v52 = *v2;
            v53 = *((_DWORD *)*v2 - 3);
          *((_BYTE *)v52 + v53) = 44;
          v56 = *v2;
            *(v56 - 1) = 0;
            *(v56 - 3) = v54;
            *((_BYTE *)v56 + v54) = byte_26C67B8[0];
        if ( v44 == 1 )
          Util::base64_encode((Util *)&v89, v91, 4u, 1);
          sub_21E72F0(v2, (const void **)&v89);
          v57 = (void *)(v89 - 12);
          if ( (int *)(v89 - 12) != v23 )
            v63 = (unsigned int *)(v89 - 4);
                v64 = __ldrex(v63);
              while ( __strex(v64 - 1, v63) );
              v64 = (*v63)--;
            if ( v64 <= 0 )
              j_j_j_j__ZdlPv_9(v57);
          v58 = *((_DWORD *)*v2 - 3);
          if ( !v58 )
            sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", -1, 0);
          sub_21E7EE0(v2, v58 - 1, (_BYTE *)1, 0);
          v59 = *((_DWORD *)*v2 - 3);
          if ( !v59 )
          sub_21E7EE0(v2, v59 - 1, (_BYTE *)1, 0);
        else
          Util::toString<int,(void *)0,(void *)0>((void **)&v88, *(_DWORD *)(v82 + 8));
          sub_21E72F0(v2, (const void **)&v88);
          v60 = (void *)(v88 - 12);
          if ( (int *)(v88 - 12) != v23 )
            v65 = (unsigned int *)(v88 - 4);
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v60);
        v84 = *(_DWORD *)v91;
        v45 = 0;
      v86 = v45;
      v21 = *v83;
      v22 = v40 + 1;
      if ( v22 >= -858993459 * ((HIDWORD(v21) - (signed int)v21) >> 2) )
        v15 = &v99;
          v67 = *v2;
          *(_QWORD *)&v68 = *(_QWORD *)((char *)*v2 - 12);
          v69 = v68 + 1;
          if ( v68 + 1 > v70 || *(v67 - 1) >= 1 )
            sub_21E6FCC(v2, v68 + 1);
            v67 = *v2;
            v68 = *((_DWORD *)*v2 - 3);
          *((_BYTE *)v67 + v68) = 42;
          v71 = *v2;
          if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
            *(v71 - 1) = 0;
            *(v71 - 3) = v69;
            *((_BYTE *)v71 + v69) = byte_26C67B8[0];
          Util::toString<int,(void *)0,(void *)0>((void **)&v87, v86);
          sub_21E72F0(v2, (const void **)&v87);
          v72 = (void *)(v87 - 12);
          if ( (int *)(v87 - 12) != &dword_28898C0 )
            v80 = (unsigned int *)(v87 - 4);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j__ZdlPv_9(v72);
        goto LABEL_90;
    }
    v40 = v85;
    v82 = 0;
LABEL_24:
    v41 = operator new(0xCu);
    v42 = *(_DWORD *)v91;
    *v41 = 0;
    v41[1] = v42;
    v41[2] = 0;
    v43 = std::_Hashtable<int,std::pair<int const,int>,std::allocator<std::pair<int const,int>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
            (int)&v99,
            v30,
            v28,
            (int)v41);
    goto LABEL_25;
LABEL_90:
  v73 = *v2;
  *(_QWORD *)&v74 = *(_QWORD *)((char *)*v2 - 12);
  v75 = v74 + 1;
  if ( v74 + 1 > v76 || *(v73 - 1) >= 1 )
    sub_21E6FCC(v2, v74 + 1);
    v73 = *v2;
    v74 = *((_DWORD *)*v2 - 3);
  *((_BYTE *)v73 + v74) = 34;
  v77 = *v2;
    *(v77 - 1) = 0;
    *(v77 - 3) = v75;
    *((_BYTE *)v77 + v75) = byte_26C67B8[0];
  v78 = ptr;
  if ( ptr )
    do
      v79 = *(void **)v78;
      operator delete(v78);
      v78 = v79;
    while ( v79 );
  _aeabi_memclr4(v99, 4 * v100);
  if ( v99 )
    if ( v15 + 6 != v99 )
      operator delete(v99);
}


int __fastcall MapItem::setItemInstanceInfo(MapItem *this, ItemInstance *a2, MapItemSavedData *a3)
{
  ItemInstance *v3; // r4@1
  ItemInstance *v4; // r5@1
  void *v5; // r6@2
  int *v6; // r0@5
  void *v8; // [sp+4h] [bp-14h]@2

  v3 = a2;
  v4 = this;
  if ( !ItemInstance::hasUserData(this) )
  {
    v5 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v5);
    v8 = v5;
    ItemInstance::setUserData((int)v4, (int *)&v8);
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v8 = 0;
  }
  v6 = (int *)ItemInstance::getUserData(v4);
  return CompoundTag::putInt64(*v6, (const void **)&MapItem::TAG_MAP_UUID, *(_QWORD *)v3, *(_QWORD *)v3 >> 32);
}


void __fastcall MapItem::appendFormattedHovertext(const ItemInstance *a1, ItemInstance *a2, Level *a3, const void **a4)
{
  MapItem::appendFormattedHovertext(a1, a2, a3, a4);
}


void __fastcall MapItem::sampleMapData(int a1, int a2, int a3, MapItemSavedData *a4, int a5, signed int a6, int *a7, MapItemSavedData *a8, int a9)
{
  int v9; // r6@1
  MapItemSavedData *v10; // r4@1
  int v11; // r7@1
  Dimension *v12; // r0@1
  __int64 v13; // kr00_8@1
  int v14; // r8@1
  int v15; // r11@1
  int v16; // r9@1
  int v17; // r4@1
  int v18; // r11@3
  void *v19; // r0@3
  char *v20; // r5@3
  int v21; // r6@3
  int v22; // r0@3
  int v23; // r3@5
  int v24; // r0@5
  int v25; // r2@5
  int v26; // r1@5
  int v28; // r1@7
  int v30; // r5@14
  int v32; // r12@14
  signed int v33; // r10@14
  signed int v34; // r0@16
  signed int v35; // r1@18
  unsigned __int8 v36; // r0@22
  char v37; // r1@24
  signed int v38; // r9@28
  bool v41; // nf@33
  unsigned __int8 v42; // vf@33
  int v43; // r5@36
  int v44; // r0@36
  int v45; // r8@36
  const BlockPos *v46; // r0@36
  __int64 v47; // r6@36
  unsigned int *v48; // r1@37
  unsigned int v49; // r0@39
  unsigned int *v50; // r4@43
  unsigned int v51; // r0@45
  int v52; // r4@51
  signed __int16 v53; // r7@51
  char v54; // r5@53
  int v55; // r1@54
  int v56; // r2@54
  int v57; // r3@54
  int v58; // r0@54
  int v59; // r1@56
  signed int v60; // r0@56
  int v61; // r0@58
  int v62; // r1@58
  Block *v63; // r0@60
  Material *v64; // r0@60
  int v65; // r4@61
  int v66; // r1@61
  Block *v67; // r0@62
  Material *v68; // r0@63
  int v69; // r0@63
  int v70; // r11@66
  const BlockPos *v71; // r0@66
  LevelChunk *v72; // r4@66
  int v73; // r4@67
  const ChunkBlockPos *v74; // r6@67
  int v75; // r0@67
  int v76; // r1@67
  signed __int16 v77; // r2@69
  signed int v79; // r4@74
  signed int v80; // r6@75
  int v81; // r0@75
  int v83; // r0@85
  char v85; // r1@85
  unsigned int v86; // r2@94
  signed __int16 v87; // r11@94
  int v88; // r3@97
  int v89; // r7@97
  char *v90; // r4@97
  int v92; // r4@101
  unsigned int *v93; // r1@102
  unsigned int v94; // r0@104
  unsigned int *v95; // r6@108
  unsigned int v96; // r0@110
  char v97; // r5@118
  int v98; // r1@119
  int v99; // r2@119
  int v100; // r3@119
  int v101; // r1@123
  int v104; // r2@129
  signed int v105; // r6@129
  int v106; // r0@129
  int v107; // r3@134
  float v108; // r2@135
  float v109; // r7@135
  Block *v110; // r0@137
  int *v111; // r0@137
  signed int v112; // r0@137
  unsigned int v113; // r1@137
  signed int v114; // r2@142
  signed int v115; // r0@142
  int v117; // r1@149
  int v118; // r7@149
  int v119; // r4@152
  int v120; // r2@152
  float v121; // r7@152
  float v122; // r12@152
  int v123; // r5@152
  int v124; // r4@152
  int v125; // r2@152
  int v126; // [sp+Ch] [bp-1ECh]@58
  signed int v127; // [sp+18h] [bp-1E0h]@58
  signed int v128; // [sp+20h] [bp-1D8h]@18
  int v129; // [sp+24h] [bp-1D4h]@5
  unsigned int v130; // [sp+28h] [bp-1D0h]@14
  unsigned int v131; // [sp+30h] [bp-1C8h]@16
  int v132; // [sp+34h] [bp-1C4h]@14
  int v133; // [sp+3Ch] [bp-1BCh]@5
  int v134; // [sp+44h] [bp-1B4h]@28
  signed int v135; // [sp+48h] [bp-1B0h]@14
  char v136; // [sp+4Ch] [bp-1ACh]@28
  int v137; // [sp+50h] [bp-1A8h]@9
  int v138; // [sp+54h] [bp-1A4h]@58
  int v139; // [sp+58h] [bp-1A0h]@1
  int v140; // [sp+5Ch] [bp-19Ch]@14
  signed __int16 v141; // [sp+60h] [bp-198h]@52
  int v142; // [sp+60h] [bp-198h]@66
  int v143; // [sp+64h] [bp-194h]@28
  signed int v144; // [sp+68h] [bp-190h]@57
  signed int v145; // [sp+68h] [bp-190h]@72
  int v146; // [sp+6Ch] [bp-18Ch]@1
  unsigned int v147; // [sp+70h] [bp-188h]@23
  int v148; // [sp+78h] [bp-180h]@1
  signed int v149; // [sp+7Ch] [bp-17Ch]@14
  signed int v150; // [sp+80h] [bp-178h]@22
  BlockSource *v151; // [sp+84h] [bp-174h]@1
  float v152; // [sp+88h] [bp-170h]@129
  float v153; // [sp+8Ch] [bp-16Ch]@129
  float v154; // [sp+90h] [bp-168h]@129
  int v155; // [sp+94h] [bp-164h]@129
  int v156; // [sp+98h] [bp-160h]@129
  char v157; // [sp+A0h] [bp-158h]@62
  int v158; // [sp+A4h] [bp-154h]@62
  int v159; // [sp+A8h] [bp-150h]@62
  int v160; // [sp+ACh] [bp-14Ch]@62
  float v161; // [sp+B0h] [bp-148h]@75
  unsigned __int16 v165; // [sp+C0h] [bp-138h]@75
  unsigned __int16 v166; // [sp+C2h] [bp-136h]@60
  char v167; // [sp+C4h] [bp-134h]@67
  char v168; // [sp+C8h] [bp-130h]@67
  int v169; // [sp+CCh] [bp-12Ch]@67
  char v170; // [sp+D4h] [bp-124h]@67
  LevelChunk *v171; // [sp+D8h] [bp-120h]@66
  int v172; // [sp+DCh] [bp-11Ch]@101
  int v173; // [sp+E0h] [bp-118h]@66
  int v174; // [sp+E4h] [bp-114h]@66
  int v175; // [sp+E8h] [bp-110h]@66
  int v176; // [sp+ECh] [bp-10Ch]@56
  signed int v177; // [sp+F0h] [bp-108h]@56
  int v178; // [sp+F4h] [bp-104h]@56
  char v179; // [sp+F8h] [bp-100h]@118
  int v180; // [sp+FCh] [bp-FCh]@118
  int v181; // [sp+100h] [bp-F8h]@118
  int v182; // [sp+104h] [bp-F4h]@118
  char v183; // [sp+108h] [bp-F0h]@53
  int v184; // [sp+10Ch] [bp-ECh]@53
  int v185; // [sp+110h] [bp-E8h]@53
  int v186; // [sp+114h] [bp-E4h]@53
  char v187; // [sp+11Ch] [bp-DCh]@36
  int v188; // [sp+120h] [bp-D8h]@36
  int v189; // [sp+124h] [bp-D4h]@36
  int v190; // [sp+128h] [bp-D0h]@36
  int v191; // [sp+12Ch] [bp-CCh]@36
  int v192; // [sp+130h] [bp-C8h]@4
  char *v193; // [sp+13Ch] [bp-BCh]@1
  char *v194; // [sp+140h] [bp-B8h]@1
  char *v195; // [sp+144h] [bp-B4h]@1
  __int64 v196; // [sp+148h] [bp-B0h]@97
  __int64 v197; // [sp+150h] [bp-A8h]@97
  char v198; // [sp+158h] [bp-A0h]@96
  char v199; // [sp+159h] [bp-9Fh]@96
  __int16 v200; // [sp+15Ah] [bp-9Eh]@96
  int v201; // [sp+15Ch] [bp-9Ch]@96
  int v202; // [sp+160h] [bp-98h]@118
  int v203; // [sp+164h] [bp-94h]@118
  int v204; // [sp+168h] [bp-90h]@118
  int v205; // [sp+16Ch] [bp-8Ch]@118
  char v206; // [sp+170h] [bp-88h]@118
  char v207; // [sp+171h] [bp-87h]@118
  __int16 v208; // [sp+172h] [bp-86h]@118
  int v209; // [sp+174h] [bp-84h]@118
  int v210; // [sp+178h] [bp-80h]@53
  int v211; // [sp+17Ch] [bp-7Ch]@53
  int v212; // [sp+180h] [bp-78h]@53
  int v213; // [sp+184h] [bp-74h]@53
  char v214; // [sp+188h] [bp-70h]@53
  char v215; // [sp+189h] [bp-6Fh]@53
  __int16 v216; // [sp+18Ah] [bp-6Eh]@53
  int v217; // [sp+18Ch] [bp-6Ch]@53

  v9 = a3;
  v10 = a4;
  v148 = a3;
  v11 = a2;
  v151 = (BlockSource *)a1;
  v12 = (Dimension *)BlockSource::getDimension((BlockSource *)a1);
  v139 = Dimension::hasCeiling(v12);
  v13 = *(_QWORD *)v10;
  v14 = *((_DWORD *)v10 + 2);
  v146 = *(_QWORD *)v10 >> 32;
  v15 = *(_DWORD *)v9;
  v16 = *(_DWORD *)(v9 + 8);
  v193 = 0;
  v194 = 0;
  v195 = 0;
  v17 = 128 / v11;
  if ( v139 )
    v17 = 128 / v11 / 2;
  v18 = ((signed int)v13 - v15) / v11;
  v19 = operator new(0x168u);
  v20 = (char *)v19;
  v193 = (char *)v19;
  v194 = (char *)v19;
  v21 = 0;
  v195 = (char *)v19 + 360;
  v22 = 0;
  if ( a8 )
  {
    MapItemSavedData::getPixels((MapItemSavedData *)&v192, (int)a8);
    v22 = v192;
  }
  v23 = a5;
  v129 = v22;
  v24 = 0;
  v25 = v18 + a5 / 2;
  v133 = v25;
  v26 = v25 + v17;
  if ( v25 + v17 > 0 )
    v24 = v25 + v17;
  _VF = __OFSUB__(v26, a5);
  _ZF = v26 == a5;
  _NF = v26 - a5 < 0;
  v28 = v25 - v17;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v24 = a5;
  v137 = v24;
  if ( v28 + 1 > 0 )
    v21 = v28 + 1;
  if ( v28 >= a5 - 1 )
    v21 = a5 - 1;
  if ( v21 < v24 )
    __asm { VMOV.F32        S22, #4.0 }
    v149 = v11;
    __asm
    {
      VMOV.F32        S24, #-0.5
      VMOV.F32        S21, #0.5
      VLDR            S18, =0.0
      VLDR            S20, =100.0
      VLDR            S26, =0.4
    }
    v30 = (v14 - v16) / v11 + a6 / 2;
    v140 = a6 / 2;
    _R1 = v11 + 4;
    v132 = v30;
    __asm { VMOV            S0, R1 }
    v130 = v17 * v17;
    v32 = a9;
      VLDR            S28, =-0.6
      VLDR            S30, =0.6
    v135 = v11 * v11;
    v33 = v30 - v17 - 1;
    __asm { VLDR            S23, =0.9 }
    if ( v33 < -1 || v30 == v17 )
      v33 = -1;
    v34 = v30 + v17;
    v131 = (v17 - 2) * (v17 - 2);
    __asm { VCVT.F32.S32    S16, S0 }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v33 = a6 - 1;
    v35 = 0;
    v128 = v33;
    if ( v34 > 0 )
      v35 = v30 + v17;
    if ( v34 > a6 )
      v35 = a6;
    v150 = v35;
    v36 = 0;
    do
      v147 = v21;
      if ( !v32 )
        goto LABEL_169;
      v37 = 0;
      if ( !(((unsigned __int8)*(_DWORD *)(v32 + 32) ^ (unsigned __int8)v21) & 0xF) )
        v37 = 1;
      _ZF = ((v36 | (unsigned __int8)v37) & 1) == 0;
      v36 = 0;
      if ( !_ZF )
      {
LABEL_169:
        if ( v33 >= v150 )
        {
          v136 = 0;
        }
        else
          __asm { VMOV.F32        S25, S18 }
          v38 = 0;
          v134 = (v21 - v133) * (v21 - v133);
          v143 = v21 - a5 / 2;
          do
          {
            _VF = __OFSUB__(v33, a6);
            _NF = v33 - a6 < 0;
            if ( v33 < a6 )
            {
              _VF = __OFSUB__(v21, v23);
              _NF = v21 - v23 < 0;
            }
            if ( _NF ^ _VF )
              v42 = 0;
              v41 = v21 < 0;
              if ( v21 >= 0 )
              {
                v42 = __OFSUB__(v33, -1);
                v41 = v33 + 1 < 0;
              }
              if ( !(v41 ^ v42) )
                v43 = (*(_DWORD *)v148 / v149 + v143) * v149;
                v44 = *(_DWORD *)(v148 + 8) / v149;
                v189 = (*(_DWORD *)v148 / v149 + v143) * v149;
                v45 = (v44 + v33 - v140) * v149;
                v190 = v146;
                v191 = (v44 + v33 - v140) * v149;
                v46 = (const BlockPos *)BlockSource::getChunkSource(v151);
                ChunkSource::getAvailableChunkAt((ChunkSource *)&v187, v46, (const BlockPos *)&v189);
                v47 = *(_QWORD *)&v187;
                if ( v188 )
                {
                  v48 = (unsigned int *)(v188 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v49 = __ldrex(v48);
                    while ( __strex(v49 - 1, v48) );
                  }
                  else
                    v49 = (*v48)--;
                  if ( v49 == 1 )
                    v50 = (unsigned int *)(HIDWORD(v47) + 8);
                    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v47) + 8))(HIDWORD(v47));
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
                      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v47) + 12))(HIDWORD(v47));
                }
                if ( (_DWORD)v47 )
                  v52 = (int)v193;
                  v194 = v193;
                  v53 = *((_WORD *)v151 + 12);
                  if ( v139 == 1 )
                    v141 = *((_WORD *)v151 + 12);
                    if ( (v43 + 231871 * v45) * (31287121 * (v43 + 231871 * v45) + 11) & 0x100000 )
                      v97 = *(_BYTE *)(Block::mStone + 4);
                      (*(void (__fastcall **)(char *))(*(_DWORD *)Block::mStone + 348))(&v179);
                      v202 = *(_DWORD *)&v179;
                      v203 = v180;
                      v204 = v181;
                      v205 = v182;
                      v206 = v97;
                      v207 = 0;
                      v208 = 0;
                      v209 = 0;
                      if ( (char *)v52 == v195 )
                      {
                        std::vector<std::pair<MapSample,int>,std::allocator<std::pair<MapSample,int>>>::_M_emplace_back_aux<std::pair<MapSample,int>>(
                          (unsigned __int64 *)&v193,
                          (int)&v202);
                        v58 = (int)v194;
                      }
                      else
                        v98 = v203;
                        v99 = v204;
                        v100 = v205;
                        *(_DWORD *)v52 = v202;
                        *(_DWORD *)(v52 + 4) = v98;
                        *(_DWORD *)(v52 + 8) = v99;
                        *(_DWORD *)(v52 + 12) = v100;
                        v58 = v52 + 24;
                        *(_BYTE *)(v52 + 16) = v97;
                        *(_BYTE *)(v52 + 17) = 0;
                        *(_WORD *)(v52 + 18) = 0;
                        *(_DWORD *)(v52 + 20) = 0;
                        v194 = (char *)(v52 + 24);
                      v101 = *(_DWORD *)(v58 - 4) + 100;
                      v54 = *(_BYTE *)(Block::mDirt + 4);
                      (*(void (__fastcall **)(char *))(*(_DWORD *)Block::mDirt + 348))(&v183);
                      v210 = *(_DWORD *)&v183;
                      v211 = v184;
                      v212 = v185;
                      v213 = v186;
                      v214 = v54;
                      v215 = 0;
                      v216 = 0;
                      v217 = 0;
                          (int)&v210);
                        v55 = v211;
                        v56 = v212;
                        v57 = v213;
                        *(_DWORD *)v52 = v210;
                        *(_DWORD *)(v52 + 4) = v55;
                        *(_DWORD *)(v52 + 8) = v56;
                        *(_DWORD *)(v52 + 12) = v57;
                        *(_BYTE *)(v52 + 16) = v54;
                      v101 = *(_DWORD *)(v58 - 4) + 10;
                    *(_DWORD *)(v58 - 4) = v101;
                    v144 = 0;
                    v60 = 0;
                    __asm { VMOV.F32        S27, S20 }
                    __asm { VMOV.F32        S27, S18 }
                    v59 = 0;
                    v176 = 0;
                    v177 = 0;
                    v178 = 0;
                    if ( v149 < 1 )
                      v144 = 0;
                        v127 = v60;
                        v61 = v59 + v43;
                        v126 = v59;
                        v62 = 0;
                        v138 = v61;
                        do
                        {
                          v70 = v62 + v45;
                          v142 = v62;
                          v173 = v138;
                          v174 = 0;
                          v175 = v62 + v45;
                          v71 = (const BlockPos *)BlockSource::getChunkSource(v151);
                          ChunkSource::getAvailableChunkAt((ChunkSource *)&v171, v71, (const BlockPos *)&v173);
                          v72 = v171;
                          if ( v171 )
                          {
                            ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v170, (const BlockPos *)&v173);
                            v73 = LevelChunk::getHeightmap(v72, (const ChunkBlockPos *)&v170);
                            v74 = v171;
                            ChunkBlockPos::ChunkBlockPos((ChunkBlockPos *)&v167, (const BlockPos *)&v173);
                            LevelChunk::getTopRainBlockPos((LevelChunk *)&v168, v74, &v167);
                            v75 = v73 + 1;
                            v76 = *(_DWORD *)(v148 + 4);
                            v166 = FullBlock::AIR;
                            if ( v73 + 1 < v169 )
                              v75 = v169;
                            v77 = v76;
                            if ( v75 < v76 )
                              v77 = v75;
                            v53 = v77;
                            if ( v77 < 2 )
                            {
                              _R0 = &Color::NIL;
                              __asm
                              {
                                VLDR            S29, [R0]
                                VLDR            S31, [R0,#4]
                                VLDR            S17, [R0,#8]
                                VLDR            S19, [R0,#0xC]
                              }
                            }
                            else
                              v145 = v38;
                              if ( v75 > v76 )
                                LOWORD(v75) = v76;
                              _R9 = &Color::NIL;
                              v79 = (signed __int16)v75;
                              do
                                v80 = v79--;
                                v176 = v43;
                                v177 = v79;
                                v178 = v45;
                                BlockSource::getBlockAndData((BlockSource *)&v165, v151, (int)&v176);
                                v166 = v165;
                                v81 = FullBlock::getBlock((FullBlock *)&v166);
                                (*(void (__fastcall **)(float *))(*(_DWORD *)v81 + 344))(&v161);
                                __asm
                                {
                                  VLDR            S29, [SP,#0x1F8+var_148]
                                  VLDR            S0, [R9]
                                  VLDR            S31, [SP,#0x1F8+var_144]
                                  VCMPE.F32       S0, S29
                                  VLDR            S17, [SP,#0x1F8+var_140]
                                  VMRS            APSR_nzcv, FPSCR
                                  VLDR            S19, [SP,#0x1F8+var_13C]
                                }
                                if ( _ZF )
                                  __asm
                                  {
                                    VLDREQ          S0, [R9,#4]
                                    VCMPEEQ.F32     S0, S31
                                    VMRSEQ          APSR_nzcv, FPSCR
                                    VLDR            S0, [R9,#8]
                                    VCMPE.F32       S0, S17
                                    VMRS            APSR_nzcv, FPSCR
                                  }
                                  if ( _ZF )
                                    continue;
                                v53 = v79;
                                if ( (signed __int16)v79 <= 0 )
                                  v38 = v145;
                                  goto LABEL_85;
                                goto LABEL_60;
                                if ( v80 < 2 )
                                  break;
                                  VLDR            S0, [R9,#0xC]
                                  VCMPE.F32       S0, S19
                              while ( _ZF );
                              v53 = v79;
                              if ( v80 < 2 )
                                v38 = v145;
                                goto LABEL_85;
LABEL_60:
                              v63 = (Block *)FullBlock::getBlock((FullBlock *)&v166);
                              v38 = v145;
                              v64 = (Material *)Block::getMaterial(v63);
                              if ( Material::isLiquid(v64) == 1 )
                                v65 = v79 - 1;
                                v66 = v127 + 1;
                                do
                                  v127 = v66;
                                  v158 = v138;
                                  v159 = v65;
                                  v160 = v70;
                                  BlockSource::getBlockAndData((BlockSource *)&v157, v151, (int)&v158);
                                  v67 = (Block *)FullBlock::getBlock((FullBlock *)&v157);
                                  if ( v65 < 2 )
                                    break;
                                  v68 = (Material *)Block::getMaterial(v67);
                                  v69 = Material::isLiquid(v68);
                                  --v65;
                                  v66 = v127 + 1;
                                while ( v69 );
LABEL_85:
                            v83 = (int)v194;
                            _R2 = (int)v193;
                            v85 = v166;
                            if ( v193 == v194 )
                              v87 = v53;
                              v86 = (unsigned int)v166 >> 8;
LABEL_96:
                                VSTR            S29, [SP,#0x1F8+var_B0]
                                VSTR            S31, [SP,#0x1F8+var_B0+4]
                                VSTR            S17, [SP,#0x1F8+var_A8]
                                VSTR            S19, [SP,#0x1F8+var_A8+4]
                              v198 = v166;
                              v199 = v86;
                              v200 = 0;
                              v201 = 0;
                              if ( _ZF )
                                std::vector<std::pair<MapSample,int>,std::allocator<std::pair<MapSample,int>>>::_M_emplace_back_aux<std::pair<MapSample,int>>(
                                  (unsigned __int64 *)&v193,
                                  (int)&v196);
                                v53 = v87;
                                v90 = v194 - 4;
                              else
                                v89 = HIDWORD(v196);
                                v88 = v196;
                                *((_QWORD *)v194 + 1) = v197;
                                *(_DWORD *)v83 = v88;
                                *(_DWORD *)(v83 + 4) = v89;
                                *(_BYTE *)(v83 + 16) = v85;
                                *(_BYTE *)(v83 + 17) = v86;
                                *(_WORD *)(v83 + 18) = 0;
                                *(_DWORD *)(v83 + 20) = 0;
                                v194 = (char *)(v83 + 24);
                                v90 = (char *)(v83 + 20);
                              while ( 1 )
                                  VLDR            S0, [R2]
                                  VCMPE.F32       S29, S0
                                    VLDREQ          S0, [R2,#4]
                                    VCMPEEQ.F32     S31, S0
                                    VLDR            S0, [R2,#8]
                                    VCMPE.F32       S17, S0
                                    __asm
                                    {
                                      VLDREQ          S0, [R2,#0xC]
                                      VCMPEEQ.F32     S19, S0
                                      VMRSEQ          APSR_nzcv, FPSCR
                                    }
                                    if ( *(_WORD *)(_R2 + 16) == v166 )
                                      break;
                                _R2 += 24;
                                if ( v194 == (char *)_R2 )
                                  LOBYTE(v86) = HIBYTE(v166);
                                  v87 = v53;
                                  goto LABEL_96;
                              v90 = (char *)(_R2 + 20);
                            _R0 = v53 / v135;
                            __asm
                              VMOV            S0, R0
                              VCVT.F32.S32    S0, S0
                            ++*(_DWORD *)v90;
                            v144 = 1;
                            __asm { VADD.F32        S27, S0, S27 }
                          }
                          v92 = v172;
                          if ( v172 )
                            v93 = (unsigned int *)(v172 + 4);
                            if ( &pthread_create )
                              __dmb();
                                v94 = __ldrex(v93);
                              while ( __strex(v94 - 1, v93) );
                              v94 = (*v93)--;
                            if ( v94 == 1 )
                              v95 = (unsigned int *)(v92 + 8);
                              (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 8))(v92);
                              if ( &pthread_create )
                                __dmb();
                                  v96 = __ldrex(v95);
                                while ( __strex(v96 - 1, v95) );
                                v96 = (*v95)--;
                              if ( v96 == 1 )
                                (*(void (__fastcall **)(int))(*(_DWORD *)v92 + 12))(v92);
                          v62 = v142 + 1;
                        }
                        while ( v142 + 1 < v149 );
                        v59 = v126 + 1;
                        v60 = v127;
                      while ( v126 + 1 < v149 );
                    v141 = v53;
                  __asm { VMOV.F32        S0, S27 }
                  if ( !_ZF )
                    __asm { VMOVNE.F32      S0, S25 }
                  __asm
                    VSUB.F32        S0, S27, S0
                    VMUL.F32        S0, S0, S22
                    VDIV.F32        S19, S0, S16
                  _R8 = v60 / v135;
                  _R9 = ((_BYTE)v33 + (_BYTE)v147) & 1;
                  v104 = 0;
                  v105 = 1;
                    VMOV            S0, R9
                    VCVT.F32.S32    S17, S0
                  LOWORD(v156) = 0;
                  v154 = 0.0;
                  v155 = 0;
                  v152 = 0.0;
                  v153 = 0.0;
                  v106 = (int)v193;
                    VADD.F32        S0, S17, S24
                    VMUL.F32        S0, S0, S26
                    VADD.F32        S0, S19, S0
                    VCMPE.F32       S0, S30
                    VMRS            APSR_nzcv, FPSCR
                    VCMPE.F32       S0, S28
                  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                    v105 = 2;
                  __asm { VMRS            APSR_nzcv, FPSCR }
                  if ( _NF ^ _VF )
                    v105 = 0;
                  if ( v193 != v194 )
                      v107 = *(_DWORD *)(v106 + 20);
                      if ( v107 > v104 )
                        LODWORD(v109) = *(_QWORD *)v106 >> 32;
                        LODWORD(v108) = *(_QWORD *)v106;
                        *(_QWORD *)&v154 = *(_QWORD *)(v106 + 8);
                        v152 = v108;
                        v153 = v109;
                        LOBYTE(v156) = *(_BYTE *)(v106 + 16);
                        BYTE1(v156) = *(_BYTE *)(v106 + 17);
                        HIWORD(v156) = *(_WORD *)(v106 + 18);
                        v104 = v107;
                      v106 += 24;
                    while ( v194 != (char *)v106 );
                  v110 = (Block *)FullBlock::getBlock((FullBlock *)&v156);
                  v111 = (int *)Block::getMaterial(v110);
                  v112 = Material::isType(v111, 5);
                  v113 = v134 + (v33 - v132) * (v33 - v132);
                  if ( v112 == 1 )
                    __asm
                      VMOV            S0, R8
                      VLDR            S2, =0.2
                      VLDR            S4, =0.1
                    v105 = 1;
                      VCVT.F32.S32    S0, S0
                      VMUL.F32        S2, S17, S2
                      VMUL.F32        S0, S0, S4
                      VADD.F32        S0, S0, S2
                      VCMPE.F32       S0, S21
                      VMRS            APSR_nzcv, FPSCR
                      VCMPE.F32       S0, S23
                    if ( _NF ^ _VF )
                      v105 = 2;
                    __asm { VMRS            APSR_nzcv, FPSCR }
                    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                      v105 = 0;
                  v114 = 0;
                  v115 = 0;
                  if ( v113 > v131 )
                    v115 = 1;
                  if ( !(((_BYTE)v33 + (_BYTE)v147) & 1) )
                    v114 = 1;
                  if ( v33 < 0 || v113 >= v130 || v115 & v114 )
                    v21 = v147;
                    v23 = a5;
                      VLDR            S0, [SP,#0x1F8+var_170]
                      VLDR            S2, [SP,#0x1F8+var_16C]
                    _R0 = &::a4[4 * v105];
                      VLDR            S4, [SP,#0x1F8+var_168]
                      VLDR            S6, [R0]
                      VMUL.F32        S0, S0, S6
                      VMUL.F32        S2, S2, S6
                      VMUL.F32        S4, S4, S6
                      VSTR            S0, [SP,#0x1F8+var_170]
                      VSTR            S2, [SP,#0x1F8+var_16C]
                      VSTR            S4, [SP,#0x1F8+var_168]
                    v155 = 1065353216;
                    v117 = Color::toABGR((Color *)&v152);
                    v118 = v147 + v33 * a5;
                    if ( !a8 || *(_DWORD *)(v129 + 4 * v118) != v117 )
                      if ( a7 )
                        v119 = 5 * v118;
                        HIWORD(v156) = v141;
                        v120 = *a7;
                        v121 = v153;
                        v122 = v154;
                        v123 = v155;
                        *(float *)(v120 + 4 * v119) = v152;
                        v124 = v120 + 4 * v119;
                        *(float *)(v124 + 4) = v121;
                        *(float *)(v124 + 8) = v122;
                        *(_DWORD *)(v124 + 12) = v123;
                        v125 = v156;
                        *(_BYTE *)(v124 + 16) = v156;
                        *(_BYTE *)(v124 + 17) = BYTE1(v125);
                        *(_WORD *)(v124 + 18) = HIWORD(v125);
                      if ( a8 )
                        MapItemSavedData::setPixel(a8, v117, v147, v33);
                      v23 = a5;
                      v136 = 1;
                  v38 = v144;
                else
                  __asm { VMOV.F32        S27, S25 }
                  v21 = v147;
                  v23 = a5;
                __asm { VMOV.F32        S25, S27 }
            ++v33;
          }
          while ( v33 < v150 );
        v33 = v128;
        v36 = v136 & 1;
        v32 = a9;
      }
      ++v21;
    while ( v21 < v137 );
    v20 = v193;
  if ( v20 )
    operator delete(v20);
}


_DWORD *__fastcall MapItem::renderBiomePreviewMap(MapItem *this, Dimension *a2, MapItemSavedData *a3)
{
  MapItem *v3; // r5@1
  Dimension *v4; // r10@1
  int v5; // r4@1
  _DWORD *result; // r0@1
  int v7; // r6@2
  int v8; // r8@2
  int v9; // r11@2
  unsigned int *v10; // r7@2
  unsigned int *v11; // r5@2
  int *v12; // r2@2
  int v13; // r1@2
  int v14; // r9@3
  int v15; // r11@3
  int v16; // r8@4
  unsigned int v17; // r0@8
  int v18; // r6@11
  unsigned int *v19; // r1@12
  unsigned int v20; // r0@14
  unsigned int *v21; // r4@18
  unsigned int v22; // r0@20
  unsigned int v23; // r3@47
  unsigned int v24; // r3@53
  int v25; // [sp+10h] [bp-50h]@3
  _DWORD *v26; // [sp+14h] [bp-4Ch]@2
  MapItem *v27; // [sp+18h] [bp-48h]@1
  int v28; // [sp+20h] [bp-40h]@6
  _DWORD *v29; // [sp+24h] [bp-3Ch]@6
  int v30; // [sp+28h] [bp-38h]@2
  int v31; // [sp+2Ch] [bp-34h]@2
  int v32; // [sp+30h] [bp-30h]@2
  int v33; // [sp+34h] [bp-2Ch]@2

  v3 = this;
  v4 = a2;
  v27 = this;
  v5 = Dimension::getLevel((Dimension *)this);
  result = (_DWORD *)Dimension::getId((Dimension *)v3);
  if ( result == *((_DWORD **)v4 + 8) )
  {
    v30 = v5;
    MapItemSavedData::getMapId((MapItemSavedData *)&v32, v4);
    v7 = v31;
    v8 = v32;
    v9 = v33;
    result = operator new(0x28u);
    v26 = result;
    result[1] = 1;
    v10 = result + 1;
    result[2] = 1;
    v11 = result + 2;
    *result = &off_2702CB0;
    v12 = result + 4;
    *v12 = v5;
    v12[1] = v7;
    v12[2] = v8;
    v12[3] = v9;
    result[8] = 0;
    v13 = 0;
    do
    {
      v14 = 16 * v13 + 16;
      v15 = 16 * v13;
      v25 = v13;
      if ( result )
      {
        v16 = 0;
        do
        {
          if ( MapItemSavedData::isChunkAllEmpty((int)v4, 16 * v16, v15, 16 * v16 + 16, v14) == 1 )
          {
            v28 = 0;
            v29 = v26;
            if ( &pthread_create )
            {
              __dmb();
              do
                v17 = __ldrex(v10);
              while ( __strex(v17 + 1, v10) );
            }
            else
              ++*v10;
            MapItem::_scheduleMapChunkRendering(
              (int)v27,
              (int)v4,
              16 * v16,
              v15,
              16 * v16 + 16,
              v14,
              (unsigned __int64 *)&v28);
            v18 = (int)v29;
            if ( v29 )
              v19 = v29 + 1;
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
          }
          ++v16;
        }
        while ( v16 != 8 );
      }
      else
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 0, v15, 16, v14) == 1 )
          v28 = 0;
          v29 = 0;
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 0, v15, 16, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 16, v15, 32, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 16, v15, 32, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 32, v15, 48, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 32, v15, 48, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 48, v15, 64, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 48, v15, 64, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 64, v15, 80, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 64, v15, 80, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 80, v15, 96, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 80, v15, 96, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 96, v15, 112, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 96, v15, 112, v14, (unsigned __int64 *)&v28);
        if ( MapItemSavedData::isChunkAllEmpty((int)v4, 112, v15, 128, v14) == 1 )
          MapItem::_scheduleMapChunkRendering((int)v27, (int)v4, 112, v15, 128, v14, (unsigned __int64 *)&v28);
      result = v26;
      v13 = v25 + 1;
    }
    while ( v25 != 7 );
    if ( v26 )
      if ( &pthread_create )
        __dmb();
          v23 = __ldrex(v10);
        while ( __strex(v23 - 1, v10) );
        v23 = (*v10)--;
      if ( v23 == 1 )
        (*(void (**)(void))(*v26 + 8))();
        if ( &pthread_create )
          __dmb();
          do
            v24 = __ldrex(v11);
          while ( __strex(v24 - 1, v11) );
        else
          v24 = (*v11)--;
        result = v26;
        if ( v24 == 1 )
          result = (_DWORD *)(*(int (**)(void))(*v26 + 12))();
  }
  return result;
}


char *__fastcall MapItem::fixupOnLoad(MapItem *this, ItemInstance *a2)
{
  char *result; // r0@1
  int v3; // r4@1
  unsigned int *v4; // r0@3
  int v5; // [sp+0h] [bp-18h]@3
  int v6; // [sp+4h] [bp-14h]@3

  result = ItemInstance::getUserData(a2);
  v3 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    result = (char *)CompoundTag::contains(*(_DWORD *)result, (const void **)&MapItem::TAG_MAP_UUID, 8);
    if ( result == (char *)1 )
    {
      v5 = -1;
      v6 = -1;
      v4 = (unsigned int *)CompoundTag::getString(v3, (const void **)&MapItem::TAG_MAP_UUID);
      result = (char *)Util::toInt<long long,(void *)0>(v4, &v5);
      if ( !result )
      {
        CompoundTag::remove(v3, (const void **)&MapItem::TAG_MAP_UUID);
        result = (char *)CompoundTag::putInt64(v3, (const void **)&MapItem::TAG_MAP_UUID, v5, v6);
      }
    }
  }
  return result;
}


void __fastcall MapItem::update(MapItem *this, Level *a2, Entity *a3, MapItemSavedData *a4)
{
  Entity *v4; // r5@1
  MapItemSavedData *v5; // r4@1
  char v6; // r7@3
  int v7; // r6@3
  int v8; // r0@3
  int v9; // r4@3
  unsigned int *v10; // r1@4
  unsigned int v11; // r0@6
  unsigned int *v12; // r5@10
  unsigned int v13; // r0@12
  char v14; // [sp+18h] [bp-38h]@3
  int v15; // [sp+24h] [bp-2Ch]@3
  int v16; // [sp+28h] [bp-28h]@3
  int v17; // [sp+2Ch] [bp-24h]@3
  int v18; // [sp+30h] [bp-20h]@3
  int v19; // [sp+34h] [bp-1Ch]@3

  v4 = a3;
  v5 = a4;
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 524))(a3) == *((_DWORD *)a4 + 8)
    && Entity::hasCategory((int)v4, 1) == 1 )
  {
    v6 = *((_BYTE *)v5 + 36);
    MapItemSavedData::getTrackedMapEntity((MapItemSavedData *)&v18, v5, v4);
    ++*(_DWORD *)(v18 + 32);
    v15 = *((_DWORD *)v5 + 5);
    v16 = *((_DWORD *)v5 + 6);
    v17 = *((_DWORD *)v5 + 7);
    v16 = *(_WORD *)(Entity::getRegion(v4) + 24);
    v7 = Entity::getRegion(v4);
    v8 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 52))(v4);
    BlockPos::BlockPos((int)&v14, v8);
    MapItem::sampleMapData(v7, 1 << v6, (int)&v15, (MapItemSavedData *)&v14, 128, 128, 0, v5, v18);
    v9 = v19;
    if ( v19 )
    {
      v10 = (unsigned int *)(v19 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
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
    }
  }
}


void __fastcall MapItem::inventoryTick(MapItem *this, ItemInstance *a2, Level *a3, Entity *a4, int a5, int a6)
{
  Entity *v6; // r8@1
  Level *v7; // r6@1
  ItemInstance *v8; // r5@1
  int v9; // r1@1
  int v10; // r1@3
  int v11; // r4@4
  signed int v12; // r4@4
  void *v13; // r0@4
  int v14; // r4@6
  int *v15; // r0@6
  void *v16; // r0@6
  int v17; // r0@7
  int v18; // r4@10
  void *v19; // r0@10
  void *v20; // r0@11
  unsigned int *v21; // r2@12
  signed int v22; // r1@14
  __int64 v23; // kr00_8@16
  MapItemSavedData *v24; // r9@17
  int v25; // r0@17
  __int64 v26; // r10@17
  int v27; // ST0C_4@17
  int v28; // r0@17
  MapItemSavedData *v29; // r2@17
  MapItemSavedData *v30; // r0@18
  MapItemSavedData *v31; // r4@18
  MapItem *v32; // r0@19
  Level *v33; // r1@19
  unsigned int *v34; // r2@22
  unsigned int *v35; // r2@30
  signed int v36; // r1@32
  unsigned int *v37; // r2@34
  signed int v38; // r1@36
  signed int v39[3]; // [sp+10h] [bp-58h]@17
  int v40; // [sp+20h] [bp-48h]@10
  int v41; // [sp+28h] [bp-40h]@6
  int v42; // [sp+2Ch] [bp-3Ch]@6
  int v43; // [sp+34h] [bp-34h]@4
  unsigned int v44; // [sp+38h] [bp-30h]@1
  unsigned int v45; // [sp+3Ch] [bp-2Ch]@2

  v6 = a4;
  v7 = a3;
  v8 = a2;
  MapItem::getMapId((MapItem *)&v44, a2);
  if ( Level::isClientSide(v7) == 1 )
  {
    Level::requestMapInfo((signed int)v7, v9, v44, v45);
  }
  else
    if ( ItemInstance::hasUserData(v8) != 1 )
      goto LABEL_51;
    v11 = *(_DWORD *)ItemInstance::getUserData(v8);
    sub_21E94B4((void **)&v43, "destination");
    v12 = CompoundTag::contains(v11, (const void **)&v43);
    v10 = v43;
    v13 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
    {
      v34 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v34);
        while ( __strex(v10 - 1, v34) );
      }
      else
        v10 = (*v34)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    if ( v12 != 1 )
LABEL_51:
      v23 = *(_QWORD *)&v44;
      if ( (v44 & v45) == -1 )
        v39[0] = -1;
        v39[1] = -1;
        v24 = Level::createMapSavedData((int)v7, (unsigned __int64 *)v39);
        v25 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 52))(v6);
        v26 = *(_QWORD *)v25;
        v27 = *(_DWORD *)(v25 + 8);
        v28 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 524))(v6);
        MapItemSavedData::setOrigin((int)v24, *(float *)&v26, SHIDWORD(v26), v27, 0, v28);
        MapItemSavedData::setDirty(v24);
        MapItem::setItemInstanceInfo(v8, v24, v29);
      v30 = Level::getMapSavedData((int)v7, v10, v23);
      v31 = v30;
      if ( v30 )
        MapItemSavedData::tickCarriedBy(v30, v6, v8);
        if ( a6 == 1 )
          MapItem::update(v32, v33, v6, v31);
    else
      v14 = *(_DWORD *)ItemInstance::getUserData(v8);
      sub_21E94B4((void **)&v41, "destination");
      v15 = (int *)CompoundTag::getString(v14, (const void **)&v41);
      sub_21E8AF4(&v42, v15);
      v16 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v41 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
        }
        else
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = sub_21E7D6C((const void **)&v42, "mansion");
      if ( !v17 || (v17 = sub_21E7D6C((const void **)&v42, "monument")) == 0 )
        MapItem::_makeNewExplorationMap(v17, (int)v8, (int)v7, v6, (int)&v42);
      v18 = *(_DWORD *)ItemInstance::getUserData(v8);
      sub_21E94B4((void **)&v40, "destination");
      CompoundTag::remove(v18, (const void **)&v40);
      v19 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v40 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v42 - 12);
      if ( (int *)(v42 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v42 - 4);
            v22 = __ldrex(v21);
          while ( __strex(v22 - 1, v21) );
          v22 = (*v21)--;
        if ( v22 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
}


void __fastcall MapItem::buildDescriptionId(MapItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  MapItem::buildDescriptionId(this, a2, a3);
}


void __fastcall MapItem::sampleMapData(int a1, int a2, int a3, MapItemSavedData *a4, int a5, signed int a6, int *a7, MapItemSavedData *a8, int a9)
{
  MapItem::sampleMapData(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


void __fastcall MapItem::~MapItem(MapItem *this)
{
  MapItem::~MapItem(this);
}


int __fastcall MapItem::MapItem(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_21E94B4((void **)&v6, "map");
  ComplexItem::ComplexItem(v1, (const void **)&v6, 102);
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_2702B74;
  *(_DWORD *)(v1 + 116) = &unk_28898CC;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  Item::setStackedByData((Item *)v1, 1);
  return v1;
}


int __fastcall MapItem::getMapId(MapItem *this, const ItemInstance *a2)
{
  MapItem *v2; // r4@1
  int *v3; // r0@1
  int v4; // r5@1
  __int64 v5; // r0@3
  unsigned int *v6; // r0@5

  v2 = this;
  v3 = (int *)ItemInstance::getUserData(a2);
  v4 = *v3;
  if ( !*v3 )
  {
LABEL_6:
    LODWORD(v5) = -1;
    *(_DWORD *)v2 = -1;
    *((_DWORD *)v2 + 1) = -1;
    return v5;
  }
  if ( CompoundTag::contains(*v3, (const void **)&MapItem::TAG_MAP_UUID, 4) != 1 )
    if ( CompoundTag::contains(v4, (const void **)&MapItem::TAG_MAP_UUID, 8) == 1 )
    {
      *(_DWORD *)v2 = -1;
      *((_DWORD *)v2 + 1) = -1;
      v6 = (unsigned int *)CompoundTag::getString(v4, (const void **)&MapItem::TAG_MAP_UUID);
      if ( !Util::toInt<long long,(void *)0>(v6, v2) )
      {
        CompoundTag::remove(v4, (const void **)&MapItem::TAG_MAP_UUID);
        LODWORD(v5) = CompoundTag::putInt64(
                        v4,
                        (const void **)&MapItem::TAG_MAP_UUID,
                        *(_QWORD *)v2,
                        *(_QWORD *)v2 >> 32);
        return v5;
      }
    }
    goto LABEL_6;
  v5 = CompoundTag::getInt64(v4, (const void **)&MapItem::TAG_MAP_UUID);
  *(_QWORD *)v2 = v5;
  return v5;
}


int __fastcall MapItem::update(MapItem *this, BlockSource *a2, const BlockPos *a3, MapItemSavedData *a4)
{
  int result; // r0@1
  int v5; // r4@3
  unsigned int *v6; // r1@4
  unsigned int *v7; // r5@10
  int v8; // [sp+0h] [bp-18h]@1
  int v9; // [sp+4h] [bp-14h]@3

  MapItemSavedData::getTrackedMapEntity((MapItemSavedData *)&v8, a4, a3);
  result = v8;
  if ( v8 )
    ++*(_DWORD *)(v8 + 32);
  v5 = v9;
  if ( v9 )
  {
    v6 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = __ldrex(v6);
      while ( __strex(result - 1, v6) );
    }
    else
      result = (*v6)--;
    if ( result == 1 )
      v7 = (unsigned int *)(v5 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v7);
        while ( __strex(result - 1, v7) );
      }
      else
        result = (*v7)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  return result;
}


_DWORD *__fastcall MapItem::_makeNewExplorationMap(int a1, int a2, int a3, Entity *this, int a5)
{
  Entity *v5; // r5@1
  Level *v6; // r8@1
  ItemInstance *v7; // r11@1
  BlockSource *v8; // r10@1
  const void **v9; // r6@1
  Dimension *v10; // r0@2
  int v11; // r4@2
  Level *v12; // r9@2
  int (__fastcall *v13)(int, int, char *, int *); // r8@2
  int v14; // r7@2
  int v15; // r0@2
  int v16; // r0@2
  signed int v17; // r4@3
  int v18; // r0@4
  unsigned __int8 v19; // r5@7
  MapItemSavedData *v20; // r7@10
  ItemInstance *v21; // r1@10
  MapItemSavedData *v22; // r2@10
  char v23; // r6@10
  int v24; // r0@10
  int v25; // r5@11
  unsigned int *v26; // r1@12
  unsigned int v27; // r0@14
  unsigned int *v28; // r4@18
  unsigned int v29; // r0@20
  _DWORD *result; // r0@25
  char *v31; // r0@26
  MapItem *v32; // r0@27
  MapItemSavedData *v33; // r2@27
  char v34; // [sp+Ch] [bp-64h]@11
  int v35; // [sp+10h] [bp-60h]@11
  char v36; // [sp+14h] [bp-5Ch]@10
  int v37; // [sp+18h] [bp-58h]@10
  int v38; // [sp+1Ch] [bp-54h]@10
  unsigned __int64 v39; // [sp+20h] [bp-50h]@10
  int v40; // [sp+28h] [bp-48h]@4
  int v41; // [sp+2Ch] [bp-44h]@4
  int v42; // [sp+30h] [bp-40h]@4
  char v43; // [sp+34h] [bp-3Ch]@2
  int v44; // [sp+40h] [bp-30h]@1
  int v45; // [sp+44h] [bp-2Ch]@1
  int v46; // [sp+48h] [bp-28h]@1

  v5 = this;
  v6 = (Level *)a3;
  v7 = (ItemInstance *)a2;
  v8 = (BlockSource *)Entity::getRegion(this);
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v9 = (const void **)a5;
  if ( BlockSource::getDimensionId(v8)
    || (v10 = (Dimension *)BlockSource::getDimension(v8),
        v11 = Dimension::getWorldGenerator(v10),
        v12 = v6,
        v13 = *(int (__fastcall **)(int, int, char *, int *))(*(_DWORD *)v11 + 12),
        v14 = WorldGenerator::getFeatureId((const void **)a5),
        v15 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5),
        BlockPos::BlockPos((int)&v43, v15),
        v9 = (const void **)a5,
        v16 = v13(v11, v14, &v43, &v44),
        v6 = v12,
        !v16) )
  {
    v18 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 52))(v5);
    BlockPos::BlockPos((int)&v40, v18);
    v17 = 0;
    v44 = v40;
    v45 = v41;
    v46 = v42;
  }
  else
    v17 = 1;
  if ( sub_21E7D6C(v9, "monument") )
    if ( sub_21E7D6C(v9, "mansion") )
    {
      v19 = 12;
    }
    else
      ItemInstance::setAuxValue(v7, 4);
      v19 = 14;
    ItemInstance::setAuxValue(v7, 3);
    v19 = 15;
  v39 = -1LL;
  v20 = Level::createMapSavedData((int)v6, &v39);
  EmptyMapItem::addPlayerMarker(v7, v21);
  MapItem::setItemInstanceInfo(v7, v20, v22);
  MapItemSavedData::enableUnlimitedTracking(v20);
  MapItemSavedData::setScale(v20, 2);
  Vec3::Vec3((int)&v36, (int)&v44);
  v23 = *((_BYTE *)v20 + 36);
  v24 = BlockSource::getDimensionId(v8);
  MapItemSavedData::setOrigin((int)v20, *(float *)&v36, v37, v38, v23, v24);
  if ( v17 == 1 )
    MapItemSavedData::addTrackedMapEntity((int)&v34, (int)v20, (int)&v44, v8, v19);
    v25 = v35;
    if ( v35 )
      v26 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 == 1 )
        v28 = (unsigned int *)(v25 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
        if ( &pthread_create )
        {
          __dmb();
          do
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
        }
        else
          v29 = (*v28)--;
        if ( v29 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
  *((_BYTE *)v20 + 17) = 1;
  result = (_DWORD *)Item::mFilledMap;
  if ( *(_DWORD *)v7 == Item::mFilledMap )
    v31 = Level::getLevelData(v6);
    result = (_DWORD *)LevelData::getGenerator((LevelData *)v31);
    if ( result != (_DWORD *)2 )
      v32 = (MapItem *)BlockSource::getDimension(v8);
      result = MapItem::renderBiomePreviewMap(v32, (Dimension *)v20, v33);
  return result;
}


int __fastcall MapItem::~MapItem(MapItem *this)
{
  MapItem *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2702B74;
  TextureAtlasItem::~TextureAtlasItem((MapItem *)((char *)this + 116));
  return j_j_j__ZN11ComplexItemD2Ev(v1);
}


_BOOL4 __fastcall MapItem::doesDisplayPlayerMarkers(MapItem *this, const ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  int *v3; // r0@2
  int *v4; // r0@3
  _BOOL4 result; // r0@3

  v2 = this;
  if ( ItemInstance::hasUserData(this) != 1
    || (v3 = (int *)ItemInstance::getUserData(v2),
        CompoundTag::contains(*v3, (const void **)&MapItem::TAG_MAP_PLAYER_DISPLAY) != 1) )
  {
    result = 0;
  }
  else
    v4 = (int *)ItemInstance::getUserData(v2);
    result = CompoundTag::getBoolean(*v4, (const void **)&MapItem::TAG_MAP_PLAYER_DISPLAY);
  return result;
}


void __fastcall MapItem::inventoryTick(MapItem *this, ItemInstance *a2, Level *a3, Entity *a4, int a5, int a6)
{
  MapItem::inventoryTick(this, a2, a3, a4, a5, a6);
}


void __fastcall MapItem::~MapItem(MapItem *this)
{
  MapItem *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2702B74;
  TextureAtlasItem::~TextureAtlasItem((MapItem *)((char *)this + 116));
  ComplexItem::~ComplexItem(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall MapItem::appendFormattedHovertext(const ItemInstance *a1, ItemInstance *a2, Level *a3, const void **a4)
{
  ItemInstance *v4; // r5@1
  const ItemInstance *v5; // r7@1
  const void **v6; // r9@1
  Level *v7; // r6@1
  void *v8; // r0@3
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  MapItemSavedData *v11; // r6@8
  void *v12; // r0@10
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  void *v15; // r0@20
  void *v16; // r0@26
  const void **v17; // r0@27
  __int64 v18; // kr00_8@27
  unsigned int v19; // r1@27
  const void **v20; // r0@29
  char *v21; // r0@31
  void *v22; // r0@32
  void *v23; // r0@33
  void *v24; // r0@34
  signed int v25; // r7@36
  int *v26; // r0@36
  const void **v27; // r0@38
  int *v28; // r0@39
  int *v29; // r0@40
  const void **v30; // r0@41
  signed int v31; // r6@41
  signed int v32; // r5@41
  const void **v33; // r0@42
  _BYTE *v34; // r3@43 OVERLAPPED
  unsigned int v35; // r1@43
  unsigned int v36; // r4@43
  const void **v37; // r0@45
  const void **v38; // r0@47
  const void **v39; // r0@47
  char *v40; // r0@47
  char *v41; // r0@48
  char *v42; // r0@49
  char *v43; // r0@50
  void *v44; // r0@52
  void *v45; // r0@53
  void *v46; // r0@55
  void *v47; // r0@56
  void *v48; // r0@57
  void *v49; // r0@58
  void *v50; // r0@59
  signed int v51; // r11@60
  char *v52; // r0@60
  const void **v53; // r0@60
  void *v54; // r0@60
  __int64 v55; // r6@61
  char *v56; // r1@62
  unsigned int *v57; // r2@63
  signed int v58; // r4@65
  char *v59; // r4@69
  int *v60; // r0@70
  void *v61; // r0@75
  void *v62; // r0@76
  char *v63; // r0@77
  void *v64; // r0@77
  char *v65; // r4@78
  int v66; // r6@78
  unsigned int *v67; // r2@80
  signed int v68; // r1@82
  int *v69; // r0@88
  void *v70; // r0@93
  void *v71; // r0@94
  unsigned int *v72; // r2@104
  signed int v73; // r1@106
  unsigned int *v74; // r2@108
  signed int v75; // r1@110
  unsigned int *v76; // r2@112
  signed int v77; // r1@114
  unsigned int *v78; // r2@116
  signed int v79; // r1@118
  unsigned int *v80; // r2@120
  signed int v81; // r1@122
  unsigned int *v82; // r2@124
  signed int v83; // r1@126
  unsigned int *v84; // r2@128
  signed int v85; // r1@130
  unsigned int *v86; // r2@132
  signed int v87; // r1@134
  unsigned int *v88; // r2@136
  signed int v89; // r1@138
  unsigned int *v90; // r2@140
  signed int v91; // r1@142
  unsigned int *v92; // r2@144
  signed int v93; // r1@146
  unsigned int *v94; // r2@148
  signed int v95; // r1@150
  unsigned int *v96; // r2@152
  signed int v97; // r1@154
  unsigned int *v98; // r2@156
  signed int v99; // r1@158
  unsigned int *v100; // r2@160
  signed int v101; // r1@162
  unsigned int *v102; // r2@164
  signed int v103; // r1@166
  unsigned int *v104; // r2@168
  signed int v105; // r1@170
  unsigned int *v106; // r2@172
  signed int v107; // r1@174
  unsigned int *v108; // r2@176
  signed int v109; // r1@178
  unsigned int *v110; // r2@188
  signed int v111; // r1@190
  unsigned int *v112; // r2@192
  signed int v113; // r1@194
  unsigned int *v114; // r2@196
  signed int v115; // r1@198
  unsigned int *v116; // r2@200
  signed int v117; // r1@202
  int v118; // [sp+4h] [bp-CCh]@20
  int v119; // [sp+8h] [bp-C8h]@20
  int v120; // [sp+Ch] [bp-C4h]@77
  int v121; // [sp+10h] [bp-C0h]@77
  char *v122; // [sp+14h] [bp-BCh]@77
  char *v123; // [sp+18h] [bp-B8h]@77
  char *v124; // [sp+1Ch] [bp-B4h]@77
  int v125; // [sp+24h] [bp-ACh]@77
  int v126; // [sp+28h] [bp-A8h]@77
  int v127; // [sp+2Ch] [bp-A4h]@60
  char *v128; // [sp+30h] [bp-A0h]@60
  char *v129; // [sp+34h] [bp-9Ch]@60
  char *v130; // [sp+38h] [bp-98h]@60
  int v131; // [sp+40h] [bp-90h]@60
  int v132; // [sp+44h] [bp-8Ch]@60
  int v133; // [sp+4Ch] [bp-84h]@42
  int v134; // [sp+50h] [bp-80h]@42
  int v135; // [sp+58h] [bp-78h]@41
  int v136; // [sp+5Ch] [bp-74h]@41
  _DWORD *v137; // [sp+60h] [bp-70h]@41
  int v138; // [sp+68h] [bp-68h]@38
  int v139; // [sp+6Ch] [bp-64h]@38
  unsigned int v140; // [sp+70h] [bp-60h]@38
  char *v141; // [sp+74h] [bp-5Ch]@47
  char *v142; // [sp+78h] [bp-58h]@47
  char *v143; // [sp+7Ch] [bp-54h]@47
  int v144; // [sp+80h] [bp-50h]@27
  int v145; // [sp+88h] [bp-48h]@27
  int v146; // [sp+8Ch] [bp-44h]@27
  unsigned int v147; // [sp+90h] [bp-40h]@27
  char *v148; // [sp+94h] [bp-3Ch]@31
  int v149; // [sp+98h] [bp-38h]@26
  int v150; // [sp+9Ch] [bp-34h]@10
  int v151; // [sp+A0h] [bp-30h]@15
  int v152; // [sp+A4h] [bp-2Ch]@3
  char v153; // [sp+A8h] [bp-28h]@62

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( ItemInstance::getAuxValue(a2) >= 3 )
  {
    if ( ItemInstance::hasCustomHoverName(v4) == 1 )
    {
      ItemInstance::getHoverName((ItemInstance *)&v152, (int)v4);
      sub_21E72F0(v6, (const void **)&v152);
      v8 = (void *)(v152 - 12);
      if ( (int *)(v152 - 12) == &dword_28898C0 )
        return;
      v9 = (unsigned int *)(v152 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_101;
      }
    }
    else
      ItemInstance::getName((ItemInstance *)&v151, (int)v4);
      sub_21E72F0(v6, (const void **)&v151);
      v8 = (void *)(v151 - 12);
      if ( (int *)(v151 - 12) == &dword_28898C0 )
      v9 = (unsigned int *)(v151 - 4);
LABEL_100:
    v10 = (*v9)--;
LABEL_101:
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
    return;
  }
  v11 = Level::getMapSavedData(v7, v4);
  if ( v11 )
      ItemInstance::getHoverName((ItemInstance *)&v150, (int)v4);
      sub_21E72F0(v6, (const void **)&v150);
      v12 = (void *)(v150 - 12);
      if ( (int *)(v150 - 12) == &dword_28898C0 )
        goto LABEL_36;
      v13 = (unsigned int *)(v150 - 4);
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
        goto LABEL_185;
      Item::buildDescriptionName((Item *)&v149, v5);
      sub_21E72F0(v6, (const void **)&v149);
      v16 = (void *)(v149 - 12);
      if ( (int *)(v149 - 12) != &dword_28898C0 )
        v100 = (unsigned int *)(v149 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v101 = __ldrex(v100);
          while ( __strex(v101 - 1, v100) );
        }
        else
          v101 = (*v100)--;
        if ( v101 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      sub_21E72F0(v6, (const void **)&Util::NEW_LINE);
      sub_21E94B4((void **)&v145, "item.map.name");
      I18n::get(&v146, (int **)&v145);
      v17 = sub_21E7408((const void **)&v146, " ", 1u);
      v147 = (unsigned int)*v17;
      *v17 = &unk_28898CC;
      Util::toString<long long,(void *)0,(void *)0>((void **)&v144, (int)&unk_28898CC, *(_QWORD *)v11);
      v18 = *(_QWORD *)(v147 - 12);
      v19 = *(_DWORD *)(v144 - 12) + v18;
      if ( v19 > HIDWORD(v18) && v19 <= *(_DWORD *)(v144 - 8) )
        v20 = sub_21E82D8((const void **)&v144, 0, v147, (_BYTE *)v18);
      else
        v20 = sub_21E72F0((const void **)&v147, (const void **)&v144);
      v148 = (char *)*v20;
      *v20 = &unk_28898CC;
      sub_21E72F0(v6, (const void **)&v148);
      v21 = v148 - 12;
      if ( (int *)(v148 - 12) != &dword_28898C0 )
        v102 = (unsigned int *)(v148 - 4);
            v103 = __ldrex(v102);
          while ( __strex(v103 - 1, v102) );
          v103 = (*v102)--;
        if ( v103 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v144 - 12);
      if ( (int *)(v144 - 12) != &dword_28898C0 )
        v104 = (unsigned int *)(v144 - 4);
            v105 = __ldrex(v104);
          while ( __strex(v105 - 1, v104) );
          v105 = (*v104)--;
        if ( v105 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v147 - 12);
      if ( (int *)(v147 - 12) != &dword_28898C0 )
        v106 = (unsigned int *)(v147 - 4);
            v107 = __ldrex(v106);
          while ( __strex(v107 - 1, v106) );
          v107 = (*v106)--;
        if ( v107 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v24 = (void *)(v146 - 12);
      if ( (int *)(v146 - 12) != &dword_28898C0 )
        v108 = (unsigned int *)(v146 - 4);
            v109 = __ldrex(v108);
          while ( __strex(v109 - 1, v108) );
          v109 = (*v108)--;
        if ( v109 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v12 = (void *)(v145 - 12);
      if ( (int *)(v145 - 12) == &dword_28898C0 )
LABEL_36:
        sub_21E72F0(v6, (const void **)&Util::NEW_LINE);
        v25 = *((_BYTE *)v11 + 36);
        v26 = (int *)ItemInstance::getUserData(v4);
        if ( CompoundTag::getBoolean(*v26, (const void **)&MapItem::TAG_MAP_SCALING) )
          ++v25;
        sub_21E94B4((void **)&v138, "map.toolTip.displayMarkers");
        I18n::get(&v139, (int **)&v138);
        v27 = sub_21E7408((const void **)&v139, ": ", 2u);
        v140 = (unsigned int)*v27;
        *v27 = &unk_28898CC;
        if ( ItemInstance::hasUserData(v4) != 1
          || (v28 = (int *)ItemInstance::getUserData(v4),
              CompoundTag::contains(*v28, (const void **)&MapItem::TAG_MAP_PLAYER_DISPLAY) != 1)
          || (v29 = (int *)ItemInstance::getUserData(v4),
              CompoundTag::getBoolean(*v29, (const void **)&MapItem::TAG_MAP_PLAYER_DISPLAY) != 1) )
          sub_21E94B4((void **)&v133, "gui.no");
          I18n::get(&v134, (int **)&v133);
          v33 = sub_21E82D8((const void **)&v134, 0, dword_2807FC8, *(_BYTE **)(dword_2807FC8 - 12));
          v31 = 1;
          v32 = 0;
          v137 = *v33;
          *v33 = &unk_28898CC;
          sub_21E94B4((void **)&v135, "gui.yes");
          I18n::get(&v136, (int **)&v135);
          v30 = sub_21E82D8((const void **)&v136, 0, dword_2807FC0, *(_BYTE **)(dword_2807FC0 - 12));
          v31 = 0;
          v32 = 1;
          v137 = *v30;
          *v30 = &unk_28898CC;
        *(_QWORD *)&v34 = *(_QWORD *)(v140 - 12);
        v35 = (unsigned int)&v34[*(v137 - 3)];
        if ( v35 > v36 && v35 <= *(v137 - 2) )
          v37 = sub_21E82D8((const void **)&v137, 0, v140, v34);
          v37 = sub_21E72F0((const void **)&v140, (const void **)&v137);
        v141 = (char *)*v37;
        *v37 = &unk_28898CC;
        v38 = sub_21E72F0((const void **)&v141, (const void **)&unk_2807FE4);
        v142 = (char *)*v38;
        *v38 = &unk_28898CC;
        v39 = sub_21E72F0((const void **)&v142, (const void **)&Util::NEW_LINE);
        v143 = (char *)*v39;
        *v39 = &unk_28898CC;
        sub_21E72F0(v6, (const void **)&v143);
        v40 = v143 - 12;
        if ( (int *)(v143 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v143 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
          }
          else
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = v142 - 12;
        if ( (int *)(v142 - 12) != &dword_28898C0 )
          v74 = (unsigned int *)(v142 - 4);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v42 = v141 - 12;
        if ( (int *)(v141 - 12) != &dword_28898C0 )
          v76 = (unsigned int *)(v141 - 4);
              v77 = __ldrex(v76);
            while ( __strex(v77 - 1, v76) );
            v77 = (*v76)--;
          if ( v77 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        v43 = (char *)(v137 - 3);
        if ( v137 - 3 != &dword_28898C0 )
          v78 = v137 - 1;
              v79 = __ldrex(v78);
            while ( __strex(v79 - 1, v78) );
            v79 = (*v78)--;
          if ( v79 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        if ( v31 == 1 )
          v44 = (void *)(v134 - 12);
          if ( (int *)(v134 - 12) != &dword_28898C0 )
            v110 = (unsigned int *)(v134 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v111 = __ldrex(v110);
              while ( __strex(v111 - 1, v110) );
            }
            else
              v111 = (*v110)--;
            if ( v111 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          v45 = (void *)(v133 - 12);
          if ( (int *)(v133 - 12) != &dword_28898C0 )
            v112 = (unsigned int *)(v133 - 4);
                v113 = __ldrex(v112);
              while ( __strex(v113 - 1, v112) );
              v113 = (*v112)--;
            if ( v113 <= 0 )
              j_j_j_j__ZdlPv_9(v45);
        if ( v32 == 1 )
          v46 = (void *)(v136 - 12);
          if ( (int *)(v136 - 12) != &dword_28898C0 )
            v114 = (unsigned int *)(v136 - 4);
                v115 = __ldrex(v114);
              while ( __strex(v115 - 1, v114) );
              v115 = (*v114)--;
            if ( v115 <= 0 )
              j_j_j_j__ZdlPv_9(v46);
          v47 = (void *)(v135 - 12);
          if ( (int *)(v135 - 12) != &dword_28898C0 )
            v116 = (unsigned int *)(v135 - 4);
                v117 = __ldrex(v116);
              while ( __strex(v117 - 1, v116) );
              v117 = (*v116)--;
            if ( v117 <= 0 )
              j_j_j_j__ZdlPv_9(v47);
        v48 = (void *)(v140 - 12);
        if ( (int *)(v140 - 12) != &dword_28898C0 )
          v80 = (unsigned int *)(v140 - 4);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v49 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
          v82 = (unsigned int *)(v139 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        v50 = (void *)(v138 - 12);
        if ( (int *)(v138 - 12) != &dword_28898C0 )
          v84 = (unsigned int *)(v138 - 4);
              v85 = __ldrex(v84);
            while ( __strex(v85 - 1, v84) );
            v85 = (*v84)--;
          if ( v85 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        sub_21E94B4((void **)&v131, "map.toolTip.scaling");
        v51 = v25;
        Util::toString<int,(void *)0,(void *)0>((void **)&v127, 1 << v25);
        v128 = 0;
        v129 = 0;
        v130 = 0;
        v52 = (char *)operator new(4u);
        v128 = v52;
        v130 = v52 + 4;
        v129 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                         (int)&v127,
                         (int)&v128,
                         (int)v52);
        I18n::get(&v132, &v131, (unsigned __int64 *)&v128);
        v53 = sub_21E72F0(v6, (const void **)&v132);
        sub_21E72F0(v53, (const void **)&Util::NEW_LINE);
        v54 = (void *)(v132 - 12);
        if ( (int *)(v132 - 12) != &dword_28898C0 )
          v86 = (unsigned int *)(v132 - 4);
              v87 = __ldrex(v86);
            while ( __strex(v87 - 1, v86) );
            v87 = (*v86)--;
          if ( v87 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        v55 = *(_QWORD *)&v128;
        if ( v128 != v129 )
          v56 = &v153;
            v60 = (int *)(*(_DWORD *)v55 - 12);
            if ( v60 != &dword_28898C0 )
              v57 = (unsigned int *)(*(_DWORD *)v55 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v58 = __ldrex(v57);
                while ( __strex(v58 - 1, v57) );
              }
              else
                v58 = (*v57)--;
              if ( v58 <= 0 )
                v59 = v56;
                j_j_j_j__ZdlPv_9(v60);
                v56 = v59;
            LODWORD(v55) = v55 + 4;
          while ( (_DWORD)v55 != HIDWORD(v55) );
          LODWORD(v55) = v128;
        if ( (_DWORD)v55 )
          operator delete((void *)v55);
        v61 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
          v88 = (unsigned int *)(v127 - 4);
              v89 = __ldrex(v88);
            while ( __strex(v89 - 1, v88) );
            v89 = (*v88)--;
          if ( v89 <= 0 )
            j_j_j_j__ZdlPv_9(v61);
        v62 = (void *)(v131 - 12);
        if ( (int *)(v131 - 12) != &dword_28898C0 )
          v90 = (unsigned int *)(v131 - 4);
              v91 = __ldrex(v90);
            while ( __strex(v91 - 1, v90) );
            v91 = (*v90)--;
          if ( v91 <= 0 )
            j_j_j_j__ZdlPv_9(v62);
        sub_21E94B4((void **)&v125, "map.toolTip.level");
        Util::toString<int,(void *)0,(void *)0>((void **)&v120, v51);
        Util::toString<int,(void *)0,(void *)0>((void **)&v121, 4);
        v122 = 0;
        v123 = 0;
        v124 = 0;
        v63 = (char *)operator new(8u);
        v122 = v63;
        v124 = v63 + 8;
        v123 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                         (int)&v120,
                         (int)&v122,
                         (int)v63);
        I18n::get(&v126, &v125, (unsigned __int64 *)&v122);
        sub_21E72F0(v6, (const void **)&v126);
        v64 = (void *)(v126 - 12);
        if ( (int *)(v126 - 12) != &dword_28898C0 )
          v92 = (unsigned int *)(v126 - 4);
              v93 = __ldrex(v92);
            while ( __strex(v93 - 1, v92) );
            v93 = (*v92)--;
          if ( v93 <= 0 )
            j_j_j_j__ZdlPv_9(v64);
        v66 = (int)v123;
        v65 = v122;
        if ( v122 != v123 )
            v69 = (int *)(*(_DWORD *)v65 - 12);
            if ( v69 != &dword_28898C0 )
              v67 = (unsigned int *)(*(_DWORD *)v65 - 4);
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j__ZdlPv_9(v69);
            v65 += 4;
          while ( v65 != (char *)v66 );
          v65 = v122;
        if ( v65 )
          operator delete(v65);
        v70 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v94 = (unsigned int *)(v121 - 4);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          if ( v95 <= 0 )
            j_j_j_j__ZdlPv_9(v70);
        v71 = (void *)(v120 - 12);
        if ( (int *)(v120 - 12) != &dword_28898C0 )
          v96 = (unsigned int *)(v120 - 4);
              v97 = __ldrex(v96);
            while ( __strex(v97 - 1, v96) );
            v97 = (*v96)--;
          if ( v97 <= 0 )
            j_j_j_j__ZdlPv_9(v71);
        v8 = (void *)(v125 - 12);
        if ( (int *)(v125 - 12) != &dword_28898C0 )
          v9 = (unsigned int *)(v125 - 4);
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
            goto LABEL_101;
          goto LABEL_100;
      v13 = (unsigned int *)(v145 - 4);
LABEL_185:
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
    v14 = (*v13)--;
    goto LABEL_185;
  sub_21E94B4((void **)&v118, "map.toolTip.unkown");
  I18n::get(&v119, (int **)&v118);
  sub_21E72F0(v6, (const void **)&v119);
  v15 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v119 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v8 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v118 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_101;
    goto LABEL_100;
}


signed int __fastcall MapItem::refreshedInContainer(MapItem *this, ItemInstance *a2, Level *a3)
{
  Level *v3; // r4@1
  int v4; // r1@1
  unsigned int v6; // [sp+0h] [bp-10h]@1
  unsigned int v7; // [sp+4h] [bp-Ch]@1

  v3 = a3;
  MapItem::getMapId((MapItem *)&v6, a2);
  return Level::requestMapInfo((signed int)v3, v4, v6, v7);
}


int __fastcall MapItem::setIcon(int a1, int **a2, int a3)
{
  int **v3; // r4@1
  int v4; // r5@1
  int *v5; // r4@1

  v3 = a2;
  v4 = a1;
  Item::setIcon(a1, a2, a3);
  v5 = Item::getTextureItem(v3);
  EntityInteraction::setInteractText((int *)(v4 + 116), v5);
  *(_DWORD *)(v4 + 120) = v5[1];
  std::vector<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>,std::allocator<std::vector<TextureUVCoordinateSet,std::allocator<TextureUVCoordinateSet>>>>::operator=(
    v4 + 124,
    (unsigned __int64 *)v5 + 1);
  return v4;
}


void __fastcall MapItem::update(MapItem *this, Level *a2, Entity *a3, MapItemSavedData *a4)
{
  MapItem::update(this, a2, a3, a4);
}
