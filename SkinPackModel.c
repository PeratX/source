

int __fastcall SkinPackModel::decrementFirstVisibleSkinIndex(int result, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(result + 48) - a2;
  if ( v2 < 0 )
    v2 = 0;
  *(_DWORD *)(result + 48) = v2;
  return result;
}


int __fastcall SkinPackModel::setMetaData(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1

  v2 = a1;
  v3 = a2;
  EntityInteraction::setInteractText((int *)(a1 + 24), a2);
  EntityInteraction::setInteractText((int *)(v2 + 28), v3 + 1);
  return j_j_j__ZN4Json5ValueaSERKS0__1(v2 + 32, (const Json::Value *)(v3 + 2));
}


SkinPack *__fastcall SkinPackModel::setSelectedSkin(SkinPackModel *this, int a2)
{
  SkinRepositoryClientInterface **v2; // r4@1
  int v3; // r5@1
  SkinPack *result; // r0@1

  v2 = (SkinRepositoryClientInterface **)this;
  v3 = a2;
  result = SkinRepositoryClientInterface::getSkinPackById(
             *(SkinRepositoryClientInterface **)this,
             (SkinPackModel *)((char *)this + 8));
  if ( result )
  {
    result = (SkinPack *)SkinPack::getSkinAt(result, v3);
    if ( result )
      result = j_j_j__ZN29SkinRepositoryClientInterface15setSelectedSkinEPK4Skin(*v2, result);
  }
  return result;
}


SkinPack *__fastcall SkinPackModel::getLocName(SkinPackModel *this)
{
  SkinPackModel *v1; // r4@1
  SkinPack *result; // r0@1
  signed int v3; // r1@2

  v1 = this;
  result = SkinRepositoryClientInterface::getSkinPackById(
             *(SkinRepositoryClientInterface **)this,
             (SkinPackModel *)((char *)this + 8));
  if ( result )
  {
    result = (SkinPack *)SkinPack::getLocName(result);
    v3 = 0;
  }
  else
    v3 = 1;
  if ( v3 )
    result = (SkinPackModel *)((char *)v1 + 28);
  return result;
}


int __fastcall SkinPackModel::incrementFirstVisibleSkinIndex(SkinPackModel *this, int a2)
{
  SkinPackModel *v2; // r4@1
  int v3; // r5@1
  const mce::UUID *v4; // r6@1
  SkinPack *v5; // r0@1
  char *v6; // r0@2
  int result; // r0@2
  int v8; // r0@5
  int v9; // r7@5
  SkinPack *v10; // r0@5
  char *v11; // r0@6
  int v12; // r0@6
  SkinPack *v13; // r0@9
  char *v14; // r0@10
  int v15; // r0@10

  v2 = this;
  v3 = a2;
  v4 = (SkinPackModel *)((char *)this + 8);
  v5 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v5 )
  {
    v6 = SkinPack::getSkins(v5);
    result = -991146299 * ((signed int)((*(_QWORD *)v6 >> 32) - *(_QWORD *)v6) >> 2);
  }
  else
    result = 0;
  if ( result > v3 )
    v8 = *((_DWORD *)v2 + 12);
    v9 = v8 + v3;
    *((_DWORD *)v2 + 12) = v8 + v3;
    v10 = SkinRepositoryClientInterface::getSkinPackById(*(SkinRepositoryClientInterface **)v2, v4);
    if ( v10 )
    {
      v11 = SkinPack::getSkins(v10);
      v12 = -991146299 * ((signed int)((*(_QWORD *)v11 >> 32) - *(_QWORD *)v11) >> 2);
    }
    else
      v12 = 0;
    result = v12 - v3;
    if ( v9 > result )
      v13 = SkinRepositoryClientInterface::getSkinPackById(*(SkinRepositoryClientInterface **)v2, v4);
      if ( v13 )
      {
        v14 = SkinPack::getSkins(v13);
        v15 = -991146299 * ((signed int)((*(_QWORD *)v14 >> 32) - *(_QWORD *)v14) >> 2);
      }
      else
        v15 = 0;
      result = v15 - v3;
      *((_DWORD *)v2 + 12) = result;
  return result;
}


int __fastcall SkinPackModel::isSkinLocked(SkinPackModel *this, int a2)
{
  SkinPackModel *v2; // r5@1
  int v3; // r4@1
  Entitlement *v4; // r0@1
  int result; // r0@3
  SkinPack *v6; // r0@4
  Skin *v7; // r0@5

  v2 = this;
  v3 = a2;
  v4 = (Entitlement *)*((_DWORD *)this + 1);
  if ( v4 && !Entitlement::isOwned(v4) )
  {
    v6 = SkinRepositoryClientInterface::getSkinPackById(
           *(SkinRepositoryClientInterface **)v2,
           (SkinPackModel *)((char *)v2 + 8));
    if ( v6 && (v7 = (Skin *)SkinPack::getSkinAt(v6, v3)) != 0 )
      result = (Skin::isFree(v7) ^ 1) & 1;
    else
      result = 0;
  }
  else
    result = 0;
  return result;
}


SkinPack *__fastcall SkinPackModel::_getSkinPack(SkinPackModel *this)
{
  return j_j_j__ZNK29SkinRepositoryClientInterface15getSkinPackByIdERKN3mce4UUIDE(
           *(SkinRepositoryClientInterface **)this,
           (SkinPackModel *)((char *)this + 8));
}


char *__fastcall SkinPackModel::getSkinName(SkinPackModel *this, int a2)
{
  int v2; // r4@1
  SkinPack *v3; // r0@1
  Skin *v4; // r0@2
  char *result; // r0@3

  v2 = a2;
  v3 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v3 && (v4 = (Skin *)SkinPack::getSkinAt(v3, v2)) != 0 )
    result = j_j_j__ZNK4Skin10getLocNameEv(v4);
  else
    result = (char *)&Util::EMPTY_STRING;
  return result;
}


int __fastcall SkinPackModel::SkinPackModel(int a1, int a2, __int64 a3)
{
  int v3; // r5@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r1@1

  v3 = a1;
  *(_QWORD *)a1 = a3;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 12);
  v7 = a1 + 8;
  *(_DWORD *)v7 = v4;
  *(_DWORD *)(v7 + 4) = v5;
  *(_DWORD *)(v7 + 8) = v6;
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  *(_DWORD *)(a1 + 28) = &unk_28898CC;
  Json::Value::Value((_DWORD *)(a1 + 32), 0);
  *(_DWORD *)(v3 + 48) = 0;
  return v3;
}


char *__fastcall SkinPackModel::getSkinSerializableName(SkinPackModel *this, int a2)
{
  int v2; // r4@1
  SkinPack *v3; // r0@1
  Skin *v4; // r0@2
  char *result; // r0@3

  v2 = a2;
  v3 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v3 && (v4 = (Skin *)SkinPack::getSkinAt(v3, v2)) != 0 )
    result = j_j_j__ZNK4Skin15getSerializableEv(v4);
  else
    result = (char *)&Util::EMPTY_STRING;
  return result;
}


int __fastcall SkinPackModel::isValidInMultiplayer(SkinPackModel *this)
{
  SkinPack *v1; // r0@1
  Pack *v2; // r0@2
  PackManifest *v3; // r0@2
  int result; // r0@2

  v1 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v1 )
  {
    v2 = (Pack *)SkinPack::getPack(v1);
    v3 = (PackManifest *)Pack::getManifest(v2);
    result = (PackManifest::isPlatformLocked(v3) ^ 1) & 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall SkinPackModel::setFirstVisibleSkinIndex(int result, int a2)
{
  *(_DWORD *)(result + 48) = a2;
  return result;
}


int __fastcall SkinPackModel::_getSkin(SkinPackModel *this, int a2)
{
  int v2; // r4@1
  SkinPack *v3; // r0@1
  int result; // r0@2

  v2 = a2;
  v3 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v3 )
  {
    result = SkinPack::getSkinAt(v3, v2);
    if ( !result )
      result = 0;
  }
  else
    result = 0;
  return result;
}


      if ( v9 > SkinPackModel::getSkinPickerOrder(v8) )
{
      *(_DWORD *)(v4 + 4 * v7) = *(_DWORD *)(v4 + 4 * v5);
      v7 = v5;
    }
    while ( v5 < v6 );
  }
  result = v17;
  if ( v17 & 1 )
  {
    v13 = v5;
    v11 = v16;
    v12 = v18;
  else
    result = v17 - 2 + ((unsigned int)(v17 - 2) >> 31);
    if ( v5 == (v17 - 2) / 2 )
    {
      v13 = 2 * v5 | 1;
      result = *(_DWORD *)(v4 + 4 * v13);
      *(_DWORD *)(v4 + 4 * v5) = result;
    else
      v13 = v5;
  if ( v13 <= v12 )
    v14 = v13;
    while ( 1 )
      v14 = (v13 - 1) / 2;
      v15 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)(v4 + 4 * v14));
      result = SkinPackModel::getSkinPickerOrder(v11);
      if ( v15 <= result )
        break;
      result = *(_DWORD *)(v4 + 4 * v14);
      *(_DWORD *)(v4 + 4 * v13) = result;
      v13 = (v13 - 1) / 2;
      if ( v14 <= v12 )
        goto LABEL_17;
LABEL_17:
  *(_DWORD *)(v4 + 4 * v14) = v11;
  return result;
}


int __fastcall SkinPackModel::getNumSkins(SkinPackModel *this)
{
  SkinPack *v1; // r0@1
  int result; // r0@2
  char *v3; // r0@3

  v1 = SkinRepositoryClientInterface::getSkinPackById(
         *(SkinRepositoryClientInterface **)this,
         (SkinPackModel *)((char *)this + 8));
  if ( v1 )
  {
    v3 = SkinPack::getSkins(v1);
    result = -991146299 * ((signed int)((*(_QWORD *)v3 >> 32) - *(_QWORD *)v3) >> 2);
  }
  else
    result = 0;
  return result;
}


    if ( v13 <= SkinPackModel::getSkinPickerOrder(v12) )
{
      v17 = *(v5 - 1);
      v18 = SkinPackModel::getSkinPickerOrder(*v9);
      if ( v18 > SkinPackModel::getSkinPickerOrder(v17) )
      {
        v19 = *(_QWORD *)v6;
        *(_DWORD *)v6 = *(_QWORD *)v6 >> 32;
        *(_DWORD *)(v6 + 4) = v19;
        goto LABEL_15;
      }
      v22 = *(v5 - 1);
      v23 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)(v6 + 4 * v11));
      LODWORD(v16) = SkinPackModel::getSkinPickerOrder(v22);
      HIDWORD(v16) = *(_DWORD *)v6;
      if ( v23 > (signed int)v16 )
        goto LABEL_12;
      LODWORD(v16) = *(_DWORD *)(v6 + 4 * v11);
    }
    else
    {
      v14 = *(v5 - 1);
      v15 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)(v6 + 4 * v11));
      if ( v15 <= SkinPackModel::getSkinPickerOrder(v14) )
        v20 = *(v5 - 1);
        v21 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)(v6 + 4));
        LODWORD(v16) = SkinPackModel::getSkinPickerOrder(v20);
        HIDWORD(v16) = *(_DWORD *)v6;
        if ( v21 <= (signed int)v16 )
        {
          LODWORD(v16) = *(_DWORD *)(v6 + 4);
          *(_QWORD *)v6 = v16;
          goto LABEL_15;
        }
LABEL_12:
        *(_DWORD *)v6 = *(v5 - 1);
        *(v5 - 1) = (SkinPackModel *)HIDWORD(v16);
    *(_DWORD *)v6 = v16;
    *(_DWORD *)(v6 + 4 * v11) = HIDWORD(v16);
LABEL_15:
    v24 = v5;
    v25 = v6 + 4;
    while ( 1 )
      v27 = *(SkinPackModel **)v6;
      v28 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)v25);
      if ( v28 > SkinPackModel::getSkinPickerOrder(v27) )
        do
          v29 = *(SkinPackModel **)v6;
          v30 = *(SkinPackModel **)(v25 + 4);
          v25 += 4;
          v31 = SkinPackModel::getSkinPickerOrder(v30);
        while ( v31 > SkinPackModel::getSkinPickerOrder(v29) );
      do
        v32 = *(v24 - 1);
        --v24;
        v33 = SkinPackModel::getSkinPickerOrder(*(SkinPackModel **)v6);
      while ( v33 > SkinPackModel::getSkinPickerOrder(v32) );
      if ( v25 >= (unsigned int)v24 )
        break;
      v26 = *(SkinPackModel **)v25;
      *(_DWORD *)v25 = *v24;
      v25 += 4;
      *v24 = v26;
    v8 = v37;
    v4 = v4 & 0xFFFFFF00 | v36;
    result = sub_CFAED6(v25, v5, v37, v4);
    v7 = v25 - v6;
    v5 = (SkinPackModel **)v25;
    if ( (signed int)(v25 - v6) <= 64 )
      return result;
  }
  v34 = (v10 - 2) / 2;
  do
  {
    v8 = v8 & 0xFFFFFF00 | v36;
    result = sub_CFB08C(v6, v34, v7 >> 2, *(SkinPackModel **)(v6 + 4 * v34));
    --v34;
  while ( v34 != -1 );
  if ( v7 >= 5 )
    do
      v35 = *(v5 - 1);
      --v5;
      *v5 = *(SkinPackModel **)v6;
      result = sub_CFB08C(v6, 0, ((signed int)v5 - v6) >> 2, v35);
    while ( (signed int)v5 - v6 > 4 );
  return result;
}


_BOOL4 __fastcall SkinPackModel::isValid(SkinPackModel *this)
{
  return SkinRepositoryClientInterface::getSkinPackById(
           *(SkinRepositoryClientInterface **)this,
           (SkinPackModel *)((char *)this + 8)) != 0;
}


char *__fastcall SkinPackModel::getPackId(SkinPackModel *this)
{
  return (char *)this + 8;
}


char *__fastcall SkinPackModel::getMetaData(SkinPackModel *this)
{
  return (char *)this + 24;
}


int __fastcall SkinPackModel::getSkinPickerOrder(SkinPackModel *this)
{
  SkinPackModel *v1; // r4@1
  int v2; // r4@1
  int v4; // [sp+0h] [bp-30h]@1
  char v5; // [sp+10h] [bp-20h]@1

  v1 = this;
  Json::Value::Value((Json::Value *)&v4, 0);
  Json::Value::get(
    (Json::Value *)&v5,
    (const char *)v1 + 32,
    (const Json::Value *)"skinPickerOrder",
    (const Json::Value *)&v4);
  v2 = Json::Value::asInt((Json::Value *)&v5, 0);
  Json::Value::~Value((Json::Value *)&v5);
  Json::Value::~Value((Json::Value *)&v4);
  return v2;
}
