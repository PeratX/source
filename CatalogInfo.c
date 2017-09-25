

void __fastcall CatalogInfo::get<std::string>(int *a1, Json::Value *a2, const char **a3, int *a4)
{
  CatalogInfo::get<std::string>(a1, a2, a3, a4);
}


RakNet *__fastcall CatalogInfo::save(CatalogInfo *this)
{
  CatalogInfo *v1; // r4@1
  const Json::Value *v2; // r0@1
  unsigned int v3; // r7@1
  unsigned int v4; // r9@1
  unsigned __int64 v5; // r2@1
  void *v6; // r0@1
  RakNet *result; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  RakNet *v10; // [sp+4h] [bp-112Ch]@1
  int v11; // [sp+8h] [bp-1128h]@1
  char v12; // [sp+Ch] [bp-1124h]@1
  __int64 v13[2]; // [sp+30h] [bp-1100h]@1
  void **v14; // [sp+40h] [bp-10F0h]@1
  int v15; // [sp+44h] [bp-10ECh]@1
  void **v16; // [sp+48h] [bp-10E8h]@1
  int v17; // [sp+4Ch] [bp-10E4h]@1
  void **v18; // [sp+107Ch] [bp-B4h]@1
  int v19; // [sp+10ECh] [bp-44h]@1
  __int16 v20; // [sp+10F0h] [bp-40h]@1
  int v21; // [sp+10F4h] [bp-3Ch]@1
  int v22; // [sp+10F8h] [bp-38h]@1
  int v23; // [sp+10FCh] [bp-34h]@1
  int v24; // [sp+1100h] [bp-30h]@1

  v1 = this;
  v10 = _stack_chk_guard;
  Json::StyledWriter::StyledWriter((Json::StyledWriter *)&v12);
  v2 = (const Json::Value *)PropertyBag::toJsonValue(v1);
  Json::StyledWriter::write((Json::StyledWriter *)&v11, (const Json::Value *)&v12, v2);
  v3 = *((_DWORD *)v1 + 6);
  v4 = *(_DWORD *)(v3 - 12);
  sub_119D70C((int)&v18);
  v18 = &off_26D3AF0;
  v19 = 0;
  v20 = 0;
  v24 = 0;
  v23 = 0;
  v22 = 0;
  v21 = 0;
  v13[0] = __PAIR__(v4, v3);
  Core::FileStream::FileStream((int)&v14, (int)off_26D81A4, v13, 16);
  v14 = &off_26D8170;
  v18 = &off_26D8198;
  v16 = &off_26D8184;
  sub_119C904((char *)&v16, v11, *(_DWORD *)(v11 - 12));
  v14 = &off_26D679C;
  v18 = &off_26D67C4;
  v16 = &off_26D67B0;
  Core::FileStdStreamBuf::~FileStdStreamBuf((Core::FileStdStreamBuf *)&v17, (int)&off_26D67C4, v5);
  v14 = &off_26D67DC;
  v18 = &off_26D67F0;
  v15 = 0;
  sub_119C964(&v18);
  v6 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  }
  Json::StyledWriter::~StyledWriter((Json::StyledWriter *)&v12);
  result = (RakNet *)(_stack_chk_guard - v10);
  if ( _stack_chk_guard != v10 )
    _stack_chk_fail(result);
  return result;
}


Json::Value *__fastcall CatalogInfo::setOfferViewed(Json::Value *a1, const char **a2)
{
  const char **v2; // r6@1
  Json::Value *v3; // r5@1
  Json::Value *v4; // r5@1
  void *v5; // r0@1
  Json::Value *result; // r0@2
  int v7; // r4@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+0h] [bp-30h]@3
  int v11; // [sp+18h] [bp-18h]@1

  v2 = a2;
  v3 = a1;
  sub_119C884((void **)&v11, "newProductIds");
  v4 = (Json::Value *)Json::Value::operator[](v3, (const char **)&v11);
  v5 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v11 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  result = (Json::Value *)Json::Value::isMember((int)v4, v2);
  if ( result == (Json::Value *)1 )
    v7 = Json::Value::operator[](v4, v2);
    Json::Value::Value((Json::Value *)&v10, 0);
    Json::Value::operator=(v7, (const Json::Value *)&v10);
    result = Json::Value::~Value((Json::Value *)&v10);
  return result;
}


void __fastcall CatalogInfo::get<std::string>(int *a1, Json::Value *a2, const char **a3, int *a4)
{
  Json::Value *v4; // r5@1
  int *v5; // r4@1
  const char *v6; // r6@1
  Json::Value *v7; // r5@3
  char *v8; // r1@4
  char *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  char *v12; // [sp+0h] [bp-20h]@1
  char v13; // [sp+8h] [bp-18h]@4

  v4 = a2;
  v5 = a1;
  v6 = *a3;
  sub_DA73B4((int *)&v12, a4);
  if ( Json::Value::isNull(v4)
    || Json::Value::isObject(v4) != 1
    || (v7 = (Json::Value *)Json::Value::operator[]((int)v4, v6), Json::Value::isString(v7) != 1) )
  {
    *v5 = (int)v12;
    v8 = (char *)&unk_28898CC;
    v12 = (char *)&unk_28898CC;
  }
  else
    jsonValConversion<std::string>::as(v5, (int)&v13, (int)v7);
    v8 = v12;
  v9 = v8 - 12;
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9(v9);
}


Json::Reader *__fastcall CatalogInfo::_load(CatalogInfo *this)
{
  CatalogInfo *v1; // r4@1
  void *v2; // r0@2
  int v3; // r5@4
  void (__fastcall *v4)(int *, int, int *); // r6@4
  void *v5; // r0@4
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  int v12; // [sp+0h] [bp-B8h]@5
  int v13; // [sp+10h] [bp-A8h]@5
  int v14; // [sp+18h] [bp-A0h]@4
  int v15; // [sp+1Ch] [bp-9Ch]@4
  char v16; // [sp+20h] [bp-98h]@1
  char v17; // [sp+30h] [bp-88h]@1

  v1 = this;
  Json::Reader::Reader((Json::Reader *)&v17);
  Json::Value::Value(&v16, 0);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  v3 = *(_DWORD *)v2;
  v4 = *(void (__fastcall **)(int *, int, int *))(**(_DWORD **)v2 + 376);
  sub_119C884((void **)&v14, *((const char **)v1 + 6));
  v4(&v15, v3, &v14);
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v14 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  Json::Reader::parse((int)&v17, &v15, (int)&v16, 1);
  PropertyBag::PropertyBag((Json::Value *)&v12, (const Json::Value *)&v16);
  Json::Value::operator=((int)v1, (const Json::Value *)&v12);
  *((_DWORD *)v1 + 4) = v13;
  Json::Value::~Value((Json::Value *)&v12);
  v6 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v15 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v6);
  Json::Value::~Value((Json::Value *)&v16);
  return Json::Reader::~Reader((Json::Reader *)&v17);
}


Json::Value *__fastcall CatalogInfo::~CatalogInfo(CatalogInfo *this)
{
  Json::Value *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  Json::Value::~Value(v1);
  return v1;
}


signed int __fastcall CatalogInfo::hasNewOffer(CatalogInfo *this)
{
  CatalogInfo *v1; // r4@1
  void *v2; // r4@1
  void *v3; // r0@1
  Json::Value *v4; // r0@3
  signed int result; // r0@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // [sp+0h] [bp-28h]@2
  char v9; // [sp+8h] [bp-20h]@2
  int v10; // [sp+14h] [bp-14h]@1

  v1 = this;
  sub_119C884((void **)&v10, "newProductIds");
  v2 = Json::Value::operator[]((int)v1, (const char **)&v10);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  Json::Value::begin((Json::Value *)&v9, (int)v2);
  Json::Value::end((Json::Value *)&v8, (int)v2);
  if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v9, (const Json::ValueIteratorBase *)&v8) )
LABEL_5:
    result = 0;
  else
    while ( 1 )
      v4 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v9);
      if ( Json::Value::asBool(v4, 0) )
        break;
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v9);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v9, (const Json::ValueIteratorBase *)&v8) == 1 )
        goto LABEL_5;
    result = 1;
  return result;
}


signed int __fastcall CatalogInfo::isOfferNew(int a1, const char **a2)
{
  const char **v2; // r6@1
  int v3; // r5@1
  void *v4; // r5@1
  void *v5; // r0@1
  Json::Value *v6; // r0@3
  signed int result; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_119C884((void **)&v10, "newProductIds");
  v4 = Json::Value::operator[](v3, (const char **)&v10);
  v5 = (void *)(v10 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  if ( Json::Value::isMember((int)v4, v2) == 1 )
    v6 = (Json::Value *)Json::Value::operator[]((int)v4, v2);
    result = Json::Value::asBool(v6, 0);
  else
    result = 0;
  return result;
}


_DWORD *__fastcall CatalogInfo::CatalogInfo(_DWORD *a1)
{
  _DWORD *v1; // r4@1
  void *v2; // r0@2
  int v3; // r1@4
  void *v4; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-2Ch]@4
  int v9; // [sp+8h] [bp-28h]@4
  int v10; // [sp+Ch] [bp-24h]@4
  const char *v11; // [sp+10h] [bp-20h]@4
  int v12; // [sp+14h] [bp-1Ch]@4

  v1 = a1;
  PropertyBag::PropertyBag(a1);
  if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
    v2 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
  else
    v2 = &ServiceLocator<AppPlatform>::mDefaultService;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v2 + 280))(&v8);
  v3 = *(_DWORD *)(v8 - 12);
  v9 = v8;
  v10 = v3;
  v11 = "catalog_info.json";
  v12 = -1;
  Core::PathBuffer<std::string>::_join<Core::PathPart>((const void **)v1 + 6, (unsigned int)&v9, 2u);
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  }
  CatalogInfo::_load((CatalogInfo *)v1);
  return v1;
}
