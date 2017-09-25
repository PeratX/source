

void __fastcall SoundMapping::getSound(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  SoundMapping::getSound(a1, a2, a3, a4, a5, a6, a7);
}


Json::Value *__fastcall SoundMapping::_loadEventSounds(int a1, int a2, int a3)
{
  int v3; // r11@1
  int v4; // r9@1
  int v5; // r6@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  void *v8; // r7@11
  int v9; // r1@11
  void *v10; // r0@11
  Json::Value *result; // r0@13
  JsonUtil *v12; // r0@15
  float *v13; // r3@15
  JsonUtil *v14; // r0@15
  float *v15; // r3@15
  const Json::Value *v16; // r0@15
  Json::Value *v17; // r0@15
  unsigned int *v18; // r5@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int v23; // r0@35
  unsigned int v24; // r8@35
  __int64 v25; // kr00_8@36
  int v26; // r10@36
  int *v27; // r0@36
  int v28; // r5@37
  int v29; // r6@37
  bool v31; // zf@44
  _DWORD *v32; // r0@48
  int v33; // r7@49
  int v37; // r12@49
  int v38; // r1@49
  int v39; // r2@49
  int v40; // r3@49
  void *v41; // r0@49
  void *v42; // r0@50
  unsigned int *v43; // r6@52
  unsigned int *v44; // r2@54
  signed int v45; // r1@56
  int *v46; // r0@62
  int v47; // [sp+0h] [bp-A8h]@0
  int v48; // [sp+4h] [bp-A4h]@0
  int v49; // [sp+8h] [bp-A0h]@0
  const char **v50; // [sp+24h] [bp-84h]@36
  unsigned int *v51; // [sp+28h] [bp-80h]@17
  int v52; // [sp+30h] [bp-78h]@23
  int v53; // [sp+34h] [bp-74h]@19
  int v54; // [sp+38h] [bp-70h]@49
  int v55; // [sp+3Ch] [bp-6Ch]@49
  int v56; // [sp+40h] [bp-68h]@49
  int v57; // [sp+44h] [bp-64h]@49
  char v58; // [sp+4Bh] [bp-5Dh]@35
  unsigned int *v59; // [sp+4Ch] [bp-5Ch]@17
  unsigned int *v60; // [sp+50h] [bp-58h]@17
  char v61; // [sp+58h] [bp-50h]@15
  float v62; // [sp+68h] [bp-40h]@15
  float v63; // [sp+6Ch] [bp-3Ch]@15
  float v64; // [sp+70h] [bp-38h]@15
  int v65; // [sp+74h] [bp-34h]@15
  char *v66; // [sp+7Ch] [bp-2Ch]@48

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)(a3 + 8);
  while ( v5 )
  {
    v8 = (void *)v5;
    v9 = *(_DWORD *)(v5 + 8);
    v5 = *(_DWORD *)v5;
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v9 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    operator delete(v8);
  }
  _aeabi_memclr4(*(_QWORD *)v3, 4 * (*(_QWORD *)v3 >> 32));
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  result = (Json::Value *)Json::Value::isNull((Json::Value *)v4);
  if ( !result )
    result = (Json::Value *)Json::Value::isObject((Json::Value *)v4);
    if ( result == (Json::Value *)1 )
      v64 = -1.0;
      v65 = -1082130432;
      v62 = -1.0;
      v63 = -1.0;
      v12 = (JsonUtil *)Json::Value::operator[](v4, "volume");
      JsonUtil::parseRange(v12, (const Json::Value *)&v65, &v64, v13);
      v14 = (JsonUtil *)Json::Value::operator[](v4, "pitch");
      JsonUtil::parseRange(v14, (const Json::Value *)&v63, &v62, v15);
      v16 = (const Json::Value *)Json::Value::operator[](v4, "events");
      v17 = Json::Value::Value((Json::Value *)&v61, v16);
      if ( !Json::Value::isNull(v17) && Json::Value::isObject((Json::Value *)&v61) == 1 )
        Json::Value::getMemberNames((Json::Value *)&v59, (int)&v61);
        v18 = v59;
        v51 = v60;
        if ( v59 != v60 )
        {
          do
          {
            v23 = soundEventFromString(v18);
            v24 = v23;
            v58 = v23;
            if ( v23 != 164 )
            {
              v50 = (const char **)v18;
              v25 = *(_QWORD *)v3;
              v26 = v23 % (unsigned int)(*(_QWORD *)v3 >> 32);
              v27 = *(int **)(*(_QWORD *)v3 + 4 * v26);
              if ( !v27 )
                goto LABEL_48;
              v28 = *v27;
              v29 = *(_DWORD *)(*v27 + 28);
              while ( 1 )
              {
                _ZF = v29 == v24;
                if ( v29 == v24 )
                  _ZF = v24 == *(_BYTE *)(v28 + 4);
                if ( _ZF )
                  break;
                if ( *(_DWORD *)v28 )
                {
                  v29 = *(_DWORD *)(v25 + 28);
                  v27 = (int *)v28;
                  v28 = *(_DWORD *)v28;
                  if ( *(_DWORD *)(v25 + 28) % HIDWORD(v25) == v26 )
                    continue;
                }
              }
              v31 = v27 == 0;
              if ( v27 )
                v4 = *v27;
                v31 = *v27 == 0;
              if ( v31 )
LABEL_48:
                v66 = &v58;
                v32 = j__ZNSt8__detail16_Hashtable_allocISaINS_10_Hash_nodeISt4pairIK15LevelSoundEvent5SoundELb1EEEEE16_M_allocate_nodeIJRKSt21piecewise_construct_tSt5tupleIJRS4_EESE_IJEEEEEPS7_DpOT_(
                        v3,
                        (int)&unk_262D148,
                        &v66);
                v4 = std::_Hashtable<LevelSoundEvent,std::pair<LevelSoundEvent const,Sound>,std::allocator<std::pair<LevelSoundEvent const,Sound>>,std::__detail::_Select1st,std::equal_to<LevelSoundEvent>,std::hash<LevelSoundEvent>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                       v3,
                       v26,
                       v24,
                       (int)v32);
              v18 = (unsigned int *)v50;
              v33 = Json::Value::operator[]((Json::Value *)&v61, v50);
              sub_119C884((void **)&v52, (const char *)&unk_257BC67);
              __asm
                VLDR            S0, [SP,#0xA8+var_38]
                VLDR            S2, [SP,#0xA8+var_3C]
                VLDR            S4, [SP,#0xA8+var_40]
                VSTR            S0, [SP,#0xA8+var_A8]
                VSTR            S2, [SP,#0xA8+var_A4]
                VSTR            S4, [SP,#0xA8+var_A0]
              Sound::Sound(COERCE_FLOAT(&v53), *(float *)&v33, COERCE_FLOAT(&v52), v65, v47, v48, v49);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)(v4 + 8),
                &v53);
              v37 = v4 + 12;
              v38 = v55;
              v39 = v56;
              v40 = v57;
              *(_DWORD *)v37 = v54;
              *(_DWORD *)(v37 + 4) = v38;
              *(_DWORD *)(v37 + 8) = v39;
              *(_DWORD *)(v37 + 12) = v40;
              v41 = (void *)(v53 - 12);
              if ( (int *)(v53 - 12) != &dword_28898C0 )
                v19 = (unsigned int *)(v53 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v20 = __ldrex(v19);
                  while ( __strex(v20 - 1, v19) );
                else
                  v20 = (*v19)--;
                if ( v20 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v41);
              v42 = (void *)(v52 - 12);
              if ( (int *)(v52 - 12) != &dword_28898C0 )
                v21 = (unsigned int *)(v52 - 4);
                    v22 = __ldrex(v21);
                  while ( __strex(v22 - 1, v21) );
                  v22 = (*v21)--;
                if ( v22 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v42);
            }
            ++v18;
          }
          while ( v18 != v51 );
          v18 = v60;
          v43 = v59;
          if ( v59 != v60 )
            do
              v46 = (int *)(*v43 - 12);
              if ( v46 != &dword_28898C0 )
                v44 = (unsigned int *)(*v43 - 4);
                    v45 = __ldrex(v44);
                  while ( __strex(v45 - 1, v44) );
                  v45 = (*v44)--;
                if ( v45 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v46);
              ++v43;
            while ( v43 != v18 );
            v18 = v59;
        }
        if ( v18 )
          operator delete(v18);
      result = Json::Value::~Value((Json::Value *)&v61);
  return result;
}


int __fastcall SoundMapping::EntityInteractiveSounds::EntityInteractiveSounds(__int64 this)
{
  int v1; // r4@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  unsigned int v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6

  v1 = this;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 1065353216;
  LODWORD(this) = this + 16;
  *(_DWORD *)(this + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(*(double *)&this)));
  *(_DWORD *)(v1 + 4) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 24) = 0;
    v4 = (void *)(v1 + 24);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_119C874();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)v1 = v4;
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  LODWORD(v2) = v1 + 44;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = sub_119C844(v2);
  *(_DWORD *)(v1 + 32) = v5;
  if ( v5 == 1 )
    *(_DWORD *)(v1 + 52) = 0;
    v7 = (void *)(v1 + 52);
    if ( v5 >= 0x40000000 )
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 28) = v7;
  return v1;
}


SoundMapping *__fastcall SoundMapping::~SoundMapping(SoundMapping *this)
{
  SoundMapping *v1; // r10@1
  char *v2; // r0@1
  void *v3; // r5@4
  void *v4; // r7@5
  char *v5; // r0@6
  void *v6; // r5@9
  void *v7; // r7@10
  char *v8; // r0@11
  void *v9; // r5@14
  void *v10; // r7@15
  char *v11; // r0@16
  int v12; // r7@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  void *v15; // r6@29
  int v16; // r1@29
  void *v17; // r0@29
  char *v18; // r0@31
  int v20; // [sp+0h] [bp-30h]@10
  char v21; // [sp+4h] [bp-2Ch]@15
  char v22; // [sp+Ch] [bp-24h]@5

  v1 = this;
  *(_DWORD *)this = &off_26DF18C;
  std::__detail::_Hashtable_alloc<std::allocator<std::__detail::_Hash_node<std::pair<EntityType const,std::unique_ptr<EventToSoundListMap,std::default_delete<EventToSoundListMap>>>,true>>>::_M_deallocate_nodes(
    (int)this + 116,
    *((_DWORD *)this + 31));
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 116), 4 * (*(_QWORD *)((char *)v1 + 116) >> 32));
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 32) = 0;
  v2 = (char *)*((_DWORD *)v1 + 29);
  if ( v2 && (char *)v1 + 140 != v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 24);
  if ( v3 )
  {
    do
    {
      v4 = *(void **)v3;
      __gnu_cxx::new_allocator<std::pair<BlockSoundType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>::destroy<std::pair<BlockSoundType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>(
        (int)&v22,
        (int)v3 + 4);
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 11), 4 * (*((_QWORD *)v1 + 11) >> 32));
  *((_DWORD *)v1 + 24) = 0;
  *((_DWORD *)v1 + 25) = 0;
  v5 = (char *)*((_DWORD *)v1 + 22);
  if ( v5 && (char *)v1 + 112 != v5 )
    operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 17);
  if ( v6 )
      v7 = *(void **)v6;
        (int)&v20,
        (int)v6 + 4);
      operator delete(v6);
      v6 = v7;
    while ( v7 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 60), 4 * (*(_QWORD *)((char *)v1 + 60) >> 32));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = 0;
  v8 = (char *)*((_DWORD *)v1 + 15);
  if ( v8 && (char *)v1 + 84 != v8 )
    operator delete(v8);
  v9 = (void *)*((_DWORD *)v1 + 10);
  if ( v9 )
      v10 = *(void **)v9;
      __gnu_cxx::new_allocator<std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>::destroy<std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>(
        (int)&v21,
        (int)v9 + 4);
      operator delete(v9);
      v9 = v10;
    while ( v10 );
  _aeabi_memclr4(*((_QWORD *)v1 + 4), 4 * (*((_QWORD *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 10) = 0;
  *((_DWORD *)v1 + 11) = 0;
  v11 = (char *)*((_DWORD *)v1 + 8);
  if ( v11 && (char *)v1 + 56 != v11 )
    operator delete(v11);
  v12 = *((_DWORD *)v1 + 3);
  while ( v12 )
    v15 = (void *)v12;
    v16 = *(_DWORD *)(v12 + 8);
    v12 = *(_DWORD *)v12;
    v17 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v13 = (unsigned int *)(v16 - 4);
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
        j_j_j_j_j__ZdlPv_9_1(v17);
    operator delete(v15);
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v18 = (char *)*((_DWORD *)v1 + 1);
  if ( v18 && (char *)v1 + 28 != v18 )
    operator delete(v18);
  return v1;
}


void __fastcall SoundMapping::getEventSound(int a1, int a2, unsigned int a3)
{
  __int64 v3; // kr00_8@1
  int v4; // r8@1
  unsigned int v5; // r10@1
  int v6; // r0@1
  int v7; // r7@2
  int v8; // r4@2
  bool v9; // zf@3
  int v10; // r6@6
  bool v11; // zf@9
  void *v12; // r0@13
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  int v15; // r12@12
  int v16; // r1@12
  int v17; // r2@12
  int v18; // r3@12
  int v19; // [sp+4h] [bp-2Ch]@13

  v3 = *(_QWORD *)(a2 + 4);
  v4 = a1;
  v5 = a3 % (unsigned int)(*(_QWORD *)(a2 + 4) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( !v6 )
    goto LABEL_13;
  v7 = *(_DWORD *)v6;
  v8 = *(_DWORD *)(*(_DWORD *)v6 + 28);
  while ( 1 )
  {
    v9 = v8 == a3;
    if ( v8 == a3 )
      v9 = *(_BYTE *)(v7 + 4) == a3;
    if ( v9 )
      break;
    v10 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 )
    {
      v8 = *(_DWORD *)(v10 + 28);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v10 + 28) % HIDWORD(v3) == v5 )
        continue;
    }
  }
  v11 = v6 == 0;
  if ( v6 )
    v8 = *(_DWORD *)v6;
    v11 = *(_DWORD *)v6 == 0;
  if ( v11 )
LABEL_13:
    sub_119C884((void **)&v19, (const char *)&unk_257BC67);
    sub_119C854((int *)v4, &v19);
    *(_DWORD *)(v4 + 4) = 1065353216;
    *(_DWORD *)(v4 + 8) = 1065353216;
    *(_DWORD *)(v4 + 12) = 1065353216;
    *(_DWORD *)(v4 + 16) = 1065353216;
    v12 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
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
        j_j_j_j_j__ZdlPv_9_1(v12);
  else
    sub_119C854((int *)v4, (int *)(v8 + 8));
    v15 = v4 + 4;
    v16 = *(_DWORD *)(v8 + 16);
    v17 = *(_DWORD *)(v8 + 20);
    v18 = *(_DWORD *)(v8 + 24);
    *(_DWORD *)v15 = *(_DWORD *)(v8 + 12);
    *(_DWORD *)(v15 + 4) = v16;
    *(_DWORD *)(v15 + 8) = v17;
    *(_DWORD *)(v15 + 12) = v18;
}


void __fastcall SoundMapping::getEventSound(int a1, int a2, unsigned int a3)
{
  SoundMapping::getEventSound(a1, a2, a3);
}


int __fastcall SoundMapping::SoundMapping(double a1)
{
  int v1; // r11@1
  double v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  double v5; // r0@4
  int v6; // r6@6
  void *v7; // r5@6
  __int64 v8; // r0@7
  int v9; // r6@9
  void *v10; // r5@9

  v1 = LODWORD(a1);
  *(_DWORD *)LODWORD(a1) = &off_26DF18C;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 1065353216;
  LODWORD(a1) += 20;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v2 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(a1)));
  *(_DWORD *)(v1 + 8) = LODWORD(v2);
  if ( LODWORD(v2) == 1 )
  {
    *(_DWORD *)(v1 + 28) = 0;
    v4 = (void *)(v1 + 28);
  }
  else
    if ( LODWORD(v2) >= 0x40000000 )
      sub_119C874();
    v3 = 4 * LODWORD(v2);
    v4 = operator new(4 * LODWORD(v2));
    _aeabi_memclr4(v4, v3);
  *(_DWORD *)(v1 + 4) = v4;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  *(_DWORD *)(v1 + 48) = 1065353216;
  LODWORD(v2) = v1 + 48;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v5 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v2)));
  *(_DWORD *)(v1 + 36) = LODWORD(v5);
  if ( LODWORD(v5) == 1 )
    *(_DWORD *)(v1 + 56) = 0;
    v7 = (void *)(v1 + 56);
    if ( LODWORD(v5) >= 0x40000000 )
    v6 = 4 * LODWORD(v5);
    v7 = operator new(4 * LODWORD(v5));
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)(v1 + 32) = v7;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 1065353216;
  LODWORD(v5) = v1 + 76;
  *(_DWORD *)(LODWORD(v5) + 4) = 0;
  v8 = __PAIR__(10, sub_119C844(v5));
  *(_DWORD *)(v1 + 64) = v8;
  if ( (_DWORD)v8 == 1 )
    *(_DWORD *)(v1 + 84) = 0;
    v10 = (void *)(v1 + 84);
    if ( (unsigned int)v8 >= 0x40000000 )
    v9 = 4 * v8;
    v10 = operator new(4 * v8);
    _aeabi_memclr4(v10, v9);
  *(_DWORD *)(v1 + 60) = v10;
  LODWORD(v8) = v1 + 88;
  SoundMapping::EntityInteractiveSounds::EntityInteractiveSounds(v8);
  return v1;
}


void __fastcall SoundMapping::_getBlockSound(int *a1, int a2, unsigned __int64 *a3, unsigned int a4, unsigned int a5)
{
  SoundMapping::_getBlockSound(a1, a2, a3, a4, a5);
}


void __fastcall SoundMapping::getInteractiveSound(int a1, Random *a2, unsigned int a3, unsigned int a4, unsigned int a5, Random *a6)
{
  SoundMapping::getInteractiveSound(a1, a2, a3, a4, a5, a6);
}


Json::Value *__fastcall SoundMapping::_loadEntitySounds(int a1, Json::Value *a2, int a3)
{
  int v3; // r10@1
  Json::Value *v4; // r8@1
  int v5; // r5@1
  int v6; // r4@2
  Json::Value *result; // r0@3
  const Json::Value *v8; // r0@5
  Json::Value *v9; // r0@5
  const void **v10; // r4@7
  const void **v11; // r11@7
  unsigned int v12; // r7@9
  double v13; // r0@10
  int v14; // r8@10
  unsigned int v15; // r0@10
  int v16; // r5@12
  void *v17; // r6@12
  int v18; // r0@13
  __int64 v19; // kr08_8@13
  int v20; // r5@13
  int v21; // r0@13
  int v22; // r4@14
  int v23; // r8@14
  bool v24; // zf@15
  int v25; // r9@18
  bool v26; // zf@21
  _DWORD *v27; // r0@25
  const void **v28; // r6@31
  unsigned int *v29; // r2@33
  signed int v30; // r1@35
  int *v31; // r0@41
  double v32; // r0@47
  int v33; // r5@47
  unsigned int v34; // r0@47
  int v35; // r7@49
  void *v36; // r6@49
  void *v37; // r0@50
  __int64 v38; // kr18_8@50
  int v39; // r8@50
  int v40; // r0@52
  int v41; // r5@53
  int v42; // r7@53
  bool v43; // zf@54
  int v44; // r4@57
  bool v45; // zf@60
  _DWORD *v46; // r0@64
  Json::Value *v47; // [sp+4h] [bp-54h]@8
  const void **v48; // [sp+8h] [bp-50h]@7
  int v49; // [sp+Ch] [bp-4Ch]@50
  int v50; // [sp+10h] [bp-48h]@13
  const void **v51; // [sp+14h] [bp-44h]@7
  const void **v52; // [sp+18h] [bp-40h]@7
  char v53; // [sp+20h] [bp-38h]@5

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)(a3 + 8);
  if ( v5 )
  {
    do
    {
      v6 = *(_DWORD *)v5;
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr((_DWORD *)(v5 + 8));
      operator delete((void *)v5);
      v5 = v6;
    }
    while ( v6 );
  }
  _aeabi_memclr4(*(_QWORD *)v3, 4 * (*(_QWORD *)v3 >> 32));
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  result = (Json::Value *)Json::Value::isNull(v4);
  if ( !result )
    result = (Json::Value *)Json::Value::isObject(v4);
    if ( result == (Json::Value *)1 )
      v8 = (const Json::Value *)Json::Value::operator[]((int)v4, "entities");
      v9 = Json::Value::Value((Json::Value *)&v53, v8);
      if ( !Json::Value::isNull(v9) && Json::Value::isObject((Json::Value *)&v53) == 1 )
      {
        Json::Value::getMemberNames((Json::Value *)&v51, (int)&v53);
        v10 = v52;
        v11 = v51;
        v48 = v52;
        if ( v51 != v52 )
        {
          v47 = v4;
          do
          {
            v12 = (unsigned int)EntityTypeFromString(v11);
            if ( v12 != 1 )
            {
              LODWORD(v13) = operator new(0x1Cu);
              v14 = LODWORD(v13);
              *(_DWORD *)(LODWORD(v13) + 8) = 0;
              *(_DWORD *)(LODWORD(v13) + 12) = 0;
              *(_DWORD *)(LODWORD(v13) + 16) = 1065353216;
              LODWORD(v13) += 16;
              *(_DWORD *)(LODWORD(v13) + 4) = 0;
              v15 = sub_119C844(v13);
              *(_DWORD *)(v14 + 4) = v15;
              if ( v15 == 1 )
              {
                *(_DWORD *)(v14 + 24) = 0;
                v17 = (void *)(v14 + 24);
              }
              else
                if ( v15 >= 0x40000000 )
                  sub_119C874();
                v16 = 4 * v15;
                v17 = operator new(4 * v15);
                _aeabi_memclr4(v17, v16);
              *(_DWORD *)v14 = v17;
              v50 = v14;
              v18 = Json::Value::operator[]((Json::Value *)&v53, (const char **)v11);
              SoundMapping::_loadEventSounds(v18, v18, v50);
              v19 = *(_QWORD *)v3;
              v20 = v12 % (unsigned int)(*(_QWORD *)v3 >> 32);
              v21 = *(_DWORD *)(*(_QWORD *)v3 + 4 * v20);
              if ( !v21 )
                goto LABEL_25;
              v22 = *(_DWORD *)v21;
              v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
              while ( 1 )
                v24 = v23 == v12;
                if ( v23 == v12 )
                  v24 = v12 == *(_DWORD *)(v22 + 4);
                if ( v24 )
                  break;
                v25 = *(_DWORD *)v22;
                if ( *(_DWORD *)v22 )
                {
                  v23 = *(_DWORD *)(v25 + 12);
                  v21 = v19;
                  v22 = *(_DWORD *)v19;
                  if ( *(_DWORD *)(v25 + 12) % HIDWORD(v19) == v20 )
                    continue;
                }
              v26 = v21 == 0;
              if ( v21 )
                v21 = *(_DWORD *)v21;
                v26 = v21 == 0;
              if ( v26 )
LABEL_25:
                v27 = operator new(0x10u);
                *v27 = 0;
                v27[1] = v12;
                v27[2] = 0;
                v21 = std::_Hashtable<EntityType,std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>,std::allocator<std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>,std::__detail::_Select1st,std::equal_to<EntityType>,std::hash<EntityType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                        v3,
                        v20,
                        v12,
                        (int)v27);
              std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::operator=(
                (int *)(v21 + 8),
                &v50);
              std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr(&v50);
              v10 = v48;
            }
            ++v11;
          }
          while ( v11 != v10 );
          v11 = v52;
          v28 = v51;
          if ( v51 != v52 )
            do
              v31 = (int *)((char *)*v28 - 12);
              if ( v31 != &dword_28898C0 )
                v29 = (unsigned int *)((char *)*v28 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v30 = __ldrex(v29);
                  while ( __strex(v30 - 1, v29) );
                else
                  v30 = (*v29)--;
                if ( v30 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v31);
              ++v28;
            while ( v28 != v11 );
            v11 = v51;
          v4 = v47;
        }
        if ( v11 )
          operator delete(v11);
      }
      LODWORD(v32) = operator new(0x1Cu);
      v33 = LODWORD(v32);
      *(_DWORD *)(LODWORD(v32) + 8) = 0;
      *(_DWORD *)(LODWORD(v32) + 12) = 0;
      *(_DWORD *)(LODWORD(v32) + 16) = 1065353216;
      LODWORD(v32) += 16;
      *(_DWORD *)(LODWORD(v32) + 4) = 0;
      v34 = sub_119C844(v32);
      *(_DWORD *)(v33 + 4) = v34;
      if ( v34 == 1 )
        *(_DWORD *)(v33 + 24) = 0;
        v36 = (void *)(v33 + 24);
      else
        if ( v34 >= 0x40000000 )
          sub_119C874();
        v35 = 4 * v34;
        v36 = operator new(4 * v34);
        _aeabi_memclr4(v36, v35);
      *(_DWORD *)v33 = v36;
      v49 = v33;
      v37 = Json::Value::operator[]((int)v4, "defaults");
      SoundMapping::_loadEventSounds((int)v37, (int)v37, v33);
      v38 = *(_QWORD *)v3;
      v39 = 0;
      if ( *(_QWORD *)v3 >> 32 != 1 )
        v39 = 1;
      v40 = *(_DWORD *)(v38 + 4 * v39);
      if ( !v40 )
        goto LABEL_64;
      v41 = *(_DWORD *)v40;
      v42 = *(_DWORD *)(*(_DWORD *)v40 + 12);
      while ( 1 )
        v43 = v42 == 1;
        if ( v42 == 1 )
          v43 = *(_DWORD *)(v41 + 4) == 1;
        if ( v43 )
          break;
        v44 = *(_DWORD *)v41;
        if ( *(_DWORD *)v41 )
          v42 = *(_DWORD *)(v44 + 12);
          v40 = v41;
          v41 = *(_DWORD *)v41;
          if ( *(_DWORD *)(v44 + 12) % HIDWORD(v38) == v39 )
            continue;
      v45 = v40 == 0;
      if ( v40 )
        v40 = *(_DWORD *)v40;
        v45 = v40 == 0;
      if ( v45 )
LABEL_64:
        v46 = operator new(0x10u);
        *(_QWORD *)v46 = 0x100000000LL;
        v46[2] = 0;
        v40 = std::_Hashtable<EntityType,std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>,std::allocator<std::pair<EntityType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>,std::__detail::_Select1st,std::equal_to<EntityType>,std::hash<EntityType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                v3,
                v39,
                1u,
                (int)v46);
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::operator=(
        (int *)(v40 + 8),
        &v49);
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr(&v49);
      result = Json::Value::~Value((Json::Value *)&v53);
  return result;
}


void __fastcall SoundMapping::getInteractiveSound(int a1, Random *a2, unsigned int a3, unsigned int a4, unsigned int a5, Random *a6)
{
  int v6; // r4@1
  unsigned int v7; // r7@1
  Random *v8; // r5@1
  unsigned int v9; // r6@1
  int *v10; // r10@1
  void *v11; // r0@1
  __int64 v12; // kr00_8@2
  unsigned int v13; // r9@2
  int v14; // r0@2
  int v15; // r7@3
  int v16; // r8@3
  int v18; // r11@7
  bool v19; // zf@10
  int *v20; // r5@13
  int *v21; // r6@13
  int v22; // r1@13
  int v23; // r2@13
  int v24; // r3@13
  int *v25; // r4@13
  void *v26; // r0@13
  unsigned int *v27; // r2@14
  signed int v28; // r1@16
  int v29; // r1@18
  int v30; // r2@18
  int v31; // r3@18
  void *v43; // r0@29
  void *v44; // r0@31
  unsigned int *v45; // r2@33
  signed int v46; // r1@35
  unsigned int *v47; // r2@37
  signed int v48; // r1@39
  unsigned int *v49; // r2@41
  signed int v50; // r1@43
  unsigned int v51; // [sp+4h] [bp-ACh]@1
  int v52; // [sp+Ch] [bp-A4h]@18
  int v53; // [sp+10h] [bp-A0h]@18
  int v54; // [sp+14h] [bp-9Ch]@18
  int v55; // [sp+18h] [bp-98h]@18
  int v56; // [sp+1Ch] [bp-94h]@18
  int v57; // [sp+20h] [bp-90h]@13
  int v58; // [sp+24h] [bp-8Ch]@13
  int v59; // [sp+28h] [bp-88h]@13
  int v60; // [sp+2Ch] [bp-84h]@13
  int v61; // [sp+30h] [bp-80h]@13
  int v62; // [sp+38h] [bp-78h]@1
  int v63; // [sp+3Ch] [bp-74h]@1
  float v64; // [sp+40h] [bp-70h]@1
  float v65; // [sp+44h] [bp-6Ch]@1
  float v66; // [sp+48h] [bp-68h]@1
  float v67; // [sp+4Ch] [bp-64h]@1
  int v68; // [sp+50h] [bp-60h]@1

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  SoundMapping::_getBlockSound(&v68, (int)a2, (unsigned __int64 *)a2 + 11, a3, a5);
  sub_119C884((void **)&v62, (const char *)&unk_257BC67);
  v51 = v7;
  v10 = sub_119C854(&v63, &v62) + 1;
  v64 = 1.0;
  v65 = 1.0;
  v66 = 1.0;
  v67 = 1.0;
  v11 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
  {
    v45 = (unsigned int *)(v62 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  v12 = *(_QWORD *)((char *)v8 + 116);
  v13 = v9 % (unsigned int)(*(_QWORD *)((char *)v8 + 116) >> 32);
  v14 = *(_DWORD *)(v12 + 4 * v13);
  if ( !v14 )
    goto LABEL_18;
  v15 = *(_DWORD *)v14;
  v16 = *(_DWORD *)(*(_DWORD *)v14 + 12);
  while ( 1 )
    _ZF = v16 == v9;
    if ( v16 == v9 )
      _ZF = *(_DWORD *)(v15 + 4) == v9;
    if ( _ZF )
      break;
    v18 = *(_DWORD *)v15;
    if ( *(_DWORD *)v15 )
      v16 = *(_DWORD *)(v18 + 12);
      v14 = v12;
      v15 = *(_DWORD *)v12;
      if ( *(_DWORD *)(v18 + 12) % HIDWORD(v12) == v13 )
        continue;
  v19 = v14 == 0;
  if ( v14 )
    v14 = *(_DWORD *)v14;
    v19 = v14 == 0;
  if ( v19 )
LABEL_18:
    SoundMapping::getEntitySound((int)&v52, (int)v8, v51, v9);
    v20 = (int *)v6;
    v21 = &v68;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v63, &v52);
    v29 = v54;
    v30 = v55;
    v31 = v56;
    v25 = &v63;
    *v10 = v53;
    v10[1] = v29;
    v10[2] = v30;
    v10[3] = v31;
    v26 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) == &dword_28898C0 )
      goto LABEL_19;
    v27 = (unsigned int *)(v52 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      goto LABEL_54;
LABEL_53:
    v28 = (*v27)--;
    goto LABEL_54;
  EventToSoundListMap::getSound((int)&v57, *(unsigned __int64 **)(v14 + 8), v51, a5);
  v20 = (int *)v6;
  v21 = &v68;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v63, &v57);
  v22 = v59;
  v23 = v60;
  v24 = v61;
  v25 = &v63;
  *v10 = v58;
  v10[1] = v22;
  v10[2] = v23;
  v10[3] = v24;
  v26 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) == &dword_28898C0 )
    goto LABEL_19;
  v27 = (unsigned int *)(v57 - 4);
  if ( !&pthread_create )
    goto LABEL_53;
  __dmb();
  do
    v28 = __ldrex(v27);
  while ( __strex(v28 - 1, v27) );
LABEL_54:
  if ( v28 <= 0 )
    j_j_j_j_j__ZdlPv_9_1(v26);
LABEL_19:
  __asm
    VLDR            S0, [SP,#0xB0+var_5C]
    VLDR            S16, [SP,#0xB0+var_54]
  if ( *(_DWORD *)(v63 - 12) )
    v21 = v25;
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    _R4 = Random::_genRandInt32(a6);
    _R0 = Random::_genRandInt32(a6);
    __asm
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VMOV            S4, R4
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D2, S4
      VMUL.F64        D0, D0, D1
      VMUL.F64        D1, D2, D1
      VCVT.F32.F64    S0, D0
      VCVT.F32.F64    S2, D1
      VLDR            S4, [SP,#0xB0+var_5C]
      VSUB.F32        S0, S2, S0
      VLDR            S6, [SP,#0xB0+var_54]
      VSUB.F32        S8, S6, S4
      VADD.F32        S2, S4, S6
      VMOV.F32        S4, #0.5
      VMUL.F32        S0, S8, S0
      VADD.F32        S0, S2, S0
      VMUL.F32        S16, S0, S4
    VLDR            S18, [SP,#0xB0+var_68]
    VLDR            S0, [SP,#0xB0+var_70]
    VCMPE.F32       S18, S0
      VLDR            S4, [SP,#0xB0+var_70]
      VLDR            S6, [SP,#0xB0+var_68]
      VMUL.F32        S18, S0, S4
    VLDR            S20, [SP,#0xB0+var_50]
    VLDR            S0, [SP,#0xB0+var_58]
    VCMPE.F32       S20, S0
      VLDR            S4, [SP,#0xB0+var_58]
      VLDR            S6, [SP,#0xB0+var_50]
      VMUL.F32        S20, S0, S4
    VLDR            S22, [SP,#0xB0+var_64]
    VLDR            S0, [SP,#0xB0+var_6C]
    VCMPE.F32       S22, S0
      VLDR            S4, [SP,#0xB0+var_6C]
      VLDR            S6, [SP,#0xB0+var_64]
      VMUL.F32        S22, S0, S4
  sub_119C854(v20, v21);
    VMUL.F32        S0, S18, S16
    VMUL.F32        S2, S22, S20
  v43 = (void *)(v63 - 12);
    VSTR            S0, [R5,#4]
    VSTR            S2, [R5,#8]
    VSTR            S0, [R5,#0xC]
    VSTR            S2, [R5,#0x10]
  if ( !_ZF )
    v47 = (unsigned int *)(v63 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v43);
  v44 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v68 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
}


void __fastcall SoundMapping::_getBlockSound(int *a1, int a2, unsigned __int64 *a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // r10@1
  int v6; // r6@1
  int v7; // r0@1
  int v8; // r8@2
  int v9; // r4@2
  bool v10; // zf@3
  int v11; // r5@6
  bool v12; // zf@9
  __int64 v13; // kr00_8@12
  int v14; // r0@12
  int v15; // r7@13
  int v16; // r4@13
  bool v17; // zf@14
  int v18; // r5@17
  bool v19; // zf@20
  int v20; // r0@24
  int v21; // r5@25
  int v22; // r4@25
  bool v23; // zf@26
  int v24; // r6@29
  int *v25; // r0@31
  void *v26; // r0@31
  bool v27; // zf@33
  __int64 v28; // kr08_8@36
  int v29; // r0@36
  int v30; // r5@37
  bool v31; // zf@38
  int v32; // r7@41
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  bool v35; // zf@52
  int *v36; // r0@55
  int v37; // r1@55
  int v38; // r2@55
  int v39; // r3@55
  int *v40; // [sp+0h] [bp-38h]@1
  int v41; // [sp+8h] [bp-30h]@31

  v40 = a1;
  v5 = *a3;
  v6 = a5 % (*a3 >> 32);
  v7 = *(_DWORD *)(*a3 + 4 * v6);
  if ( v7 )
  {
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
    while ( 1 )
    {
      v10 = v9 == a5;
      if ( v9 == a5 )
        v10 = *(_DWORD *)(v8 + 4) == a5;
      if ( v10 )
        break;
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % HIDWORD(v5) == v6 )
          continue;
      }
      goto LABEL_24;
    }
    v12 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v12 = v7 == 0;
    if ( !v12 )
      v13 = *(_QWORD *)*(_DWORD *)(v7 + 8);
      v14 = *(_DWORD *)(v13 + 4 * (a4 % HIDWORD(v13)));
      if ( v14 )
        v15 = *(_DWORD *)v14;
        v16 = *(_DWORD *)(*(_DWORD *)v14 + 28);
        while ( 1 )
        {
          v17 = v16 == a4;
          if ( v16 == a4 )
            v17 = *(_BYTE *)(v15 + 4) == a4;
          if ( v17 )
            break;
          v18 = *(_DWORD *)v15;
          if ( *(_DWORD *)v15 )
          {
            v16 = *(_DWORD *)(v18 + 28);
            v14 = v15;
            v15 = *(_DWORD *)v15;
            if ( *(_DWORD *)(v18 + 28) % HIDWORD(v13) == a4 % HIDWORD(v13) )
              continue;
          }
          goto LABEL_24;
        }
        v19 = v14 == 0;
        if ( v14 )
          v16 = *(_DWORD *)v14;
          v19 = *(_DWORD *)v14 == 0;
        if ( !v19 )
          goto LABEL_55;
  }
LABEL_24:
  v20 = *(_DWORD *)v5;
  if ( *(_DWORD *)v5 )
    v21 = *(_DWORD *)v20;
    v22 = *(_DWORD *)(*(_DWORD *)v20 + 12);
      v23 = v22 == 0;
      if ( !v22 )
        v23 = *(_DWORD *)(v21 + 4) == 0;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = v21;
        v21 = *(_DWORD *)v21;
        if ( !(*(_DWORD *)(v24 + 12) % HIDWORD(v5)) )
      goto LABEL_31;
    v27 = v20 == 0;
    if ( v20 )
      v20 = *(_DWORD *)v20;
      v27 = v20 == 0;
    if ( !v27 )
      v28 = *(_QWORD *)*(_DWORD *)(v20 + 8);
      v29 = *(_DWORD *)(v28 + 4 * (0xA3u % HIDWORD(v28)));
      if ( v29 )
        v30 = *(_DWORD *)v29;
        v16 = *(_DWORD *)(*(_DWORD *)v29 + 28);
          v31 = v16 == 163;
          if ( v16 == 163 )
            v31 = *(_BYTE *)(v30 + 4) == 163;
          if ( v31 )
          v32 = *(_DWORD *)v30;
          if ( *(_DWORD *)v30 )
            v16 = *(_DWORD *)(v32 + 28);
            v29 = v30;
            v30 = *(_DWORD *)v30;
            if ( *(_DWORD *)(v32 + 28) % HIDWORD(v28) == 0xA3u % HIDWORD(v28) )
          goto LABEL_31;
        v35 = v29 == 0;
        if ( v29 )
          v16 = *(_DWORD *)v29;
          v35 = *(_DWORD *)v29 == 0;
        if ( !v35 )
LABEL_55:
          v36 = sub_119C854(v40, (int *)(v16 + 8));
          v37 = *(_DWORD *)(v16 + 16);
          v38 = *(_DWORD *)(v16 + 20);
          v39 = *(_DWORD *)(v16 + 24);
          v36[1] = *(_DWORD *)(v16 + 12);
          v36[2] = v37;
          v36[3] = v38;
          v36[4] = v39;
          return;
LABEL_31:
  sub_119C884((void **)&v41, (const char *)&unk_257BC67);
  v25 = sub_119C854(v40, &v41);
  v25[1] = 1065353216;
  v25[2] = 1065353216;
  v25[3] = 1065353216;
  v25[4] = 1065353216;
  v26 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v26);
}


Json::Value *__fastcall SoundMapping::_loadEntityInteractiveSounds(int a1, Json::Value *a2, int a3, int a4)
{
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r5@2
  int v8; // r7@3
  int v9; // r4@4
  int v10; // r6@4
  int v11; // r5@5
  int v12; // r10@6
  void *v13; // r0@7
  unsigned __int64 *v14; // r7@12 OVERLAPPED
  Json::Value *result; // r0@12
  Json::Value *v16; // r0@14
  const Json::Value *v17; // r0@14
  Json::Value *v18; // r0@14
  const Json::Value *v19; // r0@16
  const void **v20; // r8@18 OVERLAPPED
  const void **v21; // r11@18
  unsigned int v22; // r6@19
  void *v23; // r10@20
  double v24; // r0@20
  unsigned int v25; // r0@20
  int v26; // r5@22
  void *v27; // r8@22
  const Json::Value *v28; // r0@23
  unsigned __int64 v29; // kr08_8@23
  int v30; // r7@23
  int v31; // r0@23
  int v32; // r9@24
  int v33; // r5@24
  bool v34; // zf@25
  int v35; // r8@28
  bool v36; // zf@31
  _DWORD *v37; // r0@35
  int v38; // r6@36
  int v39; // r4@37
  int v40; // r5@38
  void *v41; // r0@39
  const void **v42; // r5@47
  unsigned int *v43; // r2@49
  signed int v44; // r1@51
  int *v45; // r0@57
  void *v46; // r9@62
  double v47; // r0@62
  unsigned int v48; // r0@62
  int v49; // r6@64
  void *v50; // r4@64
  const Json::Value *v51; // r0@65
  unsigned __int64 v52; // kr18_8@65
  int v53; // r8@65
  int v54; // r10@65
  int v55; // r0@67
  int v56; // r6@68
  int v57; // r7@68
  bool v58; // zf@69
  int v59; // r5@72
  bool v60; // zf@75
  _DWORD *v61; // r0@79
  int v62; // r4@80
  int v63; // r5@81
  int v64; // r6@82
  void *v65; // r0@83
  __int64 v66; // [sp+4h] [bp-5Ch]@18
  Json::Value *v67; // [sp+8h] [bp-58h]@1
  const void **v68; // [sp+Ch] [bp-54h]@18
  const void **v69; // [sp+10h] [bp-50h]@18
  char v70; // [sp+18h] [bp-48h]@16
  char v71; // [sp+28h] [bp-38h]@14

  v4 = a3;
  v5 = a4;
  v6 = *(_DWORD *)(a3 + 8);
  v67 = a2;
  if ( v6 )
  {
    do
    {
      v7 = *(_DWORD *)v6;
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr((_DWORD *)(v6 + 8));
      operator delete((void *)v6);
      v6 = v7;
    }
    while ( v7 );
  }
  _aeabi_memclr4(*(_QWORD *)v4, 4 * (*(_QWORD *)v4 >> 32));
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  v8 = *(_DWORD *)(v5 + 8);
  if ( v8 )
      v9 = *(_DWORD *)(v8 + 8);
      v10 = *(_DWORD *)v8;
      if ( v9 )
      {
        v11 = *(_DWORD *)(v9 + 8);
        if ( v11 )
        {
          do
          {
            v12 = *(_DWORD *)v11;
            std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>::~unique_ptr((_DWORD *)(v11 + 8));
            operator delete((void *)v11);
            v11 = v12;
          }
          while ( v12 );
        }
        _aeabi_memclr4(*(_QWORD *)v9, 4 * (*(_QWORD *)v9 >> 32));
        *(_DWORD *)(v9 + 8) = 0;
        *(_DWORD *)(v9 + 12) = 0;
        v13 = *(void **)v9;
        if ( *(_DWORD *)v9 && (void *)(v9 + 24) != v13 )
          operator delete(v13);
        operator delete((void *)v9);
      }
      operator delete((void *)v8);
      v8 = v10;
    while ( v10 );
  v14 = (unsigned __int64 *)v5;
  _aeabi_memclr4(*(_QWORD *)v5, 4 * (*(_QWORD *)v5 >> 32));
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  result = (Json::Value *)Json::Value::isNull(v67);
  if ( !result )
    result = (Json::Value *)Json::Value::isObject(v67);
    if ( result == (Json::Value *)1 )
      v16 = (Json::Value *)Json::Value::operator[]((int)v67, "block_sounds");
      SoundMapping::_loadBlockSounds((int)v16, v16, v4);
      v17 = (const Json::Value *)Json::Value::operator[]((int)v67, "entity_sounds");
      v18 = Json::Value::Value((Json::Value *)&v71, v17);
      if ( !Json::Value::isNull(v18) && Json::Value::isObject((Json::Value *)&v71) == 1 )
        v19 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v71, "entities");
        Json::Value::Value((Json::Value *)&v70, v19);
        if ( !Json::Value::isNull((Json::Value *)&v70) && Json::Value::isObject((Json::Value *)&v70) == 1 )
          Json::Value::getMemberNames((Json::Value *)&v68, (int)&v70);
          v20 = v69;
          v21 = v68;
          HIDWORD(v66) = v69;
          if ( v68 != v69 )
            do
            {
              v22 = (unsigned int)EntityTypeFromString(v21);
              if ( v22 != 1 )
              {
                v23 = operator new(0x2Cu);
                _aeabi_memclr4(v23, 44);
                *((_DWORD *)v23 + 4) = 1065353216;
                LODWORD(v24) = (char *)v23 + 16;
                *(_DWORD *)(LODWORD(v24) + 4) = 0;
                v25 = sub_119C844(v24);
                *((_DWORD *)v23 + 1) = v25;
                if ( v25 == 1 )
                {
                  *((_DWORD *)v23 + 6) = 0;
                  v27 = (char *)v23 + 24;
                }
                else
                  if ( v25 >= 0x40000000 )
                    sub_119C874();
                  v26 = 4 * v25;
                  v27 = operator new(4 * v25);
                  _aeabi_memclr4(v27, v26);
                *(_DWORD *)v23 = v27;
                *((_DWORD *)v23 + 7) = 1065353216;
                *((_DWORD *)v23 + 8) = 1065353216;
                *((_DWORD *)v23 + 9) = 1065353216;
                *((_DWORD *)v23 + 10) = 1065353216;
                v28 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v70, (const char **)v21);
                EventToSoundListMap::parse((EventToSoundListMap *)v23, v28);
                LODWORD(v66) = v14;
                v29 = *v14;
                v30 = v22 % (*v14 >> 32);
                v31 = *(_DWORD *)(v29 + 4 * v30);
                if ( !v31 )
                  goto LABEL_35;
                v32 = *(_DWORD *)v31;
                v33 = *(_DWORD *)(*(_DWORD *)v31 + 12);
                while ( 1 )
                  v34 = v33 == v22;
                  if ( v33 == v22 )
                    v34 = v22 == *(_DWORD *)(v32 + 4);
                  if ( v34 )
                    break;
                  v35 = *(_DWORD *)v32;
                  if ( *(_DWORD *)v32 )
                  {
                    v33 = *(_DWORD *)(v35 + 12);
                    v31 = v32;
                    v32 = *(_DWORD *)v32;
                    if ( *(_DWORD *)(v35 + 12) % HIDWORD(v29) == v30 )
                      continue;
                  }
                v36 = v31 == 0;
                if ( v31 )
                  v31 = *(_DWORD *)v31;
                  v36 = v31 == 0;
                if ( v36 )
LABEL_35:
                  v37 = operator new(0x10u);
                  *v37 = 0;
                  v37[1] = v22;
                  v37[2] = 0;
                  v31 = std::_Hashtable<EntityType,std::pair<EntityType const,std::unique_ptr<EventToSoundListMap,std::default_delete<EventToSoundListMap>>>,std::allocator<std::pair<EntityType const,std::unique_ptr<EventToSoundListMap,std::default_delete<EventToSoundListMap>>>>,std::__detail::_Select1st,std::equal_to<EntityType>,std::hash<EntityType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                          v66,
                          v30,
                          v22,
                          (int)v37);
                v38 = *(_DWORD *)(v31 + 8);
                *(_DWORD *)(v31 + 8) = v23;
                *(_QWORD *)&v14 = v66;
                if ( v38 )
                  v39 = *(_DWORD *)(v38 + 8);
                  if ( v39 )
                    do
                    {
                      v40 = *(_DWORD *)v39;
                      std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>::~unique_ptr((_DWORD *)(v39 + 8));
                      operator delete((void *)v39);
                      v39 = v40;
                    }
                    while ( v40 );
                  _aeabi_memclr4(*(_QWORD *)v38, 4 * (*(_QWORD *)v38 >> 32));
                  *(_DWORD *)(v38 + 8) = 0;
                  *(_DWORD *)(v38 + 12) = 0;
                  v41 = *(void **)v38;
                  if ( *(_DWORD *)v38 && (void *)(v38 + 24) != v41 )
                    operator delete(v41);
                  operator delete((void *)v38);
              }
              ++v21;
            }
            while ( v21 != v20 );
            v21 = v69;
            v42 = v68;
            if ( v68 != v69 )
              do
                v45 = (int *)((char *)*v42 - 12);
                if ( v45 != &dword_28898C0 )
                  v43 = (unsigned int *)((char *)*v42 - 4);
                  if ( &pthread_create )
                    __dmb();
                      v44 = __ldrex(v43);
                    while ( __strex(v44 - 1, v43) );
                  else
                    v44 = (*v43)--;
                  if ( v44 <= 0 )
                    j_j_j_j_j__ZdlPv_9_1(v45);
                ++v42;
              while ( v42 != v21 );
              v21 = v68;
          if ( v21 )
            operator delete(v21);
        v46 = operator new(0x2Cu);
        _aeabi_memclr4(v46, 44);
        *((_DWORD *)v46 + 4) = 1065353216;
        LODWORD(v47) = (char *)v46 + 16;
        *(_DWORD *)(LODWORD(v47) + 4) = 0;
        v48 = sub_119C844(v47);
        *((_DWORD *)v46 + 1) = v48;
        if ( v48 == 1 )
          *((_DWORD *)v46 + 6) = 0;
          v50 = (char *)v46 + 24;
        else
          if ( v48 >= 0x40000000 )
            sub_119C874();
          v49 = 4 * v48;
          v50 = operator new(4 * v48);
          _aeabi_memclr4(v50, v49);
        *(_DWORD *)v46 = v50;
        *((_DWORD *)v46 + 7) = 1065353216;
        *((_DWORD *)v46 + 8) = 1065353216;
        *((_DWORD *)v46 + 9) = 1065353216;
        *((_DWORD *)v46 + 10) = 1065353216;
        v51 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v71, "defaults");
        EventToSoundListMap::parse((EventToSoundListMap *)v46, v51);
        v52 = *v14;
        v53 = 0;
        v54 = (int)v14;
        if ( *v14 >> 32 != 1 )
          v53 = 1;
        v55 = *(_DWORD *)(v52 + 4 * v53);
        if ( !v55 )
          goto LABEL_79;
        v56 = *(_DWORD *)v55;
        v57 = *(_DWORD *)(*(_DWORD *)v55 + 12);
        while ( 1 )
          v58 = v57 == 1;
          if ( v57 == 1 )
            v58 = *(_DWORD *)(v56 + 4) == 1;
          if ( v58 )
            break;
          v59 = *(_DWORD *)v56;
          if ( *(_DWORD *)v56 )
            v57 = *(_DWORD *)(v59 + 12);
            v55 = v56;
            v56 = *(_DWORD *)v56;
            if ( *(_DWORD *)(v59 + 12) % HIDWORD(v52) == v53 )
              continue;
        v60 = v55 == 0;
        if ( v55 )
          v55 = *(_DWORD *)v55;
          v60 = v55 == 0;
        if ( v60 )
LABEL_79:
          v61 = operator new(0x10u);
          *v61 = 0;
          v61[1] = 1;
          v61[2] = 0;
          v55 = std::_Hashtable<EntityType,std::pair<EntityType const,std::unique_ptr<EventToSoundListMap,std::default_delete<EventToSoundListMap>>>,std::allocator<std::pair<EntityType const,std::unique_ptr<EventToSoundListMap,std::default_delete<EventToSoundListMap>>>>,std::__detail::_Select1st,std::equal_to<EntityType>,std::hash<EntityType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  v54,
                  v53,
                  1u,
                  (int)v61);
        v62 = *(_DWORD *)(v55 + 8);
        *(_DWORD *)(v55 + 8) = v46;
        if ( v62 )
          v63 = *(_DWORD *)(v62 + 8);
          if ( v63 )
              v64 = *(_DWORD *)v63;
              std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>::~unique_ptr((_DWORD *)(v63 + 8));
              operator delete((void *)v63);
              v63 = v64;
            while ( v64 );
          _aeabi_memclr4(*(_QWORD *)v62, 4 * (*(_QWORD *)v62 >> 32));
          *(_DWORD *)(v62 + 8) = 0;
          *(_DWORD *)(v62 + 12) = 0;
          v65 = *(void **)v62;
          if ( *(_DWORD *)v62 )
            if ( (void *)(v62 + 24) != v65 )
              operator delete(v65);
          operator delete((void *)v62);
        Json::Value::~Value((Json::Value *)&v70);
      result = Json::Value::~Value((Json::Value *)&v71);
  return result;
}


void __fastcall SoundMapping::getEntitySound(int a1, int a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r10@1
  int v5; // r9@1
  unsigned int v6; // r5@1
  int v7; // r0@1
  int v8; // r8@2
  int v9; // r4@2
  bool v10; // zf@3
  int v11; // r6@6
  bool v12; // zf@9
  __int64 v13; // kr00_8@12
  int v14; // r0@12
  int v15; // r7@13
  int v16; // r4@13
  bool v17; // zf@14
  int v18; // r6@17
  bool v19; // zf@20
  signed int v20; // r5@24
  int v21; // r0@26
  int v22; // r6@27
  int v23; // r4@27
  bool v24; // zf@28
  int v25; // r7@31
  bool v26; // zf@34
  __int64 v27; // kr08_8@37
  int v28; // r0@37
  int v29; // r6@38
  bool v30; // zf@39
  int v31; // r7@42
  bool v32; // zf@45
  void *v33; // r0@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  int v36; // r1@59
  int v37; // r2@59
  int v38; // r3@59
  int v39; // [sp+8h] [bp-30h]@49

  v4 = *(_QWORD *)(a2 + 32);
  v5 = a1;
  v6 = a4 % (unsigned int)(*(_QWORD *)(a2 + 32) >> 32);
  v7 = *(_DWORD *)(v4 + 4 * v6);
  if ( v7 )
  {
    v8 = *(_DWORD *)v7;
    v9 = *(_DWORD *)(*(_DWORD *)v7 + 12);
    while ( 1 )
    {
      v10 = v9 == a4;
      if ( v9 == a4 )
        v10 = *(_DWORD *)(v8 + 4) == a4;
      if ( v10 )
        break;
      v11 = *(_DWORD *)v8;
      if ( *(_DWORD *)v8 )
      {
        v9 = *(_DWORD *)(v11 + 12);
        v7 = v8;
        v8 = *(_DWORD *)v8;
        if ( *(_DWORD *)(v11 + 12) % HIDWORD(v4) == v6 )
          continue;
      }
      goto LABEL_24;
    }
    v12 = v7 == 0;
    if ( v7 )
      v7 = *(_DWORD *)v7;
      v12 = v7 == 0;
    if ( !v12 )
      v13 = *(_QWORD *)*(_DWORD *)(v7 + 8);
      v14 = *(_DWORD *)(v13 + 4 * (a3 % HIDWORD(v13)));
      if ( v14 )
        v15 = *(_DWORD *)v14;
        v16 = *(_DWORD *)(*(_DWORD *)v14 + 28);
        while ( 1 )
        {
          v17 = v16 == a3;
          if ( v16 == a3 )
            v17 = *(_BYTE *)(v15 + 4) == a3;
          if ( v17 )
            break;
          v18 = *(_DWORD *)v15;
          if ( *(_DWORD *)v15 )
          {
            v16 = *(_DWORD *)(v18 + 28);
            v14 = v15;
            v15 = *(_DWORD *)v15;
            if ( *(_DWORD *)(v18 + 28) % HIDWORD(v13) == a3 % HIDWORD(v13) )
              continue;
          }
          goto LABEL_24;
        }
        v19 = v14 == 0;
        if ( v14 )
          v16 = *(_DWORD *)v14;
          v19 = *(_DWORD *)v14 == 0;
        if ( !v19 )
          goto LABEL_59;
  }
LABEL_24:
  v20 = 0;
  if ( HIDWORD(v4) != 1 )
    v20 = 1;
  v21 = *(_DWORD *)(v4 + 4 * v20);
  if ( v21 )
    v22 = *(_DWORD *)v21;
    v23 = *(_DWORD *)(*(_DWORD *)v21 + 12);
      v24 = v23 == 1;
      if ( v23 == 1 )
        v24 = *(_DWORD *)(v22 + 4) == 1;
      if ( v24 )
      v25 = *(_DWORD *)v22;
      if ( *(_DWORD *)v22 )
        v23 = *(_DWORD *)(v25 + 12);
        v21 = v22;
        v22 = *(_DWORD *)v22;
        if ( *(_DWORD *)(v25 + 12) % HIDWORD(v4) == v20 )
      goto LABEL_49;
    v26 = v21 == 0;
    if ( v21 )
      v21 = *(_DWORD *)v21;
      v26 = v21 == 0;
    if ( !v26 )
      v27 = *(_QWORD *)*(_DWORD *)(v21 + 8);
      v28 = *(_DWORD *)(v27 + 4 * (a3 % HIDWORD(v27)));
      if ( v28 )
        v29 = *(_DWORD *)v28;
        v16 = *(_DWORD *)(*(_DWORD *)v28 + 28);
          v30 = v16 == a3;
            v30 = *(_BYTE *)(v29 + 4) == a3;
          if ( v30 )
          v31 = *(_DWORD *)v29;
          if ( *(_DWORD *)v29 )
            v16 = *(_DWORD *)(v31 + 28);
            v28 = v29;
            v29 = *(_DWORD *)v29;
            if ( *(_DWORD *)(v31 + 28) % HIDWORD(v27) == a3 % HIDWORD(v27) )
          goto LABEL_49;
        v32 = v28 == 0;
        if ( v28 )
          v16 = *(_DWORD *)v28;
          v32 = *(_DWORD *)v28 == 0;
        if ( !v32 )
LABEL_59:
          sub_119C854((int *)v5, (int *)(v16 + 8));
          v36 = *(_DWORD *)(v16 + 16);
          v37 = *(_DWORD *)(v16 + 20);
          v38 = *(_DWORD *)(v16 + 24);
          *(_DWORD *)(v5 + 4) = *(_DWORD *)(v16 + 12);
          *(_DWORD *)(v5 + 8) = v36;
          *(_DWORD *)(v5 + 12) = v37;
          *(_DWORD *)(v5 + 16) = v38;
          return;
LABEL_49:
  sub_119C884((void **)&v39, (const char *)&unk_257BC67);
  sub_119C854((int *)v5, &v39);
  *(_DWORD *)(v5 + 4) = 1065353216;
  *(_DWORD *)(v5 + 8) = 1065353216;
  *(_DWORD *)(v5 + 12) = 1065353216;
  *(_DWORD *)(v5 + 16) = 1065353216;
  v33 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
}


void __fastcall SoundMapping::_loadBlockSounds(int a1, Json::Value *a2, int a3)
{
  int v3; // r10@1
  Json::Value *v4; // r8@1
  int v5; // r4@1
  int v6; // r5@2
  unsigned int *v7; // r4@5
  unsigned int *v8; // r11@5
  unsigned int v9; // r7@6
  double v10; // r0@7
  int v11; // r6@7
  unsigned int v12; // r0@7
  int v13; // r5@9
  void *v14; // r4@9
  void *v15; // r0@10
  __int64 v16; // r4@10
  int v17; // r6@10
  int v18; // r0@10
  int v19; // r9@11
  int v20; // r4@11
  bool v21; // zf@12
  int v22; // r8@15
  bool v23; // zf@18
  _DWORD *v24; // r0@22
  unsigned int *v25; // r4@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  int *v28; // r0@38
  unsigned int *v29; // [sp+8h] [bp-40h]@5
  Json::Value *v30; // [sp+Ch] [bp-3Ch]@10
  int v31; // [sp+10h] [bp-38h]@10
  unsigned int *v32; // [sp+14h] [bp-34h]@5
  unsigned int *v33; // [sp+18h] [bp-30h]@5

  v3 = a3;
  v4 = a2;
  v5 = *(_DWORD *)(a3 + 8);
  if ( v5 )
  {
    do
    {
      v6 = *(_DWORD *)v5;
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr((_DWORD *)(v5 + 8));
      operator delete((void *)v5);
      v5 = v6;
    }
    while ( v6 );
  }
  _aeabi_memclr4(*(_QWORD *)v3, 4 * (*(_QWORD *)v3 >> 32));
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  if ( !Json::Value::isNull(v4) && Json::Value::isObject(v4) == 1 )
    Json::Value::getMemberNames((Json::Value *)&v32, (int)v4);
    v7 = v33;
    v8 = v32;
    v29 = v33;
    if ( v32 != v33 )
      do
      {
        v9 = BlockSoundTypeFromString(v8);
        if ( v9 != 16 )
        {
          LODWORD(v10) = operator new(0x1Cu);
          v11 = LODWORD(v10);
          *(_DWORD *)(LODWORD(v10) + 8) = 0;
          *(_DWORD *)(LODWORD(v10) + 12) = 0;
          *(_DWORD *)(LODWORD(v10) + 16) = 1065353216;
          LODWORD(v10) += 16;
          *(_DWORD *)(LODWORD(v10) + 4) = 0;
          v12 = sub_119C844(v10);
          *(_DWORD *)(v11 + 4) = v12;
          if ( v12 == 1 )
          {
            *(_DWORD *)(v11 + 24) = 0;
            v14 = (void *)(v11 + 24);
          }
          else
            if ( v12 >= 0x40000000 )
              sub_119C874();
            v13 = 4 * v12;
            v14 = operator new(4 * v12);
            _aeabi_memclr4(v14, v13);
          *(_DWORD *)v11 = v14;
          v31 = v11;
          v30 = v4;
          v15 = Json::Value::operator[]((int)v4, (const char **)v8);
          SoundMapping::_loadEventSounds((int)v15, (int)v15, v31);
          v16 = *(_QWORD *)v3;
          v17 = v9 % (unsigned int)(*(_QWORD *)v3 >> 32);
          v18 = *(_DWORD *)(*(_QWORD *)v3 + 4 * v17);
          if ( !v18 )
            goto LABEL_22;
          v19 = *(_DWORD *)v18;
          v20 = *(_DWORD *)(*(_DWORD *)v18 + 12);
          while ( 1 )
            v21 = v20 == v9;
            if ( v20 == v9 )
              v21 = v9 == *(_DWORD *)(v19 + 4);
            if ( v21 )
              break;
            v22 = *(_DWORD *)v19;
            if ( *(_DWORD *)v19 )
            {
              LODWORD(v16) = *(_DWORD *)(v22 + 12);
              v18 = v19;
              v19 = *(_DWORD *)v19;
              if ( *(_DWORD *)(v22 + 12) % HIDWORD(v16) == v17 )
                continue;
            }
          v23 = v18 == 0;
          if ( v18 )
            v18 = *(_DWORD *)v18;
            v23 = v18 == 0;
          if ( v23 )
LABEL_22:
            v24 = operator new(0x10u);
            *v24 = 0;
            v24[1] = v9;
            v24[2] = 0;
            v18 = std::_Hashtable<BlockSoundType,std::pair<BlockSoundType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>,std::allocator<std::pair<BlockSoundType const,std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>>>,std::__detail::_Select1st,std::equal_to<BlockSoundType>,std::hash<BlockSoundType>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                    v3,
                    v17,
                    v9,
                    (int)v24);
          std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::operator=(
            (int *)(v18 + 8),
            &v31);
          std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr(&v31);
          v4 = v30;
          v7 = v29;
        }
        ++v8;
      }
      while ( v8 != v7 );
      v8 = v33;
      v25 = v32;
      if ( v32 != v33 )
        do
          v28 = (int *)(*v25 - 12);
          if ( v28 != &dword_28898C0 )
            v26 = (unsigned int *)(*v25 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
            else
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v28);
          ++v25;
        while ( v25 != v8 );
        v8 = v32;
    if ( v8 )
      operator delete(v8);
}


void __fastcall SoundMapping::getBlockSound(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  SoundMapping::getBlockSound(a1, a2, a3, a4);
}


void __fastcall SoundMapping::~SoundMapping(SoundMapping *this)
{
  SoundMapping::~SoundMapping(this);
}


SoundMapping::EntityInteractiveSounds *__fastcall SoundMapping::EntityInteractiveSounds::~EntityInteractiveSounds(SoundMapping::EntityInteractiveSounds *this)
{
  SoundMapping::EntityInteractiveSounds *v1; // r8@1
  int v2; // r5@1
  int v3; // r6@2
  int v4; // r10@2
  int v5; // r7@3
  int v6; // r4@4
  void *v7; // r0@5
  char *v8; // r0@10
  int v9; // r5@13
  int v10; // r4@14
  char *v11; // r0@15

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 8);
      v4 = *(_DWORD *)v2;
      if ( v3 )
      {
        v5 = *(_DWORD *)(v3 + 8);
        if ( v5 )
        {
          do
          {
            v6 = *(_DWORD *)v5;
            std::unique_ptr<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>,std::default_delete<std::unordered_map<BlockSoundType,Sound,std::hash<BlockSoundType>,std::equal_to<BlockSoundType>,std::allocator<std::pair<BlockSoundType const,Sound>>>>>::~unique_ptr((_DWORD *)(v5 + 8));
            operator delete((void *)v5);
            v5 = v6;
          }
          while ( v6 );
        }
        _aeabi_memclr4(*(_QWORD *)v3, 4 * (*(_QWORD *)v3 >> 32));
        *(_DWORD *)(v3 + 8) = 0;
        *(_DWORD *)(v3 + 12) = 0;
        v7 = *(void **)v3;
        if ( *(_DWORD *)v3 && (void *)(v3 + 24) != v7 )
          operator delete(v7);
        operator delete((void *)v3);
      }
      operator delete((void *)v2);
      v2 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v8 = (char *)*((_DWORD *)v1 + 7);
  if ( v8 && (char *)v1 + 52 != v8 )
    operator delete(v8);
  v9 = *((_DWORD *)v1 + 2);
  if ( v9 )
      v10 = *(_DWORD *)v9;
      std::unique_ptr<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>,std::default_delete<std::unordered_map<LevelSoundEvent,Sound,std::hash<LevelSoundEvent>,std::equal_to<LevelSoundEvent>,std::allocator<std::pair<LevelSoundEvent const,Sound>>>>>::~unique_ptr((_DWORD *)(v9 + 8));
      operator delete((void *)v9);
      v9 = v10;
    while ( v10 );
  _aeabi_memclr4(*(_QWORD *)v1, 4 * (*(_QWORD *)v1 >> 32));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  v11 = *(char **)v1;
  if ( *(_DWORD *)v1 && (char *)v1 + 24 != v11 )
    operator delete(v11);
  return v1;
}


Json::Value *__fastcall SoundMapping::init(SoundMapping *this, ResourcePackManager *a2)
{
  SoundMapping *v2; // r5@1
  ResourcePackManager *v3; // r7@1
  void *v4; // r0@3
  char *v5; // r0@4
  char *v6; // r0@5
  int v7; // r0@6
  Json::Value *v8; // r0@6
  Json::Value *v9; // r0@6
  Json::Value *v10; // r0@6
  void *v11; // r0@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  char *v21; // [sp+8h] [bp-68h]@4
  char *v22; // [sp+Ch] [bp-64h]@4
  int v23; // [sp+10h] [bp-60h]@4
  char v24; // [sp+14h] [bp-5Ch]@1
  void (*v25)(void); // [sp+1Ch] [bp-54h]@1
  int v26; // [sp+28h] [bp-48h]@1
  void **v27; // [sp+2Ch] [bp-44h]@1
  int v28; // [sp+30h] [bp-40h]@8
  void (*v29)(void); // [sp+40h] [bp-30h]@6
  char v30; // [sp+48h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  Json::Value::Value(&v30, 0);
  sub_119C884((void **)&v26, "sounds.json");
  v25 = 0;
  JsonMergeStrategy::JsonMergeStrategy((int)&v27, &v26, (int)&v30, (int)&v24);
  if ( v25 )
    v25();
  v4 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v26 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  sub_119C884((void **)&v21, "sounds.json");
  v22 = v21;
  v21 = (char *)&unk_28898CC;
  v23 = 0;
  ResourcePackManager::loadAllVersionsOf((int)v3);
  v5 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v22 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  v7 = Json::Value::operator[]((Json::Value *)&v30, "individual_event_sounds");
  SoundMapping::_loadEventSounds(v7, v7, (int)v2 + 4);
  v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v30, "block_sounds");
  SoundMapping::_loadBlockSounds((int)v8, v8, (int)v2 + 60);
  v9 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v30, "entity_sounds");
  SoundMapping::_loadEntitySounds((int)v9, v9, (int)v2 + 32);
  v10 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v30, "interactive_sounds");
  SoundMapping::_loadEntityInteractiveSounds((int)v10, v10, (int)v2 + 88, (int)v2 + 116);
  v27 = &off_26EAB00;
  if ( v29 )
    v29();
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return Json::Value::~Value((Json::Value *)&v30);
}


void __fastcall SoundMapping::getEntitySound(int a1, int a2, unsigned int a3, unsigned int a4)
{
  SoundMapping::getEntitySound(a1, a2, a3, a4);
}


void __fastcall SoundMapping::_loadBlockSounds(int a1, Json::Value *a2, int a3)
{
  SoundMapping::_loadBlockSounds(a1, a2, a3);
}


void __fastcall SoundMapping::getSound(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // r4@1
  void *v18; // r0@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  int v21; // [sp+8h] [bp-40h]@8

  v7 = (int *)a1;
  _ZF = a4 == 1;
  if ( a4 != 1 )
    _ZF = a5 == 16;
  if ( _ZF )
  {
    if ( a5 == 16 )
    {
      if ( a4 == 1 )
      {
        SoundMapping::getEventSound(a1, a2, a3);
      }
      else
        SoundMapping::getEntitySound((int)&v21, a2, a3, a4);
        __asm
        {
          VLDR            S0, [SP,#0x48+var_38]
          VLDR            S16, [SP,#0x48+var_30]
          VCMPE.F32       S16, S0
        }
        if ( _ZF )
          __asm { VMRS            APSR_nzcv, FPSCR }
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          {
            _R5 = Random::_genRandInt32((Random *)a6);
            _R0 = Random::_genRandInt32((Random *)a6);
            __asm
            {
              VMOV            S0, R0
              VLDR            D1, =2.32830644e-10
              VMOV            S4, R5
              VCVT.F64.U32    D0, S0
              VCVT.F64.U32    D2, S4
              VMUL.F64        D0, D0, D1
              VMUL.F64        D1, D2, D1
              VCVT.F32.F64    S0, D0
              VCVT.F32.F64    S2, D1
              VLDR            S4, [SP,#0x48+var_38]
              VSUB.F32        S0, S2, S0
              VLDR            S6, [SP,#0x48+var_30]
              VSUB.F32        S8, S6, S4
              VADD.F32        S2, S4, S6
              VMOV.F32        S4, #0.5
              VMUL.F32        S0, S8, S0
              VADD.F32        S0, S2, S0
              VMUL.F32        S16, S0, S4
            }
          }
          __asm
            VMOV.F32        S0, #0.5
            VADD.F32        S16, S16, S0
        else
          VLDR            S18, [SP,#0x48+var_34]
          VLDR            S0, [SP,#0x48+var_3C]
          VCMPE.F32       S18, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          _R5 = Random::_genRandInt32((Random *)a6);
          _R0 = Random::_genRandInt32((Random *)a6);
            VMOV            S0, R0
            VLDR            D1, =2.32830644e-10
            VMOV            S4, R5
            VCVT.F64.U32    D0, S0
            VCVT.F64.U32    D2, S4
            VMUL.F64        D0, D0, D1
            VMUL.F64        D1, D2, D1
            VCVT.F32.F64    S0, D0
            VCVT.F32.F64    S2, D1
            VLDR            S4, [SP,#0x48+var_3C]
            VSUB.F32        S0, S2, S0
            VLDR            S6, [SP,#0x48+var_34]
            VSUB.F32        S8, S6, S4
            VADD.F32        S2, S4, S6
            VMOV.F32        S4, #0.5
            VMUL.F32        S0, S8, S0
            VADD.F32        S0, S2, S0
            VMUL.F32        S18, S0, S4
        sub_119C854(v7, &v21);
          VSTR            S18, [R4,#4]
          VSTR            S16, [R4,#8]
        v18 = (void *)(v21 - 12);
          VSTR            S18, [R4,#0xC]
          VSTR            S16, [R4,#0x10]
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v21 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
          else
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v18);
    }
    else
      SoundMapping::_getBlockSound((int *)a1, a2, (unsigned __int64 *)(a2 + 60), a3, a5);
  }
  else
    SoundMapping::getInteractiveSound(a1, (Random *)a2, a3, a4, a5, (Random *)a6);
}


void __fastcall SoundMapping::~SoundMapping(SoundMapping *this)
{
  SoundMapping *v1; // r0@1

  v1 = SoundMapping::~SoundMapping(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall SoundMapping::getBlockSound(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  SoundMapping::_getBlockSound(a1, a2, (unsigned __int64 *)(a2 + 60), a3, a4);
}
