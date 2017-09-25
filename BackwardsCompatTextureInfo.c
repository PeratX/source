

char *__fastcall BackwardsCompatTextureInfo::getUVSize(BackwardsCompatTextureInfo *this)
{
  return (char *)this + 4;
}


char *__fastcall BackwardsCompatTextureInfo::getTexturePath(BackwardsCompatTextureInfo *this)
{
  return (char *)this + 28;
}


int __fastcall BackwardsCompatTextureInfo::_setCanUse(int result, bool a2)
{
  *(_BYTE *)result = a2;
  return result;
}


int __fastcall BackwardsCompatTextureInfo::canUse(BackwardsCompatTextureInfo *this)
{
  return *(_BYTE *)this;
}


char *__fastcall BackwardsCompatTextureInfo::getUV(BackwardsCompatTextureInfo *this)
{
  return (char *)this + 12;
}


char *__fastcall BackwardsCompatTextureInfo::getBaseUVSize(BackwardsCompatTextureInfo *this)
{
  return (char *)this + 20;
}


Json::Value *__fastcall BackwardsCompatTextureInfo::load(BackwardsCompatTextureInfo *this, const Json::Value *a2)
{
  const Json::Value *v2; // r5@1
  BackwardsCompatTextureInfo *v3; // r8@1
  Json::Value *v4; // r0@1
  Json::Value *result; // r0@1
  void *v6; // r6@2
  void *v7; // r0@2
  void *v8; // r0@3
  Json::Value *v9; // r0@4
  Json::Value *v10; // r0@4
  Json::Value *v11; // r0@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  int v16; // [sp+8h] [bp-28h]@2
  int v17; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)Json::Value::operator[]((int)a2, "back_compat_texture");
  result = (Json::Value *)Json::Value::isString(v4);
  if ( result == (Json::Value *)1 )
  {
    v6 = Json::Value::operator[]((int)v2, "back_compat_texture");
    sub_21E94B4((void **)&v16, (const char *)&unk_257BC67);
    Json::Value::asString(&v17, (int)v6, &v16);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v3 + 7,
      &v17);
    v7 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v17 - 4);
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
    v8 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (Json::Value *)Json::Value::operator[]((int)v2, "uv_size");
    sub_1435160((int)v3 + 4, v9);
    v10 = (Json::Value *)Json::Value::operator[]((int)v2, "uv");
    sub_1435160((int)v3 + 12, v10);
    v11 = (Json::Value *)Json::Value::operator[]((int)v2, "base_size");
    result = sub_1435160((int)v3 + 20, v11);
  }
  return result;
}
