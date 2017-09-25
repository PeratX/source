

const char *__fastcall BoostableDescription::getDescription(BoostableDescription *this)
{
  return "Defines the conditions and behavior of a rideable entity's boost";
}


void __fastcall BoostableDescription::getDocumentation(int a1, int a2)
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
  char *v12; // r4@7
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
  unsigned int *v28; // r2@20
  signed int v29; // r1@22
  unsigned int *v30; // r2@24
  signed int v31; // r1@26
  unsigned int *v32; // r2@28
  signed int v33; // r1@30
  unsigned int *v34; // r2@32
  signed int v35; // r1@34
  unsigned int *v36; // r2@36
  signed int v37; // r1@38
  unsigned int *v38; // r2@40
  signed int v39; // r1@42
  unsigned int *v40; // r2@44
  signed int v41; // r1@46
  unsigned int *v42; // r2@48
  signed int v43; // r1@50
  unsigned int *v44; // r2@52
  signed int v45; // r1@54
  unsigned int *v46; // r2@56
  signed int v47; // r1@58
  unsigned int *v48; // r2@60
  signed int v49; // r1@62
  unsigned int *v50; // r2@64
  signed int v51; // r1@66
  unsigned int *v52; // r2@68
  signed int v53; // r1@70
  unsigned int *v54; // r2@72
  signed int v55; // r1@74
  unsigned int *v56; // r2@76
  signed int v57; // r1@78
  unsigned int *v58; // r2@80
  signed int v59; // r1@82
  unsigned int *v60; // r2@84
  signed int v61; // r1@86
  unsigned int *v62; // r2@88
  signed int v63; // r1@90
  int v64; // [sp+8h] [bp-A0h]@16
  int v65; // [sp+10h] [bp-98h]@16
  int v66; // [sp+18h] [bp-90h]@16
  int v67; // [sp+20h] [bp-88h]@13
  int v68; // [sp+28h] [bp-80h]@13
  int v69; // [sp+30h] [bp-78h]@13
  int v70; // [sp+38h] [bp-70h]@10
  int v71; // [sp+40h] [bp-68h]@10
  int v72; // [sp+48h] [bp-60h]@10
  int v73; // [sp+50h] [bp-58h]@7
  int v74; // [sp+58h] [bp-50h]@7
  int v75; // [sp+60h] [bp-48h]@7
  int v76; // [sp+68h] [bp-40h]@4
  int v77; // [sp+70h] [bp-38h]@4
  int v78; // [sp+78h] [bp-30h]@4
  int v79; // [sp+80h] [bp-28h]@1
  int v80; // [sp+88h] [bp-20h]@1
  int v81; // [sp+90h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v81, "duration");
  sub_21E94B4((void **)&v80, "3");
  v3 = (int *)sub_21E94B4((void **)&v79, "Time in seconds for the boost");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v81, &v80, v3);
  v4 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v79 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v80 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v81 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v78, "speed_multiplier");
  sub_21E94B4((void **)&v77, "1.0");
  v7 = (int *)sub_21E94B4(
                (void **)&v76,
                "Factor by which the entity's normal speed increases. E.g. 2.0 means go twice as fast");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v78, &v77, v7);
  v8 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v76 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v77 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v78 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v75, "boost_items");
  sub_21E94B4((void **)&v74, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4(
                 (void **)&v73,
                 "List of items that can be used to boost while riding this entity. Each item has the following properties:");
  v12 = DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v75, &v74, v11);
  v13 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v73 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v74 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v75 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v12[4] = 1;
  sub_21E94B4((void **)&v72, "item");
  sub_21E94B4((void **)&v71, (const char *)&unk_257BC67);
  v16 = (int *)sub_21E94B4((void **)&v70, "Name of the item that can be used to boost");
  DocumentationSystem::Node::addNode((int)v12, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v72, &v71, v16);
  v17 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v70 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v71 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v72 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v69, "replaceItem");
  sub_21E94B4((void **)&v68, (const char *)&unk_257BC67);
  v20 = (int *)sub_21E94B4((void **)&v67, "The item used to boost will become this item once it is used up");
  DocumentationSystem::Node::addNode((int)v12, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v69, &v68, v20);
  v21 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v67 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v68 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v69 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v66, "damage");
  sub_21E94B4((void **)&v65, "1");
  v24 = (int *)sub_21E94B4((void **)&v64, "This is the damage that the item will take each time it is used");
  DocumentationSystem::Node::addNode((int)v12, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v66, &v65, v24);
  v25 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v64 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v65 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  v27 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v66 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}


void __fastcall BoostableDescription::~BoostableDescription(BoostableDescription *this)
{
  BoostableDescription::~BoostableDescription(this);
}


const char *__fastcall BoostableDescription::getJsonName(BoostableDescription *this)
{
  return "minecraft:boostable";
}


BoostableDescription *__fastcall BoostableDescription::~BoostableDescription(BoostableDescription *this)
{
  BoostableDescription *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F0E1C;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall BoostableDescription::getDocumentation(int a1, int a2)
{
  BoostableDescription::getDocumentation(a1, a2);
}


Json::Value *__fastcall BoostableDescription::parseData(BoostableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  BoostableDescription *v3; // r11@1
  float v4; // ST00_4@1
  const char *v5; // r3@1
  const Json::Value *v6; // r8@3
  Json::Value *v7; // r7@3
  char *v8; // r10@3
  Json::ValueIteratorBase *v9; // r5@3
  const Item **v10; // r9@3
  const Json::Value *v11; // r0@5
  const char *v12; // ST00_4@6
  int v13; // ST00_4@6
  __int64 v14; // r0@7
  __int64 v15; // r2@8
  int v16; // r2@9
  unsigned int v17; // r3@9
  unsigned int v18; // r2@11
  unsigned int v19; // r8@11
  char *v20; // r9@17 OVERLAPPED
  Json::Value *v21; // lr@17
  __int64 v22; // kr08_8@19
  char *v23; // r2@19
  __int64 v24; // kr10_8@20
  int v25; // r5@20
  int v26; // r10@22 OVERLAPPED
  int v27; // r0@24
  int v28; // r0@24
  float v30; // [sp+0h] [bp-80h]@0
  const char *v31; // [sp+0h] [bp-80h]@1
  Json::Value *v32; // [sp+14h] [bp-6Ch]@3
  int v33; // [sp+18h] [bp-68h]@3
  __int64 v34; // [sp+1Ch] [bp-64h]@3
  char v35; // [sp+28h] [bp-58h]@5
  char v36; // [sp+38h] [bp-48h]@3
  char v37; // [sp+40h] [bp-40h]@3
  char v38; // [sp+48h] [bp-38h]@1

  v2 = a2;
  v3 = this;
  Parser::parse(a2, (BoostableDescription *)((char *)this + 16), (float *)"duration", (const char *)0x40400000, v30);
  Parser::parse(
    v2,
    (BoostableDescription *)((char *)v3 + 20),
    (float *)"speed_multiplier",
    (const char *)0x3F800000,
    v4);
  Json::Value::Value(&v38, 0);
  Parser::parse(v2, (const Json::Value *)&v38, (Json::Value *)"boost_items", v5);
  if ( !Json::Value::isNull((Json::Value *)&v38) && Json::Value::isArray((Json::Value *)&v38) == 1 )
  {
    Json::Value::begin((Json::Value *)&v37, (int)&v38);
    v6 = (const Json::Value *)((unsigned int)&v33 | 4);
    v7 = (Json::Value *)&v36;
    v8 = &v38;
    v9 = (Json::ValueIteratorBase *)&v37;
    v10 = (const Item **)"item";
    v32 = (Json::Value *)((char *)&v34 + 4);
    while ( 1 )
    {
      Json::Value::end(v7, (int)v8);
      if ( Json::ValueIteratorBase::isEqual(v9, v7) == 1 )
        break;
      v11 = (const Json::Value *)Json::ValueIteratorBase::deref(v9);
      Json::Value::Value((Json::Value *)&v35, v11);
      if ( Json::Value::isObject((Json::Value *)&v35) )
      {
        v33 = 0;
        v34 = 0x100000000LL;
        Parser::parse((Parser *)&v35, (const Json::Value *)&v33, v10, (const char *)&unk_257BC67, v31);
        Parser::parse((Parser *)&v35, v6, (const Item **)"replaceItem", (const char *)&unk_257BC67, v12);
        Parser::parse((Parser *)&v35, v32, (int *)"damage", (const char *)1, v13);
        if ( v33 )
        {
          HIDWORD(v14) = *((_QWORD *)v3 + 1);
          if ( HIDWORD(v14) == *((_QWORD *)v3 + 1) >> 32 )
          {
            LODWORD(v14) = *((_DWORD *)v3 + 1);
            v16 = (HIDWORD(v14) - (signed int)v14) >> 2;
            v17 = -1431655765 * v16;
            if ( HIDWORD(v14) == (_DWORD)v14 )
              v17 = 1;
            v18 = v17 + -1431655765 * v16;
            v19 = v18;
            if ( v18 > 0x15555555 )
              v19 = 357913941;
            if ( v18 < v17 )
            if ( v19 )
            {
              if ( v19 >= 0x15555556 )
                sub_21E57F4();
              v20 = (char *)operator new(12 * v19);
              v21 = v32;
              v14 = *(_QWORD *)((char *)v3 + 4);
            }
            else
              v20 = 0;
            v22 = v34;
            *(_DWORD *)&v20[HIDWORD(v14) - v14] = v33;
            *(_QWORD *)&v20[HIDWORD(v14) - v14 + 4] = v22;
            v23 = v20;
            if ( HIDWORD(v14) != (_DWORD)v14 )
              do
              {
                v24 = *(_QWORD *)v14;
                v25 = *(_DWORD *)(v14 + 8);
                LODWORD(v14) = v14 + 12;
                *(_QWORD *)v23 = v24;
                *((_DWORD *)v23 + 2) = v25;
                v23 += 12;
              }
              while ( HIDWORD(v14) != (_DWORD)v14 );
              LODWORD(v14) = *((_DWORD *)v3 + 1);
            v26 = (int)(v23 + 12);
            v32 = v21;
            if ( (_DWORD)v14 )
              operator delete((void *)v14);
            v27 = 3 * v19;
            *(_QWORD *)((char *)v3 + 4) = *(_QWORD *)&v20;
            v6 = (const Json::Value *)((unsigned int)&v33 | 4);
            v28 = (int)&v20[4 * v27];
            v8 = &v38;
            v7 = (Json::Value *)&v36;
            v10 = (const Item **)"item";
            v9 = (Json::ValueIteratorBase *)&v37;
            *((_DWORD *)v3 + 3) = v28;
          }
          else
            v15 = v34;
            *(_DWORD *)HIDWORD(v14) = v33;
            *(_QWORD *)(HIDWORD(v14) + 4) = v15;
            *((_DWORD *)v3 + 2) += 12;
        }
      }
      Json::Value::~Value((Json::Value *)&v35);
      Json::ValueIteratorBase::increment(v9);
    }
  }
  return Json::Value::~Value((Json::Value *)&v38);
}


void __fastcall BoostableDescription::~BoostableDescription(BoostableDescription *this)
{
  BoostableDescription *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26F0E1C;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}
