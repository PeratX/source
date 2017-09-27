

int __fastcall Enchant::canSecondaryEnchant(Enchant *this, const ItemInstance *a2)
{
  int result; // r0@2

  if ( *(_DWORD *)a2 )
    result = ((*(int (**)(void))(**(_DWORD **)a2 + 132))() & *((_DWORD *)this + 4)) != 0;
  else
    result = 0;
  return result;
}


int __fastcall Enchant::Enchant(int a1, EnchantUtils *this, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int *v8; // r6@1

  v7 = a1;
  v8 = (int *)a4;
  *(_DWORD *)a1 = &off_270167C;
  *(_DWORD *)(a1 + 4) = this;
  *(_DWORD *)(a1 + 8) = a3;
  *(_DWORD *)(a1 + 12) = a6;
  *(_DWORD *)(a1 + 16) = a7;
  *(_DWORD *)(a1 + 20) = EnchantUtils::determineCompatibility(this, (int)this);
  sub_21E8AF4((int *)(v7 + 24), (int *)a5);
  sub_21E8AF4((int *)(v7 + 28), v8);
  return v7;
}


signed int __fastcall Enchant::isCompatibleWith(Enchant *this, int a2)
{
  int v2; // r2@1
  signed int result; // r0@2

  v2 = *((_DWORD *)this + 5);
  if ( v2 )
  {
    result = 0;
    if ( v2 != *(_DWORD *)(*(_DWORD *)(Enchant::mEnchants + 4 * a2) + 20) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall Enchant::initEnchants(Enchant *this)
{
  int result; // r0@1
  int *v2; // r6@2
  int v3; // r1@2
  int v4; // r0@2
  int v5; // r7@4
  int v6; // r1@4
  int v7; // r0@4
  int v8; // r7@6
  int v9; // r1@6
  int v10; // r0@6
  int v11; // r6@8
  signed int v12; // r5@8 OVERLAPPED
  int v13; // r1@8
  int v14; // r0@8
  signed int v15; // r6@10
  int v16; // r7@10
  int v17; // r1@10
  int v18; // r0@10
  signed int v19; // r5@12 OVERLAPPED
  signed int v20; // r6@12 OVERLAPPED
  int v21; // r7@12
  int v22; // r1@12
  int v23; // r0@12
  int v24; // r7@14
  int v25; // r1@14
  int v26; // r0@14
  int v27; // r6@16
  int v28; // r1@16
  int v29; // r0@16
  int v30; // r6@18
  int v31; // r1@18
  int v32; // r0@18
  signed int v33; // r8@20 OVERLAPPED
  signed int v34; // r7@20 OVERLAPPED
  int v35; // r5@20
  int v36; // r1@20
  int v37; // r0@20
  int v38; // r5@22
  int v39; // r1@22
  int v40; // r0@22
  int v41; // r7@24
  int v42; // r1@24
  int v43; // r0@24
  int v44; // r6@26
  int v45; // r1@26
  int v46; // r0@26
  int v47; // r6@28
  int v48; // r1@28
  int v49; // r0@28
  int v50; // r6@30
  int v51; // r1@30
  int v52; // r0@30
  int v53; // r6@32
  int v54; // r1@32
  int v55; // r0@32
  int v56; // r6@34
  int v57; // r1@34
  int v58; // r0@34
  int v59; // r5@36
  int v60; // r1@36
  int v61; // r0@36
  int v62; // r5@38
  int v63; // r1@38
  int v64; // r0@38
  int v65; // r5@40
  int v66; // r1@40
  int v67; // r0@40
  signed int v68; // r5@42 OVERLAPPED
  int v69; // r6@42
  int v70; // r1@42
  int v71; // r0@42
  signed int v72; // r6@44
  int v73; // r7@44
  int v74; // r1@44
  int v75; // r0@44
  int v76; // r7@46
  int v77; // r1@46
  int v78; // r0@46
  int v79; // r6@48
  int v80; // r1@48
  int v81; // r0@48
  int v82; // r6@50
  int v83; // r1@50
  int v84; // r0@50
  int v85; // r6@52
  int v86; // r1@52
  int v87; // r0@52
  int v88; // r5@54
  int v89; // r1@54
  int v90; // [sp+10h] [bp-1E8h]@54
  int v91; // [sp+14h] [bp-1E4h]@54
  int v92; // [sp+18h] [bp-1E0h]@54
  int v93; // [sp+1Ch] [bp-1DCh]@54
  int v94; // [sp+20h] [bp-1D8h]@54
  int v95; // [sp+24h] [bp-1D4h]@52
  int v96; // [sp+28h] [bp-1D0h]@52
  int v97; // [sp+2Ch] [bp-1CCh]@52
  int v98; // [sp+30h] [bp-1C8h]@52
  int v99; // [sp+34h] [bp-1C4h]@50
  int v100; // [sp+38h] [bp-1C0h]@50
  int v101; // [sp+3Ch] [bp-1BCh]@50
  int v102; // [sp+40h] [bp-1B8h]@50
  int v103; // [sp+44h] [bp-1B4h]@48
  int v104; // [sp+48h] [bp-1B0h]@48
  int v105; // [sp+4Ch] [bp-1ACh]@48
  int v106; // [sp+50h] [bp-1A8h]@48
  int v107; // [sp+54h] [bp-1A4h]@46
  int v108; // [sp+58h] [bp-1A0h]@46
  int v109; // [sp+5Ch] [bp-19Ch]@46
  int v110; // [sp+60h] [bp-198h]@46
  __int64 v111; // [sp+64h] [bp-194h]@44
  int v112; // [sp+6Ch] [bp-18Ch]@44
  int v113; // [sp+70h] [bp-188h]@44
  int v114; // [sp+74h] [bp-184h]@42
  int v115; // [sp+78h] [bp-180h]@42
  int v116; // [sp+7Ch] [bp-17Ch]@42
  int v117; // [sp+80h] [bp-178h]@42
  int v118; // [sp+84h] [bp-174h]@40
  int v119; // [sp+88h] [bp-170h]@40
  int v120; // [sp+8Ch] [bp-16Ch]@40
  int v121; // [sp+90h] [bp-168h]@40
  int v122; // [sp+94h] [bp-164h]@40
  int v123; // [sp+98h] [bp-160h]@38
  int v124; // [sp+9Ch] [bp-15Ch]@38
  int v125; // [sp+A0h] [bp-158h]@38
  int v126; // [sp+A4h] [bp-154h]@38
  int v127; // [sp+A8h] [bp-150h]@38
  int v128; // [sp+ACh] [bp-14Ch]@36
  int v129; // [sp+B0h] [bp-148h]@36
  int v130; // [sp+B4h] [bp-144h]@36
  int v131; // [sp+B8h] [bp-140h]@36
  int v132; // [sp+BCh] [bp-13Ch]@36
  int v133; // [sp+C0h] [bp-138h]@34
  int v134; // [sp+C4h] [bp-134h]@34
  int v135; // [sp+C8h] [bp-130h]@34
  int v136; // [sp+CCh] [bp-12Ch]@34
  int v137; // [sp+D0h] [bp-128h]@32
  int v138; // [sp+D4h] [bp-124h]@32
  int v139; // [sp+D8h] [bp-120h]@32
  int v140; // [sp+DCh] [bp-11Ch]@32
  int v141; // [sp+E0h] [bp-118h]@30
  int v142; // [sp+E4h] [bp-114h]@30
  int v143; // [sp+E8h] [bp-110h]@30
  int v144; // [sp+ECh] [bp-10Ch]@30
  int v145; // [sp+F0h] [bp-108h]@28
  int v146; // [sp+F4h] [bp-104h]@28
  int v147; // [sp+F8h] [bp-100h]@28
  int v148; // [sp+FCh] [bp-FCh]@28
  int v149; // [sp+100h] [bp-F8h]@26
  int v150; // [sp+104h] [bp-F4h]@26
  int v151; // [sp+108h] [bp-F0h]@26
  int v152; // [sp+10Ch] [bp-ECh]@26
  int v153; // [sp+110h] [bp-E8h]@24
  int v154; // [sp+114h] [bp-E4h]@24
  int v155; // [sp+118h] [bp-E0h]@24
  int v156; // [sp+11Ch] [bp-DCh]@24
  int v157; // [sp+120h] [bp-D8h]@24
  __int64 v158; // [sp+124h] [bp-D4h]@22
  int v159; // [sp+12Ch] [bp-CCh]@22
  int v160; // [sp+130h] [bp-C8h]@22
  int v161; // [sp+134h] [bp-C4h]@22
  int v162; // [sp+138h] [bp-C0h]@20
  int v163; // [sp+13Ch] [bp-BCh]@20
  int v164; // [sp+140h] [bp-B8h]@20
  int v165; // [sp+144h] [bp-B4h]@20
  int v166; // [sp+148h] [bp-B0h]@20
  int v167; // [sp+14Ch] [bp-ACh]@18
  int v168; // [sp+150h] [bp-A8h]@18
  int v169; // [sp+154h] [bp-A4h]@18
  int v170; // [sp+158h] [bp-A0h]@18
  int v171; // [sp+15Ch] [bp-9Ch]@16
  int v172; // [sp+160h] [bp-98h]@16
  int v173; // [sp+164h] [bp-94h]@16
  int v174; // [sp+168h] [bp-90h]@16
  __int64 v175; // [sp+16Ch] [bp-8Ch]@14
  int v176; // [sp+174h] [bp-84h]@14
  int v177; // [sp+178h] [bp-80h]@14
  int v178; // [sp+17Ch] [bp-7Ch]@12
  int v179; // [sp+180h] [bp-78h]@12
  int v180; // [sp+184h] [bp-74h]@12
  int v181; // [sp+188h] [bp-70h]@12
  int v182; // [sp+18Ch] [bp-6Ch]@12
  __int64 v183; // [sp+190h] [bp-68h]@10
  int v184; // [sp+198h] [bp-60h]@10
  int v185; // [sp+19Ch] [bp-5Ch]@10
  int v186; // [sp+1A0h] [bp-58h]@8
  int v187; // [sp+1A4h] [bp-54h]@8
  int v188; // [sp+1A8h] [bp-50h]@8
  int v189; // [sp+1ACh] [bp-4Ch]@8
  int v190; // [sp+1B0h] [bp-48h]@6
  int v191; // [sp+1B4h] [bp-44h]@6
  int v192; // [sp+1B8h] [bp-40h]@6
  int v193; // [sp+1BCh] [bp-3Ch]@6
  int v194; // [sp+1C0h] [bp-38h]@4
  int v195; // [sp+1C4h] [bp-34h]@4
  int v196; // [sp+1C8h] [bp-30h]@4
  int v197; // [sp+1CCh] [bp-2Ch]@4
  int v198; // [sp+1D0h] [bp-28h]@2
  int v199; // [sp+1D4h] [bp-24h]@2
  int v200; // [sp+1D8h] [bp-20h]@2
  int v201; // [sp+1DCh] [bp-1Ch]@2

  result = unk_2805F90;
  if ( unk_2805F90 == (_DWORD)Enchant::mEnchants )
  {
    std::vector<std::unique_ptr<Enchant,std::default_delete<Enchant>>,std::allocator<std::unique_ptr<Enchant,std::default_delete<Enchant>>>>::_M_default_append(
      (int)&Enchant::mEnchants,
      0x1Bu);
    v199 = 10;
    v2 = (int *)Enchant::mEnchants;
    v200 = 0;
    v198 = 15;
    std::make_unique<ProtectionEnchant,Enchant::Type,Enchant::Frequency,char const(&)[11],char const(&)[24],Enchant::Slot>(
      &v201,
      (EnchantUtils **)&v200,
      &v199,
      "protection",
      "enchantment.protect.all",
      &v198);
    v3 = v201;
    v201 = 0;
    v4 = *v2;
    *v2 = v3;
    if ( v4 )
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
    v5 = Enchant::mEnchants;
    v196 = 1;
    v194 = 15;
    v195 = 5;
    std::make_unique<ProtectionEnchant,Enchant::Type,Enchant::Frequency,char const(&)[16],char const(&)[25],Enchant::Slot>(
      &v197,
      (EnchantUtils **)&v196,
      &v195,
      "fire_protection",
      "enchantment.protect.fire",
      &v194);
    v6 = v197;
    v197 = 0;
    v7 = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v6;
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    v8 = Enchant::mEnchants;
    v191 = 5;
    v192 = 2;
    v190 = 4;
      &v193,
      (EnchantUtils **)&v192,
      &v191,
      "feather_falling",
      "enchantment.protect.fall",
      &v190);
    v9 = v193;
    v193 = 0;
    v10 = *(_DWORD *)(v8 + 8);
    *(_DWORD *)(v8 + 8) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v11 = Enchant::mEnchants;
    v187 = 2;
    v188 = 3;
    v12 = 15;
    v186 = 15;
    std::make_unique<ProtectionEnchant,Enchant::Type,Enchant::Frequency,char const(&)[17],char const(&)[30],Enchant::Slot>(
      &v189,
      (EnchantUtils **)&v188,
      &v187,
      "blast_protection",
      "enchantment.protect.explosion",
      &v186);
    v13 = v189;
    v189 = 0;
    v14 = *(_DWORD *)(v11 + 12);
    *(_DWORD *)(v11 + 12) = v13;
    if ( v14 )
      (*(void (**)(void))(*(_DWORD *)v14 + 4))();
    v15 = 5;
    v16 = Enchant::mEnchants;
    v184 = 4;
    v183 = *(_QWORD *)&v12;
    std::make_unique<ProtectionEnchant,Enchant::Type,Enchant::Frequency,char const(&)[22],char const(&)[31],Enchant::Slot>(
      &v185,
      (EnchantUtils **)&v184,
      (int *)&v183 + 1,
      "projectile_protection",
      "enchantment.protect.projectile",
      (int *)&v183);
    v17 = v185;
    v185 = 0;
    v18 = *(_DWORD *)(v16 + 16);
    *(_DWORD *)(v16 + 16) = v17;
    if ( v18 )
      (*(void (**)(void))(*(_DWORD *)v18 + 4))();
    v19 = 1;
    v181 = 5;
    v20 = 2;
    v180 = 1;
    v21 = Enchant::mEnchants;
    v178 = 13;
    v179 = 2;
    std::make_unique<ProtectionEnchant,Enchant::Type,Enchant::Frequency,char const(&)[7],char const(&)[19],Enchant::Slot,int>(
      &v182,
      (EnchantUtils **)&v181,
      &v180,
      "thorns",
      "enchantment.thorns",
      &v179,
      &v178);
    v22 = v182;
    v182 = 0;
    v23 = *(_DWORD *)(v21 + 20);
    *(_DWORD *)(v21 + 20) = v22;
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v24 = Enchant::mEnchants;
    v176 = 8;
    v175 = *(_QWORD *)&v19;
    std::make_unique<SwimEnchant,Enchant::Type,Enchant::Frequency,char const(&)[14],char const(&)[24],Enchant::Slot>(
      &v177,
      (EnchantUtils **)&v176,
      (int *)&v175 + 1,
      "aqua_affinity",
      "enchantment.waterWorker",
      (int *)&v175);
    v25 = v177;
    v177 = 0;
    v26 = *(_DWORD *)(v24 + 32);
    *(_DWORD *)(v24 + 32) = v25;
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 4))();
    v172 = 2;
    v27 = Enchant::mEnchants;
    v173 = 6;
    v171 = 1;
    std::make_unique<SwimEnchant,Enchant::Type,Enchant::Frequency,char const(&)[12],char const(&)[19],Enchant::Slot>(
      &v174,
      (EnchantUtils **)&v173,
      &v172,
      "respiration",
      "enchantment.oxygen",
      &v171);
    v28 = v174;
    v174 = 0;
    v29 = *(_DWORD *)(v27 + 24);
    *(_DWORD *)(v27 + 24) = v28;
    if ( v29 )
      (*(void (**)(void))(*(_DWORD *)v29 + 4))();
    v30 = Enchant::mEnchants;
    v168 = 2;
    v169 = 7;
    v167 = 4;
      &v170,
      (EnchantUtils **)&v169,
      &v168,
      "depth_strider",
      "enchantment.waterWalker",
      &v167);
    v31 = v170;
    v170 = 0;
    v32 = *(_DWORD *)(v30 + 28);
    *(_DWORD *)(v30 + 28) = v31;
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 4))();
    v33 = 16;
    v34 = 512;
    v164 = 10;
    v35 = Enchant::mEnchants;
    v165 = 9;
    v163 = 16;
    v162 = 512;
    std::make_unique<MeleeWeaponEnchant,Enchant::Type,Enchant::Frequency,char const(&)[10],char const(&)[23],Enchant::Slot,Enchant::Slot>(
      &v166,
      (EnchantUtils **)&v165,
      &v164,
      "sharpness",
      "enchantment.damage.all",
      &v163,
      &v162);
    v36 = v166;
    v166 = 0;
    v37 = *(_DWORD *)(v35 + 36);
    *(_DWORD *)(v35 + 36) = v36;
    if ( v37 )
      (*(void (**)(void))(*(_DWORD *)v37 + 4))();
    v160 = 10;
    v159 = 5;
    v38 = Enchant::mEnchants;
    v158 = *(_QWORD *)&v34;
    std::make_unique<MeleeWeaponEnchant,Enchant::Type,Enchant::Frequency,char const(&)[6],char const(&)[26],Enchant::Slot,Enchant::Slot>(
      &v161,
      (EnchantUtils **)&v160,
      &v159,
      "smite",
      "enchantment.damage.undead",
      (int *)&v158 + 1,
      (int *)&v158);
    v39 = v161;
    v161 = 0;
    v40 = *(_DWORD *)(v38 + 40);
    *(_DWORD *)(v38 + 40) = v39;
    if ( v40 )
      (*(void (**)(void))(*(_DWORD *)v40 + 4))();
    v41 = Enchant::mEnchants;
    v155 = 5;
    v156 = 11;
    v153 = 512;
    v154 = 16;
    std::make_unique<MeleeWeaponEnchant,Enchant::Type,Enchant::Frequency,char const(&)[19],char const(&)[30],Enchant::Slot,Enchant::Slot>(
      &v157,
      (EnchantUtils **)&v156,
      &v155,
      "bane_of_arthropods",
      "enchantment.damage.arthropods",
      &v154,
      &v153);
    v42 = v157;
    v157 = 0;
    v43 = *(_DWORD *)(v41 + 44);
    *(_DWORD *)(v41 + 44) = v42;
    if ( v43 )
      (*(void (**)(void))(*(_DWORD *)v43 + 4))();
    v44 = Enchant::mEnchants;
    v151 = 12;
    v149 = 16;
    v150 = 5;
    std::make_unique<MeleeWeaponEnchant,Enchant::Type,Enchant::Frequency,char const(&)[10],char const(&)[22],Enchant::Slot>(
      &v152,
      (EnchantUtils **)&v151,
      &v150,
      "knockback",
      "enchantment.knockback",
      &v149);
    v45 = v152;
    v152 = 0;
    v46 = *(_DWORD *)(v44 + 48);
    *(_DWORD *)(v44 + 48) = v45;
    if ( v46 )
      (*(void (**)(void))(*(_DWORD *)v46 + 4))();
    v146 = 2;
    v47 = Enchant::mEnchants;
    v147 = 13;
    v145 = 16;
    std::make_unique<MeleeWeaponEnchant,Enchant::Type,Enchant::Frequency,char const(&)[12],char const(&)[17],Enchant::Slot>(
      &v148,
      (EnchantUtils **)&v147,
      &v146,
      "fire_aspect",
      "enchantment.fire",
      &v145);
    v48 = v148;
    v148 = 0;
    v49 = *(_DWORD *)(v47 + 52);
    *(_DWORD *)(v47 + 52) = v48;
    if ( v49 )
      (*(void (**)(void))(*(_DWORD *)v49 + 4))();
    v50 = Enchant::mEnchants;
    v142 = 2;
    v143 = 23;
    v141 = 4096;
    std::make_unique<LootEnchant,Enchant::Type,Enchant::Frequency,char const(&)[16],char const(&)[29],Enchant::Slot>(
      &v144,
      (EnchantUtils **)&v143,
      &v142,
      "luck_of_the_sea",
      "enchantment.lootBonusFishing",
      &v141);
    v51 = v144;
    v144 = 0;
    v52 = *(_DWORD *)(v50 + 92);
    *(_DWORD *)(v50 + 92) = v51;
    if ( v52 )
      (*(void (**)(void))(*(_DWORD *)v52 + 4))();
    v138 = 2;
    v53 = Enchant::mEnchants;
    v139 = 18;
    v137 = 3584;
    std::make_unique<LootEnchant,Enchant::Type,Enchant::Frequency,char const(&)[8],char const(&)[28],Enchant::Slot>(
      &v140,
      (EnchantUtils **)&v139,
      &v138,
      "fortune",
      "enchantment.lootBonusDigger",
      &v137);
    v54 = v140;
    v140 = 0;
    v55 = *(_DWORD *)(v53 + 72);
    *(_DWORD *)(v53 + 72) = v54;
    if ( v55 )
      (*(void (**)(void))(*(_DWORD *)v55 + 4))();
    v56 = Enchant::mEnchants;
    v134 = 2;
    v135 = 14;
    v133 = 16;
    std::make_unique<LootEnchant,Enchant::Type,Enchant::Frequency,char const(&)[8],char const(&)[22],Enchant::Slot>(
      &v136,
      (EnchantUtils **)&v135,
      &v134,
      "looting",
      "enchantment.lootBonus",
      &v133);
    v57 = v136;
    v136 = 0;
    v58 = *(_DWORD *)(v56 + 56);
    *(_DWORD *)(v56 + 56) = v57;
    if ( v58 )
      (*(void (**)(void))(*(_DWORD *)v58 + 4))();
    v59 = Enchant::mEnchants;
    v131 = 15;
    v130 = 10;
    v129 = 3584;
    v128 = 128;
    std::make_unique<DiggingEnchant,Enchant::Type,Enchant::Frequency,char const(&)[11],char const(&)[20],Enchant::Slot,Enchant::Slot>(
      &v132,
      (EnchantUtils **)&v131,
      &v130,
      "efficiency",
      "enchantment.digging",
      &v129,
      &v128);
    v60 = v132;
    v132 = 0;
    v61 = *(_DWORD *)(v59 + 60);
    *(_DWORD *)(v59 + 60) = v60;
    if ( v61 )
      (*(void (**)(void))(*(_DWORD *)v61 + 4))();
    v62 = Enchant::mEnchants;
    v126 = 17;
    v125 = 5;
    v124 = 7743;
    v123 = 25024;
    std::make_unique<DiggingEnchant,Enchant::Type,Enchant::Frequency,char const(&)[11],char const(&)[23],int,int>(
      &v127,
      (EnchantUtils **)&v126,
      &v125,
      "unbreaking",
      "enchantment.durability",
      &v124,
      &v123);
    v63 = v127;
    v127 = 0;
    v64 = *(_DWORD *)(v62 + 68);
    *(_DWORD *)(v62 + 68) = v63;
    if ( v64 )
      (*(void (**)(void))(*(_DWORD *)v64 + 4))();
    v65 = Enchant::mEnchants;
    v121 = 16;
    v120 = 1;
    v119 = 3584;
    v118 = 128;
    std::make_unique<DiggingEnchant,Enchant::Type,Enchant::Frequency,char const(&)[11],char const(&)[23],Enchant::Slot,Enchant::Slot>(
      &v122,
      (EnchantUtils **)&v121,
      &v120,
      "silk_touch",
      "enchantment.untouching",
      &v119,
      &v118);
    v66 = v122;
    v122 = 0;
    v67 = *(_DWORD *)(v65 + 64);
    *(_DWORD *)(v65 + 64) = v66;
    if ( v67 )
      (*(void (**)(void))(*(_DWORD *)v67 + 4))();
    v68 = 32;
    v114 = 32;
    v69 = Enchant::mEnchants;
    v116 = 19;
    v115 = 10;
    std::make_unique<BowEnchant,Enchant::Type,Enchant::Frequency,char const(&)[6],char const(&)[24],Enchant::Slot>(
      &v117,
      (EnchantUtils **)&v116,
      &v115,
      "power",
      "enchantment.arrowDamage",
      &v114);
    v70 = v117;
    v117 = 0;
    v71 = *(_DWORD *)(v69 + 76);
    *(_DWORD *)(v69 + 76) = v70;
    if ( v71 )
      (*(void (**)(void))(*(_DWORD *)v71 + 4))();
    v72 = 2;
    v73 = Enchant::mEnchants;
    v112 = 20;
    v111 = *(_QWORD *)&v68;
    std::make_unique<BowEnchant,Enchant::Type,Enchant::Frequency,char const(&)[6],char const(&)[27],Enchant::Slot>(
      &v113,
      (EnchantUtils **)&v112,
      (int *)&v111 + 1,
      "punch",
      "enchantment.arrowKnockback",
      (int *)&v111);
    v74 = v113;
    v113 = 0;
    v75 = *(_DWORD *)(v73 + 80);
    *(_DWORD *)(v73 + 80) = v74;
    if ( v75 )
      (*(void (**)(void))(*(_DWORD *)v75 + 4))();
    v76 = Enchant::mEnchants;
    v108 = 2;
    v109 = 21;
    v107 = 32;
    std::make_unique<BowEnchant,Enchant::Type,Enchant::Frequency,char const(&)[6],char const(&)[22],Enchant::Slot>(
      &v110,
      (EnchantUtils **)&v109,
      &v108,
      "flame",
      "enchantment.arrowFire",
      &v107);
    v77 = v110;
    v110 = 0;
    v78 = *(_DWORD *)(v76 + 84);
    *(_DWORD *)(v76 + 84) = v77;
    if ( v78 )
      (*(void (**)(void))(*(_DWORD *)v78 + 4))();
    v79 = Enchant::mEnchants;
    v105 = 22;
    v103 = 32;
    v104 = 1;
    std::make_unique<BowEnchant,Enchant::Type,Enchant::Frequency,char const(&)[9],char const(&)[26],Enchant::Slot>(
      &v106,
      (EnchantUtils **)&v105,
      &v104,
      "infinity",
      "enchantment.arrowInfinite",
      &v103);
    v80 = v106;
    v106 = 0;
    v81 = *(_DWORD *)(v79 + 88);
    *(_DWORD *)(v79 + 88) = v80;
    if ( v81 )
      (*(void (**)(void))(*(_DWORD *)v81 + 4))();
    v100 = 2;
    v82 = Enchant::mEnchants;
    v101 = 24;
    v99 = 4096;
    std::make_unique<FishingEnchant,Enchant::Type,Enchant::Frequency,char const(&)[5],char const(&)[25],Enchant::Slot>(
      &v102,
      (EnchantUtils **)&v101,
      &v100,
      "lure",
      "enchantment.fishingSpeed",
      &v99);
    v83 = v102;
    v102 = 0;
    v84 = *(_DWORD *)(v82 + 96);
    *(_DWORD *)(v82 + 96) = v83;
    if ( v84 )
      (*(void (**)(void))(*(_DWORD *)v84 + 4))();
    v85 = Enchant::mEnchants;
    v96 = 2;
    v97 = 25;
    v95 = 4;
    std::make_unique<FrostWalkerEnchant,Enchant::Type,Enchant::Frequency,char const(&)[13],char const(&)[24],Enchant::Slot>(
      &v98,
      (EnchantUtils **)&v97,
      &v96,
      "frost_walker",
      "enchantment.frostwalker",
      &v95);
    v86 = v98;
    v98 = 0;
    v87 = *(_DWORD *)(v85 + 100);
    *(_DWORD *)(v85 + 100) = v86;
    if ( v87 )
      (*(void (**)(void))(*(_DWORD *)v87 + 4))();
    v88 = Enchant::mEnchants;
    v93 = 26;
    v92 = 2;
    v91 = 7743;
    v90 = 25024;
    std::make_unique<MendingEnchant,Enchant::Type,Enchant::Frequency,char const(&)[8],char const(&)[20],int,int>(
      &v94,
      (EnchantUtils **)&v93,
      &v92,
      "mending",
      "enchantment.mending",
      &v91,
      &v90);
    v89 = v94;
    v94 = 0;
    result = *(_DWORD *)(v88 + 104);
    *(_DWORD *)(v88 + 104) = v89;
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  }
  return result;
}


signed int __fastcall Enchant::canEnchant(Enchant *this, const ItemInstance *a2)
{
  Enchant *v2; // r4@1
  int v3; // r0@2
  signed int result; // r0@4

  v2 = this;
  if ( *(_DWORD *)a2 && (v3 = (*(int (**)(void))(**(_DWORD **)a2 + 132))()) != 0 )
  {
    if ( *((_DWORD *)v2 + 3) & v3 )
      result = 1;
    else
      result = (v3 & *((_DWORD *)v2 + 4)) != 0;
  }
  else
    result = 0;
  return result;
}


char *__fastcall Enchant::getStringId(Enchant *this)
{
  return (char *)this + 28;
}


int __fastcall Enchant::isMeleeDamageEnchant(Enchant *this)
{
  return 0;
}


int __fastcall Enchant::getDamageProtection(Enchant *this, int a2, const EntityDamageSource *a3)
{
  return 0;
}


signed int __fastcall Enchant::getMaxLevel(Enchant *this)
{
  return 1;
}


int __fastcall Enchant::getMaxCost(Enchant *this, int a2)
{
  return (*(int (**)(void))(*(_DWORD *)this + 8))() + 5;
}


signed int __fastcall Enchant::getMinLevel(Enchant *this)
{
  return 1;
}


_BOOL4 __fastcall Enchant::canPrimaryEnchant(Enchant *this, int a2)
{
  return (*((_DWORD *)this + 3) & a2) != 0;
}


void __fastcall Enchant::getDescription(Enchant *this, int a2)
{
  Enchant::getDescription(this, a2);
}


void __fastcall Enchant::~Enchant(Enchant *this)
{
  Enchant *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_270167C;
  v2 = *((_DWORD *)this + 7);
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
  v4 = *((_DWORD *)v1 + 6);
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


void __fastcall Enchant::getDescription(Enchant *this, int a2)
{
  I18n::get((int *)this, (int **)(a2 + 24));
}


Enchant *__fastcall Enchant::~Enchant(Enchant *this)
{
  Enchant *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_270167C;
  v2 = *((_DWORD *)this + 7);
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
  v4 = *((_DWORD *)v1 + 6);
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


void __fastcall Enchant::~Enchant(Enchant *this)
{
  Enchant::~Enchant(this);
}


_DWORD *__fastcall Enchant::teardownEnchants(Enchant *this)
{
  __int64 v1; // r4@1
  int v2; // r7@2
  _DWORD *result; // r0@6

  v1 = Enchant::mEnchants;
  if ( unk_2805F90 != (_DWORD)Enchant::mEnchants )
  {
    v2 = Enchant::mEnchants;
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( HIDWORD(v1) != v2 );
  }
  result = &Enchant::mEnchants;
  unk_2805F90 = v1;
  return result;
}


int __fastcall Enchant::getDamageBonus(Enchant *this, int a2, const Entity *a3)
{
  return 0;
}


char *__fastcall Enchant::getDescriptionId(Enchant *this)
{
  return (char *)this + 24;
}


int __fastcall Enchant::isProtectionEnchant(Enchant *this)
{
  return 0;
}


int __fastcall Enchant::getMinCost(Enchant *this, int a2)
{
  return 10 * a2 | 1;
}


signed int __fastcall Enchant::canEnchant(Enchant *this, int a2)
{
  signed int result; // r0@2

  if ( a2 )
  {
    if ( *((_DWORD *)this + 3) & a2 )
      result = 1;
    else
      result = (*((_DWORD *)this + 4) & a2) != 0;
  }
  else
    result = 0;
  return result;
}


int __fastcall Enchant::canPrimaryEnchant(Enchant *this, const ItemInstance *a2)
{
  int result; // r0@2

  if ( *(_DWORD *)a2 )
    result = ((*(int (**)(void))(**(_DWORD **)a2 + 132))() & *((_DWORD *)this + 3)) != 0;
  else
    result = 0;
  return result;
}


_BOOL4 __fastcall Enchant::canSecondaryEnchant(Enchant *this, int a2)
{
  return (*((_DWORD *)this + 4) & a2) != 0;
}


int __fastcall Enchant::isTreasureOnly(Enchant *this)
{
  return 0;
}
