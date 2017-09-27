

void __fastcall UIResourcePackMergeStrategy::~UIResourcePackMergeStrategy(UIResourcePackMergeStrategy *this)
{
  UIResourcePackMergeStrategy::~UIResourcePackMergeStrategy(this);
}


int __fastcall UIResourcePackMergeStrategy::UIResourcePackMergeStrategy(int a1, int *a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  int result; // r0@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  *(_DWORD *)a1 = &off_26D9070;
  sub_119C854((int *)(a1 + 4), a2);
  result = v4;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v5;
  return result;
}


void __fastcall UIResourcePackMergeStrategy::~UIResourcePackMergeStrategy(UIResourcePackMergeStrategy *this)
{
  UIResourcePackMergeStrategy *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9070;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  operator delete((void *)v1);
}


Json::Reader *__fastcall UIResourcePackMergeStrategy::mergeFiles(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, char a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, void *a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  return UIResourcePackMergeStrategy::mergeFiles(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57,
           a58,
           a59,
           a60,
           a61,
           a62,
           a63);
}


Json::Reader *__fastcall UIResourcePackMergeStrategy::mergeFiles(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, char a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, void *a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r9@1
  int v64; // r5@1
  Json::Reader *result; // r0@1
  int v66; // r4@1
  Json::Reader *v67; // r0@2
  double v68; // r0@4
  unsigned int v69; // r0@4
  int v70; // r6@5
  int v71; // r5@6
  int *v72; // r4@6
  const char *v73; // r0@8
  Json::Value *v74; // r8@8
  char *v75; // r0@10
  int *v76; // r0@10
  void *v77; // r0@10
  void *v78; // r0@11
  unsigned int *v79; // r2@13
  signed int v80; // r1@15
  unsigned int *v81; // r2@21
  signed int v82; // r1@23
  int v83; // r0@31
  Json::Value *v84; // r8@31
  char *v85; // r11@31
  char *v86; // r10@31
  int *v87; // r7@31
  int v88; // r2@31
  unsigned int *v89; // r2@34
  signed int v90; // r1@36
  unsigned int *v91; // r2@38
  signed int v92; // r1@40
  unsigned int *v93; // r2@42
  signed int v94; // r1@44
  signed int v95; // r1@50
  int v96; // r4@61
  int *v97; // r4@61
  int v98; // t1@61
  char *v99; // r0@62
  int i; // r6@63
  const void **v101; // r0@64
  void *v102; // r0@64
  __int64 v103; // r4@65
  unsigned int *v104; // r2@67
  signed int v105; // r1@69
  int *v106; // r0@75
  __int64 v107; // r4@80
  unsigned int *v108; // r2@82
  signed int v109; // r1@84
  int *v110; // r0@90
  void *v111; // r0@95
  void *v112; // r0@96
  char *v113; // r0@97
  unsigned int *v114; // r2@98
  Json::Value *v115; // r4@104
  int v116; // r0@105
  int *v117; // r10@105
  char *v118; // r6@105
  int v119; // r7@106
  Json::Value *v120; // r8@106
  void *v121; // r4@106
  int *v122; // r7@106
  void *v123; // r0@106
  void *v124; // r4@110
  void *v125; // r0@110
  char *v126; // r10@112
  Json::Value *v127; // r1@113
  int v128; // r0@113
  Json::Value **v129; // r4@113
  int v130; // r2@113
  int v131; // r2@114
  int v132; // r11@115
  bool v133; // zf@115
  Json::Value *v134; // r3@118
  bool v135; // zf@118
  int v136; // r2@122
  int v137; // r8@127
  __int64 v138; // r4@127
  unsigned int *v139; // r2@129
  signed int v140; // r1@131
  int *v141; // r0@137
  __int64 v142; // r4@142
  unsigned int *v143; // r2@144
  signed int v144; // r1@146
  int *v145; // r0@152
  void *v146; // r0@157
  void *v147; // r0@158
  int v148; // r8@160
  __int64 v149; // r4@160
  unsigned int *v150; // r2@162
  signed int v151; // r1@164
  int *v152; // r0@170
  __int64 v153; // r4@175
  unsigned int *v154; // r2@177
  signed int v155; // r1@179
  int *v156; // r0@185
  void *v157; // r0@190
  void *v158; // r0@191
  unsigned int *v159; // r2@193
  signed int v160; // r1@195
  unsigned int *v161; // r2@197
  signed int v162; // r1@199
  int v163; // r11@208
  char v164; // r0@208
  int v165; // r5@208
  unsigned int v166; // r6@208
  __int64 v167; // r0@208
  int v168; // r0@210
  int v169; // r0@214
  int v170; // r1@214
  int v171; // r2@215
  int v172; // r2@215
  void *v173; // r0@219
  void *v174; // r0@220
  unsigned int *v175; // r2@221
  signed int v176; // r1@223
  char v177; // r0@226
  double v178; // r0@228
  char *v179; // r4@228
  unsigned int *v180; // r2@229
  signed int v181; // r1@231
  int v182; // r1@237
  int v183; // t1@237
  void *v184; // r0@237
  unsigned int v185; // r5@240
  int v186; // r10@240
  int *v187; // r6@240
  int v188; // r7@241
  int v189; // r4@241
  const void *v190; // r1@243
  size_t v191; // r2@243
  int v192; // r0@244
  int v193; // r8@245
  unsigned int v194; // r5@247
  int *v195; // r4@250
  Json::Value *v196; // r0@252
  __int64 v197; // r4@261
  int v198; // r0@263
  int v199; // r1@263
  int v200; // r2@263
  int v201; // r3@263
  int v202; // r7@264
  bool v203; // zf@265
  int v204; // r3@265
  int v205; // r6@268
  bool v206; // zf@268
  int v207; // r3@272
  Json::Value *v208; // r0@277
  unsigned int *v209; // r2@278
  signed int v210; // r1@280
  int *v211; // r0@286
  __int64 v212; // r4@291
  unsigned int *v213; // r2@293
  signed int v214; // r1@295
  int *v215; // r0@301
  void *v216; // r0@306
  void *v217; // r0@307
  void *v218; // r0@308
  unsigned int *v219; // r2@309
  signed int v220; // r1@311
  bool v221; // zf@313
  unsigned int *v222; // r2@317
  signed int v223; // r1@319
  unsigned int *v224; // r2@321
  signed int v225; // r1@323
  unsigned int *v226; // r2@325
  signed int v227; // r1@327
  unsigned int *v228; // r2@329
  signed int v229; // r1@331
  unsigned int *v230; // r2@333
  signed int v231; // r1@335
  char *v232; // r0@366
  int *v233; // r0@368
  void *v234; // r0@369
  unsigned int *v235; // r2@371
  signed int v236; // r1@373
  unsigned int *v237; // r2@375
  signed int v238; // r1@377
  unsigned int *v239; // r2@387
  signed int v240; // r1@389
  unsigned int *v241; // r2@395
  signed int v242; // r1@397
  unsigned int *v243; // r2@399
  signed int v244; // r1@401
  __int64 v245; // kr18_8@415
  int v246; // r7@415
  UIModification *v247; // r5@415
  int v248; // r5@417
  void *v249; // r0@418
  char *v250; // r0@424
  int v251; // r6@429
  unsigned int *v252; // r2@431
  signed int v253; // r1@433
  unsigned int *v254; // r2@435
  signed int v255; // r1@437
  int v256; // r5@447
  int v257; // r1@447
  void *v258; // r0@447
  int v259; // r1@448
  void *v260; // r0@448
  void *v261; // r4@453
  void *v262; // r6@453
  unsigned int *v263; // r2@455
  signed int v264; // r1@457
  int *v265; // r0@463
  char *v266; // [sp+4h] [bp-394h]@63
  char *v267; // [sp+8h] [bp-390h]@63
  char *v268; // [sp+Ch] [bp-38Ch]@0
  char *v269; // [sp+10h] [bp-388h]@0
  char *v270; // [sp+14h] [bp-384h]@0
  int v271; // [sp+18h] [bp-380h]@0
  char v272; // [sp+1Ch] [bp-37Ch]@0
  int *v273; // [sp+3Ch] [bp-35Ch]@241
  int v274; // [sp+40h] [bp-358h]@105
  int *v275; // [sp+84h] [bp-314h]@105
  Json::Value *v276; // [sp+94h] [bp-304h]@104
  int *s1; // [sp+9Ch] [bp-2FCh]@241
  int v278; // [sp+A4h] [bp-2F4h]@106
  unsigned int v279; // [sp+ACh] [bp-2ECh]@240
  int v280; // [sp+B4h] [bp-2E4h]@62
  int v281; // [sp+B8h] [bp-2E0h]@62
  int *v282; // [sp+C0h] [bp-2D8h]@31
  PackReport *v283; // [sp+C8h] [bp-2D0h]@62
  int v284; // [sp+CCh] [bp-2CCh]@4
  signed int v285; // [sp+D0h] [bp-2C8h]@62
  char v286; // [sp+D4h] [bp-2C4h]@63
  int v287; // [sp+D8h] [bp-2C0h]@63
  int v288; // [sp+DCh] [bp-2BCh]@63
  int *v289; // [sp+E0h] [bp-2B8h]@63
  int *v290; // [sp+E4h] [bp-2B4h]@63
  int v291; // [sp+E8h] [bp-2B0h]@63
  int v292; // [sp+ECh] [bp-2ACh]@42
  int v293; // [sp+F0h] [bp-2A8h]@38
  char *v294; // [sp+F4h] [bp-2A4h]@65
  char *v295; // [sp+F8h] [bp-2A0h]@65
  char *v296; // [sp+FCh] [bp-29Ch]@65
  void **v297; // [sp+100h] [bp-298h]@65
  __int64 v298; // [sp+104h] [bp-294h]@65
  int v299; // [sp+118h] [bp-280h]@34
  char *v300; // [sp+11Ch] [bp-27Ch]@64
  char v301; // [sp+120h] [bp-278h]@31
  char v302; // [sp+130h] [bp-268h]@31
  int v303; // [sp+140h] [bp-258h]@10
  int v304; // [sp+148h] [bp-250h]@8
  char v305; // [sp+14Ch] [bp-24Ch]@29
  char v306; // [sp+154h] [bp-244h]@7
  void *ptr; // [sp+15Ch] [bp-23Ch]@7
  unsigned int v308; // [sp+160h] [bp-238h]@4
  int v309; // [sp+164h] [bp-234h]@4
  int v310; // [sp+168h] [bp-230h]@4
  signed int v311; // [sp+16Ch] [bp-22Ch]@4
  int v312; // [sp+170h] [bp-228h]@4
  int v313; // [sp+174h] [bp-224h]@33
  void *v314; // [sp+178h] [bp-220h]@3
  void *v315; // [sp+17Ch] [bp-21Ch]@453
  char v316; // [sp+184h] [bp-214h]@2
  int v317; // [sp+1F4h] [bp-1A4h]@160
  int v318; // [sp+1F8h] [bp-1A0h]@160
  char *v319; // [sp+1FCh] [bp-19Ch]@160
  char *v320; // [sp+200h] [bp-198h]@160
  char *v321; // [sp+204h] [bp-194h]@160
  void **v322; // [sp+208h] [bp-190h]@160
  __int64 v323; // [sp+20Ch] [bp-18Ch]@160
  int v324; // [sp+220h] [bp-178h]@127
  int v325; // [sp+224h] [bp-174h]@127
  char *v326; // [sp+228h] [bp-170h]@127
  char *v327; // [sp+22Ch] [bp-16Ch]@127
  char *v328; // [sp+230h] [bp-168h]@127
  void **v329; // [sp+234h] [bp-164h]@127
  __int64 v330; // [sp+238h] [bp-160h]@127
  int v331; // [sp+24Ch] [bp-14Ch]@261
  int v332; // [sp+250h] [bp-148h]@261
  int v333; // [sp+254h] [bp-144h]@261
  char *v334; // [sp+258h] [bp-140h]@261
  char *v335; // [sp+25Ch] [bp-13Ch]@261
  char *v336; // [sp+260h] [bp-138h]@261
  void **v337; // [sp+264h] [bp-134h]@261
  __int64 v338; // [sp+268h] [bp-130h]@261
  PackReport *v339; // [sp+27Ch] [bp-11Ch]@250
  int *v340; // [sp+280h] [bp-118h]@250
  int *v341; // [sp+284h] [bp-114h]@250
  int v342; // [sp+28Ch] [bp-10Ch]@219
  int v343; // [sp+290h] [bp-108h]@219
  char *v344; // [sp+294h] [bp-104h]@218
  void *v345; // [sp+298h] [bp-100h]@218
  int v346; // [sp+2A0h] [bp-F8h]@110
  int *v347; // [sp+2A4h] [bp-F4h]@110
  int v348; // [sp+2ACh] [bp-ECh]@106
  int v349; // [sp+2B0h] [bp-E8h]@106
  char v350; // [sp+2B7h] [bp-E1h]@106
  char v351; // [sp+2B8h] [bp-E0h]@105
  char v352; // [sp+2C0h] [bp-D8h]@105
  UIModification *v353; // [sp+2C8h] [bp-D0h]@104
  Json::Value **v354; // [sp+2CCh] [bp-CCh]@104
  Json::Value **v355; // [sp+2D0h] [bp-C8h]@104
  char v356; // [sp+2D4h] [bp-C4h]@228
  char v357; // [sp+2D8h] [bp-C0h]@228
  char v358; // [sp+2E0h] [bp-B8h]@228
  int v359; // [sp+2E4h] [bp-B4h]@228
  int v360; // [sp+2E8h] [bp-B0h]@228
  int v361; // [sp+2ECh] [bp-ACh]@228
  int v362; // [sp+2F0h] [bp-A8h]@228
  int v363; // [sp+2F4h] [bp-A4h]@228
  int v364; // [sp+2F8h] [bp-A0h]@228
  int v365; // [sp+2FCh] [bp-9Ch]@228
  int v366; // [sp+300h] [bp-98h]@228
  int v367; // [sp+304h] [bp-94h]@228
  int v368; // [sp+308h] [bp-90h]@228
  int v369; // [sp+30Ch] [bp-8Ch]@228
  int v370; // [sp+310h] [bp-88h]@228
  int v371; // [sp+314h] [bp-84h]@228
  int v372; // [sp+318h] [bp-80h]@228
  int v373; // [sp+31Ch] [bp-7Ch]@228
  int v374; // [sp+320h] [bp-78h]@228
  int v375; // [sp+324h] [bp-74h]@228
  int v376; // [sp+328h] [bp-70h]@228
  int v377; // [sp+32Ch] [bp-6Ch]@228
  int v378; // [sp+330h] [bp-68h]@228
  int v379; // [sp+334h] [bp-64h]@228
  char v380; // [sp+338h] [bp-60h]@228
  char v381; // [sp+364h] [bp-34h]@228
  char v382; // [sp+368h] [bp-30h]@228
  char v383; // [sp+36Ch] [bp-2Ch]@228

  v63 = a2;
  v64 = a1;
  result = (Json::Reader *)(*(_QWORD *)a2 >> 32);
  v66 = *(_QWORD *)a2;
  if ( (Json::Reader *)v66 != result )
  {
    v67 = Json::Reader::Reader((Json::Reader *)&v316);
    if ( Json::Reader::parse((int)v67, (int *)(v66 + 4), *(_DWORD *)(v64 + 8), 1) )
    {
      sub_DBF530((int)&v314, *(_DWORD *)(v64 + 8));
      if ( (unsigned int)((signed int)((*(_QWORD *)v63 >> 32) - *(_QWORD *)v63) >> 3) >= 2 )
      {
        v309 = 0;
        v310 = 0;
        v311 = 1065353216;
        v312 = 0;
        HIDWORD(v68) = 10;
        LODWORD(v68) = &v311;
        v69 = sub_119C844(v68);
        v308 = v69;
        v284 = v64;
        if ( v69 == 1 )
        {
          v72 = &v313;
          v313 = 0;
        }
        else
          v70 = v64;
          if ( v69 >= 0x40000000 )
            sub_119C874();
          v71 = 4 * v69;
          v72 = (int *)operator new(4 * v69);
          _aeabi_memclr4(v72, v71);
          v64 = v70;
        ptr = v72;
        Json::Value::begin((Json::Value *)&v306, *(_DWORD *)(v64 + 8));
        while ( 1 )
          Json::Value::end((Json::Value *)&v305, *(_DWORD *)(v64 + 8));
          if ( Json::ValueIteratorBase::isEqual(
                 (Json::ValueIteratorBase *)&v306,
                 (const Json::ValueIteratorBase *)&v305) == 1 )
            break;
          v73 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v306);
          sub_119C884((void **)&v304, v73);
          v74 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v306);
          if ( !Json::Value::isNull(v74) && Json::Value::isObject(v74) == 1 )
          {
            v75 = sub_119C8B4(&v304, 64, 0);
            sub_119C8C4((void **)&v303, &v304, 0, (unsigned int)v75);
            v76 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                           (unsigned __int64 *)&ptr,
                           (int **)&v303);
            EntityInteraction::setInteractText(v76, &v304);
            v77 = (void *)(v303 - 12);
            if ( (int *)(v303 - 12) != &dword_28898C0 )
            {
              v81 = (unsigned int *)(v303 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v82 = __ldrex(v81);
                while ( __strex(v82 - 1, v81) );
              }
              else
                v82 = (*v81)--;
              if ( v82 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v77);
            }
          }
          v78 = (void *)(v304 - 12);
          if ( (int *)(v304 - 12) != &dword_28898C0 )
            v79 = (unsigned int *)(v304 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v80 = __ldrex(v79);
              while ( __strex(v80 - 1, v79) );
            else
              v80 = (*v79)--;
            if ( v80 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v78);
          Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v306);
        if ( (signed int)((*(_QWORD *)v63 >> 32) - *(_QWORD *)v63) >= 9 )
          v83 = *(_DWORD *)v63;
          v84 = (Json::Value *)&v302;
          v282 = (int *)(v64 + 4);
          v85 = &v301;
          v86 = &v316;
          v87 = &dword_28898C0;
          v88 = 1;
          do
            v96 = v83 + 8 * v88;
            v98 = *(_DWORD *)(v96 + 4);
            v97 = (int *)(v96 + 4);
            if ( *(_DWORD *)(v98 - 12) )
              v285 = v88;
              Json::Value::Value(v84, *(const Json::Value **)(v64 + 8));
              v283 = (PackReport *)(**(_DWORD **)(v64 + 12) + 104 * *(_DWORD *)(*(_DWORD *)v63 + 8 * v285));
              v99 = PackReport::getErrors(v283);
              v281 = *(_DWORD *)v99;
              v280 = *((_DWORD *)v99 + 1);
              Json::Value::Value(v85, 0);
              if ( Json::Reader::parse((int)v86, v97, (int)v85, 1) )
                v287 = 0;
                v288 = 0;
                v291 = 0;
                v289 = &v287;
                v290 = &v287;
                mergeControls(v84, (int)v85, (int)v283, (int)&v286, (unsigned __int64 *)&ptr, v282, v285);
                for ( i = (int)v289; ; i = sub_119CB48(i) )
                {
                  if ( (int *)i == &v287 )
                  {
                    findInvalidControls((int)v84, (signed int)&v314, __PAIR__((unsigned int)v282, (unsigned int)v283));
                    v250 = PackReport::getErrors(v283);
                    if ( v280 - v281 == (*(_QWORD *)v250 >> 32) - (unsigned int)*(_QWORD *)v250 )
                      Json::Value::operator=(*(_DWORD *)(v64 + 8), v84);
                    std::_Rb_tree<ModificationOperation,ModificationOperation,std::_Identity<ModificationOperation>,std::less<ModificationOperation>,std::allocator<ModificationOperation>>::_M_erase(
                      (int)&v286,
                      v288);
                    v86 = &v316;
                    goto LABEL_427;
                  }
                  v115 = *(Json::Value **)(i + 20);
                  v276 = *(Json::Value **)(i + 16);
                  v353 = 0;
                  v354 = 0;
                  v355 = 0;
                  if ( Json::Value::isArray(v115) != 1 )
                    continue;
                  Json::Value::begin((Json::Value *)&v352, (int)v115);
                  Json::Value::end((Json::Value *)&v351, (int)v115);
                  v116 = i + 24;
                  v274 = i;
                  v117 = v87;
                  v118 = (char *)v84;
                  v275 = (int *)v116;
                  while ( !Json::ValueIteratorBase::isEqual(
                             (Json::ValueIteratorBase *)&v352,
                             (const Json::ValueIteratorBase *)&v351) )
                    v119 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v352);
                    v120 = (Json::Value *)Json::Value::operator[](v119, "control_name");
                    v350 = Json::Value::isString(v120);
                    v121 = Json::Value::operator[](v119, "array_name");
                    v278 = v119;
                    sub_119C884((void **)&v348, (const char *)&unk_257BC67);
                    Json::Value::asString(&v349, (int)v121, &v348);
                    v122 = v117;
                    v123 = (void *)(v348 - 12);
                    if ( (int *)(v348 - 12) != v117 )
                    {
                      v159 = (unsigned int *)(v348 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v160 = __ldrex(v159);
                        while ( __strex(v160 - 1, v159) );
                        v122 = v117;
                      }
                      else
                        v160 = (*v159)--;
                      if ( v160 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v123);
                    }
                    if ( !*(_DWORD *)(v349 - 12) && v350 )
                      sub_119CAD8((void **)&v349, "controls", (_BYTE *)8);
                    v124 = Json::Value::operator[](v278, "operation");
                    sub_119C884((void **)&v346, (const char *)&unk_257BC67);
                    Json::Value::asString((int *)&v347, (int)v124, &v346);
                    v125 = (void *)(v346 - 12);
                    if ( (int *)(v346 - 12) != v122 )
                      v161 = (unsigned int *)(v346 - 4);
                          v162 = __ldrex(v161);
                        while ( __strex(v162 - 1, v161) );
                        v162 = (*v161)--;
                      if ( v162 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v125);
                    if ( *(_DWORD *)(v349 - 12) )
                      v126 = v118;
                      if ( *(v347 - 3) )
                        v127 = (Json::Value *)Json::Value::operator[](v276, (const char **)&v349);
                        v129 = v354;
                        v128 = (int)v353;
                        v130 = -858993459 * (((char *)v354 - (char *)v353) >> 2) >> 2;
                        if ( v130 < 1 )
                        {
LABEL_122:
                          v136 = -858993459 * (((signed int)v354 - v128) >> 2);
                          if ( v136 == 1 )
                          {
                            v132 = v128;
                          }
                          else
                            if ( v136 == 2 )
                            {
                              v132 = v128;
                            }
                            else
                              if ( v136 != 3 )
                                goto LABEL_207;
                              if ( *(Json::Value **)v128 == v127 )
                                goto LABEL_206;
                              v132 = v128 + 20;
                            if ( *(Json::Value **)v132 == v127 )
                              goto LABEL_206;
                            v132 += 20;
                          if ( *(Json::Value **)v132 == v127 )
                            goto LABEL_206;
LABEL_207:
                          if ( v354 == v355 )
                            std::vector<UIModification,std::allocator<UIModification>>::_M_emplace_back_aux<Json::Value &,bool &>(
                              (unsigned __int64 *)&v353,
                              v127,
                              &v350);
                            v168 = (int)v354;
                            v163 = v64;
                            v164 = v350;
                            *v354 = v127;
                            v129[1] = 0;
                            v165 = (int)(v129 + 1);
                            *(_DWORD *)(v165 + 4) = 0;
                            *(_DWORD *)(v165 + 8) = 0;
                            *(_BYTE *)(v165 + 12) = v164;
                            v166 = Json::Value::size(v127);
                            v167 = *(_QWORD *)(v129 + 1);
                            HIDWORD(v167) = -1431655765 * ((HIDWORD(v167) - (signed int)v167) >> 2);
                            if ( v166 <= HIDWORD(v167) )
                              if ( v166 < HIDWORD(v167) )
                                v129[2] = (Json::Value *)(v167 + 12 * v166);
                              std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::_M_default_append(
                                (int)(v129 + 1),
                                v166 - HIDWORD(v167));
                            if ( (signed int)v166 > 0 )
                              v169 = 0;
                              v170 = 0;
                              do
                              {
                                v171 = *(_DWORD *)v165;
                                *(_DWORD *)(v171 + v169) = v170;
                                v172 = v171 + v169;
                                ++v170;
                                v169 += 12;
                                *(_DWORD *)(v172 + 4) = 0;
                                *(_BYTE *)(v172 + 8) = 0;
                              }
                              while ( v166 != v170 );
                            v64 = v163;
                            v168 = (int)(v354 + 5);
                            v354 += 5;
                          v132 = v168 - 20;
                        }
                        else
                          v131 = v130 + 1;
                          while ( 1 )
                            v133 = *(_DWORD *)v128 == (_DWORD)v127;
                            if ( *(Json::Value **)v128 != v127 )
                              v133 = *(_DWORD *)(v128 + 20) == (_DWORD)v127;
                            if ( v133 )
                              break;
                            v132 = v128 + 40;
                            v134 = *(Json::Value **)(v128 + 40);
                            v135 = v134 == v127;
                            if ( v134 != v127 )
                              v132 = v128 + 60;
                              v135 = *(_DWORD *)(v128 + 60) == (_DWORD)v127;
                            if ( v135 )
                            --v131;
                            v128 += 80;
                            if ( v131 <= 1 )
                              goto LABEL_122;
LABEL_206:
                          if ( (Json::Value **)v132 == v354 )
                            goto LABEL_207;
                        v344 = (char *)(v122 + 3);
                        v345 = 0;
                        if ( v350 )
                          sub_119C884((void **)&v342, (const char *)&unk_257BC67);
                          Json::Value::asString(&v343, (int)v120, &v342);
                          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                            (int *)&v344,
                            &v343);
                          v173 = (void *)(v343 - 12);
                          if ( (int *)(v343 - 12) != v122 )
                            v230 = (unsigned int *)(v343 - 4);
                            if ( &pthread_create )
                              __dmb();
                                v231 = __ldrex(v230);
                              while ( __strex(v231 - 1, v230) );
                              v231 = (*v230)--;
                            if ( v231 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v173);
                          v284 = v64;
                          v174 = (void *)(v342 - 12);
                          if ( (int *)(v342 - 12) != v122 )
                            v175 = (unsigned int *)(v342 - 4);
                                v176 = __ldrex(v175);
                              while ( __strex(v176 - 1, v175) );
                              v176 = (*v175)--;
                            if ( v176 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v174);
                          v345 = Json::Value::operator[](v278, "where");
                        v177 = byte_27CA494;
                        if ( !(v177 & 1) && j___cxa_guard_acquire(&byte_27CA494) )
                          sub_119C884((void **)&v358, "insert_back");
                          v359 = 1;
                          sub_119C884((void **)&v360, "insert_front");
                          v361 = 2;
                          sub_119C884((void **)&v362, "insert_after");
                          v363 = 3;
                          sub_119C884((void **)&v364, "insert_before");
                          v365 = 4;
                          sub_119C884((void **)&v366, "move_back");
                          v367 = 5;
                          sub_119C884((void **)&v368, "move_front");
                          v369 = 6;
                          sub_119C884((void **)&v370, "move_after");
                          v371 = 7;
                          sub_119C884((void **)&v372, "move_before");
                          v373 = 8;
                          sub_119C884((void **)&v374, "swap");
                          v375 = 9;
                          sub_119C884((void **)&v376, "remove");
                          v377 = 10;
                          sub_119C884((void **)&v378, "replace");
                          v379 = 11;
                          v266 = &v383;
                          v267 = &v382;
                          v268 = &v357;
                          v269 = &v381;
                          v270 = &v356;
                          HIDWORD(v178) = &v358;
                          LODWORD(v178) = &dword_27CA4B4;
                          std::_Hashtable<std::string,std::pair<std::string const,UIOperation>,std::allocator<std::pair<std::string const,UIOperation>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,UIOperation> const*>(
                            v178,
                            (int **)&v380,
                            0);
                          v179 = &v380;
                          do
                            v183 = *((_DWORD *)v179 - 2);
                            v179 -= 8;
                            v182 = v183;
                            v184 = (void *)(v183 - 12);
                            if ( (int *)(v183 - 12) != v122 )
                              v180 = (unsigned int *)(v182 - 4);
                              if ( &pthread_create )
                                __dmb();
                                do
                                  v181 = __ldrex(v180);
                                while ( __strex(v181 - 1, v180) );
                              else
                                v181 = (*v180)--;
                              if ( v181 <= 0 )
                                j_j_j_j_j__ZdlPv_9_1(v184);
                          while ( v179 != &v358 );
                          _cxa_atexit(std::unordered_map<std::string,UIOperation,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,UIOperation>>>::~unordered_map);
                          j___cxa_guard_release(&byte_27CA494);
                        v185 = sub_119C9A4(v347, *(v347 - 3), -955291385);
                        v279 = unk_27CA4B8;
                        v186 = v185 % unk_27CA4B8;
                        v187 = *(int **)(dword_27CA4B4 + 4 * unk_27CA4B8);
                        if ( v187 )
                          v273 = v122;
                          v188 = *v187;
                          s1 = v347;
                          v189 = *(_DWORD *)(*v187 + 12);
                            if ( v189 == v185 )
                              v190 = *(const void **)(v188 + 4);
                              v191 = *(s1 - 3);
                              if ( v191 == *((_DWORD *)v190 - 3) )
                                v192 = memcmp(s1, v190, v191);
                                if ( !v192 )
                                  break;
                            v193 = *(_DWORD *)v188;
                            if ( *(_DWORD *)v188 )
                              v189 = *(_DWORD *)(v193 + 12);
                              v187 = (int *)v188;
                              v188 = *(_DWORD *)v188;
                              if ( *(_DWORD *)(v193 + 12) % v279 == v186 )
                                continue;
                            goto LABEL_247;
                          v221 = v187 == 0;
                          if ( v187 )
                            v192 = *v187;
                            v221 = *v187 == 0;
                          if ( v221 )
LABEL_247:
                            v194 = 0;
                            goto LABEL_248;
                          v194 = *(_DWORD *)(v192 + 8);
LABEL_248:
                          v122 = v273;
                          v194 = 0;
                        v339 = v283;
                        v340 = v282;
                        v341 = v275;
                        v195 = v122;
                        switch ( v194 )
                          case 5u:
                          case 6u:
                          case 7u:
                          case 8u:
                          case 9u:
                            UIModification::move((Json::Value **)v132, (int)&v344, v194, v278, (int)&v339);
                            goto LABEL_366;
                          case 1u:
                          case 2u:
                          case 3u:
                          case 4u:
                            v196 = (Json::Value *)Json::Value::operator[](v278, "value");
                            UIModification::insert(
                              v132,
                              (int)&v344,
                              v194,
                              v196,
                              (int)&v339,
                              (int)v266,
                              (int)v267,
                              (int)v268,
                              (int)v269,
                              (int)v270,
                              v271,
                              v272);
                          case 0xAu:
                            v198 = UIModification::_findIndex((Json::Value **)v132, (int)&v344, 0xAu, (int)&v339);
                            v199 = *(_QWORD *)(v132 + 4) >> 32;
                            v200 = *(_QWORD *)(v132 + 4);
                            v201 = -1431655765 * ((v199 - v200) >> 2) >> 2;
                            if ( v201 >= 1 )
                              v202 = v201 + 1;
                                v203 = *(_DWORD *)v200 == v198;
                                v204 = v200;
                                if ( *(_DWORD *)v200 != v198 )
                                {
                                  v204 = v200 + 12;
                                  v203 = *(_DWORD *)(v200 + 12) == v198;
                                }
                                if ( v203 )
                                  goto LABEL_364;
                                v204 = v200 + 24;
                                v205 = *(_DWORD *)(v200 + 24);
                                v206 = v205 == v198;
                                if ( v205 != v198 )
                                  v204 = v200 + 36;
                                  v206 = *(_DWORD *)(v200 + 36) == v198;
                                if ( v206 )
                                --v202;
                                v200 += 48;
                              while ( v202 > 1 );
                            v207 = -1431655765 * ((v199 - v200) >> 2);
                            if ( v207 == 1 )
                              v204 = v200;
                              if ( v207 == 2 )
                                if ( v207 != 3 )
                                  goto LABEL_366;
                                if ( *(_DWORD *)v200 == v198 )
                                v204 = v200 + 12;
                              if ( *(_DWORD *)v204 == v198 )
                                goto LABEL_364;
                              v204 += 12;
                            if ( *(_DWORD *)v204 == v198 )
LABEL_364:
                              if ( v204 != v199 )
                                *(_BYTE *)(v204 + 8) = 1;
LABEL_366:
                            v232 = v344 - 12;
                            if ( (int *)(v344 - 12) != v195 )
                              v239 = (unsigned int *)(v344 - 4);
                                  v240 = __ldrex(v239);
                                while ( __strex(v240 - 1, v239) );
                                v240 = (*v239)--;
                              if ( v240 <= 0 )
                                j_j_j_j_j__ZdlPv_9_1(v232);
                            v64 = v284;
                            v126 = &v302;
                            v122 = v195;
                            goto LABEL_368;
                          case 0xBu:
                            v208 = (Json::Value *)Json::Value::operator[](v278, "value");
                            UIModification::replace(v132, (int)&v344, v208, (int)&v339);
                          default:
                            sub_119C854(&v331, v282);
                            sub_119C854(&v332, v275);
                            sub_119C854(&v333, (int *)&v347);
                            v334 = 0;
                            v335 = 0;
                            v336 = 0;
                            v334 = (char *)operator new(0xCu);
                            v336 = v334 + 12;
                            v335 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                                             (int)&v331,
                                             (int)&v334,
                                             (int)v334);
                            UIPackError::UIPackError(&v337, 9, (unsigned __int64 *)&v334);
                            PackReport::addError<UIPackError>((int)v283, (int)&v337);
                            v337 = &off_26D9084;
                            v197 = v338;
                            if ( (_DWORD)v338 != HIDWORD(v338) )
                                v211 = (int *)(*(_DWORD *)v197 - 12);
                                if ( v211 != v122 )
                                  v209 = (unsigned int *)(*(_DWORD *)v197 - 4);
                                  if ( &pthread_create )
                                  {
                                    __dmb();
                                    do
                                      v210 = __ldrex(v209);
                                    while ( __strex(v210 - 1, v209) );
                                  }
                                  else
                                    v210 = (*v209)--;
                                  if ( v210 <= 0 )
                                    j_j_j_j_j__ZdlPv_9_1(v211);
                                LODWORD(v197) = v197 + 4;
                              while ( (_DWORD)v197 != HIDWORD(v197) );
                              LODWORD(v197) = v338;
                            if ( (_DWORD)v197 )
                              operator delete((void *)v197);
                            v212 = *(_QWORD *)&v334;
                            if ( v334 != v335 )
                                v215 = (int *)(*(_DWORD *)v212 - 12);
                                if ( v215 != v122 )
                                  v213 = (unsigned int *)(*(_DWORD *)v212 - 4);
                                      v214 = __ldrex(v213);
                                    while ( __strex(v214 - 1, v213) );
                                    v214 = (*v213)--;
                                  if ( v214 <= 0 )
                                    j_j_j_j_j__ZdlPv_9_1(v215);
                                LODWORD(v212) = v212 + 4;
                              while ( (_DWORD)v212 != HIDWORD(v212) );
                              LODWORD(v212) = v334;
                            if ( (_DWORD)v212 )
                              operator delete((void *)v212);
                            v216 = (void *)(v333 - 12);
                            if ( (int *)(v333 - 12) != v122 )
                              v241 = (unsigned int *)(v333 - 4);
                                  v242 = __ldrex(v241);
                                while ( __strex(v242 - 1, v241) );
                                v242 = (*v241)--;
                              if ( v242 <= 0 )
                                j_j_j_j_j__ZdlPv_9_1(v216);
                            v217 = (void *)(v332 - 12);
                            if ( (int *)(v332 - 12) != v122 )
                              v243 = (unsigned int *)(v332 - 4);
                                  v244 = __ldrex(v243);
                                while ( __strex(v244 - 1, v243) );
                                v244 = (*v243)--;
                              if ( v244 <= 0 )
                                j_j_j_j_j__ZdlPv_9_1(v217);
                            v195 = v122;
                            v218 = (void *)(v331 - 12);
                            if ( (int *)(v331 - 12) != v122 )
                              v219 = (unsigned int *)(v331 - 4);
                                  v220 = __ldrex(v219);
                                while ( __strex(v220 - 1, v219) );
                                v220 = (*v219)--;
                              if ( v220 <= 0 )
                                j_j_j_j_j__ZdlPv_9_1(v218);
LABEL_160:
                      v148 = v64;
                      sub_119C854(&v317, v282);
                      sub_119C854(&v318, v275);
                      v319 = 0;
                      v320 = 0;
                      v321 = 0;
                      v319 = (char *)operator new(8u);
                      v321 = v319 + 8;
                      v320 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                                       (int)&v317,
                                       (int)&v319,
                                       (int)v319);
                      UIPackError::UIPackError(&v322, 8, (unsigned __int64 *)&v319);
                      PackReport::addError<UIPackError>((int)v283, (int)&v322);
                      v322 = &off_26D9084;
                      v149 = v323;
                      if ( (_DWORD)v323 != HIDWORD(v323) )
                          v152 = (int *)(*(_DWORD *)v149 - 12);
                          if ( v152 != v122 )
                            v150 = (unsigned int *)(*(_DWORD *)v149 - 4);
                                v151 = __ldrex(v150);
                              while ( __strex(v151 - 1, v150) );
                              v151 = (*v150)--;
                            if ( v151 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v152);
                          LODWORD(v149) = v149 + 4;
                        while ( (_DWORD)v149 != HIDWORD(v149) );
                        LODWORD(v149) = v323;
                      if ( (_DWORD)v149 )
                        operator delete((void *)v149);
                      v153 = *(_QWORD *)&v319;
                      if ( v319 != v320 )
                          v156 = (int *)(*(_DWORD *)v153 - 12);
                          if ( v156 != v122 )
                            v154 = (unsigned int *)(*(_DWORD *)v153 - 4);
                                v155 = __ldrex(v154);
                              while ( __strex(v155 - 1, v154) );
                              v155 = (*v154)--;
                            if ( v155 <= 0 )
                              j_j_j_j_j__ZdlPv_9_1(v156);
                          LODWORD(v153) = v153 + 4;
                        while ( (_DWORD)v153 != HIDWORD(v153) );
                        LODWORD(v153) = v319;
                      if ( (_DWORD)v153 )
                        operator delete((void *)v153);
                      v64 = v148;
                      v157 = (void *)(v318 - 12);
                      if ( (int *)(v318 - 12) != v122 )
                        v226 = (unsigned int *)(v318 - 4);
                        if ( &pthread_create )
                          __dmb();
                            v227 = __ldrex(v226);
                          while ( __strex(v227 - 1, v226) );
                          v227 = (*v226)--;
                        if ( v227 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v157);
                      v158 = (void *)(v317 - 12);
                      if ( (int *)(v317 - 12) != v122 )
                        v228 = (unsigned int *)(v317 - 4);
                            v229 = __ldrex(v228);
                          while ( __strex(v229 - 1, v228) );
                          v229 = (*v228)--;
                        if ( v229 <= 0 )
                          j_j_j_j_j__ZdlPv_9_1(v158);
                      goto LABEL_368;
                    v137 = v64;
                    sub_119C854(&v324, v282);
                    sub_119C854(&v325, v275);
                    v326 = 0;
                    v327 = 0;
                    v328 = 0;
                    v326 = (char *)operator new(8u);
                    v328 = v326 + 8;
                    v327 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                                     (int)&v324,
                                     (int)&v326,
                                     (int)v326);
                    UIPackError::UIPackError(&v329, 5, (unsigned __int64 *)&v326);
                    PackReport::addError<UIPackError>((int)v283, (int)&v329);
                    v329 = &off_26D9084;
                    v138 = v330;
                    if ( (_DWORD)v330 != HIDWORD(v330) )
                      do
                        v141 = (int *)(*(_DWORD *)v138 - 12);
                        if ( v141 != v122 )
                          v139 = (unsigned int *)(*(_DWORD *)v138 - 4);
                          if ( &pthread_create )
                            __dmb();
                            do
                              v140 = __ldrex(v139);
                            while ( __strex(v140 - 1, v139) );
                            v140 = (*v139)--;
                          if ( v140 <= 0 )
                            j_j_j_j_j__ZdlPv_9_1(v141);
                        LODWORD(v138) = v138 + 4;
                      while ( (_DWORD)v138 != HIDWORD(v138) );
                      LODWORD(v138) = v330;
                    if ( (_DWORD)v138 )
                      operator delete((void *)v138);
                    v142 = *(_QWORD *)&v326;
                    if ( v326 != v327 )
                        v145 = (int *)(*(_DWORD *)v142 - 12);
                        if ( v145 != v122 )
                          v143 = (unsigned int *)(*(_DWORD *)v142 - 4);
                              v144 = __ldrex(v143);
                            while ( __strex(v144 - 1, v143) );
                            v144 = (*v143)--;
                          if ( v144 <= 0 )
                            j_j_j_j_j__ZdlPv_9_1(v145);
                        LODWORD(v142) = v142 + 4;
                      while ( (_DWORD)v142 != HIDWORD(v142) );
                      LODWORD(v142) = v326;
                    if ( (_DWORD)v142 )
                      operator delete((void *)v142);
                    v64 = v137;
                    v146 = (void *)(v325 - 12);
                    if ( (int *)(v325 - 12) != v122 )
                      v222 = (unsigned int *)(v325 - 4);
                          v223 = __ldrex(v222);
                        while ( __strex(v223 - 1, v222) );
                        v223 = (*v222)--;
                      if ( v223 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v146);
                    v147 = (void *)(v324 - 12);
                    if ( (int *)(v324 - 12) != v122 )
                      v224 = (unsigned int *)(v324 - 4);
                          v225 = __ldrex(v224);
                        while ( __strex(v225 - 1, v224) );
                        v225 = (*v224)--;
                      if ( v225 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v147);
                    v126 = v118;
                    if ( !*(v347 - 3) )
                      goto LABEL_160;
LABEL_368:
                    v118 = v126;
                    v233 = v347 - 3;
                    if ( v347 - 3 != v122 )
                      v235 = (unsigned int *)(v347 - 1);
                          v236 = __ldrex(v235);
                        while ( __strex(v236 - 1, v235) );
                        v236 = (*v235)--;
                      if ( v236 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v233);
                    v234 = (void *)(v349 - 12);
                    if ( (int *)(v349 - 12) != v122 )
                      v237 = (unsigned int *)(v349 - 4);
                          v238 = __ldrex(v237);
                        while ( __strex(v238 - 1, v237) );
                        v238 = (*v237)--;
                      if ( v238 <= 0 )
                        j_j_j_j_j__ZdlPv_9_1(v234);
                    v117 = v122;
                    Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v352);
                  v245 = *(_QWORD *)&v353;
                  v246 = v64;
                  v247 = v353;
                  if ( (Json::Value **)v353 != v354 )
                    do
                      UIModification::applyModification(v247);
                      v247 = (UIModification *)((char *)v247 + 20);
                    while ( (UIModification *)HIDWORD(v245) != v247 );
                    v248 = v245;
                      v249 = *(void **)(v248 + 4);
                      if ( v249 )
                        operator delete(v249);
                      v248 += 20;
                    while ( HIDWORD(v245) != v248 );
                  v64 = v246;
                  v84 = (Json::Value *)&v302;
                  v85 = &v301;
                  v87 = v117;
                  i = v274;
                  if ( (_DWORD)v245 )
                    operator delete((void *)v245);
                }
              Json::Reader::getFormattedErrorMessages((Json::Reader *)&v299, (int)v86);
              v101 = sub_119CB38((const void **)&v299, 0, 0, (_BYTE *)1, 0xAu);
              v300 = (char *)*v101;
              *v101 = v87 + 3;
              v284 = v64;
              v102 = (void *)(v299 - 12);
              if ( (int *)(v299 - 12) != v87 )
                v89 = (unsigned int *)(v299 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    v90 = __ldrex(v89);
                  while ( __strex(v90 - 1, v89) );
                else
                  v90 = (*v89)--;
                if ( v90 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v102);
              sub_119C854(&v292, v282);
              sub_119C854(&v293, (int *)&v300);
              v294 = 0;
              v295 = 0;
              v296 = 0;
              v294 = (char *)operator new(8u);
              v296 = v294 + 8;
              v295 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                               (int)&v292,
                               (int)&v294,
                               (int)v294);
              UIPackError::UIPackError(&v297, 2, (unsigned __int64 *)&v294);
              PackReport::addError<UIPackError>((int)v283, (int)&v297);
              v297 = &off_26D9084;
              v103 = v298;
              if ( (_DWORD)v298 != HIDWORD(v298) )
                  v106 = (int *)(*(_DWORD *)v103 - 12);
                  if ( v106 != v87 )
                    v104 = (unsigned int *)(*(_DWORD *)v103 - 4);
                    if ( &pthread_create )
                      __dmb();
                        v105 = __ldrex(v104);
                      while ( __strex(v105 - 1, v104) );
                    else
                      v105 = (*v104)--;
                    if ( v105 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v106);
                  LODWORD(v103) = v103 + 4;
                while ( (_DWORD)v103 != HIDWORD(v103) );
                LODWORD(v103) = v298;
              if ( (_DWORD)v103 )
                operator delete((void *)v103);
              v107 = *(_QWORD *)&v294;
              if ( v294 != v295 )
                  v110 = (int *)(*(_DWORD *)v107 - 12);
                  if ( v110 != v87 )
                    v108 = (unsigned int *)(*(_DWORD *)v107 - 4);
                        v109 = __ldrex(v108);
                      while ( __strex(v109 - 1, v108) );
                      v109 = (*v108)--;
                    if ( v109 <= 0 )
                      j_j_j_j_j__ZdlPv_9_1(v110);
                  LODWORD(v107) = v107 + 4;
                while ( (_DWORD)v107 != HIDWORD(v107) );
                LODWORD(v107) = v294;
              if ( (_DWORD)v107 )
                operator delete((void *)v107);
              v64 = v284;
              v111 = (void *)(v293 - 12);
              if ( (int *)(v293 - 12) != v87 )
                v91 = (unsigned int *)(v293 - 4);
                    v92 = __ldrex(v91);
                  while ( __strex(v92 - 1, v91) );
                  v92 = (*v91)--;
                if ( v92 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v111);
              v112 = (void *)(v292 - 12);
              if ( (int *)(v292 - 12) != v87 )
                v93 = (unsigned int *)(v292 - 4);
                    v94 = __ldrex(v93);
                  while ( __strex(v94 - 1, v93) );
                  v94 = (*v93)--;
                if ( v94 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v112);
              v113 = v300 - 12;
              if ( (int *)(v300 - 12) != v87 )
                v114 = (unsigned int *)(v300 - 4);
                    v95 = __ldrex(v114);
                  while ( __strex(v95 - 1, v114) );
                  v95 = (*v114)--;
                if ( v95 <= 0 )
                  j_j_j_j_j__ZdlPv_9_1(v113);
LABEL_427:
              Json::Value::~Value((Json::Value *)v85);
              Json::Value::~Value(v84);
              v83 = *(_DWORD *)v63;
              v88 = v285;
            ++v88;
          while ( v88 < (*(_DWORD *)(v63 + 4) - v83) >> 3 );
        v251 = v309;
        while ( v251 )
          v256 = v251;
          v257 = *(_DWORD *)(v251 + 8);
          v251 = *(_DWORD *)v251;
          v258 = (void *)(v257 - 12);
          if ( (int *)(v257 - 12) != &dword_28898C0 )
            v252 = (unsigned int *)(v257 - 4);
                v253 = __ldrex(v252);
              while ( __strex(v253 - 1, v252) );
              v253 = (*v252)--;
            if ( v253 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v258);
          v259 = *(_DWORD *)(v256 + 4);
          v260 = (void *)(v259 - 12);
          if ( (int *)(v259 - 12) != &dword_28898C0 )
            v254 = (unsigned int *)(v259 - 4);
                v255 = __ldrex(v254);
              while ( __strex(v255 - 1, v254) );
              v255 = (*v254)--;
            if ( v255 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v260);
          operator delete((void *)v256);
        _aeabi_memclr4(ptr, 4 * v308);
        if ( ptr && &v313 != ptr )
          operator delete(ptr);
      }
      v262 = v315;
      v261 = v314;
      if ( v314 != v315 )
        do
          v265 = (int *)(*(_DWORD *)v261 - 12);
          if ( v265 != &dword_28898C0 )
            v263 = (unsigned int *)(*(_DWORD *)v261 - 4);
                v264 = __ldrex(v263);
              while ( __strex(v264 - 1, v263) );
              v264 = (*v263)--;
            if ( v264 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v265);
          v261 = (char *)v261 + 4;
        while ( v261 != v262 );
        v261 = v314;
      if ( v261 )
        operator delete(v261);
    }
    else
      reportParseError((const char **)(v64 + 4), (int)&v316);
    result = Json::Reader::~Reader((Json::Reader *)&v316);
  }
  return result;
}


UIResourcePackMergeStrategy *__fastcall UIResourcePackMergeStrategy::~UIResourcePackMergeStrategy(UIResourcePackMergeStrategy *this)
{
  UIResourcePackMergeStrategy *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26D9070;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  return v1;
}
