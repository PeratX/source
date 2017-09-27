

void __fastcall LeashableDescription::getDocumentation(int a1, int a2)
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
  unsigned int *v23; // r2@17
  signed int v24; // r1@19
  unsigned int *v25; // r2@21
  signed int v26; // r1@23
  unsigned int *v27; // r2@25
  signed int v28; // r1@27
  unsigned int *v29; // r2@29
  signed int v30; // r1@31
  unsigned int *v31; // r2@33
  signed int v32; // r1@35
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  unsigned int *v39; // r2@49
  signed int v40; // r1@51
  unsigned int *v41; // r2@53
  signed int v42; // r1@55
  unsigned int *v43; // r2@57
  signed int v44; // r1@59
  unsigned int *v45; // r2@61
  signed int v46; // r1@63
  unsigned int *v47; // r2@65
  signed int v48; // r1@67
  unsigned int *v49; // r2@69
  signed int v50; // r1@71
  unsigned int *v51; // r2@73
  signed int v52; // r1@75
  int v53; // [sp+8h] [bp-88h]@13
  int v54; // [sp+10h] [bp-80h]@13
  int v55; // [sp+18h] [bp-78h]@13
  int v56; // [sp+20h] [bp-70h]@10
  int v57; // [sp+28h] [bp-68h]@10
  int v58; // [sp+30h] [bp-60h]@10
  int v59; // [sp+38h] [bp-58h]@7
  int v60; // [sp+40h] [bp-50h]@7
  int v61; // [sp+48h] [bp-48h]@7
  int v62; // [sp+50h] [bp-40h]@4
  int v63; // [sp+58h] [bp-38h]@4
  int v64; // [sp+60h] [bp-30h]@4
  int v65; // [sp+68h] [bp-28h]@1
  int v66; // [sp+70h] [bp-20h]@1
  int v67; // [sp+78h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v67, "soft_distance");
  sub_21E94B4((void **)&v66, "4.0");
  v3 = (int *)sub_21E94B4(
                (void **)&v65,
                "Distance in blocks at which the 'spring' effect starts acting to keep this entity close to the entity that leashed it");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v67, &v66, v3);
  v4 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v65 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v66 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v67 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v64, "hard_distance");
  sub_21E94B4((void **)&v63, "6.0");
  v7 = (int *)sub_21E94B4((void **)&v62, "Distance in blocks at which the leash stiffens, restricting movement");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v64, &v63, v7);
  v8 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v62 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v63 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v64 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v61, "max_distance");
  sub_21E94B4((void **)&v60, "10.0");
  v11 = (int *)sub_21E94B4((void **)&v59, "Distance in blocks at which the leash breaks");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v61, &v60, v11);
  v12 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v59 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v60 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v61 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v58, "on_leash");
  sub_21E94B4((void **)&v57, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4((void **)&v56, "Event to call when this entity is leashed");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v58, &v57, v15);
  v16 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v56 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v57 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v58 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v55, "on_unleash");
  sub_21E94B4((void **)&v54, (const char *)&unk_257BC67);
  v19 = (int *)sub_21E94B4((void **)&v53, "Event to call when this entity is unleashed");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v55, &v54, v19);
  v20 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v53 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v54 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v55 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


const char *__fastcall LeashableDescription::getDescription(LeashableDescription *this)
{
  return "Allows this entity to be leashed and Defines the conditions and events for this entity when is leashed.";
}


const char *__fastcall LeashableDescription::getJsonName(LeashableDescription *this)
{
  return "minecraft:leashable";
}


void __fastcall LeashableDescription::getDocumentation(int a1, int a2)
{
  LeashableDescription::getDocumentation(a1, a2);
}


int __fastcall LeashableDescription::parseData(LeashableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  LeashableDescription *v3; // r5@1
  float v4; // ST00_4@1
  float v5; // ST00_4@1
  const char *v6; // r3@1
  const char *v7; // r3@1
  float v9; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  j_Parser::parse(
    a2,
    (LeashableDescription *)((char *)this + 4),
    (float *)"soft_distance",
    (const char *)0x40800000,
    v9);
  j_Parser::parse(v2, (LeashableDescription *)((char *)v3 + 8), (float *)"hard_distance", (const char *)0x40C00000, v4);
  j_Parser::parse(v2, (LeashableDescription *)((char *)v3 + 12), (float *)"max_distance", (const char *)0x41200000, v5);
  j_Parser::parse(v2, (LeashableDescription *)((char *)v3 + 16), (DefinitionTrigger *)"on_leash", v6);
  return j_j_j__ZN6Parser5parseERN4Json5ValueER17DefinitionTriggerPKc_1(
           v2,
           (LeashableDescription *)((char *)v3 + 56),
           (DefinitionTrigger *)"on_unleash",
           v7);
}


void __fastcall LeashableDescription::~LeashableDescription(LeashableDescription *this)
{
  LeashableDescription *v1; // r0@1

  v1 = j_LeashableDescription::~LeashableDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall LeashableDescription::~LeashableDescription(LeashableDescription *this)
{
  LeashableDescription::~LeashableDescription(this);
}


LeashableDescription *__fastcall LeashableDescription::~LeashableDescription(LeashableDescription *this)
{
  LeashableDescription *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20

  v1 = this;
  *(_DWORD *)this = &off_271E8D0;
  FilterGroup::~FilterGroup((LeashableDescription *)((char *)this + 64));
  v2 = *((_DWORD *)v1 + 15);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 14);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  FilterGroup::~FilterGroup((LeashableDescription *)((char *)v1 + 24));
  v6 = *((_DWORD *)v1 + 5);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 4);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v8 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  return v1;
}
