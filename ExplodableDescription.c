

const char *__fastcall ExplodableDescription::getDescription(ExplodableDescription *this)
{
  return "Defines how the entity explodes.";
}


const char *__fastcall ExplodableDescription::getJsonName(ExplodableDescription *this)
{
  return "minecraft:explode";
}


void __fastcall ExplodableDescription::parseData(ExplodableDescription *this, Json::Value *a2, int a3, const char *a4, bool a5)
{
  Json::Value *v5; // r4@1
  ExplodableDescription *v6; // r5@1
  float v7; // ST00_4@1
  bool v8; // ST00_1@1
  bool v9; // ST00_1@1
  bool v10; // ST00_1@1
  bool v11; // ST00_1@1
  float v12; // [sp+0h] [bp-10h]@0

  v5 = a2;
  v6 = this;
  j_Parser::parse(a2, (ExplodableDescription *)((char *)this + 4), (FloatRange *)"fuseLength", a4);
  j_Parser::parse(v5, (ExplodableDescription *)((char *)v6 + 12), (float *)"power", (const char *)0x40400000, v12);
  j_Parser::parse(
    v5,
    (ExplodableDescription *)((char *)v6 + 16),
    (float *)"maxResistance",
    (const char *)0x7F7FFFFF,
    v7);
  j_Parser::parse(v5, (ExplodableDescription *)((char *)v6 + 20), (bool *)"fuseLit", 0, v8);
  j_Parser::parse(v5, (ExplodableDescription *)((char *)v6 + 21), (bool *)"causesFire", 0, v9);
  j_Parser::parse(v5, (ExplodableDescription *)((char *)v6 + 22), (bool *)"breaks_blocks", (const char *)1, v10);
  j_Parser::parse(v5, (ExplodableDescription *)((char *)v6 + 23), (bool *)"fireAffectedByGriefing", 0, v11);
  j_j_j__ZN6Parser5parseERKN4Json5ValueERbPKcb_1(
    (ExplodableDescription *)((char *)v6 + 24),
    (bool *)"destroyAffectedByGriefing",
    0,
    a5);
}


void __fastcall ExplodableDescription::getDocumentation(int a1, int a2)
{
  ExplodableDescription::getDocumentation(a1, a2);
}


void __fastcall ExplodableDescription::getDocumentation(int a1, int a2)
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
  int *v31; // r0@22
  void *v32; // r0@22
  void *v33; // r0@23
  void *v34; // r0@24
  unsigned int *v35; // r2@26
  signed int v36; // r1@28
  unsigned int *v37; // r2@30
  signed int v38; // r1@32
  unsigned int *v39; // r2@34
  signed int v40; // r1@36
  unsigned int *v41; // r2@38
  signed int v42; // r1@40
  unsigned int *v43; // r2@42
  signed int v44; // r1@44
  unsigned int *v45; // r2@46
  signed int v46; // r1@48
  unsigned int *v47; // r2@50
  signed int v48; // r1@52
  unsigned int *v49; // r2@54
  signed int v50; // r1@56
  unsigned int *v51; // r2@58
  signed int v52; // r1@60
  unsigned int *v53; // r2@62
  signed int v54; // r1@64
  unsigned int *v55; // r2@66
  signed int v56; // r1@68
  unsigned int *v57; // r2@70
  signed int v58; // r1@72
  unsigned int *v59; // r2@74
  signed int v60; // r1@76
  unsigned int *v61; // r2@78
  signed int v62; // r1@80
  unsigned int *v63; // r2@82
  signed int v64; // r1@84
  unsigned int *v65; // r2@86
  signed int v66; // r1@88
  unsigned int *v67; // r2@90
  signed int v68; // r1@92
  unsigned int *v69; // r2@94
  signed int v70; // r1@96
  unsigned int *v71; // r2@98
  signed int v72; // r1@100
  unsigned int *v73; // r2@102
  signed int v74; // r1@104
  unsigned int *v75; // r2@106
  signed int v76; // r1@108
  unsigned int *v77; // r2@110
  signed int v78; // r1@112
  unsigned int *v79; // r2@114
  signed int v80; // r1@116
  unsigned int *v81; // r2@118
  signed int v82; // r1@120
  int v83; // [sp+8h] [bp-D0h]@22
  int v84; // [sp+10h] [bp-C8h]@22
  int v85; // [sp+18h] [bp-C0h]@22
  int v86; // [sp+20h] [bp-B8h]@19
  int v87; // [sp+28h] [bp-B0h]@19
  int v88; // [sp+30h] [bp-A8h]@19
  int v89; // [sp+38h] [bp-A0h]@16
  int v90; // [sp+40h] [bp-98h]@16
  int v91; // [sp+48h] [bp-90h]@16
  int v92; // [sp+50h] [bp-88h]@13
  int v93; // [sp+58h] [bp-80h]@13
  int v94; // [sp+60h] [bp-78h]@13
  int v95; // [sp+68h] [bp-70h]@10
  int v96; // [sp+70h] [bp-68h]@10
  int v97; // [sp+78h] [bp-60h]@10
  int v98; // [sp+80h] [bp-58h]@7
  int v99; // [sp+88h] [bp-50h]@7
  int v100; // [sp+90h] [bp-48h]@7
  int v101; // [sp+98h] [bp-40h]@4
  int v102; // [sp+A0h] [bp-38h]@4
  int v103; // [sp+A8h] [bp-30h]@4
  int v104; // [sp+B0h] [bp-28h]@1
  int v105; // [sp+B8h] [bp-20h]@1
  int v106; // [sp+C0h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v106, "fuseLength");
  sub_21E94B4((void **)&v105, "[0.0, 0.0]");
  v3 = (int *)sub_21E94B4(
                (void **)&v104,
                "The range for the random amount of time the fuse will be lit before exploding. A negative value means th"
                "e explosion will be immediate");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::RANGE_TYPE, (const void **)&v106, &v105, v3);
  v4 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v104 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v105 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v106 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v103, "power");
  sub_21E94B4((void **)&v102, "3.0");
  v7 = (int *)sub_21E94B4(
                (void **)&v101,
                "The radius of the explosion in blocks and the amount of damage the explosion deals");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v103, &v102, v7);
  v8 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v101 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v102 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v103 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v100, "maxResistance");
  sub_21E94B4((void **)&v99, "Infinite");
  v11 = (int *)sub_21E94B4((void **)&v98, "Blocks with less resistance than this value will be broken by the explosion");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::FLOAT_TYPE, (const void **)&v100, &v99, v11);
  v12 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v98 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v99 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v100 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v97, "fuseLit");
  sub_21E94B4((void **)&v96, "false");
  v15 = (int *)sub_21E94B4((void **)&v95, "If true, the fuse is already lit when this component is added to the entity");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v97, &v96, v15);
  v16 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v95 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v96 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v97 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v94, "causesFire");
  sub_21E94B4((void **)&v93, "false");
  v19 = (int *)sub_21E94B4((void **)&v92, "If true, blocks in the explosion radius will be set on fire");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v94, &v93, v19);
  v20 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v92 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v93 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v94 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v91, "breaks_blocks");
  sub_21E94B4((void **)&v90, "true");
  v23 = (int *)sub_21E94B4((void **)&v89, "If true, the explosion will destroy blocks in the explosion radius");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v91, &v90, v23);
  v24 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v89 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v90 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v91 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v88, "fireAffectedByGriefing");
  sub_21E94B4((void **)&v87, "false");
  v27 = (int *)sub_21E94B4(
                 (void **)&v86,
                 "If true, whether the explosion causes fire is affected by the mob griefing game rule");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v88, &v87, v27);
  v28 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v86 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v87 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v88 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v85, "destroyAffectedByGriefing");
  sub_21E94B4((void **)&v84, "false");
  v31 = (int *)sub_21E94B4(
                 (void **)&v83,
                 "If true, whether the explosion breaks blocks is affected by the mob griefing game rule");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v85, &v84, v31);
  v32 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v83 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v84 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v85 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
}


void __fastcall ExplodableDescription::parseData(ExplodableDescription *this, Json::Value *a2, int a3, const char *a4, bool a5)
{
  ExplodableDescription::parseData(this, a2, a3, a4, a5);
}
