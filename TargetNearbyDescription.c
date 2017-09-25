

const char *__fastcall TargetNearbyDescription::getJsonName(TargetNearbyDescription *this)
{
  return "minecraft:target_nearby_sensor";
}


void __fastcall TargetNearbyDescription::getDocumentation(int a1, int a2)
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
  sub_21E94B4((void **)&v54, "inside_range");
  sub_21E94B4((void **)&v53, "1.0");
  v3 = (int *)sub_21E94B4(
                (void **)&v52,
                "Maximum distance in blocks that another entity will be considered in the 'inside' range");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v54, &v53, v3);
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
  sub_21E94B4((void **)&v51, "outside_range");
  sub_21E94B4((void **)&v50, "5.0");
  v7 = (int *)sub_21E94B4(
                (void **)&v49,
                "Maximum distance in blocks that another entity will be considered in the 'outside' range");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v51, &v50, v7);
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
  sub_21E94B4((void **)&v48, "on_inside_range");
  sub_21E94B4((void **)&v47, (const char *)&unk_257BC67);
  v11 = (int *)sub_21E94B4(
                 (void **)&v46,
                 "Event to call when an entity gets in the inside range. Can specify 'event' for the name of the event an"
                 "d 'target' for the target of the event");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::STRING_TYPE, (const void **)&v48, &v47, v11);
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
  sub_21E94B4((void **)&v45, "on_outside_range");
  sub_21E94B4((void **)&v44, (const char *)&unk_257BC67);
  v15 = (int *)sub_21E94B4(
                 (void **)&v43,
                 "Event to call when an entity gets in the outside range. Can specify 'event' for the name of the event a"
                 "nd 'target' for the target of the event");
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


int __fastcall TargetNearbyDescription::parseData(TargetNearbyDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  TargetNearbyDescription *v3; // r5@1
  float v4; // ST00_4@1
  const char *v5; // r3@1
  const char *v6; // r3@1
  float v8; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  j_Parser::parse(
    a2,
    (TargetNearbyDescription *)((char *)this + 4),
    (float *)"inside_range",
    (const char *)0x3F800000,
    v8);
    v2,
    (TargetNearbyDescription *)((char *)v3 + 8),
    (float *)"outside_range",
    (const char *)0x40A00000,
    v4);
  j_Parser::parse(v2, (TargetNearbyDescription *)((char *)v3 + 12), (DefinitionTrigger *)"on_inside_range", v5);
  return j_j_j__ZN6Parser5parseERN4Json5ValueER17DefinitionTriggerPKc_1(
           v2,
           (TargetNearbyDescription *)((char *)v3 + 52),
           (DefinitionTrigger *)"on_outside_range",
           v6);
}


TargetNearbyDescription *__fastcall TargetNearbyDescription::~TargetNearbyDescription(TargetNearbyDescription *this)
{
  TargetNearbyDescription *v1; // r5@1
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
  *(_DWORD *)this = &off_271F3CC;
  FilterGroup::~FilterGroup((TargetNearbyDescription *)((char *)this + 60));
  v2 = *((_DWORD *)v1 + 14);
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
  v4 = *((_DWORD *)v1 + 13);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v4 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  FilterGroup::~FilterGroup((TargetNearbyDescription *)((char *)v1 + 20));
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v6 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 3);
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


void __fastcall TargetNearbyDescription::~TargetNearbyDescription(TargetNearbyDescription *this)
{
  TargetNearbyDescription *v1; // r0@1

  v1 = j_TargetNearbyDescription::~TargetNearbyDescription(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall TargetNearbyDescription::getDocumentation(int a1, int a2)
{
  TargetNearbyDescription::getDocumentation(a1, a2);
}


const char *__fastcall TargetNearbyDescription::getDescription(TargetNearbyDescription *this)
{
  return "Defines the entity's range within which it can see or sense other entities to target them.";
}


void __fastcall TargetNearbyDescription::~TargetNearbyDescription(TargetNearbyDescription *this)
{
  TargetNearbyDescription::~TargetNearbyDescription(this);
}
