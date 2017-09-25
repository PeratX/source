

ShareableDescription *__fastcall ShareableDescription::~ShareableDescription(ShareableDescription *this)
{
  ShareableDescription *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271F318;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


const char *__fastcall ShareableDescription::getDescription(ShareableDescription *this)
{
  return "Defines a list of items the mob wants to share. Each item must have the following parameters:";
}


void __fastcall ShareableDescription::parseData(ShareableDescription *this, Json::Value *a2)
{
  ShareableDescription::parseData(this, a2);
}


const char *__fastcall ShareableDescription::getJsonName(ShareableDescription *this)
{
  return "minecraft:shareables";
}


void __fastcall ShareableDescription::getDocumentation(int a1, int a2)
{
  ShareableDescription::getDocumentation(a1, a2);
}


void __fastcall ShareableDescription::~ShareableDescription(ShareableDescription *this)
{
  ShareableDescription::~ShareableDescription(this);
}


void __fastcall ShareableDescription::parseData(ShareableDescription *this, Json::Value *a2)
{
  ShareableDescription *v2; // r5@1
  Json::Value *v3; // r8@1
  signed int v4; // r4@3
  void *v5; // r0@3
  void *v6; // r0@4
  int *v7; // r11@9
  void **v8; // r6@9
  int *v9; // r10@9
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  unsigned int *v14; // r2@18
  signed int v15; // r1@20
  unsigned int *v16; // r2@22
  signed int v17; // r1@24
  unsigned int *v18; // r2@42
  signed int v19; // r1@44
  unsigned int *v20; // r2@46
  signed int v21; // r1@48
  Json::Value *v22; // r0@58
  void **v23; // r5@59
  signed int v24; // r6@59
  void *v25; // r0@59
  void *v26; // r0@60
  bool v27; // zf@61
  Json::Value *v28; // r0@64
  Json::Value *v29; // r0@65
  int v30; // r6@65
  int v31; // r5@65
  signed int v32; // r11@65
  void *v33; // r0@65
  void *v34; // r0@66
  Json::Value *v35; // r0@69
  Json::Value *v36; // r0@69
  Json::Value *v37; // r0@69
  Json::Value *v38; // r0@69
  Json::Value *v39; // r0@69
  int v40; // r6@69
  signed int v41; // r6@69
  void *v42; // r0@69
  void *v43; // r0@70
  unsigned int *v44; // r2@76
  signed int v45; // r1@78
  unsigned int *v46; // r2@80
  signed int v47; // r1@82
  int v48; // [sp+20h] [bp-88h]@9
  int *v49; // [sp+24h] [bp-84h]@9
  int v50; // [sp+2Ch] [bp-7Ch]@46
  int v51; // [sp+30h] [bp-78h]@42
  int v52; // [sp+38h] [bp-70h]@22
  int v53; // [sp+3Ch] [bp-6Ch]@18
  int v54; // [sp+44h] [bp-64h]@9
  int v55; // [sp+48h] [bp-60h]@9
  char v56; // [sp+4Ch] [bp-5Ch]@8
  char v57; // [sp+54h] [bp-54h]@8
  int v58; // [sp+60h] [bp-48h]@3
  int v59; // [sp+64h] [bp-44h]@3
  int v60; // [sp+68h] [bp-40h]@2
  signed int v61; // [sp+6Ch] [bp-3Ch]@2
  int v62; // [sp+70h] [bp-38h]@2
  int v63; // [sp+74h] [bp-34h]@2
  signed int v64; // [sp+78h] [bp-30h]@2
  signed int v65; // [sp+7Ch] [bp-2Ch]@2

  v2 = this;
  v3 = (Json::Value *)j_Json::Value::operator[](a2, "items");
  if ( !j_Json::Value::isNull(v3) )
  {
    v64 = -1;
    v65 = -1;
    v62 = -1;
    v63 = -1;
    v60 = -1;
    v61 = -1;
    if ( j_Json::Value::isString(v3) == 1 )
    {
      sub_21E94B4((void **)&v58, (const char *)&unk_257BC67);
      j_Json::Value::asString(&v59, (int)v3, &v58);
      v4 = j_JsonUtil::parseItem(&v60, (int *)((unsigned int)&v60 | 4), &v59, 0);
      v5 = (void *)(v59 - 12);
      if ( (int *)(v59 - 12) != &dword_28898C0 )
      {
        v44 = (unsigned int *)(v59 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v45 = __ldrex(v44);
          while ( __strex(v45 - 1, v44) );
        }
        else
          v45 = (*v44)--;
        if ( v45 <= 0 )
          j_j_j_j__ZdlPv_9(v5);
      }
      v6 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v46 = (unsigned int *)(v58 - 4);
            v47 = __ldrex(v46);
          while ( __strex(v47 - 1, v46) );
          v47 = (*v46)--;
        if ( v47 <= 0 )
          j_j_j_j__ZdlPv_9(v6);
      if ( v4 == 1 )
        v62 = -1;
        v63 = -1;
        j_std::vector<Shareable,std::allocator<Shareable>>::emplace_back<Shareable&>((int)v2 + 4, (int)&v60);
    }
    else if ( j_Json::Value::isArray(v3) == 1 )
      j_Json::Value::begin((Json::Value *)&v57, (int)v3);
      j_Json::Value::end((Json::Value *)&v56, (int)v3);
      if ( !j_Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v57, (const Json::ValueIteratorBase *)&v56) )
        v7 = &v60;
        v48 = (int)v2 + 4;
        v49 = (int *)((unsigned int)&v60 | 4);
        v8 = (void **)&v54;
        v9 = &v55;
        do
          v22 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
          if ( j_Json::Value::isString(v22) == 1 )
          {
            sub_21E94B4(v8, (const char *)&unk_257BC67);
            j_Json::Value::asString(v9, (int)v3, (int *)v8);
            v23 = v8;
            v24 = j_JsonUtil::parseItem(v7, v49, v9, 0);
            v25 = (void *)(v55 - 12);
            if ( (int *)(v55 - 12) != &dword_28898C0 )
            {
              v10 = (unsigned int *)(v55 - 4);
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
                j_j_j_j__ZdlPv_9(v25);
            }
            v26 = (void *)(v54 - 12);
            if ( (int *)(v54 - 12) != &dword_28898C0 )
              v12 = (unsigned int *)(v54 - 4);
                  v13 = __ldrex(v12);
                while ( __strex(v13 - 1, v12) );
                v13 = (*v12)--;
              if ( v13 <= 0 )
                j_j_j_j__ZdlPv_9(v26);
            v27 = v24 == 1;
            v8 = v23;
            if ( v27 )
              v62 = -1;
              v63 = -1;
              v64 = -1;
              v65 = -1;
              j_std::vector<Shareable,std::allocator<Shareable>>::emplace_back<Shareable&>(v48, (int)v7);
          }
          else
            v28 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
            if ( j_Json::Value::isObject(v28) == 1 )
              v29 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
              v30 = j_Json::Value::operator[](v29, "item");
              sub_21E94B4((void **)&v52, (const char *)&unk_257BC67);
              j_Json::Value::asString(&v53, v30, &v52);
              v31 = (int)v7;
              v32 = j_JsonUtil::parseItem(v7, v49, &v53, 0);
              v33 = (void *)(v53 - 12);
              if ( (int *)(v53 - 12) != &dword_28898C0 )
                v14 = (unsigned int *)(v53 - 4);
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
                  j_j_j_j__ZdlPv_9(v33);
              v34 = (void *)(v52 - 12);
              if ( (int *)(v52 - 12) != &dword_28898C0 )
                v16 = (unsigned int *)(v52 - 4);
                    v17 = __ldrex(v16);
                  while ( __strex(v17 - 1, v16) );
                  v17 = (*v16)--;
                if ( v17 <= 0 )
                  j_j_j_j__ZdlPv_9(v34);
              v8 = (void **)&v54;
              v9 = &v55;
              v27 = v32 == 1;
              v7 = (int *)v31;
              if ( v27 )
                v35 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
                v36 = (Json::Value *)j_Json::Value::operator[](v35, "want_amount");
                v62 = j_Json::Value::asInt(v36, -1);
                v37 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
                v38 = (Json::Value *)j_Json::Value::operator[](v37, "surplus_amount");
                v63 = j_Json::Value::asInt(v38, -1);
                v39 = (Json::Value *)j_Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v57);
                v40 = j_Json::Value::operator[](v39, "craft_into");
                sub_21E94B4((void **)&v50, (const char *)&unk_257BC67);
                j_Json::Value::asString(&v51, v40, &v50);
                v41 = j_JsonUtil::parseItem(&v64, &v65, &v51, 0);
                v42 = (void *)(v51 - 12);
                if ( (int *)(v51 - 12) != &dword_28898C0 )
                  v18 = (unsigned int *)(v51 - 4);
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
                    j_j_j_j__ZdlPv_9(v42);
                v43 = (void *)(v50 - 12);
                if ( (int *)(v50 - 12) != &dword_28898C0 )
                  v20 = (unsigned int *)(v50 - 4);
                      v21 = __ldrex(v20);
                    while ( __strex(v21 - 1, v20) );
                    v21 = (*v20)--;
                  if ( v21 <= 0 )
                    j_j_j_j__ZdlPv_9(v43);
                if ( !v41 )
                  v64 = -1;
                  v65 = -1;
                j_std::vector<Shareable,std::allocator<Shareable>>::emplace_back<Shareable&>(v48, v31);
                v8 = (void **)&v54;
                v9 = &v55;
          j_Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v57);
          j_Json::Value::end((Json::Value *)&v56, (int)v3);
        while ( !j_Json::ValueIteratorBase::isEqual(
                   (Json::ValueIteratorBase *)&v57,
                   (const Json::ValueIteratorBase *)&v56) );
  }
}


void __fastcall ShareableDescription::~ShareableDescription(ShareableDescription *this)
{
  ShareableDescription *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_271F318;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall ShareableDescription::getDocumentation(int a1, int a2)
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
  int *v15; // r0@10
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  unsigned int *v19; // r2@14
  signed int v20; // r1@16
  unsigned int *v21; // r2@18
  signed int v22; // r1@20
  unsigned int *v23; // r2@22
  signed int v24; // r1@24
  unsigned int *v25; // r2@26
  signed int v26; // r1@28
  unsigned int *v27; // r2@30
  signed int v28; // r1@32
  unsigned int *v29; // r2@34
  signed int v30; // r1@36
  unsigned int *v31; // r2@38
  signed int v32; // r1@40
  unsigned int *v33; // r2@42
  signed int v34; // r1@44
  unsigned int *v35; // r2@46
  signed int v36; // r1@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  int v43; // [sp+8h] [bp-70h]@10
  int v44; // [sp+10h] [bp-68h]@10
  int v45; // [sp+18h] [bp-60h]@10
  int v46; // [sp+20h] [bp-58h]@7
  int v47; // [sp+28h] [bp-50h]@7
  int v48; // [sp+30h] [bp-48h]@7
  int v49; // [sp+38h] [bp-40h]@4
  int v50; // [sp+40h] [bp-38h]@4
  int v51; // [sp+48h] [bp-30h]@4
  int v52; // [sp+50h] [bp-28h]@1
  int v53; // [sp+58h] [bp-20h]@1
  int v54; // [sp+60h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v54, "item");
  sub_21E94B4((void **)&v53, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v52, "The name of the item");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v54, &v53, v3);
  v4 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v52 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v53 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v54 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v51, "want_amount");
  sub_21E94B4((void **)&v50, "-1");
  v7 = (int *)sub_21E94B4((void **)&v49, "Number of this item this entity wants to share");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v51, &v50, v7);
  v8 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v49 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v50 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v51 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v48, "surplus_amount");
  sub_21E94B4((void **)&v47, "-1");
  v11 = (int *)sub_21E94B4((void **)&v46, "Number of this item considered extra that the entity wants to share");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v48, &v47, v11);
  v12 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v46 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v47 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v48 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v45, "craft_into");
  sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4(
                 (void **)&v43,
                 "Defines the item this entity wants to craft with the item defined above. Should be an item name");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v45, &v44, v15);
  v16 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v43 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v44 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v45 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}
