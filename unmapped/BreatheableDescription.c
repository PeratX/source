

BreatheableDescription *__fastcall BreatheableDescription::~BreatheableDescription(BreatheableDescription *this)
{
  BreatheableDescription *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E7B0;
  j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)this + 44,
    *((_DWORD *)this + 13));
    (int)v1 + 20,
    *((_DWORD *)v1 + 7));
  return v1;
}


void __fastcall BreatheableDescription::getDocumentation(int a1, int a2)
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
  int *v35; // r0@25
  void *v36; // r0@25
  void *v37; // r0@26
  void *v38; // r0@27
  unsigned int *v39; // r2@29
  signed int v40; // r1@31
  unsigned int *v41; // r2@33
  signed int v42; // r1@35
  unsigned int *v43; // r2@37
  signed int v44; // r1@39
  unsigned int *v45; // r2@41
  signed int v46; // r1@43
  unsigned int *v47; // r2@45
  signed int v48; // r1@47
  unsigned int *v49; // r2@49
  signed int v50; // r1@51
  unsigned int *v51; // r2@53
  signed int v52; // r1@55
  unsigned int *v53; // r2@57
  signed int v54; // r1@59
  unsigned int *v55; // r2@61
  signed int v56; // r1@63
  unsigned int *v57; // r2@65
  signed int v58; // r1@67
  unsigned int *v59; // r2@69
  signed int v60; // r1@71
  unsigned int *v61; // r2@73
  signed int v62; // r1@75
  unsigned int *v63; // r2@77
  signed int v64; // r1@79
  unsigned int *v65; // r2@81
  signed int v66; // r1@83
  unsigned int *v67; // r2@85
  signed int v68; // r1@87
  unsigned int *v69; // r2@89
  signed int v70; // r1@91
  unsigned int *v71; // r2@93
  signed int v72; // r1@95
  unsigned int *v73; // r2@97
  signed int v74; // r1@99
  unsigned int *v75; // r2@101
  signed int v76; // r1@103
  unsigned int *v77; // r2@105
  signed int v78; // r1@107
  unsigned int *v79; // r2@109
  signed int v80; // r1@111
  unsigned int *v81; // r2@113
  signed int v82; // r1@115
  unsigned int *v83; // r2@117
  signed int v84; // r1@119
  unsigned int *v85; // r2@121
  signed int v86; // r1@123
  unsigned int *v87; // r2@125
  signed int v88; // r1@127
  unsigned int *v89; // r2@129
  signed int v90; // r1@131
  unsigned int *v91; // r2@133
  signed int v92; // r1@135
  int v93; // [sp+8h] [bp-E8h]@25
  int v94; // [sp+10h] [bp-E0h]@25
  int v95; // [sp+18h] [bp-D8h]@25
  int v96; // [sp+20h] [bp-D0h]@22
  int v97; // [sp+28h] [bp-C8h]@22
  int v98; // [sp+30h] [bp-C0h]@22
  int v99; // [sp+38h] [bp-B8h]@19
  int v100; // [sp+40h] [bp-B0h]@19
  int v101; // [sp+48h] [bp-A8h]@19
  int v102; // [sp+50h] [bp-A0h]@16
  int v103; // [sp+58h] [bp-98h]@16
  int v104; // [sp+60h] [bp-90h]@16
  int v105; // [sp+68h] [bp-88h]@13
  int v106; // [sp+70h] [bp-80h]@13
  int v107; // [sp+78h] [bp-78h]@13
  int v108; // [sp+80h] [bp-70h]@10
  int v109; // [sp+88h] [bp-68h]@10
  int v110; // [sp+90h] [bp-60h]@10
  int v111; // [sp+98h] [bp-58h]@7
  int v112; // [sp+A0h] [bp-50h]@7
  int v113; // [sp+A8h] [bp-48h]@7
  int v114; // [sp+B0h] [bp-40h]@4
  int v115; // [sp+B8h] [bp-38h]@4
  int v116; // [sp+C0h] [bp-30h]@4
  int v117; // [sp+C8h] [bp-28h]@1
  int v118; // [sp+D0h] [bp-20h]@1
  int v119; // [sp+D8h] [bp-18h]@1

  v2 = a2;
  sub_21E94B4((void **)&v119, "totalSupply");
  sub_21E94B4((void **)&v118, "15");
  v3 = (int *)sub_21E94B4((void **)&v117, "Time in seconds the entity can hold its breath");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v119, &v118, v3);
  v4 = (void *)(v117 - 12);
  if ( (int *)(v117 - 12) != &dword_28898C0 )
  {
    v39 = (unsigned int *)(v117 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
    }
    else
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v118 - 12);
  if ( (int *)(v118 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v118 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = (void *)(v119 - 12);
  if ( (int *)(v119 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v119 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v116, "suffocateTime");
  sub_21E94B4((void **)&v115, "-20");
  v7 = (int *)sub_21E94B4((void **)&v114, "Time in seconds between suffocation damage");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::INT_TYPE, (const void **)&v116, &v115, v7);
  v8 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v114 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v115 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v116 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v113, "breathesAir");
  sub_21E94B4((void **)&v112, "true");
  v11 = (int *)sub_21E94B4((void **)&v111, "If true, this entity can breathe in air");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v113, &v112, v11);
  v12 = (void *)(v111 - 12);
  if ( (int *)(v111 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v111 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v112 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v113 - 12);
  if ( (int *)(v113 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v113 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v110, "breathesWater");
  sub_21E94B4((void **)&v109, "false");
  v15 = (int *)sub_21E94B4((void **)&v108, "If true, this entity can breathe in water");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v110, &v109, v15);
  v16 = (void *)(v108 - 12);
  if ( (int *)(v108 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v108 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v109 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v110 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v107, "breathesLava");
  sub_21E94B4((void **)&v106, "false");
  v19 = (int *)sub_21E94B4((void **)&v105, "If true, this entity can breathe in lava");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v107, &v106, v19);
  v20 = (void *)(v105 - 12);
  if ( (int *)(v105 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v105 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v106 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v107 - 12);
  if ( (int *)(v107 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v107 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v104, "breathesSolids");
  sub_21E94B4((void **)&v103, "false");
  v23 = (int *)sub_21E94B4((void **)&v102, "If true, this entity can breathe in solid blocks");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v104, &v103, v23);
  v24 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v102 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  v25 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v103 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  v26 = (void *)(v104 - 12);
  if ( (int *)(v104 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v104 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v101, "generatesBubbles");
  sub_21E94B4((void **)&v100, "true");
  v27 = (int *)sub_21E94B4((void **)&v99, "If true, this entity will have visible bubbles while in water");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::BOOLEAN_TYPE, (const void **)&v101, &v100, v27);
  v28 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v99 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = (void *)(v100 - 12);
  if ( (int *)(v100 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v100 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v101 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v98, "breatheBlocks");
  sub_21E94B4((void **)&v97, (const char *)&unk_257BC67);
  v31 = (int *)sub_21E94B4((void **)&v96, "List of blocks this entity can breathe in, in addition to the above");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v98, &v97, v31);
  v32 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v96 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  v33 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v97 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  v34 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v98 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v95, "nonBreatheBlocks");
  sub_21E94B4((void **)&v94, (const char *)&unk_257BC67);
  v35 = (int *)sub_21E94B4((void **)&v93, "List of blocks this entity can't breathe in, in addition to the above");
  j_DocumentationSystem::Node::addNode(v2, (int *)&DocumentationSystem::LIST_TYPE, (const void **)&v95, &v94, v35);
  v36 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v93 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v94 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  v38 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v95 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
}


void __fastcall BreatheableDescription::parseData(BreatheableDescription *this, Json::Value *a2)
{
  Json::Value *v2; // r4@1
  BreatheableDescription *v3; // r5@1
  int v4; // ST00_4@1
  bool v5; // ST00_1@1
  bool v6; // ST00_1@1
  bool v7; // ST00_1@1
  bool v8; // ST00_1@1
  bool v9; // ST00_1@1
  int v10; // [sp+0h] [bp-10h]@0

  v2 = a2;
  v3 = this;
  j_Parser::parse(a2, (BreatheableDescription *)((char *)this + 4), (int *)"totalSupply", (const char *)0xF, v10);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 8), (int *)"suffocateTime", (const char *)0xFFFFFFEC, v4);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 12), (bool *)"breathesAir", (const char *)1, v5);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 13), (bool *)"breathesWater", 0, v6);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 14), (bool *)"breathesLava", 0, v7);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 15), (bool *)"breathesSolids", 0, v8);
  j_Parser::parse(v2, (BreatheableDescription *)((char *)v3 + 16), (bool *)"generatesBubbles", (const char *)1, v9);
  j_Parser::parse(v2, (int)v3 + 20, "breatheBlocks");
  j_j_j__ZN6Parser5parseERKN4Json5ValueERSt3setIPK5BlockSt4lessIS7_ESaIS7_EEPKc_0(v2, (int)v3 + 44, "nonBreatheBlocks");
}


const char *__fastcall BreatheableDescription::getDescription(BreatheableDescription *this)
{
  return "Defines what blocks this entity can breathe in and gives them the ability to suffocate";
}


void __fastcall BreatheableDescription::~BreatheableDescription(BreatheableDescription *this)
{
  BreatheableDescription *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271E7B0;
  j_std::_Rb_tree<Block const*,Block const*,std::_Identity<Block const*>,std::less<Block const*>,std::allocator<Block const*>>::_M_erase(
    (int)this + 44,
    *((_DWORD *)this + 13));
    (int)v1 + 20,
    *((_DWORD *)v1 + 7));
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall BreatheableDescription::~BreatheableDescription(BreatheableDescription *this)
{
  BreatheableDescription::~BreatheableDescription(this);
}


void __fastcall BreatheableDescription::getDocumentation(int a1, int a2)
{
  BreatheableDescription::getDocumentation(a1, a2);
}


const char *__fastcall BreatheableDescription::getJsonName(BreatheableDescription *this)
{
  return "minecraft:breathable";
}


void __fastcall BreatheableDescription::parseData(BreatheableDescription *this, Json::Value *a2)
{
  BreatheableDescription::parseData(this, a2);
}
