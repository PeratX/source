

int __fastcall Vex::Vex(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26FAA70;
  *(_DWORD *)(result + 248) = 76;
  *(_BYTE *)(result + 229) = 1;
  return result;
}


void __fastcall Vex::addAdditionalSaveData(Vex *this, CompoundTag *a2)
{
  Vex::addAdditionalSaveData(this, a2);
}


int __fastcall Vex::isInWall(Vex *this)
{
  return 0;
}


int __fastcall Vex::initializeComponents(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r10@1
  void **v4; // r0@1
  int v5; // r5@1
  __int64 v6; // r0@1
  void **v7; // r0@4
  int v8; // r4@4
  __int64 v9; // r0@4
  char v11; // [sp+8h] [bp-328h]@4
  void *v12[3]; // [sp+18h] [bp-318h]@4
  int v13; // [sp+24h] [bp-30Ch]@4
  int v14; // [sp+38h] [bp-2F8h]@4
  int v15; // [sp+40h] [bp-2F0h]@4
  int v16; // [sp+44h] [bp-2ECh]@4
  int v17; // [sp+48h] [bp-2E8h]@4
  int v18; // [sp+64h] [bp-2CCh]@4
  void **v19; // [sp+68h] [bp-2C8h]@4
  int v20; // [sp+6Ch] [bp-2C4h]@4
  int v21; // [sp+70h] [bp-2C0h]@4
  int v22; // [sp+74h] [bp-2BCh]@4
  int v23; // [sp+78h] [bp-2B8h]@4
  int v24; // [sp+7Ch] [bp-2B4h]@4
  int v25; // [sp+80h] [bp-2B0h]@4
  int v26; // [sp+84h] [bp-2ACh]@4
  signed int v27; // [sp+88h] [bp-2A8h]@4
  signed int v28; // [sp+8Ch] [bp-2A4h]@4
  int v29; // [sp+90h] [bp-2A0h]@4
  signed int v30; // [sp+94h] [bp-29Ch]@4
  int v31; // [sp+98h] [bp-298h]@4
  void *v32; // [sp+A4h] [bp-28Ch]@4
  void *v33; // [sp+A8h] [bp-288h]@4
  void **v34; // [sp+ACh] [bp-284h]@4
  int v35; // [sp+B0h] [bp-280h]@4
  int v36; // [sp+B4h] [bp-27Ch]@4
  int v37; // [sp+B8h] [bp-278h]@4
  int v38; // [sp+BCh] [bp-274h]@4
  int v39; // [sp+C0h] [bp-270h]@4
  int v40; // [sp+C4h] [bp-26Ch]@4
  int v41; // [sp+C8h] [bp-268h]@4
  int v42; // [sp+D8h] [bp-258h]@4
  int v43; // [sp+E4h] [bp-24Ch]@4
  int v44; // [sp+E8h] [bp-248h]@4
  signed int v45; // [sp+ECh] [bp-244h]@4
  int v46; // [sp+F0h] [bp-240h]@4
  char v47; // [sp+116h] [bp-21Ah]@4
  signed int v48; // [sp+118h] [bp-218h]@4
  int v49; // [sp+11Ch] [bp-214h]@4
  int v50; // [sp+120h] [bp-210h]@4
  int v51; // [sp+124h] [bp-20Ch]@4
  signed int v52; // [sp+128h] [bp-208h]@4
  signed int v53; // [sp+12Ch] [bp-204h]@4
  int v54; // [sp+130h] [bp-200h]@4
  int v55; // [sp+138h] [bp-1F8h]@4
  int v56; // [sp+13Ch] [bp-1F4h]@4
  int v57; // [sp+140h] [bp-1F0h]@4
  int v58; // [sp+144h] [bp-1ECh]@4
  int v59; // [sp+148h] [bp-1E8h]@4
  int v60; // [sp+14Ch] [bp-1E4h]@4
  char v61; // [sp+150h] [bp-1E0h]@4
  int v62; // [sp+154h] [bp-1DCh]@4
  int v63; // [sp+158h] [bp-1D8h]@4
  int v64; // [sp+15Ch] [bp-1D4h]@4
  int v65; // [sp+160h] [bp-1D0h]@4
  int v66; // [sp+164h] [bp-1CCh]@4
  int v67; // [sp+168h] [bp-1C8h]@4
  int v68; // [sp+16Ch] [bp-1C4h]@4
  int v69; // [sp+170h] [bp-1C0h]@4
  int v70; // [sp+174h] [bp-1BCh]@4
  int v71; // [sp+178h] [bp-1B8h]@4
  char v72; // [sp+17Ch] [bp-1B4h]@4
  char v73; // [sp+17Dh] [bp-1B3h]@4
  int v74; // [sp+180h] [bp-1B0h]@4
  char v75; // [sp+188h] [bp-1A8h]@1
  void *v76[3]; // [sp+198h] [bp-198h]@1
  int v77; // [sp+1A4h] [bp-18Ch]@1
  int v78; // [sp+1B8h] [bp-178h]@1
  int v79; // [sp+1C0h] [bp-170h]@1
  int v80; // [sp+1C4h] [bp-16Ch]@1
  int v81; // [sp+1C8h] [bp-168h]@1
  int v82; // [sp+1E4h] [bp-14Ch]@1
  void **v83; // [sp+1E8h] [bp-148h]@1
  int v84; // [sp+1ECh] [bp-144h]@1
  int v85; // [sp+1F0h] [bp-140h]@1
  int v86; // [sp+1F4h] [bp-13Ch]@1
  int v87; // [sp+1F8h] [bp-138h]@1
  int v88; // [sp+1FCh] [bp-134h]@1
  int v89; // [sp+200h] [bp-130h]@1
  int v90; // [sp+204h] [bp-12Ch]@1
  signed int v91; // [sp+208h] [bp-128h]@1
  signed int v92; // [sp+20Ch] [bp-124h]@1
  signed __int64 v93; // [sp+210h] [bp-120h]@1
  int v94; // [sp+218h] [bp-118h]@1
  void *v95; // [sp+224h] [bp-10Ch]@1
  void *v96; // [sp+228h] [bp-108h]@1
  void **v97; // [sp+22Ch] [bp-104h]@1
  int v98; // [sp+230h] [bp-100h]@1
  int v99; // [sp+234h] [bp-FCh]@1
  int v100; // [sp+238h] [bp-F8h]@1
  int v101; // [sp+23Ch] [bp-F4h]@1
  int v102; // [sp+240h] [bp-F0h]@1
  int v103; // [sp+244h] [bp-ECh]@1
  int v104; // [sp+248h] [bp-E8h]@1
  int v105; // [sp+258h] [bp-D8h]@1
  int v106; // [sp+264h] [bp-CCh]@1
  int v107; // [sp+268h] [bp-C8h]@1
  signed int v108; // [sp+26Ch] [bp-C4h]@1
  int v109; // [sp+270h] [bp-C0h]@1
  char v110; // [sp+296h] [bp-9Ah]@1
  signed int v111; // [sp+298h] [bp-98h]@1
  int v112; // [sp+29Ch] [bp-94h]@1
  int v113; // [sp+2A0h] [bp-90h]@1
  int v114; // [sp+2A4h] [bp-8Ch]@1
  signed int v115; // [sp+2A8h] [bp-88h]@1
  signed int v116; // [sp+2ACh] [bp-84h]@1
  int v117; // [sp+2B0h] [bp-80h]@1
  int v118; // [sp+2B8h] [bp-78h]@1
  int v119; // [sp+2BCh] [bp-74h]@1
  int v120; // [sp+2C0h] [bp-70h]@1
  int v121; // [sp+2C4h] [bp-6Ch]@1
  int v122; // [sp+2C8h] [bp-68h]@1
  int v123; // [sp+2CCh] [bp-64h]@1
  char v124; // [sp+2D0h] [bp-60h]@1
  int v125; // [sp+2D4h] [bp-5Ch]@1
  int v126; // [sp+2D8h] [bp-58h]@1
  int v127; // [sp+2DCh] [bp-54h]@1
  int v128; // [sp+2E0h] [bp-50h]@1
  int v129; // [sp+2E4h] [bp-4Ch]@1
  int v130; // [sp+2E8h] [bp-48h]@1
  int v131; // [sp+2ECh] [bp-44h]@1
  int v132; // [sp+2F0h] [bp-40h]@1
  int v133; // [sp+2F4h] [bp-3Ch]@1
  int v134; // [sp+2F8h] [bp-38h]@1
  char v135; // [sp+2FCh] [bp-34h]@1
  char v136; // [sp+2FDh] [bp-33h]@1
  int v137; // [sp+300h] [bp-30h]@1

  v2 = a2;
  v3 = a1;
  v4 = sub_21E94B4(v76, (const char *)&unk_257BC67);
  v77 = 1098907648;
  v78 = 1065353216;
  v79 = 0;
  v80 = 0;
  v81 = 0;
  v82 = 1017370378;
  v89 = 0;
  v90 = 0;
  v87 = 0;
  v88 = 0;
  v85 = 0;
  v86 = 0;
  v84 = 0;
  v83 = &off_26F1930;
  v91 = 2;
  v92 = 4;
  v93 = 8589934593LL;
  v94 = 0;
  v95 = &unk_28898CC;
  v96 = &unk_28898CC;
  v103 = 0;
  v104 = 0;
  v101 = 0;
  v102 = 0;
  v99 = 0;
  v100 = 0;
  v97 = &off_26F1930;
  v98 = 0;
  v105 = 1056964608;
  v106 = 0;
  v107 = 10;
  v108 = 7;
  v109 = 0;
  v110 = 0;
  v111 = 60;
  v112 = 0;
  v113 = 0;
  v114 = 0;
  v115 = 6;
  v116 = 2;
  v117 = 100;
  v122 = 0;
  v118 = 0;
  v119 = 0;
  v120 = (int)(v4 + 72);
  v121 = (int)(v4 + 72);
  v123 = 1056964608;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v127 = 1065353216;
  v135 = 0;
  v134 = 0;
  v132 = 0;
  v133 = 0;
  v130 = 0;
  v131 = 0;
  v128 = 0;
  v129 = 0;
  v136 = 1;
  v137 = -1082130432;
  sub_21E8190(v4, "minecraft:behavior.vex_random_move", (_BYTE *)0x22);
  Json::Value::Value(&v75, 0);
  GoalDefinition::parse((GoalDefinition *)v76, (Json::Value *)&v75, 8);
  v5 = *(_DWORD *)(v3 + 48);
  v6 = *(_QWORD *)(v5 + 40);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<GoalDefinition,std::allocator<GoalDefinition>>::_M_emplace_back_aux<GoalDefinition const&>(
      (unsigned __int64 *)(v5 + 36),
      (int *)v76);
  }
  else
    GoalDefinition::GoalDefinition((int *)v6, (int *)v76);
    *(_DWORD *)(v5 + 40) += 364;
  Json::Value::~Value((Json::Value *)&v75);
  GoalDefinition::~GoalDefinition((GoalDefinition *)v76);
  v7 = sub_21E94B4(v12, (const char *)&unk_257BC67);
  v13 = 1098907648;
  v14 = 1065353216;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1017370378;
  v25 = 0;
  v26 = 0;
  v23 = 0;
  v24 = 0;
  v21 = 0;
  v22 = 0;
  v20 = 0;
  v19 = &off_26F1930;
  v27 = 2;
  v28 = 4;
  v29 = 1;
  v30 = 2;
  v31 = 0;
  v32 = &unk_28898CC;
  v33 = &unk_28898CC;
  v40 = 0;
  v41 = 0;
  v38 = 0;
  v39 = 0;
  v36 = 0;
  v37 = 0;
  v34 = &off_26F1930;
  v35 = 0;
  v42 = 1056964608;
  v43 = 0;
  v44 = 10;
  v45 = 7;
  v46 = 0;
  v47 = 0;
  v48 = 60;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 6;
  v53 = 2;
  v54 = 100;
  v59 = 0;
  v55 = 0;
  v56 = 0;
  v57 = (int)(v7 + 72);
  v58 = (int)(v7 + 72);
  v60 = 1056964608;
  v61 = 0;
  v62 = 0;
  v63 = 0;
  v64 = 1065353216;
  v72 = 0;
  v71 = 0;
  v69 = 0;
  v70 = 0;
  v67 = 0;
  v68 = 0;
  v65 = 0;
  v66 = 0;
  v73 = 1;
  v74 = -1082130432;
  sub_21E8190(v7, "minecraft:behavior.vex_copy_owner_target", (_BYTE *)0x28);
  Json::Value::Value(&v11, 0);
  GoalDefinition::parse((GoalDefinition *)v12, (Json::Value *)&v11, 2);
  v8 = *(_DWORD *)(v3 + 48);
  v9 = *(_QWORD *)(v8 + 40);
  if ( (_DWORD)v9 == HIDWORD(v9) )
      (unsigned __int64 *)(v8 + 36),
      (int *)v12);
    GoalDefinition::GoalDefinition((int *)v9, (int *)v12);
    *(_DWORD *)(v8 + 40) += 364;
  Json::Value::~Value((Json::Value *)&v11);
  GoalDefinition::~GoalDefinition((GoalDefinition *)v12);
  return Mob::initializeComponents(v3, v2);
}


void __fastcall Vex::readAdditionalSaveData(Vex *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Vex *v3; // r6@1
  const CompoundTag *v4; // r5@1
  void *v5; // r0@1
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v8, "ItemInHand");
  v4 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v8);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 )
    if ( !CompoundTag::isEmpty(v4) )
      ItemInstance::load((Vex *)((char *)v3 + 3512), v4);
}


unsigned int __fastcall Vex::getExperienceReward(Vex *this)
{
  Entity *v1; // r4@1
  int v2; // r5@2
  Level *v3; // r0@2
  char *v4; // r0@2
  unsigned int result; // r0@2

  v1 = this;
  if ( *((_DWORD *)this + 861) < 1 )
  {
    result = 0;
  }
  else
    v2 = (*(int (__fastcall **)(Vex *))(*(_DWORD *)this + 1008))(this);
    v3 = (Level *)Entity::getLevel(v1);
    v4 = Level::getRandom(v3);
    result = ((Random::_genRandInt32((Random *)v4) & 1) + 1) * v2 + 5;
  return result;
}


void __fastcall Vex::~Vex(Vex *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall Vex::readAdditionalSaveData(Vex *this, const CompoundTag *a2)
{
  Vex::readAdditionalSaveData(this, a2);
}


int __fastcall Vex::reloadHardcoded(int result, int a2)
{
  if ( a2 == 2 )
  {
    *(_DWORD *)(result + 3656) = 0;
    *(_DWORD *)(result + 3660) = 0;
  }
  return result;
}


void __fastcall Vex::~Vex(Vex *this)
{
  Vex::~Vex(this);
}


signed int __fastcall Vex::getEntityTypeId(Vex *this)
{
  return 2921;
}


void __fastcall Vex::addAdditionalSaveData(Vex *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Vex *v3; // r5@1
  ItemInstance *v4; // r5@1
  void *v5; // r0@4
  unsigned int *v6; // r2@6
  signed int v7; // r1@8
  int v8; // [sp+4h] [bp-24h]@2
  int v9; // [sp+Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  v4 = (Vex *)((char *)v3 + 3512);
  if ( !ItemInstance::isNull(v4) )
  {
    sub_21E94B4((void **)&v9, "ItemInHand");
    ItemInstance::save((ItemInstance *)&v8, v4);
    CompoundTag::putCompound((int)v2, (const void **)&v9, &v8);
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v8 = 0;
    v5 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v9 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  }
}
