

RakNet *__fastcall ResourcePack::getIconPath(const void **a1, int a2, int a3)
{
  const void **v3; // r4@1
  int v4; // r6@1
  const void **v5; // r5@1
  int v6; // r0@3
  int *v7; // r1@3
  void **v8; // r0@4
  const void **v9; // r0@4
  char *v10; // r0@4
  char *v11; // r0@5
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  int *v14; // r0@10
  const void **v15; // r0@10
  RakNet *result; // r0@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  int v19; // [sp+4h] [bp-434h]@10
  int v20; // [sp+8h] [bp-430h]@4
  int v21; // [sp+Ch] [bp-42Ch]@4
  char *v22; // [sp+10h] [bp-428h]@4
  char *v23; // [sp+14h] [bp-424h]@4
  char v24; // [sp+1Ch] [bp-41Ch]@4
  int v25; // [sp+20h] [bp-418h]@4
  RakNet *v26; // [sp+424h] [bp-14h]@1

  v3 = a1;
  v4 = a2;
  v5 = (const void **)&ResourcePack::RESOURCE_PACK_ICON_PATH;
  v26 = _stack_chk_guard;
  if ( a3 == 1 )
    v5 = (const void **)&ResourcePack::RESOURCE_PACK_BUG_ICON_PATH;
  v6 = (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 56))();
  v7 = (int *)(v4 + 136);
  if ( v6 != 1 )
  {
    v14 = sub_21E8AF4(&v19, v7);
    sub_21E7408((const void **)v14, "/", 1u);
    v15 = sub_21E72F0((const void **)&v19, v5);
    *v3 = *v15;
    *v15 = &unk_28898CC;
    v11 = (char *)(v19 - 12);
    if ( (int *)(v19 - 12) == &dword_28898C0 )
      goto LABEL_11;
    v12 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
LABEL_22:
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    }
LABEL_21:
    v13 = (*v12)--;
    goto LABEL_22;
  }
  v20 = *v7;
  v21 = *(_DWORD *)(v20 - 12);
  Core::PathBuffer<Core::StackString<char,1024u>>::getEntryNameWithoutExtension((int)&v24, (__int64 *)&v20);
  v8 = sub_21E94B4((void **)&v22, (const char *)&v25);
  sub_21E7408((const void **)v8, "/", 1u);
  v23 = v22;
  v22 = (char *)&unk_28898CC;
  v9 = sub_21E72F0((const void **)&v23, v5);
  *v3 = *v9;
  *v9 = &unk_28898CC;
  v10 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v22 - 4);
      goto LABEL_22;
    goto LABEL_21;
LABEL_11:
  result = (RakNet *)(_stack_chk_guard - v26);
  if ( _stack_chk_guard != v26 )
    _stack_chk_fail(result);
  return result;
}


ResourcePack *__fastcall ResourcePack::~ResourcePack(ResourcePack *this)
{
  ResourcePack *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  ResourcePack **v4; // r5@2 OVERLAPPED
  ResourcePack **v5; // r6@2 OVERLAPPED
  ResourcePack *v6; // r0@4
  int v7; // r0@9
  int v8; // r0@11
  int v9; // r0@13
  unsigned int *v11; // r2@16
  signed int v12; // r1@18

  v1 = this;
  v2 = *((_DWORD *)this + 34);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  std::unique_ptr<SubpackInfoCollection,std::default_delete<SubpackInfoCollection>>::~unique_ptr((void **)v1 + 33);
  *(_QWORD *)&v4 = *((_QWORD *)v1 + 15);
  if ( v4 != v5 )
    do
      if ( *v4 )
      {
        v6 = ResourcePack::~ResourcePack(*v4);
        operator delete((void *)v6);
      }
      *v4 = 0;
      ++v4;
    while ( v5 != v4 );
    v4 = (ResourcePack **)*((_DWORD *)v1 + 30);
  if ( v4 )
    operator delete(v4);
  PackReport::~PackReport((ResourcePack *)((char *)v1 + 16));
  v7 = *((_DWORD *)v1 + 3);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  v8 = *((_DWORD *)v1 + 2);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v9 = *((_DWORD *)v1 + 1);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


int __fastcall ResourcePack::isHidden(ResourcePack *this)
{
  return *(_BYTE *)this;
}


void __fastcall ResourcePack::_gatherBehaviorPackTelemetry(int a1, int a2)
{
  ResourcePack::_gatherBehaviorPackTelemetry(a1, a2);
}


int __fastcall ResourcePack::setError(int result)
{
  *(_WORD *)result = 257;
  return result;
}


void __fastcall ResourcePack::_gatherResourcePackTelemetry(int a1, int a2)
{
  ResourcePack::_gatherResourcePackTelemetry(a1, a2);
}


void __fastcall ResourcePack::setLocale(int a1, int a2)
{
  ResourcePack::setLocale(a1, (const void **)a2);
}


const void **__fastcall ResourcePack::getSubpackName(ResourcePack *this, int a2)
{
  const void **result; // r0@3

  if ( a2 < 0 || (signed int)((*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15)) >> 2 <= a2 )
    result = &Util::EMPTY_STRING;
  else
    result = SubpackInfoCollection::getSubpackName(*((SubpackInfoCollection **)this + 33), a2);
  return result;
}


int __fastcall ResourcePack::getLoadTime(ResourcePack *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x90]
    VMOV            R0, R1, D0
  }
  return result;
}


signed int __fastcall ResourcePack::getSubpackIndex(int a1, const void **a2)
{
  const void **v2; // r4@1
  const void **v3; // r7@1
  __int64 v4; // kr00_8@1
  _DWORD *v5; // r8@2
  int v6; // r4@2
  size_t v7; // r6@2

  v2 = a2;
  v4 = *(_QWORD *)SubpackInfoCollection::getSubpackInfo(*(SubpackInfoCollection **)(a1 + 132));
  v3 = (const void **)v4;
  if ( (_DWORD)v4 != HIDWORD(v4) )
  {
    v5 = *v2;
    v6 = 0;
    v7 = *(v5 - 3);
    do
    {
      if ( *((_DWORD *)*v3 - 3) == v7 )
      {
        if ( !memcmp(*v3, v5, v7) )
          return v6;
        ++v6;
      }
      else
      v3 += 3;
    }
    while ( (const void **)HIDWORD(v4) != v3 );
  }
  return -1;
}


int *__fastcall ResourcePack::_generateIconPath(ResourcePack *this)
{
  ResourcePack *v1; // r6@1
  int *v2; // r4@1
  void *v3; // r0@1
  int *result; // r0@2
  int v5; // r0@3
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+0h] [bp-28h]@3
  int v9; // [sp+4h] [bp-24h]@3
  int v10; // [sp+8h] [bp-20h]@1

  v1 = this;
  v2 = (int *)(*(int (**)(void))(**((_DWORD **)this + 1) + 16))();
  ResourceLocation::getFullPath((ResourceLocation *)&v10, (int)v2);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 34,
    &v10);
  v3 = (void *)(v10 - 12);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  result = (int *)*((_DWORD *)PackManifest::getLocation(*((PackManifest **)v1 + 3)) + 1);
  if ( result != (int *)2 )
    v5 = *((_DWORD *)v1 + 34);
    v8 = v5;
    v9 = *(_DWORD *)(v5 - 12);
    result = (int *)Core::FileSystem::directoryExists((__int64 *)&v8);
    if ( result == (int *)1 )
      result = EntityInteraction::setInteractText((int *)v1 + 34, v2);
  return result;
}


void __fastcall ResourcePack::gatherBehaviorPackTelemetry(ResourcePack *this, int a2)
{
  ResourcePack::gatherBehaviorPackTelemetry(this, a2);
}


signed int __fastcall ResourcePack::_isValidSubpackIndex(ResourcePack *this, int a2)
{
  ResourcePack *v2; // r2@1
  signed int result; // r0@1

  v2 = this;
  result = 0;
  if ( a2 >= 0 && (signed int)((*((_QWORD *)v2 + 15) >> 32) - *((_QWORD *)v2 + 15)) >> 2 > a2 )
    result = 1;
  return result;
}


void __fastcall ResourcePack::_gatherBehaviorPackTelemetry(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  void *v6; // r0@3
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  void *v12; // r0@9
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  unsigned int *v17; // r2@19
  signed int v18; // r1@21
  _DWORD *v19; // [sp+4h] [bp-5Ch]@7
  __int64 v20; // [sp+Ch] [bp-54h]@7
  int v21; // [sp+18h] [bp-48h]@7
  _DWORD *v22; // [sp+1Ch] [bp-44h]@4
  __int64 v23; // [sp+24h] [bp-3Ch]@4
  int v24; // [sp+30h] [bp-30h]@4
  _DWORD *v25; // [sp+34h] [bp-2Ch]@1
  __int64 v26; // [sp+3Ch] [bp-24h]@1
  int v27; // [sp+48h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v27, "entities/");
  v4 = operator new(4u);
  LODWORD(v5) = sub_1588194;
  *v4 = v2;
  HIDWORD(v5) = sub_158813C;
  v25 = v4;
  v26 = v5;
  ResourcePack::forEachIn(v3, (int)&v27, (int)&v25, 1, 0);
  if ( (_DWORD)v26 )
    ((void (*)(void))v26)();
  v6 = (void *)(v27 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v24, "loot_tables/");
  v7 = operator new(4u);
  LODWORD(v8) = sub_1588224;
  *v7 = v2;
  HIDWORD(v8) = sub_15881CC;
  v22 = v7;
  v23 = v8;
  ResourcePack::forEachIn(v3, (int)&v24, (int)&v22, 1, 0);
  if ( (_DWORD)v23 )
    ((void (*)(void))v23)();
  v9 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v21, "trading/");
  v10 = operator new(4u);
  LODWORD(v11) = sub_15882B4;
  *v10 = v2;
  HIDWORD(v11) = sub_158825C;
  v19 = v10;
  v20 = v11;
  ResourcePack::forEachIn(v3, (int)&v21, (int)&v19, 1, 0);
  if ( (_DWORD)v20 )
    ((void (*)(void))v20)();
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v21 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


Json::Value *__fastcall ResourcePack::generateTextureList(ResourcePack *this)
{
  ResourcePack *v1; // r4@1
  Json::Value *result; // r0@1
  int v3; // r5@2
  void (__fastcall *v4)(int, int *, _DWORD **, signed int); // r7@2
  _DWORD *v5; // r0@2
  void *v6; // r0@4
  void *v7; // r0@6
  unsigned int *v8; // r2@10
  signed int v9; // r1@12
  unsigned int *v10; // r2@18
  signed int v11; // r1@20
  int v12; // [sp+0h] [bp-70h]@6
  char v13; // [sp+4h] [bp-6Ch]@6
  _DWORD *v14; // [sp+28h] [bp-48h]@2
  void (*v15)(void); // [sp+30h] [bp-40h]@2
  void (__fastcall *v16)(Json::Value ***, int *); // [sp+34h] [bp-3Ch]@2
  int v17; // [sp+3Ch] [bp-34h]@2
  char v18; // [sp+40h] [bp-30h]@2

  v1 = this;
  result = (Json::Value *)(*(int (**)(void))(**((_DWORD **)this + 1) + 28))();
  if ( result == (Json::Value *)1 )
  {
    Json::Value::Value(&v18, 0);
    v3 = *((_DWORD *)v1 + 1);
    v4 = *(void (__fastcall **)(int, int *, _DWORD **, signed int))(*(_DWORD *)v3 + 52);
    sub_21E94B4((void **)&v17, "textures/");
    v5 = operator new(4u);
    *v5 = &v18;
    v14 = v5;
    v15 = (void (*)(void))sub_1588438;
    v16 = sub_15882EC;
    v4(v3, &v17, &v14, 1);
    if ( v15 )
      v15();
    v6 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v17 - 4);
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
    if ( !Json::Value::isNull((Json::Value *)&v18) )
      Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v13);
      Json::StyledWriter::write((Json::StyledWriter *)&v12, (const Json::Value *)&v13, (const Json::Value *)&v18);
      (*(void (**)(void))(**((_DWORD **)v1 + 1) + 48))();
      v7 = (void *)(v12 - 12);
      if ( (int *)(v12 - 12) != &dword_28898C0 )
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
          j_j_j_j__ZdlPv_9(v7);
      Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v13);
    result = Json::Value::~Value((Json::Value *)&v18);
  }
  return result;
}


signed int __fastcall ResourcePack::getSubpackCount(ResourcePack *this)
{
  return (signed int)((*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15)) >> 2;
}


void __fastcall ResourcePack::getTexturesList(ResourcePack *this, int a2, int a3)
{
  ResourcePack *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r0@1
  __int64 v7; // r0@5
  const Json::Value *v8; // r0@8
  char *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+0h] [bp-A8h]@6
  char v13; // [sp+8h] [bp-A0h]@6
  char v14; // [sp+10h] [bp-98h]@6
  char v15; // [sp+20h] [bp-88h]@4
  char *v16; // [sp+90h] [bp-18h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v16 = (char *)&unk_28898CC;
  v6 = *(_DWORD *)(a2 + 8);
  if ( !v6 || !(*(int (**)(void))(*(_DWORD *)v6 + 40))() )
    (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 40))();
  Json::Reader::Reader((Json::Reader *)&v15);
  Json::Value::Value(v3, 0);
  Json::Reader::parse((int)&v15, (int *)&v16, (int)v3, 1);
  if ( v5 >= 0 )
  {
    v7 = *(_QWORD *)(v4 + 120);
    if ( (HIDWORD(v7) - (signed int)v7) >> 2 > v5 )
    {
      ResourcePack::getTexturesList((ResourcePack *)&v14, *(_DWORD *)(v7 + 4 * v5), -1);
      Json::Value::begin((Json::Value *)&v13, (int)&v14);
      Json::Value::end((Json::Value *)&v12, (int)&v14);
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v13, (const Json::ValueIteratorBase *)&v12) != 1 )
      {
        v8 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v13);
        Json::Value::append(v3, v8);
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v13);
      }
      Json::Value::~Value((Json::Value *)&v14);
    }
  }
  Json::Reader::~Reader((Json::Reader *)&v15);
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall ResourcePack::_createSubpack(int a1, const void **a2)
{
  ResourcePack::_createSubpack(a1, a2);
}


int __fastcall ResourcePack::hasResource(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  __int64 v5; // r0@2
  int v6; // r0@4
  int result; // r0@6

  v3 = a2;
  v4 = a1;
  if ( a3 >= 0
    && (v5 = *(_QWORD *)(a1 + 120), (HIDWORD(v5) - (signed int)v5) >> 2 > a3)
    && ResourcePack::hasResource(*(_DWORD *)(v5 + 4 * a3), v3, -1)
    || (v6 = *(_DWORD *)(v4 + 8)) != 0 && (*(int (**)(void))(*(_DWORD *)v6 + 32))() )
  {
    result = 1;
  }
  else
    result = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 32))();
  return result;
}


signed int __fastcall ResourcePack::getResource(int a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  __int64 v7; // r0@2
  int v8; // r0@4
  signed int result; // r0@6

  v4 = a3;
  v5 = a2;
  v6 = a1;
  if ( a4 >= 0
    && (v7 = *(_QWORD *)(a1 + 120), (HIDWORD(v7) - (signed int)v7) >> 2 > a4)
    && ResourcePack::getResource(*(_DWORD *)(v7 + 4 * a4), v5, a3, -1)
    || (v8 = *(_DWORD *)(v6 + 8)) != 0 && (*(int (**)(void))(*(_DWORD *)v8 + 40))() )
  {
    result = 1;
  }
  else
    (*(void (**)(void))(**(_DWORD **)(v6 + 4) + 40))();
    result = *(_DWORD *)(*v4 - 12) != 0;
  return result;
}


signed int __fastcall ResourcePack::_isVanillaBehavior(ResourcePack *this)
{
  signed int v1; // r4@1
  char *v2; // r6@1
  size_t v3; // r2@1
  char *v4; // r5@1
  unsigned int *v6; // r1@6
  signed int v7; // r0@8
  void *s1; // [sp+0h] [bp-18h]@1

  PackManifest::getIdentity(*((PackManifest **)this + 3));
  mce::UUID::asString((mce::UUID *)&s1);
  v1 = 0;
  v2 = (char *)s1;
  v4 = (char *)s1 - 12;
  v3 = *((_DWORD *)s1 - 3);
  if ( v3 == *(_DWORD *)(dword_27ECD64 - 12) && !memcmp(s1, (const void *)dword_27ECD64, v3) )
    v1 = 1;
  if ( (int *)v4 != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
  return v1;
}


    if ( v4 >= ResourcePack::getPackOrigin(*i) )
{
    v5 = *i;
    *i = 0;
    v6 = *v1;
    *v1 = v5;
    if ( v6 )
    {
      v7 = ResourcePack::~ResourcePack(v6);
      operator delete((void *)v7);
    }
    v1 = i;
  }
  v8 = *v1;
  *v1 = v2;
  if ( v8 )
  {
    v9 = ResourcePack::~ResourcePack(v8);
    j_j_j__ZdlPv_6((void *)v9);
}


      if ( v8 < ResourcePack::getPackOrigin(*(ResourcePack **)(v4 + 4 * (2 * v7 | 1))) )
{
      v9 = *(_DWORD *)(v4 + 4 * v5);
      *(_DWORD *)(v4 + 4 * v5) = 0;
      v10 = *(ResourcePack **)(v4 + 4 * v7);
      *(_DWORD *)(v4 + 4 * v7) = v9;
      if ( v10 )
      {
        v11 = ResourcePack::~ResourcePack(v10);
        operator delete((void *)v11);
      }
      v7 = v5;
    }
    while ( v5 < v6 );
  }
  if ( v27 & 1 || v5 != (v27 - 2) / 2 )
  {
    v12 = v5;
  else
    v12 = 2 * v5 | 1;
    v13 = *(_DWORD *)(v4 + 4 * v12);
    *(_DWORD *)(v4 + 4 * v12) = 0;
    v14 = *(ResourcePack **)(v4 + 4 * v5);
    *(_DWORD *)(v4 + 4 * v5) = v13;
    if ( v14 )
    {
      v15 = ResourcePack::~ResourcePack(v14);
      operator delete((void *)v15);
  v16 = *v26;
  *v26 = 0;
  if ( v12 <= v28 )
LABEL_18:
    v20 = (ResourcePack **)(v4 + 4 * v12);
    while ( 1 )
      v17 = (v12 - 1) / 2;
      v18 = ResourcePack::getPackOrigin(*(ResourcePack **)(v4 + 4 * v17));
      v19 = ResourcePack::getPackOrigin(v16);
      v20 = (ResourcePack **)(v4 + 4 * v12);
      if ( v18 >= v19 )
        break;
      v12 = (v12 - 1) / 2;
      v21 = *(ResourcePack **)(v4 + 4 * v17);
      *(_DWORD *)(v4 + 4 * v17) = 0;
      v22 = *v20;
      *v20 = v21;
      if ( v22 )
        v23 = ResourcePack::~ResourcePack(v22);
        operator delete((void *)v23);
      if ( v17 <= v28 )
        goto LABEL_18;
  v24 = *v20;
  *v20 = v16;
  if ( v24 )
    v25 = ResourcePack::~ResourcePack(v24);
    j_j_j__ZdlPv_6((void *)v25);
}


char *__fastcall ResourcePack::getVersion(ResourcePack *this)
{
  return PackManifest::getIdentity(*((PackManifest **)this + 3)) + 16;
}


    if ( v12 >= ResourcePack::getPackOrigin(*(ResourcePack **)(v6 + 4 * v11)) )
{
      v15 = ResourcePack::getPackOrigin(*v9);
      if ( v15 < ResourcePack::getPackOrigin(*(v5 - 1)) )
      {
        v16 = *(_QWORD *)v6;
        *(_DWORD *)v6 = *(_QWORD *)v6 >> 32;
        *(_DWORD *)(v6 + 4) = v16;
        goto LABEL_15;
      }
      v18 = ResourcePack::getPackOrigin(*(ResourcePack **)(v6 + 4 * v11));
      LODWORD(v14) = ResourcePack::getPackOrigin(*(v5 - 1));
      HIDWORD(v14) = *(_DWORD *)v6;
      if ( v18 < (signed int)v14 )
        goto LABEL_12;
      LODWORD(v14) = *(_DWORD *)(v6 + 4 * v11);
    }
    else
    {
      v13 = ResourcePack::getPackOrigin(*(ResourcePack **)(v6 + 4 * v11));
      if ( v13 >= ResourcePack::getPackOrigin(*(v5 - 1)) )
        v17 = ResourcePack::getPackOrigin(*(ResourcePack **)(v6 + 4));
        LODWORD(v14) = ResourcePack::getPackOrigin(*(v5 - 1));
        HIDWORD(v14) = *(_DWORD *)v6;
        if ( v17 >= (signed int)v14 )
        {
          LODWORD(v14) = *(_DWORD *)(v6 + 4);
          *(_QWORD *)v6 = v14;
          goto LABEL_15;
        }
LABEL_12:
        *(_DWORD *)v6 = *(v5 - 1);
        *(v5 - 1) = (ResourcePack *)HIDWORD(v14);
    *(_DWORD *)v6 = v14;
    *(_DWORD *)(v6 + 4 * v11) = HIDWORD(v14);
LABEL_15:
    v19 = v6 + 4;
    v20 = v5;
    for ( i = *v9; ; i = *(ResourcePack **)v19 )
      while ( 1 )
        v23 = ResourcePack::getPackOrigin(i);
        if ( v23 >= ResourcePack::getPackOrigin(*(ResourcePack **)v6) )
          break;
        v22 = *(ResourcePack **)(v19 + 4);
        v19 += 4;
        i = v22;
      do
        v24 = ResourcePack::getPackOrigin(*(ResourcePack **)v6);
        v25 = *(v20 - 1);
        --v20;
      while ( v24 < ResourcePack::getPackOrigin(v25) );
      if ( v19 >= (unsigned int)v20 )
        break;
      v26 = *(ResourcePack **)v19;
      *(_DWORD *)v19 = *v20;
      v19 += 4;
      *v20 = v26;
    v4 = v4 & 0xFFFFFF00 | v30;
    sub_159C41C(v19, v5, v8, v4);
    v7 = v19 - v6;
    v5 = (ResourcePack **)v19;
    if ( (signed int)(v19 - v6) <= 64 )
      return;
  }
  v27 = (v10 - 2) / 2;
  do
  {
    v28 = *(ResourcePack **)(v6 + 4 * v27);
    *(_DWORD *)(v6 + 4 * v27) = 0;
    v31 = v28;
    v8 = v8 & 0xFFFFFF00 | v30;
    sub_159C63C(v6, v27, v7 >> 2, &v31);
    if ( v31 )
      v29 = ResourcePack::~ResourcePack(v31);
      operator delete((void *)v29);
    --v27;
    v31 = 0;
  while ( v27 != -1 );
  if ( v7 >= 5 )
    do
      --v5;
      v10 = v10 & 0xFFFFFF00 | v30;
      sub_159C5DC((ResourcePack **)v6, (int)v5, v5);
    while ( (signed int)v5 - v6 > 4 );
}


signed int __fastcall ResourcePack::isType(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  signed int v4; // r1@1

  v2 = a2;
  v3 = PackManifest::getPackType(*(PackManifest **)(a1 + 12));
  v4 = 0;
  if ( v3 == v2 )
    v4 = 1;
  return v4;
}


void __fastcall ResourcePack::_gatherResourcePackTelemetry(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  void *v6; // r0@3
  _DWORD *v7; // r0@4
  __int64 v8; // r1@4
  void *v9; // r0@6
  _DWORD *v10; // r0@7
  __int64 v11; // r1@7
  void *v12; // r0@9
  _DWORD *v13; // r0@10
  __int64 v14; // r1@10
  void *v15; // r0@12
  _DWORD *v16; // r0@13
  __int64 v17; // r1@13
  void *v18; // r0@15
  _DWORD *v19; // r0@16
  __int64 v20; // r1@16
  void *v21; // r0@18
  _DWORD *v22; // r0@19
  __int64 v23; // r1@19
  void *v24; // r0@21
  _DWORD *v25; // r0@22
  __int64 v26; // r1@22
  void *v27; // r0@24
  _DWORD *v28; // r0@25
  __int64 v29; // r1@25
  void *v30; // r0@27
  _DWORD *v31; // r0@28
  __int64 v32; // r1@28
  void *v33; // r0@30
  _DWORD *v34; // r0@31
  __int64 v35; // r1@31
  void *v36; // r0@33
  int v37; // r0@34
  int v38; // r5@36
  void *v39; // r0@38
  unsigned int *v40; // r2@42
  signed int v41; // r1@44
  unsigned int *v42; // r2@46
  signed int v43; // r1@48
  unsigned int *v44; // r2@50
  signed int v45; // r1@52
  unsigned int *v46; // r2@54
  signed int v47; // r1@56
  unsigned int *v48; // r2@58
  signed int v49; // r1@60
  unsigned int *v50; // r2@62
  signed int v51; // r1@64
  unsigned int *v52; // r2@66
  signed int v53; // r1@68
  unsigned int *v54; // r2@70
  signed int v55; // r1@72
  unsigned int *v56; // r2@74
  signed int v57; // r1@76
  unsigned int *v58; // r2@78
  signed int v59; // r1@80
  unsigned int *v60; // r2@82
  signed int v61; // r1@84
  unsigned int *v62; // r2@86
  signed int v63; // r1@88
  int v64; // [sp+8h] [bp-120h]@34
  _DWORD *v65; // [sp+Ch] [bp-11Ch]@31
  __int64 v66; // [sp+14h] [bp-114h]@31
  int v67; // [sp+20h] [bp-108h]@31
  _DWORD *v68; // [sp+24h] [bp-104h]@28
  __int64 v69; // [sp+2Ch] [bp-FCh]@28
  int v70; // [sp+38h] [bp-F0h]@28
  _DWORD *v71; // [sp+3Ch] [bp-ECh]@25
  __int64 v72; // [sp+44h] [bp-E4h]@25
  int v73; // [sp+50h] [bp-D8h]@25
  _DWORD *v74; // [sp+54h] [bp-D4h]@22
  __int64 v75; // [sp+5Ch] [bp-CCh]@22
  int v76; // [sp+68h] [bp-C0h]@22
  _DWORD *v77; // [sp+6Ch] [bp-BCh]@19
  __int64 v78; // [sp+74h] [bp-B4h]@19
  int v79; // [sp+80h] [bp-A8h]@19
  _DWORD *v80; // [sp+84h] [bp-A4h]@16
  __int64 v81; // [sp+8Ch] [bp-9Ch]@16
  int v82; // [sp+98h] [bp-90h]@16
  _DWORD *v83; // [sp+9Ch] [bp-8Ch]@13
  __int64 v84; // [sp+A4h] [bp-84h]@13
  int v85; // [sp+B0h] [bp-78h]@13
  _DWORD *v86; // [sp+B4h] [bp-74h]@10
  __int64 v87; // [sp+BCh] [bp-6Ch]@10
  int v88; // [sp+C8h] [bp-60h]@10
  _DWORD *v89; // [sp+CCh] [bp-5Ch]@7
  __int64 v90; // [sp+D4h] [bp-54h]@7
  int v91; // [sp+E0h] [bp-48h]@7
  _DWORD *v92; // [sp+E4h] [bp-44h]@4
  __int64 v93; // [sp+ECh] [bp-3Ch]@4
  int v94; // [sp+F8h] [bp-30h]@4
  _DWORD *v95; // [sp+FCh] [bp-2Ch]@1
  __int64 v96; // [sp+104h] [bp-24h]@1
  int v97; // [sp+110h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v97, "models/");
  v4 = operator new(4u);
  LODWORD(v5) = sub_1587A7C;
  *v4 = v2;
  HIDWORD(v5) = sub_1587A24;
  v95 = v4;
  v96 = v5;
  ResourcePack::forEachIn(v3, (int)&v97, (int)&v95, 1, 0);
  if ( (_DWORD)v96 )
    ((void (*)(void))v96)();
  v6 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
  {
    v40 = (unsigned int *)(v97 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v94, "sounds/");
  v7 = operator new(4u);
  LODWORD(v8) = sub_1587B04;
  *v7 = v2;
  HIDWORD(v8) = sub_1587AB4;
  v92 = v7;
  v93 = v8;
  ResourcePack::forEachIn(v3, (int)&v94, (int)&v92, 1, 0);
  if ( (_DWORD)v93 )
    ((void (*)(void))v93)();
  v9 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v94 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v91, "texts/");
  v10 = operator new(4u);
  LODWORD(v11) = sub_1587B94;
  *v10 = v2;
  HIDWORD(v11) = sub_1587B3C;
  v89 = v10;
  v90 = v11;
  ResourcePack::forEachIn(v3, (int)&v91, (int)&v89, 1, 0);
  if ( (_DWORD)v90 )
    ((void (*)(void))v90)();
  v12 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v91 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v88, "textures/gui/");
  v13 = operator new(4u);
  LODWORD(v14) = sub_1587C4C;
  *v13 = v2;
  HIDWORD(v14) = sub_1587BCC;
  v86 = v13;
  v87 = v14;
  ResourcePack::forEachIn(v3, (int)&v88, (int)&v86, 1, 0);
  if ( (_DWORD)v87 )
    ((void (*)(void))v87)();
  v15 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v88 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v85, "textures/ui/");
  v16 = operator new(4u);
  LODWORD(v17) = sub_1587D04;
  *v16 = v2;
  HIDWORD(v17) = sub_1587C84;
  v83 = v16;
  v84 = v17;
  ResourcePack::forEachIn(v3, (int)&v85, (int)&v83, 1, 0);
  if ( (_DWORD)v84 )
    ((void (*)(void))v84)();
  v18 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v85 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v82, "textures/blocks/");
  v19 = operator new(4u);
  LODWORD(v20) = sub_1587DBC;
  *v19 = v2;
  HIDWORD(v20) = sub_1587D3C;
  v80 = v19;
  v81 = v20;
  ResourcePack::forEachIn(v3, (int)&v82, (int)&v80, 1, 0);
  if ( (_DWORD)v81 )
    ((void (*)(void))v81)();
  v21 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v82 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v79, "textures/item/");
  v22 = operator new(4u);
  LODWORD(v23) = sub_1587E74;
  *v22 = v2;
  HIDWORD(v23) = sub_1587DF4;
  v77 = v22;
  v78 = v23;
  ResourcePack::forEachIn(v3, (int)&v79, (int)&v77, 1, 0);
  if ( (_DWORD)v78 )
    ((void (*)(void))v78)();
  v24 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v79 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v76, "textures/items/");
  v25 = operator new(4u);
  LODWORD(v26) = sub_1587F2C;
  *v25 = v2;
  HIDWORD(v26) = sub_1587EAC;
  v74 = v25;
  v75 = v26;
  ResourcePack::forEachIn(v3, (int)&v76, (int)&v74, 1, 0);
  if ( (_DWORD)v75 )
    ((void (*)(void))v75)();
  v27 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v76 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v73, "textures/entity/");
  v28 = operator new(4u);
  LODWORD(v29) = sub_1587FE4;
  *v28 = v2;
  HIDWORD(v29) = sub_1587F64;
  v71 = v28;
  v72 = v29;
  ResourcePack::forEachIn(v3, (int)&v73, (int)&v71, 1, 0);
  if ( (_DWORD)v72 )
    ((void (*)(void))v72)();
  v30 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v73 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v70, "ui/");
  v31 = operator new(4u);
  LODWORD(v32) = sub_1588074;
  *v31 = v2;
  HIDWORD(v32) = sub_158801C;
  v68 = v31;
  v69 = v32;
  ResourcePack::forEachIn(v3, (int)&v70, (int)&v68, 1, 0);
  if ( (_DWORD)v69 )
    ((void (*)(void))v69)();
  v33 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v70 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v67, "gui/");
  v34 = operator new(4u);
  LODWORD(v35) = sub_1588104;
  *v34 = v2;
  HIDWORD(v35) = sub_15880AC;
  v65 = v34;
  v66 = v35;
  ResourcePack::forEachIn(v3, (int)&v67, (int)&v65, 1, 0);
  if ( (_DWORD)v66 )
    ((void (*)(void))v66)();
  v36 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v67 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v64, "blocks.json");
  v37 = *(_DWORD *)(v3 + 8);
  if ( v37 && (*(int (**)(void))(*(_DWORD *)v37 + 32))() )
    v38 = 1;
  else
    v38 = (*(int (**)(void))(**(_DWORD **)(v3 + 4) + 32))();
  v39 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v64 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  if ( v38 == 1 )
    ++*(_DWORD *)(v2 + 12);
}


void __fastcall ResourcePack::setLocale(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  int v4; // r0@1
  const void **v5; // r0@3
  char *v6; // r0@3
  int v7; // r1@5
  int v8; // r0@5
  int *v9; // r5@9
  int *i; // r6@9
  __int64 v11; // kr00_8@9
  char *v12; // r0@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  unsigned int *v15; // r2@17
  signed int v16; // r1@19
  int v17; // [sp+0h] [bp-20h]@5
  char *v18; // [sp+4h] [bp-1Ch]@3
  char *v19; // [sp+8h] [bp-18h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v2 + 8) = 0;
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  v18 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v18, *((_DWORD *)*v3 - 3) + 6);
  sub_21E7408((const void **)&v18, "texts/", 6u);
  sub_21E72F0((const void **)&v18, v3);
  v5 = sub_21E7408((const void **)&v18, "/", 1u);
  v19 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 32))() == 1 )
    (*(void (__fastcall **)(int *))(**(_DWORD **)(v2 + 4) + 60))(&v17);
    v7 = v17;
    v17 = 0;
    v8 = *(_DWORD *)(v2 + 8);
    *(_DWORD *)(v2 + 8) = v7;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v11 = *(_QWORD *)(v2 + 120);
  v9 = (int *)(*(_QWORD *)(v2 + 120) >> 32);
  for ( i = (int *)v11; v9 != i; ++i )
    ResourcePack::setLocale(*i, (int)v3);
  v12 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v19 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


void __fastcall ResourcePack::gatherBehaviorPackTelemetry(ResourcePack *this, int a2)
{
  ResourcePack *v2; // r4@1
  int v3; // r5@1
  int *v4; // r5@1
  int *v5; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // t1@2

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  ResourcePack::_gatherBehaviorPackTelemetry(a2, (int)this);
  v6 = *(_QWORD *)(v3 + 120);
  v4 = (int *)(*(_QWORD *)(v3 + 120) >> 32);
  v5 = (int *)v6;
  while ( v4 != v5 )
  {
    v7 = *v5;
    ++v5;
    ResourcePack::_gatherBehaviorPackTelemetry(v7, (int)v2);
  }
}


      if ( v7 >= ResourcePack::getPackOrigin(*v3) )
{
        v16 = (ResourcePack **)((unsigned int)v16 & 0xFFFFFF00);
        sub_159C80C(v6);
      }
      else
      {
        v8 = *v6;
        *v6 = 0;
        if ( (char *)v6 - (char *)v3 >= 1 )
        {
          v9 = v5 + 1;
          v10 = -1;
          do
          {
            v11 = v6[v10];
            v6[v10] = 0;
            v12 = *v9;
            *v9 = v11;
            if ( v12 )
            {
              v13 = ResourcePack::~ResourcePack(v12);
              operator delete((void *)v13);
            }
            --v10;
            --v9;
          }
          while ( v6 - v3 + v10 + 2 > 1 );
        }
        v14 = *v3;
        *v3 = v8;
        if ( v14 )
          v15 = ResourcePack::~ResourcePack(v14);
          operator delete((void *)v15);
      result = v6 + 1;
      v5 = v6;
    }
    while ( v6 + 1 != v2 );
  }
  return result;
}


void __fastcall ResourcePack::_createSubpack(int a1, const void **a2)
{
  int v2; // r4@1
  const void **v3; // r6@1
  int v4; // r5@1
  void (__fastcall *v5)(int *, int, char **); // r7@1
  __int64 v6; // r0@1
  ResourcePack *v7; // r0@4
  char *v8; // r0@7
  unsigned int *v9; // r2@9
  signed int v10; // r1@11
  char *v11; // [sp+8h] [bp-28h]@1
  int v12; // [sp+Ch] [bp-24h]@1
  int v13; // [sp+10h] [bp-20h]@1
  ResourcePack *v14; // [sp+14h] [bp-1Ch]@1

  v2 = a1;
  v13 = 0;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = *(void (__fastcall **)(int *, int, char **))(*(_DWORD *)v4 + 60);
  v11 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v11, *((_DWORD *)*a2 - 3) + 10);
  sub_21E7408((const void **)&v11, "/subpacks/", 0xAu);
  sub_21E72F0((const void **)&v11, v3);
  v5(&v12, v4, &v11);
  j__ZSt11make_uniqueI12ResourcePackJDnSt10unique_ptrI18PackAccessStrategySt14default_deleteIS2_EEDnEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(
    &v14,
    (int)&v13,
    &v12);
  v6 = *(_QWORD *)(v2 + 124);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>,std::allocator<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>>::_M_emplace_back_aux<std::unique_ptr<ResourcePack,std::default_delete<ResourcePack>>>(
      (_QWORD *)(v2 + 120),
      (int *)&v14);
    if ( v14 )
    {
      v7 = ResourcePack::~ResourcePack(v14);
      operator delete((void *)v7);
    }
  }
  else
    HIDWORD(v6) = v14;
    v14 = 0;
    *(_DWORD *)v6 = HIDWORD(v6);
    *(_DWORD *)(v2 + 124) = v6 + 4;
  v14 = 0;
  if ( v12 )
    (*(void (**)(void))(*(_DWORD *)v12 + 4))();
  v12 = 0;
  v8 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


int __fastcall ResourcePack::isZipped(ResourcePack *this)
{
  int result; // r0@1

  result = (*(int (**)(void))(**((_DWORD **)this + 1) + 56))();
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall ResourcePack::ResourcePack(_WORD *a1, int *a2, int *a3, int *a4)
{
  int v4; // r4@1
  int v5; // r9@1
  int v6; // r0@1
  int *v7; // r5@1
  int v8; // r0@1
  SubpackInfoCollection **v9; // r10@1
  int v10; // r2@1
  PackManifest *v11; // r0@1
  char v12; // r7@3
  char *v13; // r6@3
  size_t v14; // r2@3
  char *v15; // r5@3
  const void **v16; // r5@10 OVERLAPPED
  const void **v17; // r6@10 OVERLAPPED
  unsigned int *v19; // r1@13
  signed int v20; // r0@15
  void *s1; // [sp+0h] [bp-30h]@3

  v4 = (int)a1;
  *a1 = 0;
  v5 = (int)(a1 + 8);
  v6 = *a3;
  v7 = a4;
  *a3 = 0;
  *(_DWORD *)(v4 + 4) = v6;
  *(_DWORD *)(v4 + 8) = 0;
  v8 = *a2;
  *a2 = 0;
  *(_DWORD *)(v4 + 12) = v8;
  PackReport::PackReport(v5);
  v9 = (SubpackInfoCollection **)(v4 + 132);
  *(_DWORD *)(v4 + 120) = 0;
  *(_DWORD *)(v4 + 124) = 0;
  *(_DWORD *)(v4 + 128) = 0;
  v10 = *v7;
  *v7 = 0;
  *(_DWORD *)(v4 + 132) = v10;
  sub_21E8AF4((int *)(v4 + 136), (int *)&Util::EMPTY_STRING);
  *(_DWORD *)(v4 + 144) = 0;
  *(_DWORD *)(v4 + 148) = 0;
  *(_BYTE *)(v4 + 152) = 0;
  v11 = *(PackManifest **)(v4 + 12);
  if ( v11 )
  {
    *(_BYTE *)v4 = PackManifest::isHidden(v11);
    ResourcePack::_generateIconPath((ResourcePack *)v4);
    (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 64))();
    if ( PackManifest::getPackType(*(PackManifest **)(v4 + 12)) == 2 )
    {
      PackManifest::getIdentity(*(PackManifest **)(v4 + 12));
      mce::UUID::asString((mce::UUID *)&s1);
      v12 = 0;
      v13 = (char *)s1;
      v15 = (char *)s1 - 12;
      v14 = *((_DWORD *)s1 - 3);
      if ( v14 == *(_DWORD *)(dword_27ECD64 - 12) && !memcmp(s1, (const void *)dword_27ECD64, v14) )
        v12 = 1;
      if ( (int *)v15 != &dword_28898C0 )
      {
        v19 = (unsigned int *)(v13 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      *(_BYTE *)(v4 + 152) = v12;
    }
    else
      *(_BYTE *)(v4 + 152) = ResourcePack::_isVanillaResource((ResourcePack *)v4);
  }
  if ( *v9 )
    for ( *(_QWORD *)&v16 = *(_QWORD *)SubpackInfoCollection::getSubpackInfo(*v9); v17 != v16; v16 += 3 )
      ResourcePack::_createSubpack(v4, v16);
  return v4;
}


void __fastcall ResourcePack::gatherResourcePackTelemetry(ResourcePack *this, int a2)
{
  int v2; // r5@1
  ResourcePack *v3; // r4@1
  int *v4; // r5@1
  int *v5; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // t1@2

  v2 = a2;
  v3 = this;
  _aeabi_memclr4(this, 44);
  ResourcePack::_gatherResourcePackTelemetry(v2, (int)v3);
  v6 = *(_QWORD *)(v2 + 120);
  v4 = (int *)(*(_QWORD *)(v2 + 120) >> 32);
  v5 = (int *)v6;
  while ( v4 != v5 )
  {
    v7 = *v5;
    ++v5;
    ResourcePack::_gatherResourcePackTelemetry(v7, (int)v3);
  }
}


void __fastcall ResourcePack::gatherResourcePackTelemetry(ResourcePack *this, int a2)
{
  ResourcePack::gatherResourcePackTelemetry(this, a2);
}


const void **__fastcall ResourcePack::getSubpackFolderName(ResourcePack *this, int a2)
{
  const void **result; // r0@3

  if ( a2 < 0 || (signed int)((*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15)) >> 2 <= a2 )
    result = &Util::EMPTY_STRING;
  else
    result = SubpackInfoCollection::getSubpackFolderName(*((SubpackInfoCollection **)this + 33), a2);
  return result;
}


void __fastcall ResourcePack::setLoadTime(ResourcePack *this, int a2, double _R2)
{
  ResourcePack::setLoadTime(this, a2, _R2);
}


int __fastcall ResourcePack::forEachIn(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r4@1
  int v8; // r7@1
  __int64 v9; // r0@2
  int v10; // r9@3
  void (__fastcall *v11)(char *, int, signed int); // r3@3
  int v12; // r5@7
  int (__fastcall *v13)(int, int, char *, int); // r7@7
  void (__fastcall *v14)(char *, int, signed int); // r3@7
  int result; // r0@9
  char v16; // [sp+4h] [bp-3Ch]@8
  int (*v17)(void); // [sp+Ch] [bp-34h]@7
  int v18; // [sp+10h] [bp-30h]@8
  char v19; // [sp+14h] [bp-2Ch]@4
  void (*v20)(void); // [sp+1Ch] [bp-24h]@3
  int v21; // [sp+20h] [bp-20h]@4

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  if ( a4 >= 0 )
  {
    v9 = *(_QWORD *)(a1 + 120);
    if ( (HIDWORD(v9) - (signed int)v9) >> 2 > a4 )
    {
      v10 = *(_DWORD *)(v9 + 4 * a4);
      v20 = 0;
      v11 = *(void (__fastcall **)(char *, int, signed int))(a3 + 8);
      if ( v11 )
      {
        v11(&v19, a3, 2);
        v21 = *(_DWORD *)(v6 + 12);
        v20 = *(void (**)(void))(v6 + 8);
      }
      ResourcePack::forEachIn(v10, v7, (int)&v19, v5, a5);
      if ( v20 )
        v20();
    }
  }
  v12 = *(_DWORD *)(v8 + 4);
  v13 = *(int (__fastcall **)(int, int, char *, int))(*(_DWORD *)v12 + 52);
  v17 = 0;
  v14 = *(void (__fastcall **)(char *, int, signed int))(v6 + 8);
  if ( v14 )
    v14(&v16, v6, 2);
    v18 = *(_DWORD *)(v6 + 12);
    v17 = *(int (**)(void))(v6 + 8);
  result = v13(v12, v7, &v16, a5);
  if ( v17 )
    result = v17();
  return result;
}


void __fastcall ResourcePack::setLoadTime(ResourcePack *this, int a2, double _R2)
{
  __asm
  {
    VMOV            D0, R2, R3
    VSTR            D0, [R0,#0x90]
  }
}


int __fastcall ResourcePack::hasExtraResourcesForLocale(int a1, const void **a2, int a3)
{
  const void **v3; // r5@1
  int v4; // r4@1
  __int64 v5; // r0@2
  int v6; // r4@4
  int v7; // r4@5
  int (__fastcall *v8)(int, char **); // r6@5
  const void **v9; // r0@5
  char *v10; // r0@5
  char *v11; // r0@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  char *v17; // [sp+4h] [bp-2Ch]@5
  char *v18; // [sp+8h] [bp-28h]@5

  v3 = a2;
  v4 = a1;
  if ( a3 >= 0
    && (v5 = *(_QWORD *)(a1 + 120), (HIDWORD(v5) - (signed int)v5) >> 2 > a3)
    && ResourcePack::hasExtraResourcesForLocale(*(_DWORD *)(v5 + 4 * a3), (int)v3, -1) )
  {
    v6 = 1;
  }
  else
    v7 = *(_DWORD *)(v4 + 4);
    v8 = *(int (__fastcall **)(int, char **))(*(_DWORD *)v7 + 32);
    v17 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v17, *((_DWORD *)*v3 - 3) + 6);
    sub_21E7408((const void **)&v17, "texts/", 6u);
    sub_21E72F0((const void **)&v17, v3);
    v9 = sub_21E7408((const void **)&v17, "/", 1u);
    v18 = (char *)*v9;
    *v9 = &unk_28898CC;
    v6 = v8(v7, &v18);
    v10 = v18 - 12;
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
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
        j_j_j_j__ZdlPv_9(v10);
    }
    v11 = v17 - 12;
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  return v6;
}


int *__fastcall ResourcePack::getIconZipPath(ResourcePack *this, int a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int *v4; // r1@2

  v2 = a2;
  v3 = (int *)this;
  if ( (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 56))() == 1 )
    v4 = (int *)(v2 + 136);
  else
    v4 = (int *)&Util::EMPTY_STRING;
  return sub_21E8AF4(v3, v4);
}


void __fastcall ResourcePack::getTexturesList(ResourcePack *this, int a2, int a3)
{
  ResourcePack::getTexturesList(this, a2, a3);
}


signed int __fastcall ResourcePack::_isVanillaResource(ResourcePack *this)
{
  signed int v1; // r4@5
  _BYTE *v2; // r0@6
  unsigned int *v4; // r2@9
  signed int v5; // r1@11
  _BYTE *v6; // [sp+4h] [bp-1Ch]@1

  PackManifest::getIdentity(*((PackManifest **)this + 3));
  mce::UUID::asString((mce::UUID *)&v6);
  if ( Util::compareNoCase(*((_DWORD *)v6 - 3), v6, *(_DWORD *)(dword_27ECD68 - 12), (_BYTE *)dword_27ECD68)
    || Util::compareNoCase(*((_DWORD *)v6 - 3), v6, *(_DWORD *)(dword_27ECD6C - 12), (_BYTE *)dword_27ECD6C)
    || Util::compareNoCase(*((_DWORD *)v6 - 3), v6, *(_DWORD *)(dword_27ECD80 - 12), (_BYTE *)dword_27ECD80)
    || Util::compareNoCase(*((_DWORD *)v6 - 3), v6, *(_DWORD *)(dword_27ECD74 - 12), (_BYTE *)dword_27ECD74) )
  {
    v1 = 1;
  }
  else
    v1 = Util::compareNoCase(*((_DWORD *)v6 - 3), v6, *(_DWORD *)(dword_27ECD84 - 12), (_BYTE *)dword_27ECD84);
  v2 = v6 - 12;
  if ( (int *)(v6 - 12) != &dword_28898C0 )
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
  return v1;
}
