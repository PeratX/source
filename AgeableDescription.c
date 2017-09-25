

AgeableDescription *__fastcall AgeableDescription::~AgeableDescription(AgeableDescription *this)
{
  AgeableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v8; // r12@6
  signed int v9; // r1@8
  unsigned int *v10; // r12@10
  signed int v11; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E6FC;
  j_FilterGroup::~FilterGroup((AgeableDescription *)((char *)this + 28));
  v2 = *((_DWORD *)v1 + 6);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)*((_DWORD *)v1 + 2);
  if ( v6 )
    j_operator delete(v6);
  return v1;
}


const char *__fastcall AgeableDescription::getDescription(AgeableDescription *this)
{
  return "Adds a timer for the entity to grow up. It can be accelerated by giving the entity the items it likes as defined by feedItems.";
}


void __fastcall AgeableDescription::~AgeableDescription(AgeableDescription *this)
{
  AgeableDescription::~AgeableDescription(this);
}


void __fastcall AgeableDescription::~AgeableDescription(AgeableDescription *this)
{
  AgeableDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void *v6; // r0@3
  unsigned int *v7; // r12@6
  signed int v8; // r1@8
  unsigned int *v9; // r12@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_271E6FC;
  j_FilterGroup::~FilterGroup((AgeableDescription *)((char *)this + 28));
  v2 = *((_DWORD *)v1 + 6);
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
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)*((_DWORD *)v1 + 2);
  if ( v6 )
    j_operator delete(v6);
  j_operator delete((void *)v1);
}


Json::Value *__fastcall AgeableDescription::parseData(AgeableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r8@1
  AgeableDescription *v3; // r5@1
  const char *v4; // r3@1
  const char *v5; // r3@1
  int *v6; // r6@3
  void *v7; // r0@3
  void *v8; // r0@4
  __int64 v9; // r0@6
  Json::Value *v10; // r0@10
  int v11; // r10@11
  void *v12; // r0@11
  void *v13; // r0@12
  unsigned int *v14; // r2@13
  signed int v15; // r1@15
  Json::Value *v16; // r0@17
  Json::Value *v17; // r0@18
  int v18; // r7@18
  void *v19; // r0@18
  void *v20; // r0@19
  Json::Value *v21; // r0@20
  Json::Value *v22; // r0@20
  __int64 v28; // r0@22
  unsigned int *v29; // r2@26
  signed int v30; // r1@28
  unsigned int *v31; // r2@37
  signed int v32; // r1@39
  unsigned int *v33; // r2@41
  signed int v34; // r1@43
  unsigned int *v36; // r2@57
  signed int v37; // r1@59
  unsigned int *v38; // r2@61
  signed int v39; // r1@63
  float v40; // [sp+0h] [bp-98h]@0
  int v41; // [sp+1Ch] [bp-7Ch]@18
  int v42; // [sp+20h] [bp-78h]@18
  int v43; // [sp+28h] [bp-70h]@11
  int v44; // [sp+2Ch] [bp-6Ch]@11
  int *v45; // [sp+30h] [bp-68h]@11
  float v46; // [sp+34h] [bp-64h]@10
  char v47; // [sp+38h] [bp-60h]@53
  char v48; // [sp+40h] [bp-58h]@9
  int *v49; // [sp+48h] [bp-50h]@6
  signed int v50; // [sp+4Ch] [bp-4Ch]@6
  int v51; // [sp+58h] [bp-40h]@3
  int v52; // [sp+5Ch] [bp-3Ch]@3
  char v53; // [sp+60h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  j_Parser::parse(a2, (AgeableDescription *)((char *)this + 4), (float *)"duration", (const char *)0x44960000, v40);
  j_Json::Value::Value(&v53, 0);
  j_Parser::parse(v2, (const Json::Value *)&v53, (Json::Value *)"feedItems", v4);
  if ( !j_Json::Value::isNull((Json::Value *)&v53) )
  {
    if ( j_Json::Value::isString((Json::Value *)&v53) == 1 )
    {
      sub_21E94B4((void **)&v51, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v52, (int)&v53, &v51);
      v6 = j_Item::lookupByName((unsigned int *)&v52, 1);
      v7 = (void *)(v52 - 12);
      if ( (int *)(v52 - 12) != &dword_28898C0 )
      {
        v36 = (unsigned int *)(v52 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v37 = __ldrex(v36);
            v5 = (const char *)(v37 - 1);
          }
          while ( __strex(v37 - 1, v36) );
        }
        else
          v37 = *v36;
          v5 = (const char *)(*v36 - 1);
          *v36 = (unsigned int)v5;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v8 = (void *)(v51 - 12);
      if ( (int *)(v51 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v51 - 4);
            v39 = __ldrex(v38);
            v5 = (const char *)(v39 - 1);
          while ( __strex(v39 - 1, v38) );
          v39 = *v38;
          v5 = (const char *)(*v38 - 1);
          *v38 = (unsigned int)v5;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      if ( v6 )
        v49 = v6;
        v50 = 1036831949;
        v9 = *(_QWORD *)((char *)v3 + 12);
        if ( (_DWORD)v9 == HIDWORD(v9) )
          LODWORD(v9) = (char *)v3 + 8;
          j_std::vector<EntityDefinitionFeedItem,std::allocator<EntityDefinitionFeedItem>>::_M_emplace_back_aux<EntityDefinitionFeedItem const&>(v9);
          *(_QWORD *)v9 = *(_QWORD *)&v49;
          *((_DWORD *)v3 + 3) += 8;
    }
    else if ( j_Json::Value::isArray((Json::Value *)&v53) == 1 )
      j_Json::Value::begin((Json::Value *)&v48, (int)&v53);
      while ( 1 )
        j_Json::Value::end((Json::Value *)&v47, (int)&v53);
        if ( j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v48, (const Json::ValueIteratorBase *)&v47) == 1 )
          break;
        v46 = 0.1;
        v10 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v48);
        if ( j_Json::Value::isString(v10) == 1 )
          v11 = j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v48);
          sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
          j_Json::Value::asString(&v44, v11, &v43);
          v45 = j_Item::lookupByName((unsigned int *)&v44, 1);
          v12 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
            v29 = (unsigned int *)(v44 - 4);
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
              j_j_j_j__ZdlPv_9(v12);
          v13 = (void *)(v43 - 12);
          if ( (int *)(v43 - 12) != &dword_28898C0 )
            v14 = (unsigned int *)(v43 - 4);
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          v16 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v48);
          if ( j_Json::Value::isObject(v16) == 1 )
            v17 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v48);
            v18 = j_Json::Value::operator[](v17, "item");
            sub_21E94B4((void **)&v41, (const char *)&unk_257BC67);
            j_Json::Value::asString(&v42, v18, &v41);
            v45 = j_Item::lookupByName((unsigned int *)&v42, 1);
            v19 = (void *)(v42 - 12);
            if ( (int *)(v42 - 12) != &dword_28898C0 )
              v31 = (unsigned int *)(v42 - 4);
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
                j_j_j_j__ZdlPv_9(v19);
            v20 = (void *)(v41 - 12);
            if ( (int *)(v41 - 12) != &dword_28898C0 )
              v33 = (unsigned int *)(v41 - 4);
                  v34 = __ldrex(v33);
                while ( __strex(v34 - 1, v33) );
                v34 = (*v33)--;
              if ( v34 <= 0 )
                j_j_j_j__ZdlPv_9(v20);
            v21 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v48);
            v22 = (Json::Value *)j_Json::Value::operator[](v21, "growth");
            _R0 = j_Json::Value::asFloat(v22, v46);
            __asm
              VMOV            S0, R0
              VSTR            S0, [SP,#0x98+var_64]
        if ( v45 )
          v28 = *(_QWORD *)((char *)v3 + 12);
          if ( (_DWORD)v28 == HIDWORD(v28) )
            j_std::vector<EntityDefinitionFeedItem,std::allocator<EntityDefinitionFeedItem>>::_M_emplace_back_aux<EntityDefinitionFeedItem const&>(__PAIR__(&v45, (unsigned int)v3 + 8));
          else
            *(_QWORD *)v28 = *(_QWORD *)&v45;
            *((_DWORD *)v3 + 3) += 8;
        j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v48);
  }
  j_Parser::parse(v2, (AgeableDescription *)((char *)v3 + 20), (DefinitionTrigger *)"grow_up", v5);
  return j_Json::Value::~Value((Json::Value *)&v53);
}


const char *__fastcall AgeableDescription::getJsonName(AgeableDescription *this)
{
  return "minecraft:ageable";
}


void __fastcall AgeableDescription::getDocumentation(int a1, int a2)
{
  int v2; // r5@1
  int *v3; // r0@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int *v7; // r0@4
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  int *v11; // r0@7
  void *v12; // r0@7
  void *v13; // r0@8
  void *v14; // r0@9
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
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  unsigned int *v27; // r2@35
  signed int v28; // r1@37
  unsigned int *v29; // r2@39
  signed int v30; // r1@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int v33; // [sp+8h] [bp-58h]@7
  int v34; // [sp+10h] [bp-50h]@7
  int v35; // [sp+18h] [bp-48h]@7
  int v36; // [sp+20h] [bp-40h]@4
  int v37; // [sp+28h] [bp-38h]@4
  int v38; // [sp+30h] [bp-30h]@4
  int v39; // [sp+38h] [bp-28h]@1
  int v40; // [sp+40h] [bp-20h]@1
  int v41; // [sp+48h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v41, "duration");
  sub_21E94B4((void **)&v40, "1200.0");
  v3 = (int *)sub_21E94B4((void **)&v39, "Amount of time before the entity grows");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v41, &v40, v3);
  v4 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v39 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v40 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v41 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v38, "feedItems");
  sub_21E94B4((void **)&v37, (const char *)&unk_257BC67);
  v7 = (int *)sub_21E94B4(
                (void **)&v36,
                "List of items that can be fed to the entity. Includes 'item' for the item name and 'growth' to define ho"
                "w much time it grows up by");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v38, &v37, v7);
  v8 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v36 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v35, "grow_up");
  sub_21E94B4((void **)&v34, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4((void **)&v33, "Event to run when this entity grows up");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v35, &v34, v11);
  v12 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v33 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v34 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v35 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall AgeableDescription::getDocumentation(int a1, int a2)
{
  AgeableDescription::getDocumentation(a1, a2);
}
