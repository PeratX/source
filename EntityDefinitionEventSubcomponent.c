

void __fastcall EntityDefinitionEventSubcomponent::doOnHitEffect(__int64 this)
{
  int v1; // r6@1
  int v2; // r11@1
  unsigned int v3; // r0@1
  int v4; // r5@3
  int *v5; // r4@3
  const Entity *v6; // r4@4
  double v7; // r0@4
  unsigned int v8; // r0@4
  int v9; // r7@6
  int *v10; // r5@6
  const DefinitionTrigger *v11; // r7@7
  int v12; // r10@7
  int v13; // r5@7
  unsigned int *v14; // r2@9
  signed int v15; // r1@11
  void *v16; // r6@17
  int v17; // r1@17
  void *v18; // r0@17
  int v19; // r6@24
  unsigned int *v20; // r2@26
  signed int v21; // r1@28
  void *v22; // r5@34
  int v23; // r1@34
  void *v24; // r0@34
  void *ptr; // [sp+0h] [bp-60h]@4
  __int64 v26; // [sp+4h] [bp-5Ch]@4
  int v27; // [sp+Ch] [bp-54h]@4
  signed int v28; // [sp+10h] [bp-50h]@4
  int v29; // [sp+14h] [bp-4Ch]@4
  int v30; // [sp+18h] [bp-48h]@4
  void *v31; // [sp+1Ch] [bp-44h]@4
  unsigned int v32; // [sp+20h] [bp-40h]@1
  int v33; // [sp+24h] [bp-3Ch]@1
  int v34; // [sp+28h] [bp-38h]@1
  signed int v35; // [sp+2Ch] [bp-34h]@1
  int v36; // [sp+30h] [bp-30h]@1
  int v37; // [sp+34h] [bp-2Ch]@37

  v1 = this;
  v33 = 0;
  v34 = 0;
  v2 = HIDWORD(this);
  v35 = 1065353216;
  v36 = 0;
  LODWORD(this) = &v35;
  v3 = sub_21E6254(*(double *)&this);
  v32 = v3;
  if ( v3 == 1 )
  {
    v37 = 0;
    v5 = &v37;
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = (int *)j_operator new(4 * v3);
    j___aeabi_memclr4_0((int)v5, v4);
  v31 = v5;
  j_Entity::initParams(*(Entity **)(v2 + 16), (VariantParameterList *)&v31);
  v6 = *(const Entity **)(v2 + 16);
  v30 = 0;
  v27 = 0;
  ptr = 0;
  v26 = 0LL;
  v28 = 1065353216;
  v29 = 0;
  LODWORD(v7) = &v28;
  v8 = sub_21E6254(v7);
  LODWORD(v26) = v8;
  if ( v8 == 1 )
    v10 = &v30;
    v30 = 0;
    if ( v8 >= 0x40000000 )
    v9 = 4 * v8;
    v10 = (int *)j_operator new(4 * v8);
    j___aeabi_memclr4_0((int)v10, v9);
  v11 = (const DefinitionTrigger *)(v1 + 12);
  ptr = v10;
  v12 = j_DefinitionTrigger::canTrigger((DefinitionTrigger *)(v1 + 12), v6, (const VariantParameterList *)&ptr);
  v13 = HIDWORD(v26);
  while ( v13 )
    v16 = (void *)v13;
    v17 = *(_DWORD *)(v13 + 8);
    v13 = *(_DWORD *)v13;
    v18 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v14 = (unsigned int *)(v17 - 4);
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
        j_j_j_j__ZdlPv_9(v18);
    }
    j_operator delete(v16);
  j___aeabi_memclr4_0((int)ptr, 4 * v26);
  HIDWORD(v26) = 0;
  if ( ptr && &v30 != ptr )
    j_operator delete(ptr);
  if ( v12 == 1 )
    j_EntityDefinitionDescriptor::forceExecuteTrigger(
      *(EntityDefinitionDescriptor **)(*(_DWORD *)(v2 + 16) + 48),
      *(Entity **)(v2 + 16),
      v11,
      (const VariantParameterList *)&v31);
  v19 = v33;
  while ( v19 )
    v22 = (void *)v19;
    v23 = *(_DWORD *)(v19 + 8);
    v19 = *(_DWORD *)v19;
    v24 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    j_operator delete(v22);
  j___aeabi_memclr4_0((int)v31, 4 * v32);
  if ( v31 )
    if ( &v37 != v31 )
      j_operator delete(v31);
}


int __fastcall EntityDefinitionEventSubcomponent::readfromJSON(EntityDefinitionEventSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  EntityDefinitionEventSubcomponent *v3; // r5@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  Json::Value *v8; // r0@1
  const char *v9; // r3@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "affectShooter");
  *((_BYTE *)v3 + 4) = j_Json::Value::asBool(v4, *((_BYTE *)v3 + 4));
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "affectProjectile");
  *((_BYTE *)v3 + 5) = j_Json::Value::asBool(v5, *((_BYTE *)v3 + 5));
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "affectTarget");
  *((_BYTE *)v3 + 6) = j_Json::Value::asBool(v6, *((_BYTE *)v3 + 6));
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "affectSplashArea");
  *((_BYTE *)v3 + 7) = j_Json::Value::asBool(v7, *((_BYTE *)v3 + 7));
  v8 = (Json::Value *)j_Json::Value::operator[](v2, "splashArea");
  *((_DWORD *)v3 + 2) = j_Json::Value::asFloat(v8, *((float *)v3 + 2));
  return j_j_j__ZN6Parser12parseTriggerERN4Json5ValueER17DefinitionTriggerPKc_1(
           v2,
           (EntityDefinitionEventSubcomponent *)((char *)v3 + 12),
           (DefinitionTrigger *)"eventTrigger",
           v9);
}


EntityDefinitionEventSubcomponent *__fastcall EntityDefinitionEventSubcomponent::~EntityDefinitionEventSubcomponent(EntityDefinitionEventSubcomponent *this)
{
  EntityDefinitionEventSubcomponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271EC78;
  j_FilterGroup::~FilterGroup((EntityDefinitionEventSubcomponent *)((char *)this + 20));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall EntityDefinitionEventSubcomponent::doOnHitEffect(__int64 this)
{
  EntityDefinitionEventSubcomponent::doOnHitEffect(this);
}


void __fastcall EntityDefinitionEventSubcomponent::~EntityDefinitionEventSubcomponent(EntityDefinitionEventSubcomponent *this)
{
  EntityDefinitionEventSubcomponent::~EntityDefinitionEventSubcomponent(this);
}


void __fastcall EntityDefinitionEventSubcomponent::~EntityDefinitionEventSubcomponent(EntityDefinitionEventSubcomponent *this)
{
  EntityDefinitionEventSubcomponent *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271EC78;
  j_FilterGroup::~FilterGroup((EntityDefinitionEventSubcomponent *)((char *)this + 20));
  v2 = *((_DWORD *)v1 + 4);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 3);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_operator delete((void *)v1);
}


int __fastcall EntityDefinitionEventSubcomponent::EntityDefinitionEventSubcomponent(int result)
{
  *(_DWORD *)result = &off_271EC78;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = &unk_28898CC;
  *(_DWORD *)(result + 16) = &unk_28898CC;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 20) = &off_26F1930;
  return result;
}
