

Json::Value *__fastcall EquippableDescription::parseData(EquippableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  const char *v3; // r3@1
  Json::Value *v4; // r4@3
  Json::Value *v5; // r8@3
  Json::Value *v6; // r5@3
  const Json::Value *v7; // r0@4
  Json::Value *v8; // r0@5
  const Json::Value *v9; // r0@5
  int *v10; // r4@7
  void *v11; // r0@7
  void *v12; // r0@8
  Json::Value *v13; // r0@14
  int v14; // r4@15
  Json::Value *v15; // r10@15
  int *v16; // r4@15
  void *v17; // r0@15
  void *v18; // r0@16
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  Json::Value *v21; // r0@21
  Json::Value *v22; // r0@22
  int v23; // r4@22
  void *v24; // r0@22
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  unsigned int *v27; // r2@44
  signed int v28; // r1@46
  const char *v29; // r3@71
  const char *v30; // r3@71
  __int64 v31; // r0@71
  unsigned int *v32; // r2@76
  signed int v33; // r1@78
  unsigned int *v34; // r2@80
  signed int v35; // r1@82
  const char *v37; // [sp+0h] [bp-1F0h]@0
  EquippableDescription *v38; // [sp+4Ch] [bp-1A4h]@1
  char v39; // [sp+50h] [bp-1A0h]@25
  int v40; // [sp+58h] [bp-198h]@32
  void *v41; // [sp+74h] [bp-17Ch]@30
  void *ptr; // [sp+84h] [bp-16Ch]@28
  int v43; // [sp+9Ch] [bp-154h]@22
  int v44; // [sp+A0h] [bp-150h]@22
  int v45; // [sp+A8h] [bp-148h]@15
  int v46; // [sp+ACh] [bp-144h]@15
  char v47; // [sp+B0h] [bp-140h]@60
  char v48; // [sp+B8h] [bp-138h]@3
  char v49; // [sp+C0h] [bp-130h]@10
  int v50; // [sp+C8h] [bp-128h]@67
  void *v51; // [sp+E4h] [bp-10Ch]@65
  void *v52; // [sp+F4h] [bp-FCh]@63
  int v53; // [sp+110h] [bp-E0h]@7
  int v54; // [sp+114h] [bp-DCh]@7
  char v55; // [sp+118h] [bp-D8h]@3
  int v56; // [sp+128h] [bp-C8h]@5
  int v57; // [sp+12Ch] [bp-C4h]@5
  ItemInstance *v58; // [sp+130h] [bp-C0h]@5
  ItemInstance *v59; // [sp+134h] [bp-BCh]@5
  int v60; // [sp+138h] [bp-B8h]@5
  int v61; // [sp+13Ch] [bp-B4h]@5
  void *v62; // [sp+140h] [bp-B0h]@5
  void *v63; // [sp+144h] [bp-ACh]@5
  void **v64; // [sp+148h] [bp-A8h]@5
  int v65; // [sp+14Ch] [bp-A4h]@5
  int v66; // [sp+150h] [bp-A0h]@5
  int v67; // [sp+154h] [bp-9Ch]@5
  int v68; // [sp+158h] [bp-98h]@5
  int v69; // [sp+15Ch] [bp-94h]@5
  int v70; // [sp+160h] [bp-90h]@5
  int v71; // [sp+164h] [bp-8Ch]@5
  void *v72; // [sp+168h] [bp-88h]@5
  void *v73; // [sp+16Ch] [bp-84h]@5
  void **v74; // [sp+170h] [bp-80h]@5
  int v75; // [sp+174h] [bp-7Ch]@5
  int v76; // [sp+178h] [bp-78h]@5
  int v77; // [sp+17Ch] [bp-74h]@5
  int v78; // [sp+180h] [bp-70h]@5
  int v79; // [sp+184h] [bp-6Ch]@5
  int v80; // [sp+188h] [bp-68h]@5
  int v81; // [sp+18Ch] [bp-64h]@5
  char v82; // [sp+190h] [bp-60h]@4
  char v83; // [sp+1A0h] [bp-50h]@3
  char v84; // [sp+1A8h] [bp-48h]@3
  char v85; // [sp+1B0h] [bp-40h]@1

  v2 = a2;
  v38 = this;
  Json::Value::Value(&v85, 0);
  Parser::parse(v2, (const Json::Value *)&v85, (Json::Value *)"slots", v3);
  if ( !Json::Value::isNull((Json::Value *)&v85) && Json::Value::isArray((Json::Value *)&v85) == 1 )
  {
    Json::Value::begin((Json::Value *)&v84, (int)&v85);
    v4 = (Json::Value *)&v83;
    v5 = (Json::Value *)&v55;
    v6 = (Json::Value *)&v48;
    while ( 1 )
    {
      Json::Value::end(v4, (int)&v85);
      if ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v84, v4) == 1 )
        return Json::Value::~Value((Json::Value *)&v85);
      v7 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v84);
      Json::Value::Value((Json::Value *)&v82, v7);
      if ( Json::Value::isObject((Json::Value *)&v82) )
        break;
LABEL_75:
      Json::Value::~Value((Json::Value *)&v82);
      Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v84);
    }
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    sub_21E94B4((void **)&v61, (const char *)&unk_257BC67);
    v62 = &unk_28898CC;
    v63 = &unk_28898CC;
    v65 = 0;
    v66 = 0;
    v67 = 0;
    v68 = 0;
    v69 = 0;
    v70 = 0;
    v71 = 0;
    v64 = &off_26F1930;
    v72 = &unk_28898CC;
    v73 = &unk_28898CC;
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v74 = &off_26F1930;
    v8 = (Json::Value *)Json::Value::operator[]((Json::Value *)&v82, "slot");
    v56 = Json::Value::asInt(v8, 0);
    v9 = (const Json::Value *)Json::Value::operator[]((Json::Value *)&v82, "accepted_items");
    Json::Value::Value(v5, v9);
    if ( Json::Value::isNull(v5) )
      goto LABEL_70;
    if ( Json::Value::isString(v5) == 1 )
      sub_21E94B4((void **)&v53, (const char *)&unk_257BC67);
      Json::Value::asString(&v54, (int)v5, &v53);
      v10 = Item::lookupByName((unsigned int *)&v54, 1);
      v11 = (void *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
      {
        v32 = (unsigned int *)(v54 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
        }
        else
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v34 = (unsigned int *)(v53 - 4);
            v35 = __ldrex(v34);
          while ( __strex(v35 - 1, v34) );
          v35 = (*v34)--;
        if ( v35 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v5 = (Json::Value *)&v55;
      if ( v10 )
        ItemInstance::ItemInstance((ItemInstance *)&v49, (int)v10);
        if ( v58 == v59 )
          std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
            (unsigned __int64 *)&v57,
            (int)&v49);
          ItemInstance::ItemInstance(v58, (int)&v49);
          v58 = (ItemInstance *)((char *)v58 + 72);
        if ( v52 )
          operator delete(v52);
        if ( v51 )
          operator delete(v51);
        if ( v50 )
          (*(void (**)(void))(*(_DWORD *)v50 + 4))();
        v50 = 0;
    if ( Json::Value::isArray(v5) != 1 )
LABEL_70:
      Parser::parse((Parser *)&v82, (const Json::Value *)&v60, (const Item **)"item", (const char *)&unk_257BC67, v37);
      if ( v60 )
        Parser::parse((int)&v82, &v61, "interact_text", (const char *)&unk_257BC67);
        Parser::parse((Parser *)&v82, (Json::Value *)&v62, (DefinitionTrigger *)"on_equip", v29);
        Parser::parse((Parser *)&v82, (Json::Value *)&v72, (DefinitionTrigger *)"on_unequip", v30);
        v31 = *((_QWORD *)v38 + 1);
        if ( (_DWORD)v31 == HIDWORD(v31) )
          std::vector<SlotDescriptor,std::allocator<SlotDescriptor>>::_M_emplace_back_aux<SlotDescriptor const&>(
            (unsigned __int64 *)((char *)v38 + 4),
            (int)&v56);
          SlotDescriptor::SlotDescriptor((_DWORD *)v31, (int)&v56);
          *((_DWORD *)v38 + 2) += 104;
      Json::Value::~Value(v5);
      SlotDescriptor::~SlotDescriptor((SlotDescriptor *)&v56);
      v4 = (Json::Value *)&v83;
      goto LABEL_75;
    Json::Value::begin(v6, (int)v5);
      Json::Value::end((Json::Value *)&v47, (int)v5);
      if ( Json::ValueIteratorBase::isEqual(v6, (const Json::ValueIteratorBase *)&v47) == 1 )
        goto LABEL_70;
      v13 = (Json::Value *)Json::ValueIteratorBase::deref(v6);
      if ( Json::Value::isString(v13) == 1 )
      v21 = (Json::Value *)Json::ValueIteratorBase::deref(v6);
      if ( Json::Value::isObject(v21) != 1 )
        goto LABEL_35;
      v22 = (Json::Value *)Json::ValueIteratorBase::deref(v6);
      v23 = Json::Value::operator[](v22, "item");
      sub_21E94B4((void **)&v43, (const char *)&unk_257BC67);
      Json::Value::asString(&v44, v23, &v43);
      v16 = Item::lookupByName((unsigned int *)&v44, 1);
      v15 = v6;
      v24 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v44 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v18 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v19 = (unsigned int *)(v43 - 4);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
LABEL_53:
          if ( v20 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
          goto LABEL_24;
LABEL_52:
        v20 = (*v19)--;
        goto LABEL_53;
LABEL_24:
      v6 = v15;
      if ( v16 )
        ItemInstance::ItemInstance((ItemInstance *)&v39, (int)v16);
            (int)&v39);
          ItemInstance::ItemInstance(v58, (int)&v39);
        if ( ptr )
          operator delete(ptr);
        if ( v41 )
          operator delete(v41);
        if ( v40 )
          (*(void (**)(void))(*(_DWORD *)v40 + 4))();
        v40 = 0;
LABEL_35:
      Json::ValueIteratorBase::increment(v6);
    v14 = Json::ValueIteratorBase::deref(v6);
    v15 = v6;
    sub_21E94B4((void **)&v45, (const char *)&unk_257BC67);
    Json::Value::asString(&v46, v14, &v45);
    v16 = Item::lookupByName((unsigned int *)&v46, 1);
    v17 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v46 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) == &dword_28898C0 )
      goto LABEL_24;
    v19 = (unsigned int *)(v45 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      goto LABEL_53;
    goto LABEL_52;
  }
  return Json::Value::~Value((Json::Value *)&v85);
}


void __fastcall EquippableDescription::getDocumentation(int a1, int a2)
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
  int *v24; // r0@16
  void *v25; // r0@16
  void *v26; // r0@17
  void *v27; // r0@18
  int *v28; // r0@19
  void *v29; // r0@19
  void *v30; // r0@20
  void *v31; // r0@21
  unsigned int *v32; // r2@23
  signed int v33; // r1@25
  unsigned int *v34; // r2@27
  signed int v35; // r1@29
  unsigned int *v36; // r2@31
  signed int v37; // r1@33
  unsigned int *v38; // r2@35
  signed int v39; // r1@37
  unsigned int *v40; // r2@39
  signed int v41; // r1@41
  unsigned int *v42; // r2@43
  signed int v43; // r1@45
  unsigned int *v44; // r2@47
  signed int v45; // r1@49
  unsigned int *v46; // r2@51
  signed int v47; // r1@53
  unsigned int *v48; // r2@55
  signed int v49; // r1@57
  unsigned int *v50; // r2@59
  signed int v51; // r1@61
  unsigned int *v52; // r2@63
  signed int v53; // r1@65
  unsigned int *v54; // r2@67
  signed int v55; // r1@69
  unsigned int *v56; // r2@71
  signed int v57; // r1@73
  unsigned int *v58; // r2@75
  signed int v59; // r1@77
  unsigned int *v60; // r2@79
  signed int v61; // r1@81
  unsigned int *v62; // r2@83
  signed int v63; // r1@85
  unsigned int *v64; // r2@87
  signed int v65; // r1@89
  unsigned int *v66; // r2@91
  signed int v67; // r1@93
  unsigned int *v68; // r2@95
  signed int v69; // r1@97
  unsigned int *v70; // r2@99
  signed int v71; // r1@101
  unsigned int *v72; // r2@103
  signed int v73; // r1@105
  int v74; // [sp+8h] [bp-B8h]@19
  int v75; // [sp+10h] [bp-B0h]@19
  int v76; // [sp+18h] [bp-A8h]@19
  int v77; // [sp+20h] [bp-A0h]@16
  int v78; // [sp+28h] [bp-98h]@16
  int v79; // [sp+30h] [bp-90h]@16
  int v80; // [sp+38h] [bp-88h]@13
  int v81; // [sp+40h] [bp-80h]@13
  int v82; // [sp+48h] [bp-78h]@13
  int v83; // [sp+50h] [bp-70h]@10
  int v84; // [sp+58h] [bp-68h]@10
  int v85; // [sp+60h] [bp-60h]@10
  int v86; // [sp+68h] [bp-58h]@7
  int v87; // [sp+70h] [bp-50h]@7
  int v88; // [sp+78h] [bp-48h]@7
  int v89; // [sp+80h] [bp-40h]@4
  int v90; // [sp+88h] [bp-38h]@4
  int v91; // [sp+90h] [bp-30h]@4
  int v92; // [sp+98h] [bp-28h]@1
  int v93; // [sp+A0h] [bp-20h]@1
  int v94; // [sp+A8h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v94, "slots");
  sub_21E94B4((void **)&v93, (const char *)&unk_257BC67);
  v3 = (int *)sub_21E94B4((void **)&v92, "List of slots and the item that can be equipped");
  v4 = DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v94, &v93, v3);
  v5 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v92 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v93 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v94 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v4[4] = 1;
  sub_21E94B4((void **)&v91, "slot");
  sub_21E94B4((void **)&v90, "0");
  v8 = (int *)sub_21E94B4((void **)&v89, "The slot number of this slot");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v91, &v90, v8);
  v9 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v89 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v90 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v91 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v88, "accepted_items");
  sub_21E94B4((void **)&v87, (const char *)&unk_257BC67);
  v12 = (int *)sub_21E94B4((void **)&v86, "The list of items that can go in this slot");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v88, &v87, v12);
  v13 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v86 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v87 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v88 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v85, "item");
  sub_21E94B4((void **)&v84, (const char *)&unk_257BC67);
  v16 = (int *)sub_21E94B4((void **)&v83, "Name of the item that can be equipped for this slot");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v85, &v84, v16);
  v17 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v83 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v84 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v85 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v82, "interact_text");
  sub_21E94B4((void **)&v81, (const char *)&unk_257BC67);
  v20 = (int *)sub_21E94B4(
                 (void **)&v80,
                 "Text to be displayed when the entity can be equipped with this item when playing with Touch-screen controls");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v82, &v81, v20);
  v21 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v80 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v81 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v82 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v79, "on_equip");
  sub_21E94B4((void **)&v78, (const char *)&unk_257BC67);
  v24 = (int *)sub_21E94B4((void **)&v77, "Event to trigger when this entity is equipped with this item");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v79, &v78, v24);
  v25 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v77 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v78 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v79 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v76, "on_unequip");
  sub_21E94B4((void **)&v75, (const char *)&unk_257BC67);
  v28 = (int *)sub_21E94B4((void **)&v74, "Event to trigger when this item is removed from this entity");
  DocumentationSystem::Node::addNode((int)v4, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v76, &v75, v28);
  v29 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v74 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v75 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v76 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


void __fastcall EquippableDescription::~EquippableDescription(EquippableDescription *this)
{
  EquippableDescription *v1; // r4@1
  SlotDescriptor *v2; // r0@1
  SlotDescriptor *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26F0F18;
  v3 = (SlotDescriptor *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (SlotDescriptor *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v2) + 104);
    while ( v3 != v2 );
    v2 = (SlotDescriptor *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  j_j_j__ZdlPv_6((void *)v1);
}


EquippableDescription *__fastcall EquippableDescription::~EquippableDescription(EquippableDescription *this)
{
  EquippableDescription *v1; // r4@1
  SlotDescriptor *v2; // r0@1
  SlotDescriptor *v3; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_26F0F18;
  v3 = (SlotDescriptor *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (SlotDescriptor *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
      v2 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v2) + 104);
    while ( v3 != v2 );
    v2 = (SlotDescriptor *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete((void *)v2);
  return v1;
}


const char *__fastcall EquippableDescription::getJsonName(EquippableDescription *this)
{
  return "minecraft:equippable";
}


void __fastcall EquippableDescription::~EquippableDescription(EquippableDescription *this)
{
  EquippableDescription::~EquippableDescription(this);
}


void __fastcall EquippableDescription::getDocumentation(int a1, int a2)
{
  EquippableDescription::getDocumentation(a1, a2);
}


const char *__fastcall EquippableDescription::getDescription(EquippableDescription *this)
{
  return "Defines an entity's behavior for having items equipped to it";
}
