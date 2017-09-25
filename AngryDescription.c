

void __fastcall AngryDescription::~AngryDescription(AngryDescription *this)
{
  AngryDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F0DF8;
  FilterGroup::~FilterGroup((AngryDescription *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 5);
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
  v4 = *((_DWORD *)v1 + 4);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


int __fastcall AngryDescription::parseData(AngryDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  AngryDescription *v3; // r5@1
  bool v4; // ST00_1@1
  int v5; // ST00_4@1
  const char *v6; // r3@1
  int v7; // r0@1
  int v9; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  Parser::parse(a2, (AngryDescription *)((char *)this + 4), (int *)"duration", (const char *)0x19, v9);
  *((_DWORD *)v3 + 1) *= 20;
  Parser::parse(v2, (AngryDescription *)((char *)v3 + 8), (bool *)"broadcastAnger", 0, v4);
  Parser::parse(v2, (AngryDescription *)((char *)v3 + 12), (int *)"broadcastRange", (const char *)0x14, v5);
  v7 = *((_DWORD *)v3 + 3);
  if ( v7 < 0 )
    v7 = 0;
  *((_DWORD *)v3 + 3) = v7;
  return j_j_j__ZN6Parser5parseERN4Json5ValueER17DefinitionTriggerPKc_0(
           v2,
           (AngryDescription *)((char *)v3 + 16),
           (DefinitionTrigger *)"calm_event",
           v6);
}


const char *__fastcall AngryDescription::getJsonName(AngryDescription *this)
{
  return "minecraft:angry";
}


AngryDescription *__fastcall AngryDescription::~AngryDescription(AngryDescription *this)
{
  AngryDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F0DF8;
  FilterGroup::~FilterGroup((AngryDescription *)((char *)this + 24));
  v2 = *((_DWORD *)v1 + 5);
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
  v4 = *((_DWORD *)v1 + 4);
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


void __fastcall AngryDescription::~AngryDescription(AngryDescription *this)
{
  AngryDescription::~AngryDescription(this);
}


const char *__fastcall AngryDescription::getDescription(AngryDescription *this)
{
  return "Defines the entity's 'angry' state using a timer.";
}


void __fastcall AngryDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v54, "duration");
  sub_21E94B4((void **)&v53, "25");
  v3 = (int *)sub_21E94B4((void **)&v52, "The amount of time in seconds that the entity will be angry");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v54, &v53, v3);
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
  sub_21E94B4((void **)&v51, "broadcastAnger");
  sub_21E94B4((void **)&v50, "false");
  v7 = (int *)sub_21E94B4(
                (void **)&v49,
                "If true, other entities of the same entity definition within the broadcastRange will also become angry");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v51, &v50, v7);
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
  sub_21E94B4((void **)&v48, "broadcastRange");
  sub_21E94B4((void **)&v47, "20");
  v11 = (int *)sub_21E94B4(
                 (void **)&v46,
                 "Distance in blocks within which other entities of the same entity definition will become angry");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v48, &v47, v11);
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
  sub_21E94B4((void **)&v45, "calm_event");
  sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4(
                 (void **)&v43,
                 "Event to run after the number of seconds specified in duration expires (when the entity stops being 'angry')");
  DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v45, &v44, v15);
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


void __fastcall AngryDescription::getDocumentation(int a1, int a2)
{
  AngryDescription::getDocumentation(a1, a2);
}
