

int __fastcall Mob::lerpTo(int a1, int a2, int a3, float a4)
{
  int v4; // r5@1
  float v5; // r6@1

  v4 = a1;
  v5 = a4;
  (*(void (**)(void))(*(_DWORD *)a1 + 112))();
  return j_j_j__ZN20MovementInterpolator20setHeadYawLerpTargetEf((MovementInterpolator *)(v4 + 4040), v5);
}


signed int __fastcall Mob::useNewAi(Mob *this)
{
  return 1;
}


int __fastcall Mob::setSpawnMethod(int result, int a2)
{
  *(_DWORD *)(result + 4288) = a2;
  return result;
}


void __fastcall Mob::readAdditionalSaveData(Mob *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  Mob *v3; // r4@1
  BaseAttributeMap *v4; // r6@1
  int v5; // r5@1
  int v6; // r6@1
  signed int v7; // r6@4
  void *v8; // r0@4
  ListTag *v9; // r0@6
  const CompoundTag *v10; // r5@7
  void *v11; // r0@9
  signed int v12; // r6@10
  void *v13; // r0@10
  ListTag *v14; // r0@12
  const CompoundTag *v15; // r5@13
  void *v16; // r0@15
  signed int v17; // r6@16
  void *v18; // r0@16
  AttributeInstance *v20; // r0@18
  void *v26; // r0@18
  signed int v27; // r6@19
  void *v28; // r0@19
  const ListTag *v29; // r0@21
  void *v30; // r0@21
  void *v31; // r0@22
  void *v32; // r0@23
  void *v33; // r0@24
  void *v34; // r0@25
  void *v35; // r0@26
  void *v36; // r0@27
  void *v37; // r0@28
  void *v38; // r0@29
  void *v39; // r0@30
  void *v40; // r0@31
  void *v41; // r0@32
  __int64 v42; // r6@33
  int v43; // r1@33
  void *v44; // r0@33
  signed int v45; // r6@36
  void *v46; // r0@36
  SharedAttributes *v47; // r5@38
  BaseAttributeMap *v48; // r0@38
  const ListTag *v49; // r2@38
  void *v50; // r0@38
  signed int v51; // r6@39
  void *v52; // r0@39
  ListTag *v53; // r6@41
  void *v54; // r0@41
  int v55; // r7@43
  CompoundTag *v56; // r0@44
  int v57; // r0@45
  int v58; // r0@47
  void *v60; // r0@50
  _BOOL4 v61; // r5@51
  void *v62; // r0@51
  unsigned int *v63; // r2@55
  signed int v64; // r1@57
  unsigned int *v65; // r2@59
  signed int v66; // r1@61
  unsigned int *v67; // r2@63
  signed int v68; // r1@65
  unsigned int *v69; // r2@67
  signed int v70; // r1@69
  unsigned int *v71; // r2@71
  signed int v72; // r1@73
  unsigned int *v73; // r2@75
  signed int v74; // r1@77
  unsigned int *v75; // r2@79
  signed int v76; // r1@81
  unsigned int *v77; // r2@83
  signed int v78; // r1@85
  unsigned int *v79; // r2@87
  signed int v80; // r1@89
  unsigned int *v81; // r2@91
  signed int v82; // r1@93
  unsigned int *v83; // r2@95
  signed int v84; // r1@97
  unsigned int *v85; // r2@99
  signed int v86; // r1@101
  unsigned int *v87; // r2@103
  signed int v88; // r1@105
  unsigned int *v89; // r2@107
  signed int v90; // r1@109
  unsigned int *v91; // r2@111
  signed int v92; // r1@113
  unsigned int *v93; // r2@115
  unsigned int *v94; // r2@119
  signed int v95; // r1@121
  unsigned int *v96; // r2@123
  signed int v97; // r1@125
  unsigned int *v98; // r2@127
  signed int v99; // r1@129
  unsigned int *v100; // r2@135
  signed int v101; // r1@137
  unsigned int *v102; // r2@143
  signed int v103; // r1@145
  unsigned int *v104; // r2@151
  signed int v105; // r1@153
  unsigned int *v106; // r2@159
  signed int v107; // r1@161
  unsigned int *v108; // r2@215
  signed int v109; // r1@217
  unsigned int *v110; // r2@223
  signed int v111; // r1@225
  unsigned int *v112; // r2@227
  signed int v113; // r1@229
  int v114; // [sp+4h] [bp-FCh]@51
  int v115; // [sp+Ch] [bp-F4h]@50
  char v116; // [sp+12h] [bp-EEh]@49
  char v117; // [sp+13h] [bp-EDh]@47
  char v118; // [sp+14h] [bp-ECh]@44
  int v119; // [sp+28h] [bp-D8h]@41
  int v120; // [sp+30h] [bp-D0h]@39
  int v121; // [sp+38h] [bp-C8h]@38
  int v122; // [sp+40h] [bp-C0h]@36
  int v123; // [sp+48h] [bp-B8h]@33
  int v124; // [sp+50h] [bp-B0h]@32
  int v125; // [sp+58h] [bp-A8h]@31
  int v126; // [sp+60h] [bp-A0h]@30
  int v127; // [sp+68h] [bp-98h]@29
  int v128; // [sp+70h] [bp-90h]@28
  int v129; // [sp+78h] [bp-88h]@27
  int v130; // [sp+80h] [bp-80h]@26
  int v131; // [sp+88h] [bp-78h]@25
  int v132; // [sp+90h] [bp-70h]@24
  int v133; // [sp+98h] [bp-68h]@23
  int v134; // [sp+A0h] [bp-60h]@22
  int v135; // [sp+A8h] [bp-58h]@21
  int v136; // [sp+B0h] [bp-50h]@19
  int v137; // [sp+B8h] [bp-48h]@18
  int v138; // [sp+C0h] [bp-40h]@16
  int v139; // [sp+C8h] [bp-38h]@12
  int v140; // [sp+D0h] [bp-30h]@10
  int v141; // [sp+D8h] [bp-28h]@6
  int v142; // [sp+E0h] [bp-20h]@4

  v2 = a2;
  v3 = this;
  Entity::readAdditionalSaveData(this, a2);
  v4 = (BaseAttributeMap *)*((_DWORD *)v3 + 992);
  v5 = BaseAttributeMap::begin(*((BaseAttributeMap **)v3 + 992));
  v6 = BaseAttributeMap::end(v4);
  while ( v5 != v6 )
  {
    AttributeInstance::resetToDefaultValue((AttributeInstance *)(v5 + 8));
    v5 = *(_DWORD *)v5;
  }
  sub_21E94B4((void **)&v142, "Mainhand");
  v7 = CompoundTag::contains((int)v2, (const void **)&v142, 9);
  v8 = (void *)(v142 - 12);
  if ( (int *)(v142 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v142 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
    }
    else
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v141, "Mainhand");
    v9 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v141);
    if ( v9 )
      v10 = (const CompoundTag *)ListTag::get(v9, 0);
      if ( (*(int (**)(void))(*(_DWORD *)v10 + 24))() == 10 )
        ItemInstance::load((Mob *)((char *)v3 + 3512), v10);
    v11 = (void *)(v141 - 12);
    if ( (int *)(v141 - 12) != &dword_28898C0 )
      v100 = (unsigned int *)(v141 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v101 = __ldrex(v100);
        while ( __strex(v101 - 1, v100) );
      }
      else
        v101 = (*v100)--;
      if ( v101 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v140, "Offhand");
  v12 = CompoundTag::contains((int)v2, (const void **)&v140, 9);
  v13 = (void *)(v140 - 12);
  if ( (int *)(v140 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v140 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v12 == 1 )
    sub_21E94B4((void **)&v139, "Offhand");
    v14 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v139);
    if ( v14 )
      v15 = (const CompoundTag *)ListTag::get(v14, 0);
      if ( (*(int (**)(void))(*(_DWORD *)v15 + 24))() == 10 )
        ItemInstance::load((Mob *)((char *)v3 + 3584), v15);
    v16 = (void *)(v139 - 12);
    if ( (int *)(v139 - 12) != &dword_28898C0 )
      v102 = (unsigned int *)(v139 - 4);
          v103 = __ldrex(v102);
        while ( __strex(v103 - 1, v102) );
        v103 = (*v102)--;
      if ( v103 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v138, "Health");
  v17 = CompoundTag::contains((int)v2, (const void **)&v138);
  v18 = (void *)(v138 - 12);
  if ( (int *)(v138 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v138 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  if ( v17 == 1 )
    sub_21E94B4((void **)&v137, "Health");
    _R5 = CompoundTag::getShort((int)v2, (const void **)&v137);
    v20 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v3 + 1000))(
                                 v3,
                                 &SharedAttributes::HEALTH);
    __asm
      VMOV            S0, R5
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    AttributeInstance::serializationSetValue(v20, _R1, 2, 3.4028e38);
    v26 = (void *)(v137 - 12);
    if ( (int *)(v137 - 12) != &dword_28898C0 )
      v104 = (unsigned int *)(v137 - 4);
          v105 = __ldrex(v104);
        while ( __strex(v105 - 1, v104) );
        v105 = (*v104)--;
      if ( v105 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v136, "Armor");
  v27 = CompoundTag::contains((int)v2, (const void **)&v136, 9);
  v28 = (void *)(v136 - 12);
  if ( (int *)(v136 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v136 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  if ( v27 == 1 )
    sub_21E94B4((void **)&v135, "Armor");
    v29 = (const ListTag *)CompoundTag::getList((int)v2, (const void **)&v135);
    Mob::loadArmor(v3, v29);
    v30 = (void *)(v135 - 12);
    if ( (int *)(v135 - 12) != &dword_28898C0 )
      v106 = (unsigned int *)(v135 - 4);
          v107 = __ldrex(v106);
        while ( __strex(v107 - 1, v106) );
        v107 = (*v106)--;
      if ( v107 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v134, "HurtTime");
  *((_DWORD *)v3 + 858) = CompoundTag::getShort((int)v2, (const void **)&v134);
  v31 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v134 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v133, "DeathTime");
  *((_DWORD *)v3 + 862) = CompoundTag::getShort((int)v2, (const void **)&v133);
  v32 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v133 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v132, "AttackTime");
  *((_DWORD *)v3 + 863) = CompoundTag::getShort((int)v2, (const void **)&v132);
  v33 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v132 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v33);
  sub_21E94B4((void **)&v131, "Persistent");
  *((_BYTE *)v3 + 3280) = CompoundTag::getBoolean((int)v2, (const void **)&v131);
  v34 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v131 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  sub_21E94B4((void **)&v130, "Surface");
  *((_BYTE *)v3 + 4161) = CompoundTag::getBoolean((int)v2, (const void **)&v130);
  v35 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v79 = (unsigned int *)(v130 - 4);
        v80 = __ldrex(v79);
      while ( __strex(v80 - 1, v79) );
      v80 = (*v79)--;
    if ( v80 <= 0 )
      j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v129, "NaturalSpawn");
  *((_BYTE *)v3 + 4162) = CompoundTag::getBoolean((int)v2, (const void **)&v129);
  v36 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v81 = (unsigned int *)(v129 - 4);
        v82 = __ldrex(v81);
      while ( __strex(v82 - 1, v81) );
      v82 = (*v81)--;
    if ( v82 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v128, "TargetID");
  *((_QWORD *)v3 + 409) = CompoundTag::getInt64((int)v2, (const void **)&v128);
  v37 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v83 = (unsigned int *)(v128 - 4);
        v84 = __ldrex(v83);
      while ( __strex(v84 - 1, v83) );
      v84 = (*v83)--;
    if ( v84 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  sub_21E94B4((void **)&v127, "hasBoundOrigin");
  *((_BYTE *)v3 + 4260) = CompoundTag::getBoolean((int)v2, (const void **)&v127);
  v38 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v85 = (unsigned int *)(v127 - 4);
        v86 = __ldrex(v85);
      while ( __strex(v86 - 1, v85) );
      v86 = (*v85)--;
    if ( v86 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  sub_21E94B4((void **)&v126, "boundX");
  *((_DWORD *)v3 + 1066) = CompoundTag::getInt((int)v2, (const void **)&v126);
  v39 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v87 = (unsigned int *)(v126 - 4);
        v88 = __ldrex(v87);
      while ( __strex(v88 - 1, v87) );
      v88 = (*v87)--;
    if ( v88 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v125, "boundY");
  *((_DWORD *)v3 + 1067) = CompoundTag::getInt((int)v2, (const void **)&v125);
  v40 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v89 = (unsigned int *)(v125 - 4);
        v90 = __ldrex(v89);
      while ( __strex(v90 - 1, v89) );
      v90 = (*v89)--;
    if ( v90 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  sub_21E94B4((void **)&v124, "boundZ");
  *((_DWORD *)v3 + 1068) = CompoundTag::getInt((int)v2, (const void **)&v124);
  v41 = (void *)(v124 - 12);
  if ( (int *)(v124 - 12) != &dword_28898C0 )
    v91 = (unsigned int *)(v124 - 4);
        v92 = __ldrex(v91);
      while ( __strex(v92 - 1, v91) );
      v92 = (*v91)--;
    if ( v92 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  sub_21E94B4((void **)&v123, "LeasherID");
  v42 = CompoundTag::getInt64((int)v2, (const void **)&v123);
  v43 = v123;
  v44 = (void *)(v123 - 12);
  if ( (int *)(v123 - 12) != &dword_28898C0 )
    v93 = (unsigned int *)(v123 - 4);
        v43 = __ldrex(v93);
      while ( __strex(v43 - 1, v93) );
      v43 = (*v93)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  if ( v42 )
    Entity::setLeashHolder((int)v3, v43, v42, HIDWORD(v42));
  sub_21E94B4((void **)&v122, "Attributes");
  v45 = CompoundTag::contains((int)v2, (const void **)&v122, 9);
  v46 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v94 = (unsigned int *)(v122 - 4);
        v95 = __ldrex(v94);
      while ( __strex(v95 - 1, v94) );
      v95 = (*v94)--;
    if ( v95 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  if ( v45 == 1 )
    v47 = (SharedAttributes *)*((_DWORD *)v3 + 992);
    sub_21E94B4((void **)&v121, "Attributes");
    v48 = (BaseAttributeMap *)CompoundTag::getList((int)v2, (const void **)&v121);
    SharedAttributes::loadAttributes(v47, v48, v49);
    v50 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v108 = (unsigned int *)(v121 - 4);
          v109 = __ldrex(v108);
        while ( __strex(v109 - 1, v108) );
        v109 = (*v108)--;
      if ( v109 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
  Mob::_verifyAttributes(v3);
  sub_21E94B4((void **)&v120, "ActiveEffects");
  v51 = CompoundTag::contains((int)v2, (const void **)&v120, 9);
  v52 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v96 = (unsigned int *)(v120 - 4);
        v97 = __ldrex(v96);
      while ( __strex(v97 - 1, v96) );
      v97 = (*v96)--;
    if ( v97 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
  if ( v51 == 1 )
    sub_21E94B4((void **)&v119, "ActiveEffects");
    v53 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v119);
    v54 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
      v110 = (unsigned int *)(v119 - 4);
          v111 = __ldrex(v110);
        while ( __strex(v111 - 1, v110) );
        v111 = (*v110)--;
      if ( v111 <= 0 )
        j_j_j_j__ZdlPv_9(v54);
    if ( ListTag::size(v53) > 0 )
      v55 = 0;
        v56 = (CompoundTag *)ListTag::get(v53, v55);
        MobEffectInstance::load((MobEffectInstance *)&v118, v56);
        Mob::addEffect(v3, (const MobEffectInstance *)&v118);
        ++v55;
      while ( v55 < ListTag::size(v53) );
  v57 = *(_DWORD *)(*((_DWORD *)v3 + 12) + 288);
  if ( v57 )
    LOBYTE(v57) = 1;
  v117 = v57;
  _tryLoadComponent<Mob,bool,BreathableComponent>((unsigned int)v3, &v117, (BreathableComponent **)v3 + 780, v2);
  v58 = *(_DWORD *)(*((_DWORD *)v3 + 12) + 296);
  if ( v58 )
    LOBYTE(v58) = 1;
  v116 = v58;
  _tryLoadComponent<Mob,bool,BreedableComponent>((int)v3, &v116, (BreedableComponent **)v3 + 781, v2);
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v3 + 1168))(v3) == 1 )
    sub_21E94B4((void **)&v115, "BodyRot");
    _R0 = CompoundTag::getFloat((int)v2, (const void **)&v115);
      VMOV            S0, R0
      VSTR            S0, [R1]
    v60 = (void *)(v115 - 12);
    if ( (int *)(v115 - 12) != &dword_28898C0 )
      v112 = (unsigned int *)(v115 - 4);
          v113 = __ldrex(v112);
        while ( __strex(v113 - 1, v112) );
        v113 = (*v112)--;
      if ( v113 <= 0 )
        j_j_j_j__ZdlPv_9(v60);
  sub_21E94B4((void **)&v114, "WantsToBeJockey");
  v61 = CompoundTag::getBoolean((int)v2, (const void **)&v114);
  v62 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v98 = (unsigned int *)(v114 - 4);
        v99 = __ldrex(v98);
      while ( __strex(v99 - 1, v98) );
      v99 = (*v98)--;
    if ( v99 <= 0 )
      j_j_j_j__ZdlPv_9(v62);
  if ( v61 == 1 )
    *((_BYTE *)v3 + 4172) = 1;
}


signed int __fastcall Mob::_removeWhenFarAway(Mob *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 3280);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall Mob::getArmorCoverPercentage(Mob *this)
{
  Mob *v1; // r4@1
  signed int v2; // r5@1
  int result; // r0@7

  v1 = this;
  v2 = ItemInstance::isNull((Mob *)((char *)this + 3664));
  ItemInstance::isNull((Mob *)((char *)v1 + 3736));
  _R5 = v2 ^ 1;
  __asm { VMOV.F32        S16, #0.25 }
  if ( _ZF )
    ++_R5;
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3808)) )
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3880)) )
  __asm
  {
    VMOV            S0, R5
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Mob::outOfWorld(Mob *this)
{
  Entity *v1; // r4@1
  char v3; // [sp+8h] [bp-18h]@1

  v1 = this;
  *((_DWORD *)this + 56) = 0;
  EntityDamageSource::EntityDamageSource((int)&v3, 12);
  Entity::hurt(v1, (const EntityDamageSource *)&v3, 4, 1, 0);
  return EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v3);
}


int __fastcall Mob::knockback(Mob *this, Entity *a2, int a3, float a4, float a5, float a6)
{
  AttributeInstance *v9; // r0@1
  int result; // r0@1
  float v11; // r1@1

  _R4 = this;
  _R5 = a4;
  _R6 = Random::_genRandInt32((Mob *)((char *)this + 552));
  v9 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R4 + 1004))(
                              _R4,
                              &SharedAttributes::KNOCKBACK_RESISTANCE);
  result = AttributeInstance::getCurrentValue(v9);
  __asm
  {
    VMOV            S0, R6
    VLDR            D1, =2.32830644e-10
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VMOV            S2, R0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    __asm
    {
      VMOV            S18, R5
      VLDR            S20, [SP,#0x28+arg_0]
      VLDR            S16, [SP,#0x28+arg_4]
      VMUL.F32        S0, S18, S18
      VMUL.F32        S2, S20, S20
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    result = mce::Math::invSqrt(_R0, v11);
      VLDR            S0, =0.4
      VMOV.F32        S6, #0.5
      VLDR            S12, [R4,#0x70]
      VMOV            S8, R0
      VMUL.F32        S2, S16, S0
      VLDR            S10, [R4,#0x6C]
      VLDR            S14, [R4,#0x74]
      VMUL.F32        S12, S12, S6
      VMUL.F32        S10, S10, S6
      VMUL.F32        S4, S2, S18
      VMUL.F32        S2, S2, S20
      VMUL.F32        S6, S14, S6
      VMUL.F32        S4, S4, S8
      VMUL.F32        S2, S2, S8
      VADD.F32        S8, S12, S0
      VSUB.F32        S4, S10, S4
      VSUB.F32        S2, S6, S2
      VCMPE.F32       S8, S0
      VMRS            APSR_nzcv, FPSCR
      VSTR            S4, [R4,#0x6C]
      VSTR            S8, [R4,#0x70]
      VSTR            S2, [R4,#0x74]
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      result = 1053609165;
      *((_DWORD *)_R4 + 28) = 1053609165;
  return result;
}


__int64 *__fastcall Mob::buildDebugInfo(int a1, const void **a2)
{
  int v2; // r5@1
  const void **v3; // r4@1
  int v4; // r0@1
  AttributeInstance *v5; // r0@3
  AttributeInstance *v7; // r0@3
  AttributeInstance *v13; // r0@3
  void *v17; // r0@3
  void *v18; // r0@4
  int v20; // r2@6
  signed int v21; // r1@8
  unsigned int *v22; // r2@10
  signed int v23; // r1@12
  int v24; // [sp+0h] [bp-38h]@4
  int v25; // [sp+4h] [bp-34h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 )
  {
    sub_21E72F0(a2, (const void **)(v4 + 32));
    sub_21E7408(v3, "\n", 1u);
  }
  v5 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1004))(
                              v2,
                              &SharedAttributes::MOVEMENT_SPEED);
  _R6 = AttributeInstance::getCurrentValue(v5);
  v7 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1004))(v2, &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getCurrentValue(v7);
  __asm { VMOV            S16, R0 }
  v13 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v2 + 1004))(v2, &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getMaxValue(v13);
  __asm
    VMOV            S0, R0
    VCVTR.S32.F32   S2, S16
    VCVTR.S32.F32   S0, S0
    VMOV            R2, S2
    VMOV            R3, S0
  Util::format((Util *)&v25, "Health: %d/%d\n", _R2);
  sub_21E72F0(v3, (const void **)&v25);
  __asm { VMOV            S16, R6 }
  v17 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = v25 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v21 = __ldrex((unsigned int *)_R2);
        HIDWORD(_R2) = v21 - 1;
      }
      while ( __strex(v21 - 1, (unsigned int *)_R2) );
    }
    else
      v21 = *(_DWORD *)_R2;
      HIDWORD(_R2) = *(_DWORD *)_R2 - 1;
      *(_DWORD *)_R2 = HIDWORD(_R2);
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
    VCVT.F64.F32    D0, S16
    VMOV            R2, R3, D0
  Util::format((Util *)&v24, "Speed: %f\n", _R2);
  sub_21E72F0(v3, (const void **)&v24);
  v18 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  return GoalSelector::buildDebugInfo((__int64 *)(v2 + 4124), v3);
}


int __fastcall Mob::canBeControlledByRider(Mob *this)
{
  return 0;
}


Entity *__fastcall Mob::~Mob(Mob *this)
{
  Mob *v1; // r4@1
  char *v2; // r6@1
  int v3; // r0@1
  int v4; // r0@3
  int v5; // r0@5
  int v6; // r0@7
  unsigned int *v7; // r2@8
  unsigned int v8; // r1@10
  GoalSelector::InternalGoal *v9; // r5@15
  GoalSelector::InternalGoal *v10; // r0@15
  GoalSelector::InternalGoal *v11; // r5@20
  GoalSelector::InternalGoal *v12; // r0@20
  int v13; // r0@25
  int v14; // r0@27
  void *v15; // r0@29
  int v16; // r1@31
  void *v17; // r0@33
  void *v18; // r0@35
  int v19; // r0@37
  void *v20; // r0@39
  void *v21; // r0@41
  int v22; // r0@43
  void *v23; // r0@45
  void *v24; // r0@47
  int v25; // r0@49
  void *v26; // r0@51
  void *v27; // r0@53
  int v28; // r0@55
  void *v29; // r0@57
  void *v30; // r0@59
  int v31; // r0@61
  void *v32; // r0@63
  void *v33; // r0@65
  int v34; // r0@67

  v1 = this;
  v2 = (char *)this + 4284;
  *(_DWORD *)this = &off_26F4F74;
  *((_DWORD *)this + 994) = *((_DWORD *)this + 993);
  v3 = *((_DWORD *)this + 1071);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *(_DWORD *)v2 = 0;
  v4 = *((_DWORD *)v1 + 1070);
  if ( v4 )
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  *((_DWORD *)v1 + 1070) = 0;
  v5 = *((_DWORD *)v1 + 1069);
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  *((_DWORD *)v1 + 1069) = 0;
  v6 = *((_DWORD *)v1 + 1042);
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 8);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      (*(void (**)(void))(*(_DWORD *)v6 + 12))();
  }
  v9 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1035);
  v10 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1034);
  if ( v10 != v9 )
    do
      v10 = (GoalSelector::InternalGoal *)((char *)GoalSelector::InternalGoal::~InternalGoal(v10) + 12);
    while ( v9 != v10 );
    v10 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1034);
  if ( v10 )
    operator delete((void *)v10);
  v11 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1032);
  v12 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1031);
  if ( v12 != v11 )
      v12 = (GoalSelector::InternalGoal *)((char *)GoalSelector::InternalGoal::~InternalGoal(v12) + 12);
    while ( v11 != v12 );
    v12 = (GoalSelector::InternalGoal *)*((_DWORD *)v1 + 1031);
  if ( v12 )
    operator delete((void *)v12);
  std::unique_ptr<Sensing,std::default_delete<Sensing>>::~unique_ptr((_DWORD *)v1 + 1030);
  v13 = *((_DWORD *)v1 + 1029);
  if ( v13 )
    (*(void (**)(void))(*(_DWORD *)v13 + 4))();
  *((_DWORD *)v1 + 1029) = 0;
  v14 = *((_DWORD *)v1 + 1028);
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  *((_DWORD *)v1 + 1028) = 0;
  v15 = (void *)*((_DWORD *)v1 + 993);
  if ( v15 )
    operator delete(v15);
  v16 = *((_DWORD *)v1 + 992);
  if ( v16 )
    std::default_delete<BaseAttributeMap>::operator()((int)v1 + 3968, v16);
  *((_DWORD *)v1 + 992) = 0;
  v17 = (void *)*((_DWORD *)v1 + 983);
  if ( v17 )
    operator delete(v17);
  v18 = (void *)*((_DWORD *)v1 + 979);
  if ( v18 )
    operator delete(v18);
  v19 = *((_DWORD *)v1 + 972);
  if ( v19 )
    (*(void (**)(void))(*(_DWORD *)v19 + 4))();
  *((_DWORD *)v1 + 972) = 0;
  v20 = (void *)*((_DWORD *)v1 + 965);
  if ( v20 )
    operator delete(v20);
  v21 = (void *)*((_DWORD *)v1 + 961);
  if ( v21 )
    operator delete(v21);
  v22 = *((_DWORD *)v1 + 954);
  if ( v22 )
    (*(void (**)(void))(*(_DWORD *)v22 + 4))();
  *((_DWORD *)v1 + 954) = 0;
  v23 = (void *)*((_DWORD *)v1 + 947);
  if ( v23 )
    operator delete(v23);
  v24 = (void *)*((_DWORD *)v1 + 943);
  if ( v24 )
    operator delete(v24);
  v25 = *((_DWORD *)v1 + 936);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  *((_DWORD *)v1 + 936) = 0;
  v26 = (void *)*((_DWORD *)v1 + 929);
  if ( v26 )
    operator delete(v26);
  v27 = (void *)*((_DWORD *)v1 + 925);
  if ( v27 )
    operator delete(v27);
  v28 = *((_DWORD *)v1 + 918);
  if ( v28 )
    (*(void (**)(void))(*(_DWORD *)v28 + 4))();
  *((_DWORD *)v1 + 918) = 0;
  v29 = (void *)*((_DWORD *)v1 + 909);
  if ( v29 )
    operator delete(v29);
  v30 = (void *)*((_DWORD *)v1 + 905);
  if ( v30 )
    operator delete(v30);
  v31 = *((_DWORD *)v1 + 898);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  *((_DWORD *)v1 + 898) = 0;
  v32 = (void *)*((_DWORD *)v1 + 891);
  if ( v32 )
    operator delete(v32);
  v33 = (void *)*((_DWORD *)v1 + 887);
  if ( v33 )
    operator delete(v33);
  v34 = *((_DWORD *)v1 + 880);
  if ( v34 )
    (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  *((_DWORD *)v1 + 880) = 0;
  return j_j_j__ZN6EntityD2Ev_0(v1);
}


int __fastcall Mob::healEffects(int result, int a2)
{
  *(_DWORD *)(result + 420) = 10;
  return result;
}


signed int __fastcall Mob::hasAnyEffects(Mob *this)
{
  int *v1; // r4@1
  int *v2; // r6@1
  signed int result; // r0@4

  v1 = (int *)*((_DWORD *)this + 993);
  v2 = (int *)*((_DWORD *)this + 994);
  if ( v1 == v2 )
  {
    result = 0;
  }
  else
    while ( MobEffectInstance::operator!=(v1, &MobEffectInstance::NO_EFFECT) != 1 )
    {
      v1 += 4;
      if ( v2 == v1 )
        return 0;
    }
    result = 1;
  return result;
}


void __fastcall Mob::hurtArmor(Mob *this, int a2)
{
  Mob::hurtArmor(this, a2);
}


unsigned int __fastcall Mob::updateAi(Mob *this)
{
  Dimension *v2; // r0@1
  Dimension *v8; // r0@3
  Entity *v9; // r0@3
  int v11; // r7@7
  int v12; // r0@7
  Entity *v13; // r6@7
  void (__fastcall *v14)(Mob *, Entity *); // r5@8
  int v15; // r0@8
  int v20; // r6@16
  unsigned int result; // r0@16

  _R4 = this;
  ++*((_DWORD *)this + 999);
  v2 = (Dimension *)Entity::getDimension(this);
  Dimension::fetchNearestPlayer(v2, _R4, -1.0);
  *((_DWORD *)_R4 + 1037) = 0;
  *((_DWORD *)_R4 + 1038) = 0;
  _R0 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VLDR            S2, =0.02
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v8 = (Dimension *)Entity::getDimension(_R4);
    v9 = (Entity *)Dimension::fetchNearestPlayer(v8, _R4, 8.0);
    if ( v9 )
    {
      *((_QWORD *)_R4 + 523) = *(_QWORD *)Entity::getUniqueID(v9);
      *((_DWORD *)_R4 + 866) = Random::_genRandInt32((Mob *)((char *)_R4 + 552)) % 0x14 + 10;
    }
    else
      _R0 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
      __asm
      {
        VMOV            S0, R0
        VMOV.F32        S2, #-0.5
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VMOV.F32        S4, #20.0
        VADD.F32        S0, S0, S2
        VMUL.F32        S0, S0, S4
        VSTR            S0, [R0]
      }
  if ( (*((_DWORD *)_R4 + 1047) & *((_DWORD *)_R4 + 1046)) == -1 )
    _R0 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
    __asm
      VMOV            S0, R0
      VLDR            S2, =0.05
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      _R0 = (int)_R4 + 4156;
      __asm { VLDR            S0, [R0] }
      VLDR            S2, [R4,#0x7C]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x7C]
    *((_DWORD *)_R4 + 30) = *((_DWORD *)_R4 + 1000);
  else
    v11 = (int)_R4 + 4184;
    v12 = Entity::getLevel(_R4);
    v13 = (Entity *)Level::fetchEntity(v12, 0, *(_QWORD *)v11, *(_QWORD *)v11 >> 32, 0);
    *(_DWORD *)v11 = -1;
    *(_DWORD *)(v11 + 4) = -1;
    if ( v13 )
      v14 = *(void (__fastcall **)(Mob *, Entity *))(*(_DWORD *)_R4 + 880);
      (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 940))(_R4);
      v14(_R4, v13);
      v15 = *((_DWORD *)_R4 + 866);
      _VF = __OFSUB__(v15--, 1);
      *((_DWORD *)_R4 + 866) = v15;
      if ( (v15 < 0) ^ _VF )
        goto LABEL_27;
      if ( Entity::isRemoved(v13) )
      _R0 = Entity::distanceToSqr(v13, _R4);
        VLDR            S0, =64.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_27:
        *(_DWORD *)v11 = -1;
        *((_DWORD *)_R4 + 1047) = -1;
      else
        *(_QWORD *)v11 = *(_QWORD *)Entity::getUniqueID(v13);
  v20 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 208))(_R4);
  result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 216))(_R4);
  if ( v20 || result == 1 )
    result = *((_BYTE *)_R4 + 3472);
    if ( *((_BYTE *)_R4 + 3472) )
      result = Entity::isSwimmer(_R4);
      if ( !result )
        _R0 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
        __asm
        {
          VMOV            S0, R0
          VLDR            S2, =0.8
        }
        result = 0;
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D8
          VCVT.F32.F64    S0, D0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          result = 1;
        *((_BYTE *)_R4 + 4080) = result;
  return result;
}


int __fastcall Mob::tickDeath(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@1
  Level *v3; // r0@3
  Player *v4; // r8@4
  const Vec3 *v5; // r6@4
  signed int v6; // r7@4
  signed int v7; // r0@4
  int v8; // r3@4

  v1 = this;
  result = *((_DWORD *)this + 862);
  *((_DWORD *)v1 + 862) = result + 1;
  if ( result >= 20 )
  {
    result = 4180;
    if ( !*((_BYTE *)v1 + 4180) )
    {
      v3 = (Level *)Entity::getLevel(v1);
      if ( !Level::isClientSide(v3) )
      {
        v4 = (Player *)Entity::getRegion(v1);
        v5 = (const Vec3 *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 52))(v1);
        v6 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 1152))(v1);
        v7 = Entity::hasCategory((int)v1, 1);
        v8 = 2;
        if ( v7 )
          v8 = 3;
        ExperienceOrb::spawnOrbs(v4, v5, v6, v8, 0);
      }
      *((_BYTE *)v1 + 4180) = 1;
      if ( Entity::hasCategory((int)v1, 1) == 1 )
        Entity::setStatusFlag((int)v1, 14, 0);
        Entity::setStatusFlag((int)v1, 5, 1);
      else
        (*(void (__fastcall **)(Mob *))(*(_DWORD *)v1 + 44))(v1);
      result = j_j_j__ZN6Entity19spawnDeathParticlesEv(v1);
    }
  }
  return result;
}


signed int __fastcall Mob::canBePulledIntoVehicle(Mob *this)
{
  return 1;
}


int __fastcall Mob::setYRotA(int result, float a2)
{
  *(float *)(result + 4156) = a2;
  return result;
}


char *__fastcall Mob::getAllEffects(Mob *this)
{
  return (char *)this + 3972;
}


BoostableComponent *__fastcall Mob::_removeRider(Mob *this, Entity *a2, bool a3)
{
  bool v3; // r5@1
  Entity *v4; // r6@1
  Entity *v5; // r4@1
  int v6; // r7@1
  BoostableComponent *result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = Entity::isControlledByLocalInstance(this);
  result = Entity::_removeRider(v5, v4, v3);
  if ( v6 == 1 )
  {
    result = (BoostableComponent *)Entity::isControlledByLocalInstance(v5);
    if ( !result )
      result = (BoostableComponent *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 1188))(v5);
  }
  return result;
}


int __fastcall Mob::setLastHurtMob(Mob *this, Entity *a2)
{
  Entity *v2; // r5@1
  Mob *v3; // r4@1
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( Entity::hasCategory((int)a2, 2) == 1 )
    *((_QWORD *)v3 + 524) = *(_QWORD *)Entity::getUniqueID(v2);
  result = *((_DWORD *)v3 + 104);
  *((_DWORD *)v3 + 1058) = result;
  return result;
}


int __fastcall Mob::playerTouch(Mob *this, Player *a2)
{
  Entity *v2; // r4@1

  v2 = this;
  Entity::playerTouch(this, a2);
  return j_j_j__ZN6Entity13setPersistentEv_0(v2);
}


int __fastcall Mob::setRiderLockedBodyRot(int result, float a2)
{
  *(float *)(result + 4032) = a2;
  return result;
}


signed int __fastcall Mob::_isFloorMagma(Mob *this, const BlockPos *a2)
{
  const BlockPos *v2; // r4@1
  const BlockPos *v3; // r0@1
  int v4; // r2@1
  int v5; // r3@1
  signed int result; // r0@1
  unsigned __int8 v7; // [sp+0h] [bp-18h]@1
  int v8; // [sp+4h] [bp-14h]@1
  int v9; // [sp+8h] [bp-10h]@1
  int v10; // [sp+Ch] [bp-Ch]@1

  v2 = a2;
  v3 = (const BlockPos *)Entity::getRegion(this);
  v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  v8 = *(_DWORD *)v2;
  v9 = v4 - 1;
  v10 = v5;
  BlockSource::getBlockID((BlockSource *)&v7, v3, (int)&v8);
  result = 0;
  if ( v7 == *(_BYTE *)(Block::mMagmaBlock + 4) )
    result = 1;
  return result;
}


void __fastcall Mob::_addSpeedBonus(int a1, const mce::UUID *a2, int a3, int a4)
{
  int v4; // r6@1
  const mce::UUID *v5; // r5@1
  int v6; // r4@1
  AttributeInstance *v7; // r0@1
  AttributeInstance *v8; // r6@1
  int v9; // r4@1
  unsigned int *v10; // r1@2
  unsigned int v11; // r0@4
  unsigned int *v12; // r5@8
  unsigned int v13; // r0@10
  int v14; // [sp+Ch] [bp-2Ch]@1
  int v15; // [sp+10h] [bp-28h]@1
  char v16; // [sp+14h] [bp-24h]@1
  int v17; // [sp+18h] [bp-20h]@1
  int v18; // [sp+1Ch] [bp-1Ch]@1
  char v19; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v18 = a4;
  v5 = a2;
  v6 = a3;
  v7 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)a1 + 1000))();
  AttributeInstance::removeModifier(v7, v5);
  v8 = (AttributeInstance *)(*(int (__fastcall **)(int, void *))(*(_DWORD *)v4 + 1000))(
                              v4,
                              &SharedAttributes::MOVEMENT_SPEED);
  v14 = 2;
  v15 = 2;
  std::__shared_ptr<AttributeModifier,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AttributeModifier>,mce::UUID const&,std::string const&,float &,int,int>(
    (int)&v16,
    (int)&v19,
    (int)v5,
    v6,
    (int)&v18,
    &v15,
    &v14);
  AttributeInstance::addModifier(v8, (const AttributeModifier **)&v16);
  v9 = v17;
  if ( v17 )
  {
    v10 = (unsigned int *)(v17 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  }
}


int __fastcall Mob::getCurrentSwingDuration(Mob *this)
{
  Mob *v1; // r4@1
  MobEffect *v2; // r5@1
  unsigned int v3; // r6@1
  int v4; // r0@2
  int v5; // r0@3
  int v6; // r1@3
  unsigned int v7; // r6@4
  MobEffect *v8; // r5@4
  int v9; // r0@5
  MobEffectInstance *v10; // r0@6
  MobEffect *v11; // r5@7
  unsigned int v12; // r6@7
  int v13; // r0@8
  int v14; // r0@9
  int v15; // r1@9
  unsigned int v16; // r6@10
  MobEffect *v17; // r5@10
  int v18; // r0@11
  MobEffectInstance *v19; // r0@12
  int result; // r0@13

  v1 = this;
  v2 = (MobEffect *)MobEffect::DIG_SPEED;
  v3 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  if ( v3 > MobEffect::getId((MobEffect *)MobEffect::DIG_SPEED)
    && (v4 = MobEffect::getId(v2),
        MobEffectInstance::operator!=((int *)(*((_DWORD *)v1 + 993) + 16 * v4), &MobEffectInstance::NO_EFFECT) == 1)
    && (v5 = MobEffect::getId(v2), v6 = *((_DWORD *)v1 + 993), v6 + 16 * v5) )
  {
    v7 = (*((_DWORD *)v1 + 994) - v6) >> 4;
    v8 = (MobEffect *)MobEffect::DIG_SPEED;
    if ( v7 <= MobEffect::getId((MobEffect *)MobEffect::DIG_SPEED) )
    {
      v10 = 0;
    }
    else
      v9 = MobEffect::getId(v8);
      if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)v1 + 993) + 16 * v9), &MobEffectInstance::NO_EFFECT) == 1 )
        v10 = (MobEffectInstance *)(*((_DWORD *)v1 + 993) + 16 * MobEffect::getId(v8));
      else
        v10 = 0;
    result = 5 - MobEffectInstance::getAmplifier(v10);
  }
  else
    v11 = (MobEffect *)MobEffect::DIG_SLOWDOWN;
    v12 = (*((_DWORD *)v1 + 994) - *((_DWORD *)v1 + 993)) >> 4;
    if ( v12 > MobEffect::getId((MobEffect *)MobEffect::DIG_SLOWDOWN)
      && (v13 = MobEffect::getId(v11),
          MobEffectInstance::operator!=((int *)(*((_DWORD *)v1 + 993) + 16 * v13), &MobEffectInstance::NO_EFFECT) == 1)
      && (v14 = MobEffect::getId(v11), v15 = *((_DWORD *)v1 + 993), v15 + 16 * v14) )
      v16 = (*((_DWORD *)v1 + 994) - v15) >> 4;
      v17 = (MobEffect *)MobEffect::DIG_SLOWDOWN;
      if ( v16 <= MobEffect::getId((MobEffect *)MobEffect::DIG_SLOWDOWN) )
      {
        v19 = 0;
      }
        v18 = MobEffect::getId(v17);
        if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)v1 + 993) + 16 * v18), &MobEffectInstance::NO_EFFECT) == 1 )
          v19 = (MobEffectInstance *)(*((_DWORD *)v1 + 993) + 16 * MobEffect::getId(v17));
        else
          v19 = 0;
      result = 2 * MobEffectInstance::getAmplifier(v19) + 8;
      result = 6;
  return result;
}


int __fastcall Mob::calcMoveRelativeSpeed(int a1, int a2)
{
  int v10; // r0@12
  __int64 v11; // r5@12
  float v13; // r1@12
  float v14; // r1@12
  int v15; // r0@12
  BlockSource *v16; // r6@12
  Block *v17; // r5@12
  int result; // r0@19
  __int64 v22; // [sp+4h] [bp-3Ch]@12
  int v23; // [sp+Ch] [bp-34h]@12

  _R4 = a1;
  if ( a2 == 2 )
  {
    v10 = mce::Math::floor(*(mce::Math **)(a1 + 72), COERCE_FLOAT(2));
    __asm { VLDR            S0, =-0.1 }
    LODWORD(v11) = v10;
    __asm
    {
      VLDR            S2, [R4,#0x10C]
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    }
    HIDWORD(v11) = mce::Math::floor(_R0, v13);
    v15 = mce::Math::floor(*(mce::Math **)(_R4 + 80), v14);
    v22 = v11;
    v23 = v15;
    v16 = (BlockSource *)Entity::getRegion((Entity *)_R4);
    v17 = (Block *)BlockSource::getBlock(v16, (const BlockPos *)&v22);
    if ( Block::isType(v17, (const Block *)Block::mAir) == 1 )
      --HIDWORD(v22);
      v17 = (Block *)BlockSource::getBlock(v16, (const BlockPos *)&v22);
    Block::isType(v17, (const Block *)Block::mAir);
      VLDR            S16, =0.546
      VMOV.F32        S0, S16
    if ( _ZF )
      _R0 = (*(int (__fastcall **)(Block *, int, __int64 *))(*(_DWORD *)v17 + 360))(v17, _R4, &v22);
      __asm
      {
        VLDR            S0, =0.91
        VMOV            S2, R0
        VMUL.F32        S0, S2, S0
      }
      VDIV.F32        S0, S16, S0
      VMUL.F32        S2, S0, S0
      VMUL.F32        S16, S2, S0
    _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 820))(_R4);
      VMOV            S0, R0
      VMUL.F32        S16, S16, S0
  }
  else
    __asm { VLDR            S16, =0.02 }
    if ( a2 != 1 )
      if ( a2 )
        _R0 = a1 + 4008;
        __asm { VLDR            S16, [R0] }
      else
        _R0 = EnchantUtils::getBestEnchantLevel((EnchantUtils *)7, a1, 3);
        __asm
        {
          VMOV            S0, R0
          VLDR            S18, =0.0
          VCVT.F32.S32    S22, S0
          VCMPE.F32       S22, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S18, S22 }
        _R0 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 28) + 20))();
          VCVT.F32.S32    S20, S0
          VMOV.F32        S0, #0.5
          VCMPE.F32       S22, S20
          __asm { VMOVGT.F32      S18, S20 }
        __asm { VMUL.F32        S0, S18, S0 }
        if ( !*(_BYTE *)(_R4 + 216) )
          __asm { VMOVEQ.F32      S18, S0 }
          VCMPE.F32       S18, #0.0
          _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 820))(_R4);
          __asm
          {
            VLDR            S0, =-0.02
            VMOV            S2, R0
            VADD.F32        S0, S2, S0
            VLDR            S2, =0.02
            VMUL.F32        S0, S0, S18
            VDIV.F32        S0, S0, S20
            VADD.F32        S16, S0, S2
          }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall Mob::applyFinalFriction(int result, float _R1)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x6C]
    VMUL.F32        S2, S2, S0
    VSTR            S2, [R0,#0x6C]
    VLDR            S2, [R0,#0x74]
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R0,#0x74]
  }
  return result;
}


void __fastcall Mob::die(Mob *this, const EntityDamageSource *a2)
{
  Mob::die(this, a2);
}


float __fastcall Mob::causeFallDamage(Mob *this, float _R1)
{
  MobEffect *v7; // r5@1
  unsigned int v8; // r6@1
  unsigned int v9; // r0@1
  int v10; // r0@2
  MobEffectInstance *v11; // r0@3
  AttributeInstance *v13; // r0@5
  float result; // r0@5
  void (__fastcall *v17)(Mob *, signed int, char *, signed int); // r7@6
  signed int v18; // r1@6
  int v20; // r5@9
  float v21; // r1@9
  int v22; // r6@9
  float v24; // r1@9
  int v25; // r7@9
  float v26; // r1@9
  int v27; // r0@9
  void (__fastcall *v28)(Mob *, signed int, char *, _DWORD); // r5@9
  char v29; // [sp+4h] [bp-4Ch]@9
  unsigned __int8 v30; // [sp+10h] [bp-40h]@9
  char v31; // [sp+14h] [bp-3Ch]@8
  char v32; // [sp+1Ch] [bp-34h]@6

  _R4 = this;
  __asm { VMOV            S16, R1 }
  v7 = (MobEffect *)MobEffect::JUMP;
  v8 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  v9 = MobEffect::getId((MobEffect *)MobEffect::JUMP);
  __asm { VLDR            S18, =0.0 }
  if ( v8 > v9 )
  {
    v10 = MobEffect::getId(v7);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)_R4 + 993) + 16 * v10), &MobEffectInstance::NO_EFFECT) == 1 )
    {
      v11 = (MobEffectInstance *)(*((_DWORD *)_R4 + 993) + 16 * MobEffect::getId(v7));
      if ( v11 )
      {
        _R0 = MobEffectInstance::getAmplifier(v11) + 1;
        __asm
        {
          VMOV            S0, R0
          VCVT.F32.S32    S18, S0
        }
      }
    }
  }
  v13 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R4 + 1004))(
                               _R4,
                               &SharedAttributes::FALL_DAMAGE);
  _R0 = AttributeInstance::getCurrentValue(v13);
  __asm
    VMOV.F32        S0, #-3.0
    VMOV            S2, R0
    VMUL.F32        S2, S2, S16
    VSUB.F32        S0, S0, S18
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  result = ceilf(_R0);
    VMOV            S16, R0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v17 = *(void (__fastcall **)(Mob *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
    Entity::getAttachPos((AABB *)&v32, (int)_R4, 0, 0);
    __asm { VMOV.F32        S0, #4.0 }
    v18 = 25;
    __asm
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v18 = 24;
    v17(_R4, v18, &v32, -1);
    EntityDamageSource::EntityDamageSource((int)&v31, 5);
      VCVTR.S32.F32   S0, S16
      VMOV            R2, S0
    Entity::hurt(_R4, (const EntityDamageSource *)&v31, _R2, 1, 0);
    if ( !(*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 288))(_R4) )
      v20 = Entity::getRegion(_R4);
      v22 = mce::Math::floor(*((mce::Math **)_R4 + 18), v21);
      __asm
        VLDR            S0, =-0.2
        VLDR            S2, [R4,#0x4C]
        VLDR            S4, [R4,#0x13C]
        VADD.F32        S0, S2, S0
        VSUB.F32        S0, S0, S4
        VMOV            R0, S0
      v25 = mce::Math::floor(_R0, v24);
      v27 = mce::Math::floor(*((mce::Math **)_R4 + 20), v26);
      BlockSource::getBlockID((BlockSource *)&v30, v20, v22, v25, v27);
      v28 = *(void (__fastcall **)(Mob *, signed int, char *, _DWORD))(*(_DWORD *)_R4 + 556);
      Entity::getAttachPos((AABB *)&v29, (int)_R4, 0, 0);
      v28(_R4, 9, &v29, v30);
    result = COERCE_FLOAT(EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v31));
  return result;
}


int __fastcall Mob::setTarget(Mob *this, Entity *a2)
{
  Entity *v2; // r5@1
  Mob *v3; // r4@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  result = Entity::setTarget(this, a2);
  if ( !v2 )
  {
    *((_DWORD *)v3 + 1051) = -1;
    *((_DWORD *)v3 + 1050) = -1;
    result = 4236;
    *((_DWORD *)v3 + 1059) = 0;
  }
  return result;
}


signed int __fastcall Mob::canExistWhenDisallowMob(Mob *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1072);
  result = 0;
  if ( v1 == 2 )
    result = 1;
  return result;
}


InstantaneousAttributeBuff *__fastcall Mob::heal(Mob *this, int a2)
{
  Mob *v2; // r5@1
  AttributeInstance *v4; // r0@1
  AttributeInstance *v11; // r0@3
  InstantaneousAttributeBuff *result; // r0@3
  int v14; // r0@4
  AttributeInstance *v15; // r5@4
  __int64 v16; // r2@4
  InstantaneousAttributeBuff *v18; // r0@4
  int v19; // r0@5
  AttributeInstance *v20; // r5@5
  __int64 v21; // r2@5
  int v23; // [sp+0h] [bp-80h]@4
  char v24; // [sp+38h] [bp-48h]@5

  v2 = this;
  _R4 = a2;
  v4 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v4);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  if ( _R0 < 1 || (*(int (__fastcall **)(Mob *))(*(_DWORD *)v2 + 856))(v2) )
    v11 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1004))(
                                 v2,
                                 &SharedAttributes::HEALTH);
    _R0 = AttributeInstance::getCurrentValue(v11);
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
    if ( (signed int)result < 1 )
      return result;
    v14 = (*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1000))(v2, &SharedAttributes::HEALTH);
    __asm { VMOV            S0, R4 }
    v15 = (AttributeInstance *)v14;
    __asm { VCVT.F32.S32    S0, S0 }
    LODWORD(v16) = 4;
    __asm { VMOV            R1, S0 }
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v23, _R1, v16);
    AttributeInstance::addBuff(v15, (const AttributeBuff *)&v23);
    v18 = (InstantaneousAttributeBuff *)&v23;
  else
    v19 = (*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1000))(v2, &SharedAttributes::HEALTH);
    v20 = (AttributeInstance *)v19;
    LODWORD(v21) = 3;
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v24, _R1, v21);
    AttributeInstance::addBuff(v20, (const AttributeBuff *)&v24);
    v18 = (InstantaneousAttributeBuff *)&v24;
  return InstantaneousAttributeBuff::~InstantaneousAttributeBuff(v18);
}


void __fastcall Mob::updateEquipment(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@1
  int v3; // r8@2
  int v4; // r0@2
  int v5; // r1@2
  int v6; // r9@2
  __int64 v7; // kr00_8@3
  void *v8; // r0@3
  void *v9; // r7@4
  void *v10; // r0@5
  void *v11; // r0@7
  int v12; // r0@9
  bool v13; // nf@15
  unsigned __int8 v14; // vf@15
  signed int v15; // r1@15
  int v16; // r7@19
  ItemInstance *v17; // r0@19
  bool v18; // nf@23
  unsigned __int8 v19; // vf@23
  int v20; // r0@27
  void *ptr; // [sp+4h] [bp-2Ch]@3
  void *v22; // [sp+8h] [bp-28h]@3

  v1 = this;
  v2 = *((_DWORD *)this + 782);
  if ( v2 )
  {
    v3 = (*(int (**)(void))(**(_DWORD **)(v2 + 4) + 44))();
    v4 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 372))(v1);
    v5 = *((_DWORD *)v1 + 794);
    v6 = v4;
    if ( v5 )
    {
      EquippableComponent::getSlot((EquippableComponent *)&ptr, v5, 0);
      v7 = *(_QWORD *)&ptr;
      v8 = ptr;
      if ( ptr != v22 )
      {
        v9 = ptr;
        do
        {
          v10 = (void *)*((_DWORD *)v9 + 13);
          if ( v10 )
            operator delete(v10);
          v11 = (void *)*((_DWORD *)v9 + 9);
          if ( v11 )
            operator delete(v11);
          v12 = *((_DWORD *)v9 + 2);
          if ( v12 )
            (*(void (**)(void))(*(_DWORD *)v12 + 4))();
          *((_DWORD *)v9 + 2) = 0;
          v9 = (char *)v9 + 72;
        }
        while ( (void *)HIDWORD(v7) != v9 );
        v8 = ptr;
      }
      if ( v8 )
        operator delete(v8);
      v14 = __OFSUB__(v3, 1);
      v13 = v3 - 1 < 0;
      v15 = 0;
      if ( v3 >= 1 )
        v14 = __OFSUB__(v6, 1);
        v13 = v6 - 1 < 0;
      if ( !(v13 ^ v14) && HIDWORD(v7) != (_DWORD)v7 )
        v16 = 0;
        v17 = (ItemInstance *)(*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 782) + 4) + 16))();
        if ( ItemInstance::getId(v17) == *(_WORD *)(Item::mSaddle + 18) )
          v16 = 1;
        Entity::setSaddle(v1, v16);
        v15 = 1;
    }
    else
    v19 = __OFSUB__(v15, v6);
    v18 = v15 - v6 < 0;
    if ( v15 < v6 )
      v19 = __OFSUB__(v15, v3);
      v18 = v15 - v3 < 0;
    if ( v18 ^ v19 )
      v20 = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 782) + 4) + 16))();
      (*(void (__fastcall **)(Mob *, signed int, int))(*(_DWORD *)v1 + 1024))(v1, 1, v20);
  }
}


int __fastcall Mob::stopRiding(Mob *this, int a2, int a3)
{
  *((_DWORD *)this + 1009) = 1127546880;
  return j_j_j__ZN6Entity10stopRidingEbb(this, a2, a3);
}


int __fastcall Mob::getArmorTypeHash(Mob *this)
{
  Mob *v1; // r4@1
  ItemInstance *v2; // r5@1
  int v3; // r6@1
  int v4; // r7@1
  int v5; // r7@1
  int v6; // r7@1
  int v7; // r7@1
  int v8; // r7@1
  signed int v9; // r0@1
  int v10; // r5@1

  v1 = this;
  v2 = (Mob *)((char *)this + 3664);
  v3 = -256 - *(_WORD *)(Item::mHelmet_leather + 18);
  v4 = v3 + ItemInstance::getId((Mob *)((char *)this + 3664));
  v5 = v4 + ((ItemInstance::isEnchanted(v2) << 21) ^ 0x200000);
  v6 = v5 + 32 * (ItemInstance::getId((Mob *)((char *)v1 + 3736)) + v3);
  v7 = v6 + ((ItemInstance::isEnchanted((Mob *)((char *)v1 + 3736)) << 22) ^ 0x400000);
  v8 = v7 + ((ItemInstance::getId((Mob *)((char *)v1 + 3808)) + v3) << 10);
  v9 = ItemInstance::isEnchanted((Mob *)((char *)v1 + 3808));
  v1 = (Mob *)((char *)v1 + 3880);
  v10 = v8 + ((v9 << 23) ^ 0x800000) + ((ItemInstance::getId(v1) + v3) << 15);
  return ((ItemInstance::isEnchanted(v1) << 24) ^ 0x1000000) + v10;
}


char *__fastcall Mob::getAllArmor(Mob *this, int a2)
{
  Mob *v2; // r9@1
  int v3; // r5@1
  char *v4; // r11@1
  int v5; // r6@1
  int v6; // r4@2
  char *result; // r0@2
  bool v8; // zf@2
  int v9; // r7@5
  _BYTE *v10; // r8@9
  char *v11; // r4@9
  signed int v12; // r0@9
  unsigned int v13; // r1@9
  unsigned int v14; // r0@11
  unsigned int v15; // r10@11

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = (char *)operator new(0x10u);
  v5 = 0;
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v4 + 16;
  do
  {
    v6 = v3 + v5;
    result = (char *)*(_BYTE *)(v3 + v5 + 3679);
    v8 = result == 0;
    if ( *(_BYTE *)(v3 + v5 + 3679) )
    {
      result = *(char **)(v6 + 3664);
      v8 = result == 0;
    }
    if ( !v8 )
      v9 = v6 + 3664;
      result = (char *)ItemInstance::isNull((ItemInstance *)(v6 + 3664));
      if ( !result )
      {
        result = (char *)*(_BYTE *)(v6 + 3678);
        if ( *(_BYTE *)(v6 + 3678) )
        {
          if ( v4 == *((char **)v2 + 2) )
          {
            v10 = *(_BYTE **)v2;
            v11 = 0;
            v12 = (signed int)&v4[-*(_DWORD *)v2];
            v13 = v12 >> 2;
            if ( !(v12 >> 2) )
              v13 = 1;
            v14 = v13 + (v12 >> 2);
            v15 = v14;
            if ( 0 != v14 >> 30 )
              v15 = 0x3FFFFFFF;
            if ( v14 < v13 )
            if ( v15 )
            {
              if ( v15 >= 0x40000000 )
                sub_21E57F4();
              v11 = (char *)operator new(4 * v15);
            }
            *(_DWORD *)&v11[v4 - v10] = v9;
            if ( (v4 - v10) >> 2 )
              _aeabi_memmove4(v11, v10);
            v4 = &v11[v4 - v10 + 4];
            if ( v10 )
              operator delete(v10);
            result = &v11[4 * v15];
            *(_DWORD *)v2 = v11;
            *((_DWORD *)v2 + 1) = v4;
            *((_DWORD *)v2 + 2) = result;
          }
          else
            *(_DWORD *)v4 = v9;
            result = (char *)*((_DWORD *)v2 + 1);
            v4 = result + 4;
            *((_DWORD *)v2 + 1) = result + 4;
        }
      }
    v5 += 72;
  }
  while ( v5 != 288 );
  return result;
}


int __fastcall Mob::initializeComponents(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r11@1
  int v4; // r0@5
  int v5; // r1@5
  int v6; // r0@9
  LookAtComponent *v7; // r4@15
  void *v8; // r0@16
  int v10; // r9@19
  BaseAttributeMap *v14; // r4@21
  const Attribute *v15; // r0@21
  AttributeInstance *v16; // r7@21
  int v19; // r0@22
  Attribute *v27; // r0@36
  int v28; // r0@36
  BaseAttributeMap *v35; // r5@51
  int v36; // r4@51
  int v37; // r5@51
  void *v38; // r0@55
  TeleportComponent *v39; // r4@59
  void *v40; // r0@60
  void *v41; // r0@63
  BoostableComponent *v42; // r4@67
  void *v43; // r0@68
  void *v44; // r0@71
  HealableComponent *v45; // r4@75
  void *v46; // r0@76
  void *v47; // r0@79
  int v48; // r0@82
  AngryComponent *v49; // r4@88
  void *v50; // r0@89
  void *v51; // r0@92
  int v52; // r0@95
  int v53; // r1@95
  int v54; // r1@97
  int v55; // r1@99
  int v56; // r1@101
  int v57; // r1@103
  int v58; // r1@105
  int v59; // r0@107
  float v60; // r4@108
  AttributeInstance *v61; // r0@108
  int v62; // r0@109
  bool v64; // zf@112
  Level *v65; // r0@115
  char *v66; // r4@115
  int v67; // r5@115
  int v68; // r0@115
  int v69; // r0@115
  Random *v70; // r4@115
  Level *v71; // r0@116
  LootTableContext::Builder *v72; // r0@116
  int v73; // r0@116
  ArmorItem *v74; // r5@116
  ArmorItem *v75; // r4@116
  const ItemInstance *v76; // r1@117
  int v77; // r0@118
  ArmorItem *v78; // r4@121
  void *v79; // r0@122
  void *v80; // r0@124
  int v81; // r0@126
  void *v82; // r0@132
  void *v83; // r4@133
  int v84; // r8@139
  int v85; // r9@140
  int **i; // r4@140
  int **v87; // r7@140
  MobEffect *v88; // r0@141
  int v89; // r6@142
  int v90; // r0@142
  int v91; // r0@144
  int v92; // r3@144
  int v93; // r6@144
  __int16 v94; // r2@144
  MobEffectInstance *v95; // r4@146
  int v96; // r0@147
  int v97; // r0@148
  int v98; // r0@151
  bool v99; // zf@151
  int v100; // r0@154
  int v101; // r0@156
  unsigned int v102; // r10@156
  unsigned int v103; // r7@157
  unsigned int v104; // r5@157
  __int64 v105; // r0@158
  void *v106; // r4@159
  int v107; // r0@159
  SwimMoveControl *v108; // r4@163
  int v109; // r0@163
  HopMoveControl *v110; // r4@167
  int v111; // r0@167
  SlimeMoveControl *v112; // r4@171
  int v113; // r0@171
  FlyMoveControl *v114; // r4@175
  int v115; // r0@175
  int v116; // r9@177
  int v117; // r0@181
  int v118; // r9@181
  bool v119; // zf@181
  int v120; // r0@184
  int v121; // r0@186
  unsigned int v122; // r10@186
  JumpControl **v123; // r7@187
  unsigned int v124; // r6@187
  unsigned int v125; // r5@187
  __int64 v126; // r0@188
  JumpControl *v127; // r4@189
  JumpControl *v128; // r0@192
  int v129; // r0@197
  bool v130; // zf@197
  int v131; // r0@200
  int v132; // r5@200
  int v133; // r0@202
  unsigned int v134; // r9@202
  unsigned int v135; // r7@203
  unsigned int v136; // r10@203
  __int64 v137; // r0@204
  void *v138; // r4@205
  int v139; // r0@205
  _DWORD *v140; // r4@209
  int v141; // r0@209
  _DWORD *v142; // r4@213
  int v143; // r0@213
  char *v144; // r4@217
  int v145; // r3@217
  int v146; // r1@217
  int v147; // r2@217
  int v148; // r0@217
  FlyingPathNavigation *v149; // r4@221
  int v150; // r0@221
  int v151; // r6@223
  int result; // r0@225
  int v153; // r0@227
  bool v154; // zf@227
  int v155; // r0@233
  bool v156; // zf@233
  __int64 v157; // [sp+4h] [bp-67Ch]@19
  int v158; // [sp+8h] [bp-678h]@156
  EntityDefinitionDiffList *v159; // [sp+14h] [bp-66Ch]@3
  char v160; // [sp+18h] [bp-668h]@204
  int v161; // [sp+15Ch] [bp-524h]@208
  int v162; // [sp+180h] [bp-500h]@204
  int v163; // [sp+1D8h] [bp-4A8h]@212
  int v164; // [sp+1DCh] [bp-4A4h]@216
  int v165; // [sp+1E8h] [bp-498h]@220
  char v166; // [sp+204h] [bp-47Ch]@188
  int v167; // [sp+3DCh] [bp-2A4h]@190
  int v168; // [sp+3E4h] [bp-29Ch]@188
  char v169; // [sp+3F0h] [bp-290h]@158
  int v170; // [sp+54Ch] [bp-134h]@162
  int v171; // [sp+550h] [bp-130h]@166
  int v172; // [sp+578h] [bp-108h]@170
  int v173; // [sp+57Ch] [bp-104h]@158
  int v174; // [sp+5C4h] [bp-BCh]@174
  void *ptr; // [sp+5DCh] [bp-A4h]@116
  ArmorItem *v176; // [sp+5E0h] [bp-A0h]@116
  char v177; // [sp+5E8h] [bp-98h]@116
  char v178; // [sp+5FCh] [bp-84h]@116
  void *v179; // [sp+610h] [bp-70h]@134
  int v180; // [sp+614h] [bp-6Ch]@134
  void *v181; // [sp+618h] [bp-68h]@132
  int v182; // [sp+61Ch] [bp-64h]@134
  int v183; // [sp+628h] [bp-58h]@135
  char v184; // [sp+62Dh] [bp-53h]@84
  char v185; // [sp+62Eh] [bp-52h]@11
  char v186; // [sp+62Fh] [bp-51h]@7

  LODWORD(v2) = a2;
  v3 = a1;
  Entity::initializeComponents(a1, a2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 764))(v3);
  if ( !*(_BYTE *)(v3 + 3081) )
  {
    *(_DWORD *)(v3 + 3412) = 0;
    *(_DWORD *)(v3 + 3416) = 0;
    *(_DWORD *)(v3 + 4072) = 0;
    *(_DWORD *)(v3 + 3436) = 0;
    *(_DWORD *)(v3 + 3432) = 0;
    *(_DWORD *)(v3 + 3440) = 0;
    *(_DWORD *)(v3 + 3996) = 0;
    *(_DWORD *)(v3 + 4148) = 0;
    *(_DWORD *)(v3 + 4152) = 0;
    *(_DWORD *)(v3 + 4156) = 0;
    *(_DWORD *)(v3 + 3468) = 0;
    *(_DWORD *)(v3 + 3464) = 0;
    *(_DWORD *)(v3 + 3460) = 0;
    *(_DWORD *)(v3 + 3456) = 0;
    *(_DWORD *)(v3 + 3452) = 0;
    *(_DWORD *)(v3 + 3448) = 0;
    *(_DWORD *)(v3 + 4004) = 1065353216;
    *(_DWORD *)(v3 + 3428) = 20;
    *(_BYTE *)(v3 + 536) = 1;
    *(_DWORD *)(v3 + 3656) = 1048576000;
    *(_DWORD *)(v3 + 3660) = 1048576000;
    *(_DWORD *)(v3 + 3952) = 1048576000;
    *(_DWORD *)(v3 + 3956) = 1048576000;
    *(_DWORD *)(v3 + 3960) = 1048576000;
    *(_DWORD *)(v3 + 3964) = 1048576000;
  }
  v159 = (EntityDefinitionDiffList *)(v3 + 3340);
  HIDWORD(v2) = EntityDefinitionDiffList::getChangedDescription((EntityDefinitionDiffList *)(v3 + 3340));
  if ( (unsigned int)v2 > 6 || !((1 << v2) & 0x43) )
    v157 = v2;
    v10 = *(_QWORD *)(HIDWORD(v2) + 48) >> 32;
    _R5 = *(_QWORD *)(HIDWORD(v2) + 48);
    if ( _R5 != v10 )
    {
      __asm
      {
        VLDR            S16, =1.1755e-38
        VLDR            S18, =3.4028e38
      }
      do
        v14 = *(BaseAttributeMap **)(v3 + 3968);
        v15 = (const Attribute *)Attribute::getByName((AttributeCollection *)_R5);
        v16 = (AttributeInstance *)BaseAttributeMap::registerAttribute(v14, v15);
        if ( AttributeInstance::getAttribute(v16) )
        {
          _R0 = AttributeInstance::getDefaultValue(v16, 0);
          __asm { VMOV            S20, R0 }
          _R4 = AttributeInstance::getDefaultValue(v16, 1);
          v19 = AttributeInstance::getMaxValue(v16);
          __asm
          {
            VLDR            S0, [R5,#4]
            VMOV            S22, R4
            VLDR            S2, [R5,#8]
          }
          _R6 = v19;
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S2, S18
          if ( !_ZF )
            __asm { VMOVNE.F32      S20, S0 }
            VMOV            R8, S20
            __asm { VMOVNE.F32      S22, S2 }
          __asm { VCMPE.F32       S22, S20 }
          _R10 = _R8;
            VMOV            R4, S22
          if ( _NF ^ _VF )
            _R10 = _R4;
          AttributeInstance::setDefaultValue(v16, _R10, 0);
            VCMPE.F32       S22, S20
            _R4 = _R8;
          AttributeInstance::setDefaultValue(v16, _R4, 1);
          __asm { VMOV            S20, R10 }
          _R0 = FloatRange::getValue((FloatRange *)(_R5 + 12), (Random *)(v3 + 552));
            VMOV            S0, R0
            VMOV            S2, R4
            VCMPE.F32       S0, S20
            VMOV.F32        S22, S20
            VCMPE.F32       S0, S2
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S22, S0 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S22, S2 }
          if ( (_UNKNOWN *)AttributeInstance::getAttribute(v16) == &SharedAttributes::HEALTH )
            __asm { VMOV            R0, S22 }
            _R0 = roundf(_R0);
            __asm
            {
              VMOV            S0, R0
              VCVTR.S32.F32   S0, S0
              VCVT.F32.S32    S22, S0
              VMOV            R4, S22
            }
            AttributeInstance::setDefaultValue(v16, _R4, 1);
          v27 = (Attribute *)AttributeInstance::getAttribute(v16);
          v28 = (unsigned __int8)Attribute::getRedefinitionMode(v27);
          if ( (unsigned __int8)v28 == 1 )
            __asm { VMOV            R1, S22 }
            AttributeInstance::setDefaultValue(v16, _R1, 2);
            AttributeInstance::recalculateModifiers(v16);
          else if ( !v28 )
            __asm { VMOV            S24, R6 }
            _R0 = AttributeInstance::getCurrentValue(v16);
              VCMPE.F32       S0, S24
              VMRS            APSR_nzcv, FPSCR
            if ( _ZF )
              __asm { VMOV            R1, S22 }
              AttributeInstance::setDefaultValue(v16, _R1, 2);
            else
              __asm
              {
                VCMPE.F32       S0, S20
                VMRS            APSR_nzcv, FPSCR
                VMOV            S2, R4
                VCMPE.F32       S0, S2
              }
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                __asm { VMOVGT.F32      S20, S0 }
              __asm { VMRS            APSR_nzcv, FPSCR }
                __asm { VMOVGT.F32      S20, S2 }
              _R0 = AttributeInstance::getCurrentValue(v16);
                VMOV            S0, R0
                VCMPE.F32       S20, S0
              if ( !_ZF )
                __asm { VMOV            R1, S20 }
                AttributeInstance::setDefaultValue(v16, _R1, 2);
              AttributeInstance::setDefaultValueOnly(v16, _R1);
        }
        _R5 += 20;
      while ( v10 != _R5 );
    }
    v2 = v157;
    if ( (_DWORD)v157 != 5 )
      v35 = *(BaseAttributeMap **)(v3 + 3968);
      v36 = BaseAttributeMap::begin(*(BaseAttributeMap **)(v3 + 3968));
      v37 = BaseAttributeMap::end(v35);
      while ( v36 != v37 )
        AttributeInstance::resetToDefaultValue((AttributeInstance *)(v36 + 8));
        v36 = *(_DWORD *)v36;
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 1080))(v3);
  v4 = *(_DWORD *)(v3 + 48);
  v5 = *(_DWORD *)(v4 + 336);
  if ( v5 )
    LOBYTE(v5) = 1;
  v186 = v5;
  if ( *(_DWORD *)(HIDWORD(v2) + 336) )
    _tryInitializeComponent<Mob,bool &,LeashableComponent>(v3, &v186, (LeashableComponent **)(v3 + 3208));
    v4 = *(_DWORD *)(v3 + 48);
  v6 = *(_DWORD *)(v4 + 288);
  if ( v6 )
    LOBYTE(v6) = 1;
  v185 = v6;
  if ( *(_DWORD *)(HIDWORD(v2) + 288) )
    _tryInitializeComponent<Mob,bool &,BreathableComponent>(v3, &v185, (BreathableComponent **)(v3 + 3120));
  if ( *(_DWORD *)(HIDWORD(v2) + 340) )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 48) + 340) )
      v7 = *(LookAtComponent **)(v3 + 3144);
      if ( !v7 )
        v7 = (LookAtComponent *)operator new(0x14u);
        LookAtComponent::LookAtComponent((int)v7, v3);
        v8 = *(void **)(v3 + 3144);
        *(_DWORD *)(v3 + 3144) = v7;
        if ( v8 )
          operator delete(v8);
          v7 = *(LookAtComponent **)(v3 + 3144);
      LookAtComponent::initFromDefinition(v7);
    else
      v38 = *(void **)(v3 + 3144);
      *(_DWORD *)(v3 + 3144) = 0;
      if ( v38 )
        operator delete(v38);
  if ( *(_DWORD *)(HIDWORD(v2) + 420) )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 48) + 420) )
      v39 = *(TeleportComponent **)(v3 + 3152);
      if ( !v39 )
        v39 = (TeleportComponent *)operator new(0x30u);
        TeleportComponent::TeleportComponent((int)v39, v3);
        v40 = *(void **)(v3 + 3152);
        *(_DWORD *)(v3 + 3152) = v39;
        if ( v40 )
          operator delete(v40);
          v39 = *(TeleportComponent **)(v3 + 3152);
      TeleportComponent::initFromDefinition(v39);
      v41 = *(void **)(v3 + 3152);
      *(_DWORD *)(v3 + 3152) = 0;
      if ( v41 )
        operator delete(v41);
  if ( *(_DWORD *)(HIDWORD(v2) + 284) )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 48) + 284) )
      v42 = *(BoostableComponent **)(v3 + 3196);
      if ( !v42 )
        v42 = (BoostableComponent *)operator new(0x14u);
        BoostableComponent::BoostableComponent((int)v42, v3);
        v43 = *(void **)(v3 + 3196);
        *(_DWORD *)(v3 + 3196) = v42;
        if ( v43 )
          operator delete(v43);
          v42 = *(BoostableComponent **)(v3 + 3196);
      BoostableComponent::initFromDefinition(v42);
      v44 = *(void **)(v3 + 3196);
      *(_DWORD *)(v3 + 3196) = 0;
      if ( v44 )
        operator delete(v44);
  if ( *(_DWORD *)(HIDWORD(v2) + 328) )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 48) + 328) )
      v45 = *(HealableComponent **)(v3 + 3180);
      if ( !v45 )
        v45 = (HealableComponent *)operator new(4u);
        HealableComponent::HealableComponent(v45, v3);
        v46 = *(void **)(v3 + 3180);
        *(_DWORD *)(v3 + 3180) = v45;
        if ( v46 )
          operator delete(v46);
          v45 = *(HealableComponent **)(v3 + 3180);
      HealableComponent::initFromDefinition(v45);
      v47 = *(void **)(v3 + 3180);
      *(_DWORD *)(v3 + 3180) = 0;
      if ( v47 )
        operator delete(v47);
  if ( *(_DWORD *)(HIDWORD(v2) + 296) )
    v48 = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 296);
    if ( v48 )
      LOBYTE(v48) = 1;
    v184 = v48;
    if ( !_tryInitializeComponent<Mob,bool,BreedableComponent>(v3, &v184, (BreedableComponent **)(v3 + 3124)) )
      Entity::setStatusFlag(v3, 7, 0);
  if ( *(_DWORD *)(HIDWORD(v2) + 280) )
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 48) + 280) )
      v49 = *(AngryComponent **)(v3 + 3112);
      if ( !v49 )
        v49 = (AngryComponent *)operator new(0x14u);
        AngryComponent::AngryComponent((int)v49, v3);
        v50 = *(void **)(v3 + 3112);
        *(_DWORD *)(v3 + 3112) = v49;
        if ( v50 )
          operator delete(v50);
          v49 = *(AngryComponent **)(v3 + 3112);
      AngryComponent::initFromDefinition(v49);
      v51 = *(void **)(v3 + 3112);
      *(_DWORD *)(v3 + 3112) = 0;
      if ( v51 )
        operator delete(v51);
      Entity::setStatusFlag(v3, 24, 0);
  v52 = *(_DWORD *)(v3 + 48);
  v53 = *(_DWORD *)(v52 + 144);
  if ( v53 )
    LOBYTE(v53) = 1;
  *(_BYTE *)(v3 + 3472) = v53;
  v54 = *(_DWORD *)(v52 + 100);
  if ( v54 )
    LOBYTE(v54) = 1;
  *(_BYTE *)(v3 + 3473) = v54;
  v55 = *(_DWORD *)(v52 + 124);
  if ( v55 )
    *(_DWORD *)(v3 + 4000) = *(_DWORD *)(v55 + 4);
  v56 = *(_DWORD *)(v52 + 148);
  if ( v56 )
    *(_DWORD *)(v3 + 4008) = *(_DWORD *)(v56 + 4);
  v57 = *(_DWORD *)(v52 + 224);
  if ( v57 )
    *(_DWORD *)(v3 + 3984) = *(_DWORD *)(v57 + 4);
  v58 = *(_DWORD *)(v52 + 156);
  if ( v58 )
    *(_DWORD *)(v3 + 4004) = *(_DWORD *)(v58 + 4);
  *(_BYTE *)(v3 + 4172) = *(_DWORD *)(v52 + 228) != 0;
  v59 = *(_DWORD *)(v52 + 88);
  if ( v59 )
    v60 = *(float *)(v59 + 4);
    v61 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                                 *(BaseAttributeMap **)(v3 + 3968),
                                 (const Attribute *)&SharedAttributes::ATTACK_DAMAGE);
    AttributeInstance::setRange(v61, v60, v60, v60);
  v62 = *(_DWORD *)(HIDWORD(v2) + 132);
  _ZF = v62 == 0;
  if ( v62 )
    _ZF = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 132) == 0;
  if ( !_ZF )
    v64 = (_DWORD)v2 == 1;
    if ( (_DWORD)v2 != 1 )
      v64 = (_DWORD)v2 == 6;
    if ( !v64 )
      v65 = (Level *)Entity::getLevel((Entity *)v3);
      v66 = Level::getLootTables(v65);
      v67 = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 132);
      v68 = Entity::getLevel((Entity *)v3);
      v69 = (*(int (**)(void))(*(_DWORD *)v68 + 120))();
      v70 = (Random *)LootTables::lookupByName((int)v66, (unsigned int *)(v67 + 4), v69);
      if ( v70 )
        v71 = (Level *)Entity::getLevel((Entity *)v3);
        v72 = (LootTableContext::Builder *)LootTableContext::Builder::Builder((LootTableContext::Builder *)&v177, v71);
        v73 = LootTableContext::Builder::withThisEntity(v72, (Entity *)v3);
        LootTableContext::Builder::create((LootTableContext::Builder *)&v178, v73);
        LootTable::getRandomItems((LootTable *)&ptr, v70, (LootTableContext *)(v3 + 552), (LootTableContext *)&v178);
        v74 = (ArmorItem *)ptr;
        v75 = v176;
        if ( ptr != (void *)v176 )
          do
            if ( ItemInstance::isArmorItem(v74) == 1 )
              v77 = ArmorItem::getSlotForItem(v74, v76);
              (*(void (__fastcall **)(int, int, ArmorItem *))(*(_DWORD *)v3 + 1024))(v3, v77, v74);
              (*(void (__fastcall **)(int, ArmorItem *))(*(_DWORD *)v3 + 912))(v3, v74);
            v74 = (ArmorItem *)((char *)v74 + 72);
          while ( v75 != v74 );
          v78 = (ArmorItem *)ptr;
          v74 = v176;
          if ( ptr != (void *)v176 )
            do
              v79 = (void *)*((_DWORD *)v78 + 13);
              if ( v79 )
                operator delete(v79);
              v80 = (void *)*((_DWORD *)v78 + 9);
              if ( v80 )
                operator delete(v80);
              v81 = *((_DWORD *)v78 + 2);
              if ( v81 )
                (*(void (**)(void))(*(_DWORD *)v81 + 4))();
              *((_DWORD *)v78 + 2) = 0;
              v78 = (ArmorItem *)((char *)v78 + 72);
            while ( v74 != v78 );
            v74 = (ArmorItem *)ptr;
        if ( v74 )
          operator delete((void *)v74);
        v82 = v181;
        if ( v181 )
            v83 = *(void **)v82;
            operator delete(v82);
            v82 = v83;
          while ( v83 );
        _aeabi_memclr4(v179, 4 * v180);
        v182 = 0;
        v181 = 0;
        if ( v179 && &v183 != v179 )
          operator delete(v179);
  if ( *(_DWORD *)(HIDWORD(v2) + 92) )
    if ( (_DWORD)v2 == 5 )
      v84 = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 92);
      if ( v84 )
        v85 = HIDWORD(v2);
        v87 = (int **)(*(_QWORD *)(v84 + 16) >> 32);
        for ( i = (int **)*(_QWORD *)(v84 + 16); v87 != i; ++i )
          v88 = (MobEffect *)MobEffect::getByName(i);
          if ( v88 )
            v89 = MobEffect::getId(v88);
            v90 = *(_DWORD *)(v3 + 3972);
            if ( (*(_DWORD *)(v3 + 3976) - v90) >> 4 > v89
              && MobEffectInstance::operator!=((int *)(v90 + 16 * v89), &MobEffectInstance::NO_EFFECT) == 1 )
              (*(void (__fastcall **)(int, int))(*(_DWORD *)v3 + 1184))(v3, *(_DWORD *)(v3 + 3972) + 16 * v89);
              v91 = *(_DWORD *)(v3 + 3972) + 16 * v89;
              v92 = unk_27FB704;
              v93 = unk_27FB708;
              *(_DWORD *)v91 = MobEffectInstance::NO_EFFECT;
              *(_DWORD *)(v91 + 4) = v92;
              *(_DWORD *)(v91 + 8) = v93;
              v91 += 12;
              v94 = unk_27FB70C;
              *(_BYTE *)(v91 + 2) = byte_27FB70E[0];
              *(_WORD *)v91 = v94;
        LODWORD(v2) = *(_QWORD *)(v84 + 4) >> 32;
        v95 = (MobEffectInstance *)*(_QWORD *)(v84 + 4);
        for ( HIDWORD(v2) = v85; (MobEffectInstance *)v2 != v95; v95 = (MobEffectInstance *)((char *)v95 + 16) )
          v96 = MobEffectInstance::getId(v95);
          if ( MobEffectInstance::operator!=((int *)(*(_DWORD *)(v3 + 3972) + 16 * v96), &MobEffectInstance::NO_EFFECT) == 1 )
            v97 = MobEffectInstance::getId(v95);
            MobEffectInstance::update((MobEffectInstance *)(*(_DWORD *)(v3 + 3972) + 16 * v97), v95);
          else
            Mob::addEffect((Mob *)v3, v95);
  v98 = *(_DWORD *)(HIDWORD(v2) + 396);
  v99 = v98 == 0;
  if ( !v98 )
    v99 = *(_DWORD *)(HIDWORD(v2) + 348) == 0;
  if ( !v99 )
    goto LABEL_241;
  v153 = *(_DWORD *)(HIDWORD(v2) + 352);
  v154 = v153 == 0;
  if ( !v153 )
    v154 = *(_DWORD *)(HIDWORD(v2) + 392) == 0;
  if ( !v154 || *(_DWORD *)(HIDWORD(v2) + 468) )
LABEL_241:
    v100 = *(_DWORD *)(v3 + 4284);
    LODWORD(v2) = v3 + 4284;
    *(_DWORD *)(v3 + 4284) = 0;
    if ( v100 )
      (*(void (**)(void))(*(_DWORD *)v100 + 4))();
    v158 = HIDWORD(v2);
    v101 = EntityDefinitionDiffList::size(v159);
    v102 = v101;
    if ( v101 )
      v103 = v101 - 1;
      v104 = 2;
        HIDWORD(v105) = v3 + 3340;
        LODWORD(v105) = &v169;
        EntityDefinitionDiffList::buildDescriptionFrom(v105, v103, v102);
        if ( v173 )
          v106 = operator new(0x20u);
          MoveControl::MoveControl((int)v106, v3);
          v107 = *(_DWORD *)v2;
          *(_DWORD *)v2 = v106;
          if ( v107 )
            (*(void (**)(void))(*(_DWORD *)v107 + 4))();
        else if ( v170 )
          v108 = (SwimMoveControl *)operator new(0x24u);
          SwimMoveControl::SwimMoveControl(v108, (Mob *)v3);
          v109 = *(_DWORD *)v2;
          *(_DWORD *)v2 = v108;
          if ( v109 )
            (*(void (**)(void))(*(_DWORD *)v109 + 4))();
        else if ( v171 )
          v110 = (HopMoveControl *)operator new(0x24u);
          HopMoveControl::HopMoveControl(v110, (Mob *)v3);
          v111 = *(_DWORD *)v2;
          *(_DWORD *)v2 = v110;
          if ( v111 )
            (*(void (**)(void))(*(_DWORD *)v111 + 4))();
        else if ( v172 )
          v112 = (SlimeMoveControl *)operator new(0x24u);
          SlimeMoveControl::SlimeMoveControl(v112, (Mob *)v3);
          v113 = *(_DWORD *)v2;
          *(_DWORD *)v2 = v112;
          if ( v113 )
            (*(void (**)(void))(*(_DWORD *)v113 + 4))();
        else if ( v174 )
          v114 = (FlyMoveControl *)operator new(0x20u);
          FlyMoveControl::FlyMoveControl(v114, (Mob *)v3);
          v115 = *(_DWORD *)v2;
          *(_DWORD *)v2 = v114;
          if ( v115 )
            (*(void (**)(void))(*(_DWORD *)v115 + 4))();
        v116 = *(_DWORD *)v2;
        EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v169);
        if ( v116 )
          break;
        --v103;
        _CF = v102 >= v104++;
      while ( _CF );
    HIDWORD(v2) = v158;
    if ( *(_DWORD *)v2 )
      (*(void (**)(void))(**(_DWORD **)v2 + 16))();
  v117 = *(_DWORD *)(HIDWORD(v2) + 480);
  v118 = HIDWORD(v2);
  v119 = v117 == 0;
  if ( !v117 )
    v119 = *(_DWORD *)(HIDWORD(v2) + 472) == 0;
  if ( !v119 )
    v120 = *(_DWORD *)(v3 + 4280);
    *(_DWORD *)(v3 + 4280) = 0;
    if ( v120 )
      (*(void (**)(void))(*(_DWORD *)v120 + 4))();
    v121 = EntityDefinitionDiffList::size(v159);
    v122 = v121;
    if ( v121 )
      v123 = (JumpControl **)(v3 + 4280);
      v124 = v121 - 1;
      v125 = 2;
      while ( 1 )
        HIDWORD(v126) = v3 + 3340;
        LODWORD(v126) = &v166;
        EntityDefinitionDiffList::buildDescriptionFrom(v126, v124, v122);
        if ( v168 )
          v127 = (JumpControl *)operator new(0xCu);
          JumpControl::JumpControl(v127, (Mob *)v3);
        else
          if ( !v167 )
            goto LABEL_194;
          v127 = (JumpControl *)operator new(0x50u);
          DynamicJumpControl::DynamicJumpControl(v127, (Mob *)v3);
        v128 = *v123;
        *v123 = v127;
        if ( !v128 )
          goto LABEL_195;
        (*(void (**)(void))(*(_DWORD *)v128 + 4))();
LABEL_194:
        v127 = *v123;
LABEL_195:
        EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v166);
        if ( !v127 )
          --v124;
          _CF = v122 >= v125++;
          if ( _CF )
            continue;
        break;
  v129 = *(_DWORD *)(v118 + 360);
  v130 = v129 == 0;
  if ( !v129 )
    v130 = *(_DWORD *)(v118 + 324) == 0;
  if ( !v130 )
    goto LABEL_242;
  v155 = *(_DWORD *)(v118 + 448);
  v156 = v155 == 0;
  if ( !v155 )
    v156 = *(_DWORD *)(v118 + 452) == 0;
  if ( !v156 || (result = *(_DWORD *)(v118 + 464)) != 0 )
LABEL_242:
    v131 = *(_DWORD *)(v3 + 4276);
    v132 = v3 + 4276;
    *(_DWORD *)(v3 + 4276) = 0;
    if ( v131 )
      (*(void (**)(void))(*(_DWORD *)v131 + 4))();
    Entity::setSwimmer((Entity *)v3, 0);
    v133 = EntityDefinitionDiffList::size(v159);
    v134 = v133;
    if ( v133 )
      v135 = v133 - 1;
      v136 = 2;
        HIDWORD(v137) = v3 + 3340;
        LODWORD(v137) = &v160;
        EntityDefinitionDiffList::buildDescriptionFrom(v137, v135, v134);
        if ( v162 )
          v138 = operator new(0x2Cu);
          PathNavigation::PathNavigation((int)v138, v3);
          v139 = *(_DWORD *)v132;
          *(_DWORD *)v132 = v138;
          if ( v139 )
            (*(void (**)(void))(*(_DWORD *)v139 + 4))();
        else if ( v161 )
          v140 = operator new(0x2Cu);
          PathNavigation::PathNavigation((int)v140, v3);
          *v140 = &off_271B190;
          v141 = *(_DWORD *)v132;
          *(_DWORD *)v132 = v140;
          if ( v141 )
            (*(void (**)(void))(*(_DWORD *)v141 + 4))();
        else if ( v163 )
          v142 = operator new(0x38u);
          PathNavigation::PathNavigation((int)v142, v3);
          *v142 = &off_271B220;
          v142[11] = 0;
          v142[12] = 0;
          v142[13] = 0;
          v143 = *(_DWORD *)v132;
          *(_DWORD *)v132 = v142;
          if ( v143 )
            (*(void (**)(void))(*(_DWORD *)v143 + 4))();
        else if ( v164 )
          v144 = (char *)operator new(0x64u);
          PathNavigation::PathNavigation((int)v144, v3);
          v145 = (int)(v144 + 44);
          *(_DWORD *)v144 = &off_271B264;
          v146 = *(&Vec3::ZERO + 1);
          v147 = dword_2822498;
          *(_DWORD *)v145 = Vec3::ZERO;
          *(_DWORD *)(v145 + 4) = v146;
          *(_DWORD *)(v145 + 8) = v147;
          v144[68] = 0;
          *((_DWORD *)v144 + 18) = 0;
          *((_DWORD *)v144 + 19) = 0;
          *((_DWORD *)v144 + 20) = 0;
          *((_DWORD *)v144 + 21) = v3;
          *((_DWORD *)v144 + 22) = 0;
          *((_DWORD *)v144 + 23) = 0;
          *((_DWORD *)v144 + 24) = 0;
          *((_WORD *)v144 + 20) = 0;
          v144[42] = 1;
          v148 = *(_DWORD *)v132;
          *(_DWORD *)v132 = v144;
          if ( v148 )
            (*(void (**)(void))(*(_DWORD *)v148 + 4))();
          Entity::setSwimmer((Entity *)v3, 1);
        else if ( v165 )
          v149 = (FlyingPathNavigation *)operator new(0x30u);
          FlyingPathNavigation::FlyingPathNavigation(v149, (Mob *)v3);
          v150 = *(_DWORD *)v132;
          *(_DWORD *)v132 = v149;
          if ( v150 )
            (*(void (**)(void))(*(_DWORD *)v150 + 4))();
        v151 = *(_DWORD *)v132;
        EntityDefinitionDescriptor::~EntityDefinitionDescriptor((EntityDefinitionDescriptor *)&v160);
        if ( v151 )
        --v135;
        _CF = v134 >= v136++;
    result = (*(int (**)(void))(**(_DWORD **)v132 + 44))();
  return result;
}


int __fastcall Mob::canPowerJump(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@2
  AttributeInstance *v3; // r0@3

  v1 = this;
  if ( Entity::canPowerJump(this) == 1 )
  {
    v3 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
                                v1,
                                &SharedAttributes::JUMP_STRENGTH);
    result = AttributeInstance::getAttribute(v3) != 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall Mob::_updateSprintingState(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@1
  float v3; // r1@2

  v1 = this;
  result = (*(int (**)(void))(*(_DWORD *)this + 792))();
  if ( result == 1 )
  {
    result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v1 + 208))(v1);
    if ( !result )
      result = j_j_j__ZN3Mob23_doSprintParticleEffectEv(v1, v3);
  }
  return result;
}


signed int __fastcall Mob::isShootable(Mob *this)
{
  return 1;
}


signed int __fastcall Mob::getLastHurtByMob(Mob *this)
{
  char *v1; // r4@1
  int v2; // r0@2
  int v3; // r1@2
  signed int result; // r0@2

  v1 = (char *)this + 4200;
  if ( (*((_DWORD *)this + 1051) & *((_DWORD *)this + 1050)) == -1
    || (v2 = Entity::getLevel(this), (result = Level::getMob(v2, v3, *(_QWORD *)v1, *(_QWORD *)v1 >> 32)) == 0) )
  {
    *(_DWORD *)v1 = -1;
    *((_DWORD *)v1 + 1) = -1;
    result = 0;
  }
  return result;
}


signed int __fastcall Mob::leaveCaravan(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@1
  int v4; // r8@1
  int v5; // r5@1
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r6@3
  int v9; // r5@4
  int v10; // r0@6
  int v11; // r1@6
  int v12; // r9@7
  int v13; // r1@10
  int v14; // r7@11
  BlockSource *v15; // r0@11
  int v16; // r0@11
  int v17; // r1@11
  int v18; // r0@11
  signed int v19; // r0@12
  signed int result; // r0@16

  v1 = this;
  v2 = Entity::getLevel(this);
  v3 = Level::fetchEntity(v2, 0, *((_DWORD *)v1 + 1054), *((_DWORD *)v1 + 1055), 0);
  v4 = (int)v1 + 4216;
  v5 = v3;
  if ( v3 && Entity::hasCategory(v3, 2) == 1 )
  {
    *(_DWORD *)(v5 + 4228) = -1;
    *(_DWORD *)(v5 + 4224) = -1;
    v6 = Entity::getLevel(v1);
    v8 = Level::fetchEntity(v6, v7, *(_QWORD *)v4, *(_QWORD *)v4 >> 32, 0);
    if ( v8 )
    {
      v9 = (int)v1;
      do
      {
        if ( Entity::hasCategory(v8, 2) != 1 )
          break;
        v10 = Entity::getLevel((Entity *)v8);
        v9 = v8;
        v8 = Level::fetchEntity(v10, v11, *(_DWORD *)(v8 + 4216), *(_DWORD *)(v8 + 4220), 0);
      }
      while ( v8 );
      v12 = Entity::getLevel(v1);
      if ( !v9 )
        v14 = 0;
LABEL_15:
        Level::broadcastEntityEvent(v12, v9, 64, v14);
        goto LABEL_16;
      v1 = (Mob *)v9;
    }
    else
    v13 = 1;
    do
      v14 = v13;
      v15 = (BlockSource *)Entity::getRegion(v1);
      v16 = BlockSource::getLevel(v15);
      v18 = Level::fetchEntity(v16, v17, *(_DWORD *)(v9 + 4224), *(_DWORD *)(v9 + 4228), 0);
      v9 = v18;
      if ( !v18 )
        break;
      v19 = Entity::hasCategory(v18, 2);
      v13 = v14 + 1;
    while ( v19 );
    v9 = (int)v1;
    goto LABEL_15;
  }
LABEL_16:
  result = -1;
  *(_DWORD *)v4 = -1;
  *(_DWORD *)(v4 + 4) = -1;
  return result;
}


void __fastcall Mob::setSprinting(Mob *this, int a2)
{
  Mob::setSprinting(this, a2);
}


void __fastcall Mob::~Mob(Mob *this)
{
  Mob::~Mob(this);
}


void __fastcall Mob::handleEntityEvent(MinecraftEventing *this, signed int a2, Mob *a3)
{
  MinecraftEventing *v3; // r4@1
  void (__fastcall *v4)(MinecraftEventing *); // r1@5
  BlockSource *v5; // r0@11
  int *v6; // r0@11
  signed int v7; // r5@11
  int v8; // r1@11
  BlockSource *v9; // r0@14
  int *v10; // r0@14
  signed int v11; // r5@14
  int v12; // r1@14
  AttributeInstance *v13; // r0@16
  AttributeInstance *v14; // r0@17
  AttributeInstance *v21; // r0@21
  int v22; // [sp+0h] [bp-40h]@14
  char v23; // [sp+Ch] [bp-34h]@11
  char v24; // [sp+18h] [bp-28h]@11
  char v25; // [sp+24h] [bp-1Ch]@11

  v3 = this;
  if ( a2 > 17 )
  {
    if ( a2 != 18 )
    {
      if ( a2 == 64 )
      {
        j_j_j__ZN17MinecraftEventing23fireEventCaravanChangedER3Mobi(this, a3, (int)a3);
        return;
      }
      if ( a2 == 65 )
        v4 = *(void (__fastcall **)(MinecraftEventing *))(*(_DWORD *)this + 1108);
        goto LABEL_10;
      goto LABEL_20;
    }
    v14 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
    _R0 = AttributeInstance::getCurrentValue(v14);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    if ( _R0 <= 0 )
      v21 = (AttributeInstance *)(*(int (__fastcall **)(MinecraftEventing *, void *))(*(_DWORD *)v3 + 1000))(
                                   v3,
                                   &SharedAttributes::HEALTH);
      AttributeInstance::resetToMaxValue(v21);
      *((_DWORD *)v3 + 862) = 0;
  }
  else if ( a2 == 2 )
    *((_DWORD *)this + 105) = 20;
    *((_DWORD *)this + 858) = 10;
    *((_DWORD *)this + 859) = 10;
    *((_DWORD *)this + 860) = 0;
    Entity::getAttachPos((AABB *)&v24, (int)this, 3, 0);
    BlockPos::BlockPos((int)&v25, (int)&v24);
    v5 = (BlockSource *)Entity::getRegion(v3);
    v6 = (int *)BlockSource::getMaterial(v5, (const BlockPos *)&v25);
    v7 = Material::isType(v6, 5);
    Entity::getAttachPos((AABB *)&v23, (int)v3, 3, 0);
    v8 = 17;
    if ( v7 )
      v8 = 18;
    Entity::playSound((int)v3, v8, (int)&v23);
  else
    if ( a2 != 3 )
      if ( a2 == 4 )
        v4 = *(void (__fastcall **)(MinecraftEventing *))(*(_DWORD *)this + 928);
LABEL_10:
        v4(this);
LABEL_20:
      j_j_j__ZN6Entity17handleEntityEventE11EntityEventi(this, a2, (int)a3);
      return;
    v9 = (BlockSource *)Entity::getRegion(v3);
    v10 = (int *)BlockSource::getMaterial(v9, (const BlockPos *)&v25);
    v11 = Material::isType(v10, 5);
    Entity::getAttachPos((AABB *)&v22, (int)v3, 3, 0);
    v12 = 14;
    if ( v11 )
      v12 = 15;
    Entity::playSound((int)v3, v12, (int)&v22);
    v13 = (AttributeInstance *)(*(int (__fastcall **)(MinecraftEventing *, void *))(*(_DWORD *)v3 + 1000))(
                                 v3,
                                 &SharedAttributes::HEALTH);
    AttributeInstance::resetToMinValue(v13);
}


signed int __fastcall Mob::_isHeadInWater(Mob *this)
{
  Entity *v1; // r4@1
  BlockSource *v2; // r0@1
  int *v3; // r0@1
  int v5; // [sp+0h] [bp-28h]@1
  char v6; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  Entity::getAttachPos((AABB *)&v5, (int)this, 3, 0);
  BlockPos::BlockPos((int)&v6, (int)&v5);
  v2 = (BlockSource *)Entity::getRegion(v1);
  v3 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v6);
  return Material::isType(v3, 5);
}


signed int __fastcall Mob::updateMobId(Entity *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  int v3; // r0@2
  int v4; // r1@2
  signed int result; // r0@2

  v2 = a2;
  if ( ((unsigned int)*a2 & (*a2 >> 32)) == -1
    || (v3 = Entity::getLevel(a1), (result = Level::getMob(v3, v4, *v2, *v2 >> 32)) == 0) )
  {
    *(_DWORD *)v2 = -1;
    *((_DWORD *)v2 + 1) = -1;
    result = 0;
  }
  return result;
}


int __fastcall Mob::baseTick(Mob *this)
{
  Mob *v1; // r8@1
  int v2; // r5@1
  int v3; // r0@2
  unsigned int v9; // r1@7
  int v10; // r0@10
  int *v11; // r0@14
  int *v12; // r4@14
  int v13; // r7@15
  char v14; // r6@15
  signed int v15; // r0@16
  Level *v16; // r0@20
  char *v17; // r0@22
  signed int v18; // r0@26
  signed int v19; // r0@28
  signed int v20; // r0@30
  int v21; // r0@34
  int v22; // r0@34
  int v23; // r0@39
  int v24; // r0@39
  AttributeInstance *v25; // r0@42
  signed int v28; // r0@44
  signed int v29; // r0@46
  AttributeInstance *v30; // r0@48
  BaseAttributeMap *v32; // r6@49
  int v33; // r5@49
  int v34; // r1@49
  signed int v35; // r2@49
  int v36; // r3@49
  int v37; // r6@49
  float v38; // r1@53
  int result; // r0@55
  char v40; // [sp+4h] [bp-2Ch]@24
  char v41; // [sp+Ch] [bp-24h]@22
  float v42; // [sp+14h] [bp-1Ch]@5

  v1 = this;
  *((_DWORD *)this + 1060) = *((_DWORD *)this + 1061);
  Mob::tickMagmaDamage(this);
  Entity::baseTick(v1);
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)v1 + 584))(v1);
  v2 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 812))(v1);
  if ( !(*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 284))(v1) )
  {
    v3 = *((_DWORD *)v1 + 869);
    _VF = __OFSUB__(v2, 1);
    _NF = v2 - 1 < 0;
    *((_DWORD *)v1 + 869) = v3 + 1;
    if ( v2 >= 1 )
    {
      _VF = __OFSUB__(v3, 1);
      _NF = v3 - 1 < 0;
    }
    if ( !(_NF ^ _VF) )
      v42 = 0.0;
      if ( Entity::getAmbientSoundIntervalRange(v1, &v42) )
      {
        __asm
        {
          VMOV.F32        S0, #20.0
          VLDR            S2, [SP,#0x30+var_1C]
          VMUL.F32        S0, S2, S0
          VCVTR.S32.F32   S0, S0
          VMOV            R6, S0
        }
        if ( (signed int)_R6 < 1 )
          v9 = 0;
LABEL_10:
          v10 = -(v2 + v9);
          if ( !((((20 - (v2 + v9)) & 0x80000000) != 0) ^ __OFADD__(v10, 20)) )
            v10 = -20;
          *((_DWORD *)v1 + 869) = v10;
          (*(void (__fastcall **)(Mob *))(*(_DWORD *)v1 + 804))(v1);
          goto LABEL_13;
      }
      else
        _R6 = 320;
      v9 = Random::_genRandInt32((Mob *)((char *)v1 + 552)) % _R6;
      goto LABEL_10;
  }
LABEL_13:
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 316))(v1) != 1 )
    goto LABEL_26;
  v11 = (int *)(*(_QWORD *)((char *)v1 + 476) >> 32);
  v12 = (int *)*(_QWORD *)((char *)v1 + 476);
  if ( v12 == v11 )
    goto LABEL_58;
  v13 = (int)(v11 - 1);
  v14 = 0;
  do
    v15 = Entity::hasCategory(*v12, 1);
    v14 |= v15;
    if ( v15 )
      break;
    _ZF = v13 == (_DWORD)v12;
    ++v12;
  while ( !_ZF );
  if ( !(v14 & 1) )
LABEL_58:
    if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 168))(v1) != 1 )
      goto LABEL_26;
    EntityDamageSource::EntityDamageSource((int)&v40, 4);
    Entity::hurt(v1, (const EntityDamageSource *)&v40, 1, 1, 0);
    v17 = &v40;
    goto LABEL_25;
  v16 = (Level *)Entity::getLevel(v1);
  if ( Level::isClientSide(v16) == 1 && (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 168))(v1) == 1 )
    EntityDamageSource::EntityDamageSource((int)&v41, 4);
    Entity::hurt(v1, (const EntityDamageSource *)&v41, 1, 1, 0);
    v17 = &v41;
LABEL_25:
    EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)v17);
LABEL_26:
  *((_DWORD *)v1 + 864) = *((_DWORD *)v1 + 865);
  v18 = *((_DWORD *)v1 + 863);
  if ( v18 >= 1 )
    *((_DWORD *)v1 + 863) = v18 - 1;
  v19 = *((_DWORD *)v1 + 858);
  if ( v19 >= 1 )
    *((_DWORD *)v1 + 858) = v19 - 1;
  v20 = *((_DWORD *)v1 + 105);
  if ( v20 >= 1 )
    *((_DWORD *)v1 + 105) = v20 - 1;
  if ( (*((_DWORD *)v1 + 1051) & *((_DWORD *)v1 + 1050)) != -1 )
    if ( *((_DWORD *)v1 + 1059) <= 0
      || (v21 = Entity::getLevel(v1),
          (v22 = Level::fetchEntity(v21, 0, *((_QWORD *)v1 + 525), *((_QWORD *)v1 + 525) >> 32, 0)) == 0)
      || !(*(int (**)(void))(*(_DWORD *)v22 + 316))() )
      (*(void (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v1 + 948))(v1, 0);
  if ( (*((_DWORD *)v1 + 1053) & *((_DWORD *)v1 + 1052)) != -1 )
    if ( *((_DWORD *)v1 + 861) <= 0
      || (v23 = Entity::getLevel(v1),
          (v24 = Level::fetchEntity(v23, 0, *((_QWORD *)v1 + 526), *((_QWORD *)v1 + 526) >> 32, 0)) == 0)
      || !(*(int (**)(void))(*(_DWORD *)v24 + 316))() )
      (*(void (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)v1 + 956))(v1, 0);
  v25 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
                               v1,
                               &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getCurrentValue(v25);
  __asm
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  if ( _R0 <= 0 )
    (*(void (__fastcall **)(Mob *))(*(_DWORD *)v1 + 1172))(v1);
  v28 = *((_DWORD *)v1 + 1059);
  if ( v28 >= 1 )
    *((_DWORD *)v1 + 1059) = v28 - 1;
  v29 = *((_DWORD *)v1 + 861);
  if ( v29 >= 1 )
    *((_DWORD *)v1 + 861) = v29 - 1;
  v30 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
  _R0 = AttributeInstance::getCurrentValue(v30);
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v32 = (BaseAttributeMap *)*((_DWORD *)v1 + 992);
    v33 = BaseAttributeMap::begin(*((BaseAttributeMap **)v1 + 992));
    v37 = BaseAttributeMap::end(v32);
    while ( v33 != v37 )
      AttributeInstance::tick((AttributeInstance *)(v33 + 8), v34, v35, v36);
      v33 = *(_DWORD *)v33;
  Mob::_sendDirtyMobData(v1);
  Mob::tickEffects(v1);
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 792))(v1) == 1
    && !(*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 208))(v1) )
    Mob::_doSprintParticleEffect(v1, v38);
  *((_DWORD *)v1 + 1007) = *((_DWORD *)v1 + 1006);
  *((_DWORD *)v1 + 854) = *((_DWORD *)v1 + 853);
  *((_DWORD *)v1 + 856) = *((_DWORD *)v1 + 855);
  *((_DWORD *)v1 + 33) = *((_DWORD *)v1 + 31);
  result = *((_DWORD *)v1 + 30);
  *((_DWORD *)v1 + 32) = result;
  return result;
}


void __fastcall Mob::setLastHurtByPlayer(Mob *this, Player *a2)
{
  Player *v2; // r5@1
  Mob *v3; // r4@1
  double v4; // r0@2
  bool v5; // zf@2
  unsigned int v6; // r0@5
  int v7; // r6@7
  int *v8; // r5@7
  int v9; // r7@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  void *v12; // r5@18
  int v13; // r1@18
  void *v14; // r0@18
  bool v15; // zf@20
  char *v16; // r5@24
  void *ptr; // [sp+4h] [bp-44h]@8
  unsigned int v18; // [sp+8h] [bp-40h]@5
  int v19; // [sp+Ch] [bp-3Ch]@5
  int v20; // [sp+10h] [bp-38h]@5
  signed int v21; // [sp+14h] [bp-34h]@5
  int v22; // [sp+18h] [bp-30h]@5
  int v23; // [sp+1Ch] [bp-2Ch]@21

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    *((_QWORD *)this + 526) = *(_QWORD *)Entity::getUniqueID(a2);
    *((_DWORD *)v3 + 861) = 400;
    Entity::setPersistent(v3);
    (*(void (__fastcall **)(Mob *, Player *))(*(_DWORD *)v3 + 948))(v3, v2);
    LODWORD(v4) = *((_DWORD *)v3 + 12);
    v5 = LODWORD(v4) == 0;
    if ( LODWORD(v4) )
      v5 = *(_DWORD *)(LODWORD(v4) + 248) == 0;
    if ( !v5 )
    {
      v19 = 0;
      v20 = 0;
      v21 = 1065353216;
      v22 = 0;
      LODWORD(v4) = &v21;
      v6 = sub_21E6254(v4);
      v18 = v6;
      if ( v6 == 1 )
      {
        v23 = 0;
        v8 = &v23;
      }
      else
        if ( v6 >= 0x40000000 )
          sub_21E57F4();
        v7 = 4 * v6;
        v8 = (int *)operator new(4 * v6);
        _aeabi_memclr4(v8, v7);
      ptr = v8;
      Entity::initParams(v3, (VariantParameterList *)&ptr);
      EntityDefinitionDescriptor::executeTrigger(
        *((_DWORD *)v3 + 12),
        v3,
        (DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)v3 + 12) + 248) + 4),
        (const VariantParameterList *)&ptr);
      v9 = v19;
      while ( v9 )
        v12 = (void *)v9;
        v13 = *(_DWORD *)(v9 + 8);
        v9 = *(_DWORD *)v9;
        v14 = (void *)(v13 - 12);
        if ( (int *)(v13 - 12) != &dword_28898C0 )
        {
          v10 = (unsigned int *)(v13 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          }
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        }
        operator delete(v12);
      _aeabi_memclr4(ptr, 4 * v18);
      v15 = ptr == 0;
      if ( ptr )
        v15 = &v23 == ptr;
      if ( !v15 )
        operator delete(ptr);
    }
  }
  else
    v16 = (char *)this + 4208;
    if ( *((_QWORD *)this + 526) == *((_QWORD *)this + 525) )
      (*(void (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)this + 948))(this, 0);
    *(_DWORD *)v16 = -1;
    *((_DWORD *)v3 + 1053) = -1;
    *((_DWORD *)v3 + 861) = 0;
}


Mob *__fastcall Mob::getFirstCaravanHead(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int i; // r5@1
  int v5; // r0@3
  int v6; // r1@3

  v1 = this;
  v2 = Entity::getLevel(this);
  for ( i = Level::fetchEntity(v2, v3, *((_DWORD *)v1 + 1054), *((_DWORD *)v1 + 1055), 0);
        i;
        i = Level::fetchEntity(v5, v6, *(_DWORD *)(i + 4216), *(_DWORD *)(i + 4220), 0) )
  {
    if ( Entity::hasCategory(i, 2) != 1 )
      break;
    v5 = Entity::getLevel((Entity *)i);
    v1 = (Mob *)i;
  }
  return v1;
}


signed int __fastcall Mob::consumeTotem(Mob *this)
{
  ItemInstance *v1; // r5@0
  Mob *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  ItemInstance *v5; // r5@7
  void (__fastcall *v7)(Mob *, int *); // r6@10
  int v8; // [sp+0h] [bp-58h]@10
  int v9; // [sp+8h] [bp-50h]@14
  void *v10; // [sp+24h] [bp-34h]@12
  void *ptr; // [sp+34h] [bp-24h]@10

  v2 = this;
  v3 = *((_BYTE *)this + 3599);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = (Mob *)((char *)v2 + 3584);
    v4 = *((_DWORD *)v2 + 896) == 0;
  }
  if ( v4 || ItemInstance::isNull(v1) || !*((_BYTE *)v2 + 3598) || *(_DWORD *)v1 != Item::mTotem )
    v5 = (ItemInstance *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v2 + 908))(v2);
    if ( ItemInstance::isNull(v5) || *(_DWORD *)v5 != Item::mTotem )
      return 0;
    v7 = *(void (__fastcall **)(Mob *, int *))(*(_DWORD *)v2 + 912);
    ItemInstance::ItemInstance((int)&v8);
    v7(v2, &v8);
    if ( ptr )
      operator delete(ptr);
    if ( v10 )
      operator delete(v10);
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
    v9 = 0;
  else
    (*(void (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1100))(v2, &ItemInstance::EMPTY_ITEM);
  return 1;
}


char *__fastcall Mob::getAllHand(Mob *this, int a2)
{
  ItemInstance *v2; // r8@0
  int v3; // r7@1
  Mob *v4; // r4@1
  ItemInstance *v5; // r6@1
  char *v6; // r5@1
  int v7; // r0@1
  bool v8; // zf@1
  char *result; // r0@7
  bool v10; // zf@7
  _BYTE *v11; // r6@13
  signed int v12; // r0@13
  unsigned int v13; // r1@13
  unsigned int v14; // r0@15
  unsigned int v15; // r7@15
  char *v16; // r9@23
  signed int v17; // r2@25
  int v18; // r5@25
  int v19; // r5@27

  v3 = a2;
  v4 = this;
  v5 = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = (char *)operator new(8u);
  v7 = *(_BYTE *)(v3 + 3527);
  *(_DWORD *)v4 = v6;
  *((_DWORD *)v4 + 1) = v6;
  v8 = v7 == 0;
  *((_DWORD *)v4 + 2) = v6 + 8;
  if ( v7 )
  {
    v5 = (ItemInstance *)(v3 + 3512);
    v8 = *(_DWORD *)(v3 + 3512) == 0;
  }
  if ( !v8 && !ItemInstance::isNull(v5) && *(_BYTE *)(v3 + 3526) )
    *(_DWORD *)v6 = v5;
    v6 = (char *)(*((_DWORD *)v4 + 1) + 4);
    *((_DWORD *)v4 + 1) = v6;
  result = (char *)*(_BYTE *)(v3 + 3599);
  v10 = result == 0;
  if ( *(_BYTE *)(v3 + 3599) )
    v2 = (ItemInstance *)(v3 + 3584);
    result = *(char **)(v3 + 3584);
    v10 = result == 0;
  if ( !v10 )
    result = (char *)ItemInstance::isNull(v2);
    if ( !result )
    {
      result = (char *)*(_BYTE *)(v3 + 3598);
      if ( *(_BYTE *)(v3 + 3598) )
      {
        if ( v6 == *((char **)v4 + 2) )
        {
          v11 = *(_BYTE **)v4;
          v12 = (signed int)&v6[-*(_DWORD *)v4];
          v13 = v12 >> 2;
          if ( !(v12 >> 2) )
            v13 = 1;
          v14 = v13 + (v12 >> 2);
          v15 = v14;
          if ( 0 != v14 >> 30 )
            v15 = 0x3FFFFFFF;
          if ( v14 < v13 )
          if ( v15 )
          {
            if ( 0 != v15 >> 30 )
              sub_21E57F4();
            v16 = (char *)operator new(4 * v15);
          }
          else
            v16 = 0;
          v17 = v6 - v11;
          v18 = (int)&v16[v6 - v11];
          *(_DWORD *)&v16[v17] = v2;
          if ( 0 != v17 >> 2 )
            _aeabi_memmove4(v16, v11);
          v19 = v18 + 4;
          if ( v11 )
            operator delete(v11);
          result = &v16[4 * v15];
          *(_DWORD *)v4 = v16;
          *((_DWORD *)v4 + 1) = v19;
          *((_DWORD *)v4 + 2) = result;
        }
        else
          *(_DWORD *)v6 = v2;
          result = (char *)(*((_DWORD *)v4 + 1) + 4);
          *((_DWORD *)v4 + 1) = result;
      }
    }
  return result;
}


int __fastcall Mob::setNaturallySpawned(int result, bool a2)
{
  *(_BYTE *)(result + 4162) = a2;
  return result;
}


int __fastcall Mob::onEffectAdded(Mob *this, MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  Mob *v3; // r5@1
  Level *v4; // r0@2
  int v5; // r6@3
  int v6; // r6@5
  int result; // r0@5
  bool v8; // zf@5
  Level *v9; // r6@10
  int v10; // r7@12
  int v11; // r8@13
  int v12; // r7@13
  int v13; // r5@13
  char v14; // r0@13
  int v15; // r0@13
  __int64 v16; // [sp+0h] [bp-50h]@13
  void **v17; // [sp+8h] [bp-48h]@13
  signed int v18; // [sp+Ch] [bp-44h]@13
  signed int v19; // [sp+10h] [bp-40h]@13
  char v20; // [sp+14h] [bp-3Ch]@13
  __int64 v21; // [sp+18h] [bp-38h]@13
  int v22; // [sp+20h] [bp-30h]@13
  char v23; // [sp+24h] [bp-2Ch]@13
  int v24; // [sp+28h] [bp-28h]@13
  int v25; // [sp+2Ch] [bp-24h]@13
  char v26; // [sp+30h] [bp-20h]@13

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 4181) = 1;
  if ( *((_DWORD *)this + 773) )
  {
    v4 = (Level *)Entity::getLevel(this);
    if ( !Level::isClientSide(v4) )
    {
      v5 = MobEffectInstance::getId(v2);
      if ( v5 != MobEffectInstance::getId((MobEffectInstance *)&MobEffectInstance::NO_EFFECT) )
        MobEffectInstance::applyEffects(v2, v3);
    }
  }
  v6 = MobEffectInstance::getId(v2);
  result = MobEffect::getId((MobEffect *)MobEffect::FIRE_RESISTANCE);
  v8 = v6 == result;
  if ( v6 == result )
    result = *((_BYTE *)v3 + 427);
    v8 = result == 0;
  if ( v8 )
    result = Entity::setStatusFlag((int)v3, 47, 1);
  v9 = (Level *)*((_DWORD *)v3 + 773);
  if ( v9 )
    result = Level::isClientSide(*((Level **)v3 + 773));
    if ( !result )
      v10 = MobEffectInstance::getId(v2);
      result = MobEffect::getId((MobEffect *)MobEffect::LEVITATION);
      if ( v10 == result )
      {
        Entity::getRuntimeID((Entity *)&v16, (int)v3);
        v11 = MobEffectInstance::getId(v2);
        v12 = MobEffectInstance::getDuration(v2);
        v13 = MobEffectInstance::getAmplifier(v2);
        v14 = MobEffectInstance::isEffectVisible(v2);
        v18 = 2;
        v19 = 1;
        v20 = 0;
        v17 = &off_26E95E4;
        v21 = v16;
        v22 = v12;
        v23 = 1;
        v24 = v11;
        v25 = v13;
        v26 = v14;
        v15 = Level::getPacketSender(v9);
        result = (*(int (**)(void))(*(_DWORD *)v15 + 8))();
      }
  return result;
}


int __fastcall Mob::pickUpItem(Mob *this, ItemEntity *a2)
{
  int result; // r0@1
  ItemEntity *v3; // r4@1

  result = *((_DWORD *)this + 782);
  v3 = a2;
  if ( result )
  {
    (*(void (**)(void))(**(_DWORD **)(result + 4) + 24))();
    result = *((_BYTE *)v3 + 3430);
    if ( !*((_BYTE *)v3 + 3430) )
      result = (*(int (__fastcall **)(ItemEntity *))(*(_DWORD *)v3 + 44))(v3);
  }
  return result;
}


int __fastcall Mob::getCaravanHead(int result, int a2)
{
  int v2; // r2@1
  int v3; // r1@1

  v2 = *(_DWORD *)(a2 + 4216);
  v3 = *(_DWORD *)(a2 + 4220);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  return result;
}


void __fastcall Mob::_sendDirtyMobData(Mob *this)
{
  Mob::_sendDirtyMobData(this);
}


signed int __fastcall Mob::setItemSlot(int a1, signed int a2, int a3)
{
  signed int v3; // r7@1
  int v4; // r4@1
  int v5; // r5@1
  int v6; // r6@3
  bool v7; // zf@4
  const ItemInstance *v8; // r1@9
  int v9; // r0@10
  bool v10; // zf@10

  v3 = a2;
  v4 = a3;
  v5 = a1;
  if ( a2 <= 1 )
  {
    ItemInstance::operator=(a1 + 72 * a2 + 3512, a3);
    return 1;
  }
  v6 = a2 - 2;
  if ( (unsigned int)(a2 - 2) <= 3 )
    v7 = *(_BYTE *)(a3 + 15) == 0;
    if ( *(_BYTE *)(a3 + 15) )
      v7 = *(_DWORD *)a3 == 0;
    if ( v7 || ItemInstance::isNull((ItemInstance *)a3) || !*(_BYTE *)(v4 + 14) )
      goto LABEL_16;
    if ( ItemInstance::isArmorItem((ItemInstance *)v4) == 1 )
    {
      v9 = ArmorItem::getSlotForItem((ArmorItem *)v4, v8);
      v10 = v3 == 2;
      if ( v3 != 2 )
        v10 = v9 == v6;
      if ( !v10 )
        return 0;
LABEL_16:
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v5 + 1024))(v5, v3 - 2, v4);
      return 1;
    }
    if ( v3 == 2 )
  return 0;
}


int __fastcall Mob::jumpFromGround(Mob *this)
{
  int v2; // r0@1
  MobEffect *v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r0@2
  int v6; // r0@3
  int v7; // r1@3
  unsigned int v8; // r6@4
  MobEffect *v9; // r5@4
  int v10; // r0@5
  MobEffectInstance *v11; // r0@6
  float v17; // r1@10
  float v21; // r1@11
  int result; // r0@12
  const BlockPos *v24; // r5@13
  char v25; // [sp+4h] [bp-34h]@13
  char v26; // [sp+10h] [bp-28h]@13
  char v27; // [sp+1Ch] [bp-1Ch]@13

  _R4 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  *((_DWORD *)_R4 + 1024) = *(_DWORD *)v2;
  *((_DWORD *)_R4 + 1025) = *(_DWORD *)(v2 + 4);
  *((_DWORD *)_R4 + 1026) = *(_DWORD *)(v2 + 8);
  *((_DWORD *)_R4 + 28) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 828))(_R4);
  v3 = (MobEffect *)MobEffect::JUMP;
  v4 = (*((_DWORD *)_R4 + 994) - *((_DWORD *)_R4 + 993)) >> 4;
  if ( v4 > MobEffect::getId((MobEffect *)MobEffect::JUMP) )
  {
    v5 = MobEffect::getId(v3);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)_R4 + 993) + 16 * v5), &MobEffectInstance::NO_EFFECT) == 1 )
    {
      v6 = MobEffect::getId(v3);
      v7 = *((_DWORD *)_R4 + 993);
      if ( v7 + 16 * v6 )
      {
        v8 = (*((_DWORD *)_R4 + 994) - v7) >> 4;
        v9 = (MobEffect *)MobEffect::JUMP;
        if ( v8 <= MobEffect::getId((MobEffect *)MobEffect::JUMP) )
        {
          v11 = 0;
        }
        else
          v10 = MobEffect::getId(v9);
          if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)_R4 + 993) + 16 * v10), &MobEffectInstance::NO_EFFECT) == 1 )
            v11 = (MobEffectInstance *)(*((_DWORD *)_R4 + 993) + 16 * MobEffect::getId(v9));
          else
            v11 = 0;
        _R0 = MobEffectInstance::getAmplifier(v11) + 1;
        __asm
          VLDR            S2, =0.1
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VMUL.F32        S0, S0, S2
          VLDR            S2, [R4,#0x70]
          VADD.F32        S0, S0, S2
          VSTR            S0, [R4,#0x70]
      }
    }
  }
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 792))(_R4) == 1 )
    __asm { VLDR            S0, [R4,#0x7C] }
    _R0 = &mce::Math::DEGRAD;
    __asm
      VLDR            S2, [R0]
      VMUL.F32        S0, S2, S0
      VMOV            R5, S0
    _R0 = mce::Math::sin(_R5, v17);
      VMOV            S0, R0
      VLDR            S16, =0.2
      VLDR            S2, [R4,#0x6C]
      VMUL.F32        S0, S0, S16
      VSUB.F32        S0, S2, S0
      VSTR            S0, [R4,#0x6C]
    _R0 = mce::Math::cos(_R5, v21);
      VLDR            S2, [R4,#0x74]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x74]
  result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 288))(_R4);
  if ( !result )
    v24 = (const BlockPos *)Entity::getRegion(_R4);
    Entity::_getBlockOnPos((Entity *)&v26, *(float *)&_R4);
    BlockSource::getBlockID((BlockSource *)&v27, v24, (int)&v26);
    Entity::getAttachPos((AABB *)&v25, (int)_R4, 0, 0);
    result = Entity::playSound((int)_R4, 4, (int)&v25);
  return result;
}


int __fastcall Mob::getItemUseIntervalProgress(Mob *this)
{
  return 0;
}


int __fastcall Mob::joinCaravan(Mob *this, Mob *a2)
{
  Mob *v2; // r5@1
  Mob *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r6@1
  int v7; // r5@2
  int v8; // r0@4
  int v9; // r1@4
  int v10; // r8@5
  int v11; // r1@8
  int v12; // r7@9
  BlockSource *v13; // r0@9
  int v14; // r0@9
  int v15; // r1@9
  int v16; // r0@9
  signed int v17; // r0@10

  v2 = a2;
  v3 = this;
  *((_QWORD *)this + 527) = *(_QWORD *)Entity::getUniqueID(a2);
  *((_QWORD *)v2 + 528) = *(_QWORD *)Entity::getUniqueID(v3);
  v4 = Entity::getLevel(v3);
  v6 = Level::fetchEntity(v4, v5, *((_DWORD *)v3 + 1054), *((_DWORD *)v3 + 1055), 0);
  if ( v6 )
  {
    v7 = (int)v3;
    do
    {
      if ( Entity::hasCategory(v6, 2) != 1 )
        break;
      v8 = Entity::getLevel((Entity *)v6);
      v7 = v6;
      v6 = Level::fetchEntity(v8, v9, *(_DWORD *)(v6 + 4216), *(_DWORD *)(v6 + 4220), 0);
    }
    while ( v6 );
    v10 = Entity::getLevel(v3);
    if ( !v7 )
      v12 = 0;
      return j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v10, v7, 64, v12);
    v3 = (Mob *)v7;
  }
  else
  v11 = 1;
  do
    v12 = v11;
    v13 = (BlockSource *)Entity::getRegion(v3);
    v14 = BlockSource::getLevel(v13);
    v16 = Level::fetchEntity(v14, v15, *(_DWORD *)(v7 + 4224), *(_DWORD *)(v7 + 4228), 0);
    v7 = v16;
    if ( !v16 )
      break;
    v17 = Entity::hasCategory(v16, 2);
    v11 = v12 + 1;
  while ( v17 );
  v7 = (int)v3;
  return j_j_j__ZN5Level20broadcastEntityEventEP6Entity11EntityEventi_0(v10, v7, 64, v12);
}


signed int __fastcall Mob::isAlive(Mob *this)
{
  Mob *v1; // r5@1
  signed int v2; // r4@1
  AttributeInstance *v3; // r0@2

  v1 = this;
  v2 = 0;
  if ( !Entity::isRemoved(this) )
  {
    v3 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
                                v1,
                                &SharedAttributes::HEALTH);
    _R0 = AttributeInstance::getCurrentValue(v3);
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
    if ( _R0 > 0 )
      v2 = 1;
  }
  return v2;
}


Mob *__fastcall Mob::onPlayerJump(Mob *this, int a2)
{
  Mob *v3; // r4@1
  Mob *result; // r0@5

  _R5 = a2;
  v3 = this;
  if ( a2 < 0 )
  {
    _R5 = 0;
  }
  else
    if ( *((_DWORD *)this + 128) )
      (*(void (__fastcall **)(Mob *, signed int, _DWORD))(*(_DWORD *)this + 596))(this, 1, 0);
    *((_BYTE *)v3 + 4092) = 1;
    (*(void (__fastcall **)(Mob *, signed int))(*(_DWORD *)v3 + 380))(v3, 1);
    if ( _R5 >= 90 )
    {
      result = (Mob *)1065353216;
      *((_DWORD *)v3 + 1022) = 1065353216;
      return result;
    }
  __asm
    VMOV            S0, R5
    VLDR            S2, =0.0044444
  result = (Mob *)((char *)v3 + 4088);
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.4
    VADD.F32        S0, S0, S2
    VSTR            S0, [R0]
  return result;
}


signed int __fastcall Mob::getLastHurtMob(Mob *this)
{
  char *v1; // r4@1
  int v2; // r0@2
  int v3; // r1@2
  signed int result; // r0@2

  v1 = (char *)this + 4192;
  if ( (*((_DWORD *)this + 1049) & *((_DWORD *)this + 1048)) == -1
    || (v2 = Entity::getLevel(this), (result = Level::getMob(v2, v3, *(_QWORD *)v1, *(_QWORD *)v1 >> 32)) == 0) )
  {
    *(_DWORD *)v1 = -1;
    *((_DWORD *)v1 + 1) = -1;
    result = 0;
  }
  return result;
}


char *__fastcall Mob::getCarriedItem(Mob *this)
{
  return (char *)this + 3512;
}


char *__fastcall Mob::getOffhandSlot(Mob *this)
{
  return (char *)this + 3584;
}


void __fastcall Mob::frostWalk(Mob *this)
{
  Entity *v1; // r7@1
  Level *v2; // r0@1
  int v3; // r0@2
  int v4; // r4@2
  int v5; // r0@2
  bool v6; // zf@2
  const BlockPos *v7; // r5@7
  EnchantmentInstance *v8; // r4@13
  EnchantmentInstance *v9; // r7@13
  int v10; // r6@14
  char v11; // r8@14
  int v12; // r10@19
  int v13; // r8@20
  Block *v14; // r0@22
  int *v15; // r0@22
  bool v16; // nf@27
  unsigned __int8 v17; // vf@27
  int v18; // [sp+10h] [bp-90h]@13
  char v19; // [sp+18h] [bp-88h]@25
  char v20; // [sp+1Ch] [bp-84h]@24
  unsigned __int8 v21; // [sp+20h] [bp-80h]@21
  int v22; // [sp+24h] [bp-7Ch]@21
  int v23; // [sp+28h] [bp-78h]@21
  int v24; // [sp+2Ch] [bp-74h]@21
  int v25; // [sp+30h] [bp-70h]@21
  int v26; // [sp+34h] [bp-6Ch]@21
  int v27; // [sp+38h] [bp-68h]@21
  char v28; // [sp+3Ch] [bp-64h]@13
  int v29; // [sp+40h] [bp-60h]@21
  int v30; // [sp+44h] [bp-5Ch]@21
  char v31; // [sp+48h] [bp-58h]@7
  void *v32; // [sp+4Ch] [bp-54h]@11
  void *v33; // [sp+58h] [bp-48h]@9
  void *ptr; // [sp+64h] [bp-3Ch]@7
  void *v35; // [sp+70h] [bp-30h]@7
  EnchantmentInstance *v36; // [sp+74h] [bp-2Ch]@13

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v2) )
  {
    v3 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 1028))(v1, 3);
    v4 = v3;
    v5 = *(_BYTE *)(v3 + 15);
    v6 = v5 == 0;
    if ( v5 )
      v6 = *(_DWORD *)v4 == 0;
    if ( !v6 && !ItemInstance::isNull((ItemInstance *)v4) && *(_BYTE *)(v4 + 14) )
    {
      v7 = (const BlockPos *)Entity::getRegion(v1);
      ItemInstance::getEnchantsFromUserData((ItemInstance *)&v31, v4);
      ItemEnchants::getEnchants((ItemEnchants *)&v35, (int)&v31, 0);
      if ( ptr )
        operator delete(ptr);
      if ( v33 )
        operator delete(v33);
      if ( v32 )
        operator delete(v32);
      v18 = (int)v1;
      BlockPos::BlockPos((int)&v28, (int)v1 + 72);
      v9 = v36;
      v8 = (EnchantmentInstance *)v35;
      if ( v35 != (void *)v36 )
      {
        v10 = 0;
        v11 = 0;
        do
        {
          if ( EnchantmentInstance::getEnchantType(v8) == 25 )
          {
            v10 = EnchantmentInstance::getEnchantLevel(v8) + 2;
            v11 = 1;
          }
          v8 = (EnchantmentInstance *)((char *)v8 + 8);
        }
        while ( v9 != v8 );
        if ( v11 & 1 )
          v12 = -v10;
          if ( v10 >= -v10 )
            do
            {
              v13 = ~v10;
              do
              {
                v25 = *(_DWORD *)&v28 + v12;
                v22 = *(_DWORD *)&v28 + v12;
                v26 = v29 - 2;
                v27 = v30 + v13 + 1;
                v23 = v29 - 1;
                v24 = v30 + v13 + 1;
                BlockSource::getBlockID((BlockSource *)&v21, v7, (int)&v22);
                if ( v21 == *(_BYTE *)(Block::mAir + 4) )
                {
                  v14 = (Block *)BlockSource::getBlock(v7, (const BlockPos *)&v25);
                  v15 = (int *)Block::getMaterial(v14);
                  if ( Material::isType(v15, 5) == 1 && !BlockSource::getData(v7, (const BlockPos *)&v25) )
                  {
                    v20 = *(_BYTE *)(Block::mFrostedIce + 4);
                    if ( BlockSource::mayPlace(v7, (int)&v20, (int)&v25, 0, v18, 0, 0) == 1 )
                    {
                      v19 = *(_BYTE *)(Block::mFrostedIce + 4);
                      BlockSource::setBlock((int)v7, (BlockPos *)&v25, &v19, 3);
                    }
                  }
                }
                ++v13;
              }
              while ( v13 < v10 );
              v17 = __OFSUB__(v12, v10);
              v16 = v12++ - v10 < 0;
            }
            while ( v16 ^ v17 );
      }
      if ( v35 )
        operator delete(v35);
    }
  }
}


int __fastcall Mob::doFireHurt(Mob *this, int a2)
{
  Mob *v2; // r5@1
  int v3; // r4@1
  MobEffect *v4; // r6@1
  unsigned int v5; // r7@1
  int v6; // r0@2
  int result; // r0@4

  v2 = this;
  v3 = a2;
  v4 = (MobEffect *)MobEffect::FIRE_RESISTANCE;
  v5 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  if ( v5 > MobEffect::getId((MobEffect *)MobEffect::FIRE_RESISTANCE)
    && (v6 = MobEffect::getId(v4),
        MobEffectInstance::operator!=((int *)(*((_DWORD *)v2 + 993) + 16 * v6), &MobEffectInstance::NO_EFFECT) == 1)
    && *((_DWORD *)v2 + 993) + 16 * MobEffect::getId(v4) )
  {
    result = 0;
  }
  else
    result = Entity::doFireHurt(__PAIR__(v3, (unsigned int)v2));
  return result;
}


signed int __fastcall Mob::shouldDespawn(Mob *this)
{
  Mob *v1; // r4@1
  const BlockPos *v2; // r5@1
  int v3; // r0@1
  signed int result; // r0@1
  unsigned __int8 v5; // [sp+0h] [bp-20h]@1
  char v6; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = (const BlockPos *)Entity::getRegion(this);
  v3 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 52))(v1);
  BlockPos::BlockPos((int)&v6, v3);
  BlockSource::getRawBrightness((BlockSource *)&v5, v2, (int)&v6, 1);
  result = 0;
  if ( !*((_BYTE *)v1 + 3280) && v5 <= 7u )
  {
    result = 0;
    if ( *((_DWORD *)v1 + 999) > 600 )
      result = 1;
  }
  return result;
}


ItemInstance *__fastcall Mob::getEquippedTotem(Mob *this)
{
  ItemInstance *v1; // r4@0
  Mob *v2; // r5@1
  int v3; // r0@1
  bool v4; // zf@1

  v2 = this;
  v3 = *((_BYTE *)this + 3599);
  v4 = v3 == 0;
  if ( v3 )
  {
    v1 = (Mob *)((char *)v2 + 3584);
    v4 = *((_DWORD *)v2 + 896) == 0;
  }
  if ( v4 || ItemInstance::isNull(v1) || !*((_BYTE *)v2 + 3598) || *(_DWORD *)v1 != Item::mTotem )
    v1 = (Mob *)((char *)v2 + 3512);
    if ( ItemInstance::isNull((Mob *)((char *)v2 + 3512)) || *(_DWORD *)v1 != Item::mTotem )
      v1 = (ItemInstance *)&ItemInstance::EMPTY_ITEM;
  return v1;
}


signed int __fastcall Mob::hasAttributeBuff(int a1, int a2)
{
  BaseAttributeMap *v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r8@1
  AttributeBuff *v6; // r7@4
  __int64 v7; // kr00_8@4

  v2 = *(BaseAttributeMap **)(a1 + 3968);
  v3 = a2;
  v4 = BaseAttributeMap::begin(*(BaseAttributeMap **)(a1 + 3968));
  v5 = BaseAttributeMap::end(v2);
  while ( 1 )
  {
    if ( v4 == v5 )
      return 0;
    v7 = *(_QWORD *)AttributeInstance::getBuffs((AttributeInstance *)(v4 + 8));
    v6 = (AttributeBuff *)v7;
    if ( (_DWORD)v7 != HIDWORD(v7) )
      break;
LABEL_2:
    v4 = *(_DWORD *)v4;
  }
  while ( AttributeBuff::getType(v6) != v3 )
    v6 = (AttributeBuff *)((char *)v6 + 72);
    if ( (AttributeBuff *)HIDWORD(v7) == v6 )
      goto LABEL_2;
  return 1;
}


unsigned int __fastcall Mob::dropBags(Mob *this)
{
  Mob *v1; // r4@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  unsigned int result; // r0@1
  ContainerComponent *v5; // r5@3
  BlockSource *v6; // r6@4
  const Vec3 *v7; // r0@4
  void (__fastcall *v8)(Mob *, int *, signed int); // r6@5
  int v9; // [sp+0h] [bp-58h]@5
  int v10; // [sp+8h] [bp-50h]@9
  void *v11; // [sp+24h] [bp-34h]@7
  void *ptr; // [sp+34h] [bp-24h]@5

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = (Level *)BlockSource::getLevel(v2);
  result = Level::isClientSide(v3);
  if ( !result )
  {
    result = Entity::isChested(v1);
    if ( result == 1 )
    {
      v5 = (ContainerComponent *)*((_DWORD *)v1 + 782);
      if ( v5 )
      {
        v6 = (BlockSource *)Entity::getRegion(v1);
        v7 = (const Vec3 *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 52))(v1);
        ContainerComponent::dropContents(v5, v6, v7, 1);
      }
      v8 = *(void (__fastcall **)(Mob *, int *, signed int))(*(_DWORD *)v1 + 452);
      ItemInstance::ItemInstance((ItemInstance *)&v9, Block::mChest);
      v8(v1, &v9, 1065353216);
      if ( ptr )
        operator delete(ptr);
      if ( v11 )
        operator delete(v11);
      if ( v10 )
        (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      result = 0;
    }
  }
  return result;
}


signed int __fastcall Mob::isInvertedHealAndHarm(Mob *this)
{
  int v1; // r0@1

  v1 = (*(int (**)(void))(*(_DWORD *)this + 488))();
  return j_j_j__ZN15EntityClassTree16isTypeInstanceOfE10EntityTypeS0__1(v1, 68352);
}


int __fastcall Mob::getMeleeKnockbackBonus(Mob *this)
{
  int v1; // r0@1
  int v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  const ItemInstance *v5; // r2@6
  int result; // r0@7

  v1 = (*(int (**)(void))(*(_DWORD *)this + 908))();
  v2 = v1;
  v3 = *(_BYTE *)(v1 + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4
    || ItemInstance::isNull((ItemInstance *)v2)
    || !*(_BYTE *)(v2 + 14)
    || ItemInstance::getId((ItemInstance *)v2) == *(_WORD *)(Item::mEnchanted_book + 18) )
  {
    result = 0;
  }
  else
    result = j_j_j__ZN12EnchantUtils15getEnchantLevelEiRK12ItemInstance_0((EnchantUtils *)0xC, v2, v5);
  return result;
}


TradeableComponent *__fastcall Mob::newServerAiStep(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r5@1
  void *v3; // r0@1
  void *v4; // r6@2
  void *v5; // r0@3
  void *v6; // r7@4
  int v7; // r0@5
  int v8; // r0@7
  int v9; // r0@9
  TradeableComponent *result; // r0@11

  v1 = this;
  ++*((_DWORD *)this + 999);
  v2 = *((_DWORD *)this + 1030);
  v3 = *(void **)(v2 + 12);
  if ( v3 )
  {
    do
    {
      v4 = *(void **)v3;
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 );
  }
  _aeabi_memclr4(*(_QWORD *)(v2 + 4), 4 * (*(_QWORD *)(v2 + 4) >> 32));
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  v5 = *(void **)(v2 + 40);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)(v2 + 32), 4 * (*(_QWORD *)(v2 + 32) >> 32));
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  GoalSelector::tick((Mob *)((char *)v1 + 4136));
  GoalSelector::tick((Mob *)((char *)v1 + 4124));
  v7 = *((_DWORD *)v1 + 1069);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 28))();
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)v1 + 1144))(v1);
  v8 = *((_DWORD *)v1 + 1071);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 12))();
  (*(void (**)(void))(**((_DWORD **)v1 + 1028) + 8))();
  v9 = *((_DWORD *)v1 + 1070);
  if ( v9 )
    (*(void (**)(void))(*(_DWORD *)v9 + 12))();
  *((_BYTE *)v1 + 217) = *((_BYTE *)v1 + 216);
  result = (TradeableComponent *)*((_DWORD *)v1 + 811);
  if ( result )
    result = (TradeableComponent *)j_j_j__ZN18TradeableComponent15newServerAiStepEv(result);
  return result;
}


int __fastcall Mob::getBoundOrigin(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 4264);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4268);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4272);
  return result;
}


_BOOL4 __fastcall Mob::hasPriorityAmmunition(Mob *this)
{
  char *v1; // r4@1

  v1 = (char *)this + 3584;
  return !ItemInstance::isNull((Mob *)((char *)this + 3584))
      && *(_DWORD *)v1
      && *(_WORD *)(*(_DWORD *)v1 + 18) == *(_WORD *)(Item::mArrow + 18);
}


signed int __fastcall Mob::getTravelType(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@2
  int v3; // r0@5
  signed int result; // r0@7

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 208))() == 1
    && ((v2 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 488))(v1), EntityClassTree::isOfType(v2, 319) != 1)
     || Abilities::isFlying((Mob *)((char *)v1 + 4320)) != 1) )
  {
    result = 0;
  }
  else if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 216))(v1) == 1
         && ((v3 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 488))(v1), EntityClassTree::isOfType(v3, 319) != 1)
          || Abilities::isFlying((Mob *)((char *)v1 + 4320)) != 1) )
    result = 1;
  else
    result = 2;
    if ( !*((_BYTE *)v1 + 216) )
      result = 3;
  return result;
}


void __fastcall Mob::getAllArmorID(Mob *this, int a2)
{
  Mob::getAllArmorID(this, a2);
}


int __fastcall Mob::aiStep(Mob *this)
{
  Level *v2; // r0@3
  BlockSource *v3; // r0@4
  int v4; // r5@4
  Level *v5; // r0@6
  int v8; // r0@7
  int v13; // r0@7
  __int64 v14; // r1@7
  BlockSource *v15; // r5@9
  int v16; // r0@10
  int v17; // r5@10
  int v18; // r0@10
  Level *v20; // r0@22
  void (__fastcall *v21)(Mob *, int); // r5@26
  AttributeInstance *v22; // r0@26
  int v23; // r0@26
  float v24; // r1@28
  int v28; // r0@37
  int v29; // r1@37
  signed int v30; // r0@41
  int v31; // r7@43
  int v32; // r6@43
  unsigned int v33; // r0@44
  signed int v34; // r0@47
  int v35; // r0@53
  int result; // r0@57
  unsigned int v42; // r5@58
  float v47; // r1@58
  float v49; // r1@58
  int v51; // r0@58
  int v56; // r0@60
  float v57; // [sp+Ch] [bp-7Ch]@60
  int v58; // [sp+10h] [bp-78h]@60
  float v59; // [sp+18h] [bp-70h]@58
  int v60; // [sp+1Ch] [bp-6Ch]@58
  char v61; // [sp+24h] [bp-64h]@9
  __int64 v62; // [sp+30h] [bp-58h]@7
  int v63; // [sp+38h] [bp-50h]@7
  Dimension v64; // [sp+3Ch] [bp-4Ch]@7

  _R4 = this;
  if ( *((_BYTE *)this + 3473) )
  {
    if ( !Entity::getStatusFlag((int)this, 47) )
    {
      v2 = (Level *)Entity::getLevel(_R4);
      if ( *Level::getCurrentTick(v2) & 1 )
      {
        v3 = (BlockSource *)Entity::getRegion(_R4);
        v4 = BlockSource::getDimension(v3);
        if ( (*(int (**)(void))(*(_DWORD *)v4 + 196))() == 1
          && !(*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 212))(_R4) )
        {
          v5 = (Level *)Entity::getLevel(_R4);
          if ( !Level::isClientSide(v5) )
          {
            Dimension::getSkyDarken(&v64, v4);
            _R6 = (unsigned __int8)v64;
            _R7 = (unsigned __int8)Brightness::MAX;
            v8 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)_R4 + 260))(_R4, 1065353216);
            __asm { VMOV            S0, R6 }
            _R5 = v8;
            __asm
            {
              VMOV            S2, R7
              VCVT.F32.U32    S0, S0
              VCVT.F32.U32    S2, S2
              VDIV.F32        S16, S0, S2
            }
            v13 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 52))(_R4);
            __asm { VMOV.F32        S0, #0.25 }
            v14 = *(_QWORD *)v13;
            __asm { VMOV            S4, R5 }
            v63 = *(_DWORD *)(v13 + 8);
            v62 = v14;
              VSUB.F32        S4, S4, S16
              VLDR            S2, [SP,#0x88+var_58+4]
              VADD.F32        S0, S2, S0
              VMOV.F32        S2, #0.5
              VSTR            S0, [SP,#0x88+var_58+4]
              VCMPE.F32       S4, S2
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !(*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 320))(_R4) )
              v15 = (BlockSource *)Entity::getRegion(_R4);
              BlockPos::BlockPos((int)&v61, (int)&v62);
              if ( BlockSource::canSeeSky(v15, (const BlockPos *)&v61) == 1 )
              {
                v16 = (*(int (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)_R4 + 1028))(_R4, 0);
                v17 = v16;
                v18 = *(_BYTE *)(v16 + 15);
                _ZF = v18 == 0;
                if ( v18 )
                  _ZF = *(_DWORD *)v17 == 0;
                if ( (_ZF || ItemInstance::isNull((ItemInstance *)v17) || !*(_BYTE *)(v17 + 14))
                  && (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 316))(_R4) == 1 )
                {
                  (*(void (__fastcall **)(Mob *, signed int))(*(_DWORD *)_R4 + 504))(_R4, 8);
                }
              }
          }
        }
      }
    }
  }
  if ( *((_BYTE *)_R4 + 449) && (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 212))(_R4) == 1 )
    EntityDamageSource::EntityDamageSource((int)&v62, 9);
    Entity::hurt(_R4, (const EntityDamageSource *)&v62, 1, 1, 0);
    EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v62);
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 284))(_R4) == 1 )
    *((_BYTE *)_R4 + 4080) = 0;
    *((_DWORD *)_R4 + 1037) = 0;
    *((_DWORD *)_R4 + 1038) = 0;
    *((_DWORD *)_R4 + 1039) = 0;
    *((_DWORD *)_R4 + 27) = 0;
    *((_DWORD *)_R4 + 28) = 0;
    *((_DWORD *)_R4 + 29) = 0;
    goto LABEL_37;
  v20 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v20) )
    if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1168))(_R4) == 1 )
      (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1140))(_R4);
      goto LABEL_37;
      v21 = *(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R4 + 824);
      v22 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R4 + 1004))(
                                   _R4,
                                   &SharedAttributes::MOVEMENT_SPEED);
      v23 = AttributeInstance::getCurrentValue(v22);
      v21(_R4, v23);
    (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1136))(_R4);
    if ( !*((_DWORD *)_R4 + 128) || Entity::enforceRiderRotationLimit(_R4) != 1 )
      goto LABEL_36;
    __asm
      VLDR            S0, =90.0
      VLDR            S2, [R4,#0x7C]
      VADD.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = mce::Math::wrapDegrees(_R0, v24);
    __asm { VMOV            S0, R0 }
    _R0 = (int)_R4 + 4036;
      VLDR            S2, [R0]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
        VNEG.F32        S4, S2
        VCMPE.F32       S0, S4
        VMRS            APSR_nzcv, FPSCR
      if ( !(_NF ^ _VF) )
        goto LABEL_35;
        VNEG.F32        S0, S0
        VSUB.F32        S0, S0, S2
    else
      __asm { VSUB.F32        S0, S2, S0 }
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x7C]
LABEL_35:
    *((_DWORD *)_R4 + 853) = *((_DWORD *)_R4 + 1008);
LABEL_36:
    *((_DWORD *)_R4 + 855) = *((_DWORD *)_R4 + 31);
LABEL_37:
  v28 = SynchedEntityData::getInt8((Mob *)((char *)_R4 + 176), 10);
  v29 = *((_DWORD *)_R4 + 873);
  if ( v29 >= v28 )
    if ( (_BYTE)v28 )
      (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1188))(_R4);
  else
    *((_DWORD *)_R4 + 873) = v29 + 1;
  v30 = *((_DWORD *)_R4 + 1021);
  if ( v30 >= 1 )
    *((_DWORD *)_R4 + 1021) = v30 - 1;
  v31 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 208))(_R4);
  v32 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 216))(_R4);
  if ( Entity::isRiding(_R4) != 1 )
    v33 = *((_WORD *)_R4 + 2040);
    if ( (_BYTE)v33 )
      if ( v33 >= 0x100 )
        __asm { VLDR            S16, =0.028 }
        *((_BYTE *)_R4 + 4081) = 0;
      else
        __asm { VLDR            S16, =0.04 }
      if ( v31 == 1 && !Entity::isSwimmer(_R4) || v32 == 1 )
        v35 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 52))(_R4);
        *((_DWORD *)_R4 + 1024) = *(_DWORD *)v35;
        *((_DWORD *)_R4 + 1025) = *(_DWORD *)(v35 + 4);
        *((_DWORD *)_R4 + 1026) = *(_DWORD *)(v35 + 8);
        __asm
          VLDR            S0, [R4,#0x70]
          VADD.F32        S0, S0, S16
          VSTR            S0, [R4,#0x70]
        goto LABEL_56;
      if ( !*((_BYTE *)_R4 + 216) || *((_DWORD *)_R4 + 1021) )
      (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1132))(_R4);
      v34 = 10;
      v34 = 0;
    *((_DWORD *)_R4 + 1021) = v34;
LABEL_56:
    __asm { VLDR            S0, =0.98 }
    _R0 = (int)_R4 + 4148;
      VMUL.F32        S2, S2, S0
      VSTR            S2, [R0]
    _R0 = (int)_R4 + 4152;
      VMOV            R1, S2
      VLDR            S4, [R0]
      VMUL.F32        S0, S4, S0
      VLDR            S4, =0.9
      VMOV            R2, S0
      VSTR            S0, [R0]
    _R0 = (int)_R4 + 4156;
      VLDR            S0, [R0]
      VMUL.F32        S0, S0, S4
    (*(void (__fastcall **)(Mob *, int, int))(*(_DWORD *)_R4 + 860))(_R4, _R1, _R2);
    (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 876))(_R4);
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1192))(_R4);
  result = Entity::getStatusFlag((int)_R4, 40);
  if ( result == 1 )
    v42 = SynchedEntityData::getInt((Mob *)((char *)_R4 + 176), 77);
    _R1 = (int)_R4 + 3412;
      VMOV.F32        S16, #0.25
      VLDR            S18, [R1]
    _R6 = &mce::Math::DEGRAD;
    _R0 = mce::Math::cos((mce::Math *)0x3F2A8C15, COERCE_FLOAT((Mob *)((char *)_R4 + 3412)));
      VMOV            S0, R0
      VLDR            S2, [R6]
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S18
      VMOV            R6, S0
    _R0 = mce::Math::cos(_R6, v47);
    __asm { VMOV            S16, R0 }
    _R0 = mce::Math::sin(_R6, v49);
      VMOV            S18, R0
      VCVT.F64.F32    D8, S16
    v51 = Entity::getLevel(_R4);
      VCVT.F64.F32    D3, S18
      VLDR            D0, =0.6
      VLDR            S2, [R4,#0x48]
      VMUL.F64        D8, D8, D0
      VMUL.F64        D9, D3, D0
      VCVT.F64.F32    D1, S2
      VLDR            S4, [R4,#0x50]
      VADD.F64        D1, D1, D8
      VCVT.F64.F32    D0, S4
      VADD.F64        D0, D0, D9
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S0, D0
      VSTR            S2, [SP,#0x88+var_70]
    v60 = *((_DWORD *)_R4 + 70);
    __asm { VSTR            S0, [SP,#0x88+var_68] }
    Level::addParticle(v51, 26, (int)&v59);
    _R2 = v42 >> 24;
    _R1 = (unsigned __int8)v42;
      VMOV            S0, R2
      VLDR            S8, =0.0039216
      VMOV            S2, R1
      VCVT.F32.S32    S0, S0
    _R2 = (unsigned __int16)v42 >> 8;
      VCVT.F32.S32    S2, S2
      VMOV            S4, R2
      VCVT.F32.S32    S4, S4
    _R1 = (v42 >> 16) & 0xFF;
      VMOV            S6, R1
      VMUL.F32        S20, S0, S8
      VCVT.F32.S32    S6, S6
      VMUL.F32        S22, S2, S8
      VMUL.F32        S24, S4, S8
      VMUL.F32        S26, S6, S8
    if ( !_ZF )
        VSTRNE          S26, [R0,#0x44]
        VSTRNE          S24, [R0,#0x48]
        VSTRNE          S22, [R0,#0x4C]
        VSTRNE          S20, [R0,#0x50]
    v56 = Entity::getLevel(_R4);
      VLDR            S0, [R4,#0x48]
      VLDR            S2, [R4,#0x50]
      VCVT.F64.F32    D0, S0
      VSUB.F64        D0, D0, D8
      VSUB.F64        D1, D1, D9
      VSTR            S0, [SP,#0x88+var_7C]
    v58 = *((_DWORD *)_R4 + 70);
    __asm { VSTR            S2, [SP,#0x88+var_74] }
    result = Level::addParticle(v56, 26, (int)&v57);
    if ( result )
  return result;
}


signed int __fastcall Mob::isFrostWalking(Mob *this)
{
  BlockSource *v2; // r0@1
  signed int result; // r0@3
  float v8; // [sp+0h] [bp-38h]@2
  float v11; // [sp+Ch] [bp-2Ch]@2
  int v12; // [sp+18h] [bp-20h]@1
  int v13; // [sp+1Ch] [bp-1Ch]@1
  int v14; // [sp+20h] [bp-18h]@1
  char v15; // [sp+24h] [bp-14h]@1
  int v16; // [sp+28h] [bp-10h]@1
  int v17; // [sp+2Ch] [bp-Ch]@1

  _R4 = this;
  BlockPos::BlockPos((int)&v15, (int)this + 72);
  v12 = *(_DWORD *)&v15;
  v13 = v16 - 2;
  v14 = v17;
  v2 = (BlockSource *)Entity::getRegion(_R4);
  if ( *(_BYTE *)(BlockSource::getBlock(v2, (const BlockPos *)&v12) + 4) != *(_BYTE *)(Block::mFrostedIce + 4) )
    goto LABEL_7;
  __asm
  {
    VLDR            S0, [R4,#0x48]
    VLDR            S6, [R4,#0x54]
    VLDR            S2, [R4,#0x4C]
    VLDR            S8, [R4,#0x58]
    VSUB.F32        S0, S0, S6
    VLDR            S4, [R4,#0x50]
    VLDR            S10, [R4,#0x5C]
    VSUB.F32        S2, S2, S8
    VSUB.F32        S4, S4, S10
    VSTR            S0, [SP,#0x38+var_2C]
    VSTR            S2, [SP,#0x38+var_28]
    VSTR            S4, [SP,#0x38+var_24]
  }
  Vec3::xz((Vec3 *)&v8, (int)&v11);
    VLDR            S0, [SP,#0x38+var_38]
    VLDR            S2, [SP,#0x38+var_34]
    VMUL.F32        S0, S0, S0
    VLDR            S4, [SP,#0x38+var_30]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #3.0
    VADD.F32        S0, S0, S4
    VSQRT.F32       S0, S0
    VMUL.F32        S0, S0, S2
    VLDR            S2, =0.1
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_7:
    result = 0;
  else
    result = 1;
  return result;
}


int __fastcall Mob::setRiderRotLimit(int result, float a2)
{
  *(float *)(result + 4036) = a2;
  return result;
}


int __fastcall Mob::getAmbientSound(Mob *this)
{
  Entity *v1; // r4@1
  BlockSource *v2; // r0@1
  int *v3; // r0@1
  char v4; // r1@2
  unsigned int v5; // r0@3
  int v7; // [sp+0h] [bp-28h]@1
  char v8; // [sp+Ch] [bp-1Ch]@1

  v1 = this;
  Entity::getAttachPos((AABB *)&v7, (int)this, 3, 0);
  BlockPos::BlockPos((int)&v8, (int)&v7);
  v2 = (BlockSource *)Entity::getRegion(v1);
  v3 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v8);
  if ( Material::isType(v3, 5) )
  {
    v4 = 12;
  }
  else
    v5 = Entity::isBaby(v1);
    v4 = 10;
    if ( v5 )
      v4 = 11;
  return (unsigned __int8)v4;
}


int __fastcall Mob::canAttack(Mob *this, Entity *a2, bool a3)
{
  int result; // r0@2

  if ( a2 )
    result = EntityClassTree::isInstanceOf((int)a2, 2857) ^ 1;
  else
    result = 0;
  return result;
}


int __fastcall Mob::dropContainer(Mob *this)
{
  Mob *v1; // r4@1
  BlockSource *v2; // r0@1
  Level *v3; // r0@1
  int result; // r0@1
  bool v5; // zf@2
  int v6; // r5@6
  int v7; // r6@7
  int v8; // r0@8
  int v9; // r7@8
  bool v10; // zf@8

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = (Level *)BlockSource::getLevel(v2);
  result = Level::isClientSide(v3);
  if ( !result )
  {
    result = *((_DWORD *)v1 + 782);
    v5 = result == 0;
    if ( result )
      v5 = *(_DWORD *)(result + 4) == 0;
    if ( !v5 )
    {
      result = ContainerComponent::isPrivate((ContainerComponent *)result);
      if ( !result )
      {
        result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 782) + 4) + 44))();
        v6 = result;
        if ( result >= 1 )
        {
          v7 = 0;
          do
          {
            v8 = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 782) + 4) + 16))();
            v9 = v8;
            result = *(_BYTE *)(v8 + 15);
            v10 = result == 0;
            if ( result )
            {
              result = *(_DWORD *)v9;
              v10 = *(_DWORD *)v9 == 0;
            }
            if ( !v10 )
              result = ItemInstance::isNull((ItemInstance *)v9);
              if ( !result )
              {
                result = *(_BYTE *)(v9 + 14);
                if ( *(_BYTE *)(v9 + 14) )
                {
                  (*(void (__fastcall **)(Mob *, int, _DWORD))(*(_DWORD *)v1 + 452))(v1, v9, 0);
                  result = (*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v1 + 782) + 4) + 32))();
                }
              }
            ++v7;
          }
          while ( v6 != v7 );
        }
      }
    }
  }
  return result;
}


signed int __fastcall Mob::swing(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r5@2
  signed int result; // r0@3

  v1 = this;
  if ( !*((_BYTE *)this + 3988)
    || (v2 = *((_DWORD *)this + 998), v2 >= Mob::getCurrentSwingDuration(this) / 2)
    || (result = *((_DWORD *)v1 + 998), result <= -1) )
  {
    *((_DWORD *)v1 + 998) = -1;
    result = 1;
    *((_BYTE *)v1 + 3988) = 1;
  }
  return result;
}


int __fastcall Mob::getDamageAfterArmorAbsorb(Mob *this, const EntityDamageSource *a2, int a3)
{
  EntityDamageSource *v3; // r6@1
  Mob *v4; // r5@1
  int v5; // r4@1
  int v6; // r6@9
  int v7; // r7@9

  v3 = a2;
  v4 = this;
  v5 = a3;
  if ( EntityDamageSource::getCause(a2)
    && EntityDamageSource::getCause(v3) != 14
    && EntityDamageSource::getCause(v3) != 13
    && EntityDamageSource::getCause(v3) != 12
    && EntityDamageSource::getCause(v3) != 9
    && EntityDamageSource::getCause(v3) != 7
    && EntityDamageSource::getCause(v3) != 5
    && EntityDamageSource::getCause(v3) != 4 )
  {
    v6 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v4 + 1012))(v4);
    v7 = *((_DWORD *)v4 + 1019);
    (*(void (__fastcall **)(Mob *, int))(*(_DWORD *)v4 + 1020))(v4, v5);
    _R1 = 1374389535;
    _R0 = v7 + (25 - v6) * v5;
    __asm { SMMUL.W         R1, R0, R1 }
    v5 = ((signed int)_R1 >> 3) + (_R1 >> 31);
    *((_DWORD *)v4 + 1019) = _R0 - 25 * v5;
  }
  return v5;
}


int __fastcall Mob::setOnFire(Mob *this, int a2, const Mob *a3)
{
  Mob *v3; // r5@1
  int v4; // r4@1
  int result; // r0@1

  v3 = this;
  v4 = a2;
  _R0 = EnchantUtils::getTotalProtectionLevels((EnchantUtils *)1, (int)this, a3);
  __asm
  {
    VMOV            S0, R0
    VLDR            S2, =-0.15
    VMOV.F32        S4, #1.0
    VCVT.F32.S32    S0, S0
  }
  _R0 = 20 * v4;
    VMUL.F32        S0, S0, S2
    VMOV            S2, R0
    VCVT.F32.S32    S2, S2
  result = *((_DWORD *)v3 + 107);
    VADD.F32        S0, S0, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R1, S0
  if ( result < _R1 )
    result = _R1;
  *((_DWORD *)v3 + 107) = result;
  return result;
}


void __fastcall Mob::_verifyAttributes(Mob *this)
{
  Mob::_verifyAttributes(this);
}


void __fastcall Mob::resetAttributes(Mob *this)
{
  BaseAttributeMap *v1; // r5@1
  int v2; // r4@1
  int v3; // r5@1

  v1 = (BaseAttributeMap *)*((_DWORD *)this + 992);
  v2 = BaseAttributeMap::begin(*((BaseAttributeMap **)this + 992));
  v3 = BaseAttributeMap::end(v1);
  while ( v2 != v3 )
  {
    AttributeInstance::resetToDefaultValue((AttributeInstance *)(v2 + 8));
    v2 = *(_DWORD *)v2;
  }
}


signed int __fastcall Mob::setLastHurtByMob(Mob *this, Mob *a2)
{
  Entity *v2; // r5@1
  Mob *v3; // r4@1
  signed int result; // r0@5

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    if ( Entity::isTame(a2) == 1 )
    {
      if ( Entity::getPlayerOwner(v2) )
      {
        *((_DWORD *)v3 + 1053) = -1;
        *((_DWORD *)v3 + 1052) = -1;
        *((_DWORD *)v3 + 861) = 400;
        Entity::setPersistent(v3);
      }
    }
    *((_QWORD *)v3 + 525) = *(_QWORD *)Entity::getUniqueID(v2);
    result = 4236;
    *((_DWORD *)v3 + 1059) = 60;
  }
  else
    *((_DWORD *)this + 1051) = -1;
    *((_DWORD *)this + 1050) = -1;
    *((_DWORD *)v3 + 1059) = 0;
  return result;
}


signed int __fastcall Mob::removeEffect(Mob *this, int a2)
{
  Mob *v2; // r5@1
  int v3; // r4@1
  signed int result; // r0@1
  int v5; // r1@3
  int v6; // r3@3
  int v7; // r5@3
  __int16 v8; // r2@3

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 993);
  if ( (*((_DWORD *)v2 + 994) - result) >> 4 > a2 )
  {
    result = MobEffectInstance::operator!=((int *)(result + 16 * a2), &MobEffectInstance::NO_EFFECT);
    if ( result == 1 )
    {
      (*(void (__fastcall **)(Mob *, int))(*(_DWORD *)v2 + 1184))(v2, *((_DWORD *)v2 + 993) + 16 * v3);
      v5 = *((_DWORD *)v2 + 993) + 16 * v3;
      v6 = unk_27FB704;
      v7 = unk_27FB708;
      *(_DWORD *)v5 = MobEffectInstance::NO_EFFECT;
      *(_DWORD *)(v5 + 4) = v6;
      *(_DWORD *)(v5 + 8) = v7;
      v5 += 12;
      v8 = unk_27FB70C;
      result = byte_27FB70E[0];
      *(_BYTE *)(v5 + 2) = byte_27FB70E[0];
      *(_WORD *)v5 = v8;
    }
  }
  return result;
}


MoveControl *__fastcall Mob::setSpeedModifier(Mob *this, float a2)
{
  Mob *v2; // r5@1
  PathNavigation *v3; // r0@1
  float v4; // r4@1
  MoveControl *result; // r0@3

  v2 = this;
  v3 = (PathNavigation *)*((_DWORD *)this + 1069);
  v4 = a2;
  if ( v3 )
    PathNavigation::setSpeed(v3, a2);
  result = (MoveControl *)*((_DWORD *)v2 + 1071);
  if ( result )
    result = (MoveControl *)j_j_j__ZN11MoveControl16setSpeedModifierEf_0(result, v4);
  return result;
}


char *__fastcall Mob::getVillage(Mob *this)
{
  return (char *)this + 4164;
}


signed int __fastcall Mob::_endJump(Mob *this)
{
  Mob *v1; // r4@1
  signed int result; // r0@1
  int *v3; // r7@2 OVERLAPPED
  int *v4; // r8@2 OVERLAPPED
  int v5; // t1@3
  int (__fastcall *v6)(int, char *, int); // r5@3
  int v7; // r0@3

  v1 = this;
  *((_DWORD *)this + 873) = 0;
  Entity::setJumpDuration(this, 0);
  *((_BYTE *)v1 + 4080) = 0;
  result = Entity::isRide(v1);
  if ( result == 1 )
  {
    for ( *(_QWORD *)&v3 = *(_QWORD *)((char *)v1 + 476); v4 != v3; result = v6(v5, (char *)v1 + 4096, v7) )
    {
      v5 = *v3;
      ++v3;
      v6 = *(int (__fastcall **)(int, char *, int))(*(_DWORD *)v5 + 396);
      v7 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 52))(v1);
    }
  }
  return result;
}


int __fastcall Mob::isPickable(Mob *this)
{
  return Entity::isRemoved(this) ^ 1;
}


void __fastcall Mob::registerAttributes(Mob *this)
{
  Mob::registerAttributes(this);
}


int __fastcall Mob::playSpawnSound(Mob *this)
{
  Entity *v1; // r4@1
  BlockSource *v2; // r0@1
  int *v3; // r0@1
  char v4; // r6@2
  int (__fastcall *v5)(Entity *, _DWORD, char *, signed int); // r7@5
  char v7; // [sp+4h] [bp-3Ch]@5
  char v8; // [sp+10h] [bp-30h]@1
  char v9; // [sp+1Ch] [bp-24h]@1

  v1 = this;
  Entity::getAttachPos((AABB *)&v8, (int)this, 3, 0);
  BlockPos::BlockPos((int)&v9, (int)&v8);
  v2 = (BlockSource *)Entity::getRegion(v1);
  v3 = (int *)BlockSource::getMaterial(v2, (const BlockPos *)&v9);
  if ( Material::isType(v3, 5) )
  {
    v4 = 12;
  }
  else
    v4 = 10;
    if ( Entity::isBaby(v1) )
      v4 = 11;
  v5 = *(int (__fastcall **)(Entity *, _DWORD, char *, signed int))(*(_DWORD *)v1 + 556);
  Entity::getAttachPos((AABB *)&v7, (int)v1, 3, 0);
  return v5(v1, (unsigned __int8)v4, &v7, -1);
}


signed int __fastcall Mob::hasComponent(int a1, int **a2)
{
  const void **v2; // r5@1
  int v3; // r8@1
  MobEffectInstance *v4; // r6@2
  MobEffectInstance *i; // r4@2
  _DWORD *v6; // r0@4
  size_t v7; // r2@4
  EnchantUtils *v8; // r0@7
  EnchantUtils *v9; // r0@7
  EnchantUtils *v10; // r4@7
  int v11; // r0@7
  bool v12; // zf@7
  signed int result; // r0@11

  v2 = (const void **)a2;
  v3 = a1;
  if ( Entity::hasComponent(a1, a2) )
    return 1;
  v4 = *(MobEffectInstance **)(v3 + 3972);
  for ( i = *(MobEffectInstance **)(v3 + 3976); i != v4; v4 = (MobEffectInstance *)((char *)v4 + 16) )
  {
    if ( MobEffectInstance::operator!=((int *)v4, &MobEffectInstance::NO_EFFECT) == 1 )
    {
      v6 = *(_DWORD **)MobEffectInstance::getComponentName(v4);
      v7 = *(v6 - 3);
      if ( v7 == *((_DWORD *)*v2 - 3) && !memcmp(v6, *v2, v7) )
        return 1;
    }
  }
  v8 = (EnchantUtils *)EnchantUtils::getEnchantmentId((unsigned int *)v2);
  v9 = EnchantUtils::getRandomItemWith(v8, v3, 4);
  v10 = v9;
  v11 = *((_BYTE *)v9 + 15);
  v12 = v11 == 0;
  if ( v11 )
    v12 = *(_DWORD *)v10 == 0;
  if ( v12 || ItemInstance::isNull(v10) )
    result = 0;
  else
    result = *((_BYTE *)v10 + 14);
    if ( *((_BYTE *)v10 + 14) )
      result = 1;
  return result;
}


int __fastcall Mob::getArmor(int a1, int a2)
{
  return a1 + 72 * a2 + 3664;
}


int __fastcall Mob::snapToYHeadRot(int result, float a2)
{
  *(float *)(result + 3420) = a2;
  *(float *)(result + 3424) = a2;
  return result;
}


int __fastcall Mob::isAlliedTo(Mob *this, Mob *a2)
{
  return 0;
}


signed int __fastcall Mob::getCaravanSize(Mob *this)
{
  Entity *v1; // r4@1
  signed int v2; // r5@1
  signed int v3; // r0@2
  Entity *v4; // r6@2
  BlockSource *v5; // r0@3
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r0@3
  bool v9; // zf@4
  int v10; // r1@5

  v1 = this;
  v2 = 0;
  if ( this )
  {
    v3 = 1;
    v4 = v1;
    do
    {
      v2 = v3;
      v5 = (BlockSource *)Entity::getRegion(v1);
      v6 = BlockSource::getLevel(v5);
      v8 = Level::fetchEntity(v6, v7, *((_DWORD *)v4 + 1056), *((_DWORD *)v4 + 1057), 0);
      v4 = (Entity *)v8;
      if ( !v8 )
        break;
      v3 = Entity::hasCategory(v8, 2);
      v9 = v4 == 0;
      if ( v4 )
      {
        v10 = v3 ^ 1;
        v3 = v2 + 1;
        v9 = v10 == 1;
      }
    }
    while ( !v9 );
  }
  return v2;
}


signed int __fastcall Mob::checkSpawnObstruction(Mob *this)
{
  Mob *v1; // r6@1
  BlockSource *v2; // r0@1
  signed int v3; // r4@1
  BlockSource *v4; // r0@2
  char *v5; // r0@2

  v1 = this;
  v2 = (BlockSource *)Entity::getRegion(this);
  v3 = 0;
  if ( BlockSource::isUnobstructedByEntities(v2, (Mob *)((char *)v1 + 264), 0) == 1 )
  {
    v4 = (BlockSource *)Entity::getRegion(v1);
    v5 = BlockSource::fetchAABBs(v4, (Mob *)((char *)v1 + 264), 1);
    if ( (unsigned int)*(_QWORD *)v5 == *(_QWORD *)v5 >> 32 )
      v3 = 1;
  }
  return v3;
}


int __fastcall Mob::removeEffectNoUpdate(Mob *this, int a2)
{
  int v2; // r2@1
  int result; // r0@1
  int v4; // r12@2
  int v5; // r2@2
  int v6; // r3@2
  __int16 v7; // r1@2

  v2 = *((_DWORD *)this + 993);
  result = (*((_DWORD *)this + 994) - v2) >> 4;
  if ( result > a2 )
  {
    v4 = v2 + 16 * a2;
    v5 = unk_27FB704;
    v6 = unk_27FB708;
    *(_DWORD *)v4 = MobEffectInstance::NO_EFFECT;
    *(_DWORD *)(v4 + 4) = v5;
    *(_DWORD *)(v4 + 8) = v6;
    v4 += 12;
    v7 = unk_27FB70C;
    result = byte_27FB70E[0];
    *(_BYTE *)(v4 + 2) = byte_27FB70E[0];
    *(_WORD *)v4 = v7;
  }
  return result;
}


_BOOL4 __fastcall Mob::inCaravan(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  return Level::fetchEntity(v2, 0, *((_DWORD *)v1 + 1054), *((_DWORD *)v1 + 1055), 0) != 0;
}


signed int __fastcall Mob::isImmobile(Mob *this)
{
  Mob *v1; // r4@1
  signed int result; // r0@3
  AttributeInstance *v3; // r0@4

  v1 = this;
  if ( *((_BYTE *)this + 353) || Entity::getStatusFlag((int)this, 16) )
  {
    result = 1;
  }
  else
    v3 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
                                v1,
                                &SharedAttributes::HEALTH);
    _R0 = AttributeInstance::getCurrentValue(v3);
    __asm { VMOV            S0, R0 }
    result = 0;
    __asm
    {
      VCVTR.S32.F32   S0, S0
      VMOV            R1, S0
    }
    if ( _R1 < 1 )
      result = 1;
  return result;
}


int __fastcall Mob::getAttackAnim(Mob *this, float _R1)
{
  int result; // r0@3

  _R2 = (char *)this + 4240;
  _R0 = (char *)this + 4244;
  __asm
  {
    VMOV.F32        S4, #1.0
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S4, S2, S4
  }
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S2, S4 }
    VMOV            S4, R1
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  return result;
}


char *__fastcall Mob::serializationSetHealth(Mob *this, int a2)
{
  AttributeInstance *v3; // r0@1

  _R4 = a2;
  v3 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1000))();
  __asm
  {
    VMOV            S0, R4
    VCVT.F32.S32    S0, S0
    VMOV            R1, S0
  }
  return j_j_j__ZN17AttributeInstance21serializationSetValueEfif(v3, _R1, 2, 3.4028e38);
}


int __fastcall Mob::_hurt(Mob *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  int v5; // r8@1
  EnchantUtils *v7; // r5@1
  Mob *v8; // r6@1
  Level *v9; // r0@1
  const Mob *v10; // r2@1
  int v11; // r4@1
  float v18; // r1@2
  int v19; // r11@2
  int v20; // r4@3
  int v21; // r1@3
  int v22; // r0@3
  Mob *v23; // r4@3
  int v24; // r0@5
  void (__fastcall *v25)(Mob *, Mob *); // r2@6
  Mob *v26; // r2@8
  signed int v27; // r0@9
  Level *v28; // r0@17
  int v29; // r7@19
  int v30; // r1@19
  int v31; // r10@19
  int v32; // r7@19
  int v33; // r9@19
  AttributeInstance *v34; // r0@19
  int v36; // r0@19
  int v38; // r1@19
  char v39; // r0@19
  int v41; // [sp+4h] [bp-3Ch]@19
  unsigned int v42; // [sp+8h] [bp-38h]@19
  unsigned int v43; // [sp+Ch] [bp-34h]@19
  unsigned int v44; // [sp+10h] [bp-30h]@3
  unsigned int v45; // [sp+14h] [bp-2Ch]@3

  v5 = a4;
  _R7 = a3;
  v7 = a2;
  v8 = this;
  v9 = (Level *)Entity::getLevel(this);
  v11 = 0;
  if ( Level::isClientSide(v9) )
    return v11;
  *((_DWORD *)v8 + 999) = 0;
  *((_DWORD *)v8 + 871) = 1069547520;
  _R0 = EnchantUtils::getDamageReduction(v7, v8, v10);
  __asm
  {
    VMOV            S0, R7
    VMOV            S2, R0
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  v19 = mce::Math::floor(_R0, v18);
  if ( (*(int (__fastcall **)(EnchantUtils *))(*(_DWORD *)v7 + 8))(v7) == 1 )
    v20 = Entity::getLevel(v8);
    (*(void (__fastcall **)(unsigned int *, EnchantUtils *))(*(_DWORD *)v7 + 32))(&v44, v7);
    v22 = Level::fetchEntity(v20, v21, v44, v45, 0);
    v23 = (Mob *)v22;
    if ( v22 )
    {
      if ( Entity::hasCategory(v22, 2) == 1 )
      {
        _ZF = Entity::hasCategory((int)v23, 1) == 1;
        v24 = *(_DWORD *)v8;
        if ( _ZF )
          v25 = *(void (__fastcall **)(Mob *, Mob *))(v24 + 956);
        else
          v25 = *(void (__fastcall **)(Mob *, Mob *))(v24 + 948);
        v25(v8, v23);
        EnchantUtils::doPostHurtEffects(v8, v23, v26);
      }
    }
  v27 = *((_DWORD *)v8 + 105);
  if ( v27 != 20 )
    goto LABEL_13;
  if ( Entity::getChainedDamageEffects(v8) != 1 )
    v27 = *((_DWORD *)v8 + 105);
LABEL_13:
    if ( v27 < 11 )
      *((_DWORD *)v8 + 1018) = 0;
    else if ( v19 <= *((_DWORD *)v8 + 1018) )
      return 0;
    goto LABEL_17;
  v19 += *((_DWORD *)v8 + 1018);
LABEL_17:
  v28 = (Level *)Entity::getLevel(v8);
  if ( Level::isClientSide(v28) )
    return (*(int (__fastcall **)(Mob *, EnchantUtils *, int, int))(*(_DWORD *)v8 + 840))(v8, v7, v19, v5);
  if ( !Entity::getDamageSensorComponent(v8) )
    goto LABEL_27;
  v41 = Entity::getDamageSensorComponent(v8);
  v29 = Entity::getLevel(v8);
  (*(void (__fastcall **)(unsigned int *, EnchantUtils *))(*(_DWORD *)v7 + 32))(&v42, v7);
  v31 = Level::fetchEntity(v29, v30, v42, v43, 0);
  v32 = EntityDamageSource::getCause(v7);
  v33 = *((_DWORD *)v8 + 1018);
  v34 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v8 + 1004))(
                               v8,
                               &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getCurrentValue(v34);
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
  v36 = *((_DWORD *)v8 + 1018);
  __asm { VMOV            R1, S0 }
  v38 = _R1 - v19;
  _VF = __OFSUB__(v38, v36);
  _ZF = v38 == v36;
  _NF = v38 - v36 < 0;
  v39 = 0;
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v39 = 1;
  if ( DamageSensorComponent::recordDamage(v41, v31, v32, v19 - v33, v39) == 1 )
LABEL_27:
    (*(void (__fastcall **)(Mob *, int, EnchantUtils *, _DWORD))(*(_DWORD *)v8 + 852))(
      v8,
      v19 - *((_DWORD *)v8 + 1018),
      v7,
      0);
  return v11;
}


int __fastcall Mob::getSpeed(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@2
  AttributeInstance *v3; // r0@3

  v1 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 1168))() )
  {
    result = *((_DWORD *)v1 + 1027);
  }
  else
    v3 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v1 + 1004))(
                                v1,
                                &SharedAttributes::MOVEMENT_SPEED);
    result = j_j_j__ZNK17AttributeInstance15getCurrentValueEv_0(v3);
  return result;
}


void __fastcall Mob::registerAttributes(Mob *this)
{
  Mob *v1; // r4@1
  const AttributeInstance *v2; // r5@1
  int v3; // r6@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r7@8
  unsigned int v7; // r0@10
  int v8; // r6@15
  unsigned int *v9; // r1@16
  unsigned int v10; // r0@18
  unsigned int *v11; // r7@22
  unsigned int v12; // r0@24
  AttributeInstance *v13; // r0@29
  AttributeInstance *v14; // r0@29
  AttributeInstance *v15; // r0@29
  AttributeInstance *v16; // r0@29
  AttributeInstance *v17; // r0@29
  AttributeInstance *v18; // r0@29
  BaseAttributeMap *v19; // r5@29
  int v20; // r4@29
  int v21; // r5@29
  Mob *v22; // [sp+4h] [bp-2Ch]@1
  int v23; // [sp+8h] [bp-28h]@1
  int v24; // [sp+Ch] [bp-24h]@1
  int v25; // [sp+10h] [bp-20h]@1
  int v26; // [sp+14h] [bp-1Ch]@1
  char v27; // [sp+18h] [bp-18h]@1

  v1 = this;
  v2 = (const AttributeInstance *)BaseAttributeMap::registerAttribute(
                                    *((BaseAttributeMap **)this + 992),
                                    (const Attribute *)&SharedAttributes::HEALTH);
  v22 = v1;
  std::__shared_ptr<HealthAttributeDelegate,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<HealthAttributeDelegate>,AttributeInstance &,Mob *>(
    (int)&v23,
    (int)&v27,
    v2,
    &v22);
  v25 = v23;
  v26 = v24;
  v23 = 0;
  v24 = 0;
  AttributeInstance::setDelegate((int)v2, (int)&v25);
  v3 = v26;
  if ( v26 )
  {
    v4 = (unsigned int *)(v26 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v8 = v24;
  if ( v24 )
    v9 = (unsigned int *)(v24 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  AttributeInstance::setDefaultValue(v2, 20.0, 2);
  v13 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               *((BaseAttributeMap **)v1 + 992),
                               (const Attribute *)&SharedAttributes::ABSORPTION);
  AttributeInstance::setMaxValue(v13, 16.0);
  v14 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&SharedAttributes::KNOCKBACK_RESISTANCE);
  AttributeInstance::setDefaultValue(v14, 1.0, 1);
  v15 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&SharedAttributes::MOVEMENT_SPEED);
  AttributeInstance::setDefaultValue(v15, 0.7, 2);
  v16 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&SharedAttributes::LUCK);
  AttributeInstance::setRange(v16, -1024.0, 0.0, 1024.0);
  v17 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&SharedAttributes::FALL_DAMAGE);
  AttributeInstance::setDefaultValue(v17, 1.0, 2);
  v18 = (AttributeInstance *)BaseAttributeMap::registerAttribute(
                               (const Attribute *)&SharedAttributes::FOLLOW_RANGE);
  AttributeInstance::setRange(v18, 0.0, 16.0, 2048.0);
  v19 = (BaseAttributeMap *)*((_DWORD *)v1 + 992);
  v20 = BaseAttributeMap::begin(*((BaseAttributeMap **)v1 + 992));
  v21 = BaseAttributeMap::end(v19);
  while ( v20 != v21 )
    AttributeInstance::resetToDefaultValue((AttributeInstance *)(v20 + 8));
    v20 = *(_DWORD *)v20;
}


signed int __fastcall Mob::getWaterSlowDown(Mob *this)
{
  return 1061997773;
}


int __fastcall Mob::getMeleeWeaponDamageBonus(Mob *this, Mob *a2)
{
  Mob *v2; // r4@1
  Mob *v3; // r5@1
  int v4; // r0@1
  int v5; // r6@1
  int v6; // r0@1
  bool v7; // zf@1
  int v8; // r6@6
  Mob *v9; // r2@6
  int result; // r0@6

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 908))();
  v5 = v4;
  v6 = *(_BYTE *)(v4 + 15);
  v7 = v6 == 0;
  if ( v6 )
    v7 = *(_DWORD *)v5 == 0;
  if ( v7 || ItemInstance::isNull((ItemInstance *)v5) || !*(_BYTE *)(v5 + 14) )
  {
    result = 0;
  }
  else
    v8 = ItemInstance::getAttackDamage((ItemInstance *)v5);
    result = EnchantUtils::getMeleeDamageBonus(v3, v2, v9) + v8;
  return result;
}


int __fastcall Mob::Mob(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r8@1
  int *v5; // r11@1
  int *v6; // r10@1
  int *v7; // r9@1
  void *v8; // r6@1
  double v9; // r0@1
  unsigned int v10; // r0@1
  int v11; // r5@3
  void *v12; // r7@3
  int v13; // r1@4
  void *v14; // r6@6
  int v15; // r0@6
  void *v16; // r6@8
  int v17; // r0@8
  double v18; // r0@10
  int v19; // r6@10
  int v20; // r5@10
  void *v21; // r0@11
  void *v22; // r6@12
  void *v23; // r0@13
  void *v24; // r0@16
  void *v25; // r6@17
  void *v26; // r0@18
  int v28; // [sp+10h] [bp-28h]@10

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F4F74;
  *(_DWORD *)(v3 + 3464) = 0;
  *(_DWORD *)(v3 + 3468) = 0;
  _aeabi_memclr4(v3 + 3412, 44);
  *(_BYTE *)(v3 + 3472) = 1;
  *(_BYTE *)(v3 + 3473) = 0;
  *(_DWORD *)(v3 + 3500) = 0;
  *(_DWORD *)(v3 + 3504) = 0;
  *(_DWORD *)(v3 + 3508) = 0;
  *(_DWORD *)(v3 + 3492) = 0;
  *(_DWORD *)(v3 + 3488) = 0;
  *(_DWORD *)(v3 + 3484) = 0;
  *(_DWORD *)(v3 + 3480) = 0;
  *(_DWORD *)(v3 + 3476) = 0;
  ItemInstance::ItemInstance(v3 + 3512);
  ItemInstance::ItemInstance(v3 + 3584);
  ItemInstance::ItemInstance(v3 + 3664);
  ItemInstance::ItemInstance(v3 + 3736);
  ItemInstance::ItemInstance(v3 + 3808);
  ItemInstance::ItemInstance(v3 + 3880);
  *(_DWORD *)(v3 + 3980) = 0;
  v4 = (int *)(v3 + 3968);
  *(_DWORD *)(v3 + 3976) = 0;
  *(_DWORD *)(v3 + 3972) = 0;
  *(_DWORD *)(v3 + 3968) = 0;
  *(_DWORD *)(v3 + 3984) = 1065353216;
  *(_BYTE *)(v3 + 3988) = 0;
  *(_DWORD *)(v3 + 3992) = 0;
  *(_DWORD *)(v3 + 3996) = 0;
  *(_DWORD *)(v3 + 4000) = 0;
  *(_DWORD *)(v3 + 4004) = 1065353216;
  *(_DWORD *)(v3 + 4008) = 1017370378;
  *(_DWORD *)(v3 + 4032) = 0;
  *(_DWORD *)(v3 + 4028) = 0;
  *(_DWORD *)(v3 + 4024) = 0;
  *(_DWORD *)(v3 + 4020) = 0;
  *(_DWORD *)(v3 + 4016) = 0;
  *(_DWORD *)(v3 + 4012) = 0;
  *(_DWORD *)(v3 + 4036) = 1127546880;
  MovementInterpolator::MovementInterpolator(v3 + 4040);
  *(_DWORD *)(v3 + 4084) = 0;
  v5 = (int *)(v3 + 4120);
  *(_DWORD *)(v3 + 4088) = 0;
  v6 = (int *)(v3 + 4116);
  *(_BYTE *)(v3 + 4092) = 0;
  v7 = (int *)(v3 + 4112);
  *(_WORD *)(v3 + 4080) = 0;
  *(_DWORD *)(v3 + 4076) = 0;
  *(_DWORD *)(v3 + 4072) = 0;
  *(_DWORD *)(v3 + 4120) = 0;
  *(_DWORD *)(v3 + 4116) = 0;
  *(_DWORD *)(v3 + 4112) = 0;
  *(_DWORD *)(v3 + 4108) = 0;
  *(_DWORD *)(v3 + 4104) = 0;
  *(_DWORD *)(v3 + 4100) = 0;
  *(_DWORD *)(v3 + 4096) = 0;
  GoalSelector::GoalSelector((GoalSelector *)(v3 + 4124));
  GoalSelector::GoalSelector((GoalSelector *)(v3 + 4136));
  *(_BYTE *)(v3 + 4172) = 0;
  *(_DWORD *)(v3 + 4168) = 0;
  *(_DWORD *)(v3 + 4164) = 0;
  *(_DWORD *)(v3 + 4160) = 0;
  *(_DWORD *)(v3 + 4156) = 0;
  *(_DWORD *)(v3 + 4152) = 0;
  *(_DWORD *)(v3 + 4148) = 0;
  *(_DWORD *)(v3 + 4176) = 2000;
  *(_WORD *)(v3 + 4180) = 0;
  _aeabi_memset8(v3 + 4184);
  *(_BYTE *)(v3 + 4260) = 0;
  *(_DWORD *)(v3 + 4256) = 0;
  *(_DWORD *)(v3 + 4252) = 0;
  *(_DWORD *)(v3 + 4248) = 0;
  *(_DWORD *)(v3 + 4244) = 0;
  *(_DWORD *)(v3 + 4240) = 0;
  *(_DWORD *)(v3 + 4236) = 0;
  *(_DWORD *)(v3 + 4232) = 0;
  *(_DWORD *)(v3 + 4284) = 0;
  *(_DWORD *)(v3 + 4280) = 0;
  *(_DWORD *)(v3 + 4276) = 0;
  *(_DWORD *)(v3 + 4272) = 0;
  *(_DWORD *)(v3 + 4268) = 0;
  *(_DWORD *)(v3 + 4264) = 0;
  *(_DWORD *)(v3 + 172) |= 2u;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  sub_174595C((SynchedEntityData *)(v3 + 176));
  v8 = operator new(0x28u);
  _aeabi_memclr4(v8, 40);
  *((_DWORD *)v8 + 4) = 1065353216;
  LODWORD(v9) = (char *)v8 + 16;
  *(_DWORD *)(LODWORD(v9) + 4) = 0;
  v10 = sub_21E6254(v9);
  *((_DWORD *)v8 + 1) = v10;
  if ( v10 == 1 )
  {
    *((_DWORD *)v8 + 6) = 0;
    v12 = (char *)v8 + 24;
  }
  else
    if ( v10 >= 0x40000000 )
      sub_21E57F4();
    v11 = 4 * v10;
    v12 = operator new(4 * v10);
    _aeabi_memclr4(v12, v11);
  *(_DWORD *)v8 = v12;
  *((_DWORD *)v8 + 7) = 0;
  *((_DWORD *)v8 + 8) = 0;
  *((_DWORD *)v8 + 9) = 0;
  v13 = *v4;
  *v4 = (int)v8;
  if ( v13 )
    std::default_delete<BaseAttributeMap>::operator()(v3 + 3968, v13);
  Mob::registerAttributes((Mob *)v3);
  v14 = operator new(0x20u);
  LookControl::LookControl((int)v14, v3);
  v15 = *v7;
  *v7 = (int)v14;
  if ( v15 )
    (*(void (**)(void))(*(_DWORD *)v15 + 4))();
  v16 = operator new(0x10u);
  BodyControl::BodyControl((int)v16, v3);
  v17 = *v6;
  *v6 = (int)v16;
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  LODWORD(v18) = operator new(0x3Cu);
  v19 = LODWORD(v18);
  Sensing::Sensing(v18);
  v28 = 0;
  v20 = *v5;
  *v5 = v19;
  if ( v20 )
    v21 = *(void **)(v20 + 40);
    if ( v21 )
    {
      do
      {
        v22 = *(void **)v21;
        operator delete(v21);
        v21 = v22;
      }
      while ( v22 );
    }
    _aeabi_memclr4(*(_QWORD *)(v20 + 32), 4 * (*(_QWORD *)(v20 + 32) >> 32));
    *(_DWORD *)(v20 + 40) = 0;
    *(_DWORD *)(v20 + 44) = 0;
    v23 = *(void **)(v20 + 32);
    if ( v23 && (void *)(v20 + 56) != v23 )
      operator delete(v23);
    v24 = *(void **)(v20 + 12);
    if ( v24 )
        v25 = *(void **)v24;
        operator delete(v24);
        v24 = v25;
      while ( v25 );
    _aeabi_memclr4(*(_QWORD *)(v20 + 4), 4 * (*(_QWORD *)(v20 + 4) >> 32));
    *(_DWORD *)(v20 + 12) = 0;
    *(_DWORD *)(v20 + 16) = 0;
    v26 = *(void **)(v20 + 4);
    if ( v26 && (void *)(v20 + 28) != v26 )
      operator delete(v26);
    operator delete((void *)v20);
  std::unique_ptr<Sensing,std::default_delete<Sensing>>::~unique_ptr(&v28);
  *(_DWORD *)(v3 + 4288) = 0;
  *(_DWORD *)(v3 + 328) = 1058013184;
  return v3;
}


int __fastcall Mob::sendInventory(Mob *this, bool a2)
{
  Mob *v2; // r10@1
  BlockSource *v3; // r0@1
  Level *v4; // r0@1
  int v5; // r5@1
  int v6; // r6@1
  signed int v7; // r11@1
  int v8; // r1@8
  int result; // r0@19
  int v10; // [sp+0h] [bp-190h]@2
  void **v11; // [sp+8h] [bp-188h]@2
  int v12; // [sp+Ch] [bp-184h]@2
  int v13; // [sp+10h] [bp-180h]@2
  char v14; // [sp+14h] [bp-17Ch]@2
  __int64 v15; // [sp+18h] [bp-178h]@2
  int v16; // [sp+20h] [bp-170h]@2
  int v17; // [sp+28h] [bp-168h]@6
  void *v18; // [sp+44h] [bp-14Ch]@4
  void *ptr; // [sp+54h] [bp-13Ch]@2
  signed int v20; // [sp+68h] [bp-128h]@2
  signed int v21; // [sp+6Ch] [bp-124h]@2
  __int16 v22; // [sp+70h] [bp-120h]@2
  char v23; // [sp+72h] [bp-11Eh]@2
  char v24; // [sp+73h] [bp-11Dh]@2
  char v25; // [sp+74h] [bp-11Ch]@2
  char v26; // [sp+78h] [bp-118h]@1
  void **v27; // [sp+80h] [bp-110h]@1
  int v28; // [sp+84h] [bp-10Ch]@1
  int v29; // [sp+88h] [bp-108h]@1
  char v30; // [sp+8Ch] [bp-104h]@1
  __int64 v31; // [sp+90h] [bp-100h]@1
  int v32; // [sp+98h] [bp-F8h]@1
  int v33; // [sp+A0h] [bp-F0h]@13
  void *v34; // [sp+BCh] [bp-D4h]@11
  void *v35; // [sp+CCh] [bp-C4h]@9
  signed int v36; // [sp+E0h] [bp-B0h]@1
  signed int v37; // [sp+E4h] [bp-ACh]@1
  int v38; // [sp+E8h] [bp-A8h]@1
  char v39; // [sp+ECh] [bp-A4h]@1
  char v40; // [sp+F0h] [bp-A0h]@1
  void **v41; // [sp+F8h] [bp-98h]@1
  signed int v42; // [sp+FCh] [bp-94h]@1
  signed int v43; // [sp+100h] [bp-90h]@1
  char v44; // [sp+104h] [bp-8Ch]@1
  __int64 v45; // [sp+108h] [bp-88h]@1
  int v46; // [sp+110h] [bp-80h]@1
  int v47; // [sp+118h] [bp-78h]@19
  void *v48; // [sp+134h] [bp-5Ch]@17
  void *v49; // [sp+144h] [bp-4Ch]@15
  int v50; // [sp+158h] [bp-38h]@1
  int v51; // [sp+15Ch] [bp-34h]@1
  int v52; // [sp+160h] [bp-30h]@1
  char v53; // [sp+164h] [bp-2Ch]@1

  v2 = this;
  v3 = (BlockSource *)Entity::getRegion(this);
  v4 = (Level *)BlockSource::getLevel(v3);
  v5 = Level::getPacketSender(v4);
  Entity::getRuntimeID((Entity *)&v40, (int)v2);
  v42 = 2;
  v43 = 1;
  v44 = 0;
  v41 = &off_26DA648;
  v45 = *(_QWORD *)&v40;
  ItemInstance::ItemInstance((ItemInstance *)&v46, (int)v2 + 3512);
  v53 = 0;
  v52 = 0;
  v50 = 0;
  v51 = 0;
  (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v5 + 20))(v5, &v41);
  Entity::getRuntimeID((Entity *)&v26, (int)v2);
  v28 = 2;
  v29 = 1;
  v30 = 0;
  v27 = &off_26DA648;
  v31 = *(_QWORD *)&v26;
  ItemInstance::ItemInstance((ItemInstance *)&v32, (int)v2 + 3584);
  v36 = 1;
  v37 = 1;
  v38 = 16842752;
  v39 = 0;
  (*(void (__fastcall **)(int, void ***))(*(_DWORD *)v5 + 20))(v5, &v27);
  v6 = (int)v2 + 3664;
  v7 = 2;
  do
  {
    Entity::getRuntimeID((Entity *)&v10, (int)v2);
    v12 = 2;
    v13 = 1;
    v14 = 0;
    v11 = &off_26DA648;
    v15 = *(_QWORD *)&v10;
    ItemInstance::ItemInstance((ItemInstance *)&v16, v6);
    v20 = v7;
    v21 = v7;
    v22 = 0;
    v23 = v7;
    v24 = v7;
    v25 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 20))(v5, &v11);
    if ( ptr )
      operator delete(ptr);
    if ( v18 )
      operator delete(v18);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    v6 += 72;
    v8 = v7++ - 1;
  }
  while ( v8 < 4 );
  if ( v35 )
    operator delete(v35);
  if ( v34 )
    operator delete(v34);
  if ( v33 )
    (*(void (**)(void))(*(_DWORD *)v33 + 4))();
  if ( v49 )
    operator delete(v49);
  if ( v48 )
    operator delete(v48);
  result = v47;
  if ( v47 )
    result = (*(int (**)(void))(*(_DWORD *)v47 + 4))();
  return result;
}


int __fastcall Mob::onEffectRemoved(Mob *this, MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  Mob *v3; // r5@1
  Level *v4; // r0@1
  int v5; // r6@3
  int result; // r0@3
  bool v7; // zf@3
  Level *v8; // r6@8
  int v9; // r7@10
  int v10; // r0@11
  int v11; // r0@11
  int v12; // [sp+0h] [bp-50h]@11
  int v13; // [sp+4h] [bp-4Ch]@11
  void **v14; // [sp+8h] [bp-48h]@11
  signed int v15; // [sp+Ch] [bp-44h]@11
  signed int v16; // [sp+10h] [bp-40h]@11
  char v17; // [sp+14h] [bp-3Ch]@11
  int v18; // [sp+18h] [bp-38h]@11
  int v19; // [sp+1Ch] [bp-34h]@11
  int v20; // [sp+20h] [bp-30h]@11
  char v21; // [sp+24h] [bp-2Ch]@11
  int v22; // [sp+28h] [bp-28h]@11
  int v23; // [sp+2Ch] [bp-24h]@11
  char v24; // [sp+30h] [bp-20h]@11

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 4181) = 1;
  v4 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v4) )
    MobEffectInstance::removeEffects(v2, v3);
  v5 = MobEffectInstance::getId(v2);
  result = MobEffect::getId((MobEffect *)MobEffect::FIRE_RESISTANCE);
  v7 = v5 == result;
  if ( v5 == result )
  {
    result = *((_BYTE *)v3 + 427);
    v7 = result == 0;
  }
  if ( v7 )
    result = Entity::setStatusFlag((int)v3, 47, 0);
  v8 = (Level *)*((_DWORD *)v3 + 773);
  if ( v8 )
    result = Level::isClientSide(*((Level **)v3 + 773));
    if ( !result )
    {
      v9 = MobEffectInstance::getId(v2);
      result = MobEffect::getId((MobEffect *)MobEffect::LEVITATION);
      if ( v9 == result )
      {
        Entity::getRuntimeID((Entity *)&v12, (int)v3);
        v10 = MobEffectInstance::getId(v2);
        v15 = 2;
        v16 = 1;
        v17 = 0;
        v14 = &off_26E95E4;
        v18 = v12;
        v19 = v13;
        v20 = 0;
        v21 = 3;
        v22 = v10;
        v23 = 0;
        v24 = 0;
        v11 = Level::getPacketSender(v8);
        result = (*(int (**)(void))(*(_DWORD *)v11 + 8))();
      }
    }
  return result;
}


int __fastcall Mob::createAIGoals(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@1
  int v3; // r5@2
  int i; // r7@2
  int v5; // r0@4
  int v6; // r2@4
  int v7; // r1@4
  int v8; // [sp+0h] [bp-30h]@8
  int v9; // [sp+4h] [bp-2Ch]@5
  int v10; // [sp+8h] [bp-28h]@3

  v1 = this;
  result = *((_DWORD *)this + 12);
  if ( result )
  {
    GoalSelector::stopGoals((Mob *)((char *)v1 + 4124));
    GoalSelector::clearGoals((Mob *)((char *)v1 + 4124));
    GoalSelector::clearGoals((Mob *)((char *)v1 + 4136));
    result = *((_DWORD *)v1 + 12);
    v3 = *(_QWORD *)(result + 36) >> 32;
    for ( i = *(_QWORD *)(result + 36); v3 != i; i += 364 )
    {
      GoalDefinition::CreateGoal((GoalDefinition *)&v10, v1, (const GoalDefinition *)i);
      result = v10;
      if ( v10 )
      {
        v5 = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v10 + 36))(v10, *(_DWORD *)(*(_DWORD *)v10 + 36));
        v6 = v10;
        v7 = *(_DWORD *)(i + 4);
        v10 = 0;
        if ( v5 == 1 )
        {
          v9 = v6;
          GoalSelector::addGoal((int)v1 + 4136, v7, &v9);
          if ( v9 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v9 + 4))(v9);
          v9 = 0;
        }
        else
          v8 = v6;
          GoalSelector::addGoal((int)v1 + 4124, v7, &v8);
          if ( v8 )
            (*(void (**)(void))(*(_DWORD *)v8 + 4))();
          v8 = 0;
        result = v10;
        if ( v10 )
          result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v10 + 4))(v10, *(_DWORD *)(*(_DWORD *)v10 + 4));
      }
    }
  }
  return result;
}


void __fastcall Mob::addAdditionalSaveData(Mob *this, CompoundTag *a2)
{
  Mob::addAdditionalSaveData(this, a2);
}


int __fastcall Mob::travel(Mob *this, float a2, float a3)
{
  Level *v4; // r0@1
  int result; // r0@3
  __int64 v6; // r6@5
  int v7; // t1@6
  int v8; // r0@7
  unsigned int v9; // r5@9
  signed int v10; // r0@9
  float v11; // r1@11
  int v19; // r0@12
  float v20; // r1@12
  float v26; // r3@16
  int v27; // r0@16
  int v28; // r0@16
  AttributeInstance *v32; // r0@27
  MobEffect *v34; // r5@27
  unsigned int v35; // r7@27
  int v36; // r0@28
  int v37; // r0@29
  int v38; // r1@29
  unsigned int v39; // r7@30
  MobEffect *v40; // r5@30
  int v41; // r0@31
  MobEffectInstance *v42; // r0@32
  float v44; // r1@36
  float v48; // r1@37
  void (__fastcall *v51)(Mob *, int); // r5@39
  AttributeInstance *v52; // r0@39
  int v53; // r0@39
  int v54; // r0@41
  int v55; // r0@44
  int v56; // r1@46
  int v57; // r5@48
  float v58; // r3@48
  float v60; // r1@51
  int v61; // r0@51
  float v64; // r1@51
  int v65; // r0@51
  float v69; // r1@51
  float v71; // r1@51
  int v73; // r5@62
  float *v77; // r1@71
  int (__fastcall *v78)(Mob *, float *); // r2@71
  int v79; // r0@72
  int v80; // r5@78
  float v81; // r1@78
  int v82; // r0@78
  int v83; // r6@78
  float v85; // r1@78
  int v86; // r7@78
  float v87; // r1@78
  int v88; // r0@78
  Level *v90; // r0@82
  float v91; // r1@82
  void (__fastcall *v94)(Mob *, signed int, char *, signed int); // r7@84
  signed int v95; // r1@84
  MobEffect *v96; // r5@102
  unsigned int v97; // r6@102
  int v98; // r0@103
  int v99; // r0@104
  int v100; // r1@104
  unsigned int v101; // r6@105
  MobEffect *v102; // r5@105
  int v103; // r0@106
  MobEffectInstance *v104; // r0@107
  char v108; // [sp+4h] [bp-7Ch]@86
  char v109; // [sp+Ch] [bp-74h]@84
  float v110; // [sp+18h] [bp-68h]@51
  float v113; // [sp+24h] [bp-5Ch]@73
  float v114; // [sp+30h] [bp-50h]@71
  char v115; // [sp+3Ch] [bp-44h]@36
  float v116; // [sp+48h] [bp-38h]@1
  float v117; // [sp+4Ch] [bp-34h]@1

  _R4 = this;
  v116 = a3;
  v117 = a2;
  v4 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v4) != 1
    || Entity::hasType((int)_R4, 319)
    || (result = Entity::isControlledByLocalInstance(_R4), result == 1) )
  {
    result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 284))(_R4);
    if ( !result )
    {
      v6 = *(_QWORD *)((char *)_R4 + 476);
      while ( HIDWORD(v6) != (_DWORD)v6 )
      {
        v7 = *(_DWORD *)v6;
        LODWORD(v6) = v6 + 4;
        Entity::setPreviousPosRot(v7, v7 + 72, (_QWORD *)(v7 + 120));
        (*(void (__fastcall **)(Mob *, int, _DWORD))(*(_DWORD *)_R4 + 136))(_R4, v7, 0);
      }
      v8 = *((_DWORD *)_R4 + 1069);
      if ( !v8 || (result = (*(int (**)(void))(*(_DWORD *)v8 + 48))(), result == 1) )
        v9 = Entity::getControllingSeat(_R4);
        v10 = (*(_QWORD *)((char *)_R4 + 476) >> 32) - *(_QWORD *)((char *)_R4 + 476);
        if ( v10 >> 2 && v10 >> 2 >= v9 && Entity::isWASDControlled(_R4) == 1 )
        {
          __asm { VLDR            S0, [R4,#0x7C] }
          _R6 = *(_DWORD *)(*((_DWORD *)_R4 + 119) + 4 * v9);
          __asm
          {
            VLDR            S2, [R6,#0x7C]
            VSUB.F32        S0, S2, S0
            VMOV            R0, S0
          }
          _R0 = mce::Math::wrapDegrees(_R0, v11) & 0x7FFFFFFF;
            VLDR            S16, =45.0
            VMOV            S18, R0
          v19 = mce::Math::wrapDegrees(*((mce::Math **)_R4 + 31), *((float *)_R4 + 31));
            VCMPE.F32       S18, S16
            VLDR            S0, [R6,#0x7C]
            VMRS            APSR_nzcv, FPSCR
          _R5 = (mce::Math *)v19;
            VLDR            S2, [R4,#0x7C]
            VSUB.F32        S0, S0, S2
            VLDR            S0, =0.011111
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S18, S16 }
            VSUB.F32        S2, S16, S18
            VMUL.F32        S16, S2, S0
            VLDR            S0, =0.18
            VCMPE.F32       S16, S0
          if ( _NF ^ _VF )
            __asm { VMOVLT.F32      S16, S0 }
          _R0 = mce::Math::wrapDegrees(_R0, v20);
            VLDR            S0, =0.7
            VMOV            S4, R0
            VMOV            S2, R5
            VMUL.F32        S0, S16, S0
            VADD.F32        S2, S4, S2
            VMOV            R2, S0
            VMOV            R1, S2
          v27 = mce::Math::lerpRotate(_R5, _R1, _R2, v26);
          __asm { VMOV.F32        S16, #0.5 }
          *((_DWORD *)_R4 + 31) = v27;
            VLDR            S0, [R6,#0x78]
            VMUL.F32        S0, S0, S16
            VSTR            S0, [R4,#0x78]
          (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)_R4 + 72))(_R4, (char *)_R4 + 120);
          v28 = *((_DWORD *)_R4 + 31);
          __asm { VMOV.F32        S2, #0.25 }
          *((_DWORD *)_R4 + 853) = v28;
          *((_DWORD *)_R4 + 855) = v28;
          _R0 = _R6 + 4148;
          __asm { VLDR            S0, [R0] }
          _R0 = _R6 + 4152;
          _R6 = (Mob *)((char *)_R4 + 4088);
            VSTR            S0, [SP,#0x80+var_34]
            VLDR            S0, [R0]
            VCMPE.F32       S0, #0.0
            VMUL.F32        S2, S0, S2
            __asm { VMOVGT.F32      S2, S0 }
          __asm { VSTR            S2, [SP,#0x80+var_38] }
          if ( *((_BYTE *)_R4 + 216)
            && !(*(_DWORD *)_R6 & 0x7FFFFFFF)
            && Entity::isStanding(_R4) == 1
            && !*((_BYTE *)_R4 + 4092) )
            v116 = 0.0;
            v117 = 0.0;
            VLDR            S0, [R6]
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF)
            && !*((_BYTE *)_R4 + 4080)
            && *((_BYTE *)_R4 + 216)
            && (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 384))(_R4) == 1 )
            v32 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R4 + 1000))(
                                         _R4,
                                         &SharedAttributes::JUMP_STRENGTH);
            _R0 = AttributeInstance::getCurrentValue(v32);
            __asm
            {
              VMOV            S0, R0
              VLDR            S2, [R6]
              VMUL.F32        S0, S2, S0
              VSTR            S0, [R4,#0x70]
            }
            v34 = (MobEffect *)MobEffect::JUMP;
            v35 = (*((_DWORD *)_R4 + 994) - *((_DWORD *)_R4 + 993)) >> 4;
            if ( v35 > MobEffect::getId((MobEffect *)MobEffect::JUMP) )
              v36 = MobEffect::getId(v34);
              if ( MobEffectInstance::operator!=(
                     (int *)(*((_DWORD *)_R4 + 993) + 16 * v36),
                     &MobEffectInstance::NO_EFFECT) == 1 )
              {
                v37 = MobEffect::getId(v34);
                v38 = *((_DWORD *)_R4 + 993);
                if ( v38 + 16 * v37 )
                {
                  v39 = (*((_DWORD *)_R4 + 994) - v38) >> 4;
                  v40 = (MobEffect *)MobEffect::JUMP;
                  if ( v39 <= MobEffect::getId((MobEffect *)MobEffect::JUMP) )
                  {
                    v42 = 0;
                  }
                  else
                    v41 = MobEffect::getId(v40);
                    if ( MobEffectInstance::operator!=(
                           (int *)(*((_DWORD *)_R4 + 993) + 16 * v41),
                           &MobEffectInstance::NO_EFFECT) == 1 )
                      v42 = (MobEffectInstance *)(*((_DWORD *)_R4 + 993) + 16 * MobEffect::getId(v40));
                    else
                      v42 = 0;
                  _R0 = MobEffectInstance::getAmplifier(v42) + 1;
                  __asm
                    VLDR            S2, =0.1
                    VMOV            S0, R0
                    VCVT.F32.S32    S0, S0
                    VMUL.F32        S0, S0, S2
                    VLDR            S2, [R4,#0x70]
                    VADD.F32        S0, S0, S2
                    VSTR            S0, [R4,#0x70]
                }
              }
            *((_BYTE *)_R4 + 4080) = 1;
            Entity::getAttachPos((AABB *)&v115, (int)_R4, 0, 0);
            Entity::playSound((int)_R4, 4, (int)&v115);
              VLDR            S0, [SP,#0x80+var_38]
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              __asm
                VLDR            S0, =0.0055556
                VLDR            S2, [R4,#0x7C]
                VMUL.F32        S0, S2, S0
              _R0 = &mce::Math::PI;
                VLDR            S2, [R0]
                VMUL.F32        S0, S0, S2
                VMOV            R5, S0
              _R0 = mce::Math::sin(_R5, v44);
              __asm { VMOV            S16, R0 }
              _R0 = mce::Math::cos(_R5, v48);
                VLDR            S0, =-0.4
                VMOV            S6, R0
                VLDR            S2, [R6]
                VMUL.F32        S0, S16, S0
                VLDR            S4, =0.4
                VMUL.F32        S4, S6, S4
                VLDR            S6, [R4,#0x6C]
                VMUL.F32        S2, S4, S2
                VADD.F32        S0, S6, S0
                VSTR            S0, [R4,#0x6C]
                VLDR            S0, [R4,#0x74]
                VADD.F32        S0, S0, S2
                VSTR            S0, [R4,#0x74]
            *(_DWORD *)_R6 = 0;
          *((_DWORD *)_R4 + 82) = 1065877504;
          _R0 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 820))(_R4);
            VMOV            S2, R0
            VLDR            S0, =0.1
            VMUL.F32        S0, S2, S0
            VSTR            S0, [R1]
          v51 = *(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R4 + 824);
          v52 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R4 + 1004))(
                                       _R4,
                                       &SharedAttributes::MOVEMENT_SPEED);
          v53 = AttributeInstance::getCurrentValue(v52);
          v51(_R4, v53);
        }
        if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 208))(_R4) != 1
          || (v54 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 488))(_R4), EntityClassTree::isOfType(v54, 319) == 1)
          && Abilities::isFlying((Mob *)((char *)_R4 + 4320)) == 1 )
          if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 216))(_R4) != 1
            || (v55 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 488))(_R4),
                EntityClassTree::isOfType(v55, 319) == 1)
            && Abilities::isFlying((Mob *)((char *)_R4 + 4320)) )
            v56 = 2;
            if ( !*((_BYTE *)_R4 + 216) )
              v56 = 3;
            v57 = Mob::calcMoveRelativeSpeed((int)_R4, v56);
            if ( Entity::getStatusFlag((int)_R4, 30) )
                VMOV.F32        S0, #-0.5
                VLDR            S2, [R4,#0x70]
                VCMPE.F32       S2, S0
                VMRS            APSR_nzcv, FPSCR
              if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                *((_DWORD *)_R4 + 56) = 1065353216;
              Entity::getViewVector((Entity *)&v110, *(float *)&_R4, 1.0, v58);
                VLDR            S0, [SP,#0x80+var_68]
                VLDR            S2, [SP,#0x80+var_60]
                VMUL.F32        S0, S0, S0
                VLDR            S16, [R4,#0x78]
                VMUL.F32        S2, S2, S2
                VADD.F32        S0, S2, S0
                VMOV            R0, S0
              v61 = mce::Math::sqrt(_R0, v60);
              __asm { VLDR            S0, [R4,#0x6C] }
              _R5 = v61;
                VLDR            S2, [R4,#0x74]
              v65 = mce::Math::sqrt(_R0, v64);
              __asm { VLDR            S0, [SP,#0x80+var_68] }
              _R6 = v65;
                VLDR            S2, [SP,#0x80+var_64]
                VLDR            S4, [SP,#0x80+var_60]
                VMUL.F32        S4, S4, S4
              _R0 = &mce::Math::DEGRAD;
                VMUL.F32        S20, S2, S16
                VADD.F32        S0, S0, S4
                VMOV            R7, S20
                VSQRT.F32       S16, S0
              _R0 = mce::Math::cos(_R7, v69);
                VMOV.F32        S0, #2.5
                VLDR            S6, =0.06
                VMOV.F32        S2, #1.0
                VMOV            S4, R0
                VMOV            S18, R5
                VCMPE.F32       S0, S2
                VCMPE.F32       S18, #0.0
                __asm { VMOVGT.F32      S0, S2 }
                VMUL.F32        S2, S4, S0
                VLDR            S0, =-0.08
                VLDR            S4, [R4,#0x70]
                VADD.F32        S0, S4, S0
                VMUL.F32        S4, S2, S6
                VSTR            S0, [R4,#0x70]
                __asm
                  VCMPE.F32       S0, #0.0
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                    VLDR            S4, =-0.1
                    VLDR            S6, [R4,#0x6C]
                    VMUL.F32        S2, S2, S4
                    VLDR            S4, [SP,#0x80+var_68]
                    VMUL.F32        S2, S2, S0
                    VMUL.F32        S4, S4, S2
                    VDIV.F32        S4, S4, S18
                    VADD.F32        S4, S4, S6
                    VSTR            S4, [R4,#0x6C]
                    VLDR            S4, [SP,#0x80+var_60]
                    VMUL.F32        S2, S4, S2
                    VLDR            S4, [R4,#0x74]
                    VDIV.F32        S2, S2, S18
                    VADD.F32        S2, S2, S4
                    VSTR            S2, [R4,#0x74]
                VMOV            S16, R6
                VCMPE.F32       S20, #0.0
              if ( _NF ^ _VF )
                _R0 = mce::Math::sin(_R7, v71);
                  VMOV            S0, R0
                  VLDR            S2, =0.04
                  VLDR            S4, [SP,#0x80+var_68]
                  VMUL.F32        S0, S0, S16
                  VLDR            S6, [R4,#0x6C]
                  VMUL.F32        S2, S0, S2
                  VMUL.F32        S4, S4, S2
                  VDIV.F32        S4, S4, S18
                  VADD.F32        S4, S6, S4
                  VLDR            S6, =-0.128
                  VMUL.F32        S0, S0, S6
                  VSTR            S4, [R4,#0x6C]
                  VLDR            S4, [R4,#0x70]
                  VADD.F32        S0, S4, S0
                  VSTR            S0, [R4,#0x70]
                  VLDR            S4, [SP,#0x80+var_60]
                  VMUL.F32        S2, S2, S4
                  VLDR            S4, [R4,#0x74]
                  VDIV.F32        S2, S2, S18
                  VADD.F32        S2, S2, S4
                  VSTR            S2, [R4,#0x74]
              if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
                  VLDR            S2, [R4,#0x6C]
              else
                  VLDR            S2, [SP,#0x80+var_68]
                  VLDR            S4, [R4,#0x6C]
                  VMUL.F32        S2, S2, S16
                  VLDR            S6, =0.1
                  VSUB.F32        S2, S2, S4
                  VMUL.F32        S2, S2, S6
                  VSTR            S2, [R4,#0x6C]
                  VLDR            S8, [R4,#0x74]
                  VMUL.F32        S4, S4, S16
                  VSUB.F32        S4, S4, S8
                  VMUL.F32        S4, S4, S6
                  VADD.F32        S4, S4, S8
                  VSTR            S4, [R4,#0x74]
                VLDR            S6, =0.99
                VLDR            S8, =0.98
                VMUL.F32        S2, S2, S6
                VMUL.F32        S0, S0, S8
                VMUL.F32        S4, S4, S6
                VSTR            S2, [R4,#0x6C]
                VSTR            S4, [R4,#0x74]
              (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
              result = *((_BYTE *)_R4 + 218);
              if ( *((_BYTE *)_R4 + 218) )
                v90 = (Level *)Entity::getLevel(_R4);
                result = Level::isClientSide(v90);
                if ( !result )
                    VLDR            S0, [R4,#0x6C]
                    VLDR            S2, [R4,#0x74]
                    VMUL.F32        S0, S0, S0
                    VMUL.F32        S2, S2, S2
                    VADD.F32        S0, S2, S0
                    VMOV            R0, S0
                  result = mce::Math::sqrt(_R0, v91);
                    VMOV.F32        S2, #10.0
                    VSUB.F32        S0, S16, S0
                    VMOV.F32        S4, #-3.0
                    VADD.F32        S0, S0, S4
                    VCVTR.S32.F32   S0, S0
                    VMOV            R5, S0
                  if ( _R5 >= 1 )
                    v94 = *(void (__fastcall **)(Mob *, signed int, char *, signed int))(*(_DWORD *)_R4 + 556);
                    Entity::getAttachPos((AABB *)&v109, (int)_R4, 1, 0);
                    v95 = 25;
                    if ( _R5 > 4 )
                      v95 = 24;
                    v94(_R4, v95, &v109, -1);
                    EntityDamageSource::EntityDamageSource((int)&v108, 21);
                    Entity::hurt(_R4, (const EntityDamageSource *)&v108, _R5, 1, 0);
                    result = EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v108);
              return result;
            (*(void (__fastcall **)(Mob *, _DWORD, _DWORD, int))(*(_DWORD *)_R4 + 100))(
              _R4,
              LODWORD(v117),
              LODWORD(v116),
              v57);
            if ( *((_BYTE *)_R4 + 216) )
              v80 = Entity::getRegion(_R4);
              v82 = mce::Math::floor(*((mce::Math **)_R4 + 18), v81);
              __asm { VLDR            S0, =-0.1 }
              v83 = v82;
                VLDR            S2, [R4,#0x10C]
              v86 = mce::Math::floor(_R0, v85);
              v88 = mce::Math::floor(*((mce::Math **)_R4 + 20), v87);
              BlockSource::getBlockID((BlockSource *)&v110, v80, v83, v86, v88);
              if ( LOBYTE(v110) )
                _R0 = Block::getFriction((Block *)Block::mBlocks[LOBYTE(v110)]);
                  VLDR            S0, =0.91
                  VMOV            S2, R0
                  VMUL.F32        S16, S2, S0
                __asm { VLDR            S16, =0.546 }
            else
              __asm { VLDR            S16, =0.91 }
            if ( Entity::onLadder(_R4, 1) == 1 && Entity::canClimb(_R4) || Entity::isClimbing(_R4) == 1 )
              __asm { VLDR            D1, =-0.15 }
              *((_DWORD *)_R4 + 56) = 0;
                VLDR            S0, [R4,#0x70]
                VCVT.F64.F32    D0, S0
                VCMPE.F64       D0, D1
                *((_DWORD *)_R4 + 28) = -1105618534;
              if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 312))(_R4) == 1 )
                  VLDR            S0, [R4,#0x70]
                  *((_DWORD *)_R4 + 28) = 0;
            (*(void (__fastcall **)(Mob *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
            if ( *((_BYTE *)_R4 + 218)
              && (Entity::onLadder(_R4, 1) == 1 && Entity::canClimb(_R4) || Entity::isClimbing(_R4) == 1) )
              *((_DWORD *)_R4 + 28) = 1045220557;
            v96 = (MobEffect *)MobEffect::LEVITATION;
            v97 = (*((_DWORD *)_R4 + 994) - *((_DWORD *)_R4 + 993)) >> 4;
            if ( v97 > MobEffect::getId((MobEffect *)MobEffect::LEVITATION)
              && (v98 = MobEffect::getId(v96),
                  MobEffectInstance::operator!=(
                    (int *)(*((_DWORD *)_R4 + 993) + 16 * v98),
                    &MobEffectInstance::NO_EFFECT) == 1)
              && (v99 = MobEffect::getId(v96), v100 = *((_DWORD *)_R4 + 993), v100 + 16 * v99) )
              v101 = (*((_DWORD *)_R4 + 994) - v100) >> 4;
              v102 = (MobEffect *)MobEffect::LEVITATION;
              if ( v101 <= MobEffect::getId((MobEffect *)MobEffect::LEVITATION) )
                v104 = 0;
                v103 = MobEffect::getId(v102);
                if ( MobEffectInstance::operator!=(
                       (int *)(*((_DWORD *)_R4 + 993) + 16 * v103),
                       &MobEffectInstance::NO_EFFECT) == 1 )
                  v104 = (MobEffectInstance *)(*((_DWORD *)_R4 + 993) + 16 * MobEffect::getId(v102));
                else
                  v104 = 0;
              _R0 = MobEffectInstance::getAmplifier(v104) + 1;
                VLDR            S2, =0.05
                VLDR            S4, =0.2
                VMOV            S0, R0
                VCVT.F32.S32    S0, S0
                VSUB.F32        S0, S0, S2
                VMUL.F32        S0, S0, S4
              if ( Entity::getStatusFlag((int)_R4, 46) != 1 )
LABEL_114:
                _ZF = Entity::getStatusFlag((int)_R4, 46) == 1;
                _R0 = (int)_R4 + 4004;
                if ( _ZF )
                    VLDREQ          S0, =0.98
                    VLDREQ          S2, [R4,#0x70]
                    VMULEQ.F32      S0, S2, S0
                    VSTREQ          S0, [R4,#0x70]
                  VLDR            S0, [R0]
                  VMOV            R1, S0
                return (*(int (__fastcall **)(Mob *, int))(*(_DWORD *)_R4 + 864))(_R4, _R1);
            __asm { VSTR            S0, [R4,#0x70] }
            goto LABEL_114;
          v79 = Mob::calcMoveRelativeSpeed((int)_R4, 1);
          __asm { VLDR            S16, [R4,#0x4C] }
          (*(void (__fastcall **)(Mob *, _DWORD, _DWORD, int))(*(_DWORD *)_R4 + 100))(
            _R4,
            LODWORD(v117),
            LODWORD(v116),
            v79);
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
            VMOV.F32        S2, #0.5
            VLDR            S0, [R4,#0x6C]
            VLDR            S8, =-0.02
            VMUL.F32        S0, S0, S2
            VSTR            S0, [R4,#0x6C]
            VLDR            S4, [R4,#0x70]
            VLDR            S6, [R4,#0x74]
            VMUL.F32        S4, S4, S2
            VMUL.F32        S2, S6, S2
            VADD.F32        S6, S4, S8
            VSTR            S2, [R4,#0x74]
            VSTR            S6, [R4,#0x70]
          result = *((_BYTE *)_R4 + 218);
          if ( !*((_BYTE *)_R4 + 218) )
            return result;
          __asm { VLDR            S6, =0.58 }
          v77 = &v113;
          __asm { VADD.F32        S6, S16, S6 }
          v78 = *(int (__fastcall **)(Mob *, float *))(*(_DWORD *)_R4 + 164);
            VADD.F32        S4, S6, S4
            VLDR            S6, [R4,#0x4C]
            VSTR            S0, [SP,#0x80+var_5C]
            VSUB.F32        S4, S4, S6
            VSTR            S4, [SP,#0x80+var_58]
            VSTR            S2, [SP,#0x80+var_54]
          goto LABEL_74;
        v73 = Mob::calcMoveRelativeSpeed((int)_R4, 0);
        __asm { VLDR            S16, [R4,#0x4C] }
        _R6 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1096))(_R4);
        _R0 = EnchantUtils::getBestEnchantLevel((EnchantUtils *)7, (int)_R4, 3);
        __asm
          VMOV            S0, R0
          VLDR            S20, =0.0
          VCVT.F32.S32    S18, S0
          VCMPE.F32       S18, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S20, S18 }
        _R0 = (*(int (**)(void))(**(_DWORD **)(Enchant::mEnchants + 28) + 20))();
          VMOV.F32        S2, #0.5
          VCVT.F32.S32    S0, S0
          VCMPE.F32       S18, S0
          VMOV            S18, R6
          __asm { VMOVGT.F32      S20, S0 }
        __asm { VMUL.F32        S2, S20, S2 }
        if ( !*((_BYTE *)_R4 + 216) )
          __asm { VMOVEQ.F32      S20, S2 }
          VCMPE.F32       S20, #0.0
            VLDR            S2, =0.546
            VSUB.F32        S2, S2, S18
            VMUL.F32        S2, S20, S2
            VDIV.F32        S0, S2, S0
            VADD.F32        S18, S0, S18
        (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)_R4 + 100))(
          _R4,
          LODWORD(v117),
          LODWORD(v116),
          v73);
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
          VLDR            S0, [R4,#0x6C]
          VLDR            S2, =0.8
          VMUL.F32        S0, S0, S18
          VLDR            S8, =-0.02
          VSTR            S0, [R4,#0x6C]
          VLDR            S4, [R4,#0x70]
          VLDR            S6, [R4,#0x74]
          VMUL.F32        S4, S4, S2
          VMUL.F32        S2, S6, S18
          VADD.F32        S6, S4, S8
          VSTR            S2, [R4,#0x74]
          VSTR            S6, [R4,#0x70]
        result = *((_BYTE *)_R4 + 218);
        if ( *((_BYTE *)_R4 + 218) )
          v77 = &v114;
            VSTR            S0, [SP,#0x80+var_50]
            VSTR            S4, [SP,#0x80+var_4C]
            VSTR            S2, [SP,#0x80+var_48]
LABEL_74:
          result = v78(_R4, v77);
          if ( result == 1 )
            result = 1050253722;
            *((_DWORD *)_R4 + 28) = 1050253722;
          return result;
    }
  }
  return result;
}


int __fastcall Mob::getEffect(Mob *this, const MobEffect *a2)
{
  Mob *v2; // r4@1
  MobEffect *v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r0@2
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  if ( v4 <= MobEffect::getId(a2)
    || (v5 = MobEffect::getId(v3),
        MobEffectInstance::operator!=((int *)(*((_DWORD *)v2 + 993) + 16 * v5), &MobEffectInstance::NO_EFFECT) != 1) )
  {
    result = 0;
  }
  else
    result = *((_DWORD *)v2 + 993) + 16 * MobEffect::getId(v3);
  return result;
}


signed int __fastcall Mob::checkTotemDeathProtection(Mob *this, const EntityDamageSource *a2)
{
  EntityDamageSource *v2; // r5@1
  Mob *v3; // r4@1
  signed int v4; // r5@2
  ItemInstance *v5; // r0@5
  AttributeInstance *v6; // r0@7
  AttributeInstance *v7; // r5@7
  __int64 v13; // r2@7
  int v15; // r0@7
  int v16; // r0@7
  int v17; // r0@7
  int v18; // r0@7
  int v19; // r6@7
  BlockSource *v20; // r7@7
  int v21; // r0@7
  char v23; // [sp+8h] [bp-80h]@7
  char v24; // [sp+18h] [bp-70h]@7
  char v25; // [sp+28h] [bp-60h]@7
  char v26; // [sp+38h] [bp-50h]@7

  v2 = a2;
  v3 = this;
  if ( EntityDamageSource::getCause(a2) == 12 )
  {
    v4 = 0;
  }
  else if ( EntityDamageSource::getCause(v2) == 13 )
  else
    v5 = (ItemInstance *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v3 + 1104))(v3);
    if ( ItemInstance::isNull(v5) )
    {
      v4 = 0;
    }
    else
      v6 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v3 + 1000))(
                                  v3,
                                  &SharedAttributes::HEALTH);
      v7 = v6;
      _R0 = AttributeInstance::getCurrentValue(v6);
      __asm
      {
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
      }
      LODWORD(v13) = 10;
        VSUB.F32        S0, S0, S2
        VMOV            R1, S0
      InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v26, _R1, v13);
      AttributeInstance::addBuff(v7, (const AttributeBuff *)&v26);
      InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v26);
      Mob::removeAllEffects(v3);
      v15 = MobEffect::getId((MobEffect *)MobEffect::REGENERATION);
      v4 = 1;
      MobEffectInstance::MobEffectInstance((int)&v25, v15, 800, 1);
      Mob::addEffect(v3, (const MobEffectInstance *)&v25);
      v16 = MobEffect::getId((MobEffect *)MobEffect::ABSORPTION);
      MobEffectInstance::MobEffectInstance((int)&v24, v16, 100, 1);
      Mob::addEffect(v3, (const MobEffectInstance *)&v24);
      v17 = MobEffect::getId((MobEffect *)MobEffect::FIRE_RESISTANCE);
      MobEffectInstance::MobEffectInstance((int)&v23, v17, 800, 1);
      Mob::addEffect(v3, (const MobEffectInstance *)&v23);
      *((_DWORD *)v3 + 56) = 0;
      v18 = Entity::getLevel(v3);
      Level::broadcastEntityEvent(v18, (int)v3, 65, 0);
      v19 = Entity::getLevel(v3);
      v20 = (BlockSource *)Entity::getRegion(v3);
      v21 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v3 + 52))(v3);
      Level::broadcastDimensionEvent(v19, v20, 1052, v21, 0);
      (*(void (__fastcall **)(Mob *))(*(_DWORD *)v3 + 1108))(v3);
  return v4;
}


int __fastcall Mob::getItemInHandIcon(Mob *this, const ItemInstance *a2, int a3)
{
  ItemInstance *v3; // r4@1
  int result; // r0@2
  int v5; // r1@3

  v3 = a2;
  if ( *(_DWORD *)a2 )
  {
    v5 = (*(int (**)(void))(**(_DWORD **)a2 + 240))();
    result = j_j_j__ZNK12ItemInstance7getIconEib(v3, v5, 0);
  }
  else
    result = 0;
  return result;
}


int __fastcall Mob::isSleeping(Mob *this)
{
  return 0;
}


int __fastcall Mob::saveOffhand(Mob *this, int a2)
{
  Mob *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int v5; // r0@1
  int result; // r0@3
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  ItemInstance::save((ItemInstance *)&v7, (ItemInstance *)(v3 + 3584));
  v5 = v7;
  v7 = 0;
  v8 = v5;
  ListTag::add((int)v4, &v8);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v8 = 0;
  result = v7;
  if ( v7 )
    result = (*(int (**)(void))(*(_DWORD *)v7 + 4))();
  return result;
}


int __fastcall Mob::getArmorValue(Mob *this)
{
  Mob *v1; // r5@1
  char *v2; // r4@1
  char *v3; // r6@1
  int v4; // r4@2
  int v5; // r6@6
  int v6; // r0@6
  ItemInstance *v7; // r5@6

  v1 = this;
  v2 = (char *)this + 3664;
  v3 = (char *)this + 3736;
  if ( ItemInstance::isArmorItem((Mob *)((char *)this + 3664)) == 1 )
    v4 = *(_DWORD *)(*(_DWORD *)v2 + 120);
  else
    v4 = 0;
  if ( ItemInstance::isArmorItem((Mob *)((char *)v1 + 3736)) == 1 )
    v4 += *(_DWORD *)(*(_DWORD *)v3 + 120);
  v5 = (int)v1 + 3808;
  v6 = ItemInstance::isArmorItem((Mob *)((char *)v1 + 3808));
  v7 = (Mob *)((char *)v1 + 3880);
  if ( v6 == 1 )
    v4 += *(_DWORD *)(*(_DWORD *)v5 + 120);
  if ( ItemInstance::isArmorItem(v7) == 1 )
    v4 += *(_DWORD *)(*(_DWORD *)v7 + 120);
  return v4;
}


void __fastcall Mob::readAdditionalSaveData(Mob *this, const CompoundTag *a2)
{
  Mob::readAdditionalSaveData(this, a2);
}


void __fastcall Mob::normalTick(Mob *this)
{
  Mob::normalTick(this);
}


_BOOL4 __fastcall Mob::hasCaravanTail(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  return Level::fetchEntity(v2, 0, *((_DWORD *)v1 + 1056), *((_DWORD *)v1 + 1057), 0) != 0;
}


InstantaneousAttributeBuff *__fastcall Mob::actuallyHurt(Mob *this, int a2, const EntityDamageSource *a3, int a4)
{
  Mob *v4; // r4@1
  const EntityDamageSource *v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  InstantaneousAttributeBuff *result; // r0@1
  AttributeInstance *v14; // r0@4
  AttributeInstance *v15; // r6@4
  __int64 v17; // r2@4
  AttributeInstance *v21; // r4@7
  __int64 v23; // r2@7
  int v25; // [sp+0h] [bp-90h]@7
  char v26; // [sp+38h] [bp-58h]@6

  v4 = this;
  v5 = a3;
  v6 = a2;
  v7 = a4;
  result = (InstantaneousAttributeBuff *)(*(int (**)(void))(*(_DWORD *)this + 404))();
  if ( !result )
  {
    if ( !v7 )
      v6 = (*(int (__fastcall **)(Mob *, const EntityDamageSource *, int))(*(_DWORD *)v4 + 1148))(v4, v5, v6);
    _R5 = (*(int (__fastcall **)(Mob *, const EntityDamageSource *, int))(*(_DWORD *)v4 + 1076))(v4, v5, v6);
    __asm
    {
      VMOV            S0, R5
      VCVT.F32.S32    S16, S0
    }
    v14 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v4 + 1000))(
                                 v4,
                                 &SharedAttributes::ABSORPTION);
    v15 = v14;
    _R0 = AttributeInstance::getCurrentValue(v14);
      VMOV            S0, R0
      VLDR            S2, =0.0
    LODWORD(v17) = 9;
      VSUB.F32        S0, S16, S0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VCVTR.S32.F32   S0, S0
      VMOV            R7, S0
    _R0 = _R7 - _R5;
      VCVT.F32.S32    S0, S0
      VMOV            R1, S0
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v26, _R1, v17);
    AttributeInstance::addBuff(v15, (const AttributeBuff *)&v26);
    result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v26);
    if ( _R7 )
      v21 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v4 + 1000))(
                                   v4,
                                   &SharedAttributes::HEALTH);
      _R0 = -_R7;
      LODWORD(v23) = 10;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VMOV            R1, S0
      }
      InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v25, _R1, v23);
      AttributeInstance::addBuff(v21, (const AttributeBuff *)&v25);
      result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v25);
  }
  return result;
}


int __fastcall Mob::_getWalkTargetValue(Mob *this, const BlockPos *a2)
{
  return 0;
}


unsigned int __fastcall Mob::reloadHardcodedClient(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  unsigned int v4; // [sp+0h] [bp-10h]@1
  unsigned int v5; // [sp+4h] [bp-Ch]@1

  v1 = a1;
  *(_BYTE *)(a1 + 536) = 1;
  v2 = Entity::getLeashHolder((Entity *)&v4, a1);
  return Entity::setLeashHolder(v1, SHIDWORD(v2), v4, v5);
}


int __fastcall Mob::getVoicePitch(Mob *this)
{
  Random *v1; // r4@1
  int result; // r0@3

  v1 = this;
  Entity::isBaby(this);
  v1 = (Random *)((char *)v1 + 552);
  _R0 = Random::_genRandInt32(v1);
  __asm
  {
    VMOV            S0, R0
    VCVT.F64.U32    D8, S0
  }
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VMOV.F32        S6, #1.5
    VCVT.F64.U32    D1, S2
    VMUL.F64        D2, D8, D0
    VMUL.F64        D0, D1, D0
    VCVT.F32.F64    S2, D2
    VCVT.F32.F64    S0, D0
    VSUB.F32        S0, S2, S0
    VLDR            S2, =0.2
    VMOV.F32        S4, #1.0
  if ( !_ZF )
    __asm { VMOVNE.F32      S4, S6 }
    VMUL.F32        S0, S0, S2
    VADD.F32        S0, S4, S0
    VMOV            R0, S0
  return result;
}


void __fastcall Mob::die(Mob *this, const EntityDamageSource *a2)
{
  Entity *v2; // r4@1
  EntityDamageSource *v3; // r5@1
  TransformationComponent *v4; // r0@3
  int v5; // r6@4
  int v6; // r1@4
  int v7; // r0@4
  int v8; // r6@4
  Level *v9; // r0@6
  int v10; // r8@9
  Level *v11; // r0@13
  unsigned __int64 *v12; // r0@13
  Level *v13; // r0@15
  unsigned __int64 *v14; // r0@15
  void (__fastcall *v15)(Entity *, signed int, int, EntityDamageSource *); // r7@16
  signed int v16; // r1@17
  int v17; // r0@20
  int v18; // r0@21
  Entity *v19; // r7@21
  bool v20; // zf@21
  int v21; // r0@24
  void *v22; // r0@24
  void *v23; // r0@25
  void *v24; // r0@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  void **v31; // [sp+8h] [bp-78h]@24
  int v32; // [sp+40h] [bp-40h]@26
  int v33; // [sp+44h] [bp-3Ch]@25
  int v34; // [sp+48h] [bp-38h]@24
  int v35; // [sp+50h] [bp-30h]@17
  int v36; // [sp+54h] [bp-2Ch]@8
  unsigned int v37; // [sp+58h] [bp-28h]@4
  unsigned int v38; // [sp+5Ch] [bp-24h]@4

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 4163) )
  {
    *((_BYTE *)this + 4163) = 1;
    if ( Entity::getTransformationComponent(this) )
    {
      v4 = (TransformationComponent *)Entity::getTransformationComponent(v2);
      TransformationComponent::transformIfAble(v4);
    }
    v5 = Entity::getLevel(v2);
    (*(void (__fastcall **)(unsigned int *, EntityDamageSource *))(*(_DWORD *)v3 + 32))(&v37, v3);
    v7 = Level::fetchEntity(v5, v6, v37, v38, 0);
    v8 = v7;
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 456))();
    v9 = (Level *)Entity::getLevel(v2);
    if ( !Level::isClientSide(v9) )
      if ( v8 )
      {
        v36 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v3 + 40))(v3);
        if ( EntityClassTree::hasCategory(&v36, 2) == 1 )
          v10 = EnchantUtils::getBestEnchantLevel((EnchantUtils *)0xE, v8, 2);
        else
          v10 = 0;
      }
      else
        v10 = 0;
      if ( Entity::hasCategory((int)v2, 1) == 1
        && (v11 = (Level *)Entity::getLevel(v2),
            v12 = (unsigned __int64 *)Level::getGameRules(v11),
            GameRules::getBool(v12, (int **)&GameRules::KEEP_INVENTORY) != 1)
        || !Entity::hasCategory((int)v2, 1)
        && (v13 = (Level *)Entity::getLevel(v2),
            v14 = (unsigned __int64 *)Level::getGameRules(v13),
            GameRules::getBool(v14, (int **)&GameRules::DO_MOB_LOOT) == 1) )
        v15 = *(void (__fastcall **)(Entity *, signed int, int, EntityDamageSource *))(*(_DWORD *)v2 + 776);
        if ( v8 )
        {
          v35 = (*(int (__fastcall **)(EntityDamageSource *))(*(_DWORD *)v3 + 40))(v3);
          v16 = EntityClassTree::hasCategory(&v35, 1);
        }
          v16 = 0;
        v15(v2, v16, v10, v3);
      Entity::dropLeash(v2, 1, 0);
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1164))(v2);
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1160))(v2);
      v17 = Entity::getLevel(v2);
      Level::broadcastEntityEvent(v17, (int)v2, 3, 0);
    v18 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 952))(v2);
    v19 = (Entity *)v18;
    v20 = v8 == 0;
    if ( v8 )
      v20 = v18 == 0;
    if ( !v20 )
      v21 = EntityDamageSource::getCause(v3);
      EventPacket::EventPacket((int)&v31, v19, v8, (int)v2, v21);
      (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v19 + 1448))(v19, &v31);
      v31 = &off_26E9D30;
      v22 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v34 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v27 = (unsigned int *)(v33 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v24 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v29 = (unsigned int *)(v32 - 4);
            v30 = __ldrex(v29);
          while ( __strex(v30 - 1, v29) );
          v30 = (*v29)--;
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
  }
}


void __fastcall Mob::setSprinting(Mob *this, int a2)
{
  int v2; // r5@1
  Mob *v3; // r4@1
  AttributeInstance *v4; // r4@1
  unsigned int *v5; // r0@4
  unsigned int v6; // r1@6
  unsigned int *v7; // r0@9
  unsigned int v8; // r1@11
  signed int v9; // r5@14
  int v10; // r6@14
  unsigned int *v11; // r1@15
  unsigned int v12; // r0@17
  signed int v13; // r5@20
  int v14; // r6@20
  unsigned int *v15; // r1@21
  unsigned int v16; // r0@23
  unsigned int *v17; // r7@27
  unsigned int v18; // r0@29
  unsigned int *v19; // r7@33
  unsigned int v20; // r0@35
  unsigned int *v21; // r0@42
  unsigned int v22; // r1@44
  unsigned int *v23; // r0@52
  unsigned int v24; // r1@54
  int v25; // r4@57
  unsigned int *v26; // r1@58
  unsigned int v27; // r0@60
  unsigned int *v28; // r1@64
  unsigned int v29; // r0@66
  unsigned int *v30; // r5@70
  unsigned int v31; // r0@72
  int v32; // [sp+4h] [bp-34h]@51
  int v33; // [sp+8h] [bp-30h]@51
  int v34; // [sp+Ch] [bp-2Ch]@8
  int v35; // [sp+10h] [bp-28h]@8
  int v36; // [sp+14h] [bp-24h]@41
  int v37; // [sp+18h] [bp-20h]@41
  int v38; // [sp+1Ch] [bp-1Ch]@3
  int v39; // [sp+20h] [bp-18h]@3

  v2 = a2;
  v3 = this;
  Entity::setStatusFlag((int)this, 3, a2);
  v4 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v3 + 1000))(
                              v3,
                              &SharedAttributes::MOVEMENT_SPEED);
  if ( v4 )
  {
    if ( v2 == 1 )
    {
      v38 = SharedModifiers::SPRINTING_BOOST;
      v39 = unk_27F82F4;
      if ( unk_27F82F4 )
      {
        v5 = (unsigned int *)(unk_27F82F4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 + 1, v5) );
        }
        else
          ++*v5;
      }
      v9 = AttributeInstance::hasModifier((int)v4, &v38);
      v10 = v39;
      if ( v39 )
        v11 = (unsigned int *)(v39 + 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 == 1 )
          v17 = (unsigned int *)(v10 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
      if ( !v9 )
        v36 = SharedModifiers::SPRINTING_BOOST;
        v37 = unk_27F82F4;
        if ( unk_27F82F4 )
          v21 = (unsigned int *)(unk_27F82F4 + 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 + 1, v21) );
            ++*v21;
        AttributeInstance::addModifier(v4, (const AttributeModifier **)&v36);
        v25 = v37;
        if ( v37 )
          v26 = (unsigned int *)(v37 + 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 == 1 )
            v30 = (unsigned int *)(v25 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
            if ( &pthread_create )
            {
              __dmb();
              do
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
              goto LABEL_81;
            }
LABEL_80:
            v31 = (*v30)--;
LABEL_81:
            if ( v31 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 12))(v25);
            return;
    }
    else
      v34 = SharedModifiers::SPRINTING_BOOST;
      v35 = unk_27F82F4;
        v7 = (unsigned int *)(unk_27F82F4 + 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 + 1, v7) );
          ++*v7;
      v13 = AttributeInstance::hasModifier((int)v4, &v34);
      v14 = v35;
      if ( !v35 )
        goto LABEL_85;
      v15 = (unsigned int *)(v35 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      else
        v16 = (*v15)--;
      if ( v16 != 1 )
      v19 = (unsigned int *)(v14 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 8))(v14);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 12))(v14);
        if ( !v13 )
          return;
LABEL_85:
        if ( v13 != 1 )
      v32 = SharedModifiers::SPRINTING_BOOST;
      v33 = unk_27F82F4;
        v23 = (unsigned int *)(unk_27F82F4 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 + 1, v23) );
          ++*v23;
      AttributeInstance::removeModifier(v4, (const AttributeModifier **)&v32);
      v25 = v33;
      if ( v33 )
        v28 = (unsigned int *)(v33 + 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 == 1 )
          v30 = (unsigned int *)(v25 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v25 + 8))(v25);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            goto LABEL_81;
          goto LABEL_80;
  }
}


int __fastcall Mob::getActiveEffectCount(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r7@1
  int v3; // r1@1
  int v4; // r6@2
  unsigned int v5; // r5@3
  signed int v6; // r0@4

  v1 = this;
  v2 = 0;
  v3 = *((_DWORD *)this + 993);
  if ( *((_DWORD *)this + 994) == v3 )
  {
    v4 = 0;
  }
  else
    v5 = 0;
    do
    {
      v6 = MobEffectInstance::operator!=((int *)(v3 + v2), &MobEffectInstance::NO_EFFECT);
      v3 = *((_DWORD *)v1 + 993);
      v2 += 16;
      ++v5;
      if ( v6 )
        ++v4;
    }
    while ( v5 < (*((_DWORD *)v1 + 994) - v3) >> 4 );
  return v4;
}


signed int __fastcall Mob::isLookingAtAnEntity(Mob *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 1047) & *((_DWORD *)this + 1046);
  result = 0;
  if ( v1 != -1 )
    result = 1;
  return result;
}


void __fastcall Mob::tickMagmaDamage(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r5@4
  int v3; // r6@7
  EnchantmentInstance *v4; // r5@17
  int v5; // r6@18
  int v6; // r0@19
  signed int v7; // r6@22
  bool v8; // zf@30
  BlockSource *v9; // r5@34
  char v10; // [sp+4h] [bp-ACh]@35
  char v11; // [sp+5h] [bp-ABh]@35
  char v12; // [sp+8h] [bp-A8h]@35
  int v13; // [sp+14h] [bp-9Ch]@34
  signed int v14; // [sp+18h] [bp-98h]@34
  int v15; // [sp+1Ch] [bp-94h]@34
  char v16; // [sp+20h] [bp-90h]@34
  int v17; // [sp+3Ch] [bp-74h]@34
  int v18; // [sp+40h] [bp-70h]@34
  signed int v19; // [sp+44h] [bp-6Ch]@34
  char v20; // [sp+48h] [bp-68h]@34
  char v21; // [sp+64h] [bp-4Ch]@11
  void *v22; // [sp+68h] [bp-48h]@15
  void *v23; // [sp+74h] [bp-3Ch]@13
  void *ptr; // [sp+80h] [bp-30h]@11
  void *v25; // [sp+8Ch] [bp-24h]@11
  char *v26; // [sp+90h] [bp-20h]@17

  v1 = this;
  *((_BYTE *)this + 440) = 0;
  if ( !Entity::isFireImmune(this) && !(*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 312))(v1) && !Entity::isRiding(v1) )
  {
    v2 = (*(int (__fastcall **)(Mob *, signed int))(*(_DWORD *)v1 + 1028))(v1, 3);
    if ( *(_BYTE *)(v2 + 15) )
    {
      if ( *(_DWORD *)v2 )
      {
        if ( ItemInstance::isNull((ItemInstance *)v2) )
        {
          v3 = 0;
        }
        else if ( *(_BYTE *)(v2 + 14) )
          ItemInstance::getEnchantsFromUserData((ItemInstance *)&v21, v2);
          ItemEnchants::getEnchants((ItemEnchants *)&v25, (int)&v21, 0);
          if ( ptr )
            operator delete(ptr);
          if ( v23 )
            operator delete(v23);
          if ( v22 )
            operator delete(v22);
          v4 = (EnchantmentInstance *)v25;
          if ( v25 == v26 )
          {
            v7 = 0;
          }
          else
            v5 = (int)(v26 - 8);
            do
            {
              v6 = EnchantmentInstance::getEnchantType(v4);
              if ( v6 == 25 )
                break;
              v8 = v5 == (_DWORD)v4;
              v4 = (EnchantmentInstance *)((char *)v4 + 8);
            }
            while ( !v8 );
            v4 = (EnchantmentInstance *)v25;
            if ( v6 == 25 )
              v7 = 1;
          if ( v4 )
            operator delete((void *)v4);
          v3 = v7 != 0;
        else
      }
      else
        v3 = 0;
    }
    else
      v3 = 0;
    v8 = v3 == 0;
    if ( !v3 )
      v8 = *((_BYTE *)v1 + 412) == 0;
    if ( v8 )
      v9 = (BlockSource *)Entity::getRegion(v1);
      v17 = 1040187392;
      v18 = 0;
      v19 = 1040187392;
      AABB::shrink((AABB *)&v16, (Mob *)((char *)v1 + 264), (int)&v17);
      v13 = 0;
      v14 = -1103101952;
      v15 = 0;
      AABB::expanded((AABB *)&v20, (const Vec3 *)&v16, (int)&v13);
      if ( BlockSource::containsMagmaBlock(v9, (const AABB *)&v20) == 1 )
        v10 = *(_BYTE *)(Block::mMagmaBlock + 4);
        v11 = 0;
        EntityDamageByBlockSource::EntityDamageByBlockSource((int)&v12, (int)&v10, 22);
        Entity::hurt(v1, (const EntityDamageSource *)&v12, 1, 1, 0);
        EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v12);
        *((_BYTE *)v1 + 440) = 1;
  }
}


void __fastcall Mob::_sendDirtyMobData(Mob *this)
{
  Mob *v1; // r10@1
  Level *v2; // r0@1
  unsigned __int64 *v3; // r2@2
  Dimension *v4; // r0@3
  int v5; // r5@3
  int v6; // r7@3
  unsigned int *v7; // r2@5
  signed int v8; // r1@7
  int v9; // r1@13
  void *v10; // r0@13
  char *v11; // r5@18
  Dimension *v12; // r0@19
  __int64 v13; // r4@19
  int v14; // r7@20
  int v15; // [sp+0h] [bp-80h]@19
  void **v16; // [sp+8h] [bp-78h]@19
  int v17; // [sp+Ch] [bp-74h]@19
  int v18; // [sp+10h] [bp-70h]@19
  char v19; // [sp+14h] [bp-6Ch]@19
  __int64 v20; // [sp+18h] [bp-68h]@19
  int v21; // [sp+20h] [bp-60h]@19
  int v22; // [sp+24h] [bp-5Ch]@19
  void **v23; // [sp+30h] [bp-50h]@3
  __int64 v24; // [sp+48h] [bp-38h]@3

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v2) )
  {
    v3 = (unsigned __int64 *)BaseAttributeMap::getDirtyAttributes(*((BaseAttributeMap **)v1 + 992));
    if ( *v3 >> 32 != (unsigned int)*v3 )
    {
      UpdateAttributesPacket::UpdateAttributesPacket((int)&v23, (int)v1, v3);
      v4 = (Dimension *)Entity::getDimension(v1);
      Dimension::sendPacketForEntity(v4, v1, (const Packet *)&v23, 0);
      BaseAttributeMap::clearDirtyAttributes(*((BaseAttributeMap **)v1 + 992));
      v23 = &off_26E9D58;
      v6 = HIDWORD(v24);
      v5 = v24;
      if ( (_DWORD)v24 != HIDWORD(v24) )
      {
        do
        {
          v9 = *(_DWORD *)(v5 + 16);
          v10 = (void *)(v9 - 12);
          if ( (int *)(v9 - 12) != &dword_28898C0 )
          {
            v7 = (unsigned int *)(v9 - 4);
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
              j_j_j_j__ZdlPv_9(v10);
          }
          v5 += 20;
        }
        while ( v5 != v6 );
        v5 = v24;
      }
      if ( v5 )
        operator delete((void *)v5);
    }
    v11 = Entity::getEntityData(v1);
    if ( (unsigned int)(unsigned __int16)*((_DWORD *)v11 + 3) <= *((_DWORD *)v11 + 3) >> 16 )
      Entity::getRuntimeID((Entity *)&v15, (int)v1);
      v17 = 2;
      v18 = 1;
      v19 = 0;
      v16 = &off_26E965C;
      v20 = *(_QWORD *)&v15;
      SynchedEntityData::packDirty((SynchedEntityData *)&v21, (int)v11);
      v12 = (Dimension *)Entity::getDimension(v1);
      Dimension::sendPacketForEntity(v12, v1, (const Packet *)&v16, 0);
      v13 = *(_QWORD *)&v21;
      if ( v22 == v21 )
        v22 = v21;
      else
        v14 = v21;
          if ( *(_DWORD *)v14 )
            (*(void (**)(void))(**(_DWORD **)v14 + 4))();
          *(_DWORD *)v14 = 0;
          v14 += 4;
        while ( HIDWORD(v13) != v14 );
        HIDWORD(v13) = v21;
        v22 = v13;
        if ( v21 != (_DWORD)v13 )
          do
            if ( *(_DWORD *)HIDWORD(v13) )
              (*(void (**)(void))(**(_DWORD **)HIDWORD(v13) + 4))();
            *(_DWORD *)HIDWORD(v13) = 0;
            HIDWORD(v13) += 4;
          while ( (_DWORD)v13 != HIDWORD(v13) );
          LODWORD(v13) = v21;
      if ( (_DWORD)v13 )
        operator delete((void *)v13);
  }
}


int __fastcall Mob::_doSprintParticleEffect(Mob *this, float a2)
{
  int v3; // r0@1
  __int64 v8; // r5@1
  float v10; // r1@1
  float v11; // r1@1
  int v12; // r0@1
  const BlockPos *v13; // r0@1
  int result; // r0@1
  Level *v15; // r0@4
  char *v16; // r0@4
  Level *v18; // r0@4
  char *v19; // r0@4
  int v21; // r0@5
  int v22; // r0@8
  int v23; // r1@10
  Level *v26; // r0@20
  float v27; // [sp+8h] [bp-68h]@20
  int v28; // [sp+Ch] [bp-64h]@20
  float v29; // [sp+14h] [bp-5Ch]@20
  unsigned __int8 v30; // [sp+20h] [bp-50h]@1
  unsigned __int8 v31; // [sp+21h] [bp-4Fh]@20
  __int64 v32; // [sp+24h] [bp-4Ch]@1
  int v33; // [sp+2Ch] [bp-44h]@1

  _R4 = this;
  v3 = mce::Math::floor(*((mce::Math **)this + 18), a2);
  __asm { VLDR            S0, =-0.2 }
  LODWORD(v8) = v3;
  __asm
  {
    VLDR            S2, [R4,#0x4C]
    VLDR            S4, [R4,#0x13C]
    VADD.F32        S0, S2, S0
    VSUB.F32        S0, S0, S4
    VMOV            R0, S0
  }
  HIDWORD(v8) = mce::Math::floor(_R0, v10);
  v12 = mce::Math::floor(*((mce::Math **)_R4 + 20), v11);
  v32 = v8;
  v33 = v12;
  v13 = (const BlockPos *)Entity::getRegion(_R4);
  BlockSource::getBlockAndData((BlockSource *)&v30, v13, (int)&v32);
  result = Block::mBlocks[v30];
  if ( !result )
    return result;
  result = BlockGraphics::mBlocks[*(_BYTE *)(result + 4)];
  result = BlockGraphics::getBlockShape((BlockGraphics *)result);
  if ( result == -1 )
  __asm { VLDR            S16, [R4,#0x48] }
  v15 = (Level *)Entity::getLevel(_R4);
  v16 = Level::getRandom(v15);
  _R0 = Random::_genRandInt32((Random *)v16);
    VMOV            S0, R0
    VLDR            S18, [R4,#0x50]
    VLDR            S20, [R4,#0x10C]
    VLDR            S22, [R4,#0x130]
    VCVT.F64.U32    D12, S0
  v18 = (Level *)Entity::getLevel(_R4);
  v19 = Level::getRandom(v18);
  _R0 = Random::_genRandInt32((Random *)v19);
    VMOV            S2, R0
    VLDR            D0, =2.32830644e-10
    VLDR            S26, =0.1
    VCVT.F64.U32    D1, S2
    VMUL.F64        D2, D12, D0
    VMUL.F64        D0, D1, D0
    VMOV.F32        S2, #-0.5
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S0, D0
    VADD.F32        S4, S4, S2
    VADD.F32        S0, S0, S2
    VLDR            S2, [R4,#0x130]
    VMUL.F32        S22, S4, S22
    VMUL.F32        S24, S0, S2
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 208))(_R4) == 1 )
    v21 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 488))(_R4);
    if ( EntityClassTree::isOfType(v21, 319) != 1 )
    {
      v23 = 0;
      goto LABEL_17;
    }
    if ( Abilities::isFlying((Mob *)((char *)_R4 + 4320)) != 1 )
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 216))(_R4) != 1 )
    goto LABEL_10;
  v22 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 488))(_R4);
  if ( EntityClassTree::isOfType(v22, 319) == 1 )
    if ( Abilities::isFlying((Mob *)((char *)_R4 + 4320)) == 1 )
LABEL_10:
      v23 = 2;
      if ( !*((_BYTE *)_R4 + 216) )
        v23 = 3;
    v23 = 1;
  else
LABEL_17:
    VADD.F32        S22, S22, S16
    VADD.F32        S20, S20, S26
    VADD.F32        S16, S24, S18
  _R0 = Mob::calcMoveRelativeSpeed((int)_R4, v23);
    VLDR            S0, [R4,#0x70]
    VLDR            S2, [R4,#0x6C]
    VMUL.F32        S0, S0, S0
    VLDR            S4, [R4,#0x74]
    VMUL.F32        S6, S2, S2
    VMUL.F32        S8, S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S0, S0, S8
    VLDR            S8, =0.0001
    VSQRT.F32       S6, S0
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    _R0 = &Vec3::ZERO;
    __asm
      VLDR            S2, [R0]
      VLDR            S4, [R0,#8]
      VDIV.F32        S4, S4, S6
      VDIV.F32        S2, S2, S6
    VMOV.F32        S6, #-4.0
    VMUL.F32        S0, S0, S6
    VMUL.F32        S18, S0, S2
    VMUL.F32        S24, S0, S4
  v26 = (Level *)Entity::getLevel(_R4);
  __asm { VSTR            S18, [SP,#0x70+var_68] }
  v28 = 1041865114;
    VSTR            S22, [SP,#0x70+var_5C]
    VSTR            S20, [SP,#0x70+var_58]
    VSTR            S16, [SP,#0x70+var_54]
    VSTR            S24, [SP,#0x70+var_60]
  return Level::addTerrainParticle(
           v26,
           (const Vec3 *)&v29,
           (const Vec3 *)&v27,
           v30 | (v31 << 8),
           (const BlockPos *)&v32);
}


unsigned int __fastcall Mob::updateGliding(Mob *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  unsigned int result; // r0@1
  int v4; // r0@2
  int v6; // r5@5
  int v7; // r0@10
  const ItemInstance *v8; // r1@12
  int v15; // [sp+0h] [bp-58h]@10
  int v16; // [sp+8h] [bp-50h]@27
  char v17; // [sp+Eh] [bp-4Ah]@16
  char v18; // [sp+Fh] [bp-49h]@10
  void *v19; // [sp+24h] [bp-34h]@25
  void *ptr; // [sp+34h] [bp-24h]@23

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v2);
  if ( !result )
  {
    v4 = Entity::getStatusFlag((int)v1, 30);
    _ZF = v4 == 1;
    if ( v4 == 1 )
      _ZF = *((_BYTE *)v1 + 216) == 0;
    if ( !_ZF || Entity::isRiding(v1) || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 208))(v1) )
    {
      v6 = 0;
    }
    else
      v7 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v1 + 1028))(v1, 1);
      ItemInstance::ItemInstance((ItemInstance *)&v15, v7);
      if ( v18 )
      {
        if ( v15 )
        {
          if ( ItemInstance::isNull((ItemInstance *)&v15) )
          {
            v6 = 0;
          }
          else if ( v17 )
            if ( ArmorItem::isFlyEnabled((ArmorItem *)&v15, v8) == 1 )
            {
              _R1 = 1717986919;
              _R0 = *((_DWORD *)v1 + 1064) + 1;
              __asm { SMMUL.W         R1, R0, R1 }
              if ( _R0 == 20 * (((signed int)_R1 >> 3) + (_R1 >> 31)) )
              {
                ItemInstance::hurtAndBreak((ItemInstance *)&v15, 1, v1);
                v6 = 1;
                (*(void (__fastcall **)(Entity *, signed int, int *))(*(_DWORD *)v1 + 1024))(v1, 1, &v15);
              }
              else
            }
            else
              v6 = 0;
          else
        }
        else
          v6 = 0;
      }
      else
        v6 = 0;
      if ( ptr )
        operator delete(ptr);
      if ( v19 )
        operator delete(v19);
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
    result = Entity::setStatusFlag((int)v1, 30, v6);
  }
  return result;
}


unsigned int __fastcall Mob::setInvisible(Mob *this, int a2)
{
  int v2; // r4@1
  Mob *v3; // r5@1

  v2 = a2;
  v3 = this;
  Entity::setStatusFlag((int)this, 14, a2 ^ 1);
  return j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_0((int)v3, 5, v2);
}


int __fastcall Mob::rideTick(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Entity::rideTick(this);
  result = *((_DWORD *)v1 + 1005);
  *((_DWORD *)v1 + 1004) = result;
  *((_DWORD *)v1 + 1005) = 0;
  *((_DWORD *)v1 + 56) = 0;
  return result;
}


int __fastcall Mob::containerChanged(Mob *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r8@1
  int v4; // r0@1
  bool v5; // zf@1
  int v6; // r6@4
  int v7; // r0@4
  bool v8; // zf@5
  bool v9; // nf@5
  unsigned __int8 v10; // vf@5
  const Item **v11; // r0@8
  int v12; // r1@9
  signed int v13; // r9@9
  int v14; // r5@10
  int v15; // r6@10
  void *v16; // r0@13
  void *v17; // r0@15
  int v18; // r0@17
  int result; // r0@23
  char *v20; // r5@29
  int (__fastcall *v21)(Entity *, signed int, char *, signed int); // r6@29
  Entity *v22; // r0@29
  signed int v23; // r1@29
  BlockSource *v24; // r0@30
  Level *v25; // r0@30
  Level *v26; // r0@31
  int v27; // r0@31
  int v28; // r0@32
  int v29; // r5@32
  bool v30; // zf@32
  char v31; // [sp+4h] [bp-184h]@37
  char v32; // [sp+10h] [bp-178h]@31
  char v33; // [sp+154h] [bp-34h]@29
  int v34; // [sp+160h] [bp-28h]@10
  int v35; // [sp+164h] [bp-24h]@10

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 794);
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = *((_DWORD *)v2 + 782);
    v5 = v4 == 0;
  }
  if ( !v5 )
    v6 = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 44))();
    v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 372))(v2);
    if ( v3 >= 0 )
    {
      v10 = __OFSUB__(v6, v3);
      v8 = v6 == v3;
      v9 = v6 - v3 < 0;
      if ( v6 > v3 )
      {
        v10 = __OFSUB__(v7, v3);
        v8 = v7 == v3;
        v9 = v7 - v3 < 0;
      }
      if ( !((unsigned __int8)(v9 ^ v10) | v8) )
        v11 = (const Item **)(*(int (**)(void))(**(_DWORD **)(*((_DWORD *)v2 + 782) + 4) + 16))();
        EquippableComponent::onItemChanged(*((EquippableComponent **)v2 + 794), v3, *v11);
    }
  (*(void (__fastcall **)(Entity *))(*(_DWORD *)v2 + 1036))(v2);
  v12 = *((_DWORD *)v2 + 794);
  v13 = 0;
  if ( v12 )
    EquippableComponent::getSlot((EquippableComponent *)&v34, v12, 0);
    v14 = v35;
    v15 = v34;
    if ( v35 == v34 )
      v13 = 1;
    if ( v34 != v35 )
      do
        v16 = *(void **)(v15 + 52);
        if ( v16 )
          operator delete(v16);
        v17 = *(void **)(v15 + 36);
        if ( v17 )
          operator delete(v17);
        v18 = *(_DWORD *)(v15 + 8);
        if ( v18 )
          (*(void (**)(void))(*(_DWORD *)v18 + 4))();
        *(_DWORD *)(v15 + 8) = 0;
        v15 += 72;
      while ( v14 != v15 );
      v15 = v34;
    if ( v15 )
      operator delete((void *)v15);
  result = Entity::hasRuntimeID(v2);
  if ( result == 1 )
    if ( v13 )
      ++v3;
    if ( v3 == 1 )
      v24 = (BlockSource *)Entity::getRegion(v2);
      v25 = (Level *)BlockSource::getLevel(v24);
      if ( !Level::isClientSide(v25) )
        MobArmorEquipmentPacket::MobArmorEquipmentPacket((int)&v32, (int)v2);
        v26 = (Level *)Entity::getLevel(v2);
        v27 = Level::getPacketSender(v26);
        (*(void (**)(void))(*(_DWORD *)v27 + 8))();
        MobArmorEquipmentPacket::~MobArmorEquipmentPacket((MobArmorEquipmentPacket *)&v32);
      v28 = (*(int (__fastcall **)(Entity *, signed int))(*(_DWORD *)v2 + 1028))(v2, 1);
      v29 = v28;
      result = *(_BYTE *)(v28 + 15);
      v30 = result == 0;
      if ( result )
        result = *(_DWORD *)v29;
        v30 = *(_DWORD *)v29 == 0;
      if ( !v30 )
        result = ItemInstance::isNull((ItemInstance *)v29);
        if ( !result )
        {
          result = *(_BYTE *)(v29 + 14);
          if ( *(_BYTE *)(v29 + 14) )
          {
            v20 = &v31;
            v21 = *(int (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v2 + 556);
            Entity::getAttachPos((AABB *)&v31, (int)v2, 1, 0);
            v22 = v2;
            v23 = 37;
            return v21(v22, v23, v20, -1);
          }
        }
    else if ( !v3 )
      result = Entity::hasSaddle(v2);
      if ( result == 1 )
        v20 = &v33;
        v21 = *(int (__fastcall **)(Entity *, signed int, char *, signed int))(*(_DWORD *)v2 + 556);
        Entity::getAttachPos((AABB *)&v33, (int)v2, 1, 0);
        v22 = v2;
        v23 = 36;
        return v21(v22, v23, v20, -1);
  return result;
}


int __fastcall Mob::_playStepSound(Mob *this, const BlockPos *a2, int a3)
{
  const BlockPos *v3; // r6@1
  int v4; // r5@1
  Entity *v5; // r4@1
  int v6; // r3@3
  int result; // r0@3
  char v8; // [sp+4h] [bp-1Ch]@3

  v3 = a2;
  v4 = a3;
  v5 = this;
  if ( Entity::onLadder(this, 0) == 1 && Entity::canClimb(v5) )
  {
    Entity::getAttachPos((AABB *)&v8, (int)v5, 0, 0);
    v6 = *(_BYTE *)(Block::mLadder + 4);
    result = Entity::playSound((int)v5, 2, (int)&v8);
  }
  else
    result = j_j_j__ZN6Entity14_playStepSoundERK8BlockPosi(v5, v3, v4);
  return result;
}


void __fastcall Mob::_verifyAttributes(Mob *this)
{
  Mob *v1; // r8@1
  int **v2; // r4@1
  AttributeInstance *v8; // r0@3
  AttributeInstance *v9; // r6@3

  v1 = this;
  v2 = (int **)(*(_QWORD *)(*((_DWORD *)this + 12) + 48) >> 32);
  _R5 = (int **)*(_QWORD *)(*((_DWORD *)this + 12) + 48);
  if ( _R5 != v2 )
  {
    __asm { VLDR            S16, =3.4028e38 }
    do
    {
      v8 = (AttributeInstance *)BaseAttributeMap::getMutableInstance(*((unsigned __int64 **)v1 + 992), _R5);
      v9 = v8;
      if ( v8 )
      {
        _R0 = AttributeInstance::getMaxValue(v8);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          __asm
          {
            VLDR            S18, [R5,#8]
            VCMPE.F32       S18, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !_ZF )
            __asm { VMOV            R7, S18 }
            AttributeInstance::setDefaultValue(v9, _R7, 1);
            _R0 = AttributeInstance::getCurrentValue(v9);
            __asm
            {
              VMOV            S0, R0
              VCMPE.F32       S0, S18
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              AttributeInstance::setDefaultValue(v9, _R7, 2);
      }
      _R5 += 5;
    }
    while ( v2 != _R5 );
  }
}


int __fastcall Mob::getExperienceReward(Mob *this)
{
  return 0;
}


Mob *__fastcall Mob::updateAttackAnim(Mob *this)
{
  Mob *v1; // r4@1
  Mob *result; // r0@6

  v1 = this;
  _R0 = Mob::getCurrentSwingDuration(this);
  if ( *((_BYTE *)v1 + 3988) )
  {
    _R1 = *((_DWORD *)v1 + 998) + 1;
    *((_DWORD *)v1 + 998) = _R1;
    if ( _R1 >= _R0 )
    {
      _R1 = 0;
      *((_DWORD *)v1 + 998) = 0;
      *((_BYTE *)v1 + 3988) = 0;
    }
  }
  else
    _R1 = 0;
    *((_DWORD *)v1 + 998) = 0;
  __asm
    VMOV            S0, R0
    VMOV            S2, R1
  result = (Mob *)((char *)v1 + 4244);
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VDIV.F32        S0, S2, S0
    VSTR            S0, [R0]
  return result;
}


unsigned int __fastcall Mob::removeAllEffects(Mob *this)
{
  Mob *v1; // r4@1
  SynchedEntityData *v2; // r8@1
  int v3; // r0@1
  unsigned int v4; // r1@1
  unsigned int v5; // r1@3
  unsigned int v6; // r0@3
  int v7; // r0@8
  unsigned int v8; // r1@8
  unsigned int v9; // r1@10
  unsigned int v10; // r0@10
  int v11; // r7@15
  int v12; // r5@15
  int v13; // r0@16
  int v14; // r3@18
  int v15; // r6@18
  int v16; // r0@18
  __int16 v17; // r2@18
  int v18; // r0@20
  unsigned int v19; // r1@20
  unsigned int v20; // r1@22
  unsigned int v21; // r0@22
  unsigned int result; // r0@27
  unsigned int v23; // r1@27
  unsigned int v24; // r1@29
  unsigned int v25; // r0@29

  v1 = this;
  v2 = (Mob *)((char *)this + 176);
  v3 = SynchedEntityData::_get((Mob *)((char *)this + 176), 9);
  v4 = *(_DWORD *)(v3 + 4);
  if ( !(_BYTE)v4 && *(_BYTE *)(v3 + 9) )
  {
    v5 = v4 >> 16;
    *(_WORD *)(v3 + 8) = 1;
    v6 = *((_WORD *)v1 + 94);
    if ( v6 >= v5 )
      LOWORD(v6) = v5;
    *((_WORD *)v1 + 94) = v6;
    if ( *((_WORD *)v1 + 95) > v5 )
      LOWORD(v5) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v5;
  }
  v7 = SynchedEntityData::_get(v2, 8);
  v8 = *(_DWORD *)(v7 + 4);
  if ( (unsigned __int8)v8 == 2 && *(_DWORD *)(v7 + 12) )
    v9 = v8 >> 16;
    *(_DWORD *)(v7 + 12) = 0;
    *(_BYTE *)(v7 + 8) = 1;
    v10 = *((_WORD *)v1 + 94);
    if ( v10 >= v9 )
      LOWORD(v10) = v9;
    *((_WORD *)v1 + 94) = v10;
    if ( *((_WORD *)v1 + 95) > v9 )
      LOWORD(v9) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v9;
  v11 = 0;
  v12 = 0;
  do
    v13 = *((_DWORD *)v1 + 993);
    if ( (*((_DWORD *)v1 + 994) - v13) >> 4 > v12
      && MobEffectInstance::operator!=((int *)(v13 + v11), &MobEffectInstance::NO_EFFECT) == 1 )
    {
      (*(void (__fastcall **)(Mob *, int))(*(_DWORD *)v1 + 1184))(v1, *((_DWORD *)v1 + 993) + v11);
      v14 = unk_27FB704;
      v15 = unk_27FB708;
      v16 = *((_DWORD *)v1 + 993) + v11;
      *(_DWORD *)v16 = MobEffectInstance::NO_EFFECT;
      *(_DWORD *)(v16 + 4) = v14;
      *(_DWORD *)(v16 + 8) = v15;
      v16 += 12;
      v17 = unk_27FB70C;
      *(_BYTE *)(v16 + 2) = byte_27FB70E[0];
      *(_WORD *)v16 = v17;
    }
    ++v12;
    v11 += 16;
  while ( v12 != 26 );
  v18 = SynchedEntityData::_get(v2, 9);
  v19 = *(_DWORD *)(v18 + 4);
  if ( !(_BYTE)v19 && *(_BYTE *)(v18 + 9) )
    v20 = v19 >> 16;
    *(_WORD *)(v18 + 8) = 1;
    v21 = *((_WORD *)v1 + 94);
    if ( v21 >= v20 )
      LOWORD(v21) = v20;
    *((_WORD *)v1 + 94) = v21;
    if ( *((_WORD *)v1 + 95) > v20 )
      LOWORD(v20) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v20;
  result = SynchedEntityData::_get(v2, 8);
  v23 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v23 == 2 && *(_DWORD *)(result + 12) )
    v24 = v23 >> 16;
    *(_DWORD *)(result + 12) = 0;
    *(_BYTE *)(result + 8) = 1;
    v25 = *((_WORD *)v1 + 94);
    if ( v25 >= v24 )
      LOWORD(v25) = v24;
    *((_WORD *)v1 + 94) = v25;
    result = *((_WORD *)v1 + 95);
    if ( result > v24 )
      LOWORD(v24) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v24;
  return result;
}


signed int __fastcall Mob::getAttackTime(Mob *this)
{
  return 20;
}


void __fastcall Mob::updateEquipment(Mob *this)
{
  Mob::updateEquipment(this);
}


void __fastcall Mob::normalTick(Mob *this)
{
  Level *v2; // r0@1
  unsigned __int64 *v3; // r5@1
  Level *v4; // r0@1
  signed int v5; // r0@10
  int v6; // r3@11
  int *v7; // r2@11
  int v9; // r3@12
  int v10; // r0@16
  int v11; // r5@16
  float v15; // r1@20
  __int64 v17; // r2@20
  int v21; // r0@21
  mce::Degree *v22; // r0@21
  float v25; // r1@27
  float v26; // r1@28
  float v30; // r1@29
  signed int v32; // r2@29
  int v33; // r0@33
  int v35; // r5@37
  float v39; // r1@48
  float v40; // r1@48
  float v43; // r1@48
  float v45; // r1@48
  float v48; // r1@48
  float v50; // r1@48
  float v54; // r1@48
  int v55; // r0@48
  int v57; // r0@54
  int *v58; // r1@54
  int v59; // r0@55
  char *v60; // r5@57
  Level *v61; // r0@57
  Dimension *v62; // r0@59
  __int64 v63; // r4@59
  int v64; // r7@60
  int v65; // [sp+0h] [bp-78h]@59
  void **v66; // [sp+8h] [bp-70h]@59
  int v67; // [sp+Ch] [bp-6Ch]@59
  int v68; // [sp+10h] [bp-68h]@59
  char v69; // [sp+14h] [bp-64h]@59
  __int64 v70; // [sp+18h] [bp-60h]@59
  int v71; // [sp+20h] [bp-58h]@59
  int v72; // [sp+24h] [bp-54h]@59
  char v73; // [sp+34h] [bp-44h]@21

  _R4 = this;
  Entity::normalTick(this);
  v2 = (Level *)Entity::getLevel(_R4);
  v3 = (unsigned __int64 *)Level::getGameRules(v2);
  v4 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v4)
    && GameRules::hasRule(v3, (int **)&GameRules::ALLOW_MOBS) == 1
    && !GameRules::getBool(v3, (int **)&GameRules::ALLOW_MOBS)
    && !(*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1124))(_R4) )
  {
    (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 44))(_R4);
  }
  if ( Entity::onLadder(_R4, 1) == 1 && Entity::canClimb(_R4) || Entity::isClimbing(_R4) == 1 )
    *((_DWORD *)_R4 + 56) = 0;
  v5 = *((_DWORD *)_R4 + 1062);
  if ( v5 >= 1 )
    v6 = *((_DWORD *)_R4 + 1063);
    v7 = (int *)((char *)_R4 + 4252);
    if ( v6 <= 0 )
    {
      *v7 = 59;
    }
    else
      _VF = __OFSUB__(v6, 1);
      v9 = v6 - 1;
      *v7 = v9;
      if ( (unsigned __int8)((v9 < 0) ^ _VF) | (v9 == 0) )
        *((_DWORD *)_R4 + 1062) = v5 - 1;
  v10 = Entity::getTarget(_R4);
  v11 = v10;
  if ( v10
    && (*(int (**)(void))(*(_DWORD *)v10 + 488))() == 319
    && Abilities::getBool(v11 + 4320, (int **)&Abilities::INVULNERABLE) == 1 )
    (*(void (__fastcall **)(Mob *, _DWORD))(*(_DWORD *)_R4 + 340))(_R4, 0);
  MovementInterpolator::tick((Mob *)((char *)_R4 + 4040), _R4);
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 872))(_R4);
  __asm
    VLDR            S0, [R4,#0x48]
    VLDR            S2, [R4,#0x54]
    VLDR            S4, [R4,#0x50]
    VLDR            S6, [R4,#0x5C]
    VSUB.F32        S16, S0, S2
    VSUB.F32        S18, S4, S6
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = mce::Math::sqrt(_R0, v15);
  _R6 = (mce::Math **)((char *)_R4 + 3412);
    VLDR            S0, =0.05
    VMOV            S20, R0
  _R5 = (int)_R4 + 4020;
    VLDR            S22, [R6]
    VCMPE.F32       S20, S0
  *((_DWORD *)_R4 + 1004) = *((_DWORD *)_R4 + 1005);
  __asm { VMRS            APSR_nzcv, FPSCR }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
      VLDR            S0, =0.0
      VMOV.F32        S20, S0
  else
      VMOV            R0, S18
      VMOV            R1, S16
    v21 = mce::Math::atan2(_R0, v17);
    mce::Degree::Degree((int)&v73, v21);
    _R0 = mce::Degree::asFloat(v22);
      VMOV.F32        S2, #3.0
      VLDR            S4, =-90.0
      VLDR            S6, [R0]
      VMOV.F32        S0, #1.0
      VADD.F32        S22, S6, S4
      VMUL.F32        S20, S20, S2
  __asm { VLDR            S24, =0.3 }
  _R0 = (int)_R4 + 4244;
    VLDR            S2, [R0]
    VCMPE.F32       S2, #0.0
    VLDR            S2, =0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VLDRGT          S22, [R4,#0x7C] }
  if ( !*((_BYTE *)_R4 + 216) )
    __asm { VMOVEQ.F32      S0, S2 }
    VLDR            S2, [R5]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S24
    VADD.F32        S0, S0, S2
    VSTR            S0, [R5]
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 1168))(_R4) == 1 )
    (*(void (**)(void))(**((_DWORD **)_R4 + 1029) + 8))();
      VLDR            S0, [R6]
      VSUB.F32        S0, S22, S0
      VMOV            R0, S0
    _R0 = mce::Math::wrapDegrees(_R0, v25);
      VMOV            S0, R0
      VLDR            S2, [R6]
      VMUL.F32        S0, S0, S24
      VADD.F32        S0, S2, S0
      VSTR            S0, [R6]
      VLDR            S2, [R4,#0x7C]
      VSUB.F32        S0, S2, S0
    _R0 = mce::Math::wrapDegrees(_R0, v30);
      VLDR            S0, =-75.0
      VMOV            S2, R0
      VLDR            S4, =75.0
    v32 = 0;
      VCMPE.F32       S2, S0
      VLDR            S6, =90.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
      VLDR            S8, =-90.0
    v26 = 0.0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
      VCMPE.F32       S2, S6
      __asm { VMOVGT.F32      S0, S4 }
      VCMPE.F32       S2, S8
    v33 = *((_DWORD *)_R4 + 128);
    if ( !(_NF ^ _VF) )
      v32 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _NF ^ _VF )
      LODWORD(v26) = 1;
    _ZF = v33 == 0;
    v35 = LODWORD(v26) | v32;
    if ( v33 )
      _ZF = *(_BYTE *)(v33 + 528) == 0;
    if ( _ZF )
      __asm
      {
        VABS.F32        S2, S0
        VLDR            S4, =50.0
        VCMPE.F32       S2, S4
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VCMPE.F32       S0, #0.0
          VLDR            S4, =-50.0
          VMRS            APSR_nzcv, FPSCR
          VMOV.F32        S6, #0.75
          VADD.F32        S2, S2, S4
          VMOV.F32        S4, #-0.75
          VMUL.F32        S6, S2, S6
          VMUL.F32        S2, S2, S4
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S6, S2 }
        __asm { VADD.F32        S0, S6, S0 }
        VLDR            S2, [R4,#0x7C]
        VSUB.F32        S0, S2, S0
        VMOV            R0, S0
      *_R6 = (mce::Math *)mce::Math::wrapDegrees(_R0, v26);
    __asm { VNEG.F32        S0, S20 }
    if ( v35 )
      __asm { VMOVNE.F32      S20, S0 }
  _R5 = mce::Math::wrapDegrees(*((mce::Math **)_R4 + 30), v26);
    VLDR            S2, [R4,#0x80]
    VMOV            S4, R5
    VLDR            S0, [R4,#0x78]
    VADD.F32        S2, S2, S4
    VSUB.F32        S0, S2, S0
  *((_DWORD *)_R4 + 32) = mce::Math::wrapDegrees(_R0, v39);
  *((_DWORD *)_R4 + 30) = _R5;
  _R5 = mce::Math::wrapDegrees(*((mce::Math **)_R4 + 31), v40);
    VLDR            S2, [R4,#0x84]
    VLDR            S0, [R4,#0x7C]
  *((_DWORD *)_R4 + 33) = mce::Math::wrapDegrees(_R0, v43);
  _R7 = (int)_R4 + 3416;
  *((_DWORD *)_R4 + 31) = _R5;
  _R5 = mce::Math::wrapDegrees(*_R6, v45);
    VLDR            S2, [R7]
    VMOV            S0, R5
    VLDR            S2, [R6]
  *((_DWORD *)_R4 + 854) = mce::Math::wrapDegrees(_R0, v48);
  *_R6 = (mce::Math *)_R5;
  _R6 = (int)_R4 + 3424;
  _R5 = mce::Math::wrapDegrees(*((mce::Math **)_R4 + 855), v50);
  _R0 = (int)_R4 + 3420;
  v55 = mce::Math::wrapDegrees(_R0, v54);
  *((_DWORD *)_R4 + 855) = _R5;
  *((_DWORD *)_R4 + 856) = v55;
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 868))(_R4);
    VCMPE.F32       S18, #0.0
  _R0 = (unsigned int)_R4 + 4024;
    VLDR            S0, [R0]
    VCMPE.F32       S16, #0.0
    VADD.F32        S0, S0, S20
    VSTR            S0, [R0]
  LODWORD(_R0) = 0;
  if ( !_ZF )
    HIDWORD(_R0) = 1;
    LODWORD(_R0) = 1;
  if ( _R0 )
    Mob::frostWalk(_R4);
  v57 = Entity::getStatusFlag((int)_R4, 30);
  v58 = (int *)((char *)_R4 + 4256);
  if ( v57 == 1 )
    v59 = *v58 + 1;
    v59 = 0;
  *v58 = v59;
  v60 = Entity::getEntityData(_R4);
  v61 = (Level *)Entity::getLevel(_R4);
  if ( !Level::isClientSide(v61) && (unsigned int)(unsigned __int16)*((_DWORD *)v60 + 3) <= *((_DWORD *)v60 + 3) >> 16 )
    Entity::getRuntimeID((Entity *)&v65, (int)_R4);
    v67 = 2;
    v68 = 1;
    v69 = 0;
    v66 = &off_26E965C;
    v70 = *(_QWORD *)&v65;
    SynchedEntityData::packDirty((SynchedEntityData *)&v71, (int)v60);
    v62 = (Dimension *)Entity::getDimension(_R4);
    Dimension::sendPacketForEntity(v62, _R4, (const Packet *)&v66, 0);
    v63 = *(_QWORD *)&v71;
    if ( v72 == v71 )
      v72 = v71;
      v64 = v71;
      do
        if ( *(_DWORD *)v64 )
          (*(void (**)(void))(**(_DWORD **)v64 + 4))();
        *(_DWORD *)v64 = 0;
        v64 += 4;
      while ( HIDWORD(v63) != v64 );
      HIDWORD(v63) = v71;
      v72 = v63;
      if ( v71 != (_DWORD)v63 )
        do
          if ( *(_DWORD *)HIDWORD(v63) )
            (*(void (**)(void))(**(_DWORD **)HIDWORD(v63) + 4))();
          *(_DWORD *)HIDWORD(v63) = 0;
          HIDWORD(v63) += 4;
        while ( (_DWORD)v63 != HIDWORD(v63) );
        LODWORD(v63) = v71;
    if ( (_DWORD)v63 )
      operator delete((void *)v63);
}


void __fastcall Mob::getAllArmorID(Mob *this, int a2)
{
  Mob *v2; // r9@1
  int v3; // r8@1
  char *v4; // r10@1
  int v5; // r4@1
  int v6; // r6@1
  char *v7; // r11@1
  int v8; // r7@2
  bool v9; // zf@2
  signed int v10; // r0@7
  signed int v11; // r5@7
  char *v12; // r7@9
  unsigned int v13; // r1@9
  unsigned int v14; // r0@11
  unsigned int v15; // r4@11

  v2 = this;
  v3 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v4 = (char *)operator new(0x10u);
  v5 = (int)(v4 + 16);
  v6 = 0;
  v7 = v4;
  *(_DWORD *)v2 = v4;
  *((_DWORD *)v2 + 1) = v4;
  *((_DWORD *)v2 + 2) = v4 + 16;
  do
  {
    v8 = v3 + v6;
    v9 = *(_BYTE *)(v3 + v6 + 3679) == 0;
    if ( *(_BYTE *)(v3 + v6 + 3679) )
      v9 = *(_DWORD *)(v8 + 3664) == 0;
    if ( !v9 && !ItemInstance::isNull((ItemInstance *)(v8 + 3664)) && *(_BYTE *)(v8 + 3678) )
    {
      v10 = ItemInstance::getId((ItemInstance *)(v8 + 3664));
      v11 = v10;
      if ( v7 == (char *)v5 )
      {
        v12 = 0;
        v13 = (v7 - v4) >> 2;
        if ( !v13 )
          v13 = 1;
        v14 = v13 + ((v7 - v4) >> 2);
        v15 = v13 + ((v7 - v4) >> 2);
        if ( 0 != v14 >> 30 )
          v15 = 0x3FFFFFFF;
        if ( v14 < v13 )
        if ( v15 )
        {
          if ( v15 >= 0x40000000 )
            sub_21E57F4();
          v12 = (char *)operator new(4 * v15);
        }
        *(_DWORD *)&v12[v7 - v4] = v11;
        if ( (v7 - v4) >> 2 )
          _aeabi_memmove4(v12, v4);
        v7 = &v12[v7 - v4 + 4];
        if ( v4 )
          operator delete(v4);
        v5 = (int)&v12[4 * v15];
        v4 = v12;
        *(_DWORD *)v2 = v12;
        *((_DWORD *)v2 + 1) = v7;
        *((_DWORD *)v2 + 2) = v5;
      }
      else
        *(_DWORD *)v7 = v10;
        v7 += 4;
    }
    v6 += 72;
  }
  while ( v6 != 288 );
}


int __fastcall Mob::lookAt(Mob *this, Entity *a2, float a3, float a4)
{
  float v11; // r6@1
  float v12; // r8@1
  float v13; // r1@2
  float v25; // r3@4
  int v26; // r0@4
  float v28; // r3@4
  int result; // r0@4
  char v30; // [sp+4h] [bp-5Ch]@3
  char v32; // [sp+10h] [bp-50h]@2
  char v34; // [sp+1Ch] [bp-44h]@2

  _R7 = a2;
  _R4 = this;
  __asm { VLDR            S0, [R4,#0x48] }
  _R0 = a2;
  __asm
  {
    VLDR            S4, [R7,#0x48]
    VLDR            S2, [R4,#0x50]
  }
  v11 = a4;
  __asm { VLDR            S6, [R7,#0x50] }
  v12 = a3;
    VSUB.F32        S16, S4, S0
    VSUB.F32        S18, S6, S2
  if ( Entity::hasCategory((int)a2, 2) == 1 )
    Entity::getAttachPos((AABB *)&v34, (int)_R4, 3, 0);
    __asm { VLDR            S20, [SP,#0x60+var_40] }
    Entity::getAttachPos((AABB *)&v32, (int)_R7, 3, 0);
    __asm
    {
      VLDR            S0, [SP,#0x60+var_4C]
      VSUB.F32        S20, S20, S0
    }
  else
      VLDR            S20, [R7,#0x10C]
      VLDR            S22, [R7,#0x118]
    Entity::getAttachPos((AABB *)&v30, (int)_R4, 3, 0);
      VMOV.F32        S0, #0.5
      VADD.F32        S2, S22, S20
      VMUL.F32        S0, S2, S0
      VLDR            S2, [SP,#0x60+var_58]
      VSUB.F32        S20, S0, S2
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R0 = mce::Math::sqrt(_R0, v13);
    VCVT.F64.F32    D0, S18
    VCVT.F64.F32    D1, S16
    VMOV            R7, R1, D0
    VMOV            R2, R3, D1
    VMOV            S16, R0
  LODWORD(_R0) = _R7;
  _R0 = atan2(_R0, _R2);
  __asm { VCVT.F64.F32    D1, S16 }
  _R7 = LODWORD(_R0);
    VCVT.F64.F32    D0, S20
    VMOV            R0, R1, D0
  _R0 = COERCE_UNSIGNED_INT64(atan2(_R0, _R2));
    VMOV            D1, R0, R1
    VMOV            D2, R7, R5
  _R2 = &mce::Math::RADDEG;
    VLDR            S0, [R2]
    VCVT.F64.F32    D0, S0
    VMUL.F64        D1, D1, D0
    VCVT.F32.F64    S2, D1
    VMOV            R1, S2
    VLDR            S2, =-90.0
    VMUL.F64        D0, D0, D2
    VCVT.F32.F64    S0, D0
    VADD.F32        S16, S0, S2
  v26 = mce::Math::clampRotate(*((mce::Math **)_R4 + 30), _R1, v11, v25);
  __asm { VMOV            R1, S16 }
  *((_DWORD *)_R4 + 30) = v26 ^ 0x80000000;
  result = mce::Math::clampRotate(*((mce::Math **)_R4 + 31), _R1, v12, v28);
  *((_DWORD *)_R4 + 31) = result;
  return result;
}


void __fastcall Mob::hurtArmor(Mob *this, int a2)
{
  Mob *v2; // r4@1
  signed int v3; // r5@1
  const ItemInstance *v4; // r1@3
  const ItemInstance *v5; // r1@6
  const ItemInstance *v6; // r1@9
  const ItemInstance *v7; // r1@12

  v2 = this;
  v3 = 1;
  if ( a2 / 4 > 1 )
    v3 = a2 / 4;
  if ( ItemInstance::isArmorItem((Mob *)((char *)this + 3664)) == 1
    && ArmorItem::isDamageable((Mob *)((char *)v2 + 3664), v4) == 1 )
  {
    ItemInstance::hurtAndBreak((Mob *)((char *)v2 + 3664), v3, v2);
  }
  if ( ItemInstance::isArmorItem((Mob *)((char *)v2 + 3736)) == 1
    && ArmorItem::isDamageable((Mob *)((char *)v2 + 3736), v5) == 1 )
    ItemInstance::hurtAndBreak((Mob *)((char *)v2 + 3736), v3, v2);
  if ( ItemInstance::isArmorItem((Mob *)((char *)v2 + 3808)) == 1
    && ArmorItem::isDamageable((Mob *)((char *)v2 + 3808), v6) == 1 )
    ItemInstance::hurtAndBreak((Mob *)((char *)v2 + 3808), v3, v2);
  if ( ItemInstance::isArmorItem((Mob *)((char *)v2 + 3880)) == 1
    && ArmorItem::isDamageable((Mob *)((char *)v2 + 3880), v7) == 1 )
    j_j_j__ZN12ItemInstance12hurtAndBreakEiP6Entity_0((Mob *)((char *)v2 + 3880), v3, v2);
}


int __fastcall Mob::_applyRidingRotationLimits(Mob *this)
{
  int result; // r0@1
  float v3; // r1@2

  _R4 = this;
  result = *((_DWORD *)this + 128);
  if ( result )
  {
    result = Entity::enforceRiderRotationLimit(_R4);
    if ( result == 1 )
    {
      __asm
      {
        VLDR            S0, =90.0
        VLDR            S2, [R4,#0x7C]
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      _R0 = mce::Math::wrapDegrees(_R0, v3);
      __asm { VMOV            S0, R0 }
      _R0 = (int)_R4 + 4036;
        VLDR            S2, [R0]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        __asm
        {
          VNEG.F32        S4, S2
          VCMPE.F32       S0, S4
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !(_NF ^ _VF) )
          goto LABEL_9;
          VNEG.F32        S0, S0
          VSUB.F32        S0, S0, S2
      else
        __asm { VSUB.F32        S0, S2, S0 }
        VADD.F32        S0, S0, S2
        VSTR            S0, [R4,#0x7C]
LABEL_9:
      result = *((_DWORD *)_R4 + 1008);
      *((_DWORD *)_R4 + 853) = result;
      return result;
    }
  }
  return result;
}


int __fastcall Mob::loadMainhand(int result, const ListTag *a2)
{
  int v2; // r4@1
  int v3; // r0@2
  const CompoundTag *v4; // r5@2

  v2 = result;
  if ( a2 )
  {
    v3 = ListTag::get(a2, 0);
    v4 = (const CompoundTag *)v3;
    result = (*(int (**)(void))(*(_DWORD *)v3 + 24))();
    if ( result == 10 )
      result = j_j_j__ZN12ItemInstance4loadERK11CompoundTag((ItemInstance *)(v2 + 3512), v4);
  }
  return result;
}


unsigned int __fastcall Mob::removeEffectParticles(Mob *this)
{
  Mob *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int v3; // r0@1
  unsigned int v4; // r1@1
  unsigned int v5; // r1@3
  unsigned int v6; // r0@3
  unsigned int result; // r0@8
  unsigned int v8; // r1@8
  unsigned int v9; // r1@10
  unsigned int v10; // r0@10

  v1 = this;
  v2 = (Mob *)((char *)this + 176);
  v3 = SynchedEntityData::_get((Mob *)((char *)this + 176), 9);
  v4 = *(_DWORD *)(v3 + 4);
  if ( !(_BYTE)v4 && *(_BYTE *)(v3 + 9) )
  {
    v5 = v4 >> 16;
    *(_WORD *)(v3 + 8) = 1;
    v6 = *((_WORD *)v1 + 94);
    if ( v6 >= v5 )
      LOWORD(v6) = v5;
    *((_WORD *)v1 + 94) = v6;
    if ( *((_WORD *)v1 + 95) > v5 )
      LOWORD(v5) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v5;
  }
  result = SynchedEntityData::_get(v2, 8);
  v8 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v8 == 2 && *(_DWORD *)(result + 12) )
    v9 = v8 >> 16;
    *(_DWORD *)(result + 12) = 0;
    *(_BYTE *)(result + 8) = 1;
    v10 = *((_WORD *)v1 + 94);
    if ( v10 >= v9 )
      LOWORD(v10) = v9;
    *((_WORD *)v1 + 94) = v10;
    result = *((_WORD *)v1 + 95);
    if ( result > v9 )
      LOWORD(v9) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v9;
  return result;
}


int __fastcall Mob::saveArmor(Mob *this, int a2)
{
  Mob *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int v5; // r0@1
  int v6; // r0@5
  int v7; // r0@9
  int v8; // r0@13
  int result; // r0@15
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  ItemInstance::save((ItemInstance *)&v10, (ItemInstance *)(v3 + 3664));
  v5 = v10;
  v10 = 0;
  v11 = v5;
  ListTag::add((int)v4, &v11);
  if ( v11 )
    (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  v11 = 0;
  if ( v10 )
    (*(void (**)(void))(*(_DWORD *)v10 + 4))();
  ItemInstance::save((ItemInstance *)&v10, (ItemInstance *)(v3 + 3736));
  v6 = v10;
  v11 = v6;
  ItemInstance::save((ItemInstance *)&v10, (ItemInstance *)(v3 + 3808));
  v7 = v10;
  v11 = v7;
  ItemInstance::save((ItemInstance *)&v10, (ItemInstance *)(v3 + 3880));
  v8 = v10;
  v11 = v8;
  result = v10;
    result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
  return result;
}


void __fastcall Mob::resetAttributes(Mob *this)
{
  Mob::resetAttributes(this);
}


int __fastcall Mob::addEffect(Mob *this, const MobEffectInstance *a2)
{
  Mob *v2; // r4@1
  const MobEffectInstance *v3; // r5@1
  int result; // r0@1
  int v5; // r6@2
  int v6; // r7@2
  int v7; // r0@2
  int v8; // r2@2
  unsigned int v9; // r3@2
  char *v10; // r1@2
  signed int v11; // r0@2
  Mob *v12; // r6@2
  signed int v13; // r7@2
  unsigned int v14; // r0@2
  unsigned int v15; // r3@4
  int v16; // r0@8
  signed int v17; // r7@8
  int v18; // r0@8
  int (__fastcall *v19)(Mob *, int); // r6@9
  int v20; // r3@10
  int v21; // r7@10
  int v22; // r0@10
  __int16 v23; // r2@10
  int v24; // r0@11

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(*(_DWORD *)this + 1068))();
  if ( result == 1 )
  {
    v5 = *((_DWORD *)v2 + 993);
    v6 = *((_DWORD *)v2 + 994);
    v7 = MobEffectInstance::getId(v3);
    v8 = *((_DWORD *)v2 + 993);
    v9 = v7 + 1;
    v10 = (char *)*((_DWORD *)v2 + 994);
    v11 = v6 - v5;
    v12 = (Mob *)((char *)v2 + 3972);
    v13 = (signed int)&v10[-v8];
    v14 = v11 >> 4;
    if ( v14 < v9 )
      v14 = v9;
    v15 = v13 >> 4;
    if ( v14 <= v13 >> 4 )
    {
      if ( v14 < v15 )
        *((_DWORD *)v2 + 994) = v8 + 16 * v14;
    }
    else
      std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_fill_insert(
        (int)v2 + 3972,
        v10,
        v14 - v15,
        (int)&MobEffectInstance::NO_EFFECT);
    v16 = MobEffectInstance::getId(v3);
    v17 = MobEffectInstance::operator!=((int *)(*(_DWORD *)v12 + 16 * v16), &MobEffectInstance::NO_EFFECT);
    v18 = *(_DWORD *)v12 + 16 * MobEffectInstance::getId(v3);
    if ( v17 == 1 )
      MobEffectInstance::update((MobEffectInstance *)v18, v3);
      v19 = *(int (__fastcall **)(Mob *, int))(*(_DWORD *)v2 + 1180);
      v20 = *((_DWORD *)v3 + 1);
      v21 = *((_DWORD *)v3 + 2);
      *(_DWORD *)v18 = *(_DWORD *)v3;
      *(_DWORD *)(v18 + 4) = v20;
      *(_DWORD *)(v18 + 8) = v21;
      v22 = v18 + 12;
      v23 = *((_WORD *)v3 + 6);
      *(_BYTE *)(v22 + 2) = *((_BYTE *)v3 + 14);
      *(_WORD *)v22 = v23;
      v19 = *(int (__fastcall **)(Mob *, int))(*(_DWORD *)v2 + 1176);
    v24 = MobEffectInstance::getId(v3);
    result = v19(v2, *((_DWORD *)v2 + 993) + 16 * v24);
  }
  return result;
}


int __fastcall Mob::hurtEffects(Mob *this, const EntityDamageSource *a2, int a3, int a4, int a5)
{
  int v5; // r10@1
  int v6; // r9@1
  const EntityDamageSource *v7; // r4@1
  Level *v9; // r0@1
  int result; // r0@2
  signed int v11; // r0@8
  AttributeInstance *v12; // r0@10
  signed int v17; // r11@10
  signed int v18; // r0@10
  AttributeInstance *v19; // r0@15
  int v21; // r6@17
  int v22; // r1@17
  int v23; // r7@17
  int v24; // r6@17
  int v25; // r1@17
  Entity *v26; // r6@17
  ProjectileComponent *v28; // r0@24
  ProjectileComponent *v29; // r0@26
  void (__fastcall *v30)(Mob *, int); // r6@27
  Level *v31; // r0@27
  unsigned int v32; // r0@27
  int v33; // r1@27
  int v34; // r0@31
  Random *v35; // r6@31
  int v36; // r7@32
  int v37; // r1@32
  void (__fastcall *v47)(Mob *, int); // r2@40
  AttributeInstance *v49; // r0@46
  signed int v52; // [sp+Ch] [bp-74h]@14
  unsigned int v53; // [sp+10h] [bp-70h]@32
  unsigned int v54; // [sp+14h] [bp-6Ch]@32
  unsigned int v55; // [sp+18h] [bp-68h]@17
  unsigned int v56; // [sp+1Ch] [bp-64h]@17
  unsigned int v57; // [sp+20h] [bp-60h]@17
  unsigned int v58; // [sp+24h] [bp-5Ch]@17

  v5 = a4;
  v6 = a3;
  v7 = a2;
  _R5 = this;
  v9 = (Level *)Entity::getLevel(this);
  if ( Level::isClientSide(v9) )
    return 0;
  if ( Entity::hasCategory((int)_R5, 1) == 1 && Abilities::getBool((int)_R5 + 4320, (int **)&Abilities::INVULNERABLE) )
  if ( (*(int (__fastcall **)(Mob *, const EntityDamageSource *))(*(_DWORD *)_R5 + 404))(_R5, v7) )
  v11 = *((_DWORD *)_R5 + 105);
  if ( v11 == 20 )
  {
    if ( Entity::getChainedDamageEffects(_R5) == 1 )
    {
      *((_DWORD *)_R5 + 1018) = v6;
      v12 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R5 + 1004))(
                                   _R5,
                                   &SharedAttributes::HEALTH);
      _R0 = AttributeInstance::getCurrentValue(v12);
      __asm { VMOV            S0, R0 }
      v17 = 0;
      __asm
      {
        VCVTR.S32.F32   S0, S0
        VSTR            S0, [R0]
      }
      v18 = 1;
LABEL_16:
      v52 = v18;
      goto LABEL_17;
    }
    v11 = *((_DWORD *)_R5 + 105);
  }
  if ( v11 < 11 )
    *((_DWORD *)_R5 + 1018) = v6;
    v19 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R5 + 1004))(
                                 _R5,
                                 &SharedAttributes::HEALTH);
    _R0 = AttributeInstance::getCurrentValue(v19);
    __asm { VMOV            S0, R0 }
    v17 = 1;
    __asm
      VCVTR.S32.F32   S0, S0
      VSTR            S0, [R0]
    *((_DWORD *)_R5 + 105) = 20;
    *((_DWORD *)_R5 + 858) = 10;
    *((_DWORD *)_R5 + 859) = 10;
    v18 = 0;
    goto LABEL_16;
  if ( *((_DWORD *)_R5 + 1018) >= v6 )
  *((_DWORD *)_R5 + 1018) = v6;
  v52 = 0;
  v17 = 0;
LABEL_17:
  v21 = Entity::getLevel(_R5);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v7 + 32))(&v57, v7);
  v23 = Level::fetchEntity(v21, v22, v57, v58, 0);
  v24 = Entity::getLevel(_R5);
  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v7 + 52))(&v55, v7);
  v26 = (Entity *)Level::fetchEntity(v24, v25, v55, v56, 0);
  if ( v26 )
    _ZF = v23 == 0;
    if ( v23 )
      _ZF = (a5 ^ 1) == 1;
    if ( !_ZF
      || (*(int (__fastcall **)(Entity *))(*(_DWORD *)v26 + 320))(v26)
      || Entity::getProjectileComponent(v26)
      && (v28 = (ProjectileComponent *)Entity::getProjectileComponent(v26), ProjectileComponent::getCatchFire(v28) == 1) )
      if ( !Entity::getProjectileComponent(v26)
        || (v29 = (ProjectileComponent *)Entity::getProjectileComponent(v26), ProjectileComponent::getCatchFire(v29) == 1) )
        v30 = *(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R5 + 504);
        v31 = (Level *)Entity::getLevel(_R5);
        v32 = Level::getDifficulty(v31);
        v33 = 0;
        if ( v32 < 4 )
          v33 = 2 * v32;
        v30(_R5, v33);
  *((_DWORD *)_R5 + 860) = 0;
  if ( v17 != 1 )
    goto LABEL_46;
  v34 = Entity::getLevel(_R5);
  Level::broadcastEntityEvent(v34, (int)_R5, 2, 0);
  (*(void (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 700))(_R5);
  v35 = (Random *)ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v7 + 8))(v7) == 1 )
    v36 = Entity::getLevel(_R5);
    (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v7 + 32))(&v53, v7);
    _R8 = Level::fetchEntity(v36, v37, v53, v54, 0);
    if ( _R8 )
      if ( v5 == 1 )
        __asm
        {
          VLDR            S0, [R5,#0x48]
          VLDR            S4, [R8,#0x48]
          VLDR            S2, [R5,#0x50]
          VLDR            S6, [R8,#0x50]
          VSUB.F32        S0, S4, S0
          VLDR            D8, =0.0001
          VSUB.F32        S22, S6, S2
          VMUL.F32        S2, S0, S0
          VMUL.F32        S4, S22, S22
          VADD.F32        S2, S4, S2
          VCVT.F64.F32    D1, S2
          VCMPE.F64       D1, D8
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          __asm
          {
            VLDR            D9, =2.32830644e-10
            VLDR            S20, =0.01
          }
          do
            _R0 = Random::_genRandInt32(v35);
            __asm
            {
              VMOV            S0, R0
              VCVT.F64.U32    D11, S0
            }
              VCVT.F64.U32    D12, S0
              VCVT.F64.U32    D13, S0
              VMUL.F64        D1, D11, D9
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D9
              VMUL.F64        D2, D12, D9
              VMUL.F64        D3, D13, D9
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S4, D2
              VCVT.F32.F64    S6, D3
              VCVT.F32.F64    S0, D0
              VSUB.F32        S2, S2, S4
              VSUB.F32        S4, S6, S0
              VMUL.F32        S0, S2, S20
              VMUL.F32        S22, S4, S20
              VMUL.F32        S2, S0, S0
              VMUL.F32        S4, S22, S22
              VADD.F32        S2, S4, S2
              VCVT.F64.F32    D1, S2
              VCMPE.F64       D1, D8
              VMRS            APSR_nzcv, FPSCR
          while ( _NF ^ _VF );
          VMOV            R6, S0
          VMOV            R0, S22
        _R0 = atan2f(_R0, _R6);
        __asm { VMOV            S2, R0 }
        _R1 = &mce::Math::RADDEG;
          VLDR            S0, [R1]
          VMUL.F32        S0, S0, S2
          VLDR            S2, [R5,#0x7C]
          VSUB.F32        S0, S0, S2
          VSTR            S0, [R11]
          VSTR            S22, [SP,#0x80+var_80]
        (*(void (__fastcall **)(Mob *, int, int, _DWORD))(*(_DWORD *)_R5 + 768))(_R5, _R8, v6, LODWORD(_R6));
      if ( Entity::hasCategory(_R8, 1) == 1 )
        v47 = *(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R5 + 956);
LABEL_45:
        v47(_R5, _R8);
        goto LABEL_46;
      if ( Entity::hasCategory(_R8, 2) == 1 )
        v47 = *(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R5 + 948);
        goto LABEL_45;
  else
    _R0 = Random::_genRandInt32(v35);
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VADD.F32        S0, S0, S0
      VLDR            S2, =180.0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [R11]
LABEL_46:
  v49 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)_R5 + 1004))(
                               _R5,
                               &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getCurrentValue(v49);
  __asm
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  if ( _R0 > 0 || Mob::checkTotemDeathProtection(_R5, v7) )
    result = v52 | v17;
    (*(void (__fastcall **)(Mob *, const EntityDamageSource *))(*(_DWORD *)_R5 + 772))(_R5, v7);
    result = 1;
  return result;
}


Mob *__fastcall Mob::updateWalkAnim(Mob *this)
{
  Mob *result; // r0@2
  int v8; // r0@3
  float v9; // r1@3
  int v14; // r0@9
  float v17; // r1@9

  _R4 = this;
  _R6 = (char *)this + 3484;
  *((_DWORD *)this + 870) = *((_DWORD *)this + 871);
  if ( Entity::isRiding(this) )
  {
    result = (Mob *)((char *)_R4 + 3480);
    *((_DWORD *)_R4 + 870) = 0;
    *(_DWORD *)_R6 = 0;
  }
  else
    _R1 = (int)_R4 + 3984;
    __asm { VLDR            S16, [R1] }
    v8 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 320))(_R4);
    _ZF = v8 == 0;
    if ( !v8 )
      _ZF = *((_DWORD *)_R4 + 858) == 0;
    if ( !_ZF )
    {
      __asm
      {
        VMOV.F32        S0, #1.5
        VMUL.F32        S16, S16, S0
      }
    }
    if ( !*((_BYTE *)_R4 + 216) )
        VLDR            S0, [R4,#0x70]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
    _R0 = (int)_R4 + 3416;
    __asm
      VLDR            S18, [R4,#0x48]
      VLDR            S20, [R4,#0x54]
      VLDR            S0, [R0]
    _R0 = (int)_R4 + 3412;
      VLDR            S22, [R4,#0x50]
      VLDR            S2, [R0]
      VLDR            S24, [R4,#0x5C]
      VSUB.F32        S0, S2, S0
      VMOV            R0, S0
    v14 = mce::Math::wrapDegrees(_R0, v9);
    __asm { VSUB.F32        S0, S18, S20 }
    _R5 = v14;
      VSUB.F32        S2, S22, S24
      VMUL.F32        S0, S0, S0
      VMUL.F32        S2, S2, S2
      VADD.F32        S0, S2, S0
    _R0 = mce::Math::sqrt(_R0, v17);
      VMOV.F32        S0, #4.0
      VLDR            S4, =0.35
      VMOV            S2, R0
      VMUL.F32        S0, S2, S0
      VMUL.F32        S2, S16, S4
      VCMPE.F32       S0, #0.0
      __asm { VMOVNE.F32      S16, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( _ZF )
        VMOV            S0, R5
        VLDR            S2, =0.05
        VMOV.F32        S4, #0.5
        VABS.F32        S0, S0
        VMUL.F32        S0, S0, S2
        VCMPE.F32       S0, S4
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S4 }
      VMOV.F32        S2, #1.0
      VLDR            S4, =0.4
    result = (Mob *)((char *)_R4 + 3488);
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
      VLDR            S2, [R6]
      VMUL.F32        S0, S0, S16
      VSUB.F32        S0, S0, S2
      VMUL.F32        S0, S0, S4
      VADD.F32        S0, S0, S2
      VSTR            S0, [R6]
      VSTR            S0, [R0]
  return result;
}


signed int __fastcall Mob::checkSpawnRules(Mob *this, bool a2)
{
  Entity *v2; // r4@1
  BlockSource *v3; // r0@1
  int v4; // r2@1
  BlockSource *v5; // r5@1
  int v6; // r1@1
  const BlockPos *v7; // r0@4
  signed int result; // r0@5
  int (__fastcall *v9)(Entity *, char *); // r6@6
  char v15; // [sp+4h] [bp-44h]@6
  char v16; // [sp+10h] [bp-38h]@4
  int v17; // [sp+14h] [bp-34h]@4
  int v18; // [sp+18h] [bp-30h]@4
  int v19; // [sp+1Ch] [bp-2Ch]@1
  int v20; // [sp+20h] [bp-28h]@1
  int v21; // [sp+24h] [bp-24h]@1
  unsigned __int8 v22; // [sp+28h] [bp-20h]@4
  int v23; // [sp+2Ch] [bp-1Ch]@4
  int v24; // [sp+30h] [bp-18h]@4
  int v25; // [sp+34h] [bp-14h]@4

  v2 = this;
  v3 = (BlockSource *)Entity::getRegion(this);
  v4 = *((_DWORD *)v2 + 67);
  v5 = v3;
  v6 = *((_DWORD *)v2 + 20);
  v19 = *((_DWORD *)v2 + 18);
  v20 = v4;
  v21 = v6;
  if ( BlockSource::containsAnySolidBlocking(v3, (Entity *)((char *)v2 + 264))
    || BlockSource::containsAnyLiquid(v5, (Entity *)((char *)v2 + 264))
    || !Entity::getStatusFlag((int)v2, 47)
    && (BlockPos::BlockPos((int)&v16, (int)&v19),
        v7 = (const BlockPos *)Entity::getRegion(v2),
        v23 = *(_DWORD *)&v16,
        v24 = v17 - 1,
        v25 = v18,
        BlockSource::getBlockID((BlockSource *)&v22, v7, (int)&v23),
        v22 == *(_BYTE *)(Block::mMagmaBlock + 4)) )
  {
    result = 0;
  }
  else
    v9 = *(int (__fastcall **)(Entity *, char *))(*(_DWORD *)v2 + 1120);
    BlockPos::BlockPos((int)&v15, (int)&v19);
    _R0 = v9(v2, &v15);
    __asm { VMOV            S0, R0 }
    __asm
    {
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      result = 1;
  return result;
}


int __fastcall Mob::getItemUseStartupProgress(Mob *this)
{
  return 0;
}


int __fastcall Mob::loadOffhand(int result, const ListTag *a2)
{
  int v2; // r4@1
  int v3; // r0@2
  const CompoundTag *v4; // r5@2

  v2 = result;
  if ( a2 )
  {
    v3 = ListTag::get(a2, 0);
    v4 = (const CompoundTag *)v3;
    result = (*(int (**)(void))(*(_DWORD *)v3 + 24))();
    if ( result == 10 )
      result = j_j_j__ZN12ItemInstance4loadERK11CompoundTag((ItemInstance *)(v2 + 3584), v4);
  }
  return result;
}


int __fastcall Mob::getItemUseDuration(Mob *this)
{
  return 0;
}


int __fastcall Mob::getMaxHealth(Mob *this)
{
  AttributeInstance *v1; // r0@1
  int result; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getMaxValue(v1);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Mob::canBeAffected(Mob *this, const MobEffectInstance *a2)
{
  Mob *v2; // r5@1
  MobEffectInstance *v3; // r6@1
  signed int v4; // r5@2
  void *v5; // r0@2
  int v6; // r5@4
  signed int v7; // r4@4
  unsigned int *v9; // r2@11
  signed int v10; // r1@13
  int v11; // [sp+4h] [bp-1Ch]@2

  v2 = this;
  v3 = a2;
  if ( (*(int (**)(void))(*(_DWORD *)this + 316))() == 1 )
  {
    sub_21E94B4((void **)&v11, "undead");
    v4 = Entity::hasFamily((int)v2, (int)&v11);
    v5 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
    if ( v4 == 1 )
      v6 = MobEffectInstance::getId(v3);
      v7 = 0;
      if ( v6 != MobEffect::getId((MobEffect *)MobEffect::REGENERATION)
        && v6 != MobEffect::getId((MobEffect *)MobEffect::POISON) )
        v7 = 1;
    else
      v7 = 1;
  }
  else
    v7 = 0;
  return v7;
}


int __fastcall Mob::hasTotemEquipped(Mob *this)
{
  ItemInstance *v1; // r0@1

  v1 = (ItemInstance *)(*(int (**)(void))(*(_DWORD *)this + 1104))();
  return ItemInstance::isNull(v1) ^ 1;
}


int __fastcall Mob::getEquipmentCount(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r5@1

  v1 = this;
  v2 = ItemInstance::isNull((Mob *)((char *)this + 3664)) ^ 1;
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3736)) )
    ++v2;
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3808)) )
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3880)) )
  return v2;
}


int __fastcall Mob::setYHeadRot(int result, float a2)
{
  *(float *)(result + 3420) = a2;
  return result;
}


unsigned int __fastcall Mob::tickEffects(Mob *this)
{
  int v2; // r0@1
  signed int v3; // r1@1
  int v4; // r9@2
  int v5; // r7@2
  int v6; // r5@2
  int v7; // r0@5
  int v8; // r3@7
  int v9; // r6@7
  int v10; // r0@7
  __int16 v11; // r2@7
  Level *v12; // r0@10
  int v13; // r9@13
  unsigned int result; // r0@13
  int *v15; // r7@13
  signed int v16; // r8@13
  int *v17; // r5@13
  int v18; // r6@18
  unsigned int v19; // r0@18
  unsigned int v20; // r5@19
  unsigned int v26; // r0@29
  int v29; // r0@29
  int v30; // r1@29
  float v31; // [sp+Ch] [bp-64h]@31

  _R4 = this;
  v2 = *((_DWORD *)this + 993);
  v3 = *((_DWORD *)_R4 + 994) - v2;
  if ( v3 >> 4 )
  {
    v4 = (v3 >> 4) - 1;
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      if ( !MobEffectInstance::tick((MobEffectInstance *)(v2 + v5), _R4) )
      {
        v7 = *((_DWORD *)_R4 + 993);
        if ( (*((_DWORD *)_R4 + 994) - v7) >> 4 > v6
          && MobEffectInstance::operator!=((int *)(v7 + v5), &MobEffectInstance::NO_EFFECT) == 1 )
        {
          (*(void (__fastcall **)(Mob *, int))(*(_DWORD *)_R4 + 1184))(_R4, *((_DWORD *)_R4 + 993) + v5);
          v8 = unk_27FB704;
          v9 = unk_27FB708;
          v10 = *((_DWORD *)_R4 + 993) + v5;
          *(_DWORD *)v10 = MobEffectInstance::NO_EFFECT;
          *(_DWORD *)(v10 + 4) = v8;
          *(_DWORD *)(v10 + 8) = v9;
          v10 += 12;
          v11 = unk_27FB70C;
          *(_BYTE *)(v10 + 2) = byte_27FB70E[0];
          *(_WORD *)v10 = v11;
        }
      }
      if ( v4 == v6 )
        break;
      ++v6;
      v2 = *((_DWORD *)_R4 + 993);
      v5 += 16;
    }
  }
  if ( *((_BYTE *)_R4 + 4181) )
    v12 = (Level *)Entity::getLevel(_R4);
    if ( !Level::isClientSide(v12) )
      Mob::updateInvisibilityStatus(_R4);
    *((_BYTE *)_R4 + 4181) = 0;
  v13 = SynchedEntityData::getInt((Mob *)((char *)_R4 + 176), 8);
  result = SynchedEntityData::getInt8((Mob *)((char *)_R4 + 176), 9);
  v15 = (int *)*((_DWORD *)_R4 + 993);
  v16 = result;
  v17 = (int *)*((_DWORD *)_R4 + 994);
  if ( v15 == v17 )
LABEL_17:
    if ( !v13 )
      return result;
  else
      result = MobEffectInstance::operator!=(v15, &MobEffectInstance::NO_EFFECT);
      if ( result == 1 )
        result = MobEffectInstance::isEffectVisible((MobEffectInstance *)v15);
        if ( result )
          break;
      v15 += 4;
      if ( v17 == v15 )
        goto LABEL_17;
  v18 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R4 + 172))(_R4);
  v19 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
  if ( v18 )
    v20 = 0;
    result = v19 % 0xF;
    if ( !result )
      v20 = 1;
    result = v19 & 0x8000000;
    v20 = result >> 27;
  if ( v16 < 1 )
    if ( v20 != 1 )
    goto LABEL_29;
  _ZF = Random::_genRandInt32((Mob *)((char *)_R4 + 552)) % 5 == 0;
  result = 0;
  if ( _ZF )
    result = 1;
  if ( v20 & result )
LABEL_29:
    __asm { VLDR            S16, [R4,#0x48] }
    _R6 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
    __asm
      VLDR            S18, [R4,#0x4C]
      VLDR            S20, [R4,#0x130]
    v26 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
    __asm { VMOV            S0, R6 }
    _R5 = v26;
      VLDR            S22, [R4,#0x50]
      VLDR            S24, [R4,#0x134]
      VLDR            S26, [R4,#0x13C]
      VCVT.F64.U32    D14, S0
    _R0 = Random::_genRandInt32((Mob *)((char *)_R4 + 552));
      VMOV            S2, R0
      VLDR            D0, =2.32830644e-10
      VMOV            S4, R5
      VCVT.F64.U32    D1, S2
      VMUL.F64        D3, D14, D0
      VCVT.F64.U32    D2, S4
      VMUL.F64        D1, D1, D0
      VMUL.F64        D0, D2, D0
      VMOV.F32        S4, #-0.5
      VCVT.F32.F64    S6, D3
      VCVT.F32.F64    S2, D1
      VADD.F32        S6, S6, S4
      VCVT.F32.F64    S0, D0
      VADD.F32        S2, S2, S4
      VMUL.F32        S4, S6, S20
      VLDR            S6, [R4,#0x130]
      VSUB.F32        S8, S18, S26
      VMUL.F32        S0, S0, S24
      VMUL.F32        S2, S2, S6
      VADD.F32        S16, S4, S16
      VADD.F32        S18, S8, S0
      VADD.F32        S20, S2, S22
    v29 = Entity::getLevel(_R4);
      VSTR            S16, [SP,#0x70+var_64]
      VSTR            S18, [SP,#0x70+var_60]
      VSTR            S20, [SP,#0x70+var_5C]
    v30 = 26;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v30 = 27;
    result = Level::addParticle(v29, v30, (int)&v31);
  return result;
}


int __fastcall Mob::saveMainhand(Mob *this, int a2)
{
  Mob *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  int v5; // r0@1
  int result; // r0@3
  int v7; // [sp+4h] [bp-1Ch]@1
  int v8; // [sp+8h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  ItemInstance::save((ItemInstance *)&v7, (ItemInstance *)(v3 + 3512));
  v5 = v7;
  v7 = 0;
  v8 = v5;
  ListTag::add((int)v4, &v8);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  v8 = 0;
  result = v7;
  if ( v7 )
    result = (*(int (**)(void))(*(_DWORD *)v7 + 4))();
  return result;
}


int __fastcall Mob::normalizeRotationWithDependency(Mob *this, float *a2, float *a3)
{
  float v11; // r1@1
  int result; // r0@1

  _R5 = a2;
  _R4 = a3;
  _R6 = mce::Math::wrapDegrees(*(mce::Math **)a2, *(float *)&a2);
  __asm
  {
    VLDR            S2, [R4]
    VMOV            S0, R6
    VADD.F32        S0, S2, S0
    VLDR            S2, [R5]
    VSUB.F32        S0, S0, S2
    VMOV            R0, S0
  }
  result = mce::Math::wrapDegrees(_R0, v11);
  *(_DWORD *)_R4 = result;
  *(_DWORD *)_R5 = _R6;
  return result;
}


int __fastcall Mob::doHurtTarget(Mob *this, Entity *a2)
{
  float *v3; // r9@1
  int v4; // r0@1
  AttributeInstance *v5; // r0@1
  unsigned int v11; // r4@1
  MobEffect *v12; // r7@1
  int v14; // r0@2
  int v15; // r0@3
  int v16; // r1@3
  unsigned int v17; // r4@4
  MobEffect *v18; // r7@4
  int v19; // r0@5
  MobEffectInstance *v20; // r0@6
  int v21; // r0@9
  int v22; // r0@10
  MobEffect *v23; // r7@13
  unsigned int v24; // r4@13
  int v25; // r0@14
  int v26; // r0@15
  int v27; // r1@15
  unsigned int v28; // r4@16
  MobEffect *v29; // r7@16
  int v30; // r0@17
  MobEffectInstance *v31; // r0@18
  int v32; // r0@21
  signed int v33; // r1@22
  Mob *v34; // r2@28
  AttributeInstance *v36; // r0@29
  void (__fastcall *v39)(float *, float *); // r8@31
  int v44; // r4@34
  char v46; // [sp+8h] [bp-68h]@34
  float v47; // [sp+34h] [bp-3Ch]@31
  int v48; // [sp+38h] [bp-38h]@31

  _R5 = this;
  v3 = (float *)a2;
  (*(void (**)(void))(*(_DWORD *)this + 928))();
  v4 = Entity::getLevel(_R5);
  Level::broadcastEntityEvent(v4, (int)_R5, 4, 0);
  v5 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R5 + 1004))(
                              _R5,
                              &SharedAttributes::ATTACK_DAMAGE);
  _R0 = AttributeInstance::getCurrentValue(v5);
  __asm { VMOV            S0, R0 }
  v11 = (*((_DWORD *)_R5 + 994) - *((_DWORD *)_R5 + 993)) >> 4;
  v12 = (MobEffect *)MobEffect::DAMAGE_BOOST;
  __asm
  {
    VCVTR.S32.F32   S0, S0
    VMOV            R6, S0
  }
  if ( v11 > MobEffect::getId((MobEffect *)MobEffect::DAMAGE_BOOST) )
    v14 = MobEffect::getId(v12);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)_R5 + 993) + 16 * v14), &MobEffectInstance::NO_EFFECT) == 1 )
    {
      v15 = MobEffect::getId(v12);
      v16 = *((_DWORD *)_R5 + 993);
      if ( v16 + 16 * v15 )
      {
        v17 = (*((_DWORD *)_R5 + 994) - v16) >> 4;
        v18 = (MobEffect *)MobEffect::DAMAGE_BOOST;
        if ( v17 <= MobEffect::getId((MobEffect *)MobEffect::DAMAGE_BOOST) )
        {
          v20 = 0;
        }
        else
          v19 = MobEffect::getId(v18);
          v20 = (MobEffectInstance *)(MobEffectInstance::operator!=(
                                        (int *)(*((_DWORD *)_R5 + 993) + 16 * v19),
                                        &MobEffectInstance::NO_EFFECT) == 1 ? *((_DWORD *)_R5 + 993)
                                                                            + 16 * MobEffect::getId(v18) : 0);
        v21 = MobEffectInstance::getAmplifier(v20);
        if ( v21 >= 0 )
          __asm { VMOV.F32        S2, #1.0 }
          v22 = v21 + 1;
          __asm { VLDR            S0, =1.3 }
          do
          {
            __asm { VMOV            S4, R6 }
            --v22;
            __asm
            {
              VCVT.F32.S32    S4, S4
              VMUL.F32        S4, S4, S0
              VADD.F32        S4, S4, S2
              VCVTR.S32.F32   S4, S4
              VMOV            R6, S4
            }
          }
          while ( !_ZF );
      }
    }
  v23 = (MobEffect *)MobEffect::WEAKNESS;
  v24 = (*((_DWORD *)_R5 + 994) - *((_DWORD *)_R5 + 993)) >> 4;
  if ( v24 > MobEffect::getId((MobEffect *)MobEffect::WEAKNESS) )
    v25 = MobEffect::getId(v23);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)_R5 + 993) + 16 * v25), &MobEffectInstance::NO_EFFECT) == 1 )
      v26 = MobEffect::getId(v23);
      v27 = *((_DWORD *)_R5 + 993);
      if ( v27 + 16 * v26 )
        v28 = (*((_DWORD *)_R5 + 994) - v27) >> 4;
        v29 = (MobEffect *)MobEffect::WEAKNESS;
        if ( v28 <= MobEffect::getId((MobEffect *)MobEffect::WEAKNESS) )
          v31 = 0;
          v30 = MobEffect::getId(v29);
          v31 = (MobEffectInstance *)(MobEffectInstance::operator!=(
                                        (int *)(*((_DWORD *)_R5 + 993) + 16 * v30),
                                                                            + 16 * MobEffect::getId(v29) : 0);
        v32 = MobEffectInstance::getAmplifier(v31);
        if ( v32 >= 0 )
          v33 = -1;
          __asm
            VLDR            S0, =0.8
            VMOV.F32        S2, #-0.5
          while ( 1 )
              VMOV            S4, R6
            if ( _R6 <= -1 )
              break;
            if ( ++v33 >= v32 )
              goto LABEL_27;
          _R6 = 0;
LABEL_27:
  if ( Entity::hasCategory((int)v3, 2) == 1 )
    (*(void (__fastcall **)(Mob *, float *))(*(_DWORD *)_R5 + 964))(_R5, v3);
    _R6 += (*(int (__fastcall **)(Mob *, float *))(*(_DWORD *)_R5 + 844))(_R5, v3);
    _R7 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)_R5 + 848))(_R5);
    if ( _R7 >= 1 )
      v36 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)_R5 + 1004))(
                                   _R5,
                                   &SharedAttributes::KNOCKBACK_RESISTANCE);
      _R0 = AttributeInstance::getCurrentValue(v36);
      __asm
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
          VLDR            S16, =0.0055556
          VLDR            S0, [R5,#0x7C]
          VMUL.F32        S0, S0, S16
        _R0 = &mce::Math::PI;
        v39 = *(void (__fastcall **)(float *, float *))(*(_DWORD *)v3 + 276);
          VLDR            S18, [R0]
          VMUL.F32        S0, S0, S18
          VMOV            R0, S0
        _R0 = mce::Math::sin(_R0, *v3);
          VMOV            S2, R7
          VMOV.F32        S4, #0.5
          VCVT.F32.S32    S2, S2
          VMUL.F32        S16, S2, S4
          VMOV            R1, S0
          VMOV.F32        S0, #-0.5
          VMUL.F32        S0, S2, S0
          VMOV            S2, R0
          VMUL.F32        S18, S0, S2
        _R0 = mce::Math::cos(_R1, *(float *)&_R1);
          VMOV            S0, R0
          VMUL.F32        S0, S16, S0
          VSTR            S18, [SP,#0x70+var_3C]
        v48 = 1036831949;
        __asm { VSTR            S0, [SP,#0x70+var_34] }
        v39(v3, &v47);
        VLDR            S0, =0.6
        VLDR            S2, [R5,#0x6C]
        VMUL.F32        S2, S2, S0
        VSTR            S2, [R5,#0x6C]
        VLDR            S2, [R5,#0x74]
        VMUL.F32        S0, S2, S0
        VSTR            S0, [R5,#0x74]
    EnchantUtils::doPostDamageEffects((EnchantUtils *)v3, _R5, v34);
  EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v46, _R5, 2);
  v44 = Entity::hurt((Entity *)v3, (const EntityDamageSource *)&v46, _R6, 1, 0);
  EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v46);
  return v44;
}


int __fastcall Mob::setJumping(int result, bool a2)
{
  *(_BYTE *)(result + 4080) = a2;
  return result;
}


signed int __fastcall Mob::getMaxHeadXRot(Mob *this)
{
  return 1109393408;
}


int __fastcall Mob::isPushable(Mob *this)
{
  Mob *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::isRemoved(this) )
    result = 0;
  else
    result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 284))(v1) ^ 1;
  return result;
}


signed int __fastcall Mob::getAmbientSoundPostponeTicks(Mob *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( Entity::getAmbientSoundIntervalMin(this, &v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x10+var_C]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 160;
  return result;
}


char *__fastcall Mob::getAllEquipment(Mob *this, int a2)
{
  ItemInstance *v2; // r4@0
  ItemInstance *v3; // r7@0
  Mob *v4; // r8@1
  int v5; // r11@1
  char *v6; // r9@1
  int v7; // r0@1
  bool v8; // zf@1
  bool v9; // zf@7
  _BYTE *v10; // r10@13
  signed int v11; // r0@13
  unsigned int v12; // r1@13
  unsigned int v13; // r0@15
  unsigned int v14; // r4@15
  char *v15; // r6@23
  int v16; // r4@30
  int v17; // r5@31
  char *result; // r0@31
  bool v19; // zf@31
  int v20; // r7@34
  _BYTE *v21; // r10@38
  signed int v22; // r0@38
  unsigned int v23; // r1@38
  unsigned int v24; // r0@40
  unsigned int v25; // r5@40
  char *v26; // r6@46

  v4 = this;
  v5 = a2;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v6 = (char *)operator new(0x30u);
  v7 = *(_BYTE *)(v5 + 3527);
  *(_DWORD *)v4 = v6;
  *((_DWORD *)v4 + 1) = v6;
  v8 = v7 == 0;
  *((_DWORD *)v4 + 2) = v6 + 48;
  if ( v7 )
  {
    v2 = (ItemInstance *)(v5 + 3512);
    v8 = *(_DWORD *)(v5 + 3512) == 0;
  }
  if ( !v8 && !ItemInstance::isNull(v2) && *(_BYTE *)(v5 + 3526) )
    *(_DWORD *)v6 = v2;
    v6 = (char *)(*((_DWORD *)v4 + 1) + 4);
    *((_DWORD *)v4 + 1) = v6;
  v9 = *(_BYTE *)(v5 + 3599) == 0;
  if ( *(_BYTE *)(v5 + 3599) )
    v3 = (ItemInstance *)(v5 + 3584);
    v9 = *(_DWORD *)(v5 + 3584) == 0;
  if ( !v9 && !ItemInstance::isNull(v3) && *(_BYTE *)(v5 + 3598) )
    if ( v6 == *((char **)v4 + 2) )
    {
      v10 = *(_BYTE **)v4;
      v11 = (signed int)&v6[-*(_DWORD *)v4];
      v12 = v11 >> 2;
      if ( !(v11 >> 2) )
        v12 = 1;
      v13 = v12 + (v11 >> 2);
      v14 = v13;
      if ( 0 != v13 >> 30 )
        v14 = 0x3FFFFFFF;
      if ( v13 < v12 )
      if ( v14 )
      {
        if ( 0 != v14 >> 30 )
          sub_21E57F4();
        v15 = (char *)operator new(4 * v14);
      }
      else
        v15 = 0;
      *(_DWORD *)&v15[v6 - v10] = v3;
      if ( 0 != (v6 - v10) >> 2 )
        _aeabi_memmove4(v15, v10);
      v6 = &v15[v6 - v10 + 4];
      if ( v10 )
        operator delete(v10);
      *(_DWORD *)v4 = v15;
      *((_DWORD *)v4 + 1) = v6;
      *((_DWORD *)v4 + 2) = &v15[4 * v14];
    }
    else
      *(_DWORD *)v6 = v3;
      v6 = (char *)(*((_DWORD *)v4 + 1) + 4);
  v16 = 0;
  do
    v17 = v5 + v16;
    result = (char *)*(_BYTE *)(v5 + v16 + 3679);
    v19 = result == 0;
    if ( *(_BYTE *)(v5 + v16 + 3679) )
      result = *(char **)(v17 + 3664);
      v19 = result == 0;
    if ( !v19 )
      v20 = v17 + 3664;
      result = (char *)ItemInstance::isNull((ItemInstance *)(v17 + 3664));
      if ( !result )
        result = (char *)*(_BYTE *)(v17 + 3678);
        if ( *(_BYTE *)(v17 + 3678) )
        {
          if ( v6 == *((char **)v4 + 2) )
          {
            v21 = *(_BYTE **)v4;
            v22 = (signed int)&v6[-*(_DWORD *)v4];
            v23 = v22 >> 2;
            if ( !(v22 >> 2) )
              v23 = 1;
            v24 = v23 + (v22 >> 2);
            v25 = v24;
            if ( 0 != v24 >> 30 )
              v25 = 0x3FFFFFFF;
            if ( v24 < v23 )
            if ( v25 )
            {
              if ( v25 >= 0x40000000 )
                sub_21E57F4();
              v26 = (char *)operator new(4 * v25);
            }
            else
              v26 = 0;
            *(_DWORD *)&v26[v6 - v21] = v20;
            if ( 0 != (v6 - v21) >> 2 )
              _aeabi_memmove4(v26, v21);
            v6 = &v26[v6 - v21 + 4];
            if ( v21 )
              operator delete(v21);
            result = &v26[4 * v25];
            *(_DWORD *)v4 = v26;
            *((_DWORD *)v4 + 1) = v6;
            *((_DWORD *)v4 + 2) = result;
          }
          else
            *(_DWORD *)v6 = v20;
            result = (char *)*((_DWORD *)v4 + 1);
            v6 = result + 4;
            *((_DWORD *)v4 + 1) = result + 4;
        }
    v16 += 72;
  while ( v16 != 288 );
  return result;
}


int __fastcall Mob::hasEffect(Mob *this, const MobEffect *a2)
{
  Mob *v2; // r4@1
  MobEffect *v3; // r5@1
  unsigned int v4; // r6@1
  int v5; // r0@2
  int result; // r0@3

  v2 = this;
  v3 = a2;
  v4 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  if ( v4 <= MobEffect::getId(a2)
    || (v5 = MobEffect::getId(v3),
        MobEffectInstance::operator!=((int *)(*((_DWORD *)v2 + 993) + 16 * v5), &MobEffectInstance::NO_EFFECT) != 1) )
  {
    result = 0;
  }
  else
    result = *((_DWORD *)v2 + 993) + 16 * MobEffect::getId(v3) != 0;
  return result;
}


int __fastcall Mob::onSizeUpdated(int result)
{
  __asm
  {
    VLDR            S0, =0.85
    VLDR            S2, [R0,#0x134]
    VLDR            S4, =0.9
    VMUL.F32        S0, S2, S0
  }
  *(_DWORD *)(result + 364) = 0;
    VMUL.F32        S2, S2, S4
    VSTR            S0, [R0,#0x170]
  *(_DWORD *)(result + 372) = 0;
  *(_DWORD *)(result + 376) = 0;
  __asm { VSTR            S2, [R0,#0x17C] }
  *(_DWORD *)(result + 384) = 0;
  *(_DWORD *)(result + 388) = 0;
  __asm { VSTR            S2, [R0,#0x188] }
  *(_DWORD *)(result + 396) = 0;
  return result;
}


void __fastcall Mob::tickMagmaDamage(Mob *this)
{
  Mob::tickMagmaDamage(this);
}


int __fastcall Mob::getHealth(Mob *this)
{
  AttributeInstance *v1; // r0@1
  int result; // r0@1

  v1 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1004))();
  _R0 = AttributeInstance::getCurrentValue(v1);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Mob::getAmbientSoundPostponeTicksRange(Mob *this)
{
  signed int result; // r0@2
  float v6; // [sp+4h] [bp-Ch]@1

  v6 = 0.0;
  if ( Entity::getAmbientSoundIntervalRange(this, &v6) == 1 )
  {
    __asm
    {
      VMOV.F32        S0, #20.0
      VLDR            S2, [SP,#0x10+var_C]
      VMUL.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 320;
  return result;
}


signed int __fastcall Mob::hasAnyVisibleEffects(Mob *this)
{
  int *v1; // r4@1
  int *v2; // r6@1
  signed int result; // r0@5

  v1 = (int *)*((_DWORD *)this + 993);
  v2 = (int *)*((_DWORD *)this + 994);
  if ( v1 == v2 )
  {
LABEL_5:
    result = 0;
  }
  else
    while ( MobEffectInstance::operator!=(v1, &MobEffectInstance::NO_EFFECT) != 1
         || !MobEffectInstance::isEffectVisible((MobEffectInstance *)v1) )
    {
      v1 += 4;
      if ( v2 == v1 )
        goto LABEL_5;
    }
    result = 1;
  return result;
}


int __fastcall Mob::attackAnimation(int result, Entity *_R1, float _R2)
{
  __asm { VMOV.F32        S0, #2.0 }
  _R4 = result;
  __asm
  {
    VMOV            S2, R2
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    result = *(_DWORD *)(result + 3452);
    if ( result <= 0 )
    {
      __asm
      {
        VLDR            S0, [R4,#0x10C]
        VLDR            S2, [R1,#0x118]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
        {
          VLDR            S0, [R4,#0x118]
          VLDR            S2, [R1,#0x10C]
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          result = (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 1116))(_R4);
          *(_DWORD *)(_R4 + 3452) = result;
    }
  return result;
}


int __fastcall Mob::playAmbientSound(Mob *this)
{
  Mob *v1; // r4@1
  int v2; // r5@1
  char v4; // [sp+4h] [bp-1Ch]@1

  v1 = this;
  v2 = (*(int (**)(void))(*(_DWORD *)this + 808))();
  Entity::getAttachPos((AABB *)&v4, (int)v1, 3, 0);
  return Entity::playSound((int)v1, v2, (int)&v4);
}


int __fastcall Mob::onEffectUpdated(Mob *this, const MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  Mob *v3; // r6@1
  Level *v4; // r0@1
  int result; // r0@1
  Level *v6; // r5@3
  int v7; // r7@5
  int v8; // r8@6
  int v9; // r9@6
  int v10; // r6@6
  char v11; // r0@6
  int v12; // r0@6
  int v13; // [sp+0h] [bp-58h]@6
  void **v14; // [sp+8h] [bp-50h]@6
  int v15; // [sp+Ch] [bp-4Ch]@6
  int v16; // [sp+10h] [bp-48h]@6
  char v17; // [sp+14h] [bp-44h]@6
  __int64 v18; // [sp+18h] [bp-40h]@6
  int v19; // [sp+20h] [bp-38h]@6
  char v20; // [sp+24h] [bp-34h]@6
  int v21; // [sp+28h] [bp-30h]@6
  int v22; // [sp+2Ch] [bp-2Ch]@6
  char v23; // [sp+30h] [bp-28h]@6

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 4181) = 1;
  v4 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    MobEffectInstance::removeEffects(v2, v3);
    result = MobEffectInstance::applyEffects(v2, v3);
  }
  v6 = (Level *)*((_DWORD *)v3 + 773);
  if ( v6 )
    result = Level::isClientSide(*((Level **)v3 + 773));
    if ( !result )
    {
      v7 = MobEffectInstance::getId(v2);
      result = MobEffect::getId((MobEffect *)MobEffect::LEVITATION);
      if ( v7 == result )
      {
        Entity::getRuntimeID((Entity *)&v13, (int)v3);
        v8 = MobEffectInstance::getId(v2);
        v9 = MobEffectInstance::getDuration(v2);
        v10 = MobEffectInstance::getAmplifier(v2);
        v11 = MobEffectInstance::isEffectVisible(v2);
        v15 = 2;
        v16 = 1;
        v17 = 0;
        v14 = &off_26E95E4;
        v18 = *(_QWORD *)&v13;
        v19 = v9;
        v20 = 2;
        v21 = v8;
        v22 = v10;
        v23 = v11;
        v12 = Level::getPacketSender(v6);
        result = (*(int (**)(void))(*(_DWORD *)v12 + 8))();
      }
    }
  return result;
}


int __fastcall Mob::setYya(int result, float a2)
{
  *(float *)(result + 4152) = a2;
  return result;
}


void *__fastcall Mob::getItemSlot(int a1, signed int a2)
{
  void *result; // r0@2
  bool v3; // cf@3
  int v4; // r2@3
  void *v5; // r1@3
  int v6; // r0@3

  if ( a2 > 1 )
  {
    v3 = (unsigned int)(a2 - 2) >= 4;
    v4 = 9 * (a2 - 2);
    v5 = &ItemInstance::EMPTY_ITEM;
    v6 = a1 + 8 * v4;
    if ( !v3 )
      v5 = (void *)(v6 + 3664);
    result = v5;
  }
  else
    result = (void *)(a1 + 72 * a2 + 3512);
  return result;
}


void __fastcall Mob::tickAttributes(Mob *this)
{
  BaseAttributeMap *v1; // r5@1
  int v2; // r4@1
  int v3; // r1@1
  signed int v4; // r2@1
  int v5; // r3@1
  int v6; // r5@1

  v1 = (BaseAttributeMap *)*((_DWORD *)this + 992);
  v2 = BaseAttributeMap::begin(*((BaseAttributeMap **)this + 992));
  v6 = BaseAttributeMap::end(v1);
  while ( v2 != v6 )
  {
    AttributeInstance::tick((AttributeInstance *)(v2 + 8), v3, v4, v5);
    v2 = *(_DWORD *)v2;
  }
}


void __fastcall Mob::addAdditionalSaveData(Mob *this, CompoundTag *a2)
{
  CompoundTag *v2; // r8@1
  Mob *v3; // r9@1
  int v4; // r0@1
  void *v5; // r0@3
  int v6; // r0@4
  void *v7; // r0@6
  int v8; // r0@7
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  void *v12; // r0@12
  void *v13; // r0@13
  void *v14; // r0@14
  void *v15; // r0@15
  void *v16; // r0@16
  void *v17; // r0@17
  void *v18; // r0@18
  void *v19; // r0@19
  void *v20; // r0@20
  void *v21; // r0@21
  int v22; // r0@22
  void *v23; // r0@26
  int *v24; // r4@27
  int *v25; // r6@27
  void *v26; // r6@31
  int *v27; // r7@31
  int *i; // r5@31
  int v29; // r0@33
  void *v30; // r0@41
  void *v31; // r0@43
  void *v32; // r0@45
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  unsigned int *v39; // r2@59
  signed int v40; // r1@61
  unsigned int *v41; // r2@63
  signed int v42; // r1@65
  unsigned int *v43; // r2@67
  signed int v44; // r1@69
  unsigned int *v45; // r2@71
  signed int v46; // r1@73
  unsigned int *v47; // r2@75
  signed int v48; // r1@77
  unsigned int *v49; // r2@79
  signed int v50; // r1@81
  unsigned int *v51; // r2@83
  signed int v52; // r1@85
  unsigned int *v53; // r2@87
  signed int v54; // r1@89
  unsigned int *v55; // r2@91
  signed int v56; // r1@93
  unsigned int *v57; // r2@95
  signed int v58; // r1@97
  unsigned int *v59; // r2@99
  signed int v60; // r1@101
  unsigned int *v61; // r2@103
  signed int v62; // r1@105
  unsigned int *v63; // r2@107
  signed int v64; // r1@109
  unsigned int *v65; // r2@111
  signed int v66; // r1@113
  unsigned int *v67; // r2@179
  signed int v68; // r1@181
  unsigned int *v69; // r2@183
  signed int v70; // r1@185
  int v71; // [sp+8h] [bp-F0h]@45
  int v72; // [sp+10h] [bp-E8h]@43
  void *v73; // [sp+14h] [bp-E4h]@39
  int v74; // [sp+1Ch] [bp-DCh]@39
  int v75; // [sp+20h] [bp-D8h]@33
  int v76; // [sp+24h] [bp-D4h]@33
  int v77; // [sp+28h] [bp-D0h]@22
  int v78; // [sp+2Ch] [bp-CCh]@22
  int v79; // [sp+34h] [bp-C4h]@22
  int v80; // [sp+38h] [bp-C0h]@21
  int v81; // [sp+3Ch] [bp-BCh]@21
  int v82; // [sp+44h] [bp-B4h]@21
  int v83; // [sp+4Ch] [bp-ACh]@20
  int v84; // [sp+54h] [bp-A4h]@19
  int v85; // [sp+5Ch] [bp-9Ch]@18
  int v86; // [sp+64h] [bp-94h]@17
  int v87; // [sp+6Ch] [bp-8Ch]@16
  int v88; // [sp+74h] [bp-84h]@15
  int v89; // [sp+7Ch] [bp-7Ch]@14
  int v90; // [sp+84h] [bp-74h]@13
  int v91; // [sp+8Ch] [bp-6Ch]@12
  int v92; // [sp+94h] [bp-64h]@11
  int v93; // [sp+9Ch] [bp-5Ch]@10
  int v94; // [sp+A0h] [bp-58h]@7
  int v95; // [sp+A4h] [bp-54h]@7
  int v96; // [sp+ACh] [bp-4Ch]@7
  int v97; // [sp+B0h] [bp-48h]@4
  int v98; // [sp+B4h] [bp-44h]@4
  int v99; // [sp+BCh] [bp-3Ch]@4
  int v100; // [sp+C0h] [bp-38h]@1
  int v101; // [sp+C4h] [bp-34h]@1
  int v102; // [sp+CCh] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  Entity::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v102, "Mainhand");
  Mob::saveMainhand((Mob *)&v100, (int)v3);
  v4 = v100;
  v100 = 0;
  v101 = v4;
  CompoundTag::put((int)v2, (const void **)&v102, &v101);
  if ( v101 )
    (*(void (**)(void))(*(_DWORD *)v101 + 4))();
  v101 = 0;
  v5 = (void *)(v102 - 12);
  if ( (int *)(v102 - 12) != &dword_28898C0 )
  {
    v33 = (unsigned int *)(v102 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v99, "Armor");
  Mob::saveArmor((Mob *)&v97, (int)v3);
  v6 = v97;
  v97 = 0;
  v98 = v6;
  CompoundTag::put((int)v2, (const void **)&v99, &v98);
  if ( v98 )
    (*(void (**)(void))(*(_DWORD *)v98 + 4))();
  v98 = 0;
  v7 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v99 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v96, "Offhand");
  Mob::saveOffhand((Mob *)&v94, (int)v3);
  v8 = v94;
  v94 = 0;
  v95 = v8;
  CompoundTag::put((int)v2, (const void **)&v96, &v95);
  if ( v95 )
    (*(void (**)(void))(*(_DWORD *)v95 + 4))();
  v95 = 0;
  v9 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v96 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v93, "HurtTime");
  CompoundTag::putShort((int)v2, (const void **)&v93, *((_WORD *)v3 + 1716));
  v10 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v93 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v92, "DeathTime");
  CompoundTag::putShort((int)v2, (const void **)&v92, *((_WORD *)v3 + 1724));
  v11 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v92 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v91, "AttackTime");
  CompoundTag::putShort((int)v2, (const void **)&v91, *((_WORD *)v3 + 1726));
  v12 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v91 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v90, "Persistent");
  CompoundTag::putBoolean((int)v2, (const void **)&v90, *((_BYTE *)v3 + 3280));
  v13 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v90 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v89, "Surface");
  CompoundTag::putBoolean((int)v2, (const void **)&v89, *((_BYTE *)v3 + 4161));
  v14 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v89 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v88, "NaturalSpawn");
  CompoundTag::putBoolean((int)v2, (const void **)&v88, *((_BYTE *)v3 + 4162));
  v15 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v88 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v87, "TargetID");
  CompoundTag::putInt64((int)v2, (const void **)&v87, *((_DWORD *)v3 + 818), *((_DWORD *)v3 + 819));
  v16 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v87 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v86, "hasBoundOrigin");
  CompoundTag::putBoolean((int)v2, (const void **)&v86, *((_BYTE *)v3 + 4260));
  v17 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v86 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v85, "boundX");
  CompoundTag::putInt((int)v2, (const void **)&v85, *((_DWORD *)v3 + 1066));
  v18 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v85 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v84, "boundY");
  CompoundTag::putInt((int)v2, (const void **)&v84, *((_DWORD *)v3 + 1067));
  v19 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v84 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v83, "boundZ");
  CompoundTag::putInt((int)v2, (const void **)&v83, *((_DWORD *)v3 + 1068));
  v20 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v83 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v82, "LeasherID");
  Entity::getLeashHolder((Entity *)&v80, (int)v3);
  CompoundTag::putInt64((int)v2, (const void **)&v82, v80, v81);
  v21 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v82 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v79, "Attributes");
  SharedAttributes::saveAttributes((SharedAttributes *)&v77, *((BaseAttributeMap **)v3 + 992));
  v22 = v77;
  v77 = 0;
  v78 = v22;
  CompoundTag::put((int)v2, (const void **)&v79, &v78);
  if ( v78 )
    (*(void (**)(void))(*(_DWORD *)v78 + 4))();
  v78 = 0;
  if ( v77 )
    (*(void (**)(void))(*(_DWORD *)v77 + 4))();
  v23 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v79 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = (int *)*((_DWORD *)v3 + 993);
  v25 = (int *)*((_DWORD *)v3 + 994);
  if ( v24 != v25 )
    while ( MobEffectInstance::operator!=(v24, &MobEffectInstance::NO_EFFECT) != 1 )
      v24 += 4;
      if ( v25 == v24 )
        goto LABEL_42;
    v26 = operator new(0x14u);
    ListTag::ListTag((int)v26);
    v27 = (int *)*((_DWORD *)v3 + 993);
    for ( i = (int *)*((_DWORD *)v3 + 994); i != v27; v27 += 4 )
      if ( MobEffectInstance::operator!=(v27, &MobEffectInstance::NO_EFFECT) == 1 )
      {
        MobEffectInstance::save((MobEffectInstance *)&v75, (int)v27);
        v29 = v75;
        v75 = 0;
        v76 = v29;
        ListTag::add((int)v26, &v76);
        if ( v76 )
          (*(void (**)(void))(*(_DWORD *)v76 + 4))();
        v76 = 0;
        if ( v75 )
          (*(void (**)(void))(*(_DWORD *)v75 + 4))();
      }
    sub_21E94B4((void **)&v74, "ActiveEffects");
    v73 = v26;
    CompoundTag::put((int)v2, (const void **)&v74, (int *)&v73);
    if ( v73 )
      (*(void (**)(void))(*(_DWORD *)v73 + 4))();
    v73 = 0;
    v30 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v69 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v70 = __ldrex(v69);
        while ( __strex(v70 - 1, v69) );
      else
        v70 = (*v69)--;
      if ( v70 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
LABEL_42:
  if ( (*(int (__fastcall **)(Mob *))(*(_DWORD *)v3 + 1168))(v3) == 1 )
    sub_21E94B4((void **)&v72, "BodyRot");
    CompoundTag::putFloat((int)v2, (const void **)&v72, *((_DWORD *)v3 + 853));
    v31 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v67 = (unsigned int *)(v72 - 4);
          v68 = __ldrex(v67);
        while ( __strex(v68 - 1, v67) );
        v68 = (*v67)--;
      if ( v68 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
  if ( *((_BYTE *)v3 + 4172) )
    sub_21E94B4((void **)&v71, "WantsToBeJockey");
    CompoundTag::putBoolean((int)v2, (const void **)&v71, 1);
    v32 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v71 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
}


int __fastcall Mob::Mob(int a1, Level *a2)
{
  int v2; // r4@1
  int *v3; // r8@1
  int *v4; // r11@1
  int *v5; // r10@1
  int *v6; // r9@1
  void *v7; // r6@1
  double v8; // r0@1
  unsigned int v9; // r0@1
  int v10; // r5@3
  void *v11; // r7@3
  int v12; // r1@4
  void *v13; // r6@6
  int v14; // r0@6
  void *v15; // r6@9
  int v16; // r0@9
  double v17; // r0@11
  int v18; // r6@11
  int v19; // r5@11
  void *v20; // r0@12
  void *v21; // r6@13
  void *v22; // r0@14
  void *v23; // r0@17
  void *v24; // r6@18
  void *v25; // r0@19
  int result; // r0@23
  int v27; // [sp+10h] [bp-28h]@11

  v2 = a1;
  Entity::Entity(a1, a2);
  *(_DWORD *)v2 = &off_26F4F74;
  *(_DWORD *)(v2 + 3464) = 0;
  *(_DWORD *)(v2 + 3468) = 0;
  _aeabi_memclr4(v2 + 3412, 44);
  *(_BYTE *)(v2 + 3472) = 1;
  *(_BYTE *)(v2 + 3473) = 0;
  *(_DWORD *)(v2 + 3500) = 0;
  *(_DWORD *)(v2 + 3504) = 0;
  *(_DWORD *)(v2 + 3508) = 0;
  *(_DWORD *)(v2 + 3492) = 0;
  *(_DWORD *)(v2 + 3488) = 0;
  *(_DWORD *)(v2 + 3484) = 0;
  *(_DWORD *)(v2 + 3480) = 0;
  *(_DWORD *)(v2 + 3476) = 0;
  ItemInstance::ItemInstance(v2 + 3512);
  ItemInstance::ItemInstance(v2 + 3584);
  ItemInstance::ItemInstance(v2 + 3664);
  ItemInstance::ItemInstance(v2 + 3736);
  ItemInstance::ItemInstance(v2 + 3808);
  ItemInstance::ItemInstance(v2 + 3880);
  *(_DWORD *)(v2 + 3980) = 0;
  v3 = (int *)(v2 + 3968);
  *(_DWORD *)(v2 + 3976) = 0;
  *(_DWORD *)(v2 + 3972) = 0;
  *(_DWORD *)(v2 + 3968) = 0;
  *(_DWORD *)(v2 + 3984) = 1065353216;
  *(_BYTE *)(v2 + 3988) = 0;
  *(_DWORD *)(v2 + 3992) = 0;
  *(_DWORD *)(v2 + 3996) = 0;
  *(_DWORD *)(v2 + 4000) = 0;
  *(_DWORD *)(v2 + 4004) = 1065353216;
  *(_DWORD *)(v2 + 4008) = 1017370378;
  *(_DWORD *)(v2 + 4032) = 0;
  *(_DWORD *)(v2 + 4028) = 0;
  *(_DWORD *)(v2 + 4024) = 0;
  *(_DWORD *)(v2 + 4020) = 0;
  *(_DWORD *)(v2 + 4016) = 0;
  *(_DWORD *)(v2 + 4012) = 0;
  *(_DWORD *)(v2 + 4036) = 1127546880;
  MovementInterpolator::MovementInterpolator(v2 + 4040);
  *(_DWORD *)(v2 + 4084) = 0;
  v4 = (int *)(v2 + 4120);
  *(_DWORD *)(v2 + 4088) = 0;
  v5 = (int *)(v2 + 4116);
  *(_BYTE *)(v2 + 4092) = 0;
  v6 = (int *)(v2 + 4112);
  *(_WORD *)(v2 + 4080) = 0;
  *(_DWORD *)(v2 + 4076) = 0;
  *(_DWORD *)(v2 + 4072) = 0;
  *(_DWORD *)(v2 + 4120) = 0;
  *(_DWORD *)(v2 + 4116) = 0;
  *(_DWORD *)(v2 + 4112) = 0;
  *(_DWORD *)(v2 + 4108) = 0;
  *(_DWORD *)(v2 + 4104) = 0;
  *(_DWORD *)(v2 + 4100) = 0;
  *(_DWORD *)(v2 + 4096) = 0;
  GoalSelector::GoalSelector((GoalSelector *)(v2 + 4124));
  GoalSelector::GoalSelector((GoalSelector *)(v2 + 4136));
  *(_BYTE *)(v2 + 4172) = 0;
  *(_DWORD *)(v2 + 4168) = 0;
  *(_DWORD *)(v2 + 4164) = 0;
  *(_DWORD *)(v2 + 4160) = 0;
  *(_DWORD *)(v2 + 4156) = 0;
  *(_DWORD *)(v2 + 4152) = 0;
  *(_DWORD *)(v2 + 4148) = 0;
  *(_DWORD *)(v2 + 4176) = 2000;
  *(_WORD *)(v2 + 4180) = 0;
  _aeabi_memset8(v2 + 4184);
  *(_BYTE *)(v2 + 4260) = 0;
  *(_DWORD *)(v2 + 4256) = 0;
  *(_DWORD *)(v2 + 4252) = 0;
  *(_DWORD *)(v2 + 4248) = 0;
  *(_DWORD *)(v2 + 4244) = 0;
  *(_DWORD *)(v2 + 4240) = 0;
  *(_DWORD *)(v2 + 4236) = 0;
  *(_DWORD *)(v2 + 4232) = 0;
  *(_DWORD *)(v2 + 4284) = 0;
  *(_DWORD *)(v2 + 4280) = 0;
  *(_DWORD *)(v2 + 4276) = 0;
  *(_DWORD *)(v2 + 4272) = 0;
  *(_DWORD *)(v2 + 4268) = 0;
  *(_DWORD *)(v2 + 4264) = 0;
  *(_DWORD *)(v2 + 172) |= 2u;
  Entity::enableAutoSendPosRot((Entity *)v2, 1);
  sub_174595C((SynchedEntityData *)(v2 + 176));
  v7 = operator new(0x28u);
  _aeabi_memclr4(v7, 40);
  *((_DWORD *)v7 + 4) = 1065353216;
  LODWORD(v8) = (char *)v7 + 16;
  *(_DWORD *)(LODWORD(v8) + 4) = 0;
  v9 = sub_21E6254(v8);
  *((_DWORD *)v7 + 1) = v9;
  if ( v9 == 1 )
  {
    *((_DWORD *)v7 + 6) = 0;
    v11 = (char *)v7 + 24;
  }
  else
    if ( v9 >= 0x40000000 )
      sub_21E57F4();
    v10 = 4 * v9;
    v11 = operator new(4 * v9);
    _aeabi_memclr4(v11, v10);
  *(_DWORD *)v7 = v11;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  *((_DWORD *)v7 + 9) = 0;
  v12 = *v3;
  *v3 = (int)v7;
  if ( v12 )
    std::default_delete<BaseAttributeMap>::operator()(v2 + 3968, v12);
  Mob::registerAttributes((Mob *)v2);
  v13 = operator new(0x20u);
  LookControl::LookControl((int)v13, v2);
  v14 = *v6;
  *v6 = (int)v13;
  if ( v14 )
    (*(void (**)(void))(*(_DWORD *)v14 + 4))();
  if ( !*v5 )
    v15 = operator new(0x10u);
    BodyControl::BodyControl((int)v15, v2);
    v16 = *v5;
    *v5 = (int)v15;
    if ( v16 )
      (*(void (**)(void))(*(_DWORD *)v16 + 4))();
  LODWORD(v17) = operator new(0x3Cu);
  v18 = LODWORD(v17);
  Sensing::Sensing(v17);
  v27 = 0;
  v19 = *v4;
  *v4 = v18;
  if ( v19 )
    v20 = *(void **)(v19 + 40);
    if ( v20 )
    {
      do
      {
        v21 = *(void **)v20;
        operator delete(v20);
        v20 = v21;
      }
      while ( v21 );
    }
    _aeabi_memclr4(*(_QWORD *)(v19 + 32), 4 * (*(_QWORD *)(v19 + 32) >> 32));
    *(_DWORD *)(v19 + 40) = 0;
    *(_DWORD *)(v19 + 44) = 0;
    v22 = *(void **)(v19 + 32);
    if ( v22 && (void *)(v19 + 56) != v22 )
      operator delete(v22);
    v23 = *(void **)(v19 + 12);
    if ( v23 )
        v24 = *(void **)v23;
        operator delete(v23);
        v23 = v24;
      while ( v24 );
    _aeabi_memclr4(*(_QWORD *)(v19 + 4), 4 * (*(_QWORD *)(v19 + 4) >> 32));
    *(_DWORD *)(v19 + 12) = 0;
    *(_DWORD *)(v19 + 16) = 0;
    v25 = *(void **)(v19 + 4);
    if ( v25 && (void *)(v19 + 28) != v25 )
      operator delete(v25);
    operator delete((void *)v19);
  std::unique_ptr<Sensing,std::default_delete<Sensing>>::~unique_ptr(&v27);
  *(_DWORD *)(v2 + 328) = 1058013184;
  result = v2;
  *(_DWORD *)(v2 + 3456) = 0;
  *(_DWORD *)(v2 + 3460) = 0;
  return result;
}


int __fastcall Mob::setWantsToBeJockey(int result, bool a2)
{
  *(_BYTE *)(result + 4172) = a2;
  return result;
}


signed int __fastcall Mob::getLastHurtByPlayer(Mob *this)
{
  char *v1; // r4@1
  int v2; // r0@2
  int v3; // r1@2
  signed int result; // r0@2

  v1 = (char *)this + 4208;
  if ( (*((_DWORD *)this + 1053) & *((_DWORD *)this + 1052)) == -1
    || (v2 = Entity::getLevel(this), (result = Level::getPlayer(v2, v3, *(_QWORD *)v1, *(_QWORD *)v1 >> 32)) == 0) )
  {
    *(_DWORD *)v1 = -1;
    *((_DWORD *)v1 + 1) = -1;
    result = 0;
  }
  return result;
}


void __fastcall Mob::handleEntityEvent(MinecraftEventing *this, signed int a2, Mob *a3)
{
  Mob::handleEntityEvent(this, a2, a3);
}


InstantaneousAttributeBuff *__fastcall Mob::actuallyHeal(Mob *this, int a2)
{
  Mob *v2; // r5@1
  int v4; // r6@1
  AttributeInstance *v5; // r0@1
  InstantaneousAttributeBuff *result; // r0@1
  int v12; // r0@4
  AttributeInstance *v13; // r5@4
  __int64 v14; // r2@4
  int v16; // [sp+0h] [bp-48h]@4

  v2 = this;
  _R4 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 856))();
  v5 = (AttributeInstance *)(*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1004))(v2, &SharedAttributes::HEALTH);
  _R0 = AttributeInstance::getCurrentValue(v5);
  __asm
  {
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  if ( (signed int)result >= 1 )
    if ( v4 )
      _R4 = -_R4;
    v12 = (*(int (__fastcall **)(Mob *, void *))(*(_DWORD *)v2 + 1000))(v2, &SharedAttributes::HEALTH);
    __asm { VMOV            S0, R4 }
    v13 = (AttributeInstance *)v12;
    __asm { VCVT.F32.S32    S0, S0 }
    LODWORD(v14) = 3;
    __asm { VMOV            R1, S0 }
    InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v16, _R1, v14);
    AttributeInstance::addBuff(v13, (const AttributeBuff *)&v16);
    result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v16);
  return result;
}


int __fastcall Mob::loadArmor(int result, const ListTag *a2)
{
  ListTag *v2; // r11@1
  int v3; // r9@1
  int v4; // r6@2
  int v5; // r7@5
  int v6; // r0@6
  const CompoundTag *v7; // r5@6
  void (__fastcall *v8)(int, int, int *); // r4@7
  int v9; // [sp+0h] [bp-70h]@7
  int v10; // [sp+8h] [bp-68h]@11
  void *v11; // [sp+24h] [bp-4Ch]@9
  void *ptr; // [sp+34h] [bp-3Ch]@7

  v2 = a2;
  v3 = result;
  if ( a2 )
  {
    result = ListTag::size(a2);
    v4 = result;
    if ( result >= 4 )
      v4 = 4;
    if ( v4 >= 1 )
    {
      v5 = 0;
      do
      {
        v6 = ListTag::get(v2, v5);
        v7 = (const CompoundTag *)v6;
        result = (*(int (**)(void))(*(_DWORD *)v6 + 24))();
        if ( result == 10 )
        {
          v8 = *(void (__fastcall **)(int, int, int *))(*(_DWORD *)v3 + 1024);
          ItemInstance::fromTag((ItemInstance *)&v9, v7);
          v8(v3, v5, &v9);
          if ( ptr )
            operator delete(ptr);
          if ( v11 )
            operator delete(v11);
          result = v10;
          if ( v10 )
            result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
          v10 = 0;
        }
        ++v5;
      }
      while ( v5 < v4 );
    }
  }
  return result;
}


int __fastcall Mob::resolveDeathLoot(Mob *this, int a2, int a3, const EntityDamageSource *a4)
{
  Mob *v4; // r6@1
  int v5; // r8@1
  int v6; // r1@1
  const EntityDamageSource *v7; // r10@1
  int v8; // r0@1
  int v9; // r9@1
  int (__fastcall *v10)(Mob *); // r1@2
  Random *v11; // r11@4
  Level *v12; // r0@5
  LootTableContext::Builder *v13; // r0@5
  LootTableContext::Builder *v14; // r0@5
  int v15; // r0@5
  int v16; // r3@5
  int v17; // r4@5
  int v18; // r5@5
  int v19; // r7@5
  Player *v20; // r0@7
  LootTableContext::Builder *v21; // r4@7
  Player *v22; // r0@7
  int v23; // r0@7
  unsigned int v24; // r0@8
  int *v25; // r1@9
  signed int v26; // r2@9
  signed int v27; // r3@9
  int v28; // r0@10
  int v29; // r7@10
  void *v30; // r4@13
  void *v31; // r7@13
  int v32; // r4@15
  void *v33; // r0@16
  void *v34; // r0@18
  int v35; // r0@20
  void *v36; // r0@27
  void *v37; // r4@28
  void *v39; // [sp+4h] [bp-A5Ch]@13
  void *v40; // [sp+8h] [bp-A58h]@13
  char v41; // [sp+10h] [bp-A50h]@13
  void *v42; // [sp+24h] [bp-A3Ch]@29
  int v43; // [sp+28h] [bp-A38h]@29
  void *ptr; // [sp+2Ch] [bp-A34h]@27
  int v45; // [sp+30h] [bp-A30h]@29
  int v46; // [sp+3Ch] [bp-A24h]@30
  int v47; // [sp+40h] [bp-A20h]@9
  unsigned int v48; // [sp+44h] [bp-A1Ch]@9
  int v49; // [sp+48h] [bp-A18h]@9
  int v50; // [sp+A04h] [bp-5Ch]@9
  char v51; // [sp+A08h] [bp-58h]@9
  int v52; // [sp+A0Ch] [bp-54h]@9
  int v53; // [sp+A10h] [bp-50h]@11
  char v54; // [sp+A14h] [bp-4Ch]@5
  int v55; // [sp+A28h] [bp-38h]@5
  int v56; // [sp+A2Ch] [bp-34h]@5
  int v57; // [sp+A30h] [bp-30h]@5
  int v58; // [sp+A34h] [bp-2Ch]@5
  int v59; // [sp+A38h] [bp-28h]@5

  v4 = this;
  v5 = a2;
  v6 = *((_BYTE *)this + 3281);
  v7 = a4;
  v8 = *(_DWORD *)this;
  v9 = a3;
  if ( v6 )
    v10 = *(int (__fastcall **)(Mob *))(v8 + 756);
  else
    v10 = *(int (__fastcall **)(Mob *))(v8 + 752);
  v11 = (Random *)v10(v4);
  if ( v11 )
  {
    v12 = (Level *)Entity::getLevel(v4);
    v13 = (LootTableContext::Builder *)LootTableContext::Builder::Builder((LootTableContext::Builder *)&v54, v12);
    v14 = (LootTableContext::Builder *)LootTableContext::Builder::withThisEntity(v13, v4);
    v15 = LootTableContext::Builder::withDeathSource(v14, v7);
    v16 = *(_DWORD *)(v15 + 4);
    v17 = *(_DWORD *)(v15 + 8);
    v18 = *(_DWORD *)(v15 + 12);
    v19 = *(_DWORD *)(v15 + 16);
    v55 = *(_DWORD *)v15;
    v56 = v16;
    v57 = v17;
    v58 = v18;
    v59 = v19;
    if ( v5 == 1 && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v4 + 952))(v4) )
    {
      v20 = (Player *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v4 + 952))(v4);
      v21 = (LootTableContext::Builder *)LootTableContext::Builder::withKillerPlayer(
                                           (LootTableContext::Builder *)&v55,
                                           v20);
      v22 = (Player *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)v4 + 952))(v4);
      v23 = Player::getLuck(v22);
      LootTableContext::Builder::withLuck(v21, *(float *)&v23);
    }
    v24 = *((_DWORD *)v4 + 874);
    if ( v24 )
      v47 = *((_DWORD *)v4 + 874);
      v50 = 625;
      v51 = 0;
      v52 = 0;
      v25 = &v49;
      v26 = 1;
      v27 = -397;
      v48 = v24;
      do
      {
        v28 = v24 ^ (v24 >> 30);
        v29 = v27++ + 1812433253 * v28;
        v24 = v26++ + 1812433253 * v28;
        *v25 = v29 + 398;
        ++v25;
      }
      while ( v27 );
      v50 = 624;
      v53 = 398;
    else
      _aeabi_memcpy4(&v47, (char *)v4 + 552, 2516);
    LootTableContext::Builder::create((LootTableContext::Builder *)&v41, (int)&v55);
    LootTable::getRandomItems((LootTable *)&v39, v11, (LootTableContext *)&v47, (LootTableContext *)&v41);
    v30 = v40;
    v31 = v39;
    if ( v39 == v40 )
      *((_BYTE *)v4 + 3281) = 1;
        (*(void (__fastcall **)(Mob *, void *, _DWORD))(*(_DWORD *)v4 + 452))(v4, v31, 0);
        v31 = (char *)v31 + 72;
      while ( v30 != v31 );
      v31 = v40;
      v32 = (int)v39;
      if ( (void *)v32 != v31 )
        do
        {
          v33 = *(void **)(v32 + 52);
          if ( v33 )
            operator delete(v33);
          v34 = *(void **)(v32 + 36);
          if ( v34 )
            operator delete(v34);
          v35 = *(_DWORD *)(v32 + 8);
          if ( v35 )
            (*(void (**)(void))(*(_DWORD *)v35 + 4))();
          *(_DWORD *)(v32 + 8) = 0;
          v32 += 72;
        }
        while ( v31 != (void *)v32 );
        v31 = v39;
    if ( v31 )
      operator delete(v31);
    v36 = ptr;
    if ( ptr )
        v37 = *(void **)v36;
        operator delete(v36);
        v36 = v37;
      while ( v37 );
    _aeabi_memclr4(v42, 4 * v43);
    ptr = 0;
    v45 = 0;
    if ( v42 && &v46 != v42 )
      operator delete(v42);
  }
  return (*(int (__fastcall **)(Mob *, const EntityDamageSource *, int))(*(_DWORD *)v4 + 1156))(v4, v7, v9);
}


int __fastcall Mob::dropEquipment(Mob *this, const EntityDamageSource *a2, int a3)
{
  const EntityDamageSource *v3; // r4@1
  Entity *v4; // r5@1
  int v6; // r0@1
  signed int v7; // r0@1
  int v13; // r9@1
  signed int v14; // r6@1
  void *v15; // r1@3
  signed int v16; // r0@11
  __int16 v17; // r0@13
  int v18; // r7@14
  int v19; // r1@14
  int v20; // r0@14
  int v21; // r7@14
  int v22; // r0@15
  const ItemInstance *v23; // r2@15
  int v24; // r0@16
  const ItemInstance *v25; // r2@16
  signed int v27; // r0@17
  signed int v29; // r7@25
  unsigned int v30; // r1@31
  int v31; // r0@33
  signed __int16 v32; // r1@33
  int result; // r0@44
  unsigned int v34; // [sp+8h] [bp-B8h]@28
  int v35; // [sp+Ch] [bp-B4h]@30
  Random *v36; // [sp+10h] [bp-B0h]@1
  signed int v37; // [sp+14h] [bp-ACh]@1
  unsigned int v38; // [sp+18h] [bp-A8h]@14
  unsigned int v39; // [sp+1Ch] [bp-A4h]@14
  char v40; // [sp+20h] [bp-A0h]@6
  int v41; // [sp+28h] [bp-98h]@44
  void *v42; // [sp+44h] [bp-7Ch]@42
  void *ptr; // [sp+54h] [bp-6Ch]@40

  v3 = a2;
  v4 = this;
  _R6 = a3;
  v6 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)a2 + 56))(a2);
  v7 = EntityClassTree::isTypeInstanceOf(v6, 319);
  __asm { VMOV            S0, R6 }
  v37 = v7;
  __asm
  {
    VLDR            S2, =0.01
    VCVT.F32.S32    S0, S0
  }
  v36 = (Entity *)((char *)v4 + 552);
  __asm { VMOV.F32        S20, #1.0 }
  _R10 = (int)v4 + 3944;
  v13 = (int)v4 + 3520;
  __asm { VLDR            S18, =0.04 }
  v14 = 0;
    VLDR            D11, =2.32830644e-10
    VMUL.F32        S16, S0, S2
    VLDR            S24, =0.0
  do
    if ( v14 > 1 )
    {
      v15 = &ItemInstance::EMPTY_ITEM;
      if ( (unsigned int)(v14 - 2) < 4 )
        v15 = (void *)v13;
    }
    else
      v15 = (void *)(v13 - 8);
    ItemInstance::ItemInstance((ItemInstance *)&v40, (int)v15);
    if ( !ItemInstance::isNull((ItemInstance *)&v40) )
      if ( v14 > 1 )
      {
        __asm { VMOV.F32        S26, S24 }
        if ( (unsigned int)(v14 - 2) <= 3 )
          __asm { VLDRLS          S26, [R10] }
      }
      else
        __asm { VLDR            S26, [R10,#-0x120] }
      v16 = ItemInstance::isEnchanted((ItemInstance *)&v40);
      __asm { VADD.F32        S0, S26, S26 }
      if ( v16 )
        __asm { VMOVNE.F32      S26, S0 }
      v17 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v3 + 56))(v3);
      if ( EntityClassTree::isMob(v17) == 1 )
        v18 = Entity::getLevel(v4);
        (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v3 + 52))(&v38, v3);
        v20 = Level::fetchEntity(v18, v19, v38, v39, 0);
        v21 = v20;
        if ( v20 )
        {
          v22 = (*(int (**)(void))(*(_DWORD *)v20 + 908))();
          if ( EnchantUtils::hasEnchant((EnchantUtils *)0xE, v22, v23) == 1 )
          {
            v24 = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 908))(v21);
            _R0 = EnchantUtils::getEnchantLevel((EnchantUtils *)0xE, v24, v25);
            __asm
            {
              VMOV            S0, R0
              VCVT.F32.S32    S0, S0
              VMUL.F32        S0, S0, S18
              VADD.F32        S26, S0, S26
            }
          }
        }
      __asm { VCMPE.F32       S26, S20 }
      v27 = 0;
      __asm { VMRS            APSR_nzcv, FPSCR }
      if ( !(_NF ^ _VF) )
        v27 = 1;
      if ( v27 | v37 )
        _R0 = Random::_genRandInt32(v36);
        __asm
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D11
          VCVT.F32.F64    S0, D0
          VSUB.F32        S0, S0, S16
          VCMPE.F32       S0, S26
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm
            VCMPE.F32       S26, S20
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF && ItemInstance::isDamageableItem((ItemInstance *)&v40) == 1 )
            v29 = ItemInstance::getMaxDamage((ItemInstance *)&v40) - 25;
            if ( v29 <= 1 )
              v29 = 1;
            if ( v29 )
              v34 = Random::_genRandInt32(v36) % v29;
            else
              v34 = 0;
            v35 = ItemInstance::getMaxDamage((ItemInstance *)&v40);
            if ( v34 == -1 )
              v30 = 0;
              v30 = Random::_genRandInt32(v36) % (v34 + 1);
            v31 = v35 - v30;
            v32 = 1;
            if ( v31 > 1 )
              v32 = v31;
            if ( v31 > v29 )
              v32 = v29;
            ItemInstance::setAuxValue((ItemInstance *)&v40, v32);
          (*(void (__fastcall **)(Entity *, char *, _DWORD))(*(_DWORD *)v4 + 452))(v4, &v40, 0);
      (*(void (__fastcall **)(Entity *, signed int, void *))(*(_DWORD *)v4 + 1092))(v4, v14, &ItemInstance::EMPTY_ITEM);
    if ( ptr )
      operator delete(ptr);
    if ( v42 )
      operator delete(v42);
    result = v41;
    if ( v41 )
      result = (*(int (**)(void))(*(_DWORD *)v41 + 4))();
    ++v14;
    _R10 += 4;
    v13 += 72;
  while ( v14 < 12 );
  return result;
}


void __fastcall Mob::~Mob(Mob *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Mob::setSurfaceMob(int result, bool a2)
{
  *(_BYTE *)(result + 4161) = a2;
  return result;
}


int __fastcall Mob::getJumpPower(Mob *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 1070);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 32))();
  else
    result = 1054280253;
  return result;
}


void __fastcall Mob::setLastHurtByPlayer(Mob *this, Player *a2)
{
  Mob::setLastHurtByPlayer(this, a2);
}


int __fastcall Mob::animateHurt(int result)
{
  *(_DWORD *)(result + 3432) = 10;
  *(_DWORD *)(result + 3436) = 10;
  *(_DWORD *)(result + 3440) = 0;
  return result;
}


int __fastcall Mob::setBoundOrigin(int result, int a2)
{
  *(_DWORD *)(result + 4264) = *(_DWORD *)a2;
  *(_DWORD *)(result + 4268) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4272) = *(_DWORD *)(a2 + 8);
  *(_BYTE *)(result + 4260) = 1;
  return result;
}


int __fastcall Mob::setJumpVelRedux(int result, bool a2)
{
  *(_BYTE *)(result + 4081) = a2;
  return result;
}


signed int __fastcall Mob::pushEntities(Mob *this)
{
  Mob *v1; // r11@1
  signed int v2; // r0@1
  signed int v3; // r6@1
  Mob *v4; // r5@1
  signed int result; // r0@4
  BlockSource *v6; // r4@5
  char v7; // r7@5
  char *v8; // r4@5
  signed int v9; // r0@6
  int v10; // r0@9
  int v11; // r1@9
  int v12; // r6@9
  int v13; // r0@9
  __int64 v14; // r8@9
  int v15; // r10@9
  Entity *v16; // r5@11
  int v17; // r4@12
  signed int v18; // r0@15
  bool v19; // zf@16
  int v20; // r2@21
  char v21; // r0@27
  Entity *v22; // r5@33
  signed int v23; // r0@35
  int v24; // r2@38
  char v25; // r0@44
  Entity *v26; // r4@49
  char v27; // r0@52
  bool v28; // zf@58
  signed int v29; // r5@60
  signed int v30; // [sp+Ch] [bp-7Ch]@5
  signed int v31; // [sp+10h] [bp-78h]@5
  char v32; // [sp+14h] [bp-74h]@62
  int v33; // [sp+30h] [bp-58h]@62
  signed int v34; // [sp+34h] [bp-54h]@62
  signed int v35; // [sp+38h] [bp-50h]@62
  int v36; // [sp+3Ch] [bp-4Ch]@5
  int v37; // [sp+40h] [bp-48h]@5
  signed int v38; // [sp+44h] [bp-44h]@5
  char v39; // [sp+48h] [bp-40h]@5

  v1 = this;
  v2 = Entity::hasCategory((int)this, 1);
  v3 = v2;
  v4 = (Mob *)v2;
  if ( v2 )
    v4 = v1;
  if ( v2 != 1 || (result = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v4 + 784))(v4)) == 0 )
  {
    v6 = (BlockSource *)Entity::getRegion(v1);
    v7 = 0;
    v36 = 1045220557;
    v37 = 0;
    v38 = 1045220557;
    AABB::grow((AABB *)&v39, (Mob *)((char *)v1 + 264), (int)&v36);
    v8 = BlockSource::fetchEntities(v6, v1, (const AABB *)&v39);
    v30 = v3;
    v31 = 0;
    if ( v3 == 1 )
    {
      v9 = 0;
      if ( !*((_BYTE *)v4 + 4160) )
        v9 = 1;
      v31 = v9;
    }
    v10 = Entity::getLevel(v1);
    v12 = Level::fetchEntity(v10, v11, *((_QWORD *)v1 + 65), *((_QWORD *)v1 + 65) >> 32, 0);
    v13 = Entity::getRideRoot(v1);
    v14 = *(_QWORD *)v8;
    v15 = v13;
    if ( (_DWORD)v14 != HIDWORD(v14) )
      v7 = 0;
      if ( v13 )
      {
        do
        {
          v16 = *(Entity **)v14;
          if ( !Entity::hasCategory(*(_DWORD *)v14, 1) )
          {
            v17 = Entity::getRideRoot(v16);
            if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v16 + 300))(v16) == 1 )
            {
              if ( !v17 )
                v17 = (int)v16;
              v18 = Entity::hasCategory((int)v16, 1024);
              if ( v15 != v17 )
              {
                v19 = v12 == (_DWORD)v16;
                if ( (Entity *)v12 != v16 )
                  v19 = v12 == (_DWORD)v1;
                if ( !v19 && !v18 )
                {
                  if ( v31 )
                  {
                    v20 = 1;
                  }
                  else if ( v30 == 1 && Entity::hasCategory((int)v16, 16) )
                  else
                    v20 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 300))(v1) ^ 1;
                  (*(void (__fastcall **)(Entity *, Mob *, int))(*(_DWORD *)v16 + 272))(v16, v1, v20);
                }
              }
            }
            v21 = 0;
            if ( v16 == (Entity *)v12 )
              v21 = 1;
            v7 |= v21;
          }
          LODWORD(v14) = v14 + 4;
        }
        while ( HIDWORD(v14) != (_DWORD)v14 );
      }
      else if ( (Mob *)v12 == v1 )
          v26 = *(Entity **)v14;
            Entity::getRideRoot(v26);
            if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v26 + 300))(v26) == 1 )
              Entity::hasCategory((int)v26, 1024);
            v27 = 0;
            if ( v26 == v1 )
              v27 = 1;
            v7 |= v27;
      else
          v22 = *(Entity **)v14;
            Entity::getRideRoot(v22);
            if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v22 + 300))(v22) == 1 )
              v23 = Entity::hasCategory((int)v22, 1024);
              if ( (Entity *)v12 != v22 && !v23 )
                if ( v31 )
                  v24 = 1;
                else if ( v30 == 1 && Entity::hasCategory((int)v22, 16) )
                else
                  v24 = (*(int (__fastcall **)(Mob *))(*(_DWORD *)v1 + 300))(v1) ^ 1;
                (*(void (__fastcall **)(Entity *, Mob *, int))(*(_DWORD *)v22 + 272))(v22, v1, v24);
            v25 = 0;
            if ( v22 == (Entity *)v12 )
              v25 = 1;
            v7 |= v25;
    result = 0;
    if ( !v12 )
      result = 1;
    v28 = (v7 & 1) == 0;
    if ( !(v7 & 1) )
      result |= v30 ^ 1;
      v28 = result == 0;
    v29 = 0;
    if ( v28 )
      v33 = 1056964608;
      v34 = 1065353216;
      v35 = 1056964608;
      AABB::grow((AABB *)&v32, (Mob *)((char *)v1 + 264), (int)&v33);
      result = AABB::intersects((AABB *)&v32, (const AABB *)(v12 + 264));
      v7 = result;
      v29 = 1;
    if ( !(v7 & 1) && !v29 )
      result = (signed int)v1 + 520;
      *(_DWORD *)result = -1;
      *(_DWORD *)(result + 4) = -1;
  }
  return result;
}


signed int __fastcall Mob::clearEquipment(Mob *this)
{
  Mob *v1; // r5@1
  char *v2; // r4@1
  signed int v3; // r4@2
  ItemInstance *v4; // r5@42
  int v6; // [sp+0h] [bp-A8h]@35
  int v7; // [sp+8h] [bp-A0h]@39
  void *v8; // [sp+24h] [bp-84h]@37
  void *v9; // [sp+34h] [bp-74h]@35
  char v10; // [sp+48h] [bp-60h]@3
  int v11; // [sp+50h] [bp-58h]@7
  void *v12; // [sp+6Ch] [bp-3Ch]@5
  void *ptr; // [sp+7Ch] [bp-2Ch]@3

  v1 = this;
  v2 = (char *)this + 3664;
  if ( ItemInstance::isNull((Mob *)((char *)this + 3664)) )
  {
    v3 = 0;
  }
  else
    ItemInstance::ItemInstance((int)&v10);
    ItemInstance::operator=((int)v2, (int)&v10);
    if ( ptr )
      operator delete(ptr);
    if ( v12 )
      operator delete(v12);
    if ( v11 )
      (*(void (**)(void))(*(_DWORD *)v11 + 4))();
    v3 = 1;
    v11 = 0;
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3736)) )
    ItemInstance::operator=((int)v1 + 3736, (int)&v10);
    ++v3;
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3808)) )
    ItemInstance::operator=((int)v1 + 3808, (int)&v10);
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3880)) )
    ItemInstance::operator=((int)v1 + 3880, (int)&v10);
  if ( !ItemInstance::isNull((Mob *)((char *)v1 + 3512)) )
    ItemInstance::ItemInstance((int)&v6);
    ItemInstance::operator=((int)v1 + 3512, (int)&v6);
    if ( v9 )
      operator delete(v9);
    if ( v8 )
      operator delete(v8);
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v7 = 0;
  v4 = (Mob *)((char *)v1 + 3584);
  if ( !ItemInstance::isNull(v4) )
    ItemInstance::operator=((int)v4, (int)&v6);
  return v3;
}


unsigned int __fastcall Mob::updateInvisibilityStatus(Mob *this)
{
  Mob *v1; // r4@1
  int *v2; // r5@1
  int *v3; // r7@1
  Mob *v4; // r8@6
  SynchedEntityData *v5; // r5@6
  signed int v6; // r7@6
  int v7; // r0@6
  unsigned int v8; // r1@6
  unsigned int v9; // r1@8
  unsigned int v10; // r0@8
  int v11; // r7@13
  int v12; // r0@13
  unsigned int v13; // r1@13
  unsigned int v14; // r1@15
  unsigned int v15; // r0@15
  MobEffect *v16; // r7@20
  unsigned int v17; // r6@20
  int v18; // r0@21
  int v19; // r6@22
  int v20; // r0@23
  unsigned int v21; // r1@23
  unsigned int v22; // r1@25
  unsigned int v23; // r0@25
  int v24; // r0@30
  unsigned int v25; // r1@30
  unsigned int v26; // r1@32
  unsigned int v27; // r0@32
  int v28; // r0@37
  int v29; // r2@37
  int v30; // r0@41
  unsigned int v31; // r0@41
  unsigned int v32; // r1@41
  int v33; // r0@45
  unsigned int result; // r0@45
  unsigned int v35; // r1@45
  int v36; // [sp+0h] [bp-28h]@6

  v1 = this;
  v2 = (int *)*((_DWORD *)this + 993);
  v3 = (int *)*((_DWORD *)this + 994);
  if ( v2 == v3 )
    goto LABEL_23;
  while ( MobEffectInstance::operator!=(v2, &MobEffectInstance::NO_EFFECT) != 1 )
  {
    v2 += 4;
    if ( v3 == v2 )
      goto LABEL_23;
  }
  if ( *((_DWORD *)v1 + 993) == *((_DWORD *)v1 + 994) )
LABEL_23:
    v5 = (Mob *)((char *)v1 + 176);
    v20 = SynchedEntityData::_get((Mob *)((char *)v1 + 176), 9);
    v21 = *(_DWORD *)(v20 + 4);
    if ( !(_BYTE)v21 && *(_BYTE *)(v20 + 9) )
    {
      v22 = v21 >> 16;
      *(_WORD *)(v20 + 8) = 1;
      v23 = *((_WORD *)v1 + 94);
      if ( v23 >= v22 )
        LOWORD(v23) = v22;
      *((_WORD *)v1 + 94) = v23;
      if ( *((_WORD *)v1 + 95) > v22 )
        LOWORD(v22) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v22;
    }
    v24 = SynchedEntityData::_get((Mob *)((char *)v1 + 176), 8);
    v25 = *(_DWORD *)(v24 + 4);
    if ( (unsigned __int8)v25 == 2 && *(_DWORD *)(v24 + 12) )
      v26 = v25 >> 16;
      *(_DWORD *)(v24 + 12) = 0;
      *(_BYTE *)(v24 + 8) = 1;
      v27 = *((_WORD *)v1 + 94);
      if ( v27 >= v26 )
        LOWORD(v27) = v26;
      *((_WORD *)v1 + 94) = v27;
      if ( *((_WORD *)v1 + 95) > v26 )
        LOWORD(v26) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v26;
    Entity::setStatusFlag((int)v1, 14, 1);
    v28 = (int)v1;
    v29 = 0;
  else
    v4 = (Mob *)((char *)v1 + 3972);
    MobEffectInstance::getColorValue((int)&v36, (__int64 *)((char *)v1 + 3972));
    v6 = MobEffectInstance::areAllEffectsAmbient((unsigned __int64 *)((char *)v1 + 3972));
    v7 = SynchedEntityData::_get((Mob *)((char *)v1 + 176), 9);
    v8 = *(_DWORD *)(v7 + 4);
    if ( !(_BYTE)v8 && *(_BYTE *)(v7 + 9) != v6 )
      *(_BYTE *)(v7 + 9) = v6;
      *(_BYTE *)(v7 + 8) = 1;
      v9 = v8 >> 16;
      v10 = *((_WORD *)v1 + 94);
      if ( v10 >= v9 )
        LOWORD(v10) = v9;
      *((_WORD *)v1 + 94) = v10;
      if ( *((_WORD *)v1 + 95) > v9 )
        LOWORD(v9) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v9;
    v11 = Color::toARGB((Color *)&v36);
    v12 = SynchedEntityData::_get((Mob *)((char *)v1 + 176), 8);
    v13 = *(_DWORD *)(v12 + 4);
    if ( (unsigned __int8)v13 == 2 && *(_DWORD *)(v12 + 12) != v11 )
      *(_DWORD *)(v12 + 12) = v11;
      *(_BYTE *)(v12 + 8) = 1;
      v14 = v13 >> 16;
      v15 = *((_WORD *)v1 + 94);
      if ( v15 >= v14 )
        LOWORD(v15) = v14;
      *((_WORD *)v1 + 94) = v15;
      if ( *((_WORD *)v1 + 95) > v14 )
        LOWORD(v14) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v14;
    v16 = (MobEffect *)MobEffect::INVISIBILITY;
    v17 = (*((_DWORD *)v1 + 994) - *((_DWORD *)v1 + 993)) >> 4;
    if ( v17 <= MobEffect::getId((MobEffect *)MobEffect::INVISIBILITY) )
      v19 = 0;
    else
      v18 = MobEffect::getId(v16);
      if ( MobEffectInstance::operator!=((int *)(*(_DWORD *)v4 + 16 * v18), &MobEffectInstance::NO_EFFECT) == 1 )
        v19 = *(_DWORD *)v4 + 16 * MobEffect::getId(v16) != 0;
      else
        v19 = 0;
    Entity::setStatusFlag((int)v1, 14, v19 ^ 1);
    v29 = v19;
  Entity::setStatusFlag(v28, 5, v29);
  v30 = SynchedEntityData::_get(v5, 9);
  *(_BYTE *)(v30 + 8) = 1;
  v31 = *(_WORD *)(v30 + 6);
  v32 = *((_WORD *)v1 + 94);
  if ( v32 >= v31 )
    LOWORD(v32) = v31;
  *((_WORD *)v1 + 94) = v32;
  if ( *((_WORD *)v1 + 95) > v31 )
    LOWORD(v31) = *((_WORD *)v1 + 95);
  *((_WORD *)v1 + 95) = v31;
  v33 = SynchedEntityData::_get(v5, 8);
  *(_BYTE *)(v33 + 8) = 1;
  result = *(_WORD *)(v33 + 6);
  v35 = *((_WORD *)v1 + 94);
  if ( v35 >= result )
    LOWORD(v35) = result;
  *((_WORD *)v1 + 94) = v35;
  if ( *((_WORD *)v1 + 95) > result )
    result = *((_WORD *)v1 + 95);
  *((_WORD *)v1 + 95) = result;
  return result;
}


signed int __fastcall Mob::_removeSpeedBonus(Mob *this, const mce::UUID *a2)
{
  const mce::UUID *v2; // r4@1
  AttributeInstance *v3; // r0@1

  v2 = a2;
  v3 = (AttributeInstance *)(*(int (**)(void))(*(_DWORD *)this + 1000))();
  return j_j_j__ZN17AttributeInstance14removeModifierERKN3mce4UUIDE(v3, v2);
}


void __fastcall Mob::frostWalk(Mob *this)
{
  Mob::frostWalk(this);
}


int __fastcall Mob::getDamageAfterMagicAbsorb(Mob *this, const EntityDamageSource *a2, int a3)
{
  Mob *v3; // r5@1
  int v4; // r4@1
  EntityDamageSource *v5; // r8@1
  MobEffect *v6; // r7@1
  unsigned int v7; // r6@1
  int v8; // r0@2
  int v9; // r0@3
  int v10; // r1@3
  MobEffect *v11; // r7@4
  unsigned int v12; // r6@4
  int v13; // r0@5
  unsigned int v14; // r7@11
  MobEffect *v15; // r6@11
  int v16; // r0@12
  MobEffectInstance *v17; // r0@13
  int v18; // r0@16

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (MobEffect *)MobEffect::DAMAGE_RESISTANCE;
  v7 = (*((_DWORD *)this + 994) - *((_DWORD *)this + 993)) >> 4;
  if ( v7 <= MobEffect::getId((MobEffect *)MobEffect::DAMAGE_RESISTANCE)
    || (v8 = MobEffect::getId(v6),
        MobEffectInstance::operator!=((int *)(*((_DWORD *)v3 + 993) + 16 * v8), &MobEffectInstance::NO_EFFECT) != 1)
    || (v9 = MobEffect::getId(v6), v10 = *((_DWORD *)v3 + 993), !(v10 + 16 * v9)) )
  {
    v11 = (MobEffect *)MobEffect::DAMAGE_RESISTANCE;
    v12 = (*((_DWORD *)v3 + 994) - *((_DWORD *)v3 + 993)) >> 4;
    if ( v12 <= MobEffect::getId((MobEffect *)MobEffect::DAMAGE_RESISTANCE) )
      return v4;
    v13 = MobEffect::getId(v11);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)v3 + 993) + 16 * v13), &MobEffectInstance::NO_EFFECT) != 1
      || !(*((_DWORD *)v3 + 993) + 16 * MobEffect::getId(v11))
      || !EntityDamageSource::getCause(v5)
      || EntityDamageSource::getCause(v5) == 12
      || EntityDamageSource::getCause(v5) == 13 )
    {
    }
    v10 = *((_DWORD *)v3 + 993);
  }
  v14 = (*((_DWORD *)v3 + 994) - v10) >> 4;
  v15 = (MobEffect *)MobEffect::DAMAGE_RESISTANCE;
  if ( v14 <= MobEffect::getId((MobEffect *)MobEffect::DAMAGE_RESISTANCE) )
    v17 = 0;
  else
    v16 = MobEffect::getId(v15);
    if ( MobEffectInstance::operator!=((int *)(*((_DWORD *)v3 + 993) + 16 * v16), &MobEffectInstance::NO_EFFECT) == 1 )
      v17 = (MobEffectInstance *)(*((_DWORD *)v3 + 993) + 16 * MobEffect::getId(v15));
    else
      v17 = 0;
  v18 = MobEffectInstance::getAmplifier(v17);
  if ( v18 <= 4 )
    _R0 = *((_DWORD *)v3 + 1019) + (-5 * v18 + 20) * v4;
    _R1 = 1374389535;
    __asm { SMMUL.W         R1, R0, R1 }
    v4 = ((signed int)_R1 >> 3) + (_R1 >> 31);
    *((_DWORD *)v3 + 1019) = _R0 - 25 * v4;
    return v4;
  return 0;
}


int __fastcall Mob::teleportTo(Mob *this, const Vec3 *a2, int a3, int a4)
{
  Mob *v4; // r4@1

  v4 = this;
  Entity::teleportTo(this, a2, 0, 1);
  return j_j_j__ZN20MovementInterpolator4stopEv((Mob *)((char *)v4 + 4040));
}


int __fastcall Mob::setSpeed(int result, float a2)
{
  *(float *)(result + 4108) = a2;
  *(float *)(result + 4152) = a2;
  return result;
}


signed int __fastcall Mob::canAddRider(Mob *this, Entity *a2)
{
  Entity *v2; // r4@1
  Entity *v3; // r5@1
  RideableComponent *v4; // r0@2
  signed int result; // r0@2
  Level *v6; // r0@3

  v2 = a2;
  v3 = this;
  if ( Entity::getRideableComponent(this) )
  {
    v4 = (RideableComponent *)Entity::getRideableComponent(v3);
    result = RideableComponent::canAddRider(v4, v2);
  }
  else
    v6 = (Level *)Entity::getLevel(v3);
    result = Level::isClientSide(v6);
  return result;
}


signed int __fastcall Mob::canPickUpLoot(Mob *this, const ItemInstance *a2)
{
  ShareableComponent *v2; // r0@1
  signed int v3; // r4@1

  v2 = (ShareableComponent *)*((_DWORD *)this + 813);
  v3 = 0;
  if ( v2 && ShareableComponent::wantsMore(v2, a2) > 0 )
    v3 = 1;
  return v3;
}


int __fastcall Mob::setFlightSpeed(int result, float a2)
{
  *(float *)(result + 4008) = a2;
  return result;
}


int __fastcall Mob::incrementArrowCount(int result, int a2)
{
  *(_DWORD *)(result + 4248) += a2;
  return result;
}
