

void __fastcall EventToSoundListMap::getSound(int a1, unsigned __int64 *a2, unsigned int a3, unsigned int a4)
{
  EventToSoundListMap::getSound(a1, a2, a3, a4);
}


Json::Value *__fastcall EventToSoundListMap::parse(EventToSoundListMap *this, const Json::Value *a2)
{
  Json::Value *v2; // r5@1
  EventToSoundListMap *v3; // r9@1
  Json::Value *result; // r0@1
  JsonUtil *v5; // r0@3
  int v6; // r11@3
  float *v7; // r3@3
  JsonUtil *v8; // r0@3
  float *v9; // r3@3
  const Json::Value *v10; // r0@3
  Json::Value *v11; // r0@3
  unsigned int *v12; // r8@5
  unsigned int *v13; // r10@5
  signed int v14; // r1@6
  double v15; // r0@7
  _QWORD *v16; // r6@7
  unsigned int v17; // r0@7
  int v18; // r7@9
  void *v19; // r5@9
  const Json::Value *v20; // r0@10
  Json::Value *v21; // r4@10
  Json::Value *v22; // r6@10
  unsigned int *v23; // r5@10
  unsigned int *v24; // r10@10
  unsigned int *v25; // r2@12
  signed int v26; // r1@14
  unsigned int *v27; // r2@16
  signed int v28; // r1@18
  const Json::Value *v29; // r0@29
  unsigned __int64 *v30; // r6@29
  unsigned int v31; // r7@29
  unsigned int v32; // r9@29
  int v33; // r8@29
  unsigned int *v34; // r0@29
  unsigned int v35; // r11@30
  int v36; // r5@30
  unsigned int v38; // r4@34
  bool v39; // zf@37
  _DWORD *v40; // r0@41
  int v47; // r12@42
  int v48; // r1@42
  int v49; // r2@42
  int v50; // r3@42
  void *v51; // r0@42
  void *v52; // r0@43
  unsigned int *v53; // r5@46
  unsigned int *v54; // r2@48
  signed int v55; // r1@50
  int *v56; // r0@56
  __int64 v57; // kr28_8@61
  int v58; // r8@61
  int v59; // r0@61
  int v60; // r4@62
  int v61; // r5@62
  bool v62; // zf@63
  int v63; // r6@66
  bool v64; // zf@70
  _WORD *v65; // r0@74
  unsigned __int64 *v66; // r1@75
  int v67; // r6@75
  int v68; // r5@76
  unsigned int *v69; // r2@78
  signed int v70; // r1@80
  void *v71; // r7@86
  int v72; // r1@86
  void *v73; // r0@86
  void *v74; // r0@88
  unsigned int *v75; // r5@96
  unsigned int *v76; // r2@98
  signed int v77; // r1@100
  int *v78; // r0@106
  int v79; // [sp+0h] [bp-E8h]@0
  int v80; // [sp+4h] [bp-E4h]@0
  int v81; // [sp+8h] [bp-E0h]@0
  unsigned int *v82; // [sp+1Ch] [bp-CCh]@10
  EventToSoundListMap *v83; // [sp+20h] [bp-C8h]@10
  unsigned int *v84; // [sp+24h] [bp-C4h]@10
  unsigned int *v85; // [sp+30h] [bp-B8h]@10
  int v86; // [sp+34h] [bp-B4h]@5
  int v87; // [sp+38h] [bp-B0h]@5
  int v88; // [sp+3Ch] [bp-ACh]@5
  int *v89; // [sp+40h] [bp-A8h]@10
  unsigned int v90; // [sp+48h] [bp-A0h]@7
  int v91; // [sp+50h] [bp-98h]@16
  int v92; // [sp+54h] [bp-94h]@12
  int v93; // [sp+58h] [bp-90h]@42
  int v94; // [sp+5Ch] [bp-8Ch]@42
  int v95; // [sp+60h] [bp-88h]@42
  int v96; // [sp+64h] [bp-84h]@42
  char v97; // [sp+68h] [bp-80h]@10
  unsigned int v98; // [sp+78h] [bp-70h]@28
  unsigned int *v99; // [sp+7Ch] [bp-6Ch]@10
  unsigned int *v100; // [sp+80h] [bp-68h]@10
  char v101; // [sp+88h] [bp-60h]@10
  unsigned __int64 *v102; // [sp+98h] [bp-50h]@10
  unsigned int *v103; // [sp+9Ch] [bp-4Ch]@5
  unsigned int *v104; // [sp+A0h] [bp-48h]@5
  char v105; // [sp+A8h] [bp-40h]@3
  int *v106; // [sp+BCh] [bp-2Ch]@41

  v2 = a2;
  v3 = this;
  result = (Json::Value *)Json::Value::isNull(a2);
  if ( !result )
  {
    result = (Json::Value *)Json::Value::isObject(v2);
    if ( result == (Json::Value *)1 )
    {
      v5 = (JsonUtil *)Json::Value::operator[]((int)v2, "volume");
      v6 = (int)v3 + 28;
      JsonUtil::parseRange(v5, (EventToSoundListMap *)((char *)v3 + 28), (float *)v3 + 8, v7);
      v8 = (JsonUtil *)Json::Value::operator[]((int)v2, "pitch");
      JsonUtil::parseRange(v8, (EventToSoundListMap *)((char *)v3 + 36), (float *)v3 + 10, v9);
      v10 = (const Json::Value *)Json::Value::operator[]((int)v2, "events");
      v11 = Json::Value::Value((Json::Value *)&v105, v10);
      if ( !Json::Value::isNull(v11) && Json::Value::isObject((Json::Value *)&v105) == 1 )
      {
        Json::Value::getMemberNames((Json::Value *)&v103, (int)&v105);
        v86 = (int)v3 + 40;
        v87 = (int)v3 + 36;
        v88 = (int)v3 + 32;
        v12 = v104;
        v13 = v103;
        if ( v103 != v104 )
        {
          do
          {
            v14 = soundEventFromString(v13);
            if ( v14 != 164 )
            {
              v15 = COERCE_DOUBLE(__PAIR__(v14, (unsigned int)operator new(0x1Cu)));
              v90 = HIDWORD(v15);
              v16 = (_QWORD *)LODWORD(v15);
              *(_DWORD *)(LODWORD(v15) + 8) = 0;
              *(_DWORD *)(LODWORD(v15) + 12) = 0;
              *(_DWORD *)(LODWORD(v15) + 16) = 1065353216;
              LODWORD(v15) += 16;
              *(_DWORD *)(LODWORD(v15) + 4) = 0;
              v17 = sub_119C844(v15);
              *((_DWORD *)v16 + 1) = v17;
              if ( v17 == 1 )
              {
                *((_DWORD *)v16 + 6) = 0;
                v19 = v16 + 3;
              }
              else
                if ( v17 >= 0x40000000 )
                  sub_119C874();
                v18 = 4 * v17;
                v19 = operator new(4 * v17);
                _aeabi_memclr4(v19, v18);
              *(_DWORD *)v16 = v19;
              v102 = v16;
              v20 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v105, (const char **)v13);
              v21 = (Json::Value *)&v101;
              Json::Value::Value((Json::Value *)&v101, v20);
              v84 = v12;
              Json::Value::getMemberNames((Json::Value *)&v99, (int)&v101);
              v89 = (int *)v6;
              v22 = (Json::Value *)&v97;
              v82 = v13;
              v83 = v3;
              v23 = v100;
              v24 = v99;
              v85 = v100;
              if ( v99 != v100 )
                do
                {
                  v98 = BlockSoundTypeFromString(v24);
                  if ( v98 != 16 )
                  {
                    v29 = (const Json::Value *)Json::Value::operator[](v21, (const char **)v24);
                    Json::Value::Value(v22, v29);
                    v30 = v102;
                    v31 = *v102 >> 32;
                    v32 = v98;
                    v33 = v98 % v31;
                    v34 = *(unsigned int **)(*v102 + 4 * v33);
                    if ( !v34 )
                      goto LABEL_41;
                    v35 = *v34;
                    v36 = *(_DWORD *)(*v34 + 28);
                    while ( 1 )
                    {
                      _ZF = v36 == v98;
                      if ( v36 == v98 )
                        _ZF = v98 == *(_DWORD *)(v35 + 4);
                      if ( _ZF )
                        break;
                      v38 = *(_DWORD *)v35;
                      if ( *(_DWORD *)v35 )
                      {
                        v36 = *(_DWORD *)(v38 + 28);
                        v34 = (unsigned int *)v35;
                        v35 = *(_DWORD *)v35;
                        if ( *(_DWORD *)(v38 + 28) % v31 == v33 )
                          continue;
                      }
                    }
                    v39 = v34 == 0;
                    if ( v34 )
                      v31 = *v34;
                      v39 = *v34 == 0;
                    if ( v39 )
LABEL_41:
                      v106 = (int *)&v98;
                      v40 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIK14BlockSoundType5SoundELb1EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS4_EESE_IJEEEEEPS7_DpOT_(
                              (int)v102,
                              (int)&unk_262D148,
                              &v106);
                      v31 = std::_Hashtable<BlockSoundType,std::pair<BlockSoundType const,Sound>,std::allocator<std::pair<BlockSoundType const,Sound>>,std::__detail::_Select1st,std::equal_to<BlockSoundType>,std::hash<BlockSoundType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                              (int)v30,
                              v33,
                              v32,
                              (int)v40);
                    sub_119C884((void **)&v91, (const char *)&unk_257BC67);
                    _R0 = v88;
                    __asm { VLDR            S0, [R0] }
                    _R0 = v87;
                    __asm { VLDR            S2, [R0] }
                    _R0 = v86;
                    __asm { VLDR            S4, [R0] }
                    v22 = (Json::Value *)&v97;
                    __asm
                      VSTR            S0, [SP,#0xE8+var_E8]
                      VSTR            S2, [SP,#0xE8+var_E4]
                      VSTR            S4, [SP,#0xE8+var_E0]
                    Sound::Sound(COERCE_FLOAT(&v92), COERCE_FLOAT(&v97), COERCE_FLOAT(&v91), *v89, v79, v80, v81);
                    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                      (int *)(v31 + 8),
                      &v92);
                    v47 = v31 + 12;
                    v21 = (Json::Value *)&v101;
                    v48 = v94;
                    v49 = v95;
                    v50 = v96;
                    *(_DWORD *)v47 = v93;
                    *(_DWORD *)(v47 + 4) = v48;
                    *(_DWORD *)(v47 + 8) = v49;
                    *(_DWORD *)(v47 + 12) = v50;
                    v51 = (void *)(v92 - 12);
                    if ( (int *)(v92 - 12) != &dword_28898C0 )
                      v25 = (unsigned int *)(v92 - 4);
                      if ( &pthread_create )
                        __dmb();
                        do
                          v26 = __ldrex(v25);
                        while ( __strex(v26 - 1, v25) );
                      else
                        v26 = (*v25)--;
                      if ( v26 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v51);
                    v52 = (void *)(v91 - 12);
                    if ( (int *)(v91 - 12) != &dword_28898C0 )
                      v27 = (unsigned int *)(v91 - 4);
                          v28 = __ldrex(v27);
                        while ( __strex(v28 - 1, v27) );
                        v28 = (*v27)--;
                      if ( v28 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v52);
                    Json::Value::~Value((Json::Value *)&v97);
                    v23 = v85;
                  }
                  ++v24;
                }
                while ( v24 != v23 );
                v24 = v100;
                v53 = v99;
                if ( v99 != v100 )
                  do
                    v56 = (int *)(*v53 - 12);
                    if ( v56 != &dword_28898C0 )
                      v54 = (unsigned int *)(*v53 - 4);
                          v55 = __ldrex(v54);
                        while ( __strex(v55 - 1, v54) );
                        v55 = (*v54)--;
                      if ( v55 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v56);
                    ++v53;
                  while ( v53 != v24 );
                  v24 = v99;
              if ( v24 )
                operator delete(v24);
              v3 = v83;
              v57 = *(_QWORD *)v83;
              v58 = v90 % (unsigned int)(*(_QWORD *)v83 >> 32);
              v13 = v82;
              v59 = *(_DWORD *)(*(_QWORD *)v83 + 4 * v58);
              v6 = (int)v89;
              if ( !v59 )
                goto LABEL_74;
              v60 = *(_DWORD *)v59;
              v61 = *(_DWORD *)(*(_DWORD *)v59 + 12);
              while ( 1 )
                v62 = v61 == v90;
                if ( v61 == v90 )
                  v62 = v90 == *(_BYTE *)(v60 + 4);
                if ( v62 )
                  break;
                v63 = *(_DWORD *)v60;
                if ( *(_DWORD *)v60 )
                  v61 = *(_DWORD *)(v63 + 12);
                  v59 = v57;
                  v60 = *(_DWORD *)v57;
                  if ( *(_DWORD *)(v63 + 12) % HIDWORD(v57) == v58 )
                    continue;
              v64 = v59 == 0;
              if ( v59 )
                v59 = *(_DWORD *)v59;
                v64 = v59 == 0;
              if ( v64 )
LABEL_74:
                v65 = operator new(0x10u);
                *(_DWORD *)v65 = 0;
                v65[2] = (unsigned __int8)v90;
                v59 = std::_Hashtable<LevelSoundEvent,std::pair<LevelSoundEvent const,std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>>,std::allocator<std::pair<LevelSoundEvent const,std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>>>,std::__detail::_Select1st,std::equal_to<LevelSoundEvent>,std::hash<LevelSoundEvent>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        (int)v83,
                        v58,
                        v90,
                        (int)v65);
              v66 = v102;
              v102 = 0;
              v67 = *(_DWORD *)(v59 + 8);
              v12 = v84;
              *(_DWORD *)(v59 + 8) = v66;
              if ( v67 )
                v68 = *(_DWORD *)(v67 + 8);
                while ( v68 )
                  v71 = (void *)v68;
                  v72 = *(_DWORD *)(v68 + 8);
                  v68 = *(_DWORD *)v68;
                  v73 = (void *)(v72 - 12);
                  if ( (int *)(v72 - 12) != &dword_28898C0 )
                    v69 = (unsigned int *)(v72 - 4);
                    if ( &pthread_create )
                      __dmb();
                      do
                        v70 = __ldrex(v69);
                      while ( __strex(v70 - 1, v69) );
                    else
                      v70 = (*v69)--;
                    if ( v70 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v73);
                  operator delete(v71);
                _aeabi_memclr4(*(_QWORD *)v67, 4 * (*(_QWORD *)v67 >> 32));
                *(_DWORD *)(v67 + 8) = 0;
                *(_DWORD *)(v67 + 12) = 0;
                v74 = *(void **)v67;
                if ( *(_DWORD *)v67 && (void *)(v67 + 24) != v74 )
                  operator delete(v74);
                operator delete((void *)v67);
              Json::Value::~Value((Json::Value *)&v101);
              std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>::~unique_ptr(&v102);
            }
            ++v13;
          }
          while ( v13 != v12 );
          v13 = v104;
          v75 = v103;
          if ( v103 != v104 )
            do
              v78 = (int *)(*v75 - 12);
              if ( v78 != &dword_28898C0 )
                v76 = (unsigned int *)(*v75 - 4);
                if ( &pthread_create )
                  __dmb();
                    v77 = __ldrex(v76);
                  while ( __strex(v77 - 1, v76) );
                else
                  v77 = (*v76)--;
                if ( v77 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v78);
              ++v75;
            while ( v75 != v13 );
            v13 = v103;
        }
        if ( v13 )
          operator delete(v13);
      }
      result = Json::Value::~Value((Json::Value *)&v105);
    }
  }
  return result;
}


void __fastcall EventToSoundListMap::getSound(int a1, unsigned __int64 *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 *v4; // r10@1
  unsigned __int64 v5; // kr00_8@1
  int v6; // r9@1
  int v7; // r4@1
  int v8; // r0@1
  int v9; // r8@2
  int v10; // r5@2
  bool v11; // zf@3
  int v12; // r6@6
  bool v13; // zf@9
  __int64 v14; // kr08_8@12
  unsigned int v15; // r4@12
  unsigned int *v16; // r0@12
  unsigned int v17; // r7@13
  int v18; // r5@13
  bool v19; // zf@14
  unsigned int v20; // r6@17
  bool v21; // zf@20
  unsigned int *v22; // r0@24
  unsigned int v23; // r6@25
  int v24; // r5@25
  bool v25; // zf@26
  unsigned int v26; // r7@29
  bool v27; // zf@32
  __int64 v28; // kr10_8@36
  __int64 v29; // kr18_8@36
  void *v30; // r0@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  int v33; // r1@46
  int v34; // r2@46
  int v35; // r3@46
  int v36; // [sp+8h] [bp-30h]@36

  v4 = a2;
  v5 = *a2;
  v6 = a1;
  v7 = a3 % (*a2 >> 32);
  v8 = *(_DWORD *)(*a2 + 4 * v7);
  if ( v8 )
  {
    v9 = *(_DWORD *)v8;
    v10 = *(_DWORD *)(*(_DWORD *)v8 + 12);
    while ( 1 )
    {
      v11 = v10 == a3;
      if ( v10 == a3 )
        v11 = *(_BYTE *)(v9 + 4) == a3;
      if ( v11 )
        break;
      v12 = *(_DWORD *)v9;
      if ( *(_DWORD *)v9 )
      {
        v10 = *(_DWORD *)(v12 + 12);
        v8 = v9;
        v9 = *(_DWORD *)v9;
        if ( *(_DWORD *)(v12 + 12) % HIDWORD(v5) == v7 )
          continue;
      }
      goto LABEL_36;
    }
    v13 = v8 == 0;
    if ( v8 )
      v8 = *(_DWORD *)v8;
      v13 = v8 == 0;
    if ( !v13 )
      v14 = *(_QWORD *)*(_DWORD *)(v8 + 8);
      v15 = a4 % HIDWORD(v14);
      v16 = *(unsigned int **)(v14 + 4 * (a4 % HIDWORD(v14)));
      if ( v16 )
        v17 = *v16;
        v18 = *(_DWORD *)(*v16 + 28);
        while ( 1 )
        {
          v19 = v18 == a4;
          if ( v18 == a4 )
            v19 = *(_DWORD *)(v17 + 4) == a4;
          if ( v19 )
            break;
          v20 = *(_DWORD *)v17;
          if ( *(_DWORD *)v17 )
          {
            v18 = *(_DWORD *)(v20 + 28);
            v16 = (unsigned int *)v17;
            v17 = *(_DWORD *)v17;
            if ( *(_DWORD *)(v20 + 28) % HIDWORD(v14) == v15 )
              continue;
          }
          goto LABEL_24;
        }
        v21 = v16 == 0;
        if ( v16 )
          v15 = *v16;
          v21 = *v16 == 0;
        if ( !v21 )
          goto LABEL_46;
LABEL_24:
      v15 = 0xFu % HIDWORD(v14);
      v22 = *(unsigned int **)(v14 + 4 * (0xFu % HIDWORD(v14)));
      if ( v22 )
        v23 = *v22;
        v24 = *(_DWORD *)(*v22 + 28);
          v25 = v24 == 15;
          if ( v24 == 15 )
            v25 = *(_DWORD *)(v23 + 4) == 15;
          if ( v25 )
          v26 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 )
            v24 = *(_DWORD *)(v26 + 28);
            v22 = (unsigned int *)v23;
            v23 = *(_DWORD *)v23;
            if ( *(_DWORD *)(v26 + 28) % HIDWORD(v14) == v15 )
          goto LABEL_36;
        v27 = v22 == 0;
        if ( v22 )
          v15 = *v22;
          v27 = *v22 == 0;
        if ( !v27 )
LABEL_46:
          sub_119C854((int *)v6, (int *)(v15 + 8));
          v33 = *(_DWORD *)(v15 + 16);
          v34 = *(_DWORD *)(v15 + 20);
          v35 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v6 + 4) = *(_DWORD *)(v15 + 12);
          *(_DWORD *)(v6 + 8) = v33;
          *(_DWORD *)(v6 + 12) = v34;
          *(_DWORD *)(v6 + 16) = v35;
          return;
  }
LABEL_36:
  sub_119C884((void **)&v36, (const char *)&unk_257BC67);
  v28 = *(unsigned __int64 *)((char *)v4 + 28);
  v29 = *(unsigned __int64 *)((char *)v4 + 36);
  sub_119C854((int *)v6, &v36);
  *(_DWORD *)(v6 + 4) = v28;
  *(_DWORD *)(v6 + 8) = v29;
  *(_DWORD *)(v6 + 12) = HIDWORD(v28);
  *(_DWORD *)(v6 + 16) = HIDWORD(v29);
  v30 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
}
