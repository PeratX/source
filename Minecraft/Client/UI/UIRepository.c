

UIRepository *__fastcall UIRepository::~UIRepository(UIRepository *this)
{
  UIRepository *v1; // r4@1
  int v2; // r5@1
  int v3; // r6@5
  char *v4; // r0@6

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  if ( v2 )
  {
    do
    {
      UITextureInfoPtr::onGroupDestroyed(*(UITextureInfoPtr **)(v2 + 4));
      v2 = *(_DWORD *)v2;
    }
    while ( v2 );
    v2 = *((_DWORD *)v1 + 9);
  }
      v3 = *(_DWORD *)v2;
      operator delete((void *)v2);
      v2 = v3;
    while ( v3 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 28), 4 * (*(_QWORD *)((char *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 9) = 0;
  *((_DWORD *)v1 + 10) = 0;
  v4 = (char *)*((_DWORD *)v1 + 7);
  if ( v4 && (char *)v1 + 52 != v4 )
    operator delete(v4);
  std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,UITextureInfo>,std::_Select1st<std::pair<ResourceLocation const,UITextureInfo>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,UITextureInfo>>>::_M_erase(
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


int __fastcall UIRepository::UIRepository(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  void *v4; // r5@3
  int result; // r0@4

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  LODWORD(a1) += 4;
  *(_DWORD *)(v1 + 12) = LODWORD(a1);
  *(_DWORD *)(v1 + 16) = LODWORD(a1);
  *(_DWORD *)(v1 + 24) = HIDWORD(a1);
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 1065353216;
  LODWORD(a1) = v1 + 44;
  v2 = sub_119C844(a1);
  *(_DWORD *)(v1 + 32) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 52) = 0;
    v4 = (void *)(v1 + 52);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_119C874();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  result = v1;
  *(_DWORD *)(v1 + 28) = v4;
  return result;
}


int __fastcall UIRepository::clearLoadedUITextureInfo(UIRepository *this)
{
  UIRepository *v1; // r4@1
  __int64 v2; // r0@1
  int i; // r4@1

  v1 = this;
  std::_Rb_tree<ResourceLocation,std::pair<ResourceLocation const,UITextureInfo>,std::_Select1st<std::pair<ResourceLocation const,UITextureInfo>>,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,UITextureInfo>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  v2 = (unsigned int)v1 + 4;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_QWORD *)v1 + 2) = v2;
  for ( i = *((_DWORD *)v1 + 9); i; i = *(_DWORD *)i )
    LODWORD(v2) = UITextureInfoPtr::onGroupReloaded(*(UITextureInfoPtr **)(i + 4), 0, 0);
  return v2;
}


Json::Reader *__fastcall UIRepository::_loadUITextureInfo(UIRepository *this, const ResourceLocation *a2, UITextureInfo *a3)
{
  UIRepository *v3; // r6@1
  UITextureInfo *v4; // r5@1
  const ResourceLocation *v5; // r4@1
  int v6; // r6@1
  void (__fastcall *v7)(int, char **, char **); // r7@1
  int v8; // r2@1
  char *v9; // r0@1
  char *v10; // r0@2
  char *v11; // r0@3
  unsigned int *v13; // r2@5
  signed int v14; // r1@7
  unsigned int *v15; // r2@9
  signed int v16; // r1@11
  unsigned int *v17; // r2@13
  signed int v18; // r1@15
  int v19; // [sp+0h] [bp-A8h]@3
  char *v20; // [sp+10h] [bp-98h]@1
  char *v21; // [sp+14h] [bp-94h]@1
  int v22; // [sp+18h] [bp-90h]@1
  char *v23; // [sp+1Ch] [bp-8Ch]@1
  char v24; // [sp+20h] [bp-88h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  Json::Reader::Reader((Json::Reader *)&v24);
  v23 = (char *)&unk_28898CC;
  v6 = *((_DWORD *)v3 + 6);
  v7 = *(void (__fastcall **)(int, char **, char **))(*(_DWORD *)v6 + 8);
  sub_119C854((int *)&v20, (int *)v5);
  sub_119C894((const void **)&v20, ".json", 5u);
  v8 = *((_DWORD *)v5 + 1);
  v21 = v20;
  v22 = v8;
  v20 = (char *)&unk_28898CC;
  v7(v6, &v21, &v23);
  v9 = v21 - 12;
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  }
  v10 = v20 - 12;
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  Json::Value::Value(&v19, 0);
  Json::Reader::parse((int)&v24, (int *)&v23, (int)&v19, 1);
  UITextureInfo::load(v4, v5, (const Json::Value *)&v19);
  Json::Value::~Value((Json::Value *)&v19);
  v11 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  return Json::Reader::~Reader((Json::Reader *)&v24);
}


char *__fastcall UIRepository::_getUITextureInfo(UIRepository *this, const ResourceLocation *a2, int a3, int a4)
{
  char *v4; // r11@1
  const void **v5; // r7@1
  char *v6; // r1@1
  char *v7; // r4@1
  char *v8; // r5@1
  const void *v9; // r6@2
  char *v10; // r9@2
  size_t v11; // r8@2
  _DWORD *v12; // r0@4
  size_t v13; // r10@4
  size_t v14; // r2@4
  int v15; // r0@6
  _DWORD *v16; // r1@13
  unsigned int v17; // r4@13
  unsigned int v18; // r6@13
  size_t v19; // r2@13
  int v20; // r0@15
  char *v21; // r6@22
  int v23; // [sp+0h] [bp-30h]@1
  UIRepository *v24; // [sp+4h] [bp-2Ch]@1
  int v25; // [sp+8h] [bp-28h]@1

  v4 = (char *)this + 4;
  v5 = (const void **)a2;
  v6 = (char *)*((_DWORD *)this + 2);
  v7 = (char *)this + 4;
  v8 = (char *)this + 4;
  v23 = a4;
  v25 = a3;
  v24 = this;
  if ( v6 )
  {
    v9 = *v5;
    v10 = (char *)this + 4;
    v11 = *((_DWORD *)*v5 - 3);
    do
    {
      v8 = v6;
      while ( 1 )
      {
        v12 = (_DWORD *)*((_DWORD *)v8 + 4);
        v13 = *(v12 - 3);
        v14 = *(v12 - 3);
        if ( v13 > v11 )
          v14 = v11;
        v15 = memcmp(v12, v9, v14);
        if ( !v15 )
          v15 = v13 - v11;
        if ( v15 >= 0 )
          break;
        v8 = (char *)*((_DWORD *)v8 + 3);
        if ( !v8 )
        {
          v8 = v10;
          goto LABEL_12;
        }
      }
      v6 = (char *)*((_DWORD *)v8 + 2);
      v10 = v8;
    }
    while ( v6 );
  }
LABEL_12:
  if ( v8 != v4 )
    v16 = (_DWORD *)*((_DWORD *)v8 + 4);
    v17 = *((_DWORD *)*v5 - 3);
    v18 = *(v16 - 3);
    v19 = *((_DWORD *)*v5 - 3);
    if ( v17 > v18 )
      v19 = *(v16 - 3);
    v20 = memcmp(*v5, v16, v19);
    if ( !v20 )
      v20 = v17 - v18;
    if ( v20 < 0 )
      v8 = v4;
    v7 = v8;
  if ( v25 )
LABEL_24:
    v21 = std::map<ResourceLocation,UITextureInfo,std::less<ResourceLocation>,std::allocator<std::pair<ResourceLocation const,UITextureInfo>>>::operator[](
            (int)v24,
            v5);
    UIRepository::_loadUITextureInfo(v24, (const ResourceLocation *)v5, (UITextureInfo *)v21);
    return v21;
  if ( v7 == v4 )
    if ( v23 != 1 )
      return 0;
    goto LABEL_24;
  return v7 + 24;
}


void __fastcall UIRepository::_addRef(UIRepository *this, UITextureInfoPtr *a2)
{
  UIRepository *v2; // r9@1
  unsigned int v3; // r10@1
  void *v4; // r0@1
  void *v5; // r8@1
  int v6; // r9@1
  int v7; // t1@1
  int v8; // r7@1
  int *v9; // r0@1
  int v10; // r4@2
  int v11; // r5@4
  bool v12; // zf@7

  v2 = this;
  v3 = (unsigned int)a2;
  v4 = operator new(8u);
  v5 = v4;
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = v3;
  v7 = *((_DWORD *)v2 + 7);
  v6 = (int)v2 + 28;
  v8 = v3 % *(_DWORD *)(v6 + 4);
  v9 = *(int **)(v7 + 4 * v8);
  if ( !v9 )
    goto LABEL_11;
  v10 = *v9;
  while ( *(_DWORD *)(v10 + 4) != v3 )
  {
    v11 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
    {
      v9 = (int *)v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v11 + 4) % *(_DWORD *)(v6 + 4) == v8 )
        continue;
    }
  }
  v12 = v9 == 0;
  if ( v9 )
    v12 = *v9 == 0;
  if ( v12 )
LABEL_11:
    j_j_j__ZNSt10_HashtableIP16UITextureInfoPtrS1_SaIS1_ENSt8__detail9_IdentityESt8equal_toIS1_ESt4hashIS1_ENS3_18_Mod_range_hashingENS3_20_Default_ranged_hashENS3_20_Prime_rehash_policyENS3_17_Hashtable_traitsILb0ELb1ELb1EEEE21_M_insert_unique_nodeEjjPNS3_10_Hash_nodeIS1_Lb0EEE(
      v6,
      v3 % *(_DWORD *)(v6 + 4),
      v3,
      (int)v5);
  else
    j_j_j__ZdlPv_4(v5);
}


int __fastcall UIRepository::reloadGroup(int result)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(result + 36); i; i = *(_DWORD *)i )
    result = (int)UITextureInfoPtr::onGroupReloaded(*(UITextureInfoPtr **)(i + 4), 0, 0);
  return result;
}


void __fastcall UIRepository::_addRef(UIRepository *this, UITextureInfoPtr *a2)
{
  UIRepository::_addRef(this, a2);
}


UITextureInfoPtr *__fastcall UIRepository::_removeRef(UIRepository *this, UITextureInfoPtr *a2)
{
  UIRepository *v2; // r9@1
  UITextureInfoPtr *v3; // r7@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@1
  int v6; // r4@1
  UITextureInfoPtr *result; // r0@1
  unsigned int v8; // r1@1
  unsigned int v9; // r11@1
  void **v10; // r10@1
  void **v11; // r8@2
  void **v12; // r4@2
  unsigned int v13; // r0@5
  int v14; // r1@5
  void **v15; // r7@8
  int v16; // r1@10
  _DWORD *v17; // r5@13
  int v18; // r1@14
  int v19; // r1@15
  int v20; // [sp+0h] [bp-28h]@1

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 8);
  v5 = (unsigned int)a2;
  v6 = *((_DWORD *)v2 + 7);
  v20 = *((_DWORD *)v2 + 7);
  v8 = (unsigned int)a2 % v4;
  result = (UITextureInfoPtr *)(v5 / v4);
  v9 = v8;
  v10 = *(void ***)(v6 + 4 * v8);
  if ( v10 )
  {
    v11 = (void **)*v10;
    v12 = *(void ***)(v6 + 4 * v8);
    while ( 1 )
    {
      result = (UITextureInfoPtr *)v11[1];
      if ( result == v3 )
        break;
      if ( *v11 )
      {
        v13 = *((_DWORD *)*v11 + 1);
        v14 = v13 % v4;
        result = (UITextureInfoPtr *)(v13 / v4);
        v12 = v11;
        v11 = (void **)*v11;
        if ( v14 == v9 )
          continue;
      }
      return result;
    }
    if ( v12 )
      v15 = (void **)*v12;
      if ( v10 != v12 )
        if ( *v15 )
        {
          v16 = *((_DWORD *)*v15 + 1) % v4;
          if ( v16 != v9 )
            *(_DWORD *)(v20 + 4 * v16) = v12;
        }
        goto LABEL_20;
      v17 = *v15;
      if ( *v15 )
        v18 = v17[1] % v4;
        if ( v18 == v9 )
LABEL_20:
          *v12 = *v15;
          operator delete(v15);
          result = (UITextureInfoPtr *)(*((_DWORD *)v2 + 10) - 1);
          *((_DWORD *)v2 + 10) = result;
          return result;
        *(_DWORD *)(v20 + 4 * v18) = v10;
        v19 = *((_DWORD *)v2 + 7);
        v10 = *(void ***)(v19 + 4 * v9);
      else
      if ( (void **)((char *)v2 + 36) == v10 )
        *v10 = v17;
      *(_DWORD *)(v19 + 4 * v9) = 0;
      goto LABEL_20;
  }
  return result;
}
