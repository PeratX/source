

void __fastcall LookAtDescription::getDocumentation(int a1, int a2)
{
  LookAtDescription::getDocumentation(a1, a2);
}


const char *__fastcall LookAtDescription::getJsonName(LookAtDescription *this)
{
  return "minecraft:lookat";
}


void __fastcall LookAtDescription::~LookAtDescription(LookAtDescription *this)
{
  LookAtDescription::~LookAtDescription(this);
}


void __fastcall LookAtDescription::getDocumentation(int a1, int a2)
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
  unsigned int *v27; // r2@20
  signed int v28; // r1@22
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  unsigned int *v41; // r2@48
  signed int v42; // r1@50
  unsigned int *v43; // r2@52
  signed int v44; // r1@54
  unsigned int *v45; // r2@56
  signed int v46; // r1@58
  unsigned int *v47; // r2@60
  signed int v48; // r1@62
  unsigned int *v49; // r2@64
  signed int v50; // r1@66
  unsigned int *v51; // r2@68
  signed int v52; // r1@70
  unsigned int *v53; // r2@72
  signed int v54; // r1@74
  unsigned int *v55; // r2@76
  signed int v56; // r1@78
  unsigned int *v57; // r2@80
  signed int v58; // r1@82
  unsigned int *v59; // r2@84
  signed int v60; // r1@86
  unsigned int *v61; // r2@88
  signed int v62; // r1@90
  int v63; // [sp+8h] [bp-A0h]@16
  int v64; // [sp+10h] [bp-98h]@16
  int v65; // [sp+18h] [bp-90h]@16
  int v66; // [sp+20h] [bp-88h]@13
  int v67; // [sp+28h] [bp-80h]@13
  int v68; // [sp+30h] [bp-78h]@13
  int v69; // [sp+38h] [bp-70h]@10
  int v70; // [sp+40h] [bp-68h]@10
  int v71; // [sp+48h] [bp-60h]@10
  int v72; // [sp+50h] [bp-58h]@7
  int v73; // [sp+58h] [bp-50h]@7
  int v74; // [sp+60h] [bp-48h]@7
  int v75; // [sp+68h] [bp-40h]@4
  int v76; // [sp+70h] [bp-38h]@4
  int v77; // [sp+78h] [bp-30h]@4
  int v78; // [sp+80h] [bp-28h]@1
  int v79; // [sp+88h] [bp-20h]@1
  int v80; // [sp+90h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v80, "setTarget");
  sub_21E94B4((void **)&v79, "true");
  v3 = (int *)sub_21E94B4(
                (void **)&v78,
                "If true, this entity will set the attack target as the entity that looked at it");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v80, &v79, v3);
  v4 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v78 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v79 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v80 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v77, "searchRadius");
  sub_21E94B4((void **)&v76, "10.0");
  v7 = (int *)sub_21E94B4((void **)&v75, "Maximum distance this entity will look for another entity looking at it");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v77, &v76, v7);
  v8 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v75 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v76 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v77 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v74, "mAllowInvulnerable");
  sub_21E94B4((void **)&v73, "false");
  v11 = (int *)sub_21E94B4(
                 (void **)&v72,
                 "If true, invulnerable entities (e.g. Players in creative mode) are considered valid targets");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v74, &v73, v11);
  v12 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v72 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v73 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v74 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v71, "look_cooldown");
  sub_21E94B4((void **)&v70, "[0.0, 0.0]");
  v15 = (int *)sub_21E94B4(
                 (void **)&v69,
                 "The range for the random amount of time during which the entity is 'cooling down' and won't get angered"
                 " or look for a target");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::RANGE_TYPE, (const void **)&v71, &v70, v15);
  v16 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v69 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v70 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v71 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v68, "filters");
  sub_21E94B4((void **)&v67, "player");
  v19 = (int *)sub_21E94B4((void **)&v66, "Defines the entities that can trigger this component");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v68, &v67, v19);
  v20 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v66 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v67 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v68 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v65, "look_event");
  sub_21E94B4((void **)&v64, (const char *)&unk_257BC67);
  v23 = (int *)sub_21E94B4((void **)&v63, "Event to run when the entities specified in filters look at this entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v65, &v64, v23);
  v24 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v63 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v64 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v65 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
}


LookAtDescription *__fastcall LookAtDescription::~LookAtDescription(LookAtDescription *this)
{
  LookAtDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r12@4
  signed int v8; // r1@6
  unsigned int *v9; // r12@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271E8F4;
  j_FilterGroup::~FilterGroup((LookAtDescription *)((char *)this + 64));
  v2 = *((_DWORD *)v1 + 15);
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
  v4 = *((_DWORD *)v1 + 14);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_FilterGroup::~FilterGroup((LookAtDescription *)((char *)v1 + 24));
  return v1;
}


void __fastcall LookAtDescription::~LookAtDescription(LookAtDescription *this)
{
  LookAtDescription *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r12@4
  signed int v7; // r1@6
  unsigned int *v8; // r12@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_271E8F4;
  j_FilterGroup::~FilterGroup((LookAtDescription *)((char *)this + 64));
  v2 = *((_DWORD *)v1 + 15);
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
  v4 = *((_DWORD *)v1 + 14);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_FilterGroup::~FilterGroup((LookAtDescription *)((char *)v1 + 24));
  j_operator delete((void *)v1);
}


const char *__fastcall LookAtDescription::getDescription(LookAtDescription *this)
{
  return "Defines the behavior when another entity looks at this entity.";
}


int __fastcall LookAtDescription::parseData(LookAtDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  LookAtDescription *v3; // r5@1
  float v4; // ST00_4@1
  bool v5; // ST00_1@1
  const char *v6; // r3@1
  const char *v7; // ST00_4@1
  const char *v8; // r3@1
  bool v10; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  j_Parser::parse(a2, (LookAtDescription *)((char *)this + 4), (bool *)"setTarget", (const char *)1, v10);
  j_Parser::parse(v2, (LookAtDescription *)((char *)v3 + 8), (float *)"searchRadius", (const char *)0x41200000, v4);
  j_Parser::parse(v2, (LookAtDescription *)((char *)v3 + 12), (bool *)"mAllowInvulnerable", 0, v5);
  j_Parser::parse(v2, (LookAtDescription *)((char *)v3 + 16), (FloatRange *)"look_cooldown", v6);
  j_Parser::parse(v2, (LookAtDescription *)((char *)v3 + 24), (FilterGroup *)"filters", "player", v7);
  return j_j_j__ZN6Parser5parseERN4Json5ValueER17DefinitionTriggerPKc_1(
           v2,
           (LookAtDescription *)((char *)v3 + 56),
           (DefinitionTrigger *)"look_event",
           v8);
}
