

const char *__fastcall HealableDescription::getDescription(HealableDescription *this)
{
  return "Defines the interactions with this entity for healing it.";
}


void __fastcall HealableDescription::~HealableDescription(HealableDescription *this)
{
  HealableDescription::~HealableDescription(this);
}


Json::Value *__fastcall HealableDescription::parseData(HealableDescription *this, Json::Value *a2)
{
  HealableDescription *v2; // r4@1
  Json::Value *v3; // r5@1
  const char *v4; // r3@1
  const char *v5; // ST00_4@1
  Parser *v6; // r11@5
  float v7; // ST00_4@6
  int v8; // r0@6
  void *v9; // r0@7
  void *v10; // r0@8
  __int64 v11; // kr00_8@10
  __int64 v12; // r0@11
  char *v13; // r7@11
  signed int v14; // r0@11
  unsigned int v15; // r5@11
  int v16; // r5@14
  unsigned int *v17; // r2@21
  signed int v18; // r1@23
  unsigned int *v19; // r2@25
  signed int v20; // r1@27
  bool v22; // [sp+0h] [bp-80h]@0
  const char *v23; // [sp+0h] [bp-80h]@1
  int v24; // [sp+18h] [bp-68h]@7
  int v25; // [sp+1Ch] [bp-64h]@7
  int *v26; // [sp+20h] [bp-60h]@6
  signed int v27; // [sp+24h] [bp-5Ch]@5
  void *ptr; // [sp+28h] [bp-58h]@5
  _BYTE *v29; // [sp+2Ch] [bp-54h]@5
  int v30; // [sp+30h] [bp-50h]@5
  char v31; // [sp+38h] [bp-48h]@3
  char v32; // [sp+40h] [bp-40h]@3
  char v33; // [sp+48h] [bp-38h]@1

  v2 = this;
  v3 = a2;
  j_Json::Value::Value(&v33, 0);
  j_Parser::parse(v3, (HealableDescription *)((char *)v2 + 16), (bool *)"force_use", 0, v22);
  j_Parser::parse(v3, (const Json::Value *)&v33, (Json::Value *)"items", v4);
  j_Parser::parse(
    v3,
    (HealableDescription *)((char *)v2 + 20),
    (FilterGroup *)"filters",
    (const char *)&unk_257BC67,
    v5);
  if ( !j_Json::Value::isNull((Json::Value *)&v33) && j_Json::Value::isArray((Json::Value *)&v33) == 1 )
  {
    j_Json::Value::begin((Json::Value *)&v32, (int)&v33);
    j_Json::Value::end((Json::Value *)&v31, (int)&v33);
    while ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v32, (const Json::ValueIteratorBase *)&v31) != 1 )
    {
      v6 = (Parser *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v32);
      v27 = 1065353216;
      ptr = 0;
      v29 = 0;
      v30 = 0;
      if ( j_Json::Value::isObject(v6) == 1 )
      {
        j_Parser::parse(v6, (const Json::Value *)&v26, (const Item **)"item", (const char *)&unk_257BC67, v23);
        j_Parser::parse(
          v6,
          (const Json::Value *)((unsigned int)&v26 | 4),
          (float *)"heal_amount",
          (const char *)0x3F800000,
          v7);
        v8 = j_Json::Value::operator[](v6, "effects");
        j_HealableDescription::_loadEffects(v8, (int)&v26, v8);
      }
      else
        sub_21E94B4((void **)&v24, (const char *)&unk_257BC67);
        j_Json::Value::asString(&v25, (int)v6, &v24);
        v26 = j_Item::lookupByName((unsigned int *)&v25, 1);
        v9 = (void *)(v25 - 12);
        if ( (int *)(v25 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v25 - 4);
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
            j_j_j_j__ZdlPv_9(v9);
        }
        v10 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v19 = (unsigned int *)(v24 - 4);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v10);
      if ( v26 )
        v11 = *((_QWORD *)v2 + 1);
        if ( (_DWORD)v11 == HIDWORD(v11) )
          j_std::vector<FeedItem,std::allocator<FeedItem>>::_M_emplace_back_aux<FeedItem const&>(
            (unsigned __int64 *)((char *)v2 + 4),
            (int)&v26);
        else
          *(_QWORD *)v11 = *(_QWORD *)&v26;
          v12 = *(_QWORD *)&ptr;
          v13 = 0;
          *(_DWORD *)(v11 + 8) = 0;
          *(_DWORD *)(v11 + 12) = 0;
          v14 = HIDWORD(v12) - v12;
          *(_DWORD *)(v11 + 16) = 0;
          v15 = -858993459 * (v14 >> 2);
          if ( v14 )
            if ( v15 >= 0xCCCCCCD )
              sub_21E57F4();
            v13 = (char *)j_operator new(v14);
          *(_DWORD *)(v11 + 8) = v13;
          *(_DWORD *)(v11 + 12) = v13;
          *(_DWORD *)(v11 + 16) = &v13[20 * v15];
          v16 = -858993459 * ((v29 - (_BYTE *)ptr) >> 2);
          if ( v29 != ptr )
            j___aeabi_memmove4_0((int)v13, (int)ptr);
          *(_DWORD *)(v11 + 12) = &v13[20 * v16];
          *((_DWORD *)v2 + 2) += 20;
      if ( ptr )
        j_operator delete(ptr);
      j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v32);
    }
  }
  return j_Json::Value::~Value((Json::Value *)&v33);
}


const char *__fastcall HealableDescription::getJsonName(HealableDescription *this)
{
  return "minecraft:healable";
}


void __fastcall HealableDescription::getDocumentation(int a1, int a2)
{
  HealableDescription::getDocumentation(a1, a2);
}


void __fastcall HealableDescription::getDocumentation(int a1, int a2)
{
  int v2; // r4@1
  int *v3; // r0@1
  char *v4; // r5@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  int *v8; // r0@4
  void *v9; // r0@4
  void *v10; // r0@5
  void *v11; // r0@6
  int *v12; // r0@7
  void *v13; // r0@7
  void *v14; // r0@8
  void *v15; // r0@9
  int *v16; // r0@10
  void *v17; // r0@10
  void *v18; // r0@11
  void *v19; // r0@12
  int *v20; // r0@13
  void *v21; // r0@13
  void *v22; // r0@14
  void *v23; // r0@15
  unsigned int *v24; // r2@17
  signed int v25; // r1@19
  unsigned int *v26; // r2@21
  signed int v27; // r1@23
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  unsigned int *v30; // r2@29
  signed int v31; // r1@31
  unsigned int *v32; // r2@33
  signed int v33; // r1@35
  unsigned int *v34; // r2@37
  signed int v35; // r1@39
  unsigned int *v36; // r2@41
  signed int v37; // r1@43
  unsigned int *v38; // r2@45
  signed int v39; // r1@47
  unsigned int *v40; // r2@49
  signed int v41; // r1@51
  unsigned int *v42; // r2@53
  signed int v43; // r1@55
  unsigned int *v44; // r2@57
  signed int v45; // r1@59
  unsigned int *v46; // r2@61
  signed int v47; // r1@63
  unsigned int *v48; // r2@65
  signed int v49; // r1@67
  unsigned int *v50; // r2@69
  signed int v51; // r1@71
  unsigned int *v52; // r2@73
  signed int v53; // r1@75
  int v54; // [sp+8h] [bp-88h]@13
  int v55; // [sp+10h] [bp-80h]@13
  int v56; // [sp+18h] [bp-78h]@13
  int v57; // [sp+20h] [bp-70h]@10
  int v58; // [sp+28h] [bp-68h]@10
  int v59; // [sp+30h] [bp-60h]@10
  int v60; // [sp+38h] [bp-58h]@7
  int v61; // [sp+40h] [bp-50h]@7
  int v62; // [sp+48h] [bp-48h]@7
  int v63; // [sp+50h] [bp-40h]@4
  int v64; // [sp+58h] [bp-38h]@4
  int v65; // [sp+60h] [bp-30h]@4
  int v66; // [sp+68h] [bp-28h]@1
  int v67; // [sp+70h] [bp-20h]@1
  int v68; // [sp+78h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v68, "items");
  sub_21E94B4((void **)&v67, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v66, "The list of items that can be used to heal this entity");
  v4 = j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v68, &v67, v3);
  v5 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v66 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v67 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v68 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v4[4] = 1;
  sub_21E94B4((void **)&v65, "item");
  sub_21E94B4((void **)&v64, (const char *)&unk_257BC67);
  v8 = (int *)sub_21E94B4((void **)&v63, "Name of the item this entity likes and can be used to heal this entity");
  j_DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v65, &v64, v8);
  v9 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v63 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v64 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v65 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v62, "heal_amount");
  sub_21E94B4((void **)&v61, "1.0");
  v12 = (int *)sub_21E94B4((void **)&v60, "The amount of health this entity gains when fed this item");
  j_DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v62, &v61, v12);
  v13 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v60 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v61 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v62 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v59, "force_use");
  sub_21E94B4((void **)&v58, "false");
  v16 = (int *)sub_21E94B4((void **)&v57, "Determines if item can be used regardless of entity being full health");
  j_DocumentationSystem::Node::addNode(
    (int)v4,
    (int *)&DocumentationSystem::BOOLEAN_TYPE,
    (const void **)&v59,
    &v58,
    v16);
  v17 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v57 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v58 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v59 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v56, "filters");
  sub_21E94B4((void **)&v55, (const char *)&unk_257BC67);
  v20 = (int *)sub_21E94B4((void **)&v54, "The list of conditions for this trigger");
    (int *)&DocumentationSystem::FILTER_TYPE,
    (const void **)&v56,
    &v55,
    v20);
  v21 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v54 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v55 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v56 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}


HealableDescription *__fastcall HealableDescription::~HealableDescription(HealableDescription *this)
{
  HealableDescription *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_271E864;
  j_FilterGroup::~FilterGroup((HealableDescription *)((char *)this + 20));
  *(_QWORD *)&v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 8);
      if ( v4 )
        j_operator delete(v4);
      v2 += 20;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  return v1;
}


void __fastcall HealableDescription::~HealableDescription(HealableDescription *this)
{
  HealableDescription *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  void *v4; // r0@2

  v1 = this;
  *(_DWORD *)this = &off_271E864;
  j_FilterGroup::~FilterGroup((HealableDescription *)((char *)this + 20));
  *(_QWORD *)&v2 = *(_QWORD *)((char *)v1 + 4);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void **)(v2 + 8);
      if ( v4 )
        j_operator delete(v4);
      v2 += 20;
    }
    while ( v3 != v2 );
    v2 = *((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall HealableDescription::_loadEffects(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  signed int result; // r0@1
  Json::ValueIteratorBase *v6; // r7@2
  Json::Value *v7; // r8@3
  int v8; // r6@3
  void *v9; // r0@3
  void *v10; // r0@4
  MobEffect *v11; // r0@5
  MobEffect *v12; // r6@5
  int v13; // r5@6
  Json::Value *v14; // r0@6
  int v15; // r6@6
  Json::Value *v16; // r0@6
  Json::Value *v17; // r0@6
  int v23; // r6@6
  __int64 v24; // r0@6
  void *v25; // r0@8
  unsigned int *v26; // r2@9
  Json::ValueIteratorBase *v27; // r6@10
  signed int v28; // r1@11
  void *v29; // r8@13
  int v30; // r1@13
  unsigned int v31; // r2@13
  unsigned int v32; // r1@15
  unsigned int v33; // r4@15
  char *v34; // r7@21
  char *v35; // r5@23
  int v36; // r0@27
  unsigned int *v37; // r2@31
  signed int v38; // r1@33
  unsigned int *v39; // r2@35
  signed int v40; // r1@37
  int v41; // [sp+10h] [bp-60h]@1
  int v42; // [sp+14h] [bp-5Ch]@6
  int v43; // [sp+18h] [bp-58h]@6
  int v44; // [sp+20h] [bp-50h]@3
  unsigned int v45; // [sp+24h] [bp-4Ch]@3
  int v46; // [sp+28h] [bp-48h]@3
  char v47; // [sp+2Ch] [bp-44h]@1
  char v48; // [sp+34h] [bp-3Ch]@1

  v3 = a3;
  v4 = a2;
  v41 = a2;
  j_Json::Value::begin((Json::Value *)&v48, a3);
  j_Json::Value::end((Json::Value *)&v47, v3);
  result = j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v48, (const Json::ValueIteratorBase *)&v47);
  if ( !result )
  {
    v6 = (Json::ValueIteratorBase *)&v48;
    while ( 1 )
    {
      v7 = (Json::Value *)j_Json::ValueIteratorBase::deref(v6);
      v8 = j_Json::Value::operator[](v7, "name");
      sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
      j_Json::Value::asString((int *)&v45, v8, &v44);
      j_Util::toLower((void **)&v46, *(_DWORD *)(v45 - 12), v45);
      v9 = (void *)(v45 - 12);
      if ( (int *)(v45 - 12) != &dword_28898C0 )
      {
        v37 = (unsigned int *)(v45 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v39 = (unsigned int *)(v44 - 4);
            v40 = __ldrex(v39);
          while ( __strex(v40 - 1, v39) );
          v40 = (*v39)--;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (MobEffect *)j_MobEffect::getByName((int **)&v46);
      v12 = v11;
      if ( v11 )
        break;
      v25 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v46 - 4);
          v27 = v6;
            v28 = __ldrex(v26);
          while ( __strex(v28 - 1, v26) );
LABEL_50:
          v6 = v27;
LABEL_52:
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
          goto LABEL_29;
LABEL_51:
        v28 = (*v26)--;
        goto LABEL_52;
LABEL_29:
      j_Json::ValueIteratorBase::increment(v6);
      result = j_Json::ValueIteratorBase::isEqual(v6, (const Json::ValueIteratorBase *)&v47);
      if ( result )
        return result;
    }
    v43 = j_MobEffect::getId(v11);
    v13 = *(_DWORD *)j_MobEffect::getDescriptionId(v12);
    v14 = (Json::Value *)j_Json::Value::operator[](v7, "duration");
    v15 = j_Json::Value::asInt(v14, 1);
    v16 = (Json::Value *)j_Json::Value::operator[](v7, "amplifier");
    v42 = j_Json::Value::asInt(v16, 1);
    v17 = (Json::Value *)j_Json::Value::operator[](v7, "chance");
    _R0 = j_Json::Value::asFloat(v17, 1.0);
    __asm { VMOV            S16, R0 }
    v23 = 20 * v15;
    v24 = *(_QWORD *)(v4 + 12);
    if ( (_DWORD)v24 == HIDWORD(v24) )
      v29 = *(void **)(v4 + 8);
      HIDWORD(v24) = ((signed int)v24 - (signed int)v29) >> 2;
      v31 = -858993459 * HIDWORD(v24);
      if ( (void *)v24 == v29 )
        v31 = 1;
      v32 = v31 + -858993459 * v30;
      v33 = v32;
      if ( v32 > 0xCCCCCCC )
        v33 = 214748364;
      if ( v32 < v31 )
      if ( v33 )
        if ( v33 >= 0xCCCCCCD )
          sub_21E57F4();
        v34 = (char *)j_operator new(20 * v33);
        LODWORD(v24) = *(_QWORD *)(v41 + 8) >> 32;
        v29 = (void *)*(_QWORD *)(v41 + 8);
      else
        v34 = 0;
      *(_DWORD *)&v34[v24 - (_DWORD)v29] = v13;
      v35 = &v34[v24 - (_DWORD)v29];
      __asm { VSTR            S16, [R5,#0x10] }
      *((_DWORD *)v35 + 1) = v43;
      *((_DWORD *)v35 + 2) = v23;
      *((_DWORD *)v35 + 3) = v42;
      if ( !_ZF )
        j___aeabi_memmove4_0((int)v34, (int)v29);
      if ( v29 )
        j_operator delete(v29);
      v36 = (int)&v34[20 * v33];
      *(_DWORD *)(v41 + 8) = v34;
      *(_DWORD *)(v41 + 12) = v35 + 20;
      v6 = (Json::ValueIteratorBase *)&v48;
      v4 = v41;
      *(_DWORD *)(v41 + 16) = v36;
    else
      __asm { VSTR            S16, [R0,#0x10] }
      *(_DWORD *)v24 = v13;
      *(_DWORD *)(v24 + 4) = v43;
      *(_DWORD *)(v24 + 8) = v23;
      *(_DWORD *)(v24 + 12) = v42;
      *(_DWORD *)(v4 + 12) += 20;
    v25 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) == &dword_28898C0 )
      goto LABEL_29;
    v26 = (unsigned int *)(v46 - 4);
    if ( &pthread_create )
      v27 = v6;
      __dmb();
      do
        v28 = __ldrex(v26);
      while ( __strex(v28 - 1, v26) );
      goto LABEL_50;
    goto LABEL_51;
  }
  return result;
}
