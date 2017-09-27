

int __fastcall MinecraftEventing::MinecraftEventing(int a1, int *a2)
{
  int v2; // r4@1
  int v3; // r7@1

  v2 = a1;
  *(_DWORD *)a1 = &off_26E8E84;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  sub_21E8AF4((int *)(a1 + 24), a2);
  sub_21E94B4((void **)(v2 + 28), "UnSet");
  sub_21E94B4((void **)(v2 + 32), "UnSet");
  *(_BYTE *)(v2 + 36) = 1;
  *(_BYTE *)(v2 + 37) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  return v2;
}


Json::Reader *__fastcall MinecraftEventing::fireEventStorageReport(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r5@1
  Social::Events::EventManager *v4; // r6@2
  unsigned int v5; // r4@2
  void *v6; // r0@5
  int v7; // r4@6
  signed int v12; // r10@6
  Json::Value *v13; // r0@8
  Json::Value *v14; // r8@8
  Json::Value *v15; // r0@8
  int v16; // r9@8
  Json::Value *v17; // r0@8
  Json::Value *v19; // r0@8
  Json::Value *v21; // r0@8
  Json::Value *v23; // r0@8
  void *v25; // r0@9
  void *v26; // r0@10
  void *v27; // r0@11
  void *v28; // r0@12
  void *v29; // r0@13
  unsigned int *v31; // r2@16
  signed int v32; // r1@18
  unsigned int *v33; // r2@20
  signed int v34; // r1@22
  unsigned int *v35; // r2@24
  signed int v36; // r1@26
  unsigned int *v37; // r2@28
  signed int v38; // r1@30
  unsigned int *v39; // r2@32
  signed int v40; // r1@34
  unsigned int *v41; // r2@36
  signed int v42; // r1@38
  int v43; // [sp+Ch] [bp-18Ch]@13
  int v44; // [sp+14h] [bp-184h]@12
  int v45; // [sp+1Ch] [bp-17Ch]@11
  int v46; // [sp+24h] [bp-174h]@10
  int v47; // [sp+28h] [bp-170h]@9
  int v48; // [sp+2Ch] [bp-16Ch]@9
  int v49; // [sp+38h] [bp-160h]@9
  char v50; // [sp+3Ch] [bp-15Ch]@6
  char v51; // [sp+44h] [bp-154h]@6
  float v52; // [sp+4Ch] [bp-14Ch]@6
  float v53; // [sp+50h] [bp-148h]@6
  float v54; // [sp+54h] [bp-144h]@6
  float v55; // [sp+58h] [bp-140h]@6
  void *ptr; // [sp+5Ch] [bp-13Ch]@2
  int v57; // [sp+74h] [bp-124h]@3
  int v58; // [sp+7Ch] [bp-11Ch]@2
  char v59; // [sp+80h] [bp-118h]@2
  char v60; // [sp+C8h] [bp-D0h]@1
  char v61; // [sp+DCh] [bp-BCh]@1

  v2 = a1;
  v3 = a2;
  Json::Reader::Reader((Json::Reader *)&v61);
  Json::Value::Value(&v60, 0);
  if ( Json::Reader::parse((int)&v61, v3, (int)&v60, 1) )
  {
    v4 = *(Social::Events::EventManager **)(v2 + 4);
    v5 = *(_DWORD *)(v2 + 12);
    sub_21E94B4((void **)&v58, "storageReport");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
    Social::Events::Event::Event((int)&v59, v5, &v58, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v57 != ptr )
      operator delete(ptr);
    v6 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
    {
      v31 = (unsigned int *)(v58 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    }
    v54 = 0.0;
    v55 = 0.0;
    v52 = 0.0;
    v53 = 0.0;
    v7 = Json::Value::operator[]((Json::Value *)&v60, "levels");
    Json::Value::begin((Json::Value *)&v51, v7);
    Json::Value::end((Json::Value *)&v50, v7);
    __asm
      VLDR            S16, =0.0
      VMOV.F32        S18, S16
      VMOV.F32        S20, S16
      VMOV.F32        S22, S16
    v12 = 0;
    while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v51, (const Json::ValueIteratorBase *)&v50) != 1 )
      v13 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v51);
      v14 = v13;
      v15 = (Json::Value *)Json::Value::operator[](v13, "files");
      v16 = Json::Value::asInt(v15, 0);
      v17 = (Json::Value *)Json::Value::operator[](v14, "sizeMB");
      _R0 = Json::Value::asFloat(v17, 0.0);
      __asm
        VMOV            S0, R0
        VADD.F32        S22, S22, S0
        VSTR            S22, [SP,#0x198+var_140]
      v19 = (Json::Value *)Json::Value::operator[](v14, "tsec");
      _R0 = Json::Value::asFloat(v19, 0.0);
        VADD.F32        S20, S20, S0
        VSTR            S20, [SP,#0x198+var_144]
      v21 = (Json::Value *)Json::Value::operator[](v14, "readMB");
      _R0 = Json::Value::asFloat(v21, 0.0);
        VADD.F32        S18, S18, S0
        VSTR            S18, [SP,#0x198+var_148]
      v23 = (Json::Value *)Json::Value::operator[](v14, "writeMB");
      _R0 = Json::Value::asFloat(v23, 0.0);
      __asm { VMOV            S0, R0 }
      v12 += v16;
        VADD.F32        S16, S16, S0
        VSTR            S16, [SP,#0x198+var_14C]
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v51);
    sub_21E94B4((void **)&v49, "numFiles");
    v47 = v12;
    v48 = v12 >> 31;
    Social::Events::Event::addProperty<unsigned long long>((int)&v59, &v49, (unsigned __int64 *)&v47);
    v25 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v49 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21E94B4((void **)&v46, "szMB");
    Social::Events::Event::addProperty<float>((int)&v59, &v46, (int)&v55);
    v26 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v46 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v45, "tsec");
    Social::Events::Event::addProperty<float>((int)&v59, &v45, (int)&v54);
    v27 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v45 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    sub_21E94B4((void **)&v44, "readMB");
    Social::Events::Event::addProperty<float>((int)&v59, &v44, (int)&v53);
    v28 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v44 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    sub_21E94B4((void **)&v43, "writeMB");
    Social::Events::Event::addProperty<float>((int)&v59, &v43, (int)&v52);
    v29 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v43 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    Social::Events::EventManager::recordEvent((int)v4);
    Social::Events::Event::~Event((int)&v59);
  }
  Json::Value::~Value((Json::Value *)&v60);
  return Json::Reader::~Reader((Json::Reader *)&v61);
}


int __fastcall MinecraftEventing::fireEventBoardTextUpdated(MinecraftEventing *this, ChalkboardBlockEntity *a2)
{
  ChalkboardBlockEntity *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  char v18; // [sp+Bh] [bp-A5h]@7
  int v19; // [sp+10h] [bp-A0h]@7
  int v20; // [sp+14h] [bp-9Ch]@6
  int v21; // [sp+1Ch] [bp-94h]@6
  char v22; // [sp+23h] [bp-8Dh]@5
  int v23; // [sp+28h] [bp-88h]@5
  void *ptr; // [sp+2Ch] [bp-84h]@1
  int v25; // [sp+44h] [bp-6Ch]@2
  int v26; // [sp+4Ch] [bp-64h]@1
  char v27; // [sp+50h] [bp-60h]@1

  v2 = a2;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v26, "BoardTextUpdated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v27, v4, &v26, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v25 != ptr )
    operator delete(ptr);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v23, "Type");
  v22 = ChalkboardBlockEntity::getChalkboardSize(v2);
  Social::Events::Event::addProperty<unsigned char>((int)&v27, &v23, &v22);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v23 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v21, "CharacterCount");
  v20 = ChalkboardBlockEntity::getTextCharCount(v2);
  Social::Events::Event::addProperty<int>((int)&v27, &v21, &v20);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v19, "Unlocked");
  v18 = ChalkboardBlockEntity::getLocked(v2) ^ 1;
  Social::Events::Event::addProperty<bool>((int)&v27, &v19, (bool *)&v18);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v27);
}


int __fastcall MinecraftEventing::fireEventDevConsoleOpen(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "DevConsoleOpen");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


int __fastcall MinecraftEventing::fireEventRealmUrlGenerated(int a1, const char **a2, __int64 *a3)
{
  const char **v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  __int64 *v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  __int64 v17; // [sp+8h] [bp-A0h]@6
  int v18; // [sp+14h] [bp-94h]@6
  int v19; // [sp+1Ch] [bp-8Ch]@5
  void *ptr; // [sp+20h] [bp-88h]@1
  int v21; // [sp+38h] [bp-70h]@2
  int v22; // [sp+40h] [bp-68h]@1
  char v23; // [sp+44h] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v22, "RealmUrlGenerated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v23, v6, &v22, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v21 != ptr )
    operator delete(ptr);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v19, "WorldUrl");
  Social::Events::Event::addProperty<std::string>((int)&v23, &v19, v3);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v18, "RealmWorldId");
  v17 = *v5;
  Social::Events::Event::addProperty<long long>((int)&v23, &v18, &v17);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v18 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v23);
}


int __fastcall MinecraftEventing::fireEventBlockBroken(int result, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r7@1
  ItemInstance *v6; // r9@4
  Social::Events::EventManager *v7; // r8@4
  int v8; // r4@4
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  void *v14; // r0@12
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  int v27; // [sp+8h] [bp-C0h]@12
  int v28; // [sp+10h] [bp-B8h]@12
  int v29; // [sp+14h] [bp-B4h]@11
  int v30; // [sp+1Ch] [bp-ACh]@11
  int v31; // [sp+20h] [bp-A8h]@10
  int v32; // [sp+28h] [bp-A0h]@10
  int v33; // [sp+30h] [bp-98h]@9
  int v34; // [sp+38h] [bp-90h]@8
  void *ptr; // [sp+3Ch] [bp-8Ch]@4
  int v36; // [sp+54h] [bp-74h]@5
  int v37; // [sp+5Ch] [bp-6Ch]@4
  char v38; // [sp+60h] [bp-68h]@4
  char v39; // [sp+68h] [bp-60h]@8

  v3 = result;
  v4 = a3;
  v5 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v6 = (ItemInstance *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 908))(v3);
        v7 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v37, "BlockBroken");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
        Social::Events::Event::Event((int)&v38, v8, &v37, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v36 != ptr )
          operator delete(ptr);
        v9 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v37 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        v39 = 1;
        sub_21E94B4((void **)&v34, "Type");
        Social::Events::Event::addProperty<unsigned char>((int)&v38, &v34, (_BYTE *)v5);
        v10 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v34 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v33, "AuxType");
        Social::Events::Event::addProperty<unsigned char>((int)&v38, &v33, (_BYTE *)(v5 + 1));
        v11 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v33 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v32, "ToolItemType");
        v31 = ItemInstance::getId(v6);
        Social::Events::Event::addProperty<int>((int)&v38, &v32, &v31);
        v12 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v32 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v30, "DestructionMethod");
        v29 = v4;
        Social::Events::Event::addProperty<int>((int)&v38, &v30, &v29);
        v13 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v30 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v28, "Count");
        v27 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v38, &v28, 0, (unsigned int *)&v27);
        v14 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v28 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        Social::Events::EventManager::recordEvent((int)v7);
        result = Social::Events::Event::~Event((int)&v38);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventCauldronUsed(int result, Player *a2, int a3, unsigned int a4, __int16 a5)
{
  Player *v5; // r5@1
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  ItemInstance *v9; // r5@8
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  void *v14; // r0@12
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@31
  signed int v24; // r1@33
  unsigned int *v25; // r2@35
  signed int v26; // r1@37
  int v27; // [sp+8h] [bp-C0h]@12
  int v28; // [sp+10h] [bp-B8h]@12
  int v29; // [sp+14h] [bp-B4h]@11
  int v30; // [sp+1Ch] [bp-ACh]@11
  int v31; // [sp+24h] [bp-A4h]@10
  int v32; // [sp+2Ch] [bp-9Ch]@9
  int v33; // [sp+34h] [bp-94h]@8
  void *ptr; // [sp+38h] [bp-90h]@4
  int v35; // [sp+50h] [bp-78h]@5
  int v36; // [sp+58h] [bp-70h]@4
  char v37; // [sp+5Ch] [bp-6Ch]@4
  __int16 v38; // [sp+A6h] [bp-22h]@1
  int v39; // [sp+A8h] [bp-20h]@1
  __int16 v40; // [sp+AEh] [bp-1Ah]@1

  v5 = (Player *)result;
  v40 = (signed __int16)a2;
  v39 = a3;
  v38 = a4;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v7 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v36, "CauldronUsed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v37, v7, &v36, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v35 != ptr )
          operator delete(ptr);
        v8 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v36 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        v9 = (ItemInstance *)Player::getSelectedItem(v5);
        sub_21E94B4((void **)&v33, "CauldronLevel");
        Social::Events::Event::addProperty<short>((int)&v37, &v33, &v38);
        v10 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v33 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v32, "ContentsType");
        Social::Events::Event::addProperty<short>((int)&v37, &v32, &v40);
        v11 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v32 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v31, "DyeColor");
        Social::Events::Event::addProperty<unsigned int>((int)&v37, &v31, (unsigned int *)&v39);
        v12 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v31 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v30, "ItemUsedId");
        v29 = ItemInstance::getId(v9);
        Social::Events::Event::addProperty<int>((int)&v37, &v30, &v29);
        v13 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v30 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v28, "ItemUsedAuxType");
        v27 = ItemInstance::getAuxValue(v9);
        Social::Events::Event::addProperty<int>((int)&v37, &v28, &v27);
        v14 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v28 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v37);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPerformanceMetrics(int a1, int a2)
{
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  void *v18; // r0@14
  unsigned int *v19; // r2@15
  signed int v20; // r1@17
  unsigned int *v21; // r2@42
  signed int v22; // r1@44
  unsigned int *v23; // r2@46
  signed int v24; // r1@48
  unsigned int *v25; // r2@50
  signed int v26; // r1@52
  unsigned int *v27; // r2@54
  signed int v28; // r1@56
  unsigned int *v29; // r2@58
  signed int v30; // r1@60
  unsigned int *v31; // r2@62
  signed int v32; // r1@64
  unsigned int *v33; // r2@66
  signed int v34; // r1@68
  unsigned int *v35; // r2@70
  signed int v36; // r1@72
  unsigned int *v37; // r2@74
  signed int v38; // r1@76
  int v40; // [sp+4h] [bp-104h]@37
  int v41; // [sp+Ch] [bp-FCh]@37
  int v42; // [sp+10h] [bp-F8h]@32
  int v43; // [sp+18h] [bp-F0h]@32
  int v44; // [sp+1Ch] [bp-ECh]@26
  int v45; // [sp+24h] [bp-E4h]@26
  int v46; // [sp+28h] [bp-E0h]@20
  int v47; // [sp+30h] [bp-D8h]@20
  int v48; // [sp+34h] [bp-D4h]@14
  int v49; // [sp+3Ch] [bp-CCh]@14
  int v50; // [sp+40h] [bp-C8h]@12
  int v51; // [sp+48h] [bp-C0h]@12
  int v52; // [sp+50h] [bp-B8h]@11
  int v53; // [sp+58h] [bp-B0h]@10
  int v54; // [sp+60h] [bp-A8h]@9
  int v55; // [sp+68h] [bp-A0h]@8
  int v56; // [sp+70h] [bp-98h]@7
  int v57; // [sp+78h] [bp-90h]@6
  int v58; // [sp+80h] [bp-88h]@5
  void *ptr; // [sp+84h] [bp-84h]@1
  int v60; // [sp+9Ch] [bp-6Ch]@2
  int v61; // [sp+A4h] [bp-64h]@1
  char v62; // [sp+A8h] [bp-60h]@1
  char v63; // [sp+B0h] [bp-58h]@5

  _R5 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v61, "performanceMetrics");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v62, v4, &v61, (int)&ptr, 2);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v60 != ptr )
    operator delete(ptr);
  v5 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v61 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v63 = 1;
  sub_21E94B4((void **)&v58, "avgFPS");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v58, 4, _R5);
  v6 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v58 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v57, "avgClientSimTickTimeMS");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v57, 4, _R5 + 8);
  v7 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v57 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v56, "avgServerSimTickTimeMS");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v56, 4, _R5 + 4);
  v8 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v56 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v55, "avgRenderTimeMS");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v55, 4, _R5 + 20);
  v9 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v55 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v54, "avgEndFrameTimeMS");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v54, 4, _R5 + 24);
  v10 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v54 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v53, "avgRemainderTimePercent");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v53, 4, _R5 + 28);
  v11 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v53 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v52, "mUnaccountedTimePercent");
  Social::Events::Event::addMeasurement<float>((int)&v62, &v52, 4, _R5 + 32);
  v12 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v52 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v51, "numSamples");
  v50 = 1;
  Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v51, 0, (unsigned int *)&v50);
  v13 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v51 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  __asm
    VLDR            S0, [R5]
    VLDR            S2, =70.0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    sub_21E94B4((void **)&v49, "fps70Plus70Cnt");
    v48 = 1;
    Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v49, 0, (unsigned int *)&v48);
    v18 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) == &dword_28898C0 )
      goto LABEL_117;
    v19 = (unsigned int *)(v49 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      goto LABEL_115;
LABEL_114:
    v20 = (*v19)--;
    goto LABEL_115;
    VLDR            S2, =45.0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
      VMOV.F32        S2, #25.0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VLDR            S2, =17.5
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        sub_21E94B4((void **)&v41, "fps17orLessCnt");
        v40 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v41, 0, (unsigned int *)&v40);
        v18 = (void *)(v41 - 12);
        if ( (int *)(v41 - 12) == &dword_28898C0 )
          goto LABEL_117;
        v19 = (unsigned int *)(v41 - 4);
        if ( !&pthread_create )
          goto LABEL_114;
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        sub_21E94B4((void **)&v43, "fps17to25Cnt");
        v42 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v43, 0, (unsigned int *)&v42);
        v18 = (void *)(v43 - 12);
        if ( (int *)(v43 - 12) == &dword_28898C0 )
        v19 = (unsigned int *)(v43 - 4);
      sub_21E94B4((void **)&v45, "fps25to45Cnt");
      v44 = 1;
      Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v45, 0, (unsigned int *)&v44);
      v18 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) == &dword_28898C0 )
        goto LABEL_117;
      v19 = (unsigned int *)(v45 - 4);
      if ( !&pthread_create )
        goto LABEL_114;
  else
    sub_21E94B4((void **)&v47, "fps45to70Cnt");
    v46 = 1;
    Social::Events::Event::addMeasurement<unsigned int>((int)&v62, &v47, 0, (unsigned int *)&v46);
    v18 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) == &dword_28898C0 )
    v19 = (unsigned int *)(v47 - 4);
    if ( !&pthread_create )
      goto LABEL_114;
    __dmb();
    do
      v20 = __ldrex(v19);
    while ( __strex(v20 - 1, v19) );
LABEL_115:
  if ( v20 <= 0 )
    j_j_j_j__ZdlPv_9(v18);
LABEL_117:
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v62);
}


int __fastcall MinecraftEventing::fireEventStartClient(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  void *v4; // r0@6
  const char **v5; // r0@8
  void *v6; // r0@8
  void *v7; // r0@10
  void *v8; // r0@12
  void *v9; // r0@13
  AppPlatform **v10; // r0@15
  void *v11; // r0@17
  void *v12; // r0@19
  void *v13; // r0@22
  void *v14; // r0@23
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  unsigned int *v20; // r2@33
  signed int v21; // r1@35
  unsigned int *v22; // r2@37
  signed int v23; // r1@39
  unsigned int *v24; // r2@41
  signed int v25; // r1@43
  unsigned int *v26; // r2@45
  signed int v27; // r1@47
  unsigned int *v28; // r2@49
  signed int v29; // r1@51
  int v30; // [sp+8h] [bp-A8h]@22
  int v31; // [sp+Ch] [bp-A4h]@21
  char v32; // [sp+13h] [bp-9Dh]@17
  int v33; // [sp+18h] [bp-98h]@14
  int v34; // [sp+1Ch] [bp-94h]@12
  int v35; // [sp+24h] [bp-8Ch]@9
  int v36; // [sp+2Ch] [bp-84h]@5
  void *ptr; // [sp+30h] [bp-80h]@1
  int v38; // [sp+48h] [bp-68h]@2
  int v39; // [sp+50h] [bp-60h]@1
  char v40; // [sp+54h] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v39, "StartClient");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v40, v2, &v39, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v38 != ptr )
    operator delete(ptr);
  v3 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v39 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v36, "locale");
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v4 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v4 = &ServiceLocator<AppPlatform>::mDefaultService;
  v5 = (const char **)(*(int (**)(void))(**(_DWORD **)v4 + 136))();
  Social::Events::Event::addProperty<std::string>((int)&v40, &v36, v5);
  v6 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v36 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v35, "applicationId");
    v7 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v7 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v7 + 472))(&v34);
  Social::Events::Event::addProperty<std::string>((int)&v40, &v35, (const char **)&v34);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v34 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v35 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v33, "TextToSpeechState");
    v10 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v10 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v32 = AppPlatform::getTextToSpeechEnabled(*v10);
  Social::Events::Event::addProperty<bool>((int)&v40, &v33, (bool *)&v32);
  v11 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
    v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v12 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v12 + 492))(&v31);
  if ( *(_DWORD *)(v31 - 12) )
    sub_21E94B4((void **)&v30, "LegacyId");
    Social::Events::Event::addProperty<std::string>((int)&v40, &v30, (const char **)&v31);
    v13 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  Social::Events::EventManager::recordEvent((int)v1);
  v14 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v31 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return Social::Events::Event::~Event((int)&v40);
}


void __fastcall MinecraftEventing::fireEventNewStoreContentCheckCompleted(MinecraftEventing *this, bool a2)
{
  MinecraftEventing::fireEventNewStoreContentCheckCompleted(this, a2);
}


int __fastcall MinecraftEventing::fireEventStorage(int a1, int a2, const char **a3)
{
  int v3; // r6@1
  Social::Events::EventManager *v4; // r8@1
  const char **v5; // r5@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+8h] [bp-98h]@7
  int v18; // [sp+Ch] [bp-94h]@5
  int v19; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v21; // [sp+30h] [bp-70h]@2
  int v22; // [sp+38h] [bp-68h]@1
  char v23; // [sp+3Ch] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v22, "StorageCreated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v23, v6, &v22, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v21 != ptr )
    operator delete(ptr);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v19, "State");
  v18 = v3;
  Social::Events::Event::addProperty<int>((int)&v23, &v19, &v18);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v19 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( *((_DWORD *)*v5 - 3) )
    sub_21E94B4((void **)&v17, "Extra");
    Social::Events::Event::addProperty<std::string>((int)&v23, &v17, v5);
    v9 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v23);
}


int (**__fastcall MinecraftEventing::registerOptionsObserver(int a1, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@2
  void (__fastcall *v5)(int, int, signed int); // r3@4
  int v6; // r0@6
  unsigned int *v7; // r0@7
  unsigned int v8; // r1@9
  int v9; // r8@12
  __int64 v10; // kr00_8@12
  int v11; // r9@12
  unsigned int *v12; // r0@13
  unsigned int v13; // r1@15
  _DWORD *v14; // r0@18
  __int64 v15; // r1@18
  __int64 v16; // kr08_8@20
  unsigned int *v17; // r0@21
  unsigned int v18; // r1@23
  _DWORD *v19; // r0@26
  int v20; // r1@26
  int v21; // r7@26
  void (*v22)(void); // r3@26
  int v23; // r4@28
  unsigned int *v24; // r1@29
  unsigned int v25; // r0@31
  unsigned int *v26; // r5@35
  unsigned int v27; // r0@37
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@42
  _DWORD *v29; // [sp+4h] [bp-4Ch]@18
  __int64 v30; // [sp+Ch] [bp-44h]@18
  int v31; // [sp+14h] [bp-3Ch]@6
  int v32; // [sp+18h] [bp-38h]@6
  int v33; // [sp+1Ch] [bp-34h]@6
  _DWORD *v34; // [sp+20h] [bp-30h]@26
  int v35; // [sp+24h] [bp-2Ch]@26
  void (*v36)(void); // [sp+28h] [bp-28h]@26
  int v37; // [sp+2Ch] [bp-24h]@26

  v2 = a1;
  v3 = a2;
  if ( &pthread_create )
  {
    v4 = pthread_mutex_lock((pthread_mutex_t *)&MinecraftEventing::sMutex);
    if ( v4 )
      sub_21E5E14(v4);
  }
  if ( *(_DWORD *)(v2 + 48) )
    (*(void (__fastcall **)(int))(v2 + 52))(v2 + 40);
    v5 = *(void (__fastcall **)(int, int, signed int))(v2 + 48);
    if ( v5 )
    {
      v5(v2 + 40, v2 + 40, 3);
      *(_DWORD *)(v2 + 48) = 0;
      *(_DWORD *)(v2 + 52) = 0;
    }
  v31 = v2;
  v32 = *(_DWORD *)v3;
  v6 = *(_DWORD *)(v3 + 4);
  v33 = v6;
  if ( v6 )
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
    else
      ++*v7;
  sub_145F410((__int64 *)&v31);
  v9 = Options::get(*(_DWORD *)v3, 101);
  v10 = *(_QWORD *)&v31;
  v11 = v33;
  if ( v33 )
    v12 = (unsigned int *)(v33 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 + 1, v12) );
      ++*v12;
  v14 = operator new(0xCu);
  LODWORD(v15) = sub_148B4E8;
  *(_QWORD *)v14 = v10;
  HIDWORD(v15) = sub_148B4E0;
  v14[2] = v11;
  v29 = v14;
  v30 = v15;
  Option::registerObserver(v9, v2, (int)&v29);
  if ( (_DWORD)v30 )
    ((void (*)(void))v30)();
  v16 = *(_QWORD *)v3;
  if ( *(_QWORD *)v3 >> 32 )
    v17 = (unsigned int *)(HIDWORD(v16) + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v36 = 0;
  v19 = operator new(0xCu);
  *v19 = v2;
  v19[1] = v16;
  v20 = v2 + 40;
  v19[2] = HIDWORD(v16);
  v34 = v19;
  v21 = v35;
  *(_QWORD *)&v34 = *(_QWORD *)(v2 + 40);
  *(_DWORD *)v20 = v19;
  *(_DWORD *)(v20 + 4) = v21;
  v36 = *(void (**)(void))(v2 + 48);
  v22 = v36;
  *(_DWORD *)(v2 + 48) = sub_148B5DC;
  v37 = *(_DWORD *)(v2 + 52);
  *(_DWORD *)(v2 + 52) = sub_148B5D0;
  if ( v22 )
    v22();
  v23 = v33;
    v24 = (unsigned int *)(v33 + 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 == 1 )
      v26 = (unsigned int *)(v23 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock((pthread_mutex_t *)&MinecraftEventing::sMutex);
  return result;
}


int __fastcall MinecraftEventing::fireEventFirstTimeClientOpen(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "FirstTimeClientOpen");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


void __fastcall MinecraftEventing::fireEventGameTypeChanged(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing *v2; // r4@1
  int v3; // r5@4
  unsigned int v4; // r6@4
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-3Ch]@4
  int v12; // [sp+Ch] [bp-34h]@4
  int v13; // [sp+10h] [bp-30h]@4
  int v14; // [sp+18h] [bp-28h]@4

  v2 = this;
  if ( this
    && (*(int (**)(void))(*(_DWORD *)this + 1408))() == 1
    && (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) )
  {
    v3 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) + 4);
    v4 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1444))(v2);
    sub_21E94B4((void **)&v12, "PlayerGameMode");
    v11 = *((_DWORD *)v2 + 1308);
    Social::Events::EventManager::setPlayerCommonProperty<unsigned int>(
      (int)&v13,
      v3,
      v4,
      (int **)&v12,
      (unsigned int *)&v11);
    Json::Value::~Value((Json::Value *)&v14);
    v5 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v13 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v12 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  }
}


int __fastcall MinecraftEventing::fireEventCameraUsed(MinecraftEventing *this, bool a2)
{
  Social::Events::EventManager *v2; // r4@1
  unsigned int v3; // r5@1
  void *v4; // r0@4
  void *v5; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v13; // [sp+24h] [bp-6Ch]@2
  int v14; // [sp+2Ch] [bp-64h]@1
  char v15; // [sp+30h] [bp-60h]@1
  bool v16; // [sp+7Bh] [bp-15h]@1

  v16 = a2;
  v2 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v14, "CameraUsed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v2, v3);
  Social::Events::Event::Event((int)&v15, v3, &v14, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v13 != ptr )
    operator delete(ptr);
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "IsSelfie");
  Social::Events::Event::addProperty<bool>((int)&v15, &v11, &v16);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Social::Events::EventManager::recordEvent((int)v2);
  return Social::Events::Event::~Event((int)&v15);
}


void __fastcall MinecraftEventing::fireEventTreatmentsSet(int a1, _QWORD *a2)
{
  _QWORD *v2; // r6@1
  Social::Events::EventManager *v3; // r9@1
  __int64 v4; // r0@1
  unsigned int v5; // r5@2
  unsigned int v6; // r4@2
  int v7; // r7@2
  unsigned int v8; // r8@2
  void *v9; // r0@7
  void *v10; // r0@8
  unsigned int v11; // r4@9
  void *v12; // r0@12
  void *v13; // r0@13
  char *v14; // r0@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  unsigned int *v17; // r2@20
  signed int v18; // r1@22
  unsigned int *v19; // r2@24
  signed int v20; // r1@26
  unsigned int *v21; // r2@28
  signed int v22; // r1@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  int v25; // [sp+4h] [bp-CCh]@1
  int v26; // [sp+8h] [bp-C8h]@13
  int v27; // [sp+10h] [bp-C0h]@13
  void *ptr; // [sp+14h] [bp-BCh]@9
  int v29; // [sp+2Ch] [bp-A4h]@10
  int v30; // [sp+34h] [bp-9Ch]@9
  char v31; // [sp+38h] [bp-98h]@9
  int v32; // [sp+84h] [bp-4Ch]@7
  int v33; // [sp+88h] [bp-48h]@7
  int v34; // [sp+90h] [bp-40h]@7
  char *v35; // [sp+A4h] [bp-2Ch]@1

  v2 = a2;
  v25 = a1;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v35 = (char *)&unk_28898CC;
  v4 = *a2;
  HIDWORD(v4) -= v4;
  if ( SHIDWORD(v4) >> 2 )
  {
    v5 = SHIDWORD(v4) >> 2;
    v6 = (SHIDWORD(v4) >> 2) - 1;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      sub_21E72F0((const void **)&v35, (const void **)(v4 + v7));
      if ( v8 < v6 )
        sub_21E7408((const void **)&v35, ":", 1u);
      if ( ++v8 >= v5 )
        break;
      v7 += 4;
      LODWORD(v4) = *(_DWORD *)v2;
    }
  }
  sub_21E94B4((void **)&v32, "Treatments");
  Social::Events::EventManager::setCommonProperty<std::string>(&v33, (int)v3, (int **)&v32, (const char **)&v35);
  Json::Value::~Value((Json::Value *)&v34);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *(_DWORD *)(v25 + 12);
  sub_21E94B4((void **)&v30, "Treatments");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v11);
  Social::Events::Event::Event((int)&v31, v11, &v30, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v29 != ptr )
    operator delete(ptr);
  v12 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v27, "Set");
  v26 = 1;
  Social::Events::Event::addProperty<int>((int)&v31, &v27, &v26);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  Social::Events::EventManager::recordEvent((int)v3);
  Social::Events::Event::~Event((int)&v31);
  v14 = v35 - 12;
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v35 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


int __fastcall MinecraftEventing::fireEventMultiplayerRoundEnd(int result, Player *a2, int a3)
{
  int v3; // r5@1
  Social::Events::EventManager *v4; // r4@4
  int v5; // r5@4
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  void *v10; // r0@11
  void *v11; // r0@12
  void *v12; // r0@13
  void *v13; // r0@14
  void *v14; // r0@15
  void *v15; // r0@16
  void *v16; // r0@17
  void *v17; // r0@18
  void *v18; // r0@19
  void *v19; // r0@20
  void *v20; // r0@21
  void *v21; // r0@22
  void *v22; // r0@23
  void *v23; // r0@24
  void *v24; // r0@25
  void *v25; // r0@26
  void *v26; // r0@27
  void *v27; // r0@28
  void *v28; // r0@29
  void *v29; // r0@30
  void *v30; // r0@31
  void *v31; // r0@32
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  unsigned int *v52; // r2@75
  signed int v53; // r1@77
  unsigned int *v54; // r2@79
  signed int v55; // r1@81
  unsigned int *v56; // r2@83
  signed int v57; // r1@85
  unsigned int *v58; // r2@87
  signed int v59; // r1@89
  unsigned int *v60; // r2@91
  signed int v61; // r1@93
  unsigned int *v62; // r2@95
  signed int v63; // r1@97
  unsigned int *v64; // r2@99
  signed int v65; // r1@101
  unsigned int *v66; // r2@103
  signed int v67; // r1@105
  unsigned int *v68; // r2@107
  signed int v69; // r1@109
  unsigned int *v70; // r2@111
  signed int v71; // r1@113
  unsigned int *v72; // r2@115
  signed int v73; // r1@117
  unsigned int *v74; // r2@119
  signed int v75; // r1@121
  unsigned int *v76; // r2@123
  signed int v77; // r1@125
  unsigned int *v78; // r2@127
  signed int v79; // r1@129
  unsigned int *v80; // r2@131
  signed int v81; // r1@133
  unsigned int *v82; // r2@135
  signed int v83; // r1@137
  int v84; // [sp+Ch] [bp-1C4h]@32
  int v85; // [sp+14h] [bp-1BCh]@31
  int v86; // [sp+1Ch] [bp-1B4h]@30
  int v87; // [sp+24h] [bp-1ACh]@29
  int v88; // [sp+2Ch] [bp-1A4h]@28
  int v89; // [sp+34h] [bp-19Ch]@27
  int v90; // [sp+3Ch] [bp-194h]@26
  int v91; // [sp+44h] [bp-18Ch]@25
  int v92; // [sp+4Ch] [bp-184h]@24
  int v93; // [sp+54h] [bp-17Ch]@23
  int v94; // [sp+5Ch] [bp-174h]@22
  int v95; // [sp+64h] [bp-16Ch]@21
  int v96; // [sp+6Ch] [bp-164h]@20
  int v97; // [sp+74h] [bp-15Ch]@19
  int v98; // [sp+7Ch] [bp-154h]@18
  int v99; // [sp+84h] [bp-14Ch]@16
  int v100; // [sp+88h] [bp-148h]@16
  int v101; // [sp+90h] [bp-140h]@16
  int v102; // [sp+A4h] [bp-12Ch]@14
  int v103; // [sp+A8h] [bp-128h]@14
  int v104; // [sp+B0h] [bp-120h]@14
  int v105; // [sp+C4h] [bp-10Ch]@12
  int v106; // [sp+C8h] [bp-108h]@12
  int v107; // [sp+D0h] [bp-100h]@12
  int v108; // [sp+E4h] [bp-ECh]@10
  int v109; // [sp+E8h] [bp-E8h]@10
  int v110; // [sp+F0h] [bp-E0h]@10
  int v111; // [sp+104h] [bp-CCh]@8
  int v112; // [sp+108h] [bp-C8h]@8
  int v113; // [sp+110h] [bp-C0h]@8
  void *ptr; // [sp+120h] [bp-B0h]@4
  int v115; // [sp+138h] [bp-98h]@5
  int v116; // [sp+140h] [bp-90h]@4
  char v117; // [sp+144h] [bp-8Ch]@4
  int v118; // [sp+154h] [bp-7Ch]@8
  Player *v119; // [sp+18Ch] [bp-44h]@1
  char v120; // [sp+190h] [bp-40h]@8
  char v121; // [sp+198h] [bp-38h]@10
  char v122; // [sp+1A0h] [bp-30h]@12
  char v123; // [sp+1A8h] [bp-28h]@14
  char v124; // [sp+1B0h] [bp-20h]@16

  v3 = result;
  v119 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v4 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v116, "MultiplayerRoundEnd");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
        Social::Events::Event::Event((int)&v117, v5, &v116, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v115 != ptr )
          operator delete(ptr);
        v6 = (void *)(v116 - 12);
        if ( (int *)(v116 - 12) != &dword_28898C0 )
        {
          v32 = (unsigned int *)(v116 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          }
          else
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        sub_21E94B4((void **)&v111, "RoundId");
        Social::Events::EventManager::getGlobalProperty((int)&v112, (int)v4, (int **)&v111);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
          (int)&v120,
          (unsigned __int64 *)&v118,
          &v112,
          (int)&v112);
        Json::Value::~Value((Json::Value *)&v113);
        v7 = (void *)(v112 - 12);
        if ( (int *)(v112 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v112 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        v8 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v111 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v108, "SectionId");
        Social::Events::EventManager::getGlobalProperty((int)&v109, (int)v4, (int **)&v108);
          (int)&v121,
          &v109,
          (int)&v109);
        Json::Value::~Value((Json::Value *)&v110);
        v9 = (void *)(v109 - 12);
        if ( (int *)(v109 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v109 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        v10 = (void *)(v108 - 12);
        if ( (int *)(v108 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v108 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v105, "MatchTypeId");
        Social::Events::EventManager::getGlobalProperty((int)&v106, (int)v4, (int **)&v105);
          (int)&v122,
          &v106,
          (int)&v106);
        Json::Value::~Value((Json::Value *)&v107);
        v11 = (void *)(v106 - 12);
        if ( (int *)(v106 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v106 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        v12 = (void *)(v105 - 12);
        if ( (int *)(v105 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v105 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v102, "GameplayModeId");
        Social::Events::EventManager::getGlobalProperty((int)&v103, (int)v4, (int **)&v102);
          (int)&v123,
          &v103,
          (int)&v103);
        Json::Value::~Value((Json::Value *)&v104);
        v13 = (void *)(v103 - 12);
        if ( (int *)(v103 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v103 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        v14 = (void *)(v102 - 12);
        if ( (int *)(v102 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v102 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        sub_21E94B4((void **)&v99, "DifficultyLevelId");
        Social::Events::EventManager::getGlobalProperty((int)&v100, (int)v4, (int **)&v99);
          (int)&v124,
          &v100,
          (int)&v100);
        Json::Value::~Value((Json::Value *)&v101);
        v15 = (void *)(v100 - 12);
        if ( (int *)(v100 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v100 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v99 - 12);
        if ( (int *)(v99 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v99 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        sub_21E94B4((void **)&v98, "ExitStatusId");
        Social::Events::Event::addProperty<int>((int)&v117, &v98, (int *)&v119);
        v17 = (void *)(v98 - 12);
        if ( (int *)(v98 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v98 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        Social::Events::EventManager::recordEvent((int)v4);
        sub_21E94B4((void **)&v97, "RoundId");
        Social::Events::EventManager::removeGlobalProperty((int)v4, (int **)&v97);
        v18 = (void *)(v97 - 12);
        if ( (int *)(v97 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v97 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        sub_21E94B4((void **)&v96, "SectionId");
        Social::Events::EventManager::removeGlobalProperty((int)v4, (int **)&v96);
        v19 = (void *)(v96 - 12);
        if ( (int *)(v96 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v96 - 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v95, "MatchTypeId");
        Social::Events::EventManager::removeGlobalProperty((int)v4, (int **)&v95);
        v20 = (void *)(v95 - 12);
        if ( (int *)(v95 - 12) != &dword_28898C0 )
          v60 = (unsigned int *)(v95 - 4);
              v61 = __ldrex(v60);
            while ( __strex(v61 - 1, v60) );
            v61 = (*v60)--;
          if ( v61 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E94B4((void **)&v94, "GameplayModeId");
        Social::Events::EventManager::removeGlobalProperty((int)v4, (int **)&v94);
        v21 = (void *)(v94 - 12);
        if ( (int *)(v94 - 12) != &dword_28898C0 )
          v62 = (unsigned int *)(v94 - 4);
              v63 = __ldrex(v62);
            while ( __strex(v63 - 1, v62) );
            v63 = (*v62)--;
          if ( v63 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        sub_21E94B4((void **)&v93, "DifficultyLevelId");
        Social::Events::EventManager::removeGlobalProperty((int)v4, (int **)&v93);
        v22 = (void *)(v93 - 12);
        if ( (int *)(v93 - 12) != &dword_28898C0 )
          v64 = (unsigned int *)(v93 - 4);
              v65 = __ldrex(v64);
            while ( __strex(v65 - 1, v64) );
            v65 = (*v64)--;
          if ( v65 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        sub_21E94B4((void **)&v92, "Mode");
        Social::Events::EventManager::removePlayerCommonProperty((int)v4, v5, (int **)&v92);
        v23 = (void *)(v92 - 12);
        if ( (int *)(v92 - 12) != &dword_28898C0 )
          v66 = (unsigned int *)(v92 - 4);
              v67 = __ldrex(v66);
            while ( __strex(v67 - 1, v66) );
            v67 = (*v66)--;
          if ( v67 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        sub_21E94B4((void **)&v91, "vrMode");
        Social::Events::EventManager::removePlayerCommonProperty((int)v4, v5, (int **)&v91);
        v24 = (void *)(v91 - 12);
        if ( (int *)(v91 - 12) != &dword_28898C0 )
          v68 = (unsigned int *)(v91 - 4);
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        sub_21E94B4((void **)&v90, "PlayerGameMode");
        Social::Events::EventManager::removePlayerCommonProperty((int)v4, v5, (int **)&v90);
        v25 = (void *)(v90 - 12);
        if ( (int *)(v90 - 12) != &dword_28898C0 )
          v70 = (unsigned int *)(v90 - 4);
              v71 = __ldrex(v70);
            while ( __strex(v71 - 1, v70) );
            v71 = (*v70)--;
          if ( v71 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        sub_21E94B4((void **)&v89, "Dim");
        Social::Events::EventManager::removePlayerCommonProperty((int)v4, v5, (int **)&v89);
        v26 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v72 = (unsigned int *)(v89 - 4);
              v73 = __ldrex(v72);
            while ( __strex(v73 - 1, v72) );
            v73 = (*v72)--;
          if ( v73 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        sub_21E94B4((void **)&v88, "MultiplayerCorrelationId");
        Social::Events::EventManager::removeCommonProperty((int)v4, (int **)&v88);
        v27 = (void *)(v88 - 12);
        if ( (int *)(v88 - 12) != &dword_28898C0 )
          v74 = (unsigned int *)(v88 - 4);
              v75 = __ldrex(v74);
            while ( __strex(v75 - 1, v74) );
            v75 = (*v74)--;
          if ( v75 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        sub_21E94B4((void **)&v87, "ServerId");
        Social::Events::EventManager::removeCommonProperty((int)v4, (int **)&v87);
        v28 = (void *)(v87 - 12);
        if ( (int *)(v87 - 12) != &dword_28898C0 )
          v76 = (unsigned int *)(v87 - 4);
              v77 = __ldrex(v76);
            while ( __strex(v77 - 1, v76) );
            v77 = (*v76)--;
          if ( v77 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        sub_21E94B4((void **)&v86, "NetworkType");
        Social::Events::EventManager::removeCommonProperty((int)v4, (int **)&v86);
        v29 = (void *)(v86 - 12);
        if ( (int *)(v86 - 12) != &dword_28898C0 )
          v78 = (unsigned int *)(v86 - 4);
              v79 = __ldrex(v78);
            while ( __strex(v79 - 1, v78) );
            v79 = (*v78)--;
          if ( v79 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        sub_21E94B4((void **)&v85, "Biome");
        Social::Events::EventManager::removePlayerCommonProperty((int)v4, v5, (int **)&v85);
        v30 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v80 = (unsigned int *)(v85 - 4);
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            v81 = (*v80)--;
          if ( v81 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        sub_21E94B4((void **)&v84, "WorldID");
        Social::Events::EventManager::removeCommonProperty((int)v4, (int **)&v84);
        v31 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
          v82 = (unsigned int *)(v84 - 4);
              v83 = __ldrex(v82);
            while ( __strex(v83 - 1, v82) );
            v83 = (*v82)--;
          if ( v83 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        result = Social::Events::Event::~Event((int)&v117);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPositionCommand(MinecraftEventing *this, Player *a2, bool a3)
{
  MinecraftEventing *v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  int v5; // r5@1
  void *v6; // r0@4
  void *v7; // r0@5
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@11
  signed int v12; // r1@13
  int v13; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v15; // [sp+24h] [bp-6Ch]@2
  int v16; // [sp+2Ch] [bp-64h]@1
  char v17; // [sp+30h] [bp-60h]@1
  char v18; // [sp+7Bh] [bp-15h]@1

  v3 = this;
  v18 = (char)a2;
  v4 = *(Social::Events::EventManager **)((*(int (**)(void))(*(_DWORD *)this + 1440))() + 4);
  v5 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1444))(v3);
  sub_21E94B4((void **)&v16, "PositionCommand");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v17, v5, &v16, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v15 != ptr )
    operator delete(ptr);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v13, "DisplayPosition");
  Social::Events::Event::addProperty<bool>((int)&v17, &v13, (bool *)&v18);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v17);
}


int __fastcall MinecraftEventing::fireEventWorldExported(MinecraftEventing *this, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r5@1
  Social::Events::EventManager *v5; // r8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r7@1
  void *v8; // r0@4
  void *v9; // r0@5
  void *v15; // r0@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  unsigned int *v19; // r2@12
  signed int v20; // r1@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  float v23; // [sp+4h] [bp-A4h]@6
  int v24; // [sp+Ch] [bp-9Ch]@6
  __int64 v25; // [sp+10h] [bp-98h]@5
  int v26; // [sp+1Ch] [bp-8Ch]@5
  void *ptr; // [sp+20h] [bp-88h]@1
  int v28; // [sp+38h] [bp-70h]@2
  int v29; // [sp+40h] [bp-68h]@1
  char v30; // [sp+44h] [bp-64h]@1

  v4 = HIDWORD(a3);
  v5 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v6 = a3;
  v7 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v29, "WorldExported");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v7);
  Social::Events::Event::Event((int)&v30, v7, &v29, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v28 != ptr )
    operator delete(ptr);
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  sub_21E94B4((void **)&v26, "WorldSeed");
  v25 = __PAIR__(v4, v6);
  Social::Events::Event::addProperty<long long>((int)&v30, &v26, &v25);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v24, "WorldSize");
  _R0 = _aeabi_ul2f(a4, HIDWORD(a4));
  __asm
    VLDR            S0, =9.5367e-7
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0xA8+var_A4]
  Social::Events::Event::addProperty<float>((int)&v30, &v24, (int)&v23);
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Social::Events::EventManager::recordEvent((int)v5);
  return Social::Events::Event::~Event((int)&v30);
}


void __fastcall MinecraftEventing::fireEventNewStoreContentCheckCompleted(MinecraftEventing *this, bool a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+4h] [bp-34h]@1
  int v10; // [sp+8h] [bp-30h]@1
  int v11; // [sp+10h] [bp-28h]@1
  bool v12; // [sp+23h] [bp-15h]@1

  v12 = a2;
  v2 = *((_DWORD *)this + 1);
  sub_21E94B4((void **)&v9, "HasNewContent");
  Social::Events::EventManager::setGlobalProperty<bool>((int)&v10, v2, (int **)&v9, &v12);
  Json::Value::~Value((Json::Value *)&v11);
  v3 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v9 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


int __fastcall MinecraftEventing::fireEventEntitySpawned(int result, Player *a2, int a3, unsigned int a4)
{
  int v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r5@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  int v16; // [sp+Ch] [bp-94h]@9
  int v17; // [sp+14h] [bp-8Ch]@8
  void *ptr; // [sp+18h] [bp-88h]@4
  int v19; // [sp+30h] [bp-70h]@5
  int v20; // [sp+38h] [bp-68h]@4
  char v21; // [sp+3Ch] [bp-64h]@4
  int v22; // [sp+84h] [bp-1Ch]@1
  Player *v23; // [sp+88h] [bp-18h]@1

  v4 = result;
  v22 = a3;
  v23 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v20, "EntitySpawned");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v21, v6, &v20, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v19 != ptr )
          operator delete(ptr);
        v7 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v17, "MobType");
        Social::Events::Event::addProperty<int>((int)&v21, &v17, (int *)&v23);
        v8 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v17 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v16, "SpawnType");
        Social::Events::Event::addProperty<unsigned int>((int)&v21, &v16, (unsigned int *)&v22);
        v9 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v16 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v21);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventEntitlementListInfo(int a1, unsigned __int64 *a2, char a3)
{
  int v3; // r6@1
  int v4; // r8@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  _BYTE *v9; // r0@19
  int v10; // r1@19 OVERLAPPED
  int v11; // r4@19
  unsigned int v12; // r2@19
  _DWORD *v13; // r0@22
  char *v14; // r0@24
  char *v15; // r0@25
  int v16; // r0@27
  int v17; // r2@27
  unsigned int v18; // r4@28
  void *v19; // r0@31
  void *v20; // r0@32
  void *v21; // r0@33
  char *v22; // r0@34
  unsigned int *v23; // r2@36
  signed int v24; // r1@38
  unsigned int *v25; // r2@40
  signed int v26; // r1@42
  unsigned int *v27; // r2@44
  signed int v28; // r1@46
  unsigned int *v29; // r2@48
  signed int v30; // r1@50
  int v31; // [sp+4h] [bp-C4h]@2
  Social::Events::EventManager *v32; // [sp+8h] [bp-C0h]@2
  int v33; // [sp+18h] [bp-B0h]@33
  int v34; // [sp+20h] [bp-A8h]@32
  void *ptr; // [sp+24h] [bp-A4h]@28
  int v36; // [sp+3Ch] [bp-8Ch]@29
  int v37; // [sp+44h] [bp-84h]@28
  char v38; // [sp+48h] [bp-80h]@28
  _BYTE *v39; // [sp+90h] [bp-38h]@7
  char *v40; // [sp+94h] [bp-34h]@3
  _DWORD *v41; // [sp+98h] [bp-30h]@2
  char v42; // [sp+9Fh] [bp-29h]@1

  v42 = a3;
  v4 = *a2 >> 32;
  v3 = *a2;
  if ( v3 != v4 )
  {
    v31 = a1;
    v32 = *(Social::Events::EventManager **)(a1 + 4);
    v41 = &unk_28898CC;
    do
    {
      mce::UUID::asString((mce::UUID *)&v39);
      v9 = v39;
      *(_QWORD *)&v10 = *(_QWORD *)(v39 - 12);
      v11 = v10 + 1;
      if ( v10 + 1 > v12 || *((_DWORD *)v39 - 1) >= 1 )
      {
        sub_21E6FCC((const void **)&v39, v10 + 1);
        v9 = v39;
        v10 = *((_DWORD *)v39 - 3);
      }
      v9[v10] = 59;
      v13 = v39;
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        *((_DWORD *)v39 - 1) = 0;
        *(v13 - 3) = v11;
        *((_BYTE *)v13 + v11) = byte_26C67B8[0];
        v13 = v39;
      v39 = &unk_28898CC;
      v40 = (char *)v13;
      sub_21E72F0((const void **)&v41, (const void **)&v40);
      v14 = v40 - 12;
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v40 - 4);
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
          j_j_j_j__ZdlPv_9(v14);
      v15 = v39 - 12;
        v7 = (unsigned int *)(v39 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v3 += 16;
    }
    while ( v3 != v4 );
    v16 = *(v41 - 3);
    v17 = v16 - 1;
    if ( !v16 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v17, 0);
    sub_21E7EE0((const void **)&v41, v17, (_BYTE *)1, 0);
    v18 = *(_DWORD *)(v31 + 12);
    sub_21E94B4((void **)&v37, "EntitlementListInfo");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v32, v18);
    Social::Events::Event::Event((int)&v38, v18, &v37, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v36 != ptr )
      operator delete(ptr);
    v19 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21E94B4((void **)&v34, "EntitlementList");
    Social::Events::Event::addProperty<std::string>((int)&v38, &v34, (const char **)&v41);
    v20 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v34 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v33, "IsLegacyPurchase");
    Social::Events::Event::addProperty<bool>((int)&v38, &v33, (bool *)&v42);
    v21 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v33 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    Social::Events::EventManager::recordEvent((int)v32);
    Social::Events::Event::~Event((int)&v38);
    v22 = (char *)(v41 - 3);
    if ( v41 - 3 != &dword_28898C0 )
      v29 = v41 - 1;
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  }
}


int __fastcall MinecraftEventing::fireEventUgcDownloadCompleted(int a1, const char **a2, char a3)
{
  const char **v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  unsigned int v5; // r6@1
  void *v6; // r0@4
  void *v12; // r0@5
  void *v13; // r0@6
  void *v14; // r0@7
  unsigned int *v16; // r2@9
  signed int v17; // r1@11
  unsigned int *v18; // r2@13
  signed int v19; // r1@15
  unsigned int *v20; // r2@17
  signed int v21; // r1@19
  unsigned int *v22; // r2@21
  signed int v23; // r1@23
  int v24; // [sp+Ch] [bp-A4h]@7
  int v25; // [sp+14h] [bp-9Ch]@6
  double v26; // [sp+18h] [bp-98h]@5
  int v27; // [sp+24h] [bp-8Ch]@5
  void *ptr; // [sp+28h] [bp-88h]@1
  int v29; // [sp+40h] [bp-70h]@2
  int v30; // [sp+48h] [bp-68h]@1
  char v31; // [sp+4Ch] [bp-64h]@1
  char v32; // [sp+97h] [bp-19h]@1

  v32 = a3;
  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v30, "UgcDownloadCompleted");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v31, v5, &v30, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v29 != ptr )
    operator delete(ptr);
  v6 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v27, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xB0+var_98]
  Social::Events::Event::addProperty<double>((int)&v31, &v27, (int)&v26);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v25, "UgcProductId");
  Social::Events::Event::addProperty<std::string>((int)&v31, &v25, v3);
  v13 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v24, "DownloadSucceeded");
  Social::Events::Event::addProperty<bool>((int)&v31, &v24, (bool *)&v32);
  v14 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v31);
}


void __fastcall MinecraftEventing::~MinecraftEventing(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r0@1

  v1 = MinecraftEventing::~MinecraftEventing(this);
  j_j_j__ZdlPv_5((void *)v1);
}


void __fastcall MinecraftEventing::fireEventStoreOfferPurchaseAttempt(int a1, const char **a2, Offer *a3)
{
  MinecraftEventing::fireEventStoreOfferPurchaseAttempt(a1, a2, a3);
}


void __fastcall MinecraftEventing::fireEventStoreOfferPurchaseAttempt(int a1, const char **a2, Offer *a3)
{
  Offer *v3; // r7@1
  int v4; // r5@1
  const char **v5; // r4@1
  const char **v6; // r6@1
  const void **v7; // r7@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (const char **)Offer::getProductSku(a3);
  v7 = Offer::getPrice(v3);
  v8 = sub_21E94B4((void **)&v12, (const char *)&unk_257BC67);
  MinecraftEventing::fireEventPurchaseAttempt(v4, v5, v6, (const char **)v7, (const char **)v8);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
}


int __fastcall MinecraftEventing::fireEventHardwareInfo(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r8@1
  unsigned int v2; // r4@1
  AppPlatform **v3; // r0@2
  AppPlatform *v4; // r7@4
  char *v5; // r5@4
  mce::DeviceInformation *v6; // r9@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  char *v15; // r0@15
  void *v16; // r0@15
  char *v17; // r0@16
  void *v18; // r0@16
  char *v19; // r0@17
  void *v20; // r0@17
  char *v21; // r0@18
  void *v22; // r0@18
  void *v23; // r0@19
  char *v24; // r6@20
  void *v25; // r0@20
  void *v26; // r0@21
  void *v27; // r0@22
  void *v28; // r0@23
  void *v29; // r0@24
  void *v30; // r0@25
  void *v31; // r0@26
  void *v32; // r0@27
  void *v33; // r0@28
  void *v34; // r0@30
  void *v35; // r0@32
  void *v36; // r0@33
  void *v37; // r0@34
  void *v38; // r0@36
  void *v39; // r0@39
  unsigned int *v40; // r2@40
  signed int v41; // r1@42
  unsigned int *v42; // r2@59
  signed int v43; // r1@61
  unsigned int *v44; // r2@63
  signed int v45; // r1@65
  unsigned int *v46; // r2@67
  signed int v47; // r1@69
  unsigned int *v48; // r2@71
  signed int v49; // r1@73
  unsigned int *v50; // r2@75
  signed int v51; // r1@77
  unsigned int *v52; // r2@79
  signed int v53; // r1@81
  unsigned int *v54; // r2@83
  signed int v55; // r1@85
  unsigned int *v56; // r2@87
  signed int v57; // r1@89
  unsigned int *v58; // r2@91
  signed int v59; // r1@93
  unsigned int *v60; // r2@95
  signed int v61; // r1@97
  unsigned int *v62; // r2@99
  signed int v63; // r1@101
  unsigned int *v64; // r2@103
  signed int v65; // r1@105
  unsigned int *v66; // r2@107
  signed int v67; // r1@109
  unsigned int *v68; // r2@111
  signed int v69; // r1@113
  unsigned int *v70; // r2@115
  signed int v71; // r1@117
  unsigned int *v72; // r2@119
  signed int v73; // r1@121
  unsigned int *v74; // r2@123
  signed int v75; // r1@125
  unsigned int *v76; // r2@127
  signed int v77; // r1@129
  unsigned int *v78; // r2@131
  signed int v79; // r1@133
  unsigned int *v80; // r2@135
  signed int v81; // r1@137
  unsigned int *v82; // r2@139
  signed int v83; // r1@141
  unsigned int *v84; // r2@143
  signed int v85; // r1@145
  unsigned int *v86; // r2@147
  signed int v87; // r1@149
  unsigned int *v88; // r2@151
  signed int v89; // r1@153
  unsigned int *v90; // r2@155
  signed int v91; // r1@157
  int v93; // [sp+Ch] [bp-194h]@49
  int v94; // [sp+14h] [bp-18Ch]@54
  int v95; // [sp+1Ch] [bp-184h]@44
  int v96; // [sp+24h] [bp-17Ch]@39
  int v97; // [sp+28h] [bp-178h]@33
  int v98; // [sp+30h] [bp-170h]@33
  char v99; // [sp+37h] [bp-169h]@32
  int v100; // [sp+3Ch] [bp-164h]@29
  int v101; // [sp+44h] [bp-15Ch]@28
  int v102; // [sp+4Ch] [bp-154h]@27
  int v103; // [sp+54h] [bp-14Ch]@26
  int v104; // [sp+5Ch] [bp-144h]@25
  int v105; // [sp+64h] [bp-13Ch]@24
  int v106; // [sp+6Ch] [bp-134h]@23
  __int64 v107; // [sp+70h] [bp-130h]@22
  int v108; // [sp+7Ch] [bp-124h]@22
  __int64 v109; // [sp+80h] [bp-120h]@21
  int v110; // [sp+8Ch] [bp-114h]@21
  __int64 v111; // [sp+90h] [bp-110h]@20
  int v112; // [sp+9Ch] [bp-104h]@20
  int v113; // [sp+A4h] [bp-FCh]@19
  int v114; // [sp+ACh] [bp-F4h]@18
  int v115; // [sp+B4h] [bp-ECh]@17
  int v116; // [sp+BCh] [bp-E4h]@16
  int v117; // [sp+C4h] [bp-DCh]@15
  __int64 v118; // [sp+C8h] [bp-D8h]@14
  int v119; // [sp+D4h] [bp-CCh]@14
  __int64 v120; // [sp+D8h] [bp-C8h]@13
  int v121; // [sp+E8h] [bp-B8h]@13
  int v122; // [sp+F0h] [bp-B0h]@12
  int v123; // [sp+F8h] [bp-A8h]@11
  int v124; // [sp+100h] [bp-A0h]@10
  int v125; // [sp+108h] [bp-98h]@9
  int v126; // [sp+110h] [bp-90h]@8
  void *ptr; // [sp+114h] [bp-8Ch]@4
  int v128; // [sp+12Ch] [bp-74h]@5
  int v129; // [sp+134h] [bp-6Ch]@4
  char v130; // [sp+138h] [bp-68h]@4

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v3 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v3 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v4 = *v3;
  v5 = AppPlatform::getHardwareInformation(*v3);
  v6 = (mce::DeviceInformation *)mce::RenderDeviceBase::getDeviceInformation(mce::Singleton<mce::RenderDevice>::mInstance);
  sub_21E94B4((void **)&v129, "HardwareInfo");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v130, v2, &v129, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v128 != ptr )
    operator delete(ptr);
  v7 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v129 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v126, "deviceName");
  Social::Events::Event::addProperty<std::string>((int)&v130, &v126, (const char **)v5);
  v8 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v126 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v125, "cpuType");
  Social::Events::Event::addProperty<std::string>((int)&v130, &v125, (const char **)v5 + 2);
  v9 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v125 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v124, "cpuName");
  Social::Events::Event::addProperty<std::string>((int)&v130, &v124, (const char **)v5 + 3);
  v10 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v124 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v123, "cpuFeatures");
  Social::Events::Event::addProperty<std::string>((int)&v130, &v123, (const char **)v5 + 4);
  v11 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v123 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v122, "cpuCores");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v122, (unsigned int *)v5 + 5);
  v12 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v122 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v121, "availableMemory");
  v120 = AppPlatform::getAvailableMemory(v4);
  Social::Events::Event::addProperty<long long>((int)&v130, &v121, &v120);
  v13 = (void *)(v121 - 12);
  if ( (int *)(v121 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v121 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v119, "totalPhysicalMemory");
  v118 = *((_QWORD *)v5 + 3);
  Social::Events::Event::addProperty<long long>((int)&v130, &v119, &v118);
  v14 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v119 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v117, "graphicsVendor");
  v15 = mce::DeviceInformation::getChipsetVendorName(v6);
  Social::Events::Event::addProperty<std::string>((int)&v130, &v117, (const char **)v15);
  v16 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v117 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v116, "graphicsRenderer");
  v17 = mce::DeviceInformation::getChipsetName(v6);
  Social::Events::Event::addProperty<std::string>((int)&v130, &v116, (const char **)v17);
  v18 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v116 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v115, "graphicsVersion");
  v19 = mce::DeviceInformationBase::getGraphicsVersion(v6);
  Social::Events::Event::addProperty<std::string>((int)&v130, &v115, (const char **)v19);
  v20 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v115 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v114, "graphicsExtensions");
  v21 = mce::DeviceInformation::getGraphicsExtensions(v6);
  Social::Events::Event::addProperty<std::string>((int)&v130, &v114, (const char **)v21);
  v22 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v114 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v113, "graphicsTearingSupport");
  Social::Events::Event::addProperty<bool>((int)&v130, &v113, (bool *)v5 + 32);
  v23 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v113 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = mce::DeviceInformationBase::getAdapterDescription(v6);
  sub_21E94B4((void **)&v112, "graphicsDedicatedVideoMemorySize");
  v111 = *((_DWORD *)v24 + 5);
  Social::Events::Event::addProperty<long long>((int)&v130, &v112, &v111);
  v25 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v112 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v110, "graphicsDedicatedSystemMemorySize");
  v109 = *((_DWORD *)v24 + 6);
  Social::Events::Event::addProperty<long long>((int)&v130, &v110, &v109);
  v26 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v110 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v108, "graphicsSharedMemorySize");
  v107 = *((_DWORD *)v24 + 7);
  Social::Events::Event::addProperty<long long>((int)&v130, &v108, &v107);
  v27 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v108 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v106, "graphicsVendorId");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v106, (unsigned int *)v24 + 1);
  v28 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v106 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v105, "graphicsDeviceId");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v105, (unsigned int *)v24 + 2);
  v29 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v76 = (unsigned int *)(v105 - 4);
        v77 = __ldrex(v76);
      while ( __strex(v77 - 1, v76) );
      v77 = (*v76)--;
    if ( v77 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v104, "graphicsRevisionId");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v104, (unsigned int *)v24 + 4);
  v30 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v78 = (unsigned int *)(v104 - 4);
        v79 = __ldrex(v78);
      while ( __strex(v79 - 1, v78) );
      v79 = (*v78)--;
    if ( v79 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v103, "os");
  Social::Events::Event::addProperty<std::string>((int)&v130, &v103, (const char **)v5 + 1);
  v31 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v80 = (unsigned int *)(v103 - 4);
        v81 = __ldrex(v80);
      while ( __strex(v81 - 1, v80) );
      v81 = (*v80)--;
    if ( v81 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v102, "screenWidth");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v102, (unsigned int *)v5 + 9);
  v32 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v82 = (unsigned int *)(v102 - 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v101, "screenHeight");
  Social::Events::Event::addProperty<unsigned int>((int)&v130, &v101, (unsigned int *)v5 + 10);
  v33 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v84 = (unsigned int *)(v101 - 4);
        v85 = __ldrex(v84);
      while ( __strex(v85 - 1, v84) );
      v85 = (*v84)--;
    if ( v85 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v100, "isTablet");
    v34 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v34 = &ServiceLocator<AppPlatform>::mDefaultService;
  v99 = (*(int (**)(void))(**(_DWORD **)v34 + 512))();
  Social::Events::Event::addProperty<bool>((int)&v130, &v100, (bool *)&v99);
  v35 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v86 = (unsigned int *)(v100 - 4);
        v87 = __ldrex(v86);
      while ( __strex(v87 - 1, v86) );
      v87 = (*v86)--;
    if ( v87 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v98, "editionType");
  getEdition((const void **)&v97);
  Social::Events::Event::addProperty<std::string>((int)&v130, &v98, (const char **)&v97);
  v36 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v88 = (unsigned int *)(v97 - 4);
        v89 = __ldrex(v88);
      while ( __strex(v89 - 1, v88) );
      v89 = (*v88)--;
    if ( v89 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v90 = (unsigned int *)(v98 - 4);
        v91 = __ldrex(v90);
      while ( __strex(v91 - 1, v90) );
      v91 = (*v90)--;
    if ( v91 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
    v38 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v38 = &ServiceLocator<AppPlatform>::mDefaultService;
  switch ( (*(int (**)(void))(**(_DWORD **)v38 + 448))() )
    case 0:
      sub_21E94B4((void **)&v96, "vrType");
      Social::Events::Event::addProperty<char [5]>((int)&v130, &v96, "None");
      v39 = (void *)(v96 - 12);
      if ( (int *)(v96 - 12) != &dword_28898C0 )
      {
        v40 = (unsigned int *)(v96 - 4);
        if ( !&pthread_create )
          goto LABEL_259;
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        goto LABEL_260;
      }
      break;
    case 2:
      sub_21E94B4((void **)&v95, "vrType");
      Social::Events::Event::addProperty<char [12]>((int)&v130, &v95, "Holographic");
      v39 = (void *)(v95 - 12);
      if ( (int *)(v95 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v95 - 4);
    case 3:
      sub_21E94B4((void **)&v93, "vrType");
      Social::Events::Event::addProperty<char [10]>((int)&v130, &v93, "WindowsMR");
      v39 = (void *)(v93 - 12);
      if ( (int *)(v93 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v93 - 4);
    case 1:
      sub_21E94B4((void **)&v94, "vrType");
      Social::Events::Event::addProperty<char [5]>((int)&v130, &v94, "Rift");
      v39 = (void *)(v94 - 12);
      if ( (int *)(v94 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v94 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
LABEL_259:
          v41 = (*v40)--;
LABEL_260:
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v39);
    default:
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v130);
}


void __fastcall MinecraftEventing::_buildCommonProperties(MinecraftEventing *this, Social::Events::EventManager *a2, unsigned int a3)
{
  MinecraftEventing::_buildCommonProperties(this, a2, a3);
}


int __fastcall MinecraftEventing::fireEventSignInEdu(int a1, const char **a2, int a3, const char **a4)
{
  const char **v4; // r5@1
  Social::Events::EventManager *v5; // r4@1
  const char **v6; // r8@1
  unsigned int v7; // r7@1
  int v8; // r6@1
  void *v9; // r0@1
  void *v10; // r0@2
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  int v25; // [sp+Ch] [bp-BCh]@9
  int v26; // [sp+10h] [bp-B8h]@7
  int v27; // [sp+18h] [bp-B0h]@7
  void *ptr; // [sp+1Ch] [bp-ACh]@3
  int v29; // [sp+34h] [bp-94h]@4
  int v30; // [sp+3Ch] [bp-8Ch]@3
  char v31; // [sp+40h] [bp-88h]@3
  int v32; // [sp+8Ch] [bp-3Ch]@1
  int v33; // [sp+90h] [bp-38h]@1
  int v34; // [sp+98h] [bp-30h]@1

  v4 = a2;
  v5 = *(Social::Events::EventManager **)(a1 + 4);
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = a3;
  sub_21E94B4((void **)&v32, "UserId");
  Social::Events::EventManager::setPlayerCommonProperty<std::string>(&v33, (int)v5, v7, (int **)&v32, v4);
  Json::Value::~Value((Json::Value *)&v34);
  v9 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v33 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v32 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v30, "SignInToEdu");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v7);
  Social::Events::Event::Event((int)&v31, v7, &v30, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v29 != ptr )
    operator delete(ptr);
  v11 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v30 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v27, "Stage");
  v26 = v8;
  Social::Events::Event::addProperty<unsigned int>((int)&v31, &v27, (unsigned int *)&v26);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( *((_DWORD *)*v6 - 3) )
    sub_21E94B4((void **)&v25, "Error");
    Social::Events::Event::addProperty<std::string>((int)&v31, &v25, v6);
    v13 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  Social::Events::EventManager::recordEvent((int)v5);
  return Social::Events::Event::~Event((int)&v31);
}


void __fastcall MinecraftEventing::_fireEventPackImportStage(int a1, int a2, PackManifest *this, int a4, int a5, char a6, char a7)
{
  int v7; // r8@1
  int v8; // r6@1
  PackManifest *v9; // r7@1
  const char **v10; // r11@1
  Social::Events::EventManager *v11; // r9@1
  char *v12; // r5@1
  int v13; // r1@1
  int v14; // r2@1
  int v15; // r3@1
  int v16; // r10@1
  unsigned int v17; // r6@1
  void *v18; // r0@4
  void *v19; // r0@5
  void *v20; // r0@6
  void *v21; // r0@7
  char *v22; // r0@8
  void *v23; // r0@8
  void *v24; // r0@9
  void *v25; // r0@10
  void *v26; // r0@11
  void *v27; // r0@12
  void *v28; // r0@13
  void *v29; // r0@14
  void *v30; // r0@15
  void *v31; // r0@16
  int v32; // r0@20
  int v33; // r0@21
  void *v34; // r0@22
  void *v35; // r0@23
  void *v36; // r0@24
  unsigned int *v37; // r2@26
  signed int v38; // r1@28
  unsigned int *v39; // r2@30
  signed int v40; // r1@32
  unsigned int *v41; // r2@34
  signed int v42; // r1@36
  unsigned int *v43; // r2@38
  signed int v44; // r1@40
  unsigned int *v45; // r2@42
  signed int v46; // r1@44
  unsigned int *v47; // r2@46
  signed int v48; // r1@48
  unsigned int *v49; // r2@50
  signed int v50; // r1@52
  unsigned int *v51; // r2@54
  signed int v52; // r1@56
  unsigned int *v53; // r2@58
  signed int v54; // r1@60
  unsigned int *v55; // r2@62
  signed int v56; // r1@64
  unsigned int *v57; // r2@66
  signed int v58; // r1@68
  unsigned int *v59; // r2@70
  signed int v60; // r1@72
  unsigned int *v61; // r2@74
  signed int v62; // r1@76
  unsigned int *v63; // r2@78
  signed int v64; // r1@80
  unsigned int *v65; // r2@82
  signed int v66; // r1@84
  unsigned int *v67; // r2@86
  signed int v68; // r1@88
  char v69; // [sp+4h] [bp-16Ch]@21
  char v70; // [sp+30h] [bp-140h]@20
  int v71; // [sp+44h] [bp-12Ch]@16
  int v72; // [sp+48h] [bp-128h]@14
  int v73; // [sp+50h] [bp-120h]@14
  int v74; // [sp+58h] [bp-118h]@13
  int v75; // [sp+5Ch] [bp-114h]@12
  int v76; // [sp+64h] [bp-10Ch]@12
  int v77; // [sp+68h] [bp-108h]@11
  int v78; // [sp+70h] [bp-100h]@11
  int v79; // [sp+78h] [bp-F8h]@10
  int v80; // [sp+80h] [bp-F0h]@9
  int v81; // [sp+88h] [bp-E8h]@8
  int v82; // [sp+8Ch] [bp-E4h]@6
  int v83; // [sp+94h] [bp-DCh]@6
  char v84; // [sp+9Bh] [bp-D5h]@5
  int v85; // [sp+A0h] [bp-D0h]@5
  void *ptr; // [sp+A4h] [bp-CCh]@1
  int v87; // [sp+BCh] [bp-B4h]@2
  int v88; // [sp+C4h] [bp-ACh]@1
  char v89; // [sp+C8h] [bp-A8h]@1
  int v90; // [sp+110h] [bp-60h]@1
  int v91; // [sp+114h] [bp-5Ch]@1
  int v92; // [sp+118h] [bp-58h]@1
  int v93; // [sp+11Ch] [bp-54h]@1
  int v94; // [sp+120h] [bp-50h]@1
  int v95; // [sp+128h] [bp-48h]@24
  int v96; // [sp+12Ch] [bp-44h]@23
  int v97; // [sp+130h] [bp-40h]@22
  char v98; // [sp+138h] [bp-38h]@1
  char v99; // [sp+146h] [bp-2Ah]@1
  char v100; // [sp+147h] [bp-29h]@1

  v7 = a2;
  v8 = a1;
  v9 = this;
  v100 = a6;
  v99 = a7;
  v10 = (const char **)a4;
  v11 = *(Social::Events::EventManager **)(a1 + 4);
  v12 = PackManifest::getIdentity(this);
  v13 = *((_DWORD *)v12 + 1);
  v14 = *((_DWORD *)v12 + 2);
  v15 = *((_DWORD *)v12 + 3);
  v90 = *(_DWORD *)v12;
  v91 = v13;
  v92 = v14;
  v93 = v15;
  SemVersion::SemVersion((int)&v94, (int)(v12 + 16));
  v98 = v12[40];
  v16 = PackManifest::getPackType(v9);
  v17 = *(_DWORD *)(v8 + 12);
  sub_21E94B4((void **)&v88, "PackImportStage");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v11, v17);
  Social::Events::Event::Event((int)&v89, v17, &v88, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v87 != ptr )
    operator delete(ptr);
  v18 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
  {
    v37 = (unsigned int *)(v88 - 4);
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
      j_j_j_j__ZdlPv_9(v18);
  }
  sub_21E94B4((void **)&v85, "PackTypeId");
  v84 = v16;
  Social::Events::Event::addProperty<char>((int)&v89, &v85, &v84);
  v19 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v85 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v83, "PackId");
  mce::UUID::asString((mce::UUID *)&v82);
  Social::Events::Event::addProperty<std::string>((int)&v89, &v83, (const char **)&v82);
  v20 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v82 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v83 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v81, "PackVersion");
  v22 = SemVersion::asString((SemVersion *)&v94);
  Social::Events::Event::addProperty<std::string>((int)&v89, &v81, (const char **)v22);
  v23 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v81 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v80, "PackStage");
  Social::Events::Event::addProperty<std::string>((int)&v89, &v80, v10);
  v24 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v80 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v79, "PackErrorCode");
  Social::Events::Event::addProperty<std::string>((int)&v89, &v79, (const char **)a5);
  v25 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v79 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v78, "PackFormatVersionNum");
  v77 = PackManifest::getFormatVersion(v9);
  Social::Events::Event::addProperty<int>((int)&v89, &v78, &v77);
  v26 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v78 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v76, "PackOriginalFormatVersionNum");
  v75 = PackManifest::getOriginalFormatVersion(v9);
  Social::Events::Event::addProperty<int>((int)&v89, &v76, &v75);
  v27 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v76 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v74, "PackDiscoveredOnDisk");
  Social::Events::Event::addProperty<bool>((int)&v89, &v74, (bool *)&v100);
  v28 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v74 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v73, "PackName");
  PackManifest::getName((PackManifest *)&v72, (int)v9);
  Social::Events::Event::addProperty<std::string>((int)&v89, &v73, (const char **)&v72);
  v29 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v72 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v73 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v71, "PackInDeveloperDirectory");
  Social::Events::Event::addProperty<bool>((int)&v89, &v71, (bool *)&v99);
  v31 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v71 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  if ( v7 )
    if ( v16 == 1 )
      ResourcePack::gatherResourcePackTelemetry((ResourcePack *)&v69, v7);
      MinecraftEventing::addResourcePackData(v33, (int)&v89, (int)&v69);
    else if ( v16 == 2 )
      ResourcePack::gatherBehaviorPackTelemetry((ResourcePack *)&v70, v7);
      MinecraftEventing::addBehaviorPackData(v32, (int)&v89, (int)&v70);
  Social::Events::EventManager::recordEvent((int)v11);
  Social::Events::Event::~Event((int)&v89);
  v34 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v97 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v96 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  v36 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v95 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
}


int __fastcall MinecraftEventing::fireEventJukeboxUsed(int result, Player *a2, const ItemInstance *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r6@4
  void *v7; // r0@7
  void *v8; // r0@8
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  unsigned int *v11; // r2@15
  signed int v12; // r1@17
  int v13; // [sp+8h] [bp-90h]@8
  int v14; // [sp+10h] [bp-88h]@8
  void *ptr; // [sp+14h] [bp-84h]@4
  int v16; // [sp+2Ch] [bp-6Ch]@5
  int v17; // [sp+34h] [bp-64h]@4
  char v18; // [sp+38h] [bp-60h]@4

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v17, "JukeboxUsed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v18, v6, &v17, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v16 != ptr )
          operator delete(ptr);
        v7 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v14, "DiscItemType");
        v13 = ItemInstance::getId(v4);
        Social::Events::Event::addProperty<int>((int)&v18, &v14, &v13);
        v8 = (void *)(v14 - 12);
        if ( (int *)(v14 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v14 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v18);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventVehicleExited(int result, Player *a2, unsigned int a3, int a4, unsigned __int64 a5)
{
  Entity *v5; // r7@1
  unsigned int v6; // r9@1
  Player *v7; // r6@1
  Social::Events::EventManager *v8; // r8@4
  int v9; // r4@4
  void *v10; // r0@7
  int v11; // r0@9
  int v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int v27; // [sp+4h] [bp-BCh]@13
  int v28; // [sp+Ch] [bp-B4h]@13
  Player *v29; // [sp+10h] [bp-B0h]@12
  int v30; // [sp+18h] [bp-A8h]@12
  int v31; // [sp+20h] [bp-A0h]@11
  int v32; // [sp+28h] [bp-98h]@10
  int v33; // [sp+2Ch] [bp-94h]@8
  void *ptr; // [sp+30h] [bp-90h]@4
  int v35; // [sp+48h] [bp-78h]@5
  int v36; // [sp+50h] [bp-70h]@4
  char v37; // [sp+54h] [bp-6Ch]@4
  int v38; // [sp+9Ch] [bp-24h]@4

  v5 = (Entity *)result;
  v6 = a3;
  v7 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v38 = 0;
        v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v9 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v36, "VehicleExited");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
        Social::Events::Event::Event((int)&v37, v9, &v36, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v35 != ptr )
          operator delete(ptr);
        v10 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        }
        v33 = 0;
        if ( Entity::getRide(v5) )
          v11 = Entity::getRide(v5);
          v12 = (*(int (**)(void))(*(_DWORD *)v11 + 488))();
          v33 = EntityClassTree::getEntityTypeIdLegacy(v12);
        sub_21E94B4((void **)&v32, "TravelMethodID");
        Social::Events::Event::addProperty<unsigned int>((int)&v37, &v32, (unsigned int *)&v38);
        v13 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v32 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v31, "MobType");
        Social::Events::Event::addProperty<int>((int)&v37, &v31, &v33);
        v14 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v31 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        sub_21E94B4((void **)&v30, "FurthestAxisMetersTravelled");
        v29 = v7;
        Social::Events::Event::addProperty<unsigned int>((int)&v37, &v30, (unsigned int *)&v29);
        v15 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v30 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v28, "TripDurationMinutes");
        v27 = v6;
        Social::Events::Event::addProperty<unsigned int>((int)&v37, &v28, &v27);
        v16 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v28 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        Social::Events::EventManager::recordEvent((int)v8);
        result = Social::Events::Event::~Event((int)&v37);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPlayerMessageMe(int a1, const char **a2, const char **a3)
{
  MinecraftEventing::fireEventPlayerMessageMe(a1, a2, a3);
}


void __fastcall MinecraftEventing::fireEventMultiplayerRoundStart(int a1, Level *a2, const char **a3, int a4, const char **a5, int a6, int a7)
{
  int v7; // r7@1
  const char **v8; // r5@1
  Level *v9; // r8@1
  int v10; // r0@5
  Social::Events::EventManager *v11; // r4@7
  int v12; // r9@7
  char *v13; // r0@7
  void *v14; // r0@7
  void *v15; // r0@8
  void *v16; // r0@9
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  void *v20; // r0@13
  void *v21; // r0@14
  void *v22; // r0@16
  void *v23; // r0@17
  void *v24; // r0@21
  void *v25; // r0@22
  void *v26; // r0@23
  void *v27; // r0@24
  void *v28; // r0@25
  void *v29; // r0@26
  void *v30; // r0@27
  char *v31; // r0@28
  void *v32; // r0@28
  void *v33; // r0@29
  void *v34; // r0@30
  void *v35; // r0@31
  void *v36; // r0@32
  unsigned int *v37; // r2@34
  signed int v38; // r1@36
  unsigned int *v39; // r2@38
  signed int v40; // r1@40
  unsigned int *v41; // r2@42
  signed int v42; // r1@44
  unsigned int *v43; // r2@46
  signed int v44; // r1@48
  unsigned int *v45; // r2@50
  signed int v46; // r1@52
  unsigned int *v47; // r2@54
  signed int v48; // r1@56
  unsigned int *v49; // r2@58
  signed int v50; // r1@60
  unsigned int *v51; // r2@62
  signed int v52; // r1@64
  unsigned int *v53; // r2@66
  signed int v54; // r1@68
  unsigned int *v55; // r2@70
  signed int v56; // r1@72
  unsigned int *v57; // r2@74
  signed int v58; // r1@76
  unsigned int *v59; // r2@78
  signed int v60; // r1@80
  unsigned int *v61; // r2@82
  signed int v62; // r1@84
  unsigned int *v63; // r2@86
  signed int v64; // r1@88
  unsigned int *v65; // r2@90
  signed int v66; // r1@92
  unsigned int *v67; // r2@94
  signed int v68; // r1@96
  unsigned int *v69; // r2@98
  signed int v70; // r1@100
  unsigned int *v71; // r2@102
  signed int v72; // r1@104
  unsigned int *v73; // r2@106
  signed int v74; // r1@108
  unsigned int *v75; // r2@110
  signed int v76; // r1@112
  unsigned int *v77; // r2@114
  signed int v78; // r1@116
  unsigned int *v79; // r2@118
  signed int v80; // r1@120
  int v81; // [sp+4h] [bp-224h]@30
  int v82; // [sp+Ch] [bp-21Ch]@30
  int v83; // [sp+10h] [bp-218h]@30
  int v84; // [sp+18h] [bp-210h]@30
  int v85; // [sp+2Ch] [bp-1FCh]@28
  int v86; // [sp+34h] [bp-1F4h]@28
  int v87; // [sp+38h] [bp-1F0h]@28
  int v88; // [sp+40h] [bp-1E8h]@28
  int v89; // [sp+54h] [bp-1D4h]@26
  int v90; // [sp+58h] [bp-1D0h]@26
  int v91; // [sp+60h] [bp-1C8h]@26
  int v92; // [sp+74h] [bp-1B4h]@24
  int v93; // [sp+78h] [bp-1B0h]@24
  int v94; // [sp+80h] [bp-1A8h]@24
  int v95; // [sp+94h] [bp-194h]@22
  int v96; // [sp+98h] [bp-190h]@22
  int v97; // [sp+A0h] [bp-188h]@22
  void *ptr; // [sp+B0h] [bp-178h]@18
  int v99; // [sp+C8h] [bp-160h]@19
  int v100; // [sp+D0h] [bp-158h]@18
  char v101; // [sp+D4h] [bp-154h]@18
  int v102; // [sp+E4h] [bp-144h]@22
  int v103; // [sp+11Ch] [bp-10Ch]@16
  int v104; // [sp+124h] [bp-104h]@16
  int v105; // [sp+128h] [bp-100h]@16
  int v106; // [sp+130h] [bp-F8h]@16
  int v107; // [sp+144h] [bp-E4h]@13
  int v108; // [sp+14Ch] [bp-DCh]@13
  int v109; // [sp+150h] [bp-D8h]@13
  int v110; // [sp+158h] [bp-D0h]@13
  int v111; // [sp+16Ch] [bp-BCh]@11
  int v112; // [sp+170h] [bp-B8h]@11
  int v113; // [sp+178h] [bp-B0h]@11
  int v114; // [sp+18Ch] [bp-9Ch]@9
  int v115; // [sp+190h] [bp-98h]@9
  int v116; // [sp+198h] [bp-90h]@9
  int v117; // [sp+1ACh] [bp-7Ch]@7
  int v118; // [sp+1B4h] [bp-74h]@7
  int v119; // [sp+1B8h] [bp-70h]@7
  int v120; // [sp+1C0h] [bp-68h]@7
  int v121; // [sp+1D4h] [bp-54h]@5
  int v122; // [sp+1D8h] [bp-50h]@1
  int v123; // [sp+1DCh] [bp-4Ch]@1
  char v124; // [sp+1E0h] [bp-48h]@22
  char v125; // [sp+1E8h] [bp-40h]@24
  char v126; // [sp+1F0h] [bp-38h]@26
  char v127; // [sp+1F8h] [bp-30h]@28
  char v128; // [sp+200h] [bp-28h]@30

  v7 = a1;
  v8 = a3;
  v9 = a2;
  v122 = a6;
  v123 = a4;
  if ( a1
    && (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1408))(a1) == 1
    && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1440))(v7) )
  {
    if ( Level::hasLevelStorage(v9) == 1 )
    {
      v10 = Level::getLevelStorage(v9);
      (*(void (__fastcall **)(int *))(*(_DWORD *)v10 + 84))(&v121);
    }
    else
      sub_21E94B4((void **)&v121, (const char *)&unk_257BC67);
    v11 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1440))(v7) + 4);
    v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1444))(v7);
    sub_21E94B4((void **)&v118, "Mode");
    v13 = Level::getLevelData(v9);
    v117 = LevelData::getGameType((LevelData *)v13);
    Social::Events::EventManager::setPlayerCommonProperty<unsigned int>(
      (int)&v119,
      (int)v11,
      v12,
      (int **)&v118,
      (unsigned int *)&v117);
    Json::Value::~Value((Json::Value *)&v120);
    v14 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v119 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    v15 = (void *)(v118 - 12);
    if ( (int *)(v118 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v118 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v114, "MultiplayerCorrelationId");
    Social::Events::EventManager::setCommonProperty<std::string>(&v115, (int)v11, (int **)&v114, a5);
    Json::Value::~Value((Json::Value *)&v116);
    v16 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v115 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v114 - 12);
    if ( (int *)(v114 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v114 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    sub_21E94B4((void **)&v111, "ServerId");
    Social::Events::EventManager::setCommonProperty<std::string>(&v112, (int)v11, (int **)&v111, v8);
    Json::Value::~Value((Json::Value *)&v113);
    v18 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v112 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v111 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21E94B4((void **)&v108, "Dim");
    v107 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 524))(v7);
      (int)&v109,
      (int **)&v108,
      (unsigned int *)&v107);
    Json::Value::~Value((Json::Value *)&v110);
    v20 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v109 - 4);
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v108 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    if ( *(_DWORD *)(a7 + 8) )
      sub_21E94B4((void **)&v104, "WorldID");
      v103 = *(_DWORD *)a7;
      Social::Events::EventManager::setCommonProperty<int>((int)&v105, (int)v11, (int **)&v104, &v103);
      Json::Value::~Value((Json::Value *)&v106);
      v22 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v77 = (unsigned int *)(v105 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v78 = __ldrex(v77);
          while ( __strex(v78 - 1, v77) );
        }
        else
          v78 = (*v77)--;
        if ( v78 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v79 = (unsigned int *)(v104 - 4);
            v80 = __ldrex(v79);
          while ( __strex(v80 - 1, v79) );
          v80 = (*v79)--;
        if ( v80 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v100, "MultiplayerRoundStart");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v11, v12);
    Social::Events::Event::Event((int)&v101, v12, &v100, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v99 != ptr )
      operator delete(ptr);
    v24 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v100 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    sub_21E94B4((void **)&v95, "RoundId");
    Social::Events::EventManager::setGlobalProperty<std::string>(&v96, (int)v11, (int **)&v95, (const char **)&v121);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
      (int)&v124,
      (unsigned __int64 *)&v102,
      &v96,
      (int)&v96);
    Json::Value::~Value((Json::Value *)&v97);
    v25 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v96 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v95 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v92, "SectionId");
    Social::Events::EventManager::setGlobalProperty<int>((int)&v93, (int)v11, (int **)&v92, &v123);
      (int)&v125,
      &v93,
      (int)&v93);
    Json::Value::~Value((Json::Value *)&v94);
    v27 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v93 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v92 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    sub_21E94B4((void **)&v89, "MatchTypeId");
    Social::Events::EventManager::setGlobalProperty<int>((int)&v90, (int)v11, (int **)&v89, &v122);
      (int)&v126,
      &v90,
      (int)&v90);
    Json::Value::~Value((Json::Value *)&v91);
    v29 = (void *)(v90 - 12);
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v90 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v30 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v89 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    sub_21E94B4((void **)&v86, "GameplayModeId");
    v31 = Level::getLevelData(v9);
    v85 = LevelData::getGameType((LevelData *)v31);
    Social::Events::EventManager::setGlobalProperty<unsigned int>(
      (int)&v87,
      (int **)&v86,
      (unsigned int *)&v85);
      (int)&v127,
      &v87,
      (int)&v87);
    Json::Value::~Value((Json::Value *)&v88);
    v32 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v87 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v86 - 4);
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    sub_21E94B4((void **)&v82, "DifficultyLevelId");
    v81 = Level::getDifficulty(v9);
      (int)&v83,
      (int **)&v82,
      (unsigned int *)&v81);
      (int)&v128,
      &v83,
      (int)&v83);
    Json::Value::~Value((Json::Value *)&v84);
    v34 = (void *)(v83 - 12);
    if ( (int *)(v83 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v83 - 4);
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v82 - 12);
    if ( (int *)(v82 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v82 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    Social::Events::EventManager::recordEvent((int)v11);
    Social::Events::Event::~Event((int)&v101);
    v36 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v121 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
  }
}


void __fastcall MinecraftEventing::_buildCommonProperties(MinecraftEventing *this, Social::Events::EventManager *a2, unsigned int a3)
{
  Social::Events::EventManager *v3; // r7@1
  MinecraftEventing *v4; // r4@1
  unsigned int v5; // r5@1
  char *v6; // r6@1
  int v7; // r8@1
  double v8; // r0@1
  unsigned int v9; // r0@1
  int v10; // r5@3
  void *v11; // r7@3

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = Social::Events::EventManager::getCommonProperties(a2);
  v7 = Social::Events::EventManager::getPlayerCommonProperties(v3, v5);
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 1065353216;
  LODWORD(v8) = (char *)v4 + 16;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v9 = sub_21E6254(v8);
  *((_DWORD *)v4 + 1) = v9;
  if ( v9 == 1 )
  {
    *((_DWORD *)v4 + 6) = 0;
    v11 = (char *)v4 + 24;
  }
  else
    if ( v9 >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)v4 = v11;
  if ( *((_DWORD *)v6 + 3) )
    std::__detail::_Insert_base<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_range<std::__detail::_Node_const_iterator<std::pair<std::string const,Social::Events::Property>,false,true>,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,Social::Events::Property>,true>>>>(
      (int)v4,
      *((int **)v6 + 2),
      0);
  if ( *(_DWORD *)(v7 + 12) )
      *(int **)(v7 + 8),
}


int __fastcall MinecraftEventing::fireEventGameSessionStart(int result, ClientInstance *a2, Level *a3, const char **a4)
{
  int v4; // r5@1
  const char **v5; // r10@1
  Level *v6; // r9@1
  ClientInstance *v7; // r6@1
  Social::Events::EventManager *v8; // r8@4
  int v9; // r4@4
  char *v10; // r0@4
  void *v11; // r0@4
  void *v12; // r0@5
  int v13; // r0@6
  void *v14; // r0@6
  void *v15; // r0@7
  void *v16; // r0@8
  void *v17; // r0@9
  int v18; // r0@11
  signed int v19; // r0@13
  void *v20; // r0@18
  int v21; // r5@19
  unsigned int *v22; // r1@20
  unsigned int v23; // r0@22
  unsigned int *v24; // r7@26
  unsigned int v25; // r0@28
  void *v26; // r0@33
  void *v27; // r0@37
  char *v28; // r0@38
  void *v29; // r0@38
  int v30; // r0@39
  const char *v31; // r2@39
  void *v32; // r0@41
  void *v33; // r0@42
  Minecraft *v34; // r0@43
  void *v35; // r0@43
  SkinRepositoryClientInterface *v36; // r0@44
  Skin *v37; // r0@44
  char *v38; // r0@44
  void *v39; // r0@44
  Options *v40; // r0@45
  void *v41; // r0@45
  Options *v42; // r0@46
  void *v43; // r0@46
  Options *v44; // r0@47
  void *v45; // r0@47
  ClientInputHandler *v46; // r0@48
  void *v47; // r0@48
  void *v48; // r0@55
  void *v49; // r0@56
  void *v50; // r0@58
  void *v51; // r0@60
  void *v52; // r0@61
  unsigned int *v53; // r2@64
  signed int v54; // r1@66
  unsigned int *v55; // r2@68
  signed int v56; // r1@70
  unsigned int *v57; // r2@72
  signed int v58; // r1@74
  unsigned int *v59; // r2@76
  signed int v60; // r1@78
  unsigned int *v61; // r2@80
  signed int v62; // r1@82
  unsigned int *v63; // r2@84
  signed int v64; // r1@86
  unsigned int *v65; // r2@88
  signed int v66; // r1@90
  unsigned int *v67; // r2@92
  signed int v68; // r1@94
  unsigned int *v69; // r2@96
  signed int v70; // r1@98
  unsigned int *v71; // r2@100
  signed int v72; // r1@102
  unsigned int *v73; // r2@104
  signed int v74; // r1@106
  unsigned int *v75; // r2@108
  signed int v76; // r1@110
  unsigned int *v77; // r2@112
  signed int v78; // r1@114
  unsigned int *v79; // r2@116
  signed int v80; // r1@118
  unsigned int *v81; // r2@120
  signed int v82; // r1@122
  unsigned int *v83; // r2@124
  signed int v84; // r1@126
  unsigned int *v85; // r2@128
  signed int v86; // r1@130
  unsigned int *v87; // r2@132
  signed int v88; // r1@134
  unsigned int *v89; // r2@136
  signed int v90; // r1@138
  unsigned int *v91; // r2@140
  signed int v92; // r1@142
  unsigned int *v93; // r2@144
  signed int v94; // r1@146
  unsigned int *v95; // r2@148
  signed int v96; // r1@150
  int v97; // [sp+8h] [bp-1D0h]@61
  int v98; // [sp+10h] [bp-1C8h]@61
  char v99; // [sp+17h] [bp-1C1h]@60
  int v100; // [sp+1Ch] [bp-1BCh]@57
  int v101; // [sp+20h] [bp-1B8h]@50
  int v102; // [sp+28h] [bp-1B0h]@49
  int v103; // [sp+2Ch] [bp-1ACh]@48
  int v104; // [sp+34h] [bp-1A4h]@48
  char v105; // [sp+3Bh] [bp-19Dh]@47
  int v106; // [sp+40h] [bp-198h]@47
  char v107; // [sp+47h] [bp-191h]@46
  int v108; // [sp+4Ch] [bp-18Ch]@46
  char v109; // [sp+53h] [bp-185h]@45
  int v110; // [sp+58h] [bp-180h]@45
  int v111; // [sp+60h] [bp-178h]@44
  char v112; // [sp+67h] [bp-171h]@43
  int v113; // [sp+6Ch] [bp-16Ch]@43
  int v114; // [sp+74h] [bp-164h]@42
  const char *v115; // [sp+78h] [bp-160h]@41
  int v116; // [sp+80h] [bp-158h]@39
  int v117; // [sp+84h] [bp-154h]@38
  int v118; // [sp+8Ch] [bp-14Ch]@38
  void *ptr; // [sp+90h] [bp-148h]@34
  int v120; // [sp+A8h] [bp-130h]@35
  int v121; // [sp+B0h] [bp-128h]@34
  char v122; // [sp+B4h] [bp-124h]@34
  Social::User *v123; // [sp+FCh] [bp-DCh]@10
  int v124; // [sp+100h] [bp-D8h]@19
  int v125; // [sp+104h] [bp-D4h]@18
  int v126; // [sp+10Ch] [bp-CCh]@10
  int v127; // [sp+110h] [bp-C8h]@18
  int v128; // [sp+118h] [bp-C0h]@18
  int v129; // [sp+12Ch] [bp-ACh]@8
  int v130; // [sp+134h] [bp-A4h]@8
  int v131; // [sp+138h] [bp-A0h]@8
  int v132; // [sp+140h] [bp-98h]@8
  char v133; // [sp+157h] [bp-81h]@6
  int v134; // [sp+15Ch] [bp-7Ch]@6
  int v135; // [sp+160h] [bp-78h]@6
  int v136; // [sp+168h] [bp-70h]@6
  int v137; // [sp+17Ch] [bp-5Ch]@4
  int v138; // [sp+184h] [bp-54h]@4
  int v139; // [sp+188h] [bp-50h]@4
  int v140; // [sp+190h] [bp-48h]@4

  v4 = result;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v138, "Mode");
        v10 = Level::getLevelData(v6);
        v137 = LevelData::getGameType((LevelData *)v10);
        Social::Events::EventManager::setPlayerCommonProperty<unsigned int>(
          (int)&v139,
          (int)v8,
          v9,
          (int **)&v138,
          (unsigned int *)&v137);
        Json::Value::~Value((Json::Value *)&v140);
        v11 = (void *)(v139 - 12);
        if ( (int *)(v139 - 12) != &dword_28898C0 )
        {
          v53 = (unsigned int *)(v139 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
          }
          else
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        v12 = (void *)(v138 - 12);
        if ( (int *)(v138 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v138 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v134, "vrMode");
        v13 = ClientInstance::getHoloInput(v7);
        v133 = (*(int (**)(void))(*(_DWORD *)v13 + 76))();
        Social::Events::EventManager::setPlayerCommonProperty<bool>(
          (int)&v135,
          (int **)&v134,
          (bool *)&v133);
        Json::Value::~Value((Json::Value *)&v136);
        v14 = (void *)(v135 - 12);
        if ( (int *)(v135 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v135 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        v15 = (void *)(v134 - 12);
        if ( (int *)(v134 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v134 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v130, "Dim");
        v129 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 524))(v4);
          (int)&v131,
          (int **)&v130,
          (unsigned int *)&v129);
        Json::Value::~Value((Json::Value *)&v132);
        v16 = (void *)(v131 - 12);
        if ( (int *)(v131 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v131 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = (void *)(v130 - 12);
        if ( (int *)(v130 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v130 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        sub_21E94B4((void **)&v126, "AccountType");
        ClientInstance::getUser((ClientInstance *)&v123, (int)v7);
        if ( v123 )
          v18 = Social::User::getPlatformConnectionState(v123);
          if ( v18 == 3 )
            v19 = 1;
          else if ( v18 )
            v19 = 3;
            v19 = 2;
        else
          v19 = 3;
        v125 = v19;
        Social::Events::EventManager::setPlayerCommonProperty<int>((int)&v127, (int)v8, v9, (int **)&v126, &v125);
        Json::Value::~Value((Json::Value *)&v128);
        v20 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != &dword_28898C0 )
          v65 = (unsigned int *)(v127 - 4);
              v66 = __ldrex(v65);
            while ( __strex(v66 - 1, v65) );
            v66 = (*v65)--;
          if ( v66 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = v124;
        if ( v124 )
          v22 = (unsigned int *)(v124 + 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 == 1 )
            v24 = (unsigned int *)(v21 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
            if ( &pthread_create )
            {
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            }
            else
              v25 = (*v24)--;
            if ( v25 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
        v26 = (void *)(v126 - 12);
        if ( (int *)(v126 - 12) != &dword_28898C0 )
          v67 = (unsigned int *)(v126 - 4);
              v68 = __ldrex(v67);
            while ( __strex(v68 - 1, v67) );
            v68 = (*v67)--;
          if ( v68 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        sub_21E94B4((void **)&v121, "GameSessionStart");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
        Social::Events::Event::Event((int)&v122, v9, &v121, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v120 != ptr )
          operator delete(ptr);
        v27 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != &dword_28898C0 )
          v69 = (unsigned int *)(v121 - 4);
              v70 = __ldrex(v69);
            while ( __strex(v70 - 1, v69) );
            v70 = (*v69)--;
          if ( v70 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        sub_21E94B4((void **)&v118, "Mode");
        v28 = Level::getLevelData(v6);
        v117 = LevelData::getGameType((LevelData *)v28);
        Social::Events::Event::addProperty<unsigned int>((int)&v122, &v118, (unsigned int *)&v117);
        v29 = (void *)(v118 - 12);
        if ( (int *)(v118 - 12) != &dword_28898C0 )
          v71 = (unsigned int *)(v118 - 4);
              v72 = __ldrex(v71);
            while ( __strex(v72 - 1, v71) );
            v72 = (*v71)--;
          if ( v72 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        sub_21E94B4((void **)&v116, "gameType");
        v30 = Level::isClientSide(v6);
        v31 = "multiplayer";
        if ( !v30 )
          v31 = "local";
        v115 = v31;
        Social::Events::Event::addProperty<char const*>((int)&v122, &v116, &v115);
        v32 = (void *)(v116 - 12);
        if ( (int *)(v116 - 12) != &dword_28898C0 )
          v73 = (unsigned int *)(v116 - 4);
              v74 = __ldrex(v73);
            while ( __strex(v74 - 1, v73) );
            v74 = (*v73)--;
          if ( v74 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        sub_21E94B4((void **)&v114, "worldGeneratorType");
        Social::Events::Event::addProperty<std::string>((int)&v122, &v114, v5);
        v33 = (void *)(v114 - 12);
        if ( (int *)(v114 - 12) != &dword_28898C0 )
          v75 = (unsigned int *)(v114 - 4);
              v76 = __ldrex(v75);
            while ( __strex(v76 - 1, v75) );
            v76 = (*v75)--;
          if ( v76 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        sub_21E94B4((void **)&v113, "isModded");
        v34 = (Minecraft *)ClientInstance::getServerData(v7);
        v112 = Minecraft::isModded(v34);
        Social::Events::Event::addProperty<bool>((int)&v122, &v113, (bool *)&v112);
        v35 = (void *)(v113 - 12);
        if ( (int *)(v113 - 12) != &dword_28898C0 )
          v77 = (unsigned int *)(v113 - 4);
              v78 = __ldrex(v77);
            while ( __strex(v78 - 1, v77) );
            v78 = (*v77)--;
          if ( v78 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        sub_21E94B4((void **)&v111, "skinId");
        v36 = (SkinRepositoryClientInterface *)ClientInstance::getSkinRepositoryClientInterface(v7);
        v37 = SkinRepositoryClientInterface::getSelectedSkinOrDefault(v36, 0);
        v38 = Skin::getSerializable(v37);
        Social::Events::Event::addProperty<std::string>((int)&v122, &v111, (const char **)v38);
        v39 = (void *)(v111 - 12);
        if ( (int *)(v111 - 12) != &dword_28898C0 )
          v79 = (unsigned int *)(v111 - 4);
              v80 = __ldrex(v79);
            while ( __strex(v80 - 1, v79) );
            v80 = (*v79)--;
          if ( v80 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        sub_21E94B4((void **)&v110, "swapJump");
        v40 = (Options *)ClientInstance::getOptions(v7);
        v109 = Options::getSwapJumpAndSneak(v40);
        Social::Events::Event::addProperty<bool>((int)&v122, &v110, (bool *)&v109);
        v41 = (void *)(v110 - 12);
        if ( (int *)(v110 - 12) != &dword_28898C0 )
          v81 = (unsigned int *)(v110 - 4);
              v82 = __ldrex(v81);
            while ( __strex(v82 - 1, v81) );
            v82 = (*v81)--;
          if ( v82 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        sub_21E94B4((void **)&v108, "lefty");
        v42 = (Options *)ClientInstance::getOptions(v7);
        v107 = Options::isLeftHanded(v42);
        Social::Events::Event::addProperty<bool>((int)&v122, &v108, (bool *)&v107);
        v43 = (void *)(v108 - 12);
        if ( (int *)(v108 - 12) != &dword_28898C0 )
          v83 = (unsigned int *)(v108 - 4);
              v84 = __ldrex(v83);
            while ( __strex(v84 - 1, v83) );
            v84 = (*v83)--;
          if ( v84 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        sub_21E94B4((void **)&v106, "splitControls");
        v44 = (Options *)ClientInstance::getOptions(v7);
        v105 = Options::getSplitControls(v44);
        Social::Events::Event::addProperty<bool>((int)&v122, &v106, (bool *)&v105);
        v45 = (void *)(v106 - 12);
        if ( (int *)(v106 - 12) != &dword_28898C0 )
          v85 = (unsigned int *)(v106 - 4);
              v86 = __ldrex(v85);
            while ( __strex(v86 - 1, v85) );
            v86 = (*v85)--;
          if ( v86 <= 0 )
            j_j_j_j__ZdlPv_9(v45);
        sub_21E94B4((void **)&v104, "controlType");
        v46 = (ClientInputHandler *)ClientInstance::getInput(v7);
        v103 = ClientInputHandler::getCurrentInputMode(v46);
        Social::Events::Event::addProperty<int>((int)&v122, &v104, &v103);
        v47 = (void *)(v104 - 12);
        if ( (int *)(v104 - 12) != &dword_28898C0 )
          v87 = (unsigned int *)(v104 - 4);
              v88 = __ldrex(v87);
            while ( __strex(v88 - 1, v87) );
            v88 = (*v87)--;
          if ( v88 <= 0 )
            j_j_j_j__ZdlPv_9(v47);
        sub_21E94B4((void **)&v102, "difficulty");
        switch ( Level::getDifficulty(v6) )
          case 0:
            sub_21E94B4((void **)&v101, "PEACEFUL");
            break;
          case 2:
            sub_21E94B4((void **)&v101, "NORMAL");
          case 3:
            sub_21E94B4((void **)&v101, "HARD");
          case 1:
            sub_21E94B4((void **)&v101, "EASY");
          default:
            sub_21E94B4((void **)&v101, "UNKNOWN");
        Social::Events::Event::addProperty<std::string>((int)&v122, &v102, (const char **)&v101);
        v48 = (void *)(v101 - 12);
        if ( (int *)(v101 - 12) != &dword_28898C0 )
          v89 = (unsigned int *)(v101 - 4);
              v90 = __ldrex(v89);
            while ( __strex(v90 - 1, v89) );
            v90 = (*v89)--;
          if ( v90 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
        v49 = (void *)(v102 - 12);
        if ( (int *)(v102 - 12) != &dword_28898C0 )
          v91 = (unsigned int *)(v102 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          if ( v92 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        sub_21E94B4((void **)&v100, "onWifi");
        if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
          v50 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
          v50 = &ServiceLocator<AppPlatform>::mDefaultService;
        v99 = (*(int (**)(void))(**(_DWORD **)v50 + 408))();
        Social::Events::Event::addProperty<bool>((int)&v122, &v100, (bool *)&v99);
        v51 = (void *)(v100 - 12);
        if ( (int *)(v100 - 12) != &dword_28898C0 )
          v93 = (unsigned int *)(v100 - 4);
              v94 = __ldrex(v93);
            while ( __strex(v94 - 1, v93) );
            v94 = (*v93)--;
          if ( v94 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        sub_21E94B4((void **)&v98, "AccountType");
        v97 = 3;
        Social::Events::Event::addProperty<int>((int)&v122, &v98, &v97);
        v52 = (void *)(v98 - 12);
        if ( (int *)(v98 - 12) != &dword_28898C0 )
          v95 = (unsigned int *)(v98 - 4);
              v96 = __ldrex(v95);
            while ( __strex(v96 - 1, v95) );
            v96 = (*v95)--;
          if ( v96 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        Social::Events::EventManager::recordEvent((int)v8);
        result = Social::Events::Event::~Event((int)&v122);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::init(MinecraftEventing *this, Social::UserManager *a2)
{
  MinecraftEventing::init(this, a2);
}


int __fastcall MinecraftEventing::fireEventPlayerJoin(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  const char **v8; // r0@7
  void *v9; // r0@7
  int v10; // r0@8
  __int64 v11; // r2@8
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v20; // r0@11
  const Player *v21; // r0@12
  int v22; // r0@12
  void *v23; // r0@12
  void *v24; // r0@13
  void *v25; // r0@14
  void **v26; // r0@15
  void *v27; // r0@15
  unsigned int *v29; // r2@17
  signed int v30; // r1@19
  unsigned int *v31; // r2@21
  signed int v32; // r1@23
  unsigned int *v33; // r2@25
  signed int v34; // r1@27
  unsigned int *v35; // r2@29
  signed int v36; // r1@31
  unsigned int *v37; // r2@33
  signed int v38; // r1@35
  unsigned int *v39; // r2@37
  signed int v40; // r1@39
  unsigned int *v41; // r2@41
  signed int v42; // r1@43
  unsigned int *v43; // r2@45
  signed int v44; // r1@47
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@53
  signed int v48; // r1@55
  unsigned int *v49; // r2@57
  signed int v50; // r1@59
  unsigned int *v51; // r2@61
  signed int v52; // r1@63
  int v53; // [sp+8h] [bp-1B0h]@14
  int v54; // [sp+10h] [bp-1A8h]@14
  int v55; // [sp+14h] [bp-1A4h]@12
  int v56; // [sp+1Ch] [bp-19Ch]@12
  char v57; // [sp+20h] [bp-198h]@12
  void **v58; // [sp+30h] [bp-188h]@12
  int v59; // [sp+34h] [bp-184h]@16
  void **v60; // [sp+38h] [bp-180h]@12
  void **v61; // [sp+3Ch] [bp-17Ch]@12
  int v62; // [sp+58h] [bp-160h]@16
  int v63; // [sp+60h] [bp-158h]@15
  int v64; // [sp+64h] [bp-154h]@16
  float v65; // [sp+ECh] [bp-CCh]@11
  int v66; // [sp+F4h] [bp-C4h]@11
  int v67; // [sp+FCh] [bp-BCh]@10
  int v68; // [sp+104h] [bp-B4h]@9
  int v69; // [sp+10Ch] [bp-ACh]@8
  __int64 v70; // [sp+110h] [bp-A8h]@8
  int v71; // [sp+118h] [bp-A0h]@8
  int v72; // [sp+124h] [bp-94h]@7
  int v73; // [sp+128h] [bp-90h]@5
  int v74; // [sp+130h] [bp-88h]@5
  void *ptr; // [sp+134h] [bp-84h]@1
  int v76; // [sp+14Ch] [bp-6Ch]@2
  int v77; // [sp+154h] [bp-64h]@1
  char v78; // [sp+158h] [bp-60h]@1

  v2 = this;
  v3 = *(Social::Events::EventManager **)((*(int (**)(void))(*(_DWORD *)this + 1440))() + 4);
  v4 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) + 12);
  sub_21E94B4((void **)&v77, "PlayerJoin");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v78, v4, &v77, (int)&ptr, 1);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v76 != ptr )
    operator delete(ptr);
  v5 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v77 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v74, "PlayerId");
  mce::UUID::asString((mce::UUID *)&v73);
  Social::Events::Event::addProperty<std::string>((int)&v78, &v74, (const char **)&v73);
  v6 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v73 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v74 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v72, "PlayerName");
  v8 = (const char **)(*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 188))(v2);
  Social::Events::Event::addProperty<std::string>((int)&v78, &v72, v8);
  v9 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v72 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 52))(v2);
  v11 = *(_QWORD *)v10;
  v71 = *(_DWORD *)(v10 + 8);
  v70 = v11;
  sub_21E94B4((void **)&v69, "PosX");
  Social::Events::Event::addProperty<float>((int)&v78, &v69, (int)&v70);
  v12 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v69 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v68, "PosY");
  Social::Events::Event::addProperty<float>((int)&v78, &v68, (unsigned int)&v70 | 4);
  v13 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v68 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v67, "PosZ");
  Social::Events::Event::addProperty<float>((int)&v78, &v67, (int)&v71);
  v14 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v67 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v66, "PlayerYRot");
  _R0 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 636))(v2);
  __asm
    VMOV            S0, R0
    VSTR            S0, [SP,#0x1B8+var_CC]
  Social::Events::Event::addProperty<float>((int)&v78, &v66, (int)&v65);
  v20 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v66 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21D103C((int)&v58, 24);
  *(_DWORD *)((char *)*(v60 - 3) + (_DWORD)&v60 + 12) = *(_DWORD *)((char *)*(v60 - 3) + (_DWORD)&v60 + 12) & 0xFFFFFFB5 | 8;
  v21 = (const Player *)Entity::getLevel(v2);
  Level::getPlayerColor((Level *)&v57, v21, v2);
  v22 = Color::toARGB((Color *)&v57);
  sub_21CC43C(&v60, v22);
  sub_21E94B4((void **)&v56, "PlayerColor");
  sub_21CFED8(&v55, (int)&v61);
  Social::Events::Event::addProperty<std::string>((int)&v78, &v56, (const char **)&v55);
  v23 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v55 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v56 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v54, "Dimension");
  v53 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 524))(v2);
  Social::Events::Event::addProperty<unsigned int>((int)&v78, &v54, (unsigned int *)&v53);
  v25 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v54 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  Social::Events::EventManager::recordEvent((int)v3);
  v26 = off_26D3F84;
  v58 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v58) = off_26D3F80[0];
  v60 = v26;
  v61 = &off_27734E8;
  v27 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v63 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v61 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v62);
  v58 = (void **)off_26D3F68;
  *(void ***)((char *)&v58 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v59 = 0;
  sub_21B6560(&v64);
  return Social::Events::Event::~Event((int)&v78);
}


int __fastcall MinecraftEventing::fireEventSignInToXboxLive(int a1, int a2, char a3, int a4)
{
  int v4; // r7@1
  __int64 v5; // kr00_8@1
  int v6; // r8@1
  int v7; // r6@1
  void *v8; // r0@3
  void *v9; // r0@4
  void *v10; // r0@5
  __int64 v11; // kr08_8@6
  unsigned int *v12; // r1@7
  unsigned int v13; // r2@9
  int v14; // r0@13
  signed int v15; // r0@15
  void *v16; // r0@20
  unsigned int *v17; // r1@22
  unsigned int v18; // r0@24
  unsigned int *v19; // r5@28
  unsigned int v20; // r0@30
  void *v21; // r0@35
  int v22; // r7@36
  unsigned int *v23; // r1@37
  unsigned int v24; // r0@39
  unsigned int *v25; // r5@43
  unsigned int v26; // r0@45
  void *v27; // r0@53
  void *v28; // r0@54
  void *v34; // r0@55
  void *v35; // r0@56
  unsigned int *v37; // r2@58
  signed int v38; // r1@60
  unsigned int *v39; // r2@62
  signed int v40; // r1@64
  unsigned int *v41; // r2@66
  signed int v42; // r1@68
  unsigned int *v43; // r2@70
  signed int v44; // r1@72
  unsigned int *v45; // r2@90
  signed int v46; // r1@92
  unsigned int *v47; // r2@94
  signed int v48; // r1@96
  unsigned int *v49; // r2@98
  signed int v50; // r1@100
  unsigned int *v51; // r2@102
  signed int v52; // r1@104
  unsigned int *v53; // r2@106
  signed int v54; // r1@108
  int v55; // [sp+4h] [bp-104h]@56
  int v56; // [sp+Ch] [bp-FCh]@56
  double v57; // [sp+10h] [bp-F8h]@55
  int v58; // [sp+1Ch] [bp-ECh]@55
  int v59; // [sp+24h] [bp-E4h]@54
  void *ptr; // [sp+28h] [bp-E0h]@50
  int v61; // [sp+40h] [bp-C8h]@51
  int v62; // [sp+48h] [bp-C0h]@50
  char v63; // [sp+4Ch] [bp-BCh]@50
  int v64; // [sp+94h] [bp-74h]@20
  int v65; // [sp+9Ch] [bp-6Ch]@6
  int v66; // [sp+A0h] [bp-68h]@20
  int v67; // [sp+A8h] [bp-60h]@20
  int v68; // [sp+BCh] [bp-4Ch]@3
  int v69; // [sp+C4h] [bp-44h]@3
  int v70; // [sp+C8h] [bp-40h]@3
  int v71; // [sp+D0h] [bp-38h]@3
  Social::User *v72; // [sp+E0h] [bp-28h]@2
  int v73; // [sp+E4h] [bp-24h]@6
  char v74; // [sp+EBh] [bp-1Dh]@1

  v4 = a2;
  v74 = a3;
  v5 = *(_QWORD *)(a1 + 4);
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 12);
  if ( HIDWORD(v5) )
  {
    Social::UserManager::getUser((Social::UserManager *)&v72, (const Social::XboxLiveUserManager *)HIDWORD(v5), a2);
    if ( v72 )
    {
      v7 = Social::User::getLocalUserId(v72);
      sub_21E94B4((void **)&v69, "UserId");
      Social::XboxLiveUserManager::getCurrentXUID((Social::XboxLiveUserManager *)&v68, v4);
      Social::Events::EventManager::setPlayerCommonProperty<std::string>(
        &v70,
        v5,
        v7,
        (int **)&v69,
        (const char **)&v68);
      Json::Value::~Value((Json::Value *)&v71);
      v8 = (void *)(v70 - 12);
      if ( (int *)(v70 - 12) != &dword_28898C0 )
      {
        v45 = (unsigned int *)(v70 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = (void *)(v68 - 12);
      if ( (int *)(v68 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v68 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v69 - 12);
      if ( (int *)(v69 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v69 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      sub_21E94B4((void **)&v65, "AccountType");
      v11 = *(_QWORD *)&v72;
      if ( v73 )
        v12 = (unsigned int *)(v73 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 + 1, v12) );
          ++*v12;
      if ( (_DWORD)v11 )
        v14 = Social::User::getPlatformConnectionState((Social::User *)v11);
        if ( v14 == 3 )
          v15 = 1;
        else if ( v14 )
          v15 = 3;
          v15 = 2;
      else
        v15 = 3;
      v64 = v15;
      Social::Events::EventManager::setPlayerCommonProperty<int>((int)&v66, v5, v7, (int **)&v65, &v64);
      Json::Value::~Value((Json::Value *)&v67);
      v16 = (void *)(v66 - 12);
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v66 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      if ( HIDWORD(v11) )
        v17 = (unsigned int *)(HIDWORD(v11) + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(HIDWORD(v11) + 8);
          (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 8))(HIDWORD(v11));
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
            (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v11) + 12))(HIDWORD(v11));
      v21 = (void *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v65 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
    }
    v22 = v73;
    if ( v73 )
      v23 = (unsigned int *)(v73 + 4);
      if ( &pthread_create )
        __dmb();
        do
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
  }
  sub_21E94B4((void **)&v62, "SignInToXboxLive");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, (Social::Events::EventManager *)v5, v7);
  Social::Events::Event::Event((int)&v63, v7, &v62, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v61 != ptr )
    operator delete(ptr);
  v27 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v59, "SignInUI");
  Social::Events::Event::addProperty<bool>((int)&v63, &v59, (bool *)&v74);
  v28 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v59 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v58, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x108+var_F8]
  Social::Events::Event::addProperty<double>((int)&v63, &v58, (int)&v57);
  v34 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v58 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v56, "Stage");
  v55 = v6;
  Social::Events::Event::addProperty<unsigned int>((int)&v63, &v56, (unsigned int *)&v55);
  v35 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v56 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  Social::Events::EventManager::recordEvent(v5);
  return Social::Events::Event::~Event((int)&v63);
}


void __fastcall MinecraftEventing::fireEventPlayerMessageTitle(int a1, const char **a2, const char **a3, const char **a4)
{
  const char **v4; // r6@1
  const char **v5; // r4@1
  const char **v6; // r5@1
  int v7; // r7@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = sub_21E94B4((void **)&v12, "title");
  MinecraftEventing::fireEventPlayerMessage(v7, v4, v6, v5, (const char **)v8);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
}


int __fastcall MinecraftEventing::fireEventStackLoaded(int a1, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+Ch] [bp-9Ch]@7
  int v19; // [sp+14h] [bp-94h]@6
  char v20; // [sp+1Bh] [bp-8Dh]@5
  int v21; // [sp+20h] [bp-88h]@5
  void *ptr; // [sp+24h] [bp-84h]@1
  int v23; // [sp+3Ch] [bp-6Ch]@2
  int v24; // [sp+44h] [bp-64h]@1
  char v25; // [sp+48h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v24, "StackLoaded");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v25, v4, &v24, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v23 != ptr )
    operator delete(ptr);
  v5 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v21, "StackType");
  v20 = *(_BYTE *)v2;
  Social::Events::Event::addProperty<char>((int)&v25, &v21, &v20);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v21 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v19, "StackSize");
  Social::Events::Event::addProperty<unsigned int>((int)&v25, &v19, (unsigned int *)(v2 + 4));
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v18, "ParseTime");
  Social::Events::Event::addProperty<double>((int)&v25, &v18, v2 + 8);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v18 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v25);
}


void __fastcall MinecraftEventing::fireEventSetValidForAchievements(MinecraftEventing *this, Player *a2, bool a3)
{
  MinecraftEventing *v3; // r5@1
  char v4; // r4@1
  int v5; // r6@4
  int v6; // r5@4
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  char v13; // [sp+7h] [bp-39h]@6
  int v14; // [sp+Ch] [bp-34h]@4
  int v15; // [sp+10h] [bp-30h]@6
  int v16; // [sp+18h] [bp-28h]@6

  v3 = this;
  v4 = (char)a2;
  if ( this
    && (*(int (**)(void))(*(_DWORD *)this + 1408))() == 1
    && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 1440))(v3) )
  {
    v5 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3) + 4);
    *(_BYTE *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3) + 36) = v4;
    v6 = *(_BYTE *)((*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 1440))(v3) + 37);
    sub_21E94B4((void **)&v14, "Cheevos");
    if ( v6 )
      LOBYTE(v6) = 1;
    v13 = v6 | v4;
    Social::Events::EventManager::setCommonProperty<bool>((int)&v15, v5, (int **)&v14, (bool *)&v13);
    Json::Value::~Value((Json::Value *)&v16);
    v7 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v14 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  }
}


int __fastcall MinecraftEventing::fireEventFileTransmissionState(int a1, int a2, int a3, int a4, double a5, __int64 a6, __int64 a7)
{
  int v11; // r7@1
  int v12; // r9@1
  int v13; // r6@1
  Social::Events::EventManager *v14; // r8@1
  unsigned int v15; // r4@1
  void *v16; // r0@4
  void *v18; // r0@5
  void *v19; // r0@6
  void *v20; // r0@7
  void *v21; // r0@8
  void *v22; // r0@9
  void *v23; // r0@10
  void *v24; // r0@11
  unsigned int *v26; // r2@13
  signed int v27; // r1@15
  unsigned int *v28; // r2@17
  signed int v29; // r1@19
  unsigned int *v30; // r2@21
  signed int v31; // r1@23
  unsigned int *v32; // r2@25
  signed int v33; // r1@27
  unsigned int *v34; // r2@29
  signed int v35; // r1@31
  unsigned int *v36; // r2@33
  signed int v37; // r1@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  int v42; // [sp+Ch] [bp-ECh]@11
  __int64 v43; // [sp+10h] [bp-E8h]@10
  int v44; // [sp+20h] [bp-D8h]@10
  int v45; // [sp+28h] [bp-D0h]@9
  int v46; // [sp+2Ch] [bp-CCh]@8
  int v47; // [sp+34h] [bp-C4h]@8
  int v48; // [sp+38h] [bp-C0h]@7
  int v49; // [sp+40h] [bp-B8h]@7
  int v50; // [sp+44h] [bp-B4h]@6
  int v51; // [sp+4Ch] [bp-ACh]@6
  double v52; // [sp+50h] [bp-A8h]@5
  int v53; // [sp+60h] [bp-98h]@5
  void *ptr; // [sp+64h] [bp-94h]@1
  int v55; // [sp+7Ch] [bp-7Ch]@2
  int v56; // [sp+84h] [bp-74h]@1
  char v57; // [sp+88h] [bp-70h]@1
  double v58; // [sp+D0h] [bp-28h]@11

  __asm { VLDR            D0, [SP,#0xF8+arg_10] }
  v11 = a2;
  v12 = a4;
  __asm { VSTR            D0, [SP,#0xF8+var_28] }
  v13 = a3;
  v14 = *(Social::Events::EventManager **)(a1 + 4);
  v15 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v56, "FileTransmissionState");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v14, v15);
  Social::Events::Event::Event((int)&v57, v15, &v56, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v55 != ptr )
    operator delete(ptr);
  v16 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v56 - 4);
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
      j_j_j_j__ZdlPv_9(v16);
  }
  sub_21E94B4((void **)&v53, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xF8+var_A8]
  Social::Events::Event::addProperty<double>((int)&v57, &v53, (int)&v52);
  v18 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v53 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v51, "DirId");
  v50 = v11;
  Social::Events::Event::addProperty<unsigned int>((int)&v57, &v51, (unsigned int *)&v50);
  v19 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v51 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v49, "StateId");
  v48 = v13;
  Social::Events::Event::addProperty<unsigned int>((int)&v57, &v49, (unsigned int *)&v48);
  v20 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v49 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v47, "TypeID");
  v46 = v12;
  Social::Events::Event::addProperty<unsigned int>((int)&v57, &v47, (unsigned int *)&v46);
  v21 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v47 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v45, "FileId");
  Social::Events::Event::addProperty<std::string>((int)&v57, &v45, (const char **)LODWORD(a5));
  v22 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v45 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v44, "Size");
  v43 = a6;
  Social::Events::Event::addProperty<unsigned long long>((int)&v57, &v44, (unsigned __int64 *)&v43);
  v23 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v44 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v42, "Progress");
  Social::Events::Event::addProperty<double>((int)&v57, &v42, (int)&v58);
  v24 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v42 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  Social::Events::EventManager::recordEvent((int)v14);
  return Social::Events::Event::~Event((int)&v57);
}


int __fastcall MinecraftEventing::fireEventScreenChanged(int a1, unsigned int *a2, const char **a3, int a4)
{
  unsigned int *v4; // r6@1
  unsigned int v5; // r4@1
  int v6; // r8@1
  Social::Events::EventManager *v7; // r9@1
  const char **v8; // r5@1
  void *v9; // r0@1
  void *v10; // r0@2
  int v11; // r5@3
  void *v12; // r0@6
  unsigned int v13; // r4@7
  void *v14; // r0@7
  void *v15; // r0@8
  void *v21; // r0@9
  int i; // r4@10
  unsigned int *v23; // r2@12
  signed int v24; // r1@14
  unsigned int *v25; // r2@16
  signed int v26; // r1@18
  void *v27; // r0@28
  void *v28; // r0@29
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  unsigned int *v32; // r2@36
  signed int v33; // r1@38
  unsigned int *v34; // r2@40
  signed int v35; // r1@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  unsigned int *v38; // r2@48
  signed int v39; // r1@50
  unsigned int *v40; // r2@52
  signed int v41; // r1@54
  int v42; // [sp+8h] [bp-F8h]@12
  int v43; // [sp+Ch] [bp-F4h]@16
  double v44; // [sp+10h] [bp-F0h]@9
  int v45; // [sp+1Ch] [bp-E4h]@9
  int v46; // [sp+24h] [bp-DCh]@7
  int v47; // [sp+28h] [bp-D8h]@7
  int v48; // [sp+30h] [bp-D0h]@7
  void *ptr; // [sp+44h] [bp-BCh]@3
  int v50; // [sp+5Ch] [bp-A4h]@4
  int v51; // [sp+64h] [bp-9Ch]@3
  char v52; // [sp+68h] [bp-98h]@3
  int v53; // [sp+78h] [bp-88h]@7
  int v54; // [sp+B4h] [bp-4Ch]@1
  int v55; // [sp+B8h] [bp-48h]@1
  int v56; // [sp+C0h] [bp-40h]@1
  char v57; // [sp+D0h] [bp-30h]@7

  v4 = a2;
  v5 = *a2;
  v6 = a4;
  v7 = *(Social::Events::EventManager **)(a1 + 4);
  v8 = a3;
  sub_21E94B4((void **)&v54, "ScreenName");
  Social::Events::EventManager::setPlayerGlobalProperty<std::string>(&v55, (int)v7, v5, (int **)&v54, v8);
  Json::Value::~Value((Json::Value *)&v56);
  v9 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v54 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *v4;
  sub_21E94B4((void **)&v51, "ScreenChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, *v4);
  Social::Events::Event::Event((int)&v52, v11, &v51, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v50 != ptr )
    operator delete(ptr);
  v12 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v51 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *v4;
  sub_21E94B4((void **)&v46, "ScreenName");
  Social::Events::EventManager::getPlayerGlobalProperty((int)&v47, (int)v7, v13, &v46);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
    (int)&v57,
    (unsigned __int64 *)&v53,
    &v47,
    (int)&v47);
  Json::Value::~Value((Json::Value *)&v48);
  v14 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v47 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v46 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v45, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x100+var_F0]
  Social::Events::Event::addProperty<double>((int)&v52, &v45, (int)&v44);
  v21 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v45 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  for ( i = *(_DWORD *)(v6 + 8); i; i = *(_DWORD *)i )
    sub_21E8AF4(&v43, (int *)(i + 4));
    sub_21E8AF4(&v42, (int *)(i + 8));
    Social::Events::Event::addProperty<std::string>((int)&v52, &v43, (const char **)&v42);
    v27 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      }
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v43 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
  Social::Events::EventManager::recordEvent((int)v7);
  return Social::Events::Event::~Event((int)&v52);
}


int __fastcall MinecraftEventing::fireEventPlayerDied(int result, Player *a2, int a3, int a4)
{
  int v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r5@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  int v16; // [sp+Ch] [bp-94h]@9
  int v17; // [sp+14h] [bp-8Ch]@8
  void *ptr; // [sp+18h] [bp-88h]@4
  int v19; // [sp+30h] [bp-70h]@5
  int v20; // [sp+38h] [bp-68h]@4
  char v21; // [sp+3Ch] [bp-64h]@4
  int v22; // [sp+84h] [bp-1Ch]@1
  Player *v23; // [sp+88h] [bp-18h]@1

  v4 = result;
  v22 = a3;
  v23 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v20, "PlayerDied");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v21, v6, &v20, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v19 != ptr )
          operator delete(ptr);
        v7 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v20 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v17, "Cause");
        Social::Events::Event::addProperty<int>((int)&v21, &v17, &v22);
        v8 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v17 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v16, "KillerEntity");
        Social::Events::Event::addProperty<int>((int)&v21, &v16, (int *)&v23);
        v9 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v16 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v21);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPlayerMessageChat(int a1, const char **a2, const char **a3)
{
  const char **v3; // r5@1
  const char **v4; // r4@1
  int v5; // r6@1
  void **v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+Ch] [bp-2Ch]@1
  int v14; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v6 = sub_21E94B4((void **)&v13, "chat");
  MinecraftEventing::fireEventPlayerMessage(v5, v3, (const char **)&v14, v4, (const char **)v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall MinecraftEventing::fireEventPatternRemoved(MinecraftEventing *this, Player *a2, int a3, int a4, int a5, int a6, int a7)
{
  MinecraftEventing *v7; // r5@1
  int result; // r0@1
  Social::Events::EventManager *v9; // r4@4
  int v10; // r5@4
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25
  unsigned int *v23; // r2@27
  signed int v24; // r1@29
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  int v29; // [sp+8h] [bp-B8h]@12
  int v30; // [sp+10h] [bp-B0h]@11
  int v31; // [sp+18h] [bp-A8h]@10
  int v32; // [sp+20h] [bp-A0h]@9
  int v33; // [sp+28h] [bp-98h]@8
  void *ptr; // [sp+2Ch] [bp-94h]@4
  int v35; // [sp+44h] [bp-7Ch]@5
  int v36; // [sp+4Ch] [bp-74h]@4
  char v37; // [sp+50h] [bp-70h]@4
  int v38; // [sp+98h] [bp-28h]@1
  int v39; // [sp+9Ch] [bp-24h]@1
  int v40; // [sp+A0h] [bp-20h]@1
  int v41; // [sp+A4h] [bp-1Ch]@1
  Player *v42; // [sp+A8h] [bp-18h]@1

  v7 = this;
  result = a6;
  v42 = a2;
  v40 = a4;
  v41 = a3;
  v38 = a6;
  v39 = a5;
  if ( v7 )
  {
    result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v7 + 1408))(v7);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v7 + 1440))(v7);
      if ( result )
      {
        v9 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v7 + 1440))(v7)
                                              + 4);
        v10 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v7 + 1444))(v7);
        sub_21E94B4((void **)&v36, "PatternRemoved");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v9, v10);
        Social::Events::Event::Event((int)&v37, v10, &v36, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v35 != ptr )
          operator delete(ptr);
        v11 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v36 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        sub_21E94B4((void **)&v33, "ItemId");
        Social::Events::Event::addProperty<int>((int)&v37, &v33, (int *)&v42);
        v12 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v33 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v32, "ItemAux");
        Social::Events::Event::addProperty<int>((int)&v37, &v32, &v41);
        v13 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v32 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v31, "LayerIndex");
        Social::Events::Event::addProperty<int>((int)&v37, &v31, &v40);
        v14 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v31 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        sub_21E94B4((void **)&v30, "PatternId");
        Social::Events::Event::addProperty<int>((int)&v37, &v30, &v39);
        v15 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v30 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v29, "PatternColor");
        Social::Events::Event::addProperty<int>((int)&v37, &v29, &v38);
        v16 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v29 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        Social::Events::EventManager::recordEvent((int)v9);
        result = Social::Events::Event::~Event((int)&v37);
      }
    }
  }
  return result;
}


char *__fastcall MinecraftEventing::getPlayerSessionId(MinecraftEventing *this)
{
  return (char *)this + 28;
}


int __fastcall MinecraftEventing::fireEventUgcDownloadStarted(int a1, const char **a2)
{
  const char **v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  int v20; // [sp+Ch] [bp-9Ch]@6
  double v21; // [sp+10h] [bp-98h]@5
  int v22; // [sp+20h] [bp-88h]@5
  void *ptr; // [sp+24h] [bp-84h]@1
  int v24; // [sp+3Ch] [bp-6Ch]@2
  int v25; // [sp+44h] [bp-64h]@1
  char v26; // [sp+48h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v25, "UgcDownloadStarted");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v26, v4, &v25, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v24 != ptr )
    operator delete(ptr);
  v5 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v22, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xA8+var_98]
  Social::Events::Event::addProperty<double>((int)&v26, &v22, (int)&v21);
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v22 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v20, "UgcProductId");
  Social::Events::Event::addProperty<std::string>((int)&v26, &v20, v2);
  v12 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v26);
}


void __fastcall MinecraftEventing::fireEventPlayerMessageChat(int a1, const char **a2, const char **a3)
{
  MinecraftEventing::fireEventPlayerMessageChat(a1, a2, a3);
}


int __fastcall MinecraftEventing::fireEventPortfolioExported(MinecraftEventing *this, int a2, int a3)
{
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r5@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+Ch] [bp-94h]@6
  int v16; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v18; // [sp+30h] [bp-70h]@2
  int v19; // [sp+38h] [bp-68h]@1
  char v20; // [sp+3Ch] [bp-64h]@1
  int v21; // [sp+84h] [bp-1Ch]@1
  int v22; // [sp+88h] [bp-18h]@1

  v21 = a3;
  v22 = a2;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v19, "PortfolioExported");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v20, v4, &v19, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v18 != ptr )
    operator delete(ptr);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "ImageCount");
  Social::Events::Event::addProperty<int>((int)&v20, &v16, &v22);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v15, "CaptionedImageCount");
  Social::Events::Event::addProperty<int>((int)&v20, &v15, &v21);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v20);
}


int __fastcall MinecraftEventing::fireEventItemDestroyed(int result, Player *a2, const ItemInstance *a3, unsigned int a4)
{
  int v4; // r6@1
  Player *v5; // r5@1
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int v20; // [sp+Ch] [bp-A4h]@10
  __int16 v21; // [sp+12h] [bp-9Eh]@9
  int v22; // [sp+18h] [bp-98h]@9
  int v23; // [sp+1Ch] [bp-94h]@8
  int v24; // [sp+24h] [bp-8Ch]@8
  void *ptr; // [sp+28h] [bp-88h]@4
  int v26; // [sp+40h] [bp-70h]@5
  int v27; // [sp+48h] [bp-68h]@4
  char v28; // [sp+4Ch] [bp-64h]@4
  const ItemInstance *v29; // [sp+94h] [bp-1Ch]@1

  v4 = result;
  v5 = a2;
  v29 = a3;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v27, "ItemDestroyed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v28, v7, &v27, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v26 != ptr )
          operator delete(ptr);
        v8 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v27 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        sub_21E94B4((void **)&v24, "Type");
        v23 = ItemInstance::getId(v5);
        Social::Events::Event::addProperty<int>((int)&v28, &v24, &v23);
        v9 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v24 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v22, "AuxType");
        v21 = ItemInstance::getAuxValue(v5);
        Social::Events::Event::addProperty<short>((int)&v28, &v22, &v21);
        v10 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v22 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v20, "DestructionMethodType");
        Social::Events::Event::addProperty<unsigned int>((int)&v28, &v20, (unsigned int *)&v29);
        v11 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v28);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventTreatmentsSet(int a1, _QWORD *a2)
{
  MinecraftEventing::fireEventTreatmentsSet(a1, a2);
}


int __fastcall MinecraftEventing::fireEventSpecialMobBuilt(int result, Player *a2, Mob *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r6@4
  void *v7; // r0@7
  int v8; // r0@8
  void *v9; // r0@8
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  int v14; // [sp+8h] [bp-90h]@8
  int v15; // [sp+10h] [bp-88h]@8
  void *ptr; // [sp+14h] [bp-84h]@4
  int v17; // [sp+2Ch] [bp-6Ch]@5
  int v18; // [sp+34h] [bp-64h]@4
  char v19; // [sp+38h] [bp-60h]@4

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v18, "SpecialMobBuilt");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v19, v6, &v18, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v17 != ptr )
          operator delete(ptr);
        v7 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v18 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v15, "Type");
        v8 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v4 + 488))(v4);
        v14 = EntityClassTree::getEntityTypeIdLegacy(v8);
        Social::Events::Event::addProperty<int>((int)&v19, &v15, &v14);
        v9 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v15 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v19);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventGameTypeChanged(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing::fireEventGameTypeChanged(this, a2);
}


int __fastcall MinecraftEventing::fireEventPlayerSaved(int result, Player *a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@4
  int v4; // r5@4
  void *v5; // r0@7
  unsigned int *v6; // r2@10
  signed int v7; // r1@12
  void *ptr; // [sp+8h] [bp-80h]@4
  int v9; // [sp+20h] [bp-68h]@5
  int v10; // [sp+28h] [bp-60h]@4
  char v11; // [sp+2Ch] [bp-5Ch]@4

  v2 = result;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v3 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v10, "PlayerSaved");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
        Social::Events::Event::Event((int)&v11, v4, &v10, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v9 != ptr )
          operator delete(ptr);
        v5 = (void *)(v10 - 12);
        if ( (int *)(v10 - 12) != &dword_28898C0 )
        {
          v6 = (unsigned int *)(v10 - 4);
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
            j_j_j_j__ZdlPv_9(v5);
        }
        Social::Events::EventManager::recordEvent((int)v3);
        result = Social::Events::Event::~Event((int)&v11);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventMobKilled(int result, Player *a2, Entity *a3, Mob *a4, unsigned int a5)
{
  Player *v5; // r5@1
  Entity *v6; // r4@1
  Player *v7; // r6@1
  int v8; // r0@6
  int v9; // r0@9
  int v10; // r0@9
  int v11; // r0@9
  int v12; // r0@9
  Social::Events::EventManager *v13; // r8@10
  int v14; // r7@10
  void *v15; // r0@13
  int v16; // r0@14
  void *v17; // r0@14
  void *v18; // r0@15
  void *v19; // r0@16
  void *v20; // r0@17
  void *v21; // r0@18
  void *v22; // r0@19
  void *v23; // r0@20
  void *v24; // r0@21
  void *v25; // r0@22
  void *v26; // r0@23
  void *v27; // r0@24
  void *v28; // r0@25
  void *v29; // r0@26
  unsigned int *v30; // r2@58
  signed int v31; // r1@60
  unsigned int *v32; // r2@62
  signed int v33; // r1@64
  unsigned int *v34; // r2@66
  signed int v35; // r1@68
  unsigned int *v36; // r2@70
  signed int v37; // r1@72
  unsigned int *v38; // r2@74
  signed int v39; // r1@76
  unsigned int *v40; // r2@78
  signed int v41; // r1@80
  unsigned int *v42; // r2@82
  signed int v43; // r1@84
  unsigned int *v44; // r2@86
  signed int v45; // r1@88
  unsigned int *v46; // r2@90
  signed int v47; // r1@92
  unsigned int *v48; // r2@94
  signed int v49; // r1@96
  unsigned int *v50; // r2@98
  signed int v51; // r1@100
  unsigned int *v52; // r2@102
  signed int v53; // r1@104
  unsigned int *v54; // r2@106
  signed int v55; // r1@108
  unsigned int *v56; // r2@110
  signed int v57; // r1@112
  char v58; // [sp+7h] [bp-289h]@26
  int v59; // [sp+Ch] [bp-284h]@26
  int v60; // [sp+10h] [bp-280h]@25
  int v61; // [sp+18h] [bp-278h]@25
  int v62; // [sp+1Ch] [bp-274h]@24
  int v63; // [sp+24h] [bp-26Ch]@24
  int v64; // [sp+28h] [bp-268h]@23
  int v65; // [sp+30h] [bp-260h]@23
  int v66; // [sp+34h] [bp-25Ch]@22
  int v67; // [sp+3Ch] [bp-254h]@22
  int v68; // [sp+40h] [bp-250h]@21
  int v69; // [sp+48h] [bp-248h]@21
  int v70; // [sp+4Ch] [bp-244h]@20
  int v71; // [sp+54h] [bp-23Ch]@20
  int v72; // [sp+58h] [bp-238h]@19
  int v73; // [sp+60h] [bp-230h]@19
  int v74; // [sp+64h] [bp-22Ch]@18
  int v75; // [sp+6Ch] [bp-224h]@18
  char v76; // [sp+73h] [bp-21Dh]@17
  int v77; // [sp+78h] [bp-218h]@17
  int v78; // [sp+7Ch] [bp-214h]@16
  int v79; // [sp+84h] [bp-20Ch]@16
  int v80; // [sp+8Ch] [bp-204h]@15
  int v81; // [sp+90h] [bp-200h]@14
  int v82; // [sp+98h] [bp-1F8h]@14
  void *ptr; // [sp+9Ch] [bp-1F4h]@10
  int v84; // [sp+B4h] [bp-1DCh]@11
  int v85; // [sp+BCh] [bp-1D4h]@10
  char v86; // [sp+C0h] [bp-1D0h]@10
  char v87; // [sp+108h] [bp-188h]@7
  int v88; // [sp+110h] [bp-180h]@31
  void *v89; // [sp+12Ch] [bp-164h]@29
  void *v90; // [sp+13Ch] [bp-154h]@27
  char v91; // [sp+150h] [bp-140h]@7
  int v92; // [sp+158h] [bp-138h]@37
  void *v93; // [sp+174h] [bp-11Ch]@35
  void *v94; // [sp+184h] [bp-10Ch]@33
  char v95; // [sp+198h] [bp-F8h]@7
  int v96; // [sp+1A0h] [bp-F0h]@43
  void *v97; // [sp+1BCh] [bp-D4h]@41
  void *v98; // [sp+1CCh] [bp-C4h]@39
  char v99; // [sp+1E0h] [bp-B0h]@7
  int v100; // [sp+1E8h] [bp-A8h]@49
  void *v101; // [sp+204h] [bp-8Ch]@47
  void *v102; // [sp+214h] [bp-7Ch]@45
  char v103; // [sp+228h] [bp-68h]@4
  int v104; // [sp+230h] [bp-60h]@55
  void *v105; // [sp+24Ch] [bp-44h]@53
  void *v106; // [sp+25Ch] [bp-34h]@51
  Mob *v107; // [sp+270h] [bp-20h]@1

  v5 = (Player *)result;
  v6 = a3;
  v7 = a2;
  v107 = a4;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        ItemInstance::ItemInstance((int)&v103);
        if ( v7 && Entity::hasCategory((int)v7, 2) == 1 )
        {
          v8 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v7 + 908))(v7);
          ItemInstance::operator=((int)&v103, v8);
        }
        ItemInstance::ItemInstance((int)&v99);
        ItemInstance::ItemInstance((int)&v95);
        ItemInstance::ItemInstance((int)&v91);
        ItemInstance::ItemInstance((int)&v87);
        if ( v7 && Entity::hasCategory((int)v7, 1) == 1 )
          v9 = (*(int (__fastcall **)(Player *, _DWORD))(*(_DWORD *)v7 + 1028))(v7, 0);
          ItemInstance::operator=((int)&v99, v9);
          v10 = (*(int (__fastcall **)(Player *, signed int))(*(_DWORD *)v7 + 1028))(v7, 3);
          ItemInstance::operator=((int)&v95, v10);
          v11 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v7 + 1028))(v7, 2);
          ItemInstance::operator=((int)&v91, v11);
          v12 = (*(int (__fastcall **)(_DWORD, signed int))(*(_DWORD *)v7 + 1028))(v7, 1);
          ItemInstance::operator=((int)&v87, v12);
        v13 = *(Social::Events::EventManager **)((*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v14 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v85, "MobKilled");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v13, v14);
        Social::Events::Event::Event((int)&v86, v14, &v85, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v84 != ptr )
          operator delete(ptr);
        v15 = (void *)(v85 - 12);
        if ( (int *)(v85 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v85 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
          }
          else
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v82, "MobType");
        v16 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v6 + 488))(v6);
        v81 = EntityClassTree::getEntityTypeIdLegacy(v16);
        Social::Events::Event::addProperty<int>((int)&v86, &v82, &v81);
        v17 = (void *)(v82 - 12);
        if ( (int *)(v82 - 12) != &dword_28898C0 )
          v32 = (unsigned int *)(v82 - 4);
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        sub_21E94B4((void **)&v80, "KillMethodType");
        Social::Events::Event::addProperty<unsigned int>((int)&v86, &v80, (unsigned int *)&v107);
        v18 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v80 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        sub_21E94B4((void **)&v79, "WeaponType");
        v78 = ItemInstance::getId((ItemInstance *)&v103);
        Social::Events::Event::addProperty<int>((int)&v86, &v79, &v78);
        v19 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v79 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v77, "IsMonster");
        v76 = Entity::hasCategory((int)v6, 4);
        Social::Events::Event::addProperty<bool>((int)&v86, &v77, (bool *)&v76);
        v20 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v77 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E94B4((void **)&v75, "ArmorHeadId");
        v74 = ItemInstance::getId((ItemInstance *)&v99);
        Social::Events::Event::addProperty<int>((int)&v86, &v75, &v74);
        v21 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v75 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        sub_21E94B4((void **)&v73, "ArmorHeadAuxType");
        v72 = ItemInstance::getAuxValue((ItemInstance *)&v99);
        Social::Events::Event::addProperty<int>((int)&v86, &v73, &v72);
        v22 = (void *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v73 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        sub_21E94B4((void **)&v71, "ArmorFeetId");
        v70 = ItemInstance::getId((ItemInstance *)&v95);
        Social::Events::Event::addProperty<int>((int)&v86, &v71, &v70);
        v23 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v71 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        sub_21E94B4((void **)&v69, "ArmorFeetAuxType");
        v68 = ItemInstance::getAuxValue((ItemInstance *)&v95);
        Social::Events::Event::addProperty<int>((int)&v86, &v69, &v68);
        v24 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v69 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        sub_21E94B4((void **)&v67, "ArmorLegsId");
        v66 = ItemInstance::getId((ItemInstance *)&v91);
        Social::Events::Event::addProperty<int>((int)&v86, &v67, &v66);
        v25 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v67 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        sub_21E94B4((void **)&v65, "ArmorLegsAuxType");
        v64 = ItemInstance::getAuxValue((ItemInstance *)&v91);
        Social::Events::Event::addProperty<int>((int)&v86, &v65, &v64);
        v26 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v65 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        sub_21E94B4((void **)&v63, "ArmorTorsoId");
        v62 = ItemInstance::getId((ItemInstance *)&v87);
        Social::Events::Event::addProperty<int>((int)&v86, &v63, &v62);
        v27 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v52 = (unsigned int *)(v63 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        sub_21E94B4((void **)&v61, "ArmorTorsoAuxType");
        v60 = ItemInstance::getAuxValue((ItemInstance *)&v87);
        Social::Events::Event::addProperty<int>((int)&v86, &v61, &v60);
        v28 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v54 = (unsigned int *)(v61 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        sub_21E94B4((void **)&v59, "PlayerIsHiddenFrom");
        v58 = Player::isHiddenFrom(v5, v6);
        Social::Events::Event::addProperty<bool>((int)&v86, &v59, (bool *)&v58);
        v29 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v59 - 4);
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        Social::Events::EventManager::recordEvent((int)v13);
        Social::Events::Event::~Event((int)&v86);
        if ( v90 )
          operator delete(v90);
        if ( v89 )
          operator delete(v89);
        if ( v88 )
          (*(void (**)(void))(*(_DWORD *)v88 + 4))();
        if ( v94 )
          operator delete(v94);
        if ( v93 )
          operator delete(v93);
        if ( v92 )
          (*(void (**)(void))(*(_DWORD *)v92 + 4))();
        if ( v98 )
          operator delete(v98);
        if ( v97 )
          operator delete(v97);
        if ( v96 )
          (*(void (**)(void))(*(_DWORD *)v96 + 4))();
        if ( v102 )
          operator delete(v102);
        if ( v101 )
          operator delete(v101);
        if ( v100 )
          (*(void (**)(void))(*(_DWORD *)v100 + 4))();
        if ( v106 )
          operator delete(v106);
        if ( v105 )
          operator delete(v105);
        result = v104;
        if ( v104 )
          result = (*(int (**)(void))(*(_DWORD *)v104 + 4))();
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventBehaviorErrored(int result, const char **a2)
{
  int v2; // r6@1
  const char **v3; // r5@1
  Social::Events::EventManager *v4; // r4@4
  int v5; // r6@4
  void *v6; // r0@7
  void *v7; // r0@8
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+8h] [bp-88h]@8
  void *ptr; // [sp+Ch] [bp-84h]@4
  int v14; // [sp+24h] [bp-6Ch]@5
  int v15; // [sp+2Ch] [bp-64h]@4
  char v16; // [sp+30h] [bp-60h]@4
  char v17; // [sp+38h] [bp-58h]@8

  v2 = result;
  v3 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v4 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v15, "BehaviorErrored");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
        Social::Events::Event::Event((int)&v16, v5, &v15, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v14 != ptr )
          operator delete(ptr);
        v6 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v15 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        v17 = 1;
        sub_21E94B4((void **)&v12, "errorMessage");
        Social::Events::Event::addProperty<std::string>((int)&v16, &v12, v3);
        v7 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v12 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        Social::Events::EventManager::recordEvent((int)v4);
        result = Social::Events::Event::~Event((int)&v16);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventItemEnchanted(int result, Player *a2, const ItemInstance *a3, int a4, unsigned __int64 a5)
{
  int v5; // r6@1
  Player *v6; // r5@1
  Social::Events::EventManager *v7; // r4@4
  int v8; // r6@4
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  __int16 v18; // [sp+6h] [bp-9Ah]@9
  int v19; // [sp+Ch] [bp-94h]@9
  int v20; // [sp+10h] [bp-90h]@8
  int v21; // [sp+18h] [bp-88h]@8
  void *ptr; // [sp+1Ch] [bp-84h]@4
  int v23; // [sp+34h] [bp-6Ch]@5
  int v24; // [sp+3Ch] [bp-64h]@4
  char v25; // [sp+40h] [bp-60h]@4

  v5 = result;
  v6 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v7 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v24, "ItemEnchanted");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
        Social::Events::Event::Event((int)&v25, v8, &v24, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v23 != ptr )
          operator delete(ptr);
        v9 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v24 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        sub_21E94B4((void **)&v21, "Type");
        v20 = ItemInstance::getId(v6);
        Social::Events::Event::addProperty<int>((int)&v25, &v21, &v20);
        v10 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v21 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v19, "AuxType");
        v18 = ItemInstance::getAuxValue(v6);
        Social::Events::Event::addProperty<short>((int)&v25, &v19, &v18);
        v11 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v19 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        Social::Events::EventManager::recordEvent((int)v7);
        result = Social::Events::Event::~Event((int)&v25);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireRemixAccountCreationEvent(int a1, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-90h]@5
  int v13; // [sp+10h] [bp-88h]@5
  void *ptr; // [sp+14h] [bp-84h]@1
  int v15; // [sp+2Ch] [bp-6Ch]@2
  int v16; // [sp+34h] [bp-64h]@1
  char v17; // [sp+38h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v16, "RemixAccountCreation");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v17, v4, &v16, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v15 != ptr )
    operator delete(ptr);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v13, "Outcome");
  v12 = v2;
  Social::Events::Event::addProperty<int>((int)&v17, &v13, &v12);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v17);
}


int __fastcall MinecraftEventing::fireEventOptionsUpdated(int a1, int a2, void *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, char a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34)
{
  return MinecraftEventing::fireEventOptionsUpdated(
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
           a30,
           a31,
           a32,
           a33,
           a34);
}


int __fastcall MinecraftEventing::fireEventCaravanChanged(MinecraftEventing *this, Mob *a2, int a3)
{
  MinecraftEventing *v3; // r5@1
  BlockSource *v4; // r0@1
  int v5; // r0@1
  int result; // r0@1
  int v7; // r6@1
  Social::Events::EventManager *v8; // r4@5
  int v9; // r6@5
  void *v10; // r0@8
  int v11; // r0@9
  void *v12; // r0@9
  void *v13; // r0@10
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  int v20; // [sp+Ch] [bp-A4h]@10
  int v21; // [sp+10h] [bp-A0h]@9
  int v22; // [sp+18h] [bp-98h]@9
  void *ptr; // [sp+1Ch] [bp-94h]@5
  int v24; // [sp+34h] [bp-7Ch]@6
  int v25; // [sp+3Ch] [bp-74h]@5
  char v26; // [sp+40h] [bp-70h]@5
  unsigned int v27; // [sp+88h] [bp-28h]@1
  unsigned int v28; // [sp+8Ch] [bp-24h]@1
  Mob *v29; // [sp+94h] [bp-1Ch]@1

  v3 = this;
  v29 = a2;
  Entity::getLeashHolder((Entity *)&v27, (int)this);
  v4 = (BlockSource *)Entity::getRegion(v3);
  v5 = BlockSource::getLevel(v4);
  result = Level::fetchEntity(v5, 0, v27, v28, 0);
  v7 = result;
  if ( result )
  {
    result = Entity::hasCategory(result, 1);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1408))(v7);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1440))(v7);
        if ( result )
        {
          v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1440))(v7) + 4);
          v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1444))(v7);
          sub_21E94B4((void **)&v25, "CaravanChanged");
          MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
          Social::Events::Event::Event((int)&v26, v9, &v25, (int)&ptr, 0);
          std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
          if ( ptr && &v24 != ptr )
            operator delete(ptr);
          v10 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
          {
            v14 = (unsigned int *)(v25 - 4);
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
              j_j_j_j__ZdlPv_9(v10);
          }
          sub_21E94B4((void **)&v22, "MobType");
          v11 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 488))(v3);
          v21 = EntityClassTree::getEntityTypeIdLegacy(v11);
          Social::Events::Event::addProperty<int>((int)&v26, &v22, &v21);
          v12 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != &dword_28898C0 )
            v16 = (unsigned int *)(v22 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
          sub_21E94B4((void **)&v20, "CaravanSize");
          Social::Events::Event::addProperty<int>((int)&v26, &v20, (int *)&v29);
          v13 = (void *)(v20 - 12);
          if ( (int *)(v20 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v20 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          Social::Events::EventManager::recordEvent((int)v8);
          result = Social::Events::Event::~Event((int)&v26);
        }
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPotionBrewed(int result, Player *a2, const ItemInstance *a3, unsigned int a4)
{
  int v4; // r6@1
  Player *v5; // r5@1
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int v20; // [sp+Ch] [bp-A4h]@10
  __int16 v21; // [sp+12h] [bp-9Eh]@9
  int v22; // [sp+18h] [bp-98h]@9
  int v23; // [sp+1Ch] [bp-94h]@8
  int v24; // [sp+24h] [bp-8Ch]@8
  void *ptr; // [sp+28h] [bp-88h]@4
  int v26; // [sp+40h] [bp-70h]@5
  int v27; // [sp+48h] [bp-68h]@4
  char v28; // [sp+4Ch] [bp-64h]@4
  const ItemInstance *v29; // [sp+94h] [bp-1Ch]@1

  v4 = result;
  v5 = a2;
  v29 = a3;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v27, "PotionBrewed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v28, v7, &v27, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v26 != ptr )
          operator delete(ptr);
        v8 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v27 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        sub_21E94B4((void **)&v24, "Type");
        v23 = ItemInstance::getId(v5);
        Social::Events::Event::addProperty<int>((int)&v28, &v24, &v23);
        v9 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v24 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v22, "AuxType");
        v21 = ItemInstance::getAuxValue(v5);
        Social::Events::Event::addProperty<short>((int)&v28, &v22, &v21);
        v10 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v22 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v20, "Count");
        Social::Events::Event::addMeasurement<unsigned int>((int)&v28, &v20, 0, (unsigned int *)&v29);
        v11 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v28);
      }
    }
  }
  return result;
}


Social::Events::EventManager *__fastcall MinecraftEventing::tick(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r4@1
  unsigned __int64 v2; // r0@1
  Social::Events::EventManager *result; // r0@3

  v1 = this;
  v2 = *((_QWORD *)this + 2) + 1LL;
  *((_QWORD *)v1 + 2) = v2;
  if ( !(v2 % 0x4B0) )
    MinecraftEventing::fireEventHeartbeat(v1);
  result = (Social::Events::EventManager *)*((_DWORD *)v1 + 1);
  if ( result )
    result = (Social::Events::EventManager *)j_j_j__ZN6Social6Events12EventManager4tickEv(result);
  return result;
}


int __fastcall MinecraftEventing::fireEventBlockPlacedByCommand(MinecraftEventing *this, const FullBlock *a2, int a3)
{
  const FullBlock *v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  int v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  int v26; // [sp+4h] [bp-BCh]@9
  int v27; // [sp+Ch] [bp-B4h]@9
  int v28; // [sp+10h] [bp-B0h]@8
  int v29; // [sp+18h] [bp-A8h]@8
  int v30; // [sp+1Ch] [bp-A4h]@7
  int v31; // [sp+24h] [bp-9Ch]@7
  int v32; // [sp+2Ch] [bp-94h]@6
  int v33; // [sp+34h] [bp-8Ch]@5
  void *ptr; // [sp+38h] [bp-88h]@1
  int v35; // [sp+50h] [bp-70h]@2
  int v36; // [sp+58h] [bp-68h]@1
  char v37; // [sp+5Ch] [bp-64h]@1
  char v38; // [sp+64h] [bp-5Ch]@5

  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = a3;
  v6 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v36, "BlockPlaced");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v37, v6, &v36, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v35 != ptr )
    operator delete(ptr);
  v7 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v36 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v38 = 1;
  sub_21E94B4((void **)&v33, "Type");
  Social::Events::Event::addProperty<unsigned char>((int)&v37, &v33, v3);
  v8 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v33 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v32, "AuxType");
  Social::Events::Event::addProperty<unsigned char>((int)&v37, &v32, (_BYTE *)v3 + 1);
  v9 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v32 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v31, "ToolItemType");
  v30 = -1;
  Social::Events::Event::addProperty<int>((int)&v37, &v31, &v30);
  v10 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v29, "PlacementMethod");
  v28 = 1;
  Social::Events::Event::addProperty<int>((int)&v37, &v29, &v28);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v29 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v27, "Count");
  v26 = v5;
  Social::Events::Event::addMeasurement<unsigned int>((int)&v37, &v27, 0, (unsigned int *)&v26);
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v27 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v37);
}


int __fastcall MinecraftEventing::fireEventTradeCompleted(int result, Player *a2, const ItemInstance *a3, const ItemInstance *a4, const ItemInstance *a5)
{
  int v5; // r4@1
  const ItemInstance *v6; // r8@1
  const ItemInstance *v7; // r6@1
  Player *v8; // r7@1
  Social::Events::EventManager *v9; // r9@4
  int v10; // r4@4
  void *v11; // r0@7
  int v12; // r4@9
  void *v13; // r0@15
  void *v14; // r0@16
  void *v15; // r0@17
  void *v16; // r0@18
  void *v17; // r0@19
  void *v18; // r0@20
  __int64 v19; // r2@21
  void *v20; // r0@21
  int v21; // r8@22
  int v22; // r2@23
  signed int v23; // r1@25
  int v24; // r2@27
  signed int v25; // r1@29
  __int64 v26; // r2@39
  EnchantmentInstance *v27; // r10@40
  void *v28; // r0@42
  void *v29; // r0@43
  void *v30; // r0@45
  void *v31; // r0@46
  unsigned int *v32; // r2@57
  signed int v33; // r1@59
  unsigned int *v34; // r2@61
  signed int v35; // r1@63
  unsigned int *v36; // r2@65
  signed int v37; // r1@67
  unsigned int *v38; // r2@69
  signed int v39; // r1@71
  unsigned int *v40; // r2@73
  signed int v41; // r1@75
  unsigned int *v42; // r2@77
  signed int v43; // r1@79
  unsigned int *v44; // r2@81
  signed int v45; // r1@83
  int v46; // r2@85
  signed int v47; // r1@87
  unsigned int *v48; // r2@121
  signed int v49; // r1@123
  unsigned int *v50; // r2@125
  signed int v51; // r1@127
  int v52; // [sp+14h] [bp-14Ch]@46
  int v53; // [sp+1Ch] [bp-144h]@46
  int v54; // [sp+20h] [bp-140h]@45
  int v55; // [sp+28h] [bp-138h]@45
  int v56; // [sp+2Ch] [bp-134h]@41
  int v57; // [sp+30h] [bp-130h]@41
  int v58; // [sp+34h] [bp-12Ch]@40
  int v59; // [sp+38h] [bp-128h]@40
  int v60; // [sp+3Ch] [bp-124h]@23
  int v61; // [sp+40h] [bp-120h]@27
  int v62; // [sp+44h] [bp-11Ch]@21
  int v63; // [sp+4Ch] [bp-114h]@21
  void *v64; // [sp+50h] [bp-110h]@21
  int v65; // [sp+54h] [bp-10Ch]@21
  char v66; // [sp+5Ch] [bp-104h]@21
  void *v67; // [sp+60h] [bp-100h]@53
  void *v68; // [sp+6Ch] [bp-F4h]@51
  void *v69; // [sp+78h] [bp-E8h]@49
  __int16 v70; // [sp+86h] [bp-DAh]@20
  int v71; // [sp+8Ch] [bp-D4h]@20
  int v72; // [sp+90h] [bp-D0h]@19
  int v73; // [sp+98h] [bp-C8h]@19
  __int16 v74; // [sp+9Eh] [bp-C2h]@18
  int v75; // [sp+A4h] [bp-BCh]@18
  int v76; // [sp+A8h] [bp-B8h]@17
  int v77; // [sp+B0h] [bp-B0h]@17
  __int16 v78; // [sp+B6h] [bp-AAh]@16
  int v79; // [sp+BCh] [bp-A4h]@16
  int v80; // [sp+C0h] [bp-A0h]@15
  int v81; // [sp+C8h] [bp-98h]@15
  void *ptr; // [sp+CCh] [bp-94h]@4
  int v83; // [sp+E4h] [bp-7Ch]@5
  int v84; // [sp+ECh] [bp-74h]@4
  char v85; // [sp+F0h] [bp-70h]@4
  char v86; // [sp+F8h] [bp-68h]@8

  v5 = result;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v9 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v84, "ItemTraded");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v9, v10);
        Social::Events::Event::Event((int)&v85, v10, &v84, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v83 != ptr )
          operator delete(ptr);
        v11 = (void *)(v84 - 12);
        if ( (int *)(v84 - 12) != &dword_28898C0 )
        {
          v32 = (unsigned int *)(v84 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          }
          else
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        }
        v86 = 1;
        if ( ItemInstance::getId(v8) == *(_WORD *)(Item::mEmerald + 18) )
          v12 = *((_BYTE *)v8 + 14);
        else
          v12 = 0;
        if ( ItemInstance::getId(v7) == *(_WORD *)(Item::mEmerald + 18) )
          v12 += *((_BYTE *)v7 + 14);
        if ( ItemInstance::getId(v6) == *(_WORD *)(Item::mEmerald + 18) )
          v12 += *((_BYTE *)v6 + 14);
        sub_21E94B4((void **)&v81, "ItemTypeA");
        v80 = ItemInstance::getId(v8);
        Social::Events::Event::addProperty<int>((int)&v85, &v81, &v80);
        v13 = (void *)(v81 - 12);
        if ( (int *)(v81 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v81 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v79, "ItemAuxTypeA");
        v78 = ItemInstance::getAuxValue(v8);
        Social::Events::Event::addProperty<short>((int)&v85, &v79, &v78);
        v14 = (void *)(v79 - 12);
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v79 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        sub_21E94B4((void **)&v77, "ItemTypeB");
        v76 = ItemInstance::getId(v7);
        Social::Events::Event::addProperty<int>((int)&v85, &v77, &v76);
        v15 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v77 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        sub_21E94B4((void **)&v75, "ItemAuxTypeB");
        v74 = ItemInstance::getAuxValue(v7);
        Social::Events::Event::addProperty<short>((int)&v85, &v75, &v74);
        v16 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v75 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        sub_21E94B4((void **)&v73, "ItemResult");
        v72 = ItemInstance::getId(v6);
        Social::Events::Event::addProperty<int>((int)&v85, &v73, &v72);
        v17 = (void *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v73 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        sub_21E94B4((void **)&v71, "ItemResultAux");
        v70 = ItemInstance::getAuxValue(v6);
        Social::Events::Event::addProperty<short>((int)&v85, &v71, &v70);
        v18 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v71 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        ItemInstance::getEnchantsFromUserData((ItemInstance *)&v66, (int)v6);
        ItemEnchants::getAllEnchants((ItemEnchants *)&v64, (int)&v66);
        sub_21E94B4((void **)&v63, "ItemResultEnchantCount");
        v62 = (v65 - (signed int)v64) >> 3;
        Social::Events::Event::addProperty<unsigned int>((int)&v85, &v63, (unsigned int *)&v62);
        v20 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v46 = v63 - 4;
            {
              v47 = __ldrex((unsigned int *)v19);
              HIDWORD(v19) = v47 - 1;
            }
            while ( __strex(v47 - 1, (unsigned int *)v19) );
            v47 = *(_DWORD *)v19;
            HIDWORD(v19) = *(_DWORD *)v19 - 1;
            *(_DWORD *)v19 = HIDWORD(v19);
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = 0;
        do
          LODWORD(v19) = v21 + 65;
          Util::format((Util *)&v61, "ItemResultEnchantType%c", v19);
          LODWORD(v26) = v21 + 65;
          Util::format((Util *)&v60, "ItemResultEnchantLevel%c", v26);
          if ( v21 >= (v65 - (signed int)v64) >> 3 )
            v57 = -1;
            Social::Events::Event::addProperty<int>((int)&v85, &v61, &v57);
            v56 = -1;
            Social::Events::Event::addProperty<int>((int)&v85, &v60, &v56);
            v27 = (EnchantmentInstance *)((char *)v64 + 8 * v21);
            v59 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)((char *)v64 + 8 * v21));
            Social::Events::Event::addProperty<unsigned int>((int)&v85, &v61, (unsigned int *)&v59);
            v58 = EnchantmentInstance::getEnchantLevel(v27);
            Social::Events::Event::addProperty<int>((int)&v85, &v60, &v58);
          v28 = (void *)(v60 - 12);
          if ( (int *)(v60 - 12) != &dword_28898C0 )
            v22 = v60 - 4;
            if ( &pthread_create )
              __dmb();
              do
              {
                v23 = __ldrex((unsigned int *)v19);
                HIDWORD(v19) = v23 - 1;
              }
              while ( __strex(v23 - 1, (unsigned int *)v19) );
            else
              v23 = *(_DWORD *)v19;
              HIDWORD(v19) = *(_DWORD *)v19 - 1;
              *(_DWORD *)v19 = HIDWORD(v19);
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          v29 = (void *)(v61 - 12);
          if ( (int *)(v61 - 12) != &dword_28898C0 )
            v24 = v61 - 4;
                v25 = __ldrex((unsigned int *)v19);
                HIDWORD(v19) = v25 - 1;
              while ( __strex(v25 - 1, (unsigned int *)v19) );
              v25 = *(_DWORD *)v19;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          ++v21;
        while ( v21 != 3 );
        sub_21E94B4((void **)&v55, "TradeCount");
        v54 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v85, &v55, 0, (unsigned int *)&v54);
        v30 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v48 = (unsigned int *)(v55 - 4);
              v49 = __ldrex(v48);
            while ( __strex(v49 - 1, v48) );
            v49 = (*v48)--;
          if ( v49 <= 0 )
            j_j_j_j__ZdlPv_9(v30);
        sub_21E94B4((void **)&v53, "EmeraldCount");
        v52 = v12;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v85, &v53, 0, (unsigned int *)&v52);
        v31 = (void *)(v53 - 12);
        if ( (int *)(v53 - 12) != &dword_28898C0 )
          v50 = (unsigned int *)(v53 - 4);
              v51 = __ldrex(v50);
            while ( __strex(v51 - 1, v50) );
            v51 = (*v50)--;
          if ( v51 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        Social::Events::EventManager::recordEvent((int)v9);
        if ( v64 )
          operator delete(v64);
        if ( v69 )
          operator delete(v69);
        if ( v68 )
          operator delete(v68);
        if ( v67 )
          operator delete(v67);
        result = Social::Events::Event::~Event((int)&v85);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPlayerLeave(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+8h] [bp-90h]@5
  int v16; // [sp+10h] [bp-88h]@5
  void *ptr; // [sp+14h] [bp-84h]@1
  int v18; // [sp+2Ch] [bp-6Ch]@2
  int v19; // [sp+34h] [bp-64h]@1
  char v20; // [sp+38h] [bp-60h]@1

  v2 = this;
  v3 = *(Social::Events::EventManager **)((*(int (**)(void))(*(_DWORD *)this + 1440))() + 4);
  v4 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) + 12);
  sub_21E94B4((void **)&v19, "PlayerLeave");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v20, v4, &v19, (int)&ptr, 1);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v18 != ptr )
    operator delete(ptr);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "PlayerId");
  mce::UUID::asString((mce::UUID *)&v15);
  Social::Events::Event::addProperty<std::string>((int)&v20, &v16, (const char **)&v15);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v20);
}


void __fastcall MinecraftEventing::fireEventPackImportedCompleted(int a1, int a2, PackManifest *a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  const char *v7; // r1@1
  PackManifest *v8; // r4@1
  void *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int v12; // [sp+14h] [bp-1Ch]@3

  v5 = a1;
  v6 = a2;
  v7 = "success";
  v8 = a3;
  if ( !a4 )
    v7 = "error";
  sub_21E94B4((void **)&v12, v7);
  MinecraftEventing::_fireEventPackImportStage(v5, v6, v8, (int)&v12, a5, 0, 0);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
}


int (**__fastcall MinecraftEventing::fireEventWorldGenerated(int a1, const char **a2, LevelSettings *a3, char a4))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v4; // r7@1
  LevelSettings *v5; // r6@1
  const char **v6; // r8@1
  int v7; // r0@2
  Social::Events::EventManager *v8; // r4@3
  unsigned int v9; // r0@3
  char v10; // r1@3
  void *v11; // r0@5
  void *v12; // r0@6
  unsigned int v13; // r7@7
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@15
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@38
  signed int v31; // r1@40
  unsigned int *v32; // r2@42
  signed int v33; // r1@44
  int v34; // [sp+Ch] [bp-D4h]@14
  int v35; // [sp+14h] [bp-CCh]@13
  int v36; // [sp+18h] [bp-C8h]@12
  int v37; // [sp+20h] [bp-C0h]@12
  int v38; // [sp+24h] [bp-BCh]@11
  int v39; // [sp+2Ch] [bp-B4h]@11
  void *ptr; // [sp+30h] [bp-B0h]@7
  int v41; // [sp+48h] [bp-98h]@8
  int v42; // [sp+50h] [bp-90h]@7
  char v43; // [sp+54h] [bp-8Ch]@7
  char v44; // [sp+9Fh] [bp-41h]@5
  int v45; // [sp+A4h] [bp-3Ch]@3
  int v46; // [sp+A8h] [bp-38h]@5
  int v47; // [sp+B0h] [bp-30h]@5
  char v48; // [sp+C3h] [bp-1Dh]@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  v48 = a4;
  if ( &pthread_create )
  {
    v7 = pthread_mutex_lock((pthread_mutex_t *)&MinecraftEventing::sMutex);
    if ( v7 )
      sub_21E5E14(v7);
  }
  v8 = *(Social::Events::EventManager **)(v4 + 4);
  *(_BYTE *)(v4 + 36) = LevelSettings::achievementsWillBeDisabledOnLoad(v5) ^ 1;
  sub_21E94B4((void **)&v45, "Cheevos");
  v9 = *(_WORD *)(v4 + 36);
  v10 = 0;
  if ( v9 > 0xFF )
    v10 = 1;
  v44 = ((_BYTE)v9 != 0) | v10;
  Social::Events::EventManager::setCommonProperty<bool>((int)&v46, (int)v8, (int **)&v45, (bool *)&v44);
  Json::Value::~Value((Json::Value *)&v47);
  v11 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v45 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)(v4 + 12);
  sub_21E94B4((void **)&v42, "WorldGenerated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v13);
  Social::Events::Event::Event((int)&v43, v13, &v42, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v41 != ptr )
    operator delete(ptr);
  v14 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v42 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v39, "WorldSeed");
  v38 = LevelSettings::getSeed(v5);
  Social::Events::Event::addProperty<unsigned int>((int)&v43, &v39, (unsigned int *)&v38);
  v15 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v37, "Mode");
  v36 = LevelSettings::getGameType(v5);
  Social::Events::Event::addProperty<unsigned int>((int)&v43, &v37, (unsigned int *)&v36);
  v16 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v35, "SaveId");
  Social::Events::Event::addProperty<std::string>((int)&v43, &v35, v6);
  v17 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v35 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v34, "fromTemplate");
  Social::Events::Event::addProperty<bool>((int)&v43, &v34, (bool *)&v48);
  v18 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v34 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  Social::Events::EventManager::recordEvent((int)v8);
  Social::Events::Event::~Event((int)&v43);
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))pthread_mutex_unlock((pthread_mutex_t *)&MinecraftEventing::sMutex);
  return result;
}


signed int __fastcall MinecraftEventing::fireEventChunkLoaded(MinecraftEventing *this, LevelChunk *a2)
{
  MinecraftEventing *v2; // r6@1
  LevelChunk *v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  signed int result; // r0@1
  unsigned int v6; // r6@2
  void *v7; // r0@5
  void *v8; // r0@6
  int *v9; // r0@7
  void *v10; // r0@7
  char *v11; // r0@8
  void *v12; // r0@8
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v21; // [sp+Ch] [bp-9Ch]@8
  int v22; // [sp+14h] [bp-94h]@7
  int v23; // [sp+18h] [bp-90h]@6
  int v24; // [sp+20h] [bp-88h]@6
  void *ptr; // [sp+24h] [bp-84h]@2
  int v26; // [sp+3Ch] [bp-6Ch]@3
  int v27; // [sp+44h] [bp-64h]@2
  char v28; // [sp+48h] [bp-60h]@2

  v2 = this;
  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  result = Social::Events::EventManager::hasListeners(*((Social::Events::EventManager **)this + 1), 9);
  if ( result == 1 )
  {
    v6 = *((_DWORD *)v2 + 3);
    sub_21E94B4((void **)&v27, "ChunkLoaded");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
    Social::Events::Event::Event((int)&v28, v6, &v27, (int)&ptr, 9);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v26 != ptr )
      operator delete(ptr);
    v7 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v27 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    sub_21E94B4((void **)&v24, "Dimension");
    v23 = LevelChunk::getDimensionId(v3);
    Social::Events::Event::addProperty<DimensionId>((int)&v28, &v24, &v23);
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v24 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v22, "ChunkX");
    v9 = (int *)LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v22, v9);
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v21, "ChunkZ");
    v11 = LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v21, (int *)v11 + 1);
    v12 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Social::Events::EventManager::recordEvent((int)v4);
    result = Social::Events::Event::~Event((int)&v28);
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventRealmShared(int a1, const char **a2, int *a3, __int64 *a4)
{
  const char **v4; // r7@1
  Social::Events::EventManager *v5; // r9@1
  __int64 *v6; // r8@1
  unsigned int v7; // r5@1
  int *v8; // r6@1
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  __int64 v22; // [sp+8h] [bp-B0h]@7
  int v23; // [sp+14h] [bp-A4h]@7
  int v24; // [sp+18h] [bp-A0h]@6
  int v25; // [sp+20h] [bp-98h]@6
  int v26; // [sp+28h] [bp-90h]@5
  void *ptr; // [sp+2Ch] [bp-8Ch]@1
  int v28; // [sp+44h] [bp-74h]@2
  int v29; // [sp+4Ch] [bp-6Ch]@1
  char v30; // [sp+50h] [bp-68h]@1

  v4 = a2;
  v5 = *(Social::Events::EventManager **)(a1 + 4);
  v6 = a4;
  v7 = *(_DWORD *)(a1 + 12);
  v8 = a3;
  sub_21E94B4((void **)&v29, "RealmShared");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v7);
  Social::Events::Event::Event((int)&v30, v7, &v29, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v28 != ptr )
    operator delete(ptr);
  v9 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v29 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  sub_21E94B4((void **)&v26, "WorldUrl");
  Social::Events::Event::addProperty<std::string>((int)&v30, &v26, v4);
  v10 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v25, "WorldShareModeId");
  v24 = *v8;
  Social::Events::Event::addProperty<int>((int)&v30, &v25, &v24);
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v23, "RealmWorldId");
  v22 = *v6;
  Social::Events::Event::addProperty<long long>((int)&v30, &v23, &v22);
  v12 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  Social::Events::EventManager::recordEvent((int)v5);
  return Social::Events::Event::~Event((int)&v30);
}


int __fastcall MinecraftEventing::fireTextToSpeechToggled(MinecraftEventing *this, bool a2)
{
  Social::Events::EventManager *v2; // r4@1
  unsigned int v3; // r5@1
  void *v4; // r0@4
  void *v5; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v13; // [sp+24h] [bp-6Ch]@2
  int v14; // [sp+2Ch] [bp-64h]@1
  char v15; // [sp+30h] [bp-60h]@1
  bool v16; // [sp+7Bh] [bp-15h]@1

  v16 = a2;
  v2 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v14, "TextToSpeechToggled");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v2, v3);
  Social::Events::Event::Event((int)&v15, v3, &v14, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v13 != ptr )
    operator delete(ptr);
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "IsEnabled");
  Social::Events::Event::addProperty<bool>((int)&v15, &v11, &v16);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Social::Events::EventManager::recordEvent((int)v2);
  return Social::Events::Event::~Event((int)&v15);
}


int __fastcall MinecraftEventing::fireEventHeartbeat(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  void *v4; // r0@5
  void *v5; // r0@6
  void *v11; // r0@7
  unsigned int *v13; // r2@9
  signed int v14; // r1@11
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  double v21; // [sp+8h] [bp-C0h]@7
  int v22; // [sp+14h] [bp-B4h]@7
  int v23; // [sp+1Ch] [bp-ACh]@5
  int v24; // [sp+20h] [bp-A8h]@5
  int v25; // [sp+28h] [bp-A0h]@5
  void *ptr; // [sp+3Ch] [bp-8Ch]@1
  int v27; // [sp+54h] [bp-74h]@2
  int v28; // [sp+5Ch] [bp-6Ch]@1
  char v29; // [sp+60h] [bp-68h]@1
  char v30; // [sp+68h] [bp-60h]@5
  int v31; // [sp+70h] [bp-58h]@5
  char v32; // [sp+A8h] [bp-20h]@5

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v28, "ScreenHeartbeat");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v29, v2, &v28, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v27 != ptr )
    operator delete(ptr);
  v3 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v30 = 1;
  sub_21E94B4((void **)&v23, "ScreenName");
  Social::Events::EventManager::getPlayerGlobalProperty((int)&v24, (int)v1, v2, &v23);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
    (int)&v32,
    (unsigned __int64 *)&v31,
    &v24,
    (int)&v24);
  Json::Value::~Value((Json::Value *)&v25);
  v4 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v22, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xC8+var_C0]
  Social::Events::Event::addProperty<double>((int)&v29, &v22, (int)&v21);
  v11 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v22 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v29);
}


int __fastcall MinecraftEventing::fireEventBookEdited(int result, Player *a2, const ItemInstance *a3, unsigned int a4)
{
  int v4; // r6@1
  Player *v5; // r5@1
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  unsigned int *v15; // r2@20
  signed int v16; // r1@22
  int v17; // [sp+8h] [bp-98h]@9
  int v18; // [sp+Ch] [bp-94h]@8
  int v19; // [sp+14h] [bp-8Ch]@8
  void *ptr; // [sp+18h] [bp-88h]@4
  int v21; // [sp+30h] [bp-70h]@5
  int v22; // [sp+38h] [bp-68h]@4
  char v23; // [sp+3Ch] [bp-64h]@4
  const ItemInstance *v24; // [sp+84h] [bp-1Ch]@1

  v4 = result;
  v5 = a2;
  v24 = a3;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v22, "BookEdited");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v23, v7, &v22, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v21 != ptr )
          operator delete(ptr);
        v8 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        }
        sub_21E94B4((void **)&v19, "Type");
        v18 = ItemInstance::getId(v5);
        Social::Events::Event::addProperty<int>((int)&v23, &v19, &v18);
        v9 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v19 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v17, "PageCount");
        Social::Events::Event::addProperty<unsigned int>((int)&v23, &v17, (unsigned int *)&v24);
        v10 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v17 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v23);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventAssertFailed(int a1, const char **a2)
{
  const char **v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v14; // [sp+24h] [bp-6Ch]@2
  int v15; // [sp+2Ch] [bp-64h]@1
  char v16; // [sp+30h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v15, "AssertFailed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v16, v4, &v15, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v14 != ptr )
    operator delete(ptr);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v12, "Message");
  Social::Events::Event::addProperty<std::string>((int)&v16, &v12, v2);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  Social::Events::EventManager::sendEvents(v3, 1);
  return Social::Events::Event::~Event((int)&v16);
}


int __fastcall MinecraftEventing::fireEventWorldFilesListed(int result, int a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5, unsigned __int64 a6)
{
  unsigned int v6; // r5@1
  unsigned int v7; // r6@1
  Social::Events::EventManager *v8; // r8@2
  unsigned int v9; // r4@2
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
  void *v15; // r0@10
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned __int64 v28; // [sp+8h] [bp-E0h]@10
  int v29; // [sp+14h] [bp-D4h]@10
  unsigned __int64 v30; // [sp+18h] [bp-D0h]@9
  int v31; // [sp+24h] [bp-C4h]@9
  unsigned __int64 v32; // [sp+28h] [bp-C0h]@8
  int v33; // [sp+34h] [bp-B4h]@8
  unsigned __int64 v34; // [sp+38h] [bp-B0h]@7
  int v35; // [sp+44h] [bp-A4h]@7
  unsigned int v36[3]; // [sp+48h] [bp-A0h]@6
  int v37; // [sp+58h] [bp-90h]@6
  void *ptr; // [sp+5Ch] [bp-8Ch]@2
  int v39; // [sp+74h] [bp-74h]@3
  int v40; // [sp+7Ch] [bp-6Ch]@2
  char v41; // [sp+80h] [bp-68h]@2

  v6 = HIDWORD(a3);
  v7 = a3;
  if ( a3 )
  {
    v8 = *(Social::Events::EventManager **)(result + 4);
    v9 = *(_DWORD *)(result + 12);
    sub_21E94B4((void **)&v40, "WorldFilesListed");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
    Social::Events::Event::Event((int)&v41, v9, &v40, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v39 != ptr )
      operator delete(ptr);
    v10 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v40 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    sub_21E94B4((void **)&v37, "TotalWorldListed");
    v36[0] = v7;
    v36[1] = v6;
    Social::Events::Event::addProperty<unsigned long long>((int)&v41, &v37, (unsigned __int64 *)v36);
    v11 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v37 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v35, "TotalSizeMB");
    v34 = a4;
    Social::Events::Event::addProperty<unsigned long long>((int)&v41, &v35, &v34);
    v12 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v35 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v33, "MaxSizeMB");
    v32 = a5;
    Social::Events::Event::addProperty<unsigned long long>((int)&v41, &v33, &v32);
    v13 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v33 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v31, "MinSizeMB");
    v30 = a6;
    Social::Events::Event::addProperty<unsigned long long>((int)&v41, &v31, &v30);
    v14 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v31 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E94B4((void **)&v29, "AvgSizeMB");
    v28 = a4 / __PAIR__(v6, v7);
    Social::Events::Event::addProperty<unsigned long long>((int)&v41, &v29, &v28);
    v15 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v29 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    Social::Events::EventManager::recordEvent((int)v8);
    result = Social::Events::Event::~Event((int)&v41);
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventWorldLoaded(int result, Player *a2, Level *a3, ResourcePackManager *a4, ResourcePacksInfoData *a5)
{
  MinecraftEventing *v5; // r4@1
  bool *v6; // r6@1
  Level *v7; // r7@1
  Level *v8; // r5@1
  char *v9; // r11@4
  int v10; // r9@4
  int v11; // r8@4
  signed int v12; // r0@4
  bool v13; // r2@4
  Social::Events::EventManager *v14; // r10@4
  int v15; // r7@4
  void *v16; // r0@4
  void *v17; // r0@5
  void *v18; // r0@6
  void *v19; // r0@7
  void *v20; // r0@11
  void *v21; // r0@12
  char v22; // r2@13
  void *v23; // r0@15
  char v24; // r2@16
  void *v25; // r0@18
  void *v26; // r0@19
  char *v27; // r0@21
  void *v28; // r0@21
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  unsigned int *v41; // r2@48
  signed int v42; // r1@50
  unsigned int *v43; // r2@52
  signed int v44; // r1@54
  unsigned int *v45; // r2@56
  signed int v46; // r1@58
  unsigned int *v47; // r2@60
  signed int v48; // r1@62
  int v49; // [sp+8h] [bp-110h]@21
  int v50; // [sp+10h] [bp-108h]@19
  char v51; // [sp+17h] [bp-101h]@18
  int v52; // [sp+1Ch] [bp-FCh]@16
  char v53; // [sp+23h] [bp-F5h]@15
  int v54; // [sp+28h] [bp-F0h]@13
  int v55; // [sp+2Ch] [bp-ECh]@12
  int v56; // [sp+34h] [bp-E4h]@12
  void *ptr; // [sp+38h] [bp-E0h]@8
  int v58; // [sp+50h] [bp-C8h]@9
  int v59; // [sp+58h] [bp-C0h]@8
  char v60; // [sp+5Ch] [bp-BCh]@8
  int v61; // [sp+A4h] [bp-74h]@6
  int v62; // [sp+ACh] [bp-6Ch]@6
  int v63; // [sp+B0h] [bp-68h]@6
  int v64; // [sp+B8h] [bp-60h]@6
  int v65; // [sp+CCh] [bp-4Ch]@4
  int v66; // [sp+D4h] [bp-44h]@4
  int v67; // [sp+D8h] [bp-40h]@4
  int v68; // [sp+E0h] [bp-38h]@4

  v5 = (MinecraftEventing *)result;
  v6 = (bool *)a4;
  v7 = a3;
  v8 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v9 = Level::getLevelData(v8);
        v10 = ResourcePackManager::getStack((int)v7, 1);
        v11 = ResourcePackManager::getStack((int)v7, 0);
        v12 = LevelData::achievementsWillBeDisabledOnLoad((LevelData *)v9);
        MinecraftEventing::fireEventSetValidForAchievements(v5, (Player *)(v12 ^ 1), v13);
        v14 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v5 + 1440))(v5)
                                               + 4);
        v15 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v66, "Mode");
        v65 = LevelData::getGameType((LevelData *)v9);
        Social::Events::EventManager::setPlayerCommonProperty<unsigned int>(
          (int)&v67,
          (int)v14,
          v15,
          (int **)&v66,
          (unsigned int *)&v65);
        Json::Value::~Value((Json::Value *)&v68);
        v16 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
        {
          v29 = (unsigned int *)(v67 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
          }
          else
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        v17 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v66 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        sub_21E94B4((void **)&v62, "Dim");
        v61 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v5 + 524))(v5);
          (int)&v63,
          (int **)&v62,
          (unsigned int *)&v61);
        Json::Value::~Value((Json::Value *)&v64);
        v18 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v33 = (unsigned int *)(v63 - 4);
              v34 = __ldrex(v33);
            while ( __strex(v34 - 1, v33) );
            v34 = (*v33)--;
          if ( v34 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v19 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v62 - 4);
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v59, "WorldLoaded");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v14, v15);
        Social::Events::Event::Event((int)&v60, v15, &v59, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v58 != ptr )
          operator delete(ptr);
        v20 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v59 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E94B4((void **)&v56, "WorldSeed");
        v55 = LevelData::getSeed((LevelData *)v9);
        Social::Events::Event::addProperty<unsigned int>((int)&v60, &v56, (unsigned int *)&v55);
        v21 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v56 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        sub_21E94B4((void **)&v54, "ContainsAddons");
        v22 = 0;
        if ( (unsigned int)*(_QWORD *)(v10 + 4) != *(_QWORD *)(v10 + 4) >> 32 )
          v22 = 1;
        v53 = v22;
        Social::Events::Event::addProperty<bool>((int)&v60, &v54, (bool *)&v53);
        v23 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v54 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        sub_21E94B4((void **)&v52, "ContainsTextures");
        v24 = 0;
        if ( (unsigned int)*(_QWORD *)(v11 + 4) != *(_QWORD *)(v11 + 4) >> 32 )
          v24 = 1;
        v51 = v24;
        Social::Events::Event::addProperty<bool>((int)&v60, &v52, (bool *)&v51);
        v25 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v52 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        sub_21E94B4((void **)&v50, "RequiredHostTexturesToJoin");
        Social::Events::Event::addProperty<bool>((int)&v60, &v50, v6);
        v26 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v50 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        if ( *(_DWORD *)(*(_DWORD *)LevelData::getPremiumTemplatePackId((LevelData *)v9) - 12) )
          sub_21E94B4((void **)&v49, "WorldTemplateId");
          v27 = LevelData::getPremiumTemplatePackId((LevelData *)v9);
          Social::Events::Event::addProperty<std::string>((int)&v60, &v49, (const char **)v27);
          v28 = (void *)(v49 - 12);
          if ( (int *)(v49 - 12) != &dword_28898C0 )
            v47 = (unsigned int *)(v49 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v48 = __ldrex(v47);
              while ( __strex(v48 - 1, v47) );
            }
            else
              v48 = (*v47)--;
            if ( v48 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
        Social::Events::EventManager::recordEvent((int)v14);
        result = Social::Events::Event::~Event((int)&v60);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventCraftingSessionStart(MinecraftEventing *this, Player *a2, unsigned int a3)
{
  MinecraftEventing::fireEventCraftingSessionStart(this, a2, a3);
}


int __fastcall MinecraftEventing::fireEventTreatmentsCleared(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  void *v4; // r0@5
  void *v5; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  int v13; // [sp+8h] [bp-90h]@6
  int v14; // [sp+Ch] [bp-8Ch]@5
  int v15; // [sp+14h] [bp-84h]@5
  void *ptr; // [sp+18h] [bp-80h]@1
  int v17; // [sp+30h] [bp-68h]@2
  int v18; // [sp+38h] [bp-60h]@1
  char v19; // [sp+3Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v18, "Treatments");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v19, v2, &v18, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v17 != ptr )
    operator delete(ptr);
  v3 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E94B4((void **)&v15, "Set");
  v14 = 0;
  Social::Events::Event::addProperty<int>((int)&v19, &v15, &v14);
  v4 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v15 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  Social::Events::EventManager::recordEvent((int)v1);
  sub_21E94B4((void **)&v13, "Treatments");
  Social::Events::EventManager::removeCommonProperty((int)v1, (int **)&v13);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return Social::Events::Event::~Event((int)&v19);
}


int __fastcall MinecraftEventing::unregisterOptionsObserver(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r4@1
  int result; // r0@1
  void (__fastcall *v3)(char *, char *, signed int); // r3@2

  v1 = this;
  result = *((_DWORD *)this + 12);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD))v1 + 13))((char *)v1 + 40);
    v3 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 12);
    if ( v3 )
    {
      v3((char *)v1 + 40, (char *)v1 + 40, 3);
      result = 0;
      *((_DWORD *)v1 + 12) = 0;
      *((_DWORD *)v1 + 13) = 0;
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventClientIdCreated(MinecraftEventing *this, int a2)
{
  Social::Events::EventManager *v2; // r4@1
  unsigned int v3; // r5@1
  void *v4; // r0@4
  void *v5; // r0@5
  unsigned int *v7; // r2@7
  signed int v8; // r1@9
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v13; // [sp+24h] [bp-6Ch]@2
  int v14; // [sp+2Ch] [bp-64h]@1
  char v15; // [sp+30h] [bp-60h]@1
  int v16; // [sp+78h] [bp-18h]@1

  v16 = a2;
  v2 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v14, "ClientIdCreated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v2, v3);
  Social::Events::Event::Event((int)&v15, v3, &v14, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v13 != ptr )
    operator delete(ptr);
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v11, "SaveFiles");
  Social::Events::Event::addProperty<int>((int)&v15, &v11, &v16);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  Social::Events::EventManager::recordEvent((int)v2);
  return Social::Events::Event::~Event((int)&v15);
}


void __fastcall MinecraftEventing::updateEditionType(MinecraftEventing *this)
{
  MinecraftEventing::updateEditionType(this);
}


int __fastcall MinecraftEventing::fireEventRegionalPopupShown(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "RegionalPopup");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


int __fastcall MinecraftEventing::fireEventOptionsUpdated(int a1, int a2, void *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, char a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, char a34)
{
  int *v34; // r6@1
  Social::Events::EventManager *v35; // r5@1
  unsigned int v36; // r4@1
  void *v37; // r0@4
  int *v38; // r8@5
  int *v39; // r11@5
  unsigned int *v40; // r2@7
  signed int v41; // r1@9
  Option *v42; // r0@15
  Option *v43; // r10@15
  int *v44; // r0@15
  char *v45; // r0@17
  void *v52; // r0@23
  void *v53; // r0@25
  unsigned int *v55; // r2@29
  signed int v56; // r1@31
  unsigned int *v57; // r2@33
  signed int v58; // r1@35
  void *v59; // [sp+8h] [bp-C8h]@1
  int v60; // [sp+10h] [bp-C0h]@25
  float v61; // [sp+14h] [bp-BCh]@19
  char v62; // [sp+1Ah] [bp-B6h]@20
  char v63; // [sp+1Bh] [bp-B5h]@16
  int v64; // [sp+1Ch] [bp-B4h]@22
  int v65; // [sp+20h] [bp-B0h]@21
  float v66; // [sp+24h] [bp-ACh]@18
  int v67; // [sp+28h] [bp-A8h]@7
  __int64 v68; // [sp+2Ch] [bp-A4h]@5
  int v69; // [sp+34h] [bp-9Ch]@5
  void *ptr; // [sp+38h] [bp-98h]@1
  int v71; // [sp+50h] [bp-80h]@2
  int v72; // [sp+58h] [bp-78h]@1
  char v73; // [sp+5Ch] [bp-74h]@1
  char v74; // [sp+A7h] [bp-29h]@1

  v74 = a4;
  v34 = (int *)a2;
  v35 = *(Social::Events::EventManager **)(a1 + 4);
  v36 = *(_DWORD *)(a1 + 12);
  v59 = a3;
  sub_21E94B4((void **)&v72, "OptionsUpdated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v35, v36);
  Social::Events::Event::Event((int)&v73, v36, &v72, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v71 != ptr )
    operator delete(ptr);
  v37 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
  {
    v55 = (unsigned int *)(v72 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
    }
    else
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  }
  v68 = 0LL;
  v69 = 0;
  Options::getTelemetryOptions(*v34, (int)&v68);
  v38 = (int *)HIDWORD(v68);
  v39 = (int *)v68;
  if ( (_DWORD)v68 != HIDWORD(v68) )
    do
      v42 = (Option *)Options::get(*v34, *v39);
      v43 = v42;
      v44 = (int *)Option::getTelemetryProperty(v42);
      sub_21E8AF4(&v67, v44);
      switch ( Option::getType(v43) )
      {
        case 0:
          v63 = Option::getBool(v43);
          Social::Events::Event::addProperty<bool>((int)&v73, &v67, (bool *)&v63);
          break;
        case 4:
          v45 = Option::getString(v43);
          Social::Events::Event::addProperty<std::string>((int)&v73, &v67, (const char **)v45);
        case 2:
          _R0 = Option::getFloat(v43);
          __asm
          {
            VMOV            S0, R0
            VSTR            S0, [SP,#0xD0+var_AC]
          }
          Social::Events::Event::addProperty<float>((int)&v73, &v67, (int)&v66);
        case 3:
          _R0 = Option::getFloat((int)v43, (unsigned int)v59);
            VSTR            S0, [SP,#0xD0+var_BC]
          Social::Events::Event::addProperty<float>((int)&v73, &v67, (int)&v61);
        case 1:
          v62 = Option::getBool((int)v43, (unsigned int)v59);
          Social::Events::Event::addProperty<bool>((int)&v73, &v67, (bool *)&v62);
        case 5:
          v65 = Option::getInt(v43);
          Social::Events::Event::addProperty<int>((int)&v73, &v67, &v65);
        case 6:
          v64 = Option::getInt(v43);
          Social::Events::Event::addProperty<int>((int)&v73, &v67, &v64);
        default:
      }
      v52 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
      ++v39;
    while ( v39 != v38 );
  sub_21E94B4((void **)&v60, "onStartup");
  Social::Events::Event::addProperty<bool>((int)&v73, &v60, (bool *)&v74);
  v53 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v60 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  Social::Events::EventManager::recordEvent((int)v35);
  if ( (_DWORD)v68 )
    operator delete((void *)v68);
  return Social::Events::Event::~Event((int)&v73);
}


int __fastcall MinecraftEventing::fireEventAwardAchievement(int result, int a2)
{
  int v2; // r6@1
  int v3; // r5@1
  Social::Events::EventManager *v4; // r4@4
  int v5; // r6@4
  void *v6; // r0@7
  void *v7; // r0@8
  void *v8; // r0@9
  unsigned int *v9; // r2@12
  signed int v10; // r1@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  int v15; // [sp+4h] [bp-9Ch]@9
  int v16; // [sp+Ch] [bp-94h]@9
  int v17; // [sp+10h] [bp-90h]@8
  int v18; // [sp+18h] [bp-88h]@8
  void *ptr; // [sp+1Ch] [bp-84h]@4
  int v20; // [sp+34h] [bp-6Ch]@5
  int v21; // [sp+3Ch] [bp-64h]@4
  char v22; // [sp+40h] [bp-60h]@4
  char v23; // [sp+48h] [bp-58h]@8

  v2 = result;
  v3 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v4 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v21, "AwardAchievement");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
        Social::Events::Event::Event((int)&v22, v5, &v21, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v20 != ptr )
          operator delete(ptr);
        v6 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v21 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        v23 = 1;
        sub_21E94B4((void **)&v18, "AchievementID");
        v17 = v3;
        Social::Events::Event::addProperty<unsigned int>((int)&v22, &v18, (unsigned int *)&v17);
        v7 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v18 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        sub_21E94B4((void **)&v16, "AchievementCount");
        v15 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v22, &v16, 0, (unsigned int *)&v15);
        v8 = (void *)(v16 - 12);
        if ( (int *)(v16 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v16 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        Social::Events::EventManager::recordEvent((int)v4);
        result = Social::Events::Event::~Event((int)&v22);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPackHashChanged(MinecraftEventing *this, const PackManifest *a2)
{
  PackManifest *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  char *v9; // r0@8
  char *v10; // r0@8
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  unsigned int *v21; // r2@22
  signed int v22; // r1@24
  unsigned int *v23; // r2@26
  signed int v24; // r1@28
  unsigned int *v25; // r2@30
  signed int v26; // r1@32
  unsigned int *v27; // r2@34
  signed int v28; // r1@36
  unsigned int *v29; // r2@38
  signed int v30; // r1@40
  unsigned int *v31; // r2@42
  signed int v32; // r1@44
  unsigned int *v33; // r2@46
  signed int v34; // r1@48
  int v35; // [sp+8h] [bp-C8h]@12
  int v36; // [sp+10h] [bp-C0h]@12
  int v37; // [sp+14h] [bp-BCh]@10
  int v38; // [sp+1Ch] [bp-B4h]@10
  int v39; // [sp+20h] [bp-B0h]@9
  int v40; // [sp+28h] [bp-A8h]@9
  int v41; // [sp+30h] [bp-A0h]@8
  int v42; // [sp+34h] [bp-9Ch]@6
  int v43; // [sp+3Ch] [bp-94h]@6
  char v44; // [sp+43h] [bp-8Dh]@5
  int v45; // [sp+48h] [bp-88h]@5
  void *ptr; // [sp+4Ch] [bp-84h]@1
  int v47; // [sp+64h] [bp-6Ch]@2
  int v48; // [sp+6Ch] [bp-64h]@1
  char v49; // [sp+70h] [bp-60h]@1

  v2 = a2;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v48, "PackHashChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v49, v4, &v48, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v47 != ptr )
    operator delete(ptr);
  v5 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v45, "PackTypeId");
  v44 = PackManifest::getPackType(v2);
  Social::Events::Event::addProperty<char>((int)&v49, &v45, &v44);
  v6 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v45 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v43, "PackId");
  PackManifest::getIdentity(v2);
  mce::UUID::asString((mce::UUID *)&v42);
  Social::Events::Event::addProperty<std::string>((int)&v49, &v43, (const char **)&v42);
  v7 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v42 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v43 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v41, "PackVersion");
  v9 = PackManifest::getIdentity(v2);
  v10 = SemVersion::asString((SemVersion *)(v9 + 16));
  Social::Events::Event::addProperty<std::string>((int)&v49, &v41, (const char **)v10);
  v11 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v41 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v40, "PackFormatVersionNum");
  v39 = PackManifest::getFormatVersion(v2);
  Social::Events::Event::addProperty<int>((int)&v49, &v40, &v39);
  v12 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v40 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v38, "PackName");
  PackManifest::getName((PackManifest *)&v37, (int)v2);
  Social::Events::Event::addProperty<std::string>((int)&v49, &v38, (const char **)&v37);
  v13 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v38 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v36, "PackOriginalFormatVersionNum");
  v35 = PackManifest::getOriginalFormatVersion(v2);
  Social::Events::Event::addProperty<int>((int)&v49, &v36, &v35);
  v15 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v36 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v49);
}


void __fastcall MinecraftEventing::fireEventMultiplayerConnectionStateChanged(int a1, int a2, const char **a3, const char **a4, int a5, int a6, int a7, const char **a8)
{
  MinecraftEventing::fireEventMultiplayerConnectionStateChanged(a1, a2, a3, a4, a5, a6, a7, a8);
}


int __fastcall MinecraftEventing::fireEventPurchaseResolved(int a1, const char **a2, const char **a3, const char **a4, const char **a5, int a6, int a7)
{
  const char **v7; // r7@1
  Social::Events::EventManager *v8; // r4@1
  const char **v9; // r8@1
  unsigned int v10; // r5@1
  const char **v11; // r9@1
  void *v12; // r0@4
  void *v13; // r0@5
  void *v19; // r0@6
  void *v20; // r0@7
  void *v21; // r0@8
  void *v22; // r0@10
  const char **v23; // r0@12
  void *v24; // r0@12
  void *v25; // r0@14
  void *v26; // r0@15
  void *v27; // r0@16
  int v28; // r5@17
  void *v29; // r0@19
  void *v30; // r0@20
  unsigned int *v32; // r2@22
  signed int v33; // r1@24
  unsigned int *v34; // r2@26
  signed int v35; // r1@28
  unsigned int *v36; // r2@30
  signed int v37; // r1@32
  unsigned int *v38; // r2@34
  signed int v39; // r1@36
  unsigned int *v40; // r2@38
  signed int v41; // r1@40
  unsigned int *v42; // r2@42
  signed int v43; // r1@44
  unsigned int *v44; // r2@46
  signed int v45; // r1@48
  unsigned int *v46; // r2@50
  signed int v47; // r1@52
  unsigned int *v48; // r2@54
  signed int v49; // r1@56
  unsigned int *v50; // r2@58
  signed int v51; // r1@60
  unsigned int *v52; // r2@62
  signed int v53; // r1@64
  int v54; // [sp+Ch] [bp-114h]@19
  char v55; // [sp+10h] [bp-110h]@17
  int v56; // [sp+24h] [bp-FCh]@16
  int v57; // [sp+28h] [bp-F8h]@16
  int v58; // [sp+30h] [bp-F0h]@17
  int v59; // [sp+44h] [bp-DCh]@15
  int v60; // [sp+4Ch] [bp-D4h]@14
  int v61; // [sp+54h] [bp-CCh]@9
  int v62; // [sp+58h] [bp-C8h]@8
  int v63; // [sp+60h] [bp-C0h]@8
  int v64; // [sp+64h] [bp-BCh]@7
  int v65; // [sp+6Ch] [bp-B4h]@7
  double v66; // [sp+70h] [bp-B0h]@6
  int v67; // [sp+80h] [bp-A0h]@6
  int v68; // [sp+88h] [bp-98h]@5
  void *ptr; // [sp+8Ch] [bp-94h]@1
  int v70; // [sp+A4h] [bp-7Ch]@2
  int v71; // [sp+ACh] [bp-74h]@1
  char v72; // [sp+B0h] [bp-70h]@1
  int v73; // [sp+C0h] [bp-60h]@18
  char v74; // [sp+F8h] [bp-28h]@18

  v7 = a2;
  v8 = *(Social::Events::EventManager **)(a1 + 4);
  v9 = a4;
  v10 = *(_DWORD *)(a1 + 12);
  v11 = a3;
  sub_21E94B4((void **)&v71, "PurchaseResolved");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v10);
  Social::Events::Event::Event((int)&v72, v10, &v71, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v70 != ptr )
    operator delete(ptr);
  v12 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v71 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  sub_21E94B4((void **)&v68, "StoreId");
  Social::Events::Event::addProperty<std::string>((int)&v72, &v68, v7);
  v13 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v68 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v67, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x120+var_B0]
  Social::Events::Event::addProperty<double>((int)&v72, &v67, (int)&v66);
  v19 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v67 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v65, "PurchaseStage");
  v64 = a6;
  Social::Events::Event::addProperty<unsigned int>((int)&v72, &v65, (unsigned int *)&v64);
  v20 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v65 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v63, "PurchaseSucceeded");
  v62 = a7;
  Social::Events::Event::addProperty<unsigned int>((int)&v72, &v63, (unsigned int *)&v62);
  v21 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v63 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v61, "locale");
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v22 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v22 = &ServiceLocator<AppPlatform>::mDefaultService;
  v23 = (const char **)(*(int (**)(void))(**(_DWORD **)v22 + 136))();
  Social::Events::Event::addProperty<std::string>((int)&v72, &v61, v23);
  v24 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v61 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  if ( *((_DWORD *)*a5 - 3) )
    sub_21E94B4((void **)&v60, "TransactionId");
    Social::Events::Event::addProperty<std::string>((int)&v72, &v60, a5);
    v25 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v60 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      }
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v59, "ProductId");
  Social::Events::Event::addProperty<std::string>((int)&v72, &v59, v11);
  v26 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v59 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v56, "HasNewContent");
  Social::Events::EventManager::getGlobalProperty((int)&v57, (int)v8, (int **)&v56);
  v27 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v56 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  Json::Value::Value((Json::Value *)&v55, 0);
  v28 = Json::Value::operator!=((int)&v58, (int)&v55);
  Json::Value::~Value((Json::Value *)&v55);
  if ( v28 == 1 )
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
      (int)&v74,
      (unsigned __int64 *)&v73,
      &v57,
      (int)&v57);
  sub_21E94B4((void **)&v54, "PurchasePrice");
  Social::Events::Event::addProperty<std::string>((int)&v72, &v54, v9);
  v29 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v54 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  Social::Events::EventManager::recordEvent((int)v8);
  Json::Value::~Value((Json::Value *)&v58);
  v30 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v57 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  return Social::Events::Event::~Event((int)&v72);
}


void __fastcall MinecraftEventing::updateEditionType(MinecraftEventing *this)
{
  int v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@2
  void *v4; // r0@3
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+4h] [bp-3Ch]@1
  int v12; // [sp+Ch] [bp-34h]@1
  int v13; // [sp+10h] [bp-30h]@1
  int v14; // [sp+18h] [bp-28h]@1

  v1 = *((_DWORD *)this + 1);
  sub_21E94B4((void **)&v12, "editionType");
  getEdition((const void **)&v11);
  Social::Events::EventManager::setCommonProperty<std::string>(&v13, v1, (int **)&v12, (const char **)&v11);
  Json::Value::~Value((Json::Value *)&v14);
  v2 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v11 - 4);
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  v4 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v12 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
}


int __fastcall MinecraftEventing::fireEventRespondedToAcceptContent(MinecraftEventing *this, const ResourcePacksInfoData *a2, bool a3)
{
  const ResourcePacksInfoData *v3; // r9@1
  Social::Events::EventManager *v4; // r8@1
  unsigned int v5; // r6@1
  void *v6; // r0@4
  __int64 v7; // r2@5
  __int64 i; // r0@5
  __int64 v9; // kr00_8@6
  int v10; // r3@7
  int v11; // r7@7
  unsigned int v12; // r2@7
  unsigned int j; // r6@7
  __int64 v14; // r4@8
  void *v20; // r0@9
  void *v21; // r0@10
  void *v22; // r0@11
  char v23; // r2@12
  void *v24; // r0@14
  char v25; // r2@15
  void *v26; // r0@17
  unsigned int *v28; // r2@19
  signed int v29; // r1@21
  unsigned int *v30; // r2@23
  signed int v31; // r1@25
  unsigned int *v32; // r2@27
  signed int v33; // r1@29
  unsigned int *v34; // r2@31
  signed int v35; // r1@33
  unsigned int *v36; // r2@35
  signed int v37; // r1@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  char v40; // [sp+7h] [bp-C1h]@17
  int v41; // [sp+Ch] [bp-BCh]@15
  char v42; // [sp+13h] [bp-B5h]@14
  int v43; // [sp+18h] [bp-B0h]@12
  int v44; // [sp+20h] [bp-A8h]@11
  int v45; // [sp+28h] [bp-A0h]@10
  float v46; // [sp+2Ch] [bp-9Ch]@9
  int v47; // [sp+34h] [bp-94h]@5
  void *ptr; // [sp+38h] [bp-90h]@1
  int v49; // [sp+50h] [bp-78h]@2
  int v50; // [sp+58h] [bp-70h]@1
  char v51; // [sp+5Ch] [bp-6Ch]@1
  bool v52; // [sp+A7h] [bp-21h]@1

  v52 = a3;
  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v50, "RespondedToAcceptContent");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v51, v5, &v50, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v49 != ptr )
    operator delete(ptr);
  v6 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v47, "DownloadSize");
  v7 = *(_QWORD *)((char *)v3 + 4);
  for ( i = 0LL; HIDWORD(v7) != (_DWORD)v7; i += v9 )
    v9 = *(_QWORD *)(v7 + 48);
    LODWORD(v7) = v7 + 64;
  v11 = *((_QWORD *)v3 + 2) >> 32;
  v10 = *((_QWORD *)v3 + 2);
  v12 = 0;
  for ( j = 0; v11 != v10; v12 += v14 )
    v14 = *(_QWORD *)(v10 + 48);
    v10 += 64;
    j = (__PAIR__(j, v12) + v14) >> 32;
  _R0 = _aeabi_ul2f(i + v12, (i + __PAIR__(j, v12)) >> 32);
  __asm
    VLDR            S0, =9.5367e-7
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0xC8+var_9C]
  Social::Events::Event::addProperty<float>((int)&v51, &v47, (int)&v46);
  v20 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v47 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v45, "Accepted");
  Social::Events::Event::addProperty<bool>((int)&v51, &v45, &v52);
  v21 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v45 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v44, "Required");
  Social::Events::Event::addProperty<bool>((int)&v51, &v44, (bool *)v3);
  v22 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v44 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v43, "ContainsAddons");
  v23 = 0;
  if ( (unsigned int)*(_QWORD *)((char *)v3 + 4) != *(_QWORD *)((char *)v3 + 4) >> 32 )
    v23 = 1;
  v42 = v23;
  Social::Events::Event::addProperty<bool>((int)&v51, &v43, (bool *)&v42);
  v24 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v43 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v41, "ContainsTextures");
  v25 = 0;
  if ( (unsigned int)*((_QWORD *)v3 + 2) != *((_QWORD *)v3 + 2) >> 32 )
    v25 = 1;
  v40 = v25;
  Social::Events::Event::addProperty<bool>((int)&v51, &v41, (bool *)&v40);
  v26 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v41 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v51);
}


Social::Events::EventManager *__fastcall MinecraftEventing::forceSendEvents(MinecraftEventing *this)
{
  Social::Events::EventManager *result; // r0@1

  result = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  if ( result )
    result = (Social::Events::EventManager *)j_j_j__ZN6Social6Events12EventManager10sendEventsEb(result, 1);
  return result;
}


int __fastcall MinecraftEventing::fireRemixModelExportEvent(int a1, int a2, int a3)
{
  int v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  int v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  unsigned int *v18; // r2@17
  signed int v19; // r1@19
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int *v30; // r2@41
  signed int v31; // r1@43
  int v32; // [sp+4h] [bp-D4h]@11
  int v33; // [sp+Ch] [bp-CCh]@11
  __int64 v34; // [sp+10h] [bp-C8h]@10
  int v35; // [sp+1Ch] [bp-BCh]@10
  __int64 v36; // [sp+20h] [bp-B8h]@9
  int v37; // [sp+2Ch] [bp-ACh]@9
  int v38; // [sp+34h] [bp-A4h]@8
  int v39; // [sp+3Ch] [bp-9Ch]@7
  int v40; // [sp+44h] [bp-94h]@6
  int v41; // [sp+4Ch] [bp-8Ch]@5
  void *ptr; // [sp+50h] [bp-88h]@1
  int v43; // [sp+68h] [bp-70h]@2
  int v44; // [sp+70h] [bp-68h]@1
  char v45; // [sp+74h] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v44, "RemixModelExport");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v45, v6, &v44, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v43 != ptr )
    operator delete(ptr);
  v7 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v41, "ModelName");
  Social::Events::Event::addProperty<std::string>((int)&v45, &v41, (const char **)(v3 + 8));
  v8 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v41 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v40, "BlockCount");
  Social::Events::Event::addProperty<int>((int)&v45, &v40, (int *)(v3 + 12));
  v9 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v40 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v39, "EntityCount");
  Social::Events::Event::addProperty<int>((int)&v45, &v39, (int *)(v3 + 16));
  v10 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v39 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v38, "PlayerCount");
  Social::Events::Event::addProperty<int>((int)&v45, &v38, (int *)(v3 + 20));
  v11 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v38 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v37, "FileSize");
  v36 = *(_QWORD *)(v3 + 32);
  Social::Events::Event::addProperty<unsigned long long>((int)&v45, &v37, (unsigned __int64 *)&v36);
  v12 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v35, "GenerationTime");
  v34 = glTFExportData::getGenerationTime((glTFExportData *)v3);
  Social::Events::Event::addProperty<unsigned long long>((int)&v45, &v35, (unsigned __int64 *)&v34);
  v13 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v35 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v33, "Outcome");
  v32 = v5;
  Social::Events::Event::addProperty<int>((int)&v45, &v33, &v32);
  v14 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v33 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v45);
}


int __fastcall MinecraftEventing::fireEventProtocolHandled(int a1, const char **a2, const char **a3)
{
  const char **v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  const char **v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  int v17; // [sp+Ch] [bp-94h]@6
  int v18; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v20; // [sp+30h] [bp-70h]@2
  int v21; // [sp+38h] [bp-68h]@1
  char v22; // [sp+3Ch] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v21, "ProtocolHandled");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v22, v6, &v21, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v20 != ptr )
    operator delete(ptr);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v18, "name");
  Social::Events::Event::addProperty<std::string>((int)&v22, &v18, v3);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v17, "value");
  Social::Events::Event::addProperty<std::string>((int)&v22, &v17, v5);
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v22);
}


void __fastcall MinecraftEventing::addBehaviorPackData(int a1, int a2, int a3)
{
  MinecraftEventing::addBehaviorPackData(a1, a2, a3);
}


void __fastcall MinecraftEventing::fireEventPackImportStarted(MinecraftEventing *this, const PackManifest *a2)
{
  PackManifest *v2; // r4@1
  MinecraftEventing *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+14h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "attempt");
  MinecraftEventing::_fireEventPackImportStage((int)v3, 0, v2, (int)&v7, (int)&Util::EMPTY_STRING, 0, 0);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall MinecraftEventing::fireEventHowToPlayTopicChanged(int a1, const char **a2, int a3)
{
  const char **v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  int v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v13; // r0@5
  void *v14; // r0@6
  void *v15; // r0@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  int v25; // [sp+4h] [bp-ACh]@7
  int v26; // [sp+Ch] [bp-A4h]@7
  int v27; // [sp+14h] [bp-9Ch]@6
  double v28; // [sp+18h] [bp-98h]@5
  int v29; // [sp+24h] [bp-8Ch]@5
  void *ptr; // [sp+28h] [bp-88h]@1
  int v31; // [sp+40h] [bp-70h]@2
  int v32; // [sp+48h] [bp-68h]@1
  char v33; // [sp+4Ch] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v32, "HowToPlayTopicChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v33, v6, &v32, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v31 != ptr )
    operator delete(ptr);
  v7 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v29, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xB0+var_98]
  Social::Events::Event::addProperty<double>((int)&v33, &v29, (int)&v28);
  v13 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v29 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v27, "Topic");
  Social::Events::Event::addProperty<std::string>((int)&v33, &v27, v3);
  v14 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v27 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v26, "InputMode");
  v25 = v5;
  Social::Events::Event::addProperty<unsigned int>((int)&v33, &v26, (unsigned int *)&v25);
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v26 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v33);
}


int __fastcall MinecraftEventing::fireEventUgcServiceRequestStatus(MinecraftEventing *this, const RequestTelemetry *a2)
{
  RequestTelemetry *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  char *v7; // r0@6
  void *v8; // r0@6
  void *v9; // r0@7
  int v10; // r1@8
  void *v16; // r0@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  unsigned int *v26; // r2@26
  signed int v27; // r1@28
  double v28; // [sp+8h] [bp-B8h]@8
  int v29; // [sp+18h] [bp-A8h]@8
  int v30; // [sp+1Ch] [bp-A4h]@7
  int v31; // [sp+24h] [bp-9Ch]@7
  int v32; // [sp+2Ch] [bp-94h]@6
  int v33; // [sp+30h] [bp-90h]@5
  int v34; // [sp+38h] [bp-88h]@5
  void *ptr; // [sp+3Ch] [bp-84h]@1
  int v36; // [sp+54h] [bp-6Ch]@2
  int v37; // [sp+5Ch] [bp-64h]@1
  char v38; // [sp+60h] [bp-60h]@1

  v2 = a2;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v37, "UgcServiceRequest");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v38, v4, &v37, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v36 != ptr )
    operator delete(ptr);
  v5 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v34, "RequestType");
  v33 = RequestTelemetry::getRequestType(v2);
  Social::Events::Event::addProperty<int>((int)&v38, &v34, &v33);
  v6 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v34 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v32, "RequestDetails");
  v7 = RequestTelemetry::getRequestDetails(v2);
  Social::Events::Event::addProperty<std::string>((int)&v38, &v32, (const char **)v7);
  v8 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v32 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v31, "ResponseCode");
  v30 = RequestTelemetry::getResponseCode(v2);
  Social::Events::Event::addProperty<int>((int)&v38, &v31, &v30);
  v9 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v31 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v29, "ResponseTime");
  _R0 = RequestTelemetry::getResponseTime(v2, v10);
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xC0+var_B8]
  Social::Events::Event::addProperty<double>((int)&v38, &v29, (int)&v28);
  v16 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v29 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v38);
}


void __fastcall MinecraftEventing::~MinecraftEventing(MinecraftEventing *this)
{
  MinecraftEventing::~MinecraftEventing(this);
}


int __fastcall MinecraftEventing::fireEventPurchaseAttempt(int a1, const char **a2, const char **a3, const char **a4, const char **a5)
{
  const char **v5; // r7@1
  Social::Events::EventManager *v6; // r9@1
  const char **v7; // r8@1
  unsigned int v8; // r5@1
  const char **v9; // r6@1
  void *v10; // r0@4
  void *v16; // r0@5
  void *v17; // r0@6
  void *v18; // r0@7
  void *v19; // r0@9
  const char **v20; // r0@11
  void *v21; // r0@11
  void *v22; // r0@13
  void *v23; // r0@14
  int v24; // r4@15
  void *v25; // r0@17
  void *v26; // r0@18
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  int v46; // [sp+Ch] [bp-FCh]@17
  char v47; // [sp+10h] [bp-F8h]@15
  int v48; // [sp+24h] [bp-E4h]@14
  int v49; // [sp+28h] [bp-E0h]@14
  int v50; // [sp+30h] [bp-D8h]@15
  int v51; // [sp+44h] [bp-C4h]@13
  int v52; // [sp+4Ch] [bp-BCh]@8
  int v53; // [sp+54h] [bp-B4h]@7
  int v54; // [sp+5Ch] [bp-ACh]@6
  double v55; // [sp+60h] [bp-A8h]@5
  int v56; // [sp+70h] [bp-98h]@5
  void *ptr; // [sp+74h] [bp-94h]@1
  int v58; // [sp+8Ch] [bp-7Ch]@2
  int v59; // [sp+94h] [bp-74h]@1
  char v60; // [sp+98h] [bp-70h]@1
  int v61; // [sp+A8h] [bp-60h]@16
  char v62; // [sp+E0h] [bp-28h]@16

  v5 = a2;
  v6 = *(Social::Events::EventManager **)(a1 + 4);
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 12);
  v9 = a3;
  sub_21E94B4((void **)&v59, "PurchaseAttempt");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v8);
  Social::Events::Event::Event((int)&v60, v8, &v59, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v58 != ptr )
    operator delete(ptr);
  v10 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v59 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  sub_21E94B4((void **)&v56, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0x108+var_A8]
  Social::Events::Event::addProperty<double>((int)&v60, &v56, (int)&v55);
  v16 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v56 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v54, "StoreId");
  Social::Events::Event::addProperty<std::string>((int)&v60, &v54, v5);
  v17 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v54 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v53, "ProductId");
  Social::Events::Event::addProperty<std::string>((int)&v60, &v53, v9);
  v18 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v53 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v52, "locale");
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v19 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v19 = &ServiceLocator<AppPlatform>::mDefaultService;
  v20 = (const char **)(*(int (**)(void))(**(_DWORD **)v19 + 136))();
  Social::Events::Event::addProperty<std::string>((int)&v60, &v52, v20);
  v21 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v52 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  if ( *((_DWORD *)*a5 - 3) )
    sub_21E94B4((void **)&v51, "TransactionId");
    Social::Events::Event::addProperty<std::string>((int)&v60, &v51, a5);
    v22 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v51 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      }
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v48, "HasNewContent");
  Social::Events::EventManager::getGlobalProperty((int)&v49, (int)v6, (int **)&v48);
  v23 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v48 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  Json::Value::Value((Json::Value *)&v47, 0);
  v24 = Json::Value::operator!=((int)&v50, (int)&v47);
  Json::Value::~Value((Json::Value *)&v47);
  if ( v24 == 1 )
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
      (int)&v62,
      (unsigned __int64 *)&v61,
      &v49,
      (int)&v49);
  sub_21E94B4((void **)&v46, "PurchasePrice");
  Social::Events::Event::addProperty<std::string>((int)&v60, &v46, v7);
  v25 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v46 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  Social::Events::EventManager::recordEvent((int)v6);
  Json::Value::~Value((Json::Value *)&v50);
  v26 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v49 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  return Social::Events::Event::~Event((int)&v60);
}


int __fastcall MinecraftEventing::fireEventBossKilled(int result, Player *a2, int a3, int a4, __int64 a5, int a6)
{
  int v6; // r7@1
  int v7; // r5@1
  int v8; // r6@1
  Social::Events::EventManager *v9; // r8@4
  int v10; // r7@4
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  __int64 v23; // [sp+8h] [bp-B0h]@10
  int v24; // [sp+14h] [bp-A4h]@10
  int v25; // [sp+1Ch] [bp-9Ch]@9
  int v26; // [sp+20h] [bp-98h]@8
  int v27; // [sp+28h] [bp-90h]@8
  void *ptr; // [sp+2Ch] [bp-8Ch]@4
  int v29; // [sp+44h] [bp-74h]@5
  int v30; // [sp+4Ch] [bp-6Ch]@4
  char v31; // [sp+50h] [bp-68h]@4
  Player *v32; // [sp+98h] [bp-20h]@1

  v6 = result;
  v7 = a4;
  v8 = a3;
  v32 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1440))(v6);
      if ( result )
      {
        v9 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1440))(v6) + 4);
        v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1444))(v6);
        sub_21E94B4((void **)&v30, "BossKilled");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v9, v10);
        Social::Events::Event::Event((int)&v31, v10, &v30, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v29 != ptr )
          operator delete(ptr);
        v11 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v30 - 4);
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
            j_j_j_j__ZdlPv_9(v11);
        }
        sub_21E94B4((void **)&v27, "BossType");
        v26 = a5;
        Social::Events::Event::addProperty<int>((int)&v31, &v27, &v26);
        v12 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v27 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v25, "PartySize");
        Social::Events::Event::addProperty<int>((int)&v31, &v25, (int *)&v32);
        v13 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v25 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v24, "BossUniqueId");
        v23 = __PAIR__(v7, v8);
        Social::Events::Event::addProperty<long long>((int)&v31, &v24, &v23);
        v14 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v24 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        Social::Events::EventManager::recordEvent((int)v9);
        result = Social::Events::Event::~Event((int)&v31);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventAppResumed(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r6@1
  Social::Events::EventManager *v2; // r4@1
  unsigned int v3; // r8@1
  int *v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  void *ptr; // [sp+4h] [bp-8Ch]@4
  int v19; // [sp+1Ch] [bp-74h]@5
  int v20; // [sp+24h] [bp-6Ch]@4
  char v21; // [sp+28h] [bp-68h]@4
  int v22; // [sp+74h] [bp-1Ch]@2
  int v23; // [sp+78h] [bp-18h]@2
  int v24; // [sp+80h] [bp-10h]@2
  int v25; // [sp+90h] [bp+0h]@1
  int v26; // [sp+A0h] [bp+10h]@1

  v1 = this;
  v2 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v3 = *((_DWORD *)this + 3);
  Crypto::Random::generateUUID((int)&v25);
  mce::UUID::asString((mce::UUID *)&v26);
  v4 = (int *)((char *)v1 + 28);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v26);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v22, "AppSessionID");
  Social::Events::EventManager::setCommonProperty<std::string>(&v23, (int)v2, (int **)&v22, (const char **)v4);
  Json::Value::~Value((Json::Value *)&v24);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v23 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v20, "AppResumed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v2, v3);
  Social::Events::Event::Event((int)&v21, v3, &v20, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v19 != ptr )
    operator delete(ptr);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  Social::Events::EventManager::recordEvent((int)v2);
  return Social::Events::Event::~Event((int)&v21);
}


void __fastcall MinecraftEventing::fireEventSplitScreenUpdated(MinecraftEventing *this, const ClientInstance *a2)
{
  ClientInstance *v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  MinecraftGame *v5; // r0@2
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  Options *v10; // r0@6
  int v11; // r6@6
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  void *v16; // r0@14
  void *v17; // r0@15
  unsigned int *v18; // r2@18
  signed int v19; // r1@20
  unsigned int *v20; // r2@22
  signed int v21; // r1@24
  unsigned int *v22; // r2@26
  signed int v23; // r1@28
  unsigned int *v24; // r2@30
  signed int v25; // r1@32
  unsigned int *v26; // r2@38
  signed int v27; // r1@40
  unsigned int *v28; // r2@42
  signed int v29; // r1@44
  unsigned int *v30; // r2@50
  signed int v31; // r1@52
  int v32; // [sp+8h] [bp-A0h]@16
  int v33; // [sp+10h] [bp-98h]@15
  int v34; // [sp+18h] [bp-90h]@14
  int v35; // [sp+1Ch] [bp-8Ch]@8
  int v36; // [sp+24h] [bp-84h]@6
  int v37; // [sp+28h] [bp-80h]@8
  int v38; // [sp+30h] [bp-78h]@8
  int v39; // [sp+44h] [bp-64h]@4
  int v40; // [sp+4Ch] [bp-5Ch]@4
  int v41; // [sp+50h] [bp-58h]@4
  int v42; // [sp+58h] [bp-50h]@4
  int v43; // [sp+6Ch] [bp-3Ch]@2
  int v44; // [sp+74h] [bp-34h]@2
  int v45; // [sp+78h] [bp-30h]@2
  int v46; // [sp+80h] [bp-28h]@2

  v2 = a2;
  v3 = *((_DWORD *)this + 1);
  v4 = ClientInstance::getUserId(a2);
  if ( ClientInstance::isSplitScreenActive(v2) == 1 )
  {
    sub_21E94B4((void **)&v44, "ActivePlayers");
    v5 = (MinecraftGame *)ClientInstance::getMinecraftGame(v2);
    v43 = MinecraftGame::getClientInstanceCount(v5);
    Social::Events::EventManager::setPlayerCommonProperty<int>((int)&v45, v3, v4, (int **)&v44, &v43);
    Json::Value::~Value((Json::Value *)&v46);
    v6 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v45 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v7 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v44 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v40, "SplitScreenPosition");
    v39 = ClientInstance::getClientSubId(v2);
    Social::Events::EventManager::setPlayerCommonProperty<int>((int)&v41, v3, v4, (int **)&v40, &v39);
    Json::Value::~Value((Json::Value *)&v42);
    v8 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v41 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v40 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (Options *)ClientInstance::getOptions(v2);
    v11 = Options::getSplitscreenDirection(v10);
    sub_21E94B4((void **)&v36, "SplitScreenMode");
    if ( v11 != 1 )
      v11 = 2;
    v35 = v11;
    Social::Events::EventManager::setPlayerCommonProperty<int>((int)&v37, v3, v4, (int **)&v36, &v35);
    Json::Value::~Value((Json::Value *)&v38);
    v12 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v37 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v36 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        goto LABEL_47;
LABEL_46:
      v15 = (*v14)--;
LABEL_47:
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
      return;
  }
  else
    sub_21E94B4((void **)&v34, "ActivePlayers");
    Social::Events::EventManager::removePlayerCommonProperty(v3, v4, (int **)&v34);
    v16 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v34 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v33, "SplitScreenPosition");
    Social::Events::EventManager::removePlayerCommonProperty(v3, v4, (int **)&v33);
    v17 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v33 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    sub_21E94B4((void **)&v32, "SplitScreenMode");
    Social::Events::EventManager::removePlayerCommonProperty(v3, v4, (int **)&v32);
    v13 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v32 - 4);
      goto LABEL_46;
}


int __fastcall MinecraftEventing::fireEventStructureGenerated(int a1, char a2, int a3, int a4, int a5, unsigned __int64 *a6)
{
  char v6; // r6@1
  Social::Events::EventManager *v7; // r5@1
  unsigned int v8; // r4@1
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  void *v12; // r0@7
  void *v13; // r0@8
  _DWORD *v14; // r2@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  unsigned int *v17; // r2@16
  signed int v18; // r1@18
  unsigned int *v19; // r2@20
  signed int v20; // r1@22
  unsigned int *v21; // r2@24
  signed int v22; // r1@26
  unsigned int *v23; // r2@28
  signed int v24; // r1@30
  unsigned int *v25; // r2@32
  signed int v26; // r1@34
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  int v31; // r10@76
  void *v32; // r0@79
  void *v33; // r0@80
  void *v34; // r0@81
  void *v35; // r0@82
  void *v36; // r0@83
  void *v37; // r0@84
  void *v38; // r0@85
  void *v39; // r0@86
  unsigned int *v41; // r2@89
  signed int v42; // r1@91
  unsigned int *v43; // r2@93
  signed int v44; // r1@95
  unsigned int *v45; // r2@97
  signed int v46; // r1@99
  unsigned int *v47; // r2@101
  signed int v48; // r1@103
  unsigned int *v49; // r2@105
  signed int v50; // r1@107
  _DWORD *v51; // [sp+28h] [bp-180h]@10
  _DWORD *v52; // [sp+2Ch] [bp-17Ch]@76
  Social::Events::EventManager *v53; // [sp+30h] [bp-178h]@1
  char v54; // [sp+37h] [bp-171h]@86
  int v55; // [sp+3Ch] [bp-16Ch]@40
  int v56; // [sp+40h] [bp-168h]@85
  int v57; // [sp+48h] [bp-160h]@36
  __int16 v58; // [sp+4Eh] [bp-15Ah]@84
  int v59; // [sp+54h] [bp-154h]@32
  int v60; // [sp+5Ch] [bp-14Ch]@28
  int v61; // [sp+64h] [bp-144h]@24
  int v62; // [sp+6Ch] [bp-13Ch]@20
  int v63; // [sp+74h] [bp-134h]@16
  void *v64; // [sp+78h] [bp-130h]@76
  int v65; // [sp+90h] [bp-118h]@77
  int v66; // [sp+98h] [bp-110h]@12
  char v67; // [sp+9Ch] [bp-10Ch]@76
  char v68; // [sp+E7h] [bp-C1h]@8
  int v69; // [sp+ECh] [bp-BCh]@8
  int v70; // [sp+F4h] [bp-B4h]@7
  int v71; // [sp+FCh] [bp-ACh]@6
  int v72; // [sp+104h] [bp-A4h]@5
  void *ptr; // [sp+108h] [bp-A0h]@1
  int v74; // [sp+120h] [bp-88h]@2
  int v75; // [sp+128h] [bp-80h]@1
  char v76; // [sp+12Ch] [bp-7Ch]@1
  int v77; // [sp+174h] [bp-34h]@1
  int v78; // [sp+178h] [bp-30h]@1
  int v79; // [sp+17Ch] [bp-2Ch]@1

  v6 = a2;
  v79 = a3;
  v77 = a5;
  v78 = a4;
  v7 = *(Social::Events::EventManager **)(a1 + 4);
  v8 = *(_DWORD *)(a1 + 12);
  v53 = *(Social::Events::EventManager **)(a1 + 4);
  sub_21E94B4((void **)&v75, "StructureGenerated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
  Social::Events::Event::Event((int)&v76, v8, &v75, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v74 != ptr )
    operator delete(ptr);
  v9 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
  {
    v41 = (unsigned int *)(v75 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
    }
    else
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  sub_21E94B4((void **)&v72, "StructureOriginX");
  Social::Events::Event::addProperty<int>((int)&v76, &v72, &v79);
  v10 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v72 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v71, "StructureOriginY");
  Social::Events::Event::addProperty<int>((int)&v76, &v71, &v78);
  v11 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v71 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v70, "StructureOriginZ");
  Social::Events::Event::addProperty<int>((int)&v76, &v70, &v77);
  v12 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v70 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v69, "StructureFeatureType");
  v68 = v6;
  Social::Events::Event::addProperty<signed char>((int)&v76, &v69, &v68);
  v13 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v69 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  Social::Events::EventManager::recordEvent((int)v7);
  if ( v6 == 8 )
    v14 = (_DWORD *)*a6;
    v51 = (_DWORD *)(*a6 >> 32);
    if ( v14 != v51 )
      {
        v31 = *v14;
        v52 = v14;
        sub_21E94B4((void **)&v66, "StructurePiece");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&v64, v53, v8);
        Social::Events::Event::Event((int)&v67, v8, &v66, (int)&v64, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&v64);
        if ( v64 && &v65 != v64 )
          operator delete(v64);
        v32 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v66 - 4);
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
            j_j_j_j__ZdlPv_9(v32);
        }
        sub_21E94B4((void **)&v63, "StructurePieceName");
        Social::Events::Event::addProperty<std::string>((int)&v67, &v63, (const char **)(v31 + 112));
        v33 = (void *)(v63 - 12);
        if ( (int *)(v63 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v63 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        sub_21E94B4((void **)&v62, "StructurePiecePositionX");
        Social::Events::Event::addProperty<int>((int)&v67, &v62, (int *)(v31 + 124));
        v34 = (void *)(v62 - 12);
        if ( (int *)(v62 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v62 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        sub_21E94B4((void **)&v61, "StructurePiecePositionY");
        Social::Events::Event::addProperty<int>((int)&v67, &v61, (int *)(v31 + 128));
        v35 = (void *)(v61 - 12);
        if ( (int *)(v61 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v61 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        sub_21E94B4((void **)&v60, "StructurePiecePositionZ");
        Social::Events::Event::addProperty<int>((int)&v67, &v60, (int *)(v31 + 132));
        v36 = (void *)(v60 - 12);
        if ( (int *)(v60 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v60 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        sub_21E94B4((void **)&v59, "StructurePieceRotation");
        v58 = *(_WORD *)(v31 + 116);
        Social::Events::Event::addProperty<unsigned short>((int)&v67, &v59, &v58);
        v37 = (void *)(v59 - 12);
        if ( (int *)(v59 - 12) != &dword_28898C0 )
          v25 = (unsigned int *)(v59 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        sub_21E94B4((void **)&v57, "StructurePieceMirror");
        v56 = *(_DWORD *)(v31 + 120);
        Social::Events::Event::addProperty<int>((int)&v67, &v57, &v56);
        v38 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v57 - 4);
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v38);
        sub_21E94B4((void **)&v55, "StructureFeatureType");
        v54 = 8;
        Social::Events::Event::addProperty<signed char>((int)&v67, &v55, &v54);
        v39 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v55 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v39);
        Social::Events::EventManager::recordEvent((int)v53);
        Social::Events::Event::~Event((int)&v67);
        v14 = v52 + 1;
      }
      while ( v52 + 1 != v51 );
  return Social::Events::Event::~Event((int)&v76);
}


void __fastcall MinecraftEventing::anonymizeIPAddress(void **a1, int a2, int *a3)
{
  MinecraftEventing::anonymizeIPAddress(a1, a2, a3);
}


void __fastcall MinecraftEventing::addBehaviorPackData(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  int v8; // r0@4
  void *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  unsigned int *v16; // r2@20
  signed int v17; // r1@22
  char v18; // [sp+3h] [bp-35h]@6
  int v19; // [sp+8h] [bp-30h]@4
  int v20; // [sp+10h] [bp-28h]@3
  int v21; // [sp+18h] [bp-20h]@2
  int v22; // [sp+20h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  sub_21E94B4((void **)&v22, "EntitiesCount");
  Social::Events::Event::addProperty<unsigned int>(v3, &v22, (unsigned int *)v4);
  v5 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v22 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v21, "LootTablesCount");
  Social::Events::Event::addProperty<unsigned int>(v3, &v21, (unsigned int *)(v4 + 4));
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v21 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v20, "TradeTablesCount");
  Social::Events::Event::addProperty<unsigned int>(v3, &v20, (unsigned int *)(v4 + 8));
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v19, "HasPlugins");
  v8 = *(_DWORD *)(v4 + 12);
  if ( v8 )
    LOBYTE(v8) = 1;
  v18 = v8;
  Social::Events::Event::addProperty<bool>(v3, &v19, (bool *)&v18);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall MinecraftEventing::fireEventAgentCommand(int a1, int a2, int a3, int *a4, const char **a5, const char **a6)
{
  int v6; // r4@1
  int v7; // r7@1
  int *v8; // r9@1
  int v9; // r6@1
  int result; // r0@1
  Social::Events::EventManager *v11; // r8@3
  int v12; // r4@3
  void *v13; // r0@6
  int v14; // r4@8
  char *v15; // r0@8
  int v16; // r4@9
  int v17; // r4@10
  int v18; // r4@11
  int v19; // r4@14
  int v20; // r6@16
  void *v21; // r0@16
  void *v22; // r0@17
  int v23; // r4@18
  void *v24; // r0@18
  void *v25; // r0@19
  void *v26; // r0@20
  void *v27; // r0@21
  void *v28; // r0@22
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  unsigned int *v37; // r2@41
  signed int v38; // r1@43
  unsigned int *v39; // r2@45
  signed int v40; // r1@47
  unsigned int *v41; // r2@73
  signed int v42; // r1@75
  unsigned int *v43; // r2@77
  signed int v44; // r1@79
  void **v45; // [sp+8h] [bp-148h]@18
  int v46; // [sp+Ch] [bp-144h]@19
  int v47; // [sp+14h] [bp-13Ch]@18
  int v48; // [sp+1Ch] [bp-134h]@18
  char v49; // [sp+20h] [bp-130h]@18
  int v50; // [sp+38h] [bp-118h]@16
  int v51; // [sp+3Ch] [bp-114h]@16
  char v52; // [sp+40h] [bp-110h]@16
  char v53; // [sp+50h] [bp-100h]@14
  char v54; // [sp+60h] [bp-F0h]@10
  char v55; // [sp+70h] [bp-E0h]@9
  char v56; // [sp+80h] [bp-D0h]@11
  char v57; // [sp+90h] [bp-C0h]@8
  int v58; // [sp+A4h] [bp-ACh]@7
  int v59; // [sp+ACh] [bp-A4h]@7
  char v60; // [sp+B0h] [bp-A0h]@7
  void *ptr; // [sp+C4h] [bp-8Ch]@3
  int v62; // [sp+DCh] [bp-74h]@4
  int v63; // [sp+E4h] [bp-6Ch]@3
  char v64; // [sp+E8h] [bp-68h]@3

  v6 = a1;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  result = (*(int (**)(void))(*(_DWORD *)a1 + 1408))();
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1440))(v6);
    if ( result )
    {
      v11 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1440))(v6) + 4);
      v12 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 1444))(v6);
      sub_21E94B4((void **)&v63, "AgentCommand");
      MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v11, v12);
      Social::Events::Event::Event((int)&v64, v12, &v63, (int)&ptr, 1);
      std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
      if ( ptr && &v62 != ptr )
        operator delete(ptr);
      v13 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
      {
        v29 = (unsigned int *)(v63 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
        }
        else
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      }
      Json::Value::Value(&v60, 0);
      sub_21E94B4((void **)&v59, "success");
      sub_21E94B4((void **)&v58, "result");
      switch ( v7 )
        case 0:
          v14 = Json::Value::operator[]((Json::Value *)&v60, (const char **)&v59);
          Json::Value::Value((Json::Value *)&v57, 0);
          Json::Value::operator=(v14, (const Json::Value *)&v57);
          v15 = &v57;
          goto LABEL_12;
        case 2:
          v16 = Json::Value::operator[]((Json::Value *)&v60, (const char **)&v58);
          Json::Value::Value((Json::Value *)&v55, 0);
          Json::Value::operator=(v16, (const Json::Value *)&v55);
          v15 = &v55;
        case 3:
          v17 = Json::Value::operator[]((Json::Value *)&v60, (const char **)&v58);
          Json::Value::Value((Json::Value *)&v54, 1);
          Json::Value::operator=(v17, (const Json::Value *)&v54);
          v15 = &v54;
        case 1:
          v18 = Json::Value::operator[]((Json::Value *)&v60, (const char **)&v59);
          Json::Value::Value((Json::Value *)&v56, 1);
          Json::Value::operator=(v18, (const Json::Value *)&v56);
          v15 = &v56;
LABEL_12:
          Json::Value::~Value((Json::Value *)v15);
          break;
        default:
      if ( v9 == -1 )
        if ( *(_DWORD *)(*v8 - 12) )
          v20 = Json::Value::operator[]((Json::Value *)&v60, a5);
          sub_21E94B4((void **)&v50, " ");
          Util::stringTrim(&v51, v8, (char *)&v50);
          Json::Value::Value((int)&v52, (const char **)&v51);
          Json::Value::operator=(v20, (const Json::Value *)&v52);
          Json::Value::~Value((Json::Value *)&v52);
          v21 = (void *)(v51 - 12);
          if ( (int *)(v51 - 12) != &dword_28898C0 )
          {
            v41 = (unsigned int *)(v51 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v42 = __ldrex(v41);
              while ( __strex(v42 - 1, v41) );
            }
            else
              v42 = (*v41)--;
            if ( v42 <= 0 )
              j_j_j_j__ZdlPv_9(v21);
          }
          v22 = (void *)(v50 - 12);
          if ( (int *)(v50 - 12) != &dword_28898C0 )
            v43 = (unsigned int *)(v50 - 4);
                v44 = __ldrex(v43);
              while ( __strex(v44 - 1, v43) );
              v44 = (*v43)--;
            if ( v44 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
      else
        v19 = Json::Value::operator[]((Json::Value *)&v60, a5);
        Json::Value::Value((Json::Value *)&v53, v9);
        Json::Value::operator=(v19, (const Json::Value *)&v53);
        Json::Value::~Value((Json::Value *)&v53);
      v23 = Json::Value::operator[]((Json::Value *)&v60, "commandName");
      Json::Value::Value((int)&v49, a6);
      Json::Value::operator=(v23, (const Json::Value *)&v49);
      Json::Value::~Value((Json::Value *)&v49);
      sub_21E94B4((void **)&v48, "Result");
      Json::FastWriter::FastWriter((Json::FastWriter *)&v45);
      Json::FastWriter::write((Json::FastWriter *)&v47, (const Json::Value *)&v45, (const Json::Value *)&v60);
      Social::Events::Event::addProperty<std::string>((int)&v64, &v48, (const char **)&v47);
      v24 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v47 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          v32 = (*v31)--;
        if ( v32 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v45 = &off_2725B14;
      v25 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v46 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      Json::Writer::~Writer((Json::Writer *)&v45);
      v26 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v48 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
      Social::Events::EventManager::recordEvent((int)v11);
      v27 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v58 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v27);
      v28 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v59 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      Json::Value::~Value((Json::Value *)&v60);
      result = Social::Events::Event::~Event((int)&v64);
    }
  }
  return result;
}


signed int __fastcall MinecraftEventing::fireEventPlayerTransform(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing *v2; // r5@1
  int v3; // r0@1
  Social::Events::EventManager *v4; // r4@1
  signed int result; // r0@1
  unsigned int v6; // r6@2
  void *v7; // r0@5
  int v8; // r0@6
  __int64 v9; // r2@6
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v18; // r0@9
  void *v19; // r0@10
  void *v20; // r0@11
  void *v21; // r0@12
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  unsigned int *v24; // r2@19
  signed int v25; // r1@21
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  int v38; // [sp+4h] [bp-CCh]@12
  int v39; // [sp+Ch] [bp-C4h]@12
  int v40; // [sp+10h] [bp-C0h]@10
  int v41; // [sp+18h] [bp-B8h]@10
  float v42; // [sp+1Ch] [bp-B4h]@9
  int v43; // [sp+24h] [bp-ACh]@9
  int v44; // [sp+2Ch] [bp-A4h]@8
  int v45; // [sp+34h] [bp-9Ch]@7
  int v46; // [sp+3Ch] [bp-94h]@6
  __int64 v47; // [sp+40h] [bp-90h]@6
  int v48; // [sp+48h] [bp-88h]@6
  void *ptr; // [sp+4Ch] [bp-84h]@2
  int v50; // [sp+64h] [bp-6Ch]@3
  int v51; // [sp+6Ch] [bp-64h]@2
  char v52; // [sp+70h] [bp-60h]@2
  char v53; // [sp+78h] [bp-58h]@6

  v2 = this;
  v3 = (*(int (**)(void))(*(_DWORD *)this + 1440))();
  v4 = *(Social::Events::EventManager **)(v3 + 4);
  result = Social::Events::EventManager::hasListeners(*(Social::Events::EventManager **)(v3 + 4), 9);
  if ( result == 1 )
  {
    v6 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) + 12);
    sub_21E94B4((void **)&v51, "PlayerTransform");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
    Social::Events::Event::Event((int)&v52, v6, &v51, (int)&ptr, 9);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v50 != ptr )
      operator delete(ptr);
    v7 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
    {
      v22 = (unsigned int *)(v51 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    v53 = 0;
    v8 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 52))(v2);
    v9 = *(_QWORD *)v8;
    v48 = *(_DWORD *)(v8 + 8);
    v47 = v9;
    sub_21E94B4((void **)&v46, "PosX");
    Social::Events::Event::addProperty<float>((int)&v52, &v46, (int)&v47);
    v10 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v46 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v45, "PosY");
    Social::Events::Event::addProperty<float>((int)&v52, &v45, (unsigned int)&v47 | 4);
    v11 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v45 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v44, "PosZ");
    Social::Events::Event::addProperty<float>((int)&v52, &v44, (int)&v48);
    v12 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v44 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v43, "PlayerYRot");
    _R0 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 636))(v2);
    __asm
      VMOV            S0, R0
      VSTR            S0, [SP,#0xD0+var_B4]
    Social::Events::Event::addProperty<float>((int)&v52, &v43, (int)&v42);
    v18 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v43 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v41, "PlayerId");
    mce::UUID::asString((mce::UUID *)&v40);
    Social::Events::Event::addProperty<std::string>((int)&v52, &v41, (const char **)&v40);
    v19 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v40 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    v20 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v41 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v39, "Dimension");
    v38 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 524))(v2);
    Social::Events::Event::addProperty<unsigned int>((int)&v52, &v39, (unsigned int *)&v38);
    v21 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v39 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    Social::Events::EventManager::recordEvent((int)v4);
    result = Social::Events::Event::~Event((int)&v52);
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventEndOfDay(MinecraftEventing *this, Player *a2, Level *a3)
{
  MinecraftEventing::fireEventEndOfDay(this, a2, a3);
}


void __fastcall MinecraftEventing::fireEventPlayerMessageSay(int a1, const char **a2, const char **a3)
{
  const char **v3; // r5@1
  const char **v4; // r4@1
  int v5; // r6@1
  void **v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+Ch] [bp-2Ch]@1
  int v14; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v6 = sub_21E94B4((void **)&v13, "say");
  MinecraftEventing::fireEventPlayerMessage(v5, v3, (const char **)&v14, v4, (const char **)v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


signed int __fastcall MinecraftEventing::fireEventChunkUnloaded(MinecraftEventing *this, LevelChunk *a2)
{
  MinecraftEventing *v2; // r6@1
  LevelChunk *v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  signed int result; // r0@1
  unsigned int v6; // r6@2
  void *v7; // r0@5
  void *v8; // r0@6
  int *v9; // r0@7
  void *v10; // r0@7
  char *v11; // r0@8
  void *v12; // r0@8
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v21; // [sp+Ch] [bp-9Ch]@8
  int v22; // [sp+14h] [bp-94h]@7
  int v23; // [sp+18h] [bp-90h]@6
  int v24; // [sp+20h] [bp-88h]@6
  void *ptr; // [sp+24h] [bp-84h]@2
  int v26; // [sp+3Ch] [bp-6Ch]@3
  int v27; // [sp+44h] [bp-64h]@2
  char v28; // [sp+48h] [bp-60h]@2

  v2 = this;
  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  result = Social::Events::EventManager::hasListeners(*((Social::Events::EventManager **)this + 1), 9);
  if ( result == 1 )
  {
    v6 = *((_DWORD *)v2 + 3);
    sub_21E94B4((void **)&v27, "ChunkUnloaded");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
    Social::Events::Event::Event((int)&v28, v6, &v27, (int)&ptr, 1);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v26 != ptr )
      operator delete(ptr);
    v7 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v27 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    sub_21E94B4((void **)&v24, "Dimension");
    v23 = LevelChunk::getDimensionId(v3);
    Social::Events::Event::addProperty<DimensionId>((int)&v28, &v24, &v23);
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v24 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v22, "ChunkX");
    v9 = (int *)LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v22, v9);
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v21, "ChunkZ");
    v11 = LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v21, (int *)v11 + 1);
    v12 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Social::Events::EventManager::recordEvent((int)v4);
    result = Social::Events::Event::~Event((int)&v28);
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventItemAcquired(int result, ItemInstance *a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r9@1
  ItemInstance *v7; // r7@1
  Social::Events::EventManager *v8; // r8@4
  int v9; // r4@4
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  int v25; // [sp+4h] [bp-BCh]@11
  int v26; // [sp+Ch] [bp-B4h]@11
  int v27; // [sp+10h] [bp-B0h]@10
  int v28; // [sp+18h] [bp-A8h]@10
  __int16 v29; // [sp+1Eh] [bp-A2h]@9
  int v30; // [sp+24h] [bp-9Ch]@9
  int v31; // [sp+28h] [bp-98h]@8
  int v32; // [sp+30h] [bp-90h]@8
  void *ptr; // [sp+34h] [bp-8Ch]@4
  int v34; // [sp+4Ch] [bp-74h]@5
  int v35; // [sp+54h] [bp-6Ch]@4
  char v36; // [sp+58h] [bp-68h]@4
  char v37; // [sp+60h] [bp-60h]@8

  v4 = result;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v35, "ItemAcquired");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
        Social::Events::Event::Event((int)&v36, v9, &v35, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v34 != ptr )
          operator delete(ptr);
        v10 = (void *)(v35 - 12);
        if ( (int *)(v35 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v35 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        v37 = 1;
        sub_21E94B4((void **)&v32, "Type");
        v31 = ItemInstance::getId(v7);
        Social::Events::Event::addProperty<int>((int)&v36, &v32, &v31);
        v11 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v32 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v30, "AuxType");
        v29 = ItemInstance::getAuxValue(v7);
        Social::Events::Event::addProperty<short>((int)&v36, &v30, &v29);
        v12 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v30 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v28, "AcquisitionMethodID");
        v27 = v5;
        Social::Events::Event::addProperty<int>((int)&v36, &v28, &v27);
        v13 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v28 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v26, "Count");
        v25 = v6;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v36, &v26, 0, (unsigned int *)&v25);
        v14 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v26 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        Social::Events::EventManager::recordEvent((int)v8);
        result = Social::Events::Event::~Event((int)&v36);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPackImportedCompleted(int a1, int a2, PackManifest *a3, int a4, int a5)
{
  MinecraftEventing::fireEventPackImportedCompleted(a1, a2, a3, a4, a5);
}


MinecraftEventing *__fastcall MinecraftEventing::~MinecraftEventing(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r4@1
  void (__fastcall *v2)(char *, char *, signed int); // r3@2
  int v3; // r1@4
  void *v4; // r0@4
  int v5; // r1@5
  void *v6; // r0@5
  int v7; // r1@6
  void *v8; // r0@6
  Social::Events::EventManager *v9; // r0@7
  Social::Events::EventManager *v10; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_26E8E84;
  if ( *((_DWORD *)this + 12) )
  {
    (*((void (__fastcall **)(_DWORD))this + 13))((char *)this + 40);
    v2 = (void (__fastcall *)(char *, char *, signed int))*((_DWORD *)v1 + 12);
    if ( v2 )
    {
      v2((char *)v1 + 40, (char *)v1 + 40, 3);
      *((_DWORD *)v1 + 12) = 0;
      *((_DWORD *)v1 + 13) = 0;
    }
  }
  v3 = *((_DWORD *)v1 + 8);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = *((_DWORD *)v1 + 7);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v5 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 6);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v7 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (Social::Events::EventManager *)*((_DWORD *)v1 + 1);
  if ( v9 )
    v10 = Social::Events::EventManager::~EventManager(v9);
    operator delete((void *)v10);
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall MinecraftEventing::fireEventAgentCreated(MinecraftEventing *this, Player *a2)
{
  MinecraftEventing *v2; // r5@1
  int result; // r0@1
  Social::Events::EventManager *v4; // r4@3
  int v5; // r5@3
  void *v6; // r0@6
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  void *ptr; // [sp+8h] [bp-80h]@3
  int v10; // [sp+20h] [bp-68h]@4
  int v11; // [sp+28h] [bp-60h]@3
  char v12; // [sp+2Ch] [bp-5Ch]@3

  v2 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 1408))();
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2);
    if ( result )
    {
      v4 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1440))(v2) + 4);
      v5 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v2 + 1444))(v2);
      sub_21E94B4((void **)&v11, "AgentCreated");
      MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
      Social::Events::Event::Event((int)&v12, v5, &v11, (int)&ptr, 0);
      std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
      if ( ptr && &v10 != ptr )
        operator delete(ptr);
      v6 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      Social::Events::EventManager::recordEvent((int)v4);
      result = Social::Events::Event::~Event((int)&v12);
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventWorldUnloaded(MinecraftEventing *this, Player *a2, const LevelData *a3, unsigned int a4)
{
  MinecraftEventing *v4; // r6@1
  LevelData *v5; // r8@1
  const char *v6; // r4@4
  int v7; // r0@6
  int v8; // r9@9
  _DWORD *v9; // r0@9
  int *v10; // r7@9
  char *v11; // r5@9
  Social::Events::EventManager *v12; // r4@15
  int v13; // r5@15
  void *v14; // r0@18
  void *v15; // r0@19
  void *v16; // r0@20
  void *v17; // r0@21
  char *v18; // r0@22
  char *v19; // r0@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  unsigned int *v26; // r2@37
  signed int v27; // r1@39
  unsigned int *v28; // r2@41
  signed int v29; // r1@43
  unsigned int *v30; // r2@45
  signed int v31; // r1@47
  int v32; // [sp+8h] [bp-C8h]@21
  int v33; // [sp+10h] [bp-C0h]@20
  int v34; // [sp+14h] [bp-BCh]@19
  int v35; // [sp+1Ch] [bp-B4h]@19
  void *ptr; // [sp+20h] [bp-B0h]@15
  int v37; // [sp+38h] [bp-98h]@16
  int v38; // [sp+40h] [bp-90h]@15
  char v39; // [sp+44h] [bp-8Ch]@15
  char *v40; // [sp+90h] [bp-40h]@15
  const char *v41; // [sp+94h] [bp-3Ch]@4
  int v42; // [sp+98h] [bp-38h]@4
  int v43; // [sp+9Ch] [bp-34h]@4
  int v44; // [sp+A0h] [bp-30h]@4
  int v45; // [sp+A4h] [bp-2Ch]@4
  const LevelData *v46; // [sp+ACh] [bp-24h]@1

  v4 = this;
  v5 = a2;
  v46 = a3;
  if ( this
    && (*(int (**)(void))(*(_DWORD *)this + 1408))() == 1
    && (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v4 + 1440))(v4) )
  {
    v44 = 0;
    v45 = 0;
    v42 = 0;
    v43 = 0;
    mce::UUID::asString((mce::UUID *)&v41);
    v6 = v41;
    if ( *((_DWORD *)v41 - 1) <= -1 || (sub_21E8010((const void **)&v41), v6 = v41, *((_DWORD *)v41 - 1) <= -1) )
    {
      v7 = (int)v6;
    }
    else
      sub_21E8010((const void **)&v41);
      v7 = (int)v41;
    if ( v6 == (const char *)v7 )
      v11 = (char *)&unk_28898CC;
      v8 = v7 - (_DWORD)v6;
      v9 = sub_21E7E80(v7 - (_DWORD)v6, 0);
      v10 = v9;
      v11 = (char *)(v9 + 3);
      if ( v8 == 1 )
        *v11 = *v6;
      else
        _aeabi_memcpy(v9 + 3, v6, v8);
      if ( v10 != &dword_28898C0 )
      {
        v10[2] = 0;
        *v10 = v8;
        v11[v8] = byte_26C67B8[0];
      }
    v40 = v11;
    v12 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v4 + 1440))(v4) + 4);
    v13 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v4 + 1444))(v4);
    sub_21E94B4((void **)&v38, "WorldUnloaded");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v12, v13);
    Social::Events::Event::Event((int)&v39, v13, &v38, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v37 != ptr )
      operator delete(ptr);
    v14 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v38 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E94B4((void **)&v35, "WorldSeed");
    v34 = LevelData::getSeed(v5);
    Social::Events::Event::addProperty<unsigned int>((int)&v39, &v35, (unsigned int *)&v34);
    v15 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v35 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v33, "SaveId");
    Social::Events::Event::addProperty<std::string>((int)&v39, &v33, (const char **)&v40);
    v16 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v33 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v32, "UnloadReason");
    Social::Events::Event::addProperty<unsigned int>((int)&v39, &v32, (unsigned int *)&v46);
    v17 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v32 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    Social::Events::EventManager::recordEvent((int)v12);
    Social::Events::Event::~Event((int)&v39);
    v18 = v40 - 12;
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v40 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (char *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v41 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  }
}


int __fastcall MinecraftEventing::fireGlobalResourcePackCrashRecovery(int a1, PackInstance *a2, int a3, int a4, int a5, int a6, int a7)
{
  PackInstance *v7; // r5@1
  Social::Events::EventManager *v8; // r4@1
  unsigned int v9; // r6@1
  void *v10; // r0@4
  int v11; // r0@5
  void *v12; // r0@5
  void *v13; // r0@6
  PackManifest *v14; // r0@7
  void *v15; // r0@7
  void *v16; // r0@8
  void *v17; // r0@9
  char *v18; // r0@10
  char *v19; // r0@10
  void *v20; // r0@10
  void *v21; // r0@11
  void *v22; // r0@12
  void *v23; // r0@13
  PackManifest *v24; // r0@14
  void *v25; // r0@14
  PackManifest *v26; // r0@15
  void *v27; // r0@15
  unsigned int *v29; // r2@17
  signed int v30; // r1@19
  unsigned int *v31; // r2@21
  signed int v32; // r1@23
  unsigned int *v33; // r2@25
  signed int v34; // r1@27
  unsigned int *v35; // r2@29
  signed int v36; // r1@31
  unsigned int *v37; // r2@33
  signed int v38; // r1@35
  unsigned int *v39; // r2@37
  signed int v40; // r1@39
  unsigned int *v41; // r2@41
  signed int v42; // r1@43
  unsigned int *v43; // r2@45
  signed int v44; // r1@47
  unsigned int *v45; // r2@49
  signed int v46; // r1@51
  unsigned int *v47; // r2@53
  signed int v48; // r1@55
  unsigned int *v49; // r2@57
  signed int v50; // r1@59
  unsigned int *v51; // r2@61
  signed int v52; // r1@63
  int v53; // [sp+4h] [bp-104h]@15
  int v54; // [sp+Ch] [bp-FCh]@15
  int v55; // [sp+10h] [bp-F8h]@14
  int v56; // [sp+18h] [bp-F0h]@14
  int v57; // [sp+1Ch] [bp-ECh]@12
  int v58; // [sp+24h] [bp-E4h]@12
  int v59; // [sp+2Ch] [bp-DCh]@11
  int v60; // [sp+34h] [bp-D4h]@10
  char v61; // [sp+38h] [bp-D0h]@8
  int v62; // [sp+4Ch] [bp-BCh]@8
  int v63; // [sp+54h] [bp-B4h]@8
  char v64; // [sp+5Bh] [bp-ADh]@7
  int v65; // [sp+60h] [bp-A8h]@7
  int v66; // [sp+64h] [bp-A4h]@5
  int v67; // [sp+6Ch] [bp-9Ch]@5
  void *ptr; // [sp+70h] [bp-98h]@1
  int v69; // [sp+88h] [bp-80h]@2
  int v70; // [sp+90h] [bp-78h]@1
  char v71; // [sp+94h] [bp-74h]@1
  int v72; // [sp+DCh] [bp-2Ch]@1
  int v73; // [sp+E0h] [bp-28h]@1
  int v74; // [sp+E4h] [bp-24h]@1
  int v75; // [sp+E8h] [bp-20h]@1
  int v76; // [sp+ECh] [bp-1Ch]@1

  v7 = a2;
  v76 = a6;
  v74 = a4;
  v75 = a5;
  v72 = a7;
  v73 = a3;
  v8 = *(Social::Events::EventManager **)(a1 + 4);
  v9 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v70, "PackRecovery");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
  Social::Events::Event::Event((int)&v71, v9, &v70, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v69 != ptr )
    operator delete(ptr);
  v10 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
  {
    v29 = (unsigned int *)(v70 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  sub_21E94B4((void **)&v67, "PackName");
  v11 = PackInstance::getManifest(v7);
  PackManifest::getName((PackManifest *)&v66, v11);
  Social::Events::Event::addProperty<std::string>((int)&v71, &v67, (const char **)&v66);
  v12 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v66 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v67 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v65, "PackTypeId");
  v14 = (PackManifest *)PackInstance::getManifest(v7);
  v64 = PackManifest::getPackType(v14);
  Social::Events::Event::addProperty<char>((int)&v71, &v65, &v64);
  v15 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v65 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v63, "PackId");
  PackInstance::getPackId((PackInstance *)&v61, (int)v7);
  mce::UUID::asString((mce::UUID *)&v62);
  Social::Events::Event::addProperty<std::string>((int)&v71, &v63, (const char **)&v62);
  v16 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v62 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v63 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v60, "PackVersion");
  v18 = PackInstance::getVersion(v7);
  v19 = SemVersion::asString((SemVersion *)v18);
  Social::Events::Event::addProperty<std::string>((int)&v71, &v60, (const char **)v19);
  v20 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v60 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v59, "PackOrder");
  Social::Events::Event::addProperty<int>((int)&v71, &v59, &v72);
  v21 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v59 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v58, "PackRecoveryId");
  mce::UUID::asString((mce::UUID *)&v57);
  Social::Events::Event::addProperty<std::string>((int)&v71, &v58, (const char **)&v57);
  v22 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v57 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v58 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v56, "PackFormatVersionNum");
  v24 = (PackManifest *)PackInstance::getManifest(v7);
  v55 = PackManifest::getFormatVersion(v24);
  Social::Events::Event::addProperty<int>((int)&v71, &v56, &v55);
  v25 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v56 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  sub_21E94B4((void **)&v54, "PackOriginalFormatVersionNum");
  v26 = (PackManifest *)PackInstance::getManifest(v7);
  v53 = PackManifest::getOriginalFormatVersion(v26);
  Social::Events::Event::addProperty<int>((int)&v71, &v54, &v53);
  v27 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v54 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  Social::Events::EventManager::recordEvent((int)v8);
  return Social::Events::Event::~Event((int)&v71);
}


int __fastcall MinecraftEventing::fireEventBlockFound(int result, Player *a2, const BlockPos *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r6@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  int v19; // [sp+8h] [bp-98h]@10
  int v20; // [sp+10h] [bp-90h]@9
  int v21; // [sp+18h] [bp-88h]@8
  void *ptr; // [sp+1Ch] [bp-84h]@4
  int v23; // [sp+34h] [bp-6Ch]@5
  int v24; // [sp+3Ch] [bp-64h]@4
  char v25; // [sp+40h] [bp-60h]@4
  char v26; // [sp+48h] [bp-58h]@8

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v24, "BlockFound");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v25, v6, &v24, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v23 != ptr )
          operator delete(ptr);
        v7 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v24 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        v26 = 1;
        sub_21E94B4((void **)&v21, "PosX");
        Social::Events::Event::addProperty<int>((int)&v25, &v21, (int *)v4);
        v8 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v21 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v20, "PosY");
        Social::Events::Event::addProperty<int>((int)&v25, &v20, (int *)v4 + 1);
        v9 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v20 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v19, "PosZ");
        Social::Events::Event::addProperty<int>((int)&v25, &v19, (int *)v4 + 2);
        v10 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v19 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v25);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventPlayerMessage(int a1, const char **a2, const char **a3, const char **a4, const char **a5)
{
  const char **v5; // r7@1
  Social::Events::EventManager *v6; // r9@1
  const char **v7; // r8@1
  unsigned int v8; // r5@1
  const char **v9; // r6@1
  void *v10; // r0@4
  void *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@8
  void *v14; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  int v26; // [sp+8h] [bp-A8h]@9
  int v27; // [sp+10h] [bp-A0h]@8
  int v28; // [sp+18h] [bp-98h]@6
  int v29; // [sp+20h] [bp-90h]@5
  void *ptr; // [sp+24h] [bp-8Ch]@1
  int v31; // [sp+3Ch] [bp-74h]@2
  int v32; // [sp+44h] [bp-6Ch]@1
  char v33; // [sp+48h] [bp-68h]@1

  v5 = a2;
  v6 = *(Social::Events::EventManager **)(a1 + 4);
  v7 = a4;
  v8 = *(_DWORD *)(a1 + 12);
  v9 = a3;
  sub_21E94B4((void **)&v32, "PlayerMessage");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v8);
  Social::Events::Event::Event((int)&v33, v8, &v32, (int)&ptr, 5);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v31 != ptr )
    operator delete(ptr);
  v10 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  sub_21E94B4((void **)&v29, "MessageType");
  Social::Events::Event::addProperty<std::string>((int)&v33, &v29, a5);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v28, "Sender");
  Social::Events::Event::addProperty<std::string>((int)&v33, &v28, v5);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  if ( *((_DWORD *)*v9 - 3) )
    sub_21E94B4((void **)&v27, "Receiver");
    Social::Events::Event::addProperty<std::string>((int)&v33, &v27, v9);
    v13 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v26, "Message");
  Social::Events::Event::addProperty<std::string>((int)&v33, &v26, v7);
  v14 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  Social::Events::EventManager::recordEvent((int)v6);
  return Social::Events::Event::~Event((int)&v33);
}


int __fastcall MinecraftEventing::fireEventItemDropped(int result, Player *a2, const ItemInstance *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r6@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  __int16 v16; // [sp+6h] [bp-9Ah]@9
  int v17; // [sp+Ch] [bp-94h]@9
  int v18; // [sp+10h] [bp-90h]@8
  int v19; // [sp+18h] [bp-88h]@8
  void *ptr; // [sp+1Ch] [bp-84h]@4
  int v21; // [sp+34h] [bp-6Ch]@5
  int v22; // [sp+3Ch] [bp-64h]@4
  char v23; // [sp+40h] [bp-60h]@4

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v22, "ItemDropped");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v23, v6, &v22, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v21 != ptr )
          operator delete(ptr);
        v7 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v19, "Type");
        v18 = ItemInstance::getId(v4);
        Social::Events::Event::addProperty<int>((int)&v23, &v19, &v18);
        v8 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v19 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v17, "AuxType");
        v16 = ItemInstance::getAuxValue(v4);
        Social::Events::Event::addProperty<short>((int)&v23, &v17, &v16);
        v9 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v17 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v23);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventItemCrafted(MinecraftEventing *this, Player *a2, const ItemInstance *a3, bool a4, bool a5, int a6, int a7, int a8, int a9, bool a10, bool a11)
{
  const ItemInstance *v11; // r9@1
  Player *v12; // r10@1
  MinecraftEventing *v13; // r4@1
  int result; // r0@1
  Social::Events::EventManager *v15; // r8@4
  int v16; // r7@4
  void *v17; // r0@7
  void *v18; // r0@8
  void *v19; // r0@9
  void *v20; // r0@10
  void *v21; // r0@11
  void *v22; // r0@12
  void *v23; // r0@13
  void *v24; // r0@14
  void *v25; // r0@16
  void *v26; // r0@17
  void *v27; // r0@18
  void *v28; // r0@19
  void *v29; // r0@20
  void *v30; // r0@21
  void *v31; // r0@22
  unsigned int *v32; // r2@25
  signed int v33; // r1@27
  unsigned int *v34; // r2@29
  signed int v35; // r1@31
  unsigned int *v36; // r2@33
  signed int v37; // r1@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@89
  signed int v49; // r1@91
  unsigned int *v50; // r2@93
  signed int v51; // r1@95
  unsigned int *v52; // r2@97
  signed int v53; // r1@99
  unsigned int *v54; // r2@101
  signed int v55; // r1@103
  unsigned int *v56; // r2@105
  signed int v57; // r1@107
  unsigned int *v58; // r2@109
  signed int v59; // r1@111
  unsigned int *v60; // r2@113
  signed int v61; // r1@115
  int v62; // [sp+8h] [bp-150h]@22
  int v63; // [sp+10h] [bp-148h]@21
  int v64; // [sp+18h] [bp-140h]@20
  int v65; // [sp+20h] [bp-138h]@19
  int v66; // [sp+28h] [bp-130h]@18
  int v67; // [sp+30h] [bp-128h]@17
  int v68; // [sp+38h] [bp-120h]@16
  char v69; // [sp+3Fh] [bp-119h]@14
  int v70; // [sp+44h] [bp-114h]@14
  int v71; // [sp+4Ch] [bp-10Ch]@12
  int v72; // [sp+50h] [bp-108h]@12
  int v73; // [sp+58h] [bp-100h]@12
  int v74; // [sp+6Ch] [bp-ECh]@10
  int v75; // [sp+70h] [bp-E8h]@10
  int v76; // [sp+78h] [bp-E0h]@10
  __int16 v77; // [sp+8Eh] [bp-CAh]@9
  int v78; // [sp+94h] [bp-C4h]@9
  int v79; // [sp+98h] [bp-C0h]@8
  int v80; // [sp+A0h] [bp-B8h]@8
  void *ptr; // [sp+A4h] [bp-B4h]@4
  int v82; // [sp+BCh] [bp-9Ch]@5
  int v83; // [sp+C4h] [bp-94h]@4
  char v84; // [sp+C8h] [bp-90h]@4
  char v85; // [sp+D0h] [bp-88h]@8
  int v86; // [sp+D8h] [bp-80h]@10
  bool v87; // [sp+112h] [bp-46h]@1
  char v88; // [sp+113h] [bp-45h]@1
  int v89; // [sp+114h] [bp-44h]@1
  int v90; // [sp+118h] [bp-40h]@1
  int v91; // [sp+11Ch] [bp-3Ch]@1
  bool v92; // [sp+122h] [bp-36h]@1
  bool v93; // [sp+123h] [bp-35h]@1
  char v94; // [sp+124h] [bp-34h]@10
  char v95; // [sp+12Ch] [bp-2Ch]@12

  v11 = a3;
  v12 = a2;
  v13 = this;
  result = a6;
  v93 = a4;
  v92 = a5;
  v91 = a6;
  v89 = a8;
  v90 = a7;
  v88 = a9;
  v87 = a10;
  if ( v13 )
  {
    result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v13 + 1408))(v13);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v13 + 1440))(v13);
      if ( result )
      {
        v15 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v13 + 1440))(v13)
                                               + 4);
        v16 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v13 + 1444))(v13);
        sub_21E94B4((void **)&v83, "ItemCrafted");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v15, v16);
        Social::Events::Event::Event((int)&v84, v16, &v83, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v82 != ptr )
          operator delete(ptr);
        v17 = (void *)(v83 - 12);
        if ( (int *)(v83 - 12) != &dword_28898C0 )
        {
          v32 = (unsigned int *)(v83 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v33 = __ldrex(v32);
            while ( __strex(v33 - 1, v32) );
          }
          else
            v33 = (*v32)--;
          if ( v33 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        }
        v85 = 1;
        sub_21E94B4((void **)&v80, "Type");
        v79 = ItemInstance::getId(v12);
        Social::Events::Event::addProperty<int>((int)&v84, &v80, &v79);
        v18 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v34 = (unsigned int *)(v80 - 4);
              v35 = __ldrex(v34);
            while ( __strex(v35 - 1, v34) );
            v35 = (*v34)--;
          if ( v35 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        sub_21E94B4((void **)&v78, "AuxType");
        v77 = ItemInstance::getAuxValue(v12);
        Social::Events::Event::addProperty<short>((int)&v84, &v78, &v77);
        v19 = (void *)(v78 - 12);
        if ( (int *)(v78 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v78 - 4);
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        sub_21E94B4((void **)&v74, "CraftingSessionID");
        Social::Events::EventManager::getPlayerGlobalProperty((int)&v75, (int)v15, v16, &v74);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
          (int)&v94,
          (unsigned __int64 *)&v86,
          &v75,
          (int)&v75);
        Json::Value::~Value((Json::Value *)&v76);
        v20 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v75 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = (void *)(v74 - 12);
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v74 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v21);
        sub_21E94B4((void **)&v71, "UsedCraftingTable");
        Social::Events::EventManager::getPlayerGlobalProperty((int)&v72, (int)v15, v16, &v71);
          (int)&v95,
          &v72,
          (int)&v72);
        Json::Value::~Value((Json::Value *)&v73);
        v22 = (void *)(v72 - 12);
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v72 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v23 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v44 = (unsigned int *)(v71 - 4);
              v45 = __ldrex(v44);
            while ( __strex(v45 - 1, v44) );
            v45 = (*v44)--;
          if ( v45 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        sub_21E94B4((void **)&v70, "Count");
        v69 = *((_BYTE *)v12 + 14);
        Social::Events::Event::addMeasurement<unsigned char>((int)&v84, &v70, 1, &v69);
        v24 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v46 = (unsigned int *)(v70 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        if ( v11 == (const ItemInstance *)1 )
          sub_21E94B4((void **)&v68, "UsedSearchBar");
          Social::Events::Event::addProperty<bool>((int)&v84, &v68, &v93);
          v25 = (void *)(v68 - 12);
          if ( (int *)(v68 - 12) != &dword_28898C0 )
            v48 = (unsigned int *)(v68 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v49 = __ldrex(v48);
              while ( __strex(v49 - 1, v48) );
            }
            else
              v49 = (*v48)--;
            if ( v49 <= 0 )
              j_j_j_j__ZdlPv_9(v25);
          sub_21E94B4((void **)&v67, "CraftedAutomatically");
          Social::Events::Event::addProperty<bool>((int)&v84, &v67, &v92);
          v26 = (void *)(v67 - 12);
          if ( (int *)(v67 - 12) != &dword_28898C0 )
            v50 = (unsigned int *)(v67 - 4);
                v51 = __ldrex(v50);
              while ( __strex(v51 - 1, v50) );
              v51 = (*v50)--;
            if ( v51 <= 0 )
              j_j_j_j__ZdlPv_9(v26);
          sub_21E94B4((void **)&v66, "StartingTabID");
          Social::Events::Event::addProperty<int>((int)&v84, &v66, &v91);
          v27 = (void *)(v66 - 12);
          if ( (int *)(v66 - 12) != &dword_28898C0 )
            v52 = (unsigned int *)(v66 - 4);
                v53 = __ldrex(v52);
              while ( __strex(v53 - 1, v52) );
              v53 = (*v52)--;
            if ( v53 <= 0 )
              j_j_j_j__ZdlPv_9(v27);
          sub_21E94B4((void **)&v65, "EndingTabID");
          Social::Events::Event::addProperty<int>((int)&v84, &v65, &v90);
          v28 = (void *)(v65 - 12);
          if ( (int *)(v65 - 12) != &dword_28898C0 )
            v54 = (unsigned int *)(v65 - 4);
                v55 = __ldrex(v54);
              while ( __strex(v55 - 1, v54) );
              v55 = (*v54)--;
            if ( v55 <= 0 )
              j_j_j_j__ZdlPv_9(v28);
          sub_21E94B4((void **)&v64, "NumberOfTabsChanged");
          Social::Events::Event::addProperty<int>((int)&v84, &v64, &v89);
          v29 = (void *)(v64 - 12);
          if ( (int *)(v64 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v64 - 4);
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
          sub_21E94B4((void **)&v63, "HasCraftableFilterOn");
          Social::Events::Event::addProperty<bool>((int)&v84, &v63, (bool *)&v88);
          v30 = (void *)(v63 - 12);
          if ( (int *)(v63 - 12) != &dword_28898C0 )
            v58 = (unsigned int *)(v63 - 4);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 <= 0 )
              j_j_j_j__ZdlPv_9(v30);
          sub_21E94B4((void **)&v62, "RecipeBookShown");
          Social::Events::Event::addProperty<bool>((int)&v84, &v62, &v87);
          v31 = (void *)(v62 - 12);
          if ( (int *)(v62 - 12) != &dword_28898C0 )
            v60 = (unsigned int *)(v62 - 4);
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v31);
        Social::Events::EventManager::recordEvent((int)v15);
        result = Social::Events::Event::~Event((int)&v84);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventMultiplayerConnectionStateChanged(int a1, int a2, const char **a3, const char **a4, int a5, int a6, int a7, const char **a8)
{
  int v8; // r4@1
  const char **v9; // r9@1
  const char **v10; // r6@1
  const char *v11; // r3@1
  Social::Events::EventManager *v12; // r8@3
  unsigned int v13; // r7@3
  void *v14; // r0@6
  void *v15; // r0@7
  void *v16; // r0@8
  void *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  void *v20; // r0@12
  void *v21; // r0@13
  void *v22; // r0@14
  unsigned int *v23; // r2@16
  signed int v24; // r1@18
  unsigned int *v25; // r2@20
  signed int v26; // r1@22
  unsigned int *v27; // r2@24
  signed int v28; // r1@26
  unsigned int *v29; // r2@28
  signed int v30; // r1@30
  unsigned int *v31; // r2@32
  signed int v32; // r1@34
  unsigned int *v33; // r2@36
  signed int v34; // r1@38
  unsigned int *v35; // r2@40
  signed int v36; // r1@42
  unsigned int *v37; // r2@44
  signed int v38; // r1@46
  unsigned int *v39; // r2@48
  signed int v40; // r1@50
  int v41; // [sp+Ch] [bp-D4h]@13
  int v42; // [sp+14h] [bp-CCh]@12
  int v43; // [sp+1Ch] [bp-C4h]@11
  int v44; // [sp+24h] [bp-BCh]@10
  int v45; // [sp+2Ch] [bp-B4h]@9
  int v46; // [sp+34h] [bp-ACh]@8
  int v47; // [sp+3Ch] [bp-A4h]@7
  void *ptr; // [sp+40h] [bp-A0h]@3
  int v49; // [sp+58h] [bp-88h]@4
  int v50; // [sp+60h] [bp-80h]@3
  char v51; // [sp+64h] [bp-7Ch]@3
  int v52; // [sp+B0h] [bp-30h]@3
  int v53; // [sp+B4h] [bp-2Ch]@1
  int v54; // [sp+B8h] [bp-28h]@1
  int v55; // [sp+BCh] [bp-24h]@1

  v8 = a1;
  v9 = a4;
  v10 = a3;
  v11 = "Server";
  v55 = a5;
  v53 = a7;
  v54 = a6;
  if ( !a2 )
    v11 = "Client";
  sub_21E94B4((void **)&v52, v11);
  v12 = *(Social::Events::EventManager **)(v8 + 4);
  v13 = *(_DWORD *)(v8 + 12);
  sub_21E94B4((void **)&v50, "MultiplayerConnectionStateChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v12, v13);
  Social::Events::Event::Event((int)&v51, v13, &v50, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v49 != ptr )
    operator delete(ptr);
  v14 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v50 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  }
  sub_21E94B4((void **)&v47, "Role");
  Social::Events::Event::addProperty<std::string>((int)&v51, &v47, (const char **)&v52);
  v15 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v47 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v46, "StateType");
  Social::Events::Event::addProperty<std::string>((int)&v51, &v46, v10);
  v16 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v46 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v45, "ConnectionType");
  Social::Events::Event::addProperty<std::string>((int)&v51, &v45, v9);
  v17 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v45 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v44, "FromState");
  Social::Events::Event::addProperty<unsigned int>((int)&v51, &v44, (unsigned int *)&v55);
  v18 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v44 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v43, "ToState");
  Social::Events::Event::addProperty<unsigned int>((int)&v51, &v43, (unsigned int *)&v54);
  v19 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v43 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v42, "Port");
  Social::Events::Event::addProperty<unsigned int>((int)&v51, &v42, (unsigned int *)&v53);
  v20 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v42 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v41, "Status");
  Social::Events::Event::addProperty<std::string>((int)&v51, &v41, a8);
  v21 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v41 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  Social::Events::EventManager::recordEvent((int)v12);
  Social::Events::Event::~Event((int)&v51);
  v22 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v52 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall MinecraftEventing::_fireEventPackImportStage(int a1, int a2, PackManifest *this, int a4, int a5, char a6, char a7)
{
  MinecraftEventing::_fireEventPackImportStage(a1, a2, this, a4, a5, a6, a7);
}


int __fastcall MinecraftEventing::fireEventDevConsoleCommand(int a1, const char **a2)
{
  const char **v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v14; // [sp+24h] [bp-6Ch]@2
  int v15; // [sp+2Ch] [bp-64h]@1
  char v16; // [sp+30h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v15, "DevConsoleCommand");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v16, v4, &v15, (int)&ptr, 1);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v14 != ptr )
    operator delete(ptr);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v12, "Command");
  Social::Events::Event::addProperty<std::string>((int)&v16, &v12, v2);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v16);
}


int __fastcall MinecraftEventing::fireEventPortalUsed(int result, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@4
  int v4; // r5@4
  void *v5; // r0@7
  void *v6; // r0@8
  void *v7; // r0@9
  void *v8; // r0@10
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  unsigned int *v11; // r2@17
  signed int v12; // r1@19
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  int v17; // [sp+Ch] [bp-ACh]@9
  int v18; // [sp+10h] [bp-A8h]@9
  int v19; // [sp+18h] [bp-A0h]@9
  int v20; // [sp+2Ch] [bp-8Ch]@8
  void *ptr; // [sp+30h] [bp-88h]@4
  int v22; // [sp+48h] [bp-70h]@5
  int v23; // [sp+50h] [bp-68h]@4
  char v24; // [sp+54h] [bp-64h]@4
  int v25; // [sp+9Ch] [bp-1Ch]@1

  v2 = result;
  v25 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v3 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v23, "PortalUsed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
        Social::Events::Event::Event((int)&v24, v4, &v23, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v22 != ptr )
          operator delete(ptr);
        v5 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
        {
          v9 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v5);
        }
        sub_21E94B4((void **)&v20, "ToDim");
        Social::Events::Event::addProperty<DimensionId>((int)&v24, &v20, &v25);
        v6 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v11 = (unsigned int *)(v20 - 4);
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        Social::Events::EventManager::recordEvent((int)v3);
        sub_21E94B4((void **)&v17, "Dim");
        Social::Events::EventManager::setPlayerCommonProperty<DimensionId>((int)&v18, (int)v3, v4, (int **)&v17, &v25);
        Json::Value::~Value((Json::Value *)&v19);
        v7 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v18 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        v8 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v17 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        result = Social::Events::Event::~Event((int)&v24);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventItemEquipped(int result, Player *a2, const ItemInstance *a3, int a4)
{
  int v4; // r4@1
  const ItemInstance *v5; // r6@1
  Player *v6; // r5@1
  Social::Events::EventManager *v7; // r8@6
  int v8; // r4@6
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  __int64 v13; // r2@13
  void *v14; // r0@13
  int v15; // r8@14
  int v16; // r2@15
  signed int v17; // r1@17
  int v18; // r2@19
  signed int v19; // r1@21
  __int64 v20; // r2@31
  EnchantmentInstance *v21; // r10@32
  void *v22; // r0@34
  void *v23; // r0@35
  unsigned int *v24; // r2@47
  signed int v25; // r1@49
  unsigned int *v26; // r2@51
  signed int v27; // r1@53
  unsigned int *v28; // r2@55
  signed int v29; // r1@57
  unsigned int *v30; // r2@59
  signed int v31; // r1@61
  int v32; // r2@63
  signed int v33; // r1@65
  int v34; // [sp+8h] [bp-118h]@13
  int v35; // [sp+10h] [bp-110h]@33
  int v36; // [sp+14h] [bp-10Ch]@33
  int v37; // [sp+18h] [bp-108h]@32
  int v38; // [sp+1Ch] [bp-104h]@32
  int v39; // [sp+20h] [bp-100h]@15
  int v40; // [sp+24h] [bp-FCh]@19
  int v41; // [sp+28h] [bp-F8h]@13
  int v42; // [sp+30h] [bp-F0h]@13
  void *v43; // [sp+34h] [bp-ECh]@13
  int v44; // [sp+38h] [bp-E8h]@13
  char v45; // [sp+40h] [bp-E0h]@13
  void *v46; // [sp+44h] [bp-DCh]@43
  void *v47; // [sp+50h] [bp-D0h]@41
  void *v48; // [sp+5Ch] [bp-C4h]@39
  const ItemInstance *v49; // [sp+68h] [bp-B8h]@12
  int v50; // [sp+70h] [bp-B0h]@12
  __int16 v51; // [sp+76h] [bp-AAh]@11
  int v52; // [sp+7Ch] [bp-A4h]@11
  int v53; // [sp+80h] [bp-A0h]@10
  int v54; // [sp+88h] [bp-98h]@10
  void *ptr; // [sp+8Ch] [bp-94h]@6
  int v56; // [sp+A4h] [bp-7Ch]@7
  int v57; // [sp+ACh] [bp-74h]@6
  char v58; // [sp+B0h] [bp-70h]@6

  v4 = result;
  v5 = a3;
  v6 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        if ( ItemInstance::getId(v6) || (result = ItemInstance::getAuxValue(v6), (_WORD)result) )
        {
          v7 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
          v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
          sub_21E94B4((void **)&v57, "ItemEquipped");
          MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
          Social::Events::Event::Event((int)&v58, v8, &v57, (int)&ptr, 0);
          std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
          if ( ptr && &v56 != ptr )
            operator delete(ptr);
          v9 = (void *)(v57 - 12);
          if ( (int *)(v57 - 12) != &dword_28898C0 )
          {
            v24 = (unsigned int *)(v57 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
            }
            else
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v9);
          }
          sub_21E94B4((void **)&v54, "Type");
          v53 = ItemInstance::getId(v6);
          Social::Events::Event::addProperty<int>((int)&v58, &v54, &v53);
          v10 = (void *)(v54 - 12);
          if ( (int *)(v54 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v54 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v10);
          sub_21E94B4((void **)&v52, "AuxType");
          v51 = ItemInstance::getAuxValue(v6);
          Social::Events::Event::addProperty<short>((int)&v58, &v52, &v51);
          v11 = (void *)(v52 - 12);
          if ( (int *)(v52 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v52 - 4);
                v29 = __ldrex(v28);
              while ( __strex(v29 - 1, v28) );
              v29 = (*v28)--;
            if ( v29 <= 0 )
              j_j_j_j__ZdlPv_9(v11);
          sub_21E94B4((void **)&v50, "Slot");
          v49 = v5;
          Social::Events::Event::addProperty<int>((int)&v58, &v50, (int *)&v49);
          v12 = (void *)(v50 - 12);
          if ( (int *)(v50 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v50 - 4);
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
          ItemInstance::getEnchantsFromUserData((ItemInstance *)&v45, (int)v6);
          ItemEnchants::getAllEnchants((ItemEnchants *)&v43, (int)&v45);
          sub_21E94B4((void **)&v42, "ItemEnchantCount");
          v41 = (v44 - (signed int)v43) >> 3;
          Social::Events::Event::addProperty<unsigned int>((int)&v58, &v42, (unsigned int *)&v41);
          v34 = (int)v7;
          v14 = (void *)(v42 - 12);
          if ( (int *)(v42 - 12) != &dword_28898C0 )
            v32 = v42 - 4;
              {
                v33 = __ldrex((unsigned int *)v13);
                HIDWORD(v13) = v33 - 1;
              }
              while ( __strex(v33 - 1, (unsigned int *)v13) );
              v33 = *(_DWORD *)v13;
              HIDWORD(v13) = *(_DWORD *)v13 - 1;
              *(_DWORD *)v13 = HIDWORD(v13);
            if ( v33 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
          v15 = 0;
          do
            LODWORD(v13) = v15 + 65;
            Util::format((Util *)&v40, "ItemEnchantType%c", v13);
            LODWORD(v20) = v15 + 65;
            Util::format((Util *)&v39, "ItemEnchantLevel%c", v20);
            if ( v15 >= (v44 - (signed int)v43) >> 3 )
              v36 = -1;
              Social::Events::Event::addProperty<int>((int)&v58, &v40, &v36);
              v35 = -1;
              Social::Events::Event::addProperty<int>((int)&v58, &v39, &v35);
              v21 = (EnchantmentInstance *)((char *)v43 + 8 * v15);
              v38 = EnchantmentInstance::getEnchantType((EnchantmentInstance *)((char *)v43 + 8 * v15));
              Social::Events::Event::addProperty<unsigned int>((int)&v58, &v40, (unsigned int *)&v38);
              v37 = EnchantmentInstance::getEnchantLevel(v21);
              Social::Events::Event::addProperty<int>((int)&v58, &v39, &v37);
            v22 = (void *)(v39 - 12);
            if ( (int *)(v39 - 12) != &dword_28898C0 )
              v16 = v39 - 4;
              if ( &pthread_create )
                __dmb();
                do
                {
                  v17 = __ldrex((unsigned int *)v13);
                  HIDWORD(v13) = v17 - 1;
                }
                while ( __strex(v17 - 1, (unsigned int *)v13) );
              else
                v17 = *(_DWORD *)v13;
                HIDWORD(v13) = *(_DWORD *)v13 - 1;
                *(_DWORD *)v13 = HIDWORD(v13);
              if ( v17 <= 0 )
                j_j_j_j__ZdlPv_9(v22);
            v23 = (void *)(v40 - 12);
            if ( (int *)(v40 - 12) != &dword_28898C0 )
              v18 = v40 - 4;
                  v19 = __ldrex((unsigned int *)v13);
                  HIDWORD(v13) = v19 - 1;
                while ( __strex(v19 - 1, (unsigned int *)v13) );
                v19 = *(_DWORD *)v13;
              if ( v19 <= 0 )
                j_j_j_j__ZdlPv_9(v23);
            ++v15;
          while ( v15 != 3 );
          Social::Events::EventManager::recordEvent(v34);
          if ( v43 )
            operator delete(v43);
          if ( v48 )
            operator delete(v48);
          if ( v47 )
            operator delete(v47);
          if ( v46 )
            operator delete(v46);
          result = Social::Events::Event::~Event((int)&v58);
        }
      }
    }
  }
  return result;
}


signed int __fastcall MinecraftEventing::fireEventChunkChanged(MinecraftEventing *this, LevelChunk *a2)
{
  MinecraftEventing *v2; // r6@1
  LevelChunk *v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  signed int result; // r0@1
  unsigned int v6; // r6@2
  void *v7; // r0@5
  void *v8; // r0@6
  int *v9; // r0@7
  void *v10; // r0@7
  char *v11; // r0@8
  void *v12; // r0@8
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  int v21; // [sp+Ch] [bp-9Ch]@8
  int v22; // [sp+14h] [bp-94h]@7
  int v23; // [sp+18h] [bp-90h]@6
  int v24; // [sp+20h] [bp-88h]@6
  void *ptr; // [sp+24h] [bp-84h]@2
  int v26; // [sp+3Ch] [bp-6Ch]@3
  int v27; // [sp+44h] [bp-64h]@2
  char v28; // [sp+48h] [bp-60h]@2

  v2 = this;
  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  result = Social::Events::EventManager::hasListeners(*((Social::Events::EventManager **)this + 1), 9);
  if ( result == 1 )
  {
    v6 = *((_DWORD *)v2 + 3);
    sub_21E94B4((void **)&v27, "ChunkChanged");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
    Social::Events::Event::Event((int)&v28, v6, &v27, (int)&ptr, 1);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v26 != ptr )
      operator delete(ptr);
    v7 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v27 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    sub_21E94B4((void **)&v24, "Dimension");
    v23 = LevelChunk::getDimensionId(v3);
    Social::Events::Event::addProperty<DimensionId>((int)&v28, &v24, &v23);
    v8 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v24 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v22, "ChunkX");
    v9 = (int *)LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v22, v9);
    v10 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v22 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v21, "ChunkZ");
    v11 = LevelChunk::getPosition(v3);
    Social::Events::Event::addProperty<int>((int)&v28, &v21, (int *)v11 + 1);
    v12 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Social::Events::EventManager::recordEvent((int)v4);
    result = Social::Events::Event::~Event((int)&v28);
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPlayerMessageTitle(int a1, const char **a2, const char **a3, const char **a4)
{
  MinecraftEventing::fireEventPlayerMessageTitle(a1, a2, a3, a4);
}


int __fastcall MinecraftEventing::fireEventPortalBuilt(int result, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@4
  int v4; // r5@4
  void *v5; // r0@7
  void *v6; // r0@8
  unsigned int *v7; // r2@11
  signed int v8; // r1@13
  unsigned int *v9; // r2@15
  signed int v10; // r1@17
  int v11; // [sp+8h] [bp-88h]@8
  void *ptr; // [sp+Ch] [bp-84h]@4
  int v13; // [sp+24h] [bp-6Ch]@5
  int v14; // [sp+2Ch] [bp-64h]@4
  char v15; // [sp+30h] [bp-60h]@4
  int v16; // [sp+78h] [bp-18h]@1

  v2 = result;
  v16 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v3 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v14, "PortalBuilt");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
        Social::Events::Event::Event((int)&v15, v4, &v14, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v13 != ptr )
          operator delete(ptr);
        v5 = (void *)(v14 - 12);
        if ( (int *)(v14 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v14 - 4);
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
            j_j_j_j__ZdlPv_9(v5);
        }
        sub_21E94B4((void **)&v11, "Type");
        Social::Events::Event::addProperty<DimensionId>((int)&v15, &v11, &v16);
        v6 = (void *)(v11 - 12);
        if ( (int *)(v11 - 12) != &dword_28898C0 )
          v9 = (unsigned int *)(v11 - 4);
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        Social::Events::EventManager::recordEvent((int)v3);
        result = Social::Events::Event::~Event((int)&v15);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventAppSuspended(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "AppSuspended");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


int __fastcall MinecraftEventing::fireEventArmorStandItemEquipped(MinecraftEventing *this, const ArmorStand *a2, const ItemInstance *a3)
{
  ArmorStand *v3; // r8@1
  Social::Events::EventManager *v4; // r4@1
  ItemInstance *v5; // r6@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  int v20; // [sp+4h] [bp-ACh]@7
  int v21; // [sp+Ch] [bp-A4h]@7
  __int16 v22; // [sp+12h] [bp-9Eh]@6
  int v23; // [sp+18h] [bp-98h]@6
  int v24; // [sp+1Ch] [bp-94h]@5
  int v25; // [sp+24h] [bp-8Ch]@5
  void *ptr; // [sp+28h] [bp-88h]@1
  int v27; // [sp+40h] [bp-70h]@2
  int v28; // [sp+48h] [bp-68h]@1
  char v29; // [sp+4Ch] [bp-64h]@1

  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = a3;
  v6 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v28, "ArmorStandItemEquipped");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v29, v6, &v28, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v27 != ptr )
    operator delete(ptr);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v28 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v25, "Type");
  v24 = ItemInstance::getId(v5);
  Social::Events::Event::addProperty<int>((int)&v29, &v25, &v24);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v25 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v23, "AuxType");
  v22 = ItemInstance::getAuxValue(v5);
  Social::Events::Event::addProperty<short>((int)&v29, &v23, &v22);
  v9 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v23 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v21, "SlotsFilled");
  v20 = ArmorStand::getNumSlotsFilled(v3);
  Social::Events::Event::addProperty<int>((int)&v29, &v21, &v20);
  v10 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v21 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v29);
}


int __fastcall MinecraftEventing::fireEventWorldImported(MinecraftEventing *this, int a2, __int64 a3, unsigned __int64 a4)
{
  unsigned int v4; // r5@1
  Social::Events::EventManager *v5; // r8@1
  unsigned int v6; // r6@1
  unsigned int v7; // r7@1
  void *v8; // r0@4
  void *v9; // r0@5
  void *v15; // r0@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  unsigned int *v19; // r2@12
  signed int v20; // r1@14
  unsigned int *v21; // r2@16
  signed int v22; // r1@18
  float v23; // [sp+4h] [bp-A4h]@6
  int v24; // [sp+Ch] [bp-9Ch]@6
  __int64 v25; // [sp+10h] [bp-98h]@5
  int v26; // [sp+1Ch] [bp-8Ch]@5
  void *ptr; // [sp+20h] [bp-88h]@1
  int v28; // [sp+38h] [bp-70h]@2
  int v29; // [sp+40h] [bp-68h]@1
  char v30; // [sp+44h] [bp-64h]@1

  v4 = HIDWORD(a3);
  v5 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v6 = a3;
  v7 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v29, "WorldImported");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v7);
  Social::Events::Event::Event((int)&v30, v7, &v29, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v28 != ptr )
    operator delete(ptr);
  v8 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  sub_21E94B4((void **)&v26, "WorldSeed");
  v25 = __PAIR__(v4, v6);
  Social::Events::Event::addProperty<long long>((int)&v30, &v26, &v25);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v26 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v24, "WorldSize");
  _R0 = _aeabi_ul2f(a4, HIDWORD(a4));
  __asm
    VLDR            S0, =9.5367e-7
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VSTR            S0, [SP,#0xA8+var_A4]
  Social::Events::Event::addProperty<float>((int)&v30, &v24, (int)&v23);
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v24 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  Social::Events::EventManager::recordEvent((int)v5);
  return Social::Events::Event::~Event((int)&v30);
}


int __fastcall MinecraftEventing::fireEventAppConfigurationChanged(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "ConfigurationChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


int __fastcall MinecraftEventing::fireEventPlayerBounced(int result, Player *a2, const FullBlock *a3, int a4)
{
  int v4; // r6@1
  Player *v5; // r5@1
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  int v20; // [sp+Ch] [bp-9Ch]@10
  int v21; // [sp+14h] [bp-94h]@9
  int v22; // [sp+1Ch] [bp-8Ch]@8
  void *ptr; // [sp+20h] [bp-88h]@4
  int v24; // [sp+38h] [bp-70h]@5
  int v25; // [sp+40h] [bp-68h]@4
  char v26; // [sp+44h] [bp-64h]@4
  char v27; // [sp+4Ch] [bp-5Ch]@8
  const FullBlock *v28; // [sp+8Ch] [bp-1Ch]@1

  v4 = result;
  v5 = a2;
  v28 = a3;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v25, "PlayerBounced");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v26, v7, &v25, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v24 != ptr )
          operator delete(ptr);
        v8 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v12 = (unsigned int *)(v25 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        v27 = 1;
        sub_21E94B4((void **)&v22, "Type");
        Social::Events::Event::addProperty<BlockID>((int)&v26, &v22, v5);
        v9 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v22 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v21, "AuxType");
        Social::Events::Event::addProperty<unsigned char>((int)&v26, &v21, (_BYTE *)v5 + 1);
        v10 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v21 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v20, "BounceHeight");
        Social::Events::Event::addMeasurement<int>((int)&v26, &v20, 3, (int *)&v28);
        v11 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v26);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventUploadSkin(int a1, const char **a2, const char **a3)
{
  const char **v3; // r6@1
  Social::Events::EventManager *v4; // r4@1
  const char **v5; // r8@1
  unsigned int v6; // r7@1
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  unsigned int *v15; // r2@16
  signed int v16; // r1@18
  int v17; // [sp+Ch] [bp-94h]@6
  int v18; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v20; // [sp+30h] [bp-70h]@2
  int v21; // [sp+38h] [bp-68h]@1
  char v22; // [sp+3Ch] [bp-64h]@1

  v3 = a2;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v21, "UploadSkin");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v6);
  Social::Events::Event::Event((int)&v22, v6, &v21, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v20 != ptr )
    operator delete(ptr);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v18, "skinType");
  Social::Events::Event::addProperty<std::string>((int)&v22, &v18, v3);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v17, "source");
  Social::Events::Event::addProperty<std::string>((int)&v22, &v17, v5);
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v22);
}


int __fastcall MinecraftEventing::fireEventPatternAdded(int result, Player *a2, const ItemInstance *a3)
{
  int v3; // r7@1
  Player *v4; // r5@1
  int v5; // r4@5
  ListTag *v6; // r6@5
  void *v7; // r0@5
  Social::Events::EventManager *v8; // r8@7
  int v9; // r7@7
  void *v10; // r0@10
  int v11; // r6@11
  const void **v12; // r0@11
  int v13; // r7@11
  void *v14; // r0@11
  int v15; // r6@12
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  void *v19; // r0@15
  void *v20; // r0@16
  void *v21; // r0@17
  unsigned int *v22; // r2@20
  signed int v23; // r1@22
  unsigned int *v24; // r2@24
  signed int v25; // r1@26
  unsigned int *v26; // r2@28
  signed int v27; // r1@30
  unsigned int *v28; // r2@32
  signed int v29; // r1@34
  unsigned int *v30; // r2@36
  signed int v31; // r1@38
  unsigned int *v32; // r2@40
  signed int v33; // r1@42
  unsigned int *v34; // r2@44
  signed int v35; // r1@46
  unsigned int *v36; // r2@48
  signed int v37; // r1@50
  unsigned int *v38; // r2@52
  signed int v39; // r1@54
  int v40; // [sp+8h] [bp-D8h]@17
  int v41; // [sp+10h] [bp-D0h]@16
  int v42; // [sp+18h] [bp-C8h]@15
  __int16 v43; // [sp+1Eh] [bp-C2h]@14
  int v44; // [sp+24h] [bp-BCh]@14
  int v45; // [sp+28h] [bp-B8h]@13
  int v46; // [sp+30h] [bp-B0h]@13
  int v47; // [sp+38h] [bp-A8h]@12
  int v48; // [sp+3Ch] [bp-A4h]@13
  int v49; // [sp+44h] [bp-9Ch]@11
  int v50; // [sp+48h] [bp-98h]@12
  int v51; // [sp+4Ch] [bp-94h]@11
  void *ptr; // [sp+50h] [bp-90h]@7
  int v53; // [sp+68h] [bp-78h]@8
  int v54; // [sp+70h] [bp-70h]@7
  char v55; // [sp+74h] [bp-6Ch]@7
  int v56; // [sp+C0h] [bp-20h]@5

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        result = ItemInstance::hasUserData(v4);
        if ( result == 1 )
        {
          v5 = *(_DWORD *)ItemInstance::getUserData(v4);
          sub_21E94B4((void **)&v56, "Patterns");
          v6 = (ListTag *)CompoundTag::getList(v5, (const void **)&v56);
          v7 = (void *)(v56 - 12);
          if ( (int *)(v56 - 12) != &dword_28898C0 )
          {
            v22 = (unsigned int *)(v56 - 4);
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
              j_j_j_j__ZdlPv_9(v7);
          }
          result = ListTag::size(v6);
          if ( result >= 1 )
            v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
            v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
            sub_21E94B4((void **)&v54, "PatternAdded");
            MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
            Social::Events::Event::Event((int)&v55, v9, &v54, (int)&ptr, 0);
            std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
            if ( ptr && &v53 != ptr )
              operator delete(ptr);
            v10 = (void *)(v54 - 12);
            if ( (int *)(v54 - 12) != &dword_28898C0 )
              v24 = (unsigned int *)(v54 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v25 = __ldrex(v24);
                while ( __strex(v25 - 1, v24) );
              }
              else
                v25 = (*v24)--;
              if ( v25 <= 0 )
                j_j_j_j__ZdlPv_9(v10);
            v51 = ListTag::size(v6) - 1;
            v11 = ListTag::get(v6, v51);
            sub_21E94B4((void **)&v49, "Pattern");
            v12 = CompoundTag::getString(v11, (const void **)&v49);
            v13 = BannerPattern::getPatternIndexFromNameID(v12);
            v14 = (void *)(v49 - 12);
            if ( (int *)(v49 - 12) != &dword_28898C0 )
              v26 = (unsigned int *)(v49 - 4);
                  v27 = __ldrex(v26);
                while ( __strex(v27 - 1, v26) );
                v27 = (*v26)--;
              if ( v27 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            v50 = v13;
            sub_21E94B4((void **)&v47, "Color");
            v15 = CompoundTag::getInt(v11, (const void **)&v47);
            v16 = (void *)(v47 - 12);
            if ( (int *)(v47 - 12) != &dword_28898C0 )
              v28 = (unsigned int *)(v47 - 4);
                  v29 = __ldrex(v28);
                while ( __strex(v29 - 1, v28) );
                v29 = (*v28)--;
              if ( v29 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
            v48 = v15;
            sub_21E94B4((void **)&v46, "ItemId");
            v45 = ItemInstance::getId(v4);
            Social::Events::Event::addProperty<int>((int)&v55, &v46, &v45);
            v17 = (void *)(v46 - 12);
            if ( (int *)(v46 - 12) != &dword_28898C0 )
              v30 = (unsigned int *)(v46 - 4);
                  v31 = __ldrex(v30);
                while ( __strex(v31 - 1, v30) );
                v31 = (*v30)--;
              if ( v31 <= 0 )
                j_j_j_j__ZdlPv_9(v17);
            sub_21E94B4((void **)&v44, "ItemAux");
            v43 = ItemInstance::getAuxValue(v4);
            Social::Events::Event::addProperty<short>((int)&v55, &v44, &v43);
            v18 = (void *)(v44 - 12);
            if ( (int *)(v44 - 12) != &dword_28898C0 )
              v32 = (unsigned int *)(v44 - 4);
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j__ZdlPv_9(v18);
            sub_21E94B4((void **)&v42, "LayerIndex");
            Social::Events::Event::addProperty<int>((int)&v55, &v42, &v51);
            v19 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v34 = (unsigned int *)(v42 - 4);
                  v35 = __ldrex(v34);
                while ( __strex(v35 - 1, v34) );
                v35 = (*v34)--;
              if ( v35 <= 0 )
                j_j_j_j__ZdlPv_9(v19);
            sub_21E94B4((void **)&v41, "PatternId");
            Social::Events::Event::addProperty<int>((int)&v55, &v41, &v50);
            v20 = (void *)(v41 - 12);
            if ( (int *)(v41 - 12) != &dword_28898C0 )
              v36 = (unsigned int *)(v41 - 4);
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
            sub_21E94B4((void **)&v40, "PatternColor");
            Social::Events::Event::addProperty<int>((int)&v55, &v40, &v48);
            v21 = (void *)(v40 - 12);
            if ( (int *)(v40 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v40 - 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v21);
            Social::Events::EventManager::recordEvent((int)v8);
            result = Social::Events::Event::~Event((int)&v55);
        }
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventNewUserPackDetected(int a1, PackManifest *a2, int a3, int a4, char a5)
{
  int v5; // r5@1
  PackManifest *v6; // r4@1
  const char *v7; // r1@1
  int v8; // r6@1
  void *v9; // r0@3
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  int v12; // [sp+14h] [bp-1Ch]@3

  v5 = a1;
  v6 = a2;
  v7 = "success";
  v8 = a4;
  if ( !a3 )
    v7 = "error";
  sub_21E94B4((void **)&v12, v7);
  MinecraftEventing::_fireEventPackImportStage(v5, 0, v6, (int)&v12, v8, 1, a5);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
}


int __fastcall MinecraftEventing::fireEventBlockPlaced(int result, Player *a2, const FullBlock *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  int v5; // r0@4
  Social::Events::EventManager *v6; // r4@4
  int v7; // r6@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@24
  signed int v17; // r1@26
  unsigned int *v18; // r2@28
  signed int v19; // r1@30
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  unsigned int *v22; // r2@36
  signed int v23; // r1@38
  unsigned int *v24; // r2@40
  signed int v25; // r1@42
  int v26; // [sp+8h] [bp-100h]@12
  int v27; // [sp+10h] [bp-F8h]@12
  int v28; // [sp+14h] [bp-F4h]@11
  int v29; // [sp+1Ch] [bp-ECh]@11
  int v30; // [sp+20h] [bp-E8h]@10
  int v31; // [sp+28h] [bp-E0h]@10
  int v32; // [sp+30h] [bp-D8h]@9
  int v33; // [sp+38h] [bp-D0h]@8
  void *ptr; // [sp+3Ch] [bp-CCh]@4
  int v35; // [sp+54h] [bp-B4h]@5
  int v36; // [sp+5Ch] [bp-ACh]@4
  char v37; // [sp+60h] [bp-A8h]@4
  char v38; // [sp+68h] [bp-A0h]@8
  char v39; // [sp+A8h] [bp-60h]@4
  int v40; // [sp+B0h] [bp-58h]@17
  void *v41; // [sp+CCh] [bp-3Ch]@15
  void *v42; // [sp+DCh] [bp-2Ch]@13

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 908))(v3);
        ItemInstance::ItemInstance((ItemInstance *)&v39, v5);
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v36, "BlockPlaced");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v37, v7, &v36, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v35 != ptr )
          operator delete(ptr);
        v8 = (void *)(v36 - 12);
        if ( (int *)(v36 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v36 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        v38 = 1;
        sub_21E94B4((void **)&v33, "Type");
        Social::Events::Event::addProperty<unsigned char>((int)&v37, &v33, v4);
        v9 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v33 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v32, "AuxType");
        Social::Events::Event::addProperty<unsigned char>((int)&v37, &v32, (_BYTE *)v4 + 1);
        v10 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v32 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v31, "ToolItemType");
        v30 = ItemInstance::getId((ItemInstance *)&v39);
        Social::Events::Event::addProperty<int>((int)&v37, &v31, &v30);
        v11 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v31 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v29, "PlacementMethod");
        v28 = 0;
        Social::Events::Event::addProperty<int>((int)&v37, &v29, &v28);
        v12 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v29 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v27, "Count");
        v26 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v37, &v27, 0, (unsigned int *)&v26);
        v13 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v27 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        Social::Events::EventManager::recordEvent((int)v6);
        Social::Events::Event::~Event((int)&v37);
        if ( v42 )
          operator delete(v42);
        if ( v41 )
          operator delete(v41);
        result = v40;
        if ( v40 )
          result = (*(int (**)(void))(*(_DWORD *)v40 + 4))();
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::init(MinecraftEventing *this)
{
  MinecraftEventing::init(this);
}


int __fastcall MinecraftEventing::fireEventCraftingSessionEnd(int result, Player *a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@4
  int v4; // r5@4
  void *v5; // r0@7
  void *v6; // r0@8
  void *v7; // r0@9
  void *v8; // r0@10
  void *v9; // r0@11
  unsigned int *v10; // r2@14
  signed int v11; // r1@16
  unsigned int *v12; // r2@18
  signed int v13; // r1@20
  unsigned int *v14; // r2@22
  signed int v15; // r1@24
  unsigned int *v16; // r2@26
  signed int v17; // r1@28
  unsigned int *v18; // r2@30
  signed int v19; // r1@32
  int v20; // [sp+Ch] [bp-D4h]@10
  int v21; // [sp+10h] [bp-D0h]@10
  int v22; // [sp+18h] [bp-C8h]@10
  int v23; // [sp+2Ch] [bp-B4h]@8
  int v24; // [sp+30h] [bp-B0h]@8
  int v25; // [sp+38h] [bp-A8h]@8
  void *ptr; // [sp+4Ch] [bp-94h]@4
  int v27; // [sp+64h] [bp-7Ch]@5
  int v28; // [sp+6Ch] [bp-74h]@4
  char v29; // [sp+70h] [bp-70h]@4
  int v30; // [sp+80h] [bp-60h]@8
  char v31; // [sp+B8h] [bp-28h]@8
  char v32; // [sp+C0h] [bp-20h]@10

  v2 = result;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v3 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v28, "CraftingSessionCompleted");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
        Social::Events::Event::Event((int)&v29, v4, &v28, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v27 != ptr )
          operator delete(ptr);
        v5 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v28 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v5);
        }
        sub_21E94B4((void **)&v23, "CraftingSessionID");
        Social::Events::EventManager::getPlayerGlobalProperty((int)&v24, (int)v3, v4, &v23);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string const&,Social::Events::Property const&>(
          (int)&v31,
          (unsigned __int64 *)&v30,
          &v24,
          (int)&v24);
        Json::Value::~Value((Json::Value *)&v25);
        v6 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v24 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        v7 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v23 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        sub_21E94B4((void **)&v20, "UsedCraftingTable");
        Social::Events::EventManager::getPlayerGlobalProperty((int)&v21, (int)v3, v4, &v20);
          (int)&v32,
          &v21,
          (int)&v21);
        Json::Value::~Value((Json::Value *)&v22);
        v8 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v21 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        v9 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v20 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v3);
        result = Social::Events::Event::~Event((int)&v29);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventStartWorld(int a1, int a2, int *a3)
{
  int v3; // r7@1
  int v4; // r6@1
  int *v5; // r5@1
  Social::Events::EventManager *v6; // r4@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int v9; // r6@3
  int v10; // r1@6
  void *v11; // r0@6
  void *v12; // r0@8
  void *v13; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  int v24; // [sp+8h] [bp-B0h]@8
  int v25; // [sp+Ch] [bp-ACh]@8
  void *ptr; // [sp+10h] [bp-A8h]@3
  int v27; // [sp+28h] [bp-90h]@4
  int v28; // [sp+30h] [bp-88h]@3
  char v29; // [sp+34h] [bp-84h]@3
  int v30; // [sp+7Ch] [bp-3Ch]@1
  int v31; // [sp+84h] [bp-34h]@1
  int v32; // [sp+88h] [bp-30h]@1
  int v33; // [sp+90h] [bp-28h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = *(Social::Events::EventManager **)(a1 + 4);
  sub_21E94B4((void **)&v31, "NetworkType");
  v30 = v3;
  Social::Events::EventManager::setCommonProperty<unsigned int>((int)&v32, (int)v6, (int **)&v31, (unsigned int *)&v30);
  Json::Value::~Value((Json::Value *)&v33);
  v7 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v32 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v31 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *(_DWORD *)(v4 + 12);
  sub_21E94B4((void **)&v28, "StartWorld");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v9);
  Social::Events::Event::Event((int)&v29, v9, &v28, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v27 != ptr )
    operator delete(ptr);
  v10 = v28;
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v28 - 4);
        v10 = __ldrex(v19);
      while ( __strex(v10 - 1, v19) );
      v10 = (*v19)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( *(_DWORD *)(*v5 - 12) )
    MinecraftEventing::anonymizeIPAddress((void **)&v25, v10, v5);
    sub_21E94B4((void **)&v24, "Host");
    Social::Events::Event::addProperty<std::string>((int)&v29, &v24, (const char **)&v25);
    v12 = (void *)(v24 - 12);
    if ( (int *)(v24 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v24 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v25 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  Social::Events::EventManager::recordEvent((int)v6);
  return Social::Events::Event::~Event((int)&v29);
}


void __fastcall MinecraftEventing::fireEventSplitScreenUpdated(MinecraftEventing *this, const ClientInstance *a2)
{
  MinecraftEventing::fireEventSplitScreenUpdated(this, a2);
}


void __fastcall MinecraftEventing::fireEventNewUserPackDetected(int a1, PackManifest *a2, int a3, int a4, char a5)
{
  MinecraftEventing::fireEventNewUserPackDetected(a1, a2, a3, a4, a5);
}


void __fastcall MinecraftEventing::fireEventPackImportStarted(MinecraftEventing *this, const PackManifest *a2)
{
  MinecraftEventing::fireEventPackImportStarted(this, a2);
}


void __fastcall MinecraftEventing::init(MinecraftEventing *this, Social::UserManager *a2)
{
  Social::UserManager *v2; // r6@1
  MinecraftEventing *v3; // r5@1
  int v4; // r4@1
  int *v5; // r0@1
  __int64 v6; // r0@1
  int v7; // r5@1
  char *v8; // r0@1
  char *v9; // r0@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  char *v14; // [sp+0h] [bp-20h]@1
  int v15; // [sp+4h] [bp-1Ch]@2
  char *v16; // [sp+8h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  *((_DWORD *)this + 2) = a2;
  MinecraftEventing::init(this);
  v4 = *((_DWORD *)v3 + 1);
  v5 = sub_21E8AF4((int *)&v14, (int *)v3 + 6);
  sub_21E7408((const void **)v5, "/UTC.txt", 8u);
  LODWORD(v6) = operator new(0x1130u);
  v7 = v6;
  v16 = v14;
  v14 = (char *)&unk_28898CC;
  Social::Events::XboxLiveTelemetry::XboxLiveTelemetry(v6, (int)v2);
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v15 = v7;
  Social::Events::EventManager::addListener(v4, &v15);
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v15 = 0;
  v9 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v14 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall MinecraftEventing::updatePrimaryLocalUserId(int result, const unsigned int *a2)
{
  *(_DWORD *)(result + 12) = *a2;
  return result;
}


int __fastcall MinecraftEventing::fireEventPackUpgradeAttempt(MinecraftEventing *this, const PackManifest *a2, const PackReport *a3)
{
  PackManifest *v3; // r5@1
  MinecraftEventing *v4; // r4@1
  PackReport *v5; // r6@1
  int result; // r0@1
  Social::Events::EventManager *v7; // r8@2
  unsigned int v8; // r7@2
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  char *v14; // r0@10
  void *v15; // r0@10
  char *v16; // r0@11
  char *v17; // r0@11
  void *v18; // r0@11
  char *v19; // r0@12
  void *v20; // r0@12
  void *v21; // r0@13
  void *v22; // r0@14
  void *v23; // r0@15
  void *v24; // r0@16
  unsigned int *v25; // r2@19
  signed int v26; // r1@21
  unsigned int *v27; // r2@23
  signed int v28; // r1@25
  unsigned int *v29; // r2@27
  signed int v30; // r1@29
  unsigned int *v31; // r2@31
  signed int v32; // r1@33
  unsigned int *v33; // r2@35
  signed int v34; // r1@37
  unsigned int *v35; // r2@39
  signed int v36; // r1@41
  unsigned int *v37; // r2@43
  signed int v38; // r1@45
  unsigned int *v39; // r2@47
  signed int v40; // r1@49
  unsigned int *v41; // r2@51
  signed int v42; // r1@53
  unsigned int *v43; // r2@55
  signed int v44; // r1@57
  unsigned int *v45; // r2@59
  signed int v46; // r1@61
  unsigned int *v47; // r2@63
  signed int v48; // r1@65
  int v49; // [sp+8h] [bp-E8h]@15
  int v50; // [sp+10h] [bp-E0h]@15
  int v51; // [sp+14h] [bp-DCh]@14
  int v52; // [sp+1Ch] [bp-D4h]@14
  int v53; // [sp+20h] [bp-D0h]@13
  int v54; // [sp+28h] [bp-C8h]@13
  int v55; // [sp+30h] [bp-C0h]@12
  int v56; // [sp+38h] [bp-B8h]@11
  int v57; // [sp+40h] [bp-B0h]@10
  int v58; // [sp+44h] [bp-ACh]@8
  int v59; // [sp+4Ch] [bp-A4h]@8
  char v60; // [sp+53h] [bp-9Dh]@7
  int v61; // [sp+58h] [bp-98h]@7
  char v62; // [sp+5Fh] [bp-91h]@6
  int v63; // [sp+64h] [bp-8Ch]@6
  void *ptr; // [sp+68h] [bp-88h]@2
  int v65; // [sp+80h] [bp-70h]@3
  int v66; // [sp+88h] [bp-68h]@2
  char v67; // [sp+8Ch] [bp-64h]@2

  v3 = a2;
  v4 = this;
  v5 = a3;
  result = PackManifest::getPackOrigin(a2);
  if ( result != 1 )
  {
    v7 = (Social::Events::EventManager *)*((_DWORD *)v4 + 1);
    v8 = *((_DWORD *)v4 + 3);
    sub_21E94B4((void **)&v66, "PackUpgradeAttempt");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
    Social::Events::Event::Event((int)&v67, v8, &v66, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v65 != ptr )
      operator delete(ptr);
    v9 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v66 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    sub_21E94B4((void **)&v63, "PackUpgradeSuccess");
    v62 = PackReport::wasUpgraded(v5);
    Social::Events::Event::addProperty<bool>((int)&v67, &v63, (bool *)&v62);
    v10 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v63 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v61, "PackTypeId");
    v60 = PackManifest::getPackType(v3);
    Social::Events::Event::addProperty<char>((int)&v67, &v61, &v60);
    v11 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v61 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v59, "PackId");
    PackManifest::getIdentity(v3);
    mce::UUID::asString((mce::UUID *)&v58);
    Social::Events::Event::addProperty<std::string>((int)&v67, &v59, (const char **)&v58);
    v12 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v58 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v59 - 12);
    if ( (int *)(v59 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v59 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v57, "PackOriginalId");
    v14 = PackReport::getOriginalName(v5);
    Social::Events::Event::addProperty<std::string>((int)&v67, &v57, (const char **)v14);
    v15 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v57 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v56, "PackVersion");
    v16 = PackManifest::getIdentity(v3);
    v17 = SemVersion::asString((SemVersion *)(v16 + 16));
    Social::Events::Event::addProperty<std::string>((int)&v67, &v56, (const char **)v17);
    v18 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v56 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v55, "PackOriginalVersion");
    v19 = PackReport::getOriginalVersion(v5);
    Social::Events::Event::addProperty<std::string>((int)&v67, &v55, (const char **)v19);
    v20 = (void *)(v55 - 12);
    if ( (int *)(v55 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v55 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v54, "PackFormatVersionNum");
    v53 = PackManifest::getFormatVersion(v3);
    Social::Events::Event::addProperty<int>((int)&v67, &v54, &v53);
    v21 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v41 = (unsigned int *)(v54 - 4);
          v42 = __ldrex(v41);
        while ( __strex(v42 - 1, v41) );
        v42 = (*v41)--;
      if ( v42 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v52, "PackOriginalFormatVersionNum");
    v51 = PackManifest::getOriginalFormatVersion(v3);
    Social::Events::Event::addProperty<int>((int)&v67, &v52, &v51);
    v22 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v43 = (unsigned int *)(v52 - 4);
          v44 = __ldrex(v43);
        while ( __strex(v44 - 1, v43) );
        v44 = (*v43)--;
      if ( v44 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    sub_21E94B4((void **)&v50, "PackName");
    PackManifest::getName((PackManifest *)&v49, (int)v3);
    Social::Events::Event::addProperty<std::string>((int)&v67, &v50, (const char **)&v49);
    v23 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v45 = (unsigned int *)(v49 - 4);
          v46 = __ldrex(v45);
        while ( __strex(v46 - 1, v45) );
        v46 = (*v45)--;
      if ( v46 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v50 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    Social::Events::EventManager::recordEvent((int)v7);
    result = Social::Events::Event::~Event((int)&v67);
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventJoinCanceled(int a1, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+Ch] [bp-94h]@6
  int v16; // [sp+10h] [bp-90h]@5
  int v17; // [sp+18h] [bp-88h]@5
  void *ptr; // [sp+1Ch] [bp-84h]@1
  int v19; // [sp+34h] [bp-6Ch]@2
  int v20; // [sp+3Ch] [bp-64h]@1
  char v21; // [sp+40h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v20, "JoinCanceled");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v21, v4, &v20, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v19 != ptr )
    operator delete(ptr);
  v5 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v17, "State");
  v16 = v2;
  Social::Events::Event::addProperty<int>((int)&v21, &v17, &v16);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v17 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  sub_21E94B4((void **)&v15, "NetworkType");
  Social::Events::EventManager::removeCommonProperty((int)v3, (int **)&v15);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return Social::Events::Event::~Event((int)&v21);
}


int __fastcall MinecraftEventing::fireEventPlayerTravelled(int result, Player *a2, float a3)
{
  Player *v3; // r4@1
  int v4; // r6@1
  int v5; // r0@5
  int v6; // r0@5
  signed int v7; // r9@5
  int v8; // r1@24
  int v9; // r2@24
  BlockSource *v10; // r0@24
  int v11; // r5@24
  char v12; // r0@25
  Social::Events::EventManager *v13; // r8@27
  int v14; // r7@27
  void *v15; // r0@27
  void *v16; // r0@28
  Social::XboxLiveUserManager *v17; // r0@30
  signed int v18; // r6@31
  void *v19; // r0@31
  void *v20; // r0@32
  Social::XboxLiveUserManager *v21; // r0@34
  void *v22; // r0@38
  void *v23; // r0@39
  void *v24; // r0@40
  void *v25; // r0@41
  void *v26; // r0@42
  void *v27; // r0@43
  void *v28; // r0@44
  int v29; // r0@45
  __int64 v30; // r2@45
  void *v31; // r0@45
  void *v32; // r0@46
  void *v33; // r0@47
  int v34; // r4@48
  unsigned int *v35; // r1@49
  unsigned int *v36; // r5@55
  unsigned int *v37; // r2@63
  signed int v38; // r1@65
  unsigned int *v39; // r2@67
  signed int v40; // r1@69
  unsigned int *v41; // r2@71
  signed int v42; // r1@73
  unsigned int *v43; // r2@75
  signed int v44; // r1@77
  unsigned int *v45; // r2@79
  signed int v46; // r1@81
  unsigned int *v47; // r2@83
  signed int v48; // r1@85
  unsigned int *v49; // r2@87
  signed int v50; // r1@89
  unsigned int *v51; // r2@91
  signed int v52; // r1@93
  unsigned int *v53; // r2@95
  signed int v54; // r1@97
  unsigned int *v55; // r2@99
  signed int v56; // r1@101
  unsigned int *v57; // r2@103
  signed int v58; // r1@105
  unsigned int *v59; // r2@107
  signed int v60; // r1@109
  unsigned int *v61; // r2@159
  signed int v62; // r1@161
  unsigned int *v63; // r2@163
  signed int v64; // r1@165
  int v65; // [sp+Ch] [bp-15Ch]@47
  int v66; // [sp+14h] [bp-154h]@46
  int v67; // [sp+1Ch] [bp-14Ch]@45
  __int64 v68; // [sp+20h] [bp-148h]@45
  int v69; // [sp+28h] [bp-140h]@45
  int v70; // [sp+30h] [bp-138h]@44
  int v71; // [sp+38h] [bp-130h]@43
  int v72; // [sp+3Ch] [bp-12Ch]@42
  int v73; // [sp+44h] [bp-124h]@42
  int v74; // [sp+4Ch] [bp-11Ch]@41
  int v75; // [sp+54h] [bp-114h]@40
  int v76; // [sp+58h] [bp-110h]@39
  int v77; // [sp+60h] [bp-108h]@39
  void *ptr; // [sp+64h] [bp-104h]@35
  int v79; // [sp+7Ch] [bp-ECh]@36
  int v80; // [sp+84h] [bp-E4h]@35
  char v81; // [sp+88h] [bp-E0h]@35
  char v82; // [sp+90h] [bp-D8h]@39
  int v83; // [sp+D4h] [bp-94h]@31
  int v84; // [sp+D8h] [bp-90h]@31
  int v85; // [sp+E0h] [bp-88h]@31
  Social::User *v86; // [sp+F4h] [bp-74h]@29
  int v87; // [sp+F8h] [bp-70h]@48
  int v88; // [sp+FCh] [bp-6Ch]@29
  int v89; // [sp+104h] [bp-64h]@27
  int v90; // [sp+108h] [bp-60h]@27
  int v91; // [sp+110h] [bp-58h]@27
  char v92; // [sp+123h] [bp-45h]@27
  int v93; // [sp+124h] [bp-44h]@24
  int v94; // [sp+128h] [bp-40h]@24
  int v95; // [sp+12Ch] [bp-3Ch]@24
  char v96; // [sp+130h] [bp-38h]@24
  int v97; // [sp+13Ch] [bp-2Ch]@4
  float v98; // [sp+140h] [bp-28h]@1

  v3 = a2;
  v4 = result;
  v98 = a3;
  if ( a2 )
  {
    result = (*(int (__fastcall **)(Player *))(*(_DWORD *)a2 + 1408))(a2);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v97 = 0;
        if ( Entity::isRiding(v3) == 1 )
        {
          v5 = Entity::getRide(v3);
          v6 = (*(int (**)(void))(*(_DWORD *)v5 + 488))();
          v97 = EntityClassTree::getEntityTypeIdLegacy(v6);
          v7 = 6;
        }
        else if ( Mob::isFrostWalking(v3) )
          v7 = 10;
        else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 208))(v3) )
          v7 = 1;
        else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 216))(v3) )
          v7 = 4;
        else if ( Entity::onLadder(v3, 1) )
          v7 = 3;
        else if ( Abilities::getBool((int)v3 + 4320, (int **)&Abilities::FLYING) )
          v7 = 5;
        else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 312))(v3) )
          v7 = 7;
        else if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 792))(v3) )
          v7 = 8;
        else if ( Player::isBouncing(v3) )
          v7 = 9;
        else
          v7 = 0;
          if ( !*((_BYTE *)v3 + 216) )
            v7 = 2;
        v8 = *((_DWORD *)v3 + 19);
        v9 = *((_DWORD *)v3 + 20);
        v93 = *((_DWORD *)v3 + 18);
        v94 = v8;
        v95 = v9;
        BlockPos::BlockPos((int)&v96, (int)&v93);
        v10 = (BlockSource *)Entity::getRegion(v3);
        v11 = BlockSource::getBiome(v10, (const BlockPos *)&v96);
        if ( Mob::hasEffect(v3, (const MobEffect *)MobEffect::MOVEMENT_SLOWDOWN) )
          v12 = 1;
          v12 = Mob::hasEffect(v3, (const MobEffect *)MobEffect::MOVEMENT_SPEED);
        v92 = v12;
        v13 = *(Social::Events::EventManager **)(v4 + 4);
        v14 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v89, "Biome");
        Social::Events::EventManager::setPlayerCommonProperty<int>(
          (int)&v90,
          (int)v13,
          v14,
          (int **)&v89,
          (int *)(v11 + 268));
        Json::Value::~Value((Json::Value *)&v91);
        v15 = (void *)(v90 - 12);
        if ( (int *)(v90 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v90 - 4);
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
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v89 - 12);
        if ( (int *)(v89 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v89 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v88 = 0;
        Social::UserManager::getUserFromUserId((Social::UserManager *)&v86, *(_DWORD *)(v4 + 8), v14);
        if ( v86 )
          v17 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v86);
          if ( Social::XboxLiveUserManager::isSignedIn(v17) == 1 )
            sub_21E94B4((void **)&v83, "Cheevos");
            Social::Events::EventManager::getCommonProperty((int)&v84, (int)v13, (int **)&v83);
            v18 = Json::Value::asBool((Json::Value *)&v85, 0);
            Json::Value::~Value((Json::Value *)&v85);
            v19 = (void *)(v84 - 12);
            if ( (int *)(v84 - 12) != &dword_28898C0 )
            {
              v61 = (unsigned int *)(v84 - 4);
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
                j_j_j_j__ZdlPv_9(v19);
            }
            v20 = (void *)(v83 - 12);
            if ( (int *)(v83 - 12) != &dword_28898C0 )
              v63 = (unsigned int *)(v83 - 4);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
            if ( v18 == 1 )
              v21 = (Social::XboxLiveUserManager *)Social::User::getLiveUser(v86);
              v88 = Social::XboxLiveUserManager::hasNeverVisitedBiome(v21, *(_DWORD *)(v11 + 268));
        sub_21E94B4((void **)&v80, "PlayerTravelled");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v13, v14);
        Social::Events::Event::Event((int)&v81, v14, &v80, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v79 != ptr )
          operator delete(ptr);
        v22 = (void *)(v80 - 12);
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v80 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v22);
        v82 = 1;
        sub_21E94B4((void **)&v77, "TravelMethodType");
        v76 = v7;
        Social::Events::Event::addProperty<unsigned int>((int)&v81, &v77, (unsigned int *)&v76);
        v23 = (void *)(v77 - 12);
        if ( (int *)(v77 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v77 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        sub_21E94B4((void **)&v75, "MobType");
        Social::Events::Event::addProperty<int>((int)&v81, &v75, &v97);
        v24 = (void *)(v75 - 12);
        if ( (int *)(v75 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v75 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        sub_21E94B4((void **)&v74, "HasRelevantBuff");
        Social::Events::Event::addProperty<bool>((int)&v81, &v74, (bool *)&v92);
        v25 = (void *)(v74 - 12);
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v74 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        sub_21E94B4((void **)&v73, "WorldFeature");
        v72 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 1236))(v3);
        Social::Events::Event::addProperty<int>((int)&v81, &v73, &v72);
        v26 = (void *)(v73 - 12);
        if ( (int *)(v73 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v73 - 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        sub_21E94B4((void **)&v71, "NewBiome");
        Social::Events::Event::addMeasurement<int>((int)&v81, &v71, 3, &v88);
        v27 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v51 = (unsigned int *)(v71 - 4);
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
            v52 = (*v51)--;
          if ( v52 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        sub_21E94B4((void **)&v70, "MetersTravelled");
        Social::Events::Event::addMeasurement<float>((int)&v81, &v70, 1, (int)&v98);
        v28 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v70 - 4);
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v29 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v3 + 52))(v3);
        v30 = *(_QWORD *)v29;
        v69 = *(_DWORD *)(v29 + 8);
        v68 = v30;
        sub_21E94B4((void **)&v67, "PosAvgX");
        Social::Events::Event::addMeasurement<float>((int)&v81, &v67, 4, (int)&v68);
        v31 = (void *)(v67 - 12);
        if ( (int *)(v67 - 12) != &dword_28898C0 )
          v55 = (unsigned int *)(v67 - 4);
              v56 = __ldrex(v55);
            while ( __strex(v56 - 1, v55) );
            v56 = (*v55)--;
          if ( v56 <= 0 )
            j_j_j_j__ZdlPv_9(v31);
        sub_21E94B4((void **)&v66, "PosAvgY");
        Social::Events::Event::addMeasurement<float>((int)&v81, &v66, 4, (unsigned int)&v68 | 4);
        v32 = (void *)(v66 - 12);
        if ( (int *)(v66 - 12) != &dword_28898C0 )
          v57 = (unsigned int *)(v66 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        sub_21E94B4((void **)&v65, "PosAvgZ");
        Social::Events::Event::addMeasurement<float>((int)&v81, &v65, 4, (int)&v69);
        v33 = (void *)(v65 - 12);
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v65 - 4);
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        Social::Events::EventManager::recordEvent((int)v13);
        result = Social::Events::Event::~Event((int)&v81);
        v34 = v87;
        if ( v87 )
          v35 = (unsigned int *)(v87 + 4);
              result = __ldrex(v35);
            while ( __strex(result - 1, v35) );
            result = (*v35)--;
          if ( result == 1 )
            v36 = (unsigned int *)(v34 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
            if ( &pthread_create )
              __dmb();
              do
                result = __ldrex(v36);
              while ( __strex(result - 1, v36) );
            else
              result = (*v36)--;
            if ( result == 1 )
              result = (*(int (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPlayerMessageSay(int a1, const char **a2, const char **a3)
{
  MinecraftEventing::fireEventPlayerMessageSay(a1, a2, a3);
}


void __fastcall MinecraftEventing::_getUserXUID(MinecraftEventing *this, unsigned int a2, int a3)
{
  MinecraftEventing *v3; // r4@1
  int v4; // r0@2
  int v5; // r4@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r5@11
  unsigned int v9; // r0@13
  Social::User *v10; // [sp+8h] [bp-18h]@1
  int v11; // [sp+Ch] [bp-14h]@4

  v3 = this;
  Social::UserManager::getUserFromUserId((Social::UserManager *)&v10, *(_DWORD *)(a2 + 8), a3);
  if ( v10 )
  {
    v4 = Social::User::getLiveUser(v10);
    Social::XboxLiveUserManager::getCurrentXUID(v3, v4);
  }
  else
    sub_21E94B4((void **)v3, (const char *)&unk_257BC67);
  v5 = v11;
  if ( v11 )
    v6 = (unsigned int *)(v11 + 4);
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
}


void __fastcall MinecraftEventing::anonymizeIPAddress(void **a1, int a2, int *a3)
{
  void **v3; // r8@1
  int *v4; // r5@1
  _BYTE *v5; // r0@1
  int v6; // r1@1
  int v7; // r2@2
  signed int v8; // r1@2
  int v9; // r4@3
  int v10; // t1@3
  signed int v11; // r3@3
  unsigned __int8 v12; // r6@3
  unsigned int v13; // r7@5
  bool v14; // cf@5
  signed int v15; // r6@5
  signed int v16; // r4@7
  signed int v17; // r7@9
  bool v18; // zf@11
  int v19; // r7@11
  _BYTE *v20; // r6@16
  char *v21; // r1@17
  int *v22; // r0@18
  void *v23; // r0@18
  unsigned int *v24; // r2@19
  signed int v25; // r1@21
  char *v26; // r0@27
  unsigned int *v27; // r2@29
  signed int v28; // r1@31
  int v29; // [sp+4h] [bp-34h]@18
  char *v30; // [sp+Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v30 = (char *)&unk_28898CC;
  v5 = (_BYTE *)*a3;
  v6 = *(_DWORD *)(*a3 - 12);
  if ( !v6 )
    goto LABEL_42;
  v7 = v6 - 1;
  v8 = 1;
  do
  {
    v10 = *v5++;
    v9 = v10;
    v11 = 0;
    v12 = v10 - 48;
    if ( v10 != 46 )
      v11 = 1;
    v13 = v12;
    v14 = v12 >= 9u;
    v18 = v12 == 9;
    v15 = 0;
    if ( !v18 && v14 )
      v15 = 1;
    v18 = v9 == 46;
    v16 = 0;
    if ( v18 )
      v16 = 1;
    v14 = v13 >= 0xA;
    v17 = 0;
    if ( !v14 )
      v17 = 1;
    v18 = v7 == 0;
    v19 = v17 | v16;
    if ( v7 )
    {
      --v7;
      v18 = (v11 & v15) == 1;
    }
    v8 &= v19;
  }
  while ( !v18 );
  if ( v8 != 1 )
    if ( (signed int)sub_21E77E4(v4, 58, 0) < 0 )
      EntityInteraction::setInteractText((int *)&v30, v4);
    else
      sub_21E7EE0((const void **)&v30, 0, (_BYTE *)dword_28898C0, 0);
  else
LABEL_42:
    v20 = sub_21E78D0(v4, 46, 0xFFFFFFFF);
    if ( (unsigned int)v20 <= 4 )
      sub_21E94B4(v3, (const char *)&unk_257BC67);
      v21 = v30;
      goto LABEL_27;
    sub_21E8AF4(&v29, v4);
    v22 = (int *)sub_21E91FC((const void **)&v29, (size_t)v20, 4u, ".0", (_BYTE *)2);
    EntityInteraction::setInteractText((int *)&v30, v22);
    v23 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
  *v3 = v30;
  v21 = (char *)&unk_28898CC;
LABEL_27:
  v26 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
}


int __fastcall MinecraftEventing::fireRemixAuthenticationEvent(int a1, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-90h]@5
  int v13; // [sp+10h] [bp-88h]@5
  void *ptr; // [sp+14h] [bp-84h]@1
  int v15; // [sp+2Ch] [bp-6Ch]@2
  int v16; // [sp+34h] [bp-64h]@1
  char v17; // [sp+38h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v16, "RemixAuthenticationRequest");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v17, v4, &v16, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v15 != ptr )
    operator delete(ptr);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v13, "Outcome");
  v12 = v2;
  Social::Events::Event::addProperty<int>((int)&v17, &v13, &v12);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v17);
}


void __fastcall MinecraftEventing::fireEventPlayerMessageTell(int a1, const char **a2, const char **a3, const char **a4)
{
  MinecraftEventing::fireEventPlayerMessageTell(a1, a2, a3, a4);
}


void __fastcall MinecraftEventing::fireEventCraftingSessionStart(MinecraftEventing *this, Player *a2, unsigned int a3)
{
  MinecraftEventing *v3; // r6@1
  Player *v4; // r4@1
  int v5; // r5@4
  unsigned int v6; // r6@4
  char v7; // r0@4
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  unsigned int *v16; // r2@17
  signed int v17; // r1@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@25
  signed int v21; // r1@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  int v26; // [sp+Ch] [bp-84h]@9
  int v27; // [sp+10h] [bp-80h]@9
  int v28; // [sp+18h] [bp-78h]@9
  int v29; // [sp+2Ch] [bp-64h]@7
  int v30; // [sp+34h] [bp-5Ch]@7
  int v31; // [sp+38h] [bp-58h]@7
  int v32; // [sp+40h] [bp-50h]@7
  int v33; // [sp+54h] [bp-3Ch]@6
  int v34; // [sp+58h] [bp-38h]@6
  int v35; // [sp+60h] [bp-30h]@7
  char v36; // [sp+77h] [bp-19h]@6

  v3 = this;
  v4 = a2;
  if ( this
    && (*(int (**)(void))(*(_DWORD *)this + 1408))() == 1
    && (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3) )
  {
    v5 = *(_DWORD *)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3) + 4);
    v6 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1444))(v3);
    v7 = 0;
    if ( v4 == (Player *)2 )
      v7 = 1;
    v36 = v7;
    sub_21E94B4((void **)&v33, "CraftingSessionID");
    Social::Events::EventManager::getPlayerGlobalProperty((int)&v34, v5, v6, &v33);
    v8 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v33 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    }
    sub_21E94B4((void **)&v30, "CraftingSessionID");
    v29 = Json::Value::asInt((Json::Value *)&v35, 0) + 1;
    Social::Events::EventManager::setPlayerGlobalProperty<int>((int)&v31, v5, v6, (int **)&v30, &v29);
    Json::Value::~Value((Json::Value *)&v32);
    v9 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v31 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v30 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v26, "UsedCraftingTable");
    Social::Events::EventManager::setPlayerGlobalProperty<bool>((int)&v27, v5, v6, (int **)&v26, (bool *)&v36);
    Json::Value::~Value((Json::Value *)&v28);
    v11 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v27 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v26 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Json::Value::~Value((Json::Value *)&v35);
    v13 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v34 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  }
}


void __fastcall MinecraftEventing::fireEventMultiplayerRoundStart(int a1, Level *a2, const char **a3, int a4, const char **a5, int a6, int a7)
{
  MinecraftEventing::fireEventMultiplayerRoundStart(a1, a2, a3, a4, a5, a6, a7);
}


int __fastcall MinecraftEventing::fireEventArmorStandPosed(MinecraftEventing *this, const ArmorStand *a2)
{
  ArmorStand *v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15
  unsigned int *v14; // r2@17
  signed int v15; // r1@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  int v18; // [sp+8h] [bp-A8h]@7
  int v19; // [sp+10h] [bp-A0h]@7
  int v20; // [sp+14h] [bp-9Ch]@6
  int v21; // [sp+1Ch] [bp-94h]@6
  int v22; // [sp+20h] [bp-90h]@5
  int v23; // [sp+28h] [bp-88h]@5
  void *ptr; // [sp+2Ch] [bp-84h]@1
  int v25; // [sp+44h] [bp-6Ch]@2
  int v26; // [sp+4Ch] [bp-64h]@1
  char v27; // [sp+50h] [bp-60h]@1
  char v28; // [sp+58h] [bp-58h]@5

  v2 = a2;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v26, "ArmorStandPosed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v27, v4, &v26, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v25 != ptr )
    operator delete(ptr);
  v5 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v28 = 1;
  sub_21E94B4((void **)&v23, "Pose");
  v22 = ArmorStand::getPoseIndex(v2);
  Social::Events::Event::addProperty<int>((int)&v27, &v23, &v22);
  v6 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v23 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v21, "SlotsFilled");
  v20 = ArmorStand::getNumSlotsFilled(v2);
  Social::Events::Event::addProperty<int>((int)&v27, &v21, &v20);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v19, "Count");
  v18 = 1;
  Social::Events::Event::addMeasurement<unsigned int>((int)&v27, &v19, 0, (unsigned int *)&v18);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v27);
}


int __fastcall MinecraftEventing::fireEventAppPaused(MinecraftEventing *this)
{
  Social::Events::EventManager *v1; // r4@1
  unsigned int v2; // r5@1
  void *v3; // r0@4
  unsigned int *v5; // r2@6
  signed int v6; // r1@8
  void *ptr; // [sp+8h] [bp-80h]@1
  int v8; // [sp+20h] [bp-68h]@2
  int v9; // [sp+28h] [bp-60h]@1
  char v10; // [sp+2Ch] [bp-5Ch]@1

  v1 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v9, "AppPaused");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v1, v2);
  Social::Events::Event::Event((int)&v10, v2, &v9, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v8 != ptr )
    operator delete(ptr);
  v3 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Social::Events::EventManager::recordEvent((int)v1);
  return Social::Events::Event::~Event((int)&v10);
}


void __fastcall MinecraftEventing::addResourcePackData(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int v12; // r0@8
  void *v13; // r0@10
  int v14; // r0@11
  void *v15; // r0@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@31
  signed int v25; // r1@33
  unsigned int *v26; // r2@35
  signed int v27; // r1@37
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  unsigned int *v30; // r2@43
  signed int v31; // r1@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  char v34; // [sp+7h] [bp-61h]@13
  int v35; // [sp+Ch] [bp-5Ch]@11
  char v36; // [sp+13h] [bp-55h]@10
  int v37; // [sp+18h] [bp-50h]@8
  int v38; // [sp+20h] [bp-48h]@7
  int v39; // [sp+28h] [bp-40h]@6
  int v40; // [sp+30h] [bp-38h]@5
  int v41; // [sp+38h] [bp-30h]@4
  int v42; // [sp+40h] [bp-28h]@3
  int v43; // [sp+48h] [bp-20h]@2
  int v44; // [sp+50h] [bp-18h]@1

  v3 = a2;
  v4 = a3;
  sub_21E94B4((void **)&v44, "UIJsonCount");
  Social::Events::Event::addProperty<unsigned int>(v3, &v44, (unsigned int *)v4);
  v5 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v43, "UITextures");
  Social::Events::Event::addProperty<unsigned int>(v3, &v43, (unsigned int *)(v4 + 4));
  v6 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v43 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v42, "Sounds");
  Social::Events::Event::addProperty<unsigned int>(v3, &v42, (unsigned int *)(v4 + 8));
  v7 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v42 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v41, "BlocksTextures");
  Social::Events::Event::addProperty<unsigned int>(v3, &v41, (unsigned int *)(v4 + 16));
  v8 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v41 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v40, "ItemTextures");
  Social::Events::Event::addProperty<unsigned int>(v3, &v40, (unsigned int *)(v4 + 20));
  v9 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v40 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v39, "EntityTextures");
  Social::Events::Event::addProperty<unsigned int>(v3, &v39, (unsigned int *)(v4 + 24));
  v10 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v38, "Languages");
  Social::Events::Event::addProperty<unsigned int>(v3, &v38, (unsigned int *)(v4 + 40));
  v11 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v38 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v37, "HasModels");
  v12 = *(_DWORD *)(v4 + 28);
  if ( v12 )
    LOBYTE(v12) = 1;
  v36 = v12;
  Social::Events::Event::addProperty<bool>(v3, &v37, (bool *)&v36);
  v13 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v35, "HasBlocks");
  v14 = *(_DWORD *)(v4 + 12);
  if ( v14 )
    LOBYTE(v14) = 1;
  v34 = v14;
  Social::Events::Event::addProperty<bool>(v3, &v35, (bool *)&v34);
  v15 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v35 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall MinecraftEventing::fireEventStoreOfferPurchaseResolved(Offer *a1, const char **a2, int a3, int a4, Offer *a5)
{
  Offer *v5; // r6@1
  int v6; // r9@1
  int v7; // r7@1
  const char **v8; // r8@1
  const char **v9; // r4@1
  const void **v10; // r5@1
  void **v11; // r0@1
  void *v12; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  int v15; // [sp+10h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (const char **)Offer::getProductSku(a5);
  v10 = Offer::getPrice(a5);
  v11 = sub_21E94B4((void **)&v15, (const char *)&unk_257BC67);
  MinecraftEventing::fireEventPurchaseResolved((int)v5, v8, v9, (const char **)v10, (const char **)v11, v7, v6);
  v12 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v15 - 4);
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
      j_j_j_j__ZdlPv_9(v12);
  }
}


int __fastcall MinecraftEventing::fireEventItemNamed(int result, Player *a2, const ItemInstance *a3)
{
  int v3; // r6@1
  Player *v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r6@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  unsigned int *v12; // r2@16
  signed int v13; // r1@18
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  __int16 v16; // [sp+6h] [bp-9Ah]@9
  int v17; // [sp+Ch] [bp-94h]@9
  int v18; // [sp+10h] [bp-90h]@8
  int v19; // [sp+18h] [bp-88h]@8
  void *ptr; // [sp+1Ch] [bp-84h]@4
  int v21; // [sp+34h] [bp-6Ch]@5
  int v22; // [sp+3Ch] [bp-64h]@4
  char v23; // [sp+40h] [bp-60h]@4

  v3 = result;
  v4 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v22, "ItemNamed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v23, v6, &v22, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v21 != ptr )
          operator delete(ptr);
        v7 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v19, "Type");
        v18 = ItemInstance::getId(v4);
        Social::Events::Event::addProperty<int>((int)&v23, &v19, &v18);
        v8 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v19 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v17, "AuxType");
        v16 = ItemInstance::getAuxValue(v4);
        Social::Events::Event::addProperty<short>((int)&v23, &v17, &v16);
        v9 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v14 = (unsigned int *)(v17 - 4);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v23);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventPlayerMessageMe(int a1, const char **a2, const char **a3)
{
  const char **v3; // r5@1
  const char **v4; // r4@1
  int v5; // r6@1
  void **v6; // r0@1
  void *v7; // r0@1
  void *v8; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v13; // [sp+Ch] [bp-2Ch]@1
  int v14; // [sp+14h] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v14, (const char *)&unk_257BC67);
  v6 = sub_21E94B4((void **)&v13, "me");
  MinecraftEventing::fireEventPlayerMessage(v5, v3, (const char **)&v14, v4, (const char **)v6);
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall MinecraftEventing::fireEventBehaviorFailed(int result, const char **a2)
{
  int v2; // r6@1
  const char **v3; // r5@1
  Social::Events::EventManager *v4; // r4@4
  int v5; // r6@4
  void *v6; // r0@7
  void *v7; // r0@8
  unsigned int *v8; // r2@11
  signed int v9; // r1@13
  unsigned int *v10; // r2@15
  signed int v11; // r1@17
  int v12; // [sp+8h] [bp-88h]@8
  void *ptr; // [sp+Ch] [bp-84h]@4
  int v14; // [sp+24h] [bp-6Ch]@5
  int v15; // [sp+2Ch] [bp-64h]@4
  char v16; // [sp+30h] [bp-60h]@4
  char v17; // [sp+38h] [bp-58h]@8

  v2 = result;
  v3 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2);
      if ( result )
      {
        v4 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1440))(v2) + 4);
        v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 1444))(v2);
        sub_21E94B4((void **)&v15, "BehaviorFailed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
        Social::Events::Event::Event((int)&v16, v5, &v15, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v14 != ptr )
          operator delete(ptr);
        v6 = (void *)(v15 - 12);
        if ( (int *)(v15 - 12) != &dword_28898C0 )
        {
          v8 = (unsigned int *)(v15 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v6);
        }
        v17 = 1;
        sub_21E94B4((void **)&v12, "failureMessage");
        Social::Events::Event::addProperty<std::string>((int)&v16, &v12, v3);
        v7 = (void *)(v12 - 12);
        if ( (int *)(v12 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v12 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        Social::Events::EventManager::recordEvent((int)v4);
        result = Social::Events::Event::~Event((int)&v16);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireEventNpcPropertiesUpdated(MinecraftEventing *this, Npc *a2, bool a3)
{
  Npc *v3; // r9@1
  Social::Events::EventManager *v4; // r10@1
  unsigned int v5; // r4@1
  void *v6; // r0@4
  const void **v7; // r0@5
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  unsigned int v11; // r6@9
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  const void **v16; // r0@26
  void *v17; // r0@26
  char *v18; // r0@27
  void *v19; // r0@29
  void *v20; // r0@30
  unsigned int *v22; // r2@34
  signed int v23; // r1@36
  unsigned int *v24; // r2@38
  signed int v25; // r1@40
  unsigned int *v26; // r2@42
  signed int v27; // r1@44
  unsigned int *v28; // r2@46
  signed int v29; // r1@48
  unsigned int *v30; // r2@50
  signed int v31; // r1@52
  unsigned int *v32; // r2@54
  signed int v33; // r1@56
  int v34; // [sp+4h] [bp-DCh]@29
  int v35; // [sp+Ch] [bp-D4h]@29
  int v36; // [sp+10h] [bp-D0h]@10
  char *v37; // [sp+14h] [bp-CCh]@14
  unsigned int v38; // [sp+1Ch] [bp-C4h]@8
  void *v39; // [sp+20h] [bp-C0h]@8
  _BYTE *v40; // [sp+24h] [bp-BCh]@8
  int v41; // [sp+30h] [bp-B0h]@7
  int v42; // [sp+34h] [bp-ACh]@6
  int v43; // [sp+3Ch] [bp-A4h]@6
  int v44; // [sp+44h] [bp-9Ch]@5
  void *ptr; // [sp+48h] [bp-98h]@1
  int v46; // [sp+60h] [bp-80h]@2
  int v47; // [sp+68h] [bp-78h]@1
  char v48; // [sp+6Ch] [bp-74h]@1
  bool v49; // [sp+B7h] [bp-29h]@1

  v49 = a3;
  v3 = a2;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v47, "NpcPropertiesUpdated");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v48, v5, &v47, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v46 != ptr )
    operator delete(ptr);
  v6 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
  {
    v22 = (unsigned int *)(v47 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v44, "NpcSkin");
  v7 = Npc::getSkinId(v3);
  Social::Events::Event::addProperty<std::string>((int)&v48, &v44, (const char **)v7);
  v8 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v44 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v43, "CharacterCount");
  v42 = Npc::getDescriptionCharCount(v3);
  Social::Events::Event::addProperty<int>((int)&v48, &v43, &v42);
  v9 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v43 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v41, "WorldBuilder");
  Social::Events::Event::addProperty<bool>((int)&v48, &v41, &v49);
  v10 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v41 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Npc::getButtonCounts((Npc *)&v39, v3);
  sub_21E94B4((void **)&v38, "ButtonCommands");
  if ( v40 != v39 )
    v11 = 0;
    do
      Util::toString<unsigned int,(void *)0,(void *)0>((void **)&v36, v11);
      v16 = sub_21E82D8((const void **)&v36, 0, v38, *(_BYTE **)(v38 - 12));
      v37 = (char *)*v16;
      *v16 = &unk_28898CC;
      v17 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v36 - 4);
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
          j_j_j_j__ZdlPv_9(v17);
      }
      Social::Events::Event::addProperty<int>((int)&v48, (int *)&v37, (int *)v39 + v11);
      v18 = v37 - 12;
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v37 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      ++v11;
    while ( v11 < (v40 - (_BYTE *)v39) >> 2 );
  sub_21E94B4((void **)&v35, "UrlCount");
  v34 = Npc::getUrlCount(v3);
  Social::Events::Event::addProperty<int>((int)&v48, &v35, &v34);
  v19 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v35 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  Social::Events::EventManager::recordEvent((int)v4);
  v20 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v38 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v39 )
    operator delete(v39);
  return Social::Events::Event::~Event((int)&v48);
}


int __fastcall MinecraftEventing::fireEventItemUsed(int result, ItemInstance *a2, int a3)
{
  int v3; // r7@1
  int v4; // r5@1
  ItemInstance *v5; // r6@1
  Social::Events::EventManager *v6; // r8@4
  int v7; // r7@4
  void *v8; // r0@7
  void *v9; // r0@8
  void *v10; // r0@9
  void *v11; // r0@10
  void *v12; // r0@11
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  int v23; // [sp+8h] [bp-B8h]@11
  int v24; // [sp+10h] [bp-B0h]@11
  int v25; // [sp+14h] [bp-ACh]@10
  int v26; // [sp+1Ch] [bp-A4h]@10
  __int16 v27; // [sp+22h] [bp-9Eh]@9
  int v28; // [sp+28h] [bp-98h]@9
  int v29; // [sp+2Ch] [bp-94h]@8
  int v30; // [sp+34h] [bp-8Ch]@8
  void *ptr; // [sp+38h] [bp-88h]@4
  int v32; // [sp+50h] [bp-70h]@5
  int v33; // [sp+58h] [bp-68h]@4
  char v34; // [sp+5Ch] [bp-64h]@4
  char v35; // [sp+64h] [bp-5Ch]@8

  v3 = result;
  v4 = a3;
  v5 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3);
      if ( result )
      {
        v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1440))(v3) + 4);
        v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 1444))(v3);
        sub_21E94B4((void **)&v33, "ItemUsed");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v7);
        Social::Events::Event::Event((int)&v34, v7, &v33, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v32 != ptr )
          operator delete(ptr);
        v8 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
        {
          v13 = (unsigned int *)(v33 - 4);
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
            j_j_j_j__ZdlPv_9(v8);
        }
        v35 = 1;
        sub_21E94B4((void **)&v30, "Type");
        v29 = ItemInstance::getId(v5);
        Social::Events::Event::addProperty<int>((int)&v34, &v30, &v29);
        v9 = (void *)(v30 - 12);
        if ( (int *)(v30 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v30 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v28, "AuxType");
        v27 = ItemInstance::getAuxValue(v5);
        Social::Events::Event::addProperty<short>((int)&v34, &v28, &v27);
        v10 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v28 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v26, "ItemUseMethod");
        v25 = v4;
        Social::Events::Event::addProperty<unsigned int>((int)&v34, &v26, (unsigned int *)&v25);
        v11 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v26 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v24, "Count");
        v23 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v34, &v24, 0, (unsigned int *)&v23);
        v12 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v24 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        Social::Events::EventManager::recordEvent((int)v6);
        result = Social::Events::Event::~Event((int)&v34);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::addListener(int a1, int *a2)
{
  int v2; // r0@1
  int v3; // r2@1
  int result; // r0@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *a2;
  *a2 = 0;
  v5 = v3;
  Social::Events::EventManager::addListener(v2, &v5);
  result = v5;
  if ( v5 )
    result = (*(int (**)(void))(*(_DWORD *)v5 + 4))();
  return result;
}


int __fastcall MinecraftEventing::fireEventLicenseCheck(int a1, char a2, int a3)
{
  int v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  unsigned int v5; // r6@1
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  __int64 v22; // [sp+8h] [bp-C0h]@8
  int v23; // [sp+14h] [bp-B4h]@8
  __int64 v24; // [sp+18h] [bp-B0h]@7
  int v25; // [sp+24h] [bp-A4h]@7
  __int64 v26; // [sp+28h] [bp-A0h]@6
  int v27; // [sp+34h] [bp-94h]@6
  int v28; // [sp+3Ch] [bp-8Ch]@5
  void *ptr; // [sp+40h] [bp-88h]@1
  int v30; // [sp+58h] [bp-70h]@2
  int v31; // [sp+60h] [bp-68h]@1
  char v32; // [sp+64h] [bp-64h]@1
  char v33; // [sp+AFh] [bp-19h]@1

  v33 = a2;
  v3 = a3;
  v4 = *(Social::Events::EventManager **)(a1 + 4);
  v5 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v31, "LicenseCheck");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v32, v5, &v31, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v30 != ptr )
    operator delete(ptr);
  v6 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v31 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v28, "IsLicensed");
  Social::Events::Event::addProperty<bool>((int)&v32, &v28, (bool *)&v33);
  v7 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v28 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v27, "ValidationTime");
  v26 = *(_QWORD *)v3;
  Social::Events::Event::addProperty<long long>((int)&v32, &v27, &v26);
  v8 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v25, "RetryTime");
  v24 = *(_QWORD *)(v3 + 8);
  Social::Events::Event::addProperty<long long>((int)&v32, &v25, &v24);
  v9 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v25 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v23, "RetryAttempts");
  v22 = *(_QWORD *)(v3 + 16);
  Social::Events::Event::addProperty<long long>((int)&v32, &v23, &v22);
  v10 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v23 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v32);
}


int __fastcall MinecraftEventing::fireEventApiInit(MinecraftEventing *this, float a2, unsigned __int64 a3)
{
  int v3; // r5@1
  Social::Events::EventManager *v4; // r4@1
  unsigned int v5; // r6@1
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int v16; // [sp+4h] [bp-9Ch]@6
  int v17; // [sp+Ch] [bp-94h]@6
  int v18; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v20; // [sp+30h] [bp-70h]@2
  int v21; // [sp+38h] [bp-68h]@1
  char v22; // [sp+3Ch] [bp-64h]@1
  float v23; // [sp+84h] [bp-1Ch]@1

  v23 = a2;
  v3 = a3;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v21, "ApiInit");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v22, v5, &v21, (int)&ptr, 2);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v20 != ptr )
    operator delete(ptr);
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v18, "TimeToInit");
  Social::Events::Event::addProperty<float>((int)&v22, &v18, (int)&v23);
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v18 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v17, "MemoryDelta");
  v16 = v3;
  Social::Events::Event::addProperty<unsigned int>((int)&v22, &v17, (unsigned int *)&v16);
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v17 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v22);
}


int __fastcall MinecraftEventing::fireChatUsedEvent(MinecraftEventing *this, unsigned int a2, bool a3)
{
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r5@1
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  int v15; // [sp+Ch] [bp-94h]@6
  int v16; // [sp+14h] [bp-8Ch]@5
  void *ptr; // [sp+18h] [bp-88h]@1
  int v18; // [sp+30h] [bp-70h]@2
  int v19; // [sp+38h] [bp-68h]@1
  char v20; // [sp+3Ch] [bp-64h]@1
  bool v21; // [sp+87h] [bp-19h]@1
  unsigned int v22; // [sp+88h] [bp-18h]@1

  v22 = a2;
  v21 = a3;
  v3 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v4 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v19, "ChatUsed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v20, v4, &v19, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v18 != ptr )
    operator delete(ptr);
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v16, "ChatLength");
  Social::Events::Event::addProperty<unsigned int>((int)&v20, &v16, &v22);
  v6 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v15, "IsSlashCommand");
  Social::Events::Event::addProperty<bool>((int)&v20, &v15, &v21);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v20);
}


int __fastcall MinecraftEventing::fireEventSkinChanged(int a1, const char **a2)
{
  const char **v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-88h]@5
  void *ptr; // [sp+Ch] [bp-84h]@1
  int v14; // [sp+24h] [bp-6Ch]@2
  int v15; // [sp+2Ch] [bp-64h]@1
  char v16; // [sp+30h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v15, "SkinChanged");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v16, v4, &v15, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v14 != ptr )
    operator delete(ptr);
  v5 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v12, "skinId");
  Social::Events::Event::addProperty<std::string>((int)&v16, &v12, v2);
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v16);
}


int __fastcall MinecraftEventing::fireEventConnectionFailed(int a1, int a2)
{
  int v2; // r5@1
  Social::Events::EventManager *v3; // r4@1
  unsigned int v4; // r6@1
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+8h] [bp-90h]@5
  int v13; // [sp+10h] [bp-88h]@5
  void *ptr; // [sp+14h] [bp-84h]@1
  int v15; // [sp+2Ch] [bp-6Ch]@2
  int v16; // [sp+34h] [bp-64h]@1
  char v17; // [sp+38h] [bp-60h]@1

  v2 = a2;
  v3 = *(Social::Events::EventManager **)(a1 + 4);
  v4 = *(_DWORD *)(a1 + 12);
  sub_21E94B4((void **)&v16, "ConnectionFailed");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v3, v4);
  Social::Events::Event::Event((int)&v17, v4, &v16, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v15 != ptr )
    operator delete(ptr);
  v5 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v13, "FailureReason");
  v12 = v2;
  Social::Events::Event::addProperty<unsigned int>((int)&v17, &v13, (unsigned int *)&v12);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  Social::Events::EventManager::recordEvent((int)v3);
  return Social::Events::Event::~Event((int)&v17);
}


void __fastcall MinecraftEventing::init(MinecraftEventing *this)
{
  MinecraftEventing *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r5@1
  Social::Events::EventManager *v4; // r0@1
  Social::Events::EventManager *v5; // r0@2
  void *v6; // r0@3
  int v7; // r6@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  int v11; // r6@7
  void *v12; // r0@8
  const char **v13; // r0@10
  void *v14; // r0@10
  void *v15; // r0@11
  int v16; // r6@12
  int *v17; // r0@12
  int v18; // r0@12
  void *v19; // r0@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  unsigned int *v22; // r2@20
  signed int v23; // r1@22
  unsigned int *v24; // r2@24
  signed int v25; // r1@26
  unsigned int *v26; // r2@28
  signed int v27; // r1@30
  unsigned int *v28; // r2@32
  signed int v29; // r1@34
  unsigned int *v30; // r2@36
  signed int v31; // r1@38
  unsigned int *v32; // r2@40
  signed int v33; // r1@42
  int v34; // [sp+4h] [bp-94h]@12
  int v35; // [sp+8h] [bp-90h]@12
  int v36; // [sp+Ch] [bp-8Ch]@12
  int v37; // [sp+14h] [bp-84h]@7
  int v38; // [sp+18h] [bp-80h]@10
  int v39; // [sp+20h] [bp-78h]@10
  char v40; // [sp+30h] [bp-68h]@6
  int v41; // [sp+44h] [bp-54h]@6
  int v42; // [sp+4Ch] [bp-4Ch]@4
  int v43; // [sp+50h] [bp-48h]@4
  int v44; // [sp+58h] [bp-40h]@4
  char v45; // [sp+68h] [bp-30h]@3
  int v46; // [sp+7Ch] [bp-1Ch]@3

  v1 = this;
  LODWORD(v2) = operator new(0x80u);
  v3 = v2;
  Social::Events::EventManager::EventManager(v2);
  v4 = (Social::Events::EventManager *)*((_DWORD *)v1 + 1);
  *((_DWORD *)v1 + 1) = v3;
  if ( v4 )
  {
    v5 = Social::Events::EventManager::~EventManager(v4);
    operator delete((void *)v5);
  }
  Crypto::Random::generateUUID((int)&v45);
  mce::UUID::asString((mce::UUID *)&v46);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 7,
    &v46);
  v6 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v42, "AppSessionID");
  Social::Events::EventManager::setCommonProperty<std::string>(&v43, v7, (int **)&v42, (const char **)v1 + 7);
  Json::Value::~Value((Json::Value *)&v44);
  v8 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v43 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v42 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Crypto::Random::generateUUID((int)&v40);
  mce::UUID::asString((mce::UUID *)&v41);
    (int *)v1 + 8,
    &v41);
  v10 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v41 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 1);
  sub_21E94B4((void **)&v37, "locale");
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v12 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v12 = &ServiceLocator<AppPlatform>::mDefaultService;
  v13 = (const char **)(*(int (**)(void))(**(_DWORD **)v12 + 136))();
  Social::Events::EventManager::setCommonProperty<std::string>(&v38, v11, (int **)&v37, v13);
  Json::Value::~Value((Json::Value *)&v39);
  v14 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v38 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v37 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 1);
  v17 = sub_21E8AF4(&v34, (int *)v1 + 6);
  sub_21E7408((const void **)v17, "/Http.txt", 9u);
  std::make_unique<Social::Events::HttpTelemetry,std::string,Social::UserManager *&,std::string &>(
    &v35,
    &v34,
    (int *)v1 + 2,
    (int *)v1 + 8);
  v18 = v35;
  v35 = 0;
  v36 = v18;
  Social::Events::EventManager::addListener(v16, &v36);
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  v36 = 0;
  v19 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v34 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
}


int __fastcall MinecraftEventing::fireEventSignOutOfXboxLive(MinecraftEventing *this, const Social::XboxLiveUserManager *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r5@1
  int v4; // r6@4
  unsigned int *v5; // r1@5
  unsigned int v6; // r0@7
  unsigned int *v7; // r7@11
  unsigned int v8; // r0@13
  void *v9; // r0@21
  void *v15; // r0@22
  void *v16; // r0@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  int v24; // [sp+Ch] [bp-A4h]@23
  double v25; // [sp+10h] [bp-A0h]@22
  int v26; // [sp+20h] [bp-90h]@22
  void *ptr; // [sp+24h] [bp-8Ch]@18
  int v28; // [sp+3Ch] [bp-74h]@19
  int v29; // [sp+44h] [bp-6Ch]@18
  char v30; // [sp+48h] [bp-68h]@18
  Social::User *v31; // [sp+90h] [bp-20h]@2
  int v32; // [sp+94h] [bp-1Ch]@4

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = *((_DWORD *)this + 3);
  if ( HIDWORD(v2) )
  {
    Social::UserManager::getUser((Social::UserManager *)&v31, (const Social::XboxLiveUserManager *)HIDWORD(v2), (int)a2);
    if ( v31 )
      v3 = Social::User::getLocalUserId(v31);
    v4 = v32;
    if ( v32 )
    {
      v5 = (unsigned int *)(v32 + 4);
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
        v7 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    }
  }
  sub_21E94B4((void **)&v29, "SignOutOfXboxLive");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, (Social::Events::EventManager *)v2, v3);
  Social::Events::Event::Event((int)&v30, v3, &v29, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v28 != ptr )
    operator delete(ptr);
  v9 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent(v2);
  sub_21E94B4((void **)&v26, "TimeStamp");
  _R0 = getTimeS();
  __asm
    VMOV            D0, R0, R1
    VSTR            D0, [SP,#0xB0+var_A0]
  Social::Events::Event::addProperty<double>((int)&v30, &v26, (int)&v25);
  v15 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v26 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v24, "UserId");
  Social::Events::EventManager::removePlayerCommonProperty(v2, v3, (int **)&v24);
  v16 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  return Social::Events::Event::~Event((int)&v30);
}


void __fastcall MinecraftEventing::fireEventPlayerMessageTell(int a1, const char **a2, const char **a3, const char **a4)
{
  const char **v4; // r6@1
  const char **v5; // r4@1
  const char **v6; // r5@1
  int v7; // r7@1
  void **v8; // r0@1
  void *v9; // r0@1
  unsigned int *v10; // r2@3
  signed int v11; // r1@5
  int v12; // [sp+8h] [bp-20h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  v8 = sub_21E94B4((void **)&v12, "tell");
  MinecraftEventing::fireEventPlayerMessage(v7, v4, v6, v5, (const char **)v8);
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
}


int __fastcall MinecraftEventing::fireEventPackPlayed(MinecraftEventing *this, const PackInstance *a2, unsigned int a3, const PackStats *a4)
{
  PackInstance *v4; // r7@1
  MinecraftEventing *v5; // r4@1
  const PackStats *v6; // r9@1
  int result; // r0@1
  Social::Events::EventManager *v8; // r8@2
  unsigned int v9; // r4@2
  PackManifest *v10; // r6@2
  void *v11; // r0@5
  void *v12; // r0@6
  void *v13; // r0@7
  char *v14; // r0@8
  char *v15; // r0@8
  void *v16; // r0@8
  void *v17; // r0@9
  void *v18; // r0@10
  void *v19; // r0@11
  void *v20; // r0@12
  void *v21; // r0@13
  void *v22; // r0@14
  void *v23; // r0@15
  void *v24; // r0@16
  int v25; // r1@17
  void *v31; // r0@17
  void *v32; // r0@18
  void *v33; // r0@19
  void *v34; // r0@20
  char *v35; // r6@21
  char v36; // r2@21
  void *v37; // r0@23
  unsigned int v38; // r10@25
  unsigned int *v39; // r2@26
  signed int v40; // r1@28
  unsigned int *v41; // r2@30
  signed int v42; // r1@32
  unsigned int *v43; // r2@34
  signed int v44; // r1@36
  unsigned int *v45; // r2@38
  signed int v46; // r1@40
  const void **v47; // r0@58
  char *v48; // r0@58
  const void **v49; // r0@58
  const void **v50; // r0@58
  char *v51; // r0@58
  char *v52; // r0@59
  char *v53; // r0@60
  void *v54; // r0@61
  int v55; // r4@63
  void *v56; // r0@63
  void *v57; // r0@65
  void *v58; // r0@67
  int i; // r5@68
  unsigned int *v60; // r2@70
  signed int v61; // r1@72
  unsigned int *v62; // r2@74
  signed int v63; // r1@76
  unsigned int *v64; // r2@78
  signed int v65; // r1@80
  unsigned int *v66; // r2@82
  signed int v67; // r1@84
  unsigned int *v68; // r2@86
  signed int v69; // r1@88
  unsigned int *v70; // r2@90
  signed int v71; // r1@92
  unsigned int *v72; // r2@94
  signed int v73; // r1@96
  unsigned int *v74; // r2@98
  signed int v75; // r1@100
  unsigned int *v76; // r2@102
  signed int v77; // r1@104
  unsigned int *v78; // r2@106
  signed int v79; // r1@108
  unsigned int *v80; // r2@110
  signed int v81; // r1@112
  unsigned int *v82; // r2@114
  signed int v83; // r1@116
  unsigned int *v84; // r2@118
  signed int v85; // r1@120
  unsigned int *v86; // r2@122
  signed int v87; // r1@124
  unsigned int *v88; // r2@126
  signed int v89; // r1@128
  unsigned int *v90; // r2@130
  signed int v91; // r1@132
  unsigned int *v92; // r2@134
  signed int v93; // r1@136
  unsigned int *v94; // r2@138
  signed int v95; // r1@140
  unsigned int *v96; // r2@142
  signed int v97; // r1@144
  unsigned int *v98; // r2@146
  signed int v99; // r1@148
  unsigned int *v100; // r2@150
  signed int v101; // r1@152
  __int64 v102; // kr00_8@170
  unsigned int v103; // r1@170
  const void **v104; // r0@172
  const void **v105; // r0@174
  char *v106; // r0@174
  char *v107; // r0@175
  void *v108; // r0@176
  void *v109; // r0@177
  void *v110; // r0@179
  int j; // r4@180
  unsigned int *v112; // r2@182
  signed int v113; // r1@184
  unsigned int *v114; // r2@254
  signed int v115; // r1@256
  unsigned int *v116; // r2@262
  signed int v117; // r1@264
  unsigned int *v118; // r2@270
  signed int v119; // r1@272
  unsigned int *v120; // r2@274
  signed int v121; // r1@276
  unsigned int *v122; // r2@278
  signed int v123; // r1@280
  unsigned int *v124; // r2@282
  signed int v125; // r1@284
  unsigned int *v126; // r2@286
  signed int v127; // r1@288
  unsigned int *v128; // r2@290
  signed int v129; // r1@292
  unsigned int *v130; // r2@294
  signed int v131; // r1@296
  unsigned int *v132; // r2@298
  signed int v133; // r1@300
  unsigned int *v134; // r2@302
  signed int v135; // r1@304
  unsigned int *v136; // r2@306
  signed int v137; // r1@308
  const void **v138; // r0@350
  void *v139; // r0@350
  const void **v140; // r0@351
  char *v141; // r0@351
  void *v142; // r0@352
  const void **v143; // r0@353
  char *v144; // r0@353
  void *v145; // r0@354
  const void **v146; // r0@355
  const void **v147; // r0@355
  const void **v148; // r0@355
  char *v149; // r0@355
  char *v150; // r0@356
  char *v151; // r0@357
  void *v152; // r0@358
  char *v153; // r0@359
  void *v154; // r0@361
  char *v155; // r0@362
  void *v156; // r0@363
  void *v157; // r0@364
  unsigned int *v158; // r2@367
  signed int v159; // r1@369
  unsigned int *v160; // r2@379
  signed int v161; // r1@381
  unsigned int *v162; // r2@387
  signed int v163; // r1@389
  unsigned int *v164; // r2@391
  signed int v165; // r1@393
  unsigned int *v166; // r2@395
  signed int v167; // r1@397
  int v168; // [sp+14h] [bp-1CCh]@361
  int v169; // [sp+18h] [bp-1C8h]@302
  char *v170; // [sp+1Ch] [bp-1C4h]@298
  char *v171; // [sp+20h] [bp-1C0h]@294
  char *v172; // [sp+24h] [bp-1BCh]@290
  int v173; // [sp+28h] [bp-1B8h]@286
  char *v174; // [sp+2Ch] [bp-1B4h]@282
  int v175; // [sp+30h] [bp-1B0h]@278
  char *v176; // [sp+34h] [bp-1ACh]@274
  int v177; // [sp+38h] [bp-1A8h]@270
  char *v178; // [sp+3Ch] [bp-1A4h]@306
  char *v179; // [sp+40h] [bp-1A0h]@180
  int v180; // [sp+48h] [bp-198h]@179
  int v181; // [sp+4Ch] [bp-194h]@146
  unsigned int v182; // [sp+50h] [bp-190h]@150
  char *v183; // [sp+54h] [bp-18Ch]@142
  char *v184; // [sp+58h] [bp-188h]@138
  int v185; // [sp+60h] [bp-180h]@68
  int v186; // [sp+68h] [bp-178h]@67
  int v187; // [sp+70h] [bp-170h]@65
  int v188; // [sp+78h] [bp-168h]@63
  int v189; // [sp+7Ch] [bp-164h]@38
  char *v190; // [sp+80h] [bp-160h]@34
  char *v191; // [sp+84h] [bp-15Ch]@30
  char *v192; // [sp+88h] [bp-158h]@26
  int v193; // [sp+90h] [bp-150h]@24
  char v194; // [sp+97h] [bp-149h]@23
  int v195; // [sp+9Ch] [bp-144h]@21
  char v196; // [sp+A3h] [bp-13Dh]@20
  int v197; // [sp+A8h] [bp-138h]@20
  int v198; // [sp+B0h] [bp-130h]@19
  int v199; // [sp+B4h] [bp-12Ch]@18
  int v200; // [sp+BCh] [bp-124h]@18
  double v201; // [sp+C0h] [bp-120h]@17
  int v202; // [sp+CCh] [bp-114h]@17
  int v203; // [sp+D0h] [bp-110h]@16
  int v204; // [sp+D8h] [bp-108h]@16
  int v205; // [sp+DCh] [bp-104h]@15
  int v206; // [sp+E4h] [bp-FCh]@15
  char v207; // [sp+EBh] [bp-F5h]@14
  int v208; // [sp+F0h] [bp-F0h]@14
  int v209; // [sp+F4h] [bp-ECh]@13
  int v210; // [sp+FCh] [bp-E4h]@13
  int v211; // [sp+104h] [bp-DCh]@12
  char v212; // [sp+10Bh] [bp-D5h]@11
  int v213; // [sp+110h] [bp-D0h]@11
  int v214; // [sp+114h] [bp-CCh]@9
  int v215; // [sp+11Ch] [bp-C4h]@9
  int v216; // [sp+124h] [bp-BCh]@8
  char v217; // [sp+128h] [bp-B8h]@6
  int v218; // [sp+138h] [bp-A8h]@6
  int v219; // [sp+140h] [bp-A0h]@6
  char v220; // [sp+147h] [bp-99h]@6
  void *ptr; // [sp+148h] [bp-98h]@2
  int v222; // [sp+160h] [bp-80h]@3
  int v223; // [sp+168h] [bp-78h]@2
  char v224; // [sp+16Ch] [bp-74h]@2
  unsigned int v225; // [sp+1B4h] [bp-2Ch]@1

  v4 = a2;
  v5 = this;
  v6 = a4;
  v225 = a3;
  result = PackInstance::isVanilla(a2);
  if ( !result )
  {
    v8 = (Social::Events::EventManager *)*((_DWORD *)v5 + 1);
    v9 = *((_DWORD *)v5 + 3);
    v10 = (PackManifest *)PackInstance::getManifest(v4);
    sub_21E94B4((void **)&v223, "PackPlayed");
    MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
    Social::Events::Event::Event((int)&v224, v9, &v223, (int)&ptr, 0);
    std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
    if ( ptr && &v222 != ptr )
      operator delete(ptr);
    v11 = (void *)(v223 - 12);
    if ( (int *)(v223 - 12) != &dword_28898C0 )
    {
      v60 = (unsigned int *)(v223 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      }
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
    v220 = PackManifest::isPremium(v10) ^ 1;
    sub_21E94B4((void **)&v219, "PackId");
    PackInstance::getPackId((PackInstance *)&v217, (int)v4);
    mce::UUID::asString((mce::UUID *)&v218);
    Social::Events::Event::addProperty<std::string>((int)&v224, &v219, (const char **)&v218);
    v12 = (void *)(v218 - 12);
    if ( (int *)(v218 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v218 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = (void *)(v219 - 12);
    if ( (int *)(v219 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v219 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v216, "PackVersion");
    v14 = PackInstance::getVersion(v4);
    v15 = SemVersion::asString((SemVersion *)v14);
    Social::Events::Event::addProperty<std::string>((int)&v224, &v216, (const char **)v15);
    v16 = (void *)(v216 - 12);
    if ( (int *)(v216 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v216 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v215, "PackName");
    PackManifest::getName((PackManifest *)&v214, (int)v10);
    Social::Events::Event::addProperty<std::string>((int)&v224, &v215, (const char **)&v214);
    v17 = (void *)(v214 - 12);
    if ( (int *)(v214 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v214 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v215 - 12);
    if ( (int *)(v215 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v215 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v213, "PackTypeId");
    v212 = PackManifest::getPackType(v10);
    Social::Events::Event::addProperty<signed char>((int)&v224, &v213, &v212);
    v19 = (void *)(v213 - 12);
    if ( (int *)(v213 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v213 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21E94B4((void **)&v211, "StackPriority");
    Social::Events::Event::addProperty<unsigned int>((int)&v224, &v211, &v225);
    v20 = (void *)(v211 - 12);
    if ( (int *)(v211 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v211 - 4);
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v210, "Size");
    v209 = PackManifest::getPackSize(v10);
    Social::Events::Event::addProperty<unsigned int>((int)&v224, &v210, (unsigned int *)&v209);
    v21 = (void *)(v210 - 12);
    if ( (int *)(v210 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v210 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v208, "IsFromFolder");
    v207 = PackInstance::isZipped(v4);
    Social::Events::Event::addProperty<bool>((int)&v224, &v208, (bool *)&v207);
    v22 = (void *)(v208 - 12);
    if ( (int *)(v208 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v208 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    sub_21E94B4((void **)&v206, "PackFormatVersionNum");
    v205 = PackManifest::getFormatVersion(v10);
    Social::Events::Event::addProperty<int>((int)&v224, &v206, &v205);
    v23 = (void *)(v206 - 12);
    if ( (int *)(v206 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v206 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v204, "PackOriginalFormatVersionNum");
    v203 = PackManifest::getOriginalFormatVersion(v10);
    Social::Events::Event::addProperty<int>((int)&v224, &v204, &v203);
    v24 = (void *)(v204 - 12);
    if ( (int *)(v204 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v204 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    sub_21E94B4((void **)&v202, "PackLoadTime");
    _R0 = PackInstance::getLoadTime(v4, v25);
    __asm
      VMOV            D0, R0, R1
      VSTR            D0, [SP,#0x1E0+var_120]
    Social::Events::Event::addProperty<double>((int)&v224, &v202, (int)&v201);
    v31 = (void *)(v202 - 12);
    if ( (int *)(v202 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v202 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    sub_21E94B4((void **)&v200, "MemoryTier");
    v199 = PackInstance::getTierInfo(v4);
    Social::Events::Event::addProperty<int>((int)&v224, &v200, &v199);
    v32 = (void *)(v200 - 12);
    if ( (int *)(v200 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v200 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    sub_21E94B4((void **)&v198, "IsUserGenerated");
    Social::Events::Event::addProperty<bool>((int)&v224, &v198, (bool *)&v220);
    v33 = (void *)(v198 - 12);
    if ( (int *)(v198 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v198 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    sub_21E94B4((void **)&v197, "HasPlugins");
    v196 = PackManifest::hasPlugins(v10);
    Social::Events::Event::addProperty<bool>((int)&v224, &v197, (bool *)&v196);
    v34 = (void *)(v197 - 12);
    if ( (int *)(v197 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v197 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = PackManifest::getDependentPackIdentities(v10);
    sub_21E94B4((void **)&v195, "HasDependencies");
    v36 = 0;
    if ( *(_QWORD *)v35 >> 32 != (unsigned int)*(_QWORD *)v35 )
      v36 = 1;
    v194 = v36;
    Social::Events::Event::addProperty<bool>((int)&v224, &v195, (bool *)&v194);
    v37 = (void *)(v195 - 12);
    if ( (int *)(v195 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v195 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v37);
    sub_21E94B4((void **)&v193, (const char *)&unk_257BC67);
      v38 = 0;
      do
        mce::UUID::asString((mce::UUID *)&v189);
        v47 = sub_21E7408((const void **)&v189, " ", 1u);
        v190 = (char *)*v47;
        *v47 = &unk_28898CC;
        v48 = SemVersion::asString((SemVersion *)(*(_DWORD *)v35 + 48 * v38 + 16));
        v49 = sub_21E72F0((const void **)&v190, (const void **)v48);
        v191 = (char *)*v49;
        *v49 = &unk_28898CC;
        v50 = sub_21E7408((const void **)&v191, "\n", 1u);
        v192 = (char *)*v50;
        *v50 = &unk_28898CC;
        sub_21E72F0((const void **)&v193, (const void **)&v192);
        v51 = v192 - 12;
        if ( (int *)(v192 - 12) != &dword_28898C0 )
        {
          v39 = (unsigned int *)(v192 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
          }
          else
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        }
        v52 = v191 - 12;
        if ( (int *)(v191 - 12) != &dword_28898C0 )
          v41 = (unsigned int *)(v191 - 4);
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        v53 = v190 - 12;
        if ( (int *)(v190 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v190 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
        v54 = (void *)(v189 - 12);
        if ( (int *)(v189 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v189 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v54);
        ++v38;
      while ( v38 < -1431655765 * ((signed int)((*(_QWORD *)v35 >> 32) - *(_QWORD *)v35) >> 4) );
    sub_21E94B4((void **)&v188, "Dependencies");
    Social::Events::Event::addProperty<std::string>((int)&v224, &v188, (const char **)&v193);
    v55 = (int)v8;
    v56 = (void *)(v188 - 12);
    if ( (int *)(v188 - 12) != &dword_28898C0 )
      v112 = (unsigned int *)(v188 - 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 <= 0 )
        j_j_j_j__ZdlPv_9(v56);
    if ( v6 )
      sub_21E94B4((void **)&v187, "ParseTime");
      Social::Events::Event::addProperty<double>((int)&v224, &v187, (int)v6 + 64);
      v57 = (void *)(v187 - 12);
      if ( (int *)(v187 - 12) != &dword_28898C0 )
        v114 = (unsigned int *)(v187 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v115 = __ldrex(v114);
          while ( __strex(v115 - 1, v114) );
        else
          v115 = (*v114)--;
        if ( v115 <= 0 )
          j_j_j_j__ZdlPv_9(v57);
      if ( v220 )
        sub_21E94B4((void **)&v186, "UpgradedEntities");
        Social::Events::Event::addProperty<unsigned int>((int)&v224, &v186, (unsigned int *)v6 + 14);
        v58 = (void *)(v186 - 12);
        if ( (int *)(v186 - 12) != &dword_28898C0 )
          v116 = (unsigned int *)(v186 - 4);
              v117 = __ldrex(v116);
            while ( __strex(v117 - 1, v116) );
            v117 = (*v116)--;
          if ( v117 <= 0 )
            j_j_j_j__ZdlPv_9(v58);
        sub_21E94B4((void **)&v185, (const char *)&unk_257BC67);
        for ( i = *((_DWORD *)v6 + 2); i; i = *(_DWORD *)i )
          sub_21E8AF4((int *)&v182, (int *)(i + 4));
          sub_21E7408((const void **)&v182, " ", 1u);
          Util::toString<int,(void *)0,(void *)0>((void **)&v181, *(_DWORD *)(i + 8));
          v102 = *(_QWORD *)(v182 - 12);
          v103 = *(_DWORD *)(v181 - 12) + v102;
          if ( v103 > HIDWORD(v102) && v103 <= *(_DWORD *)(v181 - 8) )
            v104 = sub_21E82D8((const void **)&v181, 0, v182, (_BYTE *)v102);
            v104 = sub_21E72F0((const void **)&v182, (const void **)&v181);
          v183 = (char *)*v104;
          *v104 = &unk_28898CC;
          v105 = sub_21E7408((const void **)&v183, "\n", 1u);
          v184 = (char *)*v105;
          *v105 = &unk_28898CC;
          sub_21E72F0((const void **)&v185, (const void **)&v184);
          v106 = v184 - 12;
          if ( (int *)(v184 - 12) != &dword_28898C0 )
            v94 = (unsigned int *)(v184 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v95 = __ldrex(v94);
              while ( __strex(v95 - 1, v94) );
            }
            else
              v95 = (*v94)--;
            if ( v95 <= 0 )
              j_j_j_j__ZdlPv_9(v106);
          v107 = v183 - 12;
          if ( (int *)(v183 - 12) != &dword_28898C0 )
            v96 = (unsigned int *)(v183 - 4);
                v97 = __ldrex(v96);
              while ( __strex(v97 - 1, v96) );
              v97 = (*v96)--;
            if ( v97 <= 0 )
              j_j_j_j__ZdlPv_9(v107);
          v108 = (void *)(v181 - 12);
          if ( (int *)(v181 - 12) != &dword_28898C0 )
            v98 = (unsigned int *)(v181 - 4);
                v99 = __ldrex(v98);
              while ( __strex(v99 - 1, v98) );
              v99 = (*v98)--;
            if ( v99 <= 0 )
              j_j_j_j__ZdlPv_9(v108);
          v109 = (void *)(v182 - 12);
          if ( (int *)(v182 - 12) != &dword_28898C0 )
            v100 = (unsigned int *)(v182 - 4);
                v101 = __ldrex(v100);
              while ( __strex(v101 - 1, v100) );
              v101 = (*v100)--;
            if ( v101 <= 0 )
              j_j_j_j__ZdlPv_9(v109);
        sub_21E94B4((void **)&v180, "ComponentCounts");
        Social::Events::Event::addProperty<std::string>((int)&v224, &v180, (const char **)&v185);
        v110 = (void *)(v180 - 12);
        if ( (int *)(v180 - 12) != &dword_28898C0 )
          v160 = (unsigned int *)(v180 - 4);
              v161 = __ldrex(v160);
            while ( __strex(v161 - 1, v160) );
            v161 = (*v160)--;
          if ( v161 <= 0 )
            j_j_j_j__ZdlPv_9(v110);
        v179 = (char *)&unk_28898CC;
        for ( j = *((_DWORD *)v6 + 9); j; j = *(_DWORD *)j )
          Util::toString<int,(void *)0,(void *)0>((void **)&v177, *(_DWORD *)(j + 12));
          v138 = sub_21E7408((const void **)&v177, " ", 1u);
          v178 = (char *)*v138;
          *v138 = &unk_28898CC;
          v139 = (void *)(v177 - 12);
          if ( (int *)(v177 - 12) != &dword_28898C0 )
            v118 = (unsigned int *)(v177 - 4);
                v119 = __ldrex(v118);
              while ( __strex(v119 - 1, v118) );
              v119 = (*v118)--;
            if ( v119 <= 0 )
              j_j_j_j__ZdlPv_9(v139);
          Util::toString<int,(void *)0,(void *)0>((void **)&v175, *(_DWORD *)(j + 16));
          v140 = sub_21E7408((const void **)&v175, " ", 1u);
          v176 = (char *)*v140;
          *v140 = &unk_28898CC;
          sub_21E72F0((const void **)&v178, (const void **)&v176);
          v141 = v176 - 12;
          if ( (int *)(v176 - 12) != &dword_28898C0 )
            v120 = (unsigned int *)(v176 - 4);
                v121 = __ldrex(v120);
              while ( __strex(v121 - 1, v120) );
              v121 = (*v120)--;
            if ( v121 <= 0 )
              j_j_j_j__ZdlPv_9(v141);
          v142 = (void *)(v175 - 12);
          if ( (int *)(v175 - 12) != &dword_28898C0 )
            v122 = (unsigned int *)(v175 - 4);
                v123 = __ldrex(v122);
              while ( __strex(v123 - 1, v122) );
              v123 = (*v122)--;
            if ( v123 <= 0 )
              j_j_j_j__ZdlPv_9(v142);
          Util::toString<int,(void *)0,(void *)0>((void **)&v173, *(_DWORD *)(j + 20));
          v143 = sub_21E7408((const void **)&v173, " ", 1u);
          v174 = (char *)*v143;
          *v143 = &unk_28898CC;
          sub_21E72F0((const void **)&v178, (const void **)&v174);
          v144 = v174 - 12;
          if ( (int *)(v174 - 12) != &dword_28898C0 )
            v124 = (unsigned int *)(v174 - 4);
                v125 = __ldrex(v124);
              while ( __strex(v125 - 1, v124) );
              v125 = (*v124)--;
            if ( v125 <= 0 )
              j_j_j_j__ZdlPv_9(v144);
          v145 = (void *)(v173 - 12);
          if ( (int *)(v173 - 12) != &dword_28898C0 )
            v126 = (unsigned int *)(v173 - 4);
                v127 = __ldrex(v126);
              while ( __strex(v127 - 1, v126) );
              v127 = (*v126)--;
            if ( v127 <= 0 )
              j_j_j_j__ZdlPv_9(v145);
          Util::toString<int,(void *)0,(void *)0>((void **)&v169, *(_DWORD *)(j + 8));
          v146 = sub_21E7408((const void **)&v169, " ", 1u);
          v170 = (char *)*v146;
          *v146 = &unk_28898CC;
          v147 = sub_21E72F0((const void **)&v170, (const void **)&v178);
          v171 = (char *)*v147;
          *v147 = &unk_28898CC;
          v148 = sub_21E7408((const void **)&v171, "\n", 1u);
          v172 = (char *)*v148;
          *v148 = &unk_28898CC;
          sub_21E72F0((const void **)&v179, (const void **)&v172);
          v149 = v172 - 12;
          if ( (int *)(v172 - 12) != &dword_28898C0 )
            v128 = (unsigned int *)(v172 - 4);
                v129 = __ldrex(v128);
              while ( __strex(v129 - 1, v128) );
              v129 = (*v128)--;
            if ( v129 <= 0 )
              j_j_j_j__ZdlPv_9(v149);
          v150 = v171 - 12;
          if ( (int *)(v171 - 12) != &dword_28898C0 )
            v130 = (unsigned int *)(v171 - 4);
                v131 = __ldrex(v130);
              while ( __strex(v131 - 1, v130) );
              v131 = (*v130)--;
            if ( v131 <= 0 )
              j_j_j_j__ZdlPv_9(v150);
          v151 = v170 - 12;
          if ( (int *)(v170 - 12) != &dword_28898C0 )
            v132 = (unsigned int *)(v170 - 4);
                v133 = __ldrex(v132);
              while ( __strex(v133 - 1, v132) );
              v133 = (*v132)--;
            if ( v133 <= 0 )
              j_j_j_j__ZdlPv_9(v151);
          v152 = (void *)(v169 - 12);
          if ( (int *)(v169 - 12) != &dword_28898C0 )
            v134 = (unsigned int *)(v169 - 4);
                v135 = __ldrex(v134);
              while ( __strex(v135 - 1, v134) );
              v135 = (*v134)--;
            if ( v135 <= 0 )
              j_j_j_j__ZdlPv_9(v152);
          v153 = v178 - 12;
          if ( (int *)(v178 - 12) != &dword_28898C0 )
            v136 = (unsigned int *)(v178 - 4);
                v137 = __ldrex(v136);
              while ( __strex(v137 - 1, v136) );
              v137 = (*v136)--;
            if ( v137 <= 0 )
              j_j_j_j__ZdlPv_9(v153);
        sub_21E94B4((void **)&v168, "EntityStats");
        Social::Events::Event::addProperty<std::string>((int)&v224, &v168, (const char **)&v179);
        v55 = (int)v8;
        v154 = (void *)(v168 - 12);
        if ( (int *)(v168 - 12) != &dword_28898C0 )
          v162 = (unsigned int *)(v168 - 4);
              v163 = __ldrex(v162);
            while ( __strex(v163 - 1, v162) );
            v163 = (*v162)--;
          if ( v163 <= 0 )
            j_j_j_j__ZdlPv_9(v154);
        v155 = v179 - 12;
        if ( (int *)(v179 - 12) != &dword_28898C0 )
          v164 = (unsigned int *)(v179 - 4);
              v165 = __ldrex(v164);
            while ( __strex(v165 - 1, v164) );
            v165 = (*v164)--;
          if ( v165 <= 0 )
            j_j_j_j__ZdlPv_9(v155);
        v156 = (void *)(v185 - 12);
        if ( (int *)(v185 - 12) != &dword_28898C0 )
          v166 = (unsigned int *)(v185 - 4);
              v167 = __ldrex(v166);
            while ( __strex(v167 - 1, v166) );
            v167 = (*v166)--;
          if ( v167 <= 0 )
            j_j_j_j__ZdlPv_9(v156);
    Social::Events::EventManager::recordEvent(v55);
    v157 = (void *)(v193 - 12);
    if ( (int *)(v193 - 12) != &dword_28898C0 )
      v158 = (unsigned int *)(v193 - 4);
          v159 = __ldrex(v158);
        while ( __strex(v159 - 1, v158) );
        v159 = (*v158)--;
      if ( v159 <= 0 )
        j_j_j_j__ZdlPv_9(v157);
    result = Social::Events::Event::~Event((int)&v224);
  }
  return result;
}


void __fastcall MinecraftEventing::fireEventSetValidForAchievements(MinecraftEventing *this, Player *a2, bool a3)
{
  MinecraftEventing::fireEventSetValidForAchievements(this, a2, a3);
}


void __fastcall MinecraftEventing::fireEventEntitlementListInfo(int a1, unsigned __int64 *a2, char a3)
{
  MinecraftEventing::fireEventEntitlementListInfo(a1, a2, a3);
}


int __fastcall MinecraftEventing::fireEventMenuShown(int result, Player *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r5@1
  Social::Events::EventManager *v5; // r4@4
  int v6; // r5@4
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@17
  signed int v14; // r1@19
  unsigned int *v15; // r2@21
  signed int v16; // r1@23
  unsigned int *v17; // r2@25
  signed int v18; // r1@27
  int v19; // [sp+4h] [bp-A4h]@10
  int v20; // [sp+Ch] [bp-9Ch]@10
  int v21; // [sp+14h] [bp-94h]@9
  int v22; // [sp+1Ch] [bp-8Ch]@8
  void *ptr; // [sp+20h] [bp-88h]@4
  int v24; // [sp+38h] [bp-70h]@5
  int v25; // [sp+40h] [bp-68h]@4
  char v26; // [sp+44h] [bp-64h]@4
  unsigned int v27; // [sp+8Ch] [bp-1Ch]@1
  Player *v28; // [sp+90h] [bp-18h]@1

  v4 = result;
  v27 = a3;
  v28 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v5 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v25, "MenuShown");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v5, v6);
        Social::Events::Event::Event((int)&v26, v6, &v25, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v24 != ptr )
          operator delete(ptr);
        v7 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v25 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v7);
        }
        sub_21E94B4((void **)&v22, "MenuType");
        Social::Events::Event::addProperty<unsigned int>((int)&v26, &v22, (unsigned int *)&v28);
        v8 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v22 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v8);
        sub_21E94B4((void **)&v21, "SubMenuType");
        Social::Events::Event::addProperty<unsigned int>((int)&v26, &v21, &v27);
        v9 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v21 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v9);
        sub_21E94B4((void **)&v20, "Count");
        v19 = 1;
        Social::Events::Event::addMeasurement<unsigned int>((int)&v26, &v20, 0, (unsigned int *)&v19);
        v10 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v20 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        Social::Events::EventManager::recordEvent((int)v5);
        result = Social::Events::Event::~Event((int)&v26);
      }
    }
  }
  return result;
}


signed int __fastcall MinecraftEventing::_getAccountType(Social::User **a1)
{
  Social::User *v1; // r0@1
  signed int result; // r0@2
  int v3; // r0@3

  v1 = *a1;
  if ( v1 )
  {
    v3 = Social::User::getPlatformConnectionState(v1);
    if ( v3 == 3 )
    {
      result = 1;
    }
    else if ( v3 )
      result = 3;
    else
      result = 2;
  }
  else
    result = 3;
  return result;
}


int __fastcall MinecraftEventing::fireEventEntityInteracted(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r5@1
  int result; // r0@1
  Social::Events::EventManager *v8; // r4@4
  int v9; // r6@4
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  unsigned int *v21; // r2@26
  signed int v22; // r1@28
  unsigned int *v23; // r2@30
  signed int v24; // r1@32
  int v25; // [sp+8h] [bp-B0h]@11
  int v26; // [sp+10h] [bp-A8h]@10
  int v27; // [sp+14h] [bp-A4h]@9
  int v28; // [sp+1Ch] [bp-9Ch]@9
  int v29; // [sp+24h] [bp-94h]@8
  void *ptr; // [sp+28h] [bp-90h]@4
  int v31; // [sp+40h] [bp-78h]@5
  int v32; // [sp+48h] [bp-70h]@4
  char v33; // [sp+4Ch] [bp-6Ch]@4
  char v34; // [sp+97h] [bp-21h]@1
  int v35; // [sp+98h] [bp-20h]@1
  int v36; // [sp+9Ch] [bp-1Ch]@1

  v5 = a1;
  v6 = a3;
  result = a5;
  v35 = a4;
  v36 = a2;
  v34 = a5;
  if ( v5 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1408))(v5);
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5);
      if ( result )
      {
        v8 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1440))(v5) + 4);
        v9 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 1444))(v5);
        sub_21E94B4((void **)&v32, "MobInteracted");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v8, v9);
        Social::Events::Event::Event((int)&v33, v9, &v32, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v31 != ptr )
          operator delete(ptr);
        v10 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v32 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        sub_21E94B4((void **)&v29, "MobType");
        Social::Events::Event::addProperty<int>((int)&v33, &v29, &v36);
        v11 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v29 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v28, "InteractionType");
        v27 = v6;
        Social::Events::Event::addProperty<unsigned int>((int)&v33, &v28, (unsigned int *)&v27);
        v12 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v28 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v26, "MobVariant");
        Social::Events::Event::addProperty<int>((int)&v33, &v26, &v35);
        v13 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v26 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        sub_21E94B4((void **)&v25, "MobColor");
        Social::Events::Event::addProperty<unsigned char>((int)&v33, &v25, &v34);
        v14 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v23 = (unsigned int *)(v25 - 4);
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        Social::Events::EventManager::recordEvent((int)v8);
        result = Social::Events::Event::~Event((int)&v33);
      }
    }
  }
  return result;
}


int __fastcall MinecraftEventing::fireServerConnectionEvent(double a1, int a2, int a3, __int64 a4, const char **a5)
{
  int v5; // r6@1
  Social::Events::EventManager *v6; // r8@1
  unsigned int v8; // r7@1
  void *v9; // r0@4
  void *v10; // r0@5
  void *v15; // r0@6
  void *v16; // r0@7
  void *v17; // r0@8
  unsigned int *v19; // r2@10
  signed int v20; // r1@12
  unsigned int *v21; // r2@14
  signed int v22; // r1@16
  unsigned int *v23; // r2@18
  signed int v24; // r1@20
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  unsigned int *v27; // r2@26
  signed int v28; // r1@28
  int v29; // [sp+8h] [bp-B0h]@8
  float v30; // [sp+Ch] [bp-ACh]@7
  int v31; // [sp+14h] [bp-A4h]@7
  float v32; // [sp+18h] [bp-A0h]@6
  int v33; // [sp+20h] [bp-98h]@6
  int v34; // [sp+24h] [bp-94h]@5
  int v35; // [sp+2Ch] [bp-8Ch]@5
  void *ptr; // [sp+30h] [bp-88h]@1
  int v37; // [sp+48h] [bp-70h]@2
  int v38; // [sp+50h] [bp-68h]@1
  char v39; // [sp+54h] [bp-64h]@1

  v5 = HIDWORD(a1);
  v6 = *(Social::Events::EventManager **)(LODWORD(a1) + 4);
  _R5 = a2;
  v8 = *(_DWORD *)(LODWORD(a1) + 12);
  sub_21E94B4((void **)&v38, "ServerConnection");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v8);
  Social::Events::Event::Event((int)&v39, v8, &v38, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v37 != ptr )
    operator delete(ptr);
  v9 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v38 - 4);
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
      j_j_j_j__ZdlPv_9(v9);
  }
  sub_21E94B4((void **)&v35, "ConnectionOutcome");
  v34 = v5;
  Social::Events::Event::addProperty<unsigned int>((int)&v39, &v35, (unsigned int *)&v34);
  v10 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v35 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v33, "Ping");
  __asm
    VMOV            S0, R5
    VCVTR.U32.F32   S0, S0
    VSTR            S0, [SP,#0xB8+var_A0]
  Social::Events::Event::addProperty<unsigned int>((int)&v39, &v33, (unsigned int *)&v32);
  v15 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v33 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v31, "TimeElapsed");
    VLDR            D0, [SP,#0xB8+arg_0]
    VCVTR.U32.F64   S0, D0
    VSTR            S0, [SP,#0xB8+var_AC]
  Social::Events::Event::addProperty<unsigned int>((int)&v39, &v31, (unsigned int *)&v30);
  v16 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v31 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v29, "CreatorName");
  Social::Events::Event::addProperty<std::string>((int)&v39, &v29, a5);
  v17 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v29 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  Social::Events::EventManager::recordEvent((int)v6);
  return Social::Events::Event::~Event((int)&v39);
}


void __fastcall MinecraftEventing::fireEventEndOfDay(MinecraftEventing *this, Player *a2, Level *a3)
{
  MinecraftEventing *v3; // r6@1
  Level *v4; // r4@1
  unsigned __int64 *v5; // r0@4
  Social::Events::EventManager *v6; // r5@5
  unsigned int v7; // r0@5
  Dimension *v8; // r0@5
  void *v9; // r0@5
  int v15; // r6@10
  void *v16; // r0@13
  void *v17; // r0@15
  void *v18; // r0@16
  void *v19; // r0@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  unsigned int *v24; // r2@27
  signed int v25; // r1@29
  unsigned int *v26; // r2@31
  signed int v27; // r1@33
  unsigned int *v28; // r2@39
  signed int v29; // r1@41
  int v30; // [sp+Ch] [bp-CCh]@15
  int v31; // [sp+10h] [bp-C8h]@15
  int v32; // [sp+18h] [bp-C0h]@15
  void *ptr; // [sp+2Ch] [bp-ACh]@10
  int v34; // [sp+44h] [bp-94h]@11
  int v35; // [sp+4Ch] [bp-8Ch]@10
  char v36; // [sp+50h] [bp-88h]@10
  int v37; // [sp+9Ch] [bp-3Ch]@5
  int v38; // [sp+A0h] [bp-38h]@5
  int v39; // [sp+A8h] [bp-30h]@6
  int v40; // [sp+BCh] [bp-1Ch]@5

  v3 = this;
  v4 = a2;
  if ( this )
  {
    if ( (*(int (**)(void))(*(_DWORD *)this + 1408))() == 1 )
    {
      if ( (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3) )
      {
        v5 = (unsigned __int64 *)Level::getGameRules(v4);
        if ( GameRules::getBool(v5, (int **)&GameRules::DO_DAYLIGHT_CYCLE) == 1 )
        {
          v6 = *(Social::Events::EventManager **)((*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1440))(v3)
                                                + 4);
          v7 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 524))(v3);
          v8 = (Dimension *)Level::getDimension((int)v4, v7);
          v40 = Dimension::getTimeOfDay(v8, 1.0);
          sub_21E94B4((void **)&v37, "TimeOfDay");
          Social::Events::EventManager::getGlobalProperty((int)&v38, (int)v6, (int **)&v37);
          v9 = (void *)(v37 - 12);
          if ( (int *)(v37 - 12) != &dword_28898C0 )
          {
            v20 = (unsigned int *)(v37 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v21 = __ldrex(v20);
              while ( __strex(v21 - 1, v20) );
            }
            else
              v21 = (*v20)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v9);
          }
          _R0 = Json::Value::asFloat((Json::Value *)&v39, 0.0);
          __asm
            VMOV.F32        S0, #0.25
            VMOV            S2, R0
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            __asm
              VCMPE.F32       S2, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( !_ZF )
              __asm
              {
                VLDR            S2, [SP,#0xD8+var_1C]
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                v15 = (*(int (__fastcall **)(MinecraftEventing *))(*(_DWORD *)v3 + 1444))(v3);
                sub_21E94B4((void **)&v35, "EndOfDay");
                MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v6, v15);
                Social::Events::Event::Event((int)&v36, v15, &v35, (int)&ptr, 0);
                std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
                if ( ptr && &v34 != ptr )
                  operator delete(ptr);
                v16 = (void *)(v35 - 12);
                if ( (int *)(v35 - 12) != &dword_28898C0 )
                {
                  v28 = (unsigned int *)(v35 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v29 = __ldrex(v28);
                    while ( __strex(v29 - 1, v28) );
                  }
                  else
                    v29 = (*v28)--;
                  if ( v29 <= 0 )
                    j_j_j_j__ZdlPv_9(v16);
                }
                Social::Events::EventManager::recordEvent((int)v6);
                Social::Events::Event::~Event((int)&v36);
          sub_21E94B4((void **)&v30, "TimeOfDay");
          Social::Events::EventManager::setGlobalProperty<float>((int)&v31, (int)v6, (int **)&v30, (int)&v40);
          Json::Value::~Value((Json::Value *)&v32);
          v17 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v22 = (unsigned int *)(v31 - 4);
                v23 = __ldrex(v22);
              while ( __strex(v23 - 1, v22) );
              v23 = (*v22)--;
            if ( v23 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          v18 = (void *)(v30 - 12);
          if ( (int *)(v30 - 12) != &dword_28898C0 )
            v24 = (unsigned int *)(v30 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          Json::Value::~Value((Json::Value *)&v39);
          v19 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
            v26 = (unsigned int *)(v38 - 4);
                v27 = __ldrex(v26);
              while ( __strex(v27 - 1, v26) );
              v27 = (*v26)--;
            if ( v27 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
        }
      }
    }
  }
}


void __fastcall MinecraftEventing::fireEventStoreOfferPurchaseResolved(Offer *a1, const char **a2, int a3, int a4, Offer *a5)
{
  MinecraftEventing::fireEventStoreOfferPurchaseResolved(a1, a2, a3, a4, a5);
}


int __fastcall MinecraftEventing::fireEventEntityDanced(MinecraftEventing *this, int a2, int a3, unsigned __int8 a4)
{
  Social::Events::EventManager *v4; // r4@1
  unsigned int v5; // r5@1
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  int v19; // [sp+8h] [bp-A0h]@7
  int v20; // [sp+10h] [bp-98h]@6
  int v21; // [sp+18h] [bp-90h]@5
  void *ptr; // [sp+1Ch] [bp-8Ch]@1
  int v23; // [sp+34h] [bp-74h]@2
  int v24; // [sp+3Ch] [bp-6Ch]@1
  char v25; // [sp+40h] [bp-68h]@1
  unsigned __int8 v26; // [sp+8Bh] [bp-1Dh]@1
  int v27; // [sp+8Ch] [bp-1Ch]@1
  int v28; // [sp+90h] [bp-18h]@1

  v27 = a3;
  v28 = a2;
  v26 = a4;
  v4 = (Social::Events::EventManager *)*((_DWORD *)this + 1);
  v5 = *((_DWORD *)this + 3);
  sub_21E94B4((void **)&v24, "MobDanced");
  MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v4, v5);
  Social::Events::Event::Event((int)&v25, v5, &v24, (int)&ptr, 0);
  std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
  if ( ptr && &v23 != ptr )
    operator delete(ptr);
  v6 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v21, "MobType");
  Social::Events::Event::addProperty<int>((int)&v25, &v21, &v28);
  v7 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v21 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v20, "MobVariant");
  Social::Events::Event::addProperty<int>((int)&v25, &v20, &v27);
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v19, "MobColor");
  Social::Events::Event::addProperty<unsigned char>((int)&v25, &v19, &v26);
  v9 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  Social::Events::EventManager::recordEvent((int)v4);
  return Social::Events::Event::~Event((int)&v25);
}


int __fastcall MinecraftEventing::fireEventItemSmelted(int result, Player *a2, const ItemInstance *a3, const ItemInstance *a4)
{
  int v4; // r7@1
  ItemInstance *v5; // r5@1
  Player *v6; // r6@1
  Social::Events::EventManager *v7; // r8@4
  int v8; // r7@4
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  unsigned int *v22; // r2@30
  signed int v23; // r1@32
  __int16 v24; // [sp+Ah] [bp-B6h]@11
  int v25; // [sp+10h] [bp-B0h]@11
  int v26; // [sp+14h] [bp-ACh]@10
  int v27; // [sp+1Ch] [bp-A4h]@10
  __int16 v28; // [sp+22h] [bp-9Eh]@9
  int v29; // [sp+28h] [bp-98h]@9
  int v30; // [sp+2Ch] [bp-94h]@8
  int v31; // [sp+34h] [bp-8Ch]@8
  void *ptr; // [sp+38h] [bp-88h]@4
  int v33; // [sp+50h] [bp-70h]@5
  int v34; // [sp+58h] [bp-68h]@4
  char v35; // [sp+5Ch] [bp-64h]@4

  v4 = result;
  v5 = a3;
  v6 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v7 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v34, "ItemSmelted");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
        Social::Events::Event::Event((int)&v35, v8, &v34, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v33 != ptr )
          operator delete(ptr);
        v9 = (void *)(v34 - 12);
        if ( (int *)(v34 - 12) != &dword_28898C0 )
        {
          v14 = (unsigned int *)(v34 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        sub_21E94B4((void **)&v31, "Type");
        v30 = ItemInstance::getId(v6);
        Social::Events::Event::addProperty<int>((int)&v35, &v31, &v30);
        v10 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v16 = (unsigned int *)(v31 - 4);
              v17 = __ldrex(v16);
            while ( __strex(v17 - 1, v16) );
            v17 = (*v16)--;
          if ( v17 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v29, "AuxType");
        v28 = ItemInstance::getAuxValue(v6);
        Social::Events::Event::addProperty<short>((int)&v35, &v29, &v28);
        v11 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v29 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v27, "FuelSourceItemType");
        v26 = ItemInstance::getId(v5);
        Social::Events::Event::addProperty<int>((int)&v35, &v27, &v26);
        v12 = (void *)(v27 - 12);
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v27 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        sub_21E94B4((void **)&v25, "FuelSourceAuxType");
        v24 = ItemInstance::getAuxValue(v5);
        Social::Events::Event::addProperty<short>((int)&v35, &v25, &v24);
        v13 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v25 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        Social::Events::EventManager::recordEvent((int)v7);
        result = Social::Events::Event::~Event((int)&v35);
      }
    }
  }
  return result;
}


void __fastcall MinecraftEventing::addResourcePackData(int a1, int a2, int a3)
{
  MinecraftEventing::addResourcePackData(a1, a2, a3);
}


int __fastcall MinecraftEventing::fireEventPlayerTeleported(int result, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r5@1
  int v6; // r6@1
  Social::Events::EventManager *v7; // r8@4
  int v8; // r7@4
  void *v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  int v21; // [sp+8h] [bp-A8h]@10
  int v22; // [sp+Ch] [bp-A4h]@9
  int v23; // [sp+14h] [bp-9Ch]@9
  int v24; // [sp+18h] [bp-98h]@8
  int v25; // [sp+20h] [bp-90h]@8
  void *ptr; // [sp+24h] [bp-8Ch]@4
  int v27; // [sp+3Ch] [bp-74h]@5
  int v28; // [sp+44h] [bp-6Ch]@4
  char v29; // [sp+48h] [bp-68h]@4
  char v30; // [sp+50h] [bp-60h]@8
  int v31; // [sp+90h] [bp-20h]@1

  v4 = result;
  v5 = a4;
  v6 = a3;
  v31 = a2;
  if ( result )
  {
    result = (*(int (**)(void))(*(_DWORD *)result + 1408))();
    if ( result == 1 )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4);
      if ( result )
      {
        v7 = *(Social::Events::EventManager **)((*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1440))(v4) + 4);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 1444))(v4);
        sub_21E94B4((void **)&v28, "PlayerTeleported");
        MinecraftEventing::_buildCommonProperties((MinecraftEventing *)&ptr, v7, v8);
        Social::Events::Event::Event((int)&v29, v8, &v28, (int)&ptr, 0);
        std::_Hashtable<std::string,std::pair<std::string const,Social::Events::Property>,std::allocator<std::pair<std::string const,Social::Events::Property>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)&ptr);
        if ( ptr && &v27 != ptr )
          operator delete(ptr);
        v9 = (void *)(v28 - 12);
        if ( (int *)(v28 - 12) != &dword_28898C0 )
        {
          v13 = (unsigned int *)(v28 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        v30 = 1;
        sub_21E94B4((void **)&v25, "TeleportationCause");
        v24 = v6;
        Social::Events::Event::addProperty<unsigned int>((int)&v29, &v25, (unsigned int *)&v24);
        v10 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v25 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
        sub_21E94B4((void **)&v23, "TeleportationItem");
        v22 = EntityClassTree::getEntityTypeIdLegacy(v5);
        Social::Events::Event::addProperty<int>((int)&v29, &v23, &v22);
        v11 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v23 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        sub_21E94B4((void **)&v21, "MetersTravelled");
        Social::Events::Event::addProperty<float>((int)&v29, &v21, (int)&v31);
        v12 = (void *)(v21 - 12);
        if ( (int *)(v21 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v21 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
        Social::Events::EventManager::recordEvent((int)v7);
        result = Social::Events::Event::~Event((int)&v29);
      }
    }
  }
  return result;
}
