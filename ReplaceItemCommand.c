

int __fastcall ReplaceItemCommand::~ReplaceItemCommand(ReplaceItemCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A160;
  v2 = (ReplaceItemCommand *)((char *)this + 24);
  j_Json::Value::~Value((ReplaceItemCommand *)((char *)this + 168));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall ReplaceItemCommand::setup(ReplaceItemCommand *this, CommandRegistry *a2)
{
  ReplaceItemCommand::setup(this, a2);
}


Command *__fastcall ReplaceItemCommand::ReplaceItemCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A160;
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 24);
  j_CommandPosition::CommandPosition((Command *)((char *)v1 + 120));
  j_CommandItem::CommandItem((int)v1 + 148);
  *(_QWORD *)((char *)v1 + 156) = 1LL;
  j_Json::Value::Value((_DWORD *)v1 + 42, 0);
  return v1;
}


void __fastcall ReplaceItemCommand::~ReplaceItemCommand(ReplaceItemCommand *this)
{
  Command *v1; // r4@1
  CommandSelectorBase *v2; // r5@1

  v1 = this;
  *(_DWORD *)this = &off_271A160;
  v2 = (ReplaceItemCommand *)((char *)this + 24);
  j_Json::Value::~Value((ReplaceItemCommand *)((char *)this + 168));
  j_CommandSelectorBase::~CommandSelectorBase(v2);
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall ReplaceItemCommand::setup(ReplaceItemCommand *this, CommandRegistry *a2)
{
  ReplaceItemCommand *v2; // r10@1
  void *v3; // r5@1
  int v4; // r4@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int *v7; // r0@11
  void *v8; // r0@16
  void *v9; // r0@17
  void *v10; // r7@18
  char *v11; // r6@18
  int v12; // r8@18
  __int16 *v13; // r1@19
  unsigned int *v14; // r2@20
  signed int v15; // r5@22
  __int16 *v16; // r4@26
  int *v17; // r0@27
  unsigned int *v18; // r2@33
  signed int v19; // r1@35
  int v20; // r1@41
  int v21; // t1@41
  void *v22; // r0@41
  void *v23; // r0@43
  void *v24; // r5@44
  int v25; // r4@44
  unsigned int *v26; // r2@46
  signed int v27; // r1@48
  int *v28; // r0@54
  void *v29; // r0@59
  void *v30; // r0@60
  void *v31; // r5@61
  int v32; // r4@61
  unsigned int *v33; // r2@63
  signed int v34; // r1@65
  int *v35; // r0@71
  void *v36; // r0@76
  void *v37; // r0@77
  __int64 v38; // r2@78
  void *v39; // r0@78
  char v40; // r0@79
  char v41; // r0@82
  char v42; // r0@85
  char v43; // r0@88
  char v44; // r0@91
  char v45; // r0@94
  char v46; // r0@97
  char v47; // r0@100
  int v48; // r0@103
  __int64 v49; // r2@103
  void *v50; // r0@103
  void *v51; // r0@104
  void *v52; // r0@105
  void *v53; // r0@106
  void *v54; // r0@107
  void *v55; // r0@108
  void *v56; // r0@109
  void *v57; // r0@110
  char v58; // r0@111
  char v59; // r0@114
  char v60; // r0@117
  char v61; // r0@120
  char v62; // r0@123
  char v63; // r0@126
  char v64; // r0@129
  char v65; // r0@132
  int v66; // r0@135
  void *v67; // r0@135
  void *v68; // r0@136
  void *v69; // r0@137
  void *v70; // r0@138
  void *v71; // r0@139
  void *v72; // r0@140
  void *v73; // r0@141
  void *v74; // r0@142
  unsigned int *v75; // r2@144
  signed int v76; // r1@146
  unsigned int *v77; // r2@148
  signed int v78; // r1@150
  unsigned int *v79; // r2@152
  signed int v80; // r1@154
  unsigned int *v81; // r2@156
  signed int v82; // r1@158
  unsigned int *v83; // r2@160
  signed int v84; // r1@162
  unsigned int *v85; // r2@164
  signed int v86; // r1@166
  unsigned int *v87; // r2@168
  signed int v88; // r1@170
  int v89; // r2@172
  signed int v90; // r1@174
  int v91; // r2@176
  signed int v92; // r1@178
  int v93; // r2@180
  signed int v94; // r1@182
  int v95; // r2@184
  signed int v96; // r1@186
  int v97; // r2@188
  signed int v98; // r1@190
  int v99; // r2@192
  signed int v100; // r1@194
  int v101; // r2@196
  signed int v102; // r1@198
  int v103; // r2@200
  signed int v104; // r1@202
  int v105; // r2@204
  signed int v106; // r1@206
  unsigned int *v107; // r2@208
  signed int v108; // r1@210
  unsigned int *v109; // r2@212
  signed int v110; // r1@214
  unsigned int *v111; // r2@216
  signed int v112; // r1@218
  unsigned int *v113; // r2@220
  signed int v114; // r1@222
  unsigned int *v115; // r2@224
  signed int v116; // r1@226
  unsigned int *v117; // r2@228
  signed int v118; // r1@230
  unsigned int *v119; // r2@232
  signed int v120; // r1@234
  unsigned int *v121; // r2@236
  signed int v122; // r1@238
  char v123; // [sp+24h] [bp-3FCh]@135
  int v124; // [sp+30h] [bp-3F0h]@135
  char v125; // [sp+4Ch] [bp-3D4h]@132
  int v126; // [sp+58h] [bp-3C8h]@136
  char v127; // [sp+74h] [bp-3ACh]@129
  int v128; // [sp+80h] [bp-3A0h]@137
  char v129; // [sp+9Ch] [bp-384h]@126
  int v130; // [sp+A8h] [bp-378h]@138
  char v131; // [sp+C4h] [bp-35Ch]@123
  int v132; // [sp+D0h] [bp-350h]@139
  char v133; // [sp+ECh] [bp-334h]@120
  int v134; // [sp+F8h] [bp-328h]@140
  char v135; // [sp+114h] [bp-30Ch]@117
  int v136; // [sp+120h] [bp-300h]@141
  char v137; // [sp+13Ch] [bp-2E4h]@114
  int v138; // [sp+148h] [bp-2D8h]@142
  __int64 v139; // [sp+164h] [bp-2BCh]@111
  char v140; // [sp+16Ch] [bp-2B4h]@103
  int v141; // [sp+178h] [bp-2A8h]@103
  char v142; // [sp+194h] [bp-28Ch]@100
  int v143; // [sp+1A0h] [bp-280h]@104
  char v144; // [sp+1BCh] [bp-264h]@97
  int v145; // [sp+1C8h] [bp-258h]@105
  char v146; // [sp+1E4h] [bp-23Ch]@94
  int v147; // [sp+1F0h] [bp-230h]@106
  char v148; // [sp+20Ch] [bp-214h]@91
  int v149; // [sp+218h] [bp-208h]@107
  char v150; // [sp+234h] [bp-1ECh]@88
  int v151; // [sp+240h] [bp-1E0h]@108
  char v152; // [sp+25Ch] [bp-1C4h]@85
  int v153; // [sp+268h] [bp-1B8h]@109
  char v154; // [sp+284h] [bp-19Ch]@82
  int v155; // [sp+290h] [bp-190h]@110
  __int64 v156; // [sp+2ACh] [bp-174h]@79
  int v157; // [sp+2B8h] [bp-168h]@78
  int v158; // [sp+2BCh] [bp-164h]@61
  int v159; // [sp+2C0h] [bp-160h]@61
  void *v160; // [sp+2C4h] [bp-15Ch]@61
  int v161; // [sp+2C8h] [bp-158h]@61
  char *v162; // [sp+2CCh] [bp-154h]@61
  int v163; // [sp+2D4h] [bp-14Ch]@61
  int v164; // [sp+2D8h] [bp-148h]@44
  int v165; // [sp+2DCh] [bp-144h]@44
  void *v166; // [sp+2E0h] [bp-140h]@44
  int v167; // [sp+2E4h] [bp-13Ch]@44
  char *v168; // [sp+2E8h] [bp-138h]@44
  int v169; // [sp+2F0h] [bp-130h]@44
  char v170; // [sp+2F4h] [bp-12Ch]@18
  int v171; // [sp+2F8h] [bp-128h]@18
  int v172; // [sp+2FCh] [bp-124h]@18
  int v173; // [sp+300h] [bp-120h]@18
  int v174; // [sp+304h] [bp-11Ch]@18
  int v175; // [sp+308h] [bp-118h]@18
  int v176; // [sp+30Ch] [bp-114h]@18
  int v177; // [sp+310h] [bp-110h]@18
  int v178; // [sp+314h] [bp-10Ch]@18
  int v179; // [sp+318h] [bp-108h]@18
  int v180; // [sp+31Ch] [bp-104h]@18
  int v181; // [sp+320h] [bp-100h]@18
  int v182; // [sp+324h] [bp-FCh]@18
  int v183; // [sp+328h] [bp-F8h]@18
  int v184; // [sp+32Ch] [bp-F4h]@18
  int v185; // [sp+330h] [bp-F0h]@18
  int v186; // [sp+334h] [bp-ECh]@18
  int v187; // [sp+338h] [bp-E8h]@18
  int v188; // [sp+33Ch] [bp-E4h]@18
  int v189; // [sp+340h] [bp-E0h]@18
  int v190; // [sp+344h] [bp-DCh]@18
  int v191; // [sp+348h] [bp-D8h]@18
  int v192; // [sp+34Ch] [bp-D4h]@18
  int v193; // [sp+350h] [bp-D0h]@18
  void *v194; // [sp+354h] [bp-CCh]@18
  int v195; // [sp+358h] [bp-C8h]@18
  char *v196; // [sp+35Ch] [bp-C4h]@18
  int v197; // [sp+364h] [bp-BCh]@18
  int v198; // [sp+368h] [bp-B8h]@1
  int v199; // [sp+36Ch] [bp-B4h]@1
  void *v200; // [sp+370h] [bp-B0h]@1
  int v201; // [sp+374h] [bp-ACh]@1
  char *v202; // [sp+378h] [bp-A8h]@1
  int v203; // [sp+380h] [bp-A0h]@1
  __int16 v204; // [sp+3C0h] [bp-60h]@85
  __int16 v205; // [sp+3C4h] [bp-5Ch]@88
  __int16 v206; // [sp+3C8h] [bp-58h]@91
  unsigned __int16 v207; // [sp+3CCh] [bp-54h]@94
  __int16 v208; // [sp+3D0h] [bp-50h]@97
  __int16 v209; // [sp+3D4h] [bp-4Ch]@100
  __int16 v210; // [sp+3D8h] [bp-48h]@103
  __int16 v211; // [sp+3DCh] [bp-44h]@19
  __int16 v212; // [sp+3E0h] [bp-40h]@117
  __int16 v213; // [sp+3E4h] [bp-3Ch]@120
  __int16 v214; // [sp+3E8h] [bp-38h]@123
  unsigned __int16 v215; // [sp+3ECh] [bp-34h]@126
  __int16 v216; // [sp+3F0h] [bp-30h]@129
  __int16 v217; // [sp+3F4h] [bp-2Ch]@132
  __int16 v218; // [sp+3F8h] [bp-28h]@135

  v2 = this;
  sub_21E94B4((void **)&v203, "BlockEquipmentSlot");
  sub_21E94B4((void **)&v198, "slot.container");
  v199 = 0;
  v200 = 0;
  v201 = 0;
  v202 = 0;
  v3 = j_operator new(8u);
  v200 = v3;
  v202 = (char *)v3 + 8;
  v4 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,BlockSlot> const*,std::pair<std::string,BlockSlot>*>(
         (int)&v198,
         (int)&v200,
         (int)v3);
  v201 = v4;
  j_CommandRegistry::addEnumValues<BlockSlot>((int)v2, (int)&v203, (unsigned __int64 *)&v200);
  if ( v3 != (void *)v4 )
  {
    do
    {
      v7 = (int *)(*(_DWORD *)v3 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v5 = (unsigned int *)(*(_DWORD *)v3 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v3 = (char *)v3 + 8;
    }
    while ( v3 != (void *)v4 );
    v3 = v200;
  }
  if ( v3 )
    j_operator delete(v3);
  v8 = (void *)(v198 - 12);
  if ( (int *)(v198 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v198 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
    else
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v203 - 12);
  if ( (int *)(v203 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v203 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v197, "EntityEquipmentSlot");
  sub_21E94B4((void **)&v170, "slot.weapon.mainhand");
  v171 = 0;
  sub_21E94B4((void **)&v172, "slot.weapon.offhand");
  v173 = 1;
  sub_21E94B4((void **)&v174, "slot.armor.head");
  v175 = 2;
  sub_21E94B4((void **)&v176, "slot.armor.chest");
  v177 = 3;
  sub_21E94B4((void **)&v178, "slot.armor.legs");
  v179 = 4;
  sub_21E94B4((void **)&v180, "slot.armor.feet");
  v181 = 5;
  sub_21E94B4((void **)&v182, "slot.hotbar");
  v183 = 6;
  sub_21E94B4((void **)&v184, "slot.inventory");
  v185 = 7;
  sub_21E94B4((void **)&v186, "slot.enderchest");
  v187 = 8;
  sub_21E94B4((void **)&v188, "slot.saddle");
  v189 = 9;
  sub_21E94B4((void **)&v190, "slot.armor");
  v191 = 10;
  sub_21E94B4((void **)&v192, "slot.chest");
  v193 = 11;
  v194 = 0;
  v195 = 0;
  v196 = 0;
  v10 = j_operator new(0x60u);
  v11 = (char *)&v194;
  v194 = v10;
  v196 = (char *)v10 + 96;
  v12 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,EquipmentSlot> const*,std::pair<std::string,EquipmentSlot>*>(
          (int)&v170,
          (int)&v194,
          (int)v10);
  v195 = v12;
  j_CommandRegistry::addEnumValues<EquipmentSlot>((int)v2, (int)&v197, (unsigned __int64 *)&v194);
  if ( v10 != (void *)v12 )
    v13 = &v211;
      v17 = (int *)(*(_DWORD *)v10 - 12);
      if ( v17 != &dword_28898C0 )
        v14 = (unsigned int *)(*(_DWORD *)v10 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          v16 = v13;
          j_j_j_j__ZdlPv_9(v17);
          v13 = v16;
      v10 = (char *)v10 + 8;
    while ( v10 != (void *)v12 );
    v10 = v194;
  if ( v10 )
    j_operator delete(v10);
  do
    v21 = *((_DWORD *)v11 - 2);
    v11 -= 8;
    v20 = v21;
    v22 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v20 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  while ( v11 != &v170 );
  v23 = (void *)(v197 - 12);
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v197 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v169, "ReplaceItemBlock");
  sub_21E94B4((void **)&v164, "block");
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v168 = 0;
  v24 = j_operator new(8u);
  v166 = v24;
  v168 = (char *)v24 + 8;
  v25 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,ReplaceItemCommand::TargetType> const*,std::pair<std::string,ReplaceItemCommand::TargetType>*>(
          (int)&v164,
          (int)&v166,
          (int)v24);
  v167 = v25;
  j_CommandRegistry::addEnumValues<ReplaceItemCommand::TargetType>((int)v2, (int)&v169, (unsigned __int64 *)&v166);
  if ( v24 != (void *)v25 )
      v28 = (int *)(*(_DWORD *)v24 - 12);
      if ( v28 != &dword_28898C0 )
        v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
      v24 = (char *)v24 + 8;
    while ( v24 != (void *)v25 );
    v24 = v166;
  if ( v24 )
    j_operator delete(v24);
  v29 = (void *)(v164 - 12);
  if ( (int *)(v164 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v164 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v169 - 12);
  if ( (int *)(v169 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v169 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v163, "ReplaceItemEntity");
  sub_21E94B4((void **)&v158, "entity");
  v159 = 1;
  v160 = 0;
  v161 = 0;
  v162 = 0;
  v31 = j_operator new(8u);
  v160 = v31;
  v162 = (char *)v31 + 8;
  v32 = j_std::__uninitialized_copy<false>::__uninit_copy<std::pair<std::string,ReplaceItemCommand::TargetType> const*,std::pair<std::string,ReplaceItemCommand::TargetType>*>(
          (int)&v158,
          (int)&v160,
          (int)v31);
  v161 = v32;
  j_CommandRegistry::addEnumValues<ReplaceItemCommand::TargetType>((int)v2, (int)&v163, (unsigned __int64 *)&v160);
  if ( v31 != (void *)v32 )
      v35 = (int *)(*(_DWORD *)v31 - 12);
      if ( v35 != &dword_28898C0 )
        v33 = (unsigned int *)(*(_DWORD *)v31 - 4);
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v35);
      v31 = (char *)v31 + 8;
    while ( v31 != (void *)v32 );
    v31 = v160;
  if ( v31 )
    j_operator delete(v31);
  v36 = (void *)(v158 - 12);
  if ( (int *)(v158 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v158 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  v37 = (void *)(v163 - 12);
  if ( (int *)(v163 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v163 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v157, "replaceitem");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v157, "commands.replaceitem.description", 1, 0, 0);
  v39 = (void *)(v157 - 12);
  if ( (int *)(v157 - 12) != &dword_28898C0 )
    v89 = v157 - 4;
        v90 = __ldrex((unsigned int *)v38);
        HIDWORD(v38) = v90 - 1;
      while ( __strex(v90 - 1, (unsigned int *)v38) );
      v90 = *(_DWORD *)v38;
      HIDWORD(v38) = *(_DWORD *)v38 - 1;
      *(_DWORD *)v38 = HIDWORD(v38);
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  LODWORD(v38) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v156, 1, v38);
  v40 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id[0];
  __dmb();
  if ( !(v40 & 1)
    && j_j___cxa_guard_acquire_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id) )
    type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id);
  v211 = type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v154,
    &v211,
    (unsigned int)CommandRegistry::parse<ReplaceItemCommand::TargetType>,
    "block",
    1,
    (int)"ReplaceItemBlock",
    20,
    0,
    -1);
  v41 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id;
  if ( !(v41 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id) )
    type_id<CommandRegistry,CommandPosition>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandPosition>(void)::id);
  v204 = type_id<CommandRegistry,CommandPosition>(void)::id;
    (int)&v152,
    &v204,
    (unsigned int)CommandRegistry::parse<CommandPosition>,
    "position",
    120,
  v42 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id;
  if ( !(v42 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id) )
    type_id<CommandRegistry,BlockSlot>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,BlockSlot>(void)::id);
  v205 = type_id<CommandRegistry,BlockSlot>(void)::id;
    (int)&v150,
    &v205,
    (unsigned int)CommandRegistry::parse<BlockSlot>,
    "slotType",
    136,
  v43 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v43 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id) )
    type_id<CommandRegistry,int>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id);
  v206 = type_id<CommandRegistry,int>(void)::id;
    (int)&v148,
    &v206,
    (unsigned int)CommandRegistry::parse<int>,
    "slotId",
    144,
  v44 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  if ( !(v44 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id) )
    type_id<CommandRegistry,CommandItem>(void)::id[0] = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id);
  v207 = type_id<CommandRegistry,CommandItem>(void)::id[0];
    (int)&v146,
    &v207,
    (unsigned int)CommandRegistry::parse<CommandItem>,
    "itemName",
    148,
  v45 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v45 & 1)
  v208 = type_id<CommandRegistry,int>(void)::id;
    (int)&v144,
    &v208,
    "amount",
    156,
  v46 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v46 & 1)
  v209 = type_id<CommandRegistry,int>(void)::id;
    (int)&v142,
    &v209,
    "data",
    160,
  v47 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id;
  if ( !(v47 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id) )
    type_id<CommandRegistry,Json::Value>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id);
  v210 = type_id<CommandRegistry,Json::Value>(void)::id;
  v48 = j_CommandParameterData::CommandParameterData(
          (int)&v140,
          &v210,
          (unsigned int)CommandRegistry::parse<Json::Value>,
          "components",
          0,
          168,
          1,
          -1);
  j_CommandRegistry::registerOverload<ReplaceItemCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "replaceitem",
    v156,
    v48);
  v50 = (void *)(v141 - 12);
  if ( (int *)(v141 - 12) != &dword_28898C0 )
    v91 = v141 - 4;
        v92 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v92 - 1;
      while ( __strex(v92 - 1, (unsigned int *)v49) );
      v92 = *(_DWORD *)v49;
      HIDWORD(v49) = *(_DWORD *)v49 - 1;
      *(_DWORD *)v49 = HIDWORD(v49);
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v50);
  v51 = (void *)(v143 - 12);
  if ( (int *)(v143 - 12) != &dword_28898C0 )
    v93 = v143 - 4;
        v94 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v94 - 1;
      while ( __strex(v94 - 1, (unsigned int *)v49) );
      v94 = *(_DWORD *)v49;
    if ( v94 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (void *)(v145 - 12);
  if ( (int *)(v145 - 12) != &dword_28898C0 )
    v95 = v145 - 4;
        v96 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v96 - 1;
      while ( __strex(v96 - 1, (unsigned int *)v49) );
      v96 = *(_DWORD *)v49;
    if ( v96 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  v53 = (void *)(v147 - 12);
  if ( (int *)(v147 - 12) != &dword_28898C0 )
    v97 = v147 - 4;
        v98 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v98 - 1;
      while ( __strex(v98 - 1, (unsigned int *)v49) );
      v98 = *(_DWORD *)v49;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  v54 = (void *)(v149 - 12);
  if ( (int *)(v149 - 12) != &dword_28898C0 )
    v99 = v149 - 4;
        v100 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v100 - 1;
      while ( __strex(v100 - 1, (unsigned int *)v49) );
      v100 = *(_DWORD *)v49;
    if ( v100 <= 0 )
      j_j_j_j__ZdlPv_9(v54);
  v55 = (void *)(v151 - 12);
  if ( (int *)(v151 - 12) != &dword_28898C0 )
    v101 = v151 - 4;
        v102 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v102 - 1;
      while ( __strex(v102 - 1, (unsigned int *)v49) );
      v102 = *(_DWORD *)v49;
    if ( v102 <= 0 )
      j_j_j_j__ZdlPv_9(v55);
  v56 = (void *)(v153 - 12);
  if ( (int *)(v153 - 12) != &dword_28898C0 )
    v103 = v153 - 4;
        v104 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v104 - 1;
      while ( __strex(v104 - 1, (unsigned int *)v49) );
      v104 = *(_DWORD *)v49;
    if ( v104 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
  v57 = (void *)(v155 - 12);
  if ( (int *)(v155 - 12) != &dword_28898C0 )
    v105 = v155 - 4;
        v106 = __ldrex((unsigned int *)v49);
        HIDWORD(v49) = v106 - 1;
      while ( __strex(v106 - 1, (unsigned int *)v49) );
      v106 = *(_DWORD *)v49;
    if ( v106 <= 0 )
      j_j_j_j__ZdlPv_9(v57);
  LODWORD(v49) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v139, 1, v49);
  v58 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,ReplaceItemCommand::TargetType>(void)::id[0];
  if ( !(v58 & 1)
    (int)&v137,
    "entity",
    (int)"ReplaceItemEntity",
  v59 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v59 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v212 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
    (int)&v135,
    &v212,
    (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
    "target",
    24,
  v60 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id;
  if ( !(v60 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id) )
    type_id<CommandRegistry,EquipmentSlot>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,EquipmentSlot>(void)::id);
  v213 = type_id<CommandRegistry,EquipmentSlot>(void)::id;
    (int)&v133,
    &v213,
    (unsigned int)CommandRegistry::parse<EquipmentSlot>,
    140,
  v61 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v61 & 1)
  v214 = type_id<CommandRegistry,int>(void)::id;
    (int)&v131,
    &v214,
  v62 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandItem>(void)::id;
  if ( !(v62 & 1)
  v215 = type_id<CommandRegistry,CommandItem>(void)::id[0];
    (int)&v129,
    &v215,
  v63 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v63 & 1)
  v216 = type_id<CommandRegistry,int>(void)::id;
    (int)&v127,
    &v216,
  v64 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,int>(void)::id;
  if ( !(v64 & 1)
  v217 = type_id<CommandRegistry,int>(void)::id;
    (int)&v125,
    &v217,
  v65 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,Json::Value>(void)::id;
  if ( !(v65 & 1)
  v218 = type_id<CommandRegistry,Json::Value>(void)::id;
  v66 = j_CommandParameterData::CommandParameterData(
          (int)&v123,
          &v218,
          184);
    v139,
    v66);
  v67 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v107 = (unsigned int *)(v124 - 4);
        v108 = __ldrex(v107);
      while ( __strex(v108 - 1, v107) );
      v108 = (*v107)--;
    if ( v108 <= 0 )
      j_j_j_j__ZdlPv_9(v67);
  v68 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v109 = (unsigned int *)(v126 - 4);
        v110 = __ldrex(v109);
      while ( __strex(v110 - 1, v109) );
      v110 = (*v109)--;
    if ( v110 <= 0 )
      j_j_j_j__ZdlPv_9(v68);
  v69 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v111 = (unsigned int *)(v128 - 4);
        v112 = __ldrex(v111);
      while ( __strex(v112 - 1, v111) );
      v112 = (*v111)--;
    if ( v112 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
  v70 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v113 = (unsigned int *)(v130 - 4);
        v114 = __ldrex(v113);
      while ( __strex(v114 - 1, v113) );
      v114 = (*v113)--;
    if ( v114 <= 0 )
      j_j_j_j__ZdlPv_9(v70);
  v71 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v115 = (unsigned int *)(v132 - 4);
        v116 = __ldrex(v115);
      while ( __strex(v116 - 1, v115) );
      v116 = (*v115)--;
    if ( v116 <= 0 )
      j_j_j_j__ZdlPv_9(v71);
  v72 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v117 = (unsigned int *)(v134 - 4);
        v118 = __ldrex(v117);
      while ( __strex(v118 - 1, v117) );
      v118 = (*v117)--;
    if ( v118 <= 0 )
      j_j_j_j__ZdlPv_9(v72);
  v73 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v119 = (unsigned int *)(v136 - 4);
        v120 = __ldrex(v119);
      while ( __strex(v120 - 1, v119) );
      v120 = (*v119)--;
    if ( v120 <= 0 )
      j_j_j_j__ZdlPv_9(v73);
  v74 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v121 = (unsigned int *)(v138 - 4);
        v122 = __ldrex(v121);
      while ( __strex(v122 - 1, v121) );
      v122 = (*v121)--;
    if ( v122 <= 0 )
      j_j_j_j__ZdlPv_9(v74);
}


int __fastcall ReplaceItemCommand::execute(ReplaceItemCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  ReplaceItemCommand *v3; // r11@1
  CommandOutput *v4; // r8@1
  const CommandOrigin *v5; // r6@1
  CommandOutput *v6; // r3@1
  char *v7; // r0@4
  const char *v8; // r0@7
  char *v9; // r4@7
  _BYTE *v10; // r0@7
  unsigned int v11; // r4@8
  void *v12; // r7@11
  void *v13; // r4@12
  void *v14; // r6@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  int *v17; // r0@22
  char *v18; // r0@27
  unsigned int *v19; // r2@28
  signed int v20; // r1@30
  const char *v21; // r0@32
  char *v22; // r4@32
  _BYTE *v23; // r0@32
  BlockEntity *v24; // r4@33
  int v25; // r0@35
  int v26; // r4@36
  unsigned int *v27; // r1@37
  unsigned int v28; // r0@39
  void *v29; // r4@41
  void *v30; // r5@41
  unsigned int *v31; // r2@43
  signed int v32; // r1@45
  int *v33; // r0@51
  void *v34; // r0@56
  void *v35; // r0@57
  void *v36; // r0@58
  signed int v37; // r5@59
  unsigned int *v38; // r5@62
  unsigned int v39; // r0@64
  int v40; // r5@69
  ItemInstance *v41; // r9@72
  int v42; // r0@74
  int v43; // r7@74
  int v44; // r0@77
  void *v45; // r4@78
  void *v46; // r5@78
  unsigned int *v47; // r2@80
  signed int v48; // r1@82
  int *v49; // r0@88
  void *v50; // r0@93
  void *v51; // r0@94
  void *v52; // r0@95
  void *v53; // r0@96
  void *v54; // r0@97
  void *v55; // r0@98
  unsigned int *v56; // r2@99
  signed int v57; // r1@101
  PlayerInventoryProxy *v58; // r0@104
  PlayerInventoryProxy *v59; // r6@104
  unsigned int v60; // r1@104
  int v61; // r1@105
  int v62; // r0@109
  ContainerComponent *v63; // r6@109
  int v64; // r4@110
  int v65; // r0@110
  __int64 v66; // r4@115
  PlayerInventoryProxy *v67; // r6@118
  signed int i; // r4@118
  ItemInstance *v69; // r6@122
  void *v70; // r0@122
  void *v71; // r5@122
  int v72; // r0@122
  int v73; // r9@122
  signed int v74; // r0@122
  unsigned int v75; // r4@122
  void *v76; // r2@122
  void *v77; // r4@125
  void *v78; // r0@126
  void *v79; // r0@128
  int v80; // r0@130
  int v81; // r0@141
  void *v82; // r4@141
  void *v83; // r5@141
  void *v84; // r0@142
  void *v85; // r0@144
  int v86; // r0@146
  int v87; // r0@153
  unsigned int v88; // r1@153
  int v89; // r4@156
  int v90; // r0@156
  int v91; // r1@156
  int v92; // r0@161
  ContainerComponent *v93; // r4@161
  int v94; // r0@162
  int v95; // r1@162
  __int64 v96; // r4@165
  ItemInstance *v97; // r0@169
  void *v98; // r4@171
  void *v99; // r5@171
  unsigned int *v100; // r2@173
  signed int v101; // r1@175
  int *v102; // r0@181
  void *v103; // r0@186
  void *v104; // r0@187
  void *v105; // r0@188
  void *v106; // r0@189
  void *v107; // r0@190
  unsigned int *v108; // r2@196
  signed int v109; // r1@198
  int *v110; // r0@204
  void *v111; // r0@209
  void *v112; // r0@210
  void *v113; // r0@211
  void *v114; // r0@212
  void *v115; // r0@213
  void *v116; // r4@219
  void *v117; // r5@219
  __int64 v118; // r4@221
  int v119; // r0@224
  int v120; // r0@228
  void *v121; // r4@229
  void *v122; // r5@229
  int v123; // r0@231
  ContainerComponent *v124; // r6@231
  int v125; // r0@232
  int v126; // r4@232
  int v127; // r2@232
  void *v128; // r4@235
  void *v129; // r5@235
  __int64 v130; // r4@237
  unsigned int *v131; // r2@239
  signed int v132; // r1@241
  int *v133; // r0@247
  void *v134; // r0@252
  void *v135; // r0@253
  void *v136; // r0@254
  void *v137; // r0@255
  void *v138; // r0@256
  unsigned int *v139; // r2@262
  signed int v140; // r1@264
  int *v141; // r0@270
  void *v142; // r0@275
  void *v143; // r0@276
  void *v144; // r0@277
  void *v145; // r0@278
  void *v146; // r0@279
  unsigned int *v147; // r2@285
  signed int v148; // r1@287
  int *v149; // r0@293
  void *v150; // r0@298
  void *v151; // r0@299
  void *v152; // r0@300
  void *v153; // r0@301
  void *v154; // r0@302
  unsigned int *v155; // r2@308
  signed int v156; // r1@310
  int *v157; // r0@316
  void *v158; // r0@321
  void *v159; // r0@322
  void *v160; // r0@323
  void *v161; // r0@324
  void *v162; // r0@325
  unsigned int *v163; // r2@331
  signed int v164; // r1@333
  int *v165; // r0@339
  void *v166; // r0@344
  void *v167; // r0@345
  void *v168; // r0@346
  void *v169; // r0@347
  void *v170; // r0@348
  unsigned int *v171; // r2@354
  signed int v172; // r1@356
  int *v173; // r0@362
  void *v174; // r0@367
  void *v175; // r0@368
  void *v176; // r0@369
  void *v177; // r0@370
  void *v178; // r0@371
  void *v179; // r4@377
  void *v180; // r5@377
  __int64 v181; // r4@379
  int v182; // r0@382
  void *v183; // r4@389
  void *v184; // r5@389
  void *v185; // r4@391
  void *v186; // r5@391
  void *v187; // r4@393
  void *v188; // r5@393
  __int64 v189; // r4@395
  unsigned int *v190; // r2@397
  signed int v191; // r1@399
  int *v192; // r0@405
  void *v193; // r0@410
  void *v194; // r0@411
  void *v195; // r0@412
  unsigned int *v196; // r2@418
  signed int v197; // r1@420
  int *v198; // r0@426
  void *v199; // r0@431
  void *v200; // r0@432
  void *v201; // r0@433
  __int64 v202; // r4@439
  unsigned int *v203; // r2@441
  signed int v204; // r1@443
  int *v205; // r0@449
  void *v206; // r0@454
  void *v207; // r0@455
  void *v208; // r0@456
  void *v209; // r0@457
  void *v210; // r0@458
  unsigned int *v211; // r2@464
  signed int v212; // r1@466
  int *v213; // r0@472
  void *v214; // r0@477
  void *v215; // r0@478
  void *v216; // r0@479
  void *v217; // r0@480
  void *v218; // r0@481
  unsigned int *v219; // r2@487
  signed int v220; // r1@489
  int *v221; // r0@495
  void *v222; // r0@500
  void *v223; // r0@501
  void *v224; // r0@502
  void *v225; // r0@503
  void *v226; // r0@504
  unsigned int *v227; // r2@510
  signed int v228; // r1@512
  int *v229; // r0@518
  void *v230; // r0@523
  void *v231; // r0@524
  void *v232; // r0@525
  void *v233; // r0@526
  void *v234; // r0@527
  unsigned int *v235; // r2@533
  signed int v236; // r1@535
  int *v237; // r0@541
  void *v238; // r0@546
  void *v239; // r0@547
  void *v240; // r0@548
  int v241; // r0@554
  ContainerComponent *v242; // r4@554
  int v243; // r0@555
  int v244; // r1@555
  void *v245; // r4@558
  void *v246; // r5@558
  unsigned int *v247; // r2@560
  signed int v248; // r1@562
  int *v249; // r0@568
  void *v250; // r0@573
  void *v251; // r0@574
  void *v252; // r0@575
  void *v253; // r0@576
  void *v254; // r0@577
  void *v255; // r4@583
  void *v256; // r5@583
  unsigned int *v257; // r2@585
  signed int v258; // r1@587
  int *v259; // r0@593
  void *v260; // r0@598
  void *v261; // r0@599
  void *v262; // r0@600
  void *v263; // r4@606
  void *v264; // r5@606
  unsigned int *v265; // r2@608
  signed int v266; // r1@610
  int *v267; // r0@616
  void *v268; // r0@621
  void *v269; // r0@622
  void *v270; // r0@623
  void *v271; // r0@624
  void *v272; // r0@625
  unsigned int *v273; // r2@631
  signed int v274; // r1@633
  unsigned int *v275; // r2@635
  signed int v276; // r1@637
  unsigned int *v277; // r2@639
  signed int v278; // r1@641
  unsigned int *v279; // r2@643
  signed int v280; // r1@645
  unsigned int *v281; // r2@647
  signed int v282; // r1@649
  int v283; // r4@651
  int v284; // r4@651
  ItemInstance *v285; // r0@651
  __int64 v286; // r4@654
  __int64 v287; // r4@656
  unsigned int *v288; // r2@658
  signed int v289; // r1@660
  int *v290; // r0@666
  void *v291; // r0@671
  void *v292; // r0@672
  void *v293; // r0@673
  void *v294; // r0@674
  void *v295; // r0@675
  unsigned int *v296; // r2@681
  signed int v297; // r1@683
  int *v298; // r0@689
  void *v299; // r0@694
  void *v300; // r0@695
  void *v301; // r0@696
  void *v302; // r0@697
  void *v303; // r0@698
  void *v304; // r4@704
  void *v305; // r5@704
  unsigned int *v306; // r2@706
  signed int v307; // r1@708
  int *v308; // r0@714
  void *v309; // r0@719
  void *v310; // r0@720
  void *v311; // r0@721
  void *v312; // r0@722
  void *v313; // r0@723
  unsigned int *v314; // r2@729
  signed int v315; // r1@731
  unsigned int *v316; // r2@733
  signed int v317; // r1@735
  unsigned int *v318; // r2@737
  signed int v319; // r1@739
  unsigned int *v320; // r2@741
  signed int v321; // r1@743
  unsigned int *v322; // r2@745
  signed int v323; // r1@747
  unsigned int *v324; // r2@769
  signed int v325; // r1@771
  unsigned int *v326; // r2@773
  signed int v327; // r1@775
  unsigned int *v328; // r2@777
  signed int v329; // r1@779
  unsigned int *v330; // r2@781
  signed int v331; // r1@783
  unsigned int *v332; // r2@785
  signed int v333; // r1@787
  void *v334; // r4@789
  void *v335; // r5@789
  unsigned int *v336; // r2@791
  signed int v337; // r1@793
  int *v338; // r0@799
  char *v339; // r0@814
  _BYTE *v340; // r6@816
  char *v341; // r4@816
  unsigned int v342; // r2@816
  unsigned int v343; // r1@818
  unsigned int v344; // r5@818
  int v345; // r7@825
  char *v346; // r7@827
  unsigned int *v347; // r2@851
  signed int v348; // r1@853
  unsigned int *v349; // r2@855
  signed int v350; // r1@857
  unsigned int *v351; // r2@859
  signed int v352; // r1@861
  unsigned int *v353; // r2@863
  signed int v354; // r1@865
  unsigned int *v355; // r2@867
  signed int v356; // r1@869
  unsigned int *v357; // r2@871
  signed int v358; // r1@873
  unsigned int *v359; // r2@875
  signed int v360; // r1@877
  unsigned int *v361; // r2@879
  signed int v362; // r1@881
  unsigned int *v363; // r2@883
  signed int v364; // r1@885
  unsigned int *v365; // r2@887
  signed int v366; // r1@889
  unsigned int *v367; // r2@891
  signed int v368; // r1@893
  unsigned int *v369; // r2@895
  signed int v370; // r1@897
  unsigned int *v371; // r2@899
  signed int v372; // r1@901
  unsigned int *v373; // r2@903
  signed int v374; // r1@905
  unsigned int *v375; // r2@907
  signed int v376; // r1@909
  unsigned int *v377; // r2@911
  signed int v378; // r1@913
  unsigned int *v379; // r2@915
  signed int v380; // r1@917
  unsigned int *v381; // r2@919
  signed int v382; // r1@921
  unsigned int *v383; // r2@923
  signed int v384; // r1@925
  unsigned int *v385; // r2@927
  signed int v386; // r1@929
  unsigned int *v387; // r2@931
  signed int v388; // r1@933
  unsigned int *v389; // r2@935
  signed int v390; // r1@937
  unsigned int *v391; // r2@939
  signed int v392; // r1@941
  unsigned int *v393; // r2@943
  signed int v394; // r1@945
  unsigned int *v395; // r2@947
  signed int v396; // r1@949
  unsigned int *v397; // r2@971
  signed int v398; // r1@973
  unsigned int *v399; // r2@975
  signed int v400; // r1@977
  unsigned int *v401; // r2@979
  signed int v402; // r1@981
  unsigned int *v403; // r2@983
  signed int v404; // r1@985
  unsigned int *v405; // r2@987
  signed int v406; // r1@989
  unsigned int *v407; // r2@991
  signed int v408; // r1@993
  unsigned int *v409; // r2@995
  signed int v410; // r1@997
  unsigned int *v411; // r2@999
  signed int v412; // r1@1001
  unsigned int *v413; // r2@1003
  signed int v414; // r1@1005
  unsigned int *v415; // r2@1007
  signed int v416; // r1@1009
  unsigned int *v417; // r2@1011
  signed int v418; // r1@1013
  unsigned int *v419; // r2@1115
  signed int v420; // r1@1117
  unsigned int *v421; // r2@1119
  signed int v422; // r1@1121
  unsigned int *v423; // r2@1123
  signed int v424; // r1@1125
  unsigned int *v425; // r2@1127
  signed int v426; // r1@1129
  unsigned int *v427; // r2@1131
  signed int v428; // r1@1133
  unsigned int *v429; // r2@1135
  signed int v430; // r1@1137
  unsigned int *v431; // r2@1139
  signed int v432; // r1@1141
  unsigned int *v433; // r2@1143
  signed int v434; // r1@1145
  unsigned int *v435; // r2@1147
  signed int v436; // r1@1149
  unsigned int *v437; // r2@1151
  signed int v438; // r1@1153
  unsigned int *v439; // r2@1155
  signed int v440; // r1@1157
  unsigned int *v441; // r2@1159
  signed int v442; // r1@1161
  unsigned int *v443; // r2@1163
  signed int v444; // r1@1165
  unsigned int *v445; // r2@1167
  signed int v446; // r1@1169
  unsigned int *v447; // r2@1171
  signed int v448; // r1@1173
  unsigned int *v449; // r2@1175
  signed int v450; // r1@1177
  unsigned int *v451; // r2@1179
  signed int v452; // r1@1181
  unsigned int *v453; // r2@1183
  signed int v454; // r1@1185
  unsigned int *v455; // r2@1187
  signed int v456; // r1@1189
  unsigned int *v457; // r2@1191
  signed int v458; // r1@1193
  unsigned int *v459; // r2@1195
  signed int v460; // r1@1197
  unsigned int *v461; // r2@1199
  signed int v462; // r1@1201
  unsigned int *v463; // r2@1203
  signed int v464; // r1@1205
  unsigned int *v465; // r2@1207
  signed int v466; // r1@1209
  unsigned int *v467; // r2@1211
  signed int v468; // r1@1213
  unsigned int *v469; // r2@1215
  signed int v470; // r1@1217
  unsigned int *v471; // r2@1219
  signed int v472; // r1@1221
  unsigned int *v473; // r2@1223
  signed int v474; // r1@1225
  unsigned int *v475; // r2@1227
  signed int v476; // r1@1229
  unsigned int *v477; // r2@1231
  signed int v478; // r1@1233
  unsigned int *v479; // r2@1235
  signed int v480; // r1@1237
  unsigned int *v481; // r2@1363
  signed int v482; // r1@1365
  unsigned int *v483; // r2@1367
  signed int v484; // r1@1369
  unsigned int *v485; // r2@1371
  signed int v486; // r1@1373
  unsigned int *v487; // r2@1375
  signed int v488; // r1@1377
  unsigned int *v489; // r2@1379
  signed int v490; // r1@1381
  unsigned int *v491; // r2@1427
  signed int v492; // r1@1429
  unsigned int *v493; // r2@1431
  signed int v494; // r1@1433
  unsigned int *v495; // r2@1435
  signed int v496; // r1@1437
  unsigned int *v497; // r2@1439
  signed int v498; // r1@1441
  unsigned int *v499; // r2@1443
  signed int v500; // r1@1445
  unsigned int *v501; // r2@1447
  signed int v502; // r1@1449
  unsigned int *v503; // r2@1451
  signed int v504; // r1@1453
  unsigned int *v505; // r2@1455
  signed int v506; // r1@1457
  unsigned int *v507; // r2@1459
  signed int v508; // r1@1461
  unsigned int *v509; // r2@1463
  signed int v510; // r1@1465
  unsigned int *v511; // r2@1487
  signed int v512; // r1@1489
  unsigned int *v513; // r2@1491
  signed int v514; // r1@1493
  unsigned int *v515; // r2@1495
  signed int v516; // r1@1497
  unsigned int *v517; // r2@1499
  signed int v518; // r1@1501
  unsigned int *v519; // r2@1503
  signed int v520; // r1@1505
  unsigned int *v521; // r2@1569
  signed int v522; // r1@1571
  int v523; // r6@1576
  unsigned int *v524; // r1@1577
  unsigned int v525; // r0@1579
  int v526; // r4@1587
  int v527; // r5@1590
  void *v528; // r4@1592
  void *v529; // r5@1592
  void *v530; // r4@1594
  void *v531; // r5@1594
  unsigned int *v532; // r2@1596
  signed int v533; // r1@1598
  int *v534; // r0@1604
  void *v535; // r0@1609
  void *v536; // r0@1610
  void *v537; // r0@1611
  void *v538; // r4@1613
  void *v539; // r4@1619
  void *v540; // r5@1619
  unsigned int *v541; // r2@1621
  signed int v542; // r1@1623
  int *v543; // r0@1629
  void *v544; // r0@1634
  void *v545; // r0@1635
  void *v546; // r0@1636
  void *v547; // r0@1637
  void *v548; // r0@1638
  void *v549; // r0@1639
  unsigned int *v550; // r2@1641
  signed int v551; // r1@1643
  unsigned int *v552; // r2@1645
  signed int v553; // r1@1647
  unsigned int *v554; // r2@1649
  signed int v555; // r1@1651
  unsigned int *v556; // r2@1653
  signed int v557; // r1@1655
  int *v558; // r0@1661
  void *v559; // r0@1666
  void *v560; // r0@1667
  void *v561; // r0@1668
  void *v562; // r0@1669
  void *v563; // r0@1670
  void *v564; // r0@1671
  unsigned int *v565; // r4@1675
  unsigned int v566; // r0@1677
  unsigned int *v567; // r2@1679
  signed int v568; // r1@1681
  unsigned int *v569; // r2@1683
  signed int v570; // r1@1685
  unsigned int *v571; // r2@1687
  signed int v572; // r1@1689
  int v573; // r6@1706
  unsigned int *v574; // r1@1707
  unsigned int v575; // r0@1709
  unsigned int *v576; // r4@1713
  unsigned int v577; // r0@1715
  void *v578; // r0@1720
  __int64 v579; // r4@1721
  unsigned int *v580; // r2@1723
  signed int v581; // r1@1725
  int *v582; // r0@1731
  void *v583; // r0@1736
  void *v584; // r0@1737
  void *v585; // r0@1738
  void *v586; // r0@1739
  void *v587; // r0@1740
  void *v588; // r0@1741
  void *v589; // r0@1742
  int v590; // r6@1746
  unsigned int *v591; // r1@1747
  unsigned int v592; // r0@1749
  unsigned int *v593; // r4@1753
  unsigned int v594; // r0@1755
  void *v595; // r0@1760
  void *v596; // r0@1761
  int result; // r0@1767
  unsigned int *v598; // r2@1778
  signed int v599; // r1@1780
  unsigned int *v600; // r2@1782
  signed int v601; // r1@1784
  unsigned int *v602; // r2@1806
  signed int v603; // r1@1808
  unsigned int *v604; // r2@1810
  signed int v605; // r1@1812
  unsigned int *v606; // r2@1814
  signed int v607; // r1@1816
  unsigned int *v608; // r2@1818
  signed int v609; // r1@1820
  unsigned int *v610; // r2@1822
  signed int v611; // r1@1824
  unsigned int *v612; // r2@1826
  signed int v613; // r1@1828
  unsigned int *v614; // r2@1830
  signed int v615; // r1@1832
  unsigned int *v616; // r2@1834
  signed int v617; // r1@1836
  unsigned int *v618; // r2@1838
  signed int v619; // r1@1840
  unsigned int *v620; // r2@1842
  signed int v621; // r1@1844
  unsigned int *v622; // r2@1846
  signed int v623; // r1@1848
  unsigned int *v624; // r2@1850
  signed int v625; // r1@1852
  unsigned int *v626; // r2@1854
  signed int v627; // r1@1856
  unsigned int *v628; // r2@1882
  signed int v629; // r1@1884
  unsigned int *v630; // r2@1886
  signed int v631; // r1@1888
  unsigned int *v632; // r2@1890
  signed int v633; // r1@1892
  unsigned int *v634; // r2@1894
  signed int v635; // r1@1896
  unsigned int *v636; // r2@1898
  signed int v637; // r1@1900
  unsigned int *v638; // r2@1902
  signed int v639; // r1@1904
  CommandOutput *v640; // [sp+0h] [bp-AC8h]@0
  Level *v641; // [sp+194h] [bp-934h]@8
  int v642; // [sp+1ACh] [bp-91Ch]@1761
  int v643; // [sp+1B0h] [bp-918h]@1760
  int v644; // [sp+1B4h] [bp-914h]@1721
  int v645; // [sp+1B8h] [bp-910h]@1721
  int v646; // [sp+1C0h] [bp-908h]@1721
  int v647; // [sp+1C8h] [bp-900h]@1721
  int v648; // [sp+1D0h] [bp-8F8h]@1721
  int v649; // [sp+1D8h] [bp-8F0h]@1721
  char *v650; // [sp+1E0h] [bp-8E8h]@1721
  char *v651; // [sp+1E4h] [bp-8E4h]@1721
  char *v652; // [sp+1E8h] [bp-8E0h]@1721
  int v653; // [sp+1F0h] [bp-8D8h]@1721
  int v654; // [sp+1F4h] [bp-8D4h]@165
  int v655; // [sp+1F8h] [bp-8D0h]@165
  int v656; // [sp+200h] [bp-8C8h]@165
  int v657; // [sp+208h] [bp-8C0h]@165
  int v658; // [sp+210h] [bp-8B8h]@165
  void *v659; // [sp+218h] [bp-8B0h]@165
  void *v660; // [sp+21Ch] [bp-8ACh]@165
  char *v661; // [sp+220h] [bp-8A8h]@165
  int v662; // [sp+228h] [bp-8A0h]@165
  int v663; // [sp+22Ch] [bp-89Ch]@379
  int v664; // [sp+230h] [bp-898h]@379
  int v665; // [sp+238h] [bp-890h]@379
  int v666; // [sp+240h] [bp-888h]@379
  int v667; // [sp+248h] [bp-880h]@379
  void *v668; // [sp+250h] [bp-878h]@379
  void *v669; // [sp+254h] [bp-874h]@379
  char *v670; // [sp+258h] [bp-870h]@379
  int v671; // [sp+260h] [bp-868h]@379
  int v672; // [sp+264h] [bp-864h]@439
  int v673; // [sp+26Ch] [bp-85Ch]@439
  int v674; // [sp+274h] [bp-854h]@439
  void *v675; // [sp+27Ch] [bp-84Ch]@439
  void *v676; // [sp+280h] [bp-848h]@439
  char *v677; // [sp+284h] [bp-844h]@439
  int v678; // [sp+28Ch] [bp-83Ch]@439
  int v679; // [sp+290h] [bp-838h]@237
  int v680; // [sp+294h] [bp-834h]@237
  int v681; // [sp+29Ch] [bp-82Ch]@237
  int v682; // [sp+2A4h] [bp-824h]@237
  int v683; // [sp+2ACh] [bp-81Ch]@237
  void *v684; // [sp+2B4h] [bp-814h]@237
  void *v685; // [sp+2B8h] [bp-810h]@237
  char *v686; // [sp+2BCh] [bp-80Ch]@237
  int v687; // [sp+2C4h] [bp-804h]@237
  int v688; // [sp+2C8h] [bp-800h]@654
  int v689; // [sp+2CCh] [bp-7FCh]@654
  int v690; // [sp+2D4h] [bp-7F4h]@654
  int v691; // [sp+2DCh] [bp-7ECh]@654
  int v692; // [sp+2E4h] [bp-7E4h]@654
  void *v693; // [sp+2ECh] [bp-7DCh]@654
  void *v694; // [sp+2F0h] [bp-7D8h]@654
  char *v695; // [sp+2F4h] [bp-7D4h]@654
  int v696; // [sp+2FCh] [bp-7CCh]@654
  int v697; // [sp+300h] [bp-7C8h]@395
  int v698; // [sp+304h] [bp-7C4h]@395
  int v699; // [sp+30Ch] [bp-7BCh]@395
  int v700; // [sp+314h] [bp-7B4h]@395
  int v701; // [sp+31Ch] [bp-7ACh]@395
  void *v702; // [sp+324h] [bp-7A4h]@395
  void *v703; // [sp+328h] [bp-7A0h]@395
  char *v704; // [sp+32Ch] [bp-79Ch]@395
  int v705; // [sp+334h] [bp-794h]@395
  int v706; // [sp+338h] [bp-790h]@221
  int v707; // [sp+33Ch] [bp-78Ch]@221
  int v708; // [sp+344h] [bp-784h]@221
  int v709; // [sp+34Ch] [bp-77Ch]@221
  int v710; // [sp+354h] [bp-774h]@221
  void *v711; // [sp+35Ch] [bp-76Ch]@221
  void *v712; // [sp+360h] [bp-768h]@221
  char *v713; // [sp+364h] [bp-764h]@221
  int v714; // [sp+36Ch] [bp-75Ch]@221
  int v715; // [sp+370h] [bp-758h]@115
  int v716; // [sp+374h] [bp-754h]@115
  int v717; // [sp+37Ch] [bp-74Ch]@115
  int v718; // [sp+384h] [bp-744h]@115
  int v719; // [sp+38Ch] [bp-73Ch]@115
  void *v720; // [sp+394h] [bp-734h]@115
  void *v721; // [sp+398h] [bp-730h]@115
  char *v722; // [sp+39Ch] [bp-72Ch]@115
  int v723; // [sp+3A4h] [bp-724h]@115
  int v724; // [sp+3A8h] [bp-720h]@656
  int v725; // [sp+3ACh] [bp-71Ch]@656
  int v726; // [sp+3B4h] [bp-714h]@656
  int v727; // [sp+3BCh] [bp-70Ch]@656
  int v728; // [sp+3C4h] [bp-704h]@656
  void *v729; // [sp+3CCh] [bp-6FCh]@656
  void *v730; // [sp+3D0h] [bp-6F8h]@656
  char *v731; // [sp+3D4h] [bp-6F4h]@656
  int v732; // [sp+3DCh] [bp-6ECh]@656
  int v733; // [sp+3E0h] [bp-6E8h]@704
  int v734; // [sp+3E4h] [bp-6E4h]@704
  int v735; // [sp+3ECh] [bp-6DCh]@704
  int v736; // [sp+3F4h] [bp-6D4h]@704
  int v737; // [sp+3FCh] [bp-6CCh]@704
  void *v738; // [sp+404h] [bp-6C4h]@704
  void *v739; // [sp+408h] [bp-6C0h]@704
  char *v740; // [sp+40Ch] [bp-6BCh]@704
  int v741; // [sp+414h] [bp-6B4h]@704
  int v742; // [sp+418h] [bp-6B0h]@235
  int v743; // [sp+41Ch] [bp-6ACh]@235
  int v744; // [sp+424h] [bp-6A4h]@235
  int v745; // [sp+42Ch] [bp-69Ch]@235
  int v746; // [sp+434h] [bp-694h]@235
  void *v747; // [sp+43Ch] [bp-68Ch]@235
  void *v748; // [sp+440h] [bp-688h]@235
  char *v749; // [sp+444h] [bp-684h]@235
  int v750; // [sp+44Ch] [bp-67Ch]@235
  int v751; // [sp+450h] [bp-678h]@393
  int v752; // [sp+454h] [bp-674h]@393
  int v753; // [sp+45Ch] [bp-66Ch]@393
  int v754; // [sp+464h] [bp-664h]@393
  int v755; // [sp+46Ch] [bp-65Ch]@393
  void *v756; // [sp+474h] [bp-654h]@393
  void *v757; // [sp+478h] [bp-650h]@393
  char *v758; // [sp+47Ch] [bp-64Ch]@393
  int v759; // [sp+484h] [bp-644h]@393
  int v760; // [sp+488h] [bp-640h]@558
  int v761; // [sp+48Ch] [bp-63Ch]@558
  int v762; // [sp+494h] [bp-634h]@558
  int v763; // [sp+49Ch] [bp-62Ch]@558
  int v764; // [sp+4A4h] [bp-624h]@558
  void *v765; // [sp+4ACh] [bp-61Ch]@558
  void *v766; // [sp+4B0h] [bp-618h]@558
  char *v767; // [sp+4B4h] [bp-614h]@558
  int v768; // [sp+4BCh] [bp-60Ch]@558
  int v769; // [sp+4C0h] [bp-608h]@583
  int v770; // [sp+4C8h] [bp-600h]@583
  int v771; // [sp+4D0h] [bp-5F8h]@583
  void *v772; // [sp+4D8h] [bp-5F0h]@583
  void *v773; // [sp+4DCh] [bp-5ECh]@583
  char *v774; // [sp+4E0h] [bp-5E8h]@583
  int v775; // [sp+4E8h] [bp-5E0h]@583
  int v776; // [sp+4ECh] [bp-5DCh]@389
  int v777; // [sp+4F4h] [bp-5D4h]@389
  int v778; // [sp+4FCh] [bp-5CCh]@389
  void *v779; // [sp+504h] [bp-5C4h]@389
  void *v780; // [sp+508h] [bp-5C0h]@389
  char *v781; // [sp+50Ch] [bp-5BCh]@389
  int v782; // [sp+514h] [bp-5B4h]@389
  int v783; // [sp+518h] [bp-5B0h]@219
  int v784; // [sp+51Ch] [bp-5ACh]@219
  int v785; // [sp+524h] [bp-5A4h]@219
  int v786; // [sp+52Ch] [bp-59Ch]@219
  int v787; // [sp+534h] [bp-594h]@219
  void *v788; // [sp+53Ch] [bp-58Ch]@219
  void *v789; // [sp+540h] [bp-588h]@219
  char *v790; // [sp+544h] [bp-584h]@219
  int v791; // [sp+54Ch] [bp-57Ch]@219
  int v792; // [sp+550h] [bp-578h]@377
  int v793; // [sp+558h] [bp-570h]@377
  int v794; // [sp+560h] [bp-568h]@377
  void *v795; // [sp+568h] [bp-560h]@377
  void *v796; // [sp+56Ch] [bp-55Ch]@377
  char *v797; // [sp+570h] [bp-558h]@377
  int v798; // [sp+578h] [bp-550h]@377
  void *v799; // [sp+57Ch] [bp-54Ch]@789
  void *v800; // [sp+580h] [bp-548h]@789
  int v801; // [sp+584h] [bp-544h]@789
  int v802; // [sp+58Ch] [bp-53Ch]@789
  int v803; // [sp+590h] [bp-538h]@606
  int v804; // [sp+594h] [bp-534h]@606
  int v805; // [sp+59Ch] [bp-52Ch]@606
  int v806; // [sp+5A4h] [bp-524h]@606
  int v807; // [sp+5ACh] [bp-51Ch]@606
  void *v808; // [sp+5B4h] [bp-514h]@606
  void *v809; // [sp+5B8h] [bp-510h]@606
  char *v810; // [sp+5BCh] [bp-50Ch]@606
  int v811; // [sp+5C4h] [bp-504h]@606
  __int64 v812; // [sp+5C8h] [bp-500h]@382
  void **v813; // [sp+5D0h] [bp-4F8h]@382
  int v814; // [sp+5D4h] [bp-4F4h]@382
  int v815; // [sp+5D8h] [bp-4F0h]@382
  char v816; // [sp+5DCh] [bp-4ECh]@382
  __int64 v817; // [sp+5E0h] [bp-4E8h]@382
  int v818; // [sp+5E8h] [bp-4E0h]@382
  int v819; // [sp+5F0h] [bp-4D8h]@386
  void *v820; // [sp+60Ch] [bp-4BCh]@384
  void *v821; // [sp+61Ch] [bp-4ACh]@382
  int v822; // [sp+630h] [bp-498h]@382
  int v823; // [sp+634h] [bp-494h]@382
  int v824; // [sp+638h] [bp-490h]@382
  char v825; // [sp+63Ch] [bp-48Ch]@382
  char v826; // [sp+640h] [bp-488h]@72
  int v827; // [sp+648h] [bp-480h]@139
  void *v828; // [sp+664h] [bp-464h]@137
  void *v829; // [sp+674h] [bp-454h]@135
  int v830; // [sp+688h] [bp-440h]@122
  void **v831; // [sp+68Ch] [bp-43Ch]@122
  int v832; // [sp+690h] [bp-438h]@122
  int v833; // [sp+694h] [bp-434h]@122
  char v834; // [sp+698h] [bp-430h]@122
  char v835; // [sp+699h] [bp-42Fh]@122
  void *v836; // [sp+69Ch] [bp-42Ch]@122
  void *j; // [sp+6A0h] [bp-428h]@122
  char *v838; // [sp+6A4h] [bp-424h]@122
  int v839; // [sp+6A8h] [bp-420h]@229
  int v840; // [sp+6ACh] [bp-41Ch]@229
  int v841; // [sp+6B4h] [bp-414h]@229
  int v842; // [sp+6BCh] [bp-40Ch]@229
  int v843; // [sp+6C4h] [bp-404h]@229
  void *v844; // [sp+6CCh] [bp-3FCh]@229
  void *v845; // [sp+6D0h] [bp-3F8h]@229
  char *v846; // [sp+6D4h] [bp-3F4h]@229
  int v847; // [sp+6DCh] [bp-3ECh]@229
  int v848; // [sp+6E0h] [bp-3E8h]@391
  int v849; // [sp+6E4h] [bp-3E4h]@391
  int v850; // [sp+6ECh] [bp-3DCh]@391
  int v851; // [sp+6F4h] [bp-3D4h]@391
  int v852; // [sp+6FCh] [bp-3CCh]@391
  void *v853; // [sp+704h] [bp-3C4h]@391
  void *v854; // [sp+708h] [bp-3C0h]@391
  char *v855; // [sp+70Ch] [bp-3BCh]@391
  int v856; // [sp+714h] [bp-3B4h]@391
  __int64 v857; // [sp+718h] [bp-3B0h]@224
  void **v858; // [sp+720h] [bp-3A8h]@224
  int v859; // [sp+724h] [bp-3A4h]@224
  int v860; // [sp+728h] [bp-3A0h]@224
  char v861; // [sp+72Ch] [bp-39Ch]@224
  __int64 v862; // [sp+730h] [bp-398h]@224
  int v863; // [sp+738h] [bp-390h]@224
  int v864; // [sp+740h] [bp-388h]@228
  void *v865; // [sp+75Ch] [bp-36Ch]@226
  void *v866; // [sp+76Ch] [bp-35Ch]@224
  int v867; // [sp+780h] [bp-348h]@224
  int v868; // [sp+784h] [bp-344h]@224
  int v869; // [sp+788h] [bp-340h]@224
  char v870; // [sp+78Ch] [bp-33Ch]@224
  char v871; // [sp+790h] [bp-338h]@118
  int v872; // [sp+794h] [bp-334h]@118
  int v873; // [sp+798h] [bp-330h]@78
  int v874; // [sp+79Ch] [bp-32Ch]@78
  int v875; // [sp+7A4h] [bp-324h]@78
  int v876; // [sp+7ACh] [bp-31Ch]@78
  int v877; // [sp+7B4h] [bp-314h]@78
  void *v878; // [sp+7BCh] [bp-30Ch]@78
  void *v879; // [sp+7C0h] [bp-308h]@78
  char *v880; // [sp+7C4h] [bp-304h]@78
  int v881; // [sp+7CCh] [bp-2FCh]@78
  char v882; // [sp+7D0h] [bp-2F8h]@77
  int v883; // [sp+914h] [bp-1B4h]@171
  int v884; // [sp+918h] [bp-1B0h]@171
  int v885; // [sp+920h] [bp-1A8h]@171
  int v886; // [sp+928h] [bp-1A0h]@171
  int v887; // [sp+930h] [bp-198h]@171
  void *v888; // [sp+938h] [bp-190h]@171
  void *v889; // [sp+93Ch] [bp-18Ch]@171
  char *v890; // [sp+940h] [bp-188h]@171
  int v891; // [sp+948h] [bp-180h]@171
  char v892; // [sp+94Ch] [bp-17Ch]@72
  int v893; // [sp+950h] [bp-178h]@1576
  char v894; // [sp+958h] [bp-170h]@72
  int v895; // [sp+95Ch] [bp-16Ch]@1706
  void *v896; // [sp+964h] [bp-164h]@8
  char *v897; // [sp+968h] [bp-160h]@8
  char *v898; // [sp+96Ch] [bp-15Ch]@8
  int *v899; // [sp+970h] [bp-158h]@7
  int v900; // [sp+974h] [bp-154h]@36
  int v901; // [sp+978h] [bp-150h]@1592
  int v902; // [sp+97Ch] [bp-14Ch]@1592
  int v903; // [sp+984h] [bp-144h]@1592
  int v904; // [sp+98Ch] [bp-13Ch]@1592
  int v905; // [sp+994h] [bp-134h]@1592
  void *v906; // [sp+99Ch] [bp-12Ch]@1592
  void *v907; // [sp+9A0h] [bp-128h]@1592
  char *v908; // [sp+9A4h] [bp-124h]@1592
  int v909; // [sp+9ACh] [bp-11Ch]@1592
  int v910; // [sp+9B0h] [bp-118h]@1619
  int v911; // [sp+9B4h] [bp-114h]@1619
  int v912; // [sp+9BCh] [bp-10Ch]@1619
  int v913; // [sp+9C4h] [bp-104h]@1619
  int v914; // [sp+9CCh] [bp-FCh]@1619
  void *v915; // [sp+9D4h] [bp-F4h]@1619
  void *v916; // [sp+9D8h] [bp-F0h]@1619
  char *v917; // [sp+9DCh] [bp-ECh]@1619
  int v918; // [sp+9E4h] [bp-E4h]@1619
  int v919; // [sp+9E8h] [bp-E0h]@1594
  int v920; // [sp+9ECh] [bp-DCh]@1594
  void *v921; // [sp+9F4h] [bp-D4h]@1594
  void *v922; // [sp+9F8h] [bp-D0h]@1594
  char *v923; // [sp+9FCh] [bp-CCh]@1594
  int v924; // [sp+A04h] [bp-C4h]@1594
  int v925; // [sp+A08h] [bp-C0h]@41
  int v926; // [sp+A0Ch] [bp-BCh]@41
  void *v927; // [sp+A14h] [bp-B4h]@41
  void *v928; // [sp+A18h] [bp-B0h]@41
  char *v929; // [sp+A1Ch] [bp-ACh]@41
  int v930; // [sp+A24h] [bp-A4h]@41
  int v931; // [sp+A28h] [bp-A0h]@32
  char v932; // [sp+A2Ch] [bp-9Ch]@32
  char v933; // [sp+A38h] [bp-90h]@32
  char *v934; // [sp+A44h] [bp-84h]@6
  void *ptr; // [sp+A48h] [bp-80h]@12
  void *v936; // [sp+A4Ch] [bp-7Ch]@12
  int v937; // [sp+A50h] [bp-78h]@12
  char *v938; // [sp+A54h] [bp-74h]@3
  Item *v939; // [sp+A58h] [bp-70h]@1
  int v940; // [sp+A60h] [bp-68h]@1767
  void *v941; // [sp+A7Ch] [bp-4Ch]@1765
  void *v942; // [sp+A8Ch] [bp-3Ch]@1763

  v3 = this;
  v4 = a3;
  v5 = a2;
  j_CommandItem::getInstance(
    (CommandItem *)&v939,
    (int)this + 148,
    *(_QWORD *)((char *)this + 156),
    *(_QWORD *)((char *)this + 156) >> 32);
  if ( !j_Command::validItemInstance((Command *)&v939, (const ItemInstance *)1, (int)v4, v6) )
    goto LABEL_1763;
  if ( !*((_BYTE *)v3 + 184) )
  {
LABEL_5:
    if ( j_Command::validRange(*((Command **)v3 + 39), 1, 64, (int)v4, v640) != 1 )
      goto LABEL_1763;
    v934 = (char *)&unk_28898CC;
    if ( *((_DWORD *)v3 + 5) )
    {
      v8 = j_equipmentSlotToString(*((_DWORD *)v3 + 35));
      v9 = (char *)v8;
      v10 = (_BYTE *)j_strlen_0(v8);
      sub_21E8190((void **)&v934, v9, v10);
      j_CommandSelector<Entity>::results((int)&v899, (ReplaceItemCommand *)((char *)v3 + 24), v5);
      if ( j_Command::checkHasTargets<Entity>((__int64 **)&v899, v4) )
      {
        v641 = (Level *)(*(int (__fastcall **)(const CommandOrigin *))(*(_DWORD *)v5 + 24))(v5);
        v896 = 0;
        v897 = 0;
        v898 = 0;
        v11 = j_CommandSelectorResults<Entity>::size((_QWORD **)&v899);
        if ( v11 >= 0x40000000 )
          sub_21E5A04("vector::reserve");
        if ( (v898 - (_BYTE *)v896) >> 2 < v11 )
        {
          if ( v11 )
            v12 = j_operator new(4 * v11);
          else
            v12 = 0;
          if ( v897 != v896 )
            j___aeabi_memmove4_0((int)v12, (int)v896);
          v40 = (v897 - (_BYTE *)v896) >> 2;
          if ( v896 )
            j_operator delete(v896);
          v896 = v12;
          v897 = (char *)v12 + 4 * v40;
          v898 = (char *)v12 + 4 * v11;
        }
        j_CommandSelectorResults<Entity>::begin((int)&v894, &v899);
        j_CommandSelectorResults<Entity>::end((int)&v892, (int)&v899);
        v41 = (ItemInstance *)&v826;
        while ( j_SelectorIterator<Entity>::operator!=((int)&v894, (int)&v892) )
          v42 = j_SelectorIterator<Entity>::operator*((int)&v894);
          v43 = v42;
          switch ( *((_DWORD *)v3 + 35) )
          {
            case 2:
            case 3:
            case 4:
            case 5:
              if ( j_EntityClassTree::isInstanceOf(v42, 256) == 1 )
              {
                if ( (*(int (__fastcall **)(int, _DWORD, Item **))(*(_DWORD *)v43 + 1092))(
                       v43,
                       *((_DWORD *)v3 + 35),
                       &v939) )
                {
                  j_MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v882, v43);
                  v44 = j_Level::getPacketSender(v641);
                  (*(void (**)(void))(*(_DWORD *)v44 + 8))();
                  j_MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v882);
                  goto LABEL_814;
                }
                sub_21E94B4((void **)&v891, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v884, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v885, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v886, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v883, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v887, &v883);
                v888 = 0;
                v889 = 0;
                v890 = 0;
                v888 = j_operator new(0x20u);
                v890 = (char *)v888 + 32;
                v889 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v884,
                                 (int)&v888,
                                 (int)v888);
                j_CommandOutput::error(v4, &v891, (unsigned __int64 *)&v888);
                v98 = v888;
                v99 = v889;
                if ( v888 != v889 )
                  do
                  {
                    v110 = (int *)(*(_DWORD *)v98 - 12);
                    if ( v110 != &dword_28898C0 )
                    {
                      v108 = (unsigned int *)(*(_DWORD *)v98 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v109 = __ldrex(v108);
                        while ( __strex(v109 - 1, v108) );
                      }
                      else
                        v109 = (*v108)--;
                      if ( v109 <= 0 )
                        j_j_j_j__ZdlPv_9(v110);
                    }
                    v98 = (char *)v98 + 8;
                  }
                  while ( v98 != v99 );
                  v98 = v888;
                if ( v98 )
                  j_operator delete(v98);
                v111 = (void *)(v887 - 12);
                if ( (int *)(v887 - 12) != &dword_28898C0 )
                  v324 = (unsigned int *)(v887 - 4);
                  if ( &pthread_create )
                    __dmb();
                    do
                      v325 = __ldrex(v324);
                    while ( __strex(v325 - 1, v324) );
                  else
                    v325 = (*v324)--;
                  if ( v325 <= 0 )
                    j_j_j_j__ZdlPv_9(v111);
                v112 = (void *)(v886 - 12);
                if ( (int *)(v886 - 12) != &dword_28898C0 )
                  v326 = (unsigned int *)(v886 - 4);
                      v327 = __ldrex(v326);
                    while ( __strex(v327 - 1, v326) );
                    v327 = (*v326)--;
                  if ( v327 <= 0 )
                    j_j_j_j__ZdlPv_9(v112);
                v113 = (void *)(v885 - 12);
                if ( (int *)(v885 - 12) != &dword_28898C0 )
                  v328 = (unsigned int *)(v885 - 4);
                      v329 = __ldrex(v328);
                    while ( __strex(v329 - 1, v328) );
                    v329 = (*v328)--;
                  if ( v329 <= 0 )
                    j_j_j_j__ZdlPv_9(v113);
                v114 = (void *)(v884 - 12);
                if ( (int *)(v884 - 12) != &dword_28898C0 )
                  v330 = (unsigned int *)(v884 - 4);
                      v331 = __ldrex(v330);
                    while ( __strex(v331 - 1, v330) );
                    v331 = (*v330)--;
                  if ( v331 <= 0 )
                    j_j_j_j__ZdlPv_9(v114);
                v115 = (void *)(v883 - 12);
                if ( (int *)(v883 - 12) != &dword_28898C0 )
                  v332 = (unsigned int *)(v883 - 4);
                      v333 = __ldrex(v332);
                    while ( __strex(v333 - 1, v332) );
                    v333 = (*v332)--;
                  if ( v333 <= 0 )
                    j_j_j_j__ZdlPv_9(v115);
                v55 = (void *)(v891 - 12);
                if ( (int *)(v891 - 12) != &dword_28898C0 )
                  v56 = (unsigned int *)(v891 - 4);
                  if ( !&pthread_create )
                    goto LABEL_809;
                  __dmb();
                    v57 = __ldrex(v56);
                  while ( __strex(v57 - 1, v56) );
                  goto LABEL_810;
              }
              else
                sub_21E94B4((void **)&v881, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v874, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v875, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v876, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v873, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v877, &v873);
                v878 = 0;
                v879 = 0;
                v880 = 0;
                v878 = j_operator new(0x20u);
                v880 = (char *)v878 + 32;
                v879 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v874,
                                 (int)&v878,
                                 (int)v878);
                j_CommandOutput::error(v4, &v881, (unsigned __int64 *)&v878);
                v45 = v878;
                v46 = v879;
                if ( v878 != v879 )
                    v49 = (int *)(*(_DWORD *)v45 - 12);
                    if ( v49 != &dword_28898C0 )
                      v47 = (unsigned int *)(*(_DWORD *)v45 - 4);
                          v48 = __ldrex(v47);
                        while ( __strex(v48 - 1, v47) );
                        v48 = (*v47)--;
                      if ( v48 <= 0 )
                        j_j_j_j__ZdlPv_9(v49);
                    v45 = (char *)v45 + 8;
                  while ( v45 != v46 );
                  v45 = v878;
                if ( v45 )
                  j_operator delete(v45);
                v50 = (void *)(v877 - 12);
                if ( (int *)(v877 - 12) != &dword_28898C0 )
                  v273 = (unsigned int *)(v877 - 4);
                      v274 = __ldrex(v273);
                    while ( __strex(v274 - 1, v273) );
                    v274 = (*v273)--;
                  if ( v274 <= 0 )
                    j_j_j_j__ZdlPv_9(v50);
                v51 = (void *)(v876 - 12);
                if ( (int *)(v876 - 12) != &dword_28898C0 )
                  v275 = (unsigned int *)(v876 - 4);
                      v276 = __ldrex(v275);
                    while ( __strex(v276 - 1, v275) );
                    v276 = (*v275)--;
                  if ( v276 <= 0 )
                    j_j_j_j__ZdlPv_9(v51);
                v52 = (void *)(v875 - 12);
                if ( (int *)(v875 - 12) != &dword_28898C0 )
                  v277 = (unsigned int *)(v875 - 4);
                      v278 = __ldrex(v277);
                    while ( __strex(v278 - 1, v277) );
                    v278 = (*v277)--;
                  if ( v278 <= 0 )
                    j_j_j_j__ZdlPv_9(v52);
                v53 = (void *)(v874 - 12);
                if ( (int *)(v874 - 12) != &dword_28898C0 )
                  v279 = (unsigned int *)(v874 - 4);
                      v280 = __ldrex(v279);
                    while ( __strex(v280 - 1, v279) );
                    v280 = (*v279)--;
                  if ( v280 <= 0 )
                    j_j_j_j__ZdlPv_9(v53);
                v54 = (void *)(v873 - 12);
                if ( (int *)(v873 - 12) != &dword_28898C0 )
                  v281 = (unsigned int *)(v873 - 4);
                      v282 = __ldrex(v281);
                    while ( __strex(v282 - 1, v281) );
                    v282 = (*v281)--;
                  if ( v282 <= 0 )
                    j_j_j_j__ZdlPv_9(v54);
                v55 = (void *)(v881 - 12);
                if ( (int *)(v881 - 12) != &dword_28898C0 )
                  v56 = (unsigned int *)(v881 - 4);
              goto LABEL_830;
            case 6:
              if ( j_EntityClassTree::isInstanceOf(v42, 319) == 1 )
                v58 = (PlayerInventoryProxy *)j_Player::getSupplies((Player *)v43);
                v59 = v58;
                v60 = *((_DWORD *)v3 + 36);
                if ( v60 > 8 )
                  sub_21E94B4((void **)&v798, "commands.replaceitem.badSlotNumber");
                  j_CommandOutputParameter::CommandOutputParameter(
                    (CommandOutputParameter *)&v792,
                    *((_DWORD *)v3 + 36));
                  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v793, 0);
                  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v794, 9);
                  v795 = 0;
                  v796 = 0;
                  v797 = 0;
                  v795 = j_operator new(0x18u);
                  v797 = (char *)v795 + 24;
                  v796 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v792,
                                   (int)&v795,
                                   (int)v795);
                  j_CommandOutput::error(v4, &v798, (unsigned __int64 *)&v795);
                  v179 = v795;
                  v180 = v796;
                  if ( v795 != v796 )
                      v192 = (int *)(*(_DWORD *)v179 - 12);
                      if ( v192 != &dword_28898C0 )
                        v190 = (unsigned int *)(*(_DWORD *)v179 - 4);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v191 = __ldrex(v190);
                          while ( __strex(v191 - 1, v190) );
                        }
                        else
                          v191 = (*v190)--;
                        if ( v191 <= 0 )
                          j_j_j_j__ZdlPv_9(v192);
                      v179 = (char *)v179 + 8;
                    while ( v179 != v180 );
                    v179 = v795;
                  if ( v179 )
                    j_operator delete(v179);
                  v193 = (void *)(v794 - 12);
                  if ( (int *)(v794 - 12) != &dword_28898C0 )
                    v407 = (unsigned int *)(v794 - 4);
                    if ( &pthread_create )
                      __dmb();
                      do
                        v408 = __ldrex(v407);
                      while ( __strex(v408 - 1, v407) );
                    else
                      v408 = (*v407)--;
                    if ( v408 <= 0 )
                      j_j_j_j__ZdlPv_9(v193);
                  v194 = (void *)(v793 - 12);
                  if ( (int *)(v793 - 12) != &dword_28898C0 )
                    v409 = (unsigned int *)(v793 - 4);
                        v410 = __ldrex(v409);
                      while ( __strex(v410 - 1, v409) );
                      v410 = (*v409)--;
                    if ( v410 <= 0 )
                      j_j_j_j__ZdlPv_9(v194);
                  v195 = (void *)(v792 - 12);
                  if ( (int *)(v792 - 12) != &dword_28898C0 )
                    v411 = (unsigned int *)(v792 - 4);
                        v412 = __ldrex(v411);
                      while ( __strex(v412 - 1, v411) );
                      v412 = (*v411)--;
                    if ( v412 <= 0 )
                      j_j_j_j__ZdlPv_9(v195);
                  v55 = (void *)(v798 - 12);
                  if ( (int *)(v798 - 12) != &dword_28898C0 )
                    v56 = (unsigned int *)(v798 - 4);
                    if ( !&pthread_create )
                      goto LABEL_809;
                      v57 = __ldrex(v56);
                    while ( __strex(v57 - 1, v56) );
                    goto LABEL_810;
                else
                  v61 = j_PlayerInventoryProxy::getLinkedSlot(v58, v60);
                  if ( v61 != -1 )
                    j_PlayerInventoryProxy::setItem((int)v59, v61, (int)&v939, 0);
LABEL_653:
                    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v43 + 1064))(v43, 0);
                    goto LABEL_814;
                  v283 = *((_DWORD *)v3 + 36);
                  v284 = v283 + j_PlayerInventoryProxy::getLinkedSlotsCount(v59);
                  v285 = (ItemInstance *)j_PlayerInventoryProxy::getItem((int)v59, v284, 0);
                  if ( j_ItemInstance::isNull(v285) )
                    j_PlayerInventoryProxy::setItemWithoutSlotLinking(
                      __PAIR__(v284, (unsigned int)v59),
                      (const ItemInstance *)&v939,
                      0);
                    j_PlayerInventoryProxy::linkSlot(v59, *((_DWORD *)v3 + 36), v284);
                    goto LABEL_653;
                  sub_21E94B4((void **)&v802, "commands.replaceitem.badSlotLinks");
                  v799 = 0;
                  v800 = 0;
                  v801 = 0;
                  j_CommandOutput::error(v4, &v802, (unsigned __int64 *)&v799);
                  v334 = v799;
                  v335 = v800;
                  if ( v799 != v800 )
                      v338 = (int *)(*(_DWORD *)v334 - 12);
                      if ( v338 != &dword_28898C0 )
                        v336 = (unsigned int *)(*(_DWORD *)v334 - 4);
                            v337 = __ldrex(v336);
                          while ( __strex(v337 - 1, v336) );
                          v337 = (*v336)--;
                        if ( v337 <= 0 )
                          j_j_j_j__ZdlPv_9(v338);
                      v334 = (char *)v334 + 8;
                    while ( v334 != v335 );
                    v334 = v799;
                  if ( v334 )
                    j_operator delete(v334);
                  v55 = (void *)(v802 - 12);
                  if ( (int *)(v802 - 12) != &dword_28898C0 )
                    v56 = (unsigned int *)(v802 - 4);
                        v57 = __ldrex(v56);
                      while ( __strex(v57 - 1, v56) );
LABEL_809:
                      v57 = (*v56)--;
                sub_21E94B4((void **)&v791, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v784, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v785, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v786, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v783, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v787, &v783);
                v788 = 0;
                v789 = 0;
                v790 = 0;
                v788 = j_operator new(0x20u);
                v790 = (char *)v788 + 32;
                v789 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v784,
                                 (int)&v788,
                                 (int)v788);
                j_CommandOutput::error(v4, &v791, (unsigned __int64 *)&v788);
                v116 = v788;
                v117 = v789;
                if ( v788 != v789 )
                    v133 = (int *)(*(_DWORD *)v116 - 12);
                    if ( v133 != &dword_28898C0 )
                      v131 = (unsigned int *)(*(_DWORD *)v116 - 4);
                          v132 = __ldrex(v131);
                        while ( __strex(v132 - 1, v131) );
                        v132 = (*v131)--;
                      if ( v132 <= 0 )
                        j_j_j_j__ZdlPv_9(v133);
                    v116 = (char *)v116 + 8;
                  while ( v116 != v117 );
                  v116 = v788;
                if ( v116 )
                  j_operator delete(v116);
                v134 = (void *)(v787 - 12);
                if ( (int *)(v787 - 12) != &dword_28898C0 )
                  v347 = (unsigned int *)(v787 - 4);
                      v348 = __ldrex(v347);
                    while ( __strex(v348 - 1, v347) );
                    v348 = (*v347)--;
                  if ( v348 <= 0 )
                    j_j_j_j__ZdlPv_9(v134);
                v135 = (void *)(v786 - 12);
                if ( (int *)(v786 - 12) != &dword_28898C0 )
                  v349 = (unsigned int *)(v786 - 4);
                      v350 = __ldrex(v349);
                    while ( __strex(v350 - 1, v349) );
                    v350 = (*v349)--;
                  if ( v350 <= 0 )
                    j_j_j_j__ZdlPv_9(v135);
                v136 = (void *)(v785 - 12);
                if ( (int *)(v785 - 12) != &dword_28898C0 )
                  v351 = (unsigned int *)(v785 - 4);
                      v352 = __ldrex(v351);
                    while ( __strex(v352 - 1, v351) );
                    v352 = (*v351)--;
                  if ( v352 <= 0 )
                    j_j_j_j__ZdlPv_9(v136);
                v137 = (void *)(v784 - 12);
                if ( (int *)(v784 - 12) != &dword_28898C0 )
                  v353 = (unsigned int *)(v784 - 4);
                      v354 = __ldrex(v353);
                    while ( __strex(v354 - 1, v353) );
                    v354 = (*v353)--;
                  if ( v354 <= 0 )
                    j_j_j_j__ZdlPv_9(v137);
                v138 = (void *)(v783 - 12);
                if ( (int *)(v783 - 12) != &dword_28898C0 )
                  v355 = (unsigned int *)(v783 - 4);
                      v356 = __ldrex(v355);
                    while ( __strex(v356 - 1, v355) );
                    v356 = (*v355)--;
                  if ( v356 <= 0 )
                    j_j_j_j__ZdlPv_9(v138);
                v55 = (void *)(v791 - 12);
                if ( (int *)(v791 - 12) != &dword_28898C0 )
                  v56 = (unsigned int *)(v791 - 4);
LABEL_810:
                  if ( v57 <= 0 )
                    j_j_j_j__ZdlPv_9(v55);
                  goto LABEL_830;
LABEL_830:
              j_SelectorIterator<Entity>::operator++((int)&v894);
              break;
            case 0xB:
              if ( j_EntityClassTree::isInstanceOf(v42, 2118424) || j_EntityClassTree::isInstanceOf(v43, 2118425) == 1 )
                v62 = j_Entity::getContainerComponent((Entity *)v43);
                v63 = (ContainerComponent *)v62;
                if ( !v62 )
                v64 = (*(int (**)(void))(**(_DWORD **)(v62 + 4) + 44))();
                v65 = *((_DWORD *)v3 + 36);
                if ( v65 >= 0 && v65 < v64 - 1 )
                  j_ContainerComponent::setItem(v63, (ItemInstance *)&v939, v65 + 1);
                sub_21E94B4((void **)&v678, "commands.replaceitem.badSlotNumber");
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v672, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v673, 0);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v674, v64);
                v675 = 0;
                v676 = 0;
                v677 = 0;
                v675 = j_operator new(0x18u);
                v677 = (char *)v675 + 24;
                v676 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v672,
                                 (int)&v675,
                                 (int)v675);
                j_CommandOutput::error(v4, &v678, (unsigned __int64 *)&v675);
                v202 = *(_QWORD *)&v675;
                if ( v675 != v676 )
                    v237 = (int *)(*(_DWORD *)v202 - 12);
                    if ( v237 != &dword_28898C0 )
                      v235 = (unsigned int *)(*(_DWORD *)v202 - 4);
                          v236 = __ldrex(v235);
                        while ( __strex(v236 - 1, v235) );
                        v236 = (*v235)--;
                      if ( v236 <= 0 )
                        j_j_j_j__ZdlPv_9(v237);
                    LODWORD(v202) = v202 + 8;
                  while ( (_DWORD)v202 != HIDWORD(v202) );
                  LODWORD(v202) = v675;
                if ( (_DWORD)v202 )
                  j_operator delete((void *)v202);
                v238 = (void *)(v674 - 12);
                if ( (int *)(v674 - 12) != &dword_28898C0 )
                  v459 = (unsigned int *)(v674 - 4);
                      v460 = __ldrex(v459);
                    while ( __strex(v460 - 1, v459) );
                    v460 = (*v459)--;
                  if ( v460 <= 0 )
                    j_j_j_j__ZdlPv_9(v238);
                v239 = (void *)(v673 - 12);
                if ( (int *)(v673 - 12) != &dword_28898C0 )
                  v461 = (unsigned int *)(v673 - 4);
                      v462 = __ldrex(v461);
                    while ( __strex(v462 - 1, v461) );
                    v462 = (*v461)--;
                  if ( v462 <= 0 )
                    j_j_j_j__ZdlPv_9(v239);
                v240 = (void *)(v672 - 12);
                if ( (int *)(v672 - 12) != &dword_28898C0 )
                  v463 = (unsigned int *)(v672 - 4);
                      v464 = __ldrex(v463);
                    while ( __strex(v464 - 1, v463) );
                    v464 = (*v463)--;
                  if ( v464 <= 0 )
                    j_j_j_j__ZdlPv_9(v240);
                v55 = (void *)(v678 - 12);
                if ( (int *)(v678 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v678 - 4);
                if ( !&pthread_create )
                  goto LABEL_809;
                __dmb();
                do
                  v57 = __ldrex(v56);
                while ( __strex(v57 - 1, v56) );
                sub_21E94B4((void **)&v671, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v664, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v665, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v666, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v663, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v667, &v663);
                v668 = 0;
                v669 = 0;
                v670 = 0;
                v668 = j_operator new(0x20u);
                v670 = (char *)v668 + 32;
                v669 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v664,
                                 (int)&v668,
                                 (int)v668);
                j_CommandOutput::error(v4, &v671, (unsigned __int64 *)&v668);
                v181 = *(_QWORD *)&v668;
                if ( v668 != v669 )
                    v205 = (int *)(*(_DWORD *)v181 - 12);
                    if ( v205 != &dword_28898C0 )
                      v203 = (unsigned int *)(*(_DWORD *)v181 - 4);
                          v204 = __ldrex(v203);
                        while ( __strex(v204 - 1, v203) );
                        v204 = (*v203)--;
                      if ( v204 <= 0 )
                        j_j_j_j__ZdlPv_9(v205);
                    LODWORD(v181) = v181 + 8;
                  while ( (_DWORD)v181 != HIDWORD(v181) );
                  LODWORD(v181) = v668;
                if ( (_DWORD)v181 )
                  j_operator delete((void *)v181);
                v206 = (void *)(v667 - 12);
                if ( (int *)(v667 - 12) != &dword_28898C0 )
                  v419 = (unsigned int *)(v667 - 4);
                      v420 = __ldrex(v419);
                    while ( __strex(v420 - 1, v419) );
                    v420 = (*v419)--;
                  if ( v420 <= 0 )
                    j_j_j_j__ZdlPv_9(v206);
                v207 = (void *)(v666 - 12);
                if ( (int *)(v666 - 12) != &dword_28898C0 )
                  v421 = (unsigned int *)(v666 - 4);
                      v422 = __ldrex(v421);
                    while ( __strex(v422 - 1, v421) );
                    v422 = (*v421)--;
                  if ( v422 <= 0 )
                    j_j_j_j__ZdlPv_9(v207);
                v208 = (void *)(v665 - 12);
                if ( (int *)(v665 - 12) != &dword_28898C0 )
                  v423 = (unsigned int *)(v665 - 4);
                      v424 = __ldrex(v423);
                    while ( __strex(v424 - 1, v423) );
                    v424 = (*v423)--;
                  if ( v424 <= 0 )
                    j_j_j_j__ZdlPv_9(v208);
                v209 = (void *)(v664 - 12);
                if ( (int *)(v664 - 12) != &dword_28898C0 )
                  v425 = (unsigned int *)(v664 - 4);
                      v426 = __ldrex(v425);
                    while ( __strex(v426 - 1, v425) );
                    v426 = (*v425)--;
                  if ( v426 <= 0 )
                    j_j_j_j__ZdlPv_9(v209);
                v210 = (void *)(v663 - 12);
                if ( (int *)(v663 - 12) != &dword_28898C0 )
                  v427 = (unsigned int *)(v663 - 4);
                      v428 = __ldrex(v427);
                    while ( __strex(v428 - 1, v427) );
                    v428 = (*v427)--;
                  if ( v428 <= 0 )
                    j_j_j_j__ZdlPv_9(v210);
                v55 = (void *)(v671 - 12);
                if ( (int *)(v671 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v671 - 4);
              goto LABEL_810;
            case 9:
              if ( j_EntityClassTree::isInstanceOf(v42, 2118400) == 1 )
                if ( v939 == (Item *)Item::mSaddle )
                  v241 = j_Entity::getContainerComponent((Entity *)v43);
                  v242 = (ContainerComponent *)v241;
                  if ( v241 )
                    v243 = (*(int (**)(void))(**(_DWORD **)(v241 + 4) + 44))();
                    v244 = *((_DWORD *)v3 + 36);
                    if ( v244 >= 0 && v244 < v243 )
                      j_ContainerComponent::setItem(v242, (ItemInstance *)&v939, 0);
                      goto LABEL_814;
                    sub_21E94B4((void **)&v741, "commands.replaceitem.failed");
                    j_CommandOutputParameter::CommandOutputParameter(&v734, (int *)&v934);
                    j_CommandOutputParameter::CommandOutputParameter(
                      (CommandOutputParameter *)&v735,
                      *((_DWORD *)v3 + 36));
                      (CommandOutputParameter *)&v736,
                      *((_DWORD *)v3 + 39));
                    j_ItemInstance::getName((ItemInstance *)&v733, (int)&v939);
                    j_CommandOutputParameter::CommandOutputParameter(&v737, &v733);
                    v738 = 0;
                    v739 = 0;
                    v740 = 0;
                    v738 = j_operator new(0x20u);
                    v740 = (char *)v738 + 32;
                    v739 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                     (int)&v734,
                                     (int)&v738,
                                     (int)v738);
                    j_CommandOutput::error(v4, &v741, (unsigned __int64 *)&v738);
                    v304 = v738;
                    v305 = v739;
                    if ( v738 != v739 )
                        v308 = (int *)(*(_DWORD *)v304 - 12);
                        if ( v308 != &dword_28898C0 )
                          v306 = (unsigned int *)(*(_DWORD *)v304 - 4);
                          if ( &pthread_create )
                          {
                            __dmb();
                            do
                              v307 = __ldrex(v306);
                            while ( __strex(v307 - 1, v306) );
                          }
                          else
                            v307 = (*v306)--;
                          if ( v307 <= 0 )
                            j_j_j_j__ZdlPv_9(v308);
                        v304 = (char *)v304 + 8;
                      while ( v304 != v305 );
                      v304 = v738;
                    if ( v304 )
                      j_operator delete(v304);
                    v309 = (void *)(v737 - 12);
                    if ( (int *)(v737 - 12) != &dword_28898C0 )
                      v511 = (unsigned int *)(v737 - 4);
                          v512 = __ldrex(v511);
                        while ( __strex(v512 - 1, v511) );
                        v512 = (*v511)--;
                      if ( v512 <= 0 )
                        j_j_j_j__ZdlPv_9(v309);
                    v310 = (void *)(v736 - 12);
                    if ( (int *)(v736 - 12) != &dword_28898C0 )
                      v513 = (unsigned int *)(v736 - 4);
                          v514 = __ldrex(v513);
                        while ( __strex(v514 - 1, v513) );
                        v514 = (*v513)--;
                      if ( v514 <= 0 )
                        j_j_j_j__ZdlPv_9(v310);
                    v311 = (void *)(v735 - 12);
                    if ( (int *)(v735 - 12) != &dword_28898C0 )
                      v515 = (unsigned int *)(v735 - 4);
                          v516 = __ldrex(v515);
                        while ( __strex(v516 - 1, v515) );
                        v516 = (*v515)--;
                      if ( v516 <= 0 )
                        j_j_j_j__ZdlPv_9(v311);
                    v312 = (void *)(v734 - 12);
                    if ( (int *)(v734 - 12) != &dword_28898C0 )
                      v517 = (unsigned int *)(v734 - 4);
                          v518 = __ldrex(v517);
                        while ( __strex(v518 - 1, v517) );
                        v518 = (*v517)--;
                      if ( v518 <= 0 )
                        j_j_j_j__ZdlPv_9(v312);
                    v313 = (void *)(v733 - 12);
                    if ( (int *)(v733 - 12) != &dword_28898C0 )
                      v519 = (unsigned int *)(v733 - 4);
                          v520 = __ldrex(v519);
                        while ( __strex(v520 - 1, v519) );
                        v520 = (*v519)--;
                      if ( v520 <= 0 )
                        j_j_j_j__ZdlPv_9(v313);
                    v55 = (void *)(v741 - 12);
                    if ( (int *)(v741 - 12) == &dword_28898C0 )
                      goto LABEL_830;
                    v56 = (unsigned int *)(v741 - 4);
                    sub_21E94B4((void **)&v732, "commands.replaceitem.failed");
                    j_CommandOutputParameter::CommandOutputParameter(&v725, (int *)&v934);
                      (CommandOutputParameter *)&v726,
                      (CommandOutputParameter *)&v727,
                    j_ItemInstance::getName((ItemInstance *)&v724, (int)&v939);
                    j_CommandOutputParameter::CommandOutputParameter(&v728, &v724);
                    v729 = 0;
                    v730 = 0;
                    v731 = 0;
                    v729 = j_operator new(0x20u);
                    v731 = (char *)v729 + 32;
                    v730 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                     (int)&v725,
                                     (int)&v729,
                                     (int)v729);
                    j_CommandOutput::error(v4, &v732, (unsigned __int64 *)&v729);
                    v287 = *(_QWORD *)&v729;
                    if ( v729 != v730 )
                        v298 = (int *)(*(_DWORD *)v287 - 12);
                        if ( v298 != &dword_28898C0 )
                          v296 = (unsigned int *)(*(_DWORD *)v287 - 4);
                              v297 = __ldrex(v296);
                            while ( __strex(v297 - 1, v296) );
                            v297 = (*v296)--;
                          if ( v297 <= 0 )
                            j_j_j_j__ZdlPv_9(v298);
                        LODWORD(v287) = v287 + 8;
                      while ( (_DWORD)v287 != HIDWORD(v287) );
                      LODWORD(v287) = v729;
                    if ( (_DWORD)v287 )
                      j_operator delete((void *)v287);
                    v299 = (void *)(v728 - 12);
                    if ( (int *)(v728 - 12) != &dword_28898C0 )
                      v501 = (unsigned int *)(v728 - 4);
                          v502 = __ldrex(v501);
                        while ( __strex(v502 - 1, v501) );
                        v502 = (*v501)--;
                      if ( v502 <= 0 )
                        j_j_j_j__ZdlPv_9(v299);
                    v300 = (void *)(v727 - 12);
                    if ( (int *)(v727 - 12) != &dword_28898C0 )
                      v503 = (unsigned int *)(v727 - 4);
                          v504 = __ldrex(v503);
                        while ( __strex(v504 - 1, v503) );
                        v504 = (*v503)--;
                      if ( v504 <= 0 )
                        j_j_j_j__ZdlPv_9(v300);
                    v301 = (void *)(v726 - 12);
                    if ( (int *)(v726 - 12) != &dword_28898C0 )
                      v505 = (unsigned int *)(v726 - 4);
                          v506 = __ldrex(v505);
                        while ( __strex(v506 - 1, v505) );
                        v506 = (*v505)--;
                      if ( v506 <= 0 )
                        j_j_j_j__ZdlPv_9(v301);
                    v302 = (void *)(v725 - 12);
                    if ( (int *)(v725 - 12) != &dword_28898C0 )
                      v507 = (unsigned int *)(v725 - 4);
                          v508 = __ldrex(v507);
                        while ( __strex(v508 - 1, v507) );
                        v508 = (*v507)--;
                      if ( v508 <= 0 )
                        j_j_j_j__ZdlPv_9(v302);
                    v303 = (void *)(v724 - 12);
                    if ( (int *)(v724 - 12) != &dword_28898C0 )
                      v509 = (unsigned int *)(v724 - 4);
                          v510 = __ldrex(v509);
                        while ( __strex(v510 - 1, v509) );
                        v510 = (*v509)--;
                      if ( v510 <= 0 )
                        j_j_j_j__ZdlPv_9(v303);
                    v55 = (void *)(v732 - 12);
                    if ( (int *)(v732 - 12) == &dword_28898C0 )
                    v56 = (unsigned int *)(v732 - 4);
                  sub_21E94B4((void **)&v723, "commands.replaceitem.failed");
                  j_CommandOutputParameter::CommandOutputParameter(&v716, (int *)&v934);
                    (CommandOutputParameter *)&v717,
                    (CommandOutputParameter *)&v718,
                    *((_DWORD *)v3 + 39));
                  j_ItemInstance::getName((ItemInstance *)&v715, (int)&v939);
                  j_CommandOutputParameter::CommandOutputParameter(&v719, &v715);
                  v720 = 0;
                  v721 = 0;
                  v722 = 0;
                  v720 = j_operator new(0x20u);
                  v722 = (char *)v720 + 32;
                  v721 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v716,
                                   (int)&v720,
                                   (int)v720);
                  j_CommandOutput::error(v4, &v723, (unsigned __int64 *)&v720);
                  v66 = *(_QWORD *)&v720;
                  if ( v720 != v721 )
                      v173 = (int *)(*(_DWORD *)v66 - 12);
                      if ( v173 != &dword_28898C0 )
                        v171 = (unsigned int *)(*(_DWORD *)v66 - 4);
                            v172 = __ldrex(v171);
                          while ( __strex(v172 - 1, v171) );
                          v172 = (*v171)--;
                        if ( v172 <= 0 )
                          j_j_j_j__ZdlPv_9(v173);
                      LODWORD(v66) = v66 + 8;
                    while ( (_DWORD)v66 != HIDWORD(v66) );
                    LODWORD(v66) = v720;
                  if ( (_DWORD)v66 )
                    j_operator delete((void *)v66);
                  v174 = (void *)(v719 - 12);
                  if ( (int *)(v719 - 12) != &dword_28898C0 )
                    v397 = (unsigned int *)(v719 - 4);
                        v398 = __ldrex(v397);
                      while ( __strex(v398 - 1, v397) );
                      v398 = (*v397)--;
                    if ( v398 <= 0 )
                      j_j_j_j__ZdlPv_9(v174);
                  v175 = (void *)(v718 - 12);
                  if ( (int *)(v718 - 12) != &dword_28898C0 )
                    v399 = (unsigned int *)(v718 - 4);
                        v400 = __ldrex(v399);
                      while ( __strex(v400 - 1, v399) );
                      v400 = (*v399)--;
                    if ( v400 <= 0 )
                      j_j_j_j__ZdlPv_9(v175);
                  v176 = (void *)(v717 - 12);
                  if ( (int *)(v717 - 12) != &dword_28898C0 )
                    v401 = (unsigned int *)(v717 - 4);
                        v402 = __ldrex(v401);
                      while ( __strex(v402 - 1, v401) );
                      v402 = (*v401)--;
                    if ( v402 <= 0 )
                      j_j_j_j__ZdlPv_9(v176);
                  v177 = (void *)(v716 - 12);
                  if ( (int *)(v716 - 12) != &dword_28898C0 )
                    v403 = (unsigned int *)(v716 - 4);
                        v404 = __ldrex(v403);
                      while ( __strex(v404 - 1, v403) );
                      v404 = (*v403)--;
                    if ( v404 <= 0 )
                      j_j_j_j__ZdlPv_9(v177);
                  v178 = (void *)(v715 - 12);
                  if ( (int *)(v715 - 12) != &dword_28898C0 )
                    v405 = (unsigned int *)(v715 - 4);
                        v406 = __ldrex(v405);
                      while ( __strex(v406 - 1, v405) );
                      v406 = (*v405)--;
                    if ( v406 <= 0 )
                      j_j_j_j__ZdlPv_9(v178);
                  v55 = (void *)(v723 - 12);
                  if ( (int *)(v723 - 12) == &dword_28898C0 )
                    goto LABEL_830;
                  v56 = (unsigned int *)(v723 - 4);
                sub_21E94B4((void **)&v714, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v707, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v708, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v709, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v706, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v710, &v706);
                v711 = 0;
                v712 = 0;
                v713 = 0;
                v711 = j_operator new(0x20u);
                v713 = (char *)v711 + 32;
                v712 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v707,
                                 (int)&v711,
                                 (int)v711);
                j_CommandOutput::error(v4, &v714, (unsigned __int64 *)&v711);
                v118 = *(_QWORD *)&v711;
                if ( v711 != v712 )
                    v141 = (int *)(*(_DWORD *)v118 - 12);
                    if ( v141 != &dword_28898C0 )
                      v139 = (unsigned int *)(*(_DWORD *)v118 - 4);
                          v140 = __ldrex(v139);
                        while ( __strex(v140 - 1, v139) );
                        v140 = (*v139)--;
                      if ( v140 <= 0 )
                        j_j_j_j__ZdlPv_9(v141);
                    LODWORD(v118) = v118 + 8;
                  while ( (_DWORD)v118 != HIDWORD(v118) );
                  LODWORD(v118) = v711;
                if ( (_DWORD)v118 )
                  j_operator delete((void *)v118);
                v142 = (void *)(v710 - 12);
                if ( (int *)(v710 - 12) != &dword_28898C0 )
                  v357 = (unsigned int *)(v710 - 4);
                      v358 = __ldrex(v357);
                    while ( __strex(v358 - 1, v357) );
                    v358 = (*v357)--;
                  if ( v358 <= 0 )
                    j_j_j_j__ZdlPv_9(v142);
                v143 = (void *)(v709 - 12);
                if ( (int *)(v709 - 12) != &dword_28898C0 )
                  v359 = (unsigned int *)(v709 - 4);
                      v360 = __ldrex(v359);
                    while ( __strex(v360 - 1, v359) );
                    v360 = (*v359)--;
                  if ( v360 <= 0 )
                    j_j_j_j__ZdlPv_9(v143);
                v144 = (void *)(v708 - 12);
                if ( (int *)(v708 - 12) != &dword_28898C0 )
                  v361 = (unsigned int *)(v708 - 4);
                      v362 = __ldrex(v361);
                    while ( __strex(v362 - 1, v361) );
                    v362 = (*v361)--;
                  if ( v362 <= 0 )
                    j_j_j_j__ZdlPv_9(v144);
                v145 = (void *)(v707 - 12);
                if ( (int *)(v707 - 12) != &dword_28898C0 )
                  v363 = (unsigned int *)(v707 - 4);
                      v364 = __ldrex(v363);
                    while ( __strex(v364 - 1, v363) );
                    v364 = (*v363)--;
                  if ( v364 <= 0 )
                    j_j_j_j__ZdlPv_9(v145);
                v146 = (void *)(v706 - 12);
                if ( (int *)(v706 - 12) != &dword_28898C0 )
                  v365 = (unsigned int *)(v706 - 4);
                      v366 = __ldrex(v365);
                    while ( __strex(v366 - 1, v365) );
                    v366 = (*v365)--;
                  if ( v366 <= 0 )
                    j_j_j_j__ZdlPv_9(v146);
                v55 = (void *)(v714 - 12);
                if ( (int *)(v714 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v714 - 4);
            case 0:
                v67 = (PlayerInventoryProxy *)j_Player::getSupplies((Player *)v43);
                j_PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v871, (int)v67);
                i = j_PlayerInventoryProxy::getLinkedSlot(v67, v872);
                if ( i == -1 )
                  for ( i = 9; ; ++i )
                    if ( i >= j_PlayerInventoryProxy::getContainerSize((int)v67, 0) )
                      i = -1;
                      goto LABEL_813;
                    v97 = (ItemInstance *)j_PlayerInventoryProxy::getItem((int)v67, i, 0);
                    if ( j_ItemInstance::isNull(v97) == 1 )
                      break;
                  j_PlayerInventoryProxy::linkSlot(v67, v872, i);
LABEL_813:
                j_PlayerInventoryProxy::setItem((int)v67, i, (int)&v939, 0);
                (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v43 + 1064))(v43, 1);
                goto LABEL_814;
              if ( j_EntityClassTree::isInstanceOf(v43, 256) == 1 )
                (*(void (__fastcall **)(int, Item **))(*(_DWORD *)v43 + 912))(v43, &v939);
                j_Entity::getRuntimeID((Entity *)&v857, v43);
                v859 = 2;
                v860 = 1;
                v861 = 0;
                v858 = &off_26DA648;
                v862 = v857;
                j_ItemInstance::ItemInstance((ItemInstance *)&v863, (int)&v939);
                v870 = 0;
                v867 = 0;
                v868 = 0;
                v869 = 0;
                v119 = j_Level::getPacketSender(v641);
                (*(void (**)(void))(*(_DWORD *)v119 + 8))();
                if ( v866 )
                  j_operator delete(v866);
                if ( v865 )
                  j_operator delete(v865);
                v120 = v864;
LABEL_387:
                if ( v120 )
                  (*(void (**)(void))(*(_DWORD *)v120 + 4))();
LABEL_814:
                v339 = v897;
                if ( v897 == v898 )
                  v340 = v896;
                  v341 = 0;
                  v342 = (v897 - (_BYTE *)v896) >> 2;
                  if ( !v342 )
                    v342 = 1;
                  v343 = v342 + ((v897 - (_BYTE *)v896) >> 2);
                  v344 = v342 + ((v897 - (_BYTE *)v896) >> 2);
                  if ( 0 != v343 >> 30 )
                    v344 = 0x3FFFFFFF;
                  if ( v343 < v342 )
                  if ( v344 )
                    if ( v344 >= 0x40000000 )
                      sub_21E57F4();
                    v341 = (char *)j_operator new(4 * v344);
                    v340 = v896;
                    v339 = v897;
                  *(_DWORD *)&v341[v339 - v340] = v43;
                  v345 = (int)&v341[v339 - v340];
                  if ( (v339 - v340) >> 2 )
                    j___aeabi_memmove4_0((int)v341, (int)v340);
                  v346 = (char *)(v345 + 4);
                  if ( v340 )
                    j_operator delete(v340);
                  v896 = v341;
                  v897 = v346;
                  v898 = &v341[4 * v344];
                  *(_DWORD *)v897 = v43;
                  v897 += 4;
                goto LABEL_830;
              sub_21E94B4((void **)&v856, "commands.replaceitem.failed");
              j_CommandOutputParameter::CommandOutputParameter(&v849, (int *)&v934);
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v850, *((_DWORD *)v3 + 36));
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v851, *((_DWORD *)v3 + 39));
              j_ItemInstance::getName((ItemInstance *)&v848, (int)&v939);
              j_CommandOutputParameter::CommandOutputParameter(&v852, &v848);
              v853 = 0;
              v854 = 0;
              v855 = 0;
              v853 = j_operator new(0x20u);
              v855 = (char *)v853 + 32;
              v854 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                               (int)&v849,
                               (int)&v853,
                               (int)v853);
              j_CommandOutput::error(v4, &v856, (unsigned __int64 *)&v853);
              v185 = v853;
              v186 = v854;
              if ( v853 != v854 )
                  v213 = (int *)(*(_DWORD *)v185 - 12);
                  if ( v213 != &dword_28898C0 )
                    v211 = (unsigned int *)(*(_DWORD *)v185 - 4);
                        v212 = __ldrex(v211);
                      while ( __strex(v212 - 1, v211) );
                      v212 = (*v211)--;
                    if ( v212 <= 0 )
                      j_j_j_j__ZdlPv_9(v213);
                  v185 = (char *)v185 + 8;
                while ( v185 != v186 );
                v185 = v853;
              if ( v185 )
                j_operator delete(v185);
              v214 = (void *)(v852 - 12);
              if ( (int *)(v852 - 12) != &dword_28898C0 )
                v429 = (unsigned int *)(v852 - 4);
                if ( &pthread_create )
                    v430 = __ldrex(v429);
                  while ( __strex(v430 - 1, v429) );
                  v430 = (*v429)--;
                if ( v430 <= 0 )
                  j_j_j_j__ZdlPv_9(v214);
              v215 = (void *)(v851 - 12);
              if ( (int *)(v851 - 12) != &dword_28898C0 )
                v431 = (unsigned int *)(v851 - 4);
                    v432 = __ldrex(v431);
                  while ( __strex(v432 - 1, v431) );
                  v432 = (*v431)--;
                if ( v432 <= 0 )
                  j_j_j_j__ZdlPv_9(v215);
              v216 = (void *)(v850 - 12);
              if ( (int *)(v850 - 12) != &dword_28898C0 )
                v433 = (unsigned int *)(v850 - 4);
                    v434 = __ldrex(v433);
                  while ( __strex(v434 - 1, v433) );
                  v434 = (*v433)--;
                if ( v434 <= 0 )
                  j_j_j_j__ZdlPv_9(v216);
              v217 = (void *)(v849 - 12);
              if ( (int *)(v849 - 12) != &dword_28898C0 )
                v435 = (unsigned int *)(v849 - 4);
                    v436 = __ldrex(v435);
                  while ( __strex(v436 - 1, v435) );
                  v436 = (*v435)--;
                if ( v436 <= 0 )
                  j_j_j_j__ZdlPv_9(v217);
              v218 = (void *)(v848 - 12);
              if ( (int *)(v848 - 12) != &dword_28898C0 )
                v437 = (unsigned int *)(v848 - 4);
                    v438 = __ldrex(v437);
                  while ( __strex(v438 - 1, v437) );
                  v438 = (*v437)--;
                if ( v438 <= 0 )
                  j_j_j_j__ZdlPv_9(v218);
              v55 = (void *)(v856 - 12);
              if ( (int *)(v856 - 12) == &dword_28898C0 )
              v56 = (unsigned int *)(v856 - 4);
              if ( !&pthread_create )
                goto LABEL_809;
              __dmb();
              do
                v57 = __ldrex(v56);
              while ( __strex(v57 - 1, v56) );
            case 1:
              if ( !j_Item::allowOffhand(v939) )
                sub_21E94B4((void **)&v847, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v840, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v841, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v842, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v839, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v843, &v839);
                v844 = 0;
                v845 = 0;
                v846 = 0;
                v844 = j_operator new(0x20u);
                v846 = (char *)v844 + 32;
                v845 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v840,
                                 (int)&v844,
                                 (int)v844);
                j_CommandOutput::error(v4, &v847, (unsigned __int64 *)&v844);
                v121 = v844;
                v122 = v845;
                if ( v844 != v845 )
                    v149 = (int *)(*(_DWORD *)v121 - 12);
                    if ( v149 != &dword_28898C0 )
                      v147 = (unsigned int *)(*(_DWORD *)v121 - 4);
                          v148 = __ldrex(v147);
                        while ( __strex(v148 - 1, v147) );
                        v148 = (*v147)--;
                      if ( v148 <= 0 )
                        j_j_j_j__ZdlPv_9(v149);
                    v121 = (char *)v121 + 8;
                  while ( v121 != v122 );
                  v121 = v844;
                if ( v121 )
                  j_operator delete(v121);
                v150 = (void *)(v843 - 12);
                if ( (int *)(v843 - 12) != &dword_28898C0 )
                  v367 = (unsigned int *)(v843 - 4);
                      v368 = __ldrex(v367);
                    while ( __strex(v368 - 1, v367) );
                    v368 = (*v367)--;
                  if ( v368 <= 0 )
                    j_j_j_j__ZdlPv_9(v150);
                v151 = (void *)(v842 - 12);
                if ( (int *)(v842 - 12) != &dword_28898C0 )
                  v369 = (unsigned int *)(v842 - 4);
                      v370 = __ldrex(v369);
                    while ( __strex(v370 - 1, v369) );
                    v370 = (*v369)--;
                  if ( v370 <= 0 )
                    j_j_j_j__ZdlPv_9(v151);
                v152 = (void *)(v841 - 12);
                if ( (int *)(v841 - 12) != &dword_28898C0 )
                  v371 = (unsigned int *)(v841 - 4);
                      v372 = __ldrex(v371);
                    while ( __strex(v372 - 1, v371) );
                    v372 = (*v371)--;
                  if ( v372 <= 0 )
                    j_j_j_j__ZdlPv_9(v152);
                v153 = (void *)(v840 - 12);
                if ( (int *)(v840 - 12) != &dword_28898C0 )
                  v373 = (unsigned int *)(v840 - 4);
                      v374 = __ldrex(v373);
                    while ( __strex(v374 - 1, v373) );
                    v374 = (*v373)--;
                  if ( v374 <= 0 )
                    j_j_j_j__ZdlPv_9(v153);
                v154 = (void *)(v839 - 12);
                if ( (int *)(v839 - 12) != &dword_28898C0 )
                  v375 = (unsigned int *)(v839 - 4);
                      v376 = __ldrex(v375);
                    while ( __strex(v376 - 1, v375) );
                    v376 = (*v375)--;
                  if ( v376 <= 0 )
                    j_j_j_j__ZdlPv_9(v154);
                v55 = (void *)(v847 - 12);
                if ( (int *)(v847 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v847 - 4);
                goto LABEL_810;
              if ( j_EntityClassTree::isInstanceOf(v43, 319) == 1 )
                (*(void (__fastcall **)(int, Item **))(*(_DWORD *)v43 + 1100))(v43, &v939);
                v69 = v41;
                j_ItemInstance::ItemInstance(v41, (int)&v939);
                v70 = j_operator new(0x48u);
                v71 = v70;
                v72 = j_std::__uninitialized_copy<false>::__uninit_copy<ItemInstance const*,ItemInstance*>(
                        (int)v41,
                        (int)&v830,
                        (int)v70);
                v73 = v72;
                v832 = 2;
                v74 = v72 - (_DWORD)v71;
                v75 = 954437177 * (v74 >> 3);
                v833 = 1;
                v76 = 0;
                v834 = 0;
                v831 = &off_26E974C;
                v835 = 119;
                v836 = 0;
                j = 0;
                v838 = 0;
                if ( v74 )
                  if ( v75 >= 0x38E38E4 )
                    sub_21E57F4();
                  v76 = j_operator new(v74);
                v836 = v76;
                j = v76;
                v838 = (char *)v76 + 72 * v75;
                v77 = v71;
                for ( j = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<ItemInstance const*,std::vector<ItemInstance,std::allocator<ItemInstance>>>,ItemInstance*>(
                                    (int)v71,
                                    v73,
                                    (int)v76); (void *)v73 != v77; v77 = (char *)v77 + 72 )
                  v78 = (void *)*((_DWORD *)v77 + 13);
                  if ( v78 )
                    j_operator delete(v78);
                  v79 = (void *)*((_DWORD *)v77 + 9);
                  if ( v79 )
                    j_operator delete(v79);
                  v80 = *((_DWORD *)v77 + 2);
                  if ( v80 )
                    (*(void (**)(void))(*(_DWORD *)v80 + 4))();
                  *((_DWORD *)v77 + 2) = 0;
                if ( v71 )
                  j_operator delete(v71);
                if ( v829 )
                  j_operator delete(v829);
                if ( v828 )
                  j_operator delete(v828);
                if ( v827 )
                  (*(void (**)(void))(*(_DWORD *)v827 + 4))();
                v827 = 0;
                v81 = j_Level::getPacketSender(v641);
                (*(void (**)(void))(*(_DWORD *)v81 + 8))();
                v82 = v836;
                v83 = j;
                if ( v836 != j )
                    v84 = (void *)*((_DWORD *)v82 + 13);
                    if ( v84 )
                      j_operator delete(v84);
                    v85 = (void *)*((_DWORD *)v82 + 9);
                    if ( v85 )
                      j_operator delete(v85);
                    v86 = *((_DWORD *)v82 + 2);
                    if ( v86 )
                      (*(void (**)(void))(*(_DWORD *)v86 + 4))();
                    *((_DWORD *)v82 + 2) = 0;
                    v82 = (char *)v82 + 72;
                  while ( v83 != v82 );
                  v82 = v836;
                v41 = v69;
                if ( v82 )
                  j_operator delete(v82);
                j_Entity::getRuntimeID((Entity *)&v812, v43);
                v814 = 2;
                v815 = 1;
                v816 = 0;
                v813 = &off_26DA648;
                v817 = v812;
                j_ItemInstance::ItemInstance((ItemInstance *)&v818, (int)&v939);
                v822 = 1;
                v823 = 0;
                v824 = 0x10000;
                v825 = 0;
                v182 = j_Level::getPacketSender(v641);
                (*(void (**)(void))(*(_DWORD *)v182 + 8))();
                if ( v821 )
                  j_operator delete(v821);
                if ( v820 )
                  j_operator delete(v820);
                v120 = v819;
                goto LABEL_387;
              sub_21E94B4((void **)&v811, "commands.replaceitem.failed");
              j_CommandOutputParameter::CommandOutputParameter(&v804, (int *)&v934);
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v805, *((_DWORD *)v3 + 36));
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v806, *((_DWORD *)v3 + 39));
              j_ItemInstance::getName((ItemInstance *)&v803, (int)&v939);
              j_CommandOutputParameter::CommandOutputParameter(&v807, &v803);
              v808 = 0;
              v809 = 0;
              v810 = 0;
              v808 = j_operator new(0x20u);
              v810 = (char *)v808 + 32;
              v809 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                               (int)&v804,
                               (int)&v808,
                               (int)v808);
              j_CommandOutput::error(v4, &v811, (unsigned __int64 *)&v808);
              v263 = v808;
              v264 = v809;
              if ( v808 != v809 )
                  v267 = (int *)(*(_DWORD *)v263 - 12);
                  if ( v267 != &dword_28898C0 )
                    v265 = (unsigned int *)(*(_DWORD *)v263 - 4);
                        v266 = __ldrex(v265);
                      while ( __strex(v266 - 1, v265) );
                      v266 = (*v265)--;
                    if ( v266 <= 0 )
                      j_j_j_j__ZdlPv_9(v267);
                  v263 = (char *)v263 + 8;
                while ( v263 != v264 );
                v263 = v808;
              if ( v263 )
                j_operator delete(v263);
              v268 = (void *)(v807 - 12);
              if ( (int *)(v807 - 12) != &dword_28898C0 )
                v481 = (unsigned int *)(v807 - 4);
                    v482 = __ldrex(v481);
                  while ( __strex(v482 - 1, v481) );
                  v482 = (*v481)--;
                if ( v482 <= 0 )
                  j_j_j_j__ZdlPv_9(v268);
              v269 = (void *)(v806 - 12);
              if ( (int *)(v806 - 12) != &dword_28898C0 )
                v483 = (unsigned int *)(v806 - 4);
                    v484 = __ldrex(v483);
                  while ( __strex(v484 - 1, v483) );
                  v484 = (*v483)--;
                if ( v484 <= 0 )
                  j_j_j_j__ZdlPv_9(v269);
              v270 = (void *)(v805 - 12);
              if ( (int *)(v805 - 12) != &dword_28898C0 )
                v485 = (unsigned int *)(v805 - 4);
                    v486 = __ldrex(v485);
                  while ( __strex(v486 - 1, v485) );
                  v486 = (*v485)--;
                if ( v486 <= 0 )
                  j_j_j_j__ZdlPv_9(v270);
              v271 = (void *)(v804 - 12);
              if ( (int *)(v804 - 12) != &dword_28898C0 )
                v487 = (unsigned int *)(v804 - 4);
                    v488 = __ldrex(v487);
                  while ( __strex(v488 - 1, v487) );
                  v488 = (*v487)--;
                if ( v488 <= 0 )
                  j_j_j_j__ZdlPv_9(v271);
              v272 = (void *)(v803 - 12);
              if ( (int *)(v803 - 12) != &dword_28898C0 )
                v489 = (unsigned int *)(v803 - 4);
                    v490 = __ldrex(v489);
                  while ( __strex(v490 - 1, v489) );
                  v490 = (*v489)--;
                if ( v490 <= 0 )
                  j_j_j_j__ZdlPv_9(v272);
              v55 = (void *)(v811 - 12);
              if ( (int *)(v811 - 12) != &dword_28898C0 )
                v56 = (unsigned int *)(v811 - 4);
            case 7:
                v87 = j_Player::getSupplies((Player *)v43);
                v88 = *((_DWORD *)v3 + 36);
                if ( v88 <= 0x1A )
                  j_PlayerInventoryProxy::setItem(v87, v88 + 18, (int)&v939, 0);
                  (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v43 + 1064))(v43, 1);
                sub_21E94B4((void **)&v782, "commands.replaceitem.badSlotNumber");
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v776, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v777, 0);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v778, 27);
                v779 = 0;
                v780 = 0;
                v781 = 0;
                v779 = j_operator new(0x18u);
                v781 = (char *)v779 + 24;
                v780 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v776,
                                 (int)&v779,
                                 (int)v779);
                j_CommandOutput::error(v4, &v782, (unsigned __int64 *)&v779);
                v183 = v779;
                v184 = v780;
                if ( v779 != v780 )
                    v198 = (int *)(*(_DWORD *)v183 - 12);
                    if ( v198 != &dword_28898C0 )
                      v196 = (unsigned int *)(*(_DWORD *)v183 - 4);
                          v197 = __ldrex(v196);
                        while ( __strex(v197 - 1, v196) );
                        v197 = (*v196)--;
                      if ( v197 <= 0 )
                        j_j_j_j__ZdlPv_9(v198);
                    v183 = (char *)v183 + 8;
                  while ( v183 != v184 );
                  v183 = v779;
                if ( v183 )
                  j_operator delete(v183);
                v199 = (void *)(v778 - 12);
                if ( (int *)(v778 - 12) != &dword_28898C0 )
                  v413 = (unsigned int *)(v778 - 4);
                      v414 = __ldrex(v413);
                    while ( __strex(v414 - 1, v413) );
                    v414 = (*v413)--;
                  if ( v414 <= 0 )
                    j_j_j_j__ZdlPv_9(v199);
                v200 = (void *)(v777 - 12);
                if ( (int *)(v777 - 12) != &dword_28898C0 )
                  v415 = (unsigned int *)(v777 - 4);
                      v416 = __ldrex(v415);
                    while ( __strex(v416 - 1, v415) );
                    v416 = (*v415)--;
                  if ( v416 <= 0 )
                    j_j_j_j__ZdlPv_9(v200);
                v201 = (void *)(v776 - 12);
                if ( (int *)(v776 - 12) != &dword_28898C0 )
                  v417 = (unsigned int *)(v776 - 4);
                      v418 = __ldrex(v417);
                    while ( __strex(v418 - 1, v417) );
                    v418 = (*v417)--;
                  if ( v418 <= 0 )
                    j_j_j_j__ZdlPv_9(v201);
                v55 = (void *)(v782 - 12);
                if ( (int *)(v782 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v782 - 4);
                v123 = j_Entity::getContainerComponent((Entity *)v43);
                v124 = (ContainerComponent *)v123;
                if ( v123 )
                  v125 = (*(int (**)(void))(**(_DWORD **)(v123 + 4) + 44))();
                  v126 = v125;
                  v127 = *((_DWORD *)v3 + 36);
                  if ( v127 >= 0 && v127 < v125 )
                    j_ContainerComponent::setItem(v124, (ItemInstance *)&v939, v127);
                  sub_21E94B4((void **)&v775, "commands.replaceitem.badSlotNumber");
                    (CommandOutputParameter *)&v769,
                  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v770, 0);
                  j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v771, v126);
                  v772 = 0;
                  v773 = 0;
                  v774 = 0;
                  v772 = j_operator new(0x18u);
                  v774 = (char *)v772 + 24;
                  v773 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v769,
                                   (int)&v772,
                                   (int)v772);
                  j_CommandOutput::error(v4, &v775, (unsigned __int64 *)&v772);
                  v255 = v772;
                  v256 = v773;
                  if ( v772 != v773 )
                      v259 = (int *)(*(_DWORD *)v255 - 12);
                      if ( v259 != &dword_28898C0 )
                        v257 = (unsigned int *)(*(_DWORD *)v255 - 4);
                            v258 = __ldrex(v257);
                          while ( __strex(v258 - 1, v257) );
                          v258 = (*v257)--;
                        if ( v258 <= 0 )
                          j_j_j_j__ZdlPv_9(v259);
                      v255 = (char *)v255 + 8;
                    while ( v255 != v256 );
                    v255 = v772;
                  if ( v255 )
                    j_operator delete(v255);
                  v260 = (void *)(v771 - 12);
                  if ( (int *)(v771 - 12) != &dword_28898C0 )
                    v475 = (unsigned int *)(v771 - 4);
                        v476 = __ldrex(v475);
                      while ( __strex(v476 - 1, v475) );
                      v476 = (*v475)--;
                    if ( v476 <= 0 )
                      j_j_j_j__ZdlPv_9(v260);
                  v261 = (void *)(v770 - 12);
                  if ( (int *)(v770 - 12) != &dword_28898C0 )
                    v477 = (unsigned int *)(v770 - 4);
                        v478 = __ldrex(v477);
                      while ( __strex(v478 - 1, v477) );
                      v478 = (*v477)--;
                    if ( v478 <= 0 )
                      j_j_j_j__ZdlPv_9(v261);
                  v262 = (void *)(v769 - 12);
                  if ( (int *)(v769 - 12) != &dword_28898C0 )
                    v479 = (unsigned int *)(v769 - 4);
                        v480 = __ldrex(v479);
                      while ( __strex(v480 - 1, v479) );
                      v480 = (*v479)--;
                    if ( v480 <= 0 )
                      j_j_j_j__ZdlPv_9(v262);
                  v55 = (void *)(v775 - 12);
                  if ( (int *)(v775 - 12) == &dword_28898C0 )
                  v56 = (unsigned int *)(v775 - 4);
                  sub_21E94B4((void **)&v768, "commands.replaceitem.failed");
                  j_CommandOutputParameter::CommandOutputParameter(&v761, (int *)&v934);
                    (CommandOutputParameter *)&v762,
                    (CommandOutputParameter *)&v763,
                  j_ItemInstance::getName((ItemInstance *)&v760, (int)&v939);
                  j_CommandOutputParameter::CommandOutputParameter(&v764, &v760);
                  v765 = 0;
                  v766 = 0;
                  v767 = 0;
                  v765 = j_operator new(0x20u);
                  v767 = (char *)v765 + 32;
                  v766 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v761,
                                   (int)&v765,
                                   (int)v765);
                  j_CommandOutput::error(v4, &v768, (unsigned __int64 *)&v765);
                  v245 = v765;
                  v246 = v766;
                  if ( v765 != v766 )
                      v249 = (int *)(*(_DWORD *)v245 - 12);
                      if ( v249 != &dword_28898C0 )
                        v247 = (unsigned int *)(*(_DWORD *)v245 - 4);
                            v248 = __ldrex(v247);
                          while ( __strex(v248 - 1, v247) );
                          v248 = (*v247)--;
                        if ( v248 <= 0 )
                          j_j_j_j__ZdlPv_9(v249);
                      v245 = (char *)v245 + 8;
                    while ( v245 != v246 );
                    v245 = v765;
                  if ( v245 )
                    j_operator delete(v245);
                  v250 = (void *)(v764 - 12);
                  if ( (int *)(v764 - 12) != &dword_28898C0 )
                    v465 = (unsigned int *)(v764 - 4);
                        v466 = __ldrex(v465);
                      while ( __strex(v466 - 1, v465) );
                      v466 = (*v465)--;
                    if ( v466 <= 0 )
                      j_j_j_j__ZdlPv_9(v250);
                  v251 = (void *)(v763 - 12);
                  if ( (int *)(v763 - 12) != &dword_28898C0 )
                    v467 = (unsigned int *)(v763 - 4);
                        v468 = __ldrex(v467);
                      while ( __strex(v468 - 1, v467) );
                      v468 = (*v467)--;
                    if ( v468 <= 0 )
                      j_j_j_j__ZdlPv_9(v251);
                  v252 = (void *)(v762 - 12);
                  if ( (int *)(v762 - 12) != &dword_28898C0 )
                    v469 = (unsigned int *)(v762 - 4);
                        v470 = __ldrex(v469);
                      while ( __strex(v470 - 1, v469) );
                      v470 = (*v469)--;
                    if ( v470 <= 0 )
                      j_j_j_j__ZdlPv_9(v252);
                  v253 = (void *)(v761 - 12);
                  if ( (int *)(v761 - 12) != &dword_28898C0 )
                    v471 = (unsigned int *)(v761 - 4);
                        v472 = __ldrex(v471);
                      while ( __strex(v472 - 1, v471) );
                      v472 = (*v471)--;
                    if ( v472 <= 0 )
                      j_j_j_j__ZdlPv_9(v253);
                  v254 = (void *)(v760 - 12);
                  if ( (int *)(v760 - 12) != &dword_28898C0 )
                    v473 = (unsigned int *)(v760 - 4);
                        v474 = __ldrex(v473);
                      while ( __strex(v474 - 1, v473) );
                      v474 = (*v473)--;
                    if ( v474 <= 0 )
                      j_j_j_j__ZdlPv_9(v254);
                  v55 = (void *)(v768 - 12);
                  if ( (int *)(v768 - 12) == &dword_28898C0 )
                  v56 = (unsigned int *)(v768 - 4);
            case 8:
                v89 = *(_DWORD *)(v43 + 4960);
                v90 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v89 + 44))(*(_DWORD *)(v43 + 4960));
                v91 = *((_DWORD *)v3 + 36);
                if ( v91 >= 0 && v91 < v90 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v89 + 32))(v89);
                sub_21E94B4((void **)&v759, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v752, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v753, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v754, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v751, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v755, &v751);
                v756 = 0;
                v757 = 0;
                v758 = 0;
                v756 = j_operator new(0x20u);
                v758 = (char *)v756 + 32;
                v757 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v752,
                                 (int)&v756,
                                 (int)v756);
                j_CommandOutput::error(v4, &v759, (unsigned __int64 *)&v756);
                v187 = v756;
                v188 = v757;
                if ( v756 != v757 )
                    v221 = (int *)(*(_DWORD *)v187 - 12);
                    if ( v221 != &dword_28898C0 )
                      v219 = (unsigned int *)(*(_DWORD *)v187 - 4);
                          v220 = __ldrex(v219);
                        while ( __strex(v220 - 1, v219) );
                        v220 = (*v219)--;
                      if ( v220 <= 0 )
                        j_j_j_j__ZdlPv_9(v221);
                    v187 = (char *)v187 + 8;
                  while ( v187 != v188 );
                  v187 = v756;
                if ( v187 )
                  j_operator delete(v187);
                v222 = (void *)(v755 - 12);
                if ( (int *)(v755 - 12) != &dword_28898C0 )
                  v439 = (unsigned int *)(v755 - 4);
                      v440 = __ldrex(v439);
                    while ( __strex(v440 - 1, v439) );
                    v440 = (*v439)--;
                  if ( v440 <= 0 )
                    j_j_j_j__ZdlPv_9(v222);
                v223 = (void *)(v754 - 12);
                if ( (int *)(v754 - 12) != &dword_28898C0 )
                  v441 = (unsigned int *)(v754 - 4);
                      v442 = __ldrex(v441);
                    while ( __strex(v442 - 1, v441) );
                    v442 = (*v441)--;
                  if ( v442 <= 0 )
                    j_j_j_j__ZdlPv_9(v223);
                v224 = (void *)(v753 - 12);
                if ( (int *)(v753 - 12) != &dword_28898C0 )
                  v443 = (unsigned int *)(v753 - 4);
                      v444 = __ldrex(v443);
                    while ( __strex(v444 - 1, v443) );
                    v444 = (*v443)--;
                  if ( v444 <= 0 )
                    j_j_j_j__ZdlPv_9(v224);
                v225 = (void *)(v752 - 12);
                if ( (int *)(v752 - 12) != &dword_28898C0 )
                  v445 = (unsigned int *)(v752 - 4);
                      v446 = __ldrex(v445);
                    while ( __strex(v446 - 1, v445) );
                    v446 = (*v445)--;
                  if ( v446 <= 0 )
                    j_j_j_j__ZdlPv_9(v225);
                v226 = (void *)(v751 - 12);
                if ( (int *)(v751 - 12) != &dword_28898C0 )
                  v447 = (unsigned int *)(v751 - 4);
                      v448 = __ldrex(v447);
                    while ( __strex(v448 - 1, v447) );
                    v448 = (*v447)--;
                  if ( v448 <= 0 )
                    j_j_j_j__ZdlPv_9(v226);
                v55 = (void *)(v759 - 12);
                if ( (int *)(v759 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v759 - 4);
                sub_21E94B4((void **)&v750, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v743, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v744, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v745, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v742, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v746, &v742);
                v747 = 0;
                v748 = 0;
                v749 = 0;
                v747 = j_operator new(0x20u);
                v749 = (char *)v747 + 32;
                v748 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v743,
                                 (int)&v747,
                                 (int)v747);
                j_CommandOutput::error(v4, &v750, (unsigned __int64 *)&v747);
                v128 = v747;
                v129 = v748;
                if ( v747 != v748 )
                    v157 = (int *)(*(_DWORD *)v128 - 12);
                    if ( v157 != &dword_28898C0 )
                      v155 = (unsigned int *)(*(_DWORD *)v128 - 4);
                          v156 = __ldrex(v155);
                        while ( __strex(v156 - 1, v155) );
                        v156 = (*v155)--;
                      if ( v156 <= 0 )
                        j_j_j_j__ZdlPv_9(v157);
                    v128 = (char *)v128 + 8;
                  while ( v128 != v129 );
                  v128 = v747;
                if ( v128 )
                  j_operator delete(v128);
                v158 = (void *)(v746 - 12);
                if ( (int *)(v746 - 12) != &dword_28898C0 )
                  v377 = (unsigned int *)(v746 - 4);
                      v378 = __ldrex(v377);
                    while ( __strex(v378 - 1, v377) );
                    v378 = (*v377)--;
                  if ( v378 <= 0 )
                    j_j_j_j__ZdlPv_9(v158);
                v159 = (void *)(v745 - 12);
                if ( (int *)(v745 - 12) != &dword_28898C0 )
                  v379 = (unsigned int *)(v745 - 4);
                      v380 = __ldrex(v379);
                    while ( __strex(v380 - 1, v379) );
                    v380 = (*v379)--;
                  if ( v380 <= 0 )
                    j_j_j_j__ZdlPv_9(v159);
                v160 = (void *)(v744 - 12);
                if ( (int *)(v744 - 12) != &dword_28898C0 )
                  v381 = (unsigned int *)(v744 - 4);
                      v382 = __ldrex(v381);
                    while ( __strex(v382 - 1, v381) );
                    v382 = (*v381)--;
                  if ( v382 <= 0 )
                    j_j_j_j__ZdlPv_9(v160);
                v161 = (void *)(v743 - 12);
                if ( (int *)(v743 - 12) != &dword_28898C0 )
                  v383 = (unsigned int *)(v743 - 4);
                      v384 = __ldrex(v383);
                    while ( __strex(v384 - 1, v383) );
                    v384 = (*v383)--;
                  if ( v384 <= 0 )
                    j_j_j_j__ZdlPv_9(v161);
                v162 = (void *)(v742 - 12);
                if ( (int *)(v742 - 12) != &dword_28898C0 )
                  v385 = (unsigned int *)(v742 - 4);
                      v386 = __ldrex(v385);
                    while ( __strex(v386 - 1, v385) );
                    v386 = (*v385)--;
                  if ( v386 <= 0 )
                    j_j_j_j__ZdlPv_9(v162);
                v55 = (void *)(v750 - 12);
                if ( (int *)(v750 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v750 - 4);
            case 0xA:
              if ( j_EntityClassTree::isInstanceOf(v42, 2118423) == 1 )
                if ( j_ItemInstance::isHorseArmorItem((ItemInstance *)&v939) )
                  v92 = j_Entity::getContainerComponent((Entity *)v43);
                  v93 = (ContainerComponent *)v92;
                  if ( !v92 )
                  v94 = (*(int (**)(void))(**(_DWORD **)(v92 + 4) + 44))();
                  v95 = *((_DWORD *)v3 + 36);
                  if ( v95 >= 0 && v95 < v94 )
                    j_ContainerComponent::setItem(v93, (ItemInstance *)&v939, 1);
                  sub_21E94B4((void **)&v696, "commands.replaceitem.failed");
                  j_CommandOutputParameter::CommandOutputParameter(&v689, (int *)&v934);
                    (CommandOutputParameter *)&v690,
                    (CommandOutputParameter *)&v691,
                  j_ItemInstance::getName((ItemInstance *)&v688, (int)&v939);
                  j_CommandOutputParameter::CommandOutputParameter(&v692, &v688);
                  v693 = 0;
                  v694 = 0;
                  v695 = 0;
                  v693 = j_operator new(0x20u);
                  v695 = (char *)v693 + 32;
                  v694 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v689,
                                   (int)&v693,
                                   (int)v693);
                  j_CommandOutput::error(v4, &v696, (unsigned __int64 *)&v693);
                  v286 = *(_QWORD *)&v693;
                  if ( v693 != v694 )
                      v290 = (int *)(*(_DWORD *)v286 - 12);
                      if ( v290 != &dword_28898C0 )
                        v288 = (unsigned int *)(*(_DWORD *)v286 - 4);
                            v289 = __ldrex(v288);
                          while ( __strex(v289 - 1, v288) );
                          v289 = (*v288)--;
                        if ( v289 <= 0 )
                          j_j_j_j__ZdlPv_9(v290);
                      LODWORD(v286) = v286 + 8;
                    while ( (_DWORD)v286 != HIDWORD(v286) );
                    LODWORD(v286) = v693;
                  if ( (_DWORD)v286 )
                    j_operator delete((void *)v286);
                  v291 = (void *)(v692 - 12);
                  if ( (int *)(v692 - 12) != &dword_28898C0 )
                    v491 = (unsigned int *)(v692 - 4);
                        v492 = __ldrex(v491);
                      while ( __strex(v492 - 1, v491) );
                      v492 = (*v491)--;
                    if ( v492 <= 0 )
                      j_j_j_j__ZdlPv_9(v291);
                  v292 = (void *)(v691 - 12);
                  if ( (int *)(v691 - 12) != &dword_28898C0 )
                    v493 = (unsigned int *)(v691 - 4);
                        v494 = __ldrex(v493);
                      while ( __strex(v494 - 1, v493) );
                      v494 = (*v493)--;
                    if ( v494 <= 0 )
                      j_j_j_j__ZdlPv_9(v292);
                  v293 = (void *)(v690 - 12);
                  if ( (int *)(v690 - 12) != &dword_28898C0 )
                    v495 = (unsigned int *)(v690 - 4);
                        v496 = __ldrex(v495);
                      while ( __strex(v496 - 1, v495) );
                      v496 = (*v495)--;
                    if ( v496 <= 0 )
                      j_j_j_j__ZdlPv_9(v293);
                  v294 = (void *)(v689 - 12);
                  if ( (int *)(v689 - 12) != &dword_28898C0 )
                    v497 = (unsigned int *)(v689 - 4);
                        v498 = __ldrex(v497);
                      while ( __strex(v498 - 1, v497) );
                      v498 = (*v497)--;
                    if ( v498 <= 0 )
                      j_j_j_j__ZdlPv_9(v294);
                  v295 = (void *)(v688 - 12);
                  if ( (int *)(v688 - 12) != &dword_28898C0 )
                    v499 = (unsigned int *)(v688 - 4);
                        v500 = __ldrex(v499);
                      while ( __strex(v500 - 1, v499) );
                      v500 = (*v499)--;
                    if ( v500 <= 0 )
                      j_j_j_j__ZdlPv_9(v295);
                  v55 = (void *)(v696 - 12);
                  if ( (int *)(v696 - 12) == &dword_28898C0 )
                  v56 = (unsigned int *)(v696 - 4);
                  sub_21E94B4((void **)&v705, "commands.replaceitem.failed");
                  j_CommandOutputParameter::CommandOutputParameter(&v698, (int *)&v934);
                    (CommandOutputParameter *)&v699,
                    (CommandOutputParameter *)&v700,
                  j_ItemInstance::getName((ItemInstance *)&v697, (int)&v939);
                  j_CommandOutputParameter::CommandOutputParameter(&v701, &v697);
                  v702 = 0;
                  v703 = 0;
                  v704 = 0;
                  v702 = j_operator new(0x20u);
                  v704 = (char *)v702 + 32;
                  v703 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                   (int)&v698,
                                   (int)&v702,
                                   (int)v702);
                  j_CommandOutput::error(v4, &v705, (unsigned __int64 *)&v702);
                  v189 = *(_QWORD *)&v702;
                  if ( v702 != v703 )
                      v229 = (int *)(*(_DWORD *)v189 - 12);
                      if ( v229 != &dword_28898C0 )
                        v227 = (unsigned int *)(*(_DWORD *)v189 - 4);
                            v228 = __ldrex(v227);
                          while ( __strex(v228 - 1, v227) );
                          v228 = (*v227)--;
                        if ( v228 <= 0 )
                          j_j_j_j__ZdlPv_9(v229);
                      LODWORD(v189) = v189 + 8;
                    while ( (_DWORD)v189 != HIDWORD(v189) );
                    LODWORD(v189) = v702;
                  if ( (_DWORD)v189 )
                    j_operator delete((void *)v189);
                  v230 = (void *)(v701 - 12);
                  if ( (int *)(v701 - 12) != &dword_28898C0 )
                    v449 = (unsigned int *)(v701 - 4);
                        v450 = __ldrex(v449);
                      while ( __strex(v450 - 1, v449) );
                      v450 = (*v449)--;
                    if ( v450 <= 0 )
                      j_j_j_j__ZdlPv_9(v230);
                  v231 = (void *)(v700 - 12);
                  if ( (int *)(v700 - 12) != &dword_28898C0 )
                    v451 = (unsigned int *)(v700 - 4);
                        v452 = __ldrex(v451);
                      while ( __strex(v452 - 1, v451) );
                      v452 = (*v451)--;
                    if ( v452 <= 0 )
                      j_j_j_j__ZdlPv_9(v231);
                  v232 = (void *)(v699 - 12);
                  if ( (int *)(v699 - 12) != &dword_28898C0 )
                    v453 = (unsigned int *)(v699 - 4);
                        v454 = __ldrex(v453);
                      while ( __strex(v454 - 1, v453) );
                      v454 = (*v453)--;
                    if ( v454 <= 0 )
                      j_j_j_j__ZdlPv_9(v232);
                  v233 = (void *)(v698 - 12);
                  if ( (int *)(v698 - 12) != &dword_28898C0 )
                    v455 = (unsigned int *)(v698 - 4);
                        v456 = __ldrex(v455);
                      while ( __strex(v456 - 1, v455) );
                      v456 = (*v455)--;
                    if ( v456 <= 0 )
                      j_j_j_j__ZdlPv_9(v233);
                  v234 = (void *)(v697 - 12);
                  if ( (int *)(v697 - 12) != &dword_28898C0 )
                    v457 = (unsigned int *)(v697 - 4);
                        v458 = __ldrex(v457);
                      while ( __strex(v458 - 1, v457) );
                      v458 = (*v457)--;
                    if ( v458 <= 0 )
                      j_j_j_j__ZdlPv_9(v234);
                  v55 = (void *)(v705 - 12);
                  if ( (int *)(v705 - 12) == &dword_28898C0 )
                  v56 = (unsigned int *)(v705 - 4);
                sub_21E94B4((void **)&v687, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v680, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v681, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v682, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v679, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v683, &v679);
                v684 = 0;
                v685 = 0;
                v686 = 0;
                v684 = j_operator new(0x20u);
                v686 = (char *)v684 + 32;
                v685 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v680,
                                 (int)&v684,
                                 (int)v684);
                j_CommandOutput::error(v4, &v687, (unsigned __int64 *)&v684);
                v130 = *(_QWORD *)&v684;
                if ( v684 != v685 )
                    v165 = (int *)(*(_DWORD *)v130 - 12);
                    if ( v165 != &dword_28898C0 )
                      v163 = (unsigned int *)(*(_DWORD *)v130 - 4);
                          v164 = __ldrex(v163);
                        while ( __strex(v164 - 1, v163) );
                        v164 = (*v163)--;
                      if ( v164 <= 0 )
                        j_j_j_j__ZdlPv_9(v165);
                    LODWORD(v130) = v130 + 8;
                  while ( (_DWORD)v130 != HIDWORD(v130) );
                  LODWORD(v130) = v684;
                if ( (_DWORD)v130 )
                  j_operator delete((void *)v130);
                v166 = (void *)(v683 - 12);
                if ( (int *)(v683 - 12) != &dword_28898C0 )
                  v387 = (unsigned int *)(v683 - 4);
                      v388 = __ldrex(v387);
                    while ( __strex(v388 - 1, v387) );
                    v388 = (*v387)--;
                  if ( v388 <= 0 )
                    j_j_j_j__ZdlPv_9(v166);
                v167 = (void *)(v682 - 12);
                if ( (int *)(v682 - 12) != &dword_28898C0 )
                  v389 = (unsigned int *)(v682 - 4);
                      v390 = __ldrex(v389);
                    while ( __strex(v390 - 1, v389) );
                    v390 = (*v389)--;
                  if ( v390 <= 0 )
                    j_j_j_j__ZdlPv_9(v167);
                v168 = (void *)(v681 - 12);
                if ( (int *)(v681 - 12) != &dword_28898C0 )
                  v391 = (unsigned int *)(v681 - 4);
                      v392 = __ldrex(v391);
                    while ( __strex(v392 - 1, v391) );
                    v392 = (*v391)--;
                  if ( v392 <= 0 )
                    j_j_j_j__ZdlPv_9(v168);
                v169 = (void *)(v680 - 12);
                if ( (int *)(v680 - 12) != &dword_28898C0 )
                  v393 = (unsigned int *)(v680 - 4);
                      v394 = __ldrex(v393);
                    while ( __strex(v394 - 1, v393) );
                    v394 = (*v393)--;
                  if ( v394 <= 0 )
                    j_j_j_j__ZdlPv_9(v169);
                v170 = (void *)(v679 - 12);
                if ( (int *)(v679 - 12) != &dword_28898C0 )
                  v395 = (unsigned int *)(v679 - 4);
                      v396 = __ldrex(v395);
                    while ( __strex(v396 - 1, v395) );
                    v396 = (*v395)--;
                  if ( v396 <= 0 )
                    j_j_j_j__ZdlPv_9(v170);
                v55 = (void *)(v687 - 12);
                if ( (int *)(v687 - 12) == &dword_28898C0 )
                v56 = (unsigned int *)(v687 - 4);
            default:
              sub_21E94B4((void **)&v662, "commands.replaceitem.failed");
              j_CommandOutputParameter::CommandOutputParameter(&v655, (int *)&v934);
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v656, *((_DWORD *)v3 + 36));
              j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v657, *((_DWORD *)v3 + 39));
              j_ItemInstance::getName((ItemInstance *)&v654, (int)&v939);
              j_CommandOutputParameter::CommandOutputParameter(&v658, &v654);
              v659 = 0;
              v660 = 0;
              v661 = 0;
              v659 = j_operator new(0x20u);
              v661 = (char *)v659 + 32;
              v660 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                               (int)&v655,
                               (int)&v659,
                               (int)v659);
              j_CommandOutput::error(v4, &v662, (unsigned __int64 *)&v659);
              v96 = *(_QWORD *)&v659;
              if ( v659 != v660 )
                  v102 = (int *)(*(_DWORD *)v96 - 12);
                  if ( v102 != &dword_28898C0 )
                    v100 = (unsigned int *)(*(_DWORD *)v96 - 4);
                        v101 = __ldrex(v100);
                      while ( __strex(v101 - 1, v100) );
                      v101 = (*v100)--;
                    if ( v101 <= 0 )
                      j_j_j_j__ZdlPv_9(v102);
                  LODWORD(v96) = v96 + 8;
                while ( (_DWORD)v96 != HIDWORD(v96) );
                LODWORD(v96) = v659;
              if ( (_DWORD)v96 )
                j_operator delete((void *)v96);
              v103 = (void *)(v658 - 12);
              if ( (int *)(v658 - 12) != &dword_28898C0 )
                v314 = (unsigned int *)(v658 - 4);
                    v315 = __ldrex(v314);
                  while ( __strex(v315 - 1, v314) );
                  v315 = (*v314)--;
                if ( v315 <= 0 )
                  j_j_j_j__ZdlPv_9(v103);
              v104 = (void *)(v657 - 12);
              if ( (int *)(v657 - 12) != &dword_28898C0 )
                v316 = (unsigned int *)(v657 - 4);
                    v317 = __ldrex(v316);
                  while ( __strex(v317 - 1, v316) );
                  v317 = (*v316)--;
                if ( v317 <= 0 )
                  j_j_j_j__ZdlPv_9(v104);
              v105 = (void *)(v656 - 12);
              if ( (int *)(v656 - 12) != &dword_28898C0 )
                v318 = (unsigned int *)(v656 - 4);
                    v319 = __ldrex(v318);
                  while ( __strex(v319 - 1, v318) );
                  v319 = (*v318)--;
                if ( v319 <= 0 )
                  j_j_j_j__ZdlPv_9(v105);
              v106 = (void *)(v655 - 12);
              if ( (int *)(v655 - 12) != &dword_28898C0 )
                v320 = (unsigned int *)(v655 - 4);
                    v321 = __ldrex(v320);
                  while ( __strex(v321 - 1, v320) );
                  v321 = (*v320)--;
                if ( v321 <= 0 )
                  j_j_j_j__ZdlPv_9(v106);
              v107 = (void *)(v654 - 12);
              if ( (int *)(v654 - 12) != &dword_28898C0 )
                v322 = (unsigned int *)(v654 - 4);
                    v323 = __ldrex(v322);
                  while ( __strex(v323 - 1, v322) );
                  v323 = (*v322)--;
                if ( v323 <= 0 )
                  j_j_j_j__ZdlPv_9(v107);
              v55 = (void *)(v662 - 12);
              if ( (int *)(v662 - 12) == &dword_28898C0 )
              v56 = (unsigned int *)(v662 - 4);
          }
        v523 = v893;
        if ( v893 )
          v524 = (unsigned int *)(v893 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v525 = __ldrex(v524);
            while ( __strex(v525 - 1, v524) );
            v525 = (*v524)--;
          if ( v525 == 1 )
            v565 = (unsigned int *)(v523 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v523 + 8))(v523);
            if ( &pthread_create )
            {
                v566 = __ldrex(v565);
              while ( __strex(v566 - 1, v565) );
            }
            else
              v566 = (*v565)--;
            if ( v566 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v523 + 12))(v523);
        v573 = v895;
        if ( v895 )
          v574 = (unsigned int *)(v895 + 4);
              v575 = __ldrex(v574);
            while ( __strex(v575 - 1, v574) );
            v575 = (*v574)--;
          if ( v575 == 1 )
            v576 = (unsigned int *)(v573 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v573 + 8))(v573);
                v577 = __ldrex(v576);
              while ( __strex(v577 - 1, v576) );
              v577 = (*v576)--;
            if ( v577 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v573 + 12))(v573);
        v578 = v896;
        if ( v896 != v897 )
          sub_21E94B4((void **)&v653, "commands.replaceitem.success.entity");
          j_CommandOutputParameter::CommandOutputParameter(&v645, (int *)&v934);
          j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v646, *((_DWORD *)v3 + 36));
          j_CommandOutputParameter::CommandOutputParameter((int)&v647, (unsigned __int64 *)&v896);
          j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v648, *((_DWORD *)v3 + 39));
          j_ItemInstance::getName((ItemInstance *)&v644, (int)&v939);
          j_CommandOutputParameter::CommandOutputParameter(&v649, &v644);
          v650 = 0;
          v651 = 0;
          v652 = 0;
          v650 = (char *)j_operator new(0x28u);
          v652 = v650 + 40;
          v651 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v645,
                           (int)&v650,
                           (int)v650);
          j_CommandOutput::success((int)v4, &v653, (unsigned __int64 *)&v650);
          v579 = *(_QWORD *)&v650;
          if ( v650 != v651 )
              v582 = (int *)(*(_DWORD *)v579 - 12);
              if ( v582 != &dword_28898C0 )
                v580 = (unsigned int *)(*(_DWORD *)v579 - 4);
                    v581 = __ldrex(v580);
                  while ( __strex(v581 - 1, v580) );
                  v581 = (*v580)--;
                if ( v581 <= 0 )
                  j_j_j_j__ZdlPv_9(v582);
              LODWORD(v579) = v579 + 8;
            while ( (_DWORD)v579 != HIDWORD(v579) );
            LODWORD(v579) = v650;
          if ( (_DWORD)v579 )
            j_operator delete((void *)v579);
          v583 = (void *)(v649 - 12);
          if ( (int *)(v649 - 12) != &dword_28898C0 )
            v614 = (unsigned int *)(v649 - 4);
                v615 = __ldrex(v614);
              while ( __strex(v615 - 1, v614) );
              v615 = (*v614)--;
            if ( v615 <= 0 )
              j_j_j_j__ZdlPv_9(v583);
          v584 = (void *)(v648 - 12);
          if ( (int *)(v648 - 12) != &dword_28898C0 )
            v616 = (unsigned int *)(v648 - 4);
                v617 = __ldrex(v616);
              while ( __strex(v617 - 1, v616) );
              v617 = (*v616)--;
            if ( v617 <= 0 )
              j_j_j_j__ZdlPv_9(v584);
          v585 = (void *)(v647 - 12);
          if ( (int *)(v647 - 12) != &dword_28898C0 )
            v618 = (unsigned int *)(v647 - 4);
                v619 = __ldrex(v618);
              while ( __strex(v619 - 1, v618) );
              v619 = (*v618)--;
            if ( v619 <= 0 )
              j_j_j_j__ZdlPv_9(v585);
          v586 = (void *)(v646 - 12);
          if ( (int *)(v646 - 12) != &dword_28898C0 )
            v620 = (unsigned int *)(v646 - 4);
                v621 = __ldrex(v620);
              while ( __strex(v621 - 1, v620) );
              v621 = (*v620)--;
            if ( v621 <= 0 )
              j_j_j_j__ZdlPv_9(v586);
          v587 = (void *)(v645 - 12);
          if ( (int *)(v645 - 12) != &dword_28898C0 )
            v622 = (unsigned int *)(v645 - 4);
                v623 = __ldrex(v622);
              while ( __strex(v623 - 1, v622) );
              v623 = (*v622)--;
            if ( v623 <= 0 )
              j_j_j_j__ZdlPv_9(v587);
          v588 = (void *)(v644 - 12);
          if ( (int *)(v644 - 12) != &dword_28898C0 )
            v624 = (unsigned int *)(v644 - 4);
                v625 = __ldrex(v624);
              while ( __strex(v625 - 1, v624) );
              v625 = (*v624)--;
            if ( v625 <= 0 )
              j_j_j_j__ZdlPv_9(v588);
          v589 = (void *)(v653 - 12);
          if ( (int *)(v653 - 12) != &dword_28898C0 )
            v626 = (unsigned int *)(v653 - 4);
                v627 = __ldrex(v626);
              while ( __strex(v627 - 1, v626) );
              v627 = (*v626)--;
            if ( v627 <= 0 )
              j_j_j_j__ZdlPv_9(v589);
          v578 = v896;
        if ( v578 )
          j_operator delete(v578);
        v590 = v900;
        if ( v900 )
          v591 = (unsigned int *)(v900 + 4);
              v592 = __ldrex(v591);
            while ( __strex(v592 - 1, v591) );
            v592 = (*v591)--;
          if ( v592 == 1 )
            v593 = (unsigned int *)(v590 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v590 + 8))(v590);
                v594 = __ldrex(v593);
              while ( __strex(v594 - 1, v593) );
              v594 = (*v593)--;
            if ( v594 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v590 + 12))(v590);
        goto LABEL_1760;
      }
      v26 = v900;
      if ( v900 )
        v27 = (unsigned int *)(v900 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          v38 = (unsigned int *)(v26 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
    }
    else
      v21 = j_blockSlotToString(*((_DWORD *)v3 + 34));
      v22 = (char *)v21;
      v23 = (_BYTE *)j_strlen_0(v21);
      sub_21E8190((void **)&v934, v22, v23);
      j_CommandPosition::getPosition((CommandPosition *)&v932, (ReplaceItemCommand *)((char *)v3 + 120), (int)v5);
      j_BlockPos::BlockPos((int)&v933, (int)&v932);
      j_CommandOrigin::getAreaAt((CommandOrigin *)&v931, v5, (const BlockPos *)&v933);
      if ( v931
        && (v24 = (BlockEntity *)j_BlockSource::getBlockEntity((BlockSource *)(v931 + 8), (const BlockPos *)&v933)) != 0 )
        if ( *((_DWORD *)v3 + 34) )
LABEL_1594:
          sub_21E94B4((void **)&v924, "commands.replaceitem.noContainer");
          j_BlockPos::toString((BlockPos *)&v919, (int)&v933);
          j_CommandOutputParameter::CommandOutputParameter(&v920, &v919);
          v921 = 0;
          v922 = 0;
          v923 = 0;
          v921 = j_operator new(8u);
          v923 = (char *)v921 + 8;
          v922 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                           (int)&v920,
                           (int)&v921,
                           (int)v921);
          j_CommandOutput::error(v4, &v924, (unsigned __int64 *)&v921);
          v530 = v921;
          v531 = v922;
          if ( v921 != v922 )
              v534 = (int *)(*(_DWORD *)v530 - 12);
              if ( v534 != &dword_28898C0 )
                v532 = (unsigned int *)(*(_DWORD *)v530 - 4);
                    v533 = __ldrex(v532);
                  while ( __strex(v533 - 1, v532) );
                  v533 = (*v532)--;
                if ( v533 <= 0 )
                  j_j_j_j__ZdlPv_9(v534);
              v530 = (char *)v530 + 8;
            while ( v530 != v531 );
            v530 = v921;
          if ( v530 )
            j_operator delete(v530);
          v535 = (void *)(v920 - 12);
          if ( (int *)(v920 - 12) != &dword_28898C0 )
            v567 = (unsigned int *)(v920 - 4);
                v568 = __ldrex(v567);
              while ( __strex(v568 - 1, v567) );
              v568 = (*v567)--;
            if ( v568 <= 0 )
              j_j_j_j__ZdlPv_9(v535);
          v536 = (void *)(v919 - 12);
          if ( (int *)(v919 - 12) != &dword_28898C0 )
            v569 = (unsigned int *)(v919 - 4);
                v570 = __ldrex(v569);
              while ( __strex(v570 - 1, v569) );
              v570 = (*v569)--;
            if ( v570 <= 0 )
              j_j_j_j__ZdlPv_9(v536);
          v537 = (void *)(v924 - 12);
          if ( (int *)(v924 - 12) != &dword_28898C0 )
            v571 = (unsigned int *)(v924 - 4);
                v572 = __ldrex(v571);
              while ( __strex(v572 - 1, v571) );
              v572 = (*v571)--;
            if ( v572 <= 0 )
              j_j_j_j__ZdlPv_9(v537);
          v37 = 1;
          v25 = *(_DWORD *)j_BlockEntity::getType(v24);
          switch ( v25 )
            case 13:
            case 14:
              goto LABEL_1587;
            case 15:
              goto LABEL_1588;
            case 10:
            case 11:
            case 12:
              goto LABEL_1594;
              if ( v25 == 21 )
LABEL_1588:
                v526 = (int)v24 + 104;
                if ( v25 != 25 )
                  goto LABEL_1594;
LABEL_1587:
                v526 = (int)v24 + 112;
              if ( !v526 )
                goto LABEL_1594;
              v527 = *((_DWORD *)v3 + 36);
              if ( v527 < 0 || v527 >= (*(int (__fastcall **)(int))(*(_DWORD *)v526 + 44))(v526) )
                sub_21E94B4((void **)&v918, "commands.replaceitem.failed");
                j_CommandOutputParameter::CommandOutputParameter(&v911, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v912, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v913, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v910, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v914, &v910);
                v915 = 0;
                v916 = 0;
                v917 = 0;
                v915 = j_operator new(0x20u);
                v917 = (char *)v915 + 32;
                v916 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v911,
                                 (int)&v915,
                                 (int)v915);
                j_CommandOutput::error(v4, &v918, (unsigned __int64 *)&v915);
                v539 = v915;
                v540 = v916;
                if ( v915 != v916 )
                    v543 = (int *)(*(_DWORD *)v539 - 12);
                    if ( v543 != &dword_28898C0 )
                      v541 = (unsigned int *)(*(_DWORD *)v539 - 4);
                          v542 = __ldrex(v541);
                        while ( __strex(v542 - 1, v541) );
                        v542 = (*v541)--;
                      if ( v542 <= 0 )
                        j_j_j_j__ZdlPv_9(v543);
                    v539 = (char *)v539 + 8;
                  while ( v539 != v540 );
                  v539 = v915;
                if ( v539 )
                  j_operator delete(v539);
                v544 = (void *)(v914 - 12);
                if ( (int *)(v914 - 12) != &dword_28898C0 )
                  v602 = (unsigned int *)(v914 - 4);
                      v603 = __ldrex(v602);
                    while ( __strex(v603 - 1, v602) );
                    v603 = (*v602)--;
                  if ( v603 <= 0 )
                    j_j_j_j__ZdlPv_9(v544);
                v545 = (void *)(v913 - 12);
                if ( (int *)(v913 - 12) != &dword_28898C0 )
                  v604 = (unsigned int *)(v913 - 4);
                      v605 = __ldrex(v604);
                    while ( __strex(v605 - 1, v604) );
                    v605 = (*v604)--;
                  if ( v605 <= 0 )
                    j_j_j_j__ZdlPv_9(v545);
                v546 = (void *)(v912 - 12);
                if ( (int *)(v912 - 12) != &dword_28898C0 )
                  v606 = (unsigned int *)(v912 - 4);
                      v607 = __ldrex(v606);
                    while ( __strex(v607 - 1, v606) );
                    v607 = (*v606)--;
                  if ( v607 <= 0 )
                    j_j_j_j__ZdlPv_9(v546);
                v547 = (void *)(v911 - 12);
                if ( (int *)(v911 - 12) != &dword_28898C0 )
                  v608 = (unsigned int *)(v911 - 4);
                      v609 = __ldrex(v608);
                    while ( __strex(v609 - 1, v608) );
                    v609 = (*v608)--;
                  if ( v609 <= 0 )
                    j_j_j_j__ZdlPv_9(v547);
                v548 = (void *)(v910 - 12);
                if ( (int *)(v910 - 12) != &dword_28898C0 )
                  v610 = (unsigned int *)(v910 - 4);
                      v611 = __ldrex(v610);
                    while ( __strex(v611 - 1, v610) );
                    v611 = (*v610)--;
                  if ( v611 <= 0 )
                    j_j_j_j__ZdlPv_9(v548);
                v549 = (void *)(v918 - 12);
                if ( (int *)(v918 - 12) != &dword_28898C0 )
                  v612 = (unsigned int *)(v918 - 4);
                      v613 = __ldrex(v612);
                    while ( __strex(v613 - 1, v612) );
                    v613 = (*v612)--;
                  if ( v613 <= 0 )
                    j_j_j_j__ZdlPv_9(v549);
                v37 = 1;
                (*(void (__fastcall **)(int, _DWORD, Item **))(*(_DWORD *)v526 + 32))(v526, *((_DWORD *)v3 + 36), &v939);
                sub_21E94B4((void **)&v909, "commands.replaceitem.success");
                j_CommandOutputParameter::CommandOutputParameter(&v902, (int *)&v934);
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v903, *((_DWORD *)v3 + 36));
                j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v904, *((_DWORD *)v3 + 39));
                j_ItemInstance::getName((ItemInstance *)&v901, (int)&v939);
                j_CommandOutputParameter::CommandOutputParameter(&v905, &v901);
                v906 = 0;
                v907 = 0;
                v908 = 0;
                v906 = j_operator new(0x20u);
                v908 = (char *)v906 + 32;
                v907 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                                 (int)&v902,
                                 (int)&v906,
                                 (int)v906);
                j_CommandOutput::success((int)v4, &v909, (unsigned __int64 *)&v906);
                v528 = v906;
                v529 = v907;
                if ( v906 != v907 )
                    v558 = (int *)(*(_DWORD *)v528 - 12);
                    if ( v558 != &dword_28898C0 )
                      v556 = (unsigned int *)(*(_DWORD *)v528 - 4);
                          v557 = __ldrex(v556);
                        while ( __strex(v557 - 1, v556) );
                        v557 = (*v556)--;
                      if ( v557 <= 0 )
                        j_j_j_j__ZdlPv_9(v558);
                    v528 = (char *)v528 + 8;
                  while ( v528 != v529 );
                  v528 = v906;
                if ( v528 )
                  j_operator delete(v528);
                v559 = (void *)(v905 - 12);
                if ( (int *)(v905 - 12) != &dword_28898C0 )
                  v628 = (unsigned int *)(v905 - 4);
                      v629 = __ldrex(v628);
                    while ( __strex(v629 - 1, v628) );
                    v629 = (*v628)--;
                  if ( v629 <= 0 )
                    j_j_j_j__ZdlPv_9(v559);
                v560 = (void *)(v904 - 12);
                if ( (int *)(v904 - 12) != &dword_28898C0 )
                  v630 = (unsigned int *)(v904 - 4);
                      v631 = __ldrex(v630);
                    while ( __strex(v631 - 1, v630) );
                    v631 = (*v630)--;
                  if ( v631 <= 0 )
                    j_j_j_j__ZdlPv_9(v560);
                v561 = (void *)(v903 - 12);
                if ( (int *)(v903 - 12) != &dword_28898C0 )
                  v632 = (unsigned int *)(v903 - 4);
                      v633 = __ldrex(v632);
                    while ( __strex(v633 - 1, v632) );
                    v633 = (*v632)--;
                  if ( v633 <= 0 )
                    j_j_j_j__ZdlPv_9(v561);
                v562 = (void *)(v902 - 12);
                if ( (int *)(v902 - 12) != &dword_28898C0 )
                  v634 = (unsigned int *)(v902 - 4);
                      v635 = __ldrex(v634);
                    while ( __strex(v635 - 1, v634) );
                    v635 = (*v634)--;
                  if ( v635 <= 0 )
                    j_j_j_j__ZdlPv_9(v562);
                v563 = (void *)(v901 - 12);
                if ( (int *)(v901 - 12) != &dword_28898C0 )
                  v636 = (unsigned int *)(v901 - 4);
                      v637 = __ldrex(v636);
                    while ( __strex(v637 - 1, v636) );
                    v637 = (*v636)--;
                  if ( v637 <= 0 )
                    j_j_j_j__ZdlPv_9(v563);
                v564 = (void *)(v909 - 12);
                if ( (int *)(v909 - 12) != &dword_28898C0 )
                  v638 = (unsigned int *)(v909 - 4);
                      v639 = __ldrex(v638);
                    while ( __strex(v639 - 1, v638) );
                    v639 = (*v638)--;
                  if ( v639 <= 0 )
                    j_j_j_j__ZdlPv_9(v564);
                v37 = 0;
      else
        sub_21E94B4((void **)&v930, "commands.replaceitem.noContainer");
        j_BlockPos::toString((BlockPos *)&v925, (int)&v933);
        j_CommandOutputParameter::CommandOutputParameter(&v926, &v925);
        v927 = 0;
        v928 = 0;
        v929 = 0;
        v927 = j_operator new(8u);
        v929 = (char *)v927 + 8;
        v928 = (void *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                         (int)&v926,
                         (int)&v927,
                         (int)v927);
        j_CommandOutput::error(v4, &v930, (unsigned __int64 *)&v927);
        v29 = v927;
        v30 = v928;
        if ( v927 != v928 )
            v33 = (int *)(*(_DWORD *)v29 - 12);
            if ( v33 != &dword_28898C0 )
              v31 = (unsigned int *)(*(_DWORD *)v29 - 4);
              if ( &pthread_create )
                  v32 = __ldrex(v31);
                while ( __strex(v32 - 1, v31) );
                v32 = (*v31)--;
              if ( v32 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            v29 = (char *)v29 + 8;
          while ( v29 != v30 );
          v29 = v927;
        if ( v29 )
          j_operator delete(v29);
        v34 = (void *)(v926 - 12);
        if ( (int *)(v926 - 12) != &dword_28898C0 )
          v550 = (unsigned int *)(v926 - 4);
              v551 = __ldrex(v550);
            while ( __strex(v551 - 1, v550) );
            v551 = (*v550)--;
          if ( v551 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v35 = (void *)(v925 - 12);
        if ( (int *)(v925 - 12) != &dword_28898C0 )
          v552 = (unsigned int *)(v925 - 4);
              v553 = __ldrex(v552);
            while ( __strex(v553 - 1, v552) );
            v553 = (*v552)--;
          if ( v553 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v36 = (void *)(v930 - 12);
        if ( (int *)(v930 - 12) != &dword_28898C0 )
          v554 = (unsigned int *)(v930 - 4);
              v555 = __ldrex(v554);
            while ( __strex(v555 - 1, v554) );
            v555 = (*v554)--;
          if ( v555 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v37 = 1;
      v538 = (void *)v931;
      if ( v931 )
        j_BlockSource::~BlockSource((BlockSource *)(v931 + 8));
        if ( *(_DWORD *)v538 )
          (*(void (**)(void))(**(_DWORD **)v538 + 4))();
        j_operator delete(v538);
      if ( !v37 )
LABEL_1760:
        sub_21E8AF4(&v643, (int *)&v934);
        j_CommandOutput::set<std::string>((int)v4, "slotType", &v643);
        v595 = (void *)(v643 - 12);
        if ( (int *)(v643 - 12) != &dword_28898C0 )
          v598 = (unsigned int *)(v643 - 4);
              v599 = __ldrex(v598);
            while ( __strex(v599 - 1, v598) );
            v599 = (*v598)--;
          if ( v599 <= 0 )
            j_j_j_j__ZdlPv_9(v595);
        j_CommandOutput::set<int>((int)v4, "slotId", *((_DWORD *)v3 + 36));
        j_CommandOutput::set<int>((int)v4, "count", *((_DWORD *)v3 + 39));
        j_ItemInstance::getName((ItemInstance *)&v642, (int)&v939);
        j_CommandOutput::set<std::string>((int)v4, "itemName", &v642);
        v596 = (void *)(v642 - 12);
        if ( (int *)(v642 - 12) != &dword_28898C0 )
          v600 = (unsigned int *)(v642 - 4);
              v601 = __ldrex(v600);
            while ( __strex(v601 - 1, v600) );
            v601 = (*v600)--;
          if ( v601 <= 0 )
            j_j_j_j__ZdlPv_9(v596);
        goto LABEL_1762;
LABEL_1762:
    v18 = v934 - 12;
    if ( (int *)(v934 - 12) == &dword_28898C0 )
    v19 = (unsigned int *)(v934 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      goto LABEL_1775;
    goto LABEL_1774;
  }
  v938 = (char *)&unk_28898CC;
  if ( j_CommandUtils::addItemInstanceComponents() )
    v7 = v938 - 12;
    if ( (int *)(v938 - 12) != &dword_28898C0 )
      v521 = (unsigned int *)(v938 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v522 = __ldrex(v521);
        while ( __strex(v522 - 1, v521) );
        v522 = (*v521)--;
      if ( v522 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    goto LABEL_5;
  ptr = 0;
  v936 = 0;
  v937 = 0;
  j_CommandOutput::error(v4, (int *)&v938, (unsigned __int64 *)&ptr);
  v13 = ptr;
  v14 = v936;
  if ( ptr != v936 )
    do
      v17 = (int *)(*(_DWORD *)v13 - 12);
      if ( v17 != &dword_28898C0 )
        v15 = (unsigned int *)(*(_DWORD *)v13 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v13 = (char *)v13 + 8;
    while ( v13 != v14 );
    v13 = ptr;
  if ( v13 )
    j_operator delete(v13);
  v18 = v938 - 12;
  if ( (int *)(v938 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v938 - 4);
LABEL_1775:
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
LABEL_1774:
    v20 = (*v19)--;
    goto LABEL_1775;
LABEL_1763:
  if ( v942 )
    j_operator delete(v942);
  if ( v941 )
    j_operator delete(v941);
  result = v940;
  if ( v940 )
    result = (*(int (**)(void))(*(_DWORD *)v940 + 4))();
  return result;
}


int __fastcall ReplaceItemCommand::getBlockEntityContainer(ReplaceItemCommand *this, BlockEntity *a2)
{
  ReplaceItemCommand *v2; // r4@1
  int result; // r0@2
  int v4; // r1@3

  v2 = this;
  if ( this )
  {
    v4 = *(_DWORD *)j_BlockEntity::getType(this);
    result = 0;
    switch ( v4 )
    {
      case 2:
      case 13:
      case 14:
        goto LABEL_6;
      case 1:
      case 8:
      case 15:
        goto LABEL_7;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
      case 11:
      case 12:
        return result;
      default:
        if ( v4 == 21 )
        {
LABEL_7:
          result = (int)v2 + 104;
        }
        else if ( v4 == 25 )
LABEL_6:
          result = (int)v2 + 112;
        break;
    }
  }
  else
  return result;
}


void __fastcall ReplaceItemCommand::~ReplaceItemCommand(ReplaceItemCommand *this)
{
  ReplaceItemCommand::~ReplaceItemCommand(this);
}
