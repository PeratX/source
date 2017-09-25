

void __fastcall ResourcePackRepository::untrackInvalidPack(ResourcePackRepository *this, const ResourceLocation *a2)
{
  ResourcePackRepository::untrackInvalidPack(this, a2);
}


ResourcePackRepository::KnownPackInfo *__fastcall ResourcePackRepository::KnownPackInfo::KnownPackInfo(ResourcePackRepository::KnownPackInfo *this, const ResourcePackRepository::KnownPackInfo *a2)
{
  const ResourcePackRepository::KnownPackInfo *v2; // r7@1
  ResourcePackRepository::KnownPackInfo *v3; // r4@1
  int v4; // r12@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1

  v2 = a2;
  v3 = this;
  *(_BYTE *)this = *(_BYTE *)a2;
  sub_21E8AF4((int *)this + 1, (int *)a2 + 1);
  *((_DWORD *)v3 + 2) = *((_DWORD *)v2 + 2);
  std::vector<std::string,std::allocator<std::string>>::vector((int)v3 + 12, (unsigned __int64 *)((char *)v2 + 12));
  v4 = (int)v3 + 24;
  v5 = *((_DWORD *)v2 + 7);
  v6 = *((_DWORD *)v2 + 8);
  v7 = *((_DWORD *)v2 + 9);
  *(_DWORD *)v4 = *((_DWORD *)v2 + 6);
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  SemVersion::SemVersion((int)v3 + 40, (int)v2 + 40);
  *((_BYTE *)v3 + 64) = *((_BYTE *)v2 + 64);
  return v3;
}


void __fastcall ResourcePackRepository::updateVanillaPacks(ResourcePackRepository *this)
{
  ResourcePackRepository::updateVanillaPacks(this);
}


int __fastcall ResourcePackRepository::KnownPackContainer::getPack(ResourcePackRepository::KnownPackContainer *this, const ResourceLocation *a2)
{
  int v2; // r4@1
  int v3; // r7@1
  __int64 v4; // kr08_8@2
  size_t v5; // r6@2
  const void *v6; // r0@3
  int v7; // r0@4
  bool v8; // zf@4

  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  if ( v2 == v3 )
  {
LABEL_8:
    v2 = 0;
  }
  else
    v4 = *(_QWORD *)a2;
    v5 = *(_DWORD *)(*(_QWORD *)a2 - 12);
    while ( 1 )
    {
      v6 = *(const void **)(v2 + 4);
      if ( *((_DWORD *)v6 - 3) == v5 )
      {
        v7 = memcmp(v6, (const void *)v4, v5);
        v8 = v7 == 0;
        if ( !v7 )
          v8 = *(_DWORD *)(v2 + 8) == HIDWORD(v4);
        if ( v8 )
          break;
      }
      v2 += 72;
      if ( v3 == v2 )
        goto LABEL_8;
    }
  return v2;
}


void __fastcall ResourcePackRepository::getKnownInvalidPacksPath(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r4@1
  char *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  char *v5; // [sp+4h] [bp-24h]@1
  char *v6; // [sp+8h] [bp-20h]@1
  int v7; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  sub_21E8AF4((int *)&v5, (int *)&ResourcePackRepository::KNOWN_INVALID_PACKS_FILE_NAME);
  v6 = v5;
  v5 = (char *)&unk_28898CC;
  v7 = 4;
  ResourceLocation::getFullPath(v1, (int)&v6);
  v2 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
}


void __fastcall ResourcePackRepository::getKnownInvalidPacksPath(ResourcePackRepository *this)
{
  ResourcePackRepository::getKnownInvalidPacksPath(this);
}


ResourcePack *__fastcall ResourcePackRepository::getResourcePackSatisfiesPackId(ResourcePackRepository *this, const PackIdVersion *a2, int a3)
{
  ResourcePack *v3; // r4@0
  ResourcePackRepository *v4; // r11@1
  const PackIdVersion *v5; // r10@1
  ResourcePack **v6; // r7@1
  ResourcePack **v7; // r9@1
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  char *v14; // r5@30
  char *v15; // r0@30
  PackManifest *v16; // r0@31
  ResourcePack *v17; // r0@33
  signed int v18; // r5@34
  void *v19; // r0@37
  void *v20; // r0@38
  void *v21; // r0@39
  unsigned int *v22; // r2@46
  signed int v23; // r1@48
  unsigned int *v24; // r2@50
  signed int v25; // r1@52
  unsigned int *v26; // r2@54
  signed int v27; // r1@56
  char *v28; // r5@70
  char *v29; // r0@70
  PackManifest *v30; // r0@71
  signed int v31; // r5@71
  void *v32; // r0@73
  void *v33; // r0@74
  void *v34; // r0@75
  void **v36; // [sp+4h] [bp-5Ch]@3
  char v37; // [sp+8h] [bp-58h]@30
  int v38; // [sp+20h] [bp-40h]@14
  int v39; // [sp+24h] [bp-3Ch]@10
  int v40; // [sp+28h] [bp-38h]@6

  v4 = this;
  v5 = a2;
  v7 = (ResourcePack **)(*(_QWORD *)((char *)this + 4) >> 32);
  v6 = (ResourcePack **)*(_QWORD *)((char *)this + 4);
  if ( v6 == v7 )
  {
    v3 = 0;
  }
  else if ( a3 == 1 )
    v36 = &pthread_create_ptr;
    while ( 1 )
    {
      v14 = ResourcePack::getPackId(*v6);
      v15 = ResourcePack::getVersion(*v6);
      PackIdVersion::PackIdVersion((int)&v37, (int)v14, (int)v15, 0);
      if ( PackIdVersion::satisfies((PackIdVersion *)&v37, v5) == 1 )
      {
        v16 = (PackManifest *)ResourcePack::getManifest(*v6);
        if ( PackManifest::isPremium(v16) && (*(int (**)(void))(**((_DWORD **)v4 + 29) + 20))() != 1 )
          v17 = 0;
        else
          v17 = *v6;
        v18 = 1;
        v36 = (void **)v17;
      }
      else
        v18 = 0;
      v19 = (void *)(v40 - 12);
      if ( (int *)(v40 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v40 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
        }
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v10 = (unsigned int *)(v39 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
        v12 = (unsigned int *)(v38 - 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      if ( v18 )
        break;
      ++v6;
      if ( v6 == v7 )
        return 0;
    }
    v3 = (ResourcePack *)v36;
  else
      v28 = ResourcePack::getPackId(*v6);
      v29 = ResourcePack::getVersion(*v6);
      PackIdVersion::PackIdVersion((int)&v37, (int)v28, (int)v29, 0);
        v30 = (PackManifest *)ResourcePack::getManifest(*v6);
        PackManifest::isPremium(v30);
        v3 = *v6;
        v31 = 1;
        v31 = 0;
      v32 = (void *)(v40 - 12);
        v22 = (unsigned int *)(v40 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v32);
      v33 = (void *)(v39 - 12);
        v24 = (unsigned int *)(v39 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (void *)(v38 - 12);
        v26 = (unsigned int *)(v38 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      if ( v31 )
  return v3;
}


char *__fastcall ResourcePackRepository::getPacksByResourceLocation(int a1, int a2, int a3)
{
  int v3; // r4@1
  char *result; // r0@1
  ResourcePack **v5; // r5@1
  ResourcePack **v6; // r10@1
  char *v7; // r6@2
  ResourcePack *v8; // r9@4
  _BYTE *v9; // r11@6
  char *v10; // r7@6
  signed int v11; // r0@6
  unsigned int v12; // r1@6
  unsigned int v13; // r0@8
  unsigned int v14; // r8@8
  signed int v15; // r2@15
  int v16; // r6@15
  char *v17; // [sp+0h] [bp-28h]@1

  v3 = a1;
  result = 0;
  v17 = (char *)a3;
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v6 = (ResourcePack **)(*(_QWORD *)(a2 + 4) >> 32);
  v5 = (ResourcePack **)*(_QWORD *)(a2 + 4);
  if ( v5 != v6 )
  {
    v7 = 0;
    do
    {
      result = (char *)ResourcePack::getPackOrigin(*v5);
      if ( result == v17 )
      {
        v8 = *v5;
        if ( v7 == *(char **)(v3 + 8) )
        {
          v9 = *(_BYTE **)v3;
          v10 = 0;
          v11 = (signed int)&v7[-*(_DWORD *)v3];
          v12 = v11 >> 2;
          if ( !(v11 >> 2) )
            v12 = 1;
          v13 = v12 + (v11 >> 2);
          v14 = v13;
          if ( 0 != v13 >> 30 )
            v14 = 0x3FFFFFFF;
          if ( v13 < v12 )
          if ( v14 )
          {
            if ( v14 >= 0x40000000 )
              sub_21E57F4();
            v10 = (char *)operator new(4 * v14);
          }
          v15 = v7 - v9;
          v16 = (int)&v10[v7 - v9];
          *(_DWORD *)&v10[v15] = v8;
          if ( v15 >> 2 )
            _aeabi_memmove4(v10, v9);
          v7 = (char *)(v16 + 4);
          if ( v9 )
            operator delete(v9);
          result = &v10[4 * v14];
          *(_DWORD *)v3 = v10;
          *(_DWORD *)(v3 + 4) = v7;
          *(_DWORD *)(v3 + 8) = result;
        }
        else
          *(_DWORD *)v7 = v8;
          result = *(char **)(v3 + 4);
          v7 = result + 4;
          *(_DWORD *)(v3 + 4) = result + 4;
      }
      ++v5;
    }
    while ( v6 != v5 );
  }
  return result;
}


void __fastcall ResourcePackRepository::untrackInvalidPack(ResourcePackRepository *this, const ResourceLocation *a2)
{
  ResourcePackRepository *v2; // r4@1
  const void **v3; // r8@1
  int v4; // r7@1
  int v5; // r0@1
  int v6; // r6@1
  signed int v7; // r0@3
  int v8; // r5@4
  int v9; // r1@7
  void *v10; // r0@7
  int v11; // r7@8
  int v12; // r0@8
  int v13; // r6@8
  signed int v14; // r0@10
  int v15; // r5@11
  int v16; // r1@14
  void *v17; // r0@14
  int v18; // r7@15
  int v19; // r0@15
  int v20; // r6@15
  signed int v21; // r0@17
  int v22; // r5@18
  int v23; // r1@21
  void *v24; // r0@21
  int v25; // r6@22
  int v26; // r0@22
  int v27; // r5@22
  signed int v28; // r0@24
  int v29; // r7@25
  int v30; // r1@28
  void *v31; // r0@28
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  unsigned int *v36; // r2@38
  signed int v37; // r1@40
  unsigned int *v38; // r2@42
  signed int v39; // r1@44

  v2 = this;
  v3 = (const void **)a2;
  v4 = *(_QWORD *)((char *)this + 84) >> 32;
  v5 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation *,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
         *(_QWORD *)((char *)this + 84),
         v4,
         (const void **)a2);
  v6 = v5;
  if ( v5 != v4 )
  {
    if ( v5 + 8 != v4 )
    {
      v7 = v4 - (v5 + 8);
      if ( v7 >= 1 )
      {
        v8 = (v7 >> 3) + 1;
        do
        {
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v6,
            (int *)(v6 + 8));
          --v8;
          *(_DWORD *)(v6 + 4) = *(_DWORD *)(v6 + 12);
          v6 += 8;
        }
        while ( v8 > 1 );
        v4 = *((_DWORD *)v2 + 22);
      }
    }
    *((_DWORD *)v2 + 22) = v4 - 8;
    v9 = *(_DWORD *)(v4 - 8);
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v9 - 4);
      if ( &pthread_create )
        __dmb();
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
      else
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  }
  v11 = *((_QWORD *)v2 + 9) >> 32;
  v12 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation *,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
          *((_QWORD *)v2 + 9),
          v11,
          v3);
  v13 = v12;
  if ( v12 != v11 )
    if ( v12 + 8 != v11 )
      v14 = v11 - (v12 + 8);
      if ( v14 >= 1 )
        v15 = (v14 >> 3) + 1;
            (int *)v13,
            (int *)(v13 + 8));
          --v15;
          *(_DWORD *)(v13 + 4) = *(_DWORD *)(v13 + 12);
          v13 += 8;
        while ( v15 > 1 );
        v11 = *((_DWORD *)v2 + 19);
    *((_DWORD *)v2 + 19) = v11 - 8;
    v16 = *(_DWORD *)(v11 - 8);
    v17 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v16 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
  v18 = *((_QWORD *)v2 + 12) >> 32;
  v19 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation *,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
          *((_QWORD *)v2 + 12),
          v18,
  v20 = v19;
  if ( v19 != v18 )
    if ( v19 + 8 != v18 )
      v21 = v18 - (v19 + 8);
      if ( v21 >= 1 )
        v22 = (v21 >> 3) + 1;
            (int *)v20,
            (int *)(v20 + 8));
          --v22;
          *(_DWORD *)(v20 + 4) = *(_DWORD *)(v20 + 12);
          v20 += 8;
        while ( v22 > 1 );
        v18 = *((_DWORD *)v2 + 25);
    *((_DWORD *)v2 + 25) = v18 - 8;
    v23 = *(_DWORD *)(v18 - 8);
    v24 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v23 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  v25 = *(_QWORD *)((char *)v2 + 60) >> 32;
  v26 = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation *,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
          *(_QWORD *)((char *)v2 + 60),
          v25,
  v27 = v26;
  if ( v26 != v25 )
    if ( v26 + 8 != v25 )
      v28 = v25 - (v26 + 8);
      if ( v28 >= 1 )
        v29 = (v28 >> 3) + 1;
            (int *)v27,
            (int *)(v27 + 8));
          --v29;
          *(_DWORD *)(v27 + 4) = *(_DWORD *)(v27 + 12);
          v27 += 8;
        while ( v29 > 1 );
        v25 = *((_DWORD *)v2 + 16);
    *((_DWORD *)v2 + 16) = v25 - 8;
    v30 = *(_DWORD *)(v25 - 8);
    v31 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v30 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
}


RakNet *__fastcall ResourcePackRepository::getDevelopmentBehaviorPacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::_addResourcePackIfNotAlreadyAdded(ResourcePackRepository *this, Pack *a2)
{
  Pack *v2; // r4@1
  ResourcePackRepository *v3; // r6@1
  PackManifest *v4; // r10@1
  int result; // r0@1
  int v6; // r11@1
  char *v7; // r4@2
  char *v8; // r5@2
  ResourcePack **v9; // r6@2
  ResourcePack **v10; // r8@2
  int v11; // r5@3
  char *v12; // r0@4
  char *v13; // r0@6
  void *v14; // r5@9
  unsigned __int64 *v15; // r4@9
  void *v16; // r5@9
  __int64 v17; // r0@13
  ResourcePack *v18; // r0@16
  ResourcePackRepository *v19; // [sp+0h] [bp-40h]@2
  Pack *v20; // [sp+4h] [bp-3Ch]@1
  int v21; // [sp+8h] [bp-38h]@2
  void *v22; // [sp+Ch] [bp-34h]@9
  int v23; // [sp+10h] [bp-30h]@9
  void *v24; // [sp+14h] [bp-2Ch]@9
  ResourcePack *v25; // [sp+18h] [bp-28h]@9

  v2 = a2;
  v3 = this;
  v20 = a2;
  v4 = (PackManifest *)Pack::getManifest(a2);
  result = Pack::getAccessStrategy(v2);
  v6 = result;
  if ( result )
  {
    v7 = PackManifest::getIdentity(v4);
    v8 = PackManifest::getIdentity(v4);
    v21 = PackManifest::getPackOrigin(v4);
    v19 = v3;
    v10 = (ResourcePack **)(*(_QWORD *)((char *)v3 + 4) >> 32);
    v9 = (ResourcePack **)*(_QWORD *)((char *)v3 + 4);
    if ( v9 == v10 )
    {
LABEL_9:
      v14 = operator new(0xB0u);
      PackManifest::PackManifest((int)v14, (int)v4);
      v24 = v14;
      (*(void (__fastcall **)(int *, int))(*(_DWORD *)v6 + 8))(&v23, v6);
      v15 = (unsigned __int64 *)Pack::getSubpackInfoStack(v20);
      v16 = operator new(0xCu);
      std::vector<SubpackInfo,std::allocator<SubpackInfo>>::vector((int)v16, v15);
      v22 = v16;
      std::make_unique<ResourcePack,std::unique_ptr<PackManifest,std::default_delete<PackManifest>>,std::unique_ptr<PackAccessStrategy,std::default_delete<PackAccessStrategy>>,std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>>(
        &v25,
        (int *)&v24,
        &v23,
        (int *)&v22);
      std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr(&v22);
      if ( v23 )
        (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      v23 = 0;
      if ( v24 )
        (*(void (**)(void))(*(_DWORD *)v24 + 4))();
      v24 = 0;
      v17 = *((_QWORD *)v19 + 1);
      if ( (_DWORD)v17 == HIDWORD(v17) )
      {
        std::vector<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>,std::allocator<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>>::_M_emplace_back_aux<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>(
          (ResourcePackRepository *)((char *)v19 + 4),
          (int *)&v25);
        if ( v25 )
        {
          v18 = ResourcePack::~ResourcePack(v25);
          operator delete((void *)v18);
        }
      }
      else
        HIDWORD(v17) = v25;
        v25 = 0;
        *(_DWORD *)v17 = HIDWORD(v17);
        *((_DWORD *)v19 + 2) = v17 + 4;
      result = 0;
    }
    else
      v11 = (int)(v8 + 16);
      while ( 1 )
        v12 = ResourcePack::getPackId(*v9);
        if ( *(_QWORD *)v7 == *(_QWORD *)v12 && *((_QWORD *)v7 + 1) == *((_QWORD *)v12 + 1) )
          v13 = ResourcePack::getVersion(*v9);
          if ( SemVersion::operator==((int)v13, v11) == 1 )
          {
            result = ResourcePack::getPackOrigin(*v9);
            if ( result == v21 )
              break;
          }
        ++v9;
        if ( v10 == v9 )
          goto LABEL_9;
  }
  return result;
}


signed int __fastcall ResourcePackRepository::_packExists(int a1, int a2, int a3, int a4)
{
  ResourcePack **v4; // r4@1
  ResourcePack **v5; // r7@1
  int v6; // r8@1
  int v7; // r9@1
  _QWORD *v8; // r6@1
  _QWORD *v9; // r10@2
  char *v10; // r0@3
  char *v11; // r0@5
  signed int result; // r0@8

  v4 = (ResourcePack **)(*(_QWORD *)(a1 + 4) >> 32);
  v5 = (ResourcePack **)*(_QWORD *)(a1 + 4);
  v6 = a4;
  v7 = a3;
  v8 = (_QWORD *)a2;
  if ( v5 == v4 )
  {
LABEL_8:
    result = 0;
  }
  else
    v9 = (_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v10 = ResourcePack::getPackId(*v5);
      if ( *v8 == *(_QWORD *)v10 && *v9 == *((_QWORD *)v10 + 1) )
      {
        v11 = ResourcePack::getVersion(*v5);
        if ( SemVersion::operator==((int)v11, v7) == 1 && ResourcePack::getPackOrigin(*v5) == v6 )
          break;
      }
      ++v5;
      if ( v4 == v5 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


void __fastcall ResourcePackRepository::_updatePackLogVersion(int a1, int a2, int a3)
{
  ResourcePackRepository::_updatePackLogVersion(a1, a2, a3);
}


void __fastcall ResourcePackRepository::getKnownPacksPath(ResourcePackRepository *a1, int a2, int a3)
{
  if ( a3 == 1 )
  {
    ResourcePackRepository::getKnownInvalidPacksPath(a1);
  }
  else if ( a3 )
    sub_21E8AF4((int *)a1, (int *)&Util::EMPTY_STRING);
  else
    ResourcePackRepository::getKnownValidPacksPath(a1);
}


void __fastcall ResourcePackRepository::_updateContentManagers(ResourcePackRepository *this)
{
  __int64 v1; // r4@1
  ContentManager *v2; // t1@2

  v1 = *((_QWORD *)this + 20);
  while ( HIDWORD(v1) != (_DWORD)v1 )
  {
    v2 = *(ContentManager **)v1;
    LODWORD(v1) = v1 + 4;
    ContentManager::reloadSources(v2, 0);
  }
}


void __fastcall ResourcePackRepository::_updateKnownUserPacks(int a1, unsigned __int64 *a2, int a3)
{
  ResourcePackRepository::_updateKnownUserPacks(a1, a2, a3);
}


void __fastcall ResourcePackRepository::addWorldResourcePacks(int a1, int *a2)
{
  ResourcePackRepository::addWorldResourcePacks(a1, a2);
}


int __fastcall ResourcePackRepository::_detectKnownPacksChange(int a1, int a2, unsigned __int64 *a3, int a4)
{
  int v4; // r11@1
  int v5; // r8@1
  int v6; // r10@1
  int v7; // r5@4 OVERLAPPED
  int v8; // r6@4 OVERLAPPED
  ResourcePackRepository::KnownPackInfo *v9; // r4@9
  int v10; // r7@9
  __int64 v11; // kr10_8@10
  size_t v12; // r6@10
  const void *v13; // r0@11
  int v14; // r0@12
  bool v15; // zf@12
  int result; // r0@19
  int v17; // r8@19
  unsigned __int64 *v18; // r9@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  signed int v21; // r1@29
  unsigned int *v22; // r2@33
  signed int v23; // r1@35
  signed int v24; // r1@41
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  unsigned int *v27; // r2@49
  signed int v28; // r1@51
  unsigned int *v29; // r2@53
  signed int v30; // r1@55
  unsigned int *v31; // r2@61
  signed int v32; // r1@63
  unsigned int *v33; // r2@77
  signed int v34; // r1@79
  unsigned int *v35; // r2@81
  signed int v36; // r1@83
  unsigned int *v37; // r2@93
  signed int v38; // r1@95
  int v39; // r4@101
  int v40; // r5@101
  int v41; // r7@106
  __int64 v42; // kr30_8@107
  size_t v43; // r4@107
  const void *v44; // r0@108
  int v45; // r0@109
  bool v46; // zf@109
  int v47; // r11@113
  void *v48; // r0@113
  ResourcePack *v49; // r7@116
  void *v50; // r0@116
  char v51; // r6@123
  char v52; // r7@129
  void *v53; // r0@134
  const void **v54; // r4@140
  const void **v55; // r0@140
  unsigned int *v56; // r2@143
  signed int v57; // r1@145
  int *v58; // r0@147
  void *v59; // r0@150
  PackManifest *v60; // r6@151
  int v61; // r4@151
  void *v62; // r0@151
  void *v63; // r0@159
  __int64 v64; // r0@165
  char *v65; // r0@168
  void *v66; // r0@169
  unsigned int *v67; // r2@174
  unsigned int *v68; // r2@182
  int *v69; // r0@186
  void *v70; // r0@189
  int v71; // r4@190
  PackManifest *v72; // r0@190
  Pack *v73; // r0@192
  MinecraftEventing *v74; // r4@193
  const PackManifest *v75; // r0@193
  char *v76; // r0@194
  int v77; // [sp+28h] [bp-100h]@1
  int v78; // [sp+2Ch] [bp-FCh]@19
  unsigned __int64 *v79; // [sp+30h] [bp-F8h]@1
  int v80; // [sp+34h] [bp-F4h]@115
  int v81; // [sp+38h] [bp-F0h]@1
  int v82; // [sp+3Ch] [bp-ECh]@61
  int v83; // [sp+40h] [bp-E8h]@134
  int v84; // [sp+44h] [bp-E4h]@133
  int v85; // [sp+48h] [bp-E0h]@133
  void *v86; // [sp+4Ch] [bp-DCh]@53
  int v87; // [sp+50h] [bp-D8h]@132
  int v88; // [sp+54h] [bp-D4h]@132
  int v89; // [sp+58h] [bp-D0h]@33
  int v90; // [sp+5Ch] [bp-CCh]@21
  int v91; // [sp+60h] [bp-C8h]@159
  int v92; // [sp+64h] [bp-C4h]@158
  int v93; // [sp+68h] [bp-C0h]@158
  char *v94; // [sp+6Ch] [bp-BCh]@158
  int v95; // [sp+70h] [bp-B8h]@158
  int v96; // [sp+74h] [bp-B4h]@49
  int v97; // [sp+78h] [bp-B0h]@81
  int v98; // [sp+7Ch] [bp-ACh]@45
  PackManifest *v99; // [sp+80h] [bp-A8h]@127
  int v100; // [sp+84h] [bp-A4h]@126
  char v101; // [sp+88h] [bp-A0h]@126
  int v102; // [sp+F0h] [bp-38h]@93
  int v103; // [sp+F4h] [bp-34h]@77
  int v104; // [sp+F8h] [bp-30h]@116
  int v105; // [sp+FCh] [bp-2Ch]@113

  v81 = a4;
  v4 = a2;
  v79 = a3;
  v77 = a1;
  v6 = *a3 >> 32;
  v5 = *a3;
  while ( v5 != v6 )
  {
    *(_QWORD *)&v7 = *(_QWORD *)v4;
    if ( v7 == v8 )
      goto LABEL_9;
    while ( PackIdVersion::operator==(v7 + 24, v5 + 24) != 1 )
    {
      v7 += 72;
      if ( v8 == v7 )
        goto LABEL_9;
    }
    if ( v7 )
LABEL_2:
      v5 += 72;
    else
LABEL_9:
      v9 = (ResourcePackRepository::KnownPackInfo *)(*(_QWORD *)v4 >> 32);
      v10 = *(_QWORD *)v4;
      if ( (ResourcePackRepository::KnownPackInfo *)v10 != v9 )
      {
        v11 = *(_QWORD *)(v5 + 4);
        v12 = *(_DWORD *)(v11 - 12);
        do
        {
          v13 = *(const void **)(v10 + 4);
          if ( *((_DWORD *)v13 - 3) == v12 )
          {
            v14 = memcmp(v13, (const void *)v11, v12);
            v15 = v14 == 0;
            if ( !v14 )
              v15 = *(_DWORD *)(v10 + 8) == HIDWORD(v11);
            if ( v15 )
              goto LABEL_2;
          }
          v10 += 72;
        }
        while ( v9 != (ResourcePackRepository::KnownPackInfo *)v10 );
      }
      if ( v9 == *(ResourcePackRepository::KnownPackInfo **)(v4 + 8) )
        std::vector<ResourcePackRepository::KnownPackInfo,std::allocator<ResourcePackRepository::KnownPackInfo>>::_M_emplace_back_aux<ResourcePackRepository::KnownPackInfo const&>(
          (unsigned __int64 *)v4,
          (const ResourcePackRepository::KnownPackInfo *)v5);
        goto LABEL_2;
      ResourcePackRepository::KnownPackInfo::KnownPackInfo(v9, (const ResourcePackRepository::KnownPackInfo *)v5);
      *(_DWORD *)(v4 + 4) += 72;
  }
  result = *(_QWORD *)v4 >> 32;
  v17 = *(_QWORD *)v4;
  v18 = v79;
  v78 = result;
  if ( v17 != result )
    while ( 1 )
      v39 = *v18 >> 32;
      v40 = *v18;
      if ( v40 == v39 )
        goto LABEL_106;
      while ( PackIdVersion::operator==(v40 + 24, v17 + 24) != 1 )
        v40 += 72;
        if ( v39 == v40 )
          goto LABEL_106;
      if ( !v40 )
LABEL_106:
        v41 = *v18 >> 32;
        v40 = *v18;
        if ( v40 == v41 )
LABEL_113:
          v47 = v17 + 4;
          ResourceLocation::getFullPath((ResourceLocation *)&v105, v17 + 4);
          v48 = (void *)(v105 - 12);
          if ( (int *)(v105 - 12) != &dword_28898C0 )
            v56 = (unsigned int *)(v105 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
            }
            else
              v57 = (*v56)--;
            if ( v57 <= 0 )
              j_j_j_j__ZdlPv_9(v48);
          if ( v81 == 1 )
            if ( *(_DWORD *)(v17 + 8) != 1 )
              *(_BYTE *)v17 = 1;
            v80 = v17;
            PackReport::PackReport((int)&v101);
            PackAccessStrategyFactory::create(
              (PackAccessStrategyFactory *)&v100,
              (ResourceLocation *)(v17 + 4),
              *(const IContentKeyProvider **)(v77 + 116),
              (PackReport *)&v101,
              0);
            v18 = v79;
            if ( v100 )
              PackManifestFactory::create(&v99, *(void **)(v77 + 112), v100, v17 + 4, (int)&v101, 0);
              if ( v99 )
              {
                ResourceLocation::getFullPath((ResourceLocation *)&v98, v17 + 4);
                if ( sub_21E76A0(
                       &v98,
                       (_BYTE *)ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH,
                       0,
                       *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH - 12)) == -1 )
                {
                  ResourceLocation::getFullPath((ResourceLocation *)&v97, v17 + 4);
                  v15 = sub_21E76A0(
                          &v97,
                          (_BYTE *)ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH,
                          0,
                          *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH - 12)) == -1;
                  v52 = 0;
                  v58 = (int *)(v97 - 12);
                  if ( !v15 )
                    v52 = 1;
                  if ( v58 != &dword_28898C0 )
                  {
                    v35 = (unsigned int *)(v97 - 4);
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
                      j_j_j_j__ZdlPv_9(v58);
                  }
                }
                else
                  v52 = 1;
                v59 = (void *)(v98 - 12);
                if ( (int *)(v98 - 12) != &dword_28898C0 )
                  v25 = (unsigned int *)(v98 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v26 = __ldrex(v25);
                    while ( __strex(v26 - 1, v25) );
                  else
                    v26 = (*v25)--;
                  if ( v26 <= 0 )
                    j_j_j_j__ZdlPv_9(v59);
                v60 = v99;
                v61 = *(_DWORD *)(v77 + 108);
                PackReport::serializeEventErrorMessages((PackReport *)&v96, (int)&v101);
                MinecraftEventing::fireEventNewUserPackDetected(v61, v60, 0, (int)&v96, v52);
                v62 = (void *)(v96 - 12);
                if ( (int *)(v96 - 12) != &dword_28898C0 )
                  v27 = (unsigned int *)(v96 - 4);
                      v28 = __ldrex(v27);
                    while ( __strex(v28 - 1, v27) );
                    v28 = (*v27)--;
                  if ( v28 <= 0 )
                    j_j_j_j__ZdlPv_9(v62);
                if ( v99 )
                  (*(void (**)(void))(*(_DWORD *)v99 + 4))();
              }
              if ( v100 )
                (*(void (**)(void))(*(_DWORD *)v100 + 4))();
            PackReport::~PackReport((PackReport *)&v101);
          else
            if ( !v81 )
              ResourceLocation::getFullPath((ResourceLocation *)&v104, v17 + 4);
              v49 = ResourcePackRepository::getResourcePackInPath(v77, &v104);
              v50 = (void *)(v104 - 12);
              if ( (int *)(v104 - 12) != &dword_28898C0 )
                v68 = (unsigned int *)(v104 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v24 = __ldrex(v68);
                  while ( __strex(v24 - 1, v68) );
                  v24 = (*v68)--;
                if ( v24 <= 0 )
                  j_j_j_j__ZdlPv_9(v50);
              if ( v49 )
                if ( ResourcePack::getPackCategory(v49) == 3 )
                  *(_BYTE *)v17 = 1;
                if ( ResourcePack::getPackCategory(v49) != 1 && ResourcePack::getPackCategory(v49) != 2 )
                  ResourceLocation::getFullPath((ResourceLocation *)&v103, v17 + 4);
                  if ( sub_21E76A0(
                         &v103,
                         (_BYTE *)ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH,
                         0,
                         *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH - 12)) == -1 )
                    ResourceLocation::getFullPath((ResourceLocation *)&v102, v17 + 4);
                    v15 = sub_21E76A0(
                            &v102,
                            (_BYTE *)ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH,
                            0,
                            *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_BEHAVIOR_PACKS_PATH - 12)) == -1;
                    v51 = 0;
                    v69 = (int *)(v102 - 12);
                    if ( !v15 )
                      v51 = 1;
                    if ( v69 != &dword_28898C0 )
                      v37 = (unsigned int *)(v102 - 4);
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
                        j_j_j_j__ZdlPv_9(v69);
                    v51 = 1;
                  v70 = (void *)(v103 - 12);
                  if ( (int *)(v103 - 12) != &dword_28898C0 )
                    v33 = (unsigned int *)(v103 - 4);
                        v34 = __ldrex(v33);
                      while ( __strex(v34 - 1, v33) );
                      v34 = (*v33)--;
                    if ( v34 <= 0 )
                      j_j_j_j__ZdlPv_9(v70);
                  v71 = *(_DWORD *)(v77 + 108);
                  v72 = (PackManifest *)ResourcePack::getManifest(v49);
                  MinecraftEventing::fireEventNewUserPackDetected(v71, v72, 1, (int)&Util::EMPTY_STRING, v51);
          v17 = v80;
          if ( !*(_BYTE *)v80 )
            goto LABEL_196;
          ResourceLocation::getFullPath((ResourceLocation *)&v95, v47);
          v94 = (char *)&unk_28898CC;
          v92 = v95;
          v93 = *(_DWORD *)(v95 - 12);
          if ( Core::FileSystem::directoryExists((__int64 *)&v92) == 1 )
            CryptoUtils::getDirectroyChecksum((Crypto::Hash::Hash *)&v91, &v95);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              (int *)&v94,
              &v91);
            v63 = (void *)(v91 - 12);
            if ( (int *)(v91 - 12) != &dword_28898C0 )
              v19 = (unsigned int *)(v91 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
                goto LABEL_26;
LABEL_25:
              v20 = (*v19)--;
LABEL_26:
              if ( v20 <= 0 )
                j_j_j_j__ZdlPv_9(v63);
            CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&v90, &v95);
              &v90);
            v63 = (void *)(v90 - 12);
            if ( (int *)(v90 - 12) != &dword_28898C0 )
              v19 = (unsigned int *)(v90 - 4);
              goto LABEL_25;
          v64 = *(_QWORD *)(v80 + 16);
          if ( (_DWORD)v64 == HIDWORD(v64) )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)(v80 + 12),
              (int *)&v94);
            sub_21E8AF4((int *)v64, (int *)&v94);
            *(_DWORD *)(v80 + 16) += 4;
          v65 = v94 - 12;
          if ( (int *)(v94 - 12) != &dword_28898C0 )
            v67 = (unsigned int *)(v94 - 4);
                v21 = __ldrex(v67);
              while ( __strex(v21 - 1, v67) );
              v21 = (*v67)--;
            if ( v21 <= 0 )
              j_j_j_j__ZdlPv_9(v65);
          v66 = (void *)(v95 - 12);
          if ( (int *)(v95 - 12) == &dword_28898C0 )
          v22 = (unsigned int *)(v95 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            goto LABEL_38;
LABEL_37:
          v23 = (*v22)--;
          goto LABEL_38;
        v42 = *(_QWORD *)(v17 + 4);
        v43 = *(_DWORD *)(v42 - 12);
        while ( 1 )
          v44 = *(const void **)(v40 + 4);
          if ( *((_DWORD *)v44 - 3) == v43 )
            v45 = memcmp(v44, (const void *)v42, v43);
            v46 = v45 == 0;
            if ( !v45 )
              v46 = *(_DWORD *)(v40 + 8) == HIDWORD(v42);
            if ( v46 )
              break;
          v40 += 72;
          if ( v41 == v40 )
            goto LABEL_113;
        v18 = v79;
      *(_BYTE *)v17 = *(_BYTE *)v40;
      EntityInteraction::setInteractText((int *)(v17 + 4), (int *)(v40 + 4));
      *(_DWORD *)(v17 + 8) = *(_DWORD *)(v40 + 8);
      std::vector<std::string,std::allocator<std::string>>::operator=(v17 + 12, (unsigned __int64 *)(v40 + 12));
      if ( *(_BYTE *)v17 )
        break;
LABEL_196:
      v17 += 72;
      result = v78;
      if ( v17 == v78 )
        return result;
    ResourceLocation::getFullPath((ResourceLocation *)&v89, v17 + 4);
    v87 = v89;
    v88 = *(_DWORD *)(v89 - 12);
    if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v87) != 1 )
LABEL_195:
      v66 = (void *)(v89 - 12);
      if ( (int *)(v89 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v89 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
LABEL_38:
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v66);
          goto LABEL_196;
        goto LABEL_37;
      goto LABEL_196;
    v86 = &unk_28898CC;
    v84 = v89;
    v85 = *(_DWORD *)(v89 - 12);
    if ( Core::FileSystem::directoryExists((__int64 *)&v84) == 1 )
      CryptoUtils::getDirectroyChecksum((Crypto::Hash::Hash *)&v83, &v89);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v86,
        &v83);
      v53 = (void *)(v83 - 12);
      if ( (int *)(v83 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v83 - 4);
            v32 = __ldrex(v31);
          while ( __strex(v32 - 1, v31) );
          goto LABEL_66;
        goto LABEL_65;
      CryptoUtils::getFileChecksum((Crypto::Hash::Hash *)&v82, &v89);
        &v82);
      v53 = (void *)(v82 - 12);
      if ( (int *)(v82 - 12) != &dword_28898C0 )
        v31 = (unsigned int *)(v82 - 4);
LABEL_66:
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v53);
          goto LABEL_140;
LABEL_65:
        v32 = (*v31)--;
        goto LABEL_66;
LABEL_140:
    v54 = (const void **)(*(_QWORD *)(v17 + 12) >> 32);
    v55 = std::__find_if<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
            *(_QWORD *)(v17 + 12),
            v54,
            (const void **)&v86);
    if ( v55 == v54 )
      if ( v55 == *(const void ***)(v17 + 20) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)(v17 + 12),
          &v86);
      else
        *v55 = v86;
        v86 = &unk_28898CC;
        *(_DWORD *)(v17 + 16) = v55 + 1;
      v73 = (Pack *)PackSource::fetchPack(*(PackSource **)(v77 + 16), (const PackIdVersion *)(v17 + 24));
      if ( v73 )
        v74 = *(MinecraftEventing **)(v77 + 108);
        v75 = (const PackManifest *)Pack::getManifest(v73);
        MinecraftEventing::fireEventPackHashChanged(v74, v75);
    v76 = (char *)v86 - 12;
    if ( (int *)((char *)v86 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)((char *)v86 - 4);
      if ( &pthread_create )
        __dmb();
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v76);
    goto LABEL_195;
  return result;
}


char *__fastcall ResourcePackRepository::removePacksLoadedFromWorld(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r9@1
  ResourcePack **v2; // r4@1
  ResourcePack **v3; // r1@3
  int v4; // r0@3
  signed int v5; // r2@4
  int v6; // r7@5
  ResourcePack **v7; // r5@5
  ResourcePack *v8; // r1@6
  ResourcePack *v9; // r0@6
  ResourcePack *v10; // r0@7
  _DWORD *v11; // r5@10
  ResourcePack *v12; // r0@10
  ResourcePack *v13; // r0@11

  v1 = this;
  v2 = (ResourcePack **)*(_QWORD *)((char *)this + 4);
  if ( v2 != (ResourcePack **)(*(_QWORD *)((char *)this + 4) >> 32) )
  {
    do
    {
      if ( ResourcePack::getPackOrigin(*v2) == 3 )
      {
        v3 = (ResourcePack **)*((_DWORD *)v1 + 2);
        v4 = (int)(v2 + 1);
        if ( v2 + 1 != v3 )
        {
          v5 = (signed int)v3 - v4;
          v4 = *((_DWORD *)v1 + 2);
          if ( v5 >= 1 )
          {
            v6 = (v5 >> 2) + 1;
            v7 = v2;
            do
            {
              v8 = v7[1];
              v7[1] = 0;
              v9 = *v7;
              *v7 = v8;
              if ( v9 )
              {
                v10 = ResourcePack::~ResourcePack(v9);
                operator delete((void *)v10);
              }
              --v6;
              ++v7;
            }
            while ( v6 > 1 );
            v4 = *((_DWORD *)v1 + 2);
          }
        }
        v11 = (_DWORD *)(v4 - 4);
        *((_DWORD *)v1 + 2) = v4 - 4;
        v12 = *(ResourcePack **)(v4 - 4);
        if ( v12 )
          v13 = ResourcePack::~ResourcePack(v12);
          operator delete((void *)v13);
        *v11 = 0;
      }
      else
        ++v2;
    }
    while ( v2 != *((ResourcePack ***)v1 + 2) );
  }
  CompositePackSource::clear(*((CompositePackSource **)v1 + 6));
  return sub_21E7EE0((const void **)v1 + 30, 0, *(_BYTE **)(*((_DWORD *)v1 + 30) - 12), 0);
}


void __fastcall ResourcePackRepository::_findVanillaPacks(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r8@1
  int *v2; // r0@1
  int v3; // r0@1
  __int64 v4; // r6@1
  int v5; // r9@2
  _QWORD *v6; // r4@2
  char *v7; // r0@3
  char *v8; // r0@5
  int v9; // r0@7
  void *v10; // r0@8
  void *v11; // r0@9
  void *v12; // r0@10
  void *v13; // r0@11
  void *v14; // r0@12
  void *v15; // r0@13
  void *v16; // r0@14
  void *v17; // r0@15
  void *v18; // r0@16
  int *v19; // r0@17
  int v20; // r0@17
  __int64 v21; // r6@17
  int v22; // r9@18
  _QWORD *v23; // r4@18
  char *v24; // r0@19
  char *v25; // r0@21
  int v26; // r0@23
  void *v27; // r0@24
  void *v28; // r0@25
  void *v29; // r0@26
  void *v30; // r0@27
  void *v31; // r0@28
  void *v32; // r0@29
  void *v33; // r0@30
  void *v34; // r0@31
  void *v35; // r0@32
  int *v36; // r0@34
  int v37; // r0@34
  __int64 v38; // r6@34
  int v39; // r9@35
  _QWORD *v40; // r4@35
  char *v41; // r0@36
  char *v42; // r0@38
  int v43; // r0@40
  void *v44; // r0@41
  void *v45; // r0@42
  void *v46; // r0@43
  void *v47; // r0@44
  void *v48; // r0@45
  void *v49; // r0@46
  void *v50; // r0@47
  void *v51; // r0@48
  void *v52; // r0@49
  int *v53; // r0@50
  int v54; // r0@50
  __int64 v55; // r6@50
  int v56; // r9@51
  _QWORD *v57; // r4@51
  char *v58; // r0@52
  char *v59; // r0@54
  int v60; // r0@56
  void *v61; // r0@57
  void *v62; // r0@58
  void *v63; // r0@59
  void *v64; // r0@60
  void *v65; // r0@61
  void *v66; // r0@62
  void *v67; // r0@63
  void *v68; // r0@64
  void *v69; // r0@65
  int *v70; // r0@66
  int v71; // r0@66
  __int64 v72; // r6@66
  int v73; // r9@67
  _QWORD *v74; // r4@67
  char *v75; // r0@68
  char *v76; // r0@70
  int v77; // r0@72
  void *v78; // r0@73
  void *v79; // r0@74
  void *v80; // r0@75
  void *v81; // r0@76
  void *v82; // r0@77
  void *v83; // r0@78
  void *v84; // r0@79
  void *v85; // r0@80
  void *v86; // r0@81
  int *v87; // r0@82
  int v88; // r0@82
  __int64 v89; // r6@82
  int v90; // r9@83
  _QWORD *v91; // r4@83
  char *v92; // r0@84
  char *v93; // r0@86
  int v94; // r0@88
  void *v95; // r0@89
  void *v96; // r0@90
  void *v97; // r0@91
  void *v98; // r0@92
  void *v99; // r0@93
  void *v100; // r0@94
  void *v101; // r0@95
  void *v102; // r0@96
  void *v103; // r0@97
  int *v104; // r0@98
  int v105; // r0@98
  __int64 v106; // r6@98
  int v107; // r9@99
  _QWORD *v108; // r4@99
  char *v109; // r0@100
  char *v110; // r0@102
  int v111; // r0@104
  void *v112; // r0@105
  void *v113; // r0@106
  void *v114; // r0@107
  void *v115; // r0@108
  void *v116; // r0@109
  void *v117; // r0@110
  void *v118; // r0@111
  void *v119; // r0@112
  void *v120; // r0@113
  int *v121; // r0@114
  int v122; // r0@114
  __int64 v123; // r6@114
  int v124; // r9@115
  _QWORD *v125; // r4@115
  char *v126; // r0@116
  char *v127; // r0@118
  int v128; // r0@120
  void *v129; // r0@121
  void *v130; // r0@122
  void *v131; // r0@123
  void *v132; // r0@124
  void *v133; // r0@125
  void *v134; // r0@126
  void *v135; // r0@127
  void *v136; // r0@128
  void *v137; // r0@129
  unsigned int *v138; // r2@132
  signed int v139; // r1@134
  unsigned int *v140; // r2@136
  signed int v141; // r1@138
  unsigned int *v142; // r2@140
  signed int v143; // r1@142
  unsigned int *v144; // r2@144
  signed int v145; // r1@146
  unsigned int *v146; // r2@148
  signed int v147; // r1@150
  unsigned int *v148; // r2@152
  signed int v149; // r1@154
  unsigned int *v150; // r2@156
  signed int v151; // r1@158
  unsigned int *v152; // r2@160
  signed int v153; // r1@162
  unsigned int *v154; // r2@164
  signed int v155; // r1@166
  unsigned int *v156; // r2@169
  signed int v157; // r1@171
  unsigned int *v158; // r2@173
  signed int v159; // r1@175
  unsigned int *v160; // r2@177
  signed int v161; // r1@179
  unsigned int *v162; // r2@181
  signed int v163; // r1@183
  unsigned int *v164; // r2@185
  signed int v165; // r1@187
  unsigned int *v166; // r2@189
  signed int v167; // r1@191
  unsigned int *v168; // r2@193
  signed int v169; // r1@195
  unsigned int *v170; // r2@197
  signed int v171; // r1@199
  unsigned int *v172; // r2@201
  signed int v173; // r1@203
  unsigned int *v174; // r2@242
  signed int v175; // r1@244
  unsigned int *v176; // r2@246
  signed int v177; // r1@248
  unsigned int *v178; // r2@250
  signed int v179; // r1@252
  unsigned int *v180; // r2@254
  signed int v181; // r1@256
  unsigned int *v182; // r2@258
  signed int v183; // r1@260
  unsigned int *v184; // r2@262
  signed int v185; // r1@264
  unsigned int *v186; // r2@266
  signed int v187; // r1@268
  unsigned int *v188; // r2@270
  signed int v189; // r1@272
  unsigned int *v190; // r2@274
  signed int v191; // r1@276
  unsigned int *v192; // r2@315
  signed int v193; // r1@317
  unsigned int *v194; // r2@319
  signed int v195; // r1@321
  unsigned int *v196; // r2@323
  signed int v197; // r1@325
  unsigned int *v198; // r2@327
  signed int v199; // r1@329
  unsigned int *v200; // r2@331
  signed int v201; // r1@333
  unsigned int *v202; // r2@335
  signed int v203; // r1@337
  unsigned int *v204; // r2@339
  signed int v205; // r1@341
  unsigned int *v206; // r2@343
  signed int v207; // r1@345
  unsigned int *v208; // r2@347
  signed int v209; // r1@349
  unsigned int *v210; // r2@389
  signed int v211; // r1@391
  unsigned int *v212; // r2@393
  signed int v213; // r1@395
  unsigned int *v214; // r2@397
  signed int v215; // r1@399
  unsigned int *v216; // r2@401
  signed int v217; // r1@403
  unsigned int *v218; // r2@405
  signed int v219; // r1@407
  unsigned int *v220; // r2@409
  signed int v221; // r1@411
  unsigned int *v222; // r2@413
  signed int v223; // r1@415
  unsigned int *v224; // r2@417
  signed int v225; // r1@419
  unsigned int *v226; // r2@421
  signed int v227; // r1@423
  unsigned int *v228; // r2@425
  signed int v229; // r1@427
  unsigned int *v230; // r2@429
  signed int v231; // r1@431
  unsigned int *v232; // r2@433
  signed int v233; // r1@435
  unsigned int *v234; // r2@437
  signed int v235; // r1@439
  unsigned int *v236; // r2@441
  signed int v237; // r1@443
  unsigned int *v238; // r2@445
  signed int v239; // r1@447
  unsigned int *v240; // r2@449
  signed int v241; // r1@451
  unsigned int *v242; // r2@453
  signed int v243; // r1@455
  unsigned int *v244; // r2@457
  signed int v245; // r1@459
  unsigned int *v246; // r2@498
  signed int v247; // r1@500
  unsigned int *v248; // r2@502
  signed int v249; // r1@504
  unsigned int *v250; // r2@506
  signed int v251; // r1@508
  unsigned int *v252; // r2@510
  signed int v253; // r1@512
  unsigned int *v254; // r2@514
  signed int v255; // r1@516
  unsigned int *v256; // r2@518
  signed int v257; // r1@520
  unsigned int *v258; // r2@522
  signed int v259; // r1@524
  unsigned int *v260; // r2@526
  signed int v261; // r1@528
  unsigned int *v262; // r2@530
  signed int v263; // r1@532
  unsigned int *v264; // r2@607
  signed int v265; // r1@609
  unsigned int *v266; // r2@611
  signed int v267; // r1@613
  unsigned int *v268; // r2@615
  signed int v269; // r1@617
  unsigned int *v270; // r2@619
  signed int v271; // r1@621
  unsigned int *v272; // r2@623
  signed int v273; // r1@625
  unsigned int *v274; // r2@627
  signed int v275; // r1@629
  unsigned int *v276; // r2@631
  signed int v277; // r1@633
  unsigned int *v278; // r2@635
  signed int v279; // r1@637
  unsigned int *v280; // r2@639
  signed int v281; // r1@641
  int v282; // [sp+14h] [bp-39Ch]@114
  int v283; // [sp+1Ch] [bp-394h]@114
  char v284; // [sp+20h] [bp-390h]@114
  int v285; // [sp+28h] [bp-388h]@126
  int v286; // [sp+2Ch] [bp-384h]@125
  int v287; // [sp+30h] [bp-380h]@124
  int v288; // [sp+3Ch] [bp-374h]@114
  char v289; // [sp+40h] [bp-370h]@114
  int v290; // [sp+50h] [bp-360h]@114
  int v291; // [sp+68h] [bp-348h]@123
  int v292; // [sp+6Ch] [bp-344h]@122
  int v293; // [sp+70h] [bp-340h]@121
  int v294; // [sp+84h] [bp-32Ch]@98
  int v295; // [sp+8Ch] [bp-324h]@98
  char v296; // [sp+90h] [bp-320h]@98
  int v297; // [sp+98h] [bp-318h]@110
  int v298; // [sp+9Ch] [bp-314h]@109
  int v299; // [sp+A0h] [bp-310h]@108
  int v300; // [sp+ACh] [bp-304h]@98
  char v301; // [sp+B0h] [bp-300h]@98
  int v302; // [sp+C0h] [bp-2F0h]@98
  int v303; // [sp+D8h] [bp-2D8h]@107
  int v304; // [sp+DCh] [bp-2D4h]@106
  int v305; // [sp+E0h] [bp-2D0h]@105
  int v306; // [sp+F4h] [bp-2BCh]@82
  int v307; // [sp+FCh] [bp-2B4h]@82
  char v308; // [sp+100h] [bp-2B0h]@82
  int v309; // [sp+108h] [bp-2A8h]@94
  int v310; // [sp+10Ch] [bp-2A4h]@93
  int v311; // [sp+110h] [bp-2A0h]@92
  int v312; // [sp+11Ch] [bp-294h]@82
  char v313; // [sp+120h] [bp-290h]@82
  int v314; // [sp+130h] [bp-280h]@82
  int v315; // [sp+148h] [bp-268h]@91
  int v316; // [sp+14Ch] [bp-264h]@90
  int v317; // [sp+150h] [bp-260h]@89
  int v318; // [sp+164h] [bp-24Ch]@66
  int v319; // [sp+16Ch] [bp-244h]@66
  char v320; // [sp+170h] [bp-240h]@66
  int v321; // [sp+178h] [bp-238h]@78
  int v322; // [sp+17Ch] [bp-234h]@77
  int v323; // [sp+180h] [bp-230h]@76
  int v324; // [sp+18Ch] [bp-224h]@66
  char v325; // [sp+190h] [bp-220h]@66
  int v326; // [sp+1A0h] [bp-210h]@66
  int v327; // [sp+1B8h] [bp-1F8h]@75
  int v328; // [sp+1BCh] [bp-1F4h]@74
  int v329; // [sp+1C0h] [bp-1F0h]@73
  int v330; // [sp+1D4h] [bp-1DCh]@50
  int v331; // [sp+1DCh] [bp-1D4h]@50
  char v332; // [sp+1E0h] [bp-1D0h]@50
  int v333; // [sp+1E8h] [bp-1C8h]@62
  int v334; // [sp+1ECh] [bp-1C4h]@61
  int v335; // [sp+1F0h] [bp-1C0h]@60
  int v336; // [sp+1FCh] [bp-1B4h]@50
  char v337; // [sp+200h] [bp-1B0h]@50
  int v338; // [sp+210h] [bp-1A0h]@50
  int v339; // [sp+228h] [bp-188h]@59
  int v340; // [sp+22Ch] [bp-184h]@58
  int v341; // [sp+230h] [bp-180h]@57
  int v342; // [sp+244h] [bp-16Ch]@34
  int v343; // [sp+24Ch] [bp-164h]@34
  char v344; // [sp+250h] [bp-160h]@34
  int v345; // [sp+258h] [bp-158h]@46
  int v346; // [sp+25Ch] [bp-154h]@45
  int v347; // [sp+260h] [bp-150h]@44
  int v348; // [sp+26Ch] [bp-144h]@34
  char v349; // [sp+270h] [bp-140h]@34
  int v350; // [sp+280h] [bp-130h]@34
  int v351; // [sp+298h] [bp-118h]@43
  int v352; // [sp+29Ch] [bp-114h]@42
  int v353; // [sp+2A0h] [bp-110h]@41
  int v354; // [sp+2B4h] [bp-FCh]@17
  int v355; // [sp+2BCh] [bp-F4h]@17
  char v356; // [sp+2C0h] [bp-F0h]@17
  int v357; // [sp+2C8h] [bp-E8h]@29
  int v358; // [sp+2CCh] [bp-E4h]@28
  int v359; // [sp+2D0h] [bp-E0h]@27
  int v360; // [sp+2DCh] [bp-D4h]@17
  char v361; // [sp+2E0h] [bp-D0h]@17
  int v362; // [sp+2F0h] [bp-C0h]@17
  int v363; // [sp+308h] [bp-A8h]@26
  int v364; // [sp+30Ch] [bp-A4h]@25
  int v365; // [sp+310h] [bp-A0h]@24
  int v366; // [sp+324h] [bp-8Ch]@1
  int v367; // [sp+32Ch] [bp-84h]@1
  char v368; // [sp+330h] [bp-80h]@1
  int v369; // [sp+338h] [bp-78h]@13
  int v370; // [sp+33Ch] [bp-74h]@12
  int v371; // [sp+340h] [bp-70h]@11
  int v372; // [sp+34Ch] [bp-64h]@1
  char v373; // [sp+350h] [bp-60h]@1
  int v374; // [sp+360h] [bp-50h]@1
  int v375; // [sp+378h] [bp-38h]@10
  int v376; // [sp+37Ch] [bp-34h]@9
  int v377; // [sp+380h] [bp-30h]@8

  v1 = this;
  sub_21E94B4((void **)&v372, "9ae3d2cc-7811-404c-b578-cb27689c8ac5");
  mce::UUID::fromString((int)&v373, &v372);
  sub_21E94B4((void **)&v367, (const char *)&unk_257BC67);
  v2 = (int *)sub_21E94B4((void **)&v366, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v368, 0, 0, 1, &v367, v2, 0);
  v3 = PackIdVersion::PackIdVersion((int)&v374, (int)&v373, (int)&v368, 0);
  v4 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
LABEL_7:
    v9 = 0;
  }
  else
    v5 = v3 + 16;
    v6 = (_QWORD *)(v3 + 8);
    while ( 1 )
    {
      v7 = ResourcePack::getPackId(*(ResourcePack **)v4);
      if ( *(_QWORD *)&v374 == *(_QWORD *)v7 && *v6 == *((_QWORD *)v7 + 1) )
      {
        v8 = ResourcePack::getVersion(*(ResourcePack **)v4);
        if ( SemVersion::operator==((int)v8, v5) == 1 )
          break;
      }
      LODWORD(v4) = v4 + 4;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        goto LABEL_7;
    }
    v9 = *(_DWORD *)v4;
  *((_DWORD *)v1 + 8) = v9;
  v10 = (void *)(v377 - 12);
  if ( (int *)(v377 - 12) != &dword_28898C0 )
    v138 = (unsigned int *)(v377 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v139 = __ldrex(v138);
      while ( __strex(v139 - 1, v138) );
    else
      v139 = (*v138)--;
    if ( v139 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v376 - 12);
  if ( (int *)(v376 - 12) != &dword_28898C0 )
    v140 = (unsigned int *)(v376 - 4);
        v141 = __ldrex(v140);
      while ( __strex(v141 - 1, v140) );
      v141 = (*v140)--;
    if ( v141 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v375 - 12);
  if ( (int *)(v375 - 12) != &dword_28898C0 )
    v142 = (unsigned int *)(v375 - 4);
        v143 = __ldrex(v142);
      while ( __strex(v143 - 1, v142) );
      v143 = (*v142)--;
    if ( v143 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v371 - 12);
  if ( (int *)(v371 - 12) != &dword_28898C0 )
    v144 = (unsigned int *)(v371 - 4);
        v145 = __ldrex(v144);
      while ( __strex(v145 - 1, v144) );
      v145 = (*v144)--;
    if ( v145 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v370 - 12);
  if ( (int *)(v370 - 12) != &dword_28898C0 )
    v146 = (unsigned int *)(v370 - 4);
        v147 = __ldrex(v146);
      while ( __strex(v147 - 1, v146) );
      v147 = (*v146)--;
    if ( v147 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v369 - 12);
  if ( (int *)(v369 - 12) != &dword_28898C0 )
    v148 = (unsigned int *)(v369 - 4);
        v149 = __ldrex(v148);
      while ( __strex(v149 - 1, v148) );
      v149 = (*v148)--;
    if ( v149 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)(v366 - 12);
  if ( (int *)(v366 - 12) != &dword_28898C0 )
    v150 = (unsigned int *)(v366 - 4);
        v151 = __ldrex(v150);
      while ( __strex(v151 - 1, v150) );
      v151 = (*v150)--;
    if ( v151 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v367 - 12);
  if ( (int *)(v367 - 12) != &dword_28898C0 )
    v152 = (unsigned int *)(v367 - 4);
        v153 = __ldrex(v152);
      while ( __strex(v153 - 1, v152) );
      v153 = (*v152)--;
    if ( v153 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v372 - 12);
  if ( (int *)(v372 - 12) != &dword_28898C0 )
    v154 = (unsigned int *)(v372 - 4);
        v155 = __ldrex(v154);
      while ( __strex(v155 - 1, v154) );
      v155 = (*v154)--;
    if ( v155 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v360, "b52683e5-e995-4408-9439-cdb2a3076ea5");
  mce::UUID::fromString((int)&v361, &v360);
  sub_21E94B4((void **)&v355, (const char *)&unk_257BC67);
  v19 = (int *)sub_21E94B4((void **)&v354, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v356, 0, 0, 1, &v355, v19, 0);
  v20 = PackIdVersion::PackIdVersion((int)&v362, (int)&v361, (int)&v356, 0);
  v21 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v21 == HIDWORD(v21) )
LABEL_23:
    v26 = 0;
    v22 = v20 + 16;
    v23 = (_QWORD *)(v20 + 8);
      v24 = ResourcePack::getPackId(*(ResourcePack **)v21);
      if ( *(_QWORD *)&v362 == *(_QWORD *)v24 && *v23 == *((_QWORD *)v24 + 1) )
        v25 = ResourcePack::getVersion(*(ResourcePack **)v21);
        if ( SemVersion::operator==((int)v25, v22) == 1 )
      LODWORD(v21) = v21 + 4;
      if ( HIDWORD(v21) == (_DWORD)v21 )
        goto LABEL_23;
    v26 = *(_DWORD *)v21;
  *((_DWORD *)v1 + 9) = v26;
  v27 = (void *)(v365 - 12);
  if ( (int *)(v365 - 12) != &dword_28898C0 )
    v156 = (unsigned int *)(v365 - 4);
        v157 = __ldrex(v156);
      while ( __strex(v157 - 1, v156) );
      v157 = (*v156)--;
    if ( v157 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v364 - 12);
  if ( (int *)(v364 - 12) != &dword_28898C0 )
    v158 = (unsigned int *)(v364 - 4);
        v159 = __ldrex(v158);
      while ( __strex(v159 - 1, v158) );
      v159 = (*v158)--;
    if ( v159 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v363 - 12);
  if ( (int *)(v363 - 12) != &dword_28898C0 )
    v160 = (unsigned int *)(v363 - 4);
        v161 = __ldrex(v160);
      while ( __strex(v161 - 1, v160) );
      v161 = (*v160)--;
    if ( v161 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v359 - 12);
  if ( (int *)(v359 - 12) != &dword_28898C0 )
    v162 = (unsigned int *)(v359 - 4);
        v163 = __ldrex(v162);
      while ( __strex(v163 - 1, v162) );
      v163 = (*v162)--;
    if ( v163 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v358 - 12);
  if ( (int *)(v358 - 12) != &dword_28898C0 )
    v164 = (unsigned int *)(v358 - 4);
        v165 = __ldrex(v164);
      while ( __strex(v165 - 1, v164) );
      v165 = (*v164)--;
    if ( v165 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  v32 = (void *)(v357 - 12);
  if ( (int *)(v357 - 12) != &dword_28898C0 )
    v166 = (unsigned int *)(v357 - 4);
        v167 = __ldrex(v166);
      while ( __strex(v167 - 1, v166) );
      v167 = (*v166)--;
    if ( v167 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v354 - 12);
  if ( (int *)(v354 - 12) != &dword_28898C0 )
    v168 = (unsigned int *)(v354 - 4);
        v169 = __ldrex(v168);
      while ( __strex(v169 - 1, v168) );
      v169 = (*v168)--;
    if ( v169 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v355 - 12);
  if ( (int *)(v355 - 12) != &dword_28898C0 )
    v170 = (unsigned int *)(v355 - 4);
        v171 = __ldrex(v170);
      while ( __strex(v171 - 1, v170) );
      v171 = (*v170)--;
    if ( v171 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  v35 = (void *)(v360 - 12);
  if ( (int *)(v360 - 12) != &dword_28898C0 )
    v172 = (unsigned int *)(v360 - 4);
        v173 = __ldrex(v172);
      while ( __strex(v173 - 1, v172) );
      v173 = (*v172)--;
    if ( v173 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  if ( !*((_DWORD *)v1 + 9) )
    sub_21E94B4((void **)&v348, "1b8e9a90-66ab-46d5-9643-206bd063333f");
    mce::UUID::fromString((int)&v349, &v348);
    sub_21E94B4((void **)&v343, (const char *)&unk_257BC67);
    v36 = (int *)sub_21E94B4((void **)&v342, (const char *)&unk_257BC67);
    SemVersion::SemVersion((int)&v344, 0, 0, 1, &v343, v36, 0);
    v37 = PackIdVersion::PackIdVersion((int)&v350, (int)&v349, (int)&v344, 0);
    v38 = *(_QWORD *)((char *)v1 + 4);
    if ( (_DWORD)v38 == HIDWORD(v38) )
LABEL_40:
      v43 = 0;
      v39 = v37 + 16;
      v40 = (_QWORD *)(v37 + 8);
      while ( 1 )
        v41 = ResourcePack::getPackId(*(ResourcePack **)v38);
        if ( *(_QWORD *)&v350 == *(_QWORD *)v41 && *v40 == *((_QWORD *)v41 + 1) )
        {
          v42 = ResourcePack::getVersion(*(ResourcePack **)v38);
          if ( SemVersion::operator==((int)v42, v39) == 1 )
            break;
        }
        LODWORD(v38) = v38 + 4;
        if ( HIDWORD(v38) == (_DWORD)v38 )
          goto LABEL_40;
      v43 = *(_DWORD *)v38;
    *((_DWORD *)v1 + 9) = v43;
    v44 = (void *)(v353 - 12);
    if ( (int *)(v353 - 12) != &dword_28898C0 )
      v210 = (unsigned int *)(v353 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v211 = __ldrex(v210);
        while ( __strex(v211 - 1, v210) );
      else
        v211 = (*v210)--;
      if ( v211 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = (void *)(v352 - 12);
    if ( (int *)(v352 - 12) != &dword_28898C0 )
      v212 = (unsigned int *)(v352 - 4);
          v213 = __ldrex(v212);
        while ( __strex(v213 - 1, v212) );
        v213 = (*v212)--;
      if ( v213 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = (void *)(v351 - 12);
    if ( (int *)(v351 - 12) != &dword_28898C0 )
      v214 = (unsigned int *)(v351 - 4);
          v215 = __ldrex(v214);
        while ( __strex(v215 - 1, v214) );
        v215 = (*v214)--;
      if ( v215 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    v47 = (void *)(v347 - 12);
    if ( (int *)(v347 - 12) != &dword_28898C0 )
      v216 = (unsigned int *)(v347 - 4);
          v217 = __ldrex(v216);
        while ( __strex(v217 - 1, v216) );
        v217 = (*v216)--;
      if ( v217 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    v48 = (void *)(v346 - 12);
    if ( (int *)(v346 - 12) != &dword_28898C0 )
      v218 = (unsigned int *)(v346 - 4);
          v219 = __ldrex(v218);
        while ( __strex(v219 - 1, v218) );
        v219 = (*v218)--;
      if ( v219 <= 0 )
        j_j_j_j__ZdlPv_9(v48);
    v49 = (void *)(v345 - 12);
    if ( (int *)(v345 - 12) != &dword_28898C0 )
      v220 = (unsigned int *)(v345 - 4);
          v221 = __ldrex(v220);
        while ( __strex(v221 - 1, v220) );
        v221 = (*v220)--;
      if ( v221 <= 0 )
        j_j_j_j__ZdlPv_9(v49);
    v50 = (void *)(v342 - 12);
    if ( (int *)(v342 - 12) != &dword_28898C0 )
      v222 = (unsigned int *)(v342 - 4);
          v223 = __ldrex(v222);
        while ( __strex(v223 - 1, v222) );
        v223 = (*v222)--;
      if ( v223 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
    v51 = (void *)(v343 - 12);
    if ( (int *)(v343 - 12) != &dword_28898C0 )
      v224 = (unsigned int *)(v343 - 4);
          v225 = __ldrex(v224);
        while ( __strex(v225 - 1, v224) );
        v225 = (*v224)--;
      if ( v225 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = (void *)(v348 - 12);
    if ( (int *)(v348 - 12) != &dword_28898C0 )
      v226 = (unsigned int *)(v348 - 4);
          v227 = __ldrex(v226);
        while ( __strex(v227 - 1, v226) );
        v227 = (*v226)--;
      if ( v227 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
  sub_21E94B4((void **)&v336, "0575c61f-a5da-4b7f-9961-ffda2908861e");
  mce::UUID::fromString((int)&v337, &v336);
  sub_21E94B4((void **)&v331, (const char *)&unk_257BC67);
  v53 = (int *)sub_21E94B4((void **)&v330, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v332, 0, 0, 1, &v331, v53, 0);
  v54 = PackIdVersion::PackIdVersion((int)&v338, (int)&v337, (int)&v332, 0);
  v55 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v55 == HIDWORD(v55) )
LABEL_56:
    v60 = 0;
    v56 = v54 + 16;
    v57 = (_QWORD *)(v54 + 8);
      v58 = ResourcePack::getPackId(*(ResourcePack **)v55);
      if ( *(_QWORD *)&v338 == *(_QWORD *)v58 && *v57 == *((_QWORD *)v58 + 1) )
        v59 = ResourcePack::getVersion(*(ResourcePack **)v55);
        if ( SemVersion::operator==((int)v59, v56) == 1 )
      LODWORD(v55) = v55 + 4;
      if ( HIDWORD(v55) == (_DWORD)v55 )
        goto LABEL_56;
    v60 = *(_DWORD *)v55;
  *((_DWORD *)v1 + 10) = v60;
  v61 = (void *)(v341 - 12);
  if ( (int *)(v341 - 12) != &dword_28898C0 )
    v174 = (unsigned int *)(v341 - 4);
        v175 = __ldrex(v174);
      while ( __strex(v175 - 1, v174) );
      v175 = (*v174)--;
    if ( v175 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  v62 = (void *)(v340 - 12);
  if ( (int *)(v340 - 12) != &dword_28898C0 )
    v176 = (unsigned int *)(v340 - 4);
        v177 = __ldrex(v176);
      while ( __strex(v177 - 1, v176) );
      v177 = (*v176)--;
    if ( v177 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  v63 = (void *)(v339 - 12);
  if ( (int *)(v339 - 12) != &dword_28898C0 )
    v178 = (unsigned int *)(v339 - 4);
        v179 = __ldrex(v178);
      while ( __strex(v179 - 1, v178) );
      v179 = (*v178)--;
    if ( v179 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = (void *)(v335 - 12);
  if ( (int *)(v335 - 12) != &dword_28898C0 )
    v180 = (unsigned int *)(v335 - 4);
        v181 = __ldrex(v180);
      while ( __strex(v181 - 1, v180) );
      v181 = (*v180)--;
    if ( v181 <= 0 )
      j_j_j_j__ZdlPv_9(v64);
  v65 = (void *)(v334 - 12);
  if ( (int *)(v334 - 12) != &dword_28898C0 )
    v182 = (unsigned int *)(v334 - 4);
        v183 = __ldrex(v182);
      while ( __strex(v183 - 1, v182) );
      v183 = (*v182)--;
    if ( v183 <= 0 )
      j_j_j_j__ZdlPv_9(v65);
  v66 = (void *)(v333 - 12);
  if ( (int *)(v333 - 12) != &dword_28898C0 )
    v184 = (unsigned int *)(v333 - 4);
        v185 = __ldrex(v184);
      while ( __strex(v185 - 1, v184) );
      v185 = (*v184)--;
    if ( v185 <= 0 )
      j_j_j_j__ZdlPv_9(v66);
  v67 = (void *)(v330 - 12);
  if ( (int *)(v330 - 12) != &dword_28898C0 )
    v186 = (unsigned int *)(v330 - 4);
        v187 = __ldrex(v186);
      while ( __strex(v187 - 1, v186) );
      v187 = (*v186)--;
    if ( v187 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v331 - 12);
  if ( (int *)(v331 - 12) != &dword_28898C0 )
    v188 = (unsigned int *)(v331 - 4);
        v189 = __ldrex(v188);
      while ( __strex(v189 - 1, v188) );
      v189 = (*v188)--;
    if ( v189 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v336 - 12);
  if ( (int *)(v336 - 12) != &dword_28898C0 )
    v190 = (unsigned int *)(v336 - 4);
        v191 = __ldrex(v190);
      while ( __strex(v191 - 1, v190) );
      v191 = (*v190)--;
    if ( v191 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  sub_21E94B4((void **)&v324, "fe9f8597-5454-481a-8730-8d070a8e2e58");
  mce::UUID::fromString((int)&v325, &v324);
  sub_21E94B4((void **)&v319, (const char *)&unk_257BC67);
  v70 = (int *)sub_21E94B4((void **)&v318, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v320, 0, 0, 1, &v319, v70, 0);
  v71 = PackIdVersion::PackIdVersion((int)&v326, (int)&v325, (int)&v320, 0);
  v72 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v72 == HIDWORD(v72) )
LABEL_72:
    v77 = 0;
    v73 = v71 + 16;
    v74 = (_QWORD *)(v71 + 8);
      v75 = ResourcePack::getPackId(*(ResourcePack **)v72);
      if ( *(_QWORD *)&v326 == *(_QWORD *)v75 && *v74 == *((_QWORD *)v75 + 1) )
        v76 = ResourcePack::getVersion(*(ResourcePack **)v72);
        if ( SemVersion::operator==((int)v76, v73) == 1 )
      LODWORD(v72) = v72 + 4;
      if ( HIDWORD(v72) == (_DWORD)v72 )
        goto LABEL_72;
    v77 = *(_DWORD *)v72;
  *((_DWORD *)v1 + 11) = v77;
  v78 = (void *)(v329 - 12);
  if ( (int *)(v329 - 12) != &dword_28898C0 )
    v192 = (unsigned int *)(v329 - 4);
        v193 = __ldrex(v192);
      while ( __strex(v193 - 1, v192) );
      v193 = (*v192)--;
    if ( v193 <= 0 )
      j_j_j_j__ZdlPv_9(v78);
  v79 = (void *)(v328 - 12);
  if ( (int *)(v328 - 12) != &dword_28898C0 )
    v194 = (unsigned int *)(v328 - 4);
        v195 = __ldrex(v194);
      while ( __strex(v195 - 1, v194) );
      v195 = (*v194)--;
    if ( v195 <= 0 )
      j_j_j_j__ZdlPv_9(v79);
  v80 = (void *)(v327 - 12);
  if ( (int *)(v327 - 12) != &dword_28898C0 )
    v196 = (unsigned int *)(v327 - 4);
        v197 = __ldrex(v196);
      while ( __strex(v197 - 1, v196) );
      v197 = (*v196)--;
    if ( v197 <= 0 )
      j_j_j_j__ZdlPv_9(v80);
  v81 = (void *)(v323 - 12);
  if ( (int *)(v323 - 12) != &dword_28898C0 )
    v198 = (unsigned int *)(v323 - 4);
        v199 = __ldrex(v198);
      while ( __strex(v199 - 1, v198) );
      v199 = (*v198)--;
    if ( v199 <= 0 )
      j_j_j_j__ZdlPv_9(v81);
  v82 = (void *)(v322 - 12);
  if ( (int *)(v322 - 12) != &dword_28898C0 )
    v200 = (unsigned int *)(v322 - 4);
        v201 = __ldrex(v200);
      while ( __strex(v201 - 1, v200) );
      v201 = (*v200)--;
    if ( v201 <= 0 )
      j_j_j_j__ZdlPv_9(v82);
  v83 = (void *)(v321 - 12);
  if ( (int *)(v321 - 12) != &dword_28898C0 )
    v202 = (unsigned int *)(v321 - 4);
        v203 = __ldrex(v202);
      while ( __strex(v203 - 1, v202) );
      v203 = (*v202)--;
    if ( v203 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = (void *)(v318 - 12);
  if ( (int *)(v318 - 12) != &dword_28898C0 )
    v204 = (unsigned int *)(v318 - 4);
        v205 = __ldrex(v204);
      while ( __strex(v205 - 1, v204) );
      v205 = (*v204)--;
    if ( v205 <= 0 )
      j_j_j_j__ZdlPv_9(v84);
  v85 = (void *)(v319 - 12);
  if ( (int *)(v319 - 12) != &dword_28898C0 )
    v206 = (unsigned int *)(v319 - 4);
        v207 = __ldrex(v206);
      while ( __strex(v207 - 1, v206) );
      v207 = (*v206)--;
    if ( v207 <= 0 )
      j_j_j_j__ZdlPv_9(v85);
  v86 = (void *)(v324 - 12);
  if ( (int *)(v324 - 12) != &dword_28898C0 )
    v208 = (unsigned int *)(v324 - 4);
        v209 = __ldrex(v208);
      while ( __strex(v209 - 1, v208) );
      v209 = (*v208)--;
    if ( v209 <= 0 )
      j_j_j_j__ZdlPv_9(v86);
  sub_21E94B4((void **)&v312, "7b0f36ed-03c7-4fdf-8ba9-44ce20668861");
  mce::UUID::fromString((int)&v313, &v312);
  sub_21E94B4((void **)&v307, (const char *)&unk_257BC67);
  v87 = (int *)sub_21E94B4((void **)&v306, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v308, 0, 0, 1, &v307, v87, 0);
  v88 = PackIdVersion::PackIdVersion((int)&v314, (int)&v313, (int)&v308, 0);
  v89 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v89 == HIDWORD(v89) )
LABEL_88:
    v94 = 0;
    v90 = v88 + 16;
    v91 = (_QWORD *)(v88 + 8);
      v92 = ResourcePack::getPackId(*(ResourcePack **)v89);
      if ( *(_QWORD *)&v314 == *(_QWORD *)v92 && *v91 == *((_QWORD *)v92 + 1) )
        v93 = ResourcePack::getVersion(*(ResourcePack **)v89);
        if ( SemVersion::operator==((int)v93, v90) == 1 )
      LODWORD(v89) = v89 + 4;
      if ( HIDWORD(v89) == (_DWORD)v89 )
        goto LABEL_88;
    v94 = *(_DWORD *)v89;
  *((_DWORD *)v1 + 12) = v94;
  v95 = (void *)(v317 - 12);
  if ( (int *)(v317 - 12) != &dword_28898C0 )
    v228 = (unsigned int *)(v317 - 4);
        v229 = __ldrex(v228);
      while ( __strex(v229 - 1, v228) );
      v229 = (*v228)--;
    if ( v229 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  v96 = (void *)(v316 - 12);
  if ( (int *)(v316 - 12) != &dword_28898C0 )
    v230 = (unsigned int *)(v316 - 4);
        v231 = __ldrex(v230);
      while ( __strex(v231 - 1, v230) );
      v231 = (*v230)--;
    if ( v231 <= 0 )
      j_j_j_j__ZdlPv_9(v96);
  v97 = (void *)(v315 - 12);
  if ( (int *)(v315 - 12) != &dword_28898C0 )
    v232 = (unsigned int *)(v315 - 4);
        v233 = __ldrex(v232);
      while ( __strex(v233 - 1, v232) );
      v233 = (*v232)--;
    if ( v233 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  v98 = (void *)(v311 - 12);
  if ( (int *)(v311 - 12) != &dword_28898C0 )
    v234 = (unsigned int *)(v311 - 4);
        v235 = __ldrex(v234);
      while ( __strex(v235 - 1, v234) );
      v235 = (*v234)--;
    if ( v235 <= 0 )
      j_j_j_j__ZdlPv_9(v98);
  v99 = (void *)(v310 - 12);
  if ( (int *)(v310 - 12) != &dword_28898C0 )
    v236 = (unsigned int *)(v310 - 4);
        v237 = __ldrex(v236);
      while ( __strex(v237 - 1, v236) );
      v237 = (*v236)--;
    if ( v237 <= 0 )
      j_j_j_j__ZdlPv_9(v99);
  v100 = (void *)(v309 - 12);
  if ( (int *)(v309 - 12) != &dword_28898C0 )
    v238 = (unsigned int *)(v309 - 4);
        v239 = __ldrex(v238);
      while ( __strex(v239 - 1, v238) );
      v239 = (*v238)--;
    if ( v239 <= 0 )
      j_j_j_j__ZdlPv_9(v100);
  v101 = (void *)(v306 - 12);
  if ( (int *)(v306 - 12) != &dword_28898C0 )
    v240 = (unsigned int *)(v306 - 4);
        v241 = __ldrex(v240);
      while ( __strex(v241 - 1, v240) );
      v241 = (*v240)--;
    if ( v241 <= 0 )
      j_j_j_j__ZdlPv_9(v101);
  v102 = (void *)(v307 - 12);
  if ( (int *)(v307 - 12) != &dword_28898C0 )
    v242 = (unsigned int *)(v307 - 4);
        v243 = __ldrex(v242);
      while ( __strex(v243 - 1, v242) );
      v243 = (*v242)--;
    if ( v243 <= 0 )
      j_j_j_j__ZdlPv_9(v102);
  v103 = (void *)(v312 - 12);
  if ( (int *)(v312 - 12) != &dword_28898C0 )
    v244 = (unsigned int *)(v312 - 4);
        v245 = __ldrex(v244);
      while ( __strex(v245 - 1, v244) );
      v245 = (*v244)--;
    if ( v245 <= 0 )
      j_j_j_j__ZdlPv_9(v103);
  sub_21E94B4((void **)&v300, "c06fdb39-0663-4e31-890d-3badd1757e4d");
  mce::UUID::fromString((int)&v301, &v300);
  sub_21E94B4((void **)&v295, (const char *)&unk_257BC67);
  v104 = (int *)sub_21E94B4((void **)&v294, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v296, 0, 0, 1, &v295, v104, 0);
  v105 = PackIdVersion::PackIdVersion((int)&v302, (int)&v301, (int)&v296, 0);
  v106 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v106 == HIDWORD(v106) )
LABEL_104:
    v111 = 0;
    v107 = v105 + 16;
    v108 = (_QWORD *)(v105 + 8);
      v109 = ResourcePack::getPackId(*(ResourcePack **)v106);
      if ( *(_QWORD *)&v302 == *(_QWORD *)v109 && *v108 == *((_QWORD *)v109 + 1) )
        v110 = ResourcePack::getVersion(*(ResourcePack **)v106);
        if ( SemVersion::operator==((int)v110, v107) == 1 )
      LODWORD(v106) = v106 + 4;
      if ( HIDWORD(v106) == (_DWORD)v106 )
        goto LABEL_104;
    v111 = *(_DWORD *)v106;
  *((_DWORD *)v1 + 13) = v111;
  v112 = (void *)(v305 - 12);
  if ( (int *)(v305 - 12) != &dword_28898C0 )
    v246 = (unsigned int *)(v305 - 4);
        v247 = __ldrex(v246);
      while ( __strex(v247 - 1, v246) );
      v247 = (*v246)--;
    if ( v247 <= 0 )
      j_j_j_j__ZdlPv_9(v112);
  v113 = (void *)(v304 - 12);
  if ( (int *)(v304 - 12) != &dword_28898C0 )
    v248 = (unsigned int *)(v304 - 4);
        v249 = __ldrex(v248);
      while ( __strex(v249 - 1, v248) );
      v249 = (*v248)--;
    if ( v249 <= 0 )
      j_j_j_j__ZdlPv_9(v113);
  v114 = (void *)(v303 - 12);
  if ( (int *)(v303 - 12) != &dword_28898C0 )
    v250 = (unsigned int *)(v303 - 4);
        v251 = __ldrex(v250);
      while ( __strex(v251 - 1, v250) );
      v251 = (*v250)--;
    if ( v251 <= 0 )
      j_j_j_j__ZdlPv_9(v114);
  v115 = (void *)(v299 - 12);
  if ( (int *)(v299 - 12) != &dword_28898C0 )
    v252 = (unsigned int *)(v299 - 4);
        v253 = __ldrex(v252);
      while ( __strex(v253 - 1, v252) );
      v253 = (*v252)--;
    if ( v253 <= 0 )
      j_j_j_j__ZdlPv_9(v115);
  v116 = (void *)(v298 - 12);
  if ( (int *)(v298 - 12) != &dword_28898C0 )
    v254 = (unsigned int *)(v298 - 4);
        v255 = __ldrex(v254);
      while ( __strex(v255 - 1, v254) );
      v255 = (*v254)--;
    if ( v255 <= 0 )
      j_j_j_j__ZdlPv_9(v116);
  v117 = (void *)(v297 - 12);
  if ( (int *)(v297 - 12) != &dword_28898C0 )
    v256 = (unsigned int *)(v297 - 4);
        v257 = __ldrex(v256);
      while ( __strex(v257 - 1, v256) );
      v257 = (*v256)--;
    if ( v257 <= 0 )
      j_j_j_j__ZdlPv_9(v117);
  v118 = (void *)(v294 - 12);
  if ( (int *)(v294 - 12) != &dword_28898C0 )
    v258 = (unsigned int *)(v294 - 4);
        v259 = __ldrex(v258);
      while ( __strex(v259 - 1, v258) );
      v259 = (*v258)--;
    if ( v259 <= 0 )
      j_j_j_j__ZdlPv_9(v118);
  v119 = (void *)(v295 - 12);
  if ( (int *)(v295 - 12) != &dword_28898C0 )
    v260 = (unsigned int *)(v295 - 4);
        v261 = __ldrex(v260);
      while ( __strex(v261 - 1, v260) );
      v261 = (*v260)--;
    if ( v261 <= 0 )
      j_j_j_j__ZdlPv_9(v119);
  v120 = (void *)(v300 - 12);
  if ( (int *)(v300 - 12) != &dword_28898C0 )
    v262 = (unsigned int *)(v300 - 4);
        v263 = __ldrex(v262);
      while ( __strex(v263 - 1, v262) );
      v263 = (*v262)--;
    if ( v263 <= 0 )
      j_j_j_j__ZdlPv_9(v120);
  sub_21E94B4((void **)&v288, "6989C411-4355-4756-9163-51C1DF5EF677");
  mce::UUID::fromString((int)&v289, &v288);
  sub_21E94B4((void **)&v283, (const char *)&unk_257BC67);
  v121 = (int *)sub_21E94B4((void **)&v282, (const char *)&unk_257BC67);
  SemVersion::SemVersion((int)&v284, 0, 0, 1, &v283, v121, 0);
  v122 = PackIdVersion::PackIdVersion((int)&v290, (int)&v289, (int)&v284, 0);
  v123 = *(_QWORD *)((char *)v1 + 4);
  if ( (_DWORD)v123 == HIDWORD(v123) )
LABEL_120:
    v128 = 0;
    v124 = v122 + 16;
    v125 = (_QWORD *)(v122 + 8);
      v126 = ResourcePack::getPackId(*(ResourcePack **)v123);
      if ( *(_QWORD *)&v290 == *(_QWORD *)v126 && *v125 == *((_QWORD *)v126 + 1) )
        v127 = ResourcePack::getVersion(*(ResourcePack **)v123);
        if ( SemVersion::operator==((int)v127, v124) == 1 )
      LODWORD(v123) = v123 + 4;
      if ( HIDWORD(v123) == (_DWORD)v123 )
        goto LABEL_120;
    v128 = *(_DWORD *)v123;
  *((_DWORD *)v1 + 14) = v128;
  v129 = (void *)(v293 - 12);
  if ( (int *)(v293 - 12) != &dword_28898C0 )
    v264 = (unsigned int *)(v293 - 4);
        v265 = __ldrex(v264);
      while ( __strex(v265 - 1, v264) );
      v265 = (*v264)--;
    if ( v265 <= 0 )
      j_j_j_j__ZdlPv_9(v129);
  v130 = (void *)(v292 - 12);
  if ( (int *)(v292 - 12) != &dword_28898C0 )
    v266 = (unsigned int *)(v292 - 4);
        v267 = __ldrex(v266);
      while ( __strex(v267 - 1, v266) );
      v267 = (*v266)--;
    if ( v267 <= 0 )
      j_j_j_j__ZdlPv_9(v130);
  v131 = (void *)(v291 - 12);
  if ( (int *)(v291 - 12) != &dword_28898C0 )
    v268 = (unsigned int *)(v291 - 4);
        v269 = __ldrex(v268);
      while ( __strex(v269 - 1, v268) );
      v269 = (*v268)--;
    if ( v269 <= 0 )
      j_j_j_j__ZdlPv_9(v131);
  v132 = (void *)(v287 - 12);
  if ( (int *)(v287 - 12) != &dword_28898C0 )
    v270 = (unsigned int *)(v287 - 4);
        v271 = __ldrex(v270);
      while ( __strex(v271 - 1, v270) );
      v271 = (*v270)--;
    if ( v271 <= 0 )
      j_j_j_j__ZdlPv_9(v132);
  v133 = (void *)(v286 - 12);
  if ( (int *)(v286 - 12) != &dword_28898C0 )
    v272 = (unsigned int *)(v286 - 4);
        v273 = __ldrex(v272);
      while ( __strex(v273 - 1, v272) );
      v273 = (*v272)--;
    if ( v273 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  v134 = (void *)(v285 - 12);
  if ( (int *)(v285 - 12) != &dword_28898C0 )
    v274 = (unsigned int *)(v285 - 4);
        v275 = __ldrex(v274);
      while ( __strex(v275 - 1, v274) );
      v275 = (*v274)--;
    if ( v275 <= 0 )
      j_j_j_j__ZdlPv_9(v134);
  v135 = (void *)(v282 - 12);
  if ( (int *)(v282 - 12) != &dword_28898C0 )
    v276 = (unsigned int *)(v282 - 4);
        v277 = __ldrex(v276);
      while ( __strex(v277 - 1, v276) );
      v277 = (*v276)--;
    if ( v277 <= 0 )
      j_j_j_j__ZdlPv_9(v135);
  v136 = (void *)(v283 - 12);
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v278 = (unsigned int *)(v283 - 4);
        v279 = __ldrex(v278);
      while ( __strex(v279 - 1, v278) );
      v279 = (*v278)--;
    if ( v279 <= 0 )
      j_j_j_j__ZdlPv_9(v136);
  v137 = (void *)(v288 - 12);
  if ( (int *)(v288 - 12) != &dword_28898C0 )
    v280 = (unsigned int *)(v288 - 4);
        v281 = __ldrex(v280);
      while ( __strex(v281 - 1, v280) );
      v281 = (*v280)--;
    if ( v281 <= 0 )
      j_j_j_j__ZdlPv_9(v137);
}


int __fastcall ResourcePackRepository::getResourcePackForPackId(ResourcePackRepository *this, const PackIdVersion *a2)
{
  __int64 v2; // r6@1
  const PackIdVersion *v3; // r4@1
  char *v4; // r9@2
  char *v5; // r0@3
  char *v6; // r0@5
  int result; // r0@7

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = a2;
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
LABEL_7:
    result = 0;
  }
  else
    v4 = (char *)a2 + 8;
    while ( 1 )
    {
      v5 = ResourcePack::getPackId(*(ResourcePack **)v2);
      if ( *(_QWORD *)v3 == *(_QWORD *)v5 && *(_QWORD *)v4 == *((_QWORD *)v5 + 1) )
      {
        v6 = ResourcePack::getVersion(*(ResourcePack **)v2);
        if ( SemVersion::operator==((int)v6, (int)v3 + 16) == 1 )
          break;
      }
      LODWORD(v2) = v2 + 4;
      if ( HIDWORD(v2) == (_DWORD)v2 )
        goto LABEL_7;
    }
    result = *(_DWORD *)v2;
  return result;
}


void __fastcall ResourcePackRepository::reloadUserPacks(ResourcePackRepository *this, int a2)
{
  ResourcePackRepository *v2; // r11@1
  int v3; // r8@1
  ResourcePack **v4; // r5@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  PackManifest *v7; // r0@11
  char *v8; // r0@11
  ResourcePack **v9; // r0@12
  ResourcePack *v10; // r1@13
  ResourcePack **v11; // r1@16
  int v12; // r0@16
  signed int v13; // r2@17
  int v14; // r4@18
  ResourcePack **v15; // r6@18
  ResourcePack *v16; // r1@19
  ResourcePack *v17; // r0@19
  ResourcePack *v18; // r0@20
  _DWORD *v19; // r4@23
  ResourcePack *v20; // r0@23
  ResourcePack *v21; // r0@24
  void *v22; // r0@26
  int v23; // r0@28
  __int64 v24; // r6@29
  ResourcePack **v25; // r10@29
  int v26; // r4@31
  int v27; // r4@34
  ResourcePack **v28; // r7@35
  ResourcePack *v29; // r0@37
  ResourcePack **v30; // r4@39
  ResourcePack *v31; // r0@41
  int v32; // r0@48
  int v33; // r6@50
  ResourcePack **v34; // r7@50
  ResourcePack *v35; // r1@51
  ResourcePack *v36; // r0@51
  ResourcePack *v37; // r0@52
  _DWORD *v38; // r6@55
  ResourcePack *v39; // r0@55
  ResourcePack *v40; // r0@56
  int v41; // [sp+8h] [bp-38h]@3
  ResourcePack **v42; // [sp+Ch] [bp-34h]@1
  ResourcePack **v43; // [sp+10h] [bp-30h]@1
  ResourcePack **v44; // [sp+14h] [bp-2Ch]@1

  v2 = this;
  v42 = 0;
  v43 = 0;
  v3 = a2;
  v44 = 0;
  v4 = (ResourcePack **)*(_QWORD *)((char *)this + 4);
  if ( v4 != (ResourcePack **)(*(_QWORD *)((char *)this + 4) >> 32) )
  {
    do
    {
      v7 = (PackManifest *)ResourcePack::getManifest(*v4);
      v8 = PackManifest::getLocation(v7);
      ResourceLocation::getFullPath((ResourceLocation *)&v41, (int)v8);
      if ( ResourcePack::getPackCategory(*v4) == 3 )
      {
        v9 = v43;
        if ( v43 == v44 )
        {
          std::vector<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>,std::allocator<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>>::_M_emplace_back_aux<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>(
            &v42,
            (int *)v4);
        }
        else
          v10 = *v4;
          *v4 = 0;
          *v9 = v10;
          ++v43;
        v11 = (ResourcePack **)*((_DWORD *)v2 + 2);
        v12 = (int)(v4 + 1);
        if ( v4 + 1 != v11 )
          v13 = (signed int)v11 - v12;
          v12 = *((_DWORD *)v2 + 2);
          if ( v13 >= 1 )
          {
            v14 = (v13 >> 2) + 1;
            v15 = v4;
            do
            {
              v16 = v15[1];
              v15[1] = 0;
              v17 = *v15;
              *v15 = v16;
              if ( v17 )
              {
                v18 = ResourcePack::~ResourcePack(v17);
                operator delete((void *)v18);
              }
              --v14;
              ++v15;
            }
            while ( v14 > 1 );
            v12 = *((_DWORD *)v2 + 2);
          }
        v19 = (_DWORD *)(v12 - 4);
        *((_DWORD *)v2 + 2) = v12 - 4;
        v20 = *(ResourcePack **)(v12 - 4);
        if ( v20 )
          v21 = ResourcePack::~ResourcePack(v20);
          operator delete((void *)v21);
        *v19 = 0;
      }
      else
        ++v4;
      v22 = (void *)(v41 - 12);
      if ( (int *)(v41 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v41 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
    }
    while ( v4 != *((ResourcePack ***)v2 + 2) );
  }
  v23 = *(_DWORD *)(v3 + 8);
  if ( v23 )
    HIDWORD(v24) = v43;
    v25 = v42;
    if ( v42 == v43 )
      LODWORD(v24) = v42;
    else
      if ( !v23 )
LABEL_47:
        sub_21E5F48();
      v26 = (int)(v42 + 1);
      while ( 1 )
        (*(void (__fastcall **)(int, ResourcePack *))(v3 + 12))(v3, *v25);
        v32 = (int)(v25 + 1);
        if ( v26 != HIDWORD(v24) )
          v32 = HIDWORD(v24);
          if ( HIDWORD(v24) - v26 >= 1 )
            v33 = ((HIDWORD(v24) - v26) >> 2) + 1;
            v34 = v25;
              v35 = v34[1];
              v34[1] = 0;
              v36 = *v34;
              *v34 = v35;
              if ( v36 )
                v37 = ResourcePack::~ResourcePack(v36);
                operator delete((void *)v37);
              --v33;
              ++v34;
            while ( v33 > 1 );
            v32 = (int)v43;
        v38 = (_DWORD *)(v32 - 4);
        v43 = (ResourcePack **)(v32 - 4);
        v39 = *(ResourcePack **)(v32 - 4);
        if ( v39 )
          v40 = ResourcePack::~ResourcePack(v39);
          operator delete((void *)v40);
        *v38 = 0;
        v24 = *(_QWORD *)&v42;
        if ( v42 == v43 )
          break;
        if ( !*(_DWORD *)(v3 + 8) )
          goto LABEL_47;
  else
    LODWORD(v24) = v42;
  v27 = (int)v43;
  if ( v43 != (ResourcePack **)v24 )
    v28 = (ResourcePack **)v24;
      if ( *v28 )
        v29 = ResourcePack::~ResourcePack(*v28);
        operator delete((void *)v29);
      *v28 = 0;
      ++v28;
    while ( (ResourcePack **)v27 != v28 );
  v43 = (ResourcePack **)v24;
  ResourcePackRepository::_initializePackSource(v2);
  ResourcePackRepository::_loadPacks(v2);
  v30 = v42;
  if ( v42 != (ResourcePack **)v24 )
      if ( *v30 )
        v31 = ResourcePack::~ResourcePack(*v30);
        operator delete((void *)v31);
      *v30 = 0;
      ++v30;
    while ( (ResourcePack **)v24 != v30 );
  if ( (_DWORD)v24 )
    operator delete((void *)v24);
}


RakNet *__fastcall ResourcePackRepository::_initializeWorldPackSource(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r4@1
  CompositePackSource *v2; // r5@1
  int v3; // r7@1
  int v4; // r3@1
  int v5; // r2@1
  DirectoryPackSource *v6; // r0@1
  void *v7; // r0@1
  __int64 v8; // r1@2
  CompositePackSource *v9; // r5@2
  int v10; // r4@2
  int v11; // r3@2
  DirectoryPackSource *v12; // r0@2
  void *v13; // r0@2
  RakNet *result; // r0@3
  unsigned int *v15; // r2@5
  signed int v16; // r1@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  int v19; // [sp+Ch] [bp-84Ch]@2
  int v20; // [sp+14h] [bp-844h]@1
  int v21; // [sp+18h] [bp-840h]@1
  int v22; // [sp+1Ch] [bp-83Ch]@1
  int v23; // [sp+20h] [bp-838h]@1
  int v24; // [sp+24h] [bp-834h]@1
  char v25; // [sp+2Ch] [bp-82Ch]@2
  int v26; // [sp+30h] [bp-828h]@2
  char v27; // [sp+434h] [bp-424h]@1
  int v28; // [sp+438h] [bp-420h]@1
  RakNet *v29; // [sp+83Ch] [bp-1Ch]@1

  v1 = this;
  v29 = _stack_chk_guard;
  CompositePackSource::clear(*((CompositePackSource **)this + 6));
  v2 = (CompositePackSource *)*((_DWORD *)v1 + 6);
  v3 = *((_DWORD *)v1 + 39);
  v4 = *(_DWORD *)(*((_DWORD *)v1 + 30) - 12);
  v5 = *(_DWORD *)(ResourcePackRepository::RESOURCE_PACKS_PATH - 12);
  v21 = *((_DWORD *)v1 + 30);
  v22 = v4;
  v23 = ResourcePackRepository::RESOURCE_PACKS_PATH;
  v24 = v5;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v27, (int)&v21, 2);
  sub_21E94B4((void **)&v20, (const char *)&v28);
  v6 = PackSourceFactory::createDirectoryPackSource(v3, &v20, 1, 3, 0);
  CompositePackSource::addPackSource(v2, v6);
  v7 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v20 - 4);
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
  LODWORD(v8) = *((_DWORD *)v1 + 30);
  v9 = (CompositePackSource *)*((_DWORD *)v1 + 6);
  v10 = *((_DWORD *)v1 + 39);
  HIDWORD(v8) = *(_DWORD *)(v8 - 12);
  v11 = *(_DWORD *)(ResourcePackRepository::BEHAVIOR_PACK_PATH - 12);
  *(_QWORD *)&v21 = v8;
  v23 = ResourcePackRepository::BEHAVIOR_PACK_PATH;
  v24 = v11;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v25, (int)&v21, 2);
  sub_21E94B4((void **)&v19, (const char *)&v26);
  v12 = PackSourceFactory::createDirectoryPackSource(v10, &v19, 2, 3, 0);
  CompositePackSource::addPackSource(v9, v12);
  v13 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  result = (RakNet *)(_stack_chk_guard - v29);
  if ( _stack_chk_guard != v29 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ResourcePackRepository::getKnownValidPacksPath(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r4@1
  char *v2; // r0@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  char *v5; // [sp+4h] [bp-24h]@1
  char *v6; // [sp+8h] [bp-20h]@1
  int v7; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  sub_21E8AF4((int *)&v5, (int *)&ResourcePackRepository::KNOWN_VALID_PACKS_FILE_NAME);
  v6 = v5;
  v5 = (char *)&unk_28898CC;
  v7 = 4;
  ResourceLocation::getFullPath(v1, (int)&v6);
  v2 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v3 = (unsigned int *)(v6 - 4);
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
      j_j_j_j__ZdlPv_9(v2);
  }
}


char *__fastcall ResourcePackRepository::KnownPackContainer::addPack(ResourcePackRepository::KnownPackContainer *this, const ResourcePackRepository::KnownPackInfo *a2)
{
  ResourcePackRepository::KnownPackContainer *v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = this;
  v3 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorIN22ResourcePackRepository13KnownPackInfoESaIS1_EE19_M_emplace_back_auxIJRKS1_EEEvDpOT_(
               (unsigned __int64 *)this,
               a2);
  }
  else
    ResourcePackRepository::KnownPackInfo::KnownPackInfo((ResourcePackRepository::KnownPackInfo *)v3, a2);
    result = (char *)(*((_DWORD *)v2 + 1) + 72);
    *((_DWORD *)v2 + 1) = result;
  return result;
}


RakNet *__fastcall ResourcePackRepository::getDevelopmentResourcePacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::DEVELOPMENT_RESOURCE_PACKS_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall ResourcePackRepository::getInvalidPacks(ResourcePackRepository *this, const InvalidPacksFilterGroup *a2, _QWORD *a3)
{
  ResourcePackRepository *v3; // r9@1
  signed int result; // r0@1
  _BYTE *v5; // r5@1 OVERLAPPED
  _BYTE *v6; // r6@1 OVERLAPPED
  char *v7; // r8@2
  char *v8; // r10@2
  char *v9; // r4@2
  char *v10; // r7@2
  unsigned __int64 *v11; // r0@3

  v3 = this;
  result = 0;
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  *(_QWORD *)&v5 = *a3;
  if ( v5 != v6 )
  {
    v7 = (char *)a2 + 96;
    v8 = (char *)a2 + 72;
    v9 = (char *)a2 + 84;
    v10 = (char *)a2 + 60;
    do
    {
      v11 = (unsigned __int64 *)v9;
      switch ( *v5 )
      {
        default:
          v11 = (unsigned __int64 *)v10;
          break;
        case 2:
          v11 = (unsigned __int64 *)v8;
        case 3:
          v11 = (unsigned __int64 *)v7;
        case 1:
      }
      result = std::vector<ResourceLocation,std::allocator<ResourceLocation>>::_M_range_insert<__gnu_cxx::__normal_iterator<ResourceLocation const*,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>>(
                 (signed int)v3,
                 *((_DWORD *)v3 + 1),
                 *v11,
                 *v11 >> 32);
      ++v5;
    }
    while ( v6 != v5 );
  }
  return result;
}


void __fastcall ResourcePackRepository::reloadUserPacks(ResourcePackRepository *this, int a2)
{
  ResourcePackRepository::reloadUserPacks(this, a2);
}


RakNet *__fastcall ResourcePackRepository::getBehaviorPacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::BEHAVIOR_PACK_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::BEHAVIOR_PACK_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::KnownPackContainer::getPack(ResourcePackRepository::KnownPackContainer *this, const PackIdVersion *a2)
{
  int v2; // r4@1
  int v3; // r6@1
  const PackIdVersion *v4; // r5@1
  int result; // r0@4

  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( PackIdVersion::operator==(v2 + 24, (int)v4) != 1 )
    {
      v2 += 72;
      if ( v3 == v2 )
        goto LABEL_4;
    }
    result = v2;
  return result;
}


ContentManager **__fastcall ResourcePackRepository::unregisterContentManager(ResourcePackRepository *this, ContentManager *a2)
{
  ResourcePackRepository *v2; // r6@1
  ContentManager **v3; // r2@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r4@2
  bool v7; // zf@3
  ContentManager **result; // r0@3
  ContentManager *v9; // r5@6
  bool v10; // zf@6
  int v11; // r0@11
  ContentManager **v12; // r1@24
  bool v13; // zf@24

  v2 = this;
  v3 = (ContentManager **)(*((_QWORD *)this + 20) >> 32);
  v4 = *((_QWORD *)this + 20);
  v5 = ((signed int)v3 - v4) >> 4;
  if ( v5 < 1 )
  {
LABEL_10:
    if ( 1 == ((signed int)v3 - v4) >> 2 )
    {
      result = (ContentManager **)v4;
    }
    else
      v11 = ((signed int)v3 - v4) >> 2;
      if ( v11 == 2 )
      {
        result = (ContentManager **)v4;
      }
      else
        if ( v11 != 3 )
        {
          result = v3;
          goto LABEL_23;
        }
        if ( *(ContentManager **)v4 == a2 )
        result = (ContentManager **)(v4 + 4);
      if ( *result == a2 )
        goto LABEL_23;
      ++result;
    if ( *result != a2 )
      result = v3;
  }
  else
    v6 = v5 + 1;
    while ( 1 )
      v7 = *(_DWORD *)v4 == (_DWORD)a2;
      if ( *(ContentManager **)v4 != a2 )
        v7 = *(_DWORD *)(v4 + 4) == (_DWORD)a2;
      if ( v7 )
        break;
      result = (ContentManager **)(v4 + 8);
      v9 = *(ContentManager **)(v4 + 8);
      v10 = v9 == a2;
      if ( v9 != a2 )
        result = (ContentManager **)(v4 + 12);
        v10 = *(_DWORD *)(v4 + 12) == (_DWORD)a2;
      if ( v10 )
      --v6;
      v4 += 16;
      if ( v6 <= 1 )
        goto LABEL_10;
LABEL_23:
  if ( result != v3 )
    v12 = result + 1;
    v13 = result + 1 == v3;
    if ( result + 1 != v3 )
      v13 = v3 == v12;
    if ( !v13 )
      _aeabi_memmove4(result, v12);
      v3 = (ContentManager **)*((_DWORD *)v2 + 41);
    result = v3 - 1;
    *((_DWORD *)v2 + 41) = v3 - 1;
  return result;
}


void __fastcall ResourcePackRepository::deletePack(ResourcePackRepository *this, const ResourceLocation *a2)
{
  ResourcePackRepository::deletePack(this, a2);
}


signed int __fastcall ResourcePackRepository::KnownPackContainer::hasPack(ResourcePackRepository::KnownPackContainer *this, const ResourcePackRepository::KnownPackInfo *a2)
{
  ResourcePackRepository::KnownPackContainer *v2; // r6@1
  const ResourcePackRepository::KnownPackInfo *v3; // r8@1
  int v4; // r5@1
  int v5; // r7@1
  signed int result; // r0@6
  int v7; // r4@7
  int v8; // r7@7
  __int64 v9; // kr10_8@8
  size_t v10; // r5@8
  const void *v11; // r0@9
  int v12; // r0@10
  bool v13; // zf@10

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)this >> 32;
  v5 = *(_QWORD *)this;
  if ( v5 == v4 )
    goto LABEL_7;
  while ( PackIdVersion::operator==(v5 + 24, (int)v3 + 24) != 1 )
  {
    v5 += 72;
    if ( v4 == v5 )
      goto LABEL_7;
  }
  if ( v5 )
    result = 1;
  else
LABEL_7:
    v8 = *(_QWORD *)v2 >> 32;
    v7 = *(_QWORD *)v2;
    if ( v7 == v8 )
    {
LABEL_14:
      v7 = 0;
    }
    else
      v9 = *(_QWORD *)((char *)v3 + 4);
      v10 = *(_DWORD *)(v9 - 12);
      while ( 1 )
      {
        v11 = *(const void **)(v7 + 4);
        if ( *((_DWORD *)v11 - 3) == v10 )
        {
          v12 = memcmp(v11, (const void *)v9, v10);
          v13 = v12 == 0;
          if ( !v12 )
            v13 = *(_DWORD *)(v7 + 8) == HIDWORD(v9);
          if ( v13 )
            break;
        }
        v7 += 72;
        if ( v8 == v7 )
          goto LABEL_14;
      }
    result = v7 != 0;
  return result;
}


RakNet *__fastcall ResourcePackRepository::_saveKnownUserPacks(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r9@1
  int *v4; // r11@1
  unsigned __int64 *v5; // r6@1
  int v6; // r5@9
  void ***v7; // r10@9
  unsigned int v8; // r4@9
  unsigned __int64 v9; // r2@9
  int *v10; // r6@10
  int v11; // r5@11
  int v12; // r5@11
  char *v13; // r7@12
  char *v14; // r4@12
  unsigned int *v15; // r2@13
  signed int v16; // r1@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  const Json::Value *v19; // r6@29
  Json::Value *v20; // r4@29
  int v21; // r7@29
  int v22; // r9@29
  void *v23; // r0@29
  int v24; // r7@30
  void *v25; // r0@30
  int v26; // r7@31
  char *v27; // r0@31
  int v28; // r7@32
  bool v29; // zf@32
  const char **v30; // r6@35
  const char **i; // r7@35
  int v32; // r0@37
  void *v33; // r0@39
  void *v34; // r0@41
  RakNet *result; // r0@42
  unsigned int *v36; // r2@44
  signed int v37; // r1@46
  unsigned int *v38; // r2@52
  signed int v39; // r1@54
  int v40; // [sp+20h] [bp-Ch]@11
  RakNet *v41; // [sp+2Ch] [bp+0h]@1
  int v42; // [sp+34h] [bp+8h]@39
  char v43; // [sp+38h] [bp+Ch]@39
  char v44; // [sp+58h] [bp+2Ch]@36
  char v45; // [sp+68h] [bp+3Ch]@35
  char v46; // [sp+78h] [bp+4Ch]@32
  char v47; // [sp+88h] [bp+5Ch]@31
  int v48; // [sp+9Ch] [bp+70h]@17
  char v49; // [sp+A0h] [bp+74h]@30
  int v50; // [sp+B4h] [bp+88h]@13
  char v51; // [sp+B8h] [bp+8Ch]@29
  char v52; // [sp+C8h] [bp+9Ch]@12
  char v53; // [sp+D8h] [bp+ACh]@12
  char v54; // [sp+E8h] [bp+BCh]@11
  char v55; // [sp+F8h] [bp+CCh]@11
  char v56; // [sp+108h] [bp+DCh]@11
  int v57; // [sp+118h] [bp+ECh]@7
  int v58; // [sp+11Ch] [bp+F0h]@7
  char v59; // [sp+120h] [bp+F4h]@7
  void (*v60)(void); // [sp+128h] [bp+FCh]@7
  int v61; // [sp+134h] [bp+108h]@6
  int v62; // [sp+138h] [bp+10Ch]@6
  int v63; // [sp+13Ch] [bp+110h]@3
  __int64 v64; // [sp+140h] [bp+114h]@9
  int v65; // [sp+148h] [bp+11Ch]@29
  unsigned int v66; // [sp+14Ch] [bp+120h]@29
  void **v67; // [sp+158h] [bp+12Ch]@9
  int v68; // [sp+15Ch] [bp+130h]@41
  void **v69; // [sp+160h] [bp+134h]@9
  int v70; // [sp+164h] [bp+138h]@41
  void **v71; // [sp+1194h] [bp+1168h]@9
  int v72; // [sp+11A8h] [bp+117Ch]@9
  int v73; // [sp+1204h] [bp+11D8h]@9
  __int16 v74; // [sp+1208h] [bp+11DCh]@9
  int v75; // [sp+120Ch] [bp+11E0h]@9
  int v76; // [sp+1210h] [bp+11E4h]@9
  int v77; // [sp+1214h] [bp+11E8h]@9
  int v78; // [sp+1218h] [bp+11ECh]@9

  v3 = a1;
  v4 = (int *)&v41;
  v5 = a2;
  v41 = _stack_chk_guard;
  if ( a3 == 1 )
  {
    ResourcePackRepository::getKnownInvalidPacksPath((ResourcePackRepository *)&v63);
  }
  else if ( a3 )
    sub_21E8AF4(&v63, (int *)&Util::EMPTY_STRING);
  else
    ResourcePackRepository::getKnownValidPacksPath((ResourcePackRepository *)&v63);
  v61 = v63;
  v62 = *(_DWORD *)(v63 - 12);
  if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v61) == 1 )
    v57 = v63;
    v58 = *(_DWORD *)(v63 - 12);
    Core::FileSystem::deleteFile((int)&v59, (__int64 *)&v57);
    if ( v60 )
      v60();
  v6 = v63;
  v7 = &v71;
  v8 = *(_DWORD *)(v63 - 12);
  sub_21B6308((int)&v71);
  v71 = &off_26D3AF0;
  v73 = 0;
  v74 = 0;
  v78 = 0;
  v77 = 0;
  v76 = 0;
  v75 = 0;
  v64 = __PAIR__(v8, v6);
  Core::FileStream::FileStream((int)&v67, (int)off_26D81A4, &v64, 16);
  v67 = &off_26D8170;
  v71 = &off_26D8198;
  v69 = &off_26D8184;
  if ( v72 )
    v10 = (int *)&v69;
    Json::Value::Value(&v56, 0);
    Json::Value::Value(&v55, 0);
    v11 = Json::Value::operator[]((Json::Value *)&v55, "file_version");
    Json::Value::Value((Json::Value *)&v54, *(_DWORD *)(v3 + 152));
    Json::Value::operator=(v11, (const Json::Value *)&v54);
    Json::Value::~Value((Json::Value *)&v54);
    Json::Value::append((Json::Value *)&v56, (const Json::Value *)&v55);
    v12 = *v5;
    v40 = *v5 >> 32;
    if ( v12 != v40 )
    {
      v13 = &v53;
      v14 = &v52;
      do
      {
        Json::Value::Value(v13, 0);
        v19 = (const Json::Value *)v14;
        v20 = (Json::Value *)v13;
        v21 = Json::Value::operator[]((Json::Value *)v13, "path");
        Json::Value::Value((int)v19, (const char **)(v12 + 4));
        Json::Value::operator=(v21, v19);
        Json::Value::~Value(v19);
        v22 = Json::Value::operator[](v20, "file_system");
        ResourceUtil::stringFromPath(&v65, *(_DWORD *)(v12 + 8));
        sub_21E91E0((void **)&v50, v66, v65);
        Json::Value::Value((int)&v51, (const char **)&v50);
        Json::Value::operator=(v22, (const Json::Value *)&v51);
        Json::Value::~Value((Json::Value *)&v51);
        v23 = (void *)(v50 - 12);
        if ( (int *)(v50 - 12) != &dword_28898C0 )
        {
          v15 = (unsigned int *)(v50 - 4);
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
            j_j_j_j__ZdlPv_9(v23);
        }
        v24 = Json::Value::operator[](v20, "uuid");
        mce::UUID::asString((mce::UUID *)&v48);
        Json::Value::Value((int)&v49, (const char **)&v48);
        Json::Value::operator=(v24, (const Json::Value *)&v49);
        Json::Value::~Value((Json::Value *)&v49);
        v25 = (void *)(v48 - 12);
        if ( (int *)(v48 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v48 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        v26 = Json::Value::operator[](v20, "version");
        v27 = SemVersion::asString((SemVersion *)(v12 + 40));
        Json::Value::Value((int)&v47, (const char **)v27);
        Json::Value::operator=(v26, (const Json::Value *)&v47);
        Json::Value::~Value((Json::Value *)&v47);
        if ( *(_BYTE *)v12 )
          v28 = Json::Value::operator[](v20, "from_disk");
          Json::Value::Value((Json::Value *)&v46, *(_BYTE *)v12);
          Json::Value::operator=(v28, (const Json::Value *)&v46);
          Json::Value::~Value((Json::Value *)&v46);
          v29 = *(_BYTE *)v12 == 0;
          if ( *(_BYTE *)v12 )
            v29 = (unsigned int)*(_QWORD *)(v12 + 12) == *(_QWORD *)(v12 + 12) >> 32;
          if ( !v29 )
            Json::Value::Value(&v45, 0);
            v30 = (const char **)(*(_QWORD *)(v12 + 12) >> 32);
            for ( i = (const char **)*(_QWORD *)(v12 + 12); v30 != i; ++i )
            {
              Json::Value::Value((int)&v44, i);
              Json::Value::append((Json::Value *)&v45, (const Json::Value *)&v44);
              Json::Value::~Value((Json::Value *)&v44);
            }
            v32 = Json::Value::operator[](v20, "hashes");
            Json::Value::operator=(v32, (const Json::Value *)&v45);
            Json::Value::~Value((Json::Value *)&v45);
        Json::Value::append((Json::Value *)&v56, v20);
        v13 = (char *)v20;
        Json::Value::~Value(v20);
        v12 += 72;
        v14 = &v52;
      }
      while ( v12 != v40 );
    }
    sub_21E94B4((void **)&v42, "\t");
    v7 = &v71;
    Json::StyledStreamWriter::StyledStreamWriter((int)&v43, &v42);
    v4 = (int *)&v41;
    v33 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
      else
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    Json::StyledStreamWriter::write((int)&v43, (int)&v69, (const Json::Value *)&v56);
    Json::StyledStreamWriter::~StyledStreamWriter((Json::StyledStreamWriter *)&v43);
    Json::Value::~Value((Json::Value *)&v55);
    Json::Value::~Value((Json::Value *)&v56);
  v67 = &off_26D679C;
  *v7 = &off_26D67C4;
  *v10 = (int)&off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v70, (int)&off_26D67C4, v9);
  v67 = &off_26D67DC;
  *v7 = &off_26D67F0;
  v68 = 0;
  sub_21B6560(&v71);
  v34 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v63 - 4);
    if ( &pthread_create )
      __dmb();
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
    else
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  result = (RakNet *)((char *)_stack_chk_guard - *v4);
  if ( _stack_chk_guard != (RakNet *)*v4 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ResourcePackRepository::getPremiumPackPath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r1@4
  RakNet *result; // r0@4
  int v6; // [sp+0h] [bp-430h]@4
  int v7; // [sp+4h] [bp-42Ch]@4
  const char *v8; // [sp+8h] [bp-428h]@4
  int v9; // [sp+Ch] [bp-424h]@4
  char v10; // [sp+14h] [bp-41Ch]@4
  int v11; // [sp+18h] [bp-418h]@4
  int v12; // [sp+418h] [bp-18h]@4
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v1 = (void **)this;
  v13 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 272))();
  v4 = *(_DWORD *)(v3 - 12);
  v6 = v3;
  v7 = v4;
  v8 = "premium_cache";
  v9 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v10, (int)&v6, 2);
  sub_21E91E0(v1, (unsigned int)&v11, v12);
  result = (RakNet *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ResourcePackRepository::_updatePackLogVersion(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@6
  int i; // r4@6
  __int64 v6; // kr00_8@7
  _DWORD *v7; // r9@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int *v10; // r0@16
  void *v11; // r0@19
  unsigned int *v12; // r2@21
  signed int v13; // r1@23
  int v14; // [sp+0h] [bp-40h]@2
  unsigned __int64 *v15; // [sp+4h] [bp-3Ch]@6
  signed int v16; // [sp+8h] [bp-38h]@3
  int v17; // [sp+Ch] [bp-34h]@3

  v3 = a2;
  if ( a3 == 1 )
  {
    v14 = a1;
    v16 = 1;
    ResourcePackRepository::getKnownInvalidPacksPath((ResourcePackRepository *)&v17);
  }
  else
    if ( a3 )
    {
      v16 = a3;
      sub_21E8AF4(&v17, (int *)&Util::EMPTY_STRING);
    }
    else
      v16 = 0;
      ResourcePackRepository::getKnownValidPacksPath((ResourcePackRepository *)&v17);
  v4 = *(_DWORD *)v3;
  v15 = (unsigned __int64 *)v3;
  for ( i = *(_DWORD *)(v3 + 4); v4 != i; v4 += 72 )
    *(_BYTE *)v4 = 0;
    v6 = *(_QWORD *)(v4 + 12);
    v7 = (_DWORD *)*(_QWORD *)(v4 + 12);
    if ( HIDWORD(v6) != (_DWORD)v6 )
      do
      {
        v10 = (int *)(*v7 - 12);
        if ( v10 != &dword_28898C0 )
        {
          v8 = (unsigned int *)(*v7 - 4);
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
            j_j_j_j__ZdlPv_9(v10);
        }
        ++v7;
      }
      while ( v7 != (_DWORD *)HIDWORD(v6) );
    *(_DWORD *)(v4 + 16) = v6;
  ResourcePackRepository::_saveKnownUserPacks(v14, v15, v16);
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


RakNet *__fastcall ResourcePackRepository::getTemporaryPremiumPacksPath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  RakNet *result; // r0@2
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // [sp+0h] [bp-438h]@1
  int v8; // [sp+8h] [bp-430h]@1
  int v9; // [sp+Ch] [bp-42Ch]@1
  const char *v10; // [sp+10h] [bp-428h]@1
  int v11; // [sp+14h] [bp-424h]@1
  char v12; // [sp+1Ch] [bp-41Ch]@1
  int v13; // [sp+20h] [bp-418h]@2
  int v14; // [sp+420h] [bp-18h]@2
  RakNet *v15; // [sp+424h] [bp-14h]@1

  v1 = (void **)this;
  v15 = _stack_chk_guard;
  ResourcePackRepository::getCachedResourcePacksPath((ResourcePackRepository *)&v7);
  v2 = *(_DWORD *)(v7 - 12);
  v8 = v7;
  v9 = v2;
  v10 = "premium";
  v11 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v12, (int)&v8, 2);
  v3 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  sub_21E91E0(v1, (unsigned int)&v13, v14);
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ResourcePackRepository::getTemplatePacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::TEMPLATE_PACK_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::TEMPLATE_PACK_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::getInactivePacks(int result, unsigned __int64 *a2, unsigned int a3, int a4)
{
  int v4; // r3@4

  if ( a4 == 2 )
  {
    v4 = 1;
    return ResourcePackRepository::_getResourcePacksNotIn(result, a2, a3, 1u, v4);
  }
  if ( a4 != 1 )
    if ( a4 )
      return result;
    v4 = 0;
  return ResourcePackRepository::_getResourcePacksNotIn(result, a2, a3, 2u, 1);
}


void __fastcall ResourcePackRepository::addWorldResourcePacks(int a1, int *a2)
{
  ResourcePackRepository *v2; // r4@1

  v2 = (ResourcePackRepository *)a1;
  EntityInteraction::setInteractText((int *)(a1 + 120), a2);
  ResourcePackRepository::_initializeWorldPackSource(v2);
  j_j_j__ZN22ResourcePackRepository10_loadPacksEv(v2);
}


char *__fastcall ResourcePackRepository::getSkinPacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  char *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::SKIN_PACKS_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::SKIN_PACKS_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (char *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall ResourcePackRepository::isResourcePackLoaded(int a1, int a2, int *a3)
{
  __int64 v3; // r6@1
  _QWORD *v4; // r4@1
  int v5; // r8@2
  _QWORD *v6; // r10@2
  char *v7; // r0@3
  char *v8; // r0@5
  signed int result; // r0@8

  v3 = *(_QWORD *)(a1 + 4);
  v4 = (_QWORD *)a2;
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
LABEL_8:
    result = 0;
  }
  else
    v5 = *a3;
    v6 = (_QWORD *)(a2 + 8);
    while ( 1 )
    {
      v7 = ResourcePack::getPackId(*(ResourcePack **)v3);
      if ( *v4 == *(_QWORD *)v7 && *v6 == *((_QWORD *)v7 + 1) )
      {
        v8 = ResourcePack::getVersion(*(ResourcePack **)v3);
        if ( SemVersion::operator==((int)v8, (int)(v4 + 2)) == 1
          && ResourcePack::getPackOrigin(*(ResourcePack **)v3) == v5 )
        {
          break;
        }
      }
      LODWORD(v3) = v3 + 4;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        goto LABEL_8;
    }
    result = 1;
  return result;
}


_DWORD *__fastcall ResourcePackRepository::getExpectedFileExtensions(ResourcePackRepository *this)
{
  return &ResourcePackRepository::EXPECTED_EXTENSIONS;
}


void __fastcall ResourcePackRepository::_deleteResourcePackCache(ResourcePackRepository *this)
{
  void *v1; // r0@3
  unsigned int *v2; // r2@5
  signed int v3; // r1@7
  int v4; // [sp+4h] [bp-34h]@1
  int v5; // [sp+8h] [bp-30h]@1
  char v6; // [sp+Ch] [bp-2Ch]@1
  void (*v7)(void); // [sp+14h] [bp-24h]@1
  int v8; // [sp+20h] [bp-18h]@1

  ResourcePackRepository::getCachedResourcePacksPath((ResourcePackRepository *)&v8);
  v4 = v8;
  v5 = *(_DWORD *)(v8 - 12);
  Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v6, (__int64 *)&v4);
  if ( v7 )
    v7();
  v1 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v2 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex(v2);
      while ( __strex(v3 - 1, v2) );
    }
    else
      v3 = (*v2)--;
    if ( v3 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
}


void __fastcall ResourcePackRepository::_updateKnownUserPacks(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r6@1
  int v4; // r4@1
  unsigned __int64 *v5; // r5@1
  __int64 v6; // r4@1
  ResourcePackRepository::KnownPackInfo *v7; // r0@2
  __int64 v8; // [sp+4h] [bp-1Ch]@1
  int v9; // [sp+Ch] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v8 = 0LL;
  v9 = 0;
  ResourcePackRepository::_loadLastKnownUserPacks(a1, (int)&v8, a3);
  ResourcePackRepository::_detectKnownPacksChange(v3, (int)v5, (unsigned __int64 *)&v8, v4);
  ResourcePackRepository::_saveKnownUserPacks(v3, v5, v4);
  v6 = v8;
  if ( (_DWORD)v8 != HIDWORD(v8) )
  {
    v7 = (ResourcePackRepository::KnownPackInfo *)v8;
    do
      v7 = (ResourcePackRepository::KnownPackInfo *)((char *)ResourcePackRepository::KnownPackInfo::~KnownPackInfo(v7)
                                                   + 72);
    while ( (ResourcePackRepository::KnownPackInfo *)HIDWORD(v6) != v7 );
  }
  if ( (_DWORD)v6 )
    operator delete((void *)v6);
}


void __fastcall ResourcePackRepository::_initializeCachedPackSource(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r4@1
  CompositePackSource *v2; // r5@1
  int v3; // r6@1
  DirectoryPackSource *v4; // r0@1
  void *v5; // r0@1
  CompositePackSource *v6; // r5@2
  int v7; // r6@2
  DirectoryPackSource *v8; // r0@2
  void *v9; // r0@2
  CompositePackSource *v10; // r5@3
  int v11; // r6@3
  DirectoryPackSource *v12; // r0@3
  void *v13; // r0@3
  CompositePackSource *v14; // r5@4
  int v15; // r4@4
  DirectoryPackSource *v16; // r0@4
  void *v17; // r0@4
  unsigned int *v18; // r2@6
  signed int v19; // r1@8
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  unsigned int *v24; // r2@18
  signed int v25; // r1@20
  int v26; // [sp+8h] [bp-28h]@4
  int v27; // [sp+Ch] [bp-24h]@3
  int v28; // [sp+10h] [bp-20h]@2
  int v29; // [sp+14h] [bp-1Ch]@1

  v1 = this;
  CompositePackSource::clear(*((CompositePackSource **)this + 5));
  v2 = (CompositePackSource *)*((_DWORD *)v1 + 5);
  v3 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getCachedResourcePacksPath((ResourcePackRepository *)&v29);
  v4 = PackSourceFactory::createDirectoryPackSource(v3, &v29, 1, 5, 0);
  CompositePackSource::addPackSource(v2, v4);
  v5 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v29 - 4);
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
  v6 = (CompositePackSource *)*((_DWORD *)v1 + 5);
  v7 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getCachedResourcePacksPath((ResourcePackRepository *)&v28);
  v8 = PackSourceFactory::createDirectoryPackSource(v7, &v28, 2, 5, 0);
  CompositePackSource::addPackSource(v6, v8);
  v9 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (CompositePackSource *)*((_DWORD *)v1 + 5);
  v11 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getTemporaryPremiumPacksPath((ResourcePackRepository *)&v27);
  v12 = PackSourceFactory::createDirectoryPackSource(v11, &v27, 1, 7, 0);
  CompositePackSource::addPackSource(v10, v12);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v27 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (CompositePackSource *)*((_DWORD *)v1 + 5);
  v15 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getTemporaryPremiumPacksPath((ResourcePackRepository *)&v26);
  v16 = PackSourceFactory::createDirectoryPackSource(v15, &v26, 2, 7, 0);
  CompositePackSource::addPackSource(v14, v16);
  v17 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v26 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


ResourcePackRepository::KnownPackInfo *__fastcall ResourcePackRepository::KnownPackInfo::~KnownPackInfo(ResourcePackRepository::KnownPackInfo *this)
{
  ResourcePackRepository::KnownPackInfo *v1; // r10@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r5@4
  void *v9; // r7@4
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  int *v12; // r0@14
  int v13; // r1@19
  void *v14; // r0@19
  unsigned int *v16; // r2@21
  signed int v17; // r1@23
  unsigned int *v18; // r2@25
  signed int v19; // r1@27
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  unsigned int *v22; // r2@33
  signed int v23; // r1@35

  v1 = this;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v2 - 4);
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
  v4 = *((_DWORD *)v1 + 13);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v4 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 12);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v6 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v9 = (void *)(*(_QWORD *)((char *)v1 + 12) >> 32);
  v8 = (void *)*(_QWORD *)((char *)v1 + 12);
  if ( v8 != v9 )
    do
      v12 = (int *)(*(_DWORD *)v8 - 12);
      if ( v12 != &dword_28898C0 )
      {
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v8 = (char *)v8 + 4;
    while ( v8 != v9 );
    v8 = (void *)*((_DWORD *)v1 + 3);
  if ( v8 )
    operator delete(v8);
  v13 = *((_DWORD *)v1 + 1);
  v14 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v13 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return v1;
}


int __fastcall ResourcePackRepository::getResourcePacksByPackId(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r5@1
  int result; // r0@1
  int v5; // r7@1
  int v6; // r11@1
  __int64 v7; // r8@4
  char *v8; // r0@5
  char *v9; // r0@7
  int v10; // r1@10
  const void **v11; // r2@11
  __int64 v12; // kr08_8@11
  int v13; // [sp+0h] [bp-30h]@1
  char v14; // [sp+7h] [bp-29h]@11
  int v15; // [sp+8h] [bp-28h]@9

  v3 = a1;
  result = *a2 >> 32;
  v5 = *a2;
  v6 = a3;
  v13 = *a2 >> 32;
  while ( v5 != result )
  {
    v7 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
LABEL_9:
      v15 = 0;
    }
    else
      while ( 1 )
      {
        v8 = ResourcePack::getPackId(*(ResourcePack **)v7);
        if ( *(_QWORD *)v5 == *(_QWORD *)v8 && *(_QWORD *)(v5 + 8) == *((_QWORD *)v8 + 1) )
        {
          v9 = ResourcePack::getVersion(*(ResourcePack **)v7);
          if ( SemVersion::operator==((int)v9, v5 + 16) )
            break;
        }
        LODWORD(v7) = v7 + 4;
        if ( HIDWORD(v7) == (_DWORD)v7 )
          goto LABEL_9;
      }
      v10 = *(_DWORD *)v7;
      v15 = v10;
      if ( v10 )
        v11 = (const void **)(v5 + 48);
        v14 = 0;
        v12 = *(_QWORD *)(v6 + 4);
        if ( (_DWORD)v12 == HIDWORD(v12) )
          std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<ResourcePack *&,std::string const&,bool>(
            (unsigned __int64 *)v6,
            &v15,
            v11,
            &v14);
        else
          PackInstance::PackInstance(v12, v10, v11, 0);
          *(_DWORD *)(v6 + 4) += 120;
    v5 += 56;
    result = v13;
  }
  return result;
}


void __fastcall ResourcePackRepository::addCachedResourcePacks(int a1, int a2)
{
  ResourcePackRepository::addCachedResourcePacks(a1, a2);
}


_DWORD *__fastcall ResourcePackRepository::ResourcePackRepository(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // r4@1
  int v7; // r7@1
  int v8; // r5@1
  int v9; // r6@1
  double v10; // r0@1
  unsigned int v11; // r0@1
  int v12; // r5@3
  void *v13; // r6@3
  void *v14; // r0@6
  void *v15; // r0@9
  void *v16; // r0@12
  void *v17; // r0@15
  void *v18; // r0@18
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
  int v30; // [sp+8h] [bp-C8h]@16
  int v31; // [sp+Ch] [bp-C4h]@16
  int v32; // [sp+10h] [bp-C0h]@16
  char v33; // [sp+14h] [bp-BCh]@16
  void (*v34)(void); // [sp+1Ch] [bp-B4h]@16
  int v35; // [sp+28h] [bp-A8h]@13
  int v36; // [sp+2Ch] [bp-A4h]@13
  int v37; // [sp+30h] [bp-A0h]@13
  char v38; // [sp+34h] [bp-9Ch]@13
  void (*v39)(void); // [sp+3Ch] [bp-94h]@13
  int v40; // [sp+48h] [bp-88h]@10
  int v41; // [sp+4Ch] [bp-84h]@10
  int v42; // [sp+50h] [bp-80h]@10
  char v43; // [sp+54h] [bp-7Ch]@10
  void (*v44)(void); // [sp+5Ch] [bp-74h]@10
  int v45; // [sp+68h] [bp-68h]@7
  int v46; // [sp+6Ch] [bp-64h]@7
  int v47; // [sp+70h] [bp-60h]@7
  char v48; // [sp+74h] [bp-5Ch]@7
  void (*v49)(void); // [sp+7Ch] [bp-54h]@7
  int v50; // [sp+88h] [bp-48h]@4
  int v51; // [sp+8Ch] [bp-44h]@4
  int v52; // [sp+90h] [bp-40h]@4
  char v53; // [sp+94h] [bp-3Ch]@4
  void (*v54)(void); // [sp+9Ch] [bp-34h]@4

  v6 = a1;
  v7 = a2;
  *a1 = a5;
  v8 = a4;
  v9 = a3;
  _aeabi_memclr4(a1 + 1, 104);
  v6[27] = v7;
  v6[28] = v9;
  v6[29] = v8;
  v6[30] = &unk_28898CC;
  v6[33] = 0;
  v6[34] = 0;
  v6[35] = 1065353216;
  v6[36] = 0;
  LODWORD(v10) = v6 + 35;
  v11 = sub_21E6254(v10);
  v6[32] = v11;
  if ( v11 == 1 )
  {
    v6[37] = 0;
    v13 = v6 + 37;
  }
  else
    if ( v11 >= 0x40000000 )
      sub_21E57F4();
    v12 = 4 * v11;
    v13 = operator new(4 * v11);
    _aeabi_memclr4(v13, v12);
  v6[31] = v13;
  v6[38] = 1;
  v6[39] = a6;
  v6[40] = 0;
  v6[41] = 0;
  v6[42] = 0;
  ResourcePackRepository::_initializePackSource((ResourcePackRepository *)v6);
  ResourcePackRepository::_loadPacks((ResourcePackRepository *)v6);
  ResourcePackRepository::_findVanillaPacks((ResourcePackRepository *)v6);
  ResourcePackRepository::getResourcePacksPath((ResourcePackRepository *)&v50, v6);
  v51 = v50;
  v52 = *(_DWORD *)(v50 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v53, (__int64 *)&v51);
  if ( v54 )
    v54();
  v14 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v50 - 4);
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
      j_j_j_j__ZdlPv_9(v14);
  ResourcePackRepository::getBehaviorPacksPath((ResourcePackRepository *)&v45, v6);
  v46 = v45;
  v47 = *(_DWORD *)(v45 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v48, (__int64 *)&v46);
  if ( v49 )
    v49();
  v15 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v45 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  ResourcePackRepository::getTemplatePacksPath((ResourcePackRepository *)&v40, v6);
  v41 = v40;
  v42 = *(_DWORD *)(v40 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v43, (__int64 *)&v41);
  if ( v44 )
    v44();
  v16 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v40 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  ResourcePackRepository::getDevelopmentResourcePacksPath((ResourcePackRepository *)&v35, v6);
  v36 = v35;
  v37 = *(_DWORD *)(v35 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v38, (__int64 *)&v36);
  if ( v39 )
    v39();
  v17 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v35 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  ResourcePackRepository::getDevelopmentBehaviorPacksPath((ResourcePackRepository *)&v30, v6);
  v31 = v30;
  v32 = *(_DWORD *)(v30 - 12);
  Core::FileSystem::createDirectoryRecursively((int)&v33, (__int64 *)&v31);
  if ( v34 )
    v34();
  v18 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v30 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  return v6;
}


RakNet *__fastcall ResourcePackRepository::_initializePackSource(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r8@1
  int v2; // r5@1
  DirectoryPackSource *v3; // r5@1
  char *v4; // r0@1
  _BYTE *v5; // r6@3
  unsigned int v6; // r2@3
  unsigned int v7; // r1@5
  unsigned int v8; // r4@5
  char *v9; // r7@11
  int v10; // r5@13
  DirectoryPackSource **v11; // r5@15
  void *v12; // r0@18
  int v13; // r5@19
  DirectoryPackSource *v14; // r5@19
  char *v15; // r0@19
  _BYTE *v16; // r6@21
  unsigned int v17; // r2@21
  unsigned int v18; // r1@23
  unsigned int v19; // r4@23
  char *v20; // r7@29
  int v21; // r5@31
  DirectoryPackSource **v22; // r5@33
  void *v23; // r0@36
  DirectoryPackSource *v24; // r5@37
  int v25; // r0@37
  char *v26; // r0@39
  _BYTE *v27; // r6@41
  unsigned int v28; // r2@41
  unsigned int v29; // r1@43
  unsigned int v30; // r4@43
  char *v31; // r7@49
  int v32; // r5@51
  DirectoryPackSource **v33; // r5@53
  DirectoryPackSource *v34; // r5@56
  int v35; // r0@56
  char *v36; // r0@58
  _BYTE *v37; // r6@60
  unsigned int v38; // r2@60
  unsigned int v39; // r1@62
  unsigned int v40; // r4@62
  char *v41; // r7@68
  int v42; // r5@70
  DirectoryPackSource **v43; // r5@72
  InPackagePackSource *v44; // r5@75
  char *v45; // r0@75
  _BYTE *v46; // r6@77
  unsigned int v47; // r2@77
  unsigned int v48; // r1@79
  unsigned int v49; // r4@79
  char *v50; // r7@85
  int v51; // r5@87
  DirectoryPackSource **v52; // r5@89
  int v53; // r5@92
  DirectoryPackSource *v54; // r5@92
  char *v55; // r0@92
  _BYTE *v56; // r6@94
  unsigned int v57; // r2@94
  unsigned int v58; // r1@96
  unsigned int v59; // r4@96
  char *v60; // r7@102
  int v61; // r5@104
  DirectoryPackSource **v62; // r5@106
  void *v63; // r0@109
  InPackagePackSource *v64; // r5@110
  char *v65; // r0@110
  _BYTE *v66; // r6@112
  unsigned int v67; // r2@112
  unsigned int v68; // r1@114
  unsigned int v69; // r4@114
  char *v70; // r7@120
  int v71; // r5@122
  DirectoryPackSource **v72; // r5@124
  int v73; // r5@127
  DirectoryPackSource *v74; // r5@127
  char *v75; // r0@127
  _BYTE *v76; // r6@129
  unsigned int v77; // r2@129
  unsigned int v78; // r1@131
  unsigned int v79; // r4@131
  char *v80; // r7@137
  int v81; // r5@139
  DirectoryPackSource **v82; // r5@141
  void *v83; // r0@144
  int v84; // r5@145
  void *v85; // r0@146
  int v86; // r0@148
  int v87; // r1@148
  DirectoryPackSource *v88; // r5@148
  char *v89; // r0@148
  _BYTE *v90; // r6@150
  unsigned int v91; // r2@150
  unsigned int v92; // r1@152
  unsigned int v93; // r4@152
  char *v94; // r7@158
  int v95; // r5@160
  DirectoryPackSource **v96; // r5@162
  void *v97; // r0@165
  int v98; // r5@166
  DirectoryPackSource *v99; // r5@166
  char *v100; // r0@166
  _BYTE *v101; // r6@168
  unsigned int v102; // r2@168
  unsigned int v103; // r1@170
  unsigned int v104; // r4@170
  char *v105; // r7@176
  int v106; // r5@178
  DirectoryPackSource **v107; // r5@180
  void *v108; // r0@183
  int v109; // r5@184
  void *v110; // r0@185
  int v111; // r0@187
  int v112; // r1@187
  DirectoryPackSource *v113; // r5@187
  char *v114; // r0@187
  _BYTE *v115; // r6@189
  unsigned int v116; // r2@189
  unsigned int v117; // r1@191
  unsigned int v118; // r4@191
  char *v119; // r7@197
  int v120; // r5@199
  DirectoryPackSource **v121; // r5@201
  void *v122; // r0@204
  int v123; // r5@205
  DirectoryPackSource *v124; // r5@205
  char *v125; // r0@205
  _BYTE *v126; // r6@207
  unsigned int v127; // r2@207
  unsigned int v128; // r1@209
  unsigned int v129; // r4@209
  char *v130; // r7@215
  int v131; // r5@217
  DirectoryPackSource **v132; // r5@219
  void *v133; // r0@222
  void *v134; // r5@223
  int v135; // r0@223
  RakNet *result; // r0@227
  unsigned int *v137; // r2@229
  signed int v138; // r1@231
  unsigned int *v139; // r2@233
  signed int v140; // r1@235
  unsigned int *v141; // r2@237
  signed int v142; // r1@239
  unsigned int *v143; // r2@241
  signed int v144; // r1@243
  unsigned int *v145; // r2@245
  signed int v146; // r1@247
  unsigned int *v147; // r2@249
  signed int v148; // r1@251
  unsigned int *v149; // r2@253
  signed int v150; // r1@255
  unsigned int *v151; // r2@257
  signed int v152; // r1@259
  int v153; // [sp+8h] [bp-878h]@205
  int v154; // [sp+Ch] [bp-874h]@187
  int v155; // [sp+10h] [bp-870h]@166
  int v156; // [sp+14h] [bp-86Ch]@148
  int v157; // [sp+18h] [bp-868h]@127
  int v158; // [sp+1Ch] [bp-864h]@92
  int v159; // [sp+20h] [bp-860h]@19
  int v160; // [sp+24h] [bp-85Ch]@1
  void *ptr; // [sp+28h] [bp-858h]@1
  DirectoryPackSource **v162; // [sp+2Ch] [bp-854h]@1
  char *v163; // [sp+30h] [bp-850h]@1
  int v164; // [sp+38h] [bp-848h]@148
  int v165; // [sp+3Ch] [bp-844h]@148
  const char *v166; // [sp+40h] [bp-840h]@148
  int v167; // [sp+44h] [bp-83Ch]@148
  char v168; // [sp+50h] [bp-830h]@148
  int v169; // [sp+54h] [bp-82Ch]@148
  int v170; // [sp+454h] [bp-42Ch]@148
  char v171; // [sp+458h] [bp-428h]@187
  int v172; // [sp+45Ch] [bp-424h]@187
  int v173; // [sp+85Ch] [bp-24h]@187
  RakNet *v174; // [sp+860h] [bp-20h]@1

  v1 = this;
  v174 = _stack_chk_guard;
  ptr = 0;
  v162 = 0;
  v163 = 0;
  v2 = *((_DWORD *)this + 39);
  ResourcePackRepository::getDevelopmentResourcePacksPath((ResourcePackRepository *)&v160, (int *)this);
  v3 = PackSourceFactory::createDirectoryPackSource(v2, &v160, 1, 2, 1);
  v4 = (char *)v162;
  if ( (char *)v162 == v163 )
  {
    v5 = ptr;
    v6 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v6 )
      v6 = 1;
    v7 = v6 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v8 = v6 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v7 >> 30 )
      v8 = 0x3FFFFFFF;
    if ( v7 < v6 )
    if ( v8 )
    {
      if ( v8 >= 0x40000000 )
        sub_21E57F4();
      v9 = (char *)operator new(4 * v8);
      v4 = (char *)v162;
      v5 = ptr;
    }
    else
      v9 = 0;
    *(_DWORD *)&v9[v4 - v5] = v3;
    v10 = (int)&v9[v4 - v5];
    if ( 0 != (v4 - v5) >> 2 )
      _aeabi_memmove4(v9, v5);
    v11 = (DirectoryPackSource **)(v10 + 4);
    if ( v5 )
      operator delete(v5);
    ptr = v9;
    v162 = v11;
    v163 = &v9[4 * v8];
  }
  else
    *v162 = v3;
    ++v162;
  v12 = (void *)(v160 - 12);
  if ( (int *)(v160 - 12) != &dword_28898C0 )
    v137 = (unsigned int *)(v160 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v138 = __ldrex(v137);
      while ( __strex(v138 - 1, v137) );
      v138 = (*v137)--;
    if ( v138 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getDevelopmentBehaviorPacksPath((ResourcePackRepository *)&v159, (int *)v1);
  v14 = PackSourceFactory::createDirectoryPackSource(v13, &v159, 2, 2, 1);
  v15 = (char *)v162;
    v16 = ptr;
    v17 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v17 )
      v17 = 1;
    v18 = v17 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v19 = v17 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v18 >> 30 )
      v19 = 0x3FFFFFFF;
    if ( v18 < v17 )
    if ( v19 )
      if ( v19 >= 0x40000000 )
      v20 = (char *)operator new(4 * v19);
      v15 = (char *)v162;
      v16 = ptr;
      v20 = 0;
    *(_DWORD *)&v20[v15 - v16] = v14;
    v21 = (int)&v20[v15 - v16];
    if ( 0 != (v15 - v16) >> 2 )
      _aeabi_memmove4(v20, v16);
    v22 = (DirectoryPackSource **)(v21 + 4);
    if ( v16 )
      operator delete(v16);
    ptr = v20;
    v162 = v22;
    v163 = &v20[4 * v19];
    *v162 = v14;
  v23 = (void *)(v159 - 12);
  if ( (int *)(v159 - 12) != &dword_28898C0 )
    v139 = (unsigned int *)(v159 - 4);
        v140 = __ldrex(v139);
      while ( __strex(v140 - 1, v139) );
      v140 = (*v139)--;
    if ( v140 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (DirectoryPackSource *)operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v24);
  v25 = *((_DWORD *)v1 + 6);
  *((_DWORD *)v1 + 6) = v24;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
    v24 = (DirectoryPackSource *)*((_DWORD *)v1 + 6);
  v26 = (char *)v162;
    v27 = ptr;
    v28 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v28 )
      v28 = 1;
    v29 = v28 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v30 = v28 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v29 >> 30 )
      v30 = 0x3FFFFFFF;
    if ( v29 < v28 )
    if ( v30 )
      if ( v30 >= 0x40000000 )
      v31 = (char *)operator new(4 * v30);
      v26 = (char *)v162;
      v27 = ptr;
      v31 = 0;
    *(_DWORD *)&v31[v26 - v27] = v24;
    v32 = (int)&v31[v26 - v27];
    if ( 0 != (v26 - v27) >> 2 )
      _aeabi_memmove4(v31, v27);
    v33 = (DirectoryPackSource **)(v32 + 4);
    if ( v27 )
      operator delete(v27);
    ptr = v31;
    v162 = v33;
    v163 = &v31[4 * v30];
    *v162 = v24;
  v34 = (DirectoryPackSource *)operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v34);
  v35 = *((_DWORD *)v1 + 5);
  *((_DWORD *)v1 + 5) = v34;
  if ( v35 )
    (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v34 = (DirectoryPackSource *)*((_DWORD *)v1 + 5);
  v36 = (char *)v162;
    v37 = ptr;
    v38 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v38 )
      v38 = 1;
    v39 = v38 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v40 = v38 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v39 >> 30 )
      v40 = 0x3FFFFFFF;
    if ( v39 < v38 )
    if ( v40 )
      if ( v40 >= 0x40000000 )
      v41 = (char *)operator new(4 * v40);
      v36 = (char *)v162;
      v37 = ptr;
      v41 = 0;
    *(_DWORD *)&v41[v36 - v37] = v34;
    v42 = (int)&v41[v36 - v37];
    if ( 0 != (v36 - v37) >> 2 )
      _aeabi_memmove4(v41, v37);
    v43 = (DirectoryPackSource **)(v42 + 4);
    if ( v37 )
      operator delete(v37);
    ptr = v41;
    v162 = v43;
    v163 = &v41[4 * v40];
    *v162 = v34;
  v44 = PackSourceFactory::createInPackagePackSource(*((_DWORD *)v1 + 39), 1);
  v45 = (char *)v162;
    v46 = ptr;
    v47 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v47 )
      v47 = 1;
    v48 = v47 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v49 = v47 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v48 >> 30 )
      v49 = 0x3FFFFFFF;
    if ( v48 < v47 )
    if ( v49 )
      if ( v49 >= 0x40000000 )
      v50 = (char *)operator new(4 * v49);
      v45 = (char *)v162;
      v46 = ptr;
      v50 = 0;
    *(_DWORD *)&v50[v45 - v46] = v44;
    v51 = (int)&v50[v45 - v46];
    if ( 0 != (v45 - v46) >> 2 )
      _aeabi_memmove4(v50, v46);
    v52 = (DirectoryPackSource **)(v51 + 4);
    if ( v46 )
      operator delete(v46);
    ptr = v50;
    v162 = v52;
    v163 = &v50[4 * v49];
    *v162 = v44;
  v53 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getResourcePacksPath((ResourcePackRepository *)&v158, (int *)v1);
  v54 = PackSourceFactory::createDirectoryPackSource(v53, &v158, 1, 4, 0);
  v55 = (char *)v162;
    v56 = ptr;
    v57 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v57 )
      v57 = 1;
    v58 = v57 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v59 = v57 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v58 >> 30 )
      v59 = 0x3FFFFFFF;
    if ( v58 < v57 )
    if ( v59 )
      if ( v59 >= 0x40000000 )
      v60 = (char *)operator new(4 * v59);
      v55 = (char *)v162;
      v56 = ptr;
      v60 = 0;
    *(_DWORD *)&v60[v55 - v56] = v54;
    v61 = (int)&v60[v55 - v56];
    if ( 0 != (v55 - v56) >> 2 )
      _aeabi_memmove4(v60, v56);
    v62 = (DirectoryPackSource **)(v61 + 4);
    if ( v56 )
      operator delete(v56);
    ptr = v60;
    v162 = v62;
    v163 = &v60[4 * v59];
    *v162 = v54;
  v63 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v141 = (unsigned int *)(v158 - 4);
        v142 = __ldrex(v141);
      while ( __strex(v142 - 1, v141) );
      v142 = (*v141)--;
    if ( v142 <= 0 )
      j_j_j_j__ZdlPv_9(v63);
  v64 = PackSourceFactory::createInPackagePackSource(*((_DWORD *)v1 + 39), 2);
  v65 = (char *)v162;
    v66 = ptr;
    v67 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v67 )
      v67 = 1;
    v68 = v67 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v69 = v67 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v68 >> 30 )
      v69 = 0x3FFFFFFF;
    if ( v68 < v67 )
    if ( v69 )
      if ( v69 >= 0x40000000 )
      v70 = (char *)operator new(4 * v69);
      v65 = (char *)v162;
      v66 = ptr;
      v70 = 0;
    *(_DWORD *)&v70[v65 - v66] = v64;
    v71 = (int)&v70[v65 - v66];
    if ( 0 != (v65 - v66) >> 2 )
      _aeabi_memmove4(v70, v66);
    v72 = (DirectoryPackSource **)(v71 + 4);
    if ( v66 )
      operator delete(v66);
    ptr = v70;
    v162 = v72;
    v163 = &v70[4 * v69];
    *v162 = v64;
  v73 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getBehaviorPacksPath((ResourcePackRepository *)&v157, (int *)v1);
  v74 = PackSourceFactory::createDirectoryPackSource(v73, &v157, 2, 4, 0);
  v75 = (char *)v162;
    v76 = ptr;
    v77 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v77 )
      v77 = 1;
    v78 = v77 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v79 = v77 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v78 >> 30 )
      v79 = 0x3FFFFFFF;
    if ( v78 < v77 )
    if ( v79 )
      if ( v79 >= 0x40000000 )
      v80 = (char *)operator new(4 * v79);
      v75 = (char *)v162;
      v76 = ptr;
      v80 = 0;
    *(_DWORD *)&v80[v75 - v76] = v74;
    v81 = (int)&v80[v75 - v76];
    if ( 0 != (v75 - v76) >> 2 )
      _aeabi_memmove4(v80, v76);
    v82 = (DirectoryPackSource **)(v81 + 4);
    if ( v76 )
      operator delete(v76);
    ptr = v80;
    v162 = v82;
    v163 = &v80[4 * v79];
    *v162 = v74;
  v83 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v143 = (unsigned int *)(v157 - 4);
        v144 = __ldrex(v143);
      while ( __strex(v144 - 1, v143) );
      v144 = (*v143)--;
    if ( v144 <= 0 )
      j_j_j_j__ZdlPv_9(v83);
  v84 = *((_DWORD *)v1 + 39);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v85 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v85 = &ServiceLocator<AppPlatform>::mDefaultService;
  v86 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v85 + 272))();
  v87 = *(_DWORD *)(v86 - 12);
  v164 = v86;
  v165 = v87;
  v166 = "premium_cache";
  v167 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v168, (int)&v164, 2);
  sub_21E91E0((void **)&v156, (unsigned int)&v169, v170);
  v88 = PackSourceFactory::createDirectoryPackSource(v84, &v156, 1, 6, 0);
  v89 = (char *)v162;
    v90 = ptr;
    v91 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v91 )
      v91 = 1;
    v92 = v91 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v93 = v91 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v92 >> 30 )
      v93 = 0x3FFFFFFF;
    if ( v92 < v91 )
    if ( v93 )
      if ( v93 >= 0x40000000 )
      v94 = (char *)operator new(4 * v93);
      v89 = (char *)v162;
      v90 = ptr;
      v94 = 0;
    *(_DWORD *)&v94[v89 - v90] = v88;
    v95 = (int)&v94[v89 - v90];
    if ( 0 != (v89 - v90) >> 2 )
      _aeabi_memmove4(v94, v90);
    v96 = (DirectoryPackSource **)(v95 + 4);
    if ( v90 )
      operator delete(v90);
    ptr = v94;
    v162 = v96;
    v163 = &v94[4 * v93];
    *v162 = v88;
  v97 = (void *)(v156 - 12);
  if ( (int *)(v156 - 12) != &dword_28898C0 )
    v145 = (unsigned int *)(v156 - 4);
        v146 = __ldrex(v145);
      while ( __strex(v146 - 1, v145) );
      v146 = (*v145)--;
    if ( v146 <= 0 )
      j_j_j_j__ZdlPv_9(v97);
  v98 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getPremiumResourcePackPath((ResourcePackRepository *)&v155);
  v99 = PackSourceFactory::createDirectoryPackSource(v98, &v155, 1, 6, 0);
  v100 = (char *)v162;
    v101 = ptr;
    v102 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v102 )
      v102 = 1;
    v103 = v102 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v104 = v102 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v103 >> 30 )
      v104 = 0x3FFFFFFF;
    if ( v103 < v102 )
    if ( v104 )
      if ( v104 >= 0x40000000 )
      v105 = (char *)operator new(4 * v104);
      v100 = (char *)v162;
      v101 = ptr;
      v105 = 0;
    *(_DWORD *)&v105[v100 - v101] = v99;
    v106 = (int)&v105[v100 - v101];
    if ( 0 != (v100 - v101) >> 2 )
      _aeabi_memmove4(v105, v101);
    v107 = (DirectoryPackSource **)(v106 + 4);
    if ( v101 )
      operator delete(v101);
    ptr = v105;
    v162 = v107;
    v163 = &v105[4 * v104];
    *v162 = v99;
  v108 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v147 = (unsigned int *)(v155 - 4);
        v148 = __ldrex(v147);
      while ( __strex(v148 - 1, v147) );
      v148 = (*v147)--;
    if ( v148 <= 0 )
      j_j_j_j__ZdlPv_9(v108);
  v109 = *((_DWORD *)v1 + 39);
    v110 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    v110 = &ServiceLocator<AppPlatform>::mDefaultService;
  v111 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v110 + 272))();
  v112 = *(_DWORD *)(v111 - 12);
  v164 = v111;
  v165 = v112;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v171, (int)&v164, 2);
  sub_21E91E0((void **)&v154, (unsigned int)&v172, v173);
  v113 = PackSourceFactory::createDirectoryPackSource(v109, &v154, 2, 6, 0);
  v114 = (char *)v162;
    v115 = ptr;
    v116 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v116 )
      v116 = 1;
    v117 = v116 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v118 = v116 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v117 >> 30 )
      v118 = 0x3FFFFFFF;
    if ( v117 < v116 )
    if ( v118 )
      if ( v118 >= 0x40000000 )
      v119 = (char *)operator new(4 * v118);
      v114 = (char *)v162;
      v115 = ptr;
      v119 = 0;
    *(_DWORD *)&v119[v114 - v115] = v113;
    v120 = (int)&v119[v114 - v115];
    if ( 0 != (v114 - v115) >> 2 )
      _aeabi_memmove4(v119, v115);
    v121 = (DirectoryPackSource **)(v120 + 4);
    if ( v115 )
      operator delete(v115);
    ptr = v119;
    v162 = v121;
    v163 = &v119[4 * v118];
    *v162 = v113;
  v122 = (void *)(v154 - 12);
  if ( (int *)(v154 - 12) != &dword_28898C0 )
    v149 = (unsigned int *)(v154 - 4);
        v150 = __ldrex(v149);
      while ( __strex(v150 - 1, v149) );
      v150 = (*v149)--;
    if ( v150 <= 0 )
      j_j_j_j__ZdlPv_9(v122);
  v123 = *((_DWORD *)v1 + 39);
  ResourcePackRepository::getPremiumBehaviorPackPath((ResourcePackRepository *)&v153);
  v124 = PackSourceFactory::createDirectoryPackSource(v123, &v153, 2, 6, 0);
  v125 = (char *)v162;
    v126 = ptr;
    v127 = ((char *)v162 - (_BYTE *)ptr) >> 2;
    if ( !v127 )
      v127 = 1;
    v128 = v127 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    v129 = v127 + (((char *)v162 - (_BYTE *)ptr) >> 2);
    if ( 0 != v128 >> 30 )
      v129 = 0x3FFFFFFF;
    if ( v128 < v127 )
    if ( v129 )
      if ( v129 >= 0x40000000 )
      v130 = (char *)operator new(4 * v129);
      v125 = (char *)v162;
      v126 = ptr;
      v130 = 0;
    *(_DWORD *)&v130[v125 - v126] = v124;
    v131 = (int)&v130[v125 - v126];
    if ( 0 != (v125 - v126) >> 2 )
      _aeabi_memmove4(v130, v126);
    v132 = (DirectoryPackSource **)(v131 + 4);
    if ( v126 )
      operator delete(v126);
    ptr = v130;
    v162 = v132;
    v163 = &v130[4 * v129];
    *v162 = v124;
  v133 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v151 = (unsigned int *)(v153 - 4);
        v152 = __ldrex(v151);
      while ( __strex(v152 - 1, v151) );
      v152 = (*v151)--;
    if ( v152 <= 0 )
      j_j_j_j__ZdlPv_9(v133);
  v134 = operator new(0x10u);
  CompositePackSource::CompositePackSource((int)v134, (int)&ptr);
  v135 = *((_DWORD *)v1 + 4);
  *((_DWORD *)v1 + 4) = v134;
  if ( v135 )
    (*(void (**)(void))(*(_DWORD *)v135 + 4))();
  if ( ptr )
    operator delete(ptr);
  result = (RakNet *)(_stack_chk_guard - v174);
  if ( _stack_chk_guard != v174 )
    _stack_chk_fail(result);
  return result;
}


char *__fastcall ResourcePackRepository::registerContentManager(ResourcePackRepository *this, ContentManager *a2)
{
  ResourcePackRepository *v2; // r4@1
  ContentManager *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 164);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 40);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 20) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 20);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 20) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 42) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 41) + 4);
    *((_DWORD *)v2 + 41) = result;
  return result;
}


ResourcePack *__fastcall ResourcePackRepository::getResourcePackInPath(int a1, int *a2)
{
  int v2; // r4@1
  ResourcePack **v3; // r5@1
  ResourcePack **v4; // r9@1
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  int v7; // r0@13
  int v8; // r7@13
  void *v9; // r0@13
  ResourcePack *result; // r0@4
  int v11; // [sp+8h] [bp-850h]@5
  int v12; // [sp+Ch] [bp-84Ch]@13
  int v13; // [sp+10h] [bp-848h]@13
  int v14; // [sp+14h] [bp-844h]@1
  int v15; // [sp+18h] [bp-840h]@1
  char v16; // [sp+20h] [bp-838h]@13
  int v17; // [sp+24h] [bp-834h]@13
  char v18; // [sp+428h] [bp-430h]@1
  int v19; // [sp+42Ch] [bp-42Ch]@13
  RakNet *v20; // [sp+830h] [bp-28h]@1

  v2 = a1;
  v20 = _stack_chk_guard;
  v14 = *a2;
  v15 = *(_DWORD *)(v14 - 12);
  File::cleanPath((int)&v18, (__int64 *)&v14);
  v4 = (ResourcePack **)(*(_QWORD *)(v2 + 4) >> 32);
  v3 = (ResourcePack **)*(_QWORD *)(v2 + 4);
  if ( v3 == v4 )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v7 = ResourcePack::getResourceLocation(*v3);
      ResourceLocation::getFullPath((ResourceLocation *)&v11, v7);
      v12 = v11;
      v13 = *(_DWORD *)(v11 - 12);
      File::cleanPath((int)&v16, (__int64 *)&v12);
      v8 = strcmp((const char *)&v17, (const char *)&v19);
      v9 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      if ( !v8 )
        break;
      ++v3;
      if ( v3 == v4 )
        result = 0;
        goto LABEL_17;
    }
    result = *v3;
LABEL_17:
  if ( _stack_chk_guard != v20 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ResourcePackRepository::addKnownPackFromImport(ResourcePackRepository *this, const PackManifest *a2)
{
  ResourcePackRepository::addKnownPackFromImport(this, a2);
}


char *__fastcall ResourcePackRepository::KnownPackContainer::addPack(int a1, const ResourcePackRepository::KnownPackInfo *a2)
{
  int v2; // r4@1
  __int64 v3; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
    result = j_j_j__ZNSt6vectorIN22ResourcePackRepository13KnownPackInfoESaIS1_EE19_M_emplace_back_auxIJRS1_EEEvDpOT_(
               (unsigned __int64 *)a1,
               a2);
  }
  else
    ResourcePackRepository::KnownPackInfo::KnownPackInfo((ResourcePackRepository::KnownPackInfo *)v3, a2);
    result = (char *)(*(_DWORD *)(v2 + 4) + 72);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


RakNet *__fastcall ResourcePackRepository::_loadLastKnownUserPacks(int a1, int a2, int a3)
{
  int v3; // r4@1
  char *v4; // r6@1
  int v5; // r10@1
  int v6; // r9@1
  int v7; // r7@7
  int v8; // r5@7
  unsigned __int64 v9; // r2@7
  Json::ValueIteratorBase *v10; // r7@10
  Json::Value *v11; // r9@11
  int v12; // r7@12
  _BYTE *v13; // r0@12
  void *v14; // r0@13
  int v15; // r7@15
  void *v16; // r0@15
  void *v17; // r0@16
  Json::Value *v18; // r0@17
  int v19; // r0@17
  void *v20; // r0@17
  int v21; // r0@18
  void *v22; // r0@18
  Json::Value *v23; // r7@19
  Json::Value *v24; // r7@21
  int v25; // r0@22
  char *v26; // r1@23
  char *v27; // r0@25
  void *v28; // r0@26
  unsigned int *v29; // r2@28
  signed int v30; // r1@30
  unsigned int *v31; // r2@32
  signed int v32; // r1@34
  __int64 v33; // r0@45
  unsigned int *v34; // r2@50
  signed int v35; // r1@52
  unsigned int *v36; // r2@54
  signed int v37; // r1@56
  unsigned int *v38; // r2@66
  signed int v39; // r1@68
  unsigned int *v40; // r2@70
  signed int v41; // r1@72
  unsigned int *v42; // r2@74
  signed int v43; // r1@76
  unsigned int *v44; // r2@78
  signed int v45; // r1@80
  Json::Value *v46; // r0@99
  int v47; // r0@100
  Json::Value *v48; // r0@100
  void *v49; // r0@104
  RakNet *result; // r0@105
  unsigned int *v51; // r2@107
  signed int v52; // r1@109
  int v53; // [sp+18h] [bp-1258h]@10
  char v54; // [sp+38h] [bp-1238h]@1
  int v55; // [sp+40h] [bp-1230h]@22
  char *v56; // [sp+44h] [bp-122Ch]@22
  char v57; // [sp+48h] [bp-1228h]@20
  char v58; // [sp+50h] [bp-1220h]@20
  int v59; // [sp+58h] [bp-1218h]@18
  int v60; // [sp+5Ch] [bp-1214h]@17
  char v61; // [sp+60h] [bp-1210h]@17
  int v62; // [sp+64h] [bp-120Ch]@17
  int v63; // [sp+68h] [bp-1208h]@17
  int v64; // [sp+6Ch] [bp-1204h]@17
  int v65; // [sp+74h] [bp-11FCh]@15
  int v66; // [sp+78h] [bp-11F8h]@15
  int v67; // [sp+80h] [bp-11F0h]@12
  _BYTE *v68; // [sp+84h] [bp-11ECh]@12
  char v69; // [sp+88h] [bp-11E8h]@12
  void *v70; // [sp+8Ch] [bp-11E4h]@12
  int v71; // [sp+90h] [bp-11E0h]@12
  int v72; // [sp+94h] [bp-11DCh]@12
  char **v73; // [sp+98h] [bp-11D8h]@12
  char **v74; // [sp+9Ch] [bp-11D4h]@12
  int v75; // [sp+A0h] [bp-11D0h]@12
  int v76; // [sp+A4h] [bp-11CCh]@17
  int v77; // [sp+A8h] [bp-11C8h]@17
  int v78; // [sp+ACh] [bp-11C4h]@17
  int v79; // [sp+B0h] [bp-11C0h]@18
  char v80; // [sp+D0h] [bp-11A0h]@10
  char v81; // [sp+D8h] [bp-1198h]@10
  char v82; // [sp+E0h] [bp-1190h]@8
  char v83; // [sp+150h] [bp-1120h]@8
  int v84; // [sp+164h] [bp-110Ch]@6
  int v85; // [sp+168h] [bp-1108h]@6
  int v86; // [sp+16Ch] [bp-1104h]@3
  int v87[3]; // [sp+170h] [bp-1100h]@7
  void **v88; // [sp+180h] [bp-10F0h]@7
  int v89; // [sp+184h] [bp-10ECh]@103
  void **v90; // [sp+188h] [bp-10E8h]@7
  int v91; // [sp+18Ch] [bp-10E4h]@103
  void **v92; // [sp+11BCh] [bp-B4h]@7
  int v93; // [sp+11D0h] [bp-A0h]@7
  int v94; // [sp+122Ch] [bp-44h]@7
  __int16 v95; // [sp+1230h] [bp-40h]@7
  int v96; // [sp+1234h] [bp-3Ch]@7
  int v97; // [sp+1238h] [bp-38h]@7
  int v98; // [sp+123Ch] [bp-34h]@7
  int v99; // [sp+1240h] [bp-30h]@7

  v3 = a1;
  v4 = &v54;
  v5 = a3;
  v6 = a2;
  *(_DWORD *)&v54 = _stack_chk_guard;
  if ( a3 == 1 )
  {
    ResourcePackRepository::getKnownInvalidPacksPath((ResourcePackRepository *)&v86);
  }
  else if ( a3 )
    sub_21E8AF4(&v86, (int *)&Util::EMPTY_STRING);
  else
    ResourcePackRepository::getKnownValidPacksPath((ResourcePackRepository *)&v86);
  v84 = v86;
  v85 = *(_DWORD *)(v86 - 12);
  if ( Core::FileSystem::fileExists((__int64 *)&v84) )
    v7 = v86;
    v8 = *(_DWORD *)(v86 - 12);
    sub_21B6308((int)&v92);
    v92 = &off_26D3AF0;
    v94 = 0;
    v95 = 0;
    v99 = 0;
    v98 = 0;
    v97 = 0;
    v96 = 0;
    v87[0] = v7;
    v87[1] = v8;
    Core::FileStream::FileStream((int)&v88, (int)off_26D7EA4, (__int64 *)v87, 8);
    v88 = &off_26D7E64;
    v92 = &off_26D7E8C;
    v90 = &off_26D7E78;
    if ( !v93 )
    {
      Json::Value::Value(&v83, 0);
      Json::Reader::Reader((Json::Reader *)&v82);
      if ( Json::Reader::parse((int)&v82, (char *)&v88, (int)&v83, 1) && Json::Value::isArray((Json::Value *)&v83) == 1 )
      {
        Json::Value::begin((Json::Value *)&v81, (int)&v83);
        Json::Value::end((Json::Value *)&v80, (int)&v83);
        v10 = (Json::ValueIteratorBase *)&v81;
        v53 = v6;
        while ( Json::ValueIteratorBase::isEqual(v10, (const Json::ValueIteratorBase *)&v80) != 1 )
        {
          v11 = (Json::Value *)Json::ValueIteratorBase::deref(v10);
          if ( Json::Value::isObject(v11) == 1 )
          {
            v69 = 0;
            v70 = &unk_28898CC;
            v71 = 0;
            v72 = 0;
            v73 = 0;
            v74 = 0;
            PackIdVersion::PackIdVersion((PackIdVersion *)&v75);
            v12 = Json::Value::operator[](v11, "file_system");
            sub_21E94B4((void **)&v67, (const char *)&unk_257BC67);
            Json::Value::asString((int *)&v68, v12, &v67);
            v71 = ResourceUtil::pathFromString(*((_DWORD *)v68 - 3), v68);
            v13 = v68 - 12;
            if ( (int *)(v68 - 12) != &dword_28898C0 )
            {
              v34 = (unsigned int *)(v68 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v35 = __ldrex(v34);
                while ( __strex(v35 - 1, v34) );
              }
              else
                v35 = (*v34)--;
              if ( v35 <= 0 )
                j_j_j_j__ZdlPv_9(v13);
            }
            v14 = (void *)(v67 - 12);
            if ( (int *)(v67 - 12) != &dword_28898C0 )
              v36 = (unsigned int *)(v67 - 4);
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j__ZdlPv_9(v14);
            if ( v71 != 11 )
              v15 = Json::Value::operator[](v11, "path");
              sub_21E94B4((void **)&v65, (const char *)&unk_257BC67);
              Json::Value::asString(&v66, v15, &v65);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)((unsigned int)&v69 | 4),
                &v66);
              v16 = (void *)(v66 - 12);
              if ( (int *)(v66 - 12) != &dword_28898C0 )
                v38 = (unsigned int *)(v66 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v39 = __ldrex(v38);
                  while ( __strex(v39 - 1, v38) );
                }
                else
                  v39 = (*v38)--;
                if ( v39 <= 0 )
                  j_j_j_j__ZdlPv_9(v16);
              v17 = (void *)(v65 - 12);
              if ( (int *)(v65 - 12) != &dword_28898C0 )
                v40 = (unsigned int *)(v65 - 4);
                    v41 = __ldrex(v40);
                  while ( __strex(v41 - 1, v40) );
                  v41 = (*v40)--;
                if ( v41 <= 0 )
                  j_j_j_j__ZdlPv_9(v17);
              v18 = (Json::Value *)Json::Value::operator[](v11, "from_disk");
              v69 = Json::Value::asBool(v18, 0);
              v19 = Json::Value::operator[](v11, "uuid");
              Json::Value::asString(&v60, v19, (int *)&Util::EMPTY_STRING);
              mce::UUID::fromString((int)&v61, &v60);
              v75 = *(_DWORD *)&v61;
              v76 = v62;
              v77 = v63;
              v78 = v64;
              v20 = (void *)(v60 - 12);
              if ( (int *)(v60 - 12) != &dword_28898C0 )
                v42 = (unsigned int *)(v60 - 4);
                    v43 = __ldrex(v42);
                  while ( __strex(v43 - 1, v42) );
                  v43 = (*v42)--;
                if ( v43 <= 0 )
                  j_j_j_j__ZdlPv_9(v20);
              v21 = Json::Value::operator[](v11, "version");
              Json::Value::asString(&v59, v21, (int *)&Util::EMPTY_STRING);
              SemVersion::fromString((const void **)&v59, (int)&v79);
              v22 = (void *)(v59 - 12);
              if ( (int *)(v59 - 12) != &dword_28898C0 )
                v44 = (unsigned int *)(v59 - 4);
                    v45 = __ldrex(v44);
                  while ( __strex(v45 - 1, v44) );
                  v45 = (*v44)--;
                if ( v45 <= 0 )
                  j_j_j_j__ZdlPv_9(v22);
              v23 = (Json::Value *)Json::Value::operator[](v11, "hashes");
              if ( !Json::Value::isNull(v23) )
                Json::Value::begin((Json::Value *)&v58, (int)v23);
                Json::Value::end((Json::Value *)&v57, (int)v23);
                while ( Json::ValueIteratorBase::isEqual(
                          (Json::ValueIteratorBase *)&v58,
                          (const Json::ValueIteratorBase *)&v57) != 1 )
                  v24 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v58);
                  if ( Json::Value::isString(v24) == 1 )
                  {
                    sub_21E94B4((void **)&v55, (const char *)&unk_257BC67);
                    Json::Value::asString((int *)&v56, (int)v24, &v55);
                    v25 = (int)v73;
                    if ( v73 == v74 )
                    {
                      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                        (unsigned __int64 *)&v72,
                        &v56);
                      v26 = v56;
                    }
                    else
                      *v73 = v56;
                      v26 = (char *)&unk_28898CC;
                      v56 = (char *)&unk_28898CC;
                      v73 = (char **)(v25 + 4);
                    v27 = v26 - 12;
                    if ( (int *)(v26 - 12) != &dword_28898C0 )
                      v29 = (unsigned int *)(v26 - 4);
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
                        j_j_j_j__ZdlPv_9(v27);
                    v28 = (void *)(v55 - 12);
                    if ( (int *)(v55 - 12) != &dword_28898C0 )
                      v31 = (unsigned int *)(v55 - 4);
                          v32 = __ldrex(v31);
                        while ( __strex(v32 - 1, v31) );
                        v32 = (*v31)--;
                      if ( v32 <= 0 )
                        j_j_j_j__ZdlPv_9(v28);
                  }
                  Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v58);
              v33 = *(_QWORD *)(v53 + 4);
              if ( (_DWORD)v33 == HIDWORD(v33) )
                std::vector<ResourcePackRepository::KnownPackInfo,std::allocator<ResourcePackRepository::KnownPackInfo>>::_M_emplace_back_aux<ResourcePackRepository::KnownPackInfo&>(
                  (unsigned __int64 *)v53,
                  (const ResourcePackRepository::KnownPackInfo *)&v69);
                ResourcePackRepository::KnownPackInfo::KnownPackInfo(
                  (ResourcePackRepository::KnownPackInfo *)v33,
                *(_DWORD *)(v53 + 4) += 72;
            ResourcePackRepository::KnownPackInfo::~KnownPackInfo((ResourcePackRepository::KnownPackInfo *)&v69);
            v10 = (Json::ValueIteratorBase *)&v81;
          }
          Json::ValueIteratorBase::increment(v10);
        }
        v46 = (Json::Value *)Json::Value::operator[]((int)&v83, 0);
        v4 = &v54;
        if ( Json::Value::isObject(v46) == 1 )
          v47 = Json::Value::operator[]((int)&v83, 0);
          v48 = (Json::Value *)Json::Value::operator[](v47, "file_version");
          if ( Json::Value::asInt(v48, 0) < *(_DWORD *)(v3 + 152) )
            ResourcePackRepository::_updatePackLogVersion(v3, v53, v5);
      }
      Json::Reader::~Reader((Json::Reader *)&v82);
      Json::Value::~Value((Json::Value *)&v83);
    }
    v88 = &off_26D7EEC;
    v92 = &off_26D7F14;
    v90 = &off_26D7F00;
    Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v91, (int)&off_26D7F14, v9);
    v88 = &off_26D7F6C;
    v92 = &off_26D7F80;
    v89 = 0;
    sub_21B6560(&v92);
  v49 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v86 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
    else
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  result = (RakNet *)((char *)_stack_chk_guard - *(_DWORD *)v4);
  if ( _stack_chk_guard != *(RakNet **)v4 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::_validateDependencies(int result)
{
  int v1; // r4@1
  __int64 i; // r6@1
  PackDependencyManager *v3; // r5@2
  const PackSource *v4; // r0@2
  const PackManifest *v5; // r2@2

  v1 = result;
  for ( i = *(_QWORD *)(result + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    v3 = *(PackDependencyManager **)(v1 + 16);
    v4 = (const PackSource *)ResourcePack::getManifest(*(ResourcePack **)i);
    result = PackDependencyManager::hasMissingDependencies(v3, v4, v5);
    if ( result == 1 )
      result = ResourcePack::setError(*(ResourcePack **)i);
  }
  return result;
}


void __fastcall ResourcePackRepository::_findVanillaPacks(ResourcePackRepository *this)
{
  ResourcePackRepository::_findVanillaPacks(this);
}


ResourcePackRepository *__fastcall ResourcePackRepository::~ResourcePackRepository(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r10@1
  void *v2; // r0@1
  char *v3; // r0@3
  int v4; // r1@6
  void *v5; // r0@6
  void *v6; // r5@7
  void *v7; // r7@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int *v10; // r0@17
  void *v11; // r5@22
  void *v12; // r7@22
  unsigned int *v13; // r2@24
  signed int v14; // r1@26
  int *v15; // r0@32
  void *v16; // r5@37
  void *v17; // r7@37
  unsigned int *v18; // r2@39
  signed int v19; // r1@41
  int *v20; // r0@47
  void *v21; // r5@52
  void *v22; // r7@52
  unsigned int *v23; // r2@54
  signed int v24; // r1@56
  int *v25; // r0@62
  int v26; // r5@67
  void *v27; // r6@68
  void *v28; // r4@69
  void *v29; // r0@70
  int v30; // r0@74
  int v31; // r0@76
  int v32; // r0@78
  ResourcePack **v33; // r5@80 OVERLAPPED
  ResourcePack **v34; // r6@80 OVERLAPPED
  ResourcePack *v35; // r0@82
  unsigned int *v37; // r2@88
  signed int v38; // r1@90
  char v39; // [sp+14h] [bp-24h]@69

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 40);
  if ( v2 )
    operator delete(v2);
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 124);
  v3 = (char *)*((_DWORD *)v1 + 31);
  if ( v3 && (char *)v1 + 148 != v3 )
    operator delete(v3);
  v4 = *((_DWORD *)v1 + 30);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v37 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v7 = (void *)(*((_QWORD *)v1 + 12) >> 32);
  v6 = (void *)*((_QWORD *)v1 + 12);
  if ( v6 != v7 )
    do
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 8;
    while ( v6 != v7 );
    v6 = (void *)*((_DWORD *)v1 + 24);
  if ( v6 )
    operator delete(v6);
  v12 = (void *)(*(_QWORD *)((char *)v1 + 84) >> 32);
  v11 = (void *)*(_QWORD *)((char *)v1 + 84);
  if ( v11 != v12 )
      v15 = (int *)(*(_DWORD *)v11 - 12);
      if ( v15 != &dword_28898C0 )
        v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      v11 = (char *)v11 + 8;
    while ( v11 != v12 );
    v11 = (void *)*((_DWORD *)v1 + 21);
  if ( v11 )
    operator delete(v11);
  v17 = (void *)(*((_QWORD *)v1 + 9) >> 32);
  v16 = (void *)*((_QWORD *)v1 + 9);
  if ( v16 != v17 )
      v20 = (int *)(*(_DWORD *)v16 - 12);
      if ( v20 != &dword_28898C0 )
        v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v16 = (char *)v16 + 8;
    while ( v16 != v17 );
    v16 = (void *)*((_DWORD *)v1 + 18);
  if ( v16 )
    operator delete(v16);
  v22 = (void *)(*(_QWORD *)((char *)v1 + 60) >> 32);
  v21 = (void *)*(_QWORD *)((char *)v1 + 60);
  if ( v21 != v22 )
      v25 = (int *)(*(_DWORD *)v21 - 12);
      if ( v25 != &dword_28898C0 )
        v23 = (unsigned int *)(*(_DWORD *)v21 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      v21 = (char *)v21 + 8;
    while ( v21 != v22 );
    v21 = (void *)*((_DWORD *)v1 + 15);
  if ( v21 )
    operator delete(v21);
  v26 = *((_DWORD *)v1 + 7);
  if ( v26 )
    v27 = *(void **)(v26 + 8);
    if ( v27 )
        v28 = *(void **)v27;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v39,
          (int)v27 + 8);
        operator delete(v27);
        v27 = v28;
      while ( v28 );
    _aeabi_memclr4(*(_QWORD *)v26, 4 * (*(_QWORD *)v26 >> 32));
    *(_DWORD *)(v26 + 8) = 0;
    *(_DWORD *)(v26 + 12) = 0;
    v29 = *(void **)v26;
    if ( *(_DWORD *)v26 && (void *)(v26 + 24) != v29 )
      operator delete(v29);
    operator delete((void *)v26);
  *((_DWORD *)v1 + 7) = 0;
  v30 = *((_DWORD *)v1 + 6);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  *((_DWORD *)v1 + 6) = 0;
  v31 = *((_DWORD *)v1 + 5);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v32 = *((_DWORD *)v1 + 4);
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  *((_DWORD *)v1 + 4) = 0;
  *(_QWORD *)&v33 = *(_QWORD *)((char *)v1 + 4);
  if ( v33 != v34 )
      if ( *v33 )
        v35 = ResourcePack::~ResourcePack(*v33);
        operator delete((void *)v35);
      *v33 = 0;
      ++v33;
    while ( v34 != v33 );
    v33 = (ResourcePack **)*((_DWORD *)v1 + 1);
  if ( v33 )
    operator delete(v33);
  return v1;
}


signed int __fastcall ResourcePackRepository::removePack(ResourcePackRepository *this, const ResourceLocation *a2)
{
  ResourcePackRepository *v2; // r8@1
  const ResourceLocation *v3; // r5@1
  int v4; // r4@1
  int v5; // r9@1
  void *v6; // r0@1
  int v7; // r0@2
  int v8; // r6@3
  const void **v9; // r0@4
  const void **v10; // r5@4
  _DWORD *v11; // r0@4
  size_t v12; // r2@4
  int v13; // r7@6
  const void **v14; // r0@7
  const void **v15; // r5@7
  _DWORD *v16; // r0@7
  size_t v17; // r2@7
  const void **v18; // r0@10
  const void **v19; // r5@10
  _DWORD *v20; // r0@10
  size_t v21; // r2@10
  const void **v22; // r0@13
  const void **v23; // r5@13
  _DWORD *v24; // r0@13
  size_t v25; // r2@13
  int v26; // r0@18
  const void **v27; // r0@22
  const void **v28; // r5@22
  _DWORD *v29; // r0@22
  size_t v30; // r2@22
  const void **v31; // r0@26
  const void **v32; // r5@26
  _DWORD *v33; // r0@26
  size_t v34; // r2@26
  const void **v35; // r0@30
  const void **v36; // r5@30
  _DWORD *v37; // r0@30
  size_t v38; // r2@30
  char *v39; // r0@33
  void *v40; // r0@34
  void *v41; // r0@35
  void *v42; // r0@36
  int v43; // r0@37
  signed int v44; // r1@39
  int v45; // r4@40
  int v46; // r1@41
  ResourcePack *v47; // r0@41
  ResourcePack *v48; // r0@42
  _DWORD *v49; // r4@45
  ResourcePack *v50; // r0@45
  ResourcePack *v51; // r0@46
  void *v52; // r0@48
  void *v53; // r0@49
  unsigned int *v55; // r2@54
  signed int v56; // r1@56
  unsigned int *v57; // r2@58
  signed int v58; // r1@60
  unsigned int *v59; // r2@62
  signed int v60; // r1@64
  unsigned int *v61; // r2@66
  signed int v62; // r1@68
  unsigned int *v63; // r2@70
  signed int v64; // r1@72
  unsigned int *v65; // r2@74
  signed int v66; // r1@76
  unsigned int *v67; // r2@78
  signed int v68; // r1@80
  int v69; // [sp+4h] [bp-54h]@1
  const void *v70; // [sp+8h] [bp-50h]@1
  int v71; // [sp+Ch] [bp-4Ch]@1
  const void *v72; // [sp+10h] [bp-48h]@1
  int v73; // [sp+14h] [bp-44h]@1
  int v74; // [sp+18h] [bp-40h]@1
  const void *v75; // [sp+1Ch] [bp-3Ch]@1
  int v76; // [sp+20h] [bp-38h]@1
  const void *v77; // [sp+24h] [bp-34h]@1
  int v78; // [sp+28h] [bp-30h]@1
  const void *v79; // [sp+2Ch] [bp-2Ch]@1
  void *s2; // [sp+30h] [bp-28h]@2
  const void *v81; // [sp+34h] [bp-24h]@2

  v2 = this;
  v3 = a2;
  ResourceLocation::getFullPath((ResourceLocation *)&v73, (int)a2);
  sub_21E8AF4(&v71, (int *)v3);
  v72 = (const void *)*((_DWORD *)v3 + 1);
  v5 = *(_QWORD *)((char *)v2 + 4) >> 32;
  v4 = *(_QWORD *)((char *)v2 + 4);
  sub_21E8AF4(&v69, &v71);
  v70 = v72;
  sub_21E8AF4(&v74, &v69);
  v75 = v70;
  sub_21E8AF4(&v78, &v74);
  v79 = v75;
  sub_21E8AF4(&v76, &v78);
  v77 = v79;
  v6 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
  {
    v55 = (unsigned int *)(v78 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E8AF4((int *)&s2, &v76);
  v81 = v77;
  v7 = (v5 - v4) >> 4;
  if ( v7 < 1 )
LABEL_17:
    if ( 1 == (v5 - v4) >> 2 )
      v13 = v4;
      v26 = (v5 - v4) >> 2;
      if ( v26 == 3 )
      {
        v27 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)v4);
        v28 = v27;
        v29 = *v27;
        v30 = *(v29 - 3);
        if ( v30 == *((_DWORD *)s2 - 3) && !memcmp(v29, s2, v30) )
        {
          v13 = v4;
          if ( v28[1] == v81 )
            goto LABEL_33;
        }
        v4 += 4;
      }
      else if ( v26 != 2 )
        goto LABEL_32;
      v31 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)v4);
      v32 = v31;
      v33 = *v31;
      v34 = *(v33 - 3);
      if ( v34 == *((_DWORD *)s2 - 3) && !memcmp(v33, s2, v34) )
        v13 = v4;
        if ( v32[1] == v81 )
          goto LABEL_33;
      v13 = v4 + 4;
    v35 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)v13);
    v36 = v35;
    v37 = *v35;
    v38 = *(v37 - 3);
    if ( v38 == *((_DWORD *)s2 - 3) && !memcmp(v37, s2, v38) )
      if ( v36[1] != v81 )
        v13 = v5;
      goto LABEL_33;
LABEL_32:
    v13 = v5;
    goto LABEL_33;
  v8 = v7 + 1;
  while ( 1 )
    v9 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)v4);
    v10 = v9;
    v11 = *v9;
    v12 = *(v11 - 3);
    if ( v12 == *((_DWORD *)s2 - 3) && !memcmp(v11, s2, v12) )
      if ( v10[1] == v81 )
        break;
    v13 = v4 + 4;
    v14 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)(v4 + 4));
    v15 = v14;
    v16 = *v14;
    v17 = *(v16 - 3);
    if ( v17 == *((_DWORD *)s2 - 3) && !memcmp(v16, s2, v17) && v15[1] == v81 )
      break;
    v13 = v4 + 8;
    v18 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)(v4 + 8));
    v19 = v18;
    v20 = *v18;
    v21 = *(v20 - 3);
    if ( v21 == *((_DWORD *)s2 - 3) && !memcmp(v20, s2, v21) && v19[1] == v81 )
    v13 = v4 + 12;
    v22 = (const void **)ResourcePack::getResourceLocation(*(ResourcePack **)(v4 + 12));
    v23 = v22;
    v24 = *v22;
    v25 = *(v24 - 3);
    if ( v25 == *((_DWORD *)s2 - 3) && !memcmp(v24, s2, v25) && v23[1] == v81 )
    --v8;
    v4 += 16;
    if ( v8 <= 1 )
      goto LABEL_17;
LABEL_33:
  v39 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)((char *)s2 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v76 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v74 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v69 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = *((_DWORD *)v2 + 2);
  if ( v13 != v43 )
    if ( v13 + 4 != v43 )
      v44 = v43 - (v13 + 4);
      if ( v44 >= 1 )
        v45 = (v44 >> 2) + 1;
        do
          v46 = *(_DWORD *)(v13 + 4);
          *(_DWORD *)(v13 + 4) = 0;
          v47 = *(ResourcePack **)v13;
          *(_DWORD *)v13 = v46;
          if ( v47 )
          {
            v48 = ResourcePack::~ResourcePack(v47);
            operator delete((void *)v48);
          }
          --v45;
          v13 += 4;
        while ( v45 > 1 );
        v43 = *((_DWORD *)v2 + 2);
    v49 = (_DWORD *)(v43 - 4);
    *((_DWORD *)v2 + 2) = v43 - 4;
    v50 = *(ResourcePack **)(v43 - 4);
    if ( v50 )
      v51 = ResourcePack::~ResourcePack(v50);
      operator delete((void *)v51);
    *v49 = 0;
  v52 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v71 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v73 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  return 1;
}


RakNet *__fastcall ResourcePackRepository::getPremiumWorldTemplatePath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r1@4
  int v5; // r1@4
  void *v6; // r0@4
  RakNet *result; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-840h]@4
  int v11; // [sp+8h] [bp-838h]@4
  int v12; // [sp+Ch] [bp-834h]@4
  const char *v13; // [sp+10h] [bp-830h]@4
  int v14; // [sp+14h] [bp-82Ch]@4
  char v15; // [sp+18h] [bp-828h]@4
  int v16; // [sp+1Ch] [bp-824h]@5
  int v17; // [sp+41Ch] [bp-424h]@5
  char v18; // [sp+420h] [bp-420h]@4
  int v19; // [sp+424h] [bp-41Ch]@4
  int v20; // [sp+824h] [bp-1Ch]@4
  RakNet *v21; // [sp+828h] [bp-18h]@1

  v1 = (void **)this;
  v21 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 272))();
  v4 = *(_DWORD *)(v3 - 12);
  v11 = v3;
  v12 = v4;
  v13 = "premium_cache";
  v14 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v18, (int)&v11, 2);
  sub_21E91E0((void **)&v10, (unsigned int)&v19, v20);
  v5 = *(_DWORD *)(v10 - 12);
  v11 = v10;
  v12 = v5;
  v13 = "world_templates";
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v15, (int)&v11, 2);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
  sub_21E91E0(v1, (unsigned int)&v16, v17);
  result = (RakNet *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::getInvalidPacks(int a1, int a2)
{
  int result; // r0@2

  switch ( a2 )
  {
    default:
      result = a1 + 60;
      break;
    case 1:
      result = a1 + 84;
    case 2:
      result = a1 + 72;
    case 3:
      result = a1 + 96;
  }
  return result;
}


void __fastcall ResourcePackRepository::addKnownPackFromImport(ResourcePackRepository *this, const PackManifest *a2)
{
  ResourcePackRepository *v2; // r8@1
  PackManifest *v3; // r9@1
  char *v4; // r4@1
  ResourcePackRepository::KnownPackInfo *v5; // r5@1
  ResourcePackRepository::KnownPackInfo *v6; // r11@1
  ResourcePackRepository::KnownPackInfo *v7; // r6@2
  char *v8; // r0@7
  __int64 v9; // kr08_8@8
  ResourcePackRepository::KnownPackInfo *v10; // r7@8
  size_t v11; // r6@8
  const void *v12; // r0@9
  int v13; // r0@10
  bool v14; // zf@10
  char *v15; // r4@14
  char *v16; // r6@14
  int v17; // r1@14
  int v18; // r2@14
  int v19; // r3@14
  int v20; // r1@14
  __int16 v21; // r1@14
  ResourcePackRepository::KnownPackInfo *v22; // r0@19
  char v23; // [sp+0h] [bp-80h]@14
  void *v24; // [sp+4h] [bp-7Ch]@14
  int v25; // [sp+8h] [bp-78h]@14
  int v26; // [sp+Ch] [bp-74h]@14
  int v27; // [sp+10h] [bp-70h]@14
  int v28; // [sp+14h] [bp-6Ch]@14
  int v29; // [sp+18h] [bp-68h]@14
  int v30; // [sp+1Ch] [bp-64h]@14
  int v31; // [sp+20h] [bp-60h]@14
  int v32; // [sp+24h] [bp-5Ch]@14
  int v33; // [sp+28h] [bp-58h]@14
  __int16 v34; // [sp+2Ch] [bp-54h]@14
  int v35; // [sp+30h] [bp-50h]@14
  int v36; // [sp+34h] [bp-4Ch]@14
  int v37; // [sp+38h] [bp-48h]@14
  __int16 v38; // [sp+3Ch] [bp-44h]@14
  char v39; // [sp+3Eh] [bp-42h]@14
  char v40; // [sp+40h] [bp-40h]@14
  __int64 v41; // [sp+4Ch] [bp-34h]@1
  ResourcePackRepository::KnownPackInfo *v42; // [sp+54h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v41 = 0LL;
  v42 = 0;
  ResourcePackRepository::_loadLastKnownUserPacks((int)this, (int)&v41, 0);
  v4 = PackManifest::getIdentity(v3);
  v5 = (ResourcePackRepository::KnownPackInfo *)HIDWORD(v41);
  v6 = (ResourcePackRepository::KnownPackInfo *)v41;
  if ( (_DWORD)v41 == HIDWORD(v41) )
    goto LABEL_7;
  v7 = (ResourcePackRepository::KnownPackInfo *)v41;
  while ( PackIdVersion::operator==((int)v7 + 24, (int)v4) != 1 )
  {
    v7 = (ResourcePackRepository::KnownPackInfo *)((char *)v7 + 72);
    if ( v5 == v7 )
      goto LABEL_7;
  }
  if ( !v7 )
LABEL_7:
    v8 = PackManifest::getLocation(v3);
    if ( v6 == v5 )
    {
LABEL_14:
      v28 = 0;
      v26 = 0;
      v27 = 0;
      v24 = &unk_28898CC;
      v25 = 0;
      PackIdVersion::PackIdVersion((PackIdVersion *)&v29);
      v23 = 0;
      v15 = PackManifest::getLocation(v3);
      EntityInteraction::setInteractText((int *)((unsigned int)&v23 | 4), (int *)v15);
      v25 = *((_DWORD *)v15 + 1);
      v16 = PackManifest::getIdentity(v3);
      v17 = *((_DWORD *)v16 + 1);
      v18 = *((_DWORD *)v16 + 2);
      v19 = *((_DWORD *)v16 + 3);
      v29 = *(_DWORD *)v16;
      v30 = v17;
      v31 = v18;
      v32 = v19;
      v20 = *((_DWORD *)v16 + 4);
      v34 = *((_WORD *)v16 + 10);
      v33 = v20;
      EntityInteraction::setInteractText(&v35, (int *)v16 + 6);
      EntityInteraction::setInteractText(&v36, (int *)v16 + 7);
      EntityInteraction::setInteractText(&v37, (int *)v16 + 8);
      v21 = *((_WORD *)v16 + 18);
      v39 = v16[38];
      v38 = v21;
      v40 = v16[40];
      if ( v5 == v42 )
      {
        std::vector<ResourcePackRepository::KnownPackInfo,std::allocator<ResourcePackRepository::KnownPackInfo>>::_M_emplace_back_aux<ResourcePackRepository::KnownPackInfo&>(
          (unsigned __int64 *)&v41,
          (const ResourcePackRepository::KnownPackInfo *)&v23);
      }
      else
        ResourcePackRepository::KnownPackInfo::KnownPackInfo(v5, (const ResourcePackRepository::KnownPackInfo *)&v23);
        HIDWORD(v41) = (char *)v5 + 72;
      ResourcePackRepository::_saveKnownUserPacks((int)v2, (unsigned __int64 *)&v41, 0);
      ResourcePackRepository::KnownPackInfo::~KnownPackInfo((ResourcePackRepository::KnownPackInfo *)&v23);
      v5 = (ResourcePackRepository::KnownPackInfo *)HIDWORD(v41);
      v6 = (ResourcePackRepository::KnownPackInfo *)v41;
    }
    else
      v9 = *(_QWORD *)v8;
      v10 = v6;
      v11 = *(_DWORD *)(*(_QWORD *)v8 - 12);
      while ( 1 )
        v12 = (const void *)*((_DWORD *)v10 + 1);
        if ( *((_DWORD *)v12 - 3) == v11 )
        {
          v13 = memcmp(v12, (const void *)v9, v11);
          v14 = v13 == 0;
          if ( !v13 )
            v14 = *((_DWORD *)v10 + 2) == HIDWORD(v9);
          if ( v14 )
            break;
        }
        v10 = (ResourcePackRepository::KnownPackInfo *)((char *)v10 + 72);
        if ( v5 == v10 )
          goto LABEL_14;
  if ( v6 != v5 )
    v22 = v6;
    do
      v22 = (ResourcePackRepository::KnownPackInfo *)((char *)ResourcePackRepository::KnownPackInfo::~KnownPackInfo(v22)
                                                    + 72);
    while ( v5 != v22 );
  if ( v6 )
    operator delete((void *)v6);
}


int __fastcall ResourcePackRepository::_getResourcePacksNotIn(int result, unsigned __int64 *a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r7@1
  int *v6; // r5@1 OVERLAPPED
  int *v7; // r6@1 OVERLAPPED
  unsigned __int64 v8; // r10@1
  signed int v9; // r1@2
  bool v10; // zf@4
  int v11; // r1@4
  int v12; // r1@7
  bool v13; // zf@7
  PackManifest *v14; // r0@10
  int v15; // r1@11
  int v16; // r9@11
  int v17; // r2@11
  int v18; // r3@12
  bool v19; // zf@13
  _DWORD *v20; // r2@13
  int v21; // r4@16
  bool v22; // zf@16
  int v23; // r2@21
  __int64 v24; // r0@31
  char *v25; // r4@33
  void *v26; // r11@33
  unsigned int v27; // r2@33
  unsigned int v28; // r1@35
  unsigned int v29; // r10@35
  char *v30; // r9@42
  int v31; // r9@44
  unsigned __int64 v32; // [sp+0h] [bp-30h]@33
  unsigned __int64 *v33; // [sp+8h] [bp-28h]@1

  v5 = result;
  v33 = a2;
  *(_QWORD *)&v6 = *(_QWORD *)(result + 4);
  v8 = __PAIR__(a3, a4);
  while ( v6 != v7 )
  {
    result = *v6;
    v9 = 0;
    if ( *v6 != *(_DWORD *)(v5 + 40) )
      v9 = 1;
    v11 = v9 | a5 ^ 1;
    v10 = v11 == 0;
    if ( v11 )
      v10 = result == *(_DWORD *)(v5 + 44);
    if ( v10 )
      goto LABEL_47;
    v12 = *(_DWORD *)(v5 + 32);
    v13 = result == v12;
    if ( result != v12 )
      v13 = result == *(_DWORD *)(v5 + 36);
    if ( v13 )
    v14 = (PackManifest *)ResourcePack::getManifest((ResourcePack *)result);
    result = PackManifest::getPackType(v14);
    if ( result != (_DWORD)v8 )
    result = *v33 >> 32;
    v15 = *v33;
    v16 = *v6;
    v17 = (result - v15) >> 4;
    if ( v17 >= 1 )
    {
      v18 = v17 + 1;
      do
      {
        v19 = *(_DWORD *)v15 == v16;
        v20 = (_DWORD *)v15;
        if ( *(_DWORD *)v15 != v16 )
        {
          v20 = (_DWORD *)(v15 + 4);
          v19 = *(_DWORD *)(v15 + 4) == v16;
        }
        if ( v19 )
          goto LABEL_30;
        v20 = (_DWORD *)(v15 + 8);
        v21 = *(_DWORD *)(v15 + 8);
        v22 = v21 == v16;
        if ( v21 != v16 )
          v20 = (_DWORD *)(v15 + 12);
          v22 = *(_DWORD *)(v15 + 12) == v16;
        if ( v22 )
        --v18;
        v15 += 16;
      }
      while ( v18 > 1 );
    }
    if ( 1 == (result - v15) >> 2 )
      v20 = (_DWORD *)v15;
    else
      v23 = (result - v15) >> 2;
      if ( v23 == 2 )
      else
        if ( v23 != 3 )
          goto LABEL_31;
        if ( *(_DWORD *)v15 == v16 )
        v20 = (_DWORD *)(v15 + 4);
      if ( *v20 == v16 )
        goto LABEL_30;
      ++v20;
    if ( *v20 != v16 )
      goto LABEL_31;
LABEL_30:
    if ( v20 == (_DWORD *)result )
LABEL_31:
      v24 = *(_QWORD *)(HIDWORD(v8) + 4);
      if ( (_DWORD)v24 == HIDWORD(v24) )
        v32 = v8;
        v25 = 0;
        v26 = (void *)*(_DWORD *)HIDWORD(v8);
        v27 = ((signed int)v24 - (signed int)v26) >> 2;
        if ( !v27 )
          v27 = 1;
        HIDWORD(v24) = v27 + (((signed int)v24 - (signed int)v26) >> 2);
        v29 = v27 + (((signed int)v24 - (signed int)v26) >> 2);
        if ( 0 != HIDWORD(v24) >> 30 )
          v29 = 0x3FFFFFFF;
        if ( v28 < v27 )
        if ( v29 )
          if ( v29 >= 0x40000000 )
            sub_21E57F4();
          v25 = (char *)operator new(4 * v29);
          LODWORD(v24) = *(_QWORD *)HIDWORD(v32) >> 32;
          v26 = (void *)*(_QWORD *)HIDWORD(v32);
        *(_DWORD *)&v25[v24 - (_DWORD)v26] = v16;
        v30 = &v25[v24 - (_DWORD)v26];
        if ( ((signed int)v24 - (signed int)v26) >> 2 )
          _aeabi_memmove4(v25, v26);
        v31 = (int)(v30 + 4);
        if ( v26 )
          operator delete(v26);
        result = (int)&v25[4 * v29];
        *(_DWORD *)HIDWORD(v32) = v25;
        *(_DWORD *)(HIDWORD(v32) + 4) = v31;
        v8 = v32;
        *(_DWORD *)(HIDWORD(v32) + 8) = result;
        *(_DWORD *)v24 = v16;
        result = *(_DWORD *)(HIDWORD(v8) + 4) + 4;
        *(_DWORD *)(HIDWORD(v8) + 4) = result;
LABEL_47:
    ++v6;
  }
  return result;
}


RakNet *__fastcall ResourcePackRepository::getPremiumResourcePackPath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r1@4
  int v5; // r1@4
  void *v6; // r0@4
  RakNet *result; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-840h]@4
  int v11; // [sp+8h] [bp-838h]@4
  int v12; // [sp+Ch] [bp-834h]@4
  const char *v13; // [sp+10h] [bp-830h]@4
  int v14; // [sp+14h] [bp-82Ch]@4
  char v15; // [sp+18h] [bp-828h]@4
  int v16; // [sp+1Ch] [bp-824h]@5
  int v17; // [sp+41Ch] [bp-424h]@5
  char v18; // [sp+420h] [bp-420h]@4
  int v19; // [sp+424h] [bp-41Ch]@4
  int v20; // [sp+824h] [bp-1Ch]@4
  RakNet *v21; // [sp+828h] [bp-18h]@1

  v1 = (void **)this;
  v21 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 272))();
  v4 = *(_DWORD *)(v3 - 12);
  v11 = v3;
  v12 = v4;
  v13 = "premium_cache";
  v14 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v18, (int)&v11, 2);
  sub_21E91E0((void **)&v10, (unsigned int)&v19, v20);
  v5 = *(_DWORD *)(v10 - 12);
  v11 = v10;
  v12 = v5;
  v13 = "resource_packs";
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v15, (int)&v11, 2);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
  sub_21E91E0(v1, (unsigned int)&v16, v17);
  result = (RakNet *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ResourcePackRepository::getPremiumBehaviorPackPath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  void *v2; // r0@2
  int v3; // r0@4
  int v4; // r1@4
  int v5; // r1@4
  void *v6; // r0@4
  RakNet *result; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+0h] [bp-840h]@4
  int v11; // [sp+8h] [bp-838h]@4
  int v12; // [sp+Ch] [bp-834h]@4
  const char *v13; // [sp+10h] [bp-830h]@4
  int v14; // [sp+14h] [bp-82Ch]@4
  char v15; // [sp+18h] [bp-828h]@4
  int v16; // [sp+1Ch] [bp-824h]@5
  int v17; // [sp+41Ch] [bp-424h]@5
  char v18; // [sp+420h] [bp-420h]@4
  int v19; // [sp+424h] [bp-41Ch]@4
  int v20; // [sp+824h] [bp-1Ch]@4
  RakNet *v21; // [sp+828h] [bp-18h]@1

  v1 = (void **)this;
  v21 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v2 + 272))();
  v4 = *(_DWORD *)(v3 - 12);
  v11 = v3;
  v12 = v4;
  v13 = "premium_cache";
  v14 = -1;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v18, (int)&v11, 2);
  sub_21E91E0((void **)&v10, (unsigned int)&v19, v20);
  v5 = *(_DWORD *)(v10 - 12);
  v11 = v10;
  v12 = v5;
  v13 = "behavior_packs";
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v15, (int)&v11, 2);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
  sub_21E91E0(v1, (unsigned int)&v16, v17);
  result = (RakNet *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


RakNet *__fastcall ResourcePackRepository::getResourcePacksPath(ResourcePackRepository *this, int *a2)
{
  void **v2; // r4@1
  int v3; // r3@1
  int v4; // r2@1
  void *v5; // r0@1
  RakNet *result; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // [sp+0h] [bp-438h]@1
  int v10; // [sp+8h] [bp-430h]@1
  int v11; // [sp+Ch] [bp-42Ch]@1
  int v12; // [sp+10h] [bp-428h]@1
  int v13; // [sp+14h] [bp-424h]@1
  char v14; // [sp+1Ch] [bp-41Ch]@1
  int v15; // [sp+20h] [bp-418h]@2
  int v16; // [sp+420h] [bp-18h]@2
  RakNet *v17; // [sp+424h] [bp-14h]@1

  v2 = (void **)this;
  v17 = _stack_chk_guard;
  FilePathManager::getUserDataPath((FilePathManager *)&v9, *a2);
  v3 = *(_DWORD *)(v9 - 12);
  v4 = *(_DWORD *)(ResourcePackRepository::RESOURCE_PACKS_PATH - 12);
  v10 = v9;
  v11 = v3;
  v12 = ResourcePackRepository::RESOURCE_PACKS_PATH;
  v13 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v14, (int)&v10, 2);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
  sub_21E91E0(v2, (unsigned int)&v15, v16);
  result = (RakNet *)(_stack_chk_guard - v17);
  if ( _stack_chk_guard != v17 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall ResourcePackRepository::deletePack(ResourcePackRepository *this, const ResourceLocation *a2)
{
  ResourcePackRepository *v2; // r4@1
  const ResourceLocation *v3; // r5@1
  char v4; // r0@2
  int v5; // r6@2
  char v6; // r0@4
  void *v7; // r0@8
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  int v10; // [sp+0h] [bp-58h]@4
  int v11; // [sp+4h] [bp-54h]@4
  char v12; // [sp+8h] [bp-50h]@4
  void (*v13)(void); // [sp+10h] [bp-48h]@4
  char v14; // [sp+18h] [bp-40h]@4
  int v15; // [sp+1Ch] [bp-3Ch]@2
  int v16; // [sp+20h] [bp-38h]@2
  char v17; // [sp+24h] [bp-34h]@2
  void (*v18)(void); // [sp+2Ch] [bp-2Ch]@2
  char v19; // [sp+34h] [bp-24h]@2
  int v20; // [sp+38h] [bp-20h]@1
  int v21; // [sp+3Ch] [bp-1Ch]@1
  int v22; // [sp+40h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  ResourceLocation::getFullPath((ResourceLocation *)&v22, (int)a2);
  v20 = v22;
  v21 = *(_DWORD *)(v22 - 12);
  if ( Core::FileSystem::directoryExists((__int64 *)&v20) == 1 )
  {
    v15 = v22;
    v16 = *(_DWORD *)(v22 - 12);
    Core::FileSystem::deleteDirectoryAndContentsRecursively((int)&v17, (__int64 *)&v15);
    v4 = v19;
    v19 |= 2u;
    v5 = v4 & 1;
    if ( v18 )
      v18();
  }
  else
    v10 = v22;
    v11 = *(_DWORD *)(v22 - 12);
    Core::FileSystem::deleteFile((int)&v12, (__int64 *)&v10);
    v6 = v14;
    v14 |= 2u;
    v5 = v6 & 1;
    if ( v13 )
      v13();
  if ( v5 == 1 )
    ResourcePackRepository::untrackInvalidPack(v2, v3);
    PackSourceFactory::removeFromDirectoryPackSource(*((_DWORD *)v2 + 39), (const void **)&v22);
  v7 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v22 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
}


int __fastcall ResourcePackRepository::addInvalidPack(int result, const void **a2, int a3)
{
  const void **v3; // r5@1
  int v4; // r4@1
  _QWORD *v5; // r6@2
  int v6; // r7@2
  int v7; // r7@5
  int v8; // r7@8
  int v9; // r7@11

  v3 = a2;
  v4 = result;
  switch ( a3 )
  {
    case 0:
      v5 = (_QWORD *)(result + 60);
      v6 = *(_DWORD *)(result + 64);
      result = std::__find_if<__gnu_cxx::__normal_iterator<ResourceLocation *,std::vector<ResourceLocation,std::allocator<ResourceLocation>>>,__gnu_cxx::__ops::_Iter_equals_val<ResourceLocation const>>(
                 *(_DWORD *)(result + 60),
                 *(_DWORD *)(result + 64),
                 a2);
      if ( result == v6 )
      {
        if ( result == *(_DWORD *)(v4 + 68) )
          goto LABEL_15;
        sub_21E8AF4((int *)result, (int *)v3)[1] = (int)v3[1];
        result = *(_DWORD *)(v4 + 64) + 8;
        *(_DWORD *)(v4 + 64) = result;
      }
      break;
    case 1:
      v5 = (_QWORD *)(result + 84);
      v7 = *(_DWORD *)(result + 88);
                 *(_DWORD *)(result + 84),
                 *(_DWORD *)(result + 88),
      if ( result == v7 )
        if ( result == *(_DWORD *)(v4 + 92) )
        result = *(_DWORD *)(v4 + 88) + 8;
        *(_DWORD *)(v4 + 88) = result;
    case 2:
      v5 = (_QWORD *)(result + 72);
      v8 = *(_DWORD *)(result + 76);
                 *(_DWORD *)(result + 72),
                 *(_DWORD *)(result + 76),
      if ( result == v8 )
        if ( result == *(_DWORD *)(v4 + 80) )
        result = *(_DWORD *)(v4 + 76) + 8;
        *(_DWORD *)(v4 + 76) = result;
    case 3:
      v5 = (_QWORD *)(result + 96);
      v9 = *(_DWORD *)(result + 100);
                 *(_DWORD *)(result + 96),
                 *(_DWORD *)(result + 100),
      if ( result == v9 )
        if ( result == *(_DWORD *)(v4 + 104) )
        {
LABEL_15:
          result = (int)j_j_j__ZNSt6vectorI16ResourceLocationSaIS0_EE19_M_emplace_back_auxIJRKS0_EEEvDpOT_(v5, (int)v3);
        }
        else
          sub_21E8AF4((int *)result, (int *)v3)[1] = (int)v3[1];
          result = *(_DWORD *)(v4 + 100) + 8;
          *(_DWORD *)(v4 + 100) = result;
    default:
      return result;
  }
  return result;
}


void __fastcall ResourcePackRepository::addCachedResourcePacks(int a1, int a2)
{
  int v2; // r4@1

  v2 = a1;
  if ( a2 )
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::operator=(
      (unsigned __int64 *)(a1 + 124),
      a2);
  (*(void (**)(void))(**(_DWORD **)(v2 + 116) + 12))();
  ResourcePackRepository::_initializeCachedPackSource((ResourcePackRepository *)v2);
  j_j_j__ZN22ResourcePackRepository10_loadPacksEv((ResourcePackRepository *)v2);
}


int __fastcall ResourcePackRepository::removePacksLoadedFromCache(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r9@1
  ResourcePack **v2; // r4@1
  ResourcePack **v3; // r1@4
  int v4; // r0@4
  signed int v5; // r2@5
  int v6; // r7@6
  ResourcePack **v7; // r5@6
  ResourcePack *v8; // r1@7
  ResourcePack *v9; // r0@7
  ResourcePack *v10; // r0@8
  _DWORD *v11; // r5@11
  ResourcePack *v12; // r0@11
  ResourcePack *v13; // r0@12

  v1 = this;
  v2 = (ResourcePack **)*(_QWORD *)((char *)this + 4);
  if ( v2 != (ResourcePack **)(*(_QWORD *)((char *)this + 4) >> 32) )
  {
    do
    {
      if ( ResourcePack::getPackOrigin(*v2) != 5 && ResourcePack::getPackOrigin(*v2) != 7 )
      {
        ++v2;
      }
      else
        v3 = (ResourcePack **)*((_DWORD *)v1 + 2);
        v4 = (int)(v2 + 1);
        if ( v2 + 1 != v3 )
        {
          v5 = (signed int)v3 - v4;
          v4 = *((_DWORD *)v1 + 2);
          if ( v5 >= 1 )
          {
            v6 = (v5 >> 2) + 1;
            v7 = v2;
            do
            {
              v8 = v7[1];
              v7[1] = 0;
              v9 = *v7;
              *v7 = v8;
              if ( v9 )
              {
                v10 = ResourcePack::~ResourcePack(v9);
                operator delete((void *)v10);
              }
              --v6;
              ++v7;
            }
            while ( v6 > 1 );
            v4 = *((_DWORD *)v1 + 2);
          }
        }
        v11 = (_DWORD *)(v4 - 4);
        *((_DWORD *)v1 + 2) = v4 - 4;
        v12 = *(ResourcePack **)(v4 - 4);
        if ( v12 )
          v13 = ResourcePack::~ResourcePack(v12);
          operator delete((void *)v13);
        *v11 = 0;
    }
    while ( v2 != *((ResourcePack ***)v1 + 2) );
  }
  CompositePackSource::clear(*((CompositePackSource **)v1 + 5));
  std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::clear((int)v1 + 124);
  return (*(int (**)(void))(**((_DWORD **)v1 + 29) + 16))();
}


signed int __fastcall ResourcePackRepository::_packLogVersionIsUpToDate(ResourcePackRepository *this, const Json::Value *a2)
{
  ResourcePackRepository *v2; // r4@1
  Json::Value *v3; // r0@1
  signed int v4; // r5@1

  v2 = this;
  v3 = (Json::Value *)Json::Value::operator[]((int)a2, "file_version");
  v4 = 0;
  if ( Json::Value::asInt(v3, 0) >= *((_DWORD *)v2 + 38) )
    v4 = 1;
  return v4;
}


int __fastcall ResourcePackRepository::KnownPackContainer::getPack(ResourcePackRepository::KnownPackContainer *this, const PackIdVersion *a2)
{
  int v2; // r4@1
  int v3; // r6@1
  const PackIdVersion *v4; // r5@1
  int result; // r0@4

  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  v4 = a2;
  if ( v2 == v3 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( PackIdVersion::operator==(v2 + 24, (int)v4) != 1 )
    {
      v2 += 72;
      if ( v3 == v2 )
        goto LABEL_4;
    }
    result = v2;
  return result;
}


ResourcePack *__fastcall ResourcePackRepository::getResourcePackContainingModule(ResourcePackRepository *this, const PackIdVersion *a2)
{
  ResourcePack **v2; // r5@1
  ResourcePack **v3; // r6@1
  const PackIdVersion *v4; // r4@1
  int v5; // r7@2
  PackManifest *v6; // r0@2
  ResourcePack *result; // r0@4

  v2 = (ResourcePack **)(*(_QWORD *)((char *)this + 4) >> 32);
  v3 = (ResourcePack **)*(_QWORD *)((char *)this + 4);
  v4 = a2;
  if ( v3 == v2 )
  {
LABEL_4:
    result = 0;
  }
  else
    while ( 1 )
    {
      v5 = (int)(v3 + 1);
      v6 = (PackManifest *)ResourcePack::getManifest(*v3);
      if ( PackManifest::hasModule(v6, v4) == 1 )
        break;
      ++v3;
      if ( v2 == (ResourcePack **)v5 )
        goto LABEL_4;
    }
    result = *v3;
  return result;
}


void __fastcall ResourcePackRepository::_initializeCachedPackSource(ResourcePackRepository *this)
{
  ResourcePackRepository::_initializeCachedPackSource(this);
}


void __fastcall ResourcePackRepository::_loadPacks(ResourcePackRepository *this)
{
  ResourcePackRepository::_loadPacks(this);
}


RakNet *__fastcall ResourcePackRepository::getCachedResourcePacksPath(ResourcePackRepository *this)
{
  void **v1; // r4@1
  AppPlatform **v2; // r0@2
  int v3; // r0@4
  __int64 v4; // r1@4
  int v5; // r3@4
  RakNet *result; // r0@4
  int v7; // [sp+0h] [bp-430h]@4
  int v8; // [sp+4h] [bp-42Ch]@4
  __int64 v9; // [sp+8h] [bp-428h]@4
  char v10; // [sp+14h] [bp-41Ch]@4
  int v11; // [sp+18h] [bp-418h]@4
  int v12; // [sp+418h] [bp-18h]@4
  RakNet *v13; // [sp+41Ch] [bp-14h]@1

  v1 = (void **)this;
  v13 = _stack_chk_guard;
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = (AppPlatform **)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = (AppPlatform **)&ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *AppPlatform::getTempPath(*v2);
  LODWORD(v4) = ResourcePackRepository::RESOURCE_PACK_DOWNLOAD_CACHE_PATH;
  v5 = *(_DWORD *)(v3 - 12);
  HIDWORD(v4) = *(_DWORD *)(ResourcePackRepository::RESOURCE_PACK_DOWNLOAD_CACHE_PATH - 12);
  v7 = v3;
  v8 = v5;
  v9 = v4;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v10, (int)&v7, 2);
  sub_21E91E0(v1, (unsigned int)&v11, v12);
  result = (RakNet *)(_stack_chk_guard - v13);
  if ( _stack_chk_guard != v13 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall ResourcePackRepository::KnownPackContainer::getPack(ResourcePackRepository::KnownPackContainer *this, const ResourceLocation *a2)
{
  int v2; // r4@1
  int v3; // r7@1
  __int64 v4; // kr08_8@2
  size_t v5; // r6@2
  const void *v6; // r0@3
  int v7; // r0@4
  bool v8; // zf@4

  v3 = *(_QWORD *)this >> 32;
  v2 = *(_QWORD *)this;
  if ( v2 == v3 )
  {
LABEL_8:
    v2 = 0;
  }
  else
    v4 = *(_QWORD *)a2;
    v5 = *(_DWORD *)(*(_QWORD *)a2 - 12);
    while ( 1 )
    {
      v6 = *(const void **)(v2 + 4);
      if ( *((_DWORD *)v6 - 3) == v5 )
      {
        v7 = memcmp(v6, (const void *)v4, v5);
        v8 = v7 == 0;
        if ( !v7 )
          v8 = *(_DWORD *)(v2 + 8) == HIDWORD(v4);
        if ( v8 )
          break;
      }
      v2 += 72;
      if ( v3 == v2 )
        goto LABEL_8;
    }
  return v2;
}


void __fastcall ResourcePackRepository::updateVanillaPacks(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r4@1

  v1 = this;
  ResourcePackRepository::_loadPacks(this);
  j_j_j__ZN22ResourcePackRepository17_findVanillaPacksEv(v1);
}


void __fastcall ResourcePackRepository::getKnownValidPacksPath(ResourcePackRepository *this)
{
  ResourcePackRepository::getKnownValidPacksPath(this);
}


void __fastcall ResourcePackRepository::_loadPacks(ResourcePackRepository *this)
{
  ResourcePackRepository *v1; // r8@1
  __int64 v2; // r2@1
  _DWORD *v3; // r6@1
  int v4; // r1@1
  int v5; // r4@1
  void *v6; // r5@2
  void *v7; // r7@3
  void *v8; // r0@4
  int v9; // r4@8
  void (__fastcall *v10)(int, _DWORD **); // r5@8
  _DWORD *v11; // r0@8
  __int64 v12; // r1@8
  int v13; // r4@10
  void (__fastcall *v14)(int, _DWORD **); // r5@10
  _DWORD *v15; // r0@10
  __int64 v16; // r1@10
  int v17; // r4@12
  ResourcePack **v18; // r6@12
  int v19; // r5@13
  ResourcePack **v20; // r7@14
  int v21; // r6@15
  int i; // r11@20
  int v23; // r9@21
  char *v24; // r4@21
  int v25; // r1@21
  int v26; // r2@21
  int v27; // r3@21
  int v28; // r0@21
  __int16 v29; // r0@21
  int v30; // r0@22
  ResourcePackRepository::KnownPackInfo *v31; // r4@22
  int v32; // r5@22
  int v33; // r7@22
  ResourcePackRepository::KnownPackInfo *v34; // r4@26
  int v35; // r5@26
  int v36; // r7@26
  const void *v37; // r9@32 OVERLAPPED
  int v38; // r10@32 OVERLAPPED
  size_t v39; // r5@32
  const void *v40; // r0@33
  int v41; // r0@34
  bool v42; // zf@34
  const void *v43; // r9@43 OVERLAPPED
  int v44; // r10@43 OVERLAPPED
  size_t v45; // r5@43
  const void *v46; // r0@44
  int v47; // r0@45
  bool v48; // zf@45
  ResourcePack **v49; // r5@53 OVERLAPPED
  ResourcePack **v50; // r6@53 OVERLAPPED
  PackDependencyManager *v51; // r4@54
  const PackSource *v52; // r0@54
  const PackManifest *v53; // r2@54
  __int64 j; // r4@57
  __int64 v55; // r4@59
  ResourcePackRepository::KnownPackInfo *v56; // r0@60
  __int64 v57; // r4@64
  ResourcePackRepository::KnownPackInfo *v58; // r0@65
  void *v59; // r4@69
  void *v60; // r6@70
  char v61; // [sp+20h] [bp-C8h]@21
  _DWORD *v62; // [sp+24h] [bp-C4h]@21
  int v63; // [sp+28h] [bp-C0h]@21
  int v64; // [sp+2Ch] [bp-BCh]@21
  int v65; // [sp+30h] [bp-B8h]@21
  int v66; // [sp+34h] [bp-B4h]@21
  int v67; // [sp+38h] [bp-B0h]@21
  int v68; // [sp+3Ch] [bp-ACh]@21
  int v69; // [sp+40h] [bp-A8h]@21
  int v70; // [sp+44h] [bp-A4h]@21
  int v71; // [sp+48h] [bp-A0h]@21
  __int16 v72; // [sp+4Ch] [bp-9Ch]@21
  int v73; // [sp+50h] [bp-98h]@21
  int v74; // [sp+54h] [bp-94h]@21
  int v75; // [sp+58h] [bp-90h]@21
  __int16 v76; // [sp+5Ch] [bp-8Ch]@21
  char v77; // [sp+5Eh] [bp-8Ah]@21
  char v78; // [sp+60h] [bp-88h]@21
  ResourcePackRepository::KnownPackInfo *v79; // [sp+68h] [bp-80h]@20
  ResourcePackRepository::KnownPackInfo *v80; // [sp+6Ch] [bp-7Ch]@20
  ResourcePackRepository::KnownPackInfo *v81; // [sp+70h] [bp-78h]@20
  ResourcePackRepository::KnownPackInfo *v82; // [sp+74h] [bp-74h]@20
  ResourcePackRepository::KnownPackInfo *v83; // [sp+78h] [bp-70h]@20
  ResourcePackRepository::KnownPackInfo *v84; // [sp+7Ch] [bp-6Ch]@20
  _DWORD *v85; // [sp+80h] [bp-68h]@10
  __int64 v86; // [sp+88h] [bp-60h]@10
  _DWORD *v87; // [sp+90h] [bp-58h]@8
  __int64 v88; // [sp+98h] [bp-50h]@8
  void *ptr; // [sp+A0h] [bp-48h]@1
  int v90; // [sp+A4h] [bp-44h]@1
  void *v91; // [sp+A8h] [bp-40h]@69
  int v92; // [sp+ACh] [bp-3Ch]@1
  __int64 v93; // [sp+B0h] [bp-38h]@1
  int v94; // [sp+B8h] [bp-30h]@72
  _DWORD *v95; // [sp+BCh] [bp-2Ch]@1
  char v96; // [sp+C0h] [bp-28h]@3

  v1 = this;
  v2 = *((_QWORD *)this + 14);
  (*(void (__fastcall **)(void **))(**((_DWORD **)this + 4) + 20))(&ptr);
  v3 = operator new(0x1Cu);
  v4 = v90;
  *v3 = 0;
  v3[1] = v4;
  v3[2] = 0;
  v3[3] = v92;
  *((_QWORD *)v3 + 2) = v93;
  v95 = v3;
  std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<PackIdVersion const,PackReport>,true> const*)#1}>(
    v3,
    (int)&ptr,
    (int *)&v95);
  v5 = *((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 7) = v3;
  if ( v5 )
  {
    v6 = *(void **)(v5 + 8);
    if ( v6 )
    {
      do
      {
        v7 = *(void **)v6;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v96,
          (int)v6 + 8);
        operator delete(v6);
        v6 = v7;
      }
      while ( v7 );
    }
    _aeabi_memclr4(*(_QWORD *)v5, 4 * (*(_QWORD *)v5 >> 32));
    *(_DWORD *)(v5 + 8) = 0;
    *(_DWORD *)(v5 + 12) = 0;
    v8 = *(void **)v5;
    if ( *(_DWORD *)v5 && (void *)(v5 + 24) != v8 )
      operator delete(v8);
    operator delete((void *)v5);
  }
  v9 = *((_DWORD *)v1 + 4);
  v10 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v9 + 12);
  v11 = operator new(4u);
  LODWORD(v12) = sub_159C3A8;
  *v11 = v1;
  HIDWORD(v12) = sub_159C39C;
  v87 = v11;
  v88 = v12;
  v10(v9, &v87);
  if ( (_DWORD)v88 )
    ((void (*)(void))v88)();
  v13 = *((_DWORD *)v1 + 4);
  v14 = *(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v13 + 12);
  v15 = operator new(4u);
  LODWORD(v16) = sub_159C3E6;
  *v15 = v1;
  HIDWORD(v16) = sub_159C3DE;
  v85 = v15;
  v86 = v16;
  v14(v13, &v85);
  if ( (_DWORD)v86 )
    ((void (*)(void))v86)();
  v18 = (ResourcePack **)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v17 = *(_QWORD *)((char *)v1 + 4);
  if ( (ResourcePack **)v17 != v18 )
    v19 = (int)v18 - v17;
    sub_159C41C(v17, v18, 2 * (31 - __clz(((signed int)v18 - v17) >> 2)), 0);
    if ( (signed int)v18 - v17 < 65 )
      sub_159C76C((ResourcePack **)v17, v18);
    else
      v20 = (ResourcePack **)(v17 + 64);
      sub_159C76C((ResourcePack **)v17, (ResourcePack **)(v17 + 64));
      if ( (ResourcePack **)(v17 + 64) != v18 )
        v21 = (int)(v18 - 16);
        do
        {
          v19 &= 0xFFFFFF00;
          sub_159C80C(v20);
          v20 = (ResourcePack **)(v17 + 68);
          v42 = v21 == v17 + 4;
          v17 += 4;
        }
        while ( !v42 );
  v83 = 0;
  v84 = 0;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 0;
  for ( i = *(_DWORD *)(PackSourceReport::getReports((PackSourceReport *)&ptr) + 8); i; i = *(_DWORD *)i )
    v23 = PackReport::getLocation((PackReport *)(i + 56));
    v61 = 0;
    v62 = &unk_28898CC;
    v63 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    PackIdVersion::PackIdVersion((PackIdVersion *)&v67);
    EntityInteraction::setInteractText((int *)((unsigned int)&v61 | 4), (int *)v23);
    v63 = *(_DWORD *)(v23 + 4);
    v24 = PackReport::getIdentity((PackReport *)(i + 56));
    v25 = *((_DWORD *)v24 + 1);
    v26 = *((_DWORD *)v24 + 2);
    v27 = *((_DWORD *)v24 + 3);
    v67 = *(_DWORD *)v24;
    v68 = v25;
    v69 = v26;
    v70 = v27;
    v28 = *((_DWORD *)v24 + 4);
    v72 = *((_WORD *)v24 + 10);
    v71 = v28;
    EntityInteraction::setInteractText(&v73, (int *)v24 + 6);
    EntityInteraction::setInteractText(&v74, (int *)v24 + 7);
    EntityInteraction::setInteractText(&v75, (int *)v24 + 8);
    v29 = *((_WORD *)v24 + 18);
    v77 = v24[38];
    v76 = v29;
    v78 = v24[40];
    if ( PackReport::hasErrors((PackReport *)(i + 56)) == 1 )
      v30 = PackReport::getPackType((PackReport *)(i + 56));
      ResourcePackRepository::addInvalidPack((int)v1, (const void **)v23, v30);
      v31 = v80;
      v32 = (int)v79;
      v33 = (int)v79;
      if ( v79 == v80 )
        goto LABEL_49;
      while ( PackIdVersion::operator==(v32 + 24, (int)&v67) != 1 )
        v32 += 72;
        if ( v31 == (ResourcePackRepository::KnownPackInfo *)v32 )
          goto LABEL_42;
      if ( v32 )
        goto LABEL_52;
LABEL_42:
      if ( (ResourcePackRepository::KnownPackInfo *)v33 == v31 )
LABEL_49:
        if ( v31 == v81 )
          std::vector<ResourcePackRepository::KnownPackInfo,std::allocator<ResourcePackRepository::KnownPackInfo>>::_M_emplace_back_aux<ResourcePackRepository::KnownPackInfo&>(
            (unsigned __int64 *)&v79,
            (const ResourcePackRepository::KnownPackInfo *)&v61);
        else
          ResourcePackRepository::KnownPackInfo::KnownPackInfo(v31, (const ResourcePackRepository::KnownPackInfo *)&v61);
          v80 = (ResourcePackRepository::KnownPackInfo *)((char *)v31 + 72);
      else
        *(_QWORD *)&v43 = *(_QWORD *)&v62;
        v45 = *(v62 - 3);
        while ( 1 )
          v46 = *(const void **)(v33 + 4);
          if ( *((_DWORD *)v46 - 3) == v45 )
          {
            v47 = memcmp(v46, v43, v45);
            v48 = v47 == 0;
            if ( !v47 )
              v48 = *(_DWORD *)(v33 + 8) == v44;
            if ( v48 )
              break;
          }
          v33 += 72;
          if ( v31 == (ResourcePackRepository::KnownPackInfo *)v33 )
            goto LABEL_49;
      v34 = v83;
      v35 = (int)v82;
      v36 = (int)v82;
      if ( v82 == v83 )
        goto LABEL_38;
      while ( PackIdVersion::operator==(v35 + 24, (int)&v67) != 1 )
        v35 += 72;
        if ( v34 == (ResourcePackRepository::KnownPackInfo *)v35 )
          goto LABEL_31;
      if ( v35 )
LABEL_31:
      if ( (ResourcePackRepository::KnownPackInfo *)v36 == v34 )
LABEL_38:
        if ( v34 == v84 )
            (unsigned __int64 *)&v82,
          ResourcePackRepository::KnownPackInfo::KnownPackInfo(v34, (const ResourcePackRepository::KnownPackInfo *)&v61);
          v83 = (ResourcePackRepository::KnownPackInfo *)((char *)v34 + 72);
        *(_QWORD *)&v37 = *(_QWORD *)&v62;
        v39 = *(v62 - 3);
          v40 = *(const void **)(v36 + 4);
          if ( *((_DWORD *)v40 - 3) == v39 )
            v41 = memcmp(v40, v37, v39);
            v42 = v41 == 0;
            if ( !v41 )
              v42 = *(_DWORD *)(v36 + 8) == v38;
            if ( v42 )
          v36 += 72;
          if ( v34 == (ResourcePackRepository::KnownPackInfo *)v36 )
            goto LABEL_38;
LABEL_52:
    ResourcePackRepository::KnownPackInfo::~KnownPackInfo((ResourcePackRepository::KnownPackInfo *)&v61);
  for ( *(_QWORD *)&v49 = *(_QWORD *)((char *)v1 + 4); v50 != v49; ++v49 )
    v51 = (PackDependencyManager *)*((_DWORD *)v1 + 4);
    v52 = (const PackSource *)ResourcePack::getManifest(*v49);
    if ( PackDependencyManager::hasMissingDependencies(v51, v52, v53) == 1 )
      ResourcePack::setError(*v49);
  ResourcePackRepository::_updateKnownUserPacks((int)v1, (unsigned __int64 *)&v82, 0);
  ResourcePackRepository::_updateKnownUserPacks((int)v1, (unsigned __int64 *)&v79, 1);
  for ( j = *((_QWORD *)v1 + 20); HIDWORD(j) != (_DWORD)j; LODWORD(j) = j + 4 )
    ContentManager::reloadSources(*(ContentManager **)j, 0);
  v55 = *(_QWORD *)&v79;
  if ( v79 != v80 )
    v56 = v79;
    do
      v56 = (ResourcePackRepository::KnownPackInfo *)((char *)ResourcePackRepository::KnownPackInfo::~KnownPackInfo(v56)
                                                    + 72);
    while ( (ResourcePackRepository::KnownPackInfo *)HIDWORD(v55) != v56 );
  if ( (_DWORD)v55 )
    operator delete((void *)v55);
  v57 = *(_QWORD *)&v82;
  if ( v82 != v83 )
    v58 = v82;
      v58 = (ResourcePackRepository::KnownPackInfo *)((char *)ResourcePackRepository::KnownPackInfo::~KnownPackInfo(v58)
    while ( (ResourcePackRepository::KnownPackInfo *)HIDWORD(v57) != v58 );
  if ( (_DWORD)v57 )
    operator delete((void *)v57);
  v59 = v91;
  if ( v91 )
      v60 = *(void **)v59;
      __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
        (int)&v82,
        (int)v59 + 8);
      operator delete(v59);
      v59 = v60;
    while ( v60 );
  _aeabi_memclr4(ptr, 4 * v90);
  v91 = 0;
  v92 = 0;
  if ( ptr )
    if ( &v94 != ptr )
      operator delete(ptr);
}
