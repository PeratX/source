

void __fastcall SpawnEntityDescription::~SpawnEntityDescription(SpawnEntityDescription *this)
{
  SpawnEntityDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  unsigned int *v10; // r2@9
  signed int v11; // r1@11
  unsigned int *v12; // r2@13
  signed int v13; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_271F384;
  v2 = *((_DWORD *)this + 8);
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
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v4 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v6 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  j_operator delete((void *)v1);
}


void __fastcall SpawnEntityDescription::parseData(SpawnEntityDescription *this, Json::Value *a2)
{
  SpawnEntityDescription *v2; // r6@1
  char *v3; // r5@1
  Json::Value *v4; // r4@1
  __int64 v5; // r0@1
  SpawnEntityDescription *v6; // r5@3
  char *v7; // r8@5
  char *v8; // r0@5
  char *v9; // r0@7
  int v10; // r0@8
  char v11; // r1@8
  const void **v12; // r0@12
  char *v13; // r0@12
  void *v14; // r0@13
  void *v15; // r0@14
  char *v16; // r0@15
  unsigned int *v17; // r2@17
  signed int v18; // r1@19
  unsigned int *v19; // r2@21
  signed int v20; // r1@23
  unsigned int *v21; // r2@33
  signed int v22; // r1@35
  unsigned int *v23; // r2@37
  signed int v24; // r1@39
  unsigned int *v25; // r2@41
  signed int v26; // r1@43
  unsigned int *v27; // r2@57
  signed int v28; // r1@59
  int v29; // [sp+0h] [bp-38h]@1
  char *v30; // [sp+4h] [bp-34h]@12
  int v31; // [sp+Ch] [bp-2Ch]@10
  char *v32; // [sp+10h] [bp-28h]@7
  char *v33; // [sp+14h] [bp-24h]@5
  char *v34; // [sp+18h] [bp-20h]@3

  v2 = this;
  v3 = (char *)this + 8;
  v4 = a2;
  j_Parser::parse(a2, (SpawnEntityDescription *)((char *)this + 8), (int *)"min_wait_time", (const char *)0x12C, v29);
  j_Parser::parse(v4, (SpawnEntityDescription *)((char *)v2 + 12), (int *)"max_wait_time", (const char *)0x258, v29);
  v5 = *((_QWORD *)v2 + 1);
  if ( SHIDWORD(v5) < (signed int)v5 )
  {
    *(_DWORD *)v3 = HIDWORD(v5);
    *((_DWORD *)v2 + 3) = v5;
  }
  j_Parser::parse((int)v4, (int *)v2 + 5, "spawn_sound", "plop");
  v34 = (char *)&unk_28898CC;
  j_Parser::parse((int)v4, (int *)&v34, "spawn_item", "egg");
  v6 = (SpawnEntityDescription *)((char *)v2 + 28);
  *((_DWORD *)v2 + 6) = j_Item::lookupByName((unsigned int *)&v34, 1);
  j_Parser::parse((int)v4, (int *)v2 + 7, "spawn_entity", (const char *)&unk_257BC67);
  if ( *(_DWORD *)(*((_DWORD *)v2 + 7) - 12) && sub_21E77E4((int *)v2 + 7, 58, 0) == (char *)-1 )
    v33 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v33, *(_DWORD *)(*(_DWORD *)v6 - 12) + 10);
    sub_21E7408((const void **)&v33, "minecraft:", 0xAu);
    sub_21E72F0((const void **)&v33, (const void **)v2 + 7);
    v7 = j_EntityTypeFromString((const void **)&v33);
    v8 = v33 - 12;
    if ( (int *)(v33 - 12) != &dword_28898C0 )
    {
      v25 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
    if ( v7 != (char *)1 )
      v32 = (char *)&unk_28898CC;
      sub_21E6FCC((const void **)&v32, *(_DWORD *)(*(_DWORD *)v6 - 12) + 10);
      sub_21E7408((const void **)&v32, "minecraft:", 0xAu);
      sub_21E72F0((const void **)&v32, (const void **)v2 + 7);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v2 + 7,
        (int *)&v32);
      v9 = v32 - 12;
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v32 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
  v10 = sub_21E7D6C((const void **)v2 + 7, (const char *)&unk_257BC67);
  v11 = 0;
  if ( !v10 )
    v11 = 1;
  *((_BYTE *)v2 + 4) = v11;
  j_Parser::parse((int)v4, (int *)v2 + 8, "spawn_method", "born");
  sub_21E94B4((void **)&v31, (const char *)&unk_257BC67);
  j_Parser::parse((int)v4, &v31, "spawn_event", "minecraft:entity_born");
  if ( *(_DWORD *)(*(_DWORD *)v6 - 12) >= 2u && *(_DWORD *)(v31 - 12) >= 2u )
    sub_21E8AF4(&v29, &EntityDefinitionIdentifier::EVENT_BEGIN);
    sub_21E72F0((const void **)&v29, (const void **)&v31);
    v12 = sub_21E72F0((const void **)&v29, (const void **)&EntityDefinitionIdentifier::EVENT_END);
    v30 = (char *)*v12;
    *v12 = &unk_28898CC;
    sub_21E72F0((const void **)v2 + 7, (const void **)&v30);
    v13 = v30 - 12;
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v30 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v29 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v34 - 12;
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v34 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


void __fastcall SpawnEntityDescription::parseData(SpawnEntityDescription *this, Json::Value *a2)
{
  SpawnEntityDescription::parseData(this, a2);
}


void __fastcall SpawnEntityDescription::getDocumentation(int a1, int a2)
{
  SpawnEntityDescription::getDocumentation(a1, a2);
}


SpawnEntityDescription *__fastcall SpawnEntityDescription::~SpawnEntityDescription(SpawnEntityDescription *this)
{
  SpawnEntityDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  *(_DWORD *)this = &off_271F384;
  v2 = *((_DWORD *)this + 8);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 7);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v1;
}


void __fastcall SpawnEntityDescription::~SpawnEntityDescription(SpawnEntityDescription *this)
{
  SpawnEntityDescription::~SpawnEntityDescription(this);
}


void __fastcall SpawnEntityDescription::getDocumentation(int a1, int a2)
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
  int *v19; // r0@13
  void *v20; // r0@13
  void *v21; // r0@14
  void *v22; // r0@15
  int *v23; // r0@16
  void *v24; // r0@16
  void *v25; // r0@17
  void *v26; // r0@18
  int *v27; // r0@19
  void *v28; // r0@19
  void *v29; // r0@20
  void *v30; // r0@21
  unsigned int *v31; // r2@23
  signed int v32; // r1@25
  unsigned int *v33; // r2@27
  signed int v34; // r1@29
  unsigned int *v35; // r2@31
  signed int v36; // r1@33
  unsigned int *v37; // r2@35
  signed int v38; // r1@37
  unsigned int *v39; // r2@39
  signed int v40; // r1@41
  unsigned int *v41; // r2@43
  signed int v42; // r1@45
  unsigned int *v43; // r2@47
  signed int v44; // r1@49
  unsigned int *v45; // r2@51
  signed int v46; // r1@53
  unsigned int *v47; // r2@55
  signed int v48; // r1@57
  unsigned int *v49; // r2@59
  signed int v50; // r1@61
  unsigned int *v51; // r2@63
  signed int v52; // r1@65
  unsigned int *v53; // r2@67
  signed int v54; // r1@69
  unsigned int *v55; // r2@71
  signed int v56; // r1@73
  unsigned int *v57; // r2@75
  signed int v58; // r1@77
  unsigned int *v59; // r2@79
  signed int v60; // r1@81
  unsigned int *v61; // r2@83
  signed int v62; // r1@85
  unsigned int *v63; // r2@87
  signed int v64; // r1@89
  unsigned int *v65; // r2@91
  signed int v66; // r1@93
  unsigned int *v67; // r2@95
  signed int v68; // r1@97
  unsigned int *v69; // r2@99
  signed int v70; // r1@101
  unsigned int *v71; // r2@103
  signed int v72; // r1@105
  int v73; // [sp+8h] [bp-B8h]@19
  int v74; // [sp+10h] [bp-B0h]@19
  int v75; // [sp+18h] [bp-A8h]@19
  int v76; // [sp+20h] [bp-A0h]@16
  int v77; // [sp+28h] [bp-98h]@16
  int v78; // [sp+30h] [bp-90h]@16
  int v79; // [sp+38h] [bp-88h]@13
  int v80; // [sp+40h] [bp-80h]@13
  int v81; // [sp+48h] [bp-78h]@13
  int v82; // [sp+50h] [bp-70h]@10
  int v83; // [sp+58h] [bp-68h]@10
  int v84; // [sp+60h] [bp-60h]@10
  int v85; // [sp+68h] [bp-58h]@7
  int v86; // [sp+70h] [bp-50h]@7
  int v87; // [sp+78h] [bp-48h]@7
  int v88; // [sp+80h] [bp-40h]@4
  int v89; // [sp+88h] [bp-38h]@4
  int v90; // [sp+90h] [bp-30h]@4
  int v91; // [sp+98h] [bp-28h]@1
  int v92; // [sp+A0h] [bp-20h]@1
  int v93; // [sp+A8h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v93, "min_wait_time");
  sub_21E94B4((void **)&v92, "300");
  v3 = (int *)sub_21E94B4(
                (void **)&v91,
                "Minimum amount of time to randomly wait in seconds before another entity is spawned");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v93, &v92, v3);
  v4 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v91 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v92 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v93 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v90, "max_wait_time");
  sub_21E94B4((void **)&v89, "600");
  v7 = (int *)sub_21E94B4(
                (void **)&v88,
                "Maximum amount of time to randomly wait in seconds before another entity is spawned");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v90, &v89, v7);
  v8 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v88 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v89 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v90 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v87, "spawn_sound");
  sub_21E94B4((void **)&v86, "plop");
  v11 = (int *)sub_21E94B4((void **)&v85, "Name of the sound effect to play when the entity is spawned");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v87, &v86, v11);
  v12 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v85 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v86 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v87 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v84, "spawn_item");
  sub_21E94B4((void **)&v83, "egg");
  v15 = (int *)sub_21E94B4((void **)&v82, "Name of the item to spawn");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v84, &v83, v15);
  v16 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v82 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v83 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v84 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v81, "spawn_entity");
  sub_21E94B4((void **)&v80, (const char *)&unk_257BC67);
  v19 = (int *)sub_21E94B4(
                 (void **)&v79,
                 "Identifier of the entity to spawn. Leave empty to spawn the item defined above instead");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v81, &v80, v19);
  v20 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v79 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v80 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v81 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v78, "spawn_method");
  sub_21E94B4((void **)&v77, "born");
  v23 = (int *)sub_21E94B4((void **)&v76, "Method to use to spawn the entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v78, &v77, v23);
  v24 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v76 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v77 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v78 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v75, "spawn_event");
  sub_21E94B4((void **)&v74, "minecraft:entity_born");
  v27 = (int *)sub_21E94B4((void **)&v73, "Event to call when the entity is spawned");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v75, &v74, v27);
  v28 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v73 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v74 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v75 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


const char *__fastcall SpawnEntityDescription::getDescription(SpawnEntityDescription *this)
{
  return "Adds a timer after which this entity will spawn another entity or item (similar to vanilla's chicken's egg-laying behavior).";
}


const char *__fastcall SpawnEntityDescription::getJsonName(SpawnEntityDescription *this)
{
  return "minecraft:spawn_entity";
}
