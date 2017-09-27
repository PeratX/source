

unsigned __int64 *__fastcall ResourcePackStack::add(int a1, int a2, int a3, int a4)
{
  return j_j_j__ZN17ResourcePackStack21_populateDependenciesERSt6vectorI12PackInstanceSaIS1_EERS1_RK22ResourcePackRepositoryb(
           a1 + 4,
           a2,
           a3,
           a4);
}


Json::Value *__fastcall ResourcePackStack::deserialize(_DWORD *a1, char *a2, ResourcePackRepository *a3)
{
  _DWORD *v3; // r5@1
  ResourcePackRepository *v4; // r9@1
  char *v5; // r6@1
  _DWORD *v6; // r4@1
  Json::Value *result; // r0@1
  Json::Value *v8; // r5@6
  ResourcePack *v9; // r0@7
  ResourcePack *v10; // r10@7
  signed int v11; // r5@8
  int v12; // r1@8
  double v13; // r0@8
  char v14; // [sp+10h] [bp-198h]@8
  ResourcePack *v15; // [sp+78h] [bp-130h]@8
  signed int v16; // [sp+7Ch] [bp-12Ch]@8
  char v17; // [sp+80h] [bp-128h]@8
  char v18; // [sp+88h] [bp-120h]@7
  char v19; // [sp+B8h] [bp-F0h]@6
  void *v20; // [sp+E8h] [bp-C0h]@6
  char v21; // [sp+F0h] [bp-B8h]@4
  char v22; // [sp+F8h] [bp-B0h]@4
  char v23; // [sp+100h] [bp-A8h]@2
  char v24; // [sp+170h] [bp-38h]@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0x14u);
  *(_QWORD *)v6 = (unsigned int)&off_26EAC8C;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  *v3 = v6;
  result = (Json::Value *)(unsigned __int8)v5[*(_DWORD *)(*(_DWORD *)v5 - 12) + 20];
  if ( !((unsigned __int8)result & 5) )
  {
    Json::Value::Value(&v24, 0);
    Json::Reader::Reader((Json::Reader *)&v23);
    if ( Json::Reader::parse((int)&v23, v5, (int)&v24, 1) == 1 && Json::Value::isArray((Json::Value *)&v24) == 1 )
    {
      Json::Value::begin((Json::Value *)&v22, (int)&v24);
      Json::Value::end((Json::Value *)&v21, (int)&v24);
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v22, (const Json::ValueIteratorBase *)&v21) != 1 )
      {
        v8 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v22);
        PackIdVersion::PackIdVersion((PackIdVersion *)&v19);
        v20 = &unk_28898CC;
        if ( ResourceHelper::deserializePackStackEntry(
               v8,
               (int)&v19,
               (int *)&PackManifestFactory::MANIFEST_PACK_UUID_UPGRADE_SALT) == 1 )
        {
          Stopwatch::Stopwatch((Stopwatch *)&v18);
          Stopwatch::start((Stopwatch *)&v18);
          v9 = ResourcePackRepository::getResourcePackSatisfiesPackId(v4, (const PackIdVersion *)&v19, 1);
          v10 = v9;
          if ( v9 )
          {
            v11 = ResourcePack::getSubpackIndex((int)v9, (const void **)&v20);
            PackReport::PackReport((int)&v14);
            v15 = v10;
            v16 = v11;
            v17 = 0;
            ResourcePackStack::_populateDependencies((int)(v6 + 1), (int)&v14, (int)v4, 0);
            LODWORD(v13) = Stopwatch::stop((Stopwatch *)&v18, v12);
            ResourcePack::setLoadTime(v10, SHIDWORD(v13), v13);
            PackReport::~PackReport((PackReport *)&v14);
          }
        }
        PackInstanceId::~PackInstanceId((PackInstanceId *)&v19);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v22);
      }
    }
    Json::Reader::~Reader((Json::Reader *)&v23);
    result = Json::Value::~Value((Json::Value *)&v24);
  }
  return result;
}


ResourcePackStack *__fastcall ResourcePackStack::~ResourcePackStack(ResourcePackStack *this)
{
  ResourcePackStack *v1; // r8@1
  int v2; // r5@1
  void *v3; // r6@2
  void *v4; // r4@3
  void *v5; // r0@4
  PackReport *v6; // r0@8
  PackReport *v7; // r5@8
  int v9; // [sp+4h] [bp+0h]@3

  v1 = this;
  *(_DWORD *)this = &off_26EAC8C;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 8);
    if ( v3 )
    {
      do
      {
        v4 = *(void **)v3;
        __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
          (int)&v9,
          (int)v3 + 8);
        operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    _aeabi_memclr4(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v5 = *(void **)v2;
    if ( *(_DWORD *)v2 && (void *)(v2 + 24) != v5 )
      operator delete(v5);
    operator delete((void *)v2);
  }
  *((_DWORD *)v1 + 4) = 0;
  v7 = (PackReport *)(*(_QWORD *)((char *)v1 + 4) >> 32);
  v6 = (PackReport *)*(_QWORD *)((char *)v1 + 4);
  if ( v6 != v7 )
    do
      v6 = (PackReport *)((char *)PackReport::~PackReport(v6) + 120);
    while ( v7 != v6 );
    v6 = (PackReport *)*((_DWORD *)v1 + 1);
  if ( v6 )
    operator delete((void *)v6);
  return v1;
}


unsigned __int64 *__fastcall ResourcePackStack::_populateDependencies(unsigned __int64 *a1, int a2, ResourcePackRepository *a3, char a4)
{
  char v4; // r5@1
  unsigned __int64 *v5; // r9@1
  int v6; // r8@1
  unsigned __int64 *result; // r0@1
  int v8; // r1@1
  unsigned __int64 v9; // kr00_8@1
  ResourcePackRepository *v10; // r10@1
  int v11; // r8@5
  int v12; // t1@5
  int v13; // r6@5
  int v14; // r0@5
  PackManifest *v15; // r0@7
  const PackIdVersion *v16; // r4@7
  const PackIdVersion *i; // r7@7
  int v18; // r6@8
  int v19; // [sp+0h] [bp-A0h]@9
  int v20; // [sp+68h] [bp-38h]@9
  int v21; // [sp+6Ch] [bp-34h]@9
  char v22; // [sp+70h] [bp-30h]@9
  char v23; // [sp+7Bh] [bp-25h]@1

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v23 = a4;
  v9 = *a1;
  result = (unsigned __int64 *)(*a1 >> 32);
  v8 = v9;
  v10 = a3;
  if ( (unsigned __int64 *)v9 == result )
  {
LABEL_4:
    if ( result == *((unsigned __int64 **)v5 + 2) )
    {
      std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance&,bool &>(v5, v6, &v23);
      v11 = v6 + 104;
    }
    else
      v12 = *(_DWORD *)(v6 + 104);
      v13 = *(_DWORD *)(v11 + 4);
      v14 = PackReport::PackReport((int)result);
      *(_DWORD *)(v14 + 104) = v12;
      *(_DWORD *)(v14 + 108) = v13;
      *(_BYTE *)(v14 + 112) = v4;
      *((_DWORD *)v5 + 1) += 120;
    v15 = (PackManifest *)ResourcePack::getManifest(*(ResourcePack **)v11);
    result = (unsigned __int64 *)PackManifest::getDependentPackIdentities(v15);
    v16 = (const PackIdVersion *)(*result >> 32);
    for ( i = (const PackIdVersion *)*result; v16 != i; i = (const PackIdVersion *)((char *)i + 48) )
      v18 = ResourcePackRepository::getResourcePackForPackId(v10, i);
      if ( v18 )
      {
        PackReport::PackReport((int)&v19);
        v20 = v18;
        v21 = -1;
        v22 = 1;
        ResourcePackStack::_populateDependencies((int)v5, (int)&v19, (int)v10, 1);
        result = (unsigned __int64 *)PackReport::~PackReport((PackReport *)&v19);
      }
      else
        result = (unsigned __int64 *)ResourcePack::setError(*(ResourcePack **)v11);
  }
  else
    while ( *(_DWORD *)(v8 + 104) != *(_DWORD *)(v6 + 104) )
      v8 += 120;
      if ( result == (unsigned __int64 *)v8 )
        goto LABEL_4;
  return result;
}


ResourcePackStack *__fastcall ResourcePackStack::ResourcePackStack(ResourcePackStack *this, unsigned __int64 *a2, const ResourcePackRepository *a3)
{
  ResourcePackStack *v3; // r8@1
  const ResourcePackRepository *v4; // r9@1
  char *v5; // r10@1
  int v6; // r4@1
  int i; // r7@1
  int v8; // r7@2
  int v9; // t1@2
  int v10; // r1@2
  char v11; // r2@2
  int v13; // [sp+0h] [bp-A0h]@2
  int v14; // [sp+68h] [bp-38h]@2
  int v15; // [sp+6Ch] [bp-34h]@2
  char v16; // [sp+70h] [bp-30h]@2

  v3 = this;
  v4 = a3;
  *(_DWORD *)this = &off_26EAC8C;
  *((_DWORD *)this + 1) = 0;
  v5 = (char *)this + 4;
  *((_DWORD *)v5 + 1) = 0;
  *((_DWORD *)v5 + 2) = 0;
  *((_DWORD *)v5 + 3) = 0;
  v6 = *a2 >> 32;
  for ( i = *a2; i != v6; i = v8 + 16 )
  {
    PackReport::PackReport(&v13, (int *)i);
    v9 = *(_DWORD *)(i + 104);
    v8 = i + 104;
    v10 = *(_DWORD *)(v8 + 4);
    v11 = *(_BYTE *)(v8 + 8);
    v14 = v9;
    v16 = v11;
    v15 = v10;
    ResourcePackStack::_populateDependencies((int)v3 + 4, (int)&v13, (int)v4, 0);
    PackReport::~PackReport((PackReport *)&v13);
  }
  ResourcePackStack::_setLoadingReport(v3, v4);
  return v3;
}


int __fastcall ResourcePackStack::removeUnsupportedPacks(int a1, int *a2)
{
  int v2; // r10@1
  int *v3; // r8@1
  int result; // r0@1
  int i; // r4@1
  __int64 v6; // kr00_8@1
  __int64 *v7; // r0@2
  int v8; // r1@3
  int v9; // r0@3
  signed int v10; // r2@4
  int v11; // r6@5
  int v12; // r5@5
  __int64 v13; // r1@6
  PackReport *v14; // r0@8

  v2 = a1;
  v3 = a2;
  v6 = *(_QWORD *)(a1 + 4);
  result = *(_QWORD *)(a1 + 4) >> 32;
  for ( i = v6; i != result; result = *(_DWORD *)(v2 + 8) )
  {
    v7 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(i + 104));
    if ( SubpackInfoCollection::isCompatible(v7, v3) )
    {
      v8 = *(_DWORD *)(v2 + 8);
      v9 = i + 120;
      if ( i + 120 != v8 )
      {
        v10 = v8 - v9;
        v9 = *(_DWORD *)(v2 + 8);
        if ( v10 >= 1 )
        {
          v11 = i;
          v12 = -286331153 * (v10 >> 3) + 1;
          do
          {
            PackReport::operator=((int *)v11, (int *)(v11 + 120));
            --v12;
            v13 = *(_QWORD *)(v11 + 224);
            *(_BYTE *)(v11 + 112) = *(_BYTE *)(v11 + 232);
            *(_QWORD *)(v11 + 104) = v13;
            v11 += 120;
          }
          while ( v12 > 1 );
          v9 = *(_DWORD *)(v2 + 8);
        }
      }
      v14 = (PackReport *)(v9 - 120);
      *(_DWORD *)(v2 + 8) = v14;
      PackReport::~PackReport(v14);
    }
    else
      i += 120;
  }
  return result;
}


char *__fastcall ResourcePackStack::getStackAsIdentities(ResourcePackStack *this, int a2)
{
  ResourcePackStack *v2; // r4@1
  char *result; // r0@1
  __int64 i; // r6@1
  PackManifest *v5; // r0@2
  char *v6; // r5@2
  int *v7; // r2@2
  __int64 v8; // r0@2

  v2 = this;
  result = 0;
  *(_DWORD *)v2 = 0;
  *((_DWORD *)v2 + 1) = 0;
  *((_DWORD *)v2 + 2) = 0;
  for ( i = *(_QWORD *)(a2 + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 120 )
  {
    v5 = (PackManifest *)ResourcePack::getManifest(*(ResourcePack **)(i + 104));
    v6 = PackManifest::getIdentity(v5);
    v7 = (int *)ResourcePack::getSubpackFolderName((ResourcePack *)*(_QWORD *)(i + 104), *(_QWORD *)(i + 104) >> 32);
    v8 = *(_QWORD *)((char *)v2 + 4);
    if ( (_DWORD)v8 == HIDWORD(v8) )
    {
      result = std::vector<PackInstanceId,std::allocator<PackInstanceId>>::_M_emplace_back_aux<PackIdVersion const&,std::string const&>(
                 (unsigned __int64 *)v2,
                 (int)v6,
                 v7);
    }
    else
      result = (char *)(PackInstanceId::PackInstanceId(v8, (int)v6, v7) + 56);
      *((_DWORD *)v2 + 1) = result;
  }
  return result;
}


int __fastcall ResourcePackStack::canSupportPacks(int a1, int *a2)
{
  __int64 v2; // r6@1
  int *v3; // r5@1
  int i; // r4@1
  __int64 *v5; // r0@2

  v2 = *(_QWORD *)(a1 + 4);
  v3 = a2;
  for ( i = 0; HIDWORD(v2) != (_DWORD)v2; i |= SubpackInfoCollection::isCompatible(v5, v3) )
  {
    v5 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(v2 + 104));
    LODWORD(v2) = v2 + 120;
  }
  return i;
}


int __fastcall ResourcePackStack::getSplitStacks(int result, ResourcePackStack *a2, ResourcePackStack *a3)
{
  __int64 v3; // r6@1
  ResourcePackStack *v4; // r4@1
  ResourcePackStack *i; // r5@1
  PackManifest *v6; // r0@2
  __int64 v7; // r0@3
  int *v8; // r0@4
  __int64 v9; // r2@4
  __int64 v10; // r0@5
  int *v11; // r0@6
  __int64 v12; // r2@6
  unsigned __int64 *v13; // r0@7

  v3 = *(_QWORD *)(result + 4);
  v4 = a3;
  for ( i = a2; HIDWORD(v3) != (_DWORD)v3; LODWORD(v3) = v3 + 120 )
  {
    v6 = (PackManifest *)ResourcePack::getManifest(*(ResourcePack **)(v3 + 104));
    if ( PackManifest::getPackType(v6) == 1 )
    {
      v7 = *((_QWORD *)i + 1);
      if ( (_DWORD)v7 == HIDWORD(v7) )
      {
        v13 = (unsigned __int64 *)((char *)i + 4);
LABEL_9:
        result = (int)std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance const&>(
                        v13,
                        v3);
        continue;
      }
      v8 = PackReport::PackReport((int *)v7, (int *)v3);
      v9 = *(_QWORD *)(v3 + 104);
      *((_BYTE *)v8 + 112) = *(_BYTE *)(v3 + 112);
      *((_QWORD *)v8 + 13) = v9;
      result = *((_DWORD *)i + 2) + 120;
      *((_DWORD *)i + 2) = result;
    }
    else
      v10 = *((_QWORD *)v4 + 1);
      if ( (_DWORD)v10 == HIDWORD(v10) )
        v13 = (unsigned __int64 *)((char *)v4 + 4);
        goto LABEL_9;
      v11 = PackReport::PackReport((int *)v10, (int *)v3);
      v12 = *(_QWORD *)(v3 + 104);
      *((_BYTE *)v11 + 112) = *(_BYTE *)(v3 + 112);
      *((_QWORD *)v11 + 13) = v12;
      result = *((_DWORD *)v4 + 2) + 120;
      *((_DWORD *)v4 + 2) = result;
  }
  return result;
}


void __fastcall ResourcePackStack::~ResourcePackStack(ResourcePackStack *this)
{
  ResourcePackStack::~ResourcePackStack(this);
}


ResourcePackStack *__fastcall ResourcePackStack::ResourcePackStack(int a1, __int64 *a2, const ResourcePackRepository *a3)
{
  const ResourcePackRepository *v3; // r6@1
  int v4; // r10@1
  __int64 i; // r4@1
  int v6; // r9@2
  ResourcePackStack *v8; // [sp+4h] [bp-A4h]@1
  char v9; // [sp+8h] [bp-A0h]@2
  int v10; // [sp+70h] [bp-38h]@2
  signed int v11; // [sp+74h] [bp-34h]@2
  char v12; // [sp+78h] [bp-30h]@2

  v3 = a3;
  v8 = (ResourcePackStack *)a1;
  *(_DWORD *)a1 = &off_26EAC8C;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  for ( i = *a2; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    v6 = *(_DWORD *)i;
    PackReport::PackReport((int)&v9);
    v10 = v6;
    v11 = -1;
    v12 = 0;
    ResourcePackStack::_populateDependencies(v4, (int)&v9, (int)v3, 0);
    PackReport::~PackReport((PackReport *)&v9);
  }
  ResourcePackStack::_setLoadingReport(v8, v3);
  return v8;
}


void __fastcall ResourcePackStack::loadAllVersionsOf(ResourcePackStack *this, const ResourceLocation *a2, int a3)
{
  ResourcePackStack::loadAllVersionsOf(this, a2, a3);
}


int __fastcall ResourcePackStack::onLoadingFinished(int result)
{
  __int64 i; // r4@1

  for ( i = *(_QWORD *)(result + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 120 )
    result = ResourcePack::onLoadingFinished(*(ResourcePack **)(i + 104));
  return result;
}


int __fastcall ResourcePackStack::mergePackReports(int a1, unsigned int *a2)
{
  int v2; // r9@1
  unsigned int *v3; // r8@1
  __int64 v4; // r0@1
  signed int v5; // r4@1
  signed int v6; // r7@3
  int v7; // r6@3
  signed int v8; // r4@3
  signed int v9; // r5@3

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  v5 = HIDWORD(v4) - v4;
  if ( HIDWORD(v4) - (signed int)v4 >= 1 )
  {
    LODWORD(v4) = PackReport::merge(v4, *v3);
    if ( v5 > 120 )
    {
      v6 = 1;
      v7 = -286331153 * (v5 >> 3);
      v8 = 120;
      v9 = 104;
      do
      {
        LODWORD(v4) = PackReport::merge(*(_DWORD *)(v2 + 4) + v8, *v3 + v9);
        ++v6;
        v9 += 104;
        v8 += 120;
      }
      while ( v6 < v7 );
    }
  }
  return v4;
}


void __fastcall ResourcePackStack::loadAllVersionsOf(ResourcePackStack *this, const ResourceLocation *a2, int a3)
{
  const ResourceLocation *v3; // r6@1
  ResourcePackStack *v4; // r10@1
  int v5; // r5@1
  __int64 v6; // r0@1
  int v7; // r11@2
  int v8; // r7@4
  int v9; // r7@4
  int v10; // t1@4
  PackManifest *v11; // r0@5
  __int64 v12; // r0@5
  int v13; // r1@6
  void *v14; // r0@8
  char *v15; // r0@9
  void *v16; // r0@10
  char *v17; // r0@11
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  int v26; // [sp+10h] [bp-38h]@5
  char *v27; // [sp+14h] [bp-34h]@5
  void *v28; // [sp+18h] [bp-30h]@5
  char *v29; // [sp+1Ch] [bp-2Ch]@5

  v3 = a2;
  v4 = this;
  v5 = a3;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = *(_QWORD *)((char *)a2 + 4);
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v7 = -286331153 * ((HIDWORD(v6) - (signed int)v6) >> 3);
    while ( 1 )
    {
      v8 = v6 + 120 * --v7;
      v10 = *(_DWORD *)(v8 + 104);
      v9 = v8 + 104;
      if ( ResourcePack::hasResource(v10, v5, *(_DWORD *)(v9 + 4)) == 1 )
      {
        v29 = (char *)&unk_28898CC;
        ResourcePack::getResource(*(_DWORD *)v9, v5, &v29, *(_DWORD *)(v9 + 4));
        v11 = (PackManifest *)ResourcePack::getManifest(*(ResourcePack **)v9);
        PackManifest::getIdentity(v11);
        mce::UUID::asString((mce::UUID *)&v26);
        sub_21E8AF4((int *)&v27, &v26);
        sub_21E8AF4((int *)&v28, (int *)&v29);
        v12 = *(_QWORD *)((char *)v4 + 4);
        if ( (_DWORD)v12 == HIDWORD(v12) )
        {
          std::vector<ResourcePath,std::allocator<ResourcePath>>::_M_emplace_back_aux<ResourcePath>(
            (unsigned __int64 *)v4,
            (int)&v27);
          v13 = (int)v28;
        }
        else
          *(_DWORD *)v12 = v27;
          v27 = (char *)&unk_28898CC;
          *(_DWORD *)(v12 + 4) = v28;
          v28 = &unk_28898CC;
          HIDWORD(v12) = &unk_28898CC;
          *((_DWORD *)v4 + 1) = v12 + 8;
        v14 = (void *)(v13 - 12);
        if ( (int *)(v13 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v13 - 4);
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
        v15 = v27 - 12;
        if ( (int *)(v27 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v27 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
        v16 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v22 = (unsigned int *)(v26 - 4);
              v23 = __ldrex(v22);
            while ( __strex(v23 - 1, v22) );
            v23 = (*v22)--;
          if ( v23 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        v17 = v29 - 12;
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v24 = (unsigned int *)(v29 - 4);
              v25 = __ldrex(v24);
            while ( __strex(v25 - 1, v24) );
            v25 = (*v24)--;
          if ( v25 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
      }
      if ( !v7 )
        break;
      LODWORD(v6) = *((_DWORD *)v3 + 1);
    }
  }
}


ResourcePackStack *__fastcall ResourcePackStack::ResourcePackStack(ResourcePackStack *this, _QWORD *a2, ResourcePackRepository *a3)
{
  ResourcePackStack *v3; // r5@1
  ResourcePackRepository *v4; // r10@1
  int v5; // r7@1 OVERLAPPED
  int v6; // r8@1 OVERLAPPED
  int v7; // r0@2
  int v8; // r4@2
  signed int v9; // r6@3
  __int64 v10; // r0@3
  int v11; // r0@4
  __int64 v12; // r1@4
  char *v14; // [sp+4h] [bp-A4h]@1
  char v15; // [sp+8h] [bp-A0h]@3
  int v16; // [sp+70h] [bp-38h]@3
  signed int v17; // [sp+74h] [bp-34h]@3
  char v18; // [sp+78h] [bp-30h]@3

  v3 = this;
  v4 = a3;
  *(_DWORD *)this = &off_26EAC8C;
  *((_DWORD *)this + 1) = 0;
  v14 = (char *)this + 4;
  *((_DWORD *)v14 + 1) = 0;
  *((_DWORD *)v14 + 2) = 0;
  *((_DWORD *)v14 + 3) = 0;
  for ( *(_QWORD *)&v5 = *a2; v6 != v5; v5 += 56 )
  {
    v7 = ResourcePackRepository::getResourcePackForPackId(v4, (const PackIdVersion *)v5);
    v8 = v7;
    if ( v7 )
    {
      v9 = ResourcePack::getSubpackIndex(v7, (const void **)(v5 + 48));
      PackReport::PackReport((int)&v15);
      v16 = v8;
      v17 = v9;
      v18 = 0;
      v10 = *((_QWORD *)v3 + 1);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        std::vector<PackInstance,std::allocator<PackInstance>>::_M_emplace_back_aux<PackInstance>(
          (unsigned __int64 *)v14,
          (int)&v15);
      }
      else
        v11 = PackReport::PackReport(v10, (int)&v15);
        v12 = *(_QWORD *)&v16;
        *(_BYTE *)(v11 + 112) = v18;
        *(_QWORD *)(v11 + 104) = v12;
        *((_DWORD *)v3 + 2) += 120;
      PackReport::~PackReport((PackReport *)&v15);
    }
  }
  ResourcePackStack::_setLoadingReport(v3, v4);
  return v3;
}


int __fastcall ResourcePackStack::clearPackReports(int result)
{
  __int64 i; // r4@1

  for ( i = *(_QWORD *)(result + 4); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 120 )
    result = PackReport::clear((PackReport *)i);
  return result;
}


void __fastcall ResourcePackStack::~ResourcePackStack(ResourcePackStack *this)
{
  ResourcePackStack *v1; // r0@1

  v1 = ResourcePackStack::~ResourcePackStack(this);
  j_j_j__ZdlPv_6((void *)v1);
}


PackReport *__fastcall ResourcePackStack::removeDuplicates(ResourcePackStack *this)
{
  ResourcePackStack *v1; // r10@1
  PackReport *result; // r0@1
  int v3; // r1@1
  __int64 v4; // kr00_8@1
  int i; // r7@2
  int v8; // r11@4
  char *v14; // r3@4
  int v15; // r2@4
  int v16; // r6@4
  int v17; // r4@5
  int v18; // r3@5
  int v19; // r6@5
  int v20; // r5@6
  int v21; // r3@11
  int v22; // r6@13
  int v23; // r6@16
  int v24; // r5@30
  signed int v25; // r1@31
  int v26; // r4@32
  __int64 v27; // r1@33
  PackReport *v28; // r0@35

  v1 = this;
  v4 = *(_QWORD *)((char *)this + 4);
  result = (PackReport *)(*(_QWORD *)((char *)this + 4) >> 32);
  v3 = v4;
  if ( (signed int)((signed int)result - v4) >= 1 )
  {
    _R8 = 2004318071;
    for ( i = -286331153 * ((signed int)((signed int)result - v4) >> 3); ; --i )
    {
      _R2 = (char *)result - v3;
      v8 = i - 1;
      __asm { SMMUL.W         R3, R2, R8 }
      v14 = (char *)result
          + 120 * (((_R3 - ((signed int)result - v3)) >> 6) + ((unsigned int)(_R3 - ((_DWORD)result - v3)) >> 31) + i);
      v15 = (int)(v14 - 120);
      v16 = -286331153 * ((signed int)&v14[-v3 - 120] >> 3) >> 2;
      if ( v16 < 1 )
      {
        v21 = (int)(v14 - 120);
LABEL_13:
        v22 = -286331153 * ((v15 - v3) >> 3);
        if ( v22 == 1 )
        {
          v23 = *(_DWORD *)(v3 + 120 * v8 + 104);
        }
        else
          if ( v22 == 3 )
          {
            v23 = *(_DWORD *)(v3 + 120 * v8 + 104);
            if ( *(_DWORD *)(v15 - 16) == v23 )
              goto LABEL_29;
            v21 -= 120;
            v15 = v21;
          }
          else
            if ( v22 != 2 )
            {
              v15 = v3;
            }
          if ( *(_DWORD *)(v15 - 16) == v23 )
            goto LABEL_29;
          v15 = v21 - 120;
        if ( *(_DWORD *)(v15 - 16) != v23 )
          v15 = v3;
      }
      else
        v17 = (int)(v14 - 600);
        v18 = v16 + 1;
        v19 = *(_DWORD *)(v3 + 120 * v8 + 104);
        while ( 1 )
          v20 = v17;
          if ( *(_DWORD *)(v15 - 16) == v19 )
            break;
          if ( *(_DWORD *)(v17 + 344) == v19 )
            v15 = v17 + 360;
          if ( *(_DWORD *)(v17 + 224) == v19 )
            v15 = v17 + 240;
          if ( *(_DWORD *)(v17 + 104) == v19 )
            v15 = v17 + 120;
          --v18;
          v17 -= 480;
          v15 = v20;
          if ( v18 <= 1 )
            v21 = v20;
            v15 = v20;
            goto LABEL_13;
LABEL_29:
      if ( v15 != v3 )
        v24 = v3 + 120 * v8;
        if ( (PackReport *)(v24 + 120) != result )
          v25 = (signed int)result + -v24 - 120;
          if ( v25 >= 1 )
            v26 = -286331153 * (v25 >> 3) + 1;
            do
              PackReport::operator=((int *)v24, (int *)(v24 + 120));
              --v26;
              v27 = *(_QWORD *)(v24 + 224);
              *(_BYTE *)(v24 + 112) = *(_BYTE *)(v24 + 232);
              *(_QWORD *)(v24 + 104) = v27;
              v24 += 120;
            while ( v26 > 1 );
            result = (PackReport *)*((_DWORD *)v1 + 2);
        v28 = (PackReport *)((char *)result - 120);
        *((_DWORD *)v1 + 2) = v28;
        result = PackReport::~PackReport(v28);
      if ( i < 2 )
        return result;
      result = (PackReport *)(*(_QWORD *)((char *)v1 + 4) >> 32);
      v3 = *(_QWORD *)((char *)v1 + 4);
    }
  }
  return result;
}


void __fastcall ResourcePackStack::_setLoadingReport(ResourcePackStack *this, const ResourcePackRepository *a2)
{
  ResourcePackStack *v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r6@2
  int v5; // r4@2
  void *v6; // r5@3
  void *v7; // r7@4
  void *v8; // r0@5
  _DWORD *v9; // [sp+4h] [bp-1Ch]@2
  char v10; // [sp+8h] [bp-18h]@4

  v2 = this;
  v3 = ResourcePackRepository::getPackLoadingReport(a2);
  if ( v3 )
  {
    v4 = operator new(0x1Cu);
    *v4 = 0;
    v4[1] = *(_DWORD *)(v3 + 4);
    v4[2] = 0;
    v4[3] = *(_DWORD *)(v3 + 12);
    *((_QWORD *)v4 + 2) = *(_QWORD *)(v3 + 16);
    v9 = v4;
    std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_assign<std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::(std::_Hashtable<PackIdVersion,std::pair<PackIdVersion const,PackReport>,std::allocator<std::pair<PackIdVersion const,PackReport>>,std::__detail::_Select1st,std::equal_to<PackIdVersion>,std::hash<PackIdVersion>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>> const&)::{lambda(std::__detail::_Hash_node<std::pair<PackIdVersion const,PackReport>,true> const*)#1}>(
      v4,
      v3,
      (int *)&v9);
    v5 = *((_DWORD *)v2 + 4);
    *((_DWORD *)v2 + 4) = v4;
    if ( v5 )
    {
      v6 = *(void **)(v5 + 8);
      if ( v6 )
      {
        do
        {
          v7 = *(void **)v6;
          __gnu_cxx::new_allocator<std::pair<PackIdVersion const,PackReport>>::destroy<std::pair<PackIdVersion const,PackReport>>(
            (int)&v10,
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
      if ( *(_DWORD *)v5 )
        if ( (void *)(v5 + 24) != v8 )
          operator delete(v8);
      j_j_j__ZdlPv_6((void *)v5);
    }
  }
}


signed int __fastcall ResourcePackStack::loadAllVersionsOf(int a1, int a2, int a3)
{
  int v3; // r6@1
  int v4; // r11@1
  int v5; // r5@1
  int v6; // r0@1
  int v7; // r8@1
  __int64 v8; // kr00_8@1
  signed int v9; // r0@2
  int v10; // r7@2
  int v11; // r4@2
  int v12; // r1@6
  int v13; // r5@10
  int v14; // r7@10
  signed int v15; // r10@10
  unsigned int *v16; // r2@13
  signed int v17; // r1@15
  int v18; // r1@21
  void *v19; // r0@21
  int v21; // [sp+0h] [bp-38h]@4
  int v22; // [sp+4h] [bp-34h]@1
  int v23; // [sp+8h] [bp-30h]@1
  int v24; // [sp+Ch] [bp-2Ch]@1

  v3 = a1;
  v22 = 0;
  v23 = 0;
  v4 = a3;
  v24 = 0;
  v5 = a2;
  v8 = *(_QWORD *)(a1 + 4);
  v6 = *(_QWORD *)(a1 + 4) >> 32;
  v7 = v8;
  if ( v6 != (_DWORD)v8 )
  {
    v9 = v6 - v8;
    v10 = v9 - 16;
    v11 = -286331153 * (v9 >> 3) - 1;
    while ( 1 )
    {
      v21 = v11;
      if ( ResourcePack::hasResource(*(_DWORD *)(v7 + v10), v5, *(_DWORD *)(v7 + v10 + 4)) == 1 )
      {
        if ( v23 == v24 )
        {
          std::vector<LoadedResourceData,std::allocator<LoadedResourceData>>::_M_emplace_back_aux<int &,char const(&)[1]>(
            (__int64 *)&v22,
            &v21,
            (const char *)&unk_257BC67);
          v12 = v23;
        }
        else
          __gnu_cxx::new_allocator<LoadedResourceData>::construct<LoadedResourceData,int &,char const(&)[1]>(
            (int)&v22,
            v23,
          v12 = v23 + 8;
          v23 += 8;
        ResourcePack::getResource(*(_DWORD *)(v7 + v10), v5, (_DWORD *)(v12 - 4), *(_DWORD *)(v7 + v10 + 4));
      }
      if ( --v11 == -1 )
        break;
      v10 -= 120;
      v7 = *(_DWORD *)(v3 + 4);
    }
  }
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8))(v4, &v22);
  v14 = v23;
  v13 = v22;
  v15 = 0;
  if ( v22 != v23 )
    v15 = 1;
    do
      v18 = *(_DWORD *)(v13 + 4);
      v19 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v13 += 8;
    while ( v13 != v14 );
    v13 = v22;
  if ( v13 )
    operator delete((void *)v13);
  return v15;
}


void __fastcall ResourcePackStack::_setLoadingReport(ResourcePackStack *this, const ResourcePackRepository *a2)
{
  ResourcePackStack::_setLoadingReport(this, a2);
}


int __fastcall ResourcePackStack::ensureSupportedSubpacks(int result, int *a2)
{
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int *i; // r4@1
  __int64 *v5; // r0@2
  __int64 *v6; // r0@3

  *(_QWORD *)&v2 = *(_QWORD *)(result + 4);
  for ( i = a2; v3 != v2; v2 += 120 )
  {
    v5 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(v2 + 104));
    result = SubpackInfoCollection::isCompatibleSubpack(v5, *(_DWORD *)(v2 + 108), i);
    if ( result )
    {
      v6 = (__int64 *)ResourcePack::getSubpackInfoStack(*(ResourcePack **)(v2 + 104));
      result = SubpackInfoCollection::getDefaultSubpackIndex(v6, i);
      *(_DWORD *)(v2 + 108) = result;
    }
  }
  return result;
}


signed int __fastcall ResourcePackStack::hasPlatformLockedContent(ResourcePackStack *this)
{
  __int64 v1; // r4@1
  PackManifest *v2; // r0@2
  signed int result; // r0@4

  v1 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v1 == HIDWORD(v1) )
  {
    result = 0;
  }
  else
    while ( 1 )
    {
      v2 = (PackManifest *)ResourcePack::getManifest(*(ResourcePack **)(v1 + 104));
      if ( PackManifest::isPlatformLocked(v2) == 1 )
        break;
      LODWORD(v1) = v1 + 120;
      if ( HIDWORD(v1) == (_DWORD)v1 )
        return 0;
    }
    result = 1;
  return result;
}


Json::Value *__fastcall ResourcePackStack::serialize(int a1, char *a2)
{
  char *v2; // r8@1
  int v3; // r5@1
  Json::Value *result; // r0@1
  int i; // r6@2
  int v6; // r10@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  char *v13; // r0@28
  int v14; // r1@28
  int v15; // r2@28
  int v16; // r3@28
  char *v17; // r0@28
  int *v18; // r0@28
  Json::Value *v19; // r2@28
  void *v20; // r0@28
  void *v21; // r0@29
  void *v22; // r0@30
  void *v23; // r0@32
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  int v26; // [sp+Ch] [bp-E4h]@32
  char v27; // [sp+10h] [bp-E0h]@32
  int v28; // [sp+30h] [bp-C0h]@28
  int v29; // [sp+34h] [bp-BCh]@28
  int v30; // [sp+38h] [bp-B8h]@28
  int v31; // [sp+3Ch] [bp-B4h]@28
  char v32; // [sp+40h] [bp-B0h]@28
  int v33; // [sp+58h] [bp-98h]@12
  int v34; // [sp+5Ch] [bp-94h]@8
  int v35; // [sp+60h] [bp-90h]@4
  char v36; // [sp+70h] [bp-80h]@28
  char v37; // [sp+A8h] [bp-48h]@28
  char v38; // [sp+B8h] [bp-38h]@2

  v2 = a2;
  v3 = a1;
  result = *(Json::Value **)&a2[*(_DWORD *)(*(_DWORD *)a2 - 12) + 20];
  if ( !result )
  {
    Json::Value::Value(&v38, 0);
    v6 = *(_QWORD *)(v3 + 4) >> 32;
    for ( i = *(_QWORD *)(v3 + 4); i != v6; i += 120 )
    {
      Json::Value::Value(&v37, 0);
      v13 = ResourcePack::getPackId(*(ResourcePack **)(i + 104));
      v14 = *(_DWORD *)v13;
      v15 = *((_DWORD *)v13 + 1);
      v16 = *((_DWORD *)v13 + 2);
      v31 = *((_DWORD *)v13 + 3);
      v28 = v14;
      v29 = v15;
      v30 = v16;
      v17 = ResourcePack::getVersion(*(ResourcePack **)(i + 104));
      PackIdVersion::PackIdVersion((int)&v32, (int)&v28, (int)v17, 0);
      v18 = (int *)ResourcePack::getSubpackFolderName((ResourcePack *)*(_QWORD *)(i + 104), *(_QWORD *)(i + 104) >> 32);
      PackInstanceId::PackInstanceId((int)&v36, (int)&v32, v18);
      ResourceHelper::serializePackStackEntry((ResourceHelper *)&v36, (const PackInstanceId *)&v37, v19);
      PackInstanceId::~PackInstanceId((PackInstanceId *)&v36);
      v20 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v35 - 4);
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
          j_j_j_j__ZdlPv_9(v20);
      }
      v21 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v34 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v33 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      Json::Value::append((Json::Value *)&v38, (const Json::Value *)&v37);
      Json::Value::~Value((Json::Value *)&v37);
    }
    sub_21E94B4((void **)&v26, "\t");
    Json::StyledStreamWriter::StyledStreamWriter((int)&v27, &v26);
    v23 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    Json::StyledStreamWriter::write((int)&v27, (int)v2, (const Json::Value *)&v38);
    Json::StyledStreamWriter::~StyledStreamWriter((Json::StyledStreamWriter *)&v27);
    result = Json::Value::~Value((Json::Value *)&v38);
  }
  return result;
}
